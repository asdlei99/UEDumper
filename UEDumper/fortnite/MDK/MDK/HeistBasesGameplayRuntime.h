
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: ModularGameplay

/// Class /Script/HeistBasesGameplayRuntime.FortGameStateComponent_HeistDisplayCaseItemManager
/// Size: 0x00C8 (0x0000A0 - 0x000168)
class UFortGameStateComponent_HeistDisplayCaseItemManager : public UFortGameStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	SMember(FMulticastInlineDelegate)                  OnDisplayCaseItemManagerReady                               OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	CMember(TArray<class UFortWorldItemDefinition*>)   AllDisplayCaseItems                                         OFFSET(get<T>, {0xB0, 16, 0, 0})


	/// Functions
	// Function /Script/HeistBasesGameplayRuntime.FortGameStateComponent_HeistDisplayCaseItemManager.IsDataReady
	// bool IsDataReady();                                                                                                      // [0xb44c438] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HeistBasesGameplayRuntime.FortGameStateComponent_HeistDisplayCaseItemManager.HandlePlaylistDataReady
	// void HandlePlaylistDataReady(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, FGameplayTagContainer& PlaylistContextTags); // [0xb44c298] Final|Native|Private|HasOutParms 
	// Function /Script/HeistBasesGameplayRuntime.FortGameStateComponent_HeistDisplayCaseItemManager.GetDisplayCaseItem
	// class UFortWorldItemDefinition* GetDisplayCaseItem(FGameplayTag DisplayCaseGroupTag);                                    // [0xb44c1c8] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/HeistBasesGameplayRuntime.FortHeistDisplayCase
/// Size: 0x00D0 (0x000B90 - 0x000C60)
class AFortHeistDisplayCase : public ABuildingSMActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3168;

public:
	DMember(bool)                                      bReplicateLongInteractionDetails                            OFFSET(get<bool>, {0xB98, 1, 0, 0})
	DMember(bool)                                      bCanBeMarked                                                OFFSET(get<bool>, {0xB99, 1, 1, 0})
	DMember(bool)                                      bBlockMarking                                               OFFSET(get<bool>, {0xB99, 1, 1, 1})
	SMember(FMarkedActorDisplayInfo)                   MarkerDisplay                                               OFFSET(getStruct<T>, {0xBA0, 168, 0, 0})
	SMember(FVector)                                   MarkerPositionOffset                                        OFFSET(getStruct<T>, {0xC48, 24, 0, 0})


	/// Functions
	// Function /Script/HeistBasesGameplayRuntime.FortHeistDisplayCase.OnServerNotifyStartDisplayCaseLongUse
	// void OnServerNotifyStartDisplayCaseLongUse(class AFortPlayerPawn* InteractingPawn);                                      // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /Script/HeistBasesGameplayRuntime.FortHeistDisplayCase.OnServerNotifyEndDisplayCaseLongUse
	// void OnServerNotifyEndDisplayCaseLongUse(class AFortPlayerPawn* InteractingPawn, bool bUseCompleted);                    // [0x130d900] Event|Protected|BlueprintEvent 
};

/// Struct /Script/HeistBasesGameplayRuntime.FortHeistDisplayCaseItemDataTableRow
/// Size: 0x0008 (0x000008 - 0x000010)
class FFortHeistDisplayCaseItemDataTableRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UFortWorldItemDefinition*)           WorldItemDefinition                                         OFFSET(get<T>, {0x8, 8, 0, 0})
};

