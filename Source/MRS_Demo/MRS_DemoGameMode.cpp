// Copyright Epic Games, Inc. All Rights Reserved.

#include "MRS_DemoGameMode.h"
#include "MRS_DemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMRS_DemoGameMode::AMRS_DemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
