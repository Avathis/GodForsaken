// Fill out your copyright notice in the Description page of Project Settings.


#include "GameplayAbilitySystem/GFAbilityTypes.h"

#include "BaseClasses/Characters/GFCharacter.h"
#include "BaseClasses/Components/GFCharacterMovementComponent.h"
#include "GameplayAbilitySystem/GFAbilitySystemComponent.h"
#include "Player/GFPlayerController.h"

void FGFGameplayAbilityActorInfo::InitFromActor(AActor* InOwnerActor, AActor* InAvatarActor,
                                                UAbilitySystemComponent* InAbilitySystemComponent)
{
	Super::InitFromActor(InOwnerActor, InAvatarActor, InAbilitySystemComponent);
	GFAbilitySystemComponent = Cast<UGFAbilitySystemComponent>(InAbilitySystemComponent);

	GFCharacter = Cast<AGFCharacter>(AvatarActor);

	if(GFCharacter.IsValid())
	{
		CharacterMovementComponent = Cast<UGFCharacterMovementComponent>(GFCharacter->GetMovementComponent());
	}

	if(PlayerController.IsValid())
	{
		GFPlayerController = Cast<AGFPlayerController>(PlayerController.Get());
	}
}

void FGFGameplayAbilityActorInfo::SetAvatarActor(AActor* InAvatarActor)
{
	Super::SetAvatarActor(InAvatarActor);
}

void FGFGameplayAbilityActorInfo::ClearActorInfo()
{
	Super::ClearActorInfo();
	GFAbilitySystemComponent = nullptr;
	GFCharacter = nullptr;
	GFPlayerController = nullptr;
	CharacterMovementComponent= nullptr;
}

UGFAbilitySystemComponent* FGFGameplayAbilityActorInfo::GetGFAbilitySystemComponent() const
{
	return GFAbilitySystemComponent.IsValid() ? GFAbilitySystemComponent.Get() : nullptr;
}

AGFCharacter* FGFGameplayAbilityActorInfo::GetGFCharacter() const
{
	return GFCharacter.IsValid() ? GFCharacter.Get() : nullptr;
}

AGFPlayerController* FGFGameplayAbilityActorInfo::GetGFPlayerController() const
{
	return GFPlayerController.IsValid() ? GFPlayerController.Get() : nullptr;
}

UGFCharacterMovementComponent* FGFGameplayAbilityActorInfo::GetGFCharacterMovementComponent() const
{
	return CharacterMovementComponent.IsValid() ? CharacterMovementComponent.Get() : nullptr;
}

bool FGFGameplayEffectContext::NetSerialize(FArchive& Ar, UPackageMap* Map, bool& bOutSuccess)
{
	enum RepFlag
    {
        REP_Instigator,
        REP_EffectCauser,
        REP_AbilityCDO,
        REP_SourceObject,
        REP_Actors,
        REP_HitResult,
        REP_WorldOrigin,
        REP_SourceLevel,
        REP_EffectStrength,
        REP_SourceSocket,
        REP_SourceIndex,
        REP_MAX
    };
     
    uint16 RepBits = 0;
    if (Ar.IsSaving())
    {
        if (Instigator.IsValid())
        {
            RepBits |= 1 << REP_Instigator;
        }
        if (EffectCauser.IsValid())
        {
            RepBits |= 1 << REP_EffectCauser;
        }
        if (AbilityCDO.IsValid())
        {
            RepBits |= 1 << REP_AbilityCDO;
        }
        if (bReplicateSourceObject && SourceObject.IsValid())
        {
            RepBits |= 1 << REP_SourceObject;
        }
        if (Actors.Num() > 0)
        {
            RepBits |= 1 << REP_Actors;
        }
        if (HitResult.IsValid())
        {
            RepBits |= 1 << REP_HitResult;
        }
        if (bHasWorldOrigin)
        {
            RepBits |= 1 << REP_WorldOrigin;
        }
        if (SourceLevel)
        {
            RepBits |= 1 << REP_SourceLevel;
        }
        if (EffectStrength)
        {
            RepBits |= 1 << REP_EffectStrength;
        }
        if (!SourceSocket.IsNone())
        {
            RepBits |= 1 << REP_SourceSocket;
        }
        if (SourceIndex > 0)
        {
            RepBits |= 1 << REP_SourceIndex;
        }
    }
 
    Ar.SerializeBits(&RepBits, REP_MAX);
 
    if (RepBits & (1 << REP_Instigator))
    {
        Ar << Instigator;
    }
    if (RepBits & (1 << REP_EffectCauser))
    {
        Ar << EffectCauser;
    }
    if (RepBits & (1 << REP_AbilityCDO))
    {
        Ar << AbilityCDO;
    }
    if (RepBits & (1 << REP_SourceObject))
    {
        Ar << SourceObject;
    }
    if (RepBits & (1 << REP_Actors))
    {
        SafeNetSerializeTArray_Default<31>(Ar, Actors);
    }
    if (RepBits & (1 << REP_HitResult))
    {
        if (Ar.IsLoading())
        {
            if (!HitResult.IsValid())
            {
                HitResult = TSharedPtr<FHitResult>(new FHitResult());
            }
        }
        HitResult->NetSerialize(Ar, Map, bOutSuccess);
    }
    if (RepBits & (1 << REP_WorldOrigin))
    {
        Ar << WorldOrigin;
        bHasWorldOrigin = true;
    }
    else
    {
        bHasWorldOrigin = false;
    }
    if (RepBits & (1 << REP_SourceLevel))
    {
        Ar << SourceLevel;
    }
    if (RepBits & (1 << REP_EffectStrength))
    {
        Ar << EffectStrength;
    }
    if (RepBits & (1 << REP_SourceSocket))
    {
        Ar << SourceSocket;
    }
    if (RepBits & (1 << REP_SourceIndex))
    {
        Ar << SourceIndex;
    }
    
 
    if (Ar.IsLoading())
    {
        AddInstigator(Instigator.Get(), EffectCauser.Get()); // Just to initialize InstigatorAbilitySystemComponent
    }   
     
    bOutSuccess = true;
    return true;
}
