// Fill out your copyright notice in the Description page of Project Settings.


#include "PickupManager.h"
#include "SpawnerComponent.h"

// Sets default values
APickupManager::APickupManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APickupManager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APickupManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APickupManager::CreateSpawner(TSubclassOf<class AActor> SpawnerClass, FVector Location)
{
	AActor* NewSpawner = GetWorld()->SpawnActor<AActor>(SpawnerClass, Location, FRotator::ZeroRotator);
	USpawnerComponent* Spawner = NewSpawner->FindComponentByClass<USpawnerComponent>();//->StartSpawn();
	AllSpawners.Add(Spawner);

	//UE_LOG(LogTemp, Warning, TEXT("%s"), *NewSpawner->GetFName().ToString())

	if (Spawner)
	{
		Spawner->StartSpawn();
	}
}

