// Fill out your copyright notice in the Description page of Project Settings.


#include "GameplayAbilitySystem/GFGameplayCueNotify_BurstLatent.h"

#include "GameplayAbilitySystem/GFAbilityTypes.h"

void AGFGameplayCueNotify_BurstLatent::HandleGameplayCue(AActor* MyTarget, EGameplayCueEvent::Type EventType,
                                                         const FGameplayCueParameters& Parameters)
{
	const FGFGameplayEffectContext* EffectContext = static_cast<const FGFGameplayEffectContext*>(Parameters.EffectContext.Get());
	if(EffectContext)
	{
		FName Socket = EffectContext->GetSourceSocket();
		if(!Socket.IsNone())
		{
			DefaultPlacementInfo.SocketName = EffectContext->GetSourceSocket();
		}
	}
	if(EventType== EGameplayCueEvent::Removed)
	{
		GetWorld()->GetTimerManager().ClearTimer(HitStopTimerHandle);
	}
	
	Super::HandleGameplayCue(MyTarget, EventType, Parameters);

	if(HitStopTimeDelay>0&& EventType!=EGameplayCueEvent::Removed)
	{
		InitiateHitStop(MyTarget);
	}
}

bool AGFGameplayCueNotify_BurstLatent::OnExecute_Implementation(AActor* Target,
	const FGameplayCueParameters& Parameters) 
{
	return Super::OnExecute_Implementation(Target, Parameters);
}

void AGFGameplayCueNotify_BurstLatent::InitiateHitStop(AActor* Target)
{
	Target->CustomTimeDilation = 0.f;
	FTimerDelegate HitStopDelegate;
	HitStopDelegate.BindUFunction(this, "CancelHitStop", Target);
	GetWorld()->GetTimerManager().SetTimer(HitStopTimerHandle, HitStopDelegate, HitStopTimeDelay,false);
}

void AGFGameplayCueNotify_BurstLatent::CancelHitStop(AActor* Target)
{
	Target->CustomTimeDilation = 1.f;
}
