
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteAI
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: LinkId
/// dependency: ModularGameplay
/// dependency: PlayspaceSystem

/// Class /Script/CreativeRoyaleRuntime.CreativeRoyaleIslandPlayspace
/// Size: 0x0078 (0x0006C0 - 0x000738)
class ACreativeRoyaleIslandPlayspace : public AFortPlayspace
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1848;

public:
	CMember(class UFortProjectEditComponent_CreativeRoyale*) ProjectEditComponent                                  OFFSET(get<T>, {0x6C0, 8, 0, 0})
	CMember(class UPlayspaceComponent_PlayStopPauseManager*) PlayStopPauseManager                                  OFFSET(get<T>, {0x6C8, 8, 0, 0})
	CMember(class UPlayspaceComponent_CreativeLoadingStateProxy*) CreativeLoadingStateProxy                        OFFSET(get<T>, {0x6D0, 8, 0, 0})
	CMember(class UPlayspaceComponent_SpatialGameplay*) SpatialGameplayComponent                                   OFFSET(get<T>, {0x6D8, 8, 0, 0})
	CMember(class UPlayspaceComponent_DeviceTracking*) DeviceTrackerComponent                                      OFFSET(get<T>, {0x6E0, 8, 0, 0})
	CMember(class UPlayspaceComponent_CreativeModifyEmotes*) CreativeModifyEmotesComponent                         OFFSET(get<T>, {0x6E8, 8, 0, 0})
	CMember(class UFortPlayspaceComponent_WorldTimeOfDayOverride*) WorldTimeOfDayOverrideComponent                 OFFSET(get<T>, {0x6F0, 8, 0, 0})
	CMember(class UCreativeRoyalePlayspaceComponent_LoadingScreen*) LoadingScreenComponent                         OFFSET(get<T>, {0x6F8, 8, 0, 0})
	CMember(class UPlayspaceComponent_ActorMemoryTracker*) ActorMemoryTracker                                      OFFSET(get<T>, {0x700, 8, 0, 0})
	CMember(class UFortPoiSwapManager*)                FortPoiSwapManager                                          OFFSET(get<T>, {0x708, 8, 0, 0})
	CMember(TArray<class AActor*>)                     FoundActors                                                 OFFSET(get<T>, {0x718, 16, 0, 0})
	DMember(int32_t)                                   IslandMemoryBudget                                          OFFSET(get<int32_t>, {0x728, 4, 0, 0})
	DMember(float)                                     MaxMemorySamplingHeight                                     OFFSET(get<float>, {0x72C, 4, 0, 0})
	DMember(float)                                     MaxMemorySamplingCellSize                                   OFFSET(get<float>, {0x730, 4, 0, 0})
};

/// Class /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LoadingScreen
/// Size: 0x0088 (0x0000A0 - 0x000128)
class UCreativeRoyalePlayspaceComponent_LoadingScreen : public UPlayspaceComponent_LoadingScreen
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	DMember(bool)                                      bShouldDisplayLoadingScreenDuringPostGame                   OFFSET(get<bool>, {0xA0, 1, 0, 0})
	SMember(FText)                                     PlotNotFinishedLoadingContext                               OFFSET(getStruct<T>, {0xA8, 24, 0, 0})
	SMember(FText)                                     MinigameResetContext                                        OFFSET(getStruct<T>, {0xC0, 24, 0, 0})
	SMember(FScalableFloat)                            FailsafeTimeoutLength                                       OFFSET(getStruct<T>, {0xF0, 40, 0, 0})


	/// Functions
	// Function /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LoadingScreen.OnPlotLoadComplete
	// void OnPlotLoadComplete();                                                                                               // [0xb697a28] Final|Native|Private 
	// Function /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LoadingScreen.OnPlayspaceUserAdded
	// void OnPlayspaceUserAdded(FPlayspaceUser& AddedUser);                                                                    // [0xb697934] Final|Native|Private|HasOutParms 
	// Function /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LoadingScreen.OnMinigameStateChanged
	// void OnMinigameStateChanged(class AFortMinigame* Minigame, EFortMinigameState MinigameState);                            // [0xb6976f8] Final|Native|Private 
};

