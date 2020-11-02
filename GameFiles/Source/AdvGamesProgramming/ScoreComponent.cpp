// Fill out your copyright notice in the Description page of Project Settings.


#include "ScoreComponent.h"
#include "Kismet/GameplayStatics.h"
#include "PlayerHud.h"

// Sets default values for this component's properties
UScoreComponent::UScoreComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UScoreComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
}


// Called every frame
void UScoreComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UScoreComponent::AddToScore(float Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Adding %f to score. Score = %f"), Value, Score)
	Score += Value;
	UpdateHUDScore();
}

void UScoreComponent::SubtractFromScore(float Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Removing %f to score. Score = %f"), Value, Score)
	Score -= Value;
	UpdateHUDScore();
}

void UScoreComponent::SetScore(float Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Setting scoreto %f"), Value)
	Score = Value;
	UpdateHUDScore();
}

void UScoreComponent::UpdateHUDScore()
{
	if (!PlayerHud)
	{
		PlayerHud = Cast<APlayerHud>(UGameplayStatics::GetPlayerController(GetWorld(), 0)->GetHUD());
	}

	if (PlayerHud)
	{
		PlayerHud->SetScoreText(Score);
	}
}