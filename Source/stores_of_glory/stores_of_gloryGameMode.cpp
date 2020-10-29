// Copyright Epic Games, Inc. All Rights Reserved.

#include "stores_of_gloryGameMode.h"
#include "stores_of_gloryHUD.h"
#include "stores_of_gloryCharacter.h"
#include "UObject/ConstructorHelpers.h"

Astores_of_gloryGameMode::Astores_of_gloryGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = Astores_of_gloryHUD::StaticClass();
}
