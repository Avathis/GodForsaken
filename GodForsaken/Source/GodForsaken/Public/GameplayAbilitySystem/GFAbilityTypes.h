// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "UObject/NoExportTypes.h"
#include "GFAbilityTypes.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FGFGameplayAbilityActorInfo : public FGameplayAbilityActorInfo
{
	GENERATED_USTRUCT_BODY()
		typedef Super FGameplayAbilityActorInfo;

	virtual ~FGFGameplayAbilityActorInfo()
	{
		
	}

	UPROPERTY(BlueprintReadOnly, Category = "ActorInfo")
	TWeakObjectPtr<class UGFAbilitySystemComponent> GFAbilitySystemComponent;

	UPROPERTY(BlueprintReadOnly, Category = "ActorInfo")
	TWeakObjectPtr<class AGFCharacter> GFCharacter;

	UPROPERTY(BlueprintReadOnly, Category = "ActorInfo")
	TWeakObjectPtr<class AGFPlayerController> GFPlayerController;

	UPROPERTY(BlueprintReadOnly, Category = "ActorInfo")
	TWeakObjectPtr<class UGFCharacterMovementComponent> CharacterMovementComponent;

	//UPROPERTY(BlueprintReadOnly, Category = "ActorInfo")
	//TWeakObjectPtr<class AGFAIController>;

	//UPROPERTY(BlueprintReadOnly, Category = "ActorInfo")
	//TWeakObjectPtr<class >;
	virtual void InitFromActor(AActor* OwnerActor, AActor* AvatarActor, UAbilitySystemComponent* InAbilitySystemComponent) override;

	virtual void SetAvatarActor(AActor* AvatarActor) override;

	virtual void ClearActorInfo() override;

	UGFAbilitySystemComponent* GetGFAbilitySystemComponent() const;

	AGFCharacter* GetGFCharacter() const;

	AGFPlayerController* GetGFPlayerController() const;

	UGFCharacterMovementComponent* GetGFCharacterMovementComponent() const;
};

USTRUCT(BlueprintType)
struct FGFGameplayEffectContext : public FGameplayEffectContext
{
	GENERATED_BODY()
protected:
	UPROPERTY()
	float SourceLevel;

	UPROPERTY()
	float EffectStrength;

	UPROPERTY()
	FName SourceSocket;

	UPROPERTY()
	int32 SourceIndex;

public:
	float GetSourceLevel() const {return SourceLevel;}
	float GetEffectStrength() const {return EffectStrength;}
	FName GetSourceSocket() const {return SourceSocket;}
	int32 GetSourceIndex() const {return SourceIndex;}

	void SetSourceLevel(float InSourceLevel)
	{
		SourceLevel = InSourceLevel;
	}
	void SetEffectStrength(float InEffectStrength)
	{
		EffectStrength = InEffectStrength;
	}
	void SetSourceSocket(FName InSourceSocket)
	{
		SourceSocket = InSourceSocket;
	}
	void SetSourceIndex(int32 InSourceIndex)
	{
		SourceIndex = InSourceIndex;
	}

public:

	virtual UScriptStruct* GetScriptStruct() const override
	{
		return StaticStruct();
	}

	virtual FGFGameplayEffectContext* Duplicate() const override
	{
		FGFGameplayEffectContext* NewContext = new FGFGameplayEffectContext();
		*NewContext = *this;
		NewContext->AddActors(Actors);
		if (GetHitResult())
		{
			// Does a deep copy of the hit result
			NewContext->AddHitResult(*GetHitResult(), true);
		}
		return NewContext;
	}

	virtual bool NetSerialize(FArchive& Ar, UPackageMap* Map, bool& bOutSuccess) override;
	
};
template <>
struct TStructOpsTypeTraits<FGFGameplayEffectContext> : public TStructOpsTypeTraitsBase2<FGFGameplayEffectContext>
{
	enum
	{
		WithNetSerializer = true,
		WithCopy = true // Necessary so that TSharedPtr<FHitResult> Data is copied around
	};
};


UCLASS()
class GODFORSAKEN_API UGFAbilityTypes : public UObject
{
	GENERATED_BODY()
	
};
