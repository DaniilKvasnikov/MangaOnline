// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCharacter.h"
#include <EnhancedInputComponent.h>

// Sets default values
AMainCharacter::AMainCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMainCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMainCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMainCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	UEnhancedInputComponent* Input = Cast<UEnhancedInputComponent>(PlayerInputComponent);
	Input->BindAction(ShootAction, ETriggerEvent::Triggered, this, &AMainCharacter::Shoot);
}

void AMainCharacter::Shoot(const FInputActionValue& Value)
{
	bool BoolValue = Value.Get<bool>();
}

