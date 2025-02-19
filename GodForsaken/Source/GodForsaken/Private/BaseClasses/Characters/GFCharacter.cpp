// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseClasses/Characters/GFCharacter.h"
#include "MotionWarpingComponent.h"
#include "BaseClasses/Components/GFCharacterMovementComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/WidgetComponent.h"
#include "GameplayAbilitySystem/GFAttributeSet.h"
#include "GameplayAbilitySystem/GFGameplayAbility.h"
#include "Kismet/KismetMathLibrary.h"
#include "UI/GFCharacterWidget.h"

// Sets default values
AGFCharacter::AGFCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UGFCharacterMovementComponent>(ACharacter::CharacterMovementComponentName))
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AbilitySystemComponent = CreateDefaultSubobject<UGFAbilitySystemComponent>(TEXT("ASC"));

	MotionWarpingComponent = CreateDefaultSubobject<UMotionWarpingComponent>(TEXT("MotionWarpingComponent"));

	CharacterStatusBar = CreateDefaultSubobject<UWidgetComponent>(TEXT("Widget"));
	CharacterStatusBar->SetupAttachment(GetRootComponent());
	CharacterStatusBar->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
}

// Called when the game starts or when spawned
void AGFCharacter::BeginPlay()
{
	Super::BeginPlay();

	if(AbilitySystemComponent)
	{
		AbilitySystemComponent->InitAbilityActorInfo(this, this);

		AttributeSet = AbilitySystemComponent->GetSet<UGFAttributeSet>();

		HealthChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetHealthAttribute()).AddUObject(this, &ThisClass::HealthChanged);
		MaxHealthChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetMaxHealthAttribute()).AddUObject(this, &ThisClass::MaxHealthChanged);
		HealthRegenRateChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetHealthRegenRateAttribute()).AddUObject(this, &ThisClass::HealthRegenRateChanged);
		EnergyChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetEnergyAttribute()).AddUObject(this, &ThisClass::EnergyChanged);
		MaxEnergyChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetMaxEnergyAttribute()).AddUObject(this, &ThisClass::MaxEnergyChanged);
		EnergyRegenRateChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetEnergyRegenRateAttribute()).AddUObject(this, &ThisClass::EnergyRegenRateChanged);
		StaminaChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetStaminaAttribute()).AddUObject(this, &ThisClass::StaminaChanged);
		MaxStaminaChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetMaxStaminaAttribute()).AddUObject(this, &ThisClass::MaxStaminaChanged);
		StaminaRegenRateChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetStaminaRegenRateAttribute()).AddUObject(this, &ThisClass::StaminaRegenRateChanged);
		SpecialChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetSpecialAttribute()).AddUObject(this, &ThisClass::SpecialChanged);
		MaxSpecialChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetMaxSpecialAttribute()).AddUObject(this, &ThisClass::MaxSpecialChanged);
		SpeedChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetSpeedAttribute()).AddUObject(this, &ThisClass::SpeedChanged);
		MaxSpeedChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetMaxSpeedAttribute()).AddUObject(this, &ThisClass::MaxSpeedChanged);
		PoiseChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetPoiseAttribute()).AddUObject(this, &ThisClass::PoiseChanged);
		MaxPoiseChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetMaxPoiseAttribute()).AddUObject(this, &ThisClass::MaxPoiseChanged);
	}
	
	if(IsPlayerControlled())
	{
		CharacterStatusBar->SetVisibility(false);
	}
	else
	{
		CharacterStatusBar->SetVisibility(true);
	}

	Widget = Cast<UGFCharacterWidget>(CharacterStatusBar->GetWidget());
}

