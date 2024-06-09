// Fill out your copyright notice in the Description page of Project Settings.


#include "MainGameMode.h"
#include <MainCharacter.h>
#include <MainPlayerController.h>

AMainGameMode::AMainGameMode()
{
	PlayerControllerClass = AMainPlayerController::StaticClass();
	DefaultPawnClass = AMainCharacter::StaticClass();
}
