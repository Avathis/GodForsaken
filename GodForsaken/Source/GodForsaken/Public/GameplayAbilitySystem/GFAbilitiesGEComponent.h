// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayEffectComponents/AbilitiesGameplayEffectComponent.h"
#include "GFAbilitiesGEComponent.generated.h"

/**
 * 
 */
UCLASS()
class GODFORSAKEN_API UGFAbilitiesGEComponent : public UAbilitiesGameplayEffectComponent
{
	GENERATED_BODY()

protected:

	virtual void GrantAbilities(FActiveGameplayEffectHandle ActiveGEHandle) const override;

	UPROPERTY(EditDefaultsOnly, Category = GrantAbilities)
	TArray<FGameplayTag> GrantedAbilityTags;
	
};
