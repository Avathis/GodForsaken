// Fill out your copyright notice in the Description page of Project Settings.


#include "GameplayAbilitySystem/GFGameplayAbility.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemLog.h"
#include "BaseClasses/Characters/GFCharacter.h"

#define ENSURE_ABILITY_IS_INSTANTIATED_OR_RETURN(FunctionName, ReturnValue)																				\
{																																						\
if (!ensure(IsInstantiated()))																														\
{																																					\
ABILITY_LOG(Error, TEXT("%s: " #FunctionName " cannot be called on a non-instanced ability. Check the instancing policy."), *GetPathName());	\
return ReturnValue;																																\
}																																					\
}

UGFGameplayAbility::UGFGameplayAbility()
{
}

AGFCharacter* UGFGameplayAbility::GetGFCharacter()
{
	AGFCharacter* Character = CastChecked<AGFCharacter>(GetOwningActorFromActorInfo());
	if(Character)
	{
		return Character;
	}
	ABILITY_LOG(Error,TEXT("Character isn't of class AGFCharacter"));
	return nullptr;
}

FActiveGameplayEffectHandle UGFGameplayAbility::GetGrantedByEffectHandle()
{
	ENSURE_ABILITY_IS_INSTANTIATED_OR_RETURN(GetGrantedByEffectHandle, FActiveGameplayEffectHandle());
	check(CurrentActorInfo);
	if (CurrentActorInfo)
	{
		UAbilitySystemComponent* const AbilitySystemComponent = GetAbilitySystemComponentFromActorInfo_Checked();
		FActiveGameplayEffectHandle ActiveHandle = AbilitySystemComponent->FindActiveGameplayEffectHandle(GetCurrentAbilitySpecHandle());
		return ActiveHandle;
	}
	return FActiveGameplayEffectHandle();
}

const FGFGameplayAbilityActorInfo* UGFGameplayAbility::GetGFActorInfo() const

{
	return static_cast<const FGFGameplayAbilityActorInfo*>(CurrentActorInfo);
}

const FGFGameplayAbilityActorInfo UGFGameplayAbility::K2_GetGFActorInfo() const

{
	return *static_cast<const FGFGameplayAbilityActorInfo*>(CurrentActorInfo);
}

AGFCharacter* UGFGameplayAbility::GetGFCharacterFromActorInfo() const
{
	const FGFGameplayAbilityActorInfo* GFActorInfo = GetGFActorInfo();
	return GFActorInfo ? GFActorInfo->GetGFCharacter() : nullptr;
}

UGFAbilitySystemComponent* UGFGameplayAbility::GetGFAbilitySystemComponentFromActorInfo() const
{
	const FGFGameplayAbilityActorInfo* GFActorInfo = GetGFActorInfo();
	return GFActorInfo ? GFActorInfo->GetGFAbilitySystemComponent() : nullptr;
}

AGFPlayerController* UGFGameplayAbility::GetGFPlayerControllerFromActorInfo() const
{
	const FGFGameplayAbilityActorInfo* GFActorInfo = GetGFActorInfo();
	return GFActorInfo ? GFActorInfo->GetGFPlayerController() : nullptr;
}

UGFCharacterMovementComponent* UGFGameplayAbility::GetGFCharacterMovementComponentFromActorInfo()
{
	const FGFGameplayAbilityActorInfo* GFActorInfo = GetGFActorInfo();
	return GFActorInfo ? GFActorInfo->GetGFCharacterMovementComponent() : nullptr;
}

void UGFGameplayAbility::OnAvatarSet(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec)
{
	Super::OnAvatarSet(ActorInfo, Spec);
	if (bActivateAbilityOnGranted)
	{
		ActorInfo->AbilitySystemComponent->TryActivateAbility(Spec.Handle, false);
	}
}

void UGFGameplayAbility::ApplyCooldown(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo) const
{
	UGameplayEffect* CooldownGE = GetCooldownGameplayEffect();
	if (CooldownGE)
	{
		FGameplayEffectSpecHandle SpecHandle = MakeOutgoingGameplayEffectSpec(CooldownGE->GetClass(), GetAbilityLevel());
		SpecHandle.Data.Get()->DynamicGrantedTags.AppendTags(CooldownTags);
		ApplyGameplayEffectSpecToOwner(Handle, ActorInfo, ActivationInfo, SpecHandle);
	}
}

const FGameplayTagContainer* UGFGameplayAbility::GetCooldownTags() const
{
	FGameplayTagContainer* MutableTags = const_cast<FGameplayTagContainer*>(&TempCooldownTags);
	MutableTags->Reset(); // MutableTags writes to the TempCooldownTags on the CDO so clear it in case the ability cooldown tags change (moved to a different slot)
	if (const FGameplayTagContainer* ParentTags = Super::GetCooldownTags())
	{
		MutableTags->AppendTags(*ParentTags);
	}
	MutableTags->AppendTags(CooldownTags);
	return MutableTags;
}
