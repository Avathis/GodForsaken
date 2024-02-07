// Fill out your copyright notice in the Description page of Project Settings.


#include "GameplayAbilitySystem/CalculationClasses/GFGameplayDamageEEC.h"
#include "GameplayAbilitySystem/GFAttributeSet.h"
#include "Kismet/KismetMathLibrary.h"

struct FDamageStatics
{
	DECLARE_ATTRIBUTE_CAPTUREDEF(Energy);
	DECLARE_ATTRIBUTE_CAPTUREDEF(Health);
	DECLARE_ATTRIBUTE_CAPTUREDEF(Special);
	
	DECLARE_ATTRIBUTE_CAPTUREDEF(Armor);
	

	FDamageStatics()
	{
		DEFINE_ATTRIBUTE_CAPTUREDEF(UGFAttributeSet, Energy, Source, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(UGFAttributeSet, Health, Source, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(UGFAttributeSet, Special, Source, false);
		
		DEFINE_ATTRIBUTE_CAPTUREDEF(UGFAttributeSet, Armor, Target, false);
		
	}
};

const FDamageStatics& DamageStatics()
{
	static FDamageStatics Statics;
	return Statics;
}

UGFGameplayDamageEEC::UGFGameplayDamageEEC()
{
	RelevantAttributesToCapture.Add(FDamageStatics().HealthDef);
	RelevantAttributesToCapture.Add(FDamageStatics().EnergyDef);
	RelevantAttributesToCapture.Add(FDamageStatics().SpecialDef);
	
	RelevantAttributesToCapture.Add(FDamageStatics().ArmorDef);
}

void UGFGameplayDamageEEC::Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams,
                                                  FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const
{
	UAbilitySystemComponent* TargetAbilitySystemComponent = ExecutionParams.GetTargetAbilitySystemComponent();
	UAbilitySystemComponent* SourceAbilitySystemComponent = ExecutionParams.GetSourceAbilitySystemComponent();

	AActor* SourceActor = SourceAbilitySystemComponent ? SourceAbilitySystemComponent->GetAvatarActor() : nullptr;
	AActor* TargetActor = TargetAbilitySystemComponent ? TargetAbilitySystemComponent->GetAvatarActor() : nullptr;

	const FGameplayEffectSpec& Spec = ExecutionParams.GetOwningSpec();

	// Gather the tags from the source and target as that can affect which buffs should be used
	const FGameplayTagContainer* SourceTags = Spec.CapturedSourceTags.GetAggregatedTags();
	const FGameplayTagContainer* TargetTags = Spec.CapturedTargetTags.GetAggregatedTags();

	FAggregatorEvaluateParameters EvaluationParameters;
	EvaluationParameters.SourceTags = SourceTags;
	EvaluationParameters.TargetTags = TargetTags;

	float Damage = FMath::Max<float>(Spec.GetSetByCallerMagnitude(FGameplayTag::RequestGameplayTag(FName("Data.Damage")),false,-1.f),0.0f);
	float MitigatedDamage = 0.f;
	if (Damage>0)
	{
		float Armor = 0.f;
		ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(FDamageStatics().ArmorDef, EvaluationParameters, Armor);
		MitigatedDamage = Damage*(1.f-Armor/100);
		OutExecutionOutput.AddOutputModifier(FGameplayModifierEvaluatedData(FDamageStatics().HealthProperty, EGameplayModOp::Additive, -MitigatedDamage));
	}
}
