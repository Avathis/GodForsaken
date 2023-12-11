// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "GFGameplayAbility.generated.h"

/**
 * 
*/

class AGFPlayableCharacter;
UENUM(BlueprintType)
enum class EGFAbilityActivationPolicy : uint8
{
	OnInputTriggered,
	
	WhileInputActive,
	
	OnSpawn
};

UENUM(BlueprintType)
enum class EGFAbilityActivationGroup : uint8
{
	Independent,
	
	Exclusive_Replaceable,
	
	Exclusive_Blocking,

	MAX	UMETA(Hidden)
};


UENUM(BlueprintType)
enum class AbilityUpgrades : uint8
{
	Normal
};

UCLASS()
class GODFORSAKEN_API UGFGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()

	UGFGameplayAbility();

public:
	EGFAbilityActivationGroup GetActivationGroup() const {return ActivationGroup;}

	EGFAbilityActivationPolicy GetActivationPolicy() const {return ActivationPolicy;}

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	EGFAbilityActivationPolicy ActivationPolicy;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly)
	EGFAbilityActivationGroup ActivationGroup;
};
