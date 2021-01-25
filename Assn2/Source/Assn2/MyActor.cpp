// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Materials/Material.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Containers/Array.h"
#include <stack>
#include <vector>
#include <random>

#ifdef __clang__
#pragma clang optimize off
#else
#pragma optimize("", off)
#endif

using namespace std;

// Sets default values
AMyActor::AMyActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshRef(TEXT("StaticMesh'/Engine/BasicShapes/Sphere.Sphere'"));
	UStaticMesh* StaticMesh = MeshRef.Object;
	check(StaticMesh != nullptr);

	const bool bTransient = true;
	USceneComponent* SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"), bTransient);
	check(SceneComponent != nullptr);
	this->RootComponent = SceneComponent;

	//StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("KeyMesh"));
	//StaticMeshComponent = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("KeyMesh"));

	//StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("/Engine/BasicShapes/Sphere.Sphere"));

	StaticMeshComponent = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("/Engine/BasicShapes/Sphere.Sphere"));

	//StaticMeshComponent->SetMobility(EComponentMobility::Movable);  //this is to allow for moveability
	StaticMeshComponent->SetupAttachment(RootComponent);


}

bool AMyActor::unvisited() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (!cellsVisited[i][j]) {
				return true;  //if the node is unvisited
			}
		}
	}
	return false; //found visited cell(s)
}

cellPosition::cellPosition(unsigned int _x, unsigned int _y)
{
	x = _x;
	y = _y;
}

std::vector<cellPosition> AMyActor::isNeighbor(unsigned int x, unsigned int y) {

	std::vector<cellPosition> cells;


	if (x < 2 && !cellsVisited[x + 1][y]) {//nieghbor bellow
		cells.push_back(cellPosition(x + 1, y));
	}

	if (x > 0 && !cellsVisited[x - 1][y]) { //neighbor above
		cells.push_back(cellPosition(x - 1, y));
	}
	if (y < 2 && !cellsVisited[x][y + 1]) { //neighbor to rt
		cells.push_back(cellPosition(x, y + 1));
	}
	if (y > 0 && !cellsVisited[x][y - 1]) { //neighbor to the left
		cells.push_back(cellPosition(x, y - 1));
	}
	return cells;

}


void AMyActor::removeWall(cellPosition current, cellPosition neighbor) {

	if (current.x > neighbor.x) { //top wall
		wall[current.x * 2][current.y] = false;
		//wall[current.y][current.x * 2] = false;
	}
	if (current.x < neighbor.x) { //bottom wall
		wall[current.x * 2 + 2][current.y] = false;
		//wall[current.y][current.x * 2 +2] = false;
	}
	if (current.y > neighbor.y) { //left wall
		wall[current.x * 2 + 1][current.y] = false;
		//wall[current.y][current.x] = false;
	}
	if (current.y < neighbor.y) { //right wall
		wall[current.x * 2 + 1][current.y+1] = false;
		//wall[current.y+1][current.x] = false;
	}

}

void AMyActor::makeMaze() {

	//set all nodes to unvisited
	//bool visited[7][4];
	for (size_t i = 0; i < 7; i++) {
		for (size_t j = 0; j < 4; j++) {
			wall[i][j] = true;
		}
	}
	
	//cells visited for loops
	for (size_t i = 0; i < 3; i++) {
		for (size_t j = 0; j < 3; j++) {
			cellsVisited[i][j] = false;
		}
	}

	int cellCount = 1;
	std::stack<cellPosition>cellStack;
	cellPosition currentCell(0, 0);

	//set intial cell to visited
	cellsVisited[0][0] = true;

	vector<cellPosition> neighbors = isNeighbor(currentCell.x, currentCell.y);

	while (cellCount < 9) {
		neighbors = isNeighbor(currentCell.x, currentCell.y);
		if (neighbors.size() > 0) { //if there are any neighbors unvisited
			unsigned int randomNeihbor = rng.GetUnsignedInt() % neighbors.size();
			cellPosition RN = neighbors[randomNeihbor];  //got random neighbor
			if (neighbors.size() > 1) {
				cellStack.push(currentCell); // Push the current cell to the stack 
			}
			removeWall(currentCell, RN);

			currentCell = RN;
			cellsVisited[currentCell.x][currentCell.y] = true;
			cellCount++;
		}
		else if (cellStack.size() != 0) {
			//currentCell = cellStack.top();
			while (cellStack.size() > 0 && isNeighbor(currentCell.x, currentCell.y).size() == 0) {
				currentCell = cellStack.top();
				cellStack.pop();
				
			}
		}



	}
	
}


