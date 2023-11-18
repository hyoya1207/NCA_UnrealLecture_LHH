// Copyright Epic Games, Inc. All Rights Reserved.

#include "NCA_UE5_LHHGameMode.h"
#include "NCA_UE5_LHHCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANCA_UE5_LHHGameMode::ANCA_UE5_LHHGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
