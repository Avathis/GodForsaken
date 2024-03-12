// Fill out your copyright notice in the Description page of Project Settings.


#include "GameplayAbilitySystem/CalculationClasses/GFGameplayPoiseMMC.h"

#include "GameplayAbilitySystem/GFGameplayAbility.h"

float UGFGameplayPoiseMMC::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	const UGFGameplayAbility* Ability = Cast<UGFGameplayAbility>(Spec.GetContext().GetAbilityInstance_NotReplicated());
    
    	if (!Ability)
    	{
    		return 0.0f;
    	}
    
    	return -Ability->Poise.GetValueAtLevel(Ability->GetAbilityLevel());
}
