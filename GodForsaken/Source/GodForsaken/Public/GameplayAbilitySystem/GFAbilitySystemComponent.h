// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "GFGameplayAbility.h"
#include "NativeGameplayTags.h"
#include "GFAbilitySystemComponent.generated.h"

/**
 * 
 */
UCLASS()
class GODFORSAKEN_API UGFAbilitySystemComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()
public:

	UGFAbilitySystemComponent();

	typedef TFunctionRef<bool(const UGFGameplayAbility* GFAbility, FGameplayAbilitySpecHandle Handle)> TShouldCancelAbilityFunc;
	void CancelAbilitiesByFunc(TShouldCancelAbilityFunc ShouldCancelFunc, bool bReplicateCancelAbility);

	void CancelInputActivatedAbilities(bool bReplicateCancelAbility);

	void AbilityInputTagPressed(const FGameplayTag& InputTag);
	void AbilityInputTagReleased(const FGameplayTag& InputTag);

	void ProcessAbilityInput(float DeltaTime, bool bGamePaused);
	void ClearAbilityInput();

	bool IsActivationGroupBlocked(EGFAbilityActivationGroup Group) const;
	void AddAbilityToActivationGroup(EGFAbilityActivationGroup Group, UGFGameplayAbility* Ability);
	void RemoveAbilityFromActivationGroup(EGFAbilityActivationGroup Group, UGFGameplayAbility* Ability);
	void CancelActivationGroupAbilities(EGFAbilityActivationGroup Group, UGFGameplayAbility* IgnoreAbility, bool bReplicateCancelAbility);

	virtual void OnGiveAbility(FGameplayAbilitySpec& AbilitySpec) override;

	

protected:

	void TryActivateAbilitiesOnSpawn();

	virtual void AbilitySpecInputPressed(FGameplayAbilitySpec& Spec) override;
	virtual void AbilitySpecInputReleased(FGameplayAbilitySpec& Spec) override;

	virtual void NotifyAbilityActivated(const FGameplayAbilitySpecHandle Handle, UGameplayAbility* Ability) override;
	virtual void NotifyAbilityFailed(const FGameplayAbilitySpecHandle Handle, UGameplayAbility* Ability, const FGameplayTagContainer& FailureReason) override;
	virtual void NotifyAbilityEnded(FGameplayAbilitySpecHandle Handle, UGameplayAbility* Ability, bool bWasCancelled) override;
	virtual void ApplyAbilityBlockAndCancelTags(const FGameplayTagContainer& AbilityTags, UGameplayAbility* RequestingAbility, bool bEnableBlockTags, const FGameplayTagContainer& BlockTags, bool bExecuteCancelTags, const FGameplayTagContainer& CancelTags) override;
	virtual void HandleChangeAbilityCanBeCanceled(const FGameplayTagContainer& AbilityTags, UGameplayAbility* RequestingAbility, bool bCanBeCanceled) override;
	
	/*UPROPERTY()
	TObjectPtr<UGFAbilityTagRelationshipMapping> TagRelationshipMapping;*/
	
	TArray<FGameplayAbilitySpecHandle> InputPressedSpecHandles;

	TArray<FGameplayAbilitySpecHandle> InputReleasedSpecHandles;
	
	TArray<FGameplayAbilitySpecHandle> InputHeldSpecHandles;

	int32 ActivationGroupCounts[(uint8)EGFAbilityActivationGroup::MAX];
};
