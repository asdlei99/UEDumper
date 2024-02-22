
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/HealthShieldRegenRuntime.FortHealthShieldRegenComponent
/// Size: 0x00F8 (0x0000A0 - 0x000198)
class UFortHealthShieldRegenComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0xF8];                                      // 0x00A0   (0x00F8)  MISSED


	/// Functions
	// Function /Script/HealthShieldRegenRuntime.FortHealthShieldRegenComponent.ClearHealthShieldRegen_ShieldListenerDelegates
	// void ClearHealthShieldRegen_ShieldListenerDelegates(class UGameplayAbility* OwningAbility);                           // [0xb9b4534] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HealthShieldRegenRuntime.FortHealthShieldRegenComponent.ClearHealthShieldRegen_HealthListenerDelegates
	// void ClearHealthShieldRegen_HealthListenerDelegates(class UGameplayAbility* OwningAbility);                           // [0xb9b3d60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HealthShieldRegenRuntime.FortHealthShieldRegenComponent.AssignHealthShieldRegen_ShieldListenerDelegates
	// void AssignHealthShieldRegen_ShieldListenerDelegates(class UGameplayAbility* OwningAbility, FFortHealthShieldRegen_ShieldDelegateContainer Delegates); // [0xb9b3bbc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HealthShieldRegenRuntime.FortHealthShieldRegenComponent.AssignHealthShieldRegen_HealthListenerDelegates
	// void AssignHealthShieldRegen_HealthListenerDelegates(class UGameplayAbility* OwningAbility, FFortHealthShieldRegen_HealthDelegateContainer Delegates); // [0xb9b3a2c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HealthShieldRegenRuntime.FortHealthShieldRegenComponent.AllowHealthShieldRegen
	// bool AllowHealthShieldRegen();                                                                                        // [0xb9b3a10] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/HealthShieldRegenRuntime.FortHealthShieldRegen_ShieldDelegateContainer
/// Size: 0x0030 (0x000000 - 0x000030)
struct FFortHealthShieldRegen_ShieldDelegateContainer
{ 
	SDK_UNDEFINED(12,14108) /* FDelegateProperty */    __um(OnShieldChanged);                                      // 0x0000   (0x000C)  
	SDK_UNDEFINED(12,14109) /* FDelegateProperty */    __um(OnShieldedDamage);                                     // 0x000C   (0x000C)  
	SDK_UNDEFINED(12,14110) /* FDelegateProperty */    __um(OnShieldDestroyed);                                    // 0x0018   (0x000C)  
	SDK_UNDEFINED(12,14111) /* FDelegateProperty */    __um(OnDamageReceived);                                     // 0x0024   (0x000C)  
};

/// Struct /Script/HealthShieldRegenRuntime.FortHealthShieldRegen_HealthDelegateContainer
/// Size: 0x0018 (0x000000 - 0x000018)
struct FFortHealthShieldRegen_HealthDelegateContainer
{ 
	SDK_UNDEFINED(12,14112) /* FDelegateProperty */    __um(OnHealthChanged);                                      // 0x0000   (0x000C)  
	SDK_UNDEFINED(12,14113) /* FDelegateProperty */    __um(OnDamageReceived);                                     // 0x000C   (0x000C)  
};