/// Class /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceLoadWaitComponent
/// Size: 0x0010 (0x000128 - 0x000138)
class UCreativeRoyalePlayspaceLoadWaitComponent : public UCreativeRoyalePlayspaceComponent_LoadingScreen
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
};

/// Class /Script/CreativeRoyaleRuntime.FortControllerComponent_CreativeRoyale
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class UFortControllerComponent_CreativeRoyale : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
};

/// Class /Script/CreativeRoyaleRuntime.FortPoiSwapManager
/// Size: 0x00A0 (0x0000A0 - 0x000140)
class UFortPoiSwapManager : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FMulticastInlineDelegate)                  OnPlayspaceLoadedContentDelegate                            OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPlayspaceUnloadedContentDelegate                          OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPrePlayspaceContentUnloadDelegate                         OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	CMember(TWeakObjectPtr<UFortMcpProfileCreative*>)  CachedIslandOwnerProfile                                    OFFSET(get<T>, {0x120, 8, 0, 0})
	SMember(FVector)                                   PoiPlotLocationOffset                                       OFFSET(getStruct<T>, {0x128, 24, 0, 0})


	/// Functions
	// Function /Script/CreativeRoyaleRuntime.FortPoiSwapManager.SwapPoi
	// void SwapPoi(class AFortPoiVolume* PoiToSwap);                                                                           // [0x604b150] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/CreativeRoyaleRuntime.FortPoiSwapManager.SetPoiSubPlot
	// void SetPoiSubPlot(class AFortPoiVolume* POIVolume, FString SubPlotName, FString SubPlotLinkCode);                       // [0xb697fd8] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/CreativeRoyaleRuntime.FortPoiSwapManager.OnPrePlayspaceContentUnload
	// void OnPrePlayspaceContentUnload(class AFortPoiSwapPlayspace* PoiSwapPlayspace);                                         // [0xb697a3c] Final|Native|Protected 
	// Function /Script/CreativeRoyaleRuntime.FortPoiSwapManager.OnPlayspaceContentLoadingStateChanged
	// void OnPlayspaceContentLoadingStateChanged(class AFortPoiSwapPlayspace* PoiSwapPlayspace, EFortPoiSwapUserContentState& ContentLoadingState); // [0xb69783c] Final|Native|Protected|HasOutParms 
	// Function /Script/CreativeRoyaleRuntime.FortPoiSwapManager.GetPoiSubPlotLinkCode
	// FString GetPoiSubPlotLinkCode(class AFortPoiVolume* POIVolume);                                                          // [0xb696f0c] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeRoyaleRuntime.FortPoiSwapManager.GetPlayspaceForPoi
	// class AFortPoiSwapPlayspace* GetPlayspaceForPoi(class AFortPoiVolume* POIVolume);                                        // [0xb696e7c] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CreativeRoyaleRuntime.FortPoiSwapPlayspace
/// Size: 0x00B0 (0x0006C0 - 0x000770)
class AFortPoiSwapPlayspace : public AFortPlayspace
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1904;

