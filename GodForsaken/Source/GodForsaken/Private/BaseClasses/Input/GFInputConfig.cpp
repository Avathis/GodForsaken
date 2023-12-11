// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseClasses/Input/GFInputConfig.h"

UGFInputConfig::UGFInputConfig(const FObjectInitializer& ObjectInitializer)
{
}

const UInputAction* UGFInputConfig::FindNativeInputActionForTag(const FGameplayTag& InputTag, bool bLogNotFound) const
{
	for (const FGFInputAction& Action : NativeInputActions)
	{
		if (Action.InputAction && (Action.InputTag == InputTag))
		{
			return Action.InputAction;
		}
	}

	if (bLogNotFound)
	{
		UE_LOG(LogTemp, Error, TEXT("Can't find NativeInputAction for InputTag [%s] on InputConfig [%s]."), *InputTag.ToString(), *GetNameSafe(this));
	}

	return nullptr;
}

const UInputAction* UGFInputConfig::FindAbilityInputActionForTag(const FGameplayTag& InputTag, bool bLogNotFound) const
{
	for (const FGFInputAction& Action : AbilityInputActions)
	{
		if (Action.InputAction && (Action.InputTag == InputTag))
		{
			return Action.InputAction;
		}
	}

	if (bLogNotFound)
	{
		UE_LOG(LogTemp, Error, TEXT("Can't find AbilityInputAction for InputTag [%s] on InputConfig [%s]."), *InputTag.ToString(), *GetNameSafe(this));
	}

	return nullptr;
}

FGameplayTag UGFInputConfig::FindInputTagForNativeInputAction(const UInputAction* InputAction, bool bLogNotFound) const
{
	for (const FGFInputAction& Action : NativeInputActions)
	{
		if(Action.InputAction)
		{
			if(Action.InputAction==InputAction)
			{
				return Action.InputTag;
			}
		}
	}
	if (bLogNotFound)
	{
		UE_LOG(LogTemp, Error, TEXT("Can't find AbilityInputTag for Action on InputConfig [%s]."),*GetNameSafe(this));
	}
	return FGameplayTag::RequestGameplayTag("");
}

FGameplayTag UGFInputConfig::FindInputTagForAbilityInputAction(const UInputAction* InputAction, bool bLogNotFound) const
{
	for (const FGFInputAction& Action : AbilityInputActions)
	{
		if(Action.InputAction)
		{
			if(Action.InputAction==InputAction)
			{
				return Action.InputTag;
			}
		}
	}
	if (bLogNotFound)
	{
		UE_LOG(LogTemp, Error, TEXT("Can't find AbilityInputTag for Action on InputConfig [%s]."),*GetNameSafe(this));
	}
	return FGameplayTag::RequestGameplayTag("");
}
