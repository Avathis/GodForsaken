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
	
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
	UGFAbilitySystemComponent* GetGFAbilitySystemComponent() const;

protected:
	virtual void BeginPlay() override;

	virtual void PostProcessInput(const float DeltaTime, const bool bGamePaused) override;
};
