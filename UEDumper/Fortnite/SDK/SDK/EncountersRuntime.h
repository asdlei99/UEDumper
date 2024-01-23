
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: DataRegistry
/// dependency: Engine
/// dependency: FortniteAI
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayStateTreeModule
/// dependency: GameplayTags
/// dependency: LagerRuntime
/// dependency: McpProfileSysCore
/// dependency: ModularGameplay
/// dependency: PlayspaceSystem
/// dependency: StateTreeModule
/// dependency: StructUtils
/// dependency: WorldConditions

/// Enum /Script/EncountersRuntime.EEncounterMobSpawnType
/// Size: 0x03
enum class EEncounterMobSpawnType : uint32_t
{
	EEncounterMobSpawnType__VolumeBased                                              = 0,
	EEncounterMobSpawnType__StaticPointBased                                         = 1,
	EEncounterMobSpawnType__EEncounterMobSpawnType_MAX                               = 2
};

/// Enum /Script/EncountersRuntime.EAlertLevelComparisonOperator
/// Size: 0x07
enum class EAlertLevelComparisonOperator : uint8_t
{
	EAlertLevelComparisonOperator__GreaterThan                                       = 0,
	EAlertLevelComparisonOperator__LessThan                                          = 1,
	EAlertLevelComparisonOperator__EqualTo                                           = 2,
	EAlertLevelComparisonOperator__NotEqualTo                                        = 3,
	EAlertLevelComparisonOperator__GreaterThanOrEqualTo                              = 4,
	EAlertLevelComparisonOperator__LessThanOrEqualTo                                 = 5,
	EAlertLevelComparisonOperator__EAlertLevelComparisonOperator_MAX                 = 6
};

/// Enum /Script/EncountersRuntime.ESpawnActorPersistenceBehavior
/// Size: 0x04
enum class ESpawnActorPersistenceBehavior : uint8_t
{
	ESpawnActorPersistenceBehavior__Destroy                                          = 0,
	ESpawnActorPersistenceBehavior__Transient                                        = 1,
	ESpawnActorPersistenceBehavior__Persistent                                       = 2,
	ESpawnActorPersistenceBehavior__ESpawnActorPersistenceBehavior_MAX               = 3
};

/// Enum /Script/EncountersRuntime.EEncounterSuccessState
/// Size: 0x04
enum class EEncounterSuccessState : uint8_t
{
	EEncounterSuccessState__Passed                                                   = 0,
	EEncounterSuccessState__Failed                                                   = 1,
	EEncounterSuccessState__Any                                                      = 2,
	EEncounterSuccessState__EEncounterSuccessState_MAX                               = 3
};

/// Class /Script/EncountersRuntime.EncounterMobAnchor
/// Size: 0x0020 (0x000290 - 0x0002B0)
class AEncounterMobAnchor : public AActor
{ 
public:
	FGameplayTagContainer                              FilterTags;                                                 // 0x0290   (0x0020)  
};

/// Struct /Script/EncountersRuntime.EncounterMobInstance
/// Size: 0x0058 (0x000000 - 0x000058)
struct FEncounterMobInstance
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
	class AFortAthenaLivingWorldVolume*                VolumePointProvider;                                        // 0x0018   (0x0008)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x0020   (0x0010)  MISSED
	SDK_UNDEFINED(16,13181) /* TArray<TScriptInterface<Class>> */ __um(CurrentPointProviders);                     // 0x0030   (0x0010)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x0040   (0x0018)  MISSED
};

/// Struct /Script/EncountersRuntime.EncounterMobSpawnInfo
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FEncounterMobSpawnInfo
{ 
	FScalableFloat                                     LeashRadiusInner;                                           // 0x0000   (0x0028)  
	FScalableFloat                                     LeashRadiusOuter;                                           // 0x0028   (0x0028)  
	SDK_UNDEFINED(8,13182) /* TWeakObjectPtr<AEncounterMobAnchor*> */ __um(EncounterAnchorPoint);                  // 0x0050   (0x0008)  
	EEncounterMobSpawnType                             MobSpawnType;                                               // 0x0058   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x005C   (0x0004)  MISSED
	FGameplayTagContainer                              PointProviderFilterTags;                                    // 0x0060   (0x0020)  
	SDK_UNDEFINED(16,13183) /* TArray<TWeakObjectPtr<AFortAthenaLivingWorldStaticPointProvider*>> */ __um(StaticPointProviders); // 0x0080   (0x0010)  
	class UEnvQuery*                                   PointProviderEQS;                                           // 0x0090   (0x0008)  
	class UClass*                                      PointProviderVolumeClass;                                   // 0x0098   (0x0008)  
};

/// Struct /Script/EncountersRuntime.EncounterMobSpawnData
/// Size: 0x00E0 (0x000000 - 0x0000E0)
struct FEncounterMobSpawnData
{ 
	SDK_UNDEFINED(16,13184) /* FString */              __um(DevNotes);                                             // 0x0000   (0x0010)  
	FGameplayTag                                       MobIdentifier;                                              // 0x0010   (0x0004)  
	bool                                               bActiveOnStart;                                             // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	SDK_UNDEFINED(32,13185) /* TWeakObjectPtr<UFortAthenaLivingWorldEncounter*> */ __um(MobEncounterData);         // 0x0018   (0x0020)  
	bool                                               bOverrideDefaultSpawnInfo;                                  // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	FEncounterMobSpawnInfo                             MobSpawnInfo;                                               // 0x0040   (0x00A0)  
};

/// Class /Script/EncountersRuntime.EncounterMobManagerComponent
/// Size: 0x0178 (0x0000A0 - 0x000218)
class UEncounterMobManagerComponent : public UGameFrameworkComponent
{ 
public:
	TArray<FEncounterMobInstance>                      SpawnedMobs;                                                // 0x00A0   (0x0010)  
	TArray<FEncounterMobSpawnData>                     MobEncounterSpawnData;                                      // 0x00B0   (0x0010)  
	FEncounterMobSpawnInfo                             DefaultMobSpawnInfo;                                        // 0x00C0   (0x00A0)  
	FScalableFloat                                     LWMDensityWeight;                                           // 0x0160   (0x0028)  
	FScalableFloat                                     LWMDensityRange;                                            // 0x0188   (0x0028)  
	SDK_UNDEFINED(16,13186) /* FMulticastInlineDelegate */ __um(OnEncounterStarted);                               // 0x01B0   (0x0010)  
	SDK_UNDEFINED(16,13187) /* FMulticastInlineDelegate */ __um(OnEncounterPaused);                                // 0x01C0   (0x0010)  
	SDK_UNDEFINED(16,13188) /* FMulticastInlineDelegate */ __um(OnEncounterResumed);                               // 0x01D0   (0x0010)  
	SDK_UNDEFINED(16,13189) /* FMulticastInlineDelegate */ __um(OnEncounterActorSpawned);                          // 0x01E0   (0x0010)  
	SDK_UNDEFINED(16,13190) /* FMulticastInlineDelegate */ __um(OnEncounterActorDead);                             // 0x01F0   (0x0010)  
	SDK_UNDEFINED(16,13191) /* FMulticastInlineDelegate */ __um(OnEncounterEnded);                                 // 0x0200   (0x0010)  
	SDK_UNDEFINED(8,13192) /* TWeakObjectPtr<ALivingWorldEncounterPrefab*> */ __um(EncounterPrefab);               // 0x0210   (0x0008)  


	/// Functions
	// Function /Script/EncountersRuntime.EncounterMobManagerComponent.StartMobEncounter
	// bool StartMobEncounter(FGameplayTag& MobIdentifier);                                                                  // [0xb1ba968] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EncountersRuntime.EncounterMobManagerComponent.ResumeMobEncounter
	// void ResumeMobEncounter(FGameplayTag& MobIdentifier);                                                                 // [0xb1ba8a0] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EncountersRuntime.EncounterMobManagerComponent.PauseMobEncounter
	// void PauseMobEncounter(FGameplayTag& MobIdentifier);                                                                  // [0xb1ba7d8] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EncountersRuntime.EncounterMobManagerComponent.OnMobPawnEndPlay
	// void OnMobPawnEndPlay(class AActor* Mob, TEnumAsByte<EEndPlayReason> EndPlayReason);                                  // [0xb1ba64c] Final|Native|Private 
	// Function /Script/EncountersRuntime.EncounterMobManagerComponent.OnMobActorSpawn
	// void OnMobActorSpawn(class AActor* SpawnedActor);                                                                     // [0xb1ba38c] Final|Native|Private 
	// Function /Script/EncountersRuntime.EncounterMobManagerComponent.OnMobActorDied
	// void OnMobActorDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* HitComponent, FName BoneName, FVector Momentum); // [0xb1b9eb8] Final|Native|Private|HasDefaults 
	// Function /Script/EncountersRuntime.EncounterMobManagerComponent.OnEncounterStarted__DelegateSignature
	// void OnEncounterStarted__DelegateSignature(FGameplayTag MobIdentifier);                                               // [0x2177018] MulticastDelegate|Public|Delegate 
	// Function /Script/EncountersRuntime.EncounterMobManagerComponent.OnEncounterResumed__DelegateSignature
	// void OnEncounterResumed__DelegateSignature(FGameplayTag MobIdentifier);                                               // [0x2177018] MulticastDelegate|Public|Delegate 
	// Function /Script/EncountersRuntime.EncounterMobManagerComponent.OnEncounterPaused__DelegateSignature
	// void OnEncounterPaused__DelegateSignature(FGameplayTag MobIdentifier);                                                // [0x2177018] MulticastDelegate|Public|Delegate 
	// Function /Script/EncountersRuntime.EncounterMobManagerComponent.OnEncounterEnded__DelegateSignature
	// void OnEncounterEnded__DelegateSignature(FGameplayTag MobIdentifier);                                                 // [0x2177018] MulticastDelegate|Public|Delegate 
	// Function /Script/EncountersRuntime.EncounterMobManagerComponent.OnEncounterActorSpawned__DelegateSignature
	// void OnEncounterActorSpawned__DelegateSignature(FGameplayTag MobIdentifier, class AActor* SpawnedActor);              // [0x2177018] MulticastDelegate|Public|Delegate 
	// Function /Script/EncountersRuntime.EncounterMobManagerComponent.OnEncounterActorDead__DelegateSignature
	// void OnEncounterActorDead__DelegateSignature(FGameplayTag MobIdentifier, class AActor* DamagedActor, class AActor* DamageCauser); // [0x2177018] MulticastDelegate|Public|Delegate 
	// Function /Script/EncountersRuntime.EncounterMobManagerComponent.EndMobEncounter
	// void EndMobEncounter(FGameplayTag& MobIdentifier);                                                                    // [0xb1b9df0] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EncountersRuntime.EncounterMobManagerComponent.EndAndCleanupAllMobEncounters
	// void EndAndCleanupAllMobEncounters();                                                                                 // [0xb1b9ddc] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/EncountersRuntime.EncounterWorldConditionSchema
/// Size: 0x0008 (0x000038 - 0x000040)
class UEncounterWorldConditionSchema : public UWorldConditionSchema
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Class /Script/EncountersRuntime.LWMEncounterInstance
/// Size: 0x00D8 (0x000028 - 0x000100)
class ULWMEncounterInstance : public UObject
{ 
public:
	SDK_UNDEFINED(8,13193) /* TWeakObjectPtr<UFortAthenaLivingWorldEncounterInstance*> */ __um(LWMInstance);       // 0x0028   (0x0008)  
	SDK_UNDEFINED(16,13194) /* TArray<TWeakObjectPtr<AFortPawn*>> */ __um(SpawnedMobPawns);                        // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_5[0x58];                                      // 0x0040   (0x0058)  MISSED
	SDK_UNDEFINED(8,13195) /* TWeakObjectPtr<AActor*> */ __um(EncounterAnchorPoint);                               // 0x0098   (0x0008)  
	SDK_UNDEFINED(8,13196) /* TWeakObjectPtr<AActor*> */ __um(UserActor);                                          // 0x00A0   (0x0008)  
	SDK_UNDEFINED(16,13197) /* TArray<TScriptInterface<Class>> */ __um(ActivePointProviderInterfaces);             // 0x00A8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x48];                                      // 0x00B8   (0x0048)  MISSED


