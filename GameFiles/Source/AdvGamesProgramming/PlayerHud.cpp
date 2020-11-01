// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerHud.h"
#include "Blueprint/UserWidget.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"
#include "Components/Image.h"
#include "UObject/ConstructorHelpers.h"

APlayerHud::APlayerHud()
{
	static ConstructorHelpers::FClassFinder<UUserWidget> PlayerHudObject(TEXT("/Game/Widgets/PlayerHudWidget"));

	PlayerHudClass = PlayerHudObject.Class;

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
			//CrosshairImageBlock = Cast<UImage>(CurrentPlayerHudWidget->GetWidgetFromName(TEXT("ImgCrosshair")));
		}
	}
}

void APlayerHud::SetPlayerHealthBarPercent(float Percent)
{
	if (HealthProgressBar) {
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