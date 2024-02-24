// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GFAbilityTypes.h"
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
public:
	UGFGameplayAbility();

	UFUNCTION(BlueprintCallable, BlueprintPure)
	class AGFCharacter* GetGFCharacter();

	EGFAbilityActivationGroup GetActivationGroup() const {return ActivationGroup;}

	EGFAbilityActivationPolicy GetActivationPolicy() const {return ActivationPolicy;}

	UFUNCTION(BlueprintCallable, Category = "Ability")
	FActiveGameplayEffectHandle GetGrantedByEffectHandle();

	const FGFGameplayAbilityActorInfo* GetGFActorInfo() const;
	
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Ability")
	const FGFGameplayAbilityActorInfo K2_GetGFActorInfo() const;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Ability")
	AGFCharacter* GetGFCharacterFromActorInfo() const;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Ability")
	UGFAbilitySystemComponent* GetGFAbilitySystemComponentFromActorInfo() const;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Ability")
	AGFPlayerController* GetGFPlayerControllerFromActorInfo() const;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Ability")
	UGFCharacterMovementComponent* GetGFCharacterMovementComponentFromActorInfo();

	virtual void OnAvatarSet(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec) override;

	virtual void ApplyCooldown(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo) const override;

	virtual const FGameplayTagContainer* GetCooldownTags() const override;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Ability Data")
	bool bActivateAbilityOnGranted = false;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Cooldown")
	FScalableFloat CooldownDuration;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Cooldown")
	FGameplayTagContainer CooldownTags;
	
	UPROPERTY(Transient)
	FGameplayTagContainer TempCooldownTags;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Cost")
	FScalableFloat Cost;

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	EGFAbilityActivationPolicy ActivationPolicy;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly)
	EGFAbilityActivationGroup ActivationGroup;
};
