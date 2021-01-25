// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "newPluginBPLibrary.h"
#include "newPlugin.h"
#include "Kismet/KismetMathLibrary.h"
#include <limits> 



#ifdef __clang__
#pragma clang optimize off
#else
#pragma optimize("", off)
#endif


UnewPluginBPLibrary::UnewPluginBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

float UnewPluginBPLibrary::newPluginSampleFunction(float Param)
{
	return -1;
}

void UnewPluginBPLibrary::setBlueNoiseStreamSeed(AActor* Target, UPARAM(ref) FPrand& BlueNoiseStream, int32 Seed)
{
	BlueNoiseStream.points = TSet<FVector2D>();
	BlueNoiseStream.rstream.Initialize(Seed);
}

FVector UnewPluginBPLibrary::BlueNoisePointInRange(UPARAM(ref) FPrand& BlueNoiseStream, FVector2D Min, FVector2D Max)
{
	//TSet<FVector2D> points;
	
	int32 N = BlueNoiseStream.points.Num();

	FVector2D pointPrime = FVector2D(UKismetMathLibrary::RandomFloatInRangeFromStream(Min.X, Max.X, BlueNoiseStream.rstream), UKismetMathLibrary::RandomFloatInRangeFromStream(Min.Y, Max.Y, BlueNoiseStream.rstream));
	//points.Add(pointPrime);

	//edge case
	if (BlueNoiseStream.points.Num() == 0) {
		//FVector2D a = FVector2D(UKismetMathLibrary::RandomFloatInRangeFromStream(Min.X, Max.X, BlueNoiseStream.rstream), UKismetMathLibrary::RandomFloatInRangeFromStream(Min.Y, Max.Y, BlueNoiseStream.rstream));

		BlueNoiseStream.points.Add(pointPrime);
		return FVector(pointPrime.X, pointPrime.Y, 0.0);
	}
	int possiblePointCount = N * 5;

	//bookkeeping
	//FVector2D generatedPoint = FVector2D(UKismetMathLibrary::RandomFloatInRangeFromStream(Min.X, Max.X, BlueNoiseStream.rstream), UKismetMathLibrary::RandomFloatInRangeFromStream(Min.Y, Max.Y, BlueNoiseStream.rstream));
	FVector2D currWinPoint; //farthest point
	float currWinSampleDistance = std::numeric_limits<float>::infinity();  //set to infinty
	float currWinDistance = 0;

	//generating points
	for (int i = 0; i < possiblePointCount; i++) {
		//generate first point
		//generatedPoint = 
		FVector2D generatedPoint = FVector2D(UKismetMathLibrary::RandomFloatInRangeFromStream(Min.X, Max.X, BlueNoiseStream.rstream), UKismetMathLibrary::RandomFloatInRangeFromStream(Min.Y, Max.Y, BlueNoiseStream.rstream));
		currWinSampleDistance = std::numeric_limits<float>::infinity();  //set to infinty
		/*
		if (i == 0) {
			currWinPoint = generatedPoint;
			currWinDistance = (generatedPoint - pointPrime).Size();
		}
		*/
		//comparing with tset
		for (const FVector2D& p : BlueNoiseStream.points) {
			float disBtwnTPoint = (generatedPoint - p).Size();
			if (currWinSampleDistance > disBtwnTPoint) {  //if the distance m is less than the current disstance 
				currWinSampleDistance = disBtwnTPoint; //assign value
			}
		}
		//compare the distance between the generated nodes and initialuze the win point
		if (currWinSampleDistance > currWinDistance) { //new distance is greater make it winner
			currWinPoint = generatedPoint;
			currWinDistance = currWinSampleDistance;
		} //else we keep the curr win point
	}

	BlueNoiseStream.points.Add(currWinPoint);
	return FVector(currWinPoint.X, currWinPoint.Y, 0.0);;
}


//float range1 = UKismetMathLibrary::RandomFloatInRangeFromStream(Min.X, Max.X, BlueNoiseStream.rstream);
//float range2 = UKismetMathLibrary::RandomFloatInRangeFromStream(Min.Y, Max.Y, BlueNoiseStream.rstream);

#ifdef __clang__
#pragma clang optimize on
#else
#pragma optimize("", on)
#endif