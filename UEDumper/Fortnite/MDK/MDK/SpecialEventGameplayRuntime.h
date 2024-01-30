
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AudioSynesthesia
/// dependency: CommonInput
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: MeshNetwork
/// dependency: ModularGameplay
/// dependency: NetCore

/// Class /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEventTODM
/// Size: 0x0040 (0x000338 - 0x000378)
class AFortAthenaMutator_SpecialEventTODM : public AFortAthenaMutator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 888;

public:
	CMember(TArray<FSpecialEventTODMPhaseData>)        PhaseDataArray                                              OFFSET(get<T>, {0x338, 16, 0, 0})
	CMember(class ASpecialEventScript*)                SpecialEventScript                                          OFFSET(get<T>, {0x348, 8, 0, 0})
	DMember(int32_t)                                   PhaseIndexInProgress                                        OFFSET(get<int32_t>, {0x350, 4, 0, 0})
	DMember(int32_t)                                   SubphaseIndexInProgress                                     OFFSET(get<int32_t>, {0x354, 4, 0, 0})
	CMember(TScriptInterface<Class>)                   SpawnedTODM                                                 OFFSET(get<T>, {0x360, 16, 0, 0})
	DMember(bool)                                      bDebug                                                      OFFSET(get<bool>, {0x370, 1, 0, 0})


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEventTODM.OnPhaseActivated
	// void OnPhaseActivated(class ASpecialEventScript* InSpecialEventScript, class ASpecialEventPhase* InSpecialEventPhase);   // [0xb39cc90] Final|Native|Private 
};

/// Class /Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEventTODM
/// Size: 0x0000 (0x000038 - 0x000038)
class UFortCheatManager_SpecialEventTODM : public UFortCheatManager_Coupled
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEventTODM.SpecialEventTODM_ToggleDebug
	// void SpecialEventTODM_ToggleDebug();                                                                                     // [0x32e4b44] Final|BlueprintAuthorityOnly|Exec|Native|Public 
};

/// Class /Script/SpecialEventGameplayRuntime.FortCheatManager_DestroyActorsAndComponents
/// Size: 0x0000 (0x000038 - 0x000038)
class UFortCheatManager_DestroyActorsAndComponents : public UFortCheatManager_Coupled
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_DestroyActorsAndComponents.DestroyActorsAndComponentsMutator_SetActorDefinitionsEnabled
	// void DestroyActorsAndComponentsMutator_SetActorDefinitionsEnabled(FString TagString, bool bEnabled);                     // [0x89e88ec] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_DestroyActorsAndComponents.DestroyActorsAndComponentsMutator_ListActorComponents
	// void DestroyActorsAndComponentsMutator_ListActorComponents(FString InActorName);                                         // [0x6860530] Final|Exec|Native|Public|Const 
};

/// Class /Script/SpecialEventGameplayRuntime.FortAthenaMutator_DestroyActorsAndComponents
/// Size: 0x0030 (0x000338 - 0x000368)
class AFortAthenaMutator_DestroyActorsAndComponents : public AFortAthenaMutator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 872;

public:
	CMember(TArray<FDestroyActorsAndComponentsMutator_ActorDefinition>) ActorDefinitions                           OFFSET(get<T>, {0x338, 16, 0, 0})


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_DestroyActorsAndComponents.SetActorDefinitionsEnabled
	// void SetActorDefinitionsEnabled(FGameplayTagContainer& InTags, bool bEnabled);                                           // [0xb39ad44] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_DestroyActorsAndComponents.PermanentlyDisableActorDefinitions
	// void PermanentlyDisableActorDefinitions(FGameplayTagContainer& InTags);                                                  // [0x82114bc] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_DestroyActorsAndComponents.OnTrackedActorDestroyed
	// void OnTrackedActorDestroyed(class AActor* DestroyedActor);                                                              // [0xb39d288] Final|Native|Private 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_DestroyActorsAndComponents.OnRep_ActorDefinitions
	// void OnRep_ActorDefinitions(TArray<FDestroyActorsAndComponentsMutator_ActorDefinition>& OldActorDefinitions);            // [0xb39cfa0] Final|Native|Private|HasOutParms 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_DestroyActorsAndComponents.OnActorSpawned
	// void OnActorSpawned(class AActor* Actor);                                                                                // [0xb39c61c] Final|Native|Private 
};

/// Class /Script/SpecialEventGameplayRuntime.FortCheatManager_FakeKillRelevancy
/// Size: 0x0000 (0x000038 - 0x000038)
class UFortCheatManager_FakeKillRelevancy : public UFortCheatManager_Coupled
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_FakeKillRelevancy.FakeKillRelevancyTestAlgorithm
	// void FakeKillRelevancyTestAlgorithm(int32_t NumPlayers, FString MaxPlayersRemainingAfterPhases, int32_t MinSquadSize, int32_t MaxSquadSize, int32_t Iterations, int32_t LogVerbosity); // [0xb39b64c] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_FakeKillRelevancy.FakeKillRelevancyStartNextWave
	// void FakeKillRelevancyStartNextWave();                                                                                   // [0x32e4b44] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_FakeKillRelevancy.FakeKillRelevancySetUpPhase
	// void FakeKillRelevancySetUpPhase(int32_t MaxPlayersRemaining, FString ReasonGameplayTagString, int32_t NumWaves, float RelevancyDelay); // [0xb39af18] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_FakeKillRelevancy.FakeKillRelevancyReset
	// void FakeKillRelevancyReset();                                                                                           // [0x32e4b44] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_FakeKillRelevancy.FakeKillRelevancyDebug
	// void FakeKillRelevancyDebug(float TextScale);                                                                            // [0x6456a9c] Final|Exec|Native|Public 
};

/// Class /Script/SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy
/// Size: 0x0188 (0x0000A8 - 0x000230)
class UFortControllerComponent_FakeKillRelevancy : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	SMember(FFakeKillRelevancyPlayerDataArray)         PlayerDataArray                                             OFFSET(getStruct<T>, {0xA8, 288, 0, 0})
	CMember(TMap<AFortPlayerStateAthena*, EFakeKillRelevancyPlayerKillStep>) ClientPlayerStateKillStepMap          OFFSET(get<T>, {0x1C8, 80, 0, 0})
	DMember(char)                                      ResetCounter                                                OFFSET(get<char>, {0x218, 1, 0, 0})
	CMember(TArray<class AFortPlayerStateAthena*>)     DebugSupergroupPlayerStates                                 OFFSET(get<T>, {0x220, 16, 0, 0})


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.ResetRelevancy
	// void ResetRelevancy();                                                                                                   // [0x32e4b44] Final|BlueprintAuthorityOnly|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.PlayKillEffects
	// void PlayKillEffects(FFakeKillRelevancyPlayerDataEntry& FakeKillData, float RelevancyDelay);                             // [0x211c0a0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.OnRep_ResetCounter
	// void OnRep_ResetCounter();                                                                                               // [0xb39d1bc] Final|Native|Private 
	// Function /Script/SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.OnKillEffectsPlayed
	// void OnKillEffectsPlayed(class AFortPlayerStateAthena* PlayerState);                                                     // [0xb39c89c] Final|BlueprintCosmetic|Native|Protected|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.GetDeathLocation
	// FVector GetDeathLocation(class AFortPlayerStateAthena* PlayerState);                                                     // [0xb39c1c0] Final|Native|Protected|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.CancelKillEffectsOnServer
	// void CancelKillEffectsOnServer();                                                                                        // [0x211c0a0] BlueprintAuthorityOnly|Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.CancelKillEffectsOnClient
	// void CancelKillEffectsOnClient(TArray<AFortPlayerStateAthena*>& PlayerStates);                                           // [0x211c0a0] BlueprintCosmetic|Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/SpecialEventGameplayRuntime.FortAthenaMutator_FakeKillRelevancy
/// Size: 0x0060 (0x000440 - 0x0004A0)
class AFortAthenaMutator_FakeKillRelevancy : public AFortAthenaMutator_SpecialRelevancy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1184;

public:
	CMember(class UClass*)                             FakeKillControllerComponentClass                            OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(TArray<FFakeKillRelevancyPhaseData>)       RelevancyPhaseDataArray                                     OFFSET(get<T>, {0x448, 16, 0, 0})
	DMember(int32_t)                                   PhaseNum                                                    OFFSET(get<int32_t>, {0x458, 4, 0, 0})


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_FakeKillRelevancy.StartNextKillWave
	// void StartNextKillWave();                                                                                                // [0x32e4b44] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_FakeKillRelevancy.SetUpKillPhase
	// void SetUpKillPhase(int32_t MaxPlayersRemaining, FGameplayTag& Reason, int32_t NumWaves, float RelevancyDelay);          // [0xb39e398] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_FakeKillRelevancy.ResetRelevancy
	// void ResetRelevancy();                                                                                                   // [0x32e4b44] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_FakeKillRelevancy.EndWave
	// void EndWave(int32_t EndPhaseNum, int32_t WaveNum);                                                                      // [0x63b6e18] Final|Native|Private 
};

/// Class /Script/SpecialEventGameplayRuntime.FortAthenaMutator_LoadGameFeature
/// Size: 0x0010 (0x000338 - 0x000348)
class AFortAthenaMutator_LoadGameFeature : public AFortAthenaMutator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	SMember(FString)                                   GameFeatureToLoad                                           OFFSET(getStruct<T>, {0x338, 16, 0, 0})


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_LoadGameFeature.OnPlaylistDataReady
	// void OnPlaylistDataReady(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, FGameplayTagContainer& PlaylistContextTags); // [0xb39cd54] Final|Native|Protected|HasOutParms 
};

/// Class /Script/SpecialEventGameplayRuntime.FortAthenaMutator_RemoveGameFeatures
/// Size: 0x0010 (0x000338 - 0x000348)
class AFortAthenaMutator_RemoveGameFeatures : public AFortAthenaMutator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	CMember(TArray<FString>)                           AllowedGameFeatures                                         OFFSET(get<T>, {0x338, 16, 0, 0})


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_RemoveGameFeatures.OnPlaylistDataReady
	// void OnPlaylistDataReady(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, FGameplayTagContainer& PlaylistContextTags); // [0xb39ce84] Final|Native|Protected|HasOutParms 
};

/// Class /Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent
/// Size: 0x0000 (0x000038 - 0x000038)
class UFortCheatManager_SpecialEvent : public UFortCheatManager_Coupled
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.UnloadTerrainMaps
	// void UnloadTerrainMaps(FName MapTag);                                                                                    // [0x86fce54] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ToggleDisableParachutes
	// void ToggleDisableParachutes(bool bIsDisabled);                                                                          // [0x60325ec] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.TeleportAllPlayers
	// void TeleportAllPlayers(int32_t SafeZoneIndex);                                                                          // [0x6695f1c] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.StartEventScript
	// void StartEventScript(int32_t InStartingIndex, float SequenceTimeOffset);                                                // [0xb39e64c] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SpecialEventSetAdditionalViewpoint
	// void SpecialEventSetAdditionalViewpoint(float X, float Y, float Z);                                                      // [0x8c14b18] Final|Exec|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SpecialEventGameUserSettings_ClearDataForAllPlayers
	// void SpecialEventGameUserSettings_ClearDataForAllPlayers();                                                              // [0x32e4b44] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SpecialEventClearAdditionalViewpoint
	// void SpecialEventClearAdditionalViewpoint();                                                                             // [0x32e4b44] Final|Exec|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ShrinkSafeZone
	// void ShrinkSafeZone();                                                                                                   // [0x32e4b44] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SetReturnToMainMenuDelay
	// void SetReturnToMainMenuDelay(float MinDelayReturnToMainMenu, float MaxDelayReturnToMainMenu);                           // [0x81068c4] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SetMatchTime
	// void SetMatchTime(int32_t NewMatchTime);                                                                                 // [0x6695f1c] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SetLockingOnFocalPoint
	// void SetLockingOnFocalPoint(bool bInLockingOnFocalPoint);                                                                // [0x60325ec] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SetIsSimulatingDamage
	// void SetIsSimulatingDamage(bool bIsSimulating);                                                                          // [0x60325ec] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SetDestroyVehiclesInStorm
	// void SetDestroyVehiclesInStorm(bool bDestroyVehiclesInStorm);                                                            // [0x60325ec] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SendToNightNight
	// void SendToNightNight();                                                                                                 // [0x32e4b44] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ResumeWinCondition
	// void ResumeWinCondition();                                                                                               // [0x32e4b44] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ResetWinConditionProgressToZero
	// void ResetWinConditionProgressToZero();                                                                                  // [0x32e4b44] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ResetWinCondition
	// void ResetWinCondition();                                                                                                // [0x32e4b44] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ResetSpecialEventAircraft
	// void ResetSpecialEventAircraft();                                                                                        // [0x32e4b44] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ResetMatchTimeToPrevious
	// void ResetMatchTimeToPrevious();                                                                                         // [0x32e4b44] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.PlacePlayersInAircraft
	// void PlacePlayersInAircraft();                                                                                           // [0x32e4b44] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.PauseWinCondition
	// void PauseWinCondition(bool bLockScores);                                                                                // [0x60325ec] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.CloseParachutes
	// void CloseParachutes();                                                                                                  // [0x32e4b44] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ChangeWinCondition
	// void ChangeWinCondition(float NewGoalScore);                                                                             // [0x6456a9c] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.AutobalanceTargetScore
	// void AutobalanceTargetScore();                                                                                           // [0x32e4b44] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.AddCSVEvent
	// void AddCSVEvent(FString CSVEventName);                                                                                  // [0x8c0e6d0] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
};

/// Class /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent
/// Size: 0x0478 (0x000338 - 0x0007B0)
class AFortAthenaMutator_SpecialEvent : public AFortAthenaMutator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1968;

public:
	SMember(FMulticastInlineDelegate)                  TeleportAllPlayersFinished                                  OFFSET(getStruct<T>, {0x338, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPawnLoaded                                                OFFSET(getStruct<T>, {0x348, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnInitController                                            OFFSET(getStruct<T>, {0x358, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnResumeGame                                                OFFSET(getStruct<T>, {0x368, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSpecialClientEvent                                        OFFSET(getStruct<T>, {0x378, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnHandleLogout                                              OFFSET(getStruct<T>, {0x388, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnClientInitialLoadingFinished                              OFFSET(getStruct<T>, {0x398, 16, 0, 0})
	DMember(bool)                                      bPlayersAreInvincible                                       OFFSET(get<bool>, {0x410, 1, 0, 0})
	DMember(int32_t)                                   MinimumScoreBumpForAutomadeGoal                             OFFSET(get<int32_t>, {0x438, 4, 0, 0})
	CMember(TArray<float>)                             ScoreBrackets                                               OFFSET(get<T>, {0x440, 16, 0, 0})
	DMember(bool)                                      bEnforceInfiniteSafeZonePhase                               OFFSET(get<bool>, {0x450, 1, 0, 0})
	SMember(FName)                                     WarmupIslandPlayerStartTag                                  OFFSET(getStruct<T>, {0x454, 4, 0, 0})
	DMember(bool)                                      bAllowInventoryOpen                                         OFFSET(get<bool>, {0x458, 1, 0, 0})
	SMember(FScalableFloat)                            bAllowFullScreenMap                                         OFFSET(getStruct<T>, {0x460, 40, 0, 0})
	DMember(bool)                                      bShouldClearFrontEndMapMarkers                              OFFSET(get<bool>, {0x488, 1, 0, 0})
	DMember(bool)                                      bBlockTeamIndicators                                        OFFSET(get<bool>, {0x489, 1, 0, 0})
	DMember(int32_t)                                   ForceDisplaySquadInfoDuringGamePhases                       OFFSET(get<int32_t>, {0x48C, 4, 0, 0})
	DMember(bool)                                      bAllowSquadListLocalPlayerInSplitscreen                     OFFSET(get<bool>, {0x490, 1, 0, 0})
	SMember(FGameplayTagContainer)                     UIToHideDuringSpecialEvent                                  OFFSET(getStruct<T>, {0x498, 32, 0, 0})
	SMember(FGameplayTagContainer)                     UIToHideWhenInInfiniteWarmup                                OFFSET(getStruct<T>, {0x4B8, 32, 0, 0})
	SMember(FGameplayTagContainer)                     ClientEventsThatUnhideHiddenWhileLoadingHUDElements         OFFSET(getStruct<T>, {0x4D8, 32, 0, 0})
	DMember(bool)                                      bSkipPostGameScreens                                        OFFSET(get<bool>, {0x4F8, 1, 0, 0})
	DMember(bool)                                      bForceGarbageCollectionAfterUnloadOnServer                  OFFSET(get<bool>, {0x4F9, 1, 0, 0})
	DMember(bool)                                      bForceGarbageCollectionAfterUnloadOnClient                  OFFSET(get<bool>, {0x4FA, 1, 0, 0})
	DMember(bool)                                      bFullPurgeGC                                                OFFSET(get<bool>, {0x4FB, 1, 0, 0})
	CMember(class AFortAthenaAircraft*)                EventAircraft                                               OFFSET(get<T>, {0x500, 8, 0, 0})
	SMember(FAircraftFlightInfo)                       EventAircraftInfo                                           OFFSET(getStruct<T>, {0x508, 72, 0, 0})
	CMember(class UClass*)                             EventAircraftClass                                          OFFSET(get<T>, {0x550, 8, 0, 0})
	CMember(class ASpecialEventScript*)                ScriptActor                                                 OFFSET(get<T>, {0x558, 8, 0, 0})
	DMember(bool)                                      bDisableHUD                                                 OFFSET(get<bool>, {0x560, 1, 0, 0})
	DMember(char)                                      GameResumed                                                 OFFSET(get<char>, {0x561, 1, 0, 0})
	SMember(FVector)                                   AdditionalViewpoint                                         OFFSET(getStruct<T>, {0x568, 24, 0, 0})
	DMember(bool)                                      bParachutesDisabled                                         OFFSET(get<bool>, {0x580, 1, 0, 0})
	SMember(FString)                                   LastCSVEventName                                            OFFSET(getStruct<T>, {0x588, 16, 0, 0})
	DMember(bool)                                      bCanStreamBuildingFoundationsIn                             OFFSET(get<bool>, {0x598, 1, 0, 0})
	DMember(int32_t)                                   AllPlayerTeleportedCount                                    OFFSET(get<int32_t>, {0x59C, 4, 0, 0})
	SMember(FFortDelayRTMMData)                        DelayPlayersFromReturningToLobbyData                        OFFSET(getStruct<T>, {0x5A0, 16, 0, 0})
	SMember(FName)                                     NamedWeightForContainerLootRoll                             OFFSET(getStruct<T>, {0x5B0, 4, 0, 0})
	DMember(float)                                     WeightForContainerLootRoll                                  OFFSET(get<float>, {0x5B4, 4, 0, 0})
	CMember(TArray<FFortSpecialEventEmoteData>)        SpecialEventEmoteData                                       OFFSET(get<T>, {0x5E8, 16, 0, 0})
	SMember(FGameplayTagContainer)                     BlockedNativeActions                                        OFFSET(getStruct<T>, {0x5F8, 32, 0, 0})
	CMember(EFortItemType)                             DesiredQuickbarItemTypeAfterRemove                          OFFSET(get<T>, {0x618, 1, 0, 0})
	CMember(class UInputComponent*)                    SpecialEventsInputComponent                                 OFFSET(get<T>, {0x620, 8, 0, 0})
	DMember(bool)                                      bLockingOnFocalPoint                                        OFFSET(get<bool>, {0x628, 1, 0, 0})
	CMember(TArray<FFortSpecialEventOverrideParts>)    SpecialEventOverrideParts                                   OFFSET(get<T>, {0x630, 16, 0, 0})
	SMember(FFortSpecialEventGEData)                   GameplayEffectToApplyOnSwapToDefault                        OFFSET(getStruct<T>, {0x640, 16, 0, 0})
	CMember(TMap<FUniqueNetIdRepl, int32_t>)           OverridePartsArrayIndexMap                                  OFFSET(get<T>, {0x650, 80, 0, 0})
	CMember(TArray<FFortSpecialEventGEData>)           GameplayEffectsToApplyOnLogin                               OFFSET(get<T>, {0x6A0, 16, 0, 0})
	CMember(class UClass*)                             ControllerComponentClassOverride                            OFFSET(get<T>, {0x6B0, 8, 0, 0})
	CMember(TArray<FSpecialEventMapData>)              TerrainMapsToUnload                                         OFFSET(get<T>, {0x6B8, 16, 0, 0})
	CMember(TArray<class AFortPlayerControllerAthena*>) UnhandledPlayerControllers                                 OFFSET(get<T>, {0x6D8, 16, 0, 0})
	CMember(TArray<FName>)                             HLODActorsToHideNames                                       OFFSET(get<T>, {0x6E8, 16, 0, 0})
	DMember(bool)                                      bForceAllowCloth                                            OFFSET(get<bool>, {0x6F8, 1, 0, 0})
	DMember(bool)                                      bManageBackfill                                             OFFSET(get<bool>, {0x6FA, 1, 0, 0})
	DMember(int32_t)                                   PlayerCountToTriggerBackfill                                OFFSET(get<int32_t>, {0x6FC, 4, 0, 0})
	DMember(bool)                                      bWaitForPlayerCountToTriggerBackfill                        OFFSET(get<bool>, {0x700, 1, 0, 0})
	DMember(float)                                     UpdateBackfillStatusTime                                    OFFSET(get<float>, {0x704, 4, 0, 0})
	DMember(bool)                                      bServerHasBackfillActive                                    OFFSET(get<bool>, {0x718, 1, 0, 0})
	DMember(bool)                                      bCanToggleCursorModeInStasis                                OFFSET(get<bool>, {0x719, 1, 0, 0})
	SMember(FScalableFloat)                            MannequinRecentlyRenderedCheckToleranceValue                OFFSET(getStruct<T>, {0x720, 40, 0, 0})
	CMember(TArray<class ASpecialEventPlayerMannequin*>) SpecialEventMannequins                                    OFFSET(get<T>, {0x748, 16, 0, 0})
	CMember(TArray<class UClass*>)                     ActorSpawnDelegateClasses                                   OFFSET(get<T>, {0x758, 16, 0, 0})


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.WarmUpIslandUpdated
	// void WarmUpIslandUpdated();                                                                                              // [0xb39ee68] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.UpdateBackfillStatus
	// void UpdateBackfillStatus();                                                                                             // [0x32e4b44] Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.UnloadTerrainMaps
	// void UnloadTerrainMaps(FGameplayTag& MapTag);                                                                            // [0xb39eda0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ToggleHUDs
	// void ToggleHUDs(bool bHide);                                                                                             // [0xb39ed20] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ToggleDisableWeapons
	// void ToggleDisableWeapons(bool bDisableWeapons);                                                                         // [0xb39ec38] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ToggleDisableParachutes
	// void ToggleDisableParachutes(bool bDisable);                                                                             // [0xb39ebb8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ToggleAllPlayersInvincibility
	// void ToggleAllPlayersInvincibility(bool bInvincible);                                                                    // [0xb39eb38] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.TeleportAllPlayers
	// void TeleportAllPlayers(FGameplayTagContainer EventTags, int32_t TeleportsPerFrame, int32_t SafeZoneIndex);              // [0xb39e834] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SwapBodyParts
	// void SwapBodyParts(int32_t ArrayIndex, class AFortPlayerController* FortPC);                                             // [0xb39e770] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.StartSafeZoneOverrideForEvent
	// void StartSafeZoneOverrideForEvent(int32_t SafeZoneIndexForEvent);                                                       // [0xb39e6f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ShrinkSafeZone
	// void ShrinkSafeZone();                                                                                                   // [0xb39e5f4] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetWeightForContainerLootRoll
	// void SetWeightForContainerLootRoll(float Weight);                                                                        // [0xb39e574] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetReturnToMainMenuDelay
	// void SetReturnToMainMenuDelay(float MinDelayReturnToMainMenu, float MaxDelayReturnToMainMenu);                           // [0xb39e2d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetNamedWeightForContainerLootRoll
	// void SetNamedWeightForContainerLootRoll(FName WeightName);                                                               // [0xb39e1d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetMatchTime
	// void SetMatchTime(int32_t NewMatchTime);                                                                                 // [0xb39e108] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetLockingOnFocalPoint
	// void SetLockingOnFocalPoint(bool bInLockingOnFocalPoint);                                                                // [0xb39e040] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetIsSimulatingDamage
	// void SetIsSimulatingDamage(bool bIsSimulating);                                                                          // [0xb39dfc0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetDestroyVehiclesInStorm
	// void SetDestroyVehiclesInStorm(bool bDestroyVehiclesInStorm);                                                            // [0xb39df04] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetCanStreamBuildingFoundationsIn
	// void SetCanStreamBuildingFoundationsIn(bool bEnable);                                                                    // [0xb39de3c] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetAdditionalViewpoint
	// void SetAdditionalViewpoint(FVector WorldLocation);                                                                      // [0xb39d9d8] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SendToNightNight
	// void SendToNightNight();                                                                                                 // [0x32e4b44] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ResumeWinCondition
	// void ResumeWinCondition();                                                                                               // [0xb39d9c4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ResetWinConditionProgressToZero
	// void ResetWinConditionProgressToZero();                                                                                  // [0xb39d9b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ResetWinCondition
	// void ResetWinCondition();                                                                                                // [0xb39d99c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ResetSpecialEventAircraft
	// void ResetSpecialEventAircraft();                                                                                        // [0xb39d960] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ResetSafeZoneOverrideAfterEvent
	// void ResetSafeZoneOverrideAfterEvent(int32_t MinResetSafeZoneIndex, float MinDelayReturnToMainMenu, float MaxDelayReturnToMainMenu); // [0xb39d868] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ResetMatchTimeToPrevious
	// void ResetMatchTimeToPrevious();                                                                                         // [0xb39d814] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.RemoveFromBlockedNativeActions
	// void RemoveFromBlockedNativeActions(FGameplayTagContainer& Actions);                                                     // [0x82114bc] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PushSpecialEventEmoteInputComponent
	// void PushSpecialEventEmoteInputComponent();                                                                              // [0xb39d800] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PopSpecialEventEmoteInputComponent
	// void PopSpecialEventEmoteInputComponent();                                                                               // [0xb39d7ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PlacePlayersInAircraft
	// void PlacePlayersInAircraft();                                                                                           // [0xb39d7d8] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PauseWinCondition
	// void PauseWinCondition(bool bLockScores);                                                                                // [0xb39d6fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PauseSupplyDrops
	// void PauseSupplyDrops(bool bPause);                                                                                      // [0xb39d624] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PauseStormProgression
	// void PauseStormProgression(bool bPause);                                                                                 // [0xb39d5a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PauseStormDamage
	// void PauseStormDamage(bool bPause);                                                                                      // [0xb39d4dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnWarmUpTeleportComplete
	// void OnWarmUpTeleportComplete(class AFortPlayerPawn* PlayerPawn);                                                        // [0xb39d34c] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_TerrainMapsToUnload
	// void OnRep_TerrainMapsToUnload();                                                                                        // [0xb39d1d0] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_LastCSVEventName
	// void OnRep_LastCSVEventName();                                                                                           // [0xb39d18c] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_GameResumed
	// void OnRep_GameResumed();                                                                                                // [0xb39d178] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_DelayPlayersFromReturningToLobbyData
	// void OnRep_DelayPlayersFromReturningToLobbyData();                                                                       // [0xb39d120] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_bPlayersAreInvincible
	// void OnRep_bPlayersAreInvincible();                                                                                      // [0xb39d274] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_bLockingOnFocalPoint
	// void OnRep_bLockingOnFocalPoint();                                                                                       // [0xb39d260] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_bDisableHUD
	// void OnRep_bDisableHUD();                                                                                                // [0xb39d24c] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_bCanStreamBuildingFoundationsIn
	// void OnRep_bCanStreamBuildingFoundationsIn();                                                                            // [0xb39d238] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_AllPlayerTeleportedCount
	// void OnRep_AllPlayerTeleportedCount();                                                                                   // [0x669bc64] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_Aircraft
	// void OnRep_Aircraft();                                                                                                   // [0xb39d04c] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_AdditionalViewpoint
	// void OnRep_AdditionalViewpoint();                                                                                        // [0xb39d038] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnGameViewportActivationChanged
	// void OnGameViewportActivationChanged(bool bHasFocus);                                                                    // [0xb39c81c] Final|Native|Public  
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnAircraftFlightEnded
	// void OnAircraftFlightEnded(class AFortAthenaAircraft* FortAthenaAircraft);                                               // [0xb39c79c] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnAircraftExitedDropZone
	// void OnAircraftExitedDropZone(class AFortAthenaAircraft* FortAthenaAircraft);                                            // [0xb39c71c] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnAircraftEnteredDropZone
	// void OnAircraftEnteredDropZone(class AFortAthenaAircraft* FortAthenaAircraft);                                           // [0xb39c69c] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnActorSpawned
	// void OnActorSpawned(class AActor* Actor);                                                                                // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnActorPreSpawnInitialization
	// void OnActorPreSpawnInitialization(class AActor* Actor);                                                                 // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.NotifyClientsGameResumed
	// void NotifyClientsGameResumed();                                                                                         // [0xb39c5e0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.NetMulticast_CheatClearSpecialEventGameUserSettings
	// void NetMulticast_CheatClearSpecialEventGameUserSettings();                                                              // [0x86d0434] Net|NetReliableNative|Event|NetMulticast|Public 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.JumpToSafeZonePhase
	// void JumpToSafeZonePhase(FVector PawnSpawnCenterLocation, float PawnSpawnMinDistance, float PawnSpawnMaxDistance);       // [0xb39c2f8] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.HandleSpecialEventMannequinDestroyed
	// void HandleSpecialEventMannequinDestroyed(class AActor* MannequinActor);                                                 // [0xb39c278] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.GetScript
	// class ASpecialEventScript* GetScript();                                                                                  // [0xb39c260] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.GetHasInfiniteSafeZonePhase
	// bool GetHasInfiniteSafeZonePhase();                                                                                      // [0x9342f0c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ForceSafeZoneFinalLocation
	// void ForceSafeZoneFinalLocation(FVector NewFinalLocation, float DefaultAircraftOffsetFromMidLine, float MinDefaultMidlineAngle, float MaxDefaultMidlineAngle); // [0xb39bdfc] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.FlushUnhandledPlayerControllers
	// void FlushUnhandledPlayerControllers();                                                                                  // [0xb39bde8] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.CloseParachutes
	// void CloseParachutes();                                                                                                  // [0xb39af04] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ClearBlockedNativeActions
	// void ClearBlockedNativeActions();                                                                                        // [0x32e4b44] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ClearAdditionalViewpoint
	// void ClearAdditionalViewpoint();                                                                                         // [0xb39aef0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ChangeWinCondition
	// void ChangeWinCondition(float NewGoalScore);                                                                             // [0xb39ae70] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.AutobalanceTargetScore
	// void AutobalanceTargetScore();                                                                                           // [0xb39ae5c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.AddToBlockedNativeActions
	// void AddToBlockedNativeActions(FGameplayTagContainer& Actions, bool bCancelAbilities);                                   // [0xb39ad44] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.AddCSVEvent
	// void AddCSVEvent(FString CSVEventName, bool bShouldRepToClient);                                                         // [0xb399fa4] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.AddClientCSVEvent
	// void AddClientCSVEvent(FString CSVEventName);                                                                            // [0xb39a69c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SpecialEventGameplayRuntime.FortCameraMode_SpecialEventFocalPoint
/// Size: 0x0000 (0x001BB0 - 0x001BB0)
class UFortCameraMode_SpecialEventFocalPoint : public UFortCameraMode_FocalPoint
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7088;

public:


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.FortCameraMode_SpecialEventFocalPoint.UpdateCameraBP
	// void UpdateCameraBP(class AActor* ViewTarget, float DeltaTime, FTViewTarget& OutVT);                                     // [0x211c0a0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.FortCameraMode_SpecialEventFocalPoint.SetOverrideTransitionTime
	// void SetOverrideTransitionTime(float InTransitionTime);                                                                  // [0xb39e254] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortCameraMode_SpecialEventFocalPoint.OnBecomeInactiveBP
	// void OnBecomeInactiveBP(class AActor* ViewTarget);                                                                       // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.FortCameraMode_SpecialEventFocalPoint.OnBecomeActiveBP
	// void OnBecomeActiveBP(class AActor* ViewTarget);                                                                         // [0x211c0a0] Event|Protected|BlueprintEvent 
};

/// Class /Script/SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent
/// Size: 0x0880 (0x0000A0 - 0x000920)
class UFortCharacterMovementMutatorComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2336;

public:
	CMember(class ACharacter*)                         CharacterOwner                                              OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(class UFortMovementComp_CharacterAthena*)  MovementComponent                                           OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(class UFortMovementComp_CharacterAthena*)  CDOMovementComponent                                        OFFSET(get<T>, {0xB0, 8, 0, 0})
	SMember(FScalableFloat)                            BuffetBubblesMoveToBoxSpeed                                 OFFSET(getStruct<T>, {0xC8, 40, 0, 0})
	SMember(FScalableFloat)                            BuffetBubblesRelativeVelocityInterpSpeed                    OFFSET(getStruct<T>, {0xF0, 40, 0, 0})
	SMember(FScalableFloat)                            BuffetBubblesLocationInterpSpeed                            OFFSET(getStruct<T>, {0x118, 40, 0, 0})
	SMember(FScalableFloat)                            BuffetBubblesRotationInterpSpeed                            OFFSET(getStruct<T>, {0x140, 40, 0, 0})
	SMember(FScalableFloat)                            BuffetBubblesMinRelativeX                                   OFFSET(getStruct<T>, {0x168, 40, 0, 0})
	SMember(FScalableFloat)                            BuffetBubblesMaxRelativeX                                   OFFSET(getStruct<T>, {0x190, 40, 0, 0})
	SMember(FScalableFloat)                            BuffetBubblesMinRelativeY                                   OFFSET(getStruct<T>, {0x1B8, 40, 0, 0})
	SMember(FScalableFloat)                            BuffetBubblesMaxRelativeY                                   OFFSET(getStruct<T>, {0x1E0, 40, 0, 0})
	SMember(FScalableFloat)                            BuffetBubblesMinRelativeZ                                   OFFSET(getStruct<T>, {0x208, 40, 0, 0})
	SMember(FScalableFloat)                            BuffetBubblesMaxRelativeZ                                   OFFSET(getStruct<T>, {0x230, 40, 0, 0})
	SMember(FRotator)                                  BuffetBubblesRotationRate                                   OFFSET(getStruct<T>, {0x258, 24, 0, 0})
	SMember(FScalableFloat)                            BuffetBubblesMaxAcceleration                                OFFSET(getStruct<T>, {0x270, 40, 0, 0})
	SMember(FScalableFloat)                            BuffetBubblesMaxRelativeSpeed                               OFFSET(getStruct<T>, {0x298, 40, 0, 0})
	SMember(FScalableFloat)                            BuffetBubblesRelativeDeceleration                           OFFSET(getStruct<T>, {0x2C0, 40, 0, 0})
	SMember(FScalableFloat)                            BuffetBubblesSphereRadius                                   OFFSET(getStruct<T>, {0x2E8, 40, 0, 0})
	CMember(class AActor*)                             BuffetBubblesFollowActor                                    OFFSET(get<T>, {0x310, 8, 0, 0})
	SMember(FVector)                                   BuffetBubblesInitialFollowBoxOffsetPercent                  OFFSET(getStruct<T>, {0x318, 24, 0, 0})
	SMember(FBuffetBubblesReplicatedData)              BuffetBubblesReplicatedData                                 OFFSET(getStruct<T>, {0x410, 128, 0, 0})
	SMember(FScalableFloat)                            BuffetBubblesIntroSpeed                                     OFFSET(getStruct<T>, {0x710, 40, 0, 0})
	SMember(FTransform)                                BuffetBubblesIntroTargetTransform                           OFFSET(getStruct<T>, {0x740, 96, 0, 0})
	SMember(FScalableFloat)                            BuffetFlyingMaxPitchDegrees                                 OFFSET(getStruct<T>, {0x7A0, 40, 0, 0})
	SMember(FScalableFloat)                            BuffetFlyingMaxSpeed                                        OFFSET(getStruct<T>, {0x7C8, 40, 0, 0})
	SMember(FScalableFloat)                            BuffetFlyingVelocityDirectionInterpSpeed                    OFFSET(getStruct<T>, {0x7F0, 40, 0, 0})
	SMember(FRotator)                                  BuffetFlyingRotationRate                                    OFFSET(getStruct<T>, {0x818, 24, 0, 0})
	DMember(float)                                     BuffetFlyingMaxSpeedOverride                                OFFSET(get<float>, {0x830, 4, 0, 0})
	DMember(float)                                     BuffetFlyingMaxSpeedInterpSpeed                             OFFSET(get<float>, {0x834, 4, 0, 0})
	DMember(float)                                     BuffetFlyingVelocityDirectionInterpSpeedOverride            OFFSET(get<float>, {0x83C, 4, 0, 0})
	SMember(FScalableFloat)                            BuffetFlyingRicochetSphereSize                              OFFSET(getStruct<T>, {0x840, 40, 0, 0})
	SMember(FScalableFloat)                            BuffetFlyingRicochetRotationDuration                        OFFSET(getStruct<T>, {0x868, 40, 0, 0})
	SMember(FScalableFloat)                            BuffetFlyingRicochetControlRotationInterpSpeed              OFFSET(getStruct<T>, {0x890, 40, 0, 0})
	SMember(FBuffetFlyingRicochetReplicatedData)       BuffetFlyingRicochetReplicatedData                          OFFSET(getStruct<T>, {0x900, 32, 0, 0})


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.SetBuffetBubblesIntroTargetTransform
	// void SetBuffetBubblesIntroTargetTransform(FTransform& Transform);                                                        // [0xb39dd04] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.SetBuffetBubblesInitialFollowBoxOffsetPercent
	// void SetBuffetBubblesInitialFollowBoxOffsetPercent(FVector BoxOffsetPercent);                                            // [0xb39dbac] Final|Native|Protected|HasDefaults|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.SetBuffetBubblesFollowActor
	// void SetBuffetBubblesFollowActor(class AActor* Actor);                                                                   // [0xb39db18] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.OverrideBuffetFlyingVelocityDirectionInterpSpeed
	// void OverrideBuffetFlyingVelocityDirectionInterpSpeed(float Value, bool bAsMultiplier);                                  // [0x9631518] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.OverrideBuffetFlyingMaxSpeed
	// void OverrideBuffetFlyingMaxSpeed(float Value, bool bAsMultiplier, float InterpSpeed);                                   // [0xb39d3f8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.OnRep_BuffetFlyingRicochetReplicatedData
	// void OnRep_BuffetFlyingRicochetReplicatedData();                                                                         // [0xb39d0b8] Final|Native|Private 
	// Function /Script/SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.OnRep_BuffetBubblesFollowActor
	// void OnRep_BuffetBubblesFollowActor();                                                                                   // [0xb39d0a4] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.OnMovementModeChanged
	// void OnMovementModeChanged(class ACharacter* Character, TEnumAsByte<EMovementMode> PreviousMovementMode, char PreviousCustomMode); // [0xb39c91c] Final|Native|Private 
};

/// Class /Script/SpecialEventGameplayRuntime.FortCharacterMovementMutator
/// Size: 0x0008 (0x000338 - 0x000340)
class AFortCharacterMovementMutator : public AFortAthenaMutator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	CMember(class UClass*)                             MovementMutatorComponentClass                               OFFSET(get<T>, {0x338, 8, 0, 0})


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.FortCharacterMovementMutator.OnFortPawnChanged
	// void OnFortPawnChanged(class AFortPawn* NewPawn);                                                                        // [0x604b150] Final|Native|Protected 
};

/// Class /Script/SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic
/// Size: 0x0058 (0x0000A8 - 0x000100)
class UFortControllerComponent_GameplayCinematic : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FMulticastInlineDelegate)                  BP_OnStartGameplayOutro                                     OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  BP_OnGameplayIntroFinished                                  OFFSET(getStruct<T>, {0xE8, 16, 0, 0})
	DMember(bool)                                      bIsReadyForGameplay                                         OFFSET(get<bool>, {0xF8, 1, 0, 0})


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic.ShowCinematicWidget
	// void ShowCinematicWidget(FName WidgetName);                                                                              // [0xb40ccac] Final|BlueprintCosmetic|Exec|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic.SetReadyForGameplay
	// void SetReadyForGameplay(bool bIsReady);                                                                                 // [0x60325ec] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic.ServerOnGameplayIntroFinished
	// void ServerOnGameplayIntroFinished();                                                                                    // [0x80f8ed4] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic.OnRep_bIsReadyForGameplay
	// void OnRep_bIsReadyForGameplay();                                                                                        // [0xb40b1e4] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic.HideHUDElementsForLoadingScreen
	// void HideHUDElementsForLoadingScreen(bool bHideElements);                                                                // [0xb40a308] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
};

/// Class /Script/SpecialEventGameplayRuntime.FortControllerComponent_SpecialEvent
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UFortControllerComponent_SpecialEvent : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(bool)                                      bForceBuildModeInputComponentToNotConsumeInputs             OFFSET(get<bool>, {0xA8, 1, 0, 0})
	CMember(TWeakObjectPtr<AFortAthenaMutator_SpecialEvent*>) SpecialEventMutator                                  OFFSET(get<T>, {0xAC, 8, 0, 0})


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.FortControllerComponent_SpecialEvent.ServerHandleSpecialClientEvent
	// void ServerHandleSpecialClientEvent(FGameplayTag EventTag, int32_t Count);                                               // [0xb40ba18] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/SpecialEventGameplayRuntime.FortControllerComponent_SpecialEvent.SendSpecialClientEvent
	// void SendSpecialClientEvent(FGameplayTag EventTag, int32_t Count);                                                       // [0xb40b80c] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
};

/// Class /Script/SpecialEventGameplayRuntime.FortCustomTickComponent
/// Size: 0x0100 (0x0000A0 - 0x0001A0)
class UFortCustomTickComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	CMember(EFortCustomTickComponentCondition)         Condition                                                   OFFSET(get<T>, {0xA0, 1, 0, 0})
	SMember(FGameplayTag)                              AuthorityQualitySettingsTag                                 OFFSET(getStruct<T>, {0xA4, 4, 0, 0})
	SMember(FGameplayTag)                              DefaultClientQualitySettingsTag                             OFFSET(getStruct<T>, {0xA8, 4, 0, 0})
	CMember(TMap<ECommonPlatformType, FGameplayTag>)   ClientPlatformQualitySettingsTagMap                         OFFSET(get<T>, {0xB0, 80, 0, 0})
	CMember(TMap<FGameplayTag, FCustomTickComonentQualitySettings>) QualitySettingsMap                             OFFSET(get<T>, {0x100, 80, 0, 0})
	DMember(float)                                     WasRecentlyRenderedTolerance                                OFFSET(get<float>, {0x150, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCustomTick                                                OFFSET(getStruct<T>, {0x158, 16, 0, 0})
};

/// Class /Script/SpecialEventGameplayRuntime.FortSpecialRelevancyActorSpawner
/// Size: 0x0008 (0x0002B8 - 0x0002C0)
class AFortSpecialRelevancyActorSpawner : public AFortActorSpawner
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.FortSpecialRelevancyActorSpawner.BP_OnActorSpawnedPerRelevancyGroup
	// void BP_OnActorSpawnedPerRelevancyGroup(TArray<AActor*>& InSpawnedActors);                                               // [0x211c0a0] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class USpecialEventAudioAnalysisBaseComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	DMember(float)                                     CurrentTime                                                 OFFSET(get<float>, {0xA0, 4, 0, 0})
	CMember(class ULoudnessNRT*)                       LoudnessNRT                                                 OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(class UOnsetNRT*)                          OnsetNRT                                                    OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(class UConstantQNRT*)                      ConstantQNRT                                                OFFSET(get<T>, {0xB8, 8, 0, 0})


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.UpdateTime
	// void UpdateTime(float NewTime);                                                                                          // [0xb40d330] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.UpdateOnset
	// void UpdateOnset(float Time);                                                                                            // [0xa7fe298] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.UpdateLoudness
	// void UpdateLoudness(float Time);                                                                                         // [0x6eccdb4] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.UpdateConstantQ
	// void UpdateConstantQ(float Time);                                                                                        // [0x6ecce38] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.GetOnsetNRT
	// class UOnsetNRT* GetOnsetNRT();                                                                                          // [0x32c2c44] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.GetLoudnessNRT
	// class ULoudnessNRT* GetLoudnessNRT();                                                                                    // [0x6337064] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.GetCurrentNormalizedLoudness
	// float GetCurrentNormalizedLoudness();                                                                                    // [0x9b7f608] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.GetConstantQNRT
	// class UConstantQNRT* GetConstantQNRT();                                                                                  // [0x8f4a678] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialEventAudioHapticsComponent
/// Size: 0x0028 (0x0000C0 - 0x0000E8)
class USpecialEventAudioHapticsComponent : public USpecialEventAudioAnalysisBaseComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	CMember(TArray<FSpecialEventAudioHapticsAction>)   HapticsActions                                              OFFSET(get<T>, {0xC0, 16, 0, 0})
	DMember(bool)                                      bStartHapticsOnBeginPlay                                    OFFSET(get<bool>, {0xD0, 1, 0, 0})
	DMember(float)                                     IntensityMultiplier                                         OFFSET(get<float>, {0xD4, 4, 0, 0})


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventAudioHapticsComponent.StopHaptics
	// void StopHaptics();                                                                                                      // [0xb40d1e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventAudioHapticsComponent.StartHaptics
	// void StartHaptics();                                                                                                     // [0xb40d1d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventAudioHapticsComponent.AreHapticsActive
	// bool AreHapticsActive();                                                                                                 // [0xb406918] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialEventCinematicCameraMode
/// Size: 0x0000 (0x000070 - 0x000070)
class USpecialEventCinematicCameraMode : public UFortCinematicCamera
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialEventCursorInstigatorInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class USpecialEventCursorInstigatorInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorInstigatorInterface.SpecialEventCursorTrace
	// bool SpecialEventCursorTrace(FHitResult& OutHitResult, class USpecialEventCursorPawnComponent* CursorPawnComponent, FGameplayTag& CursorModeTag, class UCameraComponent* CameraComponent, FVector& CursorWorldDirection); // [0xb40cd28] Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent
/// Size: 0x0328 (0x0000A0 - 0x0003C8)
class USpecialEventCursorPawnComponent : public UPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 968;

public:
	SMember(FMulticastInlineDelegate)                  OnDesiredVisibilityChanged                                  OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	DMember(bool)                                      bAllowOnNonOwningClients                                    OFFSET(get<bool>, {0xB8, 1, 0, 0})
	CMember(class APawn*)                              OwningPawn                                                  OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(class AFortPlayerController*)              OwningController                                            OFFSET(get<T>, {0xC8, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCursorModeChanged                                         OFFSET(getStruct<T>, {0xE0, 16, 0, 0})
	SMember(FGameplayTag)                              DefaultCursorModeTag                                        OFFSET(getStruct<T>, {0xF0, 4, 0, 0})
	DMember(bool)                                      bDefaultCursorModeAutoActivate                              OFFSET(get<bool>, {0xF4, 1, 0, 0})
	CMember(TMap<FGameplayTag, FSpecialEventCursorMode>) CursorModes                                               OFFSET(get<T>, {0xF8, 80, 0, 0})
	CMember(TArray<FSpecialEventCursorStackEntry>)     CursorStack                                                 OFFSET(get<T>, {0x148, 16, 0, 0})
	SMember(FSpecialEventCursorStackEntry)             ReplicatedCursorStackEntry                                  OFFSET(getStruct<T>, {0x158, 12, 0, 0})
	CMember(class UClass*)                             InputHelperClass                                            OFFSET(get<T>, {0x168, 8, 0, 0})
	DMember(bool)                                      bUseGamepadLookInput                                        OFFSET(get<bool>, {0x170, 1, 0, 0})
	DMember(bool)                                      bUseGamepadMoveInput                                        OFFSET(get<bool>, {0x171, 1, 0, 0})
	DMember(bool)                                      bUseGyroInput                                               OFFSET(get<bool>, {0x172, 1, 0, 0})
	DMember(bool)                                      bObeyInvertedPitchUserSetting                               OFFSET(get<bool>, {0x173, 1, 0, 0})
	CMember(class UCommonInputSubsystem*)              CommonInputSubsystem                                        OFFSET(get<T>, {0x178, 8, 0, 0})
	CMember(class USpecialEventInputHelperComponent*)  InputHelperComponent                                        OFFSET(get<T>, {0x180, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnViewportLocationChanged                                   OFFSET(getStruct<T>, {0x1C8, 16, 0, 0})
	SMember(FScalableFloat)                            NonOwningInterpSpeed                                        OFFSET(getStruct<T>, {0x1D8, 40, 0, 0})
	SMember(FScalableFloat)                            MinDeltaToSendWorldLocationToServer                         OFFSET(getStruct<T>, {0x200, 40, 0, 0})
	SMember(FVector)                                   ReplicatedWorldLocation                                     OFFSET(getStruct<T>, {0x230, 24, 0, 0})
	CMember(TArray<class UUserWidget*>)                Widgets                                                     OFFSET(get<T>, {0x2A8, 16, 0, 0})
	DMember(bool)                                      bAdditiveRotationAllowedByDefault                           OFFSET(get<bool>, {0x3A9, 1, 0, 0})
	DMember(bool)                                      bZoomAllowedByDefault                                       OFFSET(get<bool>, {0x3AB, 1, 0, 0})
	SMember(FName)                                     ZoomActionName                                              OFFSET(getStruct<T>, {0x3AC, 4, 0, 0})
	CMember(class UCameraComponent*)                   AdditiveOffsetCameraComponent                               OFFSET(get<T>, {0x3B8, 8, 0, 0})


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.SetZoomAllowed
	// void SetZoomAllowed(bool bInZoomAllowed);                                                                                // [0xa2b17d0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.SetAllowOnNonOwningClients
	// void SetAllowOnNonOwningClients(bool bAllow);                                                                            // [0xb40bdd8] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.SetAdditiveRotationAllowed
	// void SetAdditiveRotationAllowed(bool bInAdditiveRotationAllowed);                                                        // [0xb40bd58] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.ServerOnWorldLocationChanged
	// void ServerOnWorldLocationChanged(FVector WorldLocation);                                                                // [0xb40bc28] Final|Net|Native|Event|Private|NetServer|HasDefaults 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.PushCursor
	// void PushCursor(FGameplayTag& CursorModeTag, class UObject* InstigatingObject, bool bActivate);                          // [0xb40b624] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.PopCursor
	// void PopCursor(FGameplayTag& CursorModeTag, class UObject* InstigatingObject, bool bDeactivateIfStackEmpty);             // [0xb40b450] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.PopAllCursorsForObject
	// void PopAllCursorsForObject(class UObject* InstigatingObject, bool bDeactivateIfStackEmpty);                             // [0xb40b388] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.OnRep_ReplicatedWorldLocation
	// void OnRep_ReplicatedWorldLocation();                                                                                    // [0xb40b0a4] Final|Native|Private 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.OnRep_ReplicatedCursorStackEntry
	// void OnRep_ReplicatedCursorStackEntry(FSpecialEventCursorStackEntry& OldCursorStackEntry);                               // [0xb40b008] Final|Native|Private|HasOutParms 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.OnRep_bAllowOnNonOwningClients
	// void OnRep_bAllowOnNonOwningClients();                                                                                   // [0xb40b1d0] Final|Native|Private 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.OnLocallyControlledCursorVisibilityChanged
	// void OnLocallyControlledCursorVisibilityChanged(class USpecialEventCursorPawnComponent* CursorPawnComponent, FGameplayTag& CursorModeTag, bool bShouldBeVisible); // [0xb40ac28] Final|Native|Private|HasOutParms 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.OnInputMethodChanged
	// void OnInputMethodChanged(ECommonInputType InputType);                                                                   // [0xb40aba8] Final|Native|Private 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.OnHUDPostRender
	// void OnHUDPostRender(class AHUD* HUD, class UCanvas* Canvas);                                                            // [0x69b67c4] Final|Native|Private 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.MoveInputUpdate
	// void MoveInputUpdate(FVector& InInputVector);                                                                            // [0xb40a6e4] Final|Native|Private|HasOutParms|HasDefaults 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.LookInputUpdate
	// void LookInputUpdate(FVector& InInputVector);                                                                            // [0xb40a534] Final|Native|Private|HasOutParms|HasDefaults 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.IsZoomAllowed
	// bool IsZoomAllowed();                                                                                                    // [0x97adda8] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.IsLocallyControlled
	// bool IsLocallyControlled();                                                                                              // [0x973146c] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.IsAdditiveRotationAllowed
	// bool IsAdditiveRotationAllowed();                                                                                        // [0xb40a51c] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.InputPressed
	// void InputPressed(FName& ActionName, bool bPressed);                                                                     // [0xb40a3f8] Final|Native|Private|HasOutParms 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GyroInputUpdate
	// void GyroInputUpdate(FVector& InInputVector);                                                                            // [0xb40a1c4] Final|Native|Private|HasOutParms|HasDefaults 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetWorldLocationAndDirection
	// bool GetWorldLocationAndDirection(FVector& OutWorldLocation, FVector& OutWorldDirection);                                // [0xb40a058] Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetViewportSize
	// bool GetViewportSize(FVector2D& OutViewportSize);                                                                        // [0xb409fc4] Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetViewportLocation
	// bool GetViewportLocation(FVector2D& OutViewportLocation);                                                                // [0xb409f24] Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetViewportCenter
	// bool GetViewportCenter(FVector2D& OutViewportCenter);                                                                    // [0xb409e60] Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetSpecialEventCursorPawnComponent
	// class USpecialEventCursorPawnComponent* GetSpecialEventCursorPawnComponent(class APawn* Pawn, FGameplayTag& CursorModeTag, bool bMustBeActive); // [0xb409534] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetNormalizedLocation
	// FVector2D GetNormalizedLocation();                                                                                       // [0xb409518] Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetLocalController
	// class APlayerController* GetLocalController();                                                                           // [0xb4094f4] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetInputType
	// ECommonInputType GetInputType();                                                                                         // [0x3447584] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetCursorModeTagsForWidget
	// FGameplayTagContainer GetCursorModeTagsForWidget(class UUserWidget* Widget);                                             // [0xb408aec] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetCurrentWidget
	// class UUserWidget* GetCurrentWidget();                                                                                   // [0xb408a94] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetCurrentHitResult
	// bool GetCurrentHitResult(FHitResult& OutHitResult);                                                                      // [0xb40884c] Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetCurrentCursorModeTag
	// FGameplayTag GetCurrentCursorModeTag();                                                                                  // [0x6428958] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetCenteredWidgetLocation
	// FVector2D GetCenteredWidgetLocation(class UUserWidget* Widget, FVector2D& ViewportLocation);                             // [0xb40867c] Final|RequiredAPI|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetCameraComponent
	// class UCameraComponent* GetCameraComponent();                                                                            // [0xb408658] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.ConvertWorldToViewportLocation
	// bool ConvertWorldToViewportLocation(FVector2D& OutViewportLocation, FVector& WorldLocation);                             // [0xb40747c] Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.ConvertWorldToNormalizedLocation
	// bool ConvertWorldToNormalizedLocation(FVector2D& OutNormalizedLocation, FVector& WorldLocation);                         // [0xb407350] Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.ConvertViewportToWorldLocationAndDirection
	// bool ConvertViewportToWorldLocationAndDirection(FVector& OutWorldLocation, FVector& OutWorldDirection, FVector2D& ViewportLocation); // [0xb40719c] Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.ConvertViewportToNormalizedLocation
	// bool ConvertViewportToNormalizedLocation(FVector2D& OutNormalizedLocation, FVector2D& ViewportLocation);                 // [0xb4070ac] Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.ConvertNormalizedToWorldLocationAndDirection
	// bool ConvertNormalizedToWorldLocationAndDirection(FVector& OutWorldLocation, FVector& OutWorldDirection, FVector2D& NormalizedLocation); // [0xb406ef8] Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.ConvertNormalizedToViewportLocation
	// bool ConvertNormalizedToViewportLocation(FVector2D& OutViewportLocation, FVector2D& NormalizedLocation);                 // [0xb406e08] Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.CanBeVisible
	// bool CanBeVisible();                                                                                                     // [0xb406d94] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent
/// Size: 0x0098 (0x0000A0 - 0x000138)
class USpecialEventCursorWeaponComponent : public UFortWeaponComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	SMember(FMulticastInlineDelegate)                  OnCursorPawnComponentSet                                    OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	CMember(class UClass*)                             CursorPawnComponentClass                                    OFFSET(get<T>, {0xB8, 8, 0, 0})
	SMember(FGameplayTag)                              CursorModeTag                                               OFFSET(getStruct<T>, {0xC0, 4, 0, 0})
	DMember(bool)                                      bAlignFXToCursor                                            OFFSET(get<bool>, {0xC4, 1, 0, 0})
	CMember(class AFortWeapon*)                        OwningWeapon                                                OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(class AFortPlayerPawn*)                    Pawn                                                        OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(class USpecialEventCursorPawnComponent*)   CursorPawnComponent                                         OFFSET(get<T>, {0xD8, 8, 0, 0})


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.OnUnEquip
	// void OnUnEquip(class AFortWeapon* Weapon);                                                                               // [0xb40b308] Final|Native|Private 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.OnRep_CursorPawnComponent
	// void OnRep_CursorPawnComponent();                                                                                        // [0xb40af58] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.OnPlayImpactFX
	// void OnPlayImpactFX(class AFortWeapon* Weapon, FHitResult& HitResult, class UFXSystemComponent* FXSystemComponent);      // [0xb40adb4] Final|Native|Private|HasOutParms 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.OnGetAimRotOverride
	// void OnGetAimRotOverride(class AFortWeapon* Weapon, EFortAbilityTargetingSource TargetingSource, FRotator& OutOverride, bool& bOutExecutionResult); // [0xb40aa44] Final|Native|Private|HasOutParms|HasDefaults 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.OnEquip
	// void OnEquip(class AFortWeapon* Weapon);                                                                                 // [0xb40a9c4] Final|Native|Private 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.OnBeamFired
	// void OnBeamFired(class AFortWeapon* Weapon, bool bUsePersistentBeam, class UFXSystemComponent* PSC, FVector& BeamOrigin, FVector& HitLocation); // [0xb40a7a8] Final|Native|Private|HasOutParms|HasDefaults 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.GetSpecialEventCursorPawnComponentForWeapon
	// class USpecialEventCursorPawnComponent* GetSpecialEventCursorPawnComponentForWeapon(class AFortWeapon* Weapon);          // [0xb409748] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.GetSpecialEventCursorPawnComponentForCurrentWeapon
	// class USpecialEventCursorPawnComponent* GetSpecialEventCursorPawnComponentForCurrentWeapon(class AFortPlayerPawn* Pawn); // [0xb4096b8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.GetCursorPawnComponent
	// class USpecialEventCursorPawnComponent* GetCursorPawnComponent();                                                        // [0x8f91958] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.GetCurrentSpecialEventCursorWeaponComponent
	// class USpecialEventCursorWeaponComponent* GetCurrentSpecialEventCursorWeaponComponent(class AFortPlayerPawn* Pawn);      // [0xb408a14] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.GetCurrentHitResult
	// bool GetCurrentHitResult(FHitResult& OutHitResult);                                                                      // [0xb408930] Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable|Const 
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialEventGameplayGlobals
/// Size: 0x0000 (0x000028 - 0x000028)
class USpecialEventGameplayGlobals : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USpecialEventGameplayLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.StreamOutAllBuildingFoundations
	// void StreamOutAllBuildingFoundations(class UObject* WorldContextObject);                                                 // [0xb40d1fc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.SetNextLoadingScreen
	// void SetNextLoadingScreen(class UObject* WorldContextObject, class UAthenaLoadingScreenItemDefinition* LoadingScreenDefinition, bool bCanShowLoadingBar); // [0xb40c820] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.SetLODOnLandscapProxies
	// void SetLODOnLandscapProxies(class UObject* WorldContextObject, bool bForced, int32_t InLODValue);                       // [0xb40c6c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.HideSkydivingShadowProxy
	// void HideSkydivingShadowProxy(class UObject* WorldContextObject);                                                        // [0xb40a388] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.GetSpecialEventScript
	// class ASpecialEventScript* GetSpecialEventScript(class UObject* WorldContextObject);                                     // [0xb409a58] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.GetSpecialEventPlayerDisplayName
	// FString GetSpecialEventPlayerDisplayName(class AFortPlayerControllerAthena* LocalController, class AFortPlayerStateAthena* PlayerState); // [0xb409980] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.GetSpecialEventMutator
	// class AFortAthenaMutator_SpecialEvent* GetSpecialEventMutator(class UObject* WorldContextObject);                        // [0xb409900] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.GetHasInfiniteSafeZonePhase
	// bool GetHasInfiniteSafeZonePhase(class UObject* WorldContextObject);                                                     // [0xb409290] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.ForceUpdateGrass
	// void ForceUpdateGrass(class UObject* WorldContextObject, FVector Location);                                              // [0xb4084d0] Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.ForceDestroyComponents
	// void ForceDestroyComponents(TArray<UActorComponent*>& Components, bool bPromoteChildren, FString LogContext);            // [0xb407c38] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.FindSpecialEventComponent
	// class UFortControllerComponent_SpecialEvent* FindSpecialEventComponent(class AController* Controller);                   // [0xb407b84] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.FindGameplayCinematicComponent
	// class UFortControllerComponent_GameplayCinematic* FindGameplayCinematicComponent(class AController* Controller);         // [0xb4079ac] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.DetachPawnFromComponent
	// bool DetachPawnFromComponent(class AFortPawn* Pawn, class USceneComponent* Component, EDetachmentRule LocationRule, EDetachmentRule RotationRule, EDetachmentRule ScaleRule); // [0xb407830] Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.DetachPawn
	// bool DetachPawn(class AFortPawn* Pawn, EDetachmentRule LocationRule, EDetachmentRule RotationRule, EDetachmentRule ScaleRule); // [0xb4076f8] Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.CreateSpecialEventPlayerEliminationWorldMarker
	// void CreateSpecialEventPlayerEliminationWorldMarker(class AFortPlayerControllerAthena* LocalController, class AFortPlayerStateAthena* VictimPlayerState, FVector& DeathLocation); // [0xb4075a8] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.AttachPawnToComponent
	// bool AttachPawnToComponent(class AFortPawn* Pawn, class USceneComponent* Component, FName SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies); // [0xb406930] Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.AddSpecialEventRecentElimination
	// void AddSpecialEventRecentElimination(FVector& Location, class AFortPlayerStateAthena* PlayerState);                     // [0xb406280] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.AddSpecialEventKillFeedEntry
	// void AddSpecialEventKillFeedEntry(class UObject* WorldContextObject, class AFortPlayerStateAthena* VictimPlayerState, class AFortPlayerStateAthena* KillerPlayerState, FText NonPlayerVictimName, FText NonPlayerKillerName, FGameplayTag& DeathCauseTag, EDeathCauseReason DeathCauseReason, float Distance); // [0xb405f24] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SpecialEventGameplayRuntime.FortAsyncAction_GameplayCinematicComponentReady
/// Size: 0x0018 (0x000030 - 0x000048)
class UFortAsyncAction_GameplayCinematicComponentReady : public UBlueprintAsyncActionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FMulticastInlineDelegate)                  OnReady                                                     OFFSET(getStruct<T>, {0x30, 16, 0, 0})


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.FortAsyncAction_GameplayCinematicComponentReady.FindGameplayCinematicComponentAsync
	// class UFortAsyncAction_GameplayCinematicComponentReady* FindGameplayCinematicComponentAsync(class AController* Conroller); // [0xb407a38] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent
/// Size: 0x0048 (0x0000A0 - 0x0000E8)
class USpecialEventGameUserSettingsControllerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FMulticastInlineDelegate)                  OnLoaded                                                    OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FString)                                   Version                                                     OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	DMember(float)                                     MinTimeBetweenSaves                                         OFFSET(get<float>, {0xC0, 4, 0, 0})


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.SpecialEventGameUserSettings_ToggleDebug
	// void SpecialEventGameUserSettings_ToggleDebug();                                                                         // [0x32e4b44] Final|BlueprintCosmetic|Exec|Native|Public 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.SpecialEventGameUserSettings_SetData
	// void SpecialEventGameUserSettings_SetData(FString Data);                                                                 // [0x6860530] Final|BlueprintCosmetic|Exec|Native|Public 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.SpecialEventGameUserSettings_LogData
	// void SpecialEventGameUserSettings_LogData();                                                                             // [0x32e4b44] Final|BlueprintCosmetic|Exec|Native|Public|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.SpecialEventGameUserSettings_ClearData
	// void SpecialEventGameUserSettings_ClearData();                                                                           // [0xb40d0d8] Final|BlueprintCosmetic|Exec|Native|Public 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.SetSavingBlocked
	// void SetSavingBlocked(bool bBlocked);                                                                                    // [0xb40cc2c] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.SetData
	// void SetData(FString Data, bool bAllowSave, bool bSaveNow);                                                              // [0xb40be58] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.ParseLoadedData
	// void ParseLoadedData(FString Data);                                                                                      // [0x211c0a0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.GetSpecialEventGameUserSettingsControllerComponent
	// class USpecialEventGameUserSettingsControllerComponent* GetSpecialEventGameUserSettingsControllerComponent(class UObject* WorldContextObject); // [0xb4097c8] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.GetData
	// void GetData(ESpecialEventGameUserSettingsResult& OutResult, FString& OutData);                                          // [0xb408b94] Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable|Const 
};

/// Class /Script/SpecialEventGameplayRuntime.FortAsyncAction_SpecialEventGameUserSettingsReady
/// Size: 0x0018 (0x000030 - 0x000048)
class UFortAsyncAction_SpecialEventGameUserSettingsReady : public UBlueprintAsyncActionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FMulticastInlineDelegate)                  OnReady                                                     OFFSET(getStruct<T>, {0x30, 16, 0, 0})


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.FortAsyncAction_SpecialEventGameUserSettingsReady.SpecialEventGameUserSettingsReadyAsync
	// class UFortAsyncAction_SpecialEventGameUserSettingsReady* SpecialEventGameUserSettingsReadyAsync(class UObject* WorldContextObject); // [0xb40d000] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialEventPhase
/// Size: 0x00C8 (0x000290 - 0x000358)
class ASpecialEventPhase : public AInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 856;

public:
	SMember(FGameplayTag)                              PhaseTag                                                    OFFSET(getStruct<T>, {0x2A8, 4, 0, 0})
	CMember(TWeakObjectPtr<ULevelSequence*>)           LevelSequence                                               OFFSET(get<T>, {0x2B0, 32, 0, 0})
	DMember(float)                                     LevelSequenceTime                                           OFFSET(get<float>, {0x2D0, 4, 0, 0})
	DMember(bool)                                      bApplyGameplayEffects                                       OFFSET(get<bool>, {0x2D4, 1, 0, 0})
	CMember(TArray<class UClass*>)                     GameplayEffectsToApply                                      OFFSET(get<T>, {0x2D8, 16, 0, 0})
	CMember(TArray<FSpecialEventPhaseComponentNetModeInfo>) ControllerComponentsToApplyInfoList                    OFFSET(get<T>, {0x2E8, 16, 0, 0})
	CMember(TArray<FSpecialEventPhaseComponentNetModeInfo>) PawnComponentsToApplyInfoList                          OFFSET(get<T>, {0x2F8, 16, 0, 0})
	CMember(class UClass*)                             CameraModifierToApply                                       OFFSET(get<T>, {0x308, 8, 0, 0})
	DMember(bool)                                      bRemoveModifierOnPhaseDeactivation                          OFFSET(get<bool>, {0x310, 1, 0, 0})
	DMember(bool)                                      bRemoveGameplayEffects                                      OFFSET(get<bool>, {0x311, 1, 0, 0})
	CMember(TArray<class UClass*>)                     GameplayEffectsToRemove                                     OFFSET(get<T>, {0x318, 16, 0, 0})
	CMember(TArray<FSpecialEventPhaseComponentNetModeInfo>) ControllerComponentsToRemoveInfoList                   OFFSET(get<T>, {0x328, 16, 0, 0})
	CMember(TArray<FSpecialEventPhaseComponentNetModeInfo>) PawnComponentsToRemoveInfoList                         OFFSET(get<T>, {0x338, 16, 0, 0})
	CMember(class UCameraModifier*)                    AppliedCameraModifier                                       OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(ESpecialEventPhaseState)                   PhaseState                                                  OFFSET(get<T>, {0x350, 1, 0, 0})


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventPhase.SetHUDElementVisibility
	// void SetHUDElementVisibility(FGameplayTagContainer& HUDElementTags, bool bHideElements);                                 // [0xb40c57c] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventPhase.PrePhaseActivation_Server
	// void PrePhaseActivation_Server();                                                                                        // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventPhase.OnRep_PhaseState
	// void OnRep_PhaseState();                                                                                                 // [0xb40afc4] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventPhase.OnPhaseFinished
	// void OnPhaseFinished();                                                                                                  // [0xb40ada0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventPhase.OnPhaseDeactivation_Server
	// void OnPhaseDeactivation_Server();                                                                                       // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventPhase.OnPhaseDeactivation_Client
	// void OnPhaseDeactivation_Client();                                                                                       // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventPhase.OnPhaseActivation_Server
	// void OnPhaseActivation_Server();                                                                                         // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventPhase.OnPhaseActivation_Client
	// void OnPhaseActivation_Client();                                                                                         // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventPhase.GetPhaseTag
	// FGameplayTag GetPhaseTag();                                                                                              // [0x651c4fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventPhase.DebugActivatePhase
	// void DebugActivatePhase();                                                                                               // [0x32e4b44] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialEventPlayerMannequin
/// Size: 0x0008 (0x000630 - 0x000638)
class ASpecialEventPlayerMannequin : public AFortPlayerMannequin
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1592;

public:
	DMember(bool)                                      bDisableCollisionOnBeginPlay                                OFFSET(get<bool>, {0x630, 1, 1, 0})
	DMember(bool)                                      bDisableComponentsTickOnServer                              OFFSET(get<bool>, {0x630, 1, 1, 1})
	DMember(bool)                                      bRegisterWithSpecialEventMutatorOnClient                    OFFSET(get<bool>, {0x630, 1, 1, 2})
	DMember(bool)                                      bDestroyUnusedSkeletalMeshComponentsOnClientFirstInitialization OFFSET(get<bool>, {0x630, 1, 1, 3})


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventPlayerMannequin.RegisterWithSpecialEventMutator
	// void RegisterWithSpecialEventMutator();                                                                                  // [0xb40b7f8] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventPlayerMannequin.HandleOnMutatorAdded
	// void HandleOnMutatorAdded(class AFortGameplayMutator* NewMutator);                                                       // [0xb40a288] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventPlayerMannequin.DestroyUnusedSkeletalMeshComponents
	// void DestroyUnusedSkeletalMeshComponents();                                                                              // [0xb4076e4] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialEventRewindComponent
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class USpecialEventRewindComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	DMember(float)                                     MaxRecordingDuration                                        OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(float)                                     LocalRecordingFPS                                           OFFSET(get<float>, {0xA4, 4, 0, 0})
	DMember(float)                                     ReplicatedRecordingFPS                                      OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(bool)                                      bAutoStartRecording                                         OFFSET(get<bool>, {0xAC, 1, 0, 0})
	DMember(float)                                     RewindLerpTime                                              OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(float)                                     DefaultRewindDuration                                       OFFSET(get<float>, {0xB4, 4, 0, 0})
	DMember(float)                                     DefaultRewindPlaybackSpeed                                  OFFSET(get<float>, {0xB8, 4, 0, 0})
	SMember(FSpecialEventRewindComponentStateData)     StateData                                                   OFFSET(getStruct<T>, {0xBC, 8, 0, 0})
	DMember(float)                                     ReplicatedRewindDuration                                    OFFSET(get<float>, {0xC4, 4, 0, 0})


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventRewindComponent.TryStartRewinding
	// bool TryStartRewinding(float duration, float PlaybackSpeed);                                                             // [0xb40d26c] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventRewindComponent.OnRep_StateData
	// void OnRep_StateData(FSpecialEventRewindComponentStateData& OldStateData);                                               // [0xb40b13c] Final|Native|Private|HasOutParms 
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialEventRewindComponent_PlayerPawn
/// Size: 0x02C0 (0x0000C8 - 0x000388)
class USpecialEventRewindComponent_PlayerPawn : public USpecialEventRewindComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:
	DMember(bool)                                      bStartServerRecordingOnLastGroundFrame                      OFFSET(get<bool>, {0xC8, 1, 0, 0})
	SMember(FSpecialEventRewindComponentRecording_PlayerPawn) ReplicatedRecording                                  OFFSET(getStruct<T>, {0xF0, 32, 0, 0})
	SMember(FSpecialEventRewindComponentRecordingFastArray_PlayerPawn) ReplicatedRecordingFastArray                OFFSET(getStruct<T>, {0x228, 280, 0, 0})


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventRewindComponent_PlayerPawn.OnServerLanded
	// void OnServerLanded(FHitResult& Hit);                                                                                    // [0xb40b234] Final|Native|Private|HasOutParms 
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialEventScript
/// Size: 0x0078 (0x000290 - 0x000308)
class ASpecialEventScript : public AInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:
	SMember(FMulticastInlineDelegate)                  OnSpecialEventPhaseActivated                                OFFSET(getStruct<T>, {0x290, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSpecialEventPhaseDeactivated                              OFFSET(getStruct<T>, {0x2A0, 16, 0, 0})
	CMember(TArray<FPhaseInfo>)                        PhaseInfoArray                                              OFFSET(get<T>, {0x2B0, 16, 0, 0})
	DMember(float)                                     DropDeadWindowSizeInSeconds                                 OFFSET(get<float>, {0x2C0, 4, 0, 0})
	DMember(float)                                     DelayAfterConentLoad                                        OFFSET(get<float>, {0x2C4, 4, 0, 0})
	DMember(float)                                     DelayAfterWarmup                                            OFFSET(get<float>, {0x2C8, 4, 0, 0})
	DMember(float)                                     ForceReturnToMainMenuTime                                   OFFSET(get<float>, {0x2CC, 4, 0, 0})
	DMember(float)                                     ForceReturnToMainMenuTimeRandomness                         OFFSET(get<float>, {0x2D0, 4, 0, 0})
	DMember(float)                                     MinDelayReturnToMainMenu                                    OFFSET(get<float>, {0x2D4, 4, 0, 0})
	DMember(float)                                     MaxDelayReturnToMainMenu                                    OFFSET(get<float>, {0x2D8, 4, 0, 0})
	DMember(bool)                                      bPreloadAllLevelsOnServer                                   OFFSET(get<bool>, {0x2DC, 1, 0, 0})
	DMember(bool)                                      bAllowGarbageCollectionAfterUnload                          OFFSET(get<bool>, {0x2DD, 1, 0, 0})
	DMember(bool)                                      bFullPurgeGC                                                OFFSET(get<bool>, {0x2DE, 1, 0, 0})
	DMember(int32_t)                                   ReplicatedActivePhaseIndex                                  OFFSET(get<int32_t>, {0x2E0, 4, 0, 0})
	CMember(class UMeshNetworkComponent*)              MeshNetworkComponent                                        OFFSET(get<T>, {0x2F0, 8, 0, 0})


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScript.StartEventAtIndex
	// void StartEventAtIndex(int32_t InStartingIndex, float SequenceTimeOffset);                                               // [0xb40d110] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScript.SetLocalPlayersSignificantForSpecialEventSequence
	// void SetLocalPlayersSignificantForSpecialEventSequence(bool bIsSignificant);                                             // [0xb40c7b8] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScript.OnRep_ReplicatedActivePhaseIndex
	// void OnRep_ReplicatedActivePhaseIndex();                                                                                 // [0xb40afec] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScript.GetActivePhaseIndex
	// int32_t GetActivePhaseIndex();                                                                                           // [0xb408640] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScript.BP_OnScriptReady
	// void BP_OnScriptReady();                                                                                                 // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScript.BP_OnScriptFinished
	// void BP_OnScriptFinished();                                                                                              // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScript.AttemptStartNextPhase
	// void AttemptStartNextPhase(FGameplayTag CurrentPhaseTag);                                                                // [0xb406c64] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScript.AttemptFinishPhase
	// void AttemptFinishPhase(FGameplayTag PhaseTag);                                                                          // [0xb406b34] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialEventScriptMeshActor
/// Size: 0x0030 (0x000290 - 0x0002C0)
class ASpecialEventScriptMeshActor : public AInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	SMember(FDateTime)                                 RootStartTime                                               OFFSET(getStruct<T>, {0x290, 8, 0, 0})
	SMember(FString)                                   CalendarEventName                                           OFFSET(getStruct<T>, {0x298, 16, 0, 0})
	DMember(float)                                     CalenderEventOffsetInSeconds                                OFFSET(get<float>, {0x2A8, 4, 0, 0})
	DMember(float)                                     EncryptionKeyDeliveryTimeOffset                             OFFSET(get<float>, {0x2AC, 4, 0, 0})
	CMember(class UMeshNetworkComponent*)              MeshNetworkComponent                                        OFFSET(get<T>, {0x2B8, 8, 0, 0})


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.OnRep_RootStartTime
	// void OnRep_RootStartTime();                                                                                              // [0xb40b0bc] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.MeshRootStartEvent
	// void MeshRootStartEvent();                                                                                               // [0xb40a6d0] Final|Exec|Native|Public 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.MeshRootStartCalendarTimerOnly
	// void MeshRootStartCalendarTimerOnly();                                                                                   // [0xb40a648] Final|Exec|Native|Public 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.MeshRootStartCalendarTimer
	// void MeshRootStartCalendarTimer();                                                                                       // [0xb40a634] Final|Exec|Native|Public 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.MeshRootResetEvent
	// void MeshRootResetEvent();                                                                                               // [0xb40a620] Final|Exec|Native|Public 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.MeshRootLogCalendarTimer
	// void MeshRootLogCalendarTimer();                                                                                         // [0xb40a60c] Final|Exec|Native|Public 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.MeshRootClearCalendarTimer
	// void MeshRootClearCalendarTimer();                                                                                       // [0xb40a5f8] Final|Exec|Native|Public 
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialEventStatComponent
/// Size: 0x0140 (0x0000A0 - 0x0001E0)
class USpecialEventStatComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	SMember(FMulticastInlineDelegate)                  OnValueChangedDelegate                                      OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	CMember(TArray<FSpecialEventStatDefinition>)       StatDefinitions                                             OFFSET(get<T>, {0xB0, 16, 0, 0})
	SMember(FSpecialEventStatArray)                    StatFastArray                                               OFFSET(getStruct<T>, {0xC0, 288, 0, 0})


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventStatComponent.GetStat
	// FSpecialEventStatArrayEntry GetStat(bool& bOutValid, FGameplayTag LookupTag);                                            // [0xb409cd8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventStatComponent.GetSpecialEventStat
	// FSpecialEventStatArrayEntry GetSpecialEventStat(bool& bOutValid, class AActor* Actor, FGameplayTag LookupTag);           // [0xb409ad8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventStatComponent.AdjustStat
	// bool AdjustStat(FGameplayTag LookupTag, float Adjustment, bool bLogError);                                               // [0xb406634] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventStatComponent.AdjustSpecialEventStat
	// void AdjustSpecialEventStat(class AActor* Actor, FGameplayTag LookupTag, float Adjustment);                              // [0xb406400] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SpecialEventGameplayRuntime.DamageRecordEntry
/// Size: 0x0120 (0x000028 - 0x000148)
class UDamageRecordEntry : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	DMember(float)                                     DamageTotal                                                 OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     EndReplicationTime                                          OFFSET(get<float>, {0x2C, 4, 0, 0})
	SMember(FGameplayTagContainer)                     DamageTags                                                  OFFSET(getStruct<T>, {0x30, 32, 0, 0})
	SMember(FGameplayEffectContextHandle)              EffectContext                                               OFFSET(getStruct<T>, {0x50, 24, 0, 0})
	SMember(FGameplayCueParameters)                    GameplayCueParams                                           OFFSET(getStruct<T>, {0x68, 208, 0, 0})


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.DamageRecordEntry.OnRep_DamageTotal
	// void OnRep_DamageTotal();                                                                                                // [0xb40af6c] Final|Native|Public  
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent
/// Size: 0x0068 (0x0000A0 - 0x000108)
class USpecialRelevancyHealthComponent : public USpecialRelevancyComponentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FScalableFloat)                            RelevancyDeathTimeLength                                    OFFSET(getStruct<T>, {0xA0, 40, 0, 0})
	DMember(bool)                                      bSetLifespanOnLastRelevancyDeath                            OFFSET(get<bool>, {0xC8, 1, 0, 0})
	DMember(float)                                     OwnerMaxHealthCached                                        OFFSET(get<float>, {0xCC, 4, 0, 0})
	CMember(TArray<class UDamageRecordEntry*>)         ReplicatedDamageRecords                                     OFFSET(get<T>, {0xD0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSpecialRelevancyDeath                                     OFFSET(getStruct<T>, {0xE0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSpecialRelevancyDamage                                    OFFSET(getStruct<T>, {0xF0, 16, 0, 0})
	CMember(class AFortAthenaMutator_SpecialRelevancy*) CachedMutator                                              OFFSET(get<T>, {0x100, 8, 0, 0})


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.OnKilled
	// void OnKilled(class AFortPlayerState* KillingPlayerState, int32_t RelevancyGroupIndex);                                  // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.OnDamaged
	// void OnDamaged(class AFortPlayerState* DamagingPlayerState, int32_t RelevancyGroupIndex, float DealtDamage, float ActualDealtDamage, float TotalDamage, float DealtDamagePercent, float ActualDealtDamagePercent, float TotalDamagePercent, float MaxHealth, bool bKilled); // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.GetHealthPercentFromRelevancyIndex
	// float GetHealthPercentFromRelevancyIndex(int32_t Index);                                                                 // [0xb409464] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.GetHealthPercent
	// float GetHealthPercent(class AActor* RelevancyActor);                                                                    // [0xb40931c] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.GetHealthFromRelevancyIndex
	// float GetHealthFromRelevancyIndex(int32_t Index);                                                                        // [0xb4093d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.GetHealth
	// float GetHealth(class AActor* RelevancyActor);                                                                           // [0xb40931c] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.ClientGetHealthPercent
	// float ClientGetHealthPercent();                                                                                          // [0xb406de0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.ClientGetHealth
	// float ClientGetHealth();                                                                                                 // [0xb406db8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialClientEvent
/// Size: 0x0018 (0x000000 - 0x000018)
class FSpecialClientEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class AFortPlayerControllerAthena*)        PlayerController                                            OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     TimeSeconds                                                 OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FGameplayTag)                              EventTag                                                    OFFSET(getStruct<T>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   Count                                                       OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventStatArrayEntry
/// Size: 0x0034 (0x00000C - 0x000040)
class FSpecialEventStatArrayEntry : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class USpecialEventStatComponent*)         StatComponent                                               OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class AActor*)                             Owner                                                       OFFSET(get<T>, {0x18, 8, 0, 0})
	DMember(int32_t)                                   StatDefinitionIndex                                         OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	SMember(FSpecialEventStatDefinition)               StatDefinitionCopy                                          OFFSET(getStruct<T>, {0x24, 16, 0, 0})
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x34, 4, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventStatDefinition
/// Size: 0x0010 (0x000000 - 0x000010)
class FSpecialEventStatDefinition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              LookupTag                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(float)                                     Min                                                         OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Max                                                         OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     DefaultValue                                                OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventTODMSubphaseData
/// Size: 0x0018 (0x000000 - 0x000018)
class FSpecialEventTODMSubphaseData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     PhaseTime                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(ESpecialEventTODMModifyType)               ModifyType                                                  OFFSET(get<T>, {0x4, 1, 0, 0})
	CMember(class UClass*)                             SpawnClass                                                  OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(float)                                     TimeOfDay                                                   OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     SpeedFactor                                                 OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventTODMPhaseData
/// Size: 0x0020 (0x000000 - 0x000020)
class FSpecialEventTODMPhaseData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FGameplayTag)                              PhaseTag                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<FSpecialEventTODMSubphaseData>)     SubphaseDataArray                                           OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventMathEaseData
/// Size: 0x000C (0x000000 - 0x00000C)
class FSpecialEventMathEaseData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(TEnumAsByte<EEasingFunc>)                  EasingFunc                                                  OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     BlendExp                                                    OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   Steps                                                       OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.DestroyActorsAndComponentsMutator_ComponentDefinition
/// Size: 0x0018 (0x000000 - 0x000018)
class FDestroyActorsAndComponentsMutator_ComponentDefinition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   ComponentName                                               OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(EDestroyActorsAndComponentsMutator_ComponentNameComparisonType) NameComparisonType                     OFFSET(get<T>, {0x10, 1, 0, 0})
	DMember(bool)                                      bDestroyOnServer                                            OFFSET(get<bool>, {0x11, 1, 0, 0})
	DMember(bool)                                      bDestroyOnClient                                            OFFSET(get<bool>, {0x12, 1, 0, 0})
	DMember(bool)                                      bPromoteChildrenOfDestroyedComponents                       OFFSET(get<bool>, {0x13, 1, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.DestroyActorsAndComponentsMutator_ActorDefinition
/// Size: 0x0070 (0x000000 - 0x000070)
class FDestroyActorsAndComponentsMutator_ActorDefinition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FGameplayTagContainer)                     Tags                                                        OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   SoftActorClass                                              OFFSET(get<T>, {0x20, 32, 0, 0})
	DMember(bool)                                      bStartEnabled                                               OFFSET(get<bool>, {0x40, 1, 0, 0})
	DMember(bool)                                      bDestroyActorOnServer                                       OFFSET(get<bool>, {0x41, 1, 0, 0})
	DMember(bool)                                      bDestroyActorOnClient                                       OFFSET(get<bool>, {0x42, 1, 0, 0})
	DMember(bool)                                      bNetForceOnActorDestroy                                     OFFSET(get<bool>, {0x43, 1, 0, 0})
	DMember(bool)                                      bShouldModifyLevelOnActorDestroy                            OFFSET(get<bool>, {0x44, 1, 0, 0})
	CMember(TArray<FDestroyActorsAndComponentsMutator_ComponentDefinition>) ComponentDefinitions                   OFFSET(get<T>, {0x48, 16, 0, 0})
	DMember(bool)                                      bCurrentlyEnabled                                           OFFSET(get<bool>, {0x58, 1, 0, 0})
	DMember(bool)                                      bPermanentlyDisabled                                        OFFSET(get<bool>, {0x59, 1, 0, 0})
	CMember(TArray<class AActor*>)                     ActorsToProcess                                             OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.FakeKillRelevancyVictim
/// Size: 0x0020 (0x000000 - 0x000020)
class FFakeKillRelevancyVictim : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(class AFortPlayerStateAthena*)             PlayerState                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FVector)                                   DeathLocation                                               OFFSET(getStruct<T>, {0x8, 24, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.FakeKillRelevancyPlayerDataEntry
/// Size: 0x002C (0x00000C - 0x000038)
class FFakeKillRelevancyPlayerDataEntry : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FFakeKillRelevancyVictim>)          Victims                                                     OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FGameplayTag)                              Reason                                                      OFFSET(getStruct<T>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   PhaseNum                                                    OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	DMember(int32_t)                                   WaveNum                                                     OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(float)                                     RelevancyDelay                                              OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     RelevancyChangeServerWorldTime                              OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.FakeKillRelevancyPlayerDataArray
/// Size: 0x0018 (0x000108 - 0x000120)
class FFakeKillRelevancyPlayerDataArray : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<FFakeKillRelevancyPlayerDataEntry>) Entries                                                     OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(class UFortControllerComponent_FakeKillRelevancy*) ControllerComponent                                 OFFSET(get<T>, {0x118, 8, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.FakeKillRelevancyPhaseData
/// Size: 0x0030 (0x000000 - 0x000030)
class FFakeKillRelevancyPhaseData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FGameplayTag)                              Reason                                                      OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   NumWavesExpected                                            OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   WaveNum                                                     OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(float)                                     RelevancyDelay                                              OFFSET(get<float>, {0x1C, 4, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.FakeKillRelevancyBucket
/// Size: 0x0010 (0x000000 - 0x000010)
class FFakeKillRelevancyBucket : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/SpecialEventGameplayRuntime.FakeKillRelevancySupergroup
/// Size: 0x0020 (0x000000 - 0x000020)
class FFakeKillRelevancySupergroup : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/SpecialEventGameplayRuntime.FakeKillRelevancyTestParameters
/// Size: 0x0038 (0x000000 - 0x000038)
class FFakeKillRelevancyTestParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventMapData
/// Size: 0x0020 (0x000000 - 0x000020)
class FSpecialEventMapData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FGameplayTag)                              MapTag                                                      OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<FName>)                             MapNames                                                    OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(bool)                                      bReplicatedHasBeenUnloaded                                  OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(bool)                                      bHasBeenUnloaded                                            OFFSET(get<bool>, {0x19, 1, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.FortDelayRTMMData
/// Size: 0x0010 (0x000000 - 0x000010)
class FFortDelayRTMMData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      bDelayRTTM                                                  OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     MinRTTMDelay                                                OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MaxRTTMDelay                                                OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Timestamp                                                   OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.FortSpecialEventGEData
/// Size: 0x0010 (0x000000 - 0x000010)
class FFortSpecialEventGEData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UClass*)                             GameplayEffect                                              OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   Level                                                       OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.FortSpecialEventOverrideParts
/// Size: 0x0020 (0x000000 - 0x000020)
class FFortSpecialEventOverrideParts : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<class UCustomCharacterPart*>)       OverrideParts                                               OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FFortSpecialEventGEData)                   GameplayEffectToApplyOnSwap                                 OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.BuffetBubblesReplicatedData
/// Size: 0x0080 (0x000000 - 0x000080)
class FBuffetBubblesReplicatedData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FTransform)                                RelativeTransform                                           OFFSET(getStruct<T>, {0x0, 96, 0, 0})
	SMember(FVector)                                   RelativeVelocity                                            OFFSET(getStruct<T>, {0x60, 24, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.BuffetBubblesDebugData
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FBuffetBubblesDebugData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Struct /Script/SpecialEventGameplayRuntime.BuffetFlyingRicochetReplicatedData
/// Size: 0x0020 (0x000000 - 0x000020)
class FBuffetFlyingRicochetReplicatedData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     StartTime                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FVector)                                   Velocity                                                    OFFSET(getStruct<T>, {0x8, 24, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.CustomTickComonentQualitySettings
/// Size: 0x0014 (0x000000 - 0x000014)
class FCustomTickComonentQualitySettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(int32_t)                                   NumFramesToSkipBetweenEvaluations                           OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   MinFramesToSkipBetweenCustomTicks                           OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   MaxFramesToSkipBetweenCustomTicks                           OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(float)                                     InnerDistance                                               OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     OuterDistance                                               OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventAudioHapticsAction
/// Size: 0x0020 (0x000000 - 0x000020)
class FSpecialEventAudioHapticsAction : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     LoudnessFloor                                               OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     LoudnessCeiling                                             OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     HapticsIntensity                                            OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   ChannelIndex                                                OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(bool)                                      bAffectsLeftLarge                                           OFFSET(get<bool>, {0x10, 1, 1, 0})
	DMember(bool)                                      bAffectsLeftSmall                                           OFFSET(get<bool>, {0x10, 1, 1, 1})
	DMember(bool)                                      bAffectsRightLarge                                          OFFSET(get<bool>, {0x10, 1, 1, 2})
	DMember(bool)                                      bAffectsRightSmall                                          OFFSET(get<bool>, {0x10, 1, 1, 3})
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventCursorMode
/// Size: 0x02E8 (0x000000 - 0x0002E8)
class FSpecialEventCursorMode : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:
	CMember(class UClass*)                             WidgetClass                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      bAllowDebugCursorDrawing                                    OFFSET(get<bool>, {0x8, 1, 0, 0})
	SMember(FSpecialEventMathEaseData)                 GamepadMoveEaseData                                         OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	SMember(FScalableFloat)                            GamepadMoveSpeed                                            OFFSET(getStruct<T>, {0x18, 40, 0, 0})
	SMember(FSpecialEventMathEaseData)                 TouchMoveEaseData                                           OFFSET(getStruct<T>, {0x40, 12, 0, 0})
	SMember(FScalableFloat)                            TouchMoveSpeed                                              OFFSET(getStruct<T>, {0x50, 40, 0, 0})
	DMember(float)                                     TouchDeadzoneTreshold                                       OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(float)                                     TouchAttenuator                                             OFFSET(get<float>, {0x7C, 4, 0, 0})
	SMember(FScalableFloat)                            MinCursorPercentForAdditiveRotationPitch                    OFFSET(getStruct<T>, {0x80, 40, 0, 0})
	SMember(FScalableFloat)                            MinCursorPercentForAdditiveRotationYaw                      OFFSET(getStruct<T>, {0xA8, 40, 0, 0})
	SMember(FScalableFloat)                            MaxAdditiveRotationPitch                                    OFFSET(getStruct<T>, {0xD0, 40, 0, 0})
	SMember(FScalableFloat)                            MaxAdditiveRotationYaw                                      OFFSET(getStruct<T>, {0xF8, 40, 0, 0})
	SMember(FScalableFloat)                            AdditiveRotationInterpSpeed                                 OFFSET(getStruct<T>, {0x120, 40, 0, 0})
	SMember(FScalableFloat)                            ZoomInInterpSpeed                                           OFFSET(getStruct<T>, {0x148, 40, 0, 0})
	SMember(FScalableFloat)                            ZoomOutInterpSpeed                                          OFFSET(getStruct<T>, {0x170, 40, 0, 0})
	SMember(FScalableFloat)                            ZoomAdditiveFOV                                             OFFSET(getStruct<T>, {0x198, 40, 0, 0})
	SMember(FScalableFloat)                            GamepadZoomMoveSpeed                                        OFFSET(getStruct<T>, {0x1C0, 40, 0, 0})
	SMember(FScalableFloat)                            TouchZoomMoveSpeed                                          OFFSET(getStruct<T>, {0x1E8, 40, 0, 0})
	DMember(bool)                                      bAllowTrace                                                 OFFSET(get<bool>, {0x210, 1, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            TraceChannel                                                OFFSET(get<T>, {0x211, 1, 0, 0})
	SMember(FScalableFloat)                            SweepRadius                                                 OFFSET(getStruct<T>, {0x218, 40, 0, 0})
	SMember(FScalableFloat)                            TraceDistance                                               OFFSET(getStruct<T>, {0x240, 40, 0, 0})
	SMember(FScalableFloat)                            bTraceComplex                                               OFFSET(getStruct<T>, {0x268, 40, 0, 0})
	SMember(FScalableFloat)                            RecenterAfterNoInputDelay                                   OFFSET(getStruct<T>, {0x290, 40, 0, 0})
	SMember(FScalableFloat)                            RecenterInterpSpeed                                         OFFSET(getStruct<T>, {0x2B8, 40, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventCursorStackEntry
/// Size: 0x000C (0x000000 - 0x00000C)
class FSpecialEventCursorStackEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FGameplayTag)                              CursorModeTag                                               OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  InstigatingObject                                           OFFSET(get<T>, {0x4, 8, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventPhaseComponentNetModeInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FSpecialEventPhaseComponentNetModeInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(ESpecialEventPhaseComponentNetModeType)    NetModeType                                                 OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(class UClass*)                             ComponentClass                                              OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventRewindComponentStateData
/// Size: 0x0008 (0x000000 - 0x000008)
class FSpecialEventRewindComponentStateData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(ESpecialEventRewindComponentState)         State                                                       OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(char)                                      StateChangedCount                                           OFFSET(get<char>, {0x1, 1, 0, 0})
	DMember(float)                                     ServerWorldTime                                             OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventRewindComponentFrame
/// Size: 0x0004 (0x00000C - 0x000010)
class FSpecialEventRewindComponentFrame : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     ServerWorldTime                                             OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventRewindComponentRecording
/// Size: 0x0020 (0x000000 - 0x000020)
class FSpecialEventRewindComponentRecording : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(class USpecialEventRewindComponent*)       RewindComponent                                             OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(int32_t)                                   StartFrameIndex                                             OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   EndFrameIndex                                               OFFSET(get<int32_t>, {0x14, 4, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventRewindComponentFrame_PlayerPawn
/// Size: 0x0020 (0x000010 - 0x000030)
class FSpecialEventRewindComponentFrame_PlayerPawn : public FSpecialEventRewindComponentFrame
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FVector_NetQuantize)                       Location                                                    OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	DMember(char)                                      CompressedYaw                                               OFFSET(get<char>, {0x28, 1, 0, 0})
	DMember(char)                                      CompressedControlRotationPitch                              OFFSET(get<char>, {0x29, 1, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventRewindComponentRecordingFastArray_PlayerPawn
/// Size: 0x0010 (0x000108 - 0x000118)
class FSpecialEventRewindComponentRecordingFastArray_PlayerPawn : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	CMember(TArray<FSpecialEventRewindComponentFrame_PlayerPawn>) Frames                                           OFFSET(get<T>, {0x108, 16, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventRewindComponentRecording_PlayerPawn
/// Size: 0x0000 (0x000020 - 0x000020)
class FSpecialEventRewindComponentRecording_PlayerPawn : public FSpecialEventRewindComponentRecording
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/SpecialEventGameplayRuntime.PhaseLevelEntryBase
/// Size: 0x0060 (0x000000 - 0x000060)
class FPhaseLevelEntryBase : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(bool)                                      bLoadLevelOnScriptStart                                     OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      bLevelStartsVisible                                         OFFSET(get<bool>, {0x9, 1, 0, 0})
	DMember(bool)                                      bUnloadLevelOnPhaseEnd                                      OFFSET(get<bool>, {0xA, 1, 0, 0})
	DMember(bool)                                      bMakeVisibleOnPhaseStart                                    OFFSET(get<bool>, {0xB, 1, 0, 0})
	SMember(FGameplayTagContainer)                     MakeVisibleAtPhaseTags                                      OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	SMember(FGameplayTagContainer)                     UnloadLevelAtPhaseTags                                      OFFSET(getStruct<T>, {0x30, 32, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.PhaseLevelEntry
/// Size: 0x0070 (0x000060 - 0x0000D0)
class FPhaseLevelEntry : public FPhaseLevelEntryBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TWeakObjectPtr<UWorld*>)                   LevelToLoad                                                 OFFSET(get<T>, {0x60, 32, 0, 0})
	SMember(FString)                                   LevelName                                                   OFFSET(getStruct<T>, {0x80, 16, 0, 0})
	DMember(bool)                                      bExcludeFromServerPreload                                   OFFSET(get<bool>, {0x90, 1, 0, 0})
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x98, 24, 0, 0})
	SMember(FRotator)                                  Rotation                                                    OFFSET(getStruct<T>, {0xB0, 24, 0, 0})
	CMember(class ULevelStreamingDynamic*)             LevelInstance                                               OFFSET(get<T>, {0xC8, 8, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.PhaseDataLayerEntry
/// Size: 0x0020 (0x000060 - 0x000080)
class FPhaseDataLayerEntry : public FPhaseLevelEntryBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(class UDataLayerAsset*)                    DataLayerAsset                                              OFFSET(get<T>, {0x60, 8, 0, 0})
	DMember(bool)                                      bIsRecursive                                                OFFSET(get<bool>, {0x68, 1, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.PhaseInfo
/// Size: 0x0060 (0x000000 - 0x000060)
class FPhaseInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FGameplayTag)                              PhaseTag                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(float)                                     PhaseDuration                                               OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      bSetRelevancyMode                                           OFFSET(get<bool>, {0x8, 1, 0, 0})
	CMember(ESpecialRelevancyMode)                     RelevancyMode                                               OFFSET(get<T>, {0x9, 1, 0, 0})
	DMember(int32_t)                                   NumOfSquadsInRelevancyGroup                                 OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	SMember(FGameplayTagContainer)                     RequireLevelsFromPhaseTags                                  OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	DMember(bool)                                      bStartNextPhaseOnPhaseFinished                              OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(bool)                                      bGarbageCollectAtPhaseStartOnServer                         OFFSET(get<bool>, {0x31, 1, 0, 0})
	DMember(bool)                                      bGarbageCollectAtPhaseStartOnClient                         OFFSET(get<bool>, {0x32, 1, 0, 0})
	CMember(class ASpecialEventPhase*)                 PhaseActor                                                  OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(TArray<FPhaseLevelEntry>)                  Levels                                                      OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FPhaseDataLayerEntry>)              DataLayers                                                  OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventStatArray
/// Size: 0x0018 (0x000108 - 0x000120)
class FSpecialEventStatArray : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<FSpecialEventStatArrayEntry>)       Stats                                                       OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(class USpecialEventStatComponent*)         StatComponent                                               OFFSET(get<T>, {0x118, 8, 0, 0})
};

/// Enum /Script/SpecialEventGameplayRuntime.ESpecialEventTODMModifyType
/// Size: 0x09
enum ESpecialEventTODMModifyType : uint8_t
{
	ESpecialEventTODMModifyType__Keep                                                = 0,
	ESpecialEventTODMModifyType__Hide                                                = 1,
	ESpecialEventTODMModifyType__Show                                                = 2,
	ESpecialEventTODMModifyType__Spawn                                               = 3,
	ESpecialEventTODMModifyType__Persistent                                          = 4,
	ESpecialEventTODMModifyType__Destroy                                             = 5,
	ESpecialEventTODMModifyType__DestroyAll                                          = 6,
	ESpecialEventTODMModifyType__DestroyAllButGameState                              = 7,
	ESpecialEventTODMModifyType__ESpecialEventTODMModifyType_MAX                     = 8
};

/// Enum /Script/SpecialEventGameplayRuntime.EDestroyActorsAndComponentsMutator_ComponentNameComparisonType
/// Size: 0x07
enum EDestroyActorsAndComponentsMutator_ComponentNameComparisonType : uint8_t
{
	EDestroyActorsAndComponentsMutator_ComponentNameComparisonType__NameEquals       = 0,
	EDestroyActorsAndComponentsMutator_ComponentNameComparisonType__NameStartsWith   = 1,
	EDestroyActorsAndComponentsMutator_ComponentNameComparisonType__NameContains     = 2,
	EDestroyActorsAndComponentsMutator_ComponentNameComparisonType__AdditionalStatNameEquals = 3,
	EDestroyActorsAndComponentsMutator_ComponentNameComparisonType__AdditionalStatNameStartsWith = 4,
	EDestroyActorsAndComponentsMutator_ComponentNameComparisonType__AdditionalStatNameContains = 5,
	EDestroyActorsAndComponentsMutator_ComponentNameComparisonType__EDestroyActorsAndComponentsMutator_MAX = 6
};

/// Enum /Script/SpecialEventGameplayRuntime.EFakeKillRelevancyPlayerKillStep
/// Size: 0x04
enum EFakeKillRelevancyPlayerKillStep : uint8_t
{
	EFakeKillRelevancyPlayerKillStep__Initiated                                      = 0,
	EFakeKillRelevancyPlayerKillStep__BlueprintNotified                              = 1,
	EFakeKillRelevancyPlayerKillStep__VisualsPerformed                               = 2,
	EFakeKillRelevancyPlayerKillStep__EFakeKillRelevancyPlayerKillStep_MAX           = 3
};

/// Enum /Script/SpecialEventGameplayRuntime.EMutatorMovementMode
/// Size: 0x07
enum EMutatorMovementMode : uint8_t
{
	EMutatorMovementMode__None                                                       = 0,
	EMutatorMovementMode__BuffetBubbles                                              = 25,
	EMutatorMovementMode__BuffetBubblesIntro                                         = 26,
	EMutatorMovementMode__BuffetFlying                                               = 27,
	EMutatorMovementMode__BuffetFlyingRicochet                                       = 28,
	EMutatorMovementMode__Rewind                                                     = 29,
	EMutatorMovementMode__EMutatorMovementMode_MAX                                   = 30
};

/// Enum /Script/SpecialEventGameplayRuntime.EFortCustomTickComponentCondition
/// Size: 0x05
enum EFortCustomTickComponentCondition : uint8_t
{
	EFortCustomTickComponentCondition__WasRecentlyRendered                           = 0,
	EFortCustomTickComponentCondition__CameraDistance                                = 1,
	EFortCustomTickComponentCondition__LocalPlayerDistance                           = 2,
	EFortCustomTickComponentCondition__Count                                         = 3,
	EFortCustomTickComponentCondition__EFortCustomTickComponentCondition_MAX         = 4
};

/// Enum /Script/SpecialEventGameplayRuntime.ESpecialEventGameUserSettingsResult
/// Size: 0x03
enum ESpecialEventGameUserSettingsResult : uint8_t
{
	ESpecialEventGameUserSettingsResult__Success                                     = 0,
	ESpecialEventGameUserSettingsResult__Failure                                     = 1,
	ESpecialEventGameUserSettingsResult__ESpecialEventGameUserSettingsResult_MAX     = 2
};

/// Enum /Script/SpecialEventGameplayRuntime.ESpecialEventPhaseState
/// Size: 0x05
enum ESpecialEventPhaseState : uint8_t
{
	ESpecialEventPhaseState__Unregistered                                            = 0,
	ESpecialEventPhaseState__Inactive                                                = 1,
	ESpecialEventPhaseState__Active                                                  = 2,
	ESpecialEventPhaseState__Deactivated                                             = 3,
	ESpecialEventPhaseState__ESpecialEventPhaseState_MAX                             = 4
};

/// Enum /Script/SpecialEventGameplayRuntime.ESpecialEventPhaseComponentNetModeType
/// Size: 0x04
enum ESpecialEventPhaseComponentNetModeType : uint8_t
{
	ESpecialEventPhaseComponentNetModeType__ClientControlled                         = 0,
	ESpecialEventPhaseComponentNetModeType__Client                                   = 1,
	ESpecialEventPhaseComponentNetModeType__DedicatedServer                          = 2,
	ESpecialEventPhaseComponentNetModeType__ESpecialEventPhaseComponentNetModeType_MAX = 3
};

/// Enum /Script/SpecialEventGameplayRuntime.ESpecialEventRewindComponentState
/// Size: 0x04
enum ESpecialEventRewindComponentState : uint8_t
{
	ESpecialEventRewindComponentState__Stop                                          = 0,
	ESpecialEventRewindComponentState__Record                                        = 1,
	ESpecialEventRewindComponentState__Rewind                                        = 2,
	ESpecialEventRewindComponentState__ESpecialEventRewindComponentState_MAX         = 3
};

