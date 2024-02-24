// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "GFBTDecorator_CanActivateAbility.generated.h"

/**
 * 
 */
UCLASS()
class GODFORSAKEN_API UGFBTDecorator_CanActivateAbility : public UBTDecorator
{
	GENERATED_BODY()

public:
	UGFBTDecorator_CanActivateAbility(const FObjectInitializer& ObjectInitializer);
	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const override;
	virtual void InitializeFromAsset(UBehaviorTree& Asset) override;
	virtual FString GetStaticDescription() const override;

protected:
	UPROPERTY(EditAnywhere, Category = "CanActivateAbility")
	FBlackboardKeySelector AvatarActor;

	UPROPERTY(EditAnywhere, Category = "CanActivateAbility")
	FGameplayTag AbilityTag;
};
