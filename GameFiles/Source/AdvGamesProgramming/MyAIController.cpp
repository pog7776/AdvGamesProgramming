// Fill out your copyright notice in the Description page of Project Settings.
#include "MyAIController.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "UObject/ConstructorHelpers.h"

AMyAIController::AMyAIController(FObjectInitializer const& object_initializer)
{
	static ConstructorHelpers::FObjectFinder<UBehaviorTree> obj(TEXT("BehaviorTree'/Game/BT/EnemyBT.EnemyBT'"));
	if (obj.Succeeded()) {
		btree = obj.Object;
	}
	btree_comp = object_initializer.CreateDefaultSubobject<UBehaviorTreeComponent>(this, TEXT("BehaviorTree"));
	blackboard = object_initializer.CreateDefaultSubobject<UBlackboardComponent>(this, TEXT("BlackboardComp"));
}

void AMyAIController::BeginPlay()
{
	Super::BeginPlay();
}

void AMyAIController::OnPossess(APawn * const pawn)
{
	Super::OnPossess(pawn);
	if (blackboard) {
		blackboard->InitializeBlackboard(*btree->BlackboardAsset);
	}
	RunBehaviorTree(btree);
	btree_comp->StartTree(*btree);
}

UBlackboardComponent * AMyAIController::get_blackboard() const
{
	return blackboard;
}
