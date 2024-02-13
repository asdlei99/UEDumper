
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
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

/// Enum /Script/CreativeRoyaleRuntime.EFortPoiSwapUserContentState
/// Size: 0x05
enum class EFortPoiSwapUserContentState : uint8_t
{
	EFortPoiSwapUserContentState__Unloaded                                           = 0,
	EFortPoiSwapUserContentState__Loading                                            = 1,
	EFortPoiSwapUserContentState__Loaded                                             = 2,
	EFortPoiSwapUserContentState__Unloading                                          = 3,
	EFortPoiSwapUserContentState__EFortPoiSwapUserContentState_MAX                   = 4
};

/// Class /Script/CreativeRoyaleRuntime.CreativeRoyaleIslandPlayspace
/// Size: 0x0078 (0x0006C0 - 0x000738)
class ACreativeRoyaleIslandPlayspace : public AFortPlayspace
{ 
public:
	class UFortProjectEditComponent_CreativeRoyale*    ProjectEditComponent;                                       // 0x06C0   (0x0008)  
	class UPlayspaceComponent_PlayStopPauseManager*    PlayStopPauseManager;                                       // 0x06C8   (0x0008)  
	class UPlayspaceComponent_CreativeLoadingStateProxy* CreativeLoadingStateProxy;                                // 0x06D0   (0x0008)  
	class UPlayspaceComponent_SpatialGameplay*         SpatialGameplayComponent;                                   // 0x06D8   (0x0008)  
	class UPlayspaceComponent_DeviceTracking*          DeviceTrackerComponent;                                     // 0x06E0   (0x0008)  
	class UPlayspaceComponent_CreativeModifyEmotes*    CreativeModifyEmotesComponent;                              // 0x06E8   (0x0008)  
	class UFortPlayspaceComponent_WorldTimeOfDayOverride* WorldTimeOfDayOverrideComponent;                         // 0x06F0   (0x0008)  
	class UCreativeRoyalePlayspaceComponent_LoadingScreen* LoadingScreenComponent;                                 // 0x06F8   (0x0008)  
	class UPlayspaceComponent_ActorMemoryTracker*      ActorMemoryTracker;                                         // 0x0700   (0x0008)  
	class UFortPoiSwapManager*                         FortPoiSwapManager;                                         // 0x0708   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0710   (0x0008)  MISSED
	TArray<class AActor*>                              FoundActors;                                                // 0x0718   (0x0010)  
	int32_t                                            IslandMemoryBudget;                                         // 0x0728   (0x0004)  
	float                                              MaxMemorySamplingHeight;                                    // 0x072C   (0x0004)  
	float                                              MaxMemorySamplingCellSize;                                  // 0x0730   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0734   (0x0004)  MISSED
};

/// Class /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LoadingScreen
/// Size: 0x0088 (0x0000A0 - 0x000128)
class UCreativeRoyalePlayspaceComponent_LoadingScreen : public UPlayspaceComponent_LoadingScreen
{ 
public:
	bool                                               bShouldDisplayLoadingScreenDuringPostGame;                  // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00A1   (0x0007)  MISSED
	SDK_UNDEFINED(24,12579) /* FText */                __um(PlotNotFinishedLoadingContext);                        // 0x00A8   (0x0018)  
	SDK_UNDEFINED(24,12580) /* FText */                __um(MinigameResetContext);                                 // 0x00C0   (0x0018)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x00D8   (0x0018)  MISSED
	FScalableFloat                                     FailsafeTimeoutLength;                                      // 0x00F0   (0x0028)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0118   (0x0010)  MISSED


	/// Functions
	// Function /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LoadingScreen.OnPlotLoadComplete
	// void OnPlotLoadComplete();                                                                                            // [0xb954e10] Final|Native|Private 
	// Function /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LoadingScreen.OnPlayspaceUserAdded
	// void OnPlayspaceUserAdded(FPlayspaceUser& AddedUser);                                                                 // [0xb954d1c] Final|Native|Private|HasOutParms 
	// Function /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LoadingScreen.OnMinigameStateChanged
	// void OnMinigameStateChanged(class AFortMinigame* Minigame, EFortMinigameState MinigameState);                         // [0xb9549ec] Final|Native|Private 
};

