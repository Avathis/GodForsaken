// Fill out your copyright notice in the Description page of Project Settings.


#include "GameplayAbilitySystem/GFAbilitySystemGlobals.h"

#include "GameplayAbilitySystem/GFAbilityTypes.h"

FGameplayAbilityActorInfo* UGFAbilitySystemGlobals::AllocAbilityActorInfo() const
{
	return new FGFGameplayAbilityActorInfo();
}

FGameplayEffectContext* UGFAbilitySystemGlobals::AllocGameplayEffectContext() const
{
	return new FGFGameplayEffectContext();
}
