// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/GFBTTask_ActivateAbilityByTag.h"

#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"
#include "GameplayAbilitySpec.h"
#include "GameplayAbilitySpecHandle.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Object.h"

struct FGBBTTask_ActivateAbilityByTagMemory
{
	TWeakObjectPtr<UAbilitySystemComponent> CachedAbilitySystemComponent;
	FGameplayAbilitySpecHandle CachedSpecHandle;
};

UGFBTTask_ActivateAbilityByTag::UGFBTTask_ActivateAbilityByTag()
{
	NodeName = "ActivateAbilityByTag";

	INIT_TASK_NODE_NOTIFY_FLAGS();

	TargetActorKey.AddObjectFilter(this, GET_MEMBER_NAME_CHECKED(UGFBTTask_ActivateAbilityByTag, TargetActorKey), AActor::StaticClass());

	TargetActorKey.SelectedKeyName = FBlackboard::KeySelf;
}

void UGFBTTask_ActivateAbilityByTag::InitializeFromAsset(UBehaviorTree& Asset)
{
	Super::InitializeFromAsset(Asset);
	const UBlackboardData* BBAsset = GetBlackboardAsset();
	if(ensure(BBAsset))
	{
		TargetActorKey.ResolveSelectedKey(*BBAsset);
	}
}

EBTNodeResult::Type UGFBTTask_ActivateAbilityByTag::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	checkSlow(OwnerComp.GetAIOwner() && OwnerComp.GetBlackboardComponent());

	const UBlackboardComponent* BlackboardComp = OwnerComp.GetBlackboardComponent();

	const AActor* SelectedActor = Cast<AActor>(BlackboardComp->GetValue<UBlackboardKeyType_Object>(TargetActorKey.GetSelectedKeyID()));
	if (!SelectedActor)
	{
		return EBTNodeResult::Failed;
	}

	FGBBTTask_ActivateAbilityByTagMemory* MyMemory = CastInstanceNodeMemory<FGBBTTask_ActivateAbilityByTagMemory>(NodeMemory);

	MyMemory->CachedAbilitySystemComponent = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(SelectedActor);
	if (!MyMemory->CachedAbilitySystemComponent.IsValid())
	{
		return EBTNodeResult::Failed;
	}

	TArray<FGameplayAbilitySpec*> OutSpecs;
	MyMemory->CachedAbilitySystemComponent->GetActivatableGameplayAbilitySpecsByAllMatchingTags(FGameplayTagContainer(AbilityToActivate), OutSpecs);
	if (OutSpecs.Num() <= 0)
	{
		return EBTNodeResult::Failed;
	}

	const FGameplayAbilitySpec* Spec = OutSpecs[0];
	if (MyMemory->CachedAbilitySystemComponent->TryActivateAbility(Spec->Handle))
	{
		MyMemory->CachedSpecHandle = Spec->Handle;
		MyMemory->CachedAbilitySystemComponent->OnAbilityEnded.AddUObject(this, &UGFBTTask_ActivateAbilityByTag::HandleAbilityEnded, &OwnerComp, NodeMemory);
		return EBTNodeResult::InProgress;
	}

	return EBTNodeResult::Failed;
}

EBTNodeResult::Type UGFBTTask_ActivateAbilityByTag::AbortTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	FGBBTTask_ActivateAbilityByTagMemory* MyMemory = CastInstanceNodeMemory<FGBBTTask_ActivateAbilityByTagMemory>(NodeMemory);
	if (AbortBehaviour == EGFExecuteGameplayAbilityAbortBehaviour::CancelAbility && MyMemory->CachedAbilitySystemComponent.IsValid() && MyMemory->CachedSpecHandle.IsValid())
	{
		FGameplayAbilitySpec* Spec = MyMemory->CachedAbilitySystemComponent->FindAbilitySpecFromHandle(MyMemory->CachedSpecHandle);
		if (Spec && Spec->IsActive())
		{
			MyMemory->CachedAbilitySystemComponent->CancelAbilityHandle(MyMemory->CachedSpecHandle);
		}
	}
	MyMemory->CachedSpecHandle = FGameplayAbilitySpecHandle();
	MyMemory->CachedAbilitySystemComponent.Reset();
	return Super::AbortTask(OwnerComp, NodeMemory);
}

void UGFBTTask_ActivateAbilityByTag::OnTaskFinished(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory,
	EBTNodeResult::Type TaskResult)
{
	Super::OnTaskFinished(OwnerComp, NodeMemory, TaskResult);
	FGBBTTask_ActivateAbilityByTagMemory* MyMemory = CastInstanceNodeMemory<FGBBTTask_ActivateAbilityByTagMemory>(NodeMemory);
	MyMemory->CachedSpecHandle = FGameplayAbilitySpecHandle();
	MyMemory->CachedAbilitySystemComponent.Reset();
}

uint16 UGFBTTask_ActivateAbilityByTag::GetInstanceMemorySize() const
{
	return sizeof(FGBBTTask_ActivateAbilityByTagMemory);
}

FString UGFBTTask_ActivateAbilityByTag::GetStaticDescription() const
{
	return Super::GetStaticDescription();
}

void UGFBTTask_ActivateAbilityByTag::HandleAbilityEnded(const FAbilityEndedData& AbilityEndedData,
	UBehaviorTreeComponent* BehaviorTreeComponent, uint8* NodeMemory)
{
	FGBBTTask_ActivateAbilityByTagMemory* MyMemory = CastInstanceNodeMemory<FGBBTTask_ActivateAbilityByTagMemory>(NodeMemory);
	if (BehaviorTreeComponent && AbilityEndedData.AbilitySpecHandle == MyMemory->CachedSpecHandle)
	{
		FinishLatentTask(*BehaviorTreeComponent, EBTNodeResult::Succeeded);
	}
}
