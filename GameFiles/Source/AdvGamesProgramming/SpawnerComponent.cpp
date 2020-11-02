// Fill out your copyright notice in the Description page of Project Settings.

#include "SpawnerComponent.h"
#include "EnemyCharacter.h"
#include "Pickup.h"
#include "WeaponPickup.h"
#include "TeamComponent.h"
#include "AmmoPickup.h"

// Sets default values for this component's properties
USpawnerComponent::USpawnerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void USpawnerComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...

	SearchRange = GetOwner()->FindComponentByClass<USphereComponent>();
	SearchRange->SetSphereRadius(Radius);
	//UE_LOG(LogTemp, Warning, TEXT("SearchRange: %f"), SearchRange->GetScaledSphereRadius())
	SpawnChance = 100;
	CheckSurroundings();
	SpawnPickup();
}


// Called every frame
void USpawnerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...

}

void USpawnerComponent::StartSpawn()
{
	if (GetOwner()->GetLocalRole() == ROLE_Authority)
	{
		SearchRange = GetOwner()->FindComponentByClass<USphereComponent>();
		SearchRange->SetSphereRadius(Radius);
		//UE_LOG(LogTemp, Warning, TEXT("SearchRange: %f"), SearchRange->GetScaledSphereRadius())
		SpawnChance = 100;
		CheckSurroundings();
		SpawnPickup();
		//SpawnEnemy();
	}
}

void USpawnerComponent::CheckSurroundings()
{
	// Get a list of all nearby Actors
	SearchRange->GetOverlappingActors(OverlapActors);
	OverlapActors.Remove(GetOwner());

	// Handle other spawn points first
	for (AActor* Actor : OverlapActors)
	{
		if (Actor->IsA(AWeaponPickup::StaticClass()))
		{
			CalculateSpawnChance(Actor);
			OverlapActors.Remove(Actor);
		}
	}

	// Handle all other actors
	for (AActor* Actor : OverlapActors)
	{
		CalculateSpawnChance(Actor);
	}

}

void USpawnerComponent::CalculateSpawnChance(AActor* Actor)
{
	// If the Actor is a WeaponPickup
	if (Actor->IsA(AAmmoPickup::StaticClass()))
	{
		UE_LOG(LogTemp, Warning, TEXT("%s - Near Ammo | Chance = %f/2"), *(GetOwner()->GetFName().ToString()), SpawnChance)
			SpawnChance /= 2;
	}

	// If Actor is unfriendly
	if (Actor->IsA(APawn::StaticClass()) && (SpawnChance + Actor->FindComponentByClass<UTeamComponent>()->ThreatValue) <= 100)
	{
		// If the actor is unfriendly and if so add spawn chance (Risk)
		if (Actor->FindComponentByClass<UTeamComponent>()->CheckUnfriendly(GetOwner()->FindComponentByClass<UTeamComponent>()->OwnedFactions))
		{
			UE_LOG(LogTemp, Warning, TEXT("%s - Near Enemy | Chance = %f + %f"), *(GetOwner()->GetFName().ToString()), SpawnChance, Actor->FindComponentByClass<UTeamComponent>()->ThreatValue)
				SpawnChance += Actor->FindComponentByClass<UTeamComponent>()->ThreatValue;
		}
	}
	else if (Actor->IsA(APawn::StaticClass()) && (SpawnChance + Actor->FindComponentByClass<UTeamComponent>()->ThreatValue) >= 100)
	{
		SpawnChance = 100;
	}
}

void USpawnerComponent::CalculateRarity()
{

}

void USpawnerComponent::SpawnPickup()
{
	// Roll and see if the pickup should spawn
	float Roll = FMath::RandRange(0, 100);
	if (Roll <= SpawnChance)
	{
		if (CurrentPickup)
		{
			CurrentPickup->Destroy();
			//CurrentPickup = NULL;
		}
		UE_LOG(LogTemp, Warning, TEXT("PICKUP SPAWN: %s - Roll: %f | Chance: %f -- Success"), *(GetOwner()->GetFName().ToString()), Roll, SpawnChance)
			// Spawn the pickup
			CurrentPickup = GetWorld()->SpawnActor<APickup>(PickupClass, GetOwner()->GetActorLocation() + SpawnOffset, FRotator::ZeroRotator);
		//TODO Handle previous pickup
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("PICKUP SPAWN: %s - Roll: %f | Chance: %f -- Fail"), *(GetOwner()->GetFName().ToString()), Roll, SpawnChance)
	}
}

void USpawnerComponent::SpawnEnemy()
{
	if (GetOwner()->GetLocalRole() == ROLE_Authority)
	{
		// Roll and see if the Enemy should spawn
		float Roll = FMath::RandRange(0, 100);
		if (Roll <= SpawnChance && AIManager->AllAgents.Num() < AIManager->NumAI)
		{
			UE_LOG(LogTemp, Warning, TEXT("ENEMY SPAWN: %s - Roll: %f | Chance: %f -- Success"), *(GetOwner()->GetFName().ToString()), Roll, SpawnChance)
				// Spawn the enemy
				//CurrentPickup = GetWorld()->SpawnActor<APickup>(PickupClass, GetOwner()->GetActorLocation() + SpawnOffset, FRotator::ZeroRotator);
				AIManager->CreateAgents(GetOwner()->GetActorLocation() + SpawnOffset);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("ENEMY SPAWN: %s - Roll: %f | Chance: %f -- Fail"), *(GetOwner()->GetFName().ToString()), Roll, SpawnChance)
		}
	}
}