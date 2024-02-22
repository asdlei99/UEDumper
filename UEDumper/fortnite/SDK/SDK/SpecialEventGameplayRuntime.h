
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
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

/// Enum /Script/SpecialEventGameplayRuntime.ESpecialEventTODMModifyType
/// Size: 0x09
enum class ESpecialEventTODMModifyType : uint8_t
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
enum class EDestroyActorsAndComponentsMutator_ComponentNameComparisonType : uint8_t
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
enum class EFakeKillRelevancyPlayerKillStep : uint8_t
{
	EFakeKillRelevancyPlayerKillStep__Initiated                                      = 0,
	EFakeKillRelevancyPlayerKillStep__BlueprintNotified                              = 1,
	EFakeKillRelevancyPlayerKillStep__VisualsPerformed                               = 2,
	EFakeKillRelevancyPlayerKillStep__EFakeKillRelevancyPlayerKillStep_MAX           = 3
};

/// Enum /Script/SpecialEventGameplayRuntime.EMutatorMovementMode
/// Size: 0x07
enum class EMutatorMovementMode : uint8_t
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
enum class EFortCustomTickComponentCondition : uint8_t
{
	EFortCustomTickComponentCondition__WasRecentlyRendered                           = 0,
	EFortCustomTickComponentCondition__CameraDistance                                = 1,
	EFortCustomTickComponentCondition__LocalPlayerDistance                           = 2,
	EFortCustomTickComponentCondition__Count                                         = 3,
	EFortCustomTickComponentCondition__EFortCustomTickComponentCondition_MAX         = 4
};

/// Enum /Script/SpecialEventGameplayRuntime.ESpecialEventGameUserSettingsResult
/// Size: 0x03
enum class ESpecialEventGameUserSettingsResult : uint8_t
{
	ESpecialEventGameUserSettingsResult__Success                                     = 0,
	ESpecialEventGameUserSettingsResult__Failure                                     = 1,
	ESpecialEventGameUserSettingsResult__ESpecialEventGameUserSettingsResult_MAX     = 2
};

/// Enum /Script/SpecialEventGameplayRuntime.ESpecialEventPhaseState
/// Size: 0x05
enum class ESpecialEventPhaseState : uint8_t
{
	ESpecialEventPhaseState__Unregistered                                            = 0,
	ESpecialEventPhaseState__Inactive                                                = 1,
	ESpecialEventPhaseState__Active                                                  = 2,
	ESpecialEventPhaseState__Deactivated                                             = 3,
	ESpecialEventPhaseState__ESpecialEventPhaseState_MAX                             = 4
};

/// Enum /Script/SpecialEventGameplayRuntime.ESpecialEventPhaseComponentNetModeType
/// Size: 0x04
enum class ESpecialEventPhaseComponentNetModeType : uint8_t
{
	ESpecialEventPhaseComponentNetModeType__ClientControlled                         = 0,
	ESpecialEventPhaseComponentNetModeType__Client                                   = 1,
	ESpecialEventPhaseComponentNetModeType__DedicatedServer                          = 2,
	ESpecialEventPhaseComponentNetModeType__ESpecialEventPhaseComponentNetModeType_MAX = 3
};

