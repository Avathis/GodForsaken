// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseClasses/Characters/GFPlayableCharacter.h"
#include "BaseClasses/Components/GFSpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "BaseClasses/Input/GFEnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "BaseClasses/Components/GFCharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Player/GFPlayerController.h"

AGFPlayableCharacter::AGFPlayableCharacter(const FObjectInitializer& ObjectInitializer) :Super(ObjectInitializer.SetDefaultSubobjectClass<UGFCharacterMovementComponent>(ACharacter::CharacterMovementComponentName))
{
	SpringArmComponent = CreateDefaultSubobject<UGFSpringArmComponent>(TEXT("SpringArm"));
	SpringArmComponent->SetupAttachment(GetRootComponent());
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	CameraComponent->SetupAttachment(SpringArmComponent);
	CineCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("CinematicCamera"));
	CineCamera->SetupAttachment(GetRootComponent());
}

void AGFPlayableCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if(UGFEnhancedInputComponent* EnhancedInputComponent= CastChecked<UGFEnhancedInputComponent>(PlayerInputComponent))
	{
		if(InputConfig)
		{
			EnhancedInputComponent->BindNativeAction(InputConfig, FGameplayTag::RequestGameplayTag(FName("Input.Move")),ETriggerEvent::Triggered, this, &ThisClass::Move,false);
			EnhancedInputComponent->BindNativeAction(InputConfig, FGameplayTag::RequestGameplayTag(FName("Input.Look")),ETriggerEvent::Triggered, this, &ThisClass::Look,false);
			EnhancedInputComponent->BindNativeAction(InputConfig, FGameplayTag::RequestGameplayTag(FName("Input.Confirm")),ETriggerEvent::Triggered, this, &ThisClass::Input_Confirm,false);
			EnhancedInputComponent->BindNativeAction(InputConfig, FGameplayTag::RequestGameplayTag(FName("Input.Cancel")),ETriggerEvent::Triggered, this, &ThisClass::Input_Cancel,false);

			TArray<uint32> BindHandle;
			EnhancedInputComponent->BindAbilityActions(InputConfig,this,&ThisClass::Input_AbilityInputTagTriggered, BindHandle);
		}
	}
	BindASCInput();
}

void AGFPlayableCharacter::BeginPlay()
{
	Super::BeginPlay();
 
	PlayerController = Cast<AGFPlayerController>(GetController());

	if(PlayerController)
	{
		if(UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
		PlayerController->SetHealthPercentage(GetHealthPercentage());
		PlayerController->SetSpecialPercentage(GetSpecialPercentage());
		PlayerController->SetStaminaPercentage(GetStaminaPercentage());
	}
	
}

void AGFPlayableCharacter::FinalizeDeath()
{
	Super::FinalizeDeath();
	UGameplayStatics::OpenLevel(this, FName("ThirdPersonMap"));
}

void AGFPlayableCharacter::BindASCInput()
{
	if (!ASCInputBound && AbilitySystemComponent && IsValid(InputComponent))
	{
		//AbilitySystemComponent->BindAbilityActivationToInputComponent(InputComponent,FGameplayAbilityInputBinds(FString("ConfirmTarget"), FString("CancelTarget"), FString("GBAbilityInputID"), static_cast<int32>(GBAbilityInputID::Confirm), static_cast<int32>(GBAbilityInputID::Cancel)));

		ASCInputBound = true;
	}
}

void AGFPlayableCharacter::Input_AbilityInputTagPressed(FGameplayTag InputTag)
{
	if (UGFAbilitySystemComponent* ASC = GetAbilitySystemComponent())
	{
		ASC->AbilityInputTagPressed(InputTag);
	}
}

void AGFPlayableCharacter::Input_AbilityInputTagReleased(FGameplayTag InputTag)
{
	if (UGFAbilitySystemComponent* ASC = GetAbilitySystemComponent())
	{
		ASC->AbilityInputTagReleased(InputTag);
	}
}

void AGFPlayableCharacter::Input_AbilityInputTagTriggered(const FInputActionInstance& InputActionInstance)
{
	if (UGFAbilitySystemComponent* ASC = GetAbilitySystemComponent())
	{
		const UInputAction* InputAction = Cast<UInputAction>(InputActionInstance.GetSourceAction());

		const FGameplayTag InputTag = InputConfig->FindInputTagForAbilityInputAction(InputAction);

		if (InputTag.IsValid())
		{
			const FInputActionValue InputActionValue = InputActionInstance.GetValue();
			if (InputActionValue.Get<bool>())
			{
				ASC->AbilityInputTagPressed(InputTag);
			}
			else
			{
				ASC->AbilityInputTagReleased(InputTag);
			}
		}
	}
}

void AGFPlayableCharacter::Input_Confirm(const FInputActionInstance& InputActionInstance)
{
	if(UGFAbilitySystemComponent* ASC = GetAbilitySystemComponent())
	{
		ASC->LocalInputConfirm();
	}
}

void AGFPlayableCharacter::Input_Cancel(const FInputActionInstance& InputActionInstance)
{
	if(UGFAbilitySystemComponent* ASC = GetAbilitySystemComponent())
	{
		ASC->LocalInputCancel();
	}
}

void AGFPlayableCharacter::Move(const FInputActionValue& Value)
{
	const FVector2d CurrentValue = Value.Get<FVector2d>();
	const FRotator Rotation = PlayerController->GetControlRotation();
	const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);
	
	const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	AddMovementInput(ForwardDirection, CurrentValue.Y);
	const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
	AddMovementInput(RightDirection, CurrentValue.X);
}

