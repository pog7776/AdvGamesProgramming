// Fill out your copyright notice in the Description page of Project Settings.

#include "WeaponPickupSpawnerComponent.h"
#include "EnemyCharacter.h"
#include "Pickup.h"
#include "WeaponPickup.h"

// Sets default values for this component's properties
UWeaponPickupSpawnerComponent::UWeaponPickupSpawnerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UWeaponPickupSpawnerComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...

	SearchRange = GetOwner()->FindComponentByClass<USphereComponent>();
	SearchRange->SetSphereRadius(Radius);
	UE_LOG(LogTemp, Warning, TEXT("SearchRange: %f"), SearchRange->GetScaledSphereRadius())
	SpawnChance = 100;
	//CheckSurroundings();
	//SpawnPickup();
}


// Called every frame
void UWeaponPickupSpawnerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...

}

void UWeaponPickupSpawnerComponent::StartSpawn()
{
	SearchRange = GetOwner()->FindComponentByClass<USphereComponent>();
	SearchRange->SetSphereRadius(Radius);
	UE_LOG(LogTemp, Warning, TEXT("SearchRange: %f"), SearchRange->GetScaledSphereRadius())
	SpawnChance = 100;
	CheckSurroundings();
	SpawnPickup();
}

void UWeaponPickupSpawnerComponent::CheckSurroundings()
{
	SearchRange->GetOverlappingActors(OverlapActors);

	for (AActor* Actor : OverlapActors)
	{
		if (Actor == GetOwner()) {
			OverlapActors.Remove(Actor);
		}
		else
		{
			FString Name = Actor->GetName();
			UE_LOG(LogTemp, Warning, TEXT("ActorFound: %s"), *Name)
			CalculateSpawnChance(Actor);
		}
	}
}

void UWeaponPickupSpawnerComponent::CalculateSpawnChance(AActor* Actor)
{
	//if (Actor->IsA(UWeaponSpawnerComponent::StaticClass()))
	/*
	UWeaponPickupSpawnerComponent* PickupComp = Actor->FindComponentByClass<UWeaponPickupSpawnerComponent>();
	if (PickupComp != nullptr)
	{
		SpawnChance /= 2;
	}
	*/

	if (Actor->IsA(AWeaponPickup::StaticClass()))
	{
		SpawnChance /= 2;
	}

	if (Actor->IsA(AEnemyCharacter::StaticClass()))
	{
		SpawnChance += 10;
	}
}

void UWeaponPickupSpawnerComponent::CalculateRarity()
{

}

void UWeaponPickupSpawnerComponent::SpawnPickup()
{
	// Roll and see if the pickup should spawn
	float Roll = FMath::RandRange(0, 100);
	UE_LOG(LogTemp, Warning, TEXT("%s - Roll: %f | Chance: %f"), *(GetOwner()->GetFName().ToString()), Roll, SpawnChance)
	if (Roll < SpawnChance)
	{
		// Spawn the pickup
		APickup* WeaponPickup = GetWorld()->SpawnActor<APickup>(PickupClass, GetOwner()->GetActorLocation() + SpawnOffset, FRotator::ZeroRotator);
	}
}