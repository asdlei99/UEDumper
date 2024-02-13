
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: ModularGameplay

/// Class /Script/EnergyRuntime.FortComponent_Energy
/// Size: 0x0248 (0x0000A0 - 0x0002E8)
class UFortComponent_Energy : public UPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:
	SMember(FMulticastInlineDelegate)                  OnEnergyCompletelyDrained                                   OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEnergyRechargeComplete                                    OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	SMember(FScalableFloat)                            MaxEnergy                                                   OFFSET(getStruct<T>, {0xC0, 40, 0, 0})
	SMember(FGameplayTagQuery)                         RechargeDisabledQuery                                       OFFSET(getStruct<T>, {0xE8, 72, 0, 0})
	SMember(FGameplayTagQuery)                         EnergyUseDisabledQuery                                      OFFSET(getStruct<T>, {0x140, 72, 0, 0})
	SMember(FTimerHandle)                              BeginRechargeTimerHandle                                    OFFSET(getStruct<T>, {0x188, 8, 0, 0})
	SMember(FGameplayTagContainer)                     EnergyTypeIdentifierTagContainer                            OFFSET(getStruct<T>, {0x190, 32, 0, 0})
	DMember(float)                                     CurrentEnergy                                               OFFSET(get<float>, {0x1B0, 4, 0, 0})
	DMember(float)                                     NetEnergyDeltaPerSecond                                     OFFSET(get<float>, {0x1B4, 4, 0, 0})
	SMember(FScalableFloat)                            MinEnergyForUsing                                           OFFSET(getStruct<T>, {0x1C0, 40, 0, 0})
	SMember(FScalableFloat)                            RechargeAmountPerSecond                                     OFFSET(getStruct<T>, {0x1E8, 40, 0, 0})
	SMember(FScalableFloat)                            RechargeDelayInSeconds                                      OFFSET(getStruct<T>, {0x210, 40, 0, 0})
	SMember(FScalableFloat)                            RechargePercentageLimit                                     OFFSET(getStruct<T>, {0x238, 40, 0, 0})
	CMember(TArray<FEnergyChannelingData>)             ActiveEnergyChannels                                        OFFSET(get<T>, {0x260, 16, 0, 0})
	CMember(TArray<FEnergyChannelingData>)             NewActiveEnergyChannels                                     OFFSET(get<T>, {0x270, 16, 0, 0})
	CMember(TArray<FEnergyRegenOverrideData>)          EnergyRegenOverrides                                        OFFSET(get<T>, {0x280, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCurrentEnergyChanged                                      OFFSET(getStruct<T>, {0x290, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEnergyRechargeBegun                                       OFFSET(getStruct<T>, {0x2A0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEnergyRechargeInterrupted                                 OFFSET(getStruct<T>, {0x2B0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEnergyReachedMax                                          OFFSET(getStruct<T>, {0x2C0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEnergyReachedMinForUsing                                  OFFSET(getStruct<T>, {0x2D0, 16, 0, 0})
	DMember(bool)                                      bRechargingEnabled                                          OFFSET(get<bool>, {0x2E0, 1, 1, 0})
	DMember(bool)                                      bIsRecharging                                               OFFSET(get<bool>, {0x2E0, 1, 1, 1})
	DMember(bool)                                      bIsUsingEnergy                                              OFFSET(get<bool>, {0x2E0, 1, 1, 2})


	/// Functions
	// Function /Script/EnergyRuntime.FortComponent_Energy.UseEnergy
	// bool UseEnergy(float& OutAmountOfEnergyUsed, float AmountOfEnergyToUse, bool bUseEnergyEvenOnFailure, class UObject* OptionalEnergyUser, bool bBroadcastEnergyPercentChanged); // [0xaa9f7f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnergyRuntime.FortComponent_Energy.StopUsingEnergy
	// bool StopUsingEnergy(FGameplayTag& EnergyUseIdentifier, class UObject* OptionalEnergyUser);                              // [0xaa9f6a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnergyRuntime.FortComponent_Energy.StopAddingEnergy
	// bool StopAddingEnergy(FGameplayTag& EnergyUseIdentifier, class UObject* OptionalEnergySource);                           // [0xaa9f4cc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnergyRuntime.FortComponent_Energy.StartUsingEnergy
	// bool StartUsingEnergy(float EnergyToUseToStart, float EnergyToUsePerSecond, FGameplayTag& EnergyUseIdentifier, class UObject* OptionalEnergyUser); // [0xaa9f278] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnergyRuntime.FortComponent_Energy.StartAddingEnergy
	// bool StartAddingEnergy(float EnergyToAddPerSecond, FGameplayTag& EnergySourceIdentifier, class UObject* OptionalEnergySource); // [0xaa9f0a4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnergyRuntime.FortComponent_Energy.SetAllEnergyUsageFree
	// bool SetAllEnergyUsageFree(bool bShouldEnergyUsageBeFree);                                                               // [0xaa9efc4] Final|Native|Public|BlueprintCallable 
	// Function /Script/EnergyRuntime.FortComponent_Energy.RemoveRegenDataOverride
	// bool RemoveRegenDataOverride(FGameplayTag& RegenOverrideIdentifier);                                                     // [0xaa9eee0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnergyRuntime.FortComponent_Energy.RegisterMutatorUpdatedDelegate
	// void RegisterMutatorUpdatedDelegate(class APawn* AffectedPawn);                                                          // [0xaa9ec9c] Final|Native|Private 
	// Function /Script/EnergyRuntime.FortComponent_Energy.OnPlayerStatePawnSet
	// void OnPlayerStatePawnSet(class APlayerState* Player, class APawn* NewPawn, class APawn* OldPawn);                       // [0x2f3277c] Final|Native|Private 
	// Function /Script/EnergyRuntime.FortComponent_Energy.OnMutatorUpdated
	// void OnMutatorUpdated();                                                                                                 // [0x1b03864] Final|Native|Private 
	// Function /Script/EnergyRuntime.FortComponent_Energy.HasSufficientEnergy
	// bool HasSufficientEnergy(float EnergyAmountToTest);                                                                      // [0xaa9ebcc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnergyRuntime.FortComponent_Energy.HandleAbilitySystemComponentInvalidated
	// void HandleAbilitySystemComponentInvalidated();                                                                          // [0x37c44e0] Final|Native|Private 
	// Function /Script/EnergyRuntime.FortComponent_Energy.HandleAbilitySystemComponentInitialized
	// void HandleAbilitySystemComponentInitialized(class UFortAbilitySystemComponent* AbilitySystemComponent, class AFortPlayerPawn* PlayerPawn); // [0x2b4fa60] Final|Native|Private 
	// Function /Script/EnergyRuntime.FortComponent_Energy.GetCurrentEnergyPercentage
	// float GetCurrentEnergyPercentage();                                                                                      // [0x1e08770] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnergyRuntime.FortComponent_Energy.ApplyRegenDataOverride
	// void ApplyRegenDataOverride(FGameplayTag& RegenOverrideIdentifier, float NewRechargeAmountPerSecond, float NewRechargeDelayInSeconds, float NewRechargePercentageLimit); // [0xaa9e97c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnergyRuntime.FortComponent_Energy.AddEnergy
	// bool AddEnergy(float& OutAmountOfEnergyAdded, float AmountOfEnergyToAdd, class UObject* OptionalEnergySource, bool bBroadcastEnergyPercentChanged); // [0xaa9e764] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/EnergyRuntime.EnergyChannelingData
/// Size: 0x0018 (0x000000 - 0x000018)
class FEnergyChannelingData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     EnergyPerSecond                                             OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FGameplayTag)                              EnergyChannelingPurposeIdentifier                           OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	CMember(class UObject*)                            OptionalEnergyChannelingSource                              OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bShouldStopApplyingNextTick                                 OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/EnergyRuntime.EnergyRegenOverrideData
/// Size: 0x0010 (0x000000 - 0x000010)
class FEnergyRegenOverrideData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              EnergyRegenIdentifier                                       OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(float)                                     RechargeAmountPerSecond                                     OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     RechargeDelayInSeconds                                      OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     RechargePercentageLimit                                     OFFSET(get<float>, {0xC, 4, 0, 0})
};

