// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthComponent.h"
#include "Engine/GameEngine.h"
#include "Net/UnrealNetwork.h"
#include "Kismet/GameplayStatics.h"
#include "PlayerHUD.h"
#include "PlayerCharacter.h"

// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	
	// ...
}


// Called when the game starts
void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	CurrentHealth = MaxHealth;
	// ...
	
}


// Called every frame
void UHealthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UHealthComponent::OnTakeDamage(float Damage)
{
	CurrentHealth -= Damage;
	UpdateHealthBar();
	if (CurrentHealth <= 0) 
	{
		CurrentHealth = 0;
		OnDeath();
	}
}

void UHealthComponent::OnDeath()
{

}

float UHealthComponent::HealthPercentageRemaining()
{
	return CurrentHealth / MaxHealth;
}

void UHealthComponent::UpdateHealthBar()
{
	//If the owner of this health component is an autonomous proxy
	//NOTE: Possible to use function GetOwnerRole() as well! If you look at the 
	if (GetOwner()->GetLocalRole() == ROLE_AutonomousProxy)
	{
		//Find the hud associated to this player
		APlayerHud* HUD = Cast<APlayerHud>(UGameplayStatics::GetPlayerController(GetWorld(), 0)->GetHUD());
		if (HUD)
		{
			//Update the progress bar widget on the players hud.
			HUD->SetPlayerHealthBarPercent(HealthPercentageRemaining());
		}
	}
}
