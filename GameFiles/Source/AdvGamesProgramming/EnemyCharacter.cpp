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
}

// Called when the game starts or when spawned
void AEnemyCharacter::BeginPlay()
{
	Super::BeginPlay();

	PerceptionComponent = FindComponentByClass<UAIPerceptionComponent>();
	if (!PerceptionComponent) { UE_LOG(LogTemp, Error, TEXT("NO PERCEPTION COMPONENT FOUND"))}
	PerceptionComponent->OnTargetPerceptionUpdated.AddDynamic(this, &AEnemyCharacter::SensePlayer);

	DetectedActor = nullptr;
	bSensed = false;
	bCanSeeActor = false;
	bAllowedMoveAlongPath = false;

	HealthComponent = FindComponentByClass<UHealthComponent>();
	TeamComponent = FindComponentByClass<UTeamComponent>();

	EnemyBlackboard = AIController->get_blackboard();

}

// Called every frame
void AEnemyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (bAllowedMoveAlongPath) MoveAlongPath();

	//PerceptionComponent->HandleExpiredStimulus();
}

// Called to bind functionality to input
void AEnemyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AEnemyCharacter::CreatePathPatrol()
{
	if (Path.Num() == 0 && Manager != NULL)
		Path = Manager->GeneratePath(CurrentNode, Manager->AllNodes[FMath::RandRange(0, Manager->AllNodes.Num() - 1)]);
}

void AEnemyCharacter::CreatePathEngage()
{
	if (bCanSeeActor)
		if (Path.Num() == 0 && Manager != NULL)
			Path = Manager->GeneratePath(CurrentNode, Manager->FindNearestNode(DetectedActor->GetActorLocation()));
}

void AEnemyCharacter::CreatePathEvade()
{
	if (bCanSeeActor)
		if (Path.Num() == 0 && Manager != NULL)
			Path = Manager->GeneratePath(CurrentNode, Manager->FindFurthestNode(DetectedActor->GetActorLocation()));
}

void AEnemyCharacter::AllowMoveAlongPath()
{
	bAllowedMoveAlongPath = true;
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

void AEnemyCharacter::EmptyPath()
{
	Path.Empty();
}

void AEnemyCharacter::Trigger() {
	Fire(DetectedActor->GetActorLocation() - GetActorLocation());
}

float AEnemyCharacter::CalcKillApprox()
{
	//if everything was initialized, calculate kill possibility and return
	if (HealthComponent != nullptr && DetectedActor != nullptr) {
		UE_LOG(LogTemp, Warning, TEXT("Both Health Component Exist"))
		float playerHealth = DetectedActor->FindComponentByClass<UHealthComponent>()->HealthPercentageRemaining();
		if (playerHealth > 0) {
			UE_LOG(LogTemp, Warning, TEXT("Player is alive"))
			return HealthComponent->HealthPercentageRemaining() / playerHealth;
		}
	}
	//if everything was not initialized yet, return 0
	return 1.0f;
}

void AEnemyCharacter::SensePlayer(AActor* ActorSensed, FAIStimulus Stimulus)
{
	//UE_LOG(LogTemp, Error, TEXT("%s"), *ActorSensed->GetClass()->GetFName().ToString())
	//UE_LOG(LogTemp, Error, TEXT("%s"), *Stimulus.Type.Name.ToString())
	// && ActorSensed->GetClass()->GetFName() == TEXT("PlayerCharacterBlueprint_C")

	if (Stimulus.WasSuccessfullySensed())
	{
		 // Is unfriendly
		if (ActorSensed->FindComponentByClass<UTeamComponent>()->CheckUnfriendly(TeamComponent->OwnedFactions))
		{
			bSensed = true;
			if (Stimulus.Type.Name == "Default__AISense_Sight")
			{
				UE_LOG(LogTemp, Warning, TEXT("Player Seen"))

				EnemyBlackboard->SetValueAsBool(FName("bSensed"), true);
				EnemyBlackboard->SetValueAsBool(FName("bCanSeePlayer"), true);
				bCanSeeActor = true;
			}

			if (Stimulus.Type.Name == "Default__AISense_Hearing")
			{
				UE_LOG(LogTemp, Warning, TEXT("Player Heard"))

					EnemyBlackboard->SetValueAsBool(FName("bSensed"), true);
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
	}
	else
	{
		// Reset stuff here
		bSensed = false;
		bCanSeeActor = false;

		EnemyBlackboard->SetValueAsBool(FName("bSensed"), false);
		EnemyBlackboard->SetValueAsBool(FName("bCanSeePlayer"), false);
		UE_LOG(LogTemp, Warning, TEXT("Player Lost"))
	}
}

bool AEnemyCharacter::GetBSensed() const
{
	return bSensed;
}

bool AEnemyCharacter::GetBCanSeeActor() const
{
	return bCanSeeActor;
}