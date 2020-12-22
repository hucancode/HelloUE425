// Copyright Epic Games, Inc. All Rights Reserved.

#include "HelloUE425GameMode.h"
#include "HelloUE425PlayerController.h"
#include "HelloUE425Character.h"
#include "UObject/ConstructorHelpers.h"

AHelloUE425GameMode::AHelloUE425GameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AHelloUE425PlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}