// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include <EnhancedInputSubsystems.h>

#include "MainCharacter.generated.h"

class UInputAction;

UCLASS()
class MANGAONLINE_API AMainCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AMainCharacter();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UInputAction* ShootAction;

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION()
	void Shoot(const FInputActionValue& Value);
};
