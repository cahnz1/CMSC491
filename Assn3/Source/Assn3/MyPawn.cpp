// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPawn.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Components/PrimitiveComponent.h"
#include "InputCoreTypes.h"

#ifdef __clang__
#pragma clang optimize off
#else
#pragma optimize("", off)
#endif

// Sets default values
AMyPawn::AMyPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> BallMesh(TEXT("/Game/Rolling/Meshes/BallMesh.BallMesh"));

	// Create mesh component for the Pawn
	Pawn = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Pawn0"));

	//JumpImpulse = 350000.0f;
	

	Pawn->SetStaticMesh(BallMesh.Object);
	//Pawn->BodyInstance.SetCollisionProfileName(UCollisionProfile::PhysicsActor_ProfileName);
	Pawn->SetSimulatePhysics(true);
	Pawn->SetAngularDamping(0.1f);
	Pawn->SetLinearDamping(0.1f);
	Pawn->BodyInstance.MassScale = 3.5f;
	Pawn->BodyInstance.MaxAngularVelocity = 800.0f;
	Pawn->SetNotifyRigidBodyCollision(true);
	RootComponent = Pawn;
	
	//USphereComponent to detect nighbors
	sphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("sphereComponent0"));
	sphereComponent->SetSphereRadius(750);

	sphereComponent->SetupAttachment(RootComponent);  //attach it to the pawn

	
}

void  AMyPawn::OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
	neighbors.Add(OtherActor);
}

void AMyPawn::OnComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
	neighbors.Remove(OtherActor);
}

// Called when the game starts or when spawned
void AMyPawn::BeginPlay()
{
	Super::BeginPlay();
	
	sphereComponent->GetOverlappingActors(neighbors);
	neighbors.Remove(this);

	sphereComponent->OnComponentBeginOverlap.AddDynamic(this, &AMyPawn::OnComponentBeginOverlap);
	sphereComponent->OnComponentEndOverlap.AddDynamic(this, &AMyPawn::OnComponentEndOverlap);
	
}
/*
void AMyPawn::AvoidenceForce(float val) { 
	// scale the vector to each neighbor by 1/length3 (in addition to the avoidance scale property)
	//a + (1/length^3)
}

*/
// Called every frame
void AMyPawn::Tick(float DeltaTime)
{
	
	Super::Tick(DeltaTime);

	if (neighbors.Num() == 0) {
		return;
	}

	FVector totalPos(0, 0, 0);  //for cohesion
	FVector avePos(0, 0, 0); //for cohesion
	
	FVector aveVel(0, 0, 0);  //for allignment
	FVector totalVel(0, 0, 0); //for allignment

	//FVector avoidScale(0, 0, 0);
	FVector location(0, 0, 0);  //for avoidence
	float avoidScale;  //for avoidence

	FVector totalAvoid(0, 0, 0);  //for avoidence
	FVector aveAvoid(0, 0, 0);  //for avoidence
	
	for (auto It = neighbors.CreateConstIterator(); It; ++It) {
		AActor* neighbor = *It;  //It is a pointer to a pointer...
		//----------------------------------------------Cohesion-----------------
		//apply a force toward the average position of all of the neighbors.
		totalPos = totalPos + neighbor->GetActorLocation();

		//----------------------------------------------Allignment-----------------
		totalVel = totalVel + neighbor->GetVelocity();
		
		//----------------------------------------------Avoidence-----------------
		location = neighbor->GetActorLocation() - GetActorLocation();
		avoidScale = (avoidenceForceScale/(location.Size() * location.Size() * location.Size()));
		totalAvoid = totalAvoid + (avoidScale * -location);
	}
	avePos = totalPos / neighbors.Num();
	aveVel = totalVel / neighbors.Num();
	//aveAvoid = totalAvoid / neighbors.Num();

	FVector curPos = GetActorLocation();
	FVector curVel = GetVelocity();
	
	const FVector Cohesion = (avePos - curPos) * DeltaTime * cohesionForceScale;
	Pawn->AddImpulse(Cohesion);

	const FVector Allignment = (aveVel - curVel) * DeltaTime * alignmentForceScale;
	Pawn->AddImpulse(Allignment);

	const FVector Avoidence = (totalAvoid) * DeltaTime * avoidenceForceScale;
	Pawn->AddImpulse(Avoidence);

}



#ifdef __clang__
#pragma clang optimize on
#else
#pragma optimize("", on)
#endif