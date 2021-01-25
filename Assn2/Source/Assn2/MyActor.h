// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include <vector>
#include "Math/RandomStream.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

//using namespace std;
struct cellPosition {
	unsigned int x;
	unsigned int y;
	cellPosition(unsigned int _x, unsigned int _y);
};

UCLASS()
class ASSN2_API AMyActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMyActor();

	//I added bellow
	void SetAssociatedComponent(USceneComponent* SceneComponent);


	virtual void OnConstruction(const FTransform& Transform);

	void makeMaze();



	//virtual int32 AddInstance(const FTransform& InstanceTransform);

	//virtual void AddInstance(const FTransform& InstanceTransform);

	//void AddInstanceComponent(UActorComponent* Component);

private:

	bool wall[7][4];

	bool cellsVisited[3][3];

	//bool isNeighbor[3][3];

	bool unvisited();

	std::vector<cellPosition> isNeighbor(unsigned int x, unsigned int y);

	//int setCurrentCell();
	void removeWall(cellPosition current, cellPosition neighbor);

	//std::vector<unsigned int> neighborType();

	UPROPERTY()
		class USceneComponent* AssociatedComponent;

	UPROPERTY(transient)
		//class UStaticMeshComponent* StaticMeshComponent;
		class UInstancedStaticMeshComponent* StaticMeshComponent;


	UPROPERTY(EditAnywhere)
		class UStaticMesh* StaticMesh;

	UPROPERTY(EditAnywhere)
		class UMaterial* StaticMaterial;

//	UPROPERTY(EditAnywhere)
	//	int Seed;
	UPROPERTY(EditAnywhere)
	FRandomStream rng;

	//UPROPERTY(EditAnywhere)
		//int imhere;

//protected:
	// Called when the game starts or when spawned
	//virtual void BeginPlay() override;

//public:	
	// Called every frame
	//virtual void Tick(float DeltaTime) override;

};

