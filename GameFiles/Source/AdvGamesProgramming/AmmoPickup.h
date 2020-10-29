// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pickup.h"
#include "AmmoPickup.generated.h"

/**
 * 
 */
UCLASS()
class ADVGAMESPROGRAMMING_API AAmmoPickup : public APickup
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintImplementableEvent)
		void OnPickup(AActor* ActorThatPickedUp) override;

	UFUNCTION(BlueprintCallable)
		void OnGenerate() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 AmmoCount;
};
