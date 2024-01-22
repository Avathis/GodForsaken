// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseClasses/Animation/GFAnimNotify_GameplayCue.h"
#include "Components/SkeletalMeshComponent.h"
#include "AbilitySystemGlobals.h"
#include "AbilitySystemComponent.h"
#include "Animation/AnimMontage.h"
#include "GameplayCueManager.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(GFAnimNotify_GameplayCue)

typedef void (*GameplayCueFunc)(AActor* Target, const FGameplayTag GameplayCueTag, const FGameplayCueParameters& Parameters);

static void ProcessGameplayCue(GameplayCueFunc Func, USkeletalMeshComponent* MeshComp, FGameplayTag GameplayCue, UAnimSequenceBase* Animation, int32 CueLevel)
{
	if (MeshComp && GameplayCue.IsValid())
	{
		AActor* OwnerActor = MeshComp->GetOwner();

#if WITH_EDITOR
		if (GIsEditor && (OwnerActor == nullptr))
		{
			// Make preview work in anim preview window
			UGameplayCueManager::PreviewComponent = MeshComp;
			UGameplayCueManager::PreviewWorld = MeshComp->GetWorld();

			if (UGameplayCueManager* GCM = UAbilitySystemGlobals::Get().GetGameplayCueManager())
			{
				GCM->LoadNotifyForEditorPreview(GameplayCue);
			}
		}
#endif // #if WITH_EDITOR

		FGameplayCueParameters Parameters;
		Parameters.Instigator = OwnerActor;
		Parameters.GameplayEffectLevel = CueLevel;

		// Try to get the ability level. This may not be able to find the ability level
		// in cases where a blend out is happening or two abilities are trying to play animations
		if (UAbilitySystemComponent* ASC = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(OwnerActor))
		{
			if (ASC->GetCurrentMontage() == Animation)
			{
				if (const UGameplayAbility* Ability = ASC->GetAnimatingAbility())
				{
					Parameters.AbilityLevel = Ability->GetAbilityLevel();
				}
			}

			// Always use ASC's owner for instigator
			Parameters.Instigator = ASC->GetOwner();
		}

		Parameters.TargetAttachComponent = MeshComp;

		(*Func)(OwnerActor, GameplayCue, Parameters);
	}

#if WITH_EDITOR
	if (GIsEditor)
	{
		UGameplayCueManager::PreviewComponent = nullptr;
		UGameplayCueManager::PreviewWorld = nullptr;
	}
#endif // #if WITH_EDITOR
}


UGFAnimNotify_GameplayCue::UGFAnimNotify_GameplayCue()
{
}

void UGFAnimNotify_GameplayCue::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation,
                                       const FAnimNotifyEventReference& EventReference)
{
	Super::Notify(MeshComp, Animation, EventReference);

	ProcessGameplayCue(&UGameplayCueManager::ExecuteGameplayCue_NonReplicated, MeshComp, GameplayCue.GameplayCueTag, Animation, GameplayCueLevel);
}

void UGFAnimNotify_GameplayCue::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	
}

#if WITH_EDITOR
bool UGFAnimNotify_GameplayCue::CanBePlaced(UAnimSequenceBase* Animation) const
{
	return (Animation && Animation->IsA(UAnimMontage::StaticClass()));
}
#endif // WITH_EDITOR


FString UGFAnimNotify_GameplayCue::GetNotifyName_Implementation() const
{
	FString DisplayName = TEXT("GameplayCue");

	if (GameplayCue.GameplayCueTag.IsValid())
	{
		DisplayName = GameplayCue.GameplayCueTag.ToString();
		DisplayName += TEXT(" (Burst)");
	}

	return DisplayName;
}


UGFAnimNotify_GameplayCueState::UGFAnimNotify_GameplayCueState()
{
}

void UGFAnimNotify_GameplayCueState::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation,
	float TotalDuration)
{
	//Super::NotifyBegin(MeshComp, Animation, TotalDuration);
}

void UGFAnimNotify_GameplayCueState::NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation,
	float FrameDeltaTime)
{
	//Super::NotifyTick(MeshComp, Animation, FrameDeltaTime);
}

void UGFAnimNotify_GameplayCueState::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	//Super::NotifyEnd(MeshComp, Animation);
}

FString UGFAnimNotify_GameplayCueState::GetNotifyName_Implementation() const
{
	FString DisplayName = TEXT("GameplayCue");

	if (GameplayCue.GameplayCueTag.IsValid())
	{
		DisplayName = GameplayCue.GameplayCueTag.ToString();
		DisplayName += TEXT(" (Looping)");
	}

	return DisplayName;
}

void UGFAnimNotify_GameplayCueState::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation,
                                                 float TotalDuration, const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyBegin(MeshComp, Animation, TotalDuration, EventReference);

	ProcessGameplayCue(&UGameplayCueManager::AddGameplayCue_NonReplicated, MeshComp, GameplayCue.GameplayCueTag, Animation, GameplayCueLevel);
}

void UGFAnimNotify_GameplayCueState::NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation,
	float FrameDeltaTime, const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyTick(MeshComp, Animation, FrameDeltaTime, EventReference);
}

void UGFAnimNotify_GameplayCueState::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation,
	const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyEnd(MeshComp, Animation, EventReference);
	
	ProcessGameplayCue(&UGameplayCueManager::RemoveGameplayCue_NonReplicated, MeshComp, GameplayCue.GameplayCueTag, Animation, GameplayCueLevel);
}