/// Class /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceLoadWaitComponent
/// Size: 0x0010 (0x000128 - 0x000138)
class UCreativeRoyalePlayspaceLoadWaitComponent : public UCreativeRoyalePlayspaceComponent_LoadingScreen
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0128   (0x0010)  MISSED
};

/// Class /Script/CreativeRoyaleRuntime.FortControllerComponent_CreativeRoyale
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class UFortControllerComponent_CreativeRoyale : public UFortControllerComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x00A8   (0x0030)  MISSED
};

/// Class /Script/CreativeRoyaleRuntime.FortPoiSwapManager
/// Size: 0x00A0 (0x0000A0 - 0x000140)
class UFortPoiSwapManager : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,12581) /* FMulticastInlineDelegate */ __um(OnPlayspaceLoadedContentDelegate);                 // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,12582) /* FMulticastInlineDelegate */ __um(OnPlayspaceUnloadedContentDelegate);               // 0x00B0   (0x0010)  
	SDK_UNDEFINED(16,12583) /* FMulticastInlineDelegate */ __um(OnPrePlayspaceContentUnloadDelegate);              // 0x00C0   (0x0010)  
	unsigned char                                      UnknownData00_5[0x50];                                      // 0x00D0   (0x0050)  MISSED
	SDK_UNDEFINED(8,12584) /* TWeakObjectPtr<UFortMcpProfileCreative*> */ __um(CachedIslandOwnerProfile);          // 0x0120   (0x0008)  
	FVector                                            PoiPlotLocationOffset;                                      // 0x0128   (0x0018)  


	/// Functions
	// Function /Script/CreativeRoyaleRuntime.FortPoiSwapManager.SwapPoi
	// void SwapPoi(class AFortPoiVolume* PoiToSwap);                                                                        // [0x5d87858] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/CreativeRoyaleRuntime.FortPoiSwapManager.SetPoiSubPlot
	// void SetPoiSubPlot(class AFortPoiVolume* POIVolume, FString SubPlotName, FString SubPlotLinkCode);                    // [0xb955270] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/CreativeRoyaleRuntime.FortPoiSwapManager.OnPrePlayspaceContentUnload
	// void OnPrePlayspaceContentUnload(class AFortPoiSwapPlayspace* PoiSwapPlayspace);                                      // [0xb954e24] Final|Native|Protected 
	// Function /Script/CreativeRoyaleRuntime.FortPoiSwapManager.OnPlayspaceContentLoadingStateChanged
	// void OnPlayspaceContentLoadingStateChanged(class AFortPoiSwapPlayspace* PoiSwapPlayspace, EFortPoiSwapUserContentState& ContentLoadingState); // [0xb954bec] Final|Native|Protected|HasOutParms 
	// Function /Script/CreativeRoyaleRuntime.FortPoiSwapManager.GetPoiSubPlotLinkCode
	// FString GetPoiSubPlotLinkCode(class AFortPoiVolume* POIVolume);                                                       // [0xb954208] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeRoyaleRuntime.FortPoiSwapManager.GetPlayspaceForPoi
	// class AFortPoiSwapPlayspace* GetPlayspaceForPoi(class AFortPoiVolume* POIVolume);                                     // [0xb954138] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CreativeRoyaleRuntime.FortPoiSwapPlayspace
/// Size: 0x00B0 (0x0006C0 - 0x000770)
class AFortPoiSwapPlayspace : public AFortPlayspace
{ 
public:
	SDK_UNDEFINED(16,12585) /* FMulticastInlineDelegate */ __um(OnContentStateChangedDelegate);                    // 0x06C0   (0x0010)  
	SDK_UNDEFINED(16,12586) /* FMulticastInlineDelegate */ __um(OnPreContentUnloadDelegate);                       // 0x06D0   (0x0010)  
	class USceneComponent*                             SceneComponent;                                             // 0x06E0   (0x0008)  
	class UFortLevelSaveComponent*                     LevelSaveComponent;                                         // 0x06E8   (0x0008)  
	class UPlaysetLevelStreamComponent*                PlaysetLevelStreamComponent;                                // 0x06F0   (0x0008)  
	SDK_UNDEFINED(8,12587) /* TWeakObjectPtr<AFortPoiVolume*> */ __um(PoiToReplace);                               // 0x06F8   (0x0008)  
	SDK_UNDEFINED(8,12588) /* TWeakObjectPtr<UFortCreativeRealEstatePlotItem*> */ __um(PlotToLoad);                // 0x0700   (0x0008)  
	SDK_UNDEFINED(8,12589) /* TWeakObjectPtr<UFortCreativeRealEstatePlotItem*> */ __um(LoadedPlot);                // 0x0708   (0x0008)  
	FOnlineLinkId                                      LinkCodeToLoad;                                             // 0x0710   (0x0018)  
	TArray<class AActor*>                              SpawnedActors;                                              // 0x0728   (0x0010)  
	unsigned char                                      UnknownData00_6[0x38];                                      // 0x0738   (0x0038)  MISSED


	/// Functions
	// Function /Script/CreativeRoyaleRuntime.FortPoiSwapPlayspace.OnUserContentUnloaded
	// void OnUserContentUnloaded(FAsyncTaskResult& Result);                                                                 // [0xb954f2c] Final|Native|Protected|HasOutParms 
	// Function /Script/CreativeRoyaleRuntime.FortPoiSwapPlayspace.OnUserContentLoaded
	// void OnUserContentLoaded();                                                                                           // [0xb954f18] Final|Native|Protected 
};

/// Class /Script/CreativeRoyaleRuntime.AthenaAIServicePlayerBots_CreativeRoyale
/// Size: 0x0080 (0x001380 - 0x001400)
class UAthenaAIServicePlayerBots_CreativeRoyale : public UAthenaAIServiceCreativePlayerBots
{ 
public:
	FScalableFloat                                     PlayerBotsEnabled;                                          // 0x1380   (0x0028)  
	FScalableFloat                                     BotsAllowedOnHumanTeam;                                     // 0x13A8   (0x0028)  
	FScalableFloat                                     ForceAllPlayerBotsToOneTeam;                                // 0x13D0   (0x0028)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x13F8   (0x0008)  MISSED


	/// Functions
	// Function /Script/CreativeRoyaleRuntime.AthenaAIServicePlayerBots_CreativeRoyale.StartLootClustering
	// void StartLootClustering();                                                                                           // [0xb955a48] Final|Native|Protected 
	// Function /Script/CreativeRoyaleRuntime.AthenaAIServicePlayerBots_CreativeRoyale.OnPlayerJoiningInProgress
	// void OnPlayerJoiningInProgress(class AFortPlayerState* FortPlayerState);                                              // [0xb954b2c] Final|Native|Protected 
};

/// Class /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset
/// Size: 0x0180 (0x0000A0 - 0x000220)
class UCreativeRoyalePlayspaceComponent_LevelReset : public UPlayspaceComponent
{ 
public:
	SDK_UNDEFINED(8,12590) /* TWeakObjectPtr<ULevelSaveRecord*> */ __um(CachedLevelSaveRecord);                    // 0x00A0   (0x0008)  
	bool                                               bSpawnFromGameplay;                                         // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00A9   (0x0007)  MISSED
	SDK_UNDEFINED(16,12591) /* TArray<TWeakObjectPtr<AActor*>> */ __um(SavedFoundActors);                          // 0x00B0   (0x0010)  
	SDK_UNDEFINED(80,12592) /* TMap<TWeakObjectPtr<AActor*>, FSpawnBuildingActorParameters> */ __um(SavedDeadActors); // 0x00C0   (0x0050)  
	SDK_UNDEFINED(16,12593) /* TArray<TWeakObjectPtr<AActor*>> */ __um(SavedDamagedActors);                        // 0x0110   (0x0010)  
	SDK_UNDEFINED(16,12594) /* TArray<TWeakObjectPtr<AActor*>> */ __um(FoundActorsDied);                           // 0x0120   (0x0010)  
	TArray<FGuid>                                      FoundActorsDiedGuid;                                        // 0x0130   (0x0010)  
	SDK_UNDEFINED(80,12595) /* TMap<FGuid, FAttachedBuildingActorGuids> */ __um(SavedParentWithAttachedBuildings); // 0x0140   (0x0050)  
	SDK_UNDEFINED(80,12596) /* TMap<FGuid, TWeakObjectPtr<AActor*>> */ __um(CurrentActorForBuildingGuid);          // 0x0190   (0x0050)  
	SDK_UNDEFINED(16,12597) /* TArray<TWeakObjectPtr<AActor*>> */ __um(FoundActorsDamaged);                        // 0x01E0   (0x0010)  
	TArray<FGuid>                                      FoundActorsDamagedGuid;                                     // 0x01F0   (0x0010)  
	SDK_UNDEFINED(8,12598) /* TWeakObjectPtr<UFortPoiSwapManager*> */ __um(CachedPoiSwapManager);                  // 0x0200   (0x0008)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0208   (0x0018)  MISSED


	/// Functions
	// Function /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.SaveParentToAttachToInformation
	// void SaveParentToAttachToInformation(FGuid ActorToAttachGuid, class AActor* ActorToAttach);                           // [0xb95511c] Final|Native|Private|HasDefaults 
	// Function /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.SaveDamagedActor
	// void SaveDamagedActor(class AActor* DamagedActor);                                                                    // [0x5d87858] Final|Native|Private 
	// Function /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.SaveActorToBeRespawned
	// void SaveActorToBeRespawned(class AActor* ActorToBeRespawned, bool bRemoveDamagedActor);                              // [0x80f2794] Final|Native|Private 
	// Function /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.RestoreAttachedBuildingActors
	// void RestoreAttachedBuildingActors(FGuid SpawnableActorGuid, class AActor* Actor);                                    // [0xb954fc8] Final|Native|Private|HasDefaults 
	// Function /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.RespawnDeadActors
	// void RespawnDeadActors();                                                                                             // [0x3047908] Final|Native|Private 
	// Function /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.OnSpawningFromSaveFinish
	// void OnSpawningFromSaveFinish();                                                                                      // [0x3047908] Final|Native|Private 
	// Function /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.OnPlotLoadComplete
	// void OnPlotLoadComplete();                                                                                            // [0x3047908] Final|Native|Private 
	// Function /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.HandleMinigameStateChanged
	// void HandleMinigameStateChanged(class AFortMinigame* Minigame, EFortMinigameState NewMinigameState);                  // [0x865af48] Final|Native|Private 
	// Function /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.HandleBuildingDied
	// void HandleBuildingDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0x86588b0] Final|Native|Private|HasDefaults 
	// Function /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.HandleBuildingDestroyed
	// void HandleBuildingDestroyed(TWeakObjectPtr<ABuildingActor*> DestroyedBuilding);                                      // [0xb954944] Final|Native|Private 
	// Function /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.HandleBuildingDamaged
	// void HandleBuildingDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0x86588b0] Final|Native|Private|HasDefaults 
	// Function /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.GetPoiSwapManager
	// class UFortPoiSwapManager* GetPoiSwapManager();                                                                       // [0xb95491c] Final|Native|Protected 
	// Function /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.GetLevelSaveRecord
	// class ULevelSaveRecord* GetLevelSaveRecord();                                                                         // [0xadb6388] Final|Native|Private 
	// Function /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.DestroyDamagedActors
	// void DestroyDamagedActors();                                                                                          // [0x3047908] Final|Native|Private 
	// Function /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.ClearFoundActors
	// void ClearFoundActors();                                                                                              // [0x3047908] Final|Native|Private 
	// Function /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.CachePoiSwapManager
	// void CachePoiSwapManager();                                                                                           // [0xb9540f8] Final|Native|Protected 
	// Function /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.BindActorToCallbacks
	// void BindActorToCallbacks(class AActor* Actor);                                                                       // [0xb953dc8] Final|Native|Private 
	// Function /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.AddActorToTrack
	// void AddActorToTrack(class AActor* ActorToTrack);                                                                     // [0x5d87858] Final|Native|Public  
};

