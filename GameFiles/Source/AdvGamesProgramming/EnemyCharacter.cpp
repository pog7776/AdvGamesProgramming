 // Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyCharacter.h"
#include "EngineUtils.h"
#include "Perception/AIPerceptionComponent.h"
#include "HealthComponent.h"
#include "TeamComponent.h"


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
	bAllowedMoveAlongPath = false;

	HealthComponent = FindComponentByClass<UHealthComponent>();
	TeamComponent = FindComponentByClass<UTeamComponent>();

	//EnemyBlackboard = GetBlackboardComponent();
	
}

// Called every frame
void AEnemyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (bAllowedMoveAlongPath) MoveAlongPath();
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

bool AEnemyCharacter::GetBCanSeeActor() const
{
	return bCanSeeActor;
}

//bool AEnemyCharacter::TestFunction()
//{
//	return true;
//}
