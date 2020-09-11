 // Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyCharacter.h"
#include "EngineUtils.h"
#include "Perception/AIPerceptionComponent.h"
#include "HealthComponent.h"
#include "TeamComponent.h"
#include <BehaviorTree/BlackboardComponent.h>


// Sets default values
AEnemyCharacter::AEnemyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Set initial AgentState
	CurrentAgentState = AgentState::PATROL;
}

// Called when the game starts or when spawned
void AEnemyCharacter::BeginPlay()
{
	Super::BeginPlay();

	PerceptionComponent = FindComponentByClass<UAIPerceptionComponent>();
	if (!PerceptionComponent) { UE_LOG(LogTemp, Error, TEXT("NO PERCEPTION COMPONENT FOUND"))}
	PerceptionComponent->OnTargetPerceptionUpdated.AddDynamic(this, &AEnemyCharacter::SensePlayer);

	DetectedActor = nullptr;
	bCanSeeActor = false;

	HealthComponent = FindComponentByClass<UHealthComponent>();
	TeamComponent = FindComponentByClass<UTeamComponent>();

	//EnemyBlackboard = GetBlackboardComponent();
	//AAIController* AIController = GetController<AIController>();

	//UE_LOG(LogTemp, Error, TEXT("%s"), *AIController->GetFName().ToString())

	//EnemyBlackboard->SetValueAsBool(MyBlackboardKey.bSensed, false);

	EnemyBlackboard = AIController->get_blackboard();
	FName test = "bSensed";
	try
	{
		EnemyBlackboard->SetValueAsBool(test, true);
	}
	catch (const std::nullptr_t&)
	{
		UE_LOG(LogTemp, Error, TEXT("Didn't work, dumb dumb"))
	}

}

// Called every frame
void AEnemyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	/*switch (CurrentAgentState)
	{
	case AgentState::PATROL:
		AgentPatrol();
		break;
	case AgentState::ENGAGE:
		AgentEngage();
		break;
	case AgentState::EVADE:
		AgentEvade();
		break;
	default:
		break;
	}*/
	/*
	if (CurrentAgentState == AgentState::PATROL)
	{
		if (HealthComponent->HealthPercentageRemaining() >= 0.4f && bCanSeeActor)
		{
			// Engage player
			CurrentAgentState = AgentState::ENGAGE;
		}
		else if (HealthComponent->HealthPercentageRemaining() <= 0.4f && bCanSeeActor)
		{
			// Change to EVADE and clear path
			CurrentAgentState = AgentState::EVADE;
			Path.Empty();
		}
		else
		{
			// Patrol
			AgentPatrol();
		}
	}
	else if (CurrentAgentState == AgentState::ENGAGE)
	{
		if (!bCanSeeActor)
		{
			// Patrol
			CurrentAgentState = AgentState::PATROL;
		}
		else if (HealthComponent->HealthPercentageRemaining() <= 0.4f && bCanSeeActor)
		{
			// Change to EVADE and clear path
			CurrentAgentState = AgentState::EVADE;
			Path.Empty();
		}
		else
		{
			// Engage player
			AgentEngage();
		}
	}
	else if (CurrentAgentState == AgentState::EVADE)
	{

		if (CurrentAgentState == AgentState::PATROL)
		{
			if (HealthComponent->HealthPercentageRemaining() >= 0.4f && bCanSeeActor)
			{
				// Engage player
				CurrentAgentState = AgentState::ENGAGE;
			}
			else if (HealthComponent->HealthPercentageRemaining() <= 0.4f && bCanSeeActor)
			{
				// Change to EVADE and clear path
				CurrentAgentState = AgentState::EVADE;
				Path.Empty();
			}
			else
			{
				// Patrol
				AgentPatrol();
			}
		}
		else if (CurrentAgentState == AgentState::ENGAGE)
		{
			if (!bCanSeeActor)
			{
				// Patrol
				CurrentAgentState = AgentState::PATROL;
			}
			else if (HealthComponent->HealthPercentageRemaining() <= 0.4f && bCanSeeActor)
			{
				// Change to EVADE and clear path
				CurrentAgentState = AgentState::EVADE;
				Path.Empty();
			}
			else
			{
				// Engage player
				AgentEngage();
			}
		}
		else if (CurrentAgentState == AgentState::EVADE)
		{
			if (!bCanSeeActor)
			{
				// Patrol if lost the player
				CurrentAgentState = AgentState::PATROL;
			}
			else if (HealthComponent->HealthPercentageRemaining() >= 0.4f && bCanSeeActor)
			{
				// Engage the player if healthy
				CurrentAgentState = AgentState::ENGAGE;
				Path.Empty();
			}
			else
			{
				// Evade the player
				AgentEvade();
			}
		}
	}
	*/
}

