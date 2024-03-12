// Fill out your copyright notice in the Description page of Project Settings.


#include "GameplayAbilitySystem/AbilityTasks/GFTargetingFilterTask_HasTag.h"

#include "AbilitySystemComponent.h"
#include "BaseClasses/Characters/GFCharacter.h"

UGFTargetingFilterTask_HasTag::UGFTargetingFilterTask_HasTag(const FObjectInitializer& ObjectInitializer): Super(ObjectInitializer)
{
}

bool UGFTargetingFilterTask_HasTag::ShouldFilterTarget(const FTargetingRequestHandle& TargetingHandle,
                                                       const FTargetingDefaultResultData& TargetData) const
{

	if (AGFCharacter* TargetActor = Cast<AGFCharacter>(TargetData.HitResult.GetActor()))
	{
		if(UAbilitySystemComponent* ASC = TargetActor->GetAbilitySystemComponent())
		{
			FGameplayTagContainer TagContainer;
			ASC->GetOwnedGameplayTags(TagContainer);
			if(TagContainer.HasAny(TagContainerToNotHave))
			{
				return true;
			}

			if(TagContainer.HasAny(TagContainerToHave))
			{
				return false;
			}
		}
	}
	return false;
}
