// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GFPlayerController.generated.h"

/**
 * 
 */
class AGFPlayerController;
UCLASS()
class GODFORSAKEN_API AGFPlayerController : public APlayerController
{
	GENERATED_BODY()

public:

	//UPROPERTIES
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "HUD")
	TSubclassOf<UUserWidget> HUDWidgetClass;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "HUD")
	class UGFHUDWidget* HUDWidget;
	
	//UFUNCTIONS
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
	UGFAbilitySystemComponent* GetGFAbilitySystemComponent() const;

	UFUNCTION(BlueprintCallable, Category = "HUD")
	void SetHealthPercentage(float NewValue);

	UFUNCTION(BlueprintCallable, Category = "HUD")
	void SetStaminaPercentage(float NewValue);

	UFUNCTION(BlueprintCallable, Category = "HUD")
	void SetSpecialPercentage(float NewValue);

protected:
	virtual void BeginPlay() override;

	virtual void PostProcessInput(const float DeltaTime, const bool bGamePaused) override;
};
