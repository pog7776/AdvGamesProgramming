// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerHud.h"
#include "Blueprint/UserWidget.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"
#include "Components/Image.h"
#include "Components/Button.h"
#include "UObject/ConstructorHelpers.h"

APlayerHud::APlayerHud()
{
	static ConstructorHelpers::FClassFinder<UUserWidget> PlayerHUDObject(TEXT("/Game/UI/PlayerHud"));

	PlayerHudClass = PlayerHUDObject.Class;

	//Make sure the PlayerHud class was found correctly
	if (PlayerHudClass)
	{
		//Need to check that the widget was created successfully
		CurrentPlayerHudWidget = CreateWidget<UUserWidget>(GetWorld(), PlayerHudClass);
		if (CurrentPlayerHudWidget)
		{
			//Draw the hud to the player controllers viewport
			CurrentPlayerHudWidget->AddToViewport();
			//Find the health bar and the ammo text block
			HealthProgressBar = Cast<UProgressBar>(CurrentPlayerHudWidget->GetWidgetFromName(TEXT("HealthBar")));
			AmmoTextBlock = Cast<UTextBlock>(CurrentPlayerHudWidget->GetWidgetFromName(TEXT("AmmoCounter")));
			//ScoreTextBlock = Cast<UTextBlock>(CurrentPlayerHudWidget->GetWidgetFromName(TEXT("ScoreText")));
			CrosshairImageBlock = Cast<UImage>(CurrentPlayerHudWidget->GetWidgetFromName(TEXT("ImgCrosshair")));
			DebugButtonBlock = Cast<UButton>(CurrentPlayerHudWidget->GetWidgetFromName(TEXT("DebugButton")));

			// Debug thing
			//DebugButtonBlock->SetVisibility(ESlateVisibility::Hidden);
			DebugButtonBlock->OnClicked.AddDynamic(this, &APlayerHud::DebugButton);
		}
	}
}

void APlayerHud::SetPlayerHealthBarPercent(float Percent)
{
	if (HealthProgressBar) {
		UE_LOG(LogTemp, Warning, TEXT("HealthBar set to: %f"), Percent)
		HealthProgressBar->SetPercent(Percent);
	}
}

void APlayerHud::SetAmmoText(int32 RoundsRemaining, int32 MagazineSize)
{
	
	if (AmmoTextBlock)
	{
		AmmoTextBlock->SetText(FText::FromString(FString::Printf(TEXT("%i/%i"), RoundsRemaining, MagazineSize)));
	}
	
}

void APlayerHud::SetScoreText(int32 Score)
{
	if (ScoreTextBlock)
	{
		ScoreTextBlock->SetText(FText::FromString(FString::Printf(TEXT("Score: %i"), Score)));
	}
}

void APlayerHud::DebugButton()
{
	SetPlayerHealthBarPercent(FMath::FRandRange(0, 1));
	SetScoreText(995486);
}