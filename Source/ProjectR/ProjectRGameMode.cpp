// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectRGameMode.h"
#include "ProjectRCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectRGameMode::AProjectRGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
