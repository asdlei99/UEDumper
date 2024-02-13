
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FMJamCatalogRuntime
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayEventRouter
/// dependency: GameplayTags
/// dependency: ModularGameplay
/// dependency: PlayspaceSystem
/// dependency: UMG

/// Class /Script/FMJamSystemRuntime.JamControllerComponent
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class UJamControllerComponent : public UControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FGameplayTagContainer)                     AdditionalTags                                              OFFSET(getStruct<T>, {0xA8, 32, 0, 0})


	/// Functions
	// Function /Script/FMJamSystemRuntime.JamControllerComponent.UpdateJamUI
	// void UpdateJamUI();                                                                                                      // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /Script/FMJamSystemRuntime.JamControllerComponent.GetControllerOfClass
	// class AController* GetControllerOfClass(class UClass* ControllerType, bool bMatchChildTypes);                            // [0xb8c2aa0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FMJamSystemRuntime.JamGlobalControlsWidget
/// Size: 0x0008 (0x000400 - 0x000408)
class UJamGlobalControlsWidget : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1032;

public:
	CMember(class UCommonButtonBase*)                  Button_Close                                                OFFSET(get<T>, {0x400, 8, 0, 0})


	/// Functions
	// Function /Script/FMJamSystemRuntime.JamGlobalControlsWidget.Close
	// void Close();                                                                                                            // [0x6fa9afc] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/FMJamSystemRuntime.JamOnOffSwitchComponent
/// Size: 0x0100 (0x0000A0 - 0x0001A0)
class UJamOnOffSwitchComponent : public UPlayerStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	SMember(FScalableFloat)                            bEnableJam                                                  OFFSET(getStruct<T>, {0xA0, 40, 0, 0})
	CMember(class UClass*)                             JamBlockerEffect                                            OFFSET(get<T>, {0xD0, 8, 0, 0})
	SMember(FActiveGameplayEffectHandle)               JamBlockerEffectHandle                                      OFFSET(getStruct<T>, {0xD8, 8, 0, 0})
	SMember(FGameplayEventListenerHandle)              GamePhaseUpdatedEventHandle                                 OFFSET(getStruct<T>, {0xE0, 28, 0, 0})
	SMember(FGlobalMemoryRequestHandle)                GlobalMemoryRequestHandle                                   OFFSET(getStruct<T>, {0x100, 8, 0, 0})


	/// Functions
	// Function /Script/FMJamSystemRuntime.JamOnOffSwitchComponent.ShouldApplyJamOnSplitscreenLogic
	// bool ShouldApplyJamOnSplitscreenLogic(class UObject* WorldContextObject, class APlayerController* ReferenceController);  // [0xb8c2f48] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/FMJamSystemRuntime.JamOnOffSwitchComponent.OnPlayerStatePawnSet
	// void OnPlayerStatePawnSet(class APlayerState* Player, class APawn* NewPawn, class APawn* OldPawn);                       // [0xb8c2d8c] Final|Native|Protected 
	// Function /Script/FMJamSystemRuntime.JamOnOffSwitchComponent.OnMutatorUpdated
	// void OnMutatorUpdated();                                                                                                 // [0xb8c2d78] Final|Native|Protected 
};

/// Class /Script/FMJamSystemRuntime.JamPlayerPawnComponent
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class UJamPlayerPawnComponent : public UPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FGameplayTagContainer)                     AdditionalTags                                              OFFSET(getStruct<T>, {0xA8, 32, 0, 0})


	/// Functions
	// Function /Script/FMJamSystemRuntime.JamPlayerPawnComponent.GetPawnOfClass
	// class APawn* GetPawnOfClass(class UClass* PawnType, bool bMatchChildTypes);                                              // [0xb8c2c0c] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FMJamSystemRuntime.JamQuestComponent
/// Size: 0x0048 (0x0000A0 - 0x0000E8)
class UJamQuestComponent : public UPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
};

/// Class /Script/FMJamSystemRuntime.JamSystemEmoteBPFL
/// Size: 0x0000 (0x000028 - 0x000028)
class UJamSystemEmoteBPFL : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/FMJamSystemRuntime.JamSystemEmoteBPFL.GetEmoteActionBinding
	// void GetEmoteActionBinding(FString EmoteTemplateID, FEmoteActionBinding& OutCreatedEmote);                               // [0xae4e550] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FMJamSystemRuntime.JamVerbProcessor_Jam
/// Size: 0x0000 (0x000098 - 0x000098)
class UJamVerbProcessor_Jam : public UObjectiveProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
};

/// Struct /Script/FMJamSystemRuntime.JamVerbMessage_Jam
/// Size: 0x0010 (0x000078 - 0x000088)
class FJamVerbMessage_Jam : public FVerbMessage
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	DMember(bool)                                      bIsFullBand                                                 OFFSET(get<bool>, {0x78, 1, 0, 0})
	DMember(int32_t)                                   BandSize                                                    OFFSET(get<int32_t>, {0x7C, 4, 0, 0})
	CMember(EFMJamLoopType)                            LoopType                                                    OFFSET(get<T>, {0x80, 1, 0, 0})
};

/// Struct /Script/FMJamSystemRuntime.JamVerbFilter_Jam
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class FJamVerbFilter_Jam : public FObjectiveFilter
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(bool)                                      bRequireFullBand                                            OFFSET(get<bool>, {0xA0, 1, 1, 0})
	DMember(bool)                                      bUsebandSize                                                OFFSET(get<bool>, {0xA0, 1, 1, 1})
	SMember(FInt32Range)                               BandSize                                                    OFFSET(getStruct<T>, {0xA4, 16, 0, 0})
	DMember(bool)                                      bUseLoopType                                                OFFSET(get<bool>, {0xB4, 1, 1, 0})
	CMember(EFMJamLoopType)                            LoopType                                                    OFFSET(get<T>, {0xB5, 1, 0, 0})
};

