
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteAI
/// dependency: GameplayTags

/// Class /Script/SilkWalkerRuntime.FortAthenaAIBotEvaluator_SilkwalkerInVehicle
/// Size: 0x0028 (0x0000A8 - 0x0000D0)
class UFortAthenaAIBotEvaluator_SilkwalkerInVehicle : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FName)                                     SilkwalkerInVehicleName                                     OFFSET(getStruct<T>, {0xA8, 4, 0, 0})
	SMember(FGameplayTagContainer)                     SilkwalkerTags                                              OFFSET(getStruct<T>, {0xB0, 32, 0, 0})
};

/// Class /Script/SilkWalkerRuntime.FortAthenaNpcEvaluator_SilkWalkerGiftTarget
/// Size: 0x0068 (0x0000A8 - 0x000110)
class UFortAthenaNpcEvaluator_SilkWalkerGiftTarget : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FName)                                     GiftTargetActorName                                         OFFSET(getStruct<T>, {0xA8, 4, 0, 0})
	SMember(FName)                                     GiftTargetStatusKeyName                                     OFFSET(getStruct<T>, {0xB0, 4, 0, 0})
	DMember(float)                                     MinGiftRadius                                               OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(float)                                     MaxGiftRadius                                               OFFSET(get<float>, {0xBC, 4, 0, 0})
	SMember(FGameplayTagContainer)                     UndesiredTags                                               OFFSET(getStruct<T>, {0xC0, 32, 0, 0})
	SMember(FGameplayTagContainer)                     DesiredTags                                                 OFFSET(getStruct<T>, {0xE0, 32, 0, 0})
	CMember(TWeakObjectPtr<AFortGameModeAthena*>)      CachedGameMode                                              OFFSET(get<T>, {0x100, 8, 0, 0})
	CMember(TWeakObjectPtr<UFortGameStateComponent_AffiliationManager*>) CachedAffiliationManager                  OFFSET(get<T>, {0x108, 8, 0, 0})
};

/// Class /Script/SilkWalkerRuntime.FortSilkwalkerComponent_Telemetry
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UFortSilkwalkerComponent_Telemetry : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:


	/// Functions
	// Function /Script/SilkWalkerRuntime.FortSilkwalkerComponent_Telemetry.OnGiftThrown
	// void OnGiftThrown(class AFortPawn* TargetPawn, bool bGood);                                                              // [0xbeb1e80] Final|Native|Private|BlueprintCallable 
};

