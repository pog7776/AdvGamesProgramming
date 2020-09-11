// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NavigationNode.h"
#include "GameFramework/Character.h"
#include "AIManager.h"
#include "MyAIController.h"
#include <Perception/AIPerceptionComponent.h>
#include "HealthComponent.h"
#include "TeamComponent.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
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

private:
	bool bAllowedMoveAlongPath;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	AAIManager* Manager;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TArray<ANavigationNode*> Path;
	ANavigationNode* CurrentNode;


	//For Sensing
	UAIPerceptionComponent* PerceptionComponent;
	UTeamComponent* TeamComponent;
	UPROPERTY(VisibleAnywhere)
	bool bSensed;
	UFUNCTION(BlueprintCallable)
	bool GetBSensed() const;
	UPROPERTY(VisibleAnywhere)
	bool bCanSeeActor;
	UFUNCTION(BlueprintCallable)
	bool GetBCanSeeActor() const;
	UFUNCTION(BlueprintCallable)
	void SensePlayer(AActor* ActorSensed, FAIStimulus Stimulus);

	//For Path Creation
	UFUNCTION(BlueprintCallable)
	void CreatePathPatrol();
	UFUNCTION(BlueprintCallable)
	void CreatePathEngage();
	UFUNCTION(BlueprintCallable)
	void CreatePathEvade();
	UFUNCTION(BlueprintCallable)
	void EmptyPath();

	//For Movement
	UFUNCTION(BlueprintCallable)
	void AllowMoveAlongPath();
	void MoveAlongPath();

	//For Combat
	UHealthComponent* HealthComponent;
	UPROPERTY(VisibleAnywhere)
	AActor* DetectedActor;
	UFUNCTION(BlueprintCallable)
	void Trigger();
	UFUNCTION(BlueprintImplementableEvent)
	void Fire(FVector FireDirection);
	UFUNCTION(BlueprintCallable)
	float CalcKillApprox();

	UPROPERTY(EditAnywhere, Category = "AI")
	UBehaviorTreeComponent* BehaviorTreeComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UBlackboardComponent* EnemyBlackboard;

	//UFUNCTION(BlueprintImplementableEvent)
	//bool TestFunction();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AMyAIController* AIController;

};