void AGFCharacter::GrantAbility(TSubclassOf<UGFGameplayAbility> AbilityClass, int32 AbilityLevel, FGameplayTag InputTag)
{
	if(GetLocalRole() == ROLE_Authority && AbilitySystemComponent && IsValid(AbilityClass))
	{
		UGFGameplayAbility* Ability = AbilityClass->GetDefaultObject<UGFGameplayAbility>();
		if(IsValid(Ability))
		{
			FGameplayAbilitySpec AbilitySpec(Ability,AbilityLevel);
			if(InputTag.IsValid())
			{
				AbilitySpec.DynamicAbilityTags.AddTag(InputTag);
			}
			AbilitySystemComponent->GiveAbility(AbilitySpec);
		}
		
	}
}

// Called every frame
void AGFCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AGFCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}
/*
void AGFCharacter::GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const
{
	if(AbilitySystemComponent)
	{
		AbilitySystemComponent->GetOwnedGameplayTags(TagContainer);
	}
	
}
*/
float AGFCharacter::GetHealth() const
{
	if(AttributeSet)
	{
		return AttributeSet->GetHealth();
	}
	else
	{
		return 0.f;
	}
}

float AGFCharacter::GetMaxHealth() const
{
	if(AttributeSet)
	{
		return AttributeSet->GetMaxHealth();
	}
	else
	{
		return 0.f;
	}
}

float AGFCharacter::GetHealthRegenRate() const
{
	if(AttributeSet)
	{
		return AttributeSet->GetHealthRegenRate();
	}
	else
	{
		return 0.f;
	}
}

void AGFCharacter::InitiateDeath()
{
	GetCapsuleComponent()->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Ignore);
	AbilitySystemComponent->AddLooseGameplayTag(FGameplayTag::RequestGameplayTag(TEXT("State.Death")));
	//AbilitySystemComponent->CancelAbilities(FGameplayTagContainer());
	GetWorld()->GetTimerManager().SetTimer(DeathTimerHandle,this, &AGFCharacter::FinalizeDeath,TimeToDie, false);
}

void AGFCharacter::FinalizeDeath()
{
	Destroy();
}

float AGFCharacter::GetEnergy() const
{
	if(AttributeSet)
	{
		return AttributeSet->GetEnergy();
	}
	else
	{
		return 0.f;
	}
}

float AGFCharacter::GetMaxEnergy() const
{
	if(AttributeSet)
	{
		return AttributeSet->GetMaxEnergy();
	}
	else
	{
		return 0.f;
	}
}

float AGFCharacter::GetEnergyRegenRate() const
{
	if(AttributeSet)
	{
		return AttributeSet->GetEnergyRegenRate();
	}
	else
	{
		return 0.f;
	}
}

float AGFCharacter::GetStamina() const
{
	if(AttributeSet)
	{
		return AttributeSet->GetStamina();
	}
	else
	{
		return 0.f;
	}
}

float AGFCharacter::GetMaxStamina() const
{
	if(AttributeSet)
	{
		return AttributeSet->GetMaxStamina();
	}
	else
	{
		return 0.f;
	}
}

float AGFCharacter::GetStaminaRegenRate() const
{
	if(AttributeSet)
	{
		return AttributeSet->GetStaminaRegenRate();
	}
	else
	{
		return 0.f;
	}
}

float AGFCharacter::GetSpecial() const
{
	if(AttributeSet)
	{
		return AttributeSet->GetSpecial();
	}
	else
	{
		return 0.f;
	}
}

float AGFCharacter::GetMaxSpecial() const
{
	if(AttributeSet)
	{
		return AttributeSet->GetMaxSpecial();
	}
	else
	{
		return 0.f;
	}
}

float AGFCharacter::GetHealthPercentage()
{
	if(AttributeSet)
	{
		return UKismetMathLibrary::SafeDivide(AttributeSet->GetHealth(),AttributeSet->GetMaxHealth());
	}
	return 1.f;
}

float AGFCharacter::GetStaminaPercentage()
{
	if(AttributeSet)
	{
		return UKismetMathLibrary::SafeDivide(AttributeSet->GetStamina(),AttributeSet->GetMaxStamina());
	}
	return 1.f;
}

