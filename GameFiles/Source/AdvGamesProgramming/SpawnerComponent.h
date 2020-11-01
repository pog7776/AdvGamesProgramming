// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/SphereComponent.h"
#include "Pickup.h"
#include "AIManagerNM.h"
#include "SpawnerComponent.generated.h"


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class ADVGAMESPROGRAMMING_API USpawnerComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	USpawnerComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
	UFUNCTION(BlueprintCallable)
	void StartSpawn();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Search")
		float Radius;

	USphereComponent* SearchRange;
		TArray<AActor*> OverlapActors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickup")
		TSubclassOf<class APickup> PickupClass;

	AAIManagerNM* AIManager;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Position")
		FVector SpawnOffset;

	APickup* CurrentPickup;

	void SpawnEnemy();

private:
	void CheckSurroundings();
	void CalculateSpawnChance(AActor* Actor);
	void CalculateRarity();
	void SpawnPickup();

	float SpawnChance;
};
