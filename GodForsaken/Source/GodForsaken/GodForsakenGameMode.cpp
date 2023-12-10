// Copyright Epic Games, Inc. All Rights Reserved.

#include "GodForsakenGameMode.h"
#include "GodForsakenCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGodForsakenGameMode::AGodForsakenGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
