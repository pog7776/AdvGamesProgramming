// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnerManager.h"
#include "SpawnerComponent.h"
#include "TimerManager.h"

// Sets default values
ASpawnerManager::ASpawnerManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASpawnerManager::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ASpawnerManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASpawnerManager::StartTimer()
{
	GetWorldTimerManager().SetTimer(SpawnTimer, this, &ASpawnerManager::TrySpawn, FrequencyOfSpawns, true, 0.0f);
}

void ASpawnerManager::CreateSpawner(TSubclassOf<class AActor> SpawnerClass, FVector Location)
{
	AActor* NewSpawner = GetWorld()->SpawnActor<AActor>(SpawnerClass, Location, FRotator::ZeroRotator);
	USpawnerComponent* Spawner = NewSpawner->FindComponentByClass<USpawnerComponent>();//->StartSpawn();
	AllSpawners.Add(Spawner);

	//UE_LOG(LogTemp, Warning, TEXT("%s"), *NewSpawner->GetFName().ToString())

	if (Spawner)
	{
		Spawner->AIManager = AIManager;
		//Spawner->StartSpawn();
	}
}

void ASpawnerManager::TrySpawn()
{
	for (int32 i = 0; i < AllSpawners.Num(); i++)
	{
		AllSpawners[i]->StartSpawn();
	}
}
