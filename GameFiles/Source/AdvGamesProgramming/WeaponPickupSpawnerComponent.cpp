// Fill out your copyright notice in the Description page of Project Settings.

#include "WeaponPickupSpawnerComponent.h"

// Sets default values for this component's properties
UWeaponPickupSpawner::UWeaponPickupSpawner()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UWeaponPickupSpawner::BeginPlay()
{
	Super::BeginPlay();

	// ...

	SearchRange = GetOwner()->FindComponentByClass<USphereComponent>();
	SearchRange->SetSphereRadius(Radius);
	UE_LOG(LogTemp, Warning, TEXT("SearchRange: %f"), SearchRange->GetScaledSphereRadius())
		CheckSurroundings();
}


// Called every frame
void UWeaponPickupSpawner::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...

}

void UWeaponPickupSpawner::CheckSurroundings()
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
		}
	}
}

