 // Fill out your copyright notice in the Description page of Project Settings.


#include "GameplayAbilitySystem/GFGameplayCueNotify_Burst.h"

#include "GameplayAbilitySystem/GFGameplayCueSourceObject.h"


#if WITH_EDITOR
#include "Misc/DataValidation.h"
#endif

//#include UE_INLINE_GENERATED_CPP_BY_NAME(GFGameplayCueNotify_Burst)
UGFGameplayCueNotify_Burst::UGFGameplayCueNotify_Burst()
{
	
}

void UGFGameplayCueNotify_Burst::HandleGameplayCue(AActor* MyTarget, EGameplayCueEvent::Type EventType,
	const FGameplayCueParameters& Parameters)
{
	const UGFGameplayCueSourceObject* Object = Cast<UGFGameplayCueSourceObject>(Parameters.SourceObject.Get());
	if(Object)
	{
		DefaultPlacementInfo.SocketName = Object->SocketName;
	}

	Super::HandleGameplayCue(MyTarget, EventType, Parameters);
}

bool UGFGameplayCueNotify_Burst::OnExecute_Implementation(AActor* Target,
                                                          const FGameplayCueParameters& Parameters) const
{
	return Super::OnExecute_Implementation(Target, Parameters);
}

#if WITH_EDITOR
EDataValidationResult UGFGameplayCueNotify_Burst::IsDataValid(FDataValidationContext& Context) const
{
	return Super::IsDataValid(Context);
}
#endif // #if WITH_EDITOR