// Copyright Epic Games, Inc. All Rights Reserved.

#include "CarootShooterGameMode.h"
#include "CarootShooterCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACarootShooterGameMode::ACarootShooterGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
