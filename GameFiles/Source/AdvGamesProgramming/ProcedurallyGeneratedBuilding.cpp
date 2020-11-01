// Fill out your copyright notice in the Description page of Project Settings.

#include "ProcedurallyGeneratedBuilding.h"
#include "Algo/Reverse.h"
#include "Net/UnrealNetwork.h"
#include "WeaponPickupSpawnerComponent.h"

static const float BASE_SIZE = 4.0f;

// Sets default values
AProcedurallyGeneratedBuilding::AProcedurallyGeneratedBuilding()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Getting Reference to Blueprint to be spawned
	static ConstructorHelpers::FObjectFinder<UBlueprint> PCGBuildingArchitype(TEXT("Blueprint'/Game/Blueprints/ProcedurallyGeneratedBuilding2BT.ProcedurallyGeneratedBuilding2BT'"));
	if (PCGBuildingArchitype.Object) {
		PCGBuilding = (UClass*)PCGBuildingArchitype.Object->GeneratedClass;
	}

	SetReplicates(true);
}

void AProcedurallyGeneratedBuilding::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AProcedurallyGeneratedBuilding, PerlinScale);
	DOREPLIFETIME(AProcedurallyGeneratedBuilding, PerlinRoughness);
	DOREPLIFETIME(AProcedurallyGeneratedBuilding, PerlinOffset);
	DOREPLIFETIME(AProcedurallyGeneratedBuilding, DivisionFactorX);
	DOREPLIFETIME(AProcedurallyGeneratedBuilding, DivisionFactorY);
	DOREPLIFETIME(AProcedurallyGeneratedBuilding, HeightGroundLift);
}

// Called when the game starts or when spawned
void AProcedurallyGeneratedBuilding::BeginPlay()
{
	Super::BeginPlay();

	//To prevent keep on calling 'GetWorld()' method which is from another class (processing optimization)
	World = GetWorld();

	//to prevent execution if size reference object is not set (which results a runtime error)
	bDoNotExecute = false;
	if (SizeReferenceTarget != nullptr) {
		Scale = SizeReferenceTarget->GetActorScale3D();
	}
	else {
		bDoNotExecute = true;
		UE_LOG(LogTemp, Warning, TEXT("The script did not execute as 'Size Reference Target' was missing."))
	}
}

// Called every frame
void AProcedurallyGeneratedBuilding::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Exception Handling. Check BeginPlay() for detail. & Runs only in server
	if (!bDoNotExecute && GetLocalRole() == ROLE_Authority) {
		if(bRandSpawnCity) {				//in case if random values are required
			DivisionFactorX =					//create random value ranged between given values from detail panel (buildings in a row)
				FMath::RandRange(RandRange_DivisionFactorX.X, RandRange_DivisionFactorX.Y);
			DivisionFactorY =					//create random value ranged between given values from detail panel (buildings in a column)
				FMath::RandRange(RandRange_DivisionFactorY.X, RandRange_DivisionFactorY.Y);
			bSpawnCity = true;					//trigger boolean
			bRandSpawnCity = false;				//un-trigger boolean
		}
		if (bSpawnCity) {					//in case if values are given manually
			PerlinOffset = FMath::RandRange(-10000.0f, 10000.0f);
												//for height adjustment based on perlin noise
			GenerateBuilding();					//generates buildings with values
			bSpawnCity = false;					//un-trigger boolean
			GenerateWeaponSpawnPoints();		//generate weapon spawn points which is an actor created by Jack Cooper
			AIManager->PopulateNodes();
			AIManager->CreateAgents();
		}
	}
}

void AProcedurallyGeneratedBuilding::OnBuildCity() {		//for replicated clients
	GenerateBuilding();					//generates buildings with values
	GenerateWeaponSpawnPoints();		//generate weapon spawn points which is an actor created by Jack Cooper
	AIManager->PopulateNodes();
	AIManager->CreateAgents();
}

void AProcedurallyGeneratedBuilding::GenerateBuilding()
{
	//if there was previous buildings spawned in the map, remove them
	for (AActor* Building : GridCells)
		if (Building != nullptr && Building->IsValidLowLevel())
			Building->Destroy();
	//since Destroy() does not remove item from TArray, empty it.
	//GC will still go on even though we lost reference to it
	GridCells.Empty();

	//distance the centre point will move per iteration
	float gapDistanceX = 100.0f * Scale.X / DivisionFactorX;		//x100 since unreal uses centimeter instead of meter
	float gapDistanceY = 100.0f * Scale.Y / DivisionFactorY;		//...

	//centre point of each iteration (firstly initialized with centre point of the land block named "Terrain")
	FVector pos = SizeReferenceTarget->GetActorLocation();

	//displace centre to initial position (x)
	pos.X -= gapDistanceX * 0.5f * (DivisionFactorX - 1);
	//displace centre to initial position (y)
	pos.Y -= gapDistanceY * 0.5f * (DivisionFactorY - 1);

	for (int i = 0; i < DivisionFactorY; ++i) {
		for (int j = 0; j < DivisionFactorX; ++j) {
			//Spawn building, but keep the reference to the spawned actor
			AActor* Building = World->SpawnActor<AActor>(PCGBuilding, pos, FRotator::ZeroRotator);

			//divide the width of the ground by given factor
			//divide it again with BASE_SIZE which is 4, since the texture is only extended when the size is multiple of 4
			//(otherwise the rest of the portion will be a plain concrete without windows)
			float x = Scale.X / DivisionFactorX / BASE_SIZE / 2.0f;
			float y = Scale.Y / DivisionFactorY / BASE_SIZE / 2.0f;
			//Height is being effected by a perlin noise. FMath::Abs() to prevent negative height;
			//HeightGroundLift is to prevent height being 0
			float z = FMath::Abs(FMath::PerlinNoise2D(FVector2D(float(j) * PerlinRoughness + PerlinOffset, float(i) * PerlinRoughness + PerlinOffset)) * PerlinScale) + (HeightGroundLift * 4);

			//Hand over those values to blueprint of this script
			Init(Building, x, y, z);
			
			//add building to the TArray
			GridCells.Add(Building);
			
			//increase x value for iteration
			pos.X += gapDistanceX;
		}
		//reset x values for iteration
		pos.X = SizeReferenceTarget->GetActorLocation().X;
		pos.X -= gapDistanceX * 0.5f * (DivisionFactorX - 1);
		//increase y value for iteration
		pos.Y += gapDistanceY;
	}
}

void AProcedurallyGeneratedBuilding::GenerateWeaponSpawnPoints()
{
	//if there was previous weapon spawner spawned in the map, remove them
	for (AActor* Spawner : WeaponSpawners)
		if (Spawner != nullptr && Spawner->IsValidLowLevel())
			Spawner->Destroy();
	//since Destroy() does not remove item from TArray, empty it.
	//GC will still go on even though we lost reference to it
	WeaponSpawners.Empty();

	//position variables to hand over to the appropriate methods
	FVector self;
	FVector top;
	FVector side;
	FVector diagonal;

	//iterate through TArray of buildings
	for (int i = 0; i < DivisionFactorY; ++i) {
		for (int j = 0; j < DivisionFactorX; ++j) {
			//if current iteration's building is not nullptr, initialize variable 'self'. if not, do not execute this iteration
			if (GridCells[i * DivisionFactorX + j] != nullptr)
				self = GridCells[i * DivisionFactorX + j]->GetActorLocation();
			else
				break;

			//if index to the building above the 'self' is not nullptr,
			if (i < DivisionFactorY - 1) {
				if (GridCells[(i + 1) * DivisionFactorX + j] != nullptr) {
					top = GridCells[(i + 1) * DivisionFactorX + j]->GetActorLocation();				//initialize variable 'top'
					GenerateTowards(self, top);														//and generate weapon spawner in between 'self' and 'top'
				}
			}

			//if index to the building at the side of the 'self' is not nullptr,
			if (j < DivisionFactorX - 1) {
				if (GridCells[i*DivisionFactorX + j + 1] != nullptr) {
					side = GridCells[i*DivisionFactorX + j + 1]->GetActorLocation();				//initialize variable 'side'
					GenerateTowards(self, side);													//and generate weapon spawner in between 'self' and 'side'
				}
			}

			//if index to the building at diagonally up to the 'self' is not nullptr, 
			if (i < DivisionFactorY - 1 && j < DivisionFactorX - 1) {
				if (GridCells[(i + 1) * DivisionFactorX + j + 1] != nullptr) {
					diagonal = GridCells[(i + 1) * DivisionFactorX + j + 1]->GetActorLocation();	//initialize variable 'diagonal'
					GenerateTowards(self, diagonal);												//and generate weapon spawner in between 'self' and 'diagonal'
				}
			}
		}
	}
}

void AProcedurallyGeneratedBuilding::GenerateTowards(FVector from, FVector to)
{
	FVector pos;
	FVector dir;

	dir = to - from;			//direction to 'to' from 'from' (with magnitude) (its not unit vector)
	pos = from + (dir / 2);		//spawn weapon spawner in a half-way distance from 'from' by 'dir'

	//spawn weapon spawner
	PickupManager->CreateSpawner(WeaponSpawner, pos);
	/*
	AActor* NewSpawner = World->SpawnActor<AActor>(WeaponSpawner, pos, FRotator::ZeroRotator);
	WeaponSpawners.Add(NewSpawner);

	//For actual Weapon spawning by Jack Cooper
	UWeaponPickupSpawnerComponent* Spawner = NewSpawner->FindComponentByClass<UWeaponPickupSpawnerComponent>();//->StartSpawn();
	
	//UE_LOG(LogTemp, Warning, TEXT("%s"), *NewSpawner->GetFName().ToString())

	if (Spawner)
	{
		Spawner->StartSpawn();
	}
	*/
}