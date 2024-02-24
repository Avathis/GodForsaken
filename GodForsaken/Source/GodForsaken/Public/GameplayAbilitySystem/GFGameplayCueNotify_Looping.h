// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayCueNotify_Looping.h"
#include "GFGameplayCueNotify_Looping.generated.h"

/**
 * 
 */
UCLASS()
class GODFORSAKEN_API AGFGameplayCueNotify_Looping : public AGameplayCueNotify_Looping
{
	GENERATED_BODY()

public:
	virtual void HandleGameplayCue(AActor* MyTarget, EGameplayCueEvent::Type EventType, const FGameplayCueParameters& Parameters) override;
};
