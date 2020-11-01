// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pickup.h"
#include "SpawnerComponent.h"
#include "GameFramework/Actor.h"
#include "SpawnerManager.generated.h"

UCLASS()
class ADVGAMESPROGRAMMING_API ASpawnerManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpawnerManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	TArray<USpawnerComponent*> AllSpawners;
	FTimerHandle SpawnTimer;

	void TrySpawn();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void CreateSpawner(TSubclassOf<class AActor> SpawnerClass, FVector Location);
	void StartTimer();

	UPROPERTY(EditAnywhere, Category = AI, meta = (AllowPrivateAccess = "true"))
		AAIManagerNM* AIManager;							//AI Manager (has to be given from detail panel)

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FrequencyOfSpawns;

};