	/// Functions
	// Function /Script/EncountersRuntime.LWMEncounterInstance.OnMobPawnEndPlay
	// void OnMobPawnEndPlay(class AActor* Mob, TEnumAsByte<EEndPlayReason> EndPlayReason);                                  // [0xb1cd1e8] Final|Native|Public  
	// Function /Script/EncountersRuntime.LWMEncounterInstance.OnMobActorSpawn
	// void OnMobActorSpawn(class AActor* SpawnedActor);                                                                     // [0xb1cd064] Final|Native|Public  
	// Function /Script/EncountersRuntime.LWMEncounterInstance.OnMobActorDied
	// void OnMobActorDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* HitComponent, FName BoneName, FVector Momentum); // [0xb1ccaf0] Final|Native|Public|HasDefaults 
};

/// Class /Script/EncountersRuntime.SpawnActorTaskHelper
/// Size: 0x0010 (0x000028 - 0x000038)
class USpawnActorTaskHelper : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Struct /Script/EncountersRuntime.EncounterPrefabEntry
/// Size: 0x0050 (0x000000 - 0x000050)
struct FEncounterPrefabEntry
{ 
	class UEncounterItemDefinition*                    EncounterDefinition;                                        // 0x0000   (0x0008)  
	FGameplayTag                                       EncounterIdentifierTag;                                     // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FScalableFloat                                     Weight;                                                     // 0x0010   (0x0028)  
	FWorldConditionQueryDefinition                     CanSpawnCondition;                                          // 0x0038   (0x0018)  
};

/// Class /Script/EncountersRuntime.EncounterActorSpawnerData
/// Size: 0x0050 (0x000050 - 0x0000A0)
class UEncounterActorSpawnerData : public UFortAthenaActorSpawnerData
{ 
public:
	FEncounterPrefabEntry                              EncounterEntry;                                             // 0x0050   (0x0050)  
};

/// Class /Script/EncountersRuntime.EncounterBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UEncounterBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/EncountersRuntime.EncounterBlueprintLibrary.GetRelevantMobManagerComponentForActor
	// class UEncounterMobManagerComponent* GetRelevantMobManagerComponentForActor(class AActor* Actor);                     // [0xb1cc05c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/EncountersRuntime.EncounterFactionData
/// Size: 0x0068 (0x000030 - 0x000098)
class UEncounterFactionData : public UPrimaryDataAsset
{ 
public:
	FGameplayTagQuery                                  RequiredCapabilities;                                       // 0x0030   (0x0048)  
	FWorldConditionQueryDefinition                     WorldConditionDefinition;                                   // 0x0078   (0x0018)  
	class UDataTable*                                  LWMEncounterTable;                                          // 0x0090   (0x0008)  
};

/// Class /Script/EncountersRuntime.EncounterGameplayVolume
/// Size: 0x0100 (0x000330 - 0x000430)
class AEncounterGameplayVolume : public AGameplayVolume
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0330   (0x0018)  MISSED
	class UEncounterStateTreeComponent*                EncounterStateTreeComponent;                                // 0x0348   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0350   (0x0008)  MISSED
	SDK_UNDEFINED(16,13198) /* TArray<TScriptInterface<Class>> */ __um(EncounterPointProviders);                   // 0x0358   (0x0010)  
	SDK_UNDEFINED(16,13199) /* TArray<TWeakObjectPtr<AEncounterMobAnchor*>> */ __um(EncounterAnchors);             // 0x0368   (0x0010)  
	SDK_UNDEFINED(16,13200) /* TArray<TWeakObjectPtr<ABuildingActor*>> */ __um(BuildingActors);                    // 0x0378   (0x0010)  
	SDK_UNDEFINED(16,13201) /* TArray<TWeakObjectPtr<AFortPlayerController*>> */ __um(Players);                    // 0x0388   (0x0010)  
	SDK_UNDEFINED(80,13202) /* TMap<FString, FString> */ __um(AllVisitedPlayersMap);                               // 0x0398   (0x0050)  
	unsigned char                                      UnknownData02_6[0x48];                                      // 0x03E8   (0x0048)  MISSED


	/// Functions
	// Function /Script/EncountersRuntime.EncounterGameplayVolume.OnCleanup
	// void OnCleanup();                                                                                                     // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/EncountersRuntime.EncounterGameplayVolume.IsDoneCleaningUp
	// bool IsDoneCleaningUp();                                                                                              // [0xa8070c0] Native|Event|Public|BlueprintEvent|Const 
};

/// Class /Script/EncountersRuntime.EncounterItem
/// Size: 0x0030 (0x000088 - 0x0000B8)
class UEncounterItem : public UFortItem
{ 
public:
	class UEncounterItemDefinition*                    EncounterItemDefinition;                                    // 0x0088   (0x0008)  
	SDK_UNDEFINED(8,13203) /* TWeakObjectPtr<ALivingWorldEncounterPrefab*> */ __um(EncounterPrefab);               // 0x0090   (0x0008)  
	SDK_UNDEFINED(8,13204) /* TWeakObjectPtr<UEncounterManagerComponent*> */ __um(EncounterManager);               // 0x0098   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x00A0   (0x0018)  MISSED
};

/// Struct /Script/EncountersRuntime.EncounterRewardBehavior
/// Size: 0x0080 (0x000000 - 0x000080)
struct FEncounterRewardBehavior
{ 
	FVector                                            RewardOffset;                                               // 0x0000   (0x0018)  
	FVector                                            RewardDirection;                                            // 0x0018   (0x0018)  
	FScalableFloat                                     RewardConeAngle;                                            // 0x0030   (0x0028)  
	FScalableFloat                                     RewardFlingMagnitude;                                       // 0x0058   (0x0028)  
};

/// Class /Script/EncountersRuntime.EncounterItemDefinition
/// Size: 0x0218 (0x000378 - 0x000590)
class UEncounterItemDefinition : public UFortItemDefinition
{ 
public:
	bool                                               bAutoHandleSuccessFailure;                                  // 0x0378   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0379   (0x0007)  MISSED
	SDK_UNDEFINED(32,13205) /* TWeakObjectPtr<UWorld*> */ __um(Level);                                             // 0x0380   (0x0020)  
	SDK_UNDEFINED(32,13206) /* TWeakObjectPtr<UStateTree*> */ __um(StateTreeOverride);                             // 0x03A0   (0x0020)  
	FGameplayCueTag                                    ProximityGameplayCueTag;                                    // 0x03C0   (0x0004)  
	FGameplayCueTag                                    ActorCleanupGameplayCueTag;                                 // 0x03C4   (0x0004)  
	TArray<FName>                                      SuccessRewards;                                             // 0x03C8   (0x0010)  
	FEncounterRewardBehavior                           SuccessRewardBehavior;                                      // 0x03D8   (0x0080)  
	FGameplayCueTag                                    ActorSuccessGameplayCueTag;                                 // 0x0458   (0x0004)  
	FGameplayCueTag                                    PlayerSuccessGameplayCueTag;                                // 0x045C   (0x0004)  
	TArray<FName>                                      FailureRewards;                                             // 0x0460   (0x0010)  
	FEncounterRewardBehavior                           FailureRewardBehavior;                                      // 0x0470   (0x0080)  
	FGameplayCueTag                                    ActorFailureGameplayCueTag;                                 // 0x04F0   (0x0004)  
	FGameplayCueTag                                    PlayerFailureGameplayCueTag;                                // 0x04F4   (0x0004)  
	FScalableFloat                                     LWMDensityWeight;                                           // 0x04F8   (0x0028)  
	FScalableFloat                                     LWMDensityRange;                                            // 0x0520   (0x0028)  
	TArray<FInstancedStruct>                           Vars;                                                       // 0x0548   (0x0010)  
	TArray<FInstancedStruct>                           VariableSelections;                                         // 0x0558   (0x0010)  
	FWorldConditionQueryDefinition                     CanSpawnWorldConditionDefinition;                           // 0x0568   (0x0018)  
	TArray<FFortAthenaLivingWorldPrefabActorSpawnerData> ActorSpawnerDatas;                                        // 0x0580   (0x0010)  
};

