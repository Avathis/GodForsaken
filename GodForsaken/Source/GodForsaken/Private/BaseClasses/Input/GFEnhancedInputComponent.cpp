// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseClasses/Input/GFEnhancedInputComponent.h"

UGFEnhancedInputComponent::UGFEnhancedInputComponent(const FObjectInitializer& ObjectInitializer)
{
}

void UGFEnhancedInputComponent::AddInputMappings(const UGFInputConfig* InputConfig,
	UEnhancedInputLocalPlayerSubsystem* InputSubsystem) const
{
}

void UGFEnhancedInputComponent::RemoveInputMappings(const UGFInputConfig* InputConfig,
	UEnhancedInputLocalPlayerSubsystem* InputSubsystem) const
{
}

void UGFEnhancedInputComponent::RemoveBinds(TArray<uint32>& BindHandles)
{
	for (uint32 Handle : BindHandles)
	{
		RemoveBindingByHandle(Handle);
	}
	BindHandles.Reset();
}
