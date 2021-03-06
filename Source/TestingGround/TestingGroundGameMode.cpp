// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "TestingGround.h"
#include "TestingGroundGameMode.h"
#include "TestingGroundHUD.h"
#include "Player/FirstPersonCharacter.h"

ATestingGroundGameMode::ATestingGroundGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Player/Behaviour/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATestingGroundHUD::StaticClass();
}