void AMyActor::OnConstruction(const FTransform& Transform) {
	StaticMeshComponent->ClearInstances();

	StaticMeshComponent->SetStaticMesh(StaticMesh);

	StaticMeshComponent->SetMaterial(0, StaticMaterial);

	//TArray<int32> walls;
	//rng = FRandomStream(Seed);

	//rng.GetUnsignedInt();

	

	//wall.Empty();

	makeMaze();

	//-------------------------------rows-------------------------------------------------
	//top row 
	if (wall[0][0]) {
		//StaticMeshComponent->AddInstance(FTransform(FRotator(0, 0, 0), FVector(-100, 0, -150))); //wall1
	}
	if (wall[0][1]) {
		StaticMeshComponent->AddInstance(FTransform(FRotator(0, 0, 0), FVector(0, 0, -150))); //wall2
	}
	if (wall[0][2]) {
		StaticMeshComponent->AddInstance(FTransform(FRotator(0, 0, 0), FVector(100, 0, -150))); //wall3
	}
	//2nd row
	if (wall[2][0]) {
		StaticMeshComponent->AddInstance(FTransform(FRotator(0, 0, 0), FVector(-100, 0, -50))); //wall4
	}
	if (wall[2][1]) {
		StaticMeshComponent->AddInstance(FTransform(FRotator(0, 0, 0), FVector(0, 0, -50))); //wall5
	}
	if (wall[2][2]) {
		StaticMeshComponent->AddInstance(FTransform(FRotator(0, 0, 0), FVector(100, 0, -50))); //wall6
	}
	//3rd row
	if (wall[4][0]) {
		StaticMeshComponent->AddInstance(FTransform(FRotator(0, 0, 0), FVector(-100, 0, 50))); //wall7
	}
	if (wall[4][1]) {
		StaticMeshComponent->AddInstance(FTransform(FRotator(0, 0, 0), FVector(0, 0, 50))); //wall8
	}
	if (wall[4][2]) {
		StaticMeshComponent->AddInstance(FTransform(FRotator(0, 0, 0), FVector(100, 0, 50))); //wall9
	}

	//4rd row
	if (wall[6][0]) {
		StaticMeshComponent->AddInstance(FTransform(FRotator(0, 0, 0), FVector(-100, 0, 150))); //wall10
	}
	if (wall[6][1]) {
		StaticMeshComponent->AddInstance(FTransform(FRotator(0, 0, 0), FVector(0, 0, 150))); //wall11
	}
	if (wall[6][2]) {
		//StaticMeshComponent->AddInstance(FTransform(FRotator(0, 0, 0), FVector(100, 0, 150))); //wall12
	}

	//-------------------------------collums-------------------------------------------------
	//first collum
	if (wall[1][0]) {
		StaticMeshComponent->AddInstance(FTransform(FRotator(90, 0, 0), FVector(-150, 0, -100))); //wall13
	}
	if (wall[3][0]) {
		StaticMeshComponent->AddInstance(FTransform(FRotator(90, 0, 0), FVector(-150, 0, 0))); //wall14
	}
	if (wall[5][0]) {
		StaticMeshComponent->AddInstance(FTransform(FRotator(90, 0, 0), FVector(-150, 0, 100))); //wall15
	}

	//2nd collum
	if (wall[1][1]) {
		StaticMeshComponent->AddInstance(FTransform(FRotator(90, 0, 0), FVector(-50, 0, -100))); //wall16
	}
	if (wall[3][1]) {
		StaticMeshComponent->AddInstance(FTransform(FRotator(90, 0, 0), FVector(-50, 0, 0))); //wall17
	}
	if (wall[5][1]) {
		StaticMeshComponent->AddInstance(FTransform(FRotator(90, 0, 0), FVector(-50, 0, 100))); //wall18
	}
	//3rd collum
	if (wall[1][2]) {
		StaticMeshComponent->AddInstance(FTransform(FRotator(90, 0, 0), FVector(50, 0, -100))); //wall19
	}
	if (wall[3][2]) {
		StaticMeshComponent->AddInstance(FTransform(FRotator(90, 0, 0), FVector(50, 0, 0))); //wall20
	}
	if (wall[5][2]) {
		StaticMeshComponent->AddInstance(FTransform(FRotator(90, 0, 0), FVector(50, 0, 100))); //wall21
	}
	//4th collum
	if (wall[1][3]) {
		StaticMeshComponent->AddInstance(FTransform(FRotator(90, 0, 0), FVector(150, 0, -100))); //wall22
	}
	if (wall[3][3]) {
		StaticMeshComponent->AddInstance(FTransform(FRotator(90, 0, 0), FVector(150, 0, 0))); //wall23
	}
	if (wall[5][3]) {
		StaticMeshComponent->AddInstance(FTransform(FRotator(90, 0, 0), FVector(150, 0, 100))); //wall24
	}

}


void AMyActor::SetAssociatedComponent(USceneComponent* SceneComponent)
{
	AssociatedComponent = SceneComponent;

	// Set the initial transform for the manipulator to be the same as the associated component.
	if (AssociatedComponent != nullptr)
	{
		SetActorTransform(AssociatedComponent->GetComponentToWorld());
	}
}





// Called when the game starts or when spawned
/*void AMyActor::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
*/

#ifdef __clang__
#pragma clang optimize on
#else
#pragma optimize("", on)
#endif