public:
	SMember(FMulticastInlineDelegate)                  OnContentStateChangedDelegate                               OFFSET(getStruct<T>, {0x6C0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPreContentUnloadDelegate                                  OFFSET(getStruct<T>, {0x6D0, 16, 0, 0})
	CMember(class USceneComponent*)                    SceneComponent                                              OFFSET(get<T>, {0x6E0, 8, 0, 0})
	CMember(class UFortLevelSaveComponent*)            LevelSaveComponent                                          OFFSET(get<T>, {0x6E8, 8, 0, 0})
	CMember(class UPlaysetLevelStreamComponent*)       PlaysetLevelStreamComponent                                 OFFSET(get<T>, {0x6F0, 8, 0, 0})
	CMember(TWeakObjectPtr<AFortPoiVolume*>)           PoiToReplace                                                OFFSET(get<T>, {0x6F8, 8, 0, 0})
	CMember(TWeakObjectPtr<UFortCreativeRealEstatePlotItem*>) PlotToLoad                                           OFFSET(get<T>, {0x700, 8, 0, 0})
	CMember(TWeakObjectPtr<UFortCreativeRealEstatePlotItem*>) LoadedPlot                                           OFFSET(get<T>, {0x708, 8, 0, 0})
	SMember(FOnlineLinkId)                             LinkCodeToLoad                                              OFFSET(getStruct<T>, {0x710, 24, 0, 0})
	CMember(TArray<class AActor*>)                     SpawnedActors                                               OFFSET(get<T>, {0x728, 16, 0, 0})


	/// Functions
	// Function /Script/CreativeRoyaleRuntime.FortPoiSwapPlayspace.OnUserContentUnloaded
	// void OnUserContentUnloaded(FAsyncTaskResult& Result);                                                                    // [0xb697b04] Final|Native|Protected|HasOutParms 
	// Function /Script/CreativeRoyaleRuntime.FortPoiSwapPlayspace.OnUserContentLoaded
	// void OnUserContentLoaded();                                                                                              // [0xb697af0] Final|Native|Protected 
};

/// Class /Script/CreativeRoyaleRuntime.AthenaAIServicePlayerBots_CreativeRoyale
/// Size: 0x0070 (0x001370 - 0x0013E0)
class UAthenaAIServicePlayerBots_CreativeRoyale : public UAthenaAIServiceCreativePlayerBots
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5088;

public:
	SMember(FScalableFloat)                            PlayerBotsEnabled                                           OFFSET(getStruct<T>, {0x1368, 40, 0, 0})
	SMember(FScalableFloat)                            BotsAllowedOnHumanTeam                                      OFFSET(getStruct<T>, {0x1390, 40, 0, 0})
	SMember(FScalableFloat)                            ForceAllPlayerBotsToOneTeam                                 OFFSET(getStruct<T>, {0x13B8, 40, 0, 0})


	/// Functions
	// Function /Script/CreativeRoyaleRuntime.AthenaAIServicePlayerBots_CreativeRoyale.StartLootClustering
	// void StartLootClustering();                                                                                              // [0xb6986f0] Final|Native|Protected 
	// Function /Script/CreativeRoyaleRuntime.AthenaAIServicePlayerBots_CreativeRoyale.OnPlayerJoiningInProgress
	// void OnPlayerJoiningInProgress(class AFortPlayerState* FortPlayerState);                                                 // [0xb6977bc] Final|Native|Protected 
};

/// Class /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset
/// Size: 0x0180 (0x0000A0 - 0x000220)
class UCreativeRoyalePlayspaceComponent_LevelReset : public UPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	CMember(TWeakObjectPtr<ULevelSaveRecord*>)         CachedLevelSaveRecord                                       OFFSET(get<T>, {0xA0, 8, 0, 0})
	DMember(bool)                                      bSpawnFromGameplay                                          OFFSET(get<bool>, {0xA8, 1, 0, 0})
	CMember(TArray<TWeakObjectPtr<AActor*>>)           SavedFoundActors                                            OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(TMap<TWeakObjectPtr<AActor*>, FSpawnBuildingActorParameters>) SavedDeadActors                          OFFSET(get<T>, {0xC0, 80, 0, 0})
	CMember(TArray<TWeakObjectPtr<AActor*>>)           SavedDamagedActors                                          OFFSET(get<T>, {0x110, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr<AActor*>>)           FoundActorsDied                                             OFFSET(get<T>, {0x120, 16, 0, 0})
	CMember(TArray<FGuid>)                             FoundActorsDiedGuid                                         OFFSET(get<T>, {0x130, 16, 0, 0})
	CMember(TMap<FGuid, FAttachedBuildingActorGuids>)  SavedParentWithAttachedBuildings                            OFFSET(get<T>, {0x140, 80, 0, 0})
	CMember(TMap<FGuid, TWeakObjectPtr<AActor*>>)      CurrentActorForBuildingGuid                                 OFFSET(get<T>, {0x190, 80, 0, 0})
	CMember(TArray<TWeakObjectPtr<AActor*>>)           FoundActorsDamaged                                          OFFSET(get<T>, {0x1E0, 16, 0, 0})
	CMember(TArray<FGuid>)                             FoundActorsDamagedGuid                                      OFFSET(get<T>, {0x1F0, 16, 0, 0})
	CMember(TWeakObjectPtr<UFortPoiSwapManager*>)      CachedPoiSwapManager                                        OFFSET(get<T>, {0x200, 8, 0, 0})


	/// Functions
	// Function /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.SaveParentToAttachToInformation
	// void SaveParentToAttachToInformation(FGuid ActorToAttachGuid, class AActor* ActorToAttach);                              // [0xb697dbc] Final|Native|Private|HasDefaults 
	// Function /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.SaveDamagedActor
	// void SaveDamagedActor(class AActor* DamagedActor);                                                                       // [0x604b150] Final|Native|Private 
	// Function /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.SaveActorToBeRespawned
	// void SaveActorToBeRespawned(class AActor* ActorToBeRespawned, bool bRemoveDamagedActor);                                 // [0x811ffc0] Final|Native|Private 
	// Function /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.RestoreAttachedBuildingActors
	// void RestoreAttachedBuildingActors(FGuid SpawnableActorGuid, class AActor* Actor);                                       // [0xb697ba0] Final|Native|Private|HasDefaults 
	// Function /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.RespawnDeadActors
	// void RespawnDeadActors();                                                                                                // [0x32e4b44] Final|Native|Private 
	// Function /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.OnSpawningFromSaveFinish
	// void OnSpawningFromSaveFinish();                                                                                         // [0x32e4b44] Final|Native|Private 
	// Function /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.OnPlotLoadComplete
	// void OnPlotLoadComplete();                                                                                               // [0x32e4b44] Final|Native|Private 
	// Function /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.HandleMinigameStateChanged
	// void HandleMinigameStateChanged(class AFortMinigame* Minigame, EFortMinigameState NewMinigameState);                     // [0x867f720] Final|Native|Private 
	// Function /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.HandleBuildingDied
	// void HandleBuildingDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0x867d2f0] Final|Native|Private|HasDefaults 
	// Function /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.HandleBuildingDestroyed
	// void HandleBuildingDestroyed(TWeakObjectPtr<ABuildingActor*> DestroyedBuilding);                                         // [0xb697604] Final|Native|Private 
	// Function /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.HandleBuildingDamaged
	// void HandleBuildingDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0x867d2f0] Final|Native|Private|HasDefaults 
	// Function /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.GetPoiSwapManager
	// class UFortPoiSwapManager* GetPoiSwapManager();                                                                          // [0xb6975dc] Final|Native|Protected 
	// Function /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.GetLevelSaveRecord
	// class ULevelSaveRecord* GetLevelSaveRecord();                                                                            // [0xab9668c] Final|Native|Private 
	// Function /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.DestroyDamagedActors
	// void DestroyDamagedActors();                                                                                             // [0x32e4b44] Final|Native|Private 
	// Function /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.ClearFoundActors
	// void ClearFoundActors();                                                                                                 // [0x32e4b44] Final|Native|Private 
	// Function /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.CachePoiSwapManager
	// void CachePoiSwapManager();                                                                                              // [0xb696e3c] Final|Native|Protected 
	// Function /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.BindActorToCallbacks
	// void BindActorToCallbacks(class AActor* Actor);                                                                          // [0xb696b4c] Final|Native|Private 
	// Function /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.AddActorToTrack
	// void AddActorToTrack(class AActor* ActorToTrack);                                                                        // [0x604b150] Final|Native|Public  
};

/// Class /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_PlayerSpawning
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UCreativeRoyalePlayspaceComponent_PlayerSpawning : public UFortPlayspaceComponent_PlayerSpawning
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_RemoveItems
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class UCreativeRoyalePlayspaceComponent_RemoveItems : public UPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	DMember(bool)                                      bSpawnFromGameplay                                          OFFSET(get<bool>, {0xA0, 1, 0, 0})


	/// Functions
	// Function /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_RemoveItems.OnSpawningFromSaveFinish
	// void OnSpawningFromSaveFinish();                                                                                         // [0x32e4b44] Final|Native|Private 
	// Function /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_RemoveItems.OnPlotLoadComplete
	// void OnPlotLoadComplete();                                                                                               // [0x32e4b44] Final|Native|Private 
	// Function /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_RemoveItems.HandleMinigameStateChanged
	// void HandleMinigameStateChanged(class AFortMinigame* Minigame, EFortMinigameState NewMinigameState);                     // [0x867f720] Final|Native|Private 
};

/// Class /Script/CreativeRoyaleRuntime.CreativeRoyaleRootPlayspace
/// Size: 0x0038 (0x0006C0 - 0x0006F8)
class ACreativeRoyaleRootPlayspace : public AFortPlayspace
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1784;

public:
	CMember(class AFortPlayerControllerAthena*)        EditorIslandOwnerPlayerController                           OFFSET(get<T>, {0x6D8, 8, 0, 0})
	DMember(bool)                                      bHasPlotLoaded                                              OFFSET(get<bool>, {0x6E8, 1, 0, 0})


	/// Functions
	// Function /Script/CreativeRoyaleRuntime.CreativeRoyaleRootPlayspace.TeleportPlayerToPlayerStart
	// void TeleportPlayerToPlayerStart(FPlayspaceUser& AddedUser);                                                             // [0xb698704] Final|Native|Protected|HasOutParms 
	// Function /Script/CreativeRoyaleRuntime.CreativeRoyaleRootPlayspace.TeleportPlayersToPlayerStarts
	// void TeleportPlayersToPlayerStarts();                                                                                    // [0x32e4b44] Final|Native|Protected 
	// Function /Script/CreativeRoyaleRuntime.CreativeRoyaleRootPlayspace.OnRep_bHasPlotLoaded
	// void OnRep_bHasPlotLoaded();                                                                                             // [0xb697acc] Final|Native|Private 
	// Function /Script/CreativeRoyaleRuntime.CreativeRoyaleRootPlayspace.OnPlotLoadComplete
	// void OnPlotLoadComplete();                                                                                               // [0xb697a14] Final|Native|Private 
	// Function /Script/CreativeRoyaleRuntime.CreativeRoyaleRootPlayspace.Cheat_LoadEditorIsland
	// void Cheat_LoadEditorIsland();                                                                                           // [0x32e4b44] Final|Native|Protected 
	// Function /Script/CreativeRoyaleRuntime.CreativeRoyaleRootPlayspace.BuildDataRegistryResolverScope_Implementation
	// bool BuildDataRegistryResolverScope_Implementation(TArray<FName>& InOutResolverScopes, int32_t& InOutPriority);          // [0xb696d38] Native|Public|HasOutParms|Const 
};

/// Class /Script/CreativeRoyaleRuntime.FortAthenaMutator_CreativeRoyaleSafeZoneOverride
/// Size: 0x0000 (0x000338 - 0x000338)
class AFortAthenaMutator_CreativeRoyaleSafeZoneOverride : public AFortAthenaMutator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
};

