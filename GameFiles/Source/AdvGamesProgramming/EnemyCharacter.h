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

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TArray<ANavigationNode*> Path;

	ANavigationNode* CurrentNode;
	AAIManager* Manager;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere)
	AgentState CurrentAgentState;

	UAIPerceptionComponent* PerceptionComponent;
	UHealthComponent* HealthComponent;
	UTeamComponent* TeamComponent;

	UPROPERTY(VisibleAnywhere)
	AActor* DetectedActor;

	UPROPERTY(VisibleAnywhere)
	bool bCanSeeActor;

	UFUNCTION(BlueprintCallable)
	void CreatePathPatrol();
	UFUNCTION(BlueprintCallable)
	void CreatePathEngage();
	UFUNCTION(BlueprintCallable)
	void CreatePathEvade();
	UFUNCTION(BlueprintCallable)
	void AllowMoveAlongPath();
	void MoveAlongPath();

	UFUNCTION(BlueprintCallable)
	void EmptyPath();

	UFUNCTION(BlueprintCallable)
	void Trigger();

	UFUNCTION(BlueprintCallable)
	void SensePlayer(AActor* ActorSensed, FAIStimulus Stimulus);

	UFUNCTION(BlueprintImplementableEvent)
	void Fire(FVector FireDirection);

	UFUNCTION(BlueprintCallable)
	bool GetBCanSeeActor() const;

	UPROPERTY(EditAnywhere, Category = "AI")
	UBehaviorTreeComponent* BehaviorTreeComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UBlackboardComponent* EnemyBlackboard;

	//UFUNCTION(BlueprintImplementableEvent)
	//bool TestFunction();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AMyAIController* AIController;

};
