// Fill out your copyright notice in the Description page of Project Settings.


#include "GameplayAbilitySystem/CalculationClasses/GFGameplayHCostMMC.h"

#include "GameplayAbilitySystem/GFGameplayAbility.h"

float UGFGameplayHCostMMC::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	const UGFGameplayAbility* Ability = Cast<UGFGameplayAbility>(Spec.GetContext().GetAbilityInstance_NotReplicated());
	if(!Ability)
	{
		return 0.f;
	}
	return Ability->Cost.GetValueAtLevel(Ability->GetAbilityLevel());
}
