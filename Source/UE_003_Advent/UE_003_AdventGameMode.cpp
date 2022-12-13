// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE_003_AdventGameMode.h"
#include "UE_003_AdventCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE_003_AdventGameMode::AUE_003_AdventGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
