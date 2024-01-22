// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "GameplayCueInterface.h"
#include "GameplayCueManager.h"
#include "GFAnimNotify_GameplayCue.generated.h"

/**
 * 
 */
UCLASS(editinlinenew, Const, hideCategories = Object, collapseCategories, Meta = (DisplayName = "GFGameplayCue - (Burst)"))
class GODFORSAKEN_API UGFAnimNotify_GameplayCue : public UAnimNotify
{
	GENERATED_BODY()

public:

	UGFAnimNotify_GameplayCue();
	
	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference) override;

	UE_DEPRECATED(5.0, "Please use the other Notify function instead")
	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;

#if WITH_EDITOR
	virtual bool CanBePlaced(UAnimSequenceBase* Animation) const override;
#endif // #if WITH_EDITOR

	FString GetNotifyName_Implementation() const override;
	
protected:

	// GameplayCueLevel to Attribute
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = GameplayCue, meta = (Categories = "GameplayCue"))
	int32 GameplayCueLevel = 0;
	
	// GameplayCue tag to invoke.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = GameplayCue, meta = (Categories = "GameplayCue"))
	FGameplayCueTag GameplayCue;
	
};


UCLASS(editinlinenew, Const, hideCategories = Object, collapseCategories, Meta = (DisplayName = "GFGameplayCue - (Looping)"))
class GODFORSAKEN_API UGFAnimNotify_GameplayCueState : public UAnimNotifyState
{
	GENERATED_BODY()
public:

	UGFAnimNotify_GameplayCueState();
	
	UE_DEPRECATED(5.0, "Please use the other NotifyBegin function instead")
	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration) override;

	UE_DEPRECATED(5.0, "Please use the other NotifyTick function instead")
	virtual void NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime) override;

	UE_DEPRECATED(5.0, "Please use the other NotifyEnd function instead")
	virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;

	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference) override;
	virtual void NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime, const FAnimNotifyEventReference& EventReference) override;
	virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference) override;

	FString GetNotifyName_Implementation() const override;
protected:

	// GameplayCueLevel to Attribute
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = GameplayCue, meta = (Categories = "GameplayCue"))
	int32 GameplayCueLevel = 0;

	// GameplayCue tag to invoke
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = GameplayCue, meta = (Categories = "GameplayCue"))
	FGameplayCueTag GameplayCue;
};