/// Class /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_PlayerSpawning
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UCreativeRoyalePlayspaceComponent_PlayerSpawning : public UFortPlayspaceComponent_PlayerSpawning
{ 
public:
};

/// Class /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_RemoveItems
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class UCreativeRoyalePlayspaceComponent_RemoveItems : public UPlayspaceComponent
{ 
public:
	bool                                               bSpawnFromGameplay;                                         // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x27];                                      // 0x00A1   (0x0027)  MISSED


	/// Functions
	// Function /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_RemoveItems.OnSpawningFromSaveFinish
	// void OnSpawningFromSaveFinish();                                                                                      // [0x3047908] Final|Native|Private 
	// Function /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_RemoveItems.OnPlotLoadComplete
	// void OnPlotLoadComplete();                                                                                            // [0x3047908] Final|Native|Private 
	// Function /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_RemoveItems.HandleMinigameStateChanged
	// void HandleMinigameStateChanged(class AFortMinigame* Minigame, EFortMinigameState NewMinigameState);                  // [0x865af48] Final|Native|Private 
};

/// Class /Script/CreativeRoyaleRuntime.CreativeRoyaleRootPlayspace
/// Size: 0x0038 (0x0006C0 - 0x0006F8)
class ACreativeRoyaleRootPlayspace : public AFortPlayspace
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x06C0   (0x0018)  MISSED
	class AFortPlayerControllerAthena*                 EditorIslandOwnerPlayerController;                          // 0x06D8   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x06E0   (0x0008)  MISSED
	bool                                               bHasPlotLoaded;                                             // 0x06E8   (0x0001)  
	unsigned char                                      UnknownData02_6[0xF];                                       // 0x06E9   (0x000F)  MISSED


	/// Functions
	// Function /Script/CreativeRoyaleRuntime.CreativeRoyaleRootPlayspace.TeleportPlayerToPlayerStart
	// void TeleportPlayerToPlayerStart(FPlayspaceUser& AddedUser);                                                          // [0xb955a5c] Final|Native|Protected|HasOutParms 
	// Function /Script/CreativeRoyaleRuntime.CreativeRoyaleRootPlayspace.TeleportPlayersToPlayerStarts
	// void TeleportPlayersToPlayerStarts();                                                                                 // [0x3047908] Final|Native|Protected 
	// Function /Script/CreativeRoyaleRuntime.CreativeRoyaleRootPlayspace.OnRep_bHasPlotLoaded
	// void OnRep_bHasPlotLoaded();                                                                                          // [0xb954ef4] Final|Native|Private 
	// Function /Script/CreativeRoyaleRuntime.CreativeRoyaleRootPlayspace.OnPlotLoadComplete
	// void OnPlotLoadComplete();                                                                                            // [0xb954dfc] Final|Native|Private 
	// Function /Script/CreativeRoyaleRuntime.CreativeRoyaleRootPlayspace.Cheat_LoadEditorIsland
	// void Cheat_LoadEditorIsland();                                                                                        // [0x3047908] Final|Native|Protected 
	// Function /Script/CreativeRoyaleRuntime.CreativeRoyaleRootPlayspace.BuildDataRegistryResolverScope_Implementation
	// bool BuildDataRegistryResolverScope_Implementation(TArray<FName>& InOutResolverScopes, int32_t& InOutPriority);       // [0xb953ff4] Native|Public|HasOutParms|Const 
};

