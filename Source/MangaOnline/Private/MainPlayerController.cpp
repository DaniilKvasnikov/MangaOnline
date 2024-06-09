// Fill out your copyright notice in the Description page of Project Settings.


#include "MainPlayerController.h"
#include <EnhancedInputSubsystems.h>

void AMainPlayerController::BeginPlay()
{
	if (ULocalPlayer* PlayerController = Cast<ULocalPlayer>(Player))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController))
		{
			Subsystem->ClearAllMappings();
			Subsystem->AddMappingContext(InputMapping, 0);
		}
	}
}
