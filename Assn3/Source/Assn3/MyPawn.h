// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include <vector>

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MyPawn.generated.h"
//#include "InputCoreTypes.h"

//#include "Vector.h"

//#include <stdlib.h>
//#include <iostream>




UCLASS()
class ASSN3_API AMyPawn : public APawn
{
	GENERATED_BODY()

		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Pawn, meta = (AllowPrivateAccess = "true")) //catagory- name for details
		class UStaticMeshComponent* Pawn;


	//UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = sphereComponent, meta = (AllowPrivateAccess = "true")) //catagory- name for details
		UPROPERTY(VisibleAnywhere) //hide after debig
		class USphereComponent* sphereComponent;

		UPROPERTY(Transient, VisibleAnywhere)
		TSet<AActor*> neighbors;

		UPROPERTY(EditAnywhere)
		float avoidenceForceScale;// avoidenceForceScale
		UPROPERTY(EditAnywhere)
		float alignmentForceScale;// alignmentForceScale
		UPROPERTY(EditAnywhere)
		float cohesionForceScale;// cohesionForceScale
public:
	// Sets default values for this pawn's properties
	AMyPawn();

	//begin overlap
	//UPROPERTY(BlueprintAssignable, Category = "Collision")
		//	FComponentBeginOverlapSignature  OnComponentBeginOverlap;
	UFUNCTION()
	void OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);



	//end overlap
	//UPROPERTY(BlueprintAssignable, Category = "Collision")
	UFUNCTION()
	void OnComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
		
		//		FComponentEndOverlapSignature OnComponentEndOverlap;

	//tracking neighbors
	//list of neighbors
	//TSet<AActor*> neighbors;



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	

	// AActor interface
	//virtual void NotifyHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit) override;
	// End of AActor interface



	

public:	
		
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
