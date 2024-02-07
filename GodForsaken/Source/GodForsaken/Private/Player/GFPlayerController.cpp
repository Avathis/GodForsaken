// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/GFPlayerController.h"

#include "BaseClasses/Characters/GFCharacter.h"
#include "Blueprint/UserWidget.h"
#include "UI/GFHUDWidget.h"

UGFAbilitySystemComponent* AGFPlayerController::GetGFAbilitySystemComponent() const
{
	const AGFCharacter* Char = CastChecked<AGFCharacter>(GetPawn(), ECastCheckedType::NullAllowed);
	return Char ? Char->GetAbilitySystemComponent() : nullptr;
}

void AGFPlayerController::SetHealthPercentage(float NewValue)
{
	if(HUDWidget)
	{
		HUDWidget->SetHealthPercentage(NewValue);
	}
}

void AGFPlayerController::SetStaminaPercentage(float NewValue)
{
	if(HUDWidget)
	{
		HUDWidget->SetStaminaPercentage(NewValue);
	}
}

void AGFPlayerController::SetSpecialPercentage(float NewValue)
{
	if(HUDWidget)
	{
		HUDWidget->SetSpecialPercentage(NewValue);
	}
}

void AGFPlayerController::BeginPlay()
{
	Super::BeginPlay();

	HUDWidget = Cast<UGFHUDWidget>(CreateWidget(this,HUDWidgetClass, FName("HUD")));
	if(HUDWidget)
	{
		HUDWidget->AddToViewport();
	}
}

void AGFPlayerController::PostProcessInput(const float DeltaTime, const bool bGamePaused)
{
	if(UGFAbilitySystemComponent* GFASC = GetGFAbilitySystemComponent())
	{
		GFASC->ProcessAbilityInput(DeltaTime, bGamePaused);
	}
	Super::PostProcessInput(DeltaTime, bGamePaused);
}
