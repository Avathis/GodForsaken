// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/GFBTDecorator_IsInRange.h"

#include "BehaviorTree/BlackboardComponent.h"

UGFBTDecorator_IsInRange::UGFBTDecorator_IsInRange()
{
	NodeName = "Is In Range";

	INIT_DECORATOR_NODE_NOTIFY_FLAGS();

	SourceActorKey.AddObjectFilter(this, GET_MEMBER_NAME_CHECKED(UGFBTDecorator_IsInRange, SourceActorKey), AActor::StaticClass());
	TargetActorKey.AddObjectFilter(this, GET_MEMBER_NAME_CHECKED(UGFBTDecorator_IsInRange, SourceActorKey), AActor::StaticClass());

	TargetActorKey.SelectedKeyName = FBlackboard::KeySelf;
}

void UGFBTDecorator_IsInRange::PostLoad()
{
	Super::PostLoad();

	bNotifyTick = (FlowAbortMode!=EBTFlowAbortMode::None);
}

uint16 UGFBTDecorator_IsInRange::GetInstanceMemorySize() const
{
	return Super::GetInstanceMemorySize();
}

FString UGFBTDecorator_IsInRange::GetStaticDescription() const
{
	return Super::GetStaticDescription();
}

bool UGFBTDecorator_IsInRange::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	return InternalCalculateRawConditionValue(OwnerComp, NodeMemory);
}

bool UGFBTDecorator_IsInRange::InternalCalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp,
	uint8* NodeMemory) const
{
	const UBlackboardComponent* MyBlackboard = OwnerComp.GetBlackboardComponent();

	const AActor* const SourceActor = Cast<AActor>(MyBlackboard->GetValueAsObject(SourceActorKey.SelectedKeyName));
	const AActor* const TargetActor = Cast<AActor>(MyBlackboard->GetValueAsObject(TargetActorKey.SelectedKeyName));
	
	if (SourceActor && TargetActor) 
	{
		const float RangeSq = FMath::Square(Range);
		const float DistanceSq = FVector::DistSquared(SourceActor->GetActorLocation(), TargetActor->GetActorLocation());
		return IsInversed() ? DistanceSq >= RangeSq : DistanceSq <= RangeSq;
	}
	return false;
}

void UGFBTDecorator_IsInRange::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	if(GetShouldAbort(OwnerComp, NodeMemory))
	{
		OwnerComp.RequestExecution(this);
	}
}

bool UGFBTDecorator_IsInRange::GetShouldAbort(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	const bool bIsOnActiveBranch = OwnerComp.IsExecutingBranch(GetMyNode(), GetChildIndex());

	bool bShouldAbort;
	if (bIsOnActiveBranch)
	{
		bShouldAbort = (FlowAbortMode == EBTFlowAbortMode::Self || FlowAbortMode == EBTFlowAbortMode::Both) && InternalCalculateRawConditionValue(OwnerComp, NodeMemory) == IsInversed();
	}
	else
	{
		bShouldAbort = (FlowAbortMode == EBTFlowAbortMode::LowerPriority || FlowAbortMode == EBTFlowAbortMode::Both) && InternalCalculateRawConditionValue(OwnerComp, NodeMemory) != IsInversed();
	}

	return bShouldAbort;
}
