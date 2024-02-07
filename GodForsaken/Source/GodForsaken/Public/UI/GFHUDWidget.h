// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GFHUDWidget.generated.h"

/**
 * 
 */
UCLASS()
class GODFORSAKEN_API UGFHUDWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetHealthPercentage(float NewValue);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetMaxHealth(float NewValue);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetStaminaPercentage(float NewValue);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetMaxStamina(float NewValue);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetSpecialPercentage(float NewValue);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetMaxSpecial(float NewValue);
	
};
