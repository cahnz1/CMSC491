// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "newPluginBPLibrary.generated.h"


USTRUCT(BlueprintType)//, meta = (HasNativeMake = "Engine.KismetMathLibrary.MakeRandomStream", HasNativeBreak = "Engine.KismetMathLibrary.BreakRandomStream"))
struct FPrand
{
	GENERATED_USTRUCT_BODY()
public:
	/** Holds the initial seed. */
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = RandomStream, SaveGame)
		//int32 InitialSeed;

	/** Holds the current seed. */
	UPROPERTY()
		FRandomStream rstream;
	//int32 Seed;

	TSet<FVector2D> points;
};





/* 
*	Function library class.
*	Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.
*
*	When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.
*	BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.
*	BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.
*	DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.
*				Its lets you name the node using characters not allowed in C++ function names.
*	CompactNodeTitle - the word(s) that appear on the node.
*	Keywords -	the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. 
*				Good example is "Print String" node which you can find also by using keyword "log".
*	Category -	the category your node will be under in the Blueprint drop-down menu.
*
*	For more info on custom blueprint nodes visit documentation:
*	https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation
*/
UCLASS()
class UnewPluginBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

		UFUNCTION(BlueprintCallable, meta = (DisplayName = "Execute Sample function", Keywords = "newPlugin sample test testing"), Category = "newPluginTesting")
		static float newPluginSampleFunction(float Param);

	//blueprint node
	UFUNCTION(BlueprintCallable, meta = (defaultToSelf = "Target",HidePin= "Target"))
		static void setBlueNoiseStreamSeed(AActor* Target, UPARAM(ref) FPrand& BlueNoiseStream, int32 Seed);

	UFUNCTION(BlueprintPure, meta = (defaultToSelf = "Target", HidePin = "Target"))
		static FVector BlueNoisePointInRange(UPARAM(ref) FPrand& BlueNoiseStream, FVector2D Min, FVector2D Max);
	
	
	//used to calculate distance between 2 points
	//float ToroidalDistance(float x1, float y1, float x2, float y2);
};
	