/// Enum /Script/SpecialEventGameplayRuntime.ESpecialEventRewindComponentState
/// Size: 0x04
enum class ESpecialEventRewindComponentState : uint8_t
{
	ESpecialEventRewindComponentState__Stop                                          = 0,
	ESpecialEventRewindComponentState__Record                                        = 1,
	ESpecialEventRewindComponentState__Rewind                                        = 2,
	ESpecialEventRewindComponentState__ESpecialEventRewindComponentState_MAX         = 3
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventTODMSubphaseData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FSpecialEventTODMSubphaseData
{ 
	float                                              PhaseTime;                                                  // 0x0000   (0x0004)  
	ESpecialEventTODMModifyType                        ModifyType;                                                 // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	class UClass*                                      SpawnClass;                                                 // 0x0008   (0x0008)  
	float                                              TimeOfDay;                                                  // 0x0010   (0x0004)  
	float                                              SpeedFactor;                                                // 0x0014   (0x0004)  
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventTODMPhaseData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FSpecialEventTODMPhaseData
{ 
	FGameplayTag                                       PhaseTag;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FSpecialEventTODMSubphaseData>              SubphaseDataArray;                                          // 0x0008   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0018   (0x0008)  MISSED
};

/// Class /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEventTODM
/// Size: 0x0040 (0x000338 - 0x000378)
class AFortAthenaMutator_SpecialEventTODM : public AFortAthenaMutator
{ 
public:
	TArray<FSpecialEventTODMPhaseData>                 PhaseDataArray;                                             // 0x0338   (0x0010)  
	class ASpecialEventScript*                         SpecialEventScript;                                         // 0x0348   (0x0008)  
	int32_t                                            PhaseIndexInProgress;                                       // 0x0350   (0x0004)  
	int32_t                                            SubphaseIndexInProgress;                                    // 0x0354   (0x0004)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0358   (0x0008)  MISSED
	SDK_UNDEFINED(16,15470) /* TScriptInterface<Class> */ __um(SpawnedTODM);                                       // 0x0360   (0x0010)  
	bool                                               bDebug;                                                     // 0x0370   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0371   (0x0007)  MISSED


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEventTODM.OnPhaseActivated
	// void OnPhaseActivated(class ASpecialEventScript* InSpecialEventScript, class ASpecialEventPhase* InSpecialEventPhase); // [0xb725158] Final|Native|Private 
};

/// Class /Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEventTODM
/// Size: 0x0000 (0x000038 - 0x000038)
class UFortCheatManager_SpecialEventTODM : public UFortCheatManager_Coupled
{ 
public:


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEventTODM.SpecialEventTODM_ToggleDebug
	// void SpecialEventTODM_ToggleDebug();                                                                                  // [0x3097b14] Final|BlueprintAuthorityOnly|Exec|Native|Public 
};

/// Class /Script/SpecialEventGameplayRuntime.FortCheatManager_DestroyActorsAndComponents
/// Size: 0x0000 (0x000038 - 0x000038)
class UFortCheatManager_DestroyActorsAndComponents : public UFortCheatManager_Coupled
{ 
public:


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_DestroyActorsAndComponents.DestroyActorsAndComponentsMutator_SetActorDefinitionsEnabled
	// void DestroyActorsAndComponentsMutator_SetActorDefinitionsEnabled(FString TagString, bool bEnabled);                  // [0x89f3ca0] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_DestroyActorsAndComponents.DestroyActorsAndComponentsMutator_ListActorComponents
	// void DestroyActorsAndComponentsMutator_ListActorComponents(FString InActorName);                                      // [0x6650f60] Final|Exec|Native|Public|Const 
};

/// Struct /Script/SpecialEventGameplayRuntime.DestroyActorsAndComponentsMutator_ComponentDefinition
/// Size: 0x0018 (0x000000 - 0x000018)
struct FDestroyActorsAndComponentsMutator_ComponentDefinition
{ 
	SDK_UNDEFINED(16,15471) /* FString */              __um(ComponentName);                                        // 0x0000   (0x0010)  
	EDestroyActorsAndComponentsMutator_ComponentNameComparisonType NameComparisonType;                             // 0x0010   (0x0001)  
	bool                                               bDestroyOnServer;                                           // 0x0011   (0x0001)  
	bool                                               bDestroyOnClient;                                           // 0x0012   (0x0001)  
	bool                                               bPromoteChildrenOfDestroyedComponents;                      // 0x0013   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/SpecialEventGameplayRuntime.DestroyActorsAndComponentsMutator_ActorDefinition
/// Size: 0x0070 (0x000000 - 0x000070)
struct FDestroyActorsAndComponentsMutator_ActorDefinition
{ 
	FGameplayTagContainer                              Tags;                                                       // 0x0000   (0x0020)  
	SDK_UNDEFINED(32,15472) /* TWeakObjectPtr<UClass*> */ __um(SoftActorClass);                                    // 0x0020   (0x0020)  
	bool                                               bStartEnabled;                                              // 0x0040   (0x0001)  
	bool                                               bDestroyActorOnServer;                                      // 0x0041   (0x0001)  
	bool                                               bDestroyActorOnClient;                                      // 0x0042   (0x0001)  
	bool                                               bNetForceOnActorDestroy;                                    // 0x0043   (0x0001)  
	bool                                               bShouldModifyLevelOnActorDestroy;                           // 0x0044   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0045   (0x0003)  MISSED
	TArray<FDestroyActorsAndComponentsMutator_ComponentDefinition> ComponentDefinitions;                           // 0x0048   (0x0010)  
	bool                                               bCurrentlyEnabled;                                          // 0x0058   (0x0001)  
	bool                                               bPermanentlyDisabled;                                       // 0x0059   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x005A   (0x0006)  MISSED
	TArray<class AActor*>                              ActorsToProcess;                                            // 0x0060   (0x0010)  
};

/// Class /Script/SpecialEventGameplayRuntime.FortAthenaMutator_DestroyActorsAndComponents
/// Size: 0x0030 (0x000338 - 0x000368)
class AFortAthenaMutator_DestroyActorsAndComponents : public AFortAthenaMutator
{ 
public:
	TArray<FDestroyActorsAndComponentsMutator_ActorDefinition> ActorDefinitions;                                   // 0x0338   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0348   (0x0020)  MISSED


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_DestroyActorsAndComponents.SetActorDefinitionsEnabled
	// void SetActorDefinitionsEnabled(FGameplayTagContainer& InTags, bool bEnabled);                                        // [0xb7231a0] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_DestroyActorsAndComponents.PermanentlyDisableActorDefinitions
	// void PermanentlyDisableActorDefinitions(FGameplayTagContainer& InTags);                                               // [0x81e8ba0] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_DestroyActorsAndComponents.OnTrackedActorDestroyed
	// void OnTrackedActorDestroyed(class AActor* DestroyedActor);                                                           // [0xb725750] Final|Native|Private 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_DestroyActorsAndComponents.OnRep_ActorDefinitions
	// void OnRep_ActorDefinitions(TArray<FDestroyActorsAndComponentsMutator_ActorDefinition>& OldActorDefinitions);         // [0xb725468] Final|Native|Private|HasOutParms 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_DestroyActorsAndComponents.OnActorSpawned
	// void OnActorSpawned(class AActor* Actor);                                                                             // [0xb724ae4] Final|Native|Private 
};

/// Class /Script/SpecialEventGameplayRuntime.FortCheatManager_FakeKillRelevancy
/// Size: 0x0000 (0x000038 - 0x000038)
class UFortCheatManager_FakeKillRelevancy : public UFortCheatManager_Coupled
{ 
public:


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_FakeKillRelevancy.FakeKillRelevancyTestAlgorithm
	// void FakeKillRelevancyTestAlgorithm(int32_t NumPlayers, FString MaxPlayersRemainingAfterPhases, int32_t MinSquadSize, int32_t MaxSquadSize, int32_t Iterations, int32_t LogVerbosity); // [0xb723aa8] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_FakeKillRelevancy.FakeKillRelevancyStartNextWave
	// void FakeKillRelevancyStartNextWave();                                                                                // [0x3097b14] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_FakeKillRelevancy.FakeKillRelevancySetUpPhase
	// void FakeKillRelevancySetUpPhase(int32_t MaxPlayersRemaining, FString ReasonGameplayTagString, int32_t NumWaves, float RelevancyDelay); // [0xb723374] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_FakeKillRelevancy.FakeKillRelevancyReset
	// void FakeKillRelevancyReset();                                                                                        // [0x3097b14] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_FakeKillRelevancy.FakeKillRelevancyDebug
	// void FakeKillRelevancyDebug(float TextScale);                                                                         // [0x621acf8] Final|Exec|Native|Public 
};

/// Struct /Script/SpecialEventGameplayRuntime.FakeKillRelevancyVictim
/// Size: 0x0020 (0x000000 - 0x000020)
struct FFakeKillRelevancyVictim
{ 
	class AFortPlayerStateAthena*                      PlayerState;                                                // 0x0000   (0x0008)  
	FVector                                            DeathLocation;                                              // 0x0008   (0x0018)  
};

/// Struct /Script/SpecialEventGameplayRuntime.FakeKillRelevancyPlayerDataEntry
/// Size: 0x002C (0x00000C - 0x000038)
struct FFakeKillRelevancyPlayerDataEntry : FFastArraySerializerItem
{ 
	unsigned char                                      UnknownData00_3[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FFakeKillRelevancyVictim>                   Victims;                                                    // 0x0010   (0x0010)  
	FGameplayTag                                       Reason;                                                     // 0x0020   (0x0004)  
	int32_t                                            PhaseNum;                                                   // 0x0024   (0x0004)  
	int32_t                                            WaveNum;                                                    // 0x0028   (0x0004)  
	float                                              RelevancyDelay;                                             // 0x002C   (0x0004)  
	float                                              RelevancyChangeServerWorldTime;                             // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/SpecialEventGameplayRuntime.FakeKillRelevancyPlayerDataArray
/// Size: 0x0018 (0x000108 - 0x000120)
struct FFakeKillRelevancyPlayerDataArray : FFastArraySerializer
{ 
	TArray<FFakeKillRelevancyPlayerDataEntry>          Entries;                                                    // 0x0108   (0x0010)  
	class UFortControllerComponent_FakeKillRelevancy*  ControllerComponent;                                        // 0x0118   (0x0008)  
};

/// Class /Script/SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy
/// Size: 0x0188 (0x0000A8 - 0x000230)
class UFortControllerComponent_FakeKillRelevancy : public UFortControllerComponent
{ 
public:
	FFakeKillRelevancyPlayerDataArray                  PlayerDataArray;                                            // 0x00A8   (0x0120)  
	SDK_UNDEFINED(80,15473) /* TMap<AFortPlayerStateAthena*, EFakeKillRelevancyPlayerKillStep> */ __um(ClientPlayerStateKillStepMap); // 0x01C8   (0x0050)  
	char                                               ResetCounter;                                               // 0x0218   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0219   (0x0007)  MISSED
	TArray<class AFortPlayerStateAthena*>              DebugSupergroupPlayerStates;                                // 0x0220   (0x0010)  


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.ResetRelevancy
	// void ResetRelevancy();                                                                                                // [0x3097b14] Final|BlueprintAuthorityOnly|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.PlayKillEffects
	// void PlayKillEffects(FFakeKillRelevancyPlayerDataEntry& FakeKillData, float RelevancyDelay);                          // [0x3d1d968] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.OnRep_ResetCounter
	// void OnRep_ResetCounter();                                                                                            // [0xb725684] Final|Native|Private 
	// Function /Script/SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.OnKillEffectsPlayed
	// void OnKillEffectsPlayed(class AFortPlayerStateAthena* PlayerState);                                                  // [0xb724d64] Final|BlueprintCosmetic|Native|Protected|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.GetDeathLocation
	// FVector GetDeathLocation(class AFortPlayerStateAthena* PlayerState);                                                  // [0xb724658] Final|Native|Protected|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.CancelKillEffectsOnServer
	// void CancelKillEffectsOnServer();                                                                                     // [0x3d1d968] BlueprintAuthorityOnly|Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.CancelKillEffectsOnClient
	// void CancelKillEffectsOnClient(TArray<AFortPlayerStateAthena*>& PlayerStates);                                        // [0x3d1d968] BlueprintCosmetic|Event|Protected|HasOutParms|BlueprintEvent 
};

/// Struct /Script/SpecialEventGameplayRuntime.FakeKillRelevancyPhaseData
/// Size: 0x0030 (0x000000 - 0x000030)
struct FFakeKillRelevancyPhaseData
{ 
	FGameplayTag                                       Reason;                                                     // 0x0010   (0x0004)  
	int32_t                                            NumWavesExpected;                                           // 0x0014   (0x0004)  
	int32_t                                            WaveNum;                                                    // 0x0018   (0x0004)  
	float                                              RelevancyDelay;                                             // 0x001C   (0x0004)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0020   (0x0010)  MISSED
};

/// Class /Script/SpecialEventGameplayRuntime.FortAthenaMutator_FakeKillRelevancy
/// Size: 0x0060 (0x000440 - 0x0004A0)
class AFortAthenaMutator_FakeKillRelevancy : public AFortAthenaMutator_SpecialRelevancy
{ 
public:
	class UClass*                                      FakeKillControllerComponentClass;                           // 0x0440   (0x0008)  
	TArray<FFakeKillRelevancyPhaseData>                RelevancyPhaseDataArray;                                    // 0x0448   (0x0010)  
	int32_t                                            PhaseNum;                                                   // 0x0458   (0x0004)  
	unsigned char                                      UnknownData00_6[0x44];                                      // 0x045C   (0x0044)  MISSED


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_FakeKillRelevancy.StartNextKillWave
	// void StartNextKillWave();                                                                                             // [0x3097b14] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_FakeKillRelevancy.SetUpKillPhase
	// void SetUpKillPhase(int32_t MaxPlayersRemaining, FGameplayTag& Reason, int32_t NumWaves, float RelevancyDelay);       // [0xb72687c] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_FakeKillRelevancy.ResetRelevancy
	// void ResetRelevancy();                                                                                                // [0x3097b14] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_FakeKillRelevancy.EndWave
	// void EndWave(int32_t EndPhaseNum, int32_t WaveNum);                                                                   // [0x6177060] Final|Native|Private 
};

/// Class /Script/SpecialEventGameplayRuntime.FortAthenaMutator_LoadGameFeature
/// Size: 0x0010 (0x000338 - 0x000348)
class AFortAthenaMutator_LoadGameFeature : public AFortAthenaMutator
{ 
public:
	SDK_UNDEFINED(16,15474) /* FString */              __um(GameFeatureToLoad);                                    // 0x0338   (0x0010)  


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_LoadGameFeature.OnPlaylistDataReady
	// void OnPlaylistDataReady(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, FGameplayTagContainer& PlaylistContextTags); // [0xb72521c] Final|Native|Protected|HasOutParms 
};

/// Class /Script/SpecialEventGameplayRuntime.FortAthenaMutator_RemoveGameFeatures
/// Size: 0x0010 (0x000338 - 0x000348)
class AFortAthenaMutator_RemoveGameFeatures : public AFortAthenaMutator
{ 
public:
	SDK_UNDEFINED(16,15475) /* TArray<FString> */      __um(AllowedGameFeatures);                                  // 0x0338   (0x0010)  


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_RemoveGameFeatures.OnPlaylistDataReady
	// void OnPlaylistDataReady(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, FGameplayTagContainer& PlaylistContextTags); // [0xb72534c] Final|Native|Protected|HasOutParms 
};

/// Class /Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent
/// Size: 0x0000 (0x000038 - 0x000038)
class UFortCheatManager_SpecialEvent : public UFortCheatManager_Coupled
{ 
public:


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.UnloadTerrainMaps
	// void UnloadTerrainMaps(FName MapTag);                                                                                 // [0x86debf4] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ToggleDisableParachutes
	// void ToggleDisableParachutes(bool bIsDisabled);                                                                       // [0x5dd0bf8] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.TeleportAllPlayers
	// void TeleportAllPlayers(int32_t SafeZoneIndex);                                                                       // [0x6470f8c] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.StartEventScript
	// void StartEventScript(int32_t InStartingIndex, float SequenceTimeOffset);                                             // [0xb726b30] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SpecialEventSetAdditionalViewpoint
	// void SpecialEventSetAdditionalViewpoint(float X, float Y, float Z);                                                   // [0x8c38d50] Final|Exec|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SpecialEventGameUserSettings_ClearDataForAllPlayers
	// void SpecialEventGameUserSettings_ClearDataForAllPlayers();                                                           // [0x3097b14] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SpecialEventClearAdditionalViewpoint
	// void SpecialEventClearAdditionalViewpoint();                                                                          // [0x3097b14] Final|Exec|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ShrinkSafeZone
	// void ShrinkSafeZone();                                                                                                // [0x3097b14] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SetReturnToMainMenuDelay
	// void SetReturnToMainMenuDelay(float MinDelayReturnToMainMenu, float MaxDelayReturnToMainMenu);                        // [0x80e56e0] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SetMatchTime
	// void SetMatchTime(int32_t NewMatchTime);                                                                              // [0x6470f8c] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SetLockingOnFocalPoint
	// void SetLockingOnFocalPoint(bool bInLockingOnFocalPoint);                                                             // [0x5dd0bf8] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SetIsSimulatingDamage
	// void SetIsSimulatingDamage(bool bIsSimulating);                                                                       // [0x5dd0bf8] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SetDestroyVehiclesInStorm
	// void SetDestroyVehiclesInStorm(bool bDestroyVehiclesInStorm);                                                         // [0x5dd0bf8] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SendToNightNight
	// void SendToNightNight();                                                                                              // [0x3097b14] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ResumeWinCondition
	// void ResumeWinCondition();                                                                                            // [0x3097b14] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ResetWinConditionProgressToZero
	// void ResetWinConditionProgressToZero();                                                                               // [0x3097b14] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ResetWinCondition
	// void ResetWinCondition();                                                                                             // [0x3097b14] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ResetSpecialEventAircraft
	// void ResetSpecialEventAircraft();                                                                                     // [0x3097b14] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ResetMatchTimeToPrevious
	// void ResetMatchTimeToPrevious();                                                                                      // [0x3097b14] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.PlacePlayersInAircraft
	// void PlacePlayersInAircraft();                                                                                        // [0x3097b14] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.PauseWinCondition
	// void PauseWinCondition(bool bLockScores);                                                                             // [0x5dd0bf8] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.CloseParachutes
	// void CloseParachutes();                                                                                               // [0x3097b14] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ChangeWinCondition
	// void ChangeWinCondition(float NewGoalScore);                                                                          // [0x621acf8] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.AutobalanceTargetScore
	// void AutobalanceTargetScore();                                                                                        // [0x3097b14] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.AddCSVEvent
	// void AddCSVEvent(FString CSVEventName);                                                                               // [0x8c2fc5c] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
};

/// Struct /Script/SpecialEventGameplayRuntime.FortDelayRTMMData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FFortDelayRTMMData
{ 
	bool                                               bDelayRTTM;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              MinRTTMDelay;                                               // 0x0004   (0x0004)  
	float                                              MaxRTTMDelay;                                               // 0x0008   (0x0004)  
	float                                              Timestamp;                                                  // 0x000C   (0x0004)  
};

/// Struct /Script/SpecialEventGameplayRuntime.FortSpecialEventGEData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FFortSpecialEventGEData
{ 
	class UClass*                                      GameplayEffect;                                             // 0x0000   (0x0008)  
	int32_t                                            Level;                                                      // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/SpecialEventGameplayRuntime.FortSpecialEventOverrideParts
/// Size: 0x0020 (0x000000 - 0x000020)
struct FFortSpecialEventOverrideParts
{ 
	TArray<class UCustomCharacterPart*>                OverrideParts;                                              // 0x0000   (0x0010)  
	FFortSpecialEventGEData                            GameplayEffectToApplyOnSwap;                                // 0x0010   (0x0010)  
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventMapData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FSpecialEventMapData
{ 
	FGameplayTag                                       MapTag;                                                     // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FName>                                      MapNames;                                                   // 0x0008   (0x0010)  
	bool                                               bReplicatedHasBeenUnloaded;                                 // 0x0018   (0x0001)  
	bool                                               bHasBeenUnloaded;                                           // 0x0019   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x001A   (0x0006)  MISSED
};

/// Class /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent
/// Size: 0x0478 (0x000338 - 0x0007B0)
class AFortAthenaMutator_SpecialEvent : public AFortAthenaMutator
{ 
public:
	SDK_UNDEFINED(16,15476) /* FMulticastInlineDelegate */ __um(TeleportAllPlayersFinished);                       // 0x0338   (0x0010)  
	SDK_UNDEFINED(16,15477) /* FMulticastInlineDelegate */ __um(OnPawnLoaded);                                     // 0x0348   (0x0010)  
	SDK_UNDEFINED(16,15478) /* FMulticastInlineDelegate */ __um(OnInitController);                                 // 0x0358   (0x0010)  
	SDK_UNDEFINED(16,15479) /* FMulticastInlineDelegate */ __um(OnResumeGame);                                     // 0x0368   (0x0010)  
	SDK_UNDEFINED(16,15480) /* FMulticastInlineDelegate */ __um(OnSpecialClientEvent);                             // 0x0378   (0x0010)  
	SDK_UNDEFINED(16,15481) /* FMulticastInlineDelegate */ __um(OnHandleLogout);                                   // 0x0388   (0x0010)  
	SDK_UNDEFINED(16,15482) /* FMulticastInlineDelegate */ __um(OnClientInitialLoadingFinished);                   // 0x0398   (0x0010)  
	unsigned char                                      UnknownData00_5[0x68];                                      // 0x03A8   (0x0068)  MISSED
	bool                                               bPlayersAreInvincible;                                      // 0x0410   (0x0001)  
	unsigned char                                      UnknownData01_5[0x27];                                      // 0x0411   (0x0027)  MISSED
	int32_t                                            MinimumScoreBumpForAutomadeGoal;                            // 0x0438   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x043C   (0x0004)  MISSED
	TArray<float>                                      ScoreBrackets;                                              // 0x0440   (0x0010)  
	bool                                               bEnforceInfiniteSafeZonePhase;                              // 0x0450   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0451   (0x0003)  MISSED
	FName                                              WarmupIslandPlayerStartTag;                                 // 0x0454   (0x0004)  
	bool                                               bAllowInventoryOpen;                                        // 0x0458   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x0459   (0x0007)  MISSED
	FScalableFloat                                     bAllowFullScreenMap;                                        // 0x0460   (0x0028)  
	bool                                               bShouldClearFrontEndMapMarkers;                             // 0x0488   (0x0001)  
	bool                                               bBlockTeamIndicators;                                       // 0x0489   (0x0001)  
	unsigned char                                      UnknownData05_5[0x2];                                       // 0x048A   (0x0002)  MISSED
	int32_t                                            ForceDisplaySquadInfoDuringGamePhases;                      // 0x048C   (0x0004)  
	bool                                               bAllowSquadListLocalPlayerInSplitscreen;                    // 0x0490   (0x0001)  
	unsigned char                                      UnknownData06_5[0x7];                                       // 0x0491   (0x0007)  MISSED
	FGameplayTagContainer                              UIToHideDuringSpecialEvent;                                 // 0x0498   (0x0020)  
	FGameplayTagContainer                              UIToHideWhenInInfiniteWarmup;                               // 0x04B8   (0x0020)  
	FGameplayTagContainer                              ClientEventsThatUnhideHiddenWhileLoadingHUDElements;        // 0x04D8   (0x0020)  
	bool                                               bSkipPostGameScreens;                                       // 0x04F8   (0x0001)  
	bool                                               bForceGarbageCollectionAfterUnloadOnServer;                 // 0x04F9   (0x0001)  
	bool                                               bForceGarbageCollectionAfterUnloadOnClient;                 // 0x04FA   (0x0001)  
	bool                                               bFullPurgeGC;                                               // 0x04FB   (0x0001)  
	unsigned char                                      UnknownData07_5[0x4];                                       // 0x04FC   (0x0004)  MISSED
	class AFortAthenaAircraft*                         EventAircraft;                                              // 0x0500   (0x0008)  
	FAircraftFlightInfo                                EventAircraftInfo;                                          // 0x0508   (0x0048)  
	class UClass*                                      EventAircraftClass;                                         // 0x0550   (0x0008)  
	class ASpecialEventScript*                         ScriptActor;                                                // 0x0558   (0x0008)  
	bool                                               bDisableHUD;                                                // 0x0560   (0x0001)  
	char                                               GameResumed;                                                // 0x0561   (0x0001)  
	unsigned char                                      UnknownData08_5[0x6];                                       // 0x0562   (0x0006)  MISSED
	FVector                                            AdditionalViewpoint;                                        // 0x0568   (0x0018)  
	bool                                               bParachutesDisabled;                                        // 0x0580   (0x0001)  
	unsigned char                                      UnknownData09_5[0x7];                                       // 0x0581   (0x0007)  MISSED
	SDK_UNDEFINED(16,15483) /* FString */              __um(LastCSVEventName);                                     // 0x0588   (0x0010)  
	bool                                               bCanStreamBuildingFoundationsIn;                            // 0x0598   (0x0001)  
	unsigned char                                      UnknownData10_5[0x3];                                       // 0x0599   (0x0003)  MISSED
	int32_t                                            AllPlayerTeleportedCount;                                   // 0x059C   (0x0004)  
	FFortDelayRTMMData                                 DelayPlayersFromReturningToLobbyData;                       // 0x05A0   (0x0010)  
	FName                                              NamedWeightForContainerLootRoll;                            // 0x05B0   (0x0004)  
	float                                              WeightForContainerLootRoll;                                 // 0x05B4   (0x0004)  
	unsigned char                                      UnknownData11_5[0x30];                                      // 0x05B8   (0x0030)  MISSED
	TArray<FFortSpecialEventEmoteData>                 SpecialEventEmoteData;                                      // 0x05E8   (0x0010)  
	FGameplayTagContainer                              BlockedNativeActions;                                       // 0x05F8   (0x0020)  
	EFortItemType                                      DesiredQuickbarItemTypeAfterRemove;                         // 0x0618   (0x0001)  
	unsigned char                                      UnknownData12_5[0x7];                                       // 0x0619   (0x0007)  MISSED
	class UInputComponent*                             SpecialEventsInputComponent;                                // 0x0620   (0x0008)  
	bool                                               bLockingOnFocalPoint;                                       // 0x0628   (0x0001)  
	unsigned char                                      UnknownData13_5[0x7];                                       // 0x0629   (0x0007)  MISSED
	TArray<FFortSpecialEventOverrideParts>             SpecialEventOverrideParts;                                  // 0x0630   (0x0010)  
	FFortSpecialEventGEData                            GameplayEffectToApplyOnSwapToDefault;                       // 0x0640   (0x0010)  
	SDK_UNDEFINED(80,15484) /* TMap<FUniqueNetIdRepl, int32_t> */ __um(OverridePartsArrayIndexMap);                // 0x0650   (0x0050)  
	TArray<FFortSpecialEventGEData>                    GameplayEffectsToApplyOnLogin;                              // 0x06A0   (0x0010)  
	class UClass*                                      ControllerComponentClassOverride;                           // 0x06B0   (0x0008)  
	TArray<FSpecialEventMapData>                       TerrainMapsToUnload;                                        // 0x06B8   (0x0010)  
	unsigned char                                      UnknownData14_5[0x10];                                      // 0x06C8   (0x0010)  MISSED
	TArray<class AFortPlayerControllerAthena*>         UnhandledPlayerControllers;                                 // 0x06D8   (0x0010)  
	TArray<FName>                                      HLODActorsToHideNames;                                      // 0x06E8   (0x0010)  
	bool                                               bForceAllowCloth;                                           // 0x06F8   (0x0001)  
	unsigned char                                      UnknownData15_5[0x1];                                       // 0x06F9   (0x0001)  MISSED
	bool                                               bManageBackfill;                                            // 0x06FA   (0x0001)  
	unsigned char                                      UnknownData16_5[0x1];                                       // 0x06FB   (0x0001)  MISSED
	int32_t                                            PlayerCountToTriggerBackfill;                               // 0x06FC   (0x0004)  
	bool                                               bWaitForPlayerCountToTriggerBackfill;                       // 0x0700   (0x0001)  
	unsigned char                                      UnknownData17_5[0x3];                                       // 0x0701   (0x0003)  MISSED
	float                                              UpdateBackfillStatusTime;                                   // 0x0704   (0x0004)  
	unsigned char                                      UnknownData18_5[0x10];                                      // 0x0708   (0x0010)  MISSED
	bool                                               bServerHasBackfillActive;                                   // 0x0718   (0x0001)  
	bool                                               bCanToggleCursorModeInStasis;                               // 0x0719   (0x0001)  
	unsigned char                                      UnknownData19_5[0x6];                                       // 0x071A   (0x0006)  MISSED
	FScalableFloat                                     MannequinRecentlyRenderedCheckToleranceValue;               // 0x0720   (0x0028)  
	TArray<class ASpecialEventPlayerMannequin*>        SpecialEventMannequins;                                     // 0x0748   (0x0010)  
	TArray<class UClass*>                              ActorSpawnDelegateClasses;                                  // 0x0758   (0x0010)  
	unsigned char                                      UnknownData20_6[0x48];                                      // 0x0768   (0x0048)  MISSED


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.WarmUpIslandUpdated
	// void WarmUpIslandUpdated();                                                                                           // [0xb727390] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.UpdateBackfillStatus
	// void UpdateBackfillStatus();                                                                                          // [0x3097b14] Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.UnloadTerrainMaps
	// void UnloadTerrainMaps(FGameplayTag& MapTag);                                                                         // [0xb7272c8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ToggleHUDs
	// void ToggleHUDs(bool bHide);                                                                                          // [0xb727248] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ToggleDisableWeapons
	// void ToggleDisableWeapons(bool bDisableWeapons);                                                                      // [0xb727160] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ToggleDisableParachutes
	// void ToggleDisableParachutes(bool bDisable);                                                                          // [0xb7270e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ToggleAllPlayersInvincibility
	// void ToggleAllPlayersInvincibility(bool bInvincible);                                                                 // [0xb727060] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.TeleportAllPlayers
	// void TeleportAllPlayers(FGameplayTagContainer EventTags, int32_t TeleportsPerFrame, int32_t SafeZoneIndex);           // [0xb726d18] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SwapBodyParts
	// void SwapBodyParts(int32_t ArrayIndex, class AFortPlayerController* FortPC);                                          // [0xb726c54] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.StartSafeZoneOverrideForEvent
	// void StartSafeZoneOverrideForEvent(int32_t SafeZoneIndexForEvent);                                                    // [0xb726bd4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ShrinkSafeZone
	// void ShrinkSafeZone();                                                                                                // [0xb726ad8] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetWeightForContainerLootRoll
	// void SetWeightForContainerLootRoll(float Weight);                                                                     // [0xb726a58] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetReturnToMainMenuDelay
	// void SetReturnToMainMenuDelay(float MinDelayReturnToMainMenu, float MaxDelayReturnToMainMenu);                        // [0xb7267b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetNamedWeightForContainerLootRoll
	// void SetNamedWeightForContainerLootRoll(FName WeightName);                                                            // [0xb7266bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetMatchTime
	// void SetMatchTime(int32_t NewMatchTime);                                                                              // [0xb7265ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetLockingOnFocalPoint
	// void SetLockingOnFocalPoint(bool bInLockingOnFocalPoint);                                                             // [0xb726524] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetIsSimulatingDamage
	// void SetIsSimulatingDamage(bool bIsSimulating);                                                                       // [0xb7264a4] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetDestroyVehiclesInStorm
	// void SetDestroyVehiclesInStorm(bool bDestroyVehiclesInStorm);                                                         // [0xb7263e8] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetCanStreamBuildingFoundationsIn
	// void SetCanStreamBuildingFoundationsIn(bool bEnable);                                                                 // [0xb726320] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetAdditionalViewpoint
	// void SetAdditionalViewpoint(FVector WorldLocation);                                                                   // [0xb725ea0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SendToNightNight
	// void SendToNightNight();                                                                                              // [0x3097b14] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ResumeWinCondition
	// void ResumeWinCondition();                                                                                            // [0xb725e8c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ResetWinConditionProgressToZero
	// void ResetWinConditionProgressToZero();                                                                               // [0xb725e78] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ResetWinCondition
	// void ResetWinCondition();                                                                                             // [0xb725e64] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ResetSpecialEventAircraft
	// void ResetSpecialEventAircraft();                                                                                     // [0xb725e28] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ResetSafeZoneOverrideAfterEvent
	// void ResetSafeZoneOverrideAfterEvent(int32_t MinResetSafeZoneIndex, float MinDelayReturnToMainMenu, float MaxDelayReturnToMainMenu); // [0xb725d30] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ResetMatchTimeToPrevious
	// void ResetMatchTimeToPrevious();                                                                                      // [0xb725cdc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.RemoveFromBlockedNativeActions
	// void RemoveFromBlockedNativeActions(FGameplayTagContainer& Actions);                                                  // [0x81e8ba0] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PushSpecialEventEmoteInputComponent
	// void PushSpecialEventEmoteInputComponent();                                                                           // [0xb725cc8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PopSpecialEventEmoteInputComponent
	// void PopSpecialEventEmoteInputComponent();                                                                            // [0xb725cb4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PlacePlayersInAircraft
	// void PlacePlayersInAircraft();                                                                                        // [0xb725ca0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PauseWinCondition
	// void PauseWinCondition(bool bLockScores);                                                                             // [0xb725bc4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PauseSupplyDrops
	// void PauseSupplyDrops(bool bPause);                                                                                   // [0xb725aec] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PauseStormProgression
	// void PauseStormProgression(bool bPause);                                                                              // [0xb725a6c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PauseStormDamage
	// void PauseStormDamage(bool bPause);                                                                                   // [0xb7259a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnWarmUpTeleportComplete
	// void OnWarmUpTeleportComplete(class AFortPlayerPawn* PlayerPawn);                                                     // [0xb725814] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_TerrainMapsToUnload
	// void OnRep_TerrainMapsToUnload();                                                                                     // [0xb725698] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_LastCSVEventName
	// void OnRep_LastCSVEventName();                                                                                        // [0xb725654] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_GameResumed
	// void OnRep_GameResumed();                                                                                             // [0xb725640] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_DelayPlayersFromReturningToLobbyData
	// void OnRep_DelayPlayersFromReturningToLobbyData();                                                                    // [0xb7255e8] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_bPlayersAreInvincible
	// void OnRep_bPlayersAreInvincible();                                                                                   // [0xb72573c] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_bLockingOnFocalPoint
	// void OnRep_bLockingOnFocalPoint();                                                                                    // [0xb725728] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_bDisableHUD
	// void OnRep_bDisableHUD();                                                                                             // [0xb725714] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_bCanStreamBuildingFoundationsIn
	// void OnRep_bCanStreamBuildingFoundationsIn();                                                                         // [0xb725700] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_AllPlayerTeleportedCount
	// void OnRep_AllPlayerTeleportedCount();                                                                                // [0x6478470] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_Aircraft
	// void OnRep_Aircraft();                                                                                                // [0xb725514] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_AdditionalViewpoint
	// void OnRep_AdditionalViewpoint();                                                                                     // [0xb725500] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnGameViewportActivationChanged
	// void OnGameViewportActivationChanged(bool bHasFocus);                                                                 // [0xb724ce4] Final|Native|Public  
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnAircraftFlightEnded
	// void OnAircraftFlightEnded(class AFortAthenaAircraft* FortAthenaAircraft);                                            // [0xb724c64] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnAircraftExitedDropZone
	// void OnAircraftExitedDropZone(class AFortAthenaAircraft* FortAthenaAircraft);                                         // [0xb724be4] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnAircraftEnteredDropZone
	// void OnAircraftEnteredDropZone(class AFortAthenaAircraft* FortAthenaAircraft);                                        // [0xb724b64] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnActorSpawned
	// void OnActorSpawned(class AActor* Actor);                                                                             // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnActorPreSpawnInitialization
	// void OnActorPreSpawnInitialization(class AActor* Actor);                                                              // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.NotifyClientsGameResumed
	// void NotifyClientsGameResumed();                                                                                      // [0xb724aa8] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.NetMulticast_CheatClearSpecialEventGameUserSettings
	// void NetMulticast_CheatClearSpecialEventGameUserSettings();                                                           // [0x86b2028] Net|NetReliableNative|Event|NetMulticast|Public 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.JumpToSafeZonePhase
	// void JumpToSafeZonePhase(FVector PawnSpawnCenterLocation, float PawnSpawnMinDistance, float PawnSpawnMaxDistance);    // [0xb724790] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.HandleSpecialEventMannequinDestroyed
	// void HandleSpecialEventMannequinDestroyed(class AActor* MannequinActor);                                              // [0xb724710] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.GetScript
	// class ASpecialEventScript* GetScript();                                                                               // [0xb7246f8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.GetHasInfiniteSafeZonePhase
	// bool GetHasInfiniteSafeZonePhase();                                                                                   // [0x94296f8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ForceSafeZoneFinalLocation
	// void ForceSafeZoneFinalLocation(FVector NewFinalLocation, float DefaultAircraftOffsetFromMidLine, float MinDefaultMidlineAngle, float MaxDefaultMidlineAngle); // [0xb724258] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.FlushUnhandledPlayerControllers
	// void FlushUnhandledPlayerControllers();                                                                               // [0xb724244] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.CloseParachutes
	// void CloseParachutes();                                                                                               // [0xb723360] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ClearBlockedNativeActions
	// void ClearBlockedNativeActions();                                                                                     // [0x3097b14] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ClearAdditionalViewpoint
	// void ClearAdditionalViewpoint();                                                                                      // [0xb72334c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ChangeWinCondition
	// void ChangeWinCondition(float NewGoalScore);                                                                          // [0xb7232cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.AutobalanceTargetScore
	// void AutobalanceTargetScore();                                                                                        // [0xb7232b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.AddToBlockedNativeActions
	// void AddToBlockedNativeActions(FGameplayTagContainer& Actions, bool bCancelAbilities);                                // [0xb7231a0] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.AddCSVEvent
	// void AddCSVEvent(FString CSVEventName, bool bShouldRepToClient);                                                      // [0xb722400] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.AddClientCSVEvent
	// void AddClientCSVEvent(FString CSVEventName);                                                                         // [0xb722af8] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SpecialEventGameplayRuntime.FortCameraMode_SpecialEventFocalPoint
/// Size: 0x0000 (0x001BB0 - 0x001BB0)
class UFortCameraMode_SpecialEventFocalPoint : public UFortCameraMode_FocalPoint
{ 
public:


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.FortCameraMode_SpecialEventFocalPoint.UpdateCameraBP
	// void UpdateCameraBP(class AActor* ViewTarget, float DeltaTime, FTViewTarget& OutVT);                                  // [0x3d1d968] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.FortCameraMode_SpecialEventFocalPoint.SetOverrideTransitionTime
	// void SetOverrideTransitionTime(float InTransitionTime);                                                               // [0xb726738] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortCameraMode_SpecialEventFocalPoint.OnBecomeInactiveBP
	// void OnBecomeInactiveBP(class AActor* ViewTarget);                                                                    // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.FortCameraMode_SpecialEventFocalPoint.OnBecomeActiveBP
	// void OnBecomeActiveBP(class AActor* ViewTarget);                                                                      // [0x3d1d968] Event|Protected|BlueprintEvent 
};

/// Struct /Script/SpecialEventGameplayRuntime.BuffetBubblesReplicatedData
/// Size: 0x0080 (0x000000 - 0x000080)
struct FBuffetBubblesReplicatedData
{ 
	FTransform                                         RelativeTransform;                                          // 0x0000   (0x0060)  
	FVector                                            RelativeVelocity;                                           // 0x0060   (0x0018)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0078   (0x0008)  MISSED
};

/// Struct /Script/SpecialEventGameplayRuntime.BuffetFlyingRicochetReplicatedData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FBuffetFlyingRicochetReplicatedData
{ 
	float                                              StartTime;                                                  // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FVector                                            Velocity;                                                   // 0x0008   (0x0018)  
};

/// Class /Script/SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent
/// Size: 0x0880 (0x0000A0 - 0x000920)
class UFortCharacterMovementMutatorComponent : public UActorComponent
{ 
public:
	class ACharacter*                                  CharacterOwner;                                             // 0x00A0   (0x0008)  
	class UFortMovementComp_CharacterAthena*           MovementComponent;                                          // 0x00A8   (0x0008)  
	class UFortMovementComp_CharacterAthena*           CDOMovementComponent;                                       // 0x00B0   (0x0008)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x00B8   (0x0010)  MISSED
	FScalableFloat                                     BuffetBubblesMoveToBoxSpeed;                                // 0x00C8   (0x0028)  
	FScalableFloat                                     BuffetBubblesRelativeVelocityInterpSpeed;                   // 0x00F0   (0x0028)  
	FScalableFloat                                     BuffetBubblesLocationInterpSpeed;                           // 0x0118   (0x0028)  
	FScalableFloat                                     BuffetBubblesRotationInterpSpeed;                           // 0x0140   (0x0028)  
	FScalableFloat                                     BuffetBubblesMinRelativeX;                                  // 0x0168   (0x0028)  
	FScalableFloat                                     BuffetBubblesMaxRelativeX;                                  // 0x0190   (0x0028)  
	FScalableFloat                                     BuffetBubblesMinRelativeY;                                  // 0x01B8   (0x0028)  
	FScalableFloat                                     BuffetBubblesMaxRelativeY;                                  // 0x01E0   (0x0028)  
	FScalableFloat                                     BuffetBubblesMinRelativeZ;                                  // 0x0208   (0x0028)  
	FScalableFloat                                     BuffetBubblesMaxRelativeZ;                                  // 0x0230   (0x0028)  
	FRotator                                           BuffetBubblesRotationRate;                                  // 0x0258   (0x0018)  
	FScalableFloat                                     BuffetBubblesMaxAcceleration;                               // 0x0270   (0x0028)  
	FScalableFloat                                     BuffetBubblesMaxRelativeSpeed;                              // 0x0298   (0x0028)  
	FScalableFloat                                     BuffetBubblesRelativeDeceleration;                          // 0x02C0   (0x0028)  
	FScalableFloat                                     BuffetBubblesSphereRadius;                                  // 0x02E8   (0x0028)  
	class AActor*                                      BuffetBubblesFollowActor;                                   // 0x0310   (0x0008)  
	FVector                                            BuffetBubblesInitialFollowBoxOffsetPercent;                 // 0x0318   (0x0018)  
	unsigned char                                      UnknownData01_5[0xE0];                                      // 0x0330   (0x00E0)  MISSED
	FBuffetBubblesReplicatedData                       BuffetBubblesReplicatedData;                                // 0x0410   (0x0080)  
	unsigned char                                      UnknownData02_5[0x280];                                     // 0x0490   (0x0280)  MISSED
	FScalableFloat                                     BuffetBubblesIntroSpeed;                                    // 0x0710   (0x0028)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x0738   (0x0008)  MISSED
	FTransform                                         BuffetBubblesIntroTargetTransform;                          // 0x0740   (0x0060)  
	FScalableFloat                                     BuffetFlyingMaxPitchDegrees;                                // 0x07A0   (0x0028)  
	FScalableFloat                                     BuffetFlyingMaxSpeed;                                       // 0x07C8   (0x0028)  
	FScalableFloat                                     BuffetFlyingVelocityDirectionInterpSpeed;                   // 0x07F0   (0x0028)  
	FRotator                                           BuffetFlyingRotationRate;                                   // 0x0818   (0x0018)  
	float                                              BuffetFlyingMaxSpeedOverride;                               // 0x0830   (0x0004)  
	float                                              BuffetFlyingMaxSpeedInterpSpeed;                            // 0x0834   (0x0004)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x0838   (0x0004)  MISSED
	float                                              BuffetFlyingVelocityDirectionInterpSpeedOverride;           // 0x083C   (0x0004)  
	FScalableFloat                                     BuffetFlyingRicochetSphereSize;                             // 0x0840   (0x0028)  
	FScalableFloat                                     BuffetFlyingRicochetRotationDuration;                       // 0x0868   (0x0028)  
	FScalableFloat                                     BuffetFlyingRicochetControlRotationInterpSpeed;             // 0x0890   (0x0028)  
	unsigned char                                      UnknownData05_5[0x48];                                      // 0x08B8   (0x0048)  MISSED
	FBuffetFlyingRicochetReplicatedData                BuffetFlyingRicochetReplicatedData;                         // 0x0900   (0x0020)  


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.SetBuffetBubblesIntroTargetTransform
	// void SetBuffetBubblesIntroTargetTransform(FTransform& Transform);                                                     // [0xb7261e8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.SetBuffetBubblesInitialFollowBoxOffsetPercent
	// void SetBuffetBubblesInitialFollowBoxOffsetPercent(FVector BoxOffsetPercent);                                         // [0xb726084] Final|Native|Protected|HasDefaults|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.SetBuffetBubblesFollowActor
	// void SetBuffetBubblesFollowActor(class AActor* Actor);                                                                // [0xb725ff0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.OverrideBuffetFlyingVelocityDirectionInterpSpeed
	// void OverrideBuffetFlyingVelocityDirectionInterpSpeed(float Value, bool bAsMultiplier);                               // [0x9770804] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.OverrideBuffetFlyingMaxSpeed
	// void OverrideBuffetFlyingMaxSpeed(float Value, bool bAsMultiplier, float InterpSpeed);                                // [0xb7258c0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.OnRep_BuffetFlyingRicochetReplicatedData
	// void OnRep_BuffetFlyingRicochetReplicatedData();                                                                      // [0xb725580] Final|Native|Private 
	// Function /Script/SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.OnRep_BuffetBubblesFollowActor
	// void OnRep_BuffetBubblesFollowActor();                                                                                // [0xb72556c] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.OnMovementModeChanged
	// void OnMovementModeChanged(class ACharacter* Character, TEnumAsByte<EMovementMode> PreviousMovementMode, char PreviousCustomMode); // [0xb724de4] Final|Native|Private 
};

/// Class /Script/SpecialEventGameplayRuntime.FortCharacterMovementMutator
/// Size: 0x0008 (0x000338 - 0x000340)
class AFortCharacterMovementMutator : public AFortAthenaMutator
{ 
public:
	class UClass*                                      MovementMutatorComponentClass;                              // 0x0338   (0x0008)  


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.FortCharacterMovementMutator.OnFortPawnChanged
	// void OnFortPawnChanged(class AFortPawn* NewPawn);                                                                     // [0x5decebc] Final|Native|Protected 
};

/// Class /Script/SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic
/// Size: 0x0058 (0x0000A8 - 0x000100)
class UFortControllerComponent_GameplayCinematic : public UFortControllerComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x00A8   (0x0030)  MISSED
	SDK_UNDEFINED(16,15485) /* FMulticastInlineDelegate */ __um(BP_OnStartGameplayOutro);                          // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,15486) /* FMulticastInlineDelegate */ __um(BP_OnGameplayIntroFinished);                       // 0x00E8   (0x0010)  
	bool                                               bIsReadyForGameplay;                                        // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00F9   (0x0007)  MISSED


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic.ShowCinematicWidget
	// void ShowCinematicWidget(FName WidgetName);                                                                           // [0xb79543c] Final|BlueprintCosmetic|Exec|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic.SetReadyForGameplay
	// void SetReadyForGameplay(bool bIsReady);                                                                              // [0x5dd0bf8] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic.ServerOnGameplayIntroFinished
	// void ServerOnGameplayIntroFinished();                                                                                 // [0x80d7358] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic.OnRep_bIsReadyForGameplay
	// void OnRep_bIsReadyForGameplay();                                                                                     // [0xb7938a8] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic.HideHUDElementsForLoadingScreen
	// void HideHUDElementsForLoadingScreen(bool bHideElements);                                                             // [0xb7929cc] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
};

/// Class /Script/SpecialEventGameplayRuntime.FortControllerComponent_SpecialEvent
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UFortControllerComponent_SpecialEvent : public UFortControllerComponent
{ 
public:
	bool                                               bForceBuildModeInputComponentToNotConsumeInputs;            // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00A9   (0x0003)  MISSED
	SDK_UNDEFINED(8,15487) /* TWeakObjectPtr<AFortAthenaMutator_SpecialEvent*> */ __um(SpecialEventMutator);       // 0x00AC   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00B4   (0x0004)  MISSED


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.FortControllerComponent_SpecialEvent.ServerHandleSpecialClientEvent
	// void ServerHandleSpecialClientEvent(FGameplayTag EventTag, int32_t Count);                                            // [0xb7940f8] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/SpecialEventGameplayRuntime.FortControllerComponent_SpecialEvent.SendSpecialClientEvent
	// void SendSpecialClientEvent(FGameplayTag EventTag, int32_t Count);                                                    // [0xb793ed0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
};

/// Class /Script/SpecialEventGameplayRuntime.FortCustomTickComponent
/// Size: 0x0100 (0x0000A0 - 0x0001A0)
class UFortCustomTickComponent : public UActorComponent
{ 
public:
	EFortCustomTickComponentCondition                  Condition;                                                  // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00A1   (0x0003)  MISSED
	FGameplayTag                                       AuthorityQualitySettingsTag;                                // 0x00A4   (0x0004)  
	FGameplayTag                                       DefaultClientQualitySettingsTag;                            // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00AC   (0x0004)  MISSED
	SDK_UNDEFINED(80,15488) /* TMap<ECommonPlatformType, FGameplayTag> */ __um(ClientPlatformQualitySettingsTagMap); // 0x00B0   (0x0050)  
	SDK_UNDEFINED(80,15489) /* TMap<FGameplayTag, FCustomTickComonentQualitySettings> */ __um(QualitySettingsMap); // 0x0100   (0x0050)  
	float                                              WasRecentlyRenderedTolerance;                               // 0x0150   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0154   (0x0004)  MISSED
	SDK_UNDEFINED(16,15490) /* FMulticastInlineDelegate */ __um(OnCustomTick);                                     // 0x0158   (0x0010)  
	unsigned char                                      UnknownData03_6[0x38];                                      // 0x0168   (0x0038)  MISSED
};

/// Class /Script/SpecialEventGameplayRuntime.FortSpecialRelevancyActorSpawner
/// Size: 0x0008 (0x0002B8 - 0x0002C0)
class AFortSpecialRelevancyActorSpawner : public AFortActorSpawner
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x02B8   (0x0008)  MISSED


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.FortSpecialRelevancyActorSpawner.BP_OnActorSpawnedPerRelevancyGroup
	// void BP_OnActorSpawnedPerRelevancyGroup(TArray<AActor*>& InSpawnedActors);                                            // [0x3d1d968] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class USpecialEventAudioAnalysisBaseComponent : public UActorComponent
{ 
public:
	float                                              CurrentTime;                                                // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00A4   (0x0004)  MISSED
	class ULoudnessNRT*                                LoudnessNRT;                                                // 0x00A8   (0x0008)  
	class UOnsetNRT*                                   OnsetNRT;                                                   // 0x00B0   (0x0008)  
	class UConstantQNRT*                               ConstantQNRT;                                               // 0x00B8   (0x0008)  


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.UpdateTime
	// void UpdateTime(float NewTime);                                                                                       // [0xb795ac0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.UpdateOnset
	// void UpdateOnset(float Time);                                                                                         // [0xad11e44] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.UpdateLoudness
	// void UpdateLoudness(float Time);                                                                                      // [0x6deb1e0] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.UpdateConstantQ
	// void UpdateConstantQ(float Time);                                                                                     // [0x6deb264] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.GetOnsetNRT
	// class UOnsetNRT* GetOnsetNRT();                                                                                       // [0x3033778] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.GetLoudnessNRT
	// class ULoudnessNRT* GetLoudnessNRT();                                                                                 // [0x60f0f34] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.GetCurrentNormalizedLoudness
	// float GetCurrentNormalizedLoudness();                                                                                 // [0x9cf5e64] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.GetConstantQNRT
	// class UConstantQNRT* GetConstantQNRT();                                                                               // [0x7a5f454] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventAudioHapticsAction
/// Size: 0x0020 (0x000000 - 0x000020)
struct FSpecialEventAudioHapticsAction
{ 
	float                                              LoudnessFloor;                                              // 0x0000   (0x0004)  
	float                                              LoudnessCeiling;                                            // 0x0004   (0x0004)  
	float                                              HapticsIntensity;                                           // 0x0008   (0x0004)  
	int32_t                                            ChannelIndex;                                               // 0x000C   (0x0004)  
	bool                                               bAffectsLeftLarge : 1;                                      // 0x0010:0 (0x0001)  
	bool                                               bAffectsLeftSmall : 1;                                      // 0x0010:1 (0x0001)  
	bool                                               bAffectsRightLarge : 1;                                     // 0x0010:2 (0x0001)  
	bool                                               bAffectsRightSmall : 1;                                     // 0x0010:3 (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0011   (0x000F)  MISSED
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialEventAudioHapticsComponent
/// Size: 0x0028 (0x0000C0 - 0x0000E8)
class USpecialEventAudioHapticsComponent : public USpecialEventAudioAnalysisBaseComponent
{ 
public:
	TArray<FSpecialEventAudioHapticsAction>            HapticsActions;                                             // 0x00C0   (0x0010)  
	bool                                               bStartHapticsOnBeginPlay;                                   // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00D1   (0x0003)  MISSED
	float                                              IntensityMultiplier;                                        // 0x00D4   (0x0004)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x00D8   (0x0010)  MISSED


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventAudioHapticsComponent.StopHaptics
	// void StopHaptics();                                                                                                   // [0xb795978] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventAudioHapticsComponent.StartHaptics
	// void StartHaptics();                                                                                                  // [0xb795964] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventAudioHapticsComponent.AreHapticsActive
	// bool AreHapticsActive();                                                                                              // [0xb78ef2c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialEventCinematicCameraMode
/// Size: 0x0000 (0x000070 - 0x000070)
class USpecialEventCinematicCameraMode : public UFortCinematicCamera
{ 
public:
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialEventCursorInstigatorInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class USpecialEventCursorInstigatorInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorInstigatorInterface.SpecialEventCursorTrace
	// bool SpecialEventCursorTrace(FHitResult& OutHitResult, class USpecialEventCursorPawnComponent* CursorPawnComponent, FGameplayTag& CursorModeTag, class UCameraComponent* CameraComponent, FVector& CursorWorldDirection); // [0xb7954b8] Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventCursorStackEntry
/// Size: 0x000C (0x000000 - 0x00000C)
struct FSpecialEventCursorStackEntry
{ 
	FGameplayTag                                       CursorModeTag;                                              // 0x0000   (0x0004)  
	SDK_UNDEFINED(8,15491) /* TWeakObjectPtr<UObject*> */ __um(InstigatingObject);                                 // 0x0004   (0x0008)  
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent
/// Size: 0x0328 (0x0000A0 - 0x0003C8)
class USpecialEventCursorPawnComponent : public UPawnComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00A0   (0x0008)  MISSED
	SDK_UNDEFINED(16,15492) /* FMulticastInlineDelegate */ __um(OnDesiredVisibilityChanged);                       // 0x00A8   (0x0010)  
	bool                                               bAllowOnNonOwningClients;                                   // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x00B9   (0x0007)  MISSED
	class APawn*                                       OwningPawn;                                                 // 0x00C0   (0x0008)  
	class AFortPlayerController*                       OwningController;                                           // 0x00C8   (0x0008)  
	unsigned char                                      UnknownData02_5[0x10];                                      // 0x00D0   (0x0010)  MISSED
	SDK_UNDEFINED(16,15493) /* FMulticastInlineDelegate */ __um(OnCursorModeChanged);                              // 0x00E0   (0x0010)  
	FGameplayTag                                       DefaultCursorModeTag;                                       // 0x00F0   (0x0004)  
	bool                                               bDefaultCursorModeAutoActivate;                             // 0x00F4   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x00F5   (0x0003)  MISSED
	SDK_UNDEFINED(80,15494) /* TMap<FGameplayTag, FSpecialEventCursorMode> */ __um(CursorModes);                   // 0x00F8   (0x0050)  
	TArray<FSpecialEventCursorStackEntry>              CursorStack;                                                // 0x0148   (0x0010)  
	FSpecialEventCursorStackEntry                      ReplicatedCursorStackEntry;                                 // 0x0158   (0x000C)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x0164   (0x0004)  MISSED
	class UClass*                                      InputHelperClass;                                           // 0x0168   (0x0008)  
	bool                                               bUseGamepadLookInput;                                       // 0x0170   (0x0001)  
	bool                                               bUseGamepadMoveInput;                                       // 0x0171   (0x0001)  
	bool                                               bUseGyroInput;                                              // 0x0172   (0x0001)  
	bool                                               bObeyInvertedPitchUserSetting;                              // 0x0173   (0x0001)  
	unsigned char                                      UnknownData05_5[0x4];                                       // 0x0174   (0x0004)  MISSED
	class UCommonInputSubsystem*                       CommonInputSubsystem;                                       // 0x0178   (0x0008)  
	class USpecialEventInputHelperComponent*           InputHelperComponent;                                       // 0x0180   (0x0008)  
	unsigned char                                      UnknownData06_5[0x40];                                      // 0x0188   (0x0040)  MISSED
	SDK_UNDEFINED(16,15495) /* FMulticastInlineDelegate */ __um(OnViewportLocationChanged);                        // 0x01C8   (0x0010)  
	FScalableFloat                                     NonOwningInterpSpeed;                                       // 0x01D8   (0x0028)  
	FScalableFloat                                     MinDeltaToSendWorldLocationToServer;                        // 0x0200   (0x0028)  
	unsigned char                                      UnknownData07_5[0x8];                                       // 0x0228   (0x0008)  MISSED
	FVector                                            ReplicatedWorldLocation;                                    // 0x0230   (0x0018)  
	unsigned char                                      UnknownData08_5[0x60];                                      // 0x0248   (0x0060)  MISSED
	TArray<class UUserWidget*>                         Widgets;                                                    // 0x02A8   (0x0010)  
	unsigned char                                      UnknownData09_5[0xF1];                                      // 0x02B8   (0x00F1)  MISSED
	bool                                               bAdditiveRotationAllowedByDefault;                          // 0x03A9   (0x0001)  
	unsigned char                                      UnknownData10_5[0x1];                                       // 0x03AA   (0x0001)  MISSED
	bool                                               bZoomAllowedByDefault;                                      // 0x03AB   (0x0001)  
	FName                                              ZoomActionName;                                             // 0x03AC   (0x0004)  
	unsigned char                                      UnknownData11_5[0x8];                                       // 0x03B0   (0x0008)  MISSED
	class UCameraComponent*                            AdditiveOffsetCameraComponent;                              // 0x03B8   (0x0008)  
	unsigned char                                      UnknownData12_6[0x8];                                       // 0x03C0   (0x0008)  MISSED


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.SetZoomAllowed
	// void SetZoomAllowed(bool bInZoomAllowed);                                                                             // [0xb7953bc] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.SetAllowOnNonOwningClients
	// void SetAllowOnNonOwningClients(bool bAllow);                                                                         // [0xb7944e8] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.SetAdditiveRotationAllowed
	// void SetAdditiveRotationAllowed(bool bInAdditiveRotationAllowed);                                                     // [0xb794468] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.ServerOnWorldLocationChanged
	// void ServerOnWorldLocationChanged(FVector WorldLocation);                                                             // [0xb794328] Final|Net|Native|Event|Private|NetServer|HasDefaults 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.PushCursor
	// void PushCursor(FGameplayTag& CursorModeTag, class UObject* InstigatingObject, bool bActivate);                       // [0xb793ce8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.PopCursor
	// void PopCursor(FGameplayTag& CursorModeTag, class UObject* InstigatingObject, bool bDeactivateIfStackEmpty);          // [0xb793b14] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.PopAllCursorsForObject
	// void PopAllCursorsForObject(class UObject* InstigatingObject, bool bDeactivateIfStackEmpty);                          // [0xb793a4c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.OnRep_ReplicatedWorldLocation
	// void OnRep_ReplicatedWorldLocation();                                                                                 // [0xb793768] Final|Native|Private 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.OnRep_ReplicatedCursorStackEntry
	// void OnRep_ReplicatedCursorStackEntry(FSpecialEventCursorStackEntry& OldCursorStackEntry);                            // [0xb7936cc] Final|Native|Private|HasOutParms 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.OnRep_bAllowOnNonOwningClients
	// void OnRep_bAllowOnNonOwningClients();                                                                                // [0xb793894] Final|Native|Private 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.OnLocallyControlledCursorVisibilityChanged
	// void OnLocallyControlledCursorVisibilityChanged(class USpecialEventCursorPawnComponent* CursorPawnComponent, FGameplayTag& CursorModeTag, bool bShouldBeVisible); // [0xb7932ec] Final|Native|Private|HasOutParms 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.OnInputMethodChanged
	// void OnInputMethodChanged(ECommonInputType InputType);                                                                // [0xb79326c] Final|Native|Private 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.OnHUDPostRender
	// void OnHUDPostRender(class AHUD* HUD, class UCanvas* Canvas);                                                         // [0x67b718c] Final|Native|Private 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.MoveInputUpdate
	// void MoveInputUpdate(FVector& InInputVector);                                                                         // [0xb792da8] Final|Native|Private|HasOutParms|HasDefaults 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.LookInputUpdate
	// void LookInputUpdate(FVector& InInputVector);                                                                         // [0xb792bf8] Final|Native|Private|HasOutParms|HasDefaults 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.IsZoomAllowed
	// bool IsZoomAllowed();                                                                                                 // [0x994edfc] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.IsLocallyControlled
	// bool IsLocallyControlled();                                                                                           // [0x9889e68] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.IsAdditiveRotationAllowed
	// bool IsAdditiveRotationAllowed();                                                                                     // [0xb792be0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.InputPressed
	// void InputPressed(FName& ActionName, bool bPressed);                                                                  // [0xb792abc] Final|Native|Private|HasOutParms 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GyroInputUpdate
	// void GyroInputUpdate(FVector& InInputVector);                                                                         // [0xb792888] Final|Native|Private|HasOutParms|HasDefaults 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetWorldLocationAndDirection
	// bool GetWorldLocationAndDirection(FVector& OutWorldLocation, FVector& OutWorldDirection);                             // [0xb79271c] Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetViewportSize
	// bool GetViewportSize(FVector2D& OutViewportSize);                                                                     // [0xb792688] Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetViewportLocation
	// bool GetViewportLocation(FVector2D& OutViewportLocation);                                                             // [0xb7925e8] Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetViewportCenter
	// bool GetViewportCenter(FVector2D& OutViewportCenter);                                                                 // [0xb792524] Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetSpecialEventCursorPawnComponent
	// class USpecialEventCursorPawnComponent* GetSpecialEventCursorPawnComponent(class APawn* Pawn, FGameplayTag& CursorModeTag, bool bMustBeActive); // [0xb791bc4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetNormalizedLocation
	// FVector2D GetNormalizedLocation();                                                                                    // [0xb791b90] Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetLocalController
	// class APlayerController* GetLocalController();                                                                        // [0xb791b6c] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetInputType
	// ECommonInputType GetInputType();                                                                                      // [0x7fef494] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetCursorModeTagsForWidget
	// FGameplayTagContainer GetCursorModeTagsForWidget(class UUserWidget* Widget);                                          // [0xb791164] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetCurrentWidget
	// class UUserWidget* GetCurrentWidget();                                                                                // [0xb79110c] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetCurrentHitResult
	// bool GetCurrentHitResult(FHitResult& OutHitResult);                                                                   // [0xb790ec4] Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetCurrentCursorModeTag
	// FGameplayTag GetCurrentCursorModeTag();                                                                               // [0x61ebdd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetCenteredWidgetLocation
	// FVector2D GetCenteredWidgetLocation(class UUserWidget* Widget, FVector2D& ViewportLocation);                          // [0xb790cf4] Final|RequiredAPI|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetCameraComponent
	// class UCameraComponent* GetCameraComponent();                                                                         // [0xb790cd0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.ConvertWorldToViewportLocation
	// bool ConvertWorldToViewportLocation(FVector2D& OutViewportLocation, FVector& WorldLocation);                          // [0xb78faa8] Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.ConvertWorldToNormalizedLocation
	// bool ConvertWorldToNormalizedLocation(FVector2D& OutNormalizedLocation, FVector& WorldLocation);                      // [0xb78f97c] Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.ConvertViewportToWorldLocationAndDirection
	// bool ConvertViewportToWorldLocationAndDirection(FVector& OutWorldLocation, FVector& OutWorldDirection, FVector2D& ViewportLocation); // [0xb78f7c8] Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.ConvertViewportToNormalizedLocation
	// bool ConvertViewportToNormalizedLocation(FVector2D& OutNormalizedLocation, FVector2D& ViewportLocation);              // [0xb78f6d8] Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.ConvertNormalizedToWorldLocationAndDirection
	// bool ConvertNormalizedToWorldLocationAndDirection(FVector& OutWorldLocation, FVector& OutWorldDirection, FVector2D& NormalizedLocation); // [0xb78f524] Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.ConvertNormalizedToViewportLocation
	// bool ConvertNormalizedToViewportLocation(FVector2D& OutViewportLocation, FVector2D& NormalizedLocation);              // [0xb78f434] Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.CanBeVisible
	// bool CanBeVisible();                                                                                                  // [0xb78f3c0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent
/// Size: 0x0098 (0x0000A0 - 0x000138)
class USpecialEventCursorWeaponComponent : public UFortWeaponComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00A0   (0x0008)  MISSED
	SDK_UNDEFINED(16,15496) /* FMulticastInlineDelegate */ __um(OnCursorPawnComponentSet);                         // 0x00A8   (0x0010)  
	class UClass*                                      CursorPawnComponentClass;                                   // 0x00B8   (0x0008)  
	FGameplayTag                                       CursorModeTag;                                              // 0x00C0   (0x0004)  
	bool                                               bAlignFXToCursor;                                           // 0x00C4   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00C5   (0x0003)  MISSED
	class AFortWeapon*                                 OwningWeapon;                                               // 0x00C8   (0x0008)  
	class AFortPlayerPawn*                             Pawn;                                                       // 0x00D0   (0x0008)  
	class USpecialEventCursorPawnComponent*            CursorPawnComponent;                                        // 0x00D8   (0x0008)  
	unsigned char                                      UnknownData02_6[0x58];                                      // 0x00E0   (0x0058)  MISSED


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.OnUnEquip
	// void OnUnEquip(class AFortWeapon* Weapon);                                                                            // [0xb7939cc] Final|Native|Private 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.OnRep_CursorPawnComponent
	// void OnRep_CursorPawnComponent();                                                                                     // [0xb79361c] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.OnPlayImpactFX
	// void OnPlayImpactFX(class AFortWeapon* Weapon, FHitResult& HitResult, class UFXSystemComponent* FXSystemComponent);   // [0xb793478] Final|Native|Private|HasOutParms 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.OnGetAimRotOverride
	// void OnGetAimRotOverride(class AFortWeapon* Weapon, EFortAbilityTargetingSource TargetingSource, FRotator& OutOverride, bool& bOutExecutionResult); // [0xb793108] Final|Native|Private|HasOutParms|HasDefaults 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.OnEquip
	// void OnEquip(class AFortWeapon* Weapon);                                                                              // [0xb793088] Final|Native|Private 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.OnBeamFired
	// void OnBeamFired(class AFortWeapon* Weapon, bool bUsePersistentBeam, class UFXSystemComponent* PSC, FVector& BeamOrigin, FVector& HitLocation); // [0xb792e6c] Final|Native|Private|HasOutParms|HasDefaults 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.GetSpecialEventCursorPawnComponentForWeapon
	// class USpecialEventCursorPawnComponent* GetSpecialEventCursorPawnComponentForWeapon(class AFortWeapon* Weapon);       // [0xb791dd8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.GetSpecialEventCursorPawnComponentForCurrentWeapon
	// class USpecialEventCursorPawnComponent* GetSpecialEventCursorPawnComponentForCurrentWeapon(class AFortPlayerPawn* Pawn); // [0xb791d48] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.GetCursorPawnComponent
	// class USpecialEventCursorPawnComponent* GetCursorPawnComponent();                                                     // [0x90083a4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.GetCurrentSpecialEventCursorWeaponComponent
	// class USpecialEventCursorWeaponComponent* GetCurrentSpecialEventCursorWeaponComponent(class AFortPlayerPawn* Pawn);   // [0xb79108c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.GetCurrentHitResult
	// bool GetCurrentHitResult(FHitResult& OutHitResult);                                                                   // [0xb790fa8] Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable|Const 
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialEventGameplayGlobals
/// Size: 0x0000 (0x000028 - 0x000028)
class USpecialEventGameplayGlobals : public UObject
{ 
public:
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USpecialEventGameplayLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.StreamOutAllBuildingFoundations
	// void StreamOutAllBuildingFoundations(class UObject* WorldContextObject);                                              // [0xb79598c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.SetNextLoadingScreen
	// void SetNextLoadingScreen(class UObject* WorldContextObject, class UAthenaLoadingScreenItemDefinition* LoadingScreenDefinition, bool bCanShowLoadingBar); // [0xb794f30] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.SetLODOnLandscapProxies
	// void SetLODOnLandscapProxies(class UObject* WorldContextObject, bool bForced, int32_t InLODValue);                    // [0xb794dd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.HideSkydivingShadowProxy
	// void HideSkydivingShadowProxy(class UObject* WorldContextObject);                                                     // [0xb792a4c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.GetSpecialEventScript
	// class ASpecialEventScript* GetSpecialEventScript(class UObject* WorldContextObject);                                  // [0xb7920e8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.GetSpecialEventPlayerDisplayName
	// FString GetSpecialEventPlayerDisplayName(class AFortPlayerControllerAthena* LocalController, class AFortPlayerStateAthena* PlayerState); // [0xb792010] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.GetSpecialEventMutator
	// class AFortAthenaMutator_SpecialEvent* GetSpecialEventMutator(class UObject* WorldContextObject);                     // [0xb791f90] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.GetHasInfiniteSafeZonePhase
	// bool GetHasInfiniteSafeZonePhase(class UObject* WorldContextObject);                                                  // [0xb791908] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.ForceUpdateGrass
	// void ForceUpdateGrass(class UObject* WorldContextObject, FVector Location);                                           // [0xb790b30] Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.ForceDestroyComponents
	// void ForceDestroyComponents(TArray<UActorComponent*>& Components, bool bPromoteChildren, FString LogContext);         // [0xb790264] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.FindSpecialEventComponent
	// class UFortControllerComponent_SpecialEvent* FindSpecialEventComponent(class AController* Controller);                // [0xb7901b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.FindGameplayCinematicComponent
	// class UFortControllerComponent_GameplayCinematic* FindGameplayCinematicComponent(class AController* Controller);      // [0xb78ffd8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.DetachPawnFromComponent
	// bool DetachPawnFromComponent(class AFortPawn* Pawn, class USceneComponent* Component, EDetachmentRule LocationRule, EDetachmentRule RotationRule, EDetachmentRule ScaleRule); // [0xb78fe5c] Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.DetachPawn
	// bool DetachPawn(class AFortPawn* Pawn, EDetachmentRule LocationRule, EDetachmentRule RotationRule, EDetachmentRule ScaleRule); // [0xb78fd24] Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.CreateSpecialEventPlayerEliminationWorldMarker
	// void CreateSpecialEventPlayerEliminationWorldMarker(class AFortPlayerControllerAthena* LocalController, class AFortPlayerStateAthena* VictimPlayerState, FVector& DeathLocation); // [0xb78fbd4] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.AttachPawnToComponent
	// bool AttachPawnToComponent(class AFortPawn* Pawn, class USceneComponent* Component, FName SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies); // [0xb78ef44] Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.AddSpecialEventRecentElimination
	// void AddSpecialEventRecentElimination(FVector& Location, class AFortPlayerStateAthena* PlayerState);                  // [0xb78e848] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.AddSpecialEventKillFeedEntry
	// void AddSpecialEventKillFeedEntry(class UObject* WorldContextObject, class AFortPlayerStateAthena* VictimPlayerState, class AFortPlayerStateAthena* KillerPlayerState, FText NonPlayerVictimName, FText NonPlayerKillerName, FGameplayTag& DeathCauseTag, EDeathCauseReason DeathCauseReason, float Distance); // [0xb78e4ec] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SpecialEventGameplayRuntime.FortAsyncAction_GameplayCinematicComponentReady
/// Size: 0x0018 (0x000030 - 0x000048)
class UFortAsyncAction_GameplayCinematicComponentReady : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,15497) /* FMulticastInlineDelegate */ __um(OnReady);                                          // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0040   (0x0008)  MISSED


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.FortAsyncAction_GameplayCinematicComponentReady.FindGameplayCinematicComponentAsync
	// class UFortAsyncAction_GameplayCinematicComponentReady* FindGameplayCinematicComponentAsync(class AController* Conroller); // [0xb790064] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent
/// Size: 0x0048 (0x0000A0 - 0x0000E8)
class USpecialEventGameUserSettingsControllerComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,15498) /* FMulticastInlineDelegate */ __um(OnLoaded);                                         // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,15499) /* FString */              __um(Version);                                              // 0x00B0   (0x0010)  
	float                                              MinTimeBetweenSaves;                                        // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x24];                                      // 0x00C4   (0x0024)  MISSED


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.SpecialEventGameUserSettings_ToggleDebug
	// void SpecialEventGameUserSettings_ToggleDebug();                                                                      // [0x3097b14] Final|BlueprintCosmetic|Exec|Native|Public 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.SpecialEventGameUserSettings_SetData
	// void SpecialEventGameUserSettings_SetData(FString Data);                                                              // [0x6650f60] Final|BlueprintCosmetic|Exec|Native|Public 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.SpecialEventGameUserSettings_LogData
	// void SpecialEventGameUserSettings_LogData();                                                                          // [0x3097b14] Final|BlueprintCosmetic|Exec|Native|Public|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.SpecialEventGameUserSettings_ClearData
	// void SpecialEventGameUserSettings_ClearData();                                                                        // [0xb795868] Final|BlueprintCosmetic|Exec|Native|Public 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.SetSavingBlocked
	// void SetSavingBlocked(bool bBlocked);                                                                                 // [0xb79533c] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.SetData
	// void SetData(FString Data, bool bAllowSave, bool bSaveNow);                                                           // [0xb794568] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.ParseLoadedData
	// void ParseLoadedData(FString Data);                                                                                   // [0x3d1d968] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.GetSpecialEventGameUserSettingsControllerComponent
	// class USpecialEventGameUserSettingsControllerComponent* GetSpecialEventGameUserSettingsControllerComponent(class UObject* WorldContextObject); // [0xb791e58] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.GetData
	// void GetData(ESpecialEventGameUserSettingsResult& OutResult, FString& OutData);                                       // [0xb79120c] Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable|Const 
};

/// Class /Script/SpecialEventGameplayRuntime.FortAsyncAction_SpecialEventGameUserSettingsReady
/// Size: 0x0018 (0x000030 - 0x000048)
class UFortAsyncAction_SpecialEventGameUserSettingsReady : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,15500) /* FMulticastInlineDelegate */ __um(OnReady);                                          // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0040   (0x0008)  MISSED


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.FortAsyncAction_SpecialEventGameUserSettingsReady.SpecialEventGameUserSettingsReadyAsync
	// class UFortAsyncAction_SpecialEventGameUserSettingsReady* SpecialEventGameUserSettingsReadyAsync(class UObject* WorldContextObject); // [0xb795790] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventPhaseComponentNetModeInfo
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSpecialEventPhaseComponentNetModeInfo
{ 
	ESpecialEventPhaseComponentNetModeType             NetModeType;                                                // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	class UClass*                                      ComponentClass;                                             // 0x0008   (0x0008)  
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialEventPhase
/// Size: 0x00C8 (0x000290 - 0x000358)
class ASpecialEventPhase : public AInfo
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x0290   (0x0018)  MISSED
	FGameplayTag                                       PhaseTag;                                                   // 0x02A8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x02AC   (0x0004)  MISSED
	SDK_UNDEFINED(32,15501) /* TWeakObjectPtr<ULevelSequence*> */ __um(LevelSequence);                             // 0x02B0   (0x0020)  
	float                                              LevelSequenceTime;                                          // 0x02D0   (0x0004)  
	bool                                               bApplyGameplayEffects;                                      // 0x02D4   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x02D5   (0x0003)  MISSED
	TArray<class UClass*>                              GameplayEffectsToApply;                                     // 0x02D8   (0x0010)  
	TArray<FSpecialEventPhaseComponentNetModeInfo>     ControllerComponentsToApplyInfoList;                        // 0x02E8   (0x0010)  
	TArray<FSpecialEventPhaseComponentNetModeInfo>     PawnComponentsToApplyInfoList;                              // 0x02F8   (0x0010)  
	class UClass*                                      CameraModifierToApply;                                      // 0x0308   (0x0008)  
	bool                                               bRemoveModifierOnPhaseDeactivation;                         // 0x0310   (0x0001)  
	bool                                               bRemoveGameplayEffects;                                     // 0x0311   (0x0001)  
	unsigned char                                      UnknownData03_5[0x6];                                       // 0x0312   (0x0006)  MISSED
	TArray<class UClass*>                              GameplayEffectsToRemove;                                    // 0x0318   (0x0010)  
	TArray<FSpecialEventPhaseComponentNetModeInfo>     ControllerComponentsToRemoveInfoList;                       // 0x0328   (0x0010)  
	TArray<FSpecialEventPhaseComponentNetModeInfo>     PawnComponentsToRemoveInfoList;                             // 0x0338   (0x0010)  
	class UCameraModifier*                             AppliedCameraModifier;                                      // 0x0348   (0x0008)  
	ESpecialEventPhaseState                            PhaseState;                                                 // 0x0350   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x0351   (0x0007)  MISSED


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventPhase.SetHUDElementVisibility
	// void SetHUDElementVisibility(FGameplayTagContainer& HUDElementTags, bool bHideElements);                              // [0xb794c8c] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventPhase.PrePhaseActivation_Server
	// void PrePhaseActivation_Server();                                                                                     // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventPhase.OnRep_PhaseState
	// void OnRep_PhaseState();                                                                                              // [0xb793688] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventPhase.OnPhaseFinished
	// void OnPhaseFinished();                                                                                               // [0xb793464] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventPhase.OnPhaseDeactivation_Server
	// void OnPhaseDeactivation_Server();                                                                                    // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventPhase.OnPhaseDeactivation_Client
	// void OnPhaseDeactivation_Client();                                                                                    // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventPhase.OnPhaseActivation_Server
	// void OnPhaseActivation_Server();                                                                                      // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventPhase.OnPhaseActivation_Client
	// void OnPhaseActivation_Client();                                                                                      // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventPhase.GetPhaseTag
	// FGameplayTag GetPhaseTag();                                                                                           // [0xb791bac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventPhase.DebugActivatePhase
	// void DebugActivatePhase();                                                                                            // [0x3097b14] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialEventPlayerMannequin
/// Size: 0x0008 (0x000630 - 0x000638)
class ASpecialEventPlayerMannequin : public AFortPlayerMannequin
{ 
public:
	bool                                               bDisableCollisionOnBeginPlay : 1;                           // 0x0630:0 (0x0001)  
	bool                                               bDisableComponentsTickOnServer : 1;                         // 0x0630:1 (0x0001)  
	bool                                               bRegisterWithSpecialEventMutatorOnClient : 1;               // 0x0630:2 (0x0001)  
	bool                                               bDestroyUnusedSkeletalMeshComponentsOnClientFirstInitialization : 1; // 0x0630:3 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0631   (0x0007)  MISSED


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventPlayerMannequin.RegisterWithSpecialEventMutator
	// void RegisterWithSpecialEventMutator();                                                                               // [0xb793ebc] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventPlayerMannequin.HandleOnMutatorAdded
	// void HandleOnMutatorAdded(class AFortGameplayMutator* NewMutator);                                                    // [0xb79294c] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventPlayerMannequin.DestroyUnusedSkeletalMeshComponents
	// void DestroyUnusedSkeletalMeshComponents();                                                                           // [0xb78fd10] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventRewindComponentStateData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FSpecialEventRewindComponentStateData
{ 
	ESpecialEventRewindComponentState                  State;                                                      // 0x0000   (0x0001)  
	char                                               StateChangedCount;                                          // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              ServerWorldTime;                                            // 0x0004   (0x0004)  
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialEventRewindComponent
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class USpecialEventRewindComponent : public UActorComponent
{ 
public:
	float                                              MaxRecordingDuration;                                       // 0x00A0   (0x0004)  
	float                                              LocalRecordingFPS;                                          // 0x00A4   (0x0004)  
	float                                              ReplicatedRecordingFPS;                                     // 0x00A8   (0x0004)  
	bool                                               bAutoStartRecording;                                        // 0x00AC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00AD   (0x0003)  MISSED
	float                                              RewindLerpTime;                                             // 0x00B0   (0x0004)  
	float                                              DefaultRewindDuration;                                      // 0x00B4   (0x0004)  
	float                                              DefaultRewindPlaybackSpeed;                                 // 0x00B8   (0x0004)  
	FSpecialEventRewindComponentStateData              StateData;                                                  // 0x00BC   (0x0008)  
	float                                              ReplicatedRewindDuration;                                   // 0x00C4   (0x0004)  


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventRewindComponent.TryStartRewinding
	// bool TryStartRewinding(float duration, float PlaybackSpeed);                                                          // [0xb7959fc] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventRewindComponent.OnRep_StateData
	// void OnRep_StateData(FSpecialEventRewindComponentStateData& OldStateData);                                            // [0xb793800] Final|Native|Private|HasOutParms 
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventRewindComponentRecording
/// Size: 0x0020 (0x000000 - 0x000020)
struct FSpecialEventRewindComponentRecording
{ 
	class USpecialEventRewindComponent*                RewindComponent;                                            // 0x0008   (0x0008)  
	int32_t                                            StartFrameIndex;                                            // 0x0010   (0x0004)  
	int32_t                                            EndFrameIndex;                                              // 0x0014   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0018   (0x0008)  MISSED
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventRewindComponentRecording_PlayerPawn
/// Size: 0x0000 (0x000020 - 0x000020)
struct FSpecialEventRewindComponentRecording_PlayerPawn : FSpecialEventRewindComponentRecording
{ 
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventRewindComponentFrame
/// Size: 0x0004 (0x00000C - 0x000010)
struct FSpecialEventRewindComponentFrame : FFastArraySerializerItem
{ 
	float                                              ServerWorldTime;                                            // 0x000C   (0x0004)  
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventRewindComponentFrame_PlayerPawn
/// Size: 0x0020 (0x000010 - 0x000030)
struct FSpecialEventRewindComponentFrame_PlayerPawn : FSpecialEventRewindComponentFrame
{ 
	FVector_NetQuantize                                Location;                                                   // 0x0010   (0x0018)  
	char                                               CompressedYaw;                                              // 0x0028   (0x0001)  
	char                                               CompressedControlRotationPitch;                             // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x002A   (0x0006)  MISSED
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventRewindComponentRecordingFastArray_PlayerPawn
/// Size: 0x0010 (0x000108 - 0x000118)
struct FSpecialEventRewindComponentRecordingFastArray_PlayerPawn : FFastArraySerializer
{ 
	TArray<FSpecialEventRewindComponentFrame_PlayerPawn> Frames;                                                   // 0x0108   (0x0010)  
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialEventRewindComponent_PlayerPawn
/// Size: 0x02C0 (0x0000C8 - 0x000388)
class USpecialEventRewindComponent_PlayerPawn : public USpecialEventRewindComponent
{ 
public:
	bool                                               bStartServerRecordingOnLastGroundFrame;                     // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x27];                                      // 0x00C9   (0x0027)  MISSED
	FSpecialEventRewindComponentRecording_PlayerPawn   ReplicatedRecording;                                        // 0x00F0   (0x0020)  
	unsigned char                                      UnknownData01_5[0x118];                                     // 0x0110   (0x0118)  MISSED
	FSpecialEventRewindComponentRecordingFastArray_PlayerPawn ReplicatedRecordingFastArray;                        // 0x0228   (0x0118)  
	unsigned char                                      UnknownData02_6[0x48];                                      // 0x0340   (0x0048)  MISSED


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventRewindComponent_PlayerPawn.OnServerLanded
	// void OnServerLanded(FHitResult& Hit);                                                                                 // [0xb7938f8] Final|Native|Private|HasOutParms 
};

/// Struct /Script/SpecialEventGameplayRuntime.PhaseLevelEntryBase
/// Size: 0x0060 (0x000000 - 0x000060)
struct FPhaseLevelEntryBase
{ 
	bool                                               bLoadLevelOnScriptStart;                                    // 0x0008   (0x0001)  
	bool                                               bLevelStartsVisible;                                        // 0x0009   (0x0001)  
	bool                                               bUnloadLevelOnPhaseEnd;                                     // 0x000A   (0x0001)  
	bool                                               bMakeVisibleOnPhaseStart;                                   // 0x000B   (0x0001)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FGameplayTagContainer                              MakeVisibleAtPhaseTags;                                     // 0x0010   (0x0020)  
	FGameplayTagContainer                              UnloadLevelAtPhaseTags;                                     // 0x0030   (0x0020)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0050   (0x0010)  MISSED
};

/// Struct /Script/SpecialEventGameplayRuntime.PhaseLevelEntry
/// Size: 0x0070 (0x000060 - 0x0000D0)
struct FPhaseLevelEntry : FPhaseLevelEntryBase
{ 
	SDK_UNDEFINED(32,15502) /* TWeakObjectPtr<UWorld*> */ __um(LevelToLoad);                                       // 0x0060   (0x0020)  
	SDK_UNDEFINED(16,15503) /* FString */              __um(LevelName);                                            // 0x0080   (0x0010)  
	bool                                               bExcludeFromServerPreload;                                  // 0x0090   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0091   (0x0007)  MISSED
	FVector                                            Location;                                                   // 0x0098   (0x0018)  
	FRotator                                           Rotation;                                                   // 0x00B0   (0x0018)  
	class ULevelStreamingDynamic*                      LevelInstance;                                              // 0x00C8   (0x0008)  
};

/// Struct /Script/SpecialEventGameplayRuntime.PhaseDataLayerEntry
/// Size: 0x0020 (0x000060 - 0x000080)
struct FPhaseDataLayerEntry : FPhaseLevelEntryBase
{ 
	class UDataLayerAsset*                             DataLayerAsset;                                             // 0x0060   (0x0008)  
	bool                                               bIsRecursive;                                               // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_6[0x17];                                      // 0x0069   (0x0017)  MISSED
};

/// Struct /Script/SpecialEventGameplayRuntime.PhaseInfo
/// Size: 0x0060 (0x000000 - 0x000060)
struct FPhaseInfo
{ 
	FGameplayTag                                       PhaseTag;                                                   // 0x0000   (0x0004)  
	float                                              PhaseDuration;                                              // 0x0004   (0x0004)  
	bool                                               bSetRelevancyMode;                                          // 0x0008   (0x0001)  
	ESpecialRelevancyMode                              RelevancyMode;                                              // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x000A   (0x0002)  MISSED
	int32_t                                            NumOfSquadsInRelevancyGroup;                                // 0x000C   (0x0004)  
	FGameplayTagContainer                              RequireLevelsFromPhaseTags;                                 // 0x0010   (0x0020)  
	bool                                               bStartNextPhaseOnPhaseFinished;                             // 0x0030   (0x0001)  
	bool                                               bGarbageCollectAtPhaseStartOnServer;                        // 0x0031   (0x0001)  
	bool                                               bGarbageCollectAtPhaseStartOnClient;                        // 0x0032   (0x0001)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x0033   (0x0005)  MISSED
	class ASpecialEventPhase*                          PhaseActor;                                                 // 0x0038   (0x0008)  
	TArray<FPhaseLevelEntry>                           Levels;                                                     // 0x0040   (0x0010)  
	TArray<FPhaseDataLayerEntry>                       DataLayers;                                                 // 0x0050   (0x0010)  
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialEventScript
/// Size: 0x0078 (0x000290 - 0x000308)
class ASpecialEventScript : public AInfo
{ 
public:
	SDK_UNDEFINED(16,15504) /* FMulticastInlineDelegate */ __um(OnSpecialEventPhaseActivated);                     // 0x0290   (0x0010)  
	SDK_UNDEFINED(16,15505) /* FMulticastInlineDelegate */ __um(OnSpecialEventPhaseDeactivated);                   // 0x02A0   (0x0010)  
	TArray<FPhaseInfo>                                 PhaseInfoArray;                                             // 0x02B0   (0x0010)  
	float                                              DropDeadWindowSizeInSeconds;                                // 0x02C0   (0x0004)  
	float                                              DelayAfterConentLoad;                                       // 0x02C4   (0x0004)  
	float                                              DelayAfterWarmup;                                           // 0x02C8   (0x0004)  
	float                                              ForceReturnToMainMenuTime;                                  // 0x02CC   (0x0004)  
	float                                              ForceReturnToMainMenuTimeRandomness;                        // 0x02D0   (0x0004)  
	float                                              MinDelayReturnToMainMenu;                                   // 0x02D4   (0x0004)  
	float                                              MaxDelayReturnToMainMenu;                                   // 0x02D8   (0x0004)  
	bool                                               bPreloadAllLevelsOnServer;                                  // 0x02DC   (0x0001)  
	bool                                               bAllowGarbageCollectionAfterUnload;                         // 0x02DD   (0x0001)  
	bool                                               bFullPurgeGC;                                               // 0x02DE   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x02DF   (0x0001)  MISSED
	int32_t                                            ReplicatedActivePhaseIndex;                                 // 0x02E0   (0x0004)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x02E4   (0x000C)  MISSED
	class UMeshNetworkComponent*                       MeshNetworkComponent;                                       // 0x02F0   (0x0008)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x02F8   (0x0010)  MISSED


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScript.StartEventAtIndex
	// void StartEventAtIndex(int32_t InStartingIndex, float SequenceTimeOffset);                                            // [0xb7958a0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScript.SetLocalPlayersSignificantForSpecialEventSequence
	// void SetLocalPlayersSignificantForSpecialEventSequence(bool bIsSignificant);                                          // [0xb794ec8] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScript.OnRep_ReplicatedActivePhaseIndex
	// void OnRep_ReplicatedActivePhaseIndex();                                                                              // [0xb7936b0] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScript.GetActivePhaseIndex
	// int32_t GetActivePhaseIndex();                                                                                        // [0xb790cb8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScript.BP_OnScriptReady
	// void BP_OnScriptReady();                                                                                              // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScript.BP_OnScriptFinished
	// void BP_OnScriptFinished();                                                                                           // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScript.AttemptStartNextPhase
	// void AttemptStartNextPhase(FGameplayTag CurrentPhaseTag);                                                             // [0xb78f284] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScript.AttemptFinishPhase
	// void AttemptFinishPhase(FGameplayTag PhaseTag);                                                                       // [0xb78f148] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialEventScriptMeshActor
/// Size: 0x0030 (0x000290 - 0x0002C0)
class ASpecialEventScriptMeshActor : public AInfo
{ 
public:
	FDateTime                                          RootStartTime;                                              // 0x0290   (0x0008)  
	SDK_UNDEFINED(16,15506) /* FString */              __um(CalendarEventName);                                    // 0x0298   (0x0010)  
	float                                              CalenderEventOffsetInSeconds;                               // 0x02A8   (0x0004)  
	float                                              EncryptionKeyDeliveryTimeOffset;                            // 0x02AC   (0x0004)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x02B0   (0x0008)  MISSED
	class UMeshNetworkComponent*                       MeshNetworkComponent;                                       // 0x02B8   (0x0008)  


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.OnRep_RootStartTime
	// void OnRep_RootStartTime();                                                                                           // [0xb793780] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.MeshRootStartEvent
	// void MeshRootStartEvent();                                                                                            // [0xb792d94] Final|Exec|Native|Public 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.MeshRootStartCalendarTimerOnly
	// void MeshRootStartCalendarTimerOnly();                                                                                // [0xb792d0c] Final|Exec|Native|Public 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.MeshRootStartCalendarTimer
	// void MeshRootStartCalendarTimer();                                                                                    // [0xb792cf8] Final|Exec|Native|Public 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.MeshRootResetEvent
	// void MeshRootResetEvent();                                                                                            // [0xb792ce4] Final|Exec|Native|Public 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.MeshRootLogCalendarTimer
	// void MeshRootLogCalendarTimer();                                                                                      // [0xb792cd0] Final|Exec|Native|Public 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.MeshRootClearCalendarTimer
	// void MeshRootClearCalendarTimer();                                                                                    // [0xb792cbc] Final|Exec|Native|Public 
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventStatDefinition
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSpecialEventStatDefinition
{ 
	FGameplayTag                                       LookupTag;                                                  // 0x0000   (0x0004)  
	float                                              Min;                                                        // 0x0004   (0x0004)  
	float                                              Max;                                                        // 0x0008   (0x0004)  
	float                                              DefaultValue;                                               // 0x000C   (0x0004)  
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventStatArrayEntry
/// Size: 0x0034 (0x00000C - 0x000040)
struct FSpecialEventStatArrayEntry : FFastArraySerializerItem
{ 
	unsigned char                                      UnknownData00_3[0x4];                                       // 0x000C   (0x0004)  MISSED
	class USpecialEventStatComponent*                  StatComponent;                                              // 0x0010   (0x0008)  
	class AActor*                                      Owner;                                                      // 0x0018   (0x0008)  
	int32_t                                            StatDefinitionIndex;                                        // 0x0020   (0x0004)  
	FSpecialEventStatDefinition                        StatDefinitionCopy;                                         // 0x0024   (0x0010)  
	float                                              Value;                                                      // 0x0034   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventStatArray
/// Size: 0x0018 (0x000108 - 0x000120)
struct FSpecialEventStatArray : FFastArraySerializer
{ 
	TArray<FSpecialEventStatArrayEntry>                Stats;                                                      // 0x0108   (0x0010)  
	class USpecialEventStatComponent*                  StatComponent;                                              // 0x0118   (0x0008)  
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialEventStatComponent
/// Size: 0x0140 (0x0000A0 - 0x0001E0)
class USpecialEventStatComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,15507) /* FMulticastInlineDelegate */ __um(OnValueChangedDelegate);                           // 0x00A0   (0x0010)  
	TArray<FSpecialEventStatDefinition>                StatDefinitions;                                            // 0x00B0   (0x0010)  
	FSpecialEventStatArray                             StatFastArray;                                              // 0x00C0   (0x0120)  


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventStatComponent.GetStat
	// FSpecialEventStatArrayEntry GetStat(bool& bOutValid, FGameplayTag LookupTag);                                         // [0xb79237c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventStatComponent.GetSpecialEventStat
	// FSpecialEventStatArrayEntry GetSpecialEventStat(bool& bOutValid, class AActor* Actor, FGameplayTag LookupTag);        // [0xb792168] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventStatComponent.AdjustStat
	// bool AdjustStat(FGameplayTag LookupTag, float Adjustment, bool bLogError);                                            // [0xb78ec1c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventStatComponent.AdjustSpecialEventStat
	// void AdjustSpecialEventStat(class AActor* Actor, FGameplayTag LookupTag, float Adjustment);                           // [0xb78e9c8] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SpecialEventGameplayRuntime.DamageRecordEntry
/// Size: 0x0120 (0x000028 - 0x000148)
class UDamageRecordEntry : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	float                                              DamageTotal;                                                // 0x0028   (0x0004)  
	float                                              EndReplicationTime;                                         // 0x002C   (0x0004)  
	FGameplayTagContainer                              DamageTags;                                                 // 0x0030   (0x0020)  
	FGameplayEffectContextHandle                       EffectContext;                                              // 0x0050   (0x0018)  
	FGameplayCueParameters                             GameplayCueParams;                                          // 0x0068   (0x00D0)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0138   (0x0010)  MISSED


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.DamageRecordEntry.OnRep_DamageTotal
	// void OnRep_DamageTotal();                                                                                             // [0xb793630] Final|Native|Public  
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent
/// Size: 0x0068 (0x0000A0 - 0x000108)
class USpecialRelevancyHealthComponent : public USpecialRelevancyComponentBase
{ 
public:
	FScalableFloat                                     RelevancyDeathTimeLength;                                   // 0x00A0   (0x0028)  
	bool                                               bSetLifespanOnLastRelevancyDeath;                           // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00C9   (0x0003)  MISSED
	float                                              OwnerMaxHealthCached;                                       // 0x00CC   (0x0004)  
	TArray<class UDamageRecordEntry*>                  ReplicatedDamageRecords;                                    // 0x00D0   (0x0010)  
	SDK_UNDEFINED(16,15508) /* FMulticastInlineDelegate */ __um(OnSpecialRelevancyDeath);                          // 0x00E0   (0x0010)  
	SDK_UNDEFINED(16,15509) /* FMulticastInlineDelegate */ __um(OnSpecialRelevancyDamage);                         // 0x00F0   (0x0010)  
	class AFortAthenaMutator_SpecialRelevancy*         CachedMutator;                                              // 0x0100   (0x0008)  


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.OnKilled
	// void OnKilled(class AFortPlayerState* KillingPlayerState, int32_t RelevancyGroupIndex);                               // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.OnDamaged
	// void OnDamaged(class AFortPlayerState* DamagingPlayerState, int32_t RelevancyGroupIndex, float DealtDamage, float ActualDealtDamage, float TotalDamage, float DealtDamagePercent, float ActualDealtDamagePercent, float TotalDamagePercent, float MaxHealth, bool bKilled); // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.GetHealthPercentFromRelevancyIndex
	// float GetHealthPercentFromRelevancyIndex(int32_t Index);                                                              // [0xb791adc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.GetHealthPercent
	// float GetHealthPercent(class AActor* RelevancyActor);                                                                 // [0xb791994] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.GetHealthFromRelevancyIndex
	// float GetHealthFromRelevancyIndex(int32_t Index);                                                                     // [0xb791a4c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.GetHealth
	// float GetHealth(class AActor* RelevancyActor);                                                                        // [0xb791994] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.ClientGetHealthPercent
	// float ClientGetHealthPercent();                                                                                       // [0xb78f40c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.ClientGetHealth
	// float ClientGetHealth();                                                                                              // [0xb78f3e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialClientEvent
/// Size: 0x0018 (0x000000 - 0x000018)
struct FSpecialClientEvent
{ 
	class AFortPlayerControllerAthena*                 PlayerController;                                           // 0x0000   (0x0008)  
	float                                              TimeSeconds;                                                // 0x0008   (0x0004)  
	FGameplayTag                                       EventTag;                                                   // 0x000C   (0x0004)  
	int32_t                                            Count;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventMathEaseData
/// Size: 0x000C (0x000000 - 0x00000C)
struct FSpecialEventMathEaseData
{ 
	SDK_UNDEFINED(1,15510) /* TEnumAsByte<EEasingFunc> */ __um(EasingFunc);                                        // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              BlendExp;                                                   // 0x0004   (0x0004)  
	int32_t                                            Steps;                                                      // 0x0008   (0x0004)  
};

/// Struct /Script/SpecialEventGameplayRuntime.FakeKillRelevancyBucket
/// Size: 0x0010 (0x000000 - 0x000010)
struct FFakeKillRelevancyBucket
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/SpecialEventGameplayRuntime.FakeKillRelevancySupergroup
/// Size: 0x0020 (0x000000 - 0x000020)
struct FFakeKillRelevancySupergroup
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Struct /Script/SpecialEventGameplayRuntime.FakeKillRelevancyTestParameters
/// Size: 0x0038 (0x000000 - 0x000038)
struct FFakeKillRelevancyTestParameters
{ 
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x0000   (0x0038)  MISSED
};

/// Struct /Script/SpecialEventGameplayRuntime.BuffetBubblesDebugData
/// Size: 0x00F0 (0x000000 - 0x0000F0)
struct FBuffetBubblesDebugData
{ 
	unsigned char                                      UnknownData00_2[0xF0];                                      // 0x0000   (0x00F0)  MISSED
};

/// Struct /Script/SpecialEventGameplayRuntime.CustomTickComonentQualitySettings
/// Size: 0x0014 (0x000000 - 0x000014)
struct FCustomTickComonentQualitySettings
{ 
	int32_t                                            NumFramesToSkipBetweenEvaluations;                          // 0x0000   (0x0004)  
	int32_t                                            MinFramesToSkipBetweenCustomTicks;                          // 0x0004   (0x0004)  
	int32_t                                            MaxFramesToSkipBetweenCustomTicks;                          // 0x0008   (0x0004)  
	float                                              InnerDistance;                                              // 0x000C   (0x0004)  
	float                                              OuterDistance;                                              // 0x0010   (0x0004)  
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventCursorMode
/// Size: 0x02E8 (0x000000 - 0x0002E8)
struct FSpecialEventCursorMode
{ 
	class UClass*                                      WidgetClass;                                                // 0x0000   (0x0008)  
	bool                                               bAllowDebugCursorDrawing;                                   // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	FSpecialEventMathEaseData                          GamepadMoveEaseData;                                        // 0x000C   (0x000C)  
	FScalableFloat                                     GamepadMoveSpeed;                                           // 0x0018   (0x0028)  
	FSpecialEventMathEaseData                          TouchMoveEaseData;                                          // 0x0040   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	FScalableFloat                                     TouchMoveSpeed;                                             // 0x0050   (0x0028)  
	float                                              TouchDeadzoneTreshold;                                      // 0x0078   (0x0004)  
	float                                              TouchAttenuator;                                            // 0x007C   (0x0004)  
	FScalableFloat                                     MinCursorPercentForAdditiveRotationPitch;                   // 0x0080   (0x0028)  
	FScalableFloat                                     MinCursorPercentForAdditiveRotationYaw;                     // 0x00A8   (0x0028)  
	FScalableFloat                                     MaxAdditiveRotationPitch;                                   // 0x00D0   (0x0028)  
	FScalableFloat                                     MaxAdditiveRotationYaw;                                     // 0x00F8   (0x0028)  
	FScalableFloat                                     AdditiveRotationInterpSpeed;                                // 0x0120   (0x0028)  
	FScalableFloat                                     ZoomInInterpSpeed;                                          // 0x0148   (0x0028)  
	FScalableFloat                                     ZoomOutInterpSpeed;                                         // 0x0170   (0x0028)  
	FScalableFloat                                     ZoomAdditiveFOV;                                            // 0x0198   (0x0028)  
	FScalableFloat                                     GamepadZoomMoveSpeed;                                       // 0x01C0   (0x0028)  
	FScalableFloat                                     TouchZoomMoveSpeed;                                         // 0x01E8   (0x0028)  
	bool                                               bAllowTrace;                                                // 0x0210   (0x0001)  
	SDK_UNDEFINED(1,15511) /* TEnumAsByte<ECollisionChannel> */ __um(TraceChannel);                                // 0x0211   (0x0001)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x0212   (0x0006)  MISSED
	FScalableFloat                                     SweepRadius;                                                // 0x0218   (0x0028)  
	FScalableFloat                                     TraceDistance;                                              // 0x0240   (0x0028)  
	FScalableFloat                                     bTraceComplex;                                              // 0x0268   (0x0028)  
	FScalableFloat                                     RecenterAfterNoInputDelay;                                  // 0x0290   (0x0028)  
	FScalableFloat                                     RecenterInterpSpeed;                                        // 0x02B8   (0x0028)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x02E0   (0x0008)  MISSED
};

