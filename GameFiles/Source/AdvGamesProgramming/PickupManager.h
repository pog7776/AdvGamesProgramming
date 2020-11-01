// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pickup.h"
#include "SpawnerComponent.h"
#include "GameFramework/Actor.h"
#include "PickupManager.generated.h"

UCLASS()
class ADVGAMESPROGRAMMING_API APickupManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickupManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	TArray<USpawnerComponent*> AllSpawners;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void CreateSpawner(TSubclassOf<class AActor> SpawnerClass, FVector Location);

};
