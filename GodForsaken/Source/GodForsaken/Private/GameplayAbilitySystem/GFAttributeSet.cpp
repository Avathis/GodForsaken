// Fill out your copyright notice in the Description page of Project Settings.


#include "GameplayAbilitySystem/GFAttributeSet.h"

#include "AbilitySystemBlueprintLibrary.h"
#include "GameplayEffectExtension.h"
#include "BaseClasses/Characters/GFCharacter.h"

UGFAttributeSet::UGFAttributeSet()
{
}

void UGFAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);
	FGameplayEffectContextHandle Context = Data.EffectSpec.GetContext();
	UAbilitySystemComponent* Source = Context.GetOriginalInstigatorAbilitySystemComponent();
	const FGameplayTagContainer& SourceTags = *Data.EffectSpec.CapturedSourceTags.GetAggregatedTags();
	FGameplayTagContainer SpecAssetTags;
	Data.EffectSpec.GetAllAssetTags(SpecAssetTags);

	// Get the Target actor, which should be our owner
	AActor* TargetActor = nullptr;
	AController* TargetController = nullptr;
	AGFCharacter* TargetCharacter = nullptr;
	
	if (Data.Target.AbilityActorInfo.IsValid() && Data.Target.AbilityActorInfo->AvatarActor.IsValid())
	{
		TargetActor = Data.Target.AbilityActorInfo->AvatarActor.Get();
		TargetController = Data.Target.AbilityActorInfo->PlayerController.Get();
		TargetCharacter = Cast<AGFCharacter>(TargetActor);
	}

	// Get the Source actor
	AActor* SourceActor = nullptr;
	AController* SourceController = nullptr;
	AGFCharacter* SourceCharacter = nullptr;
	if (Source && Source->AbilityActorInfo.IsValid() && Source->AbilityActorInfo->AvatarActor.IsValid())
	{
		SourceActor = Source->AbilityActorInfo->AvatarActor.Get();
		SourceController = Source->AbilityActorInfo->PlayerController.Get();
		if (SourceController == nullptr && SourceActor != nullptr)
		{
			if (APawn* Pawn = Cast<APawn>(SourceActor))
			{
				SourceController = Pawn->GetController();
			}
		}
		
		if (SourceController)
		{
			SourceCharacter = Cast<AGFCharacter>(SourceController->GetPawn());
		}
		else
		{
			SourceCharacter = Cast<AGFCharacter>(SourceActor);
		}

		if (Context.GetEffectCauser())
		{
			SourceActor = Context.GetEffectCauser();
		}
	}
	if(Data.EvaluatedData.Attribute == GetPoiseAttribute())
	{
		if(GetPoise()<=0.f)
		{
			if(TargetActor)
			{
				FGameplayEventData EventData = FGameplayEventData();
				EventData.Instigator = TargetActor;
				EventData.ContextHandle = Context;
				UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(TargetActor,FGameplayTag::RequestGameplayTag("Ability.Hit.React"),EventData);
			}
			
		}
	}
}

void UGFAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	if(Attribute == GetHealthAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 0, GetMaxHealth());
	}
	if(Attribute == GetSpecialAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 0, GetMaxSpecial());
	}
	if(Attribute == GetStaminaAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 0, GetMaxStamina());
	}
	if(Attribute == GetEnergyAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 0, GetMaxEnergy());
	}
	if(Attribute == GetPoiseAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 0, GetMaxPoise());
	}
	Super::PreAttributeChange(Attribute, NewValue);
}

void UGFAttributeSet::PreAttributeBaseChange(const FGameplayAttribute& Attribute, float& NewValue) const
{
	if(Attribute == GetHealthAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 0, GetMaxHealth());
	}
	if(Attribute == GetSpecialAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 0, GetMaxSpecial());
	}
	if(Attribute == GetStaminaAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 0, GetMaxStamina());
	}
	if(Attribute == GetEnergyAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 0, GetMaxEnergy());
	}
	if(Attribute == GetPoiseAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 0, GetMaxPoise());
	}
	Super::PreAttributeBaseChange(Attribute, NewValue);
}
