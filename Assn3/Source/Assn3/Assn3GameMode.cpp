// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Assn3GameMode.h"
#include "Assn3Ball.h"

AAssn3GameMode::AAssn3GameMode()
{
	// set default pawn class to our ball
	DefaultPawnClass = AAssn3Ball::StaticClass();
}
