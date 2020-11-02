// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyCharacterNavMesh.h"
#include "EngineUtils.h"
#include "HealthComponent.h"
#include "TeamComponent.h"
#include "NavigationSystem.h"
#include <BehaviorTree/BlackboardComponent.h>

// Sets default values
AEnemyCharacterNavMesh::AEnemyCharacterNavMesh()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bIsClient = false;
	//SetReplicates(true);
}

// Called when the game starts or when spawned
void AEnemyCharacterNavMesh::BeginPlay()
{
	Super::BeginPlay();

	//NavSys = FNavigationSystem::GetCurrent<UNavigationSystemV1>(GetWorld());

	if (GetLocalRole() != ROLE_Authority) bIsClient = true;

	PerceptionComponent = FindComponentByClass<UAIPerceptionComponent>();
	if (!PerceptionComponent) { UE_LOG(LogTemp, Error, TEXT("NO PERCEPTION COMPONENT FOUND")) }
	PerceptionComponent->OnTargetPerceptionUpdated.AddDynamic(this, &AEnemyCharacterNavMesh::SensePlayer);

	DetectedActor = nullptr;
	bSensed = false;
	bCanSeeActor = false;

	HealthComponent = FindComponentByClass<UHealthComponent>();
	TeamComponent = FindComponentByClass<UTeamComponent>();

	EnemyBlackboard = AIController->get_blackboard();
}

// Called every frame
void AEnemyCharacterNavMesh::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEnemyCharacterNavMesh::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void AEnemyCharacterNavMesh::SensePlayer(AActor* ActorSensed, FAIStimulus Stimulus)
{
	//UE_LOG(LogTemp, Error, TEXT("%s"), *ActorSensed->GetClass()->GetFName().ToString())
	//UE_LOG(LogTemp, Error, TEXT("%s"), *Stimulus.Type.Name.ToString())
	// && ActorSensed->GetClass()->GetFName() == TEXT("PlayerCharacterBlueprint_C")

	if (Stimulus.WasSuccessfullySensed())
	{
		// Is unfriendly
		UTeamComponent* SensedTeamComponent = ActorSensed->FindComponentByClass<UTeamComponent>();
		if (SensedTeamComponent != nullptr)
		{
			if (SensedTeamComponent->CheckUnfriendly(SensedTeamComponent->OwnedFactions))
			{
				bSensed = true;
				if(GetLocalRole()==ROLE_Authority && EnemyBlackboard)
					EnemyBlackboard->SetValueAsBool(FName("bSensed"), bSensed);
				if (Stimulus.Type.Name == "Default__AISense_Sight")
				{
					UE_LOG(LogTemp, Warning, TEXT("Player Seen"))
						bCanSeeActor = true;
					if (GetLocalRole() == ROLE_Authority && EnemyBlackboard)
						EnemyBlackboard->SetValueAsBool(FName("bCanSeePlayer"), bCanSeeActor);
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
		}
	}
	else
	{
		// Reset stuff here
		bSensed = false;
		bCanSeeActor = false;
		if (GetLocalRole() == ROLE_Authority && EnemyBlackboard) {
			EnemyBlackboard->SetValueAsBool(FName("bSensed"), bSensed);
			EnemyBlackboard->SetValueAsBool(FName("bCanSeePlayer"), bCanSeeActor);
			EnemyBlackboard->SetValueAsBool(FName("bSensed"), false);
			EnemyBlackboard->SetValueAsBool(FName("bCanSeePlayer"), false);
		}
		UE_LOG(LogTemp, Warning, TEXT("Player Lost"))
	}
}

void AEnemyCharacterNavMesh::Trigger() {
	Fire(DetectedActor->GetActorLocation() - GetActorLocation());
}

float AEnemyCharacterNavMesh::CalcKillApprox()
{
	//if everything was initialized, calculate kill possibility and return
	if (HealthComponent != nullptr && DetectedActor != nullptr) {
		//UE_LOG(LogTemp, Warning, TEXT("Both Health Component Exist"))
		float playerHealth = DetectedActor->FindComponentByClass<UHealthComponent>()->HealthPercentageRemaining();
		if (playerHealth > 0) {
			//UE_LOG(LogTemp, Warning, TEXT("Player is alive"))
			//UE_LOG(LogTemp, Warning, TEXT("%f"), HealthComponent->HealthPercentageRemaining())
			//UE_LOG(LogTemp, Warning, TEXT("%f"), playerHealth)
			return HealthComponent->HealthPercentageRemaining() / playerHealth;
		}
	}
	//if everything was not initialized yet, return 0
	return 1.0f;
}

//Getters
bool AEnemyCharacterNavMesh::GetBSensed() const { return bSensed; }
bool AEnemyCharacterNavMesh::GetBCanSeeActor() const { return bCanSeeActor; }

/*
void AEnemyCharacterNavMesh::CreatePathPatrol()
{
	if (!NavSys) return;

	FVector Result;
	NavSys->K2_GetRandomReachablePointInRadius(GetWorld(), GetActorLocation(), Result, 1500);

	//Out
	TargetPoint = Result;
}

void AEnemyCharacterNavMesh::CreatePathEngage()
{
	if (!NavSys) return;

	//Out
	TargetPoint = DetectedActor->GetActorLocation();
}

void AEnemyCharacterNavMesh::CreatePathEngageSpecific()
{
	CreatePathEngage();
}

void AEnemyCharacterNavMesh::CreatePathEvade()
{
	if (!NavSys) return;

	FVector Result;
	FVector SelfLoc = GetActorLocation();
	FVector EnemLoc = DetectedActor->GetActorLocation();
	FVector dir1, dir2;
	float negAllowance = FMath::DegreesToRadians(-90);
	float posAllowance = FMath::DegreesToRadians(90);
	float angle;

	while (true) {
		NavSys->K2_GetRandomReachablePointInRadius(GetWorld(), GetActorLocation(), Result, 1500);

		dir1 = (Result - SelfLoc).GetSafeNormal();
		dir2 = (EnemLoc - SelfLoc).GetSafeNormal();

		angle = FVector::DotProduct(dir1, dir2);

		if (angle > posAllowance || angle < negAllowance) break;
	}

	//Out
	TargetPoint = Result;
}

void AEnemyCharacterNavMesh::EmptyPath()
{
	TargetPoint = GetActorLocation();
}

void AEnemyCharacterNavMesh::AllowMoveAlongPath() {}

void AEnemyCharacterNavMesh::MoveAlongPath()
{
	NavSys->SimpleMoveToLocation(AIController, TargetPoint);
}
*/