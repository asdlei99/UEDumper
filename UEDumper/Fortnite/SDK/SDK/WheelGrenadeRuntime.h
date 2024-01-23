
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: AttachableWheelsRuntime
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Script/WheelGrenadeRuntime.WheelGrenadeWheel
/// Size: 0x0018 (0x000328 - 0x000340)
class AWheelGrenadeWheel : public AAttachableWheel
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0328   (0x0008)  MISSED
	float                                              MaxHealth;                                                  // 0x0330   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0334   (0x0004)  MISSED
	class UFortAbilitySystemComponent*                 AbilitySystemComponent;                                     // 0x0338   (0x0008)  


	/// Functions
	// Function /Script/WheelGrenadeRuntime.WheelGrenadeWheel.HandleOutOfHealth
	// void HandleOutOfHealth(float InDamage, FGameplayTagContainer& InTags, FGameplayEffectContextHandle& InEffectContext, class AController* InEventInstigator, class AActor* InDamageCauser); // [0xb47e444] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/WheelGrenadeRuntime.WheelGrenadeWheel.HandleDamaged
	// void HandleDamaged(float Damage, FGameplayTagContainer& InTags, FGameplayEffectContextHandle& EffectContext, class AController* EventInstigator, class AActor* DamageCauser); // [0x2177018] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/WheelGrenadeRuntime.WheelGrenadeWheel.GetMaxHealth
	// float GetMaxHealth();                                                                                                 // [0xb47e404] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/WheelGrenadeRuntime.WheelGrenadeWheel.GetHealth
	// float GetHealth();                                                                                                    // [0xb47e3c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