/// Struct /Script/EncountersRuntime.ActorIdentifierEntry
/// Size: 0x0028 (0x000000 - 0x000028)
struct FActorIdentifierEntry
{ 
	FGameplayTagContainer                              IdentifierTags;                                             // 0x0000   (0x0020)  
	SDK_UNDEFINED(8,13207) /* TWeakObjectPtr<AActor*> */ __um(TargetActor);                                        // 0x0020   (0x0008)  
};

/// Struct /Script/EncountersRuntime.LWMEncounterInfo
/// Size: 0x0028 (0x000000 - 0x000028)
struct FLWMEncounterInfo
{ 
	class ULWMEncounterInstance*                       LWMEncounter;                                               // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0008   (0x0020)  MISSED
};

/// Struct /Script/EncountersRuntime.GameplayEffectIdentifierInfo
/// Size: 0x0028 (0x000000 - 0x000028)
struct FGameplayEffectIdentifierInfo
{ 
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/EncountersRuntime.TrackedActorInfo
/// Size: 0x0038 (0x000000 - 0x000038)
struct FTrackedActorInfo
{ 
	SDK_UNDEFINED(8,13208) /* TWeakObjectPtr<AActor*> */ __um(TrackedActor);                                       // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x0008   (0x0030)  MISSED
};

/// Class /Script/EncountersRuntime.EncounterManagerComponent
/// Size: 0x0228 (0x0000A0 - 0x0002C8)
class UEncounterManagerComponent : public UGameFrameworkComponent
{ 
public:
	SDK_UNDEFINED(8,13209) /* TWeakObjectPtr<AEncounterGameplayVolume*> */ __um(EncounterVolume);                  // 0x00A0   (0x0008)  
	SDK_UNDEFINED(8,13210) /* TWeakObjectPtr<AActor*> */ __um(CenterActorOverride);                                // 0x00A8   (0x0008)  
	SDK_UNDEFINED(16,13211) /* TArray<TWeakObjectPtr<ABuildingActor*>> */ __um(PermanentActors);                   // 0x00B0   (0x0010)  
	FDataTableRowHandle                                PostEncounterLWMEvent;                                      // 0x00C0   (0x0010)  
	FDataTableRowHandle                                PostEncounterLWMCategory;                                   // 0x00D0   (0x0010)  
	SDK_UNDEFINED(80,13212) /* TSet<AFortPlayerController*> */ __um(ExplicitContributors);                         // 0x00E0   (0x0050)  
	TArray<FActorIdentifierEntry>                      ActorIdentifiers;                                           // 0x0130   (0x0010)  
	TArray<FLWMEncounterInfo>                          EncounterInfos;                                             // 0x0140   (0x0010)  
	TArray<FGameplayEffectIdentifierInfo>              GameplayEffectInfos;                                        // 0x0150   (0x0010)  
	SDK_UNDEFINED(8,13213) /* TWeakObjectPtr<UEncounterItem*> */ __um(EncounterItem);                              // 0x0160   (0x0008)  
	SDK_UNDEFINED(8,13214) /* TWeakObjectPtr<ALivingWorldEncounterPrefab*> */ __um(EncounterPrefab);               // 0x0168   (0x0008)  
	SDK_UNDEFINED(32,13215) /* TWeakObjectPtr<UDataTable*> */ __um(LWMEncounterTable);                             // 0x0170   (0x0020)  
	unsigned char                                      UnknownData00_5[0x100];                                     // 0x0190   (0x0100)  MISSED
	SDK_UNDEFINED(8,13216) /* TWeakObjectPtr<AActor*> */ __um(LastThreat);                                         // 0x0290   (0x0008)  
	SDK_UNDEFINED(8,13217) /* TWeakObjectPtr<AActor*> */ __um(ReservoirActor);                                     // 0x0298   (0x0008)  
	TArray<FTrackedActorInfo>                          TrackedActorInfos;                                          // 0x02A0   (0x0010)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x02B0   (0x0018)  MISSED


	/// Functions
	// Function /Script/EncountersRuntime.EncounterManagerComponent.SetPersistentValue
	// void SetPersistentValue(FGameplayTag& Identifier, int32_t Value);                                                     // [0xb1cd3ec] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EncountersRuntime.EncounterManagerComponent.RemoveExplicitContributor
	// void RemoveExplicitContributor(class AFortPlayerController* Contributor);                                             // [0xb1cd354] Final|Native|Public|BlueprintCallable 
	// Function /Script/EncountersRuntime.EncounterManagerComponent.OnStateTreeStatusChanged
	// void OnStateTreeStatusChanged(EStateTreeRunStatus Status);                                                            // [0xb1cd2d4] Final|Native|Private 
	// Function /Script/EncountersRuntime.EncounterManagerComponent.HandleEncounterSuccess
	// void HandleEncounterSuccess(int32_t RewardIndex);                                                                     // [0xb1cca70] Final|Native|Public|BlueprintCallable 
	// Function /Script/EncountersRuntime.EncounterManagerComponent.HandleEncounterFailure
	// void HandleEncounterFailure(int32_t RewardIndex);                                                                     // [0xb1cc9f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/EncountersRuntime.EncounterManagerComponent.GetVariable_TagQuery
	// FGameplayTagQuery GetVariable_TagQuery(FGameplayTag& VarName);                                                        // [0xb1cc8fc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EncountersRuntime.EncounterManagerComponent.GetVariable_LWMEncounter
	// class UFortAthenaLivingWorldEncounter* GetVariable_LWMEncounter(FGameplayTag& VarName);                               // [0xb1cc824] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EncountersRuntime.EncounterManagerComponent.GetVariable_ItemDefinition
	// class UFortWorldItemDefinition* GetVariable_ItemDefinition(FGameplayTag& VarName);                                    // [0xb1cc74c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EncountersRuntime.EncounterManagerComponent.GetVariable_Int
	// int32_t GetVariable_Int(FGameplayTag& VarName);                                                                       // [0xb1cc678] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EncountersRuntime.EncounterManagerComponent.GetVariable_GameplayTagContainer
	// FGameplayTagContainer GetVariable_GameplayTagContainer(FGameplayTag& VarName);                                        // [0xb1cc58c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EncountersRuntime.EncounterManagerComponent.GetVariable_GameplayTag
	// FGameplayTag GetVariable_GameplayTag(FGameplayTag& VarName);                                                          // [0xb1cc4bc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EncountersRuntime.EncounterManagerComponent.GetVariable_Float
	// float GetVariable_Float(FGameplayTag& VarName);                                                                       // [0xb1cc3e4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EncountersRuntime.EncounterManagerComponent.GetVariable_Bool
	// bool GetVariable_Bool(FGameplayTag& VarName);                                                                         // [0xb1cc310] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EncountersRuntime.EncounterManagerComponent.GetVariable_ActorClass
	// TWeakObjectPtr<UClass*> GetVariable_ActorClass(FGameplayTag& VarName);                                                // [0xb1cc21c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EncountersRuntime.EncounterManagerComponent.GetPersistentValue
	// int32_t GetPersistentValue(FGameplayTag& Identifier);                                                                 // [0xb1cbfac] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EncountersRuntime.EncounterManagerComponent.AddExplicitContributor
	// void AddExplicitContributor(class AFortPlayerController* Contributor);                                                // [0xb1cbf10] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/EncountersRuntime.EncounterPatrolPathPointProvider
/// Size: 0x0008 (0x000360 - 0x000368)
class AEncounterPatrolPathPointProvider : public AFortAthenaPatrolPathPointProvider
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0360   (0x0008)  MISSED
};

/// Class /Script/EncountersRuntime.EncounterPointProviderInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UEncounterPointProviderInterface : public UInterface
{ 
public:
};

/// Class /Script/EncountersRuntime.EncounterStateTreeComponent
/// Size: 0x0008 (0x000148 - 0x000150)
class UEncounterStateTreeComponent : public UStateTreeComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0148   (0x0008)  MISSED
};

/// Class /Script/EncountersRuntime.EncounterStaticPointProvider
/// Size: 0x0008 (0x000370 - 0x000378)
class AEncounterStaticPointProvider : public AFortAthenaLivingWorldStaticPointProvider
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0370   (0x0008)  MISSED
};

/// Class /Script/EncountersRuntime.EncounterVolumePointProvider
/// Size: 0x0008 (0x0005C0 - 0x0005C8)
class AEncounterVolumePointProvider : public AFortAthenaLivingWorldVolume
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x05C0   (0x0008)  MISSED
};

/// Class /Script/EncountersRuntime.FortCheatManager_Encounters
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortCheatManager_Encounters : public UChildCheatManager
{ 
public:


	/// Functions
	// Function /Script/EncountersRuntime.FortCheatManager_Encounters.EncountersDump
	// void EncountersDump();                                                                                                // [0x32e6c74] Final|BlueprintAuthorityOnly|Exec|Native|Public 
};

/// Struct /Script/EncountersRuntime.EncounterPrefabInfo
/// Size: 0x0038 (0x000000 - 0x000038)
struct FEncounterPrefabInfo
{ 
	class UEncounterItemDefinition*                    EncounterDefinition;                                        // 0x0000   (0x0008)  
	FGameplayTag                                       EncounterIdentifierTag;                                     // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FScalableFloat                                     Weight;                                                     // 0x0010   (0x0028)  
};

/// Class /Script/EncountersRuntime.LivingWorldEncounterPrefab
/// Size: 0x0088 (0x000920 - 0x0009A8)
class ALivingWorldEncounterPrefab : public AFortAthenaLivingWorldPrefab
{ 
public:
	unsigned char                                      UnknownData00_2[0x58];                                      // 0x0920   (0x0058)  MISSED
	TArray<FEncounterPrefabInfo>                       EncounterEntries;                                           // 0x0978   (0x0010)  
	class UEncounterItem*                              EncounterItem;                                              // 0x0988   (0x0008)  
	class UEncounterItemDefinition*                    EncounterDefinition;                                        // 0x0990   (0x0008)  
	SDK_UNDEFINED(8,13218) /* TWeakObjectPtr<AActor*> */ __um(ReservoirActorOverride);                             // 0x0998   (0x0008)  
	SDK_UNDEFINED(8,13219) /* TWeakObjectPtr<UEncounterManagerComponent*> */ __um(EncounterManager);               // 0x09A0   (0x0008)  


