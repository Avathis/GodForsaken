// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/GFBTDecorator_CanActivateAbility.h"

#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"
#include "GameplayAbilitySpec.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Object.h"

UGFBTDecorator_CanActivateAbility::UGFBTDecorator_CanActivateAbility(const FObjectInitializer& ObjectInitializer)
{
	NodeName = "Can Activate Ability";

	INIT_DECORATOR_NODE_NOTIFY_FLAGS();

	AvatarActor.AddObjectFilter(this, GET_MEMBER_NAME_CHECKED(UGFBTDecorator_CanActivateAbility, AvatarActor),AActor::StaticClass());

	AvatarActor.SelectedKeyName = FBlackboard::KeySelf;
}

bool UGFBTDecorator_CanActivateAbility::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp,
	uint8* NodeMemory) const
{
	const UBlackboardComponent* BlackboardComp = OwnerComp.GetBlackboardComponent();
	if (!BlackboardComp)
	{
		return false;
	}

	const AActor* SelectedActor = Cast<AActor>(BlackboardComp->GetValue<UBlackboardKeyType_Object>(AvatarActor.GetSelectedKeyID()));
	if (!SelectedActor)
	{
		return false;
	}

	UAbilitySystemComponent* ASC = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(SelectedActor);
	if (!ASC)
	{
		return false;
	}

	TArray<FGameplayAbilitySpec> AbilitySpecs = ASC->GetActivatableAbilities();

	const FGameplayAbilityActorInfo* ActorInfo = ASC->AbilityActorInfo.Get();

	for(FGameplayAbilitySpec Spec : AbilitySpecs)
	{
		if(Spec.Ability == nullptr)
		{
			continue;
		}
		if(Spec.Ability->AbilityTags.HasAll(FGameplayTagContainer(AbilityTag)))
		{
			return Spec.Ability->CanActivateAbility(Spec.Handle, ActorInfo);
		}
	}

	return false;
}

void UGFBTDecorator_CanActivateAbility::InitializeFromAsset(UBehaviorTree& Asset)
{
	Super::InitializeFromAsset(Asset);
	const UBlackboardData* BBAsset = GetBlackboardAsset();
	if(ensure(BBAsset))
	{
		AvatarActor.ResolveSelectedKey(*BBAsset);
	}
}

FString UGFBTDecorator_CanActivateAbility::GetStaticDescription() const
{
	return FString::Printf(TEXT("%s: AbilityTag: %s"), *Super::GetStaticDescription(), *AbilityTag.ToString());
}
