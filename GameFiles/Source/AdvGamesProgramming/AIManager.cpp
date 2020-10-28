// Fill out your copyright notice in the Description page of Project Settings.


#include "AIManager.h"
#include "EngineUtils.h"
#include "EnemyCharacter.h"
#include "Engine/World.h"
#include "Math/UnrealMathUtility.h"

// Sets default values
AAIManager::AAIManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAIManager::BeginPlay()
{
	Super::BeginPlay();
	
	PopulateNodes();
	CreateAgents();
}

// Called every frame
void AAIManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

TArray<ANavigationNode*> AAIManager::GeneratePath(ANavigationNode* StartNode, ANavigationNode* EndNode)
{

	TArray<ANavigationNode*> OpenSet;
	for (ANavigationNode* Node : AllNodes)
	{
		Node->GScore = TNumericLimits<float>::Max();
	}

	StartNode->GScore = 0;
	StartNode->HScore = FVector::Distance(StartNode->GetActorLocation(), EndNode->GetActorLocation());

	OpenSet.Add(StartNode);

	while (OpenSet.Num() > 0)
	{
		int32 IndexLowestFScore = 0;
		for (int32 i = 1; i < OpenSet.Num(); i++)
		{
			if (OpenSet[i]->FScore() < OpenSet[IndexLowestFScore]->FScore())
			{
				IndexLowestFScore = i;
			}
		}
		ANavigationNode* CurrentNode = OpenSet[IndexLowestFScore];

		OpenSet.Remove(CurrentNode);

		if (CurrentNode == EndNode) {
			TArray<ANavigationNode*> Path;
			Path.Push(EndNode);
			CurrentNode = EndNode;
			while (CurrentNode != StartNode)
			{
				CurrentNode = CurrentNode->CameFrom;
				Path.Add(CurrentNode);
			}
			return Path;
		}

		for (ANavigationNode* ConnectedNode : CurrentNode->ConnectedNodes)
		{
			float TentativeGScore = CurrentNode->GScore + FVector::Distance(CurrentNode->GetActorLocation(), ConnectedNode->GetActorLocation());
			if (TentativeGScore < ConnectedNode->GScore)
			{
				ConnectedNode->CameFrom = CurrentNode;
				ConnectedNode->GScore = TentativeGScore;
				ConnectedNode->HScore = FVector::Distance(ConnectedNode->GetActorLocation(), EndNode->GetActorLocation());
				if (!OpenSet.Contains(ConnectedNode))
				{
					OpenSet.Add(ConnectedNode);
				}
			}
		}
	}

	//If it leaves this loop without finding the end node then return an empty path.
	UE_LOG(LogTemp, Error, TEXT("NO PATH FOUND"));
	return TArray<ANavigationNode*>();
}

void AAIManager::PopulateNodes()
{
	for (TActorIterator<ANavigationNode> It(GetWorld()); It; ++It)
	{
		AllNodes.Add(*It);
	}
}

void AAIManager::CreateAgents()
{
	for (int32 i = 0; i < NumAI; i++)
	{
		int32 RandIndex = FMath::RandRange(0, AllNodes.Num()-1);
		AEnemyCharacter* Agent = GetWorld()->SpawnActor<AEnemyCharacter>(AgentToSpawn, AllNodes[RandIndex]->GetActorLocation(), FRotator(0.f, 0.f, 0.f));
		Agent->Manager = this;
		Agent->CurrentNode = AllNodes[RandIndex];
		AllAgents.Add(Agent);
	}
}

ANavigationNode* AAIManager::FindNearestNode(const FVector& Location)
{
	// Declare NavNode pointer
	ANavigationNode* NearestNode = nullptr;

	// Set the closest node value to infinite so that the first node will be closer.
	float NearestDistance = TNumericLimits<float>::Max();

	//Loop through the nodes and find the nearest one in distance
	for (ANavigationNode* CurrentNode : AllNodes)
	{
		// Get the distance between the desired location and the current node's location (where we are in the list of nodes)
		float CurrentNodeDistance = FVector::Distance(Location, CurrentNode->GetActorLocation());

		// If it finds a node that is closer than the node stored in Nearest node
		// Set the NearestNode to the current node and take note of it's distance in NearestDistance.
		if (CurrentNodeDistance < NearestDistance)
		{
			NearestDistance = CurrentNodeDistance;
			NearestNode = CurrentNode;
		}
	}
	UE_LOG(LogTemp, Error, TEXT("Nearest Node: %s"), *NearestNode->GetName())
	
	// Return the node closest to the given location.
	return NearestNode;

	// If there are lots of nodes in AllNodes, this could take a while.
}

ANavigationNode* AAIManager::FindNearNode(const FVector& Location)
{
	//Get Nearest Node First
	ANavigationNode* NearestNode = FindNearestNode(Location);
	ANavigationNode* NearNode = NearestNode->ConnectedNodes[FMath::RandRange(0, NearestNode->ConnectedNodes.Num())];
	ANavigationNode* ABitFarNode = NearNode->ConnectedNodes[FMath::RandRange(0, NearNode->ConnectedNodes.Num())];
	return ABitFarNode;
}

ANavigationNode* AAIManager::FindFurthestNode(const FVector& Location)
{
	ANavigationNode* FurthestNode = nullptr;
	float FurthestDistance = 0.0f;
	//Loop through the nodes and find the nearest one in distance
	for (ANavigationNode* CurrentNode : AllNodes)
	{
		float CurrentNodeDistance = FVector::Distance(Location, CurrentNode->GetActorLocation());
		if (CurrentNodeDistance > FurthestDistance)
		{
			FurthestDistance = CurrentNodeDistance;
			FurthestNode = CurrentNode;
		}
	}

	UE_LOG(LogTemp, Error, TEXT("Furthest Node: %s"), *FurthestNode->GetName())
	return FurthestNode;
}

