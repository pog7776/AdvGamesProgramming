// Fill out your copyright notice in the Description page of Project Settings.

#include "AIManagerNM.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "EnemyCharacterNavMesh.h"

// Sets default values
AAIManagerNM::AAIManagerNM()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UBlueprint> SpawnPointArchitype(TEXT("Blueprint'/Game/Blueprints/SpawnPontBlueprint.SpawnPontBlueprint'"));
	if (SpawnPointArchitype.Object) {
		SpawnPoint = (UClass*)SpawnPointArchitype.Object->GeneratedClass;
	}
}

// Called when the game starts or when spawned
void AAIManagerNM::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AAIManagerNM::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AAIManagerNM::PopulateNodes()
{
	AllNodes.Empty();
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), SpawnPoint, AllNodes);
}

void AAIManagerNM::CreateAgents()
{
	for (int32 i = 0; i < NumAI; i++)
	{
		int32 RandIndex = FMath::RandRange(0, AllNodes.Num() - 1);
		int32 RandIndex2 = FMath::RandRange(0, AgentToSpawn.Num() - 1);
		AEnemyCharacterNavMesh* Agent =
			GetWorld()->SpawnActor<AEnemyCharacterNavMesh>(
				AgentToSpawn[RandIndex2],
				AllNodes[RandIndex]->GetActorLocation() + FVector(0.0f, 0.0f, 100.0f),
				FRotator(0.f, 0.f, 0.f));
		AllAgents.Add(Agent);
	}
}

void AAIManagerNM::CreateAgents(FVector spawnPos)
{
	int32 RandIndex2 = FMath::RandRange(0, AgentToSpawn.Num() - 1);
	AEnemyCharacterNavMesh* Agent =
		GetWorld()->SpawnActor<AEnemyCharacterNavMesh>(
			AgentToSpawn[RandIndex2],
			spawnPos,
			FRotator(0.f, 0.f, 0.f));
	AllAgents.Add(Agent);
}