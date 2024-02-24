// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "GFBTTask_ActivateAbilityByTag.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class EGFExecuteGameplayAbilityAbortBehaviour
{
	CancelAbility UMETA(DisplayName = "Cancel Ability on Abort"),
	Nothing UMETA(DisplayName = "Do Nothing on Abort")
};

UCLASS()
class GODFORSAKEN_API UGFBTTask_ActivateAbilityByTag : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UGFBTTask_ActivateAbilityByTag();

	virtual void InitializeFromAsset(UBehaviorTree& Asset) override;
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	virtual EBTNodeResult::Type AbortTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	virtual  void OnTaskFinished(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, EBTNodeResult::Type TaskResult) override;
	virtual uint16 GetInstanceMemorySize() const override;
	virtual FString GetStaticDescription() const override;

protected:

	void HandleAbilityEnded(const struct FAbilityEndedData& AbilityEndedData, UBehaviorTreeComponent* BehaviorTreeComponent, uint8* NodeMemory);

	UPROPERTY(EditAnywhere, Category = "ActivateAbility")
	FBlackboardKeySelector TargetActorKey;

	UPROPERTY(EditAnywhere, Category = "ActivateAbility")
	FGameplayTag AbilityToActivate;

	UPROPERTY(EditAnywhere, Category = "ActivateAbility")
	EGFExecuteGameplayAbilityAbortBehaviour AbortBehaviour;
	
};
