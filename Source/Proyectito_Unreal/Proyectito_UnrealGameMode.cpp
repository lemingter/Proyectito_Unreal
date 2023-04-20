// Copyright Epic Games, Inc. All Rights Reserved.

#include "Proyectito_UnrealGameMode.h"
#include "Proyectito_UnrealCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProyectito_UnrealGameMode::AProyectito_UnrealGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
