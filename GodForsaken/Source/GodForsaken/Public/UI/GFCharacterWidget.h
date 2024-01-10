// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GFCharacterWidget.generated.h"

/**
 * 
 */
UCLASS()
class GODFORSAKEN_API UGFCharacterWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetHealthPercentage(float HealthPercentage);
	
};