/// Class /Script/CreativeRoyaleRuntime.FortCheatManager_CreativeRoyale
/// Size: 0x0010 (0x000038 - 0x000048)
class UFortCheatManager_CreativeRoyale : public UFortCheatManager_Coupled
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(class UFortCreativeRealEstatePlotItemDefinition*) CreativeRoyaleEditPlotDefinition                     OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FGameplayTag)                              CreativeRoyaleVolumeTag                                     OFFSET(getStruct<T>, {0x40, 4, 0, 0})


	/// Functions
	// Function /Script/CreativeRoyaleRuntime.FortCheatManager_CreativeRoyale.TeleportToPlotAferLoad
	// void TeleportToPlotAferLoad();                                                                                           // [0xb6987e4] Final|Native|Protected|Const 
	// Function /Script/CreativeRoyaleRuntime.FortCheatManager_CreativeRoyale.CreativeRoyaleTeleportToEditZone
	// void CreativeRoyaleTeleportToEditZone();                                                                                 // [0x32e4b44] Final|Exec|Native|Public|Const 
	// Function /Script/CreativeRoyaleRuntime.FortCheatManager_CreativeRoyale.CreativeRoyaleResetIslandFile
	// void CreativeRoyaleResetIslandFile();                                                                                    // [0xb696e50] Final|Exec|Native|Public|Const 
	// Function /Script/CreativeRoyaleRuntime.FortCheatManager_CreativeRoyale.CreativeRoyaleLoadEditPlot
	// void CreativeRoyaleLoadEditPlot();                                                                                       // [0x32e4b44] Final|Exec|Native|Public|Const 
};

/// Class /Script/CreativeRoyaleRuntime.FortProjectEditComponent_CreativeRoyale
/// Size: 0x0020 (0x000500 - 0x000520)
class UFortProjectEditComponent_CreativeRoyale : public UFortProjectEditComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1312;

public:
	CMember(class UFortCreativeRealEstatePlotItemDefinition*) CreativeRoyaleEditPlotDefinition                     OFFSET(get<T>, {0x510, 8, 0, 0})


	/// Functions
	// Function /Script/CreativeRoyaleRuntime.FortProjectEditComponent_CreativeRoyale.OnPlayerLoggedIn
	// void OnPlayerLoggedIn(class APlayerController* PlayerController);                                                        // [0x604b150] Final|Native|Protected 
	// Function /Script/CreativeRoyaleRuntime.FortProjectEditComponent_CreativeRoyale.LoadPlotFromProject
	// void LoadPlotFromProject();                                                                                              // [0x32e4b44] Final|Native|Protected 
};

/// Struct /Script/CreativeRoyaleRuntime.AttachedBuildingActorGuids
/// Size: 0x0010 (0x000000 - 0x000010)
class FAttachedBuildingActorGuids : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FGuid>)                             AttachedBuildingActorGuids                                  OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/CreativeRoyaleRuntime.SpawnBuildingActorParameters
/// Size: 0x0070 (0x000000 - 0x000070)
class FSpawnBuildingActorParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(class UClass*)                             SpawnClass                                                  OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TWeakObjectPtr<ULevel*>)                   SpawnLevel                                                  OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FTransform)                                SpawnTransform                                              OFFSET(getStruct<T>, {0x10, 96, 0, 0})
};

/// Enum /Script/CreativeRoyaleRuntime.EFortPoiSwapUserContentState
/// Size: 0x05
enum EFortPoiSwapUserContentState : uint8_t
{
	EFortPoiSwapUserContentState__Unloaded                                           = 0,
	EFortPoiSwapUserContentState__Loading                                            = 1,
	EFortPoiSwapUserContentState__Loaded                                             = 2,
	EFortPoiSwapUserContentState__Unloading                                          = 3,
	EFortPoiSwapUserContentState__EFortPoiSwapUserContentState_MAX                   = 4
};

