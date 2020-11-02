// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyAIControllerNM.h"
//#include <NavigationSystem.h>
#include "Perception/AIPerceptionComponent.h"
#include "HealthComponent.h"
#include "TeamComponent.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "EnemyCharacterNavMesh.generated.h"

UCLASS()
class ADVGAMESPROGRAMMING_API AEnemyCharacterNavMesh : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemyCharacterNavMesh();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//For Controller of itself
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AMyAIControllerNM* AIController;

	//For Behaviour Tree
	UPROPERTY(EditAnywhere, Category = "AI")
	UBehaviorTreeComponent* BehaviorTreeComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UBlackboardComponent* EnemyBlackboard;

	//For Sensing
	UAIPerceptionComponent* PerceptionComponent;
	UTeamComponent* TeamComponent;
	UPROPERTY(VisibleAnywhere)
	bool bSensed;
	UPROPERTY(VisibleAnywhere)
	bool bCanSeeActor;
	UFUNCTION(BlueprintCallable)
	bool GetBSensed() const;
	UFUNCTION(BlueprintCallable)
	bool GetBCanSeeActor() const;
	UFUNCTION(BlueprintCallable)
	void SensePlayer(AActor* ActorSensed, FAIStimulus Stimulus);

	//For Combat
	UHealthComponent* HealthComponent;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	AActor* DetectedActor;
	UFUNCTION(BlueprintCallable)
	void Trigger();
	UFUNCTION(BlueprintCallable)
	float CalcKillApprox();

	UFUNCTION(BlueprintImplementableEvent)
	void Attack();
	UFUNCTION(BlueprintImplementableEvent)
	void Die();
	//void Fire(FVector FireDirection);

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	bool bIsClient;

	/*
	//For NavMesh Movement
	UNavigationSystemV1 *NavSys;
	FVector TargetPoint;

	//For Path Creation
	UFUNCTION(BlueprintCallable)
	void CreatePathPatrol();
	UFUNCTION(BlueprintCallable)
	void CreatePathEngage();
	UFUNCTION(BlueprintCallable)
	void CreatePathEngageSpecific();
	UFUNCTION(BlueprintCallable)
	void CreatePathEvade();
	UFUNCTION(BlueprintCallable)
	void EmptyPath();

	//For Movement
	UFUNCTION(BlueprintCallable)
	void AllowMoveAlongPath();
	void MoveAlongPath();
	*/

	/*
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		TArray<ANavigationNode*> Path;
	ANavigationNode* CurrentNode;
	*/

	//UFUNCTION(BlueprintImplementableEvent)
	//bool TestFunction();
};
