// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/GFBTDecorator_HasGameplayTag.h"

#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"
#include "AbilitySystemInterface.h"
#include "GameplayTagAssetInterface.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Object.h"

class UAbilitySystemComponent;

struct FGFBTDecorator_GameplayTagMemory
{
	TWeakObjectPtr<UAbilitySystemComponent> CachedAbilitySystemComponent;

	/** Array of handles for our gameplay tag query delegates */
	TArray<TTuple<FGameplayTag, FDelegateHandle>> GameplayTagEventHandles;
};

UGFBTDecorator_HasGameplayTag::UGFBTDecorator_HasGameplayTag()
{
	NodeName = "Check Gameplay Tag";

	INIT_DECORATOR_NODE_NOTIFY_FLAGS();
	
	ActorForGameplayTagCheck.AddObjectFilter(this, GET_MEMBER_NAME_CHECKED(UGFBTDecorator_HasGameplayTag, ActorForGameplayTagCheck), AActor::StaticClass());

	ActorForGameplayTagCheck.SelectedKeyName = FBlackboard::KeySelf;
}

bool UGFBTDecorator_HasGameplayTag::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp,
	uint8* NodeMemory) const
{
	const UBlackboardComponent* BlackboardComp = OwnerComp.GetBlackboardComponent();
	if (!BlackboardComp)
	{
		return false;
	}

	const IAbilitySystemInterface* AbilitySystemInterface = Cast<IAbilitySystemInterface>(BlackboardComp->GetValue<UBlackboardKeyType_Object>(ActorForGameplayTagCheck.GetSelectedKeyID()));
	if (!AbilitySystemInterface)
	{
		return false;
	}
	FGameplayTagContainer SelectedActorTags;
	AbilitySystemInterface->GetAbilitySystemComponent()->GetOwnedGameplayTags(SelectedActorTags);

	switch (GameplayTagMatchType)
	{
	case EGFBTDecoratorMatchType::GameplayTag:
		return bExact ? SelectedActorTags.HasTagExact(GameplayTag) : SelectedActorTags.HasTag(GameplayTag);
	case EGFBTDecoratorMatchType::GameplayTagContainer:
		return MatchContainer(SelectedActorTags);
	}
	
	ensureMsgf(false, TEXT("No valid enum for GameplayTagMatchType"));
	return false;
}

FString UGFBTDecorator_HasGameplayTag::GetStaticDescription() const
{
	return Super::GetStaticDescription();
}

void UGFBTDecorator_HasGameplayTag::CleanupMemory(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory,
	EBTMemoryClear::Type CleanupType) const
{
	const FGFBTDecorator_GameplayTagMemory* MyMemory = CastInstanceNodeMemory<FGFBTDecorator_GameplayTagMemory>(NodeMemory);
	ensureMsgf(MyMemory->GameplayTagEventHandles.Num() == 0, TEXT("Dangling gameplay tag event handles for decorator %s"), *GetStaticDescription());
}

bool UGFBTDecorator_HasGameplayTag::MatchContainer(const FGameplayTagContainer& SelectedGameplayTags) const
{
	switch (GameplayTagContainerMatchingType)
	{
	case EGFBTDecoratorGameplayTagContainerMatching::HasAny:
		return GameplayTags.HasAny(GameplayTags);
	case EGFBTDecoratorGameplayTagContainerMatching::HasAll:
		return GameplayTags.HasAll(GameplayTags);
	case EGFBTDecoratorGameplayTagContainerMatching::HasAnyExact:
		return GameplayTags.HasAnyExact(GameplayTags);
	case EGFBTDecoratorGameplayTagContainerMatching::HasAllExact:
		return GameplayTags.HasAllExact(GameplayTags);
	}
	ensureMsgf(false, TEXT("No valid enum for GameplayTagContainerMatchingType"));
	return false;
}