	/// Functions
	// Function /Script/EncountersRuntime.LivingWorldEncounterPrefab.OnRep_EncounterDefinition
	// void OnRep_EncounterDefinition();                                                                                     // [0x88882e8] Final|Native|Private 
};

/// Class /Script/EncountersRuntime.FortVerbProcessor_EncounterCompleted
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UFortVerbProcessor_EncounterCompleted : public UFortObjectiveProcessor
{ 
public:
};

/// Struct /Script/EncountersRuntime.ActorAddLooseTagsStateTreeTaskInstanceData
/// Size: 0x0030 (0x000000 - 0x000030)
struct FActorAddLooseTagsStateTreeTaskInstanceData
{ 
	SDK_UNDEFINED(8,13220) /* TWeakObjectPtr<AActor*> */ __um(InActor);                                            // 0x0000   (0x0008)  
	FGameplayTagContainer                              ActorTags;                                                  // 0x0008   (0x0020)  
	class AActor*                                      UserActor;                                                  // 0x0028   (0x0008)  
};

/// Struct /Script/EncountersRuntime.ActorAddLooseTagsStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
struct FActorAddLooseTagsStateTreeTask : FStateTreeTaskCommonBase
{ 
};

/// Struct /Script/EncountersRuntime.ActorPhysicsStateTreeTaskInstanceData
/// Size: 0x0058 (0x000000 - 0x000058)
struct FActorPhysicsStateTreeTaskInstanceData
{ 
	FGameplayTagQuery                                  ActorQuery;                                                 // 0x0000   (0x0048)  
	bool                                               bShouldWakeup;                                              // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0049   (0x0007)  MISSED
	class AActor*                                      UserActor;                                                  // 0x0050   (0x0008)  
};

/// Struct /Script/EncountersRuntime.ActorPhysicsStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
struct FActorPhysicsStateTreeTask : FStateTreeTaskCommonBase
{ 
};

/// Struct /Script/EncountersRuntime.AddGameplayCueStateTreeTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FAddGameplayCueStateTreeTaskInstanceData
{ 
	FGameplayCueTag                                    GameplayCue;                                                // 0x0000   (0x0004)  
	bool                                               bIsLooping;                                                 // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	class AActor*                                      UserActor;                                                  // 0x0008   (0x0008)  
};

/// Struct /Script/EncountersRuntime.AddGameplayCueStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
struct FAddGameplayCueStateTreeTask : FStateTreeTaskCommonBase
{ 
};

/// Struct /Script/EncountersRuntime.DestroyActorsStateTreeTaskInstanceData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FDestroyActorsStateTreeTaskInstanceData
{ 
	FGameplayTagQuery                                  ActorQuery;                                                 // 0x0000   (0x0048)  
	class AActor*                                      UserActor;                                                  // 0x0048   (0x0008)  
};

/// Struct /Script/EncountersRuntime.DestroyActorsStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
struct FDestroyActorsStateTreeTask : FStateTreeTaskCommonBase
{ 
};

/// Struct /Script/EncountersRuntime.EnableEncounterPointProvidersStateTreeTaskInstanceData
/// Size: 0x0058 (0x000000 - 0x000058)
struct FEnableEncounterPointProvidersStateTreeTaskInstanceData
{ 
	FGameplayTagQuery                                  ProviderTagQuery;                                           // 0x0000   (0x0048)  
	bool                                               bEnableProvider;                                            // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0049   (0x0007)  MISSED
	class AActor*                                      UserActor;                                                  // 0x0050   (0x0008)  
};

/// Struct /Script/EncountersRuntime.EnableEncounterPointProvidersStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
struct FEnableEncounterPointProvidersStateTreeTask : FStateTreeTaskCommonBase
{ 
};

/// Struct /Script/EncountersRuntime.EnableSmartObjectsStateTreeTaskInstanceData
/// Size: 0x0058 (0x000000 - 0x000058)
struct FEnableSmartObjectsStateTreeTaskInstanceData
{ 
	FGameplayTagQuery                                  ActorQuery;                                                 // 0x0000   (0x0048)  
	bool                                               bEnable;                                                    // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0049   (0x0007)  MISSED
	class AActor*                                      UserActor;                                                  // 0x0050   (0x0008)  
};

/// Struct /Script/EncountersRuntime.EnableSmartObjectsStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
struct FEnableSmartObjectsStateTreeTask : FStateTreeTaskCommonBase
{ 
};

