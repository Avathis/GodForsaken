// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayCueNotify_Burst.h"
#include "GFGameplayCueNotify_Burst.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, Category = "GameplayCueNotify", Meta = (ShowWorldContextPin, DisplayName = "GCN GFBurst", ShortTooltip = "A one-off GameplayCueNotify that is never spawned into the world."))

class GODFORSAKEN_API UGFGameplayCueNotify_Burst : public UGameplayCueNotify_Burst
{
	GENERATED_BODY()

public:
	
	UGFGameplayCueNotify_Burst();

	virtual void HandleGameplayCue(AActor* MyTarget, EGameplayCueEvent::Type EventType, const FGameplayCueParameters& Parameters) override;

protected:
	virtual bool OnExecute_Implementation(AActor* Target, const FGameplayCueParameters& Parameters) const override;
	
#if WITH_EDITOR
	virtual EDataValidationResult IsDataValid(class FDataValidationContext& Context) const override;
#endif // #if WITH_EDITOR

	
};
