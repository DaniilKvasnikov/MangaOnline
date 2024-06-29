// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include <EnhancedInputSubsystems.h>
#include "InputDataConfig.generated.h"

class UInputAction;
/**
 * 
 */
UCLASS()
class MANGAONLINE_API UInputDataConfig : public UDataAsset
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* MainAction;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* MoveAction;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* LookAction;
};
