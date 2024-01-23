
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayTags
/// dependency: ModularGameplay
/// dependency: PlayspaceSystem

/// Class /Script/VKEditGameplay.VKEditGameplayAssetsToCook
/// Size: 0x0010 (0x000030 - 0x000040)
class UVKEditGameplayAssetsToCook : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<TWeakObjectPtr<UObject*>>)          Assets                                                      OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/VKEditGameplay.PlayspaceComponent_PlaysetRootSpawner
/// Size: 0x0048 (0x0000F8 - 0x000140)
class UPlayspaceComponent_PlaysetRootSpawner : public UFortPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
};

/// Class /Script/VKEditGameplay.PlayspaceComponent_VKEditCreativeToolsPermission
/// Size: 0x0000 (0x000218 - 0x000218)
class UPlayspaceComponent_VKEditCreativeToolsPermission : public UPlayspaceComponent_CreativeToolsPermission
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
};

/// Class /Script/VKEditGameplay.VKEditPlayspace
/// Size: 0x0128 (0x0006C0 - 0x0007E8)
class AVKEditPlayspace : public AFortPlayspace
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2024;

public:
	CMember(TWeakObjectPtr<UClass*>)                   EditorOnlyMinigameSettingsMachineClassToSpawn               OFFSET(get<T>, {0x710, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   EditorOnlyWorldManagerClassToSpawn                          OFFSET(get<T>, {0x730, 32, 0, 0})
	CMember(class UFortLevelStreamComponent*)          LevelStreamComponent                                        OFFSET(get<T>, {0x750, 8, 0, 0})
	CMember(class UFortProjectEditComponent*)          ProjectEditComponent                                        OFFSET(get<T>, {0x758, 8, 0, 0})
	CMember(class UPlayspaceComponent_PlayStopPauseManager*) PlayStopPauseManager                                  OFFSET(get<T>, {0x760, 8, 0, 0})
	CMember(class UPlayspaceComponent_EditConnectionManager*) EditConnectionManager                                OFFSET(get<T>, {0x768, 8, 0, 0})
	CMember(class UPlayspaceComponent_LiveEdit*)       LiveEditComponent                                           OFFSET(get<T>, {0x770, 8, 0, 0})
	CMember(class UPlayspaceComponent_VKEditCreativeToolsPermission*) CreativeToolsPermission                      OFFSET(get<T>, {0x778, 8, 0, 0})
	CMember(class UPlayspaceComponent_CreativeLoadingStateProxy*) CreativeLoadingStateProxy                        OFFSET(get<T>, {0x780, 8, 0, 0})
	CMember(class UPlayspaceComponent_SpatialGameplay*) SpatialGameplayComponent                                   OFFSET(get<T>, {0x788, 8, 0, 0})
	CMember(class UFortVolumeObjectTrackingComponent*) ObjectTrackingComponent                                     OFFSET(get<T>, {0x790, 8, 0, 0})
	CMember(class UPlayspaceComponent_DeviceTracking*) DeviceTrackerComponent                                      OFFSET(get<T>, {0x798, 8, 0, 0})
	CMember(class UPlayspaceComponent_CreativeInventory*) CreativeInventoryComponent                               OFFSET(get<T>, {0x7A0, 8, 0, 0})
	CMember(class UPlayspaceComponent_ActorMemoryTracker*) ActorMemoryTrackerComponent                             OFFSET(get<T>, {0x7A8, 8, 0, 0})
	CMember(class UPlayspaceComponent_GlobalMemoryTracker*) GlobalMemoryTrackerComponent                           OFFSET(get<T>, {0x7B0, 8, 0, 0})
	CMember(class UFortCreativeDynamicXpComponent*)    FortCreativeDynamicXp                                       OFFSET(get<T>, {0x7B8, 8, 0, 0})
	CMember(class UPlayspaceComponent_CreativeModifyEmotes*) CreativeModifyEmotesComponent                         OFFSET(get<T>, {0x7C0, 8, 0, 0})
	CMember(class UFortPlayspaceComponent_WorldTimeOfDayOverride*) WorldTimeOfDayOverrideComponent                 OFFSET(get<T>, {0x7C8, 8, 0, 0})
	CMember(class UFortPlayspaceComponent_NaniteSettingsOverride*) NaniteSettingsOverrideComponent                 OFFSET(get<T>, {0x7D0, 8, 0, 0})
	CMember(class UPlayspaceComponent_PlaysetRootSpawner*) PlaysetRootSpawnerComponent                             OFFSET(get<T>, {0x7D8, 8, 0, 0})
	CMember(class UPlayspaceComponent_PlayerPawnOverrides*) PlayerPawnOverridesComponent                           OFFSET(get<T>, {0x7E0, 8, 0, 0})


	/// Functions
	// Function /Script/VKEditGameplay.VKEditPlayspace.OnClientActivatedContent
	// void OnClientActivatedContent(FUniqueNetIdRepl& ClientNetId);                                                            // [0xb6b36c8] Final|Native|Private|HasOutParms|Const 
};

/// Class /Script/VKEditGameplay.PlayspaceComponent_EditConnectionManager
/// Size: 0x00E8 (0x0000F8 - 0x0001E0)
class UPlayspaceComponent_EditConnectionManager : public UFortPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	DMember(int32_t)                                   EditConnections                                             OFFSET(get<int32_t>, {0x1B8, 4, 0, 0})
	CMember(EVkEditStatus)                             VkEditStatus                                                OFFSET(get<T>, {0x1BC, 1, 0, 0})
	SMember(FGameplayTagContainer)                     UITagsToHide                                                OFFSET(getStruct<T>, {0x1C0, 32, 0, 0})


	/// Functions
	// Function /Script/VKEditGameplay.PlayspaceComponent_EditConnectionManager.OnRep_VkEditStatus
	// void OnRep_VkEditStatus();                                                                                               // [0xb6b37dc] Final|Native|Protected|Const 
	// Function /Script/VKEditGameplay.PlayspaceComponent_EditConnectionManager.OnRep_EditConnections
	// void OnRep_EditConnections();                                                                                            // [0xb6b3798] Final|Native|Protected|Const 
};

