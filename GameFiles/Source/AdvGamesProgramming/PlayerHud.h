// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "PlayerHud.generated.h"

/**
 * 
 */
UCLASS()
class ADVGAMESPROGRAMMING_API APlayerHud : public AHUD
{
	GENERATED_BODY()

public:
	APlayerHud();

	void SetPlayerHealthBarPercent(float Percent);

	UFUNCTION(BlueprintCallable)
	void SetAmmoText(int32 RoundsRemaining, int32 MagazineSize);
	void SetScoreText(float Score);
	void SetGameOver();
	void SetTimerText(float Time);

private:
	TSubclassOf<class UUserWidget> PlayerHudClass;
	UUserWidget* CurrentPlayerHudWidget;
	class UProgressBar* HealthProgressBar;
	class UTextBlock* AmmoTextBlock;
	class UTextBlock* ScoreTextBlock;
	//class UTextBlock* BigScore;
	class UTextBlock* TimerTextBlock;
	class UTextBlock* GameOver;
	class UImage* CrosshairImageBlock;
	class UButton* DebugButtonBlock;

	UFUNCTION()
	void DebugButton();
	
};