// Called to bind functionality to input
void AEnemyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AEnemyCharacter::AgentPatrol()
{
	// Generate new path if path length is 0
	if (Path.Num() == 0 && Manager != NULL)
	{
		Path = Manager->GeneratePath(CurrentNode, Manager->AllNodes[FMath::RandRange(0, Manager->AllNodes.Num() - 1)]);
	}
	MoveAlongPath();
}

void AEnemyCharacter::AgentEngage()
{
	if (bCanSeeActor)
	{
		//FVector DirectionToTarget = DetectedActor->GetActorLocation() - GetActorLocation();

		if (Path.Num() == 0 && Manager != NULL)
		{
			Path = Manager->GeneratePath(CurrentNode, Manager->FindNearestNode(DetectedActor->GetActorLocation()));
		}
		MoveAlongPath();
	}
}

void AEnemyCharacter::AgentEvade()
{
	if (bCanSeeActor)
	{

		if (Path.Num() == 0 && Manager != NULL)
		{
			Path = Manager->GeneratePath(CurrentNode, Manager->FindFurthestNode(DetectedActor->GetActorLocation()));
		}
		MoveAlongPath();
	}
}

void AEnemyCharacter::EmptyPath()
{
	Path.Empty();
}

void AEnemyCharacter::Trigger() {
	Fire(DetectedActor->GetActorLocation() - GetActorLocation());
}

void AEnemyCharacter::SensePlayer(AActor* ActorSensed, FAIStimulus Stimulus)
{
	//UE_LOG(LogTemp, Error, TEXT("%s"), *ActorSensed->GetClass()->GetFName().ToString())
	//UE_LOG(LogTemp, Error, TEXT("%s"), *Stimulus.Type.Name.ToString())
	// && ActorSensed->GetClass()->GetFName() == TEXT("PlayerCharacterBlueprint_C")
	if (Stimulus.WasSuccessfullySensed() && ActorSensed->FindComponentByClass<UTeamComponent>()->CheckUnfriendly(TeamComponent->OwnedFactions))
	{
		if (Stimulus.Type.Name == "Default__AISense_Sight")
		{
			UE_LOG(LogTemp, Warning, TEXT("Player Seen"))
			bCanSeeActor = true;
		}

		if (Stimulus.Type.Name == "Default__AISense_Hearing")
		{
			UE_LOG(LogTemp, Warning, TEXT("Player Heard"))

		}

		DetectedActor = ActorSensed;

		// Print team info
		FString teams = ActorSensed->GetClass()->GetFName().ToString() + " owned Teams: ";
		for (int i = 0; i < ActorSensed->FindComponentByClass<UTeamComponent>()->OwnedFactions.Num(); i++)
		{
			teams += FString::FromInt(ActorSensed->FindComponentByClass<UTeamComponent>()->OwnedFactions[i]);

			if (i != ActorSensed->FindComponentByClass<UTeamComponent>()->OwnedFactions.Num() - 1)
			{
				teams += ", ";
			}
		}

		UE_LOG(LogTemp, Warning, TEXT("%s"), *teams)
	}
	else
	{
		// Reset stuff here
		bCanSeeActor = false;
		UE_LOG(LogTemp, Warning, TEXT("Player Lost"))
	}
}

void AEnemyCharacter::MoveAlongPath()
{
	if (Path.Num() > 0 && Manager != NULL)
	{
		//UE_LOG(LogTemp, Display, TEXT("Current Node: %s"), *CurrentNode->GetName())
		if ((GetActorLocation() - CurrentNode->GetActorLocation()).IsNearlyZero(100.0f))
		{
			UE_LOG(LogTemp, Display, TEXT("At Node %s"), *CurrentNode->GetName())
				CurrentNode = Path.Pop();
		}
		else
		{
			FVector WorldDirection = CurrentNode->GetActorLocation() - GetActorLocation();
			WorldDirection.Normalize();
			//UE_LOG(LogTemp, Display, TEXT("The World Direction(X:%f,Y:%f,Z:%f)"), WorldDirection.X, WorldDirection.Y, WorldDirection.Z)
			AddMovementInput(WorldDirection, 1.0f);

			//Get the AI to face in the direction of travel.
			FRotator FaceDirection = WorldDirection.ToOrientationRotator();
			FaceDirection.Roll = 0.f;
			FaceDirection.Pitch = 0.f;
			//FaceDirection.Yaw -= 90.0f;
			SetActorRotation(FaceDirection);
		}
	}
}



//bool AEnemyCharacter::TestFunction()
//{
//	return true;
//}
