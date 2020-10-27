// Fill out your copyright notice in the Description page of Project Settings.
#include "MyAIControllerNM.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "UObject/ConstructorHelpers.h"

AMyAIControllerNM::AMyAIControllerNM(FObjectInitializer const& object_initializer)
{
	static ConstructorHelpers::FObjectFinder<UBehaviorTree> obj(TEXT("BehaviorTree'/Game/BTforNM/EnemyNMBT.EnemyNMBT'"));
	if (obj.Succeeded()) {
		btree = obj.Object;
	}
	btree_comp = object_initializer.CreateDefaultSubobject<UBehaviorTreeComponent>(this, TEXT("BehaviorTree"));
	blackboard = object_initializer.CreateDefaultSubobject<UBlackboardComponent>(this, TEXT("BlackboardComp"));
}

void AMyAIControllerNM::BeginPlay()
{
	Super::BeginPlay();
}

void AMyAIControllerNM::OnPossess(APawn * const pawn)
{
	Super::OnPossess(pawn);
	if (blackboard) {
		blackboard->InitializeBlackboard(*btree->BlackboardAsset);
	}
	RunBehaviorTree(btree);
	btree_comp->StartTree(*btree);
}

UBlackboardComponent * AMyAIControllerNM::get_blackboard() const
{
	return blackboard;
}