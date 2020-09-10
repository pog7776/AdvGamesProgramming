// Fill out your copyright notice in the Description page of Project Settings.


#include "TeamComponent.h"

// Sets default values for this component's properties
UTeamComponent::UTeamComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UTeamComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UTeamComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

// Returns true if the actor is friendly towards the given Team
bool UTeamComponent::CheckFriendly(int32 Team)
{
	return FriendlyFactions.Contains(Team);
}

// Returns true if the actor is unfriendly towards the given Team
bool UTeamComponent::CheckUnfriendly(int32 Team)
{
	return UnfriendlyFactions.Contains(Team);
}

// Returns true if the actor is friendly towards any of the given Teams
bool UTeamComponent::CheckFriendly(TArray<int32> TeamList)
{
	for (int32 i = 0; i < TeamList.Num(); i++)
	{
		if (FriendlyFactions.Contains(TeamList[i]))
		{
			return true;
		}
	}
	return false;
}

// Returns true if the actor is unfriendly towards any of the given Teams
bool UTeamComponent::CheckUnfriendly(TArray<int32> TeamList)
{
	for (int32 i = 0; i < TeamList.Num(); i++)
	{
		if (UnfriendlyFactions.Contains(TeamList[i]))
		{
			return true;
		}
	}
	return false;
}