void UGFBTDecorator_HasGameplayTag::OnGameplayTagsChanged(const FGameplayTag InTag, int32 NewCount,
	TWeakObjectPtr<UBehaviorTreeComponent> BehaviorTreeComponent, uint8* NodeMemory)
{
	if (!BehaviorTreeComponent.IsValid())
	{
		return;
	}

	ConditionalFlowAbort(*BehaviorTreeComponent, EBTDecoratorAbortRequest::ConditionResultChanged);
}

void UGFBTDecorator_HasGameplayTag::OnBecomeRelevant(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	const UBlackboardComponent* BlackboardComp = OwnerComp.GetBlackboardComponent();
	if (!BlackboardComp)
	{
		return;
	}

	const AActor* SelectedActor = Cast<AActor>(BlackboardComp->GetValue<UBlackboardKeyType_Object>(ActorForGameplayTagCheck.GetSelectedKeyID()));
	if (!SelectedActor)
	{
		return;
	}

	FGFBTDecorator_GameplayTagMemory* MyMemory = CastInstanceNodeMemory<FGFBTDecorator_GameplayTagMemory>(NodeMemory);
	MyMemory->CachedAbilitySystemComponent = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(SelectedActor);

	if (MyMemory->CachedAbilitySystemComponent.IsValid())
	{
		switch (GameplayTagMatchType)
		{
		case EGFBTDecoratorMatchType::GameplayTag:
			{
				FDelegateHandle GameplayTagEventCallbackDelegate = MyMemory->CachedAbilitySystemComponent.Get()->RegisterGameplayTagEvent(GameplayTag, EGameplayTagEventType::Type::AnyCountChange).AddUObject(
					this, &UGFBTDecorator_HasGameplayTag::OnGameplayTagsChanged, TWeakObjectPtr<UBehaviorTreeComponent>(&OwnerComp), NodeMemory);
				MyMemory->GameplayTagEventHandles.Emplace(GameplayTag, GameplayTagEventCallbackDelegate);
			}
			break;
		case EGFBTDecoratorMatchType::GameplayTagContainer:
			{
				for (const FGameplayTag& CurrentTag : GameplayTags)
				{
					FDelegateHandle GameplayTagEventCallbackDelegate = MyMemory->CachedAbilitySystemComponent.Get()->RegisterGameplayTagEvent(CurrentTag, EGameplayTagEventType::Type::AnyCountChange).AddUObject(
						this, &UGFBTDecorator_HasGameplayTag::OnGameplayTagsChanged, TWeakObjectPtr<UBehaviorTreeComponent>(&OwnerComp), NodeMemory);
					MyMemory->GameplayTagEventHandles.Emplace(CurrentTag, GameplayTagEventCallbackDelegate);
				}
			}
			break;
		}
	}
}

void UGFBTDecorator_HasGameplayTag::OnCeaseRelevant(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	FGFBTDecorator_GameplayTagMemory* MyMemory = CastInstanceNodeMemory<FGFBTDecorator_GameplayTagMemory>(NodeMemory);

	if (MyMemory->CachedAbilitySystemComponent.IsValid())
	{
		for (const TTuple<FGameplayTag, FDelegateHandle>& GameplayTagEvent : MyMemory->GameplayTagEventHandles)
		{
			MyMemory->CachedAbilitySystemComponent.Get()->RegisterGameplayTagEvent(GameplayTagEvent.Key, EGameplayTagEventType::Type::AnyCountChange).Remove(GameplayTagEvent.Value);
		}
	}

	MyMemory->GameplayTagEventHandles.Reset();
	MyMemory->CachedAbilitySystemComponent = nullptr;
}

uint16 UGFBTDecorator_HasGameplayTag::GetInstanceMemorySize() const
{
	return sizeof(FGFBTDecorator_GameplayTagMemory);
}

void UGFBTDecorator_HasGameplayTag::InitializeFromAsset(UBehaviorTree& Asset)
{
	Super::InitializeFromAsset(Asset);
	const UBlackboardData* BBAsset = GetBlackboardAsset();
	if (ensure(BBAsset))
	{
		ActorForGameplayTagCheck.ResolveSelectedKey(*BBAsset);
	}
}