/// Class /Script/CreativeRoyaleRuntime.FortAthenaMutator_CreativeRoyaleSafeZoneOverride
/// Size: 0x0000 (0x000338 - 0x000338)
class AFortAthenaMutator_CreativeRoyaleSafeZoneOverride : public AFortAthenaMutator
{ 
public:
};

/// Class /Script/CreativeRoyaleRuntime.FortCheatManager_CreativeRoyale
/// Size: 0x0010 (0x000038 - 0x000048)
class UFortCheatManager_CreativeRoyale : public UFortCheatManager_Coupled
{ 
public:
	class UFortCreativeRealEstatePlotItemDefinition*   CreativeRoyaleEditPlotDefinition;                           // 0x0038   (0x0008)  
	FGameplayTag                                       CreativeRoyaleVolumeTag;                                    // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED


	/// Functions
	// Function /Script/CreativeRoyaleRuntime.FortCheatManager_CreativeRoyale.TeleportToPlotAferLoad
	// void TeleportToPlotAferLoad();                                                                                        // [0xb955b3c] Final|Native|Protected|Const 
	// Function /Script/CreativeRoyaleRuntime.FortCheatManager_CreativeRoyale.CreativeRoyaleTeleportToEditZone
	// void CreativeRoyaleTeleportToEditZone();                                                                              // [0x3047908] Final|Exec|Native|Public|Const 
	// Function /Script/CreativeRoyaleRuntime.FortCheatManager_CreativeRoyale.CreativeRoyaleResetIslandFile
	// void CreativeRoyaleResetIslandFile();                                                                                 // [0xb95410c] Final|Exec|Native|Public|Const 
	// Function /Script/CreativeRoyaleRuntime.FortCheatManager_CreativeRoyale.CreativeRoyaleLoadEditPlot
	// void CreativeRoyaleLoadEditPlot();                                                                                    // [0x3047908] Final|Exec|Native|Public|Const 
};

/// Class /Script/CreativeRoyaleRuntime.FortProjectEditComponent_CreativeRoyale
/// Size: 0x0020 (0x000500 - 0x000520)
class UFortProjectEditComponent_CreativeRoyale : public UFortProjectEditComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0500   (0x0010)  MISSED
	class UFortCreativeRealEstatePlotItemDefinition*   CreativeRoyaleEditPlotDefinition;                           // 0x0510   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0518   (0x0008)  MISSED


	/// Functions
	// Function /Script/CreativeRoyaleRuntime.FortProjectEditComponent_CreativeRoyale.OnPlayerLoggedIn
	// void OnPlayerLoggedIn(class APlayerController* PlayerController);                                                     // [0x5d87858] Final|Native|Protected 
	// Function /Script/CreativeRoyaleRuntime.FortProjectEditComponent_CreativeRoyale.LoadPlotFromProject
	// void LoadPlotFromProject();                                                                                           // [0x3047908] Final|Native|Protected 
};

/// Struct /Script/CreativeRoyaleRuntime.AttachedBuildingActorGuids
/// Size: 0x0010 (0x000000 - 0x000010)
struct FAttachedBuildingActorGuids
{ 
	TArray<FGuid>                                      AttachedBuildingActorGuids;                                 // 0x0000   (0x0010)  
};

/// Struct /Script/CreativeRoyaleRuntime.SpawnBuildingActorParameters
/// Size: 0x0070 (0x000000 - 0x000070)
struct FSpawnBuildingActorParameters
{ 
	class UClass*                                      SpawnClass;                                                 // 0x0000   (0x0008)  
	SDK_UNDEFINED(8,12599) /* TWeakObjectPtr<ULevel*> */ __um(SpawnLevel);                                         // 0x0008   (0x0008)  
	FTransform                                         SpawnTransform;                                             // 0x0010   (0x0060)  
};

