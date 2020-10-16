// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TeamComponent.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ADVGAMESPROGRAMMING_API UTeamComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTeamComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Team")
		TArray<int> OwnedFactions;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Team")
		TArray<int> FriendlyFactions;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Team")
		TArray<int> UnfriendlyFactions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Threat")
		float ThreatValue;

	bool CheckFriendly(int32 Team);
	bool CheckUnfriendly(int32 Team);

	bool CheckFriendly(TArray<int32> TeamList);
	bool CheckUnfriendly(TArray<int32> TeamList);
		
};
