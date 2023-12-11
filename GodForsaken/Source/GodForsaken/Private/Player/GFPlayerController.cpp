// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/GFPlayerController.h"

#include "BaseClasses/Characters/GFCharacter.h"

UGFAbilitySystemComponent* AGFPlayerController::GetGFAbilitySystemComponent() const
{
	const AGFCharacter* Char = CastChecked<AGFCharacter>(GetPawn(), ECastCheckedType::NullAllowed);
	return Char ? Char->GetAbilitySystemComponent() : nullptr;
}

void AGFPlayerController::BeginPlay()
{
	Super::BeginPlay();
}

void AGFPlayerController::PostProcessInput(const float DeltaTime, const bool bGamePaused)
{
	if(UGFAbilitySystemComponent* GFASC = GetGFAbilitySystemComponent())
	{
		GFASC->ProcessAbilityInput(DeltaTime, bGamePaused);
	}
	Super::PostProcessInput(DeltaTime, bGamePaused);
}
