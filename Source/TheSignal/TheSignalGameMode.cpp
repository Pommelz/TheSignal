// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "TheSignalGameMode.h"
#include "TheSignalHUD.h"
#include "TheSignalCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATheSignalGameMode::ATheSignalGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	/*
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;
	*/

	// use our custom HUD class
	HUDClass = ATheSignalHUD::StaticClass();
}
