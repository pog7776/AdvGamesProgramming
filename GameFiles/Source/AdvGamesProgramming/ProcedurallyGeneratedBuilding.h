
#pragma once
#include "CoreMinimal.h"
#include "Engine/World.h"
#include "UObject/ConstructorHelpers.h"
#include "GameFramework/Actor.h"
#include "PickupManager.h"
#include "AIManagerNM.h"
#include "ProcedurallyGeneratedBuilding.generated.h"

UCLASS()
class ADVGAMESPROGRAMMING_API AProcedurallyGeneratedBuilding : public AActor {
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProcedurallyGeneratedBuilding();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	TArray<AActor*> GridCells;			//array to store buildings (used for 1. regenerating buildings, and 2. spawning weapon spawners)
	TArray<AActor*> WeaponSpawners;		//array to store weapon spawners (used for regenerating weapon spawners)
	UWorld* World;						//To prevent keep on calling 'GetWorld()' method which is from another class (processing optimization)
	FVector Scale;						//size reference target's scale value (it is stored in a different variable by same reason as 'World')
	bool bDoNotExecute;					//To prevent execution if size reference object is not set (which results a runtime error)

	void GenerateBuilding();			//method to (re)generate buildings
	void GenerateWeaponSpawnPoints();	//method to (re)generate weapon spawners
	void GenerateTowards(FVector, FVector);	//method to generate weapon spawners at right position

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = City, meta = (AllowPrivateAccess = "true"))
	AActor* SizeReferenceTarget;							//size of the city
	UPROPERTY(EditAnywhere, Category = City)
	bool bSpawnCity;										//to trigger spawning city with given number (can only be called on server)
	UPROPERTY(Replicated, BlueprintReadOnly, EditAnywhere, Category = City)
	int DivisionFactorX;									//number of division along x axis in the city
	UPROPERTY(Replicated, BlueprintReadOnly, EditAnywhere, Category = City)
	int DivisionFactorY;									//number of division along y axis in the city


	UPROPERTY(EditAnywhere, Category = Random)
	bool bRandSpawnCity;									//to trigger spawning city with random number (can only be called on server)
	UPROPERTY(Replicated, EditAnywhere, Category = Random)
	float PerlinScale;										//perlin scale
	UPROPERTY(Replicated, EditAnywhere, Category = Random)
	float PerlinRoughness;									//perlin roughness
	UPROPERTY(ReplicatedUsing = OnBuildCity, VisibleAnywhere, Category = Random)
	float PerlinOffset;										//perlin offset (changed to property due to replication)
	UPROPERTY(EditAnywhere, Category = Random)
	FVector2D RandRange_DivisionFactorX;					//to give random range (x) from detail panel. FVector2D is used for better looking
	UPROPERTY(EditAnywhere, Category = Random)
	FVector2D RandRange_DivisionFactorY;					//to give random range (y) from detail panel. FVector2D is used for better looking


	UPROPERTY(EditAnywhere, Category = Building, meta = (AllowPrivateAccess = "true"))
	TSubclassOf<class AActor> PCGBuilding;					//actual building
	UPROPERTY(Replicated, EditAnywhere, Category = Building)
	int HeightGroundLift;									//To prevent height being 0
	UFUNCTION(BlueprintImplementableEvent, Category = "Building")
	void Init(AActor* Target, float X, float Y, float Z);	//it is blueprint implementable event since it morphs static mesh's size and its easier on blueprint side)


	UFUNCTION()
	void OnBuildCity();


	UPROPERTY(EditAnywhere, Category = WeaponSpawner, meta = (AllowPrivateAccess = "true"))
	APickupManager* PickupManager;							//PickupManager (has to be given from detail panel)
	UPROPERTY(EditAnywhere, Category = WeaponSpawner, meta = (AllowPrivateAccess = "true"))
	TSubclassOf<class AActor> WeaponSpawner;				//weapon spanwer (has to be given from detail panel)

	UPROPERTY(EditAnywhere, Category = Agent)
	AAIManagerNM* AIManager;								//
};
