// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NavigationNode.h"
#include "GameFramework/Character.h"
#include "AIManager.h"
#include <Perception/AIPerceptionComponent.h>
#include "HealthComponent.h"
#include "EnemyCharacter.generated.h"

UENUM()
enum class AgentState : uint8 {
	PATROL,
	ENGAGE,
	EVADE
};

UCLASS()
class ADVGAMESPROGRAMMING_API AEnemyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemyCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	TArray<ANavigationNode*> Path;
	ANavigationNode* CurrentNode;
	AAIManager* Manager;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere)
	AgentState CurrentAgentState;

	UAIPerceptionComponent* PerceptionComponent;
	UHealthComponent* HealthComponent;

	UPROPERTY(VisibleAnywhere)
	AActor* DetectedActor;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bCanSeeActor;

	UFUNCTION(BlueprintCallable)
	void AgentPatrol();
	void AgentEngage();
	void AgentEvade();

	UFUNCTION(BlueprintCallable)
	void EmptyPath();

	UFUNCTION(BlueprintCallable)
	void SensePlayer(AActor* ActorSensed, FAIStimulus Stimulus);

	UFUNCTION(BlueprintImplementableEvent)
	void Fire(FVector FireDirection);

	void MoveAlongPath();

};
