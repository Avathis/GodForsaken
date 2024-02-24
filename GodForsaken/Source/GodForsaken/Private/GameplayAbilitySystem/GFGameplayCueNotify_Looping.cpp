// Fill out your copyright notice in the Description page of Project Settings.


#include "GameplayAbilitySystem/GFGameplayCueNotify_Looping.h"

#include "GameplayAbilitySystem/GFAbilityTypes.h"

void AGFGameplayCueNotify_Looping::HandleGameplayCue(AActor* MyTarget, EGameplayCueEvent::Type EventType,
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

	
	Super::HandleGameplayCue(MyTarget, EventType, Parameters);
}