float AGFCharacter::GetEnergyPercentage()
{
	if(AttributeSet)
	{
		return UKismetMathLibrary::SafeDivide(AttributeSet->GetEnergy(),AttributeSet->GetMaxEnergy());
	}
	return 1.f;
}

float AGFCharacter::GetSpecialPercentage()
{
	if(AttributeSet)
	{
		return UKismetMathLibrary::SafeDivide(AttributeSet->GetSpecial(),AttributeSet->GetMaxSpecial());
	}
	return 1.f;
}

float AGFCharacter::GetPoisePercentage()
{
	if(AttributeSet)
	{
		return UKismetMathLibrary::SafeDivide(AttributeSet->GetPoise(),AttributeSet->GetMaxPoise());
	}
	return 1.f;
}

float AGFCharacter::GetSpeed() const
{
	if(AttributeSet)
	{
		return AttributeSet->GetSpeed();
	}
	else
	{
		return 0.f;
	}
}

float AGFCharacter::GetMaxSpeed() const
{
	if(AttributeSet)
	{
		return AttributeSet->GetMaxSpeed();
	}
	else
	{
		return 0.f;
	}
}

float AGFCharacter::GetArmor() const
{
	if(AttributeSet)
	{
		return AttributeSet->GetArmor();
	}
	else
	{
		return 0.f;
	}
}

float AGFCharacter::GetPoise() const
{
	if(AttributeSet)
	{
		return AttributeSet->GetPoise();
	}
	else
	{
		return 0.f;
	}
}

float AGFCharacter::GetMaxPoise()
{
	if(AttributeSet)
	{
		return AttributeSet->GetMaxPoise();
	}
	else
	{
		return 0.f;
	}
}

void AGFCharacter::PoiseChanged(const FOnAttributeChangeData& Data)
{
	if(CharacterStatusBar)
	{
		if(Widget)
		{
			Widget->SetPoisePercentage(GetPoisePercentage());
		}
	}
}

void AGFCharacter::MaxPoiseChanged(const FOnAttributeChangeData& Data)
{
}

void AGFCharacter::ArmorChanged(const FOnAttributeChangeData& Data)
{
	
}

void AGFCharacter::HealthChanged(const FOnAttributeChangeData& Data)
{
	if(CharacterStatusBar)
	{
		if(Widget)
		{
			Widget->SetHealthPercentage(GetHealthPercentage());
		}
	}
	if(Data.NewValue <= 0.f)
	{
		InitiateDeath();
	}
}

void AGFCharacter::MaxHealthChanged(const FOnAttributeChangeData& Data)
{
	if(CharacterStatusBar)
	{
		if(Widget)
		{
			Widget->SetHealthPercentage(GetHealthPercentage());
		}
	}
}

void AGFCharacter::HealthRegenRateChanged(const FOnAttributeChangeData& Data)
{
}

void AGFCharacter::EnergyChanged(const FOnAttributeChangeData& Data)
{
}

void AGFCharacter::MaxEnergyChanged(const FOnAttributeChangeData& Data)
{
}

void AGFCharacter::EnergyRegenRateChanged(const FOnAttributeChangeData& Data)
{
}

void AGFCharacter::StaminaChanged(const FOnAttributeChangeData& Data)
{
}

void AGFCharacter::MaxStaminaChanged(const FOnAttributeChangeData& Data)
{
}

void AGFCharacter::StaminaRegenRateChanged(const FOnAttributeChangeData& Data)
{
}

void AGFCharacter::SpecialChanged(const FOnAttributeChangeData& Data)
{
}

void AGFCharacter::MaxSpecialChanged(const FOnAttributeChangeData& Data)
{
}

void AGFCharacter::SpeedChanged(const FOnAttributeChangeData& Data)
{
}

void AGFCharacter::MaxSpeedChanged(const FOnAttributeChangeData& Data)
{
}

