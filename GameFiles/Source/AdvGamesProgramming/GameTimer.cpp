// Fill out your copyright notice in the Description page of Project Settings.


#include "GameTimer.h"
#include "TimerManager.h"
#include "Kismet\GameplayStatics.h"
#include "PlayerHud.h"
#include "ScoreComponent.h"

// Sets default values
AGameTimer::AGameTimer()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGameTimer::BeginPlay()
{
	Super::BeginPlay();

	CurrentTime = TimerLength;
	//StartTimer();

}

// Called every frame
void AGameTimer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGameTimer::StartTimer()
{
	GetWorldTimerManager().SetTimer(CountTimer, this, &AGameTimer::CountDown, 1.0, true, 0.0f);
}

void AGameTimer::CountDown()
{
	CurrentTime--;

	APlayerHud* HUD = Cast<APlayerHud>(UGameplayStatics::GetPlayerController(this, 0)->GetHUD());
	HUD->SetTimerText(CurrentTime);

	if (CurrentTime <= 0)
	{
		EndGame();
	}
}

void AGameTimer::EndGame()
{
	UGameplayStatics::GetPlayerController(this, 0)->SetPause(true);


	APlayerHud* HUD = Cast<APlayerHud>(UGameplayStatics::GetPlayerController(this, 0)->GetHUD());
	//UScoreComponent* ScoreComponent = Cast<UScoreComponent>(UGameplayStatics::GetPlayerController(this, 0)->GetComponentByClass<UScoreComponent>());
	//HUD->SetBigScore(ScoreComponent.Score);
	HUD->SetGameOver();
}