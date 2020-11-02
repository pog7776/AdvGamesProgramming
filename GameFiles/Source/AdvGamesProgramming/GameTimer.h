// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameTimer.generated.h"

UCLASS()
class ADVGAMESPROGRAMMING_API AGameTimer : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGameTimer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void StartTimer();

	UPROPERTY(EditAnywhere)
	float TimerLength;

private:
	float CurrentTime;
	FTimerHandle CountTimer;

	void CountDown();
	void EndGame();

};
