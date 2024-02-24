// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "GFBTDecorator_IsInRange.generated.h"

/**
 * 
 */
UCLASS()
class GODFORSAKEN_API UGFBTDecorator_IsInRange : public UBTDecorator
{
	GENERATED_BODY()

public:
	UGFBTDecorator_IsInRange();
	virtual void PostLoad() override;
	virtual uint16 GetInstanceMemorySize() const override;
	virtual FString GetStaticDescription() const override;
	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const override;
	bool InternalCalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const;
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
	bool GetShouldAbort(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const;

protected:
	UPROPERTY(EditAnywhere, Category = "Range")
	float Range;

	UPROPERTY(EditAnywhere, Category = "Range")
	FBlackboardKeySelector SourceActorKey;

	UPROPERTY(EditAnywhere, Category = "Range")
	FBlackboardKeySelector TargetActorKey;
	
};
