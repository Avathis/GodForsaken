// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnhancedInputComponent.h"
#include "GameplayTagContainer.h"
#include "InputTriggers.h"
#include "GFInputConfig.h"
#include "GFEnhancedInputComponent.generated.h"

/**
 * 

*/
class UEnhancedInputLocalPlayerSubsystem;
class UInputAction;
class UObject;

UCLASS()
class GODFORSAKEN_API UGFEnhancedInputComponent : public UEnhancedInputComponent
{
	GENERATED_BODY()

public:
	UGFEnhancedInputComponent(const FObjectInitializer& ObjectInitializer);

	void AddInputMappings(const UGFInputConfig* InputConfig, UEnhancedInputLocalPlayerSubsystem* InputSubsystem) const;
	void RemoveInputMappings(const UGFInputConfig* InputConfig, UEnhancedInputLocalPlayerSubsystem* InputSubsystem) const;

	template<class UserClass, typename FuncType>
	void BindNativeAction(const UGFInputConfig* InputConfig, const FGameplayTag& InputTag, ETriggerEvent TriggerEvent, UserClass* Object, FuncType Func, bool bLogIfNotFound);

	template<class UserClass, typename TriggeredFuncType>
	void BindAbilityActions(const UGFInputConfig* InputConfig, UserClass* Object, TriggeredFuncType TriggeredFunc,TArray<uint32>& BindHandles);

	void RemoveBinds(TArray<uint32>& BindHandles);
};

template <class UserClass, typename FuncType>
void UGFEnhancedInputComponent::BindNativeAction(const UGFInputConfig* InputConfig, const FGameplayTag& InputTag,
	ETriggerEvent TriggerEvent, UserClass* Object, FuncType Func, bool bLogIfNotFound)
{
	check(InputConfig);
	if (const UInputAction* IA = InputConfig->FindNativeInputActionForTag(InputTag, bLogIfNotFound))
	{
		BindAction(IA, TriggerEvent, Object, Func);
	}
}

template <class UserClass, typename TriggeredFuncType>
void UGFEnhancedInputComponent::BindAbilityActions(const UGFInputConfig* InputConfig, UserClass* Object,
	TriggeredFuncType TriggeredFunc, TArray<uint32>& BindHandles)
{
	check(InputConfig);

	for (const FGFInputAction& Action : InputConfig->AbilityInputActions)
	{
		if (Action.InputAction && Action.InputTag.IsValid())
		{
			if (TriggeredFunc)
			{
				BindHandles.Add(BindAction(Action.InputAction, ETriggerEvent::Triggered, Object, TriggeredFunc).GetHandle());
			}
		}
	}
}