void AGFPlayableCharacter::Look(const FInputActionValue& Value)
{
	const FVector2d LookAxisValue = Value.Get<FVector2d>();
	if(PlayerController)
	{
		AddControllerYawInput(LookAxisValue.X);
		AddControllerPitchInput(LookAxisValue.Y);
	}
}

void AGFPlayableCharacter::HealthChanged(const FOnAttributeChangeData& Data)
{
	Super::HealthChanged(Data);
	if(PlayerController)
	{
		PlayerController->SetHealthPercentage(GetHealthPercentage());
	}
}

void AGFPlayableCharacter::MaxHealthChanged(const FOnAttributeChangeData& Data)
{
	Super::MaxHealthChanged(Data);
	if(PlayerController)
	{
		PlayerController->SetHealthPercentage(GetHealthPercentage());
	}
}

void AGFPlayableCharacter::HealthRegenRateChanged(const FOnAttributeChangeData& Data)
{
	Super::HealthRegenRateChanged(Data);
}

void AGFPlayableCharacter::EnergyChanged(const FOnAttributeChangeData& Data)
{
	Super::EnergyChanged(Data);
}

void AGFPlayableCharacter::MaxEnergyChanged(const FOnAttributeChangeData& Data)
{
	Super::MaxEnergyChanged(Data);
}

void AGFPlayableCharacter::EnergyRegenRateChanged(const FOnAttributeChangeData& Data)
{
	Super::EnergyRegenRateChanged(Data);
}

void AGFPlayableCharacter::StaminaChanged(const FOnAttributeChangeData& Data)
{
	Super::StaminaChanged(Data);
	if(PlayerController)
	{
		PlayerController->SetStaminaPercentage(GetStaminaPercentage());
	}
}

void AGFPlayableCharacter::MaxStaminaChanged(const FOnAttributeChangeData& Data)
{
	Super::MaxStaminaChanged(Data);
	if(PlayerController)
	{
		PlayerController->SetStaminaPercentage(GetStaminaPercentage());
	}
}

void AGFPlayableCharacter::StaminaRegenRateChanged(const FOnAttributeChangeData& Data)
{
	Super::StaminaRegenRateChanged(Data);
}

void AGFPlayableCharacter::SpecialChanged(const FOnAttributeChangeData& Data)
{
	Super::SpecialChanged(Data);
	if(PlayerController)
	{
		PlayerController->SetSpecialPercentage(GetSpecialPercentage());
	}
}

void AGFPlayableCharacter::MaxSpecialChanged(const FOnAttributeChangeData& Data)
{
	Super::MaxSpecialChanged(Data);
	if(PlayerController)
	{
		PlayerController->SetSpecialPercentage(GetSpecialPercentage());
	}
}

void AGFPlayableCharacter::SpeedChanged(const FOnAttributeChangeData& Data)
{
	Super::SpeedChanged(Data);
}

void AGFPlayableCharacter::MaxSpeedChanged(const FOnAttributeChangeData& Data)
{
	Super::MaxSpeedChanged(Data);
}

void AGFPlayableCharacter::ArmorChanged(const FOnAttributeChangeData& Data)
{
	Super::ArmorChanged(Data);
}
