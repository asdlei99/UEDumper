
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: NetCore

/// Class /Script/KnockbackRuntime.FortAthenaMutator_Knockback
/// Size: 0x0240 (0x000338 - 0x000578)
class AFortAthenaMutator_Knockback : public AFortAthenaMutator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1400;

public:
	DMember(bool)                                      bStorePlayerKnockbackData                                   OFFSET(get<bool>, {0x338, 1, 0, 0})
	DMember(bool)                                      bReplicatePlayerKnockbackData                               OFFSET(get<bool>, {0x339, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPlayerKnockbackDataChanged                                OFFSET(getStruct<T>, {0x340, 16, 0, 0})
	SMember(FKnockbackMutatorDataArray)                AllPlayersKnockbackData                                     OFFSET(getStruct<T>, {0x350, 288, 0, 0})
	SMember(FScalableFloat)                            bDisplayKnockbackDamageNumbersAsPercentage                  OFFSET(getStruct<T>, {0x470, 40, 0, 0})
	SMember(FScalableFloat)                            ConvertToKnockbackDamageMultiplier                          OFFSET(getStruct<T>, {0x498, 40, 0, 0})
	SMember(FScalableFloat)                            PercentDamageLowMaxThreshold                                OFFSET(getStruct<T>, {0x4C0, 40, 0, 0})
	SMember(FScalableFloat)                            PercentDamageMediumMaxThreshold                             OFFSET(getStruct<T>, {0x4E8, 40, 0, 0})
	DMember(float)                                     KnockbackMultiplierInitialValue                             OFFSET(get<float>, {0x510, 4, 0, 0})


	/// Functions
	// Function /Script/KnockbackRuntime.FortAthenaMutator_Knockback.SetPlayersShouldBreakThroughStructures
	// void SetPlayersShouldBreakThroughStructures(bool bActive, class AFortPlayerPawn* PlayerPawn);                            // [0xb4ab6c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KnockbackRuntime.FortAthenaMutator_Knockback.HandleBlockedCharacterMovement
	// void HandleBlockedCharacterMovement(FHitResult& InOutImpact, class AFortPawn* FortPawn);                                 // [0xb4ab4d4] Final|Native|Private|HasOutParms 
	// Function /Script/KnockbackRuntime.FortAthenaMutator_Knockback.GetPercentDamageMediumMaxThreshold
	// float GetPercentDamageMediumMaxThreshold();                                                                              // [0xb4ab4a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KnockbackRuntime.FortAthenaMutator_Knockback.GetPercentDamageLowMaxThreshold
	// float GetPercentDamageLowMaxThreshold();                                                                                 // [0xb4ab46c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KnockbackRuntime.FortAthenaMutator_Knockback.GetKnockbackMultiplierInitialValue
	// float GetKnockbackMultiplierInitialValue();                                                                              // [0xb4ab454] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KnockbackRuntime.FortAthenaMutator_Knockback.GetAllPlayersKnockbackData
	// TArray<FKnockbackMutatorData> GetAllPlayersKnockbackData();                                                              // [0xb4aada8] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/KnockbackRuntime.FortGameplayAbility_KnockbackMutator
/// Size: 0x0010 (0x000B60 - 0x000B70)
class UFortGameplayAbility_KnockbackMutator : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2928;

public:
	CMember(class AFortAthenaMutator_Knockback*)       CachedMutator                                               OFFSET(get<T>, {0xB60, 8, 0, 0})
	CMember(class UClass*)                             MutatorClassToGet                                           OFFSET(get<T>, {0xB68, 8, 0, 0})


	/// Functions
	// Function /Script/KnockbackRuntime.FortGameplayAbility_KnockbackMutator.SaveKnockbackData
	// void SaveKnockbackData(FKnockbackMutatorData& InKnockbackData);                                                          // [0xb4ab644] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/KnockbackRuntime.FortGameplayAbility_KnockbackMutator.GetCachedMutator
	// class AFortAthenaMutator_Knockback* GetCachedMutator();                                                                  // [0xb4ab430] Final|Native|Protected|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/KnockbackRuntime.KnockbackMutatorData
/// Size: 0x0014 (0x00000C - 0x000020)
class FKnockbackMutatorData : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(class APawn*)                              Pawn                                                        OFFSET(get<T>, {0x10, 8, 0, 0})
	DMember(float)                                     KnockbackMultiplier                                         OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/KnockbackRuntime.KnockbackMutatorDataArray
/// Size: 0x0018 (0x000108 - 0x000120)
class FKnockbackMutatorDataArray : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<FKnockbackMutatorData>)             Entries                                                     OFFSET(get<T>, {0x108, 16, 0, 0})
};

