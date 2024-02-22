
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: ModularGameplay

/// Struct /Script/EnergyRuntime.EnergyChannelingData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FEnergyChannelingData
{ 
	float                                              EnergyPerSecond;                                            // 0x0000   (0x0004)  
	FGameplayTag                                       EnergyChannelingPurposeIdentifier;                          // 0x0004   (0x0004)  
	class UObject*                                     OptionalEnergyChannelingSource;                             // 0x0008   (0x0008)  
	bool                                               bShouldStopApplyingNextTick;                                // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/EnergyRuntime.EnergyRegenOverrideData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FEnergyRegenOverrideData
{ 
	FGameplayTag                                       EnergyRegenIdentifier;                                      // 0x0000   (0x0004)  
	float                                              RechargeAmountPerSecond;                                    // 0x0004   (0x0004)  
	float                                              RechargeDelayInSeconds;                                     // 0x0008   (0x0004)  
	float                                              RechargePercentageLimit;                                    // 0x000C   (0x0004)  
};

/// Class /Script/EnergyRuntime.FortComponent_Energy
/// Size: 0x0250 (0x0000A0 - 0x0002F0)
class UFortComponent_Energy : public UPawnComponent
{ 
public:
	SDK_UNDEFINED(16,11898) /* FMulticastInlineDelegate */ __um(OnEnergyCompletelyDrained);                        // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,11899) /* FMulticastInlineDelegate */ __um(OnEnergyRechargeComplete);                         // 0x00B0   (0x0010)  
	FScalableFloat                                     MaxEnergy;                                                  // 0x00C0   (0x0028)  
	FGameplayTagQuery                                  RechargeDisabledQuery;                                      // 0x00E8   (0x0048)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0130   (0x0010)  MISSED
	FGameplayTagQuery                                  EnergyUseDisabledQuery;                                     // 0x0140   (0x0048)  
	FTimerHandle                                       BeginRechargeTimerHandle;                                   // 0x0188   (0x0008)  
	FGameplayTagContainer                              EnergyTypeIdentifierTagContainer;                           // 0x0190   (0x0020)  
	float                                              CurrentEnergy;                                              // 0x01B0   (0x0004)  
	float                                              NetEnergyDeltaPerSecond;                                    // 0x01B4   (0x0004)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x01B8   (0x0008)  MISSED
	FScalableFloat                                     MinEnergyForUsing;                                          // 0x01C0   (0x0028)  
	FScalableFloat                                     RechargeAmountPerSecond;                                    // 0x01E8   (0x0028)  
	FScalableFloat                                     RechargeDelayInSeconds;                                     // 0x0210   (0x0028)  
	FScalableFloat                                     RechargePercentageLimit;                                    // 0x0238   (0x0028)  
	bool                                               bRemoveEnergyUsersWhenEmpty;                                // 0x0260   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0261   (0x0007)  MISSED
	TArray<FEnergyChannelingData>                      ActiveEnergyChannels;                                       // 0x0268   (0x0010)  
	TArray<FEnergyChannelingData>                      NewActiveEnergyChannels;                                    // 0x0278   (0x0010)  
	TArray<FEnergyRegenOverrideData>                   EnergyRegenOverrides;                                       // 0x0288   (0x0010)  
	SDK_UNDEFINED(16,11900) /* FMulticastInlineDelegate */ __um(OnCurrentEnergyChanged);                           // 0x0298   (0x0010)  
	SDK_UNDEFINED(16,11901) /* FMulticastInlineDelegate */ __um(OnEnergyRechargeBegun);                            // 0x02A8   (0x0010)  
	SDK_UNDEFINED(16,11902) /* FMulticastInlineDelegate */ __um(OnEnergyRechargeInterrupted);                      // 0x02B8   (0x0010)  
	SDK_UNDEFINED(16,11903) /* FMulticastInlineDelegate */ __um(OnEnergyReachedMax);                               // 0x02C8   (0x0010)  
	SDK_UNDEFINED(16,11904) /* FMulticastInlineDelegate */ __um(OnEnergyReachedMinForUsing);                       // 0x02D8   (0x0010)  
	bool                                               bRechargingEnabled : 1;                                     // 0x02E8:0 (0x0001)  
	bool                                               bIsRecharging : 1;                                          // 0x02E8:1 (0x0001)  
	bool                                               bIsUsingEnergy : 1;                                         // 0x02E8:2 (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x02E9   (0x0007)  MISSED


	/// Functions
	// Function /Script/EnergyRuntime.FortComponent_Energy.UseEnergy
	// bool UseEnergy(float& OutAmountOfEnergyUsed, float AmountOfEnergyToUse, bool bUseEnergyEvenOnFailure, class UObject* OptionalEnergyUser, bool bBroadcastEnergyPercentChanged); // [0xad9b094] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnergyRuntime.FortComponent_Energy.StopUsingEnergy
	// bool StopUsingEnergy(FGameplayTag& EnergyUseIdentifier, class UObject* OptionalEnergyUser);                           // [0xad9af44] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnergyRuntime.FortComponent_Energy.StopAddingEnergy
	// bool StopAddingEnergy(FGameplayTag& EnergyUseIdentifier, class UObject* OptionalEnergySource);                        // [0xad9ad70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnergyRuntime.FortComponent_Energy.StartUsingEnergy
	// bool StartUsingEnergy(float EnergyToUseToStart, float EnergyToUsePerSecond, FGameplayTag& EnergyUseIdentifier, class UObject* OptionalEnergyUser); // [0xad9ab98] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnergyRuntime.FortComponent_Energy.StartAddingEnergy
	// bool StartAddingEnergy(float EnergyToAddPerSecond, FGameplayTag& EnergySourceIdentifier, class UObject* OptionalEnergySource); // [0xad9aa04] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnergyRuntime.FortComponent_Energy.SetAllEnergyUsageFree
	// bool SetAllEnergyUsageFree(bool bShouldEnergyUsageBeFree);                                                            // [0xad9a964] Final|Native|Public|BlueprintCallable 
	// Function /Script/EnergyRuntime.FortComponent_Energy.RemoveRegenDataOverride
	// bool RemoveRegenDataOverride(FGameplayTag& RegenOverrideIdentifier);                                                  // [0xad9a880] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnergyRuntime.FortComponent_Energy.RegisterMutatorUpdatedDelegate
	// void RegisterMutatorUpdatedDelegate(class APawn* AffectedPawn);                                                       // [0xad9a6b0] Final|Native|Private 
	// Function /Script/EnergyRuntime.FortComponent_Energy.OnPlayerStatePawnSet
	// void OnPlayerStatePawnSet(class APlayerState* Player, class APawn* NewPawn, class APawn* OldPawn);                    // [0x2f6bec4] Final|Native|Private 
	// Function /Script/EnergyRuntime.FortComponent_Energy.OnMutatorUpdated
	// void OnMutatorUpdated();                                                                                              // [0x2532f70] Final|Native|Private 
	// Function /Script/EnergyRuntime.FortComponent_Energy.HasSufficientEnergy
	// bool HasSufficientEnergy(float EnergyAmountToTest);                                                                   // [0xad9a620] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnergyRuntime.FortComponent_Energy.HandleAbilitySystemComponentInvalidated
	// void HandleAbilitySystemComponentInvalidated();                                                                       // [0x367f828] Final|Native|Private 
	// Function /Script/EnergyRuntime.FortComponent_Energy.HandleAbilitySystemComponentInitialized
	// void HandleAbilitySystemComponentInitialized(class UFortAbilitySystemComponent* AbilitySystemComponent, class AFortPlayerPawn* PlayerPawn); // [0x2a8bd30] Final|Native|Private 
	// Function /Script/EnergyRuntime.FortComponent_Energy.GetCurrentEnergyPercentage
	// float GetCurrentEnergyPercentage();                                                                                   // [0x1e42614] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnergyRuntime.FortComponent_Energy.ApplyRegenDataOverride
	// void ApplyRegenDataOverride(FGameplayTag& RegenOverrideIdentifier, float NewRechargeAmountPerSecond, float NewRechargeDelayInSeconds, float NewRechargePercentageLimit); // [0xad9a3d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnergyRuntime.FortComponent_Energy.AddEnergy
	// bool AddEnergy(float& OutAmountOfEnergyAdded, float AmountOfEnergyToAdd, class UObject* OptionalEnergySource, bool bBroadcastEnergyPercentChanged); // [0xad9a1b8] Final|Native|Public|HasOutParms|BlueprintCallable 
};

