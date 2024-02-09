// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemGlobals.h"
#include "GFAbilitySystemGlobals.generated.h"

/**
 * 
 */
UCLASS()
class GODFORSAKEN_API UGFAbilitySystemGlobals : public UAbilitySystemGlobals
{
	GENERATED_BODY()

	virtual FGameplayAbilityActorInfo* AllocAbilityActorInfo() const override;

	virtual FGameplayEffectContext* AllocGameplayEffectContext() const override;
};
