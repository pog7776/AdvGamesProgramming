// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "AIManager.h"
#include "MyAIController.generated.h"

UCLASS()
class ADVGAMESPROGRAMMING_API AMyAIController : public AAIController
{
	GENERATED_BODY()

public:
	AMyAIController(FObjectInitializer const& object_initializer = FObjectInitializer::Get());
	class UBlackboardComponent* get_blackboard() const;
protected:
	void BeginPlay() override;
	void OnPossess(APawn* const pawn) override;

private:
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "AI", meta = (AllowPrivateAccess = "true"))
		class UBehaviorTreeComponent* btree_comp;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "AI", meta = (AllowPrivateAccess = "true"))
		class UBehaviorTree* btree;
	class UBlackboardComponent* blackboard;
};
