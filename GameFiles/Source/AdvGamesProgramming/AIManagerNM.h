#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/ConstructorHelpers.h"
#include "AIManagerNM.generated.h"

class AEnemyCharacterNavMesh;

UCLASS()
class ADVGAMESPROGRAMMING_API AAIManagerNM : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAIManagerNM();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = "Agents")
	TArray<TSubclassOf<class AActor>> AgentToSpawn;

	UPROPERTY(EditAnywhere, Category = "Agents", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<class AActor> SpawnPoint;

	UPROPERTY(VisibleAnywhere, Category = "Agents")
	TArray<AActor*> AllNodes;

	UPROPERTY(VisibleAnywhere, Category = "Agents")
	TArray<AEnemyCharacterNavMesh*> AllAgents;

	UPROPERTY(EditAnywhere, Category = "AI Properties")
	int32 NumAI;

	void PopulateNodes();
	void CreateAgents();
	void CreateAgents(FVector spawnPos);
};
