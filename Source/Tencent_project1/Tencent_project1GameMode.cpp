// Copyright Epic Games, Inc. All Rights Reserved.

#include "Tencent_project1GameMode.h"
#include "Tencent_project1Character.h"
#include "UObject/ConstructorHelpers.h"

ATencent_project1GameMode::ATencent_project1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
