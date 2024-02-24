// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "GameplayTagContainer.h"
#include "GFBTDecorator_HasGameplayTag.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class EGFBTDecoratorMatchType : uint8
{
	GameplayTag UMETA(DisplayName = "Match against a single tag"),
	GameplayTagContainer UMETA(DisplayName = "Match against a gameplay tag container")
};

UENUM(BlueprintType)
enum class EGFBTDecoratorGameplayTagContainerMatching : uint8
{
	HasAny UMETA(DisplayName = "Has any of the tags in the container"),
	HasAll UMETA(DisplayName = "Has all of the tags in the container"),
	HasAnyExact UMETA(DisplayName = "Has any of the tags in the container (exact)"),
	HasAllExact UMETA(DisplayName = "Has all of the tags in the container (exact)"),
};

UCLASS()
class GODFORSAKEN_API UGFBTDecorator_HasGameplayTag : public UBTDecorator
{
	GENERATED_BODY()

public:
	UGFBTDecorator_HasGameplayTag();

	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const override;

	virtual FString GetStaticDescription() const override;

	virtual void CleanupMemory(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, EBTMemoryClear::Type CleanupType) const override;

protected:

	UPROPERTY(EditAnywhere, Category = "GameplayTag")
	FBlackboardKeySelector ActorForGameplayTagCheck;
	
	UPROPERTY(EditAnywhere, Category="GameplayTag")
	EGFBTDecoratorMatchType GameplayTagMatchType = EGFBTDecoratorMatchType::GameplayTag;
	
	UPROPERTY(EditAnywhere, Category="GameplayTag", meta = (EditCondition = "GameplayTagMatchType == EGFBTDecoratorMatchType::GameplayTag"))
	FGameplayTag GameplayTag;
	
	UPROPERTY(EditAnywhere, Category="GameplayTag", meta = (EditCondition = "GameplayTagMatchType == EGFBTDecoratorMatchType::GameplayTag"))
	bool bExact = false;
	
	UPROPERTY(EditAnywhere, Category="GameplayTag", meta = (EditCondition = "GameplayTagMatchType == EGFBTDecoratorMatchType::GameplayTagContainer"))
	FGameplayTagContainer GameplayTags;
	
	UPROPERTY(EditAnywhere, Category="GameplayTag", meta = (EditCondition = "GameplayTagMatchType == EGFBTDecoratorMatchType::GameplayTagContainer"))
	EGFBTDecoratorGameplayTagContainerMatching GameplayTagContainerMatchingType = EGFBTDecoratorGameplayTagContainerMatching::HasAny;
	
	bool MatchContainer(const FGameplayTagContainer& SelectedGameplayTags) const;

	void OnGameplayTagsChanged(const FGameplayTag InTag, int32 NewCount, TWeakObjectPtr<UBehaviorTreeComponent> BehaviorTreeComponent, uint8* NodeMemory);

	
	virtual void OnBecomeRelevant(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	virtual void OnCeaseRelevant(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	virtual uint16 GetInstanceMemorySize() const override;

	virtual void InitializeFromAsset(UBehaviorTree& Asset) override;
	
};