/// Struct /Script/EncountersRuntime.EncounterFactionRow
/// Size: 0x0010 (0x000008 - 0x000018)
struct FEncounterFactionRow : FTableRowBase
{ 
	class UEncounterFactionData*                       FactionData;                                                // 0x0008   (0x0008)  
	float                                              Weight;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/EncountersRuntime.EncounterGetKillCountStateTreeTaskInstanceData
/// Size: 0x0058 (0x000000 - 0x000058)
struct FEncounterGetKillCountStateTreeTaskInstanceData
{ 
	FGameplayTagQuery                                  EncounterQuery;                                             // 0x0000   (0x0048)  
	int32_t                                            Value;                                                      // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	class AActor*                                      UserActor;                                                  // 0x0050   (0x0008)  
};

/// Struct /Script/EncountersRuntime.EncounterGetKillCountStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
struct FEncounterGetKillCountStateTreeTask : FStateTreeTaskCommonBase
{ 
};

/// Struct /Script/EncountersRuntime.EncounterGetPersistentValueStateTreeTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FEncounterGetPersistentValueStateTreeTaskInstanceData
{ 
	FGameplayTag                                       VariableIdentifier;                                         // 0x0000   (0x0004)  
	int32_t                                            Value;                                                      // 0x0004   (0x0004)  
	class AActor*                                      UserActor;                                                  // 0x0008   (0x0008)  
};

/// Struct /Script/EncountersRuntime.EncounterGetPersistentValueStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
struct FEncounterGetPersistentValueStateTreeTask : FStateTreeTaskCommonBase
{ 
};

/// Struct /Script/EncountersRuntime.EncounterGetRemainingCountStateTreeTaskInstanceData
/// Size: 0x0058 (0x000000 - 0x000058)
struct FEncounterGetRemainingCountStateTreeTaskInstanceData
{ 
	FGameplayTagQuery                                  EncounterQuery;                                             // 0x0000   (0x0048)  
	int32_t                                            Value;                                                      // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	class AActor*                                      UserActor;                                                  // 0x0050   (0x0008)  
};

/// Struct /Script/EncountersRuntime.EncounterGetRemainingCountStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
struct FEncounterGetRemainingCountStateTreeTask : FStateTreeTaskCommonBase
{ 
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableActorClassStateTreeTaskInstanceData
/// Size: 0x0030 (0x000000 - 0x000030)
struct FEncounterGetVariableActorClassStateTreeTaskInstanceData
{ 
	FGameplayTag                                       VariableIdentifier;                                         // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(32,13221) /* TWeakObjectPtr<UClass*> */ __um(Value);                                             // 0x0008   (0x0020)  
	class AActor*                                      UserActor;                                                  // 0x0028   (0x0008)  
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableActorClassStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
struct FEncounterGetVariableActorClassStateTreeTask : FStateTreeTaskCommonBase
{ 
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableBoolStateTreeTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FEncounterGetVariableBoolStateTreeTaskInstanceData
{ 
	FGameplayTag                                       VariableIdentifier;                                         // 0x0000   (0x0004)  
	bool                                               bValue;                                                     // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	class AActor*                                      UserActor;                                                  // 0x0008   (0x0008)  
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableBoolStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
struct FEncounterGetVariableBoolStateTreeTask : FStateTreeTaskCommonBase
{ 
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableFloatStateTreeTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FEncounterGetVariableFloatStateTreeTaskInstanceData
{ 
	FGameplayTag                                       VariableIdentifier;                                         // 0x0000   (0x0004)  
	float                                              Value;                                                      // 0x0004   (0x0004)  
	class AActor*                                      UserActor;                                                  // 0x0008   (0x0008)  
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableFloatStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
struct FEncounterGetVariableFloatStateTreeTask : FStateTreeTaskCommonBase
{ 
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableGameplayTagContainerStateTreeTaskInstanceData
/// Size: 0x0030 (0x000000 - 0x000030)
struct FEncounterGetVariableGameplayTagContainerStateTreeTaskInstanceData
{ 
	FGameplayTag                                       VariableIdentifier;                                         // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FGameplayTagContainer                              Value;                                                      // 0x0008   (0x0020)  
	class AActor*                                      UserActor;                                                  // 0x0028   (0x0008)  
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableGameplayTagContainerStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
struct FEncounterGetVariableGameplayTagContainerStateTreeTask : FStateTreeTaskCommonBase
{ 
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableGameplayTagStateTreeTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FEncounterGetVariableGameplayTagStateTreeTaskInstanceData
{ 
	FGameplayTag                                       VariableIdentifier;                                         // 0x0000   (0x0004)  
	FGameplayTag                                       Value;                                                      // 0x0004   (0x0004)  
	class AActor*                                      UserActor;                                                  // 0x0008   (0x0008)  
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableGameplayTagStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
struct FEncounterGetVariableGameplayTagStateTreeTask : FStateTreeTaskCommonBase
{ 
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableIntStateTreeTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FEncounterGetVariableIntStateTreeTaskInstanceData
{ 
	FGameplayTag                                       VariableIdentifier;                                         // 0x0000   (0x0004)  
	int32_t                                            Value;                                                      // 0x0004   (0x0004)  
	class AActor*                                      UserActor;                                                  // 0x0008   (0x0008)  
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableIntStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
struct FEncounterGetVariableIntStateTreeTask : FStateTreeTaskCommonBase
{ 
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableItemDefinitionStateTreeTaskInstanceData
/// Size: 0x0030 (0x000000 - 0x000030)
struct FEncounterGetVariableItemDefinitionStateTreeTaskInstanceData
{ 
	FGameplayTag                                       VariableIdentifier;                                         // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(32,13222) /* TWeakObjectPtr<UFortWorldItemDefinition*> */ __um(Value);                           // 0x0008   (0x0020)  
	class AActor*                                      UserActor;                                                  // 0x0028   (0x0008)  
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableItemDefinitionStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
struct FEncounterGetVariableItemDefinitionStateTreeTask : FStateTreeTaskCommonBase
{ 
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableLWMEncounterStateTreeTaskInstanceData
/// Size: 0x0030 (0x000000 - 0x000030)
struct FEncounterGetVariableLWMEncounterStateTreeTaskInstanceData
{ 
	FGameplayTag                                       VariableIdentifier;                                         // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(32,13223) /* TWeakObjectPtr<UFortAthenaLivingWorldEncounter*> */ __um(Value);                    // 0x0008   (0x0020)  
	class AActor*                                      UserActor;                                                  // 0x0028   (0x0008)  
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableLWMEncounterStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
struct FEncounterGetVariableLWMEncounterStateTreeTask : FStateTreeTaskCommonBase
{ 
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableTagQueryStateTreeTaskInstanceData
/// Size: 0x0058 (0x000000 - 0x000058)
struct FEncounterGetVariableTagQueryStateTreeTaskInstanceData
{ 
	FGameplayTag                                       VariableIdentifier;                                         // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FGameplayTagQuery                                  Value;                                                      // 0x0008   (0x0048)  
	class AActor*                                      UserActor;                                                  // 0x0050   (0x0008)  
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableTagQueryStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
struct FEncounterGetVariableTagQueryStateTreeTask : FStateTreeTaskCommonBase
{ 
};

/// Struct /Script/EncountersRuntime.EncounterGetVariantTagQueryStateTreeTaskInstanceData
/// Size: 0x0098 (0x000000 - 0x000098)
struct FEncounterGetVariantTagQueryStateTreeTaskInstanceData
{ 
	FGameplayTagQuery                                  BaseTagQuery;                                               // 0x0000   (0x0048)  
	FGameplayTagQuery                                  Value;                                                      // 0x0048   (0x0048)  
	class AActor*                                      UserActor;                                                  // 0x0090   (0x0008)  
};

/// Struct /Script/EncountersRuntime.EncounterGetVariantTagQueryStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
struct FEncounterGetVariantTagQueryStateTreeTask : FStateTreeTaskCommonBase
{ 
};

/// Struct /Script/EncountersRuntime.EncounterSelectLWMEncounterStateTreeTaskInstanceData
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FEncounterSelectLWMEncounterStateTreeTaskInstanceData
{ 
	class UDataRegistry*                               FactionRegistry;                                            // 0x0000   (0x0008)  
	FGameplayTagContainer                              Capabilities;                                               // 0x0008   (0x0020)  
	FGameplayTagQuery                                  LWMEncounterTagQuery;                                       // 0x0028   (0x0048)  
	class AActor*                                      UserActor;                                                  // 0x0070   (0x0008)  
	SDK_UNDEFINED(32,13224) /* TWeakObjectPtr<UFortAthenaLivingWorldEncounter*> */ __um(LWMEncounter);             // 0x0078   (0x0020)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0098   (0x0008)  MISSED
};

/// Struct /Script/EncountersRuntime.EncounterSelectLWMEncounterStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
struct FEncounterSelectLWMEncounterStateTreeTask : FStateTreeTaskCommonBase
{ 
};

/// Struct /Script/EncountersRuntime.EncounterSelectLWMEncounterTableStateTreeTaskInstanceData
/// Size: 0x0038 (0x000000 - 0x000038)
struct FEncounterSelectLWMEncounterTableStateTreeTaskInstanceData
{ 
	class UDataRegistry*                               FactionRegistry;                                            // 0x0000   (0x0008)  
	FGameplayTagContainer                              Capabilities;                                               // 0x0008   (0x0020)  
	class AActor*                                      UserActor;                                                  // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Struct /Script/EncountersRuntime.EncounterSelectLWMEncounterTableStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
struct FEncounterSelectLWMEncounterTableStateTreeTask : FStateTreeTaskCommonBase
{ 
};

/// Struct /Script/EncountersRuntime.EncounterSetCenterActorStateTreeTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FEncounterSetCenterActorStateTreeTaskInstanceData
{ 
	SDK_UNDEFINED(8,13225) /* TWeakObjectPtr<AActor*> */ __um(CenterActor);                                        // 0x0000   (0x0008)  
	class AActor*                                      UserActor;                                                  // 0x0008   (0x0008)  
};

/// Struct /Script/EncountersRuntime.EncounterSetCenterActorStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
struct FEncounterSetCenterActorStateTreeTask : FStateTreeTaskCommonBase
{ 
};

/// Struct /Script/EncountersRuntime.EncounterSetPersistentValueStateTreeTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FEncounterSetPersistentValueStateTreeTaskInstanceData
{ 
	FGameplayTag                                       VariableIdentifier;                                         // 0x0000   (0x0004)  
	int32_t                                            Value;                                                      // 0x0004   (0x0004)  
	class AActor*                                      UserActor;                                                  // 0x0008   (0x0008)  
};

/// Struct /Script/EncountersRuntime.EncounterSetPersistentValueStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
struct FEncounterSetPersistentValueStateTreeTask : FStateTreeTaskCommonBase
{ 
};

/// Struct /Script/EncountersRuntime.EncounterVariable
/// Size: 0x0010 (0x000000 - 0x000010)
struct FEncounterVariable
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	FGameplayTag                                       VarName;                                                    // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/EncountersRuntime.EncounterVariableSelections
/// Size: 0x0010 (0x000000 - 0x000010)
struct FEncounterVariableSelections
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	FGameplayTag                                       VarName;                                                    // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/EncountersRuntime.EncounterVariableSelectionsRow
/// Size: 0x0068 (0x000008 - 0x000070)
struct FEncounterVariableSelectionsRow : FTableRowBase
{ 
	FGameplayTagQuery                                  RequiredCapabilities;                                       // 0x0008   (0x0048)  
	FWorldConditionQueryDefinition                     WorldConditionDefinition;                                   // 0x0050   (0x0018)  
	float                                              Weight;                                                     // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Struct /Script/EncountersRuntime.EncounterVariableSelectionsRow_ActorClass
/// Size: 0x0010 (0x000070 - 0x000080)
struct FEncounterVariableSelectionsRow_ActorClass : FEncounterVariableSelectionsRow
{ 
	FDataTableRowHandle                                RowValue;                                                   // 0x0070   (0x0010)  
};

/// Struct /Script/EncountersRuntime.EncounterVariableSelectionsRow_Boolean
/// Size: 0x0010 (0x000070 - 0x000080)
struct FEncounterVariableSelectionsRow_Boolean : FEncounterVariableSelectionsRow
{ 
	FDataTableRowHandle                                RowValue;                                                   // 0x0070   (0x0010)  
};

/// Struct /Script/EncountersRuntime.EncounterVariableSelectionsRow_Float
/// Size: 0x0010 (0x000070 - 0x000080)
struct FEncounterVariableSelectionsRow_Float : FEncounterVariableSelectionsRow
{ 
	FDataTableRowHandle                                RowValue;                                                   // 0x0070   (0x0010)  
};

/// Struct /Script/EncountersRuntime.EncounterVariableSelectionsRow_GameplayTag
/// Size: 0x0010 (0x000070 - 0x000080)
struct FEncounterVariableSelectionsRow_GameplayTag : FEncounterVariableSelectionsRow
{ 
	FDataTableRowHandle                                RowValue;                                                   // 0x0070   (0x0010)  
};

/// Struct /Script/EncountersRuntime.EncounterVariableSelectionsRow_GameplayTagContainer
/// Size: 0x0010 (0x000070 - 0x000080)
struct FEncounterVariableSelectionsRow_GameplayTagContainer : FEncounterVariableSelectionsRow
{ 
	FDataTableRowHandle                                RowValue;                                                   // 0x0070   (0x0010)  
};

/// Struct /Script/EncountersRuntime.EncounterVariableSelectionsRow_Integer
/// Size: 0x0010 (0x000070 - 0x000080)
struct FEncounterVariableSelectionsRow_Integer : FEncounterVariableSelectionsRow
{ 
	FDataTableRowHandle                                RowValue;                                                   // 0x0070   (0x0010)  
};

/// Struct /Script/EncountersRuntime.EncounterVariableSelectionsRow_LWMEncounter
/// Size: 0x0010 (0x000070 - 0x000080)
struct FEncounterVariableSelectionsRow_LWMEncounter : FEncounterVariableSelectionsRow
{ 
	FDataTableRowHandle                                RowValue;                                                   // 0x0070   (0x0010)  
};

/// Struct /Script/EncountersRuntime.EncounterVariableSelectionsRow_TagQuery
/// Size: 0x0010 (0x000070 - 0x000080)
struct FEncounterVariableSelectionsRow_TagQuery : FEncounterVariableSelectionsRow
{ 
	FDataTableRowHandle                                RowValue;                                                   // 0x0070   (0x0010)  
};

/// Struct /Script/EncountersRuntime.EncounterVariableSelections_ActorClass
/// Size: 0x0008 (0x000010 - 0x000018)
struct FEncounterVariableSelections_ActorClass : FEncounterVariableSelections
{ 
	class UDataTable*                                  ValueChoiceTable;                                           // 0x0010   (0x0008)  
};

/// Struct /Script/EncountersRuntime.EncounterVariableSelections_Boolean
/// Size: 0x0008 (0x000010 - 0x000018)
struct FEncounterVariableSelections_Boolean : FEncounterVariableSelections
{ 
	class UDataTable*                                  ValueChoiceTable;                                           // 0x0010   (0x0008)  
};

/// Struct /Script/EncountersRuntime.EncounterVariableSelections_Float
/// Size: 0x0008 (0x000010 - 0x000018)
struct FEncounterVariableSelections_Float : FEncounterVariableSelections
{ 
	class UDataTable*                                  ValueChoiceTable;                                           // 0x0010   (0x0008)  
};

/// Struct /Script/EncountersRuntime.EncounterVariableSelections_GameplayTag
/// Size: 0x0008 (0x000010 - 0x000018)
struct FEncounterVariableSelections_GameplayTag : FEncounterVariableSelections
{ 
	class UDataTable*                                  ValueChoiceTable;                                           // 0x0010   (0x0008)  
};

/// Struct /Script/EncountersRuntime.EncounterVariableSelections_GameplayTagContainer
/// Size: 0x0008 (0x000010 - 0x000018)
struct FEncounterVariableSelections_GameplayTagContainer : FEncounterVariableSelections
{ 
	class UDataTable*                                  ValueChoiceTable;                                           // 0x0010   (0x0008)  
};

/// Struct /Script/EncountersRuntime.EncounterVariableSelections_Integer
/// Size: 0x0008 (0x000010 - 0x000018)
struct FEncounterVariableSelections_Integer : FEncounterVariableSelections
{ 
	class UDataTable*                                  ValueChoiceTable;                                           // 0x0010   (0x0008)  
};

/// Struct /Script/EncountersRuntime.EncounterVariableSelections_LWMEncounter
/// Size: 0x0008 (0x000010 - 0x000018)
struct FEncounterVariableSelections_LWMEncounter : FEncounterVariableSelections
{ 
	class UDataTable*                                  ValueChoiceTable;                                           // 0x0010   (0x0008)  
};

/// Struct /Script/EncountersRuntime.EncounterVariableSelections_TagQuery
/// Size: 0x0008 (0x000010 - 0x000018)
struct FEncounterVariableSelections_TagQuery : FEncounterVariableSelections
{ 
	class UDataTable*                                  ValueChoiceTable;                                           // 0x0010   (0x0008)  
};

/// Struct /Script/EncountersRuntime.EncounterVariable_ActorClass
/// Size: 0x0010 (0x000010 - 0x000020)
struct FEncounterVariable_ActorClass : FEncounterVariable
{ 
	FDataTableRowHandle                                RowValue;                                                   // 0x0010   (0x0010)  
};

/// Struct /Script/EncountersRuntime.EncounterVariable_Boolean
/// Size: 0x0010 (0x000010 - 0x000020)
struct FEncounterVariable_Boolean : FEncounterVariable
{ 
	FDataTableRowHandle                                RowValue;                                                   // 0x0010   (0x0010)  
};

/// Struct /Script/EncountersRuntime.EncounterVariable_Float
/// Size: 0x0010 (0x000010 - 0x000020)
struct FEncounterVariable_Float : FEncounterVariable
{ 
	FDataTableRowHandle                                RowValue;                                                   // 0x0010   (0x0010)  
};

/// Struct /Script/EncountersRuntime.EncounterVariable_GameplayTag
/// Size: 0x0010 (0x000010 - 0x000020)
struct FEncounterVariable_GameplayTag : FEncounterVariable
{ 
	FDataTableRowHandle                                RowValue;                                                   // 0x0010   (0x0010)  
};

/// Struct /Script/EncountersRuntime.EncounterVariable_GameplayTagContainer
/// Size: 0x0010 (0x000010 - 0x000020)
struct FEncounterVariable_GameplayTagContainer : FEncounterVariable
{ 
	FDataTableRowHandle                                RowValue;                                                   // 0x0010   (0x0010)  
};

/// Struct /Script/EncountersRuntime.EncounterVariable_Integer
/// Size: 0x0010 (0x000010 - 0x000020)
struct FEncounterVariable_Integer : FEncounterVariable
{ 
	FDataTableRowHandle                                RowValue;                                                   // 0x0010   (0x0010)  
};

/// Struct /Script/EncountersRuntime.EncounterVariable_ItemDefinition
/// Size: 0x0010 (0x000010 - 0x000020)
struct FEncounterVariable_ItemDefinition : FEncounterVariable
{ 
	FDataTableRowHandle                                RowValue;                                                   // 0x0010   (0x0010)  
};

/// Struct /Script/EncountersRuntime.EncounterVariable_LWMEncounter
/// Size: 0x0010 (0x000010 - 0x000020)
struct FEncounterVariable_LWMEncounter : FEncounterVariable
{ 
	FDataTableRowHandle                                RowValue;                                                   // 0x0010   (0x0010)  
};

/// Struct /Script/EncountersRuntime.EncounterVariable_TagQuery
/// Size: 0x0010 (0x000010 - 0x000020)
struct FEncounterVariable_TagQuery : FEncounterVariable
{ 
	FDataTableRowHandle                                RowValue;                                                   // 0x0010   (0x0010)  
};

/// Struct /Script/EncountersRuntime.EncounterVarRow
/// Size: 0x0000 (0x000008 - 0x000008)
struct FEncounterVarRow : FTableRowBase
{ 
};

/// Struct /Script/EncountersRuntime.EncounterVarRow_ActorClass
/// Size: 0x0020 (0x000008 - 0x000028)
struct FEncounterVarRow_ActorClass : FEncounterVarRow
{ 
	SDK_UNDEFINED(32,13226) /* TWeakObjectPtr<UClass*> */ __um(Value);                                             // 0x0008   (0x0020)  
};

/// Struct /Script/EncountersRuntime.EncounterVarRow_Boolean
/// Size: 0x0008 (0x000008 - 0x000010)
struct FEncounterVarRow_Boolean : FEncounterVarRow
{ 
	bool                                               bValue;                                                     // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/EncountersRuntime.EncounterVarRow_Float
/// Size: 0x0008 (0x000008 - 0x000010)
struct FEncounterVarRow_Float : FEncounterVarRow
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/EncountersRuntime.EncounterVarRow_GameplayTag
/// Size: 0x0008 (0x000008 - 0x000010)
struct FEncounterVarRow_GameplayTag : FEncounterVarRow
{ 
	FGameplayTag                                       Value;                                                      // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/EncountersRuntime.EncounterVarRow_GameplayTagContainer
/// Size: 0x0020 (0x000008 - 0x000028)
struct FEncounterVarRow_GameplayTagContainer : FEncounterVarRow
{ 
	FGameplayTagContainer                              Value;                                                      // 0x0008   (0x0020)  
};

/// Struct /Script/EncountersRuntime.EncounterVarRow_Integer
/// Size: 0x0008 (0x000008 - 0x000010)
struct FEncounterVarRow_Integer : FEncounterVarRow
{ 
	int32_t                                            Value;                                                      // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/EncountersRuntime.EncounterVarRow_ItemDefinition
/// Size: 0x0020 (0x000008 - 0x000028)
struct FEncounterVarRow_ItemDefinition : FEncounterVarRow
{ 
	SDK_UNDEFINED(32,13227) /* TWeakObjectPtr<UFortWorldItemDefinition*> */ __um(Value);                           // 0x0008   (0x0020)  
};

/// Struct /Script/EncountersRuntime.EncounterVarRow_LWMEncounter
/// Size: 0x0020 (0x000008 - 0x000028)
struct FEncounterVarRow_LWMEncounter : FEncounterVarRow
{ 
	SDK_UNDEFINED(32,13228) /* TWeakObjectPtr<UFortAthenaLivingWorldEncounter*> */ __um(Value);                    // 0x0008   (0x0020)  
};

/// Struct /Script/EncountersRuntime.EncounterVarRow_TagQuery
/// Size: 0x0048 (0x000008 - 0x000050)
struct FEncounterVarRow_TagQuery : FEncounterVarRow
{ 
	FGameplayTagQuery                                  Value;                                                      // 0x0008   (0x0048)  
};

/// Struct /Script/EncountersRuntime.EndAllMobEncountersStateTreeTaskInstanceData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FEndAllMobEncountersStateTreeTaskInstanceData
{ 
	class AActor*                                      UserActor;                                                  // 0x0000   (0x0008)  
};

/// Struct /Script/EncountersRuntime.EndAllMobEncountersStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
struct FEndAllMobEncountersStateTreeTask : FStateTreeTaskCommonBase
{ 
};

/// Struct /Script/EncountersRuntime.FortVerbMessage_EncounterCompleted
/// Size: 0x0050 (0x000078 - 0x0000C8)
struct FFortVerbMessage_EncounterCompleted : FVerbMessage
{ 
	FSubjectTagsPair                                   EncounterItemDef;                                           // 0x0078   (0x0038)  
	bool                                               bSuccess;                                                   // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00B1   (0x0007)  MISSED
	TArray<FSubjectTagsPair>                           EncounterPlayers;                                           // 0x00B8   (0x0010)  
};

/// Struct /Script/EncountersRuntime.GetAnchorStateTreeTaskInstanceData
/// Size: 0x0058 (0x000000 - 0x000058)
struct FGetAnchorStateTreeTaskInstanceData
{ 
	FGameplayTagQuery                                  AnchorQuery;                                                // 0x0000   (0x0048)  
	SDK_UNDEFINED(8,13229) /* TWeakObjectPtr<AActor*> */ __um(AnchorActor);                                        // 0x0048   (0x0008)  
	class AActor*                                      UserActor;                                                  // 0x0050   (0x0008)  
};

/// Struct /Script/EncountersRuntime.GetAnchorStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
struct FGetAnchorStateTreeTask : FStateTreeTaskCommonBase
{ 
};

/// Struct /Script/EncountersRuntime.LWMEncounterAddGameplayEffectStateTreeTaskInstanceData
/// Size: 0x0088 (0x000000 - 0x000088)
struct FLWMEncounterAddGameplayEffectStateTreeTaskInstanceData
{ 
	FGameplayTagQuery                                  EncounterQuery;                                             // 0x0000   (0x0048)  
	class UClass*                                      GameplayEffect;                                             // 0x0048   (0x0008)  
	bool                                               bRemoveEffectOnExit;                                        // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0051   (0x0007)  MISSED
	FGameplayTagContainer                              IdentifierTags;                                             // 0x0058   (0x0020)  
	class AActor*                                      UserActor;                                                  // 0x0078   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0080   (0x0008)  MISSED
};

/// Struct /Script/EncountersRuntime.LWMEncounterAddGameplayEffectStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
struct FLWMEncounterAddGameplayEffectStateTreeTask : FStateTreeTaskCommonBase
{ 
};

/// Struct /Script/EncountersRuntime.LWMEncounterAdvanceStateTreeTaskInstanceData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FLWMEncounterAdvanceStateTreeTaskInstanceData
{ 
	FGameplayTagQuery                                  EncounterQuery;                                             // 0x0000   (0x0048)  
	class AActor*                                      UserActor;                                                  // 0x0048   (0x0008)  
};

/// Struct /Script/EncountersRuntime.LWMEncounterAdvanceStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
struct FLWMEncounterAdvanceStateTreeTask : FStateTreeTaskCommonBase
{ 
};

/// Struct /Script/EncountersRuntime.LWMEncounterAssignPointProvidersStateTreeTaskInstanceData
/// Size: 0x0098 (0x000000 - 0x000098)
struct FLWMEncounterAssignPointProvidersStateTreeTaskInstanceData
{ 
	FGameplayTagQuery                                  EncounterQuery;                                             // 0x0000   (0x0048)  
	FGameplayTagQuery                                  PatrolPathTagQuery;                                         // 0x0048   (0x0048)  
	class AActor*                                      UserActor;                                                  // 0x0090   (0x0008)  
};

/// Struct /Script/EncountersRuntime.LWMEncounterAssignPointProvidersStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
struct FLWMEncounterAssignPointProvidersStateTreeTask : FStateTreeTaskCommonBase
{ 
};

/// Struct /Script/EncountersRuntime.DynamicEncounterEntry
/// Size: 0x0068 (0x000000 - 0x000068)
struct FDynamicEncounterEntry
{ 
	int32_t                                            SpawnCount;                                                 // 0x0000   (0x0004)  
	int32_t                                            MaxConcurrentSpawns;                                        // 0x0004   (0x0004)  
	bool                                               bUseEncounterTagQuery;                                      // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	FGameplayTagQuery                                  EncounterTagQuery;                                          // 0x0010   (0x0048)  
	TArray<FFortAthenaLivingWorldEventDataActorSpawnDescription> ActorDescriptions;                                // 0x0058   (0x0010)  
};

/// Struct /Script/EncountersRuntime.LWMEncounterStartSharedStateTreeTaskInstanceData
/// Size: 0x0138 (0x000000 - 0x000138)
struct FLWMEncounterStartSharedStateTreeTaskInstanceData
{ 
	FGameplayTagQuery                                  PointProviderTagQuery;                                      // 0x0000   (0x0048)  
	bool                                               bUseVolumeAsAnchor;                                         // 0x0048   (0x0001)  
	bool                                               bAttachVolumeToSpawn;                                       // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x004A   (0x0006)  MISSED
	FGameplayTagQuery                                  AnchorPointTagQuery;                                        // 0x0050   (0x0048)  
	FScalableFloat                                     LeashRadiusInner;                                           // 0x0098   (0x0028)  
	FScalableFloat                                     LeashRadiusOuter;                                           // 0x00C0   (0x0028)  
	FGameplayTagContainer                              EncounterIdentifierTags;                                    // 0x00E8   (0x0020)  
	FGameplayTagContainer                              ActorTags;                                                  // 0x0108   (0x0020)  
	bool                                               bPauseOnExit;                                               // 0x0128   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0129   (0x0007)  MISSED
	class AActor*                                      UserActor;                                                  // 0x0130   (0x0008)  
};

/// Struct /Script/EncountersRuntime.LWMEncounterDynamicStartStateTreeTaskInstanceData
/// Size: 0x0038 (0x000138 - 0x000170)
struct FLWMEncounterDynamicStartStateTreeTaskInstanceData : FLWMEncounterStartSharedStateTreeTaskInstanceData
{ 
	TArray<FDynamicEncounterEntry>                     DynamicEncounterEntries;                                    // 0x0138   (0x0010)  
	SDK_UNDEFINED(32,13230) /* TWeakObjectPtr<UFortAthenaLivingWorldEncounter*> */ __um(DynamicEmptyEncounter);    // 0x0148   (0x0020)  
	SDK_UNDEFINED(8,13231) /* TWeakObjectPtr<ULWMEncounterInstance*> */ __um(EncounterInstance);                   // 0x0168   (0x0008)  
};

/// Struct /Script/EncountersRuntime.LWMEncounterDynamicStartStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
struct FLWMEncounterDynamicStartStateTreeTask : FStateTreeTaskCommonBase
{ 
};

/// Struct /Script/EncountersRuntime.LWMEncounterAlertLevelTargetInfo
/// Size: 0x000C (0x000000 - 0x00000C)
struct FLWMEncounterAlertLevelTargetInfo
{ 
	EPerceptionState                                   AwarePerceptionState;                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              AwareForgetTime;                                            // 0x0004   (0x0004)  
	float                                              AwareForgetDistance;                                        // 0x0008   (0x0004)  
};

/// Struct /Script/EncountersRuntime.LWMEncounterInstanceEffectInfo
/// Size: 0x0058 (0x000000 - 0x000058)
struct FLWMEncounterInstanceEffectInfo
{ 
	class UClass*                                      GameplayEffect;                                             // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x0008   (0x0050)  MISSED
};

/// Struct /Script/EncountersRuntime.LWMEncounterPauseStateTreeTaskInstanceData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FLWMEncounterPauseStateTreeTaskInstanceData
{ 
	FGameplayTagQuery                                  EncounterQuery;                                             // 0x0000   (0x0048)  
	class AActor*                                      UserActor;                                                  // 0x0048   (0x0008)  
};

/// Struct /Script/EncountersRuntime.LWMEncounterPauseStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
struct FLWMEncounterPauseStateTreeTask : FStateTreeTaskCommonBase
{ 
};

/// Struct /Script/EncountersRuntime.LWMEncounterRemoveGameplayEffectStateTreeTaskInstanceData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FLWMEncounterRemoveGameplayEffectStateTreeTaskInstanceData
{ 
	FGameplayTagQuery                                  GameplayEffectQuery;                                        // 0x0000   (0x0048)  
	class AActor*                                      UserActor;                                                  // 0x0048   (0x0008)  
};

/// Struct /Script/EncountersRuntime.LWMEncounterRemoveGameplayEffectStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
struct FLWMEncounterRemoveGameplayEffectStateTreeTask : FStateTreeTaskCommonBase
{ 
};

/// Struct /Script/EncountersRuntime.LWMEncounterResumeStateTreeTaskInstanceData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FLWMEncounterResumeStateTreeTaskInstanceData
{ 
	FGameplayTagQuery                                  EncounterQuery;                                             // 0x0000   (0x0048)  
	class AActor*                                      UserActor;                                                  // 0x0048   (0x0008)  
};

/// Struct /Script/EncountersRuntime.LWMEncounterResumeStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
struct FLWMEncounterResumeStateTreeTask : FStateTreeTaskCommonBase
{ 
};

/// Struct /Script/EncountersRuntime.LWMEncounterRow
/// Size: 0x0058 (0x000008 - 0x000060)
struct FLWMEncounterRow : FTableRowBase
{ 
	SDK_UNDEFINED(32,13232) /* TWeakObjectPtr<UFortAthenaLivingWorldEncounter*> */ __um(Encounter);                // 0x0008   (0x0020)  
	TArray<FFortAthenaLivingWorldEventDataActorSpawnDescription> DynamicActorDescriptions;                         // 0x0028   (0x0010)  
	FGameplayTagContainer                              Tags;                                                       // 0x0038   (0x0020)  
	float                                              Weight;                                                     // 0x0058   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x005C   (0x0004)  MISSED
};

/// Struct /Script/EncountersRuntime.LWMEncounterSetAlertLevelStateTreeTaskInstanceData
/// Size: 0x0078 (0x000000 - 0x000078)
struct FLWMEncounterSetAlertLevelStateTreeTaskInstanceData
{ 
	FGameplayTagQuery                                  EncounterQuery;                                             // 0x0000   (0x0048)  
	bool                                               bOnlyRaiseLevel;                                            // 0x0048   (0x0001)  
	EAlertLevel                                        AlertLevel;                                                 // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x004A   (0x0002)  MISSED
	FLWMEncounterAlertLevelTargetInfo                  HasThreatTargetInfo;                                        // 0x004C   (0x000C)  
	FLWMEncounterAlertLevelTargetInfo                  NoThreatTargetInfo;                                         // 0x0058   (0x000C)  
	SDK_UNDEFINED(8,13233) /* TWeakObjectPtr<AActor*> */ __um(TargetActor);                                        // 0x0064   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x006C   (0x0004)  MISSED
	class AActor*                                      UserActor;                                                  // 0x0070   (0x0008)  
};

/// Struct /Script/EncountersRuntime.LWMEncounterSetAlertLevelStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
struct FLWMEncounterSetAlertLevelStateTreeTask : FStateTreeTaskCommonBase
{ 
};

/// Struct /Script/EncountersRuntime.LWMEncounterSetStageStateTreeTaskInstanceData
/// Size: 0x0058 (0x000000 - 0x000058)
struct FLWMEncounterSetStageStateTreeTaskInstanceData
{ 
	FGameplayTagQuery                                  EncounterQuery;                                             // 0x0000   (0x0048)  
	int32_t                                            StageIndex;                                                 // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	class AActor*                                      UserActor;                                                  // 0x0050   (0x0008)  
};

/// Struct /Script/EncountersRuntime.LWMEncounterSetStageStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
struct FLWMEncounterSetStageStateTreeTask : FStateTreeTaskCommonBase
{ 
};

/// Struct /Script/EncountersRuntime.LWMEncounterStartStateTreeTaskInstanceData
/// Size: 0x0078 (0x000138 - 0x0001B0)
struct FLWMEncounterStartStateTreeTaskInstanceData : FLWMEncounterStartSharedStateTreeTaskInstanceData
{ 
	bool                                               bUseEncounterTagQuery;                                      // 0x0138   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0139   (0x0007)  MISSED
	FGameplayTagQuery                                  LWMEncounterTagQuery;                                       // 0x0140   (0x0048)  
	SDK_UNDEFINED(32,13234) /* TWeakObjectPtr<UFortAthenaLivingWorldEncounter*> */ __um(LWMEncounter);             // 0x0188   (0x0020)  
	SDK_UNDEFINED(8,13235) /* TWeakObjectPtr<ULWMEncounterInstance*> */ __um(EncounterInstance);                   // 0x01A8   (0x0008)  
};

/// Struct /Script/EncountersRuntime.LWMEncounterStartStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
struct FLWMEncounterStartStateTreeTask : FStateTreeTaskCommonBase
{ 
};

/// Struct /Script/EncountersRuntime.LWMEncounterStopStateTreeTaskInstanceData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FLWMEncounterStopStateTreeTaskInstanceData
{ 
	FGameplayTagQuery                                  EncounterQuery;                                             // 0x0000   (0x0048)  
	class AActor*                                      UserActor;                                                  // 0x0048   (0x0008)  
};

/// Struct /Script/EncountersRuntime.LWMEncounterStopStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
struct FLWMEncounterStopStateTreeTask : FStateTreeTaskCommonBase
{ 
};

/// Struct /Script/EncountersRuntime.LWMEncounterUpdateLeashStateTreeTaskInstanceData
/// Size: 0x00F0 (0x000000 - 0x0000F0)
struct FLWMEncounterUpdateLeashStateTreeTaskInstanceData
{ 
	FGameplayTagQuery                                  EncounterQuery;                                             // 0x0000   (0x0048)  
	bool                                               bUseVolumeAsAnchor;                                         // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0049   (0x0007)  MISSED
	FGameplayTagQuery                                  AnchorPointTagQuery;                                        // 0x0050   (0x0048)  
	FScalableFloat                                     LeashRadiusInner;                                           // 0x0098   (0x0028)  
	FScalableFloat                                     LeashRadiusOuter;                                           // 0x00C0   (0x0028)  
	class AActor*                                      UserActor;                                                  // 0x00E8   (0x0008)  
};

/// Struct /Script/EncountersRuntime.LWMEncounterUpdateLeashStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
struct FLWMEncounterUpdateLeashStateTreeTask : FStateTreeTaskCommonBase
{ 
};

/// Struct /Script/EncountersRuntime.PauseMobEncounterStateTreeTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPauseMobEncounterStateTreeTaskInstanceData
{ 
	FGameplayTag                                       MobIdentifier;                                              // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	class AActor*                                      UserActor;                                                  // 0x0008   (0x0008)  
};

/// Struct /Script/EncountersRuntime.PauseMobEncounterStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
struct FPauseMobEncounterStateTreeTask : FStateTreeTaskCommonBase
{ 
};

/// Struct /Script/EncountersRuntime.ResumeMobEncounterStateTreeTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FResumeMobEncounterStateTreeTaskInstanceData
{ 
	FGameplayTag                                       MobIdentifier;                                              // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	class AActor*                                      UserActor;                                                  // 0x0008   (0x0008)  
};

/// Struct /Script/EncountersRuntime.ResumeMobEncounterStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
struct FResumeMobEncounterStateTreeTask : FStateTreeTaskCommonBase
{ 
};

/// Struct /Script/EncountersRuntime.SpawnActorStateTreeTaskInstanceData
/// Size: 0x00E8 (0x000000 - 0x0000E8)
struct FSpawnActorStateTreeTaskInstanceData
{ 
	SDK_UNDEFINED(32,13236) /* TWeakObjectPtr<UClass*> */ __um(ActorClass);                                        // 0x0000   (0x0020)  
	FGameplayTagQuery                                  AnchorQuery;                                                // 0x0020   (0x0048)  
	FVector                                            AnchorOffset;                                               // 0x0068   (0x0018)  
	bool                                               bEnablePhysics;                                             // 0x0080   (0x0001)  
	bool                                               bAttachEncounterVolume;                                     // 0x0081   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0082   (0x0006)  MISSED
	FGameplayTagContainer                              ActorTags;                                                  // 0x0088   (0x0020)  
	FGameplayTagContainer                              ActorIdentifierTags;                                        // 0x00A8   (0x0020)  
	bool                                               bWaitForSpawnedActor;                                       // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00C9   (0x0003)  MISSED
	SDK_UNDEFINED(8,13237) /* TWeakObjectPtr<AActor*> */ __um(SpawnedActor);                                       // 0x00CC   (0x0008)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x00D4   (0x0004)  MISSED
	class AActor*                                      UserActor;                                                  // 0x00D8   (0x0008)  
	class USpawnActorTaskHelper*                       SpawnActorHelper;                                           // 0x00E0   (0x0008)  
};

/// Struct /Script/EncountersRuntime.SpawnActorStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
struct FSpawnActorStateTreeTask : FStateTreeTaskCommonBase
{ 
};

/// Struct /Script/EncountersRuntime.StartMobEncounterStateTreeTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FStartMobEncounterStateTreeTaskInstanceData
{ 
	FGameplayTag                                       MobIdentifier;                                              // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	class AActor*                                      UserActor;                                                  // 0x0008   (0x0008)  
};

/// Struct /Script/EncountersRuntime.StartMobEncounterStateTreeTask
/// Size: 0x0008 (0x000020 - 0x000028)
struct FStartMobEncounterStateTreeTask : FStateTreeTaskCommonBase
{ 
	bool                                               bStopEncounterOnExit;                                       // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/EncountersRuntime.StopMobEncounterStateTreeTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FStopMobEncounterStateTreeTaskInstanceData
{ 
	FGameplayTag                                       MobIdentifier;                                              // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	class AActor*                                      UserActor;                                                  // 0x0008   (0x0008)  
};

/// Struct /Script/EncountersRuntime.StopMobEncounterStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
struct FStopMobEncounterStateTreeTask : FStateTreeTaskCommonBase
{ 
};

/// Struct /Script/EncountersRuntime.EncounterGroupEffectInfo
/// Size: 0x0050 (0x000000 - 0x000050)
struct FEncounterGroupEffectInfo
{ 
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0000   (0x0050)  MISSED
};

/// Struct /Script/EncountersRuntime.EncounterVerbTransitionStateTreeTaskInstanceData
/// Size: 0x0048 (0x000000 - 0x000048)
struct FEncounterVerbTransitionStateTreeTaskInstanceData
{ 
	TArray<FInstancedStruct>                           ObjectiveVerbs;                                             // 0x0000   (0x0010)  
	int32_t                                            ObjectiveValueThreshold;                                    // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	class AActor*                                      UserActor;                                                  // 0x0018   (0x0008)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x0020   (0x0028)  MISSED
};

/// Struct /Script/EncountersRuntime.EncounterVerbTransitionStateTreeTask
/// Size: 0x0008 (0x000020 - 0x000028)
struct FEncounterVerbTransitionStateTreeTask : FStateTreeTaskCommonBase
{ 
	FStateTreeStateLink                                TransitionTo;                                               // 0x0020   (0x0002)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0022   (0x0006)  MISSED
};

/// Struct /Script/EncountersRuntime.LWMEncounterAlertLevelTransitionStateTreeTaskInstanceData
/// Size: 0x0078 (0x000000 - 0x000078)
struct FLWMEncounterAlertLevelTransitionStateTreeTaskInstanceData
{ 
	FGameplayTagQuery                                  EncounterQuery;                                             // 0x0000   (0x0048)  
	TArray<EAlertLevel>                                AlertLevels;                                                // 0x0048   (0x0010)  
	EAlertLevelComparisonOperator                      ComparisonOperator;                                         // 0x0058   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0059   (0x0003)  MISSED
	int32_t                                            Value;                                                      // 0x005C   (0x0004)  
	class AActor*                                      UserActor;                                                  // 0x0060   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0068   (0x0010)  MISSED
};

/// Struct /Script/EncountersRuntime.LWMEncounterAlertLevelTransitionStateTreeTask
/// Size: 0x0008 (0x000020 - 0x000028)
struct FLWMEncounterAlertLevelTransitionStateTreeTask : FStateTreeTaskCommonBase
{ 
	FStateTreeStateLink                                TransitionTo;                                               // 0x0020   (0x0002)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0022   (0x0006)  MISSED
};

/// Struct /Script/EncountersRuntime.LWMEncounterKillCountTransitionStateTreeTaskInstanceData
/// Size: 0x0068 (0x000000 - 0x000068)
struct FLWMEncounterKillCountTransitionStateTreeTaskInstanceData
{ 
	FGameplayTagQuery                                  EncounterQuery;                                             // 0x0000   (0x0048)  
	uint32_t                                           Value;                                                      // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	class AActor*                                      UserActor;                                                  // 0x0050   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0058   (0x0010)  MISSED
};

/// Struct /Script/EncountersRuntime.LWMEncounterKillCountTransitionStateTreeTask
/// Size: 0x0008 (0x000020 - 0x000028)
struct FLWMEncounterKillCountTransitionStateTreeTask : FStateTreeTaskCommonBase
{ 
	FStateTreeStateLink                                TransitionTo;                                               // 0x0020   (0x0002)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0022   (0x0006)  MISSED
};

/// Struct /Script/EncountersRuntime.LWMEncounterRemainingCountTransitionStateTreeTaskInstanceData
/// Size: 0x0068 (0x000000 - 0x000068)
struct FLWMEncounterRemainingCountTransitionStateTreeTaskInstanceData
{ 
	FGameplayTagQuery                                  EncounterQuery;                                             // 0x0000   (0x0048)  
	int32_t                                            Value;                                                      // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	class AActor*                                      UserActor;                                                  // 0x0050   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0058   (0x0010)  MISSED
};

/// Struct /Script/EncountersRuntime.LWMEncounterRemainingCountTransitionStateTreeTask
/// Size: 0x0008 (0x000020 - 0x000028)
struct FLWMEncounterRemainingCountTransitionStateTreeTask : FStateTreeTaskCommonBase
{ 
	FStateTreeStateLink                                TransitionTo;                                               // 0x0020   (0x0002)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0022   (0x0006)  MISSED
};

/// Struct /Script/EncountersRuntime.FortVerbFilter_EncounterCompleted
/// Size: 0x00A0 (0x0000A0 - 0x000140)
struct FFortVerbFilter_EncounterCompleted : FObjectiveFilter
{ 
	FObjectiveSubjectTags                              EncounterItemDef;                                           // 0x00A0   (0x0048)  
	EEncounterSuccessState                             SuccessState;                                               // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00E9   (0x0007)  MISSED
	FObjectiveSubjectTags_Progressible                 Participants;                                               // 0x00F0   (0x0050)  
};

