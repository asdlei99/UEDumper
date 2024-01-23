
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AIModule
/// dependency: AssembledMeshSystem
/// dependency: AtomRuntime
/// dependency: ClientPilot
/// dependency: CoreUObject
/// dependency: CraftingRuntime
/// dependency: DataflowCore
/// dependency: DataRegistry
/// dependency: DeltaFileSystem
/// dependency: DeveloperSettings
/// dependency: EnergyRuntime
/// dependency: Engine
/// dependency: EnhancedInput
/// dependency: FortGameplayGraph
/// dependency: FortniteAI
/// dependency: FortniteGame
/// dependency: FortniteGameFramework
/// dependency: GameFeatures
/// dependency: GameplayAbilities
/// dependency: GameplayEventRouter
/// dependency: GameplayGraph
/// dependency: GameplayInteractionsModule
/// dependency: GameplayStateMachine
/// dependency: GameplayTags
/// dependency: GeometryCollectionEngine
/// dependency: JunoWorldManagement
/// dependency: MassEntity
/// dependency: McpProfileSysCore
/// dependency: MeshNetwork
/// dependency: ModularGameplay
/// dependency: NavigationSystem
/// dependency: NetCore
/// dependency: PhysicsCore
/// dependency: PlayspaceSystem
/// dependency: ProxyTable
/// dependency: ReplicationGraph
/// dependency: SmartObjectsModule
/// dependency: SoundLibrary
/// dependency: SpatialMetricsCore
/// dependency: StateTreeModule
/// dependency: StructUtils
/// dependency: WorldConditions

/// Class /Script/JunoGameNative.FortAutomationRpcManager_Juno
/// Size: 0x0050 (0x000058 - 0x0000A8)
class UFortAutomationRpcManager_Juno : public UFortAutomationRpcManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/JunoGameNative.FortQueryGenerator_PointsOutsideVolume
/// Size: 0x0078 (0x000088 - 0x000100)
class UFortQueryGenerator_PointsOutsideVolume : public UEnvQueryGenerator_ProjectedPoints
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FAIDataProviderFloatValue)                 SpaceBetween                                                OFFSET(getStruct<T>, {0x88, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 NumberOfRingsAroundVolume                                   OFFSET(getStruct<T>, {0xC0, 56, 0, 0})
	CMember(class UClass*)                             GenerateInVolume                                            OFFSET(get<T>, {0xF8, 8, 0, 0})
};

/// Class /Script/JunoGameNative.JunoBuildingTrackedActorInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoBuildingTrackedActorInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoBuildingTrackedActorInterface.ShouldBeTrackedByMetrics
	// bool ShouldBeTrackedByMetrics();                                                                                         // [0xf7a468] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/JunoGameNative.JunoBuildingTrackedActorInterface.GetNumberOfRelevantActors
	// int32_t GetNumberOfRelevantActors();                                                                                     // [0x6345e6c] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/JunoGameNative.JunoBuildingTrackedActorInterface.GetNetRelevanceDistanceOverride
	// float GetNetRelevanceDistanceOverride();                                                                                 // [0xb8e41e0] Native|Event|Public|BlueprintEvent|Const 
};

/// Class /Script/JunoGameNative.JunoAbility_PlayerPushPhysicsObject
/// Size: 0x0130 (0x000B60 - 0x000C90)
class UJunoAbility_PlayerPushPhysicsObject : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3216;

public:
	CMember(EFortPhysicsSimSize)                       MaxPhysicsObjectSizeToPush                                  OFFSET(get<T>, {0xB60, 1, 0, 0})
	CMember(EFortPhysicsSimSize)                       MinPhysicsObjectSizeToPush                                  OFFSET(get<T>, {0xB61, 1, 0, 0})
	SMember(FGameplayTagContainer)                     NoTagsPusher                                                OFFSET(getStruct<T>, {0xB68, 32, 0, 0})
	SMember(FGameplayTagContainer)                     NoTagsPushedObject                                          OFFSET(getStruct<T>, {0xB88, 32, 0, 0})
	CMember(class UAnimMontage*)                       DefaultPushMontage                                          OFFSET(get<T>, {0xBA8, 8, 0, 0})
	CMember(TArray<FPushMontageData>)                  SpecializedPushMontages                                     OFFSET(get<T>, {0xBB0, 16, 0, 0})
	SMember(FGameplayTagQuery)                         EnergyComponentQuery                                        OFFSET(getStruct<T>, {0xBC0, 72, 0, 0})
	SMember(FScalableFloat)                            EnergyInitialCost                                           OFFSET(getStruct<T>, {0xC08, 40, 0, 0})
	SMember(FScalableFloat)                            EnergyDrainPerSecond                                        OFFSET(getStruct<T>, {0xC30, 40, 0, 0})
	DMember(bool)                                      bEnergyExhausted                                            OFFSET(get<bool>, {0xC58, 1, 0, 0})
	CMember(TWeakObjectPtr<UFortComponent_Energy*>)    CachedEnergyComponent                                       OFFSET(get<T>, {0xC5C, 8, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   TrackedObjectToPush                                         OFFSET(get<T>, {0xC70, 8, 0, 0})
	CMember(EFortPhysicsSimSize)                       TrackedObjectSimSize                                        OFFSET(get<T>, {0xC78, 1, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoAbility_PlayerPushPhysicsObject.StopUsingEnergy
	// void StopUsingEnergy();                                                                                                  // [0xb8e4640] Final|Native|Protected|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoAbility_PlayerPushPhysicsObject.PotentiallyStartUsingEnergy
	// void PotentiallyStartUsingEnergy();                                                                                      // [0xb8e4618] Final|Native|Protected|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoAbility_PlayerPushPhysicsObject.OnPlayerHit
	// void OnPlayerHit(class AActor* HitPlayer, class AActor* HitActor, FVector NormalImpulse, FHitResult& Hit);               // [0xb8e43a0] Final|Native|Private|HasOutParms|HasDefaults 
	// Function /Script/JunoGameNative.JunoAbility_PlayerPushPhysicsObject.OnEnergyFullyRecharged
	// void OnEnergyFullyRecharged(class UFortComponent_Energy* EnergyComponentRecharged);                                      // [0xb8e430c] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoAbility_PlayerPushPhysicsObject.OnEnergyDrained
	// void OnEnergyDrained(class UFortComponent_Energy* EnergyComponentDrained);                                               // [0xb8e4278] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoAbility_PlayerPushPhysicsObject.GetMontageToPlay
	// class UAnimMontage* GetMontageToPlay();                                                                                  // [0xb8e41bc] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoAbility_PlayerPushPhysicsObject.CancelPushingPhysicsObject
	// void CancelPushingPhysicsObject();                                                                                       // [0x32e6c74] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoAccountItemDefinitionOverrideManager
/// Size: 0x0168 (0x000028 - 0x000190)
class UJunoAccountItemDefinitionOverrideManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	CMember(class UFortHeroType*)                      JunoHeroDefinition                                          OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UDataTable*)                         DefaultCharacters                                           OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(TMap<TWeakObjectPtr<UClass*>, TWeakObjectPtr<UClass*>>) PreviewActorClasses                            OFFSET(get<T>, {0x40, 80, 0, 0})
	CMember(TMap<TWeakObjectPtr<UClass*>, FGameplayTagContainer>) GameplayTagParentsToRemoveFromOverrides          OFFSET(get<T>, {0x90, 80, 0, 0})
	CMember(TMap<TWeakObjectPtr<UClass*>, FGameplayTagContainer>) GameplayTagsToAdd                                OFFSET(get<T>, {0xE0, 80, 0, 0})
	CMember(TMap<FPrimaryAssetId, FJunoAccountItemDefinitionOverride>) Overrides                                   OFFSET(get<T>, {0x130, 80, 0, 0})
};

/// Class /Script/JunoGameNative.JunoAccountItemOverrideDefinition
/// Size: 0x0078 (0x000030 - 0x0000A8)
class UJunoAccountItemOverrideDefinition : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FGameplayTagContainer)                     GameplayTagsToAdd                                           OFFSET(getStruct<T>, {0x30, 32, 0, 0})
	DMember(bool)                                      bOverrideFrontendTransform                                  OFFSET(get<bool>, {0x50, 1, 0, 0})
	DMember(float)                                     FrontendPreviewScale                                        OFFSET(get<float>, {0x54, 4, 0, 0})
	SMember(FVector)                                   FrontendPreviewPivotOffset                                  OFFSET(getStruct<T>, {0x58, 24, 0, 0})
	SMember(FRotator)                                  FrontendPreviewInitialRotation                              OFFSET(getStruct<T>, {0x70, 24, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   PreviewActorClass                                           OFFSET(get<T>, {0x88, 32, 0, 0})
};

/// Class /Script/JunoGameNative.JunoAthenaCharacterItemOverrideDefinition
/// Size: 0x0068 (0x0000A8 - 0x000110)
class UJunoAthenaCharacterItemOverrideDefinition : public UJunoAccountItemOverrideDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(TWeakObjectPtr<UAthenaCharacterItemDefinition*>) BaseAthenaCharacterItemDefinition                     OFFSET(get<T>, {0xA8, 32, 0, 0})
	CMember(TWeakObjectPtr<UAssembledMeshSchema*>)     AssembledMeshSchema                                         OFFSET(get<T>, {0xC8, 32, 0, 0})
	CMember(TWeakObjectPtr<UAnimMontage*>)             FrontendAnimMontageIdleOverride                             OFFSET(get<T>, {0xE8, 32, 0, 0})
	DMember(float)                                     PreviewPawnScale                                            OFFSET(get<float>, {0x108, 4, 0, 0})
};

/// Class /Script/JunoGameNative.JunoAthenaDanceItemOverrideDefinition
/// Size: 0x00E8 (0x0000A8 - 0x000190)
class UJunoAthenaDanceItemOverrideDefinition : public UJunoAccountItemOverrideDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	CMember(TWeakObjectPtr<UAthenaDanceItemDefinition*>) BaseAthenaDanceItemDefinition                             OFFSET(get<T>, {0xA8, 32, 0, 0})
	CMember(TWeakObjectPtr<UAnimMontage*>)             Animation                                                   OFFSET(get<T>, {0xC8, 32, 0, 0})
	CMember(TWeakObjectPtr<UAnimMontage*>)             AnimationFemaleOverride                                     OFFSET(get<T>, {0xE8, 32, 0, 0})
	CMember(TArray<FFortEmoteMapping>)                 AnimationOverrides                                          OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(TWeakObjectPtr<UAnimMontage*>)             FrontEndAnimation                                           OFFSET(get<T>, {0x118, 32, 0, 0})
	CMember(TWeakObjectPtr<UAnimMontage*>)             FrontEndAnimationFemaleOverride                             OFFSET(get<T>, {0x138, 32, 0, 0})
	CMember(TArray<FFortEmoteMapping>)                 FrontEndAnimationOverrides                                  OFFSET(get<T>, {0x158, 16, 0, 0})
	SMember(FVector)                                   GroupEmotePositionOffset                                    OFFSET(getStruct<T>, {0x168, 24, 0, 0})
	DMember(float)                                     GroupEmotePositionOffsetTolerance                           OFFSET(get<float>, {0x180, 4, 0, 0})
	DMember(float)                                     GroupEmoteFollowDistance                                    OFFSET(get<float>, {0x184, 4, 0, 0})
	DMember(float)                                     WalkForwardSpeed                                            OFFSET(get<float>, {0x188, 4, 0, 0})
};

/// Class /Script/JunoGameNative.JunoActionConfig
/// Size: 0x0010 (0x000028 - 0x000038)
class UJunoActionConfig : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UClass*)                             JunoActionClass                                             OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(EJunoActionExecutionConfig)                JunoActionExecutionConfig                                   OFFSET(get<T>, {0x30, 1, 0, 0})
};

/// Class /Script/JunoGameNative.JunoActionConfig_StaticMesh
/// Size: 0x0008 (0x000038 - 0x000040)
class UJunoActionConfig_StaticMesh : public UJunoActionConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class UStaticMesh*)                        StaticMesh                                                  OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/JunoGameNative.JunoActorAttributeOverrideComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UJunoActorAttributeOverrideComponent : public UFortBuildingActorTagComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FDataRegistryType)                         AttributeOverrideDataRegistry                               OFFSET(getStruct<T>, {0xA0, 4, 0, 0})
	SMember(FDataRegistryId)                           DataRegistryItemId                                          OFFSET(getStruct<T>, {0xA4, 8, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoActorAttributeOverrideComponent.SetupHealthAttributeSet
	// void SetupHealthAttributeSet();                                                                                          // [0xb8e462c] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoActorAttributeOverrideComponent.GetSecondaryLootTier
	// FName GetSecondaryLootTier();                                                                                            // [0xb8e4240] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoActorAttributeOverrideComponent.GetPrimaryLootTier
	// FName GetPrimaryLootTier();                                                                                              // [0xb8e4208] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoActorInstancesReportHandler
/// Size: 0x0028 (0x000028 - 0x000050)
class UJunoActorInstancesReportHandler : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/JunoGameNative.JunoPersistenceFeatureDataActor
/// Size: 0x0040 (0x000290 - 0x0002D0)
class AJunoPersistenceFeatureDataActor : public AInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	SMember(FGuid)                                     SavedActorGuid                                              OFFSET(getStruct<T>, {0x2B8, 16, 0, 0})
	DMember(int32_t)                                   Version                                                     OFFSET(get<int32_t>, {0x2C8, 4, 0, 0})
	DMember(bool)                                      bSpawnedByLevelSaveRecord                                   OFFSET(get<bool>, {0x2CC, 1, 0, 0})
	DMember(bool)                                      bForceDirty                                                 OFFSET(get<bool>, {0x2CD, 1, 0, 0})
	DMember(bool)                                      bDirty                                                      OFFSET(get<bool>, {0x2CE, 1, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoPersistenceFeatureDataActor.OnPersistentDataModified
	// void OnPersistentDataModified();                                                                                         // [0x635fdd8] Native|Protected|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoAIPersistenceFeatureDataActor
/// Size: 0x0130 (0x0002D0 - 0x000400)
class AJunoAIPersistenceFeatureDataActor : public AJunoPersistenceFeatureDataActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1024;

public:
	SMember(FSavedAIDataManager)                       SavedAIData                                                 OFFSET(getStruct<T>, {0x2E0, 288, 0, 0})
};

/// Class /Script/JunoGameNative.JunoAIPersistenceFeatureDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoAIPersistenceFeatureDataInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoAIPersistenceFeatureModule
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UJunoAIPersistenceFeatureModule : public UPersistenceFrameworkModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/JunoGameNative.JunoBasePFWContainer
/// Size: 0x00A0 (0x000140 - 0x0001E0)
class UJunoBasePFWContainer : public UPersistenceFrameworkContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
};

/// Class /Script/JunoGameNative.JunoBasePFWPersistenceFeatureDataContainer
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoBasePFWPersistenceFeatureDataContainer : public UJunoBasePFWContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
};

/// Class /Script/JunoGameNative.JunoAIPersistenceFeatureData_Container
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoAIPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
};

/// Class /Script/JunoGameNative.JunoAlterationCraftingComponent
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class UJunoAlterationCraftingComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(TWeakObjectPtr<UCraftingObjectComponent*>) CachedCraftingObjectComponent                               OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(TWeakObjectPtr<UDataTable*>)               WeaponEssenceDataTable                                      OFFSET(get<T>, {0xA8, 32, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoAlterationCraftingComponent.OnCraftingSuccess
	// void OnCraftingSuccess(FCraftingObjectSuccessEvent& Event);                                                              // [0xb8e7358] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoAlterationCraftingComponent.OnCheckValidItemType
	// bool OnCheckValidItemType(class AFortPlayerController* Instigator);                                                      // [0xb8e72ec] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoAlterationCraftingComponent.HandleCraftingStateChanged
	// void HandleCraftingStateChanged(FCraftingObjectStateChangedEvent& Event);                                                // [0xb8e6ebc] Final|Native|Private|HasOutParms 
};

/// Class /Script/JunoGameNative.JunoAnalytics
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoAnalytics : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoAnimNotifyState_QueueInput
/// Size: 0x0068 (0x000030 - 0x000098)
class UJunoAnimNotifyState_QueueInput : public UAnimNotifyState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	DMember(bool)                                      bQueueMantisInput                                           OFFSET(get<bool>, {0x30, 1, 0, 0})
	SMember(FGameplayTagContainer)                     GameplayEventTagsToQueue                                    OFFSET(getStruct<T>, {0x38, 32, 0, 0})
	SMember(FGameplayTagContainer)                     AbilityTagsToRemove                                         OFFSET(getStruct<T>, {0x58, 32, 0, 0})
	SMember(FGameplayTagContainer)                     AbilityTagsToAdd                                            OFFSET(getStruct<T>, {0x78, 32, 0, 0})
};

/// Class /Script/JunoGameNative.JunoAnimNotifyState_MakeInterruptible
/// Size: 0x0040 (0x000030 - 0x000070)
class UJunoAnimNotifyState_MakeInterruptible : public UAnimNotifyState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FGameplayTagContainer)                     AbilityTagsToRemove                                         OFFSET(getStruct<T>, {0x30, 32, 0, 0})
	SMember(FGameplayTagContainer)                     AbilityTagsToAdd                                            OFFSET(getStruct<T>, {0x50, 32, 0, 0})
};

/// Class /Script/JunoGameNative.JunoAsyncAction_WaitForEventRouter
/// Size: 0x0030 (0x000030 - 0x000060)
class UJunoAsyncAction_WaitForEventRouter : public UBlueprintAsyncActionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FMulticastInlineDelegate)                  OnGameplayEventRouterAvailable                              OFFSET(getStruct<T>, {0x30, 16, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoAsyncAction_WaitForEventRouter.WaitForEventRouter
	// class UJunoAsyncAction_WaitForEventRouter* WaitForEventRouter(class AActor* ContextActor);                               // [0xb8e7608] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoAsyncAction_WaitForEventRouter.onGameplayEventRouterAvailable__DelegateSignature
	// void onGameplayEventRouterAvailable__DelegateSignature(class UGameplayEventRouterComponent* EventRouter);                // [0x2177018] MulticastDelegate|Public|Delegate 
};

/// Class /Script/JunoGameNative.JunoBuilderToolSelectedActorInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoBuilderToolSelectedActorInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoBuilderToolSelectedActorInterface.ReceiveSpawnedByBuilderTool
	// void ReceiveSpawnedByBuilderTool(class AJunoBuilderTool* BuilderTool, class UJunoBuilderToolInteractionBehavior* Behavior); // [0xb8e7544] Native|Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuilderToolSelectedActorInterface.ReceiveSelectionSpawnedByBuilderTool
	// void ReceiveSelectionSpawnedByBuilderTool(class AJunoBuilderTool* BuilderTool, class UJunoBuilderToolInteractionBehavior* Behavior, FJunoBuilderToolSelectionSpawnParams& SelectionSpawnParameters); // [0xb8e7400] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/JunoGameNative.JunoBuildingConnectivityBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoBuildingConnectivityBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoBuildingConnectivityBlueprintLibrary.GetKnobs
	// TArray<FJunoBuildingConnectionPoint> GetKnobs(FJunoBuildingConnectionPointsResult& Result);                              // [0xb8e6788] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoBuildingConnectivityBlueprintLibrary.GetAtomModelAssetUserData
	// TArray<UAtomModelAssetUserData*> GetAtomModelAssetUserData(class UObject* Object);                                       // [0xb8e66d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingConnectivityBlueprintLibrary.DebugDrawConnections
	// void DebugDrawConnections(class UObject* WorldContextObject, FJunoBuildingConnectionPointsResult& Candidates, FJunoBuildingConnectionPointsResult& Targets, FJunoBuildingConnection& ChosenConnection, TArray<FJunoBuildingConnection>& Connections); // [0xb8e64b8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingConnectivityBlueprintLibrary.DebugDrawConnectionLocations
	// void DebugDrawConnectionLocations(class UObject* WorldContextObject, FJunoBuildingConnection& Connection);               // [0xb8e63d4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoBuildingProp
/// Size: 0x0048 (0x000BC8 - 0x000C10)
class AJunoBuildingProp : public ABuildingProp
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3088;

public:
	CMember(class UJunoHarvestingComponent*)           HarvestingComponent                                         OFFSET(get<T>, {0xBE8, 8, 0, 0})
	CMember(class UJunoPhysicsPersistenceComponent*)   PhysicsPersistenceComponent                                 OFFSET(get<T>, {0xBF0, 8, 0, 0})
	CMember(class UFortItemDefinition*)                AssociatedItem                                              OFFSET(get<T>, {0xC08, 8, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoBuildingProp.GetAssociatedItem
	// class UFortItemDefinition* GetAssociatedItem();                                                                          // [0xb9e8d6c] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoBuildingPropTree
/// Size: 0x0008 (0x000C10 - 0x000C18)
class AJunoBuildingPropTree : public AJunoBuildingProp
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3096;

public:
	CMember(class UActorComponent*)                    LifeCycleComponent                                          OFFSET(get<T>, {0xC10, 8, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoBuildingPropTree.BlueprintCanDieInLifecyclePhase
	// bool BlueprintCanDieInLifecyclePhase(char CurrentPhaseIndex);                                                            // [0x2177018] BlueprintAuthorityOnly|Event|Protected|BlueprintEvent 
};

/// Class /Script/JunoGameNative.JunoCampActor
/// Size: 0x0090 (0x000290 - 0x000320)
class AJunoCampActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	SMember(FGuid)                                     SavedActorGuid                                              OFFSET(getStruct<T>, {0x2F0, 16, 0, 0})
	CMember(class UOverlapComponent*)                  BoundsComponent                                             OFFSET(get<T>, {0x308, 8, 0, 0})
};

/// Class /Script/JunoGameNative.JunoCampCenterComponent
/// Size: 0x00D8 (0x0000A0 - 0x000178)
class UJunoCampCenterComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
	SMember(FMulticastInlineDelegate)                  OnJunoCampAwesomeLevelChangedDelegate                       OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnJunoCampAwesomePointModificationDelegate                  OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	CMember(class UClass*)                             CampActorClassToSpawn                                       OFFSET(get<T>, {0xF8, 8, 0, 0})
	SMember(FGameplayTag)                              CampCenterDestructionDeathReasonTag                         OFFSET(getStruct<T>, {0x100, 4, 0, 0})
	CMember(class UJunoAsyncAction_WaitForEventRouter*) WaitForEventRouterAction                                   OFFSET(get<T>, {0x108, 8, 0, 0})
	SMember(FGuid)                                     LinkedCampActorID                                           OFFSET(getStruct<T>, {0x110, 16, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoCampCenterComponent.OnCampAwesomePointModification
	// void OnCampAwesomePointModification(FJunoEvent_CampAwesomePointsModified& Payload);                                      // [0xb8e7254] Final|Native|Protected|HasOutParms 
	// Function /Script/JunoGameNative.JunoCampCenterComponent.OnCampAwesomeLevelChanged
	// void OnCampAwesomeLevelChanged(FJunoEvent_CampAwesomeLevelChanged& Payload);                                             // [0xb8e71bc] Final|Native|Protected|HasOutParms 
	// Function /Script/JunoGameNative.JunoCampCenterComponent.NotifyOwnerPlacedByBuilderTool
	// void NotifyOwnerPlacedByBuilderTool(class AFortPlayerController* FortPC);                                                // [0xb8e70f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCampCenterComponent.HandleSmartObjectEvent
	// void HandleSmartObjectEvent(FSmartObjectEventData& SmartObjectEventData, class AActor* Actor);                           // [0xb8e6f58] Final|Native|Private|HasOutParms 
};

/// Class /Script/JunoGameNative.JunoCampComponentBase
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UJunoCampComponentBase : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/JunoGameNative.JunoMarkerComponent
/// Size: 0x00B0 (0x0000A0 - 0x000150)
class UJunoMarkerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FJunoMarker)                               Settings                                                    OFFSET(getStruct<T>, {0xA0, 152, 0, 0})
	DMember(bool)                                      bShouldCreateMarkerOnStart                                  OFFSET(get<bool>, {0x148, 1, 0, 0})
};

/// Class /Script/JunoGameNative.JunoCampMarkerComponent
/// Size: 0x0000 (0x000150 - 0x000150)
class UJunoCampMarkerComponent : public UJunoMarkerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
};

/// Class /Script/JunoGameNative.JunoCampMembershipActorComponent
/// Size: 0x0088 (0x0000E0 - 0x000168)
class UJunoCampMembershipActorComponent : public UFortAthenaTrackableAIObjectComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	SMember(FMulticastInlineDelegate)                  OnJunoCampMembershipChanged                                 OFFSET(getStruct<T>, {0xE0, 16, 0, 0})
	CMember(TWeakObjectPtr<AJunoCampActor*>)           BoundCamp                                                   OFFSET(get<T>, {0x108, 8, 0, 0})
	SMember(FScalableFloat)                            ToleranceForMovementUpdates                                 OFFSET(getStruct<T>, {0x140, 40, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoCampMembershipActorComponent.OnRep_BoundCamp
	// void OnRep_BoundCamp();                                                                                                  // [0xb8ea76c] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoCampMembershipActorComponent.HasCampAtLocation
	// bool HasCampAtLocation(class UObject* WorldContextObject, FVector& Location);                                            // [0xb8ea3ec] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCampMembershipActorComponent.HasCampAtBounds
	// bool HasCampAtBounds(class UObject* WorldContextObject, FBox& Bounds);                                                   // [0xb8ea31c] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCampMembershipActorComponent.HandleBoundCampEndPlayEvent
	// void HandleBoundCampEndPlayEvent(class AActor* InOwner, TEnumAsByte<EEndPlayReason> EndPlayReason);                      // [0xb8e9d04] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoCampMembershipActorComponent.GetBoundComponent
	// class UActorComponent* GetBoundComponent(class UClass* ComponentClass);                                                  // [0xb8e99cc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoCampMembershipActorComponent.GetBoundCamp
	// class AJunoCampActor* GetBoundCamp();                                                                                    // [0xb8e99a8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoCampMembershipActorComponent.FindOrCreateCampMembershipComponentAndReturnComponent
	// class UActorComponent* FindOrCreateCampMembershipComponentAndReturnComponent(class UClass* ComponentClass, class AActor* Owner); // [0xb8e9894] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCampMembershipActorComponent.FindOrCreateCampMembershipActorComponentOnActor
	// class UJunoCampMembershipActorComponent* FindOrCreateCampMembershipActorComponentOnActor(class AActor* Owner);           // [0xb8e9814] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCampMembershipActorComponent.FindCampMembershipComponentAndReturnComponent
	// class UActorComponent* FindCampMembershipComponentAndReturnComponent(class UClass* ComponentClass, class AActor* Owner); // [0xb8e9718] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCampMembershipActorComponent.FindCampMembershipActorComponentOnActor
	// class UJunoCampMembershipActorComponent* FindCampMembershipActorComponentOnActor(class AActor* Owner);                   // [0xb8e968c] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCampMembershipActorComponent.FindBindableLocalCampForLocation
	// class AJunoCampActor* FindBindableLocalCampForLocation(class UObject* WorldContextObject, FVector& Location);            // [0xb8e9584] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCampMembershipActorComponent.FindBindableLocalCampForArea
	// class AJunoCampActor* FindBindableLocalCampForArea(class AActor* Actor, FBox& AreaBox);                                  // [0xb8e9438] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCampMembershipActorComponent.FindBindableLocalCampForActorAndReturnComponent
	// class UActorComponent* FindBindableLocalCampForActorAndReturnComponent(class UClass* ComponentClass, class AActor* Actor); // [0xb8e9340] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCampMembershipActorComponent.FindBindableLocalCampForActor
	// class AJunoCampActor* FindBindableLocalCampForActor(class AActor* Actor);                                                // [0xb8e92c0] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCampMembershipActorComponent.FindBindableLocalCampAtLocationAndReturnComponent
	// class UActorComponent* FindBindableLocalCampAtLocationAndReturnComponent(class UClass* ComponentClass, class UObject* WorldContextObject, FVector& Location); // [0xb8e9140] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCampMembershipActorComponent.AttemptToBindToCamp
	// void AttemptToBindToCamp();                                                                                              // [0xb8e9080] Final|Native|Private 
};

/// Class /Script/JunoGameNative.JunoCampPersistenceComponent
/// Size: 0x0160 (0x0000A0 - 0x000200)
class UJunoCampPersistenceComponent : public UJunoCampComponentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	SMember(FAwesomeLevelSaveData)                     AwesomeLevelSaveData                                        OFFSET(getStruct<T>, {0xC0, 88, 0, 0})
	SMember(FAICampManagementSaveData)                 AICampManagementSaveData                                    OFFSET(getStruct<T>, {0x118, 32, 0, 0})
	SMember(FNamedPOISaveData)                         NamedPOISaveData                                            OFFSET(getStruct<T>, {0x138, 176, 0, 0})
};

/// Class /Script/JunoGameNative.JunoCampPersistenceFeatureModule
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UJunoCampPersistenceFeatureModule : public UPersistenceFrameworkModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/JunoGameNative.JunoCampPersistenceFeatureData_Container
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoCampPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
};

/// Class /Script/JunoGameNative.JunoCampRecruitmentComponent
/// Size: 0x0050 (0x0000A0 - 0x0000F0)
class UJunoCampRecruitmentComponent : public UJunoCampComponentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(TArray<FActiveCampNPCEntry>)               ActiveNPCEntries                                            OFFSET(get<T>, {0xE0, 16, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoCampRecruitmentComponent.GetActiveNPCEntries
	// TArray<FActiveCampNPCEntry> GetActiveNPCEntries();                                                                       // [0xb8e9970] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/JunoGameNative.JunoCampRecruitmentObjectComponent
/// Size: 0x00E8 (0x0000A0 - 0x000188)
class UJunoCampRecruitmentObjectComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
	SMember(FMulticastInlineDelegate)                  OnJunoRecruitmentObjectAssignedChangedDelegate              OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnJunoRecruitmentObjectEnableChangeDelegate                 OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	DMember(bool)                                      bIsEnabled                                                  OFFSET(get<bool>, {0xD8, 1, 0, 0})
	SMember(FJunoRecruitmentObjectAssignedData)        CachedAssignedData                                          OFFSET(getStruct<T>, {0xE0, 128, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoCampRecruitmentObjectComponent.OnRep_bIsEnabled
	// void OnRep_bIsEnabled();                                                                                                 // [0xb8ea7a0] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoCampRecruitmentObjectComponent.OnRep_AssignedData
	// void OnRep_AssignedData();                                                                                               // [0xb8ea758] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoCampRecruitmentObjectComponent.IsEnabled
	// bool IsEnabled();                                                                                                        // [0x846a108] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoCampRecruitmentObjectComponent.IsAssignedToPlayer
	// bool IsAssignedToPlayer();                                                                                               // [0xb8ea4f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoCampRecruitmentObjectComponent.IsAssignedToAI
	// bool IsAssignedToAI();                                                                                                   // [0x846bf80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoCampRecruitmentObjectComponent.HandleOnEmptyRecrutmentObjectInteracted
	// void HandleOnEmptyRecrutmentObjectInteracted(class AFortPlayerController* InteractingController);                        // [0xb8ea290] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCampRecruitmentObjectComponent.HandleDied
	// void HandleDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0xb8e9dc8] Final|Native|Private|HasDefaults 
	// Function /Script/JunoGameNative.JunoCampRecruitmentObjectComponent.GetAssignedData
	// FJunoRecruitmentObjectAssignedData GetAssignedData();                                                                    // [0xb8e998c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoCampRecruitmentObjectComponent.CostlyFindAssignableNPCs
	// bool CostlyFindAssignableNPCs(TArray<FGameplayTag>& OutAssignableNPCs);                                                  // [0xb8e9094] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoCampRecruitmentObjectComponent.AssignToPlayer
	// void AssignToPlayer(class AFortPlayerController* PlayerController, bool bCheckForDuplicateRecruitmentObjects);           // [0xb8e8fb8] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoCampRemovalStatusComponent
/// Size: 0x0058 (0x0000A0 - 0x0000F8)
class UJunoCampRemovalStatusComponent : public UJunoCampComponentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	SMember(FScalableFloat)                            SoftRemovalCampComponentUpdateRate                          OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	SMember(FJunoCampRemovalStatusData)                CampRemovalStatusData                                       OFFSET(getStruct<T>, {0xE0, 12, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoCampRemovalStatusComponent.OnRep_CampRemovalStatusData
	// void OnRep_CampRemovalStatusData();                                                                                      // [0xb8ea780] Final|Native|Private 
};

/// Class /Script/JunoGameNative.JunoCaveContainerInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoCaveContainerInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoCaveContainerInterface.GetCaveEntrances
	// void GetCaveEntrances(TArray<FTransform>& Transforms);                                                                   // [0xb8e9a70] Native|Public|HasOutParms|Const 
};

/// Class /Script/JunoGameNative.JunoChaosAudioGameStateComponent
/// Size: 0x02C0 (0x0000A0 - 0x000360)
class UJunoChaosAudioGameStateComponent : public UFortGameStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
	CMember(class UPhysicalMaterial*)                  FallbackPhysicalMaterial                                    OFFSET(get<T>, {0xA0, 8, 0, 0})
	SMember(FName)                                     CollisionEventSizeParamName                                 OFFSET(getStruct<T>, {0xA8, 4, 0, 0})
	SMember(FName)                                     CollisionTriggerUpdateParamName                             OFFSET(getStruct<T>, {0xAC, 4, 0, 0})
	CMember(TWeakObjectPtr<USoundBase*>)               Collision_Loop                                              OFFSET(get<T>, {0xB0, 32, 0, 0})
	SMember(FScalableFloat)                            CollisionMassToSize                                         OFFSET(getStruct<T>, {0xD0, 40, 0, 0})
	SMember(FScalableFloat)                            CollisionVolumeMultiplier                                   OFFSET(getStruct<T>, {0xF8, 40, 0, 0})
	CMember(TMap<UPhysicalMaterial*, FChaosAudioEventSizeSounds>) CollisionMaterials                               OFFSET(get<T>, {0x120, 80, 0, 0})
	SMember(FName)                                     BreakEventSizeParamName                                     OFFSET(getStruct<T>, {0x170, 4, 0, 0})
	CMember(TWeakObjectPtr<USoundBase*>)               Break_Group_Default                                         OFFSET(get<T>, {0x178, 32, 0, 0})
	CMember(TMap<UPhysicalMaterial*, USoundBase*>)     BreakGroupMaterialMap                                       OFFSET(get<T>, {0x198, 80, 0, 0})
	SMember(FScalableFloat)                            BreakMassToSize                                             OFFSET(getStruct<T>, {0x1E8, 40, 0, 0})
	SMember(FScalableFloat)                            BreakVolumeMultiplier                                       OFFSET(getStruct<T>, {0x210, 40, 0, 0})
	CMember(TMap<UPhysicalMaterial*, FChaosAudioEventSizeSounds>) BreakMaterials                                   OFFSET(get<T>, {0x238, 80, 0, 0})
	CMember(TMap<FGuid, TWeakObjectPtr<UAudioComponent*>>) CollisionSoundMap                                       OFFSET(get<T>, {0x288, 80, 0, 0})
	CMember(TMap<FGuid, TWeakObjectPtr<UAudioComponent*>>) BreakSoundMap                                           OFFSET(get<T>, {0x2D8, 80, 0, 0})
	CMember(class UAudioEventAggregatorSubsystem*)     AudioEventAggregatorSubsystem                               OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(TArray<TWeakObjectPtr<USoundBase*>>)       SoftAssets                                                  OFFSET(get<T>, {0x330, 16, 0, 0})
	CMember(TArray<class USoundBase*>)                 LoadedAssets                                                OFFSET(get<T>, {0x340, 16, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoChaosAudioGameStateComponent.UnSubscribeToChaosEventRelayEvents
	// void UnSubscribeToChaosEventRelayEvents();                                                                               // [0xb8ea900] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoChaosAudioGameStateComponent.SubscribeToChaosEventRelayEvents
	// void SubscribeToChaosEventRelayEvents();                                                                                 // [0xb8ea8ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoChaosAudioGameStateComponent.OnSoundCollisionEvents
	// void OnSoundCollisionEvents(TArray<FSoundCollisionEvent>& SoundCollisionEvents);                                         // [0xb8ea850] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoChaosAudioGameStateComponent.OnSoundBreakEvents
	// void OnSoundBreakEvents(TArray<FSoundBreakEvent>& SoundBreakEvents);                                                     // [0xb8ea7b4] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoChaosAudioGameStateComponent.OnActiveSoundCollisionEventsUpdated
	// void OnActiveSoundCollisionEventsUpdated(TArray<FSoundCollisionEvent>& SoundCollisionEvents);                            // [0xb8ea6bc] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoChaosAudioGameStateComponent.OnActiveSoundCollisionEventSoundFinished
	// void OnActiveSoundCollisionEventSoundFinished(class UAudioComponent* Component);                                         // [0xb8ea63c] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoChaosAudioGameStateComponent.OnActiveSoundBreakEventsUpdated
	// void OnActiveSoundBreakEventsUpdated(TArray<FSoundBreakEvent>& SoundBreakEvents);                                        // [0xb8ea5a0] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoChaosAudioGameStateComponent.OnActiveSoundBreakEventSoundFinished
	// void OnActiveSoundBreakEventSoundFinished(class UAudioComponent* Component);                                             // [0xb8ea520] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoChaosAudioGameStateComponent.GetSingleChaosEventSound
	// class USoundBase* GetSingleChaosEventSound(TMap<UPhysicalMaterial*, FChaosAudioEventSizeSounds> ChaosEventMaterials, class UPhysicalMaterial* Material, char EventSize); // [0xb8e9b10] Final|Native|Private 
};

/// Class /Script/JunoGameNative.JunoCheatProfilerSubsystem
/// Size: 0x0078 (0x000040 - 0x0000B8)
class UJunoCheatProfilerSubsystem : public UTickableWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
};

/// Class /Script/JunoGameNative.JunoClosedDoorNavArea
/// Size: 0x0000 (0x000048 - 0x000048)
class UJunoClosedDoorNavArea : public UNavArea
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/JunoGameNative.JunoClusterUnionComponent
/// Size: 0x0090 (0x0007B0 - 0x000840)
class UJunoClusterUnionComponent : public UClusterUnionComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2112;

public:
};

/// Class /Script/JunoGameNative.JunoComponent_HealthIndicator
/// Size: 0x0040 (0x0000A0 - 0x0000E0)
class UJunoComponent_HealthIndicator : public UPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	DMember(float)                                     Health                                                      OFFSET(get<float>, {0xC0, 4, 0, 0})
	DMember(float)                                     MaxHealth                                                   OFFSET(get<float>, {0xC4, 4, 0, 0})
	SMember(FVector)                                   AttachOffset                                                OFFSET(getStruct<T>, {0xC8, 24, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoComponent_HealthIndicator.OnServerPawnHealthChanged
	// void OnServerPawnHealthChanged();                                                                                        // [0xb8eceb4] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoComponent_HealthIndicator.OnRep_MaxHealth
	// void OnRep_MaxHealth();                                                                                                  // [0xb8ece70] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoComponent_HealthIndicator.OnRep_Health
	// void OnRep_Health();                                                                                                     // [0xb8ece2c] Final|Native|Protected 
};

/// Class /Script/JunoGameNative.JunoComponent_Stamina
/// Size: 0x0000 (0x0002E8 - 0x0002E8)
class UJunoComponent_Stamina : public UFortComponent_Energy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoComponent_Stamina.SetMaxEnergy
	// void SetMaxEnergy(FScalableFloat NewMaxEnergy);                                                                          // [0xb8ed48c] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoComponent_Stamina.GetMaxEnergy
	// FScalableFloat GetMaxEnergy();                                                                                           // [0xb8ec924] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoConnectableActorInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoConnectableActorInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoConnectedActorLevelPlayspaceComponent
/// Size: 0x0000 (0x0000F8 - 0x0000F8)
class UJunoConnectedActorLevelPlayspaceComponent : public UFortPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
};

/// Class /Script/JunoGameNative.JunoControllerComponent_AFKHandler
/// Size: 0x0068 (0x0000D0 - 0x000138)
class UJunoControllerComponent_AFKHandler : public UFortControllerComponent_AFKHandler
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	CMember(class UDataTable*)                         AFKEventsDataTable                                          OFFSET(get<T>, {0xD0, 8, 0, 0})
};

/// Class /Script/JunoGameNative.JunoControllerComponent_Indicators
/// Size: 0x00B8 (0x0000A8 - 0x000160)
class UJunoControllerComponent_Indicators : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	DMember(float)                                     ShowDistance                                                OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(float)                                     HideDistance                                                OFFSET(get<float>, {0xBC, 4, 0, 0})
	CMember(TSet<AFortPawn*>)                          VisiblePawnsCache                                           OFFSET(get<T>, {0xD0, 80, 0, 0})
	CMember(TArray<FJunoIndicatorVisibilityQueryEntry>) QueryToPawnEntries                                         OFFSET(get<T>, {0x120, 16, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoControllerComponent_Indicators.OnAnyFortPawnDestroyed
	// void OnAnyFortPawnDestroyed(class AActor* FortPawnActor);                                                                // [0xb8ecbf0] Final|Native|Private 
};

/// Class /Script/JunoGameNative.JunoControllerComponent_MapMarker
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UJunoControllerComponent_MapMarker : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoControllerComponent_MapMarker.ServerCreateMarker
	// void ServerCreateMarker(FGuid Guid, FJunoMarker NewMarker, FText DisplayName);                                           // [0xb8ecec8] Net|NetReliableNative|Event|Public|NetServer|HasDefaults 
	// Function /Script/JunoGameNative.JunoControllerComponent_MapMarker.ClientRequestCustomization
	// void ClientRequestCustomization(FGuid Guid, FJunoMarker NewMarker, FText DisplayName);                                   // [0xb8ec2ec] Net|NetReliableNative|Event|Public|HasDefaults|NetClient 
};

/// Class /Script/JunoGameNative.JunoControllerComponent_SocialSim
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UJunoControllerComponent_SocialSim : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoControllerComponent_SocialSim.Server_TriggerVillageSelfDestruct
	// void Server_TriggerVillageSelfDestruct();                                                                                // [0x80bf948] RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoControllerComponent_SocialSim.Server_TriggerAwesomeLevelChange
	// void Server_TriggerAwesomeLevelChange(class AFortPlayerController* TriggeringPlayer);                                    // [0x8925050] RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoControllerComponent_SocialSim.OnJunoPlayerPersistenceDataAvailable
	// void OnJunoPlayerPersistenceDataAvailable(FUniqueNetIdRepl& UniquePlayerId, FJunoPlayerSaveData& SaveData);              // [0xb8eccf0] Final|Native|Private|HasOutParms 
};

/// Class /Script/JunoGameNative.JunoCraftingAnalytics
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoCraftingAnalytics : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoCraftingGameplayAbility
/// Size: 0x0000 (0x000B60 - 0x000B60)
class UJunoCraftingGameplayAbility : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2912;

public:
};

/// Class /Script/JunoGameNative.JunoInventoryComponent
/// Size: 0x0278 (0x0000A0 - 0x000318)
class UJunoInventoryComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	SMember(FJunoInventoryConfig)                      InventoryConfig                                             OFFSET(getStruct<T>, {0x110, 24, 0, 0})
	SMember(FName)                                     InventoryLootTierGroup                                      OFFSET(getStruct<T>, {0x128, 4, 0, 0})
	DMember(bool)                                      bShouldDropContentsOnOwnerDeath                             OFFSET(get<bool>, {0x12C, 1, 0, 0})
	DMember(float)                                     LootTossSpeed                                               OFFSET(get<float>, {0x130, 4, 0, 0})
	DMember(float)                                     LootTossAngle                                               OFFSET(get<float>, {0x134, 4, 0, 0})
	SMember(FJunoInventoryHandle)                      InventoryHandle                                             OFFSET(getStruct<T>, {0x138, 36, 0, 0})
	CMember(TMap<FGameplayTag, FJunoItemSlotGroup>)    ItemSlotGroups                                              OFFSET(get<T>, {0x160, 80, 0, 0})
	SMember(FJunoReplicatedItemSlotList)               ReplicatedItemSlotData                                      OFFSET(getStruct<T>, {0x1B0, 296, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnInventoryChangedEvent                                     OFFSET(getStruct<T>, {0x2D8, 16, 0, 0})
	CMember(TArray<FJunoSelectedSlotData>)             SelectedItemGroupSlots                                      OFFSET(get<T>, {0x2F0, 16, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoInventoryComponent.UseOffHandDurability
	// void UseOffHandDurability(float DurabilityPerUse);                                                                       // [0xb9a7950] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoInventoryComponent.ServerTakeItem
	// void ServerTakeItem(FJunoTakeItemRequest Request);                                                                       // [0xb9a6bb8] RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/JunoGameNative.JunoInventoryComponent.ServerMoveAllItemsPossible
	// void ServerMoveAllItemsPossible(class UJunoInventoryComponent* SourceInventoryComponent, class UJunoInventoryComponent* DestinationInventoryComponent, TArray<FGameplayTag> SourceGroupTags, TArray<FGameplayTag> DestinationGroupTags); // [0xb9a60d4] RequiredAPI|Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/JunoGameNative.JunoInventoryComponent.ServerMergeAllItemsPossible
	// void ServerMergeAllItemsPossible();                                                                                      // [0x6e4de20] RequiredAPI|Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/JunoGameNative.JunoInventoryComponent.ServerAttemptItemTransfer
	// void ServerAttemptItemTransfer(FJunoItemTransferRequest Request);                                                        // [0xb9a5ebc] RequiredAPI|Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/JunoGameNative.JunoInventoryComponent.ServerAttemptItemMerge
	// void ServerAttemptItemMerge(FJunoItemSlot SourceItemSlot, FJunoItemSlot DestinationItemSlot, class AActor* SourceInventoryActor, class AActor* DestinationInventoryActor, int32_t Count); // [0xb9a5954] RequiredAPI|Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/JunoGameNative.JunoInventoryComponent.RemoveItemFromInventory
	// bool RemoveItemFromInventory(FGuid ItemGuid, int32_t Count);                                                             // [0xb9a5768] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoInventoryComponent.OnRep_InventoryHandle
	// void OnRep_InventoryHandle();                                                                                            // [0xb9a5670] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoInventoryComponent.OnOwningBuildingActorKilled
	// void OnOwningBuildingActorKilled(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* HitComponent, FName BoneName, FVector Momentum); // [0x864e5bc] Final|Native|Private|HasDefaults 
	// Function /Script/JunoGameNative.JunoInventoryComponent.OnInventoryChangedEvent__DelegateSignature
	// void OnInventoryChangedEvent__DelegateSignature(TArray<UFortItem*>& AddedItems, TArray<UFortItem*>& RemovedItems);       // [0x2177018] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/JunoGameNative.JunoInventoryComponent.GetOffhandItem
	// class UFortItem* GetOffhandItem();                                                                                       // [0xb9a45bc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoInventoryComponent.GetInventoryItemsInGroups
	// TArray<UFortWorldItem*> GetInventoryItemsInGroups(TArray<FGameplayTag>& Groups);                                         // [0xb9a44f4] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoInventoryComponent.GetInventoryItems
	// TArray<UFortWorldItem*> GetInventoryItems();                                                                             // [0xb9a44b4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoInventoryComponent.ClientMoveAllItemsPossibleComplete
	// void ClientMoveAllItemsPossibleComplete();                                                                               // [0x15560c8] RequiredAPI|Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/JunoGameNative.JunoInventoryComponent.ClientMergeAllItemsPossibleComplete
	// void ClientMergeAllItemsPossibleComplete();                                                                              // [0x2555e28] RequiredAPI|Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/JunoGameNative.JunoInventoryComponent.AddItemToInventory
	// class UFortItem* AddItemToInventory(class UFortItemDefinition* ItemDefinition, int32_t Count);                           // [0xb9a3964] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoCraftingInventoryComponent
/// Size: 0x0000 (0x000318 - 0x000318)
class UJunoCraftingInventoryComponent : public UJunoInventoryComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
};

/// Class /Script/JunoGameNative.JunoCraftingLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoCraftingLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoCraftingLibrary.MakePerPlayerCraftingKey
	// FCraftingMultiKey MakePerPlayerCraftingKey(class AActor* Instigator);                                                    // [0xb8ecb70] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/JunoGameNative.JunoDeleteActionsReportHandler
/// Size: 0x0018 (0x000028 - 0x000040)
class UJunoDeleteActionsReportHandler : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/JunoGameNative.JunoDeltasSaveHandler
/// Size: 0x00F0 (0x000028 - 0x000118)
class UJunoDeltasSaveHandler : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	CMember(class UDeltaFileSaveHandler*)              SaveHandler                                                 OFFSET(get<T>, {0x110, 8, 0, 0})
};

/// Class /Script/JunoGameNative.JunoDestructionBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoDestructionBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoDestructionBlueprintLibrary.SetGeometryCollectionSourceFromAtomModel
	// void SetGeometryCollectionSourceFromAtomModel(class UGeometryCollection* GeometryCollection, class UAtomModel* AtomModel, FName SelectionSetFilter); // [0xb8ed3a8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoDestructionBlueprintLibrary.SetGeometryCollectionMaterialForInstancedMeshes
	// void SetGeometryCollectionMaterialForInstancedMeshes(class UGeometryCollection* GeometryCollection, class UMaterialInterface* OpaqueMaterial, class UMaterialInterface* TransparentMaterial, class UMaterialInterface* GlitterMaterial, class UMaterialInterface* OpalMaterial, class UMaterialInterface* InternalGlowMaterial); // [0xb8ed20c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoDestructionBlueprintLibrary.GetGeometryCollectionSource
	// TArray<FGeometryCollectionSource> GetGeometryCollectionSource(class UAtomModel* AtomModel, FName SelectionSetFilter);    // [0xb8ec814] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoDumpWorldPersistentContents
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoDumpWorldPersistentContents : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoEncounterCheatInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoEncounterCheatInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoEssenceLevelComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UJunoEssenceLevelComponent : public UFortWeaponComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoEssenceLevelComponent.OnEquip
	// void OnEquip(class AFortWeapon* Weapon);                                                                                 // [0xb8ecc70] Final|Native|Protected 
};

/// Class /Script/JunoGameNative.JunoEventLimiterInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoEventLimiterInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoEventRouterLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoEventRouterLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoEventRouterLibrary.GetGameplayEventRouter
	// class UGameplayEventRouterComponent* GetGameplayEventRouter(class AActor* ContextActor);                                 // [0xb8ec794] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/JunoGameNative.JunoExampleMacroGenerated_CheatTestSetup
/// Size: 0x0048 (0x000030 - 0x000078)
class UJunoExampleMacroGenerated_CheatTestSetup : public UPFWCheatTestSetup
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(class UJunoExample_InGameClass*)           InGameClass                                                 OFFSET(get<T>, {0x68, 8, 0, 0})
};

/// Class /Script/JunoGameNative.JunoExampleMacroGenerated_Container
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoExampleMacroGenerated_Container : public UJunoBasePFWContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
};

/// Class /Script/JunoGameNative.JunoExample_CheatTestSetup
/// Size: 0x0048 (0x000030 - 0x000078)
class UJunoExample_CheatTestSetup : public UPFWCheatTestSetup
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(class UJunoExample_InGameClass*)           InGameClass                                                 OFFSET(get<T>, {0x68, 8, 0, 0})
};

/// Class /Script/JunoGameNative.JunoExample_Container
/// Size: 0x0008 (0x0001E0 - 0x0001E8)
class UJunoExample_Container : public UJunoBasePFWContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 488;

public:
};

/// Class /Script/JunoGameNative.JunoExample_InGameClass
/// Size: 0x0008 (0x000028 - 0x000030)
class UJunoExample_InGameClass : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int32_t)                                   PersistentData                                              OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   TransientData                                               OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
};

/// Class /Script/JunoGameNative.JunoExample_Module
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UJunoExample_Module : public UPersistenceFrameworkModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/JunoGameNative.JunoFilteredEventContextCollector
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoFilteredEventContextCollector : public UFilteredEventContextCollectorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoFogOfWarPersistenceFeatureModule
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UJunoFogOfWarPersistenceFeatureModule : public UPersistenceFrameworkModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/JunoGameNative.JunoFogOfWarPersistenceFeatureData_Container
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoFogOfWarPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
};

/// Class /Script/JunoGameNative.JunoFreeBuildBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoFreeBuildBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoFreeBuildBlueprintLibrary.IsPlayerAllowedToFly
	// bool IsPlayerAllowedToFly(class UObject* WorldContextObject);                                                            // [0xb8ecaf0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoFreeBuildBlueprintLibrary.IsItemSpawnerEnabled
	// bool IsItemSpawnerEnabled(class UObject* WorldContextObject);                                                            // [0xb8eca60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoFreeBuildBlueprintLibrary.IsFreeBuildEnabled
	// bool IsFreeBuildEnabled(class UObject* WorldContextObject);                                                              // [0xb8ec9e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoFreeBuildBlueprintLibrary.IsFreeBuildCostFilteringEnabled
	// bool IsFreeBuildCostFilteringEnabled(class UObject* WorldContextObject);                                                 // [0xb8ec960] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoFreeBuildBlueprintLibrary.GetFreeBuildSpawnableItems
	// TArray<FName> GetFreeBuildSpawnableItems(class UObject* WorldContextObject);                                             // [0xb8ec700] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoFreeBuildBlueprintLibrary.GetFreeBuildSpawnableItemDefinition
	// class UFortItemDefinition* GetFreeBuildSpawnableItemDefinition(class UObject* WorldContextObject, FName& Name);          // [0xb8ec630] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoFreeBuildComponent
/// Size: 0x0030 (0x0000A0 - 0x0000D0)
class UJunoFreeBuildComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FDataRegistryType)                         SpawnableItemsRegistryType                                  OFFSET(getStruct<T>, {0xA0, 4, 0, 0})
	DMember(bool)                                      bIsFreeBuildEnabled                                         OFFSET(get<bool>, {0xA4, 1, 0, 0})
	DMember(bool)                                      bIsItemSpawnerEnabled                                       OFFSET(get<bool>, {0xA5, 1, 0, 0})
	DMember(bool)                                      bIsPlayerAllowedToFly                                       OFFSET(get<bool>, {0xA6, 1, 0, 0})
	DMember(bool)                                      bIsFreeBuildCostFilteringEnabled                            OFFSET(get<bool>, {0xA7, 1, 0, 0})
	DMember(bool)                                      bWasFreeBuildEverEnabled                                    OFFSET(get<bool>, {0xA8, 1, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoFreeBuildComponent.WasFreeBuildEverEnabled
	// bool WasFreeBuildEverEnabled();                                                                                          // [0xaba5198] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoFreeBuildComponent.OnRep_WasFreeBuildEverEnabled
	// void OnRep_WasFreeBuildEverEnabled();                                                                                    // [0xb8ef814] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoFreeBuildComponent.OnRep_IsFreeBuildEnabled
	// void OnRep_IsFreeBuildEnabled();                                                                                         // [0xb8ef7cc] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoFreeBuildComponent.OnRep_AnyFreeBuildFlag
	// void OnRep_AnyFreeBuildFlag();                                                                                           // [0xb8ef7b8] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoFreeBuildComponent.OnPlaylistDataReady
	// void OnPlaylistDataReady(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, FGameplayTagContainer& PlaylistContextTags); // [0xb8ef688] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoFreeBuildComponent.IsPlayerAllowedToFly
	// bool IsPlayerAllowedToFly();                                                                                             // [0xb8ef668] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoFreeBuildComponent.IsItemSpawnerEnabled
	// bool IsItemSpawnerEnabled();                                                                                             // [0xb8ef648] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoFreeBuildComponent.IsFreeBuildEnabled
	// bool IsFreeBuildEnabled();                                                                                               // [0xb8ef630] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoFreeBuildComponent.IsFreeBuildCostFilteringEnabled
	// bool IsFreeBuildCostFilteringEnabled();                                                                                  // [0xb8ef610] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoFreeBuildComponent.GetSpawnableItems
	// TArray<FName> GetSpawnableItems();                                                                                       // [0xb8ef394] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoFreeBuildComponent.EnableFreeBuild
	// void EnableFreeBuild();                                                                                                  // [0xb8ef1e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoFreeBuildComponent.DisableFreeBuild
	// void DisableFreeBuild();                                                                                                 // [0xb8ef1cc] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoBasePFWPersistenceFeatureData
/// Size: 0x0018 (0x000028 - 0x000040)
class UJunoBasePFWPersistenceFeatureData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bDirty                                                      OFFSET(get<bool>, {0x38, 1, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoBasePFWPersistenceFeatureData.OnPersistentDataModified
	// void OnPersistentDataModified();                                                                                         // [0x6309938] RequiredAPI|Native|Protected|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoFreeBuildPersistenceFeatureData
/// Size: 0x0018 (0x000040 - 0x000058)
class UJunoFreeBuildPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FJunoFreeBuildSaveData)                    FreeBuildSaveData                                           OFFSET(getStruct<T>, {0x50, 2, 0, 0})
};

/// Class /Script/JunoGameNative.JunoFreeBuildPersistenceFeatureDataActor
/// Size: 0x0018 (0x0002D0 - 0x0002E8)
class AJunoFreeBuildPersistenceFeatureDataActor : public AJunoPersistenceFeatureDataActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:
	SMember(FJunoFreeBuildSaveData)                    FreeBuildSaveData                                           OFFSET(getStruct<T>, {0x2E0, 2, 0, 0})
};

/// Class /Script/JunoGameNative.JunoFreeBuildPersistenceFeatureModule
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UJunoFreeBuildPersistenceFeatureModule : public UPersistenceFrameworkModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/JunoGameNative.JunoFreeBuildPersistenceFeatureData_Container
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoFreeBuildPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
};

/// Class /Script/JunoGameNative.JunoGameStateComponent_WorldReactionsManager
/// Size: 0x0050 (0x000318 - 0x000368)
class UJunoGameStateComponent_WorldReactionsManager : public UFortGameStateComponent_WorldReactionsManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 872;

public:
};

/// Class /Script/JunoGameNative.JunoGameStateSettings
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UJunoGameStateSettings : public UGameStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(class UJunoRuntimeSettings*)               PreOverrideRuntimeSettings                                  OFFSET(get<T>, {0xA0, 8, 0, 0})
};

/// Class /Script/JunoGameNative.JunoRuntimeSettings
/// Size: 0x0008 (0x000030 - 0x000038)
class UJunoRuntimeSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(bool)                                      bPawnsUseProbeCollision                                     OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(bool)                                      bCharacterBasedMovementIgnorePhysicsBase                    OFFSET(get<bool>, {0x31, 1, 0, 0})
	DMember(bool)                                      bCharacterStayBasedInAir                                    OFFSET(get<bool>, {0x32, 1, 0, 0})
	DMember(bool)                                      bBuoyancyEnabled                                            OFFSET(get<bool>, {0x33, 1, 0, 0})
};

/// Class /Script/JunoGameNative.JunoGameStateTemperatureComponent
/// Size: 0x00C0 (0x0000A0 - 0x000160)
class UJunoGameStateTemperatureComponent : public UGameStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	CMember(TMap<FGameplayTag, FScalableFloat>)        TemperatureToFloatMap                                       OFFSET(get<T>, {0xA0, 80, 0, 0})
	CMember(TMap<FGameplayTag, FScalableFloat>)        TemperatureThresholdsMap                                    OFFSET(get<T>, {0xF0, 80, 0, 0})
	SMember(FFloatRange)                               TemperatureRange                                            OFFSET(getStruct<T>, {0x140, 16, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoGameStateTemperatureComponent.TemperatureToFloat
	// float TemperatureToFloat(FGameplayTag& Temperature);                                                                     // [0xb8ef988] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGameStateTemperatureComponent.GetTemperatureRanges
	// TArray<FTemperatureRange> GetTemperatureRanges();                                                                        // [0xb8ef3d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGameStateTemperatureComponent.GetMinimumTemperature
	// float GetMinimumTemperature();                                                                                           // [0xb8ef374] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGameStateTemperatureComponent.GetMaximumTemperature
	// float GetMaximumTemperature();                                                                                           // [0xb8ef354] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoGameStateWeatherComponent
/// Size: 0x0030 (0x0000A0 - 0x0000D0)
class UJunoGameStateWeatherComponent : public UGameStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(class UDataTable*)                         SeasonTable                                                 OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(class UClass*)                             LocalizedWeatherStateSubclass                               OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(class UJunoPlayspacePersistenceFeatureHelper*) WeatherPersistenceFeatureHelper                         OFFSET(get<T>, {0xB8, 8, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoGameStateWeatherComponent.TransitionWeatherNowTo
	// void TransitionWeatherNowTo(FJunoWeatherPhase& NewWeatherPhase, FJunoWeatherPhase& NewNextWeatherPhase, FJunoWeatherLocation OptionalLocation); // [0xb8efae0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGameStateWeatherComponent.TransitionWeatherNow
	// void TransitionWeatherNow(FName OptionalLocation);                                                                       // [0xb8efa60] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGameStateWeatherComponent.SetAutoTransitioning
	// void SetAutoTransitioning(bool bAutoTransitionWeather);                                                                  // [0xb8ef828] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGameStateWeatherComponent.OnWeatherPhaseChanged
	// void OnWeatherPhaseChanged(class UJunoWeatherStateComponent* WeatherState);                                              // [0x5fffda8] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoGameStateWeatherComponent.OnNextWeatherQueueChanged
	// void OnNextWeatherQueueChanged(class UJunoWeatherStateComponent* WeatherState);                                          // [0x5fffda8] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoGameStateWeatherComponent.IsAutoTransitioning
	// bool IsAutoTransitioning();                                                                                              // [0x7bb335c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGameStateWeatherComponent.HandleWeatherStatesSetup
	// void HandleWeatherStatesSetup(TArray<UJunoWeatherStateComponent*>& WeatherStates);                                       // [0x2177018] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoGameStateWeatherComponent.GetWeatherStates
	// TArray<UJunoWeatherStateComponent*> GetWeatherStates();                                                                  // [0xb8ef410] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGameStateWeatherComponent.ForceWeatherState
	// void ForceWeatherState(FName NewWeatherType, FName OptionalLocation);                                                    // [0xb8ef290] Native|Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoGameStateWeatherComponent.FindWeatherState
	// class UJunoWeatherStateComponent* FindWeatherState(FJunoWeatherLocation& Location);                                      // [0xb8ef1f4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/JunoGameNative.JunoGeneratePersistentClassReportCommandlet
/// Size: 0x0000 (0x000080 - 0x000080)
class UJunoGeneratePersistentClassReportCommandlet : public UCommandlet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/JunoGameNative.JunoGeometryCollectionAssemblerComponent
/// Size: 0x0178 (0x0000A0 - 0x000218)
class UJunoGeometryCollectionAssemblerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
	DMember(float)                                     AssemblyRatioInterpSpeed                                    OFFSET(get<float>, {0xA0, 4, 0, 0})
	CMember(EJunoGeometryCollectionAssemblerDurationType) DurationType                                             OFFSET(get<T>, {0xA4, 4, 0, 0})
	DMember(float)                                     LayerHeight                                                 OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(int32_t)                                   LayerCount                                                  OFFSET(get<int32_t>, {0xAC, 4, 0, 0})
	SMember(FScalableFloat)                            TimeToAssemble                                              OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	SMember(FScalableFloat)                            SingleGeometryTimeToAssemble                                OFFSET(getStruct<T>, {0xD8, 40, 0, 0})
	SMember(FScalableFloat)                            DisassembledZDistance                                       OFFSET(getStruct<T>, {0x100, 40, 0, 0})
	SMember(FScalableFloat)                            DisassembledZDistanceRandomRatio                            OFFSET(getStruct<T>, {0x128, 40, 0, 0})
	SMember(FScalableFloat)                            DisassembledRotationAmount                                  OFFSET(getStruct<T>, {0x150, 40, 0, 0})
	DMember(bool)                                      bFreeMemoryWhenNotAnimating                                 OFFSET(get<bool>, {0x178, 1, 0, 0})
	CMember(TMap<UGeometryCollectionComponent*, FJunoGeometryCollectionAssemblerGCInfo>) GeometryCollectionInfos   OFFSET(get<T>, {0x180, 80, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAssemblyVisualsAnimationStart                             OFFSET(getStruct<T>, {0x1D0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAssemblyVisualsAnimationUpdated                           OFFSET(getStruct<T>, {0x1E0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAssemblyVisualsAnimationEnd                               OFFSET(getStruct<T>, {0x1F0, 16, 0, 0})
	SMember(FJunoGeometryCollectionAssemblerTargetData) TargetData                                                 OFFSET(getStruct<T>, {0x200, 8, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoGeometryCollectionAssemblerComponent.SetFreeMemoryWhenNotAnimating
	// void SetFreeMemoryWhenNotAnimating(bool bValue);                                                                         // [0xb8ef8a8] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGeometryCollectionAssemblerComponent.OnRep_TargetData
	// void OnRep_TargetData();                                                                                                 // [0xb8ef800] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoGeometryCollectionAssemblerComponent.IsUpdating
	// bool IsUpdating();                                                                                                       // [0x64afc9c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGeometryCollectionAssemblerComponent.IsDisassembling
	// bool IsDisassembling();                                                                                                  // [0xb8ef5b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGeometryCollectionAssemblerComponent.IsDisassembled
	// bool IsDisassembled();                                                                                                   // [0xb8ef598] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGeometryCollectionAssemblerComponent.IsAssembling
	// bool IsAssembling();                                                                                                     // [0xb8ef574] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGeometryCollectionAssemblerComponent.IsAssembled
	// bool IsAssembled();                                                                                                      // [0xb8ef550] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGeometryCollectionAssemblerComponent.IsActorAssembled
	// bool IsActorAssembled(class AActor* Actor);                                                                              // [0xb8ef47c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGeometryCollectionAssemblerComponent.GetAssemblyRatio
	// float GetAssemblyRatio();                                                                                                // [0x62ee310] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoGuidedBuildingBCOInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoGuidedBuildingBCOInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoGuidedBuildingBCOInterface.SetParentGuidedBuilding
	// void SetParentGuidedBuilding(class AJunoGuidedBuildingActor* OurGuidedBuild);                                            // [0x2177018] Event|Public|BlueprintEvent 
};

/// Class /Script/JunoGameNative.JunoInputMappingComponent
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class UJunoInputMappingComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	DMember(bool)                                      bPopDefaultContext                                          OFFSET(get<bool>, {0xA0, 1, 0, 0})
	SMember(FJunoInputMapping)                         DesiredInputMapping                                         OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	CMember(TArray<FJunoInputAlternateDisplayText>)    DisplayTexts                                                OFFSET(get<T>, {0xB8, 16, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoInputMappingComponent.PushContext
	// void PushContext(class UJunoInputControllerComponent* JunoInputController);                                              // [0xb8fb200] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoInputMappingComponent.PopContext
	// void PopContext(class UJunoInputControllerComponent* JunoInputController);                                               // [0xb8fb168] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoInputQueueComponent
/// Size: 0x0068 (0x0000A0 - 0x000108)
class UJunoInputQueueComponent : public UPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoInputQueueComponent.StopQueueingInput
	// void StopQueueingInput(int32_t MontageInstanceID, FGameplayTagContainer AbilityTagsToAdd, FGameplayTagContainer AbilityTagsToRemove); // [0xb8fb7b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoInputQueueComponent.StartQueueingInput
	// void StartQueueingInput(int32_t MontageInstanecID, class UGameplayAbility* Ability, bool bQueueMantisInputs, FGameplayTagContainer EventTags); // [0xb8fb5a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoInputQueueComponent.SetInterruptible
	// void SetInterruptible(int32_t MontageInstanceID, FGameplayTagContainer AbilityTagsToAdd, FGameplayTagContainer AbilityTagsToRemove); // [0xb8fb318] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoInputQueueComponent.ResetBlockingTags
	// void ResetBlockingTags(int32_t MontageInstanceID);                                                                       // [0xb8fb298] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoInputQueueComponent.OverrideBlockingTags
	// void OverrideBlockingTags(int32_t MontageInstanceID, class UGameplayAbility* Ability, FGameplayTagContainer AbilityTagsToAdd, FGameplayTagContainer AbilityTagsToRemove); // [0xb8fae98] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoInputQueueComponent.FireQueuedInputs
	// void FireQueuedInputs(int32_t MontageInstanceID);                                                                        // [0xb8faac4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoInventoryPersistenceFeatureModule
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UJunoInventoryPersistenceFeatureModule : public UPersistenceFrameworkModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/JunoGameNative.JunoInventoryPersistenceFeatureData_Container
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoInventoryPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
};

/// Class /Script/JunoGameNative.JunoInventoryUIPersistenceFeatureModule
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UJunoInventoryUIPersistenceFeatureModule : public UPersistenceFrameworkModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/JunoGameNative.JunoInventoryUIPersistenceFeatureData_Container
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoInventoryUIPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
};

/// Class /Script/JunoGameNative.JunoKnowledgeBundle
/// Size: 0x0060 (0x000030 - 0x000090)
class UJunoKnowledgeBundle : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(class UDataTable*)                         RecipeTable                                                 OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FText)                                     BundleName                                                  OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	SMember(FText)                                     BundleDescription                                           OFFSET(getStruct<T>, {0x50, 24, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  BundleImage                                                 OFFSET(get<T>, {0x68, 32, 0, 0})
	SMember(FGameplayTag)                              BundleIdentifier                                            OFFSET(getStruct<T>, {0x88, 4, 0, 0})
};

/// Class /Script/JunoGameNative.JunoKnowledgeCraftingComponent
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UJunoKnowledgeCraftingComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TWeakObjectPtr<UCraftingObjectComponent*>) CachedCraftingObjectComponent                               OFFSET(get<T>, {0xA0, 8, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoKnowledgeCraftingComponent.OnCraftingSuccess
	// void OnCraftingSuccess(FCraftingObjectSuccessEvent& Event);                                                              // [0xb8faddc] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoKnowledgeCraftingComponent.HandleCraftingStateChanged
	// void HandleCraftingStateChanged(FCraftingObjectStateChangedEvent& Event);                                                // [0xb8fad40] Final|Native|Private|HasOutParms 
};

/// Class /Script/JunoGameNative.JunoKnowledgePersistenceFeatureDataActor
/// Size: 0x00E8 (0x0002D0 - 0x0003B8)
class AJunoKnowledgePersistenceFeatureDataActor : public AJunoPersistenceFeatureDataActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 952;

public:
	SMember(FJunoKnowledgeSaveData)                    KnowledgeSaveData                                           OFFSET(getStruct<T>, {0x2D8, 224, 0, 0})
};

/// Class /Script/JunoGameNative.JunoKnowledgePersistenceFeatureModule
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UJunoKnowledgePersistenceFeatureModule : public UPersistenceFrameworkModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/JunoGameNative.JunoKnowledgePersistenceFeatureData_Container
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoKnowledgePersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
};

/// Class /Script/JunoGameNative.JunoLevelProviderInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoLevelProviderInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoLifeCycleInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoLifeCycleInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoLocalEnvironmentComponentInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoLocalEnvironmentComponentInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoLocalEnvironmentComponentInterface.GetCaveId
	// FGuid GetCaveId();                                                                                                       // [0xb8fac84] Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoLocalEnvironmentComponentInterface.GetBiome
	// FJunoBiomeInfoQueryResult GetBiome();                                                                                    // [0xaed73f0] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoLocalEnvironmentActorInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoLocalEnvironmentActorInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoLocalEnvironmentActorInterface.GetBiomeInfo
	// bool GetBiomeInfo(FJunoBiomeInfoQueryResult& OutHabitat);                                                                // [0xb8fabe0] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoLocalEnvironmentActorInterface.GetBiome
	// bool GetBiome(EJunoBiome& OutBiome);                                                                                     // [0xb8fab44] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoLWMCaveEventDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoLWMCaveEventDataInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.DisplayableTile
/// Size: 0x0018 (0x000028 - 0x000040)
class UDisplayableTile : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(int32_t)                                   TileId                                                      OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   ClearedPixelCount                                           OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	CMember(class UTexture2D*)                         FogMask                                                     OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/JunoGameNative.JunoMapManagerComponent
/// Size: 0x0180 (0x0000F8 - 0x000278)
class UJunoMapManagerComponent : public UFortPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 632;

public:
	DMember(float)                                     ExploredRadius                                              OFFSET(get<float>, {0x100, 4, 0, 0})
	SMember(FMapExplorationData)                       MapExplorationData                                          OFFSET(getStruct<T>, {0x118, 288, 0, 0})
	CMember(TArray<class UDisplayableTile*>)           DisplayableTiles                                            OFFSET(get<T>, {0x238, 16, 0, 0})
	CMember(TArray<FJunoTileInfo>)                     LoadedTiles                                                 OFFSET(get<T>, {0x248, 16, 0, 0})
	CMember(class UTexture2D*)                         ClearedFogMask                                              OFFSET(get<T>, {0x258, 8, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoMapManagerComponent.GetFOWForTile
	// class UTexture2D* GetFOWForTile(int32_t TileId);                                                                         // [0xb8facb4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoBuildLimitGetter
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoBuildLimitGetter : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoMarkersLimitPool
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoMarkersLimitPool : public UJunoBuildLimitGetter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoMarkersPersistenceFeatureModule
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UJunoMarkersPersistenceFeatureModule : public UPersistenceFrameworkModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/JunoGameNative.JunoMarkersPersistenceFeatureData_Container
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoMarkersPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
};

/// Class /Script/JunoGameNative.JunoMerchantDatabase
/// Size: 0x0008 (0x0000F8 - 0x000100)
class UJunoMerchantDatabase : public UFortPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	CMember(class UDataTable*)                         MerchantSalesDataTable                                      OFFSET(get<T>, {0xF8, 8, 0, 0})
};

/// Class /Script/JunoGameNative.JunoMeshNetworkWeatherComponent
/// Size: 0x0058 (0x000150 - 0x0001A8)
class UJunoMeshNetworkWeatherComponent : public UMeshNetworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
	CMember(TArray<FJunoSynchronizedWeatherState>)     SynchronizedWeatherStates                                   OFFSET(get<T>, {0x150, 16, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoMeshNetworkWeatherComponent.OnRep_OnSynchronizedWeatherStates
	// void OnRep_OnSynchronizedWeatherStates();                                                                                // [0xb8fae84] Final|Native|Private 
};

/// Class /Script/JunoGameNative.JunoMoodReactionConfigMappings
/// Size: 0x0050 (0x000030 - 0x000080)
class UJunoMoodReactionConfigMappings : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TMap<FGameplayTag, FDataTableRowHandle>)   MoodReactionConfigMap                                       OFFSET(get<T>, {0x30, 80, 0, 0})
};

/// Class /Script/JunoGameNative.JunoMutator_AutoPickup
/// Size: 0x0020 (0x000338 - 0x000358)
class AJunoMutator_AutoPickup : public AFortAthenaMutator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 856;

public:
	SMember(FGameplayTagContainer)                     DoNotAutoPickupGameplayTags                                 OFFSET(getStruct<T>, {0x338, 32, 0, 0})
};

/// Class /Script/JunoGameNative.JunoNPCMoodReactionDatabase
/// Size: 0x0008 (0x0000F8 - 0x000100)
class UJunoNPCMoodReactionDatabase : public UFortPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	CMember(class UJunoMoodReactionConfigMappings*)    MoodReactionConfigMappings                                  OFFSET(get<T>, {0xF8, 8, 0, 0})
};

/// Class /Script/JunoGameNative.JunoPassiveCraftingComponent
/// Size: 0x0048 (0x0000A0 - 0x0000E8)
class UJunoPassiveCraftingComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FMulticastInlineDelegate)                  OnPassiveCraftingDone                                       OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	CMember(TWeakObjectPtr<UJunoInventoryComponent*>)  CachedInventoryComponent                                    OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(TWeakObjectPtr<UCraftingObjectComponent*>) CachedCraftingObjectComponent                               OFFSET(get<T>, {0xC0, 8, 0, 0})
	DMember(bool)                                      bIsAutoCrafting                                             OFFSET(get<bool>, {0xC8, 1, 0, 0})
	SMember(FName)                                     AutoCraftingFormulaRow                                      OFFSET(getStruct<T>, {0xCC, 4, 0, 0})
	SMember(FDateTime)                                 AutoCraftingStartDateTime                                   OFFSET(getStruct<T>, {0xD8, 8, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoPassiveCraftingComponent.SetAutoCraftRecipe
	// void SetAutoCraftRecipe(FName FormulaRow);                                                                               // [0xb906ecc] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPassiveCraftingComponent.OnCraftingSuccess
	// void OnCraftingSuccess(FCraftingObjectSuccessEvent& Event);                                                              // [0xb90689c] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoPassiveCraftingComponent.MulticastFireCraftingDone
	// void MulticastFireCraftingDone(EPassiveCraftingDoneReason Reason);                                                       // [0xb906818] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/JunoGameNative.JunoPassiveCraftingComponent.IsAutoCrafting
	// bool IsAutoCrafting();                                                                                                   // [0x9fc2a64] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPassiveCraftingComponent.HandleInventoryDataRestored
	// void HandleInventoryDataRestored();                                                                                      // [0xb906730] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPassiveCraftingComponent.HandleCraftingStateChanged
	// void HandleCraftingStateChanged(FCraftingObjectStateChangedEvent& Event);                                                // [0xb906694] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoPassiveCraftingComponent.GetAutoCraftingFormulaRow
	// FName GetAutoCraftingFormulaRow();                                                                                       // [0xb905ff0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPassiveCraftingComponent.EnableAutoCrafting
	// void EnableAutoCrafting();                                                                                               // [0xb905e6c] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPassiveCraftingComponent.DisableAutoCrafting
	// void DisableAutoCrafting();                                                                                              // [0xb905e58] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPassiveCraftingComponent.CalculateNumRemainingAutoCraft
	// int32_t CalculateNumRemainingAutoCraft(FName OptionalFormulaRow);                                                        // [0xb905dcc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoPassiveResourcesGathererPawnComponent
/// Size: 0x0090 (0x0000A0 - 0x000130)
class UJunoPassiveResourcesGathererPawnComponent : public UPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FScalableFloat)                            JobEstimationTimeMultiplier                                 OFFSET(getStruct<T>, {0xA0, 40, 0, 0})
	CMember(class UDataTable*)                         GathererTable                                               OFFSET(get<T>, {0xC8, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPassiveResourceGeneratedOnPawnDelegate                    OFFSET(getStruct<T>, {0xD0, 16, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoPassiveResourcesGathererPawnComponent.GetTotalJobCompletionTimeInJunoHours
	// float GetTotalJobCompletionTimeInJunoHours();                                                                            // [0xb906390] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPassiveResourcesGathererPawnComponent.GetRemainingJobCompletionTimeInJunoHours
	// float GetRemainingJobCompletionTimeInJunoHours();                                                                        // [0xb906178] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPassiveResourcesGathererPawnComponent.GetLastUsedGatheringActorItemId
	// FPrimaryAssetId GetLastUsedGatheringActorItemId();                                                                       // [0xb90614c] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPassiveResourcesGathererPawnComponent.GetLastUsedGatheringActorDisplayText
	// FText GetLastUsedGatheringActorDisplayText();                                                                            // [0xb906108] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPassiveResourcesGathererPawnComponent.GetLastGeneratedPercentage
	// float GetLastGeneratedPercentage();                                                                                      // [0xb906074] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPassiveResourcesGathererPawnComponent.GetEstimatedTotalJobCompletionTimeInJunoDays
	// float GetEstimatedTotalJobCompletionTimeInJunoDays();                                                                    // [0xb906030] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoPassiveResourcesGatheringWorldConditionSchema
/// Size: 0x0010 (0x000038 - 0x000048)
class UJunoPassiveResourcesGatheringWorldConditionSchema : public UWorldConditionSchema
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/JunoGameNative.JunoPassiveResourcesGatheringComponent
/// Size: 0x00D8 (0x0000A0 - 0x000178)
class UJunoPassiveResourcesGatheringComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
	CMember(TArray<FPassiveResourcesGatheringRowRuntime>) ActiveGatheringRows                                      OFFSET(get<T>, {0xC8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPassiveResourceGeneratedDelegate                          OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
	SMember(FGameplayTagQuery)                         MatchingRolesQuery                                          OFFSET(getStruct<T>, {0x110, 72, 0, 0})
	CMember(TArray<FDataTableRowHandle>)               GatheringRows                                               OFFSET(get<T>, {0x158, 16, 0, 0})
	SMember(FDataTableRowHandle)                       SimulationConfigurationRow                                  OFFSET(getStruct<T>, {0x168, 16, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoPassiveResourcesGatheringComponent.RemoveGatheringRowOverride
	// void RemoveGatheringRowOverride();                                                                                       // [0xb906b18] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPassiveResourcesGatheringComponent.OverrideGatheringRow
	// bool OverrideGatheringRow(FDataTableRowHandle& GatheringRow);                                                            // [0xb906a7c] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoPersistenceDeveloperSettings
/// Size: 0x0070 (0x000030 - 0x0000A0)
class UJunoPersistenceDeveloperSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	DMember(bool)                                      bCreateNewWorldAlways                                       OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(bool)                                      bDisablePersistence                                         OFFSET(get<bool>, {0x31, 1, 0, 0})
	SMember(FString)                                   WorldNameSuffix                                             OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	DMember(bool)                                      bEnablePersistenceFrameworkDeltas                           OFFSET(get<bool>, {0x48, 1, 0, 0})
	DMember(int32_t)                                   NewWorldAdventureSeed                                       OFFSET(get<int32_t>, {0x4C, 4, 0, 0})
	CMember(TMap<FString, FString>)                    NewWorldDevProperties                                       OFFSET(get<T>, {0x50, 80, 0, 0})
};

/// Class /Script/JunoGameNative.JunoPersistenceFeatureData
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoPersistenceFeatureData : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoPersistenceReportGenerator
/// Size: 0x0028 (0x000028 - 0x000050)
class UJunoPersistenceReportGenerator : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/JunoGameNative.JunoPFWDefaultServiceWrapperSettings
/// Size: 0x0000 (0x000040 - 0x000040)
class UJunoPFWDefaultServiceWrapperSettings : public UPersistenceFrameworkServiceSettingsBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/JunoGameNative.JunoPickup
/// Size: 0x0008 (0x0007C0 - 0x0007C8)
class AJunoPickup : public AFortPickupAthena
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1992;

public:
	DMember(float)                                     MaxDropTossSpeed                                            OFFSET(get<float>, {0x7C0, 4, 0, 0})
};

/// Class /Script/JunoGameNative.JunoPlayerBuildingComponent
/// Size: 0x04B8 (0x0000A8 - 0x000560)
class UJunoPlayerBuildingComponent : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
	SMember(FJunoSelectedSlot)                         ReplicatedSelectedSlot                                      OFFSET(getStruct<T>, {0xA8, 48, 0, 0})
	SMember(FJunoBuildingSlotDataArray)                BuildBars                                                   OFFSET(getStruct<T>, {0x110, 624, 0, 0})
	CMember(TWeakObjectPtr<AJunoGuidedBuildingActor*>) LastGuidedBuildingActor                                     OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(TWeakObjectPtr<AJunoGuidedBuildingActor*>) ReplicatedLastGuidedBuildingActor                           OFFSET(get<T>, {0x388, 8, 0, 0})
	DMember(float)                                     ReplicateLastGuidedActorTime                                OFFSET(get<float>, {0x390, 4, 0, 0})
	DMember(float)                                     ReplicateBuildingMetricSpatialPrecision                     OFFSET(get<float>, {0x394, 4, 0, 0})
	SMember(FJunoBuildingSessionInfo)                  BuildingSessionInfo                                         OFFSET(getStruct<T>, {0x398, 40, 0, 0})
	SMember(FJunoInputMapping)                         BuildingMappingContext                                      OFFSET(getStruct<T>, {0x3C0, 16, 0, 0})
	CMember(class UInputAction*)                       NextSlot                                                    OFFSET(get<T>, {0x3D0, 8, 0, 0})
	CMember(class UInputAction*)                       PrevSlot                                                    OFFSET(get<T>, {0x3D8, 8, 0, 0})
	CMember(class UInputAction*)                       ExitBuildMode                                               OFFSET(get<T>, {0x3E0, 8, 0, 0})
	CMember(class UInputAction*)                       PinItem                                                     OFFSET(get<T>, {0x3E8, 8, 0, 0})
	CMember(TArray<class UInputAction*>)               BuildBarBindings                                            OFFSET(get<T>, {0x3F0, 16, 0, 0})
	CMember(TArray<FDataTableRowHandle>)               DefaultRecipes                                              OFFSET(get<T>, {0x400, 16, 0, 0})
	CMember(TArray<FJunoBuildingMetricsClientPermissions>) ClientSpatialMetricsBuildingPermissions                 OFFSET(get<T>, {0x410, 16, 0, 0})
	SMember(FIntVector)                                LastKnownPawnSpatialCell                                    OFFSET(getStruct<T>, {0x420, 12, 0, 0})
	CMember(TSet<FJunoTrackedActorKey>)                DirtyCellLocations                                          OFFSET(get<T>, {0x430, 80, 0, 0})
	DMember(int32_t)                                   MaxRecentRecipes                                            OFFSET(get<int32_t>, {0x490, 4, 0, 0})
	CMember(class UJunoAsyncAction_WaitForEventRouter*) WaitForEventRouterAction                                   OFFSET(get<T>, {0x558, 8, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.SetRecipeAtIndex
	// void SetRecipeAtIndex(int32_t InIndex, FName RecipeName, EJunoBuildModeType ModeType);                                   // [0xb906fcc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.SetLastGuidedBuildingActor
	// void SetLastGuidedBuildingActor(class AJunoGuidedBuildingActor* InLastGuidedBuildingActor);                              // [0xb906f4c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.ServerSetRecipeAtIndex
	// void ServerSetRecipeAtIndex(FJunoSlotIndex NewSlot, FName RecipeName);                                                   // [0xb906cb8] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.ServerSetLastGuidedBuildingActor
	// void ServerSetLastGuidedBuildingActor(class AJunoGuidedBuildingActor* InLastActor);                                      // [0x83bf908] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.ServerSelectSlot
	// void ServerSelectSlot(FJunoSelectedSlot NewSlot);                                                                        // [0xb906b34] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.ServerEndGuidedBuild
	// void ServerEndGuidedBuild();                                                                                             // [0x8384268] RequiredAPI|Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.OnRep_ReplicateLastGuidedActorTime
	// void OnRep_ReplicateLastGuidedActorTime();                                                                               // [0xb906a40] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.OnRep_ReplicatedSelectedSlot
	// void OnRep_ReplicatedSelectedSlot();                                                                                     // [0xb906a68] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.OnRep_ReplicatedLastGuidedBuildingActor
	// void OnRep_ReplicatedLastGuidedBuildingActor();                                                                          // [0xb906a54] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.OnGuidedBuildingStageChanged
	// void OnGuidedBuildingStageChanged(FGuidedBuildingUpdate& StageUpdate);                                                   // [0xb9069b0] Final|Native|Protected|HasOutParms 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.OnGuidedBuildDone
	// void OnGuidedBuildDone(FGuidedBuildingUpdate& StageUpdate);                                                              // [0xb906920] Final|Native|Protected|HasOutParms 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.IsRecipePinned
	// bool IsRecipePinned(FName Recipe);                                                                                       // [0xb90678c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.IsBuildModeEnabled
	// bool IsBuildModeEnabled();                                                                                               // [0x321ca58] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.HasSelectedRemainingParts
	// bool HasSelectedRemainingParts();                                                                                        // [0xb906768] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.HasSelectedMissingParts
	// bool HasSelectedMissingParts();                                                                                          // [0xb906744] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.HandleBuildingMetricsThresholdChange
	// void HandleBuildingMetricsThresholdChange(FInt32Vector& Location);                                                       // [0xb90660c] Final|Native|Protected|HasOutParms|HasDefaults 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.HandleBuildingMetricsActorCountChange
	// void HandleBuildingMetricsActorCountChange(FInt32Vector& Location, int32_t PreviousActorCount, int32_t NewActorCount);   // [0xb9063b8] Final|Native|Protected|HasOutParms|HasDefaults 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.GetSlotData
	// FJunoBuildingSlotData GetSlotData(int32_t Index, EJunoBuildModeType InType);                                             // [0xb906260] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.GetSelectedSlotIndex
	// int32_t GetSelectedSlotIndex(EJunoBuildModeType InType);                                                                 // [0xb9061d4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.GetRemainingPartsForSelectedRecipe
	// FJunoGuidedBuildRemainingPartsInfo GetRemainingPartsForSelectedRecipe();                                                 // [0xb9061a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.GetLastSelectedRecipe
	// FName GetLastSelectedRecipe();                                                                                           // [0xb9060f0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.GetLastLoadedRecipeData
	// FJunoLastLoadedRecipeData GetLastLoadedRecipeData();                                                                     // [0xb9060d8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.GetLastLoadedRecipe
	// FName GetLastLoadedRecipe();                                                                                             // [0xb9060c0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.GetLastGuidedBuildingActor
	// class AJunoGuidedBuildingActor* GetLastGuidedBuildingActor();                                                            // [0xb90609c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.GetLastFocusedRecipe
	// FName GetLastFocusedRecipe();                                                                                            // [0xb25c98c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.GetIsInBuildMode
	// bool GetIsInBuildMode();                                                                                                 // [0xb906058] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.GetForcedRecipe
	// FName GetForcedRecipe();                                                                                                 // [0x6e857a8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.GetCurrentRecipe
	// FName GetCurrentRecipe();                                                                                                // [0xb906008] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.GetBuildModeType
	// EJunoBuildModeType GetBuildModeType();                                                                                   // [0x846a108] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.EnterGuidedBuilding
	// void EnterGuidedBuilding(class AJunoGuidedBuildingActor* InLastGuidedBuildingActor);                                     // [0xb905f70] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.EnterBuildingModeAndSelectIndex
	// void EnterBuildingModeAndSelectIndex(int32_t Index, EJunoBuildModeType InType);                                          // [0xb905e80] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.AttempEndGuidedBuild
	// void AttempEndGuidedBuild();                                                                                             // [0xb905db8] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoPlayerCampPawnComponent
/// Size: 0x0070 (0x0000A0 - 0x000110)
class UJunoPlayerCampPawnComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoPlayerCampPawnComponent.HandleAwesomeLevelChanged
	// void HandleAwesomeLevelChanged(FJunoAwesomeLevelChangeData& ChangeData);                                                 // [0xb909414] Final|Native|Private|HasOutParms 
};

/// Class /Script/JunoGameNative.JunoPlayerControllerComponent_SessionAnalytics
/// Size: 0x0200 (0x0000A0 - 0x0002A0)
class UJunoPlayerControllerComponent_SessionAnalytics : public UControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	DMember(double)                                    JunoPlaySessionStartedTime                                  OFFSET(get<double>, {0xA8, 8, 0, 0})
	SMember(FGuid)                                     JunoPlaySessionID                                           OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	CMember(TArray<FName>)                             RecipesUnlockedDuringSession                                OFFSET(get<T>, {0xC0, 16, 0, 0})
	DMember(float)                                     AccumulatedDistanceTraveled                                 OFFSET(get<float>, {0xD0, 4, 0, 0})
	SMember(FVector)                                   LastPlayerPawnLocation                                      OFFSET(getStruct<T>, {0xD8, 24, 0, 0})
	SMember(FString)                                   SavedDisconnectReason                                       OFFSET(getStruct<T>, {0x140, 16, 0, 0})
	SMember(FGameplayEventListenerHandle)              GracefulShutdownInitiatedEventHandle                        OFFSET(getStruct<T>, {0x150, 28, 0, 0})
	DMember(bool)                                      bGracefulShutdownStarted                                    OFFSET(get<bool>, {0x16C, 1, 0, 0})
	DMember(int32_t)                                   GracefulShutdownExitCode                                    OFFSET(get<int32_t>, {0x170, 4, 0, 0})
	DMember(int32_t)                                   GracefulShutdownMaxTime                                     OFFSET(get<int32_t>, {0x174, 4, 0, 0})
	SMember(FGameplayEventListenerHandle)              PawnEliminatedEventHandle                                   OFFSET(getStruct<T>, {0x1C8, 28, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoPlayerControllerComponent_SessionAnalytics.ResetHeartbeatStats
	// void ResetHeartbeatStats();                                                                                              // [0xb90a250] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPlayerControllerComponent_SessionAnalytics.OnRep_JunoPlaySessionID
	// void OnRep_JunoPlaySessionID();                                                                                          // [0xb90a164] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPlayerControllerComponent_SessionAnalytics.OnPlayerStatsUpdateTimer
	// void OnPlayerStatsUpdateTimer();                                                                                         // [0xb909e98] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPlayerControllerComponent_SessionAnalytics.OnPlayerDisconnecting
	// void OnPlayerDisconnecting(class AFortPlayerController* FortPlayerController, FString DevReason, bool bGracefulDisconnect); // [0xb909774] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPlayerControllerComponent_SessionAnalytics.OnHeartbeatTimer
	// void OnHeartbeatTimer();                                                                                                 // [0xb9096cc] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPlayerControllerComponent_SessionAnalytics.HandleInventoryDataRestored
	// void HandleInventoryDataRestored();                                                                                      // [0xb909540] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPlayerControllerComponent_SessionAnalytics.HandleGracefulShutdownInitiated
	// void HandleGracefulShutdownInitiated(FFortGracefulShutdownInitiatedEvent& Event);                                        // [0xb9094a4] Final|Native|Private|HasOutParms 
};

/// Class /Script/JunoGameNative.JunoPlayerSaveDataProviderInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoPlayerSaveDataProviderInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoPlayerPersistenceFeatureModule
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UJunoPlayerPersistenceFeatureModule : public UPersistenceFrameworkModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/JunoGameNative.JunoPlayerSaveData_Container
/// Size: 0x0068 (0x0001E0 - 0x000248)
class UJunoPlayerSaveData_Container : public UJunoBasePFWContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 584;

public:
	SMember(FPersistenceFrameworkPlayerInfo)           PlayerInfo                                                  OFFSET(getStruct<T>, {0x1E0, 32, 0, 0})
	SMember(FUniqueNetIdRepl)                          PlayerNetId                                                 OFFSET(getStruct<T>, {0x200, 48, 0, 0})
};

/// Class /Script/JunoGameNative.JunoPlayspaceAccountantFeatureData
/// Size: 0x0058 (0x000040 - 0x000098)
class UJunoPlayspaceAccountantFeatureData : public UJunoBasePFWPersistenceFeatureData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FJunoPlayspaceAccountantSaveData)          JunoPlayspaceAccountantSaveData                             OFFSET(getStruct<T>, {0x48, 80, 0, 0})
};

/// Class /Script/JunoGameNative.JunoPlayspaceAccountantFeatureDataActor
/// Size: 0x0058 (0x0002D0 - 0x000328)
class AJunoPlayspaceAccountantFeatureDataActor : public AJunoPersistenceFeatureDataActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
	CMember(TMap<FName, int32_t>)                      PersistentValueTable                                        OFFSET(get<T>, {0x2D8, 80, 0, 0})
};

/// Class /Script/JunoGameNative.JunoPlayspaceAccountantPersistenceFeatureModule
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UJunoPlayspaceAccountantPersistenceFeatureModule : public UPersistenceFrameworkModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/JunoGameNative.JunoPlayspaceAccountantPersistenceFeatureData_Container
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoPlayspaceAccountantPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
};

/// Class /Script/JunoGameNative.JunoPlayspaceControllerComponent_PlayerSpawning
/// Size: 0x0018 (0x000118 - 0x000130)
class UJunoPlayspaceControllerComponent_PlayerSpawning : public UPlayspaceControllerComponent_PlayerSpawning
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoPlayspaceControllerComponent_PlayerSpawning.StartRespawn
	// void StartRespawn();                                                                                                     // [0xb90a430] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPlayspaceControllerComponent_PlayerSpawning.ServerQueuePlayerForRespawn
	// void ServerQueuePlayerForRespawn();                                                                                      // [0xb90a264] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/JunoGameNative.JunoPlayspaceControllerComponent_PlayerSpawning.OnPawnPosessed
	// void OnPawnPosessed(class AFortPawn* NewPawn);                                                                           // [0xb9096e0] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPlayspaceControllerComponent_PlayerSpawning.IsAllowedToShowRespawnUI
	// bool IsAllowedToShowRespawnUI();                                                                                         // [0xb90969c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoPlayspaceIndexPersistenceFeatureModule
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UJunoPlayspaceIndexPersistenceFeatureModule : public UPersistenceFrameworkModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/JunoGameNative.JunoPlayspaceIndexPersistenceFeatureData_Container
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoPlayspaceIndexPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
};

/// Class /Script/JunoGameNative.JunoPlayspacePersistenceFeatureHelper
/// Size: 0x0028 (0x000028 - 0x000050)
class UJunoPlayspacePersistenceFeatureHelper : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(class UClass*)                             PersistenceFeatureDataClass                                 OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TScriptInterface<Class>)                   PersistenceFeatureData                                      OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/JunoGameNative.JunoQueryContext_Camp_Center
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoQueryContext_Camp_Center : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoQueryContext_Camp_Extents
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoQueryContext_Camp_Extents : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoQuickBuildSelectionData
/// Size: 0x0018 (0x000028 - 0x000040)
class UJunoQuickBuildSelectionData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(int32_t)                                   CurrentlySelectedIndex                                      OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	CMember(TArray<FName>)                             QuickBuildRecipes                                           OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/JunoGameNative.JunoRainCapture
/// Size: 0x0030 (0x000290 - 0x0002C0)
class AJunoRainCapture : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	CMember(class USceneCaptureComponent2D*)           SceneCaptureComponent2D                                     OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(class UMaterialParameterCollection*)       MaterialParameterCollection                                 OFFSET(get<T>, {0x298, 8, 0, 0})
	SMember(FName)                                     RainOccluderSceneCaptureLocationName                        OFFSET(getStruct<T>, {0x2A0, 4, 0, 0})
	SMember(FVector)                                   RainOccluderPositionOffset                                  OFFSET(getStruct<T>, {0x2A8, 24, 0, 0})
};

/// Class /Script/JunoGameNative.JunoRainCaptureSubsystem
/// Size: 0x0050 (0x000040 - 0x000090)
class UJunoRainCaptureSubsystem : public UTickableWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FSoftObjectPath)                           SubsystemDataAssetPath                                      OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	CMember(class UJunoRainCaptureSubsystemData*)      SubsystemData                                               OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(class AJunoRainCapture*)                   RainCaptureInstance                                         OFFSET(get<T>, {0x80, 8, 0, 0})
};

/// Class /Script/JunoGameNative.JunoRainCaptureSubsystemData
/// Size: 0x0038 (0x000030 - 0x000068)
class UJunoRainCaptureSubsystemData : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(class UMaterialParameterCollection*)       MaterialParameterCollection                                 OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UTextureRenderTarget2D*)             TextureTarget                                               OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FName)                                     WeatherParameterName                                        OFFSET(getStruct<T>, {0x40, 4, 0, 0})
	SMember(FName)                                     RainOccluderSceneCaptureLocationName                        OFFSET(getStruct<T>, {0x44, 4, 0, 0})
	SMember(FVector)                                   RainOccluderPositionOffset                                  OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	DMember(float)                                     UpdateDistanceThreshold                                     OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     UpdateTimeThreshold                                         OFFSET(get<float>, {0x64, 4, 0, 0})
};

/// Class /Script/JunoGameNative.JunoRainOccluderComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UJunoRainOccluderComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/JunoGameNative.JunoReportHandler
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoReportHandler : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoPlayspacePersistenceComponent
/// Size: 0x0028 (0x0000F8 - 0x000120)
class UJunoPlayspacePersistenceComponent : public UFortPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<class UClass*>)                     RequiredPersistenceFeatureDataClasses                       OFFSET(get<T>, {0x100, 16, 0, 0})
	CMember(TArray<FJunoPersistenceFeature>)           PersistenceFeatures                                         OFFSET(get<T>, {0x110, 16, 0, 0})
};

/// Class /Script/JunoGameNative.JunoRootPlayspacePersistenceComponent
/// Size: 0x0000 (0x000120 - 0x000120)
class UJunoRootPlayspacePersistenceComponent : public UJunoPlayspacePersistenceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
};

/// Class /Script/JunoGameNative.JunoSmartObjectComponent
/// Size: 0x0010 (0x000340 - 0x000350)
class UJunoSmartObjectComponent : public UFortSmartObjectComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 848;

public:
	CMember(class UCurveFloat*)                        LootTierPercentageToSlotPickingModifier                     OFFSET(get<T>, {0x348, 8, 0, 0})
};

/// Class /Script/JunoGameNative.JunoSyncTimeOfDayComponent
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UJunoSyncTimeOfDayComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoSyncTimeOfDayComponent.SetTimeOfDaySyncEnabled
	// void SetTimeOfDaySyncEnabled(bool bNewTimeOfDaySyncEnabled);                                                             // [0xb90a3b0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoSyncTimeOfDayComponent.GetTimeOfDaySyncEnabled
	// bool GetTimeOfDaySyncEnabled();                                                                                          // [0x80cfcb4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoSyncWeatherComponent
/// Size: 0x0050 (0x0000A0 - 0x0000F0)
class UJunoSyncWeatherComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Script/JunoGameNative.JunoTeamStart
/// Size: 0x0008 (0x0002C0 - 0x0002C8)
class AJunoTeamStart : public APlayerStart
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 712;

public:
	DMember(float)                                     CapsuleRadius                                               OFFSET(get<float>, {0x2C0, 4, 0, 0})
	DMember(float)                                     CapsuleHeight                                               OFFSET(get<float>, {0x2C4, 4, 0, 0})
};

/// Class /Script/JunoGameNative.JunoTeleporter
/// Size: 0x0010 (0x000BC8 - 0x000BD8)
class AJunoTeleporter : public ABuildingProp
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3032;

public:
	CMember(TWeakObjectPtr<AJunoTeleporter*>)          TargetTeleporter                                            OFFSET(get<T>, {0xBC8, 8, 0, 0})
	DMember(bool)                                      bIsTeleporterEnabled                                        OFFSET(get<bool>, {0xBD0, 1, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoTeleporter.SetTargetTeleporter
	// void SetTargetTeleporter(class AJunoTeleporter* TargetTeleportActor);                                                    // [0xb90a2b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoTeleporter.IsTeleporterEnabled
	// bool IsTeleporterEnabled();                                                                                              // [0xb9096b4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoTeleporter.GetTargetTeleporter
	// class AJunoTeleporter* GetTargetTeleporter();                                                                            // [0xb9093ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoTemperatureAttributeSet
/// Size: 0x00E0 (0x000030 - 0x000110)
class UJunoTemperatureAttributeSet : public UFortAttributeSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FGameplayTagContainer)                     BlockedTemperatures                                         OFFSET(getStruct<T>, {0x30, 32, 0, 0})
	SMember(FFortGameplayAttributeData)                Temperature                                                 OFFSET(getStruct<T>, {0x50, 40, 0, 0})
	SMember(FFortGameplayAttributeData)                ColdResistance                                              OFFSET(getStruct<T>, {0x78, 40, 0, 0})
	SMember(FFortGameplayAttributeData)                HeatResistance                                              OFFSET(getStruct<T>, {0xA0, 40, 0, 0})
	SMember(FGameplayTag)                              CurrentTemperature                                          OFFSET(getStruct<T>, {0xC8, 4, 0, 0})
	CMember(TArray<FTemperatureRange>)                 TemperatureRanges                                           OFFSET(get<T>, {0xD0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTemperatureChanged                                        OFFSET(getStruct<T>, {0xE0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTemperatureRangesChanged                                  OFFSET(getStruct<T>, {0xF0, 16, 0, 0})
	DMember(bool)                                      bAddTemperatureTagToActor                                   OFFSET(get<bool>, {0x100, 1, 0, 0})
	SMember(FGameplayTag)                              ForcedTemperature                                           OFFSET(getStruct<T>, {0x104, 4, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoTemperatureAttributeSet.OnRep_TemperatureRanges
	// void OnRep_TemperatureRanges();                                                                                          // [0xb90a23c] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoTemperatureAttributeSet.OnRep_Temperature
	// void OnRep_Temperature(FFortGameplayAttributeData& OldValue);                                                            // [0xb90a178] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoTemperatureAttributeSet.OnRep_HeatResistance
	// void OnRep_HeatResistance(FFortGameplayAttributeData& OldValue);                                                         // [0xb90a0a0] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoTemperatureAttributeSet.OnRep_CurrentTemperature
	// void OnRep_CurrentTemperature(FGameplayTag OldTemperature);                                                              // [0xb909f70] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoTemperatureAttributeSet.OnRep_ColdResistance
	// void OnRep_ColdResistance(FFortGameplayAttributeData& OldValue);                                                         // [0xb909eac] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoTemperatureAttributeSet.HandleWeatherTemperatureChanged
	// void HandleWeatherTemperatureChanged(FJunoEvent_TemperatureChanged Payload);                                             // [0xb909554] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoTemperatureAttributeSet.ForceTemperature
	// void ForceTemperature(FGameplayTag TemperatureToForce);                                                                  // [0xb9092bc] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoTemperatureComponent
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UJunoTemperatureComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TWeakObjectPtr<UJunoTemperatureAttributeSet*>) TemperatureAttributeSet                                 OFFSET(get<T>, {0xA0, 8, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoTemperatureComponent.HandleOwnerASCInvalidated
	// void HandleOwnerASCInvalidated();                                                                                        // [0xb90c4c0] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoTemperatureComponent.HandleOwnerASCInitialized
	// void HandleOwnerASCInitialized(class UFortAbilitySystemComponent* FortAbilitySystemComponent, class AFortPlayerPawn* AffectedPawn); // [0xb90c404] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoTemperatureComponent.GetTemperatureAttributeSet
	// class UJunoTemperatureAttributeSet* GetTemperatureAttributeSet();                                                        // [0x67e5b38] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoTemplatesReportHandler
/// Size: 0x0018 (0x000028 - 0x000040)
class UJunoTemplatesReportHandler : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/JunoGameNative.JunoToyAttachmentFixupComponent
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UJunoToyAttachmentFixupComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoToyAttachmentFixupComponent.HandleToyAttachementFixupTimer
	// void HandleToyAttachementFixupTimer();                                                                                   // [0xb90c4d4] Final|Native|Protected 
};

/// Class /Script/JunoGameNative.JunoUpdateActionsReportHandler
/// Size: 0x0018 (0x000028 - 0x000040)
class UJunoUpdateActionsReportHandler : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/JunoGameNative.JunoWeaponAbility
/// Size: 0x0000 (0x000B60 - 0x000B60)
class UJunoWeaponAbility : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2912;

public:
};

/// Class /Script/JunoGameNative.JunoWeaponCreatureItemDefinition
/// Size: 0x0020 (0x000D10 - 0x000D30)
class UJunoWeaponCreatureItemDefinition : public UFortWeaponRangedItemDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3376;

public:
	CMember(TArray<class UClass*>)                     Debug_CreaturesToSpawn                                      OFFSET(get<T>, {0xD10, 16, 0, 0})
	CMember(TArray<FDataTableRowHandle>)               SpawnEvents                                                 OFFSET(get<T>, {0xD20, 16, 0, 0})
};

/// Class /Script/JunoGameNative.JunoWeaponsBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoWeaponsBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoWeaponsBlueprintLibrary.GetSpawnEvents
	// TArray<FDataTableRowHandle> GetSpawnEvents(class UGameplayAbility* GameplayAbility);                                     // [0xb90c2cc] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoWeaponsBlueprintLibrary.GetCreaturesToSpawn
	// TArray<UClass*> GetCreaturesToSpawn(class UGameplayAbility* GameplayAbility);                                            // [0xb90ba94] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/JunoGameNative.JunoWeatherFXPersistence
/// Size: 0x0058 (0x000290 - 0x0002E8)
class AJunoWeatherFXPersistence : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:
	CMember(class UMaterialParameterCollection*)       MaterialParameterCollection                                 OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(class UMaterialParameterCollectionInstance*) CachedMPCInstance                                         OFFSET(get<T>, {0x298, 8, 0, 0})
	SMember(FLinearColor)                              WindPosition                                                OFFSET(getStruct<T>, {0x2A0, 16, 0, 0})
	SMember(FLinearColor)                              WindValueInCave                                             OFFSET(getStruct<T>, {0x2B0, 16, 0, 0})
	DMember(float)                                     MaxWindSpeed                                                OFFSET(get<float>, {0x2C0, 4, 0, 0})
	SMember(FLinearColor)                              GustMaxWindSpeedAddend                                      OFFSET(getStruct<T>, {0x2C4, 16, 0, 0})
	DMember(float)                                     WindScalar                                                  OFFSET(get<float>, {0x2D4, 4, 0, 0})
	SMember(FName)                                     WindParamName                                               OFFSET(getStruct<T>, {0x2D8, 4, 0, 0})
	SMember(FName)                                     WindPositionParamName                                       OFFSET(getStruct<T>, {0x2DC, 4, 0, 0})
	SMember(FName)                                     WindPreviousPositionParamName                               OFFSET(getStruct<T>, {0x2E0, 4, 0, 0})
	DMember(bool)                                      bInCave                                                     OFFSET(get<bool>, {0x2E4, 1, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoWeatherFXPersistence.UpdateWindGust
	// void UpdateWindGust(float IntensityScalar, FVector& GustIntensity, FLinearColor& CurrentWind);                           // [0xb90cad8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoWeatherLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoWeatherLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoWeatherLibrary.StringToLocation
	// FJunoWeatherLocation StringToLocation(FName LocationName);                                                               // [0xb90ca58] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoWeatherLibrary.RollWeatherFromSeason
	// FJunoWeatherPhase RollWeatherFromSeason(FJunoWeatherSeasonRow& Season, FJunoWeatherLocation& Location, FGameplayTag& OptionalWeatherType); // [0xb90c8a8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoWeatherLibrary.RollWeatherFromForecast
	// FJunoWeatherPhase RollWeatherFromForecast(FJunoWeatherPhaseForecast& Forecast);                                          // [0xb90c7e8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoWeatherLibrary.NotEqual_JunoWeatherLocation
	// bool NotEqual_JunoWeatherLocation(FJunoWeatherLocation& A, FJunoWeatherLocation& B);                                     // [0xb90c624] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoWeatherLibrary.FindGameStateWeatherComponent
	// class UJunoGameStateWeatherComponent* FindGameStateWeatherComponent(class UObject* WorldContextObject);                  // [0xb90b95c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoWeatherLibrary.EqualEqual_JunoWeatherLocation
	// bool EqualEqual_JunoWeatherLocation(FJunoWeatherLocation& A, FJunoWeatherLocation& B);                                   // [0xb90b868] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoWeatherLibrary.DescribePhase
	// FString DescribePhase(FJunoWeatherPhase& WeatherPhase);                                                                  // [0xb90b7c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoWeatherLibrary.DescribeLocation
	// FString DescribeLocation(FJunoWeatherLocation& WeatherLocation);                                                         // [0xb90b71c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoWeatherLibrary.CalculateLocation
	// FJunoWeatherLocation CalculateLocation(class AActor* Actor);                                                             // [0xb90b69c] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoWeatherLocationComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UJunoWeatherLocationComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FMulticastInlineDelegate)                  OnLocationChanged                                           OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FJunoWeatherLocation)                      Location                                                    OFFSET(getStruct<T>, {0xB0, 2, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoWeatherLocationComponent.OnRep_Location
	// void OnRep_Location(FJunoWeatherLocation& OldLocation);                                                                  // [0xb90c718] Final|Native|Protected|HasOutParms 
	// Function /Script/JunoGameNative.JunoWeatherLocationComponent.HandleLocationChanged
	// void HandleLocationChanged();                                                                                            // [0xb90c3f0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoWeatherLocationComponent.GetLocation
	// FJunoWeatherLocation GetLocation();                                                                                      // [0xb90c2b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoWeatherLocationComponent.BP_CalculateLocation
	// FJunoWeatherLocation BP_CalculateLocation();                                                                             // [0xb90b66c] Native|Event|Protected|BlueprintEvent|Const 
};

/// Class /Script/JunoGameNative.JunoWeatherPersistenceFeatureModule
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UJunoWeatherPersistenceFeatureModule : public UPersistenceFrameworkModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/JunoGameNative.JunoWeatherPersistenceFeatureData_Container
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoWeatherPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
};

/// Class /Script/JunoGameNative.JunoWeatherReactionComponent
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class UJunoWeatherReactionComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FMulticastInlineDelegate)                  OnWeatherPhaseChanged                                       OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTemperatureChanged                                        OFFSET(getStruct<T>, {0xB0, 16, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoWeatherReactionComponent.ReceiveOnWeatherPhaseChanged
	// void ReceiveOnWeatherPhaseChanged(FJunoEvent_WeatherPhaseChanged Payload);                                               // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoWeatherReactionComponent.ReceiveOnTemperatureChanged
	// void ReceiveOnTemperatureChanged(FJunoEvent_TemperatureChanged Payload);                                                 // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoWeatherReactionComponent.HandleWeatherLocationChanged
	// void HandleWeatherLocationChanged(FJunoWeatherLocationChangedEvent Payload);                                             // [0xb90c4e8] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoWeatherReactionComponent.GetCurrentWeatherPhase
	// FJunoWeatherPhase GetCurrentWeatherPhase();                                                                              // [0xb90c220] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoWeatherReactionComponent.GetCurrentTemperatureFloat
	// float GetCurrentTemperatureFloat();                                                                                      // [0xb90c1f8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoWeatherReactionComponent.GetCurrentTemperature
	// FGameplayTag GetCurrentTemperature();                                                                                    // [0xb90c1b4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoWeatherReactionComponent.GetClosestStatefulLocationFor
	// FJunoWeatherLocation GetClosestStatefulLocationFor(FJunoWeatherLocation& WeatherLocation);                               // [0xb90ba00] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoWeatherReactionComponent.FindWeatherState
	// class UJunoWeatherStateComponent* FindWeatherState();                                                                    // [0xb90b9dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoWeatherStateComponent
/// Size: 0x00E8 (0x0000A0 - 0x000188)
class UJunoWeatherStateComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
	SMember(FJunoWeatherLocation)                      Location                                                    OFFSET(getStruct<T>, {0xD0, 2, 0, 0})
	CMember(class UDataTable*)                         SeasonTable                                                 OFFSET(get<T>, {0xD8, 8, 0, 0})
	SMember(FJunoWeatherPhase)                         CurrentWeatherPhase                                         OFFSET(getStruct<T>, {0xE8, 56, 0, 0})
	SMember(FJunoWeatherPhase)                         NextWeatherPhase                                            OFFSET(getStruct<T>, {0x120, 56, 0, 0})
	CMember(TArray<FJunoWeatherPhase>)                 NextWeatherQueue                                            OFFSET(get<T>, {0x158, 16, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.TransitionWeatherNowTo
	// void TransitionWeatherNowTo(FJunoWeatherPhase& NewWeatherPhase, FJunoWeatherPhase& NewNextWeatherPhase);                 // [0xb90f61c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.TransitionWeatherNow
	// void TransitionWeatherNow();                                                                                             // [0xb90f608] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.SetAutoTransitioning
	// void SetAutoTransitioning(bool bAutoTransitionWeather);                                                                  // [0xb90f588] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.RollWeatherPhase
	// FJunoWeatherPhase RollWeatherPhase();                                                                                    // [0xb90f540] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.RerollNextWeatherWith
	// void RerollNextWeatherWith(FGameplayTag& WeatherTypeName);                                                               // [0xb90f478] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.ReceiveWeatherPhaseChanged
	// void ReceiveWeatherPhaseChanged(FJunoEvent_WeatherPhaseChanged& Payload);                                                // [0x2177018] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.ReceiveTemperatureChanged
	// void ReceiveTemperatureChanged(FJunoEvent_TemperatureChanged& Payload);                                                  // [0x2177018] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.QueueNextWeather
	// void QueueNextWeather(FJunoWeatherPhase& QueuedWeather);                                                                 // [0xb90f370] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.OnRep_CurrentWeatherPhase
	// void OnRep_CurrentWeatherPhase();                                                                                        // [0xb90ec9c] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.IsAutoTransitioning
	// bool IsAutoTransitioning();                                                                                              // [0xb90e6c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.GetTransitionOutAlpha
	// float GetTransitionOutAlpha();                                                                                           // [0xb90de3c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.GetTransitionInAlpha
	// float GetTransitionInAlpha();                                                                                            // [0xb90de24] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.GetNextWeatherQueue
	// TArray<FJunoWeatherPhase> GetNextWeatherQueue();                                                                         // [0xb90dde8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.GetNextWeatherPhase
	// FJunoWeatherPhase GetNextWeatherPhase();                                                                                 // [0xb90dda8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.GetLocation
	// FJunoWeatherLocation GetLocation();                                                                                      // [0xb90dd8c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.GetCurrentWeatherPhase
	// FJunoWeatherPhase GetCurrentWeatherPhase();                                                                              // [0xb90dd4c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.GetCurrentTemperatureFloat
	// float GetCurrentTemperatureFloat();                                                                                      // [0x6e857c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.GetCurrentTemperature
	// FGameplayTag GetCurrentTemperature();                                                                                    // [0xb90dd20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.GetCurrentSeason
	// FGameplayTag GetCurrentSeason();                                                                                         // [0xb90dcf0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.ForceNextWeatherTo
	// void ForceNextWeatherTo(FJunoWeatherPhase& NewNextWeatherPhase);                                                         // [0xb90db00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.ClearNextWeatherQueue
	// void ClearNextWeatherQueue();                                                                                            // [0xb90daec] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoWorldPersistenceCheckpointManager
/// Size: 0x0028 (0x000028 - 0x000050)
class UJunoWorldPersistenceCheckpointManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(int32_t)                                   CheckpointIntervalSeconds                                   OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   MinCheckpointIntervalSeconds                                OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   MaxCheckpointCountWithinConfiguredInterval                  OFFSET(get<int32_t>, {0x30, 4, 0, 0})
};

/// Class /Script/JunoGameNative.JunoWorldPersistenceFeatureModule
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UJunoWorldPersistenceFeatureModule : public UPersistenceFrameworkModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/JunoGameNative.JunoWorldPersistenceFeatureData_Container
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoWorldPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
};

/// Class /Script/JunoGameNative.JunoWorldPersistenceSubsystem
/// Size: 0x00F8 (0x000030 - 0x000128)
class UJunoWorldPersistenceSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	DMember(bool)                                      bEnableWorldPersistence                                     OFFSET(get<bool>, {0x68, 1, 0, 0})
	DMember(bool)                                      bEnableWorldPersistenceInPIE                                OFFSET(get<bool>, {0x69, 1, 0, 0})
	CMember(class UJunoWorldPersistenceHandler*)       WorldPersistenceHandler                                     OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(class UJunoWorldPersistencePlayerManager*) WorldPersistencePlayerManager                               OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(class UJunoWorldPersistenceSubsystemData*) SubsystemData                                               OFFSET(get<T>, {0x80, 8, 0, 0})
	CMember(class UJunoWorldPersistenceCheckpointManager*) CheckpointManager                                       OFFSET(get<T>, {0x88, 8, 0, 0})
	CMember(TMap<FGuid, TWeakObjectPtr<AJunoPersistentPlayspace*>>) PersistentPlayspaceMap                         OFFSET(get<T>, {0x90, 80, 0, 0})
	CMember(EJunoWorldSaveDataState)                   WorldSaveDataState                                          OFFSET(get<T>, {0xE0, 1, 0, 0})
	SMember(FSoftObjectPath)                           SubsystemDataAssetPath                                      OFFSET(getStruct<T>, {0xE8, 24, 0, 0})
	CMember(TArray<FString>)                           ErrorCodeAllowList                                          OFFSET(get<T>, {0x118, 16, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoWorldPersistenceSubsystem.WasActorSpawnedFromSavedGame
	// bool WasActorSpawnedFromSavedGame(class AActor* Actor);                                                                  // [0xb90facc] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoWorldPersistenceSubsystem.RequestActorSave
	// void RequestActorSave(class AActor* Actor);                                                                              // [0xb90f400] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoWorldPersistenceSubsystem.GenerateDeterministicMapActorGUID
	// FGuid GenerateDeterministicMapActorGUID(class AActor* Actor);                                                            // [0xb90db90] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoWorldPersistenceSubsystemData
/// Size: 0x0018 (0x000030 - 0x000048)
class UJunoWorldPersistenceSubsystemData : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<class UClass*>)                     AvailableWorldPersistenceHandlerClasses                     OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(class UClass*)                             DefaultWorldPersistenceHandlerClass                         OFFSET(get<T>, {0x40, 8, 0, 0})
};

/// Class /Script/JunoGameNative.JunoWorldRegistryInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoWorldRegistryInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoWorldRegistryInterface.GetWorldDebugInfoText
	// void GetWorldDebugInfoText(class AFortPlayerPawn* PlayerPawn, FJunoDebugWorldInfoResult& WorldDebugInfo);                // [0xb90e5d4] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoWorldRegistryInterface.GetWorldAnalyticsInfo
	// void GetWorldAnalyticsInfo(class UObject* WorldContextObject, FVector& WorldLocation, FJunoWorldAnalyticsInfoResult& WorldAnalyticsInfo); // [0xb90de54] Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoWorldSettingsBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoWorldSettingsBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoWorldSettingsBlueprintLibrary.TurnWorldSettingOn
	// void TurnWorldSettingOn(class UObject* WorldContextObject, FGameplayTag& SettingName);                                   // [0xb90f9b8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoWorldSettingsBlueprintLibrary.TurnWorldSettingOff
	// void TurnWorldSettingOff(class UObject* WorldContextObject, FGameplayTag& SettingName);                                  // [0xb90f8a4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoWorldSettingsBlueprintLibrary.IsWorldSettingTainted
	// bool IsWorldSettingTainted(class UObject* WorldContextObject, FGameplayTag& SettingName);                                // [0xb90eb80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoWorldSettingsBlueprintLibrary.IsWorldSettingSaved
	// bool IsWorldSettingSaved(class UObject* WorldContextObject, FGameplayTag& SettingName);                                  // [0xb90ea64] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoWorldSettingsBlueprintLibrary.IsWorldSettingOn
	// bool IsWorldSettingOn(class UObject* WorldContextObject, FGameplayTag& SettingName);                                     // [0xb90e958] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoWorldSettingsBlueprintLibrary.GetAllWorldSettingNames
	// TArray<FGameplayTag> GetAllWorldSettingNames(class UObject* WorldContextObject);                                         // [0xb90dc5c] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoWorldSettingsComponent
/// Size: 0x0030 (0x0000A0 - 0x0000D0)
class UJunoWorldSettingsComponent : public UPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TArray<FJunoWorldSettingMapping>)          OptionalSettingNames                                        OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TArray<FJunoWorldSettingRepState>)         WorldSettings                                               OFFSET(get<T>, {0xB0, 16, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoWorldSettingsComponent.TurnSettingOn
	// void TurnSettingOn(FGameplayTag& SettingName);                                                                           // [0xb90f7dc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoWorldSettingsComponent.TurnSettingOff
	// void TurnSettingOff(FGameplayTag& SettingName);                                                                          // [0xb90f714] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoWorldSettingsComponent.OnRep_WorldSettings
	// void OnRep_WorldSettings(TArray<FJunoWorldSettingRepState>& OldValue);                                                   // [0xb90ecb0] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoWorldSettingsComponent.IsSettingTainted
	// bool IsSettingTainted(FGameplayTag& SettingName);                                                                        // [0xb90e884] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoWorldSettingsComponent.IsSettingSaved
	// bool IsSettingSaved(FGameplayTag& SettingName);                                                                          // [0xb90e7b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoWorldSettingsComponent.IsSettingOn
	// bool IsSettingOn(FGameplayTag& SettingName);                                                                             // [0xb90e6dc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoWorldSettingsComponent.GetAllSettingNames
	// TArray<FGameplayTag> GetAllSettingNames();                                                                               // [0xb90dc1c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoWorldSettingsPersistenceFeatureData
/// Size: 0x0068 (0x000040 - 0x0000A8)
class UJunoWorldSettingsPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TMap<FName, bool>)                         BoolWorldSettings                                           OFFSET(get<T>, {0x48, 80, 0, 0})
	SMember(FJunoWorldSettingsSaveData)                WorldSettingsSaveData                                       OFFSET(getStruct<T>, {0x98, 16, 0, 0})
};

/// Class /Script/JunoGameNative.JunoWorldSettingsPersistenceFeatureModule
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UJunoWorldSettingsPersistenceFeatureModule : public UPersistenceFrameworkModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/JunoGameNative.JunoWorldSettingsPersistenceFeatureData_Container
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoWorldSettingsPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
};

/// Class /Script/JunoGameNative.JunoMapMarkerCustomizationInitData
/// Size: 0x00C0 (0x000028 - 0x0000E8)
class UJunoMapMarkerCustomizationInitData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FGuid)                                     MarkerID                                                    OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FJunoMarker)                               NewMarker                                                   OFFSET(getStruct<T>, {0x38, 152, 0, 0})
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0xD0, 24, 0, 0})
};

/// Class /Script/JunoGameNative.PhysicalStrainHealthSubsystem
/// Size: 0x0018 (0x000040 - 0x000058)
class UPhysicalStrainHealthSubsystem : public UTickableWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/JunoGameNative.PhysicalStrainHealthRuntimeSettings
/// Size: 0x0010 (0x000030 - 0x000040)
class UPhysicalStrainHealthRuntimeSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(EPhysicalStrainHealthMode)                 Mode                                                        OFFSET(get<T>, {0x30, 1, 0, 0})
	DMember(float)                                     FatigueDamageThresholdPercent                               OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     FatigueDamageThresholdMinimum                               OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Class /Script/JunoGameNative.JunoCampWorldConditionSchema
/// Size: 0x0008 (0x000038 - 0x000040)
class UJunoCampWorldConditionSchema : public UWorldConditionSchema
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/JunoGameNative.PlayspaceComponent_JunoRootCampManagement
/// Size: 0x0500 (0x0000F8 - 0x0005F8)
class UPlayspaceComponent_JunoRootCampManagement : public UFortPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1528;

public:
	SMember(FScalableFloat)                            TimeBeforeSoftRemovedCampBecomesHardRemovedInJunoGameTimeHours OFFSET(getStruct<T>, {0xF8, 40, 0, 0})
	SMember(FScalableFloat)                            RunValidityChecksForCampPlacementOnServer                   OFFSET(getStruct<T>, {0x120, 40, 0, 0})
	SMember(FScalableFloat)                            RunValidityChecksForCampPlacementOnClients                  OFFSET(getStruct<T>, {0x148, 40, 0, 0})
	SMember(FScalableFloat)                            BoxExtentsForCampValidityCheck                              OFFSET(getStruct<T>, {0x170, 40, 0, 0})
	SMember(FScalableFloat)                            BoxExtentsForCampValidityCheckForPOIs                       OFFSET(getStruct<T>, {0x198, 40, 0, 0})
	SMember(FScalableFloat)                            MinZForCampValidityCheckForCaves                            OFFSET(getStruct<T>, {0x1C0, 40, 0, 0})
	SMember(FScalableFloat)                            MoveCampWhenNewSquareIsAddedAfterSoftRemoval                OFFSET(getStruct<T>, {0x1E8, 40, 0, 0})
	CMember(TMap<int32_t, UDataTable*>)                PlayerPerksPerAwesomenessLevel                              OFFSET(get<T>, {0x210, 80, 0, 0})
	CMember(TMap<int32_t, UDataTable*>)                NPCPerksPerAwesomenessLevel                                 OFFSET(get<T>, {0x260, 80, 0, 0})
	CMember(TMap<EJunoBiome, UDataTable*>)             NPCPerksPerBiome                                            OFFSET(get<T>, {0x2B0, 80, 0, 0})
	CMember(class UJunoAsyncAction_WaitForEventRouter*) WaitForEventRouterAction                                   OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(TArray<FReplicatedCampData>)               ReplicatedCampDatas                                         OFFSET(get<T>, {0x348, 16, 0, 0})
	CMember(TArray<FPOIEncounterDataForCamps>)         LoadedPOIEncounters                                         OFFSET(get<T>, {0x4A8, 16, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.PlayspaceComponent_JunoRootCampManagement.IsAValidLocationForANewCamp
	// bool IsAValidLocationForANewCamp(FVector& Location, FGameplayTagContainer& OutFailureReasons);                           // [0xb92e110] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.PlayspaceComponent_JunoRootCampManagement.GetRootPlayspaceJunoCampManagementComponent
	// class UPlayspaceComponent_JunoRootCampManagement* GetRootPlayspaceJunoCampManagementComponent(class UObject* WorldContextObject); // [0xb92dfdc] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoAwesomeInteractionConfigMappings
/// Size: 0x0050 (0x000030 - 0x000080)
class UJunoAwesomeInteractionConfigMappings : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TMap<FGameplayTag, FDataTableRowHandle>)   InteractionConfigMap                                        OFFSET(get<T>, {0x30, 80, 0, 0})
};

/// Class /Script/JunoGameNative.JunoAwesomePlacementConfigMappings
/// Size: 0x00B0 (0x000030 - 0x0000E0)
class UJunoAwesomePlacementConfigMappings : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(class UDataTable*)                         PlacementConfigTable                                        OFFSET(get<T>, {0x80, 8, 0, 0})
	CMember(class UDataTable*)                         CategoryConfigTable                                         OFFSET(get<T>, {0xD8, 8, 0, 0})
};

/// Class /Script/JunoGameNative.JunoAwesomePoiConfigMappings
/// Size: 0x0060 (0x000030 - 0x000090)
class UJunoAwesomePoiConfigMappings : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(TMap<EJunoBiome, FDataTableRowHandle>)     PoiConfigMap                                                OFFSET(get<T>, {0x30, 80, 0, 0})
	SMember(FDataTableRowHandle)                       DefaultConfig                                               OFFSET(getStruct<T>, {0x80, 16, 0, 0})
};

/// Class /Script/JunoGameNative.JunoAwesomeSystemDatabaseComponent
/// Size: 0x0018 (0x0000F8 - 0x000110)
class UJunoAwesomeSystemDatabaseComponent : public UFortPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(class UJunoAwesomeInteractionConfigMappings*) InteractionConfigMappings                                OFFSET(get<T>, {0xF8, 8, 0, 0})
	CMember(class UJunoAwesomePlacementConfigMappings*) PlacementConfigMappings                                    OFFSET(get<T>, {0x100, 8, 0, 0})
	CMember(class UJunoAwesomePoiConfigMappings*)      PoiConfigMappings                                           OFFSET(get<T>, {0x108, 8, 0, 0})
};

/// Class /Script/JunoGameNative.JunoAwesomeThresholdsComponent
/// Size: 0x0038 (0x0000A0 - 0x0000D8)
class UJunoAwesomeThresholdsComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FMulticastInlineDelegate)                  OnAwesomeLevelChanged                                       OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	CMember(TArray<FJunoAwesomeThresholdMapping>)      AwesomeThresholdToActionsMappings                           OFFSET(get<T>, {0xB0, 16, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoAwesomeThresholdsComponent.HandleJunoAwesomeLevelChanged
	// void HandleJunoAwesomeLevelChanged(FJunoAwesomeLevelChangeData& ChangeData);                                             // [0xb92e05c] Final|Native|Private|HasOutParms 
};

/// Class /Script/JunoGameNative.JunoAwesomeLevelComponent
/// Size: 0x0100 (0x0000A0 - 0x0001A0)
class UJunoAwesomeLevelComponent : public UJunoCampComponentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	SMember(FMulticastInlineDelegate)                  OnJunoAwesomeLevelChangedDelegate                           OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnJunoAwesomePointModification                              OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnJunoAwesomeComponentReadyDelegate                         OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	DMember(int32_t)                                   AwesomeLevel                                                OFFSET(get<int32_t>, {0xD0, 4, 0, 0})
	DMember(int32_t)                                   CurrentAwesomePoints                                        OFFSET(get<int32_t>, {0xD4, 4, 0, 0})
	CMember(TArray<int32_t>)                           AwesomePointGoals                                           OFFSET(get<T>, {0xD8, 16, 0, 0})
	CMember(TArray<FJunoAwesomeUpgradeResourceCostList>) AwesomeUpgradeResourceCosts                               OFFSET(get<T>, {0xE8, 16, 0, 0})
	SMember(FJunoAwesomeUpgradeResourceCostList)       CurrentUpgradeResourceCosts                                 OFFSET(getStruct<T>, {0xF8, 16, 0, 0})
	SMember(FGameplayTag)                              PoiType                                                     OFFSET(getStruct<T>, {0x108, 4, 0, 0})
	CMember(EJunoBiome)                                CampBiomeType                                               OFFSET(get<T>, {0x10C, 1, 0, 0})
	DMember(bool)                                      bIsReadyForUse                                              OFFSET(get<bool>, {0x120, 1, 0, 0})
	DMember(bool)                                      bIsFromPersistence                                          OFFSET(get<bool>, {0x121, 1, 0, 0})
	SMember(FJunoAwesomePointModificationData)         CachedAwesomePointModificationData                          OFFSET(getStruct<T>, {0x148, 40, 0, 0})
	SMember(FJunoAwesomeLevelChangeData)               CachedAwesomeLevelChangeData                                OFFSET(getStruct<T>, {0x170, 24, 0, 0})
	DMember(bool)                                      bSkipAwesomeUpgradeResourceChecks                           OFFSET(get<bool>, {0x188, 1, 0, 0})
	CMember(TArray<FAwesomeLevelRewardEntry>)          AwesomeLevelRewardEntries                                   OFFSET(get<T>, {0x190, 16, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.TriggerAwesomeLevelChange
	// void TriggerAwesomeLevelChange(class AFortPlayerController* TriggeringPlayer);                                           // [0xb92e7d8] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.ProcessAwesomePointModifierCheat
	// bool ProcessAwesomePointModifierCheat(int32_t AwesomePointAmount, class AActor* SourceActor);                            // [0xb92e4c0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.OnRep_CurrentAwesomePoints
	// void OnRep_CurrentAwesomePoints();                                                                                       // [0xb92e448] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.OnRep_bIsReadyForUse
	// void OnRep_bIsReadyForUse();                                                                                             // [0xb92e494] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.OnRep_AwesomeLevel
	// void OnRep_AwesomeLevel();                                                                                               // [0xb92e430] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.OnAwesomeSettingsInitialized
	// void OnAwesomeSettingsInitialized();                                                                                     // [0xb92e41c] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.IsReadyForUse
	// bool IsReadyForUse();                                                                                                    // [0xa68f030] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.IsAwesomeLevelUpPending
	// EJunoAwesomeLevelUpgradeQueryResult IsAwesomeLevelUpPending(class AFortPlayerController* TriggeringPlayer);              // [0xb92e26c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.HasEnoughAwesomePointsForALevelUp
	// bool HasEnoughAwesomePointsForALevelUp();                                                                                // [0xb92e0ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.GetMaxAwesomeLevel
	// int32_t GetMaxAwesomeLevel();                                                                                            // [0xb92dfa4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.GetMaxAwesomeIndex
	// int32_t GetMaxAwesomeIndex();                                                                                            // [0x6e857a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.GetCurrentUpgradeResourceCosts
	// FJunoAwesomeUpgradeResourceCostList GetCurrentUpgradeResourceCosts();                                                    // [0xb92df6c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.GetCurrentAwesomePointGoal
	// int32_t GetCurrentAwesomePointGoal();                                                                                    // [0xb92df48] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.GetCurrentAwesomePointFloor
	// int32_t GetCurrentAwesomePointFloor();                                                                                   // [0xb92df24] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.GetBiomeType
	// EJunoBiome GetBiomeType();                                                                                               // [0x65e492c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.GetAwesomePointsNeededForNextLevel
	// int32_t GetAwesomePointsNeededForNextLevel();                                                                            // [0xb92df00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.GetAwesomePoints
	// int32_t GetAwesomePoints();                                                                                              // [0x9947184] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.GetAwesomeLevelRewardEntries
	// TArray<FAwesomeLevelRewardEntry> GetAwesomeLevelRewardEntries();                                                         // [0xb92dee4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.GetAwesomeLevelFromCurrentPoints
	// int32_t GetAwesomeLevelFromCurrentPoints();                                                                              // [0xb92dec0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.GetAwesomeLevel
	// int32_t GetAwesomeLevel();                                                                                               // [0x87833c8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.BP_OnAwesomePointsModified
	// void BP_OnAwesomePointsModified(FJunoAwesomePointModificationData& ModificationData);                                    // [0x2177018] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.BP_OnAwesomeLevelChanged
	// void BP_OnAwesomeLevelChanged(FJunoAwesomeLevelChangeData& ChangeData);                                                  // [0x2177018] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/JunoGameNative.JunoNamedPOIComponent
/// Size: 0x00D8 (0x0000A0 - 0x000178)
class UJunoNamedPOIComponent : public UJunoCampComponentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
	SMember(FMulticastInlineDelegate)                  OnJunoPOIMarkerChangedDelegate                              OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FText)                                     POIName                                                     OFFSET(getStruct<T>, {0xC0, 24, 0, 0})
	SMember(FJunoMarker)                               Marker                                                      OFFSET(getStruct<T>, {0xD8, 152, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoNamedPOIComponent.SetPOIName
	// void SetPOIName(FText& NewPOIName);                                                                                      // [0xb92e73c] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoNamedPOIComponent.SetMarker
	// void SetMarker(FJunoMarker& NewMarker);                                                                                  // [0xb92e678] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoNamedPOIComponent.ProcessCampReadyLogic
	// void ProcessCampReadyLogic(FJunoCampAwesomeStatsData& ReadyData);                                                        // [0xb92e5e4] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoNamedPOIComponent.PrepareForCampReadyLogic
	// void PrepareForCampReadyLogic();                                                                                         // [0xb92e4ac] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoNamedPOIComponent.OnRep_Marker
	// void OnRep_Marker();                                                                                                     // [0xb92e460] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoNamedPOIComponent.OnAwesomePointsModifiedCosmetic
	// void OnAwesomePointsModifiedCosmetic(FJunoAwesomePointModificationData& ModificationData);                               // [0xb92e38c] Final|Native|Protected|HasOutParms 
	// Function /Script/JunoGameNative.JunoNamedPOIComponent.OnAwesomeLevelChangedCosmetic
	// void OnAwesomeLevelChangedCosmetic(FJunoAwesomeLevelChangeData& ChangeData);                                             // [0xb92e2fc] Final|Native|Protected|HasOutParms 
	// Function /Script/JunoGameNative.JunoNamedPOIComponent.K2_OnPlayerExitedCampCosmetic
	// void K2_OnPlayerExitedCampCosmetic(int32_t CurrentAwesomeLevel, int32_t AwesomePoints, class AJunoCampActor* OwningCamp); // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoNamedPOIComponent.K2_OnPlayerEnteredCampCosmetic
	// void K2_OnPlayerEnteredCampCosmetic(int32_t CurrentAwesomeLevel, int32_t AwesomePoints, class AJunoCampActor* OwningCamp); // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoNamedPOIComponent.K2_OnAwesomePointsModifiedCosmetic
	// void K2_OnAwesomePointsModifiedCosmetic(FJunoAwesomePointModificationData& ModificationData);                            // [0x2177018] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoNamedPOIComponent.K2_OnAwesomeLevelChangedCosmetic
	// void K2_OnAwesomeLevelChangedCosmetic(FJunoAwesomeLevelChangeData& ChangeData);                                          // [0x2177018] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoNamedPOIComponent.GetPOIName
	// FText GetPOIName();                                                                                                      // [0xb92dfc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoNamedPOIComponent.GetMarker
	// FJunoMarker GetMarker();                                                                                                 // [0xb92df88] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoAdventurePlayspaceBase
/// Size: 0x0028 (0x0006C0 - 0x0006E8)
class AJunoAdventurePlayspaceBase : public AFortPlayspace
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1768;

public:
	DMember(bool)                                      bShouldPersist                                              OFFSET(get<bool>, {0x6C0, 1, 0, 0})
	SMember(FGameplayTagContainer)                     AdventureTags                                               OFFSET(getStruct<T>, {0x6C8, 32, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoAdventurePlayspaceBase.RemoveAdventureTags
	// void RemoveAdventureTags(FGameplayTagContainer& TagsToRemove);                                                           // [0xb964f90] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoAdventurePlayspaceBase.GetAdventureTags
	// FGameplayTagContainer GetAdventureTags();                                                                                // [0xb96293c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoAdventurePlayspaceBase.ContainsController
	// bool ContainsController(class AController* Controller);                                                                  // [0xb961110] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoAdventurePlayspaceBase.AppendAdventureTags
	// void AppendAdventureTags(FGameplayTagContainer& TagsToAdd);                                                              // [0xb960f20] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoCampPersistenceFeatureData
/// Size: 0x0018 (0x000040 - 0x000058)
class UJunoCampPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FJunoAllCampsSaveData)                     SavedAllCamps                                               OFFSET(getStruct<T>, {0x48, 16, 0, 0})
};

/// Class /Script/JunoGameNative.JunoCampPersistenceFeatureDataActor
/// Size: 0x0018 (0x0002D0 - 0x0002E8)
class AJunoCampPersistenceFeatureDataActor : public AJunoPersistenceFeatureDataActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:
	CMember(TArray<FJunoCampSaveData>)                 SavedCamps                                                  OFFSET(get<T>, {0x2D8, 16, 0, 0})
};

/// Class /Script/JunoGameNative.JunoCampPersistenceFeatureDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoCampPersistenceFeatureDataInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoQuestActorSpawnPoint
/// Size: 0x0020 (0x000290 - 0x0002B0)
class AJunoQuestActorSpawnPoint : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
	SMember(FGameplayTagContainer)                     SpawnTags                                                   OFFSET(getStruct<T>, {0x290, 32, 0, 0})
};

/// Class /Script/JunoGameNative.JunoVerbProcessor_AwesomeLevelIncreased
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UJunoVerbProcessor_AwesomeLevelIncreased : public UFortObjectiveProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/JunoGameNative.JunoVerbProcessor_GuidedBuildCompleted
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UJunoVerbProcessor_GuidedBuildCompleted : public UFortObjectiveProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/JunoGameNative.JunoVerbProcessor_GuidedBuildStageCompleted
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UJunoVerbProcessor_GuidedBuildStageCompleted : public UFortObjectiveProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/JunoGameNative.JunoVerbProcessor_RecruitNPC
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UJunoVerbProcessor_RecruitNPC : public UFortObjectiveProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/JunoGameNative.JunoVerbProcessor_TemperatureUpdated
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UJunoVerbProcessor_TemperatureUpdated : public UFortObjectiveProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/JunoGameNative.JunoAdventureGameplayVolume
/// Size: 0x0040 (0x000330 - 0x000370)
class AJunoAdventureGameplayVolume : public AGameplayVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
	DMember(bool)                                      bShouldPersist                                              OFFSET(get<bool>, {0x338, 1, 0, 0})
	DMember(bool)                                      bDestroyLinkedPlayspaceOnEndPlay                            OFFSET(get<bool>, {0x339, 1, 0, 0})
	SMember(FGuid)                                     SavedActorGuid                                              OFFSET(getStruct<T>, {0x358, 16, 0, 0})
};

/// Class /Script/JunoGameNative.JunoAINavInvokerComponent
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UJunoAINavInvokerComponent : public UNavigationInvokerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoAINavInvokerComponent.OnPlayerPossessed
	// void OnPlayerPossessed(class APawn* Pawn);                                                                               // [0xb9645b4] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoAINavInvokerComponent.OnNPCPossessed
	// void OnNPCPossessed(class APawn* Pawn);                                                                                  // [0xb964534] Final|Native|Protected 
};

/// Class /Script/JunoGameNative.JunoNavSystemConfig
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UJunoNavSystemConfig : public UAthenaNavSystemConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
};

/// Class /Script/JunoGameNative.JunoPhysicsObjectNavigationComponent
/// Size: 0x00A0 (0x0000A0 - 0x000140)
class UJunoPhysicsObjectNavigationComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	DMember(float)                                     LowSpeedThreshold                                           OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(float)                                     LowSpeedDistanceThreshold                                   OFFSET(get<float>, {0xA4, 4, 0, 0})
	DMember(float)                                     LowSpeedRotationThreshold                                   OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     LowSpeedScaleThreshold                                      OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(float)                                     LowSpeedDurationTrigger                                     OFFSET(get<float>, {0xB0, 4, 0, 0})
	CMember(class UPrimitiveComponent*)                PrimitiveComponentAffectingNavMesh                          OFFSET(get<T>, {0x120, 8, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoPhysicsObjectNavigationComponent.OnWake
	// void OnWake(class UPrimitiveComponent* SimulatingComponent, FName BoneName);                                             // [0xb964ae8] Final|RequiredAPI|Native|Protected 
	// Function /Script/JunoGameNative.JunoPhysicsObjectNavigationComponent.OnSleep
	// void OnSleep(class UPrimitiveComponent* SimulatingComponent, FName BoneName);                                            // [0xb96483c] Final|RequiredAPI|Native|Protected 
	// Function /Script/JunoGameNative.JunoPhysicsObjectNavigationComponent.OnRemovedFromClusterUnion
	// void OnRemovedFromClusterUnion(class UClusterUnionComponent* ClusterUnion, class UPrimitiveComponent* Component);        // [0xb964764] Final|RequiredAPI|Native|Protected 
	// Function /Script/JunoGameNative.JunoPhysicsObjectNavigationComponent.OnClusterUnionPhysicsObjectAwakeChanged
	// void OnClusterUnionPhysicsObjectAwakeChanged(class UPrimitiveComponent* SimulatingComponent, bool bIsAwake);             // [0xb96446c] Final|RequiredAPI|Native|Protected 
	// Function /Script/JunoGameNative.JunoPhysicsObjectNavigationComponent.OnAddedToClusterUnion
	// void OnAddedToClusterUnion(class UClusterUnionComponent* ClusterUnion, class UPrimitiveComponent* Component);            // [0xb964278] Final|RequiredAPI|Native|Protected 
};

/// Class /Script/JunoGameNative.JunoGameFeatureAction_AddJunoAnalytics
/// Size: 0x0008 (0x000028 - 0x000030)
class UJunoGameFeatureAction_AddJunoAnalytics : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UJunoAnalytics*)                     JunoAnalytics                                               OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/JunoGameNative.JunoAnimationBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoAnimationBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoAnimationBlueprintLibrary.ImpactOrDamage
	// void ImpactOrDamage(FGameplayTagContainer& DamageTags, class AFortPawn* DamageInstigator, class AActor* DamageSource, EImpactOrDamage_ExecutionPin& ExecutionPin); // [0xb963f88] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoAnimationBlueprintLibrary.HasMatchingImpactCue
	// bool HasMatchingImpactCue(FGameplayTagContainer& DamageTags, class AFortPawn* DamageInstigator, class AActor* DamageSource); // [0xb963dc8] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoAnimationBlueprintLibrary.GetFacingTargetRotation
	// FRotator GetFacingTargetRotation(class USceneComponent* Source, class USceneComponent* Target, bool bYawOnly);           // [0xb96351c] Final|Native|Static|Private|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoAnimationBlueprintLibrary.GetFacingRotation
	// FRotator GetFacingRotation(FVector SourceLocation, FVector TargetLocation);                                              // [0xb9632cc] Final|Native|Static|Private|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoAnimationBlueprintLibrary.GetClampedWarpTargetLocation
	// void GetClampedWarpTargetLocation(FVector WarpStartLocation, FVector WarpTargetLocation, float WarpTargetRadius, float WarpDistanceMax, bool ConstrainToPawnForwardVector, FVector PawnForward, FVector& ClampedTargetLocation, FRotator& FaceTargetRotation); // [0xb962bbc] Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoAnimationBlueprintLibrary.GetCapsuleActorSpaceBounds
	// void GetCapsuleActorSpaceBounds(class UCapsuleComponent* Capsule, FVector& Origin, FVector& Extents);                    // [0xb962a30] Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoAnimationBlueprintLibrary.AbilityMontage_SetNextSection
	// void AbilityMontage_SetNextSection(class AFortPawn* FortPawn, FName NextSection);                                        // [0xb960e34] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoAnimationBlueprintLibrary.AbilityMontage_ReplicatePosition
	// void AbilityMontage_ReplicatePosition(class AFortPawn* FortPawn, bool bReplicatePosition);                               // [0xb960d54] Final|Native|Static|Private|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoAnimInstance
/// Size: 0x0010 (0x000460 - 0x000470)
class UJunoAnimInstance : public UFortBaseAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1136;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoAnimInstance.UpdateAnimationTimer
	// void UpdateAnimationTimer(float& TimeRemaining, bool& bTimeIsExpired, EUpdateAnimationTimer_ExecutionPin& ExecutionPin); // [0xb9657a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoAnimInstance.RandomizeAnimationTimer
	// void RandomizeAnimationTimer(float MinTime, float MaxTime, float& TimeRemaining, bool& bTimeIsExpired);                  // [0xb964bac] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoAnimInstance.GetMainAnimInstance
	// class UJunoAnimInstance* GetMainAnimInstance();                                                                          // [0xb963a60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoAnimInstance.BlendCurvesByName
	// float BlendCurvesByName(FName CurveA, FName CurveB, float Alpha);                                                        // [0xb960fdc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoGliderAnimInstance
/// Size: 0x0010 (0x000830 - 0x000840)
class UJunoGliderAnimInstance : public UFortGliderAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2112;

public:
	DMember(bool)                                      bIsSkydiving                                                OFFSET(get<bool>, {0x828, 1, 1, 0})
	DMember(bool)                                      bIsParachuteOpen                                            OFFSET(get<bool>, {0x828, 1, 1, 1})
	DMember(bool)                                      bGliderUseFastDeploy                                        OFFSET(get<bool>, {0x828, 1, 1, 2})
	DMember(float)                                     GliderPitch                                                 OFFSET(get<float>, {0x82C, 4, 0, 0})
	DMember(float)                                     GliderRoll                                                  OFFSET(get<float>, {0x830, 4, 0, 0})
	CMember(class UJunoPlayerAnimInstance*)            PlayerAnimInstance                                          OFFSET(get<T>, {0x838, 8, 0, 0})
};

/// Class /Script/JunoGameNative.JunoMinifigAnimationComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UJunoMinifigAnimationComponent : public UPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FRotator)                                  MinifigLookAtRotation                                       OFFSET(getStruct<T>, {0xA0, 24, 0, 0})
};

/// Class /Script/JunoGameNative.JunoPawnAnimInstance
/// Size: 0x0100 (0x000470 - 0x000570)
class UJunoPawnAnimInstance : public UJunoAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1392;

public:
	DMember(float)                                     PawnMovingSpeedThreshold                                    OFFSET(get<float>, {0x470, 4, 0, 0})
	DMember(bool)                                      bIsFalling                                                  OFFSET(get<bool>, {0x474, 1, 0, 0})
	DMember(float)                                     PawnSpeed2D                                                 OFFSET(get<float>, {0x478, 4, 0, 0})
	SMember(FVector)                                   PawnVelocity                                                OFFSET(getStruct<T>, {0x480, 24, 0, 0})
	SMember(FRotator)                                  PawnRotationRate                                            OFFSET(getStruct<T>, {0x498, 24, 0, 0})
	DMember(bool)                                      bPawnIsDying                                                OFFSET(get<bool>, {0x4B0, 1, 1, 0})
	DMember(bool)                                      bPawnIsFalling                                              OFFSET(get<bool>, {0x4B0, 1, 1, 1})
	DMember(bool)                                      bPawnIsOnGround                                             OFFSET(get<bool>, {0x4B0, 1, 1, 2})
	DMember(bool)                                      bPawnIsIdling                                               OFFSET(get<bool>, {0x4B0, 1, 1, 3})
	DMember(bool)                                      bPawnIsJumping                                              OFFSET(get<bool>, {0x4B0, 1, 1, 4})
	DMember(bool)                                      bPawnIsMoving2D                                             OFFSET(get<bool>, {0x4B0, 1, 1, 5})
	DMember(bool)                                      bPawnIsMovingOnGround                                       OFFSET(get<bool>, {0x4B0, 1, 1, 6})
	DMember(bool)                                      bPawnWasMoving2D                                            OFFSET(get<bool>, {0x4B0, 1, 1, 7})
	DMember(bool)                                      bPawnHasAcceleration                                        OFFSET(get<bool>, {0x4B1, 1, 1, 0})
	DMember(bool)                                      bPawnHasRootMotion                                          OFFSET(get<bool>, {0x4B1, 1, 1, 1})
	DMember(bool)                                      bPawnHasVelocity                                            OFFSET(get<bool>, {0x4B1, 1, 1, 2})
	DMember(bool)                                      bPawnIdleBreakTimeIsExpired                                 OFFSET(get<bool>, {0x4B1, 1, 1, 3})
	DMember(bool)                                      bPawnMovingIdleBreakTimeIsExpired                           OFFSET(get<bool>, {0x4B1, 1, 1, 4})
	SMember(FVector)                                   PawnAcceleration                                            OFFSET(getStruct<T>, {0x4B8, 24, 0, 0})
	DMember(float)                                     PawnAccelerationDirection                                   OFFSET(get<float>, {0x4D0, 4, 0, 0})
	SMember(FRotator)                                  PawnRotation                                                OFFSET(getStruct<T>, {0x4D8, 24, 0, 0})
	SMember(FRotator)                                  PawnRotationDelta                                           OFFSET(getStruct<T>, {0x4F0, 24, 0, 0})
	SMember(FRotator)                                  PawnRotationRateNormalized                                  OFFSET(getStruct<T>, {0x508, 24, 0, 0})
	SMember(FRotator)                                  PawnRootRotation                                            OFFSET(getStruct<T>, {0x520, 24, 0, 0})
	DMember(float)                                     PawnVelocityDirection                                       OFFSET(get<float>, {0x538, 4, 0, 0})
	SMember(FVector)                                   PawnPreviousVelocity                                        OFFSET(getStruct<T>, {0x540, 24, 0, 0})
	DMember(float)                                     PawnIdleBreakTime                                           OFFSET(get<float>, {0x558, 4, 0, 0})
	DMember(float)                                     PawnMovingIdleBreakTime                                     OFFSET(get<float>, {0x55C, 4, 0, 0})
	DMember(int32_t)                                   PawnCurrentLOD                                              OFFSET(get<int32_t>, {0x560, 4, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoPawnAnimInstance.StartPawnMovingIdleBreakTimer
	// void StartPawnMovingIdleBreakTimer(float MinTime, float MaxTime);                                                        // [0xb9655d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPawnAnimInstance.StartPawnIdleBreakTimer
	// void StartPawnIdleBreakTimer(float MinTime, float MaxTime);                                                              // [0xb965508] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPawnAnimInstance.ClearPawnMovingIdleBreakTimer
	// void ClearPawnMovingIdleBreakTimer();                                                                                    // [0xb9610f4] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPawnAnimInstance.ClearPawnIdleBreakTimer
	// void ClearPawnIdleBreakTimer();                                                                                          // [0xb9610d8] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoPlayerAnimInstance
/// Size: 0x0310 (0x000570 - 0x000880)
class UJunoPlayerAnimInstance : public UJunoPawnAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2176;

public:
	DMember(float)                                     PlayerLookAngleFromPawnMax                                  OFFSET(get<float>, {0x568, 4, 0, 0})
	DMember(float)                                     PlayerLookAngleFromRootMax                                  OFFSET(get<float>, {0x56C, 4, 0, 0})
	DMember(float)                                     PlayerFaceVisibleAngle                                      OFFSET(get<float>, {0x570, 4, 0, 0})
	DMember(float)                                     PlayerRunningAccelerationThreshold                          OFFSET(get<float>, {0x574, 4, 0, 0})
	DMember(float)                                     PlayerWalkingAccelerationThreshold                          OFFSET(get<float>, {0x578, 4, 0, 0})
	CMember(class UCurveVector*)                       PlayerStrafeCurve                                           OFFSET(get<T>, {0x580, 8, 0, 0})
	CMember(class AFortPlayerPawn*)                    FortPlayerPawn                                              OFFSET(get<T>, {0x588, 8, 0, 0})
	DMember(bool)                                      bIsAccelerating2D                                           OFFSET(get<bool>, {0x590, 1, 1, 0})
	DMember(bool)                                      bIsSurfaceSwimming                                          OFFSET(get<bool>, {0x590, 1, 1, 1})
	DMember(bool)                                      bIsMovingAndInMotionEmote                                   OFFSET(get<bool>, {0x590, 1, 1, 2})
	DMember(bool)                                      bIsSlopeSliding                                             OFFSET(get<bool>, {0x591, 1, 0, 0})
	DMember(bool)                                      bIsInVehicle                                                OFFSET(get<bool>, {0x592, 1, 1, 0})
	SMember(FVector)                                   LocalAcceleration                                           OFFSET(getStruct<T>, {0x598, 24, 0, 0})
	DMember(float)                                     LocalAccelYawAngle                                          OFFSET(get<float>, {0x5B0, 4, 0, 0})
	SMember(FVector)                                   LocalVelocity                                               OFFSET(getStruct<T>, {0x5B8, 24, 0, 0})
	DMember(float)                                     LocalVelocityYawAngle                                       OFFSET(get<float>, {0x5D0, 4, 0, 0})
	DMember(float)                                     MaxSpeed                                                    OFFSET(get<float>, {0x5D4, 4, 0, 0})
	DMember(float)                                     VelocityZ                                                   OFFSET(get<float>, {0x5D8, 4, 0, 0})
	SMember(FVector)                                   WorldAcceleration                                           OFFSET(getStruct<T>, {0x5E0, 24, 0, 0})
	SMember(FVector)                                   WorldVelocity                                               OFFSET(getStruct<T>, {0x5F8, 24, 0, 0})
	SMember(FRotator)                                  ActorRotationLastTick                                       OFFSET(getStruct<T>, {0x610, 24, 0, 0})
	DMember(float)                                     YawDeltaCurrentTick                                         OFFSET(get<float>, {0x628, 4, 0, 0})
	DMember(float)                                     YawDeltaLastTick                                            OFFSET(get<float>, {0x62C, 4, 0, 0})
	DMember(float)                                     YawDeltaSmoothed                                            OFFSET(get<float>, {0x630, 4, 0, 0})
	DMember(bool)                                      bIsTacticalSprint                                           OFFSET(get<bool>, {0x634, 1, 1, 0})
	DMember(bool)                                      bIsSkydiving                                                OFFSET(get<bool>, {0x634, 1, 1, 1})
	DMember(bool)                                      bIsParachuteOpen                                            OFFSET(get<bool>, {0x634, 1, 1, 2})
	DMember(bool)                                      bGliderUseFastDeploy                                        OFFSET(get<bool>, {0x634, 1, 1, 3})
	DMember(bool)                                      bGliderIsOpen                                               OFFSET(get<bool>, {0x634, 1, 1, 4})
	DMember(bool)                                      bGliderWasOpen                                              OFFSET(get<bool>, {0x634, 1, 1, 5})
	DMember(bool)                                      bPlayerProp1Aim                                             OFFSET(get<bool>, {0x634, 1, 1, 6})
	DMember(bool)                                      bPlayerProp2Aim                                             OFFSET(get<bool>, {0x634, 1, 1, 7})
	DMember(bool)                                      bPlayerIsCold                                               OFFSET(get<bool>, {0x635, 1, 1, 0})
	DMember(bool)                                      bPlayerIsMildCold                                           OFFSET(get<bool>, {0x635, 1, 1, 1})
	DMember(bool)                                      bPlayerIsVeryCold                                           OFFSET(get<bool>, {0x635, 1, 1, 2})
	DMember(bool)                                      bPlayerIsHot                                                OFFSET(get<bool>, {0x635, 1, 1, 3})
	DMember(bool)                                      bPlayerIsMildHot                                            OFFSET(get<bool>, {0x635, 1, 1, 4})
	DMember(bool)                                      bPlayerIsVeryHot                                            OFFSET(get<bool>, {0x635, 1, 1, 5})
	DMember(bool)                                      bPlayerIsHumanControlled                                    OFFSET(get<bool>, {0x635, 1, 1, 6})
	DMember(bool)                                      bPlayerIsSneaking                                           OFFSET(get<bool>, {0x635, 1, 1, 7})
	DMember(bool)                                      bPlayerIsFocusing                                           OFFSET(get<bool>, {0x636, 1, 1, 0})
	DMember(bool)                                      bPlayerIsFlying                                             OFFSET(get<bool>, {0x636, 1, 1, 1})
	DMember(bool)                                      bPlayerIsFacingController                                   OFFSET(get<bool>, {0x636, 1, 1, 2})
	DMember(bool)                                      bPlayerIsMovingBackwards                                    OFFSET(get<bool>, {0x636, 1, 1, 3})
	DMember(bool)                                      bPlayerIsPushing                                            OFFSET(get<bool>, {0x636, 1, 1, 4})
	DMember(bool)                                      bPlayerWasPushing                                           OFFSET(get<bool>, {0x636, 1, 1, 5})
	DMember(bool)                                      bPlayerIsRunning                                            OFFSET(get<bool>, {0x636, 1, 1, 6})
	DMember(bool)                                      bPlayerIsSprinting                                          OFFSET(get<bool>, {0x636, 1, 1, 7})
	DMember(bool)                                      bPlayerIsWalking                                            OFFSET(get<bool>, {0x637, 1, 1, 0})
	DMember(bool)                                      bPlayerShouldMove                                           OFFSET(get<bool>, {0x637, 1, 1, 1})
	DMember(bool)                                      bPlayerShouldTurnInPlace                                    OFFSET(get<bool>, {0x637, 1, 1, 2})
	DMember(bool)                                      bPlayerFaceIsVisible                                        OFFSET(get<bool>, {0x637, 1, 1, 3})
	DMember(bool)                                      bPlayerUpperBodyIsSwinging                                  OFFSET(get<bool>, {0x637, 1, 1, 4})
	DMember(bool)                                      bPlayerProp1MontageActive                                   OFFSET(get<bool>, {0x637, 1, 1, 5})
	DMember(bool)                                      bPlayerProp2MontageActive                                   OFFSET(get<bool>, {0x637, 1, 1, 6})
	DMember(bool)                                      bPlayerHeadShouldFollowCamera                               OFFSET(get<bool>, {0x637, 1, 1, 7})
	CMember(TEnumAsByte<EFortMovementStyle>)           PlayerMovementStyle                                         OFFSET(get<T>, {0x638, 1, 0, 0})
	DMember(float)                                     PlayerAccelerationAmount                                    OFFSET(get<float>, {0x63C, 4, 0, 0})
	SMember(FRotator)                                  PlayerLookAtRotation                                        OFFSET(getStruct<T>, {0x640, 24, 0, 0})
	SMember(FRotator)                                  PlayerRotationTarget                                        OFFSET(getStruct<T>, {0x658, 24, 0, 0})
	SMember(FRotator)                                  PlayerPreviousRotationTarget                                OFFSET(getStruct<T>, {0x670, 24, 0, 0})
	DMember(float)                                     PlayerRotationTargetRate                                    OFFSET(get<float>, {0x688, 4, 0, 0})
	DMember(float)                                     PlayerVelocityYawRate                                       OFFSET(get<float>, {0x68C, 4, 0, 0})
	DMember(float)                                     PlayerUseProceduralFaceAnim                                 OFFSET(get<float>, {0x690, 4, 0, 0})
	SMember(FJunoMinifigLayeringMask)                  LayeringMask                                                OFFSET(getStruct<T>, {0x694, 160, 0, 0})
	SMember(FInputAlphaBoolBlend)                      SecondaryMotionLODBlend                                     OFFSET(getStruct<T>, {0x738, 72, 0, 0})
	DMember(int32_t)                                   SecondaryMotionLODThreshold                                 OFFSET(get<int32_t>, {0x780, 4, 0, 0})
	DMember(float)                                     SecondaryMotionLODBlendTime                                 OFFSET(get<float>, {0x784, 4, 0, 0})
	DMember(float)                                     GliderPitch                                                 OFFSET(get<float>, {0x788, 4, 0, 0})
	DMember(float)                                     GliderRoll                                                  OFFSET(get<float>, {0x78C, 4, 0, 0})
	CMember(class AFortWeapon*)                        PlayerMainHandItem                                          OFFSET(get<T>, {0x790, 8, 0, 0})
	CMember(class AFortWeapon*)                        PlayerOffHandItem                                           OFFSET(get<T>, {0x798, 8, 0, 0})
	SMember(FVector2D)                                 PlayerAimOffset                                             OFFSET(getStruct<T>, {0x7A0, 16, 0, 0})
	SMember(FVector)                                   PlayerAimOffsetTemp                                         OFFSET(getStruct<T>, {0x7B0, 24, 0, 0})
	SMember(FRotator)                                  PlayerPreviousRootRotation                                  OFFSET(getStruct<T>, {0x7C8, 24, 0, 0})
	CMember(EJunoMinifigRotationMode)                  PlayerRotationMode                                          OFFSET(get<T>, {0x7E0, 1, 0, 0})
	SMember(FRotator)                                  SmoothedRotationTarget                                      OFFSET(getStruct<T>, {0x7E8, 24, 0, 0})
	SMember(FRotator)                                  SuperSmoothedRotationTarget                                 OFFSET(getStruct<T>, {0x800, 24, 0, 0})
	SMember(FRotator)                                  PlayerStartingRotation                                      OFFSET(getStruct<T>, {0x818, 24, 0, 0})
	DMember(float)                                     PlayerStartingAngle                                         OFFSET(get<float>, {0x830, 4, 0, 0})
	DMember(bool)                                      bPlayerEmotionHasChanged                                    OFFSET(get<bool>, {0x834, 1, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoPlayerAnimInstance.UpdatePlayerRotationTarget
	// void UpdatePlayerRotationTarget(float DeltaSeconds);                                                                     // [0xb965f10] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPlayerAnimInstance.UpdatePlayerRootRotation
	// void UpdatePlayerRootRotation(float DeltaSeconds);                                                                       // [0xb965e90] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPlayerAnimInstance.UpdatePlayerCurveRotateToStaticTarget
	// void UpdatePlayerCurveRotateToStaticTarget(float DeltaSeconds);                                                          // [0xb965e14] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPlayerAnimInstance.UpdatePlayerCurveRotateToMovingTarget
	// void UpdatePlayerCurveRotateToMovingTarget(float DeltaSeconds);                                                          // [0xb965d94] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPlayerAnimInstance.UpdatePlayerContinuousRotateToTarget
	// void UpdatePlayerContinuousRotateToTarget(float DeltaSeconds);                                                           // [0xb965d14] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPlayerAnimInstance.UpdatePlayerAimOffsetWithRootCompensation
	// void UpdatePlayerAimOffsetWithRootCompensation(FRotator LookAtRotation, float InterpSpeed, bool bCompensate, float DeltaSeconds); // [0xb96594c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPlayerAnimInstance.UpdatePlayerAimOffset
	// void UpdatePlayerAimOffset(float DeltaSeconds);                                                                          // [0xb9658cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPlayerAnimInstance.ShouldForcePlayerToFacePawnRotation
	// bool ShouldForcePlayerToFacePawnRotation();                                                                              // [0xb9654e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerAnimInstance.SetPlayerRotationMode
	// void SetPlayerRotationMode(EJunoMinifigRotationMode RotationMode);                                                       // [0xb9653c4] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPlayerAnimInstance.OnPlayerStoppedPushing
	// void OnPlayerStoppedPushing();                                                                                           // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoPlayerAnimInstance.OnPlayerOffHandItemChanged
	// void OnPlayerOffHandItemChanged(class AFortWeapon* CurrentItem);                                                         // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoPlayerAnimInstance.OnPlayerMainHandItemChanged
	// void OnPlayerMainHandItemChanged(class AFortWeapon* CurrentItem);                                                        // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoPlayerAnimInstance.OnPlayerEmotionChanged
	// void OnPlayerEmotionChanged();                                                                                           // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoPlayerAnimInstance.GetPlayerStrideScale
	// float GetPlayerStrideScale();                                                                                            // [0xb963bd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerAnimInstance.GetPlayerRotationTargetInterpolationSpeeds
	// void GetPlayerRotationTargetInterpolationSpeeds(float& SmoothedSpeed, float& SuperSmoothedSpeed);                        // [0xb963af8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerAnimInstance.GetPlayerRotationMode
	// EJunoMinifigRotationMode GetPlayerRotationMode();                                                                        // [0xb963aa4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerAnimInstance.GetPlayerLeanAmount
	// float GetPlayerLeanAmount();                                                                                             // [0xb963a84] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoPlayerAnimInstanceProxy
/// Size: 0x0000 (0x001620 - 0x001620)
class UJunoPlayerAnimInstanceProxy : public UFortPlayerAnimInstanceProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5664;

public:
};

/// Class /Script/JunoGameNative.AudioEventAggregatorSubsystem
/// Size: 0x0080 (0x000030 - 0x0000B0)
class UAudioEventAggregatorSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FMulticastInlineDelegate)                  OnSoundBreakEvents                                          OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSoundCollisionEvents                                      OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnActiveSoundBreakEventsUpdated                             OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnActiveSoundCollisionEventsUpdated                         OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	CMember(class UWorld*)                             World                                                       OFFSET(get<T>, {0x70, 8, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.AudioEventAggregatorSubsystem.SetRadius
	// void SetRadius(float Radius);                                                                                            // [0xb965460] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.AudioEventAggregatorSubsystem.SetCollisionEventLifetime
	// void SetCollisionEventLifetime(float Time);                                                                              // [0xb965344] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.AudioEventAggregatorSubsystem.SetCollisionDeltaVelocityMagnitudeThreshold
	// void SetCollisionDeltaVelocityMagnitudeThreshold(float Magnitude);                                                       // [0xb9652c4] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.AudioEventAggregatorSubsystem.SetBreakEventLifetime
	// void SetBreakEventLifetime(float Time);                                                                                  // [0xb965244] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.AudioEventAggregatorSubsystem.RemoveActiveCollisionEvent
	// void RemoveActiveCollisionEvent(FGuid EventId);                                                                          // [0xb964e50] Final|Native|Public|HasDefaults 
	// Function /Script/JunoGameNative.AudioEventAggregatorSubsystem.RemoveActiveBreakEvent
	// void RemoveActiveBreakEvent(FGuid EventId);                                                                              // [0xb964d10] Final|Native|Public|HasDefaults 
	// Function /Script/JunoGameNative.AudioEventAggregatorSubsystem.IsAggregatingCollisionEvents
	// bool IsAggregatingCollisionEvents();                                                                                     // [0xb964244] Final|Native|Public  
	// Function /Script/JunoGameNative.AudioEventAggregatorSubsystem.InitChaosEventRelay
	// void InitChaosEventRelay();                                                                                              // [0xb964214] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.AudioEventAggregatorSubsystem.FilterAndGroupCollisionEvents
	// void FilterAndGroupCollisionEvents(TArray<FCollisionChaosEvent>& CollisionEvents);                                       // [0xb961954] Final|Native|Public|HasOutParms 
	// Function /Script/JunoGameNative.AudioEventAggregatorSubsystem.FilterAndGroupBreakEvents
	// void FilterAndGroupBreakEvents(TArray<FChaosBreakEvent>& BreakEvents);                                                   // [0xb961294] Final|Native|Public|HasOutParms 
	// Function /Script/JunoGameNative.AudioEventAggregatorSubsystem.DeinitChaosEventRelay
	// void DeinitChaosEventRelay();                                                                                            // [0xb961280] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoFoleyContext
/// Size: 0x0008 (0x0000D8 - 0x0000E0)
class UJunoFoleyContext : public UFortPlayerFoleyContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	DMember(float)                                     PitchMultiplier                                             OFFSET(get<float>, {0xD8, 4, 0, 0})
};

/// Class /Script/JunoGameNative.JunoActiveItemAnimContext
/// Size: 0x0000 (0x000098 - 0x000098)
class UJunoActiveItemAnimContext : public USoundLibraryAnimContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
};

/// Class /Script/JunoGameNative.JunoCameraMode_OrbitCam
/// Size: 0x00C0 (0x001BA0 - 0x001C60)
class UJunoCameraMode_OrbitCam : public UFortCameraMode_ThirdPerson
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7264;

public:
	DMember(bool)                                      bIsBuildPreviewMode                                         OFFSET(get<bool>, {0x1BA0, 1, 0, 0})
	SMember(FTransform)                                BuildPreviewActorTransform                                  OFFSET(getStruct<T>, {0x1BB0, 96, 0, 0})
	SMember(FBox)                                      BuildPreviewLocalBounds                                     OFFSET(getStruct<T>, {0x1C10, 56, 0, 0})
	DMember(bool)                                      bOverrideCameraOriginDuringBuildPreview                     OFFSET(get<bool>, {0x1C48, 1, 0, 0})
	CMember(class UCurveFloat*)                        BuildPreviewBoundsToForwardDistanceScale                    OFFSET(get<T>, {0x1C50, 8, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoCameraMode_OrbitCam.UpdateCameraBP
	// void UpdateCameraBP(class AActor* ViewTarget, float DeltaTime, FTViewTarget& OutVT);                                     // [0x2177018] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoCameraMode_OrbitCam.OnBecomeActiveBP
	// void OnBecomeActiveBP(class AActor* ViewTarget);                                                                         // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoCameraMode_OrbitCam.IsCurrentlyInBuildPreviewMode
	// bool IsCurrentlyInBuildPreviewMode();                                                                                    // [0xb964260] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoCameraMode_OrbitCam.GetBuildPreviewerFromViewTarget
	// class AJunoBuilderTool* GetBuildPreviewerFromViewTarget(class AActor* ViewTarget);                                       // [0xb962974] Final|Native|Protected|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCameraMode_OrbitCam.CalculateCameraOriginForBuildPreview
	// bool CalculateCameraOriginForBuildPreview(class AActor* ViewTarget, FVector& OutOrigin);                                 // [0x2177018] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent|Const 
};

/// Class /Script/JunoGameNative.FortClientPilot_QuickSmokeJuno
/// Size: 0x0010 (0x000310 - 0x000320)
class UFortClientPilot_QuickSmokeJuno : public UFortClientPilot_GameplayBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
};

/// Class /Script/JunoGameNative.FortPickupInteractOverrideComponent_Juno
/// Size: 0x0000 (0x0000C0 - 0x0000C0)
class UFortPickupInteractOverrideComponent_Juno : public UFortPickupInteractOverrideComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Class /Script/JunoGameNative.JunoAIPersistenceComponent
/// Size: 0x0028 (0x0000A8 - 0x0000D0)
class UJunoAIPersistenceComponent : public UFortPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoAIPersistenceComponent.HandleAIFullySpawned
	// void HandleAIFullySpawned(class AAIController* Controller, class AFortPawn* Pawn);                                       // [0xb963c84] Final|Native|Protected 
};

/// Class /Script/JunoGameNative.JunoCameraModeOverrideComponent
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UJunoCameraModeOverrideComponent : public UFortCameraModeOverrideComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/JunoGameNative.JunoControllerComponent_BedAssignmentNetworkEvents
/// Size: 0x0038 (0x0000A8 - 0x0000E0)
class UJunoControllerComponent_BedAssignmentNetworkEvents : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(TArray<FAICharacterInfo>)                  AvailableCharactersData                                     OFFSET(get<T>, {0xC0, 16, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoControllerComponent_BedAssignmentNetworkEvents.TryFindCharacterDispplayName
	// FText TryFindCharacterDispplayName(FGameplayTag& CharacterGameplayTag);                                                  // [0xb9656a8] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoControllerComponent_BedAssignmentNetworkEvents.ServerHandleEndInteraction
	// void ServerHandleEndInteraction();                                                                                       // [0x8384348] RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoControllerComponent_BedAssignmentNetworkEvents.ServerAttemptAssignPlayerCharacter
	// void ServerAttemptAssignPlayerCharacter(class AActor* ReceivingActor);                                                   // [0xb9651c0] RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoControllerComponent_BedAssignmentNetworkEvents.ServerAttemptAssignAICharacter
	// void ServerAttemptAssignAICharacter(class AActor* ReceivingActor, FGameplayTag CharacterGameplayTag);                    // [0xb96504c] RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoControllerComponent_BedAssignmentNetworkEvents.OnRep_AvailableCharactersData
	// void OnRep_AvailableCharactersData();                                                                                    // [0xb964828] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoControllerComponent_BedAssignmentNetworkEvents.HandleCampObjectInteracted
	// void HandleCampObjectInteracted(class AActor* ReceivingActor);                                                           // [0xb963d48] Final|Native|Public  
	// Function /Script/JunoGameNative.JunoControllerComponent_BedAssignmentNetworkEvents.GetAssignableNPCSs
	// TArray<FAICharacterInfo> GetAssignableNPCSs();                                                                           // [0xb962958] Final|RequiredAPI|Native|Public 
	// Function /Script/JunoGameNative.JunoControllerComponent_BedAssignmentNetworkEvents.ClientNotifyObjectInteracted
	// void ClientNotifyObjectInteracted(class AActor* ReceivingActor);                                                         // [0x83bf908] Net|NetReliableNative|Event|Public|NetClient 
};

/// Class /Script/JunoGameNative.JunoGameStateComponent_PickupManagement
/// Size: 0x0010 (0x000158 - 0x000168)
class UJunoGameStateComponent_PickupManagement : public UFortGameStateComponent_PickupManagement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	SMember(FDataTableRowHandle)                       SettingsRow                                                 OFFSET(getStruct<T>, {0x158, 16, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoGameStateComponent_PickupManagement.OnPlaylistDataReady
	// void OnPlaylistDataReady(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, FGameplayTagContainer& PlaylistContextTags); // [0xb964634] Final|Native|Private|HasOutParms 
};

/// Class /Script/JunoGameNative.JunoPlayspaceAccountantComponent
/// Size: 0x0028 (0x0000F8 - 0x000120)
class UJunoPlayspaceAccountantComponent : public UFortPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoPlayspaceAccountantComponent.IsAccountantReady
	// bool IsAccountantReady();                                                                                                // [0xb964228] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayspaceAccountantComponent.IncrementValue
	// void IncrementValue(FName ValueName, int32_t Value);                                                                     // [0xb964154] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPlayspaceAccountantComponent.GetValue
	// int32_t GetValue(FName ValueName);                                                                                       // [0xb963bf8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayspaceAccountantComponent.GetJunoPlayspaceAccountantComponent
	// class UJunoPlayspaceAccountantComponent* GetJunoPlayspaceAccountantComponent(class UObject* WorldContextObject, FVector& Location); // [0xb963780] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPlayspaceAccountantComponent.DecrementValue
	// void DecrementValue(FName ValueName, int32_t Value);                                                                     // [0xb9611c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoPlayspaceRandomStreamComponent
/// Size: 0x0008 (0x0000F8 - 0x000100)
class UJunoPlayspaceRandomStreamComponent : public UFortPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	DMember(int32_t)                                   PlayspaceRandomSeed                                         OFFSET(get<int32_t>, {0xF8, 4, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoPlayspaceRandomStreamComponent.OnVolumeGuidChanged
	// void OnVolumeGuidChanged(class AActor* Actor, FGuid NewGuid);                                                            // [0xb96497c] Final|Native|Private|HasDefaults 
	// Function /Script/JunoGameNative.JunoPlayspaceRandomStreamComponent.OnVolumeBoundsChanged
	// void OnVolumeBoundsChanged(class APlayspace* Playspace);                                                                 // [0xb964900] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPlayspaceRandomStreamComponent.GetJunoRootPlayspaceRandomStreamComponent
	// class UJunoPlayspaceRandomStreamComponent* GetJunoRootPlayspaceRandomStreamComponent(class UObject* WorldContextObject); // [0xb9639e0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPlayspaceRandomStreamComponent.GetJunoPlayspaceRandomStreamComponent
	// class UJunoPlayspaceRandomStreamComponent* GetJunoPlayspaceRandomStreamComponent(class UObject* WorldContextObject, FVector& Location); // [0xb9638d8] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPlayspaceRandomStreamComponent.GenerateRandomStream
	// FRandomStream GenerateRandomStream(FString Name, FVector OptionalLocation);                                              // [0xb962194] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayspaceRandomStreamComponent.GenerateRandomSeed
	// int32_t GenerateRandomSeed(FString Name, FVector OptionalLocation);                                                      // [0xb9619f0] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoHarvestingComponent
/// Size: 0x00A8 (0x0000A0 - 0x000148)
class UJunoHarvestingComponent : public UPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	DMember(float)                                     HeightOffset                                                OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(float)                                     HorizontalConeRadius                                        OFFSET(get<float>, {0xA4, 4, 0, 0})
	DMember(float)                                     VerticalConeRadius                                          OFFSET(get<float>, {0xA8, 4, 0, 0})
	CMember(class UDataTable*)                         BuildingTagToResourceDataTable                              OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(class UDataTable*)                         CraftingIngredientDataTable                                 OFFSET(get<T>, {0xB8, 8, 0, 0})
	SMember(FGameplayTagContainer)                     ResourceIdentifierTags                                      OFFSET(getStruct<T>, {0xC0, 32, 0, 0})
	SMember(FGameplayTagContainer)                     BuildingTagsToIgnoreForResourceSplitting                    OFFSET(getStruct<T>, {0xE0, 32, 0, 0})
	DMember(float)                                     TimeToRegenHealth                                           OFFSET(get<float>, {0x100, 4, 0, 0})
	CMember(TArray<FJunoBuildingHitData>)              BuildingsHitList                                            OFFSET(get<T>, {0x108, 16, 0, 0})
	DMember(float)                                     ResourcePercentToReturn                                     OFFSET(get<float>, {0x118, 4, 0, 0})
	DMember(int32_t)                                   PickupsPerResource                                          OFFSET(get<int32_t>, {0x11C, 4, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   PickupClassPtr                                              OFFSET(get<T>, {0x120, 32, 0, 0})
	DMember(float)                                     TossSpeed                                                   OFFSET(get<float>, {0x140, 4, 0, 0})
	DMember(float)                                     ConeHalfAngleDegrees                                        OFFSET(get<float>, {0x144, 4, 0, 0})
};

/// Class /Script/JunoGameNative.JunoPlayerSpawningComponent
/// Size: 0x0028 (0x0000B0 - 0x0000D8)
class UJunoPlayerSpawningComponent : public UPlayspaceComponent_PlayerSpawning
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
};

/// Class /Script/JunoGameNative.JunoCoreMutators
/// Size: 0x0048 (0x000338 - 0x000380)
class AJunoCoreMutators : public AFortAthenaMutator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	SMember(FMulticastInlineDelegate)                  OnPawnLoaded                                                OFFSET(getStruct<T>, {0x338, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnClientInitialLoadingFinished                              OFFSET(getStruct<T>, {0x348, 16, 0, 0})
	DMember(bool)                                      bIsJunoPlayspaceReady                                       OFFSET(get<bool>, {0x358, 1, 0, 0})
};

/// Class /Script/JunoGameNative.JunoPersistentPlayspace
/// Size: 0x0108 (0x0006C0 - 0x0007C8)
class AJunoPersistentPlayspace : public AFortPlayspace
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1992;

public:
	CMember(class UJunoPlayspacePersistenceComponent*) PersistenceComponent                                        OFFSET(get<T>, {0x6E8, 8, 0, 0})
	CMember(ESpatialLoadingState)                      SpatialLoadingState                                         OFFSET(get<T>, {0x6F0, 1, 0, 0})
	SMember(FName)                                     PersistenceMainLevelUniquePackageName                       OFFSET(getStruct<T>, {0x6F4, 4, 0, 0})
	CMember(TWeakObjectPtr<ULevel*>)                   PersistenceMainLevelWeakPtr                                 OFFSET(get<T>, {0x6F8, 8, 0, 0})
	DMember(uint32_t)                                  PlayspaceRequestKey                                         OFFSET(get<uint32_t>, {0x700, 4, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoPersistentPlayspace.ShouldBeTrackedByPlayspace
	// bool ShouldBeTrackedByPlayspace(class AActor* Actor);                                                                    // [0xbace2cc] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPersistentPlayspace.SetShouldBeTrackedByPlayspace
	// void SetShouldBeTrackedByPlayspace(class AActor* Actor, bool bShouldBeTracked);                                          // [0xbace218] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPersistentPlayspace.RemoveActorWhenEndPlay
	// void RemoveActorWhenEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);                             // [0xbace154] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPersistentPlayspace.EnableSpawnedActorTracking
	// void EnableSpawnedActorTracking(class AActor* Actor);                                                                    // [0xbacdaac] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoRootPlayspace
/// Size: 0x0178 (0x0007C8 - 0x000940)
class AJunoRootPlayspace : public AJunoPersistentPlayspace
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2368;

public:
	CMember(TWeakObjectPtr<AFortPlayerControllerAthena*>) OwningController                                         OFFSET(get<T>, {0x7E8, 8, 0, 0})
	SMember(FGameplayTag)                              DefaultInventoryItemTag                                     OFFSET(getStruct<T>, {0x7F0, 4, 0, 0})
	CMember(class UPlayspaceComponent_JunoServerExpiration*) JunoServerExpiration                                  OFFSET(get<T>, {0x7F8, 8, 0, 0})
	DMember(float)                                     ProcessPlayerProgressionTime                                OFFSET(get<float>, {0x818, 4, 0, 0})
	CMember(class UClass*)                             JunoStateMachineClass                                       OFFSET(get<T>, {0x828, 8, 0, 0})
	CMember(EWorldDataAvailable)                       WorldDataAvailable                                          OFFSET(get<T>, {0x830, 1, 0, 0})
	DMember(bool)                                      bRootPlayspaceReady                                         OFFSET(get<bool>, {0x831, 1, 0, 0})
	CMember(class UJunoWorld*)                         CurrentJunoWorld                                            OFFSET(get<T>, {0x838, 8, 0, 0})
	SMember(FJunoReplicatedWorldMetadata)              MetadataForReplication                                      OFFSET(getStruct<T>, {0x848, 224, 0, 0})
	CMember(class UJunoPlayerPersistenceComponent*)    JunoPlayerPersistenceComponent                              OFFSET(get<T>, {0x938, 8, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoRootPlayspace.OnRep_WorldMetadata
	// void OnRep_WorldMetadata();                                                                                              // [0xb9a56c0] Final|Native|Private 
};

/// Class /Script/JunoGameNative.JunoStateMachine
/// Size: 0x0000 (0x0000C8 - 0x0000C8)
class UJunoStateMachine : public UGameplayStateMachine
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Class /Script/JunoGameNative.JunoState_Setup
/// Size: 0x0028 (0x000078 - 0x0000A0)
class UJunoState_Setup : public UGameplayState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(TWeakObjectPtr<UDataTable*>)               PossibleWorldsDataTable                                     OFFSET(get<T>, {0x78, 32, 0, 0})
	DMember(int32_t)                                   WorldRandomSeed                                             OFFSET(get<int32_t>, {0x98, 4, 0, 0})
};

/// Class /Script/JunoGameNative.JunoAIFaunaAnimInstance
/// Size: 0x0160 (0x0005A0 - 0x000700)
class UJunoAIFaunaAnimInstance : public UFortAIAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1792;

public:
	DMember(float)                                     AverageSpeed                                                OFFSET(get<float>, {0x598, 4, 0, 0})
	DMember(float)                                     AverageSpeedTimeFrame                                       OFFSET(get<float>, {0x59C, 4, 0, 0})
	DMember(bool)                                      bHasValidAimTarget                                          OFFSET(get<bool>, {0x5A0, 1, 0, 0})
	DMember(float)                                     AimTime                                                     OFFSET(get<float>, {0x5A4, 4, 0, 0})
	SMember(FVector)                                   AimTargetLocation                                           OFFSET(getStruct<T>, {0x5A8, 24, 0, 0})
	DMember(bool)                                      bIsSurfaceSwimming                                          OFFSET(get<bool>, {0x5C0, 1, 0, 0})
	DMember(bool)                                      bIsMovingOnGround                                           OFFSET(get<bool>, {0x5C1, 1, 0, 0})
	DMember(bool)                                      bIsInTornado                                                OFFSET(get<bool>, {0x5C2, 1, 0, 0})
	DMember(float)                                     LookAtAlpha                                                 OFFSET(get<float>, {0x5C4, 4, 0, 0})
	DMember(float)                                     MaxDistanceToPlayerForLookAt                                OFFSET(get<float>, {0x5C8, 4, 0, 0})
	DMember(float)                                     LookAtTooFarFromPlayerTimeOut                               OFFSET(get<float>, {0x5CC, 4, 0, 0})
	DMember(bool)                                      bDisableLookAtDuringMontage                                 OFFSET(get<bool>, {0x5D0, 1, 0, 0})
	SMember(FName)                                     DisableHeadTrackingCurveName                                OFFSET(getStruct<T>, {0x5D4, 4, 0, 0})
	SMember(FJunoRidingAnimationData)                  RidingAnimationData                                         OFFSET(getStruct<T>, {0x5D8, 20, 0, 0})
	DMember(bool)                                      bIsSlopeSliding                                             OFFSET(get<bool>, {0x5EC, 1, 0, 0})
	DMember(float)                                     SlopeSlidingPitch                                           OFFSET(get<float>, {0x5F0, 4, 0, 0})
	DMember(float)                                     SlopeSlidingRoll                                            OFFSET(get<float>, {0x5F4, 4, 0, 0})
	DMember(float)                                     RidingMovePlayRate                                          OFFSET(get<float>, {0x5F8, 4, 0, 0})
	DMember(bool)                                      bJustGotPlayer                                              OFFSET(get<bool>, {0x5FC, 1, 0, 0})
	DMember(bool)                                      bIsBoosting                                                 OFFSET(get<bool>, {0x5FD, 1, 0, 0})
	DMember(bool)                                      bIsTurningInPlace                                           OFFSET(get<bool>, {0x5FE, 1, 0, 0})
	DMember(float)                                     TurnInPlaceRotationSpeed                                    OFFSET(get<float>, {0x600, 4, 0, 0})
	DMember(float)                                     TurnInPlaceAngleDelta                                       OFFSET(get<float>, {0x604, 4, 0, 0})
	DMember(bool)                                      bIsMovingBackwards                                          OFFSET(get<bool>, {0x608, 1, 0, 0})
	DMember(float)                                     RiderReferentialYaw                                         OFFSET(get<float>, {0x60C, 4, 0, 0})
	DMember(float)                                     BoostPlayRate                                               OFFSET(get<float>, {0x610, 4, 0, 0})
	DMember(bool)                                      bIsTurnInPlaceAngleDeltaPositive                            OFFSET(get<bool>, {0x614, 1, 0, 0})
	DMember(bool)                                      bPlayLandAdditive                                           OFFSET(get<bool>, {0x615, 1, 0, 0})
	DMember(float)                                     BackwardVelocity                                            OFFSET(get<float>, {0x618, 4, 0, 0})
	DMember(bool)                                      bShouldPlayStopBackwards                                    OFFSET(get<bool>, {0x61C, 1, 0, 0})
	DMember(float)                                     SwimmingYaw                                                 OFFSET(get<float>, {0x620, 4, 0, 0})
	DMember(float)                                     BackwardsPlayRate                                           OFFSET(get<float>, {0x624, 4, 0, 0})
	DMember(float)                                     BodyRoll                                                    OFFSET(get<float>, {0x628, 4, 0, 0})
	DMember(float)                                     TurnAngleStored                                             OFFSET(get<float>, {0x62C, 4, 0, 0})
	DMember(bool)                                      bWasTurningRight                                            OFFSET(get<bool>, {0x630, 1, 0, 0})
	CMember(ERidingFootPhase)                          FootPhase                                                   OFFSET(get<T>, {0x631, 1, 0, 0})
	DMember(bool)                                      bIsFootPhase_FeetInAir                                      OFFSET(get<bool>, {0x632, 1, 0, 0})
	DMember(bool)                                      bIsFootPhase_FrontFeetPlanted                               OFFSET(get<bool>, {0x633, 1, 0, 0})
	DMember(bool)                                      bIsFootPhase_BackFeetPlanted                                OFFSET(get<bool>, {0x634, 1, 0, 0})
	DMember(bool)                                      bIsFootPhase_LeftBackFeetForward                            OFFSET(get<bool>, {0x635, 1, 0, 0})
	DMember(bool)                                      bIsFootPhase_RightBackFeetForward                           OFFSET(get<bool>, {0x636, 1, 0, 0})
	DMember(bool)                                      bIsFootPhase_LeftPlantedRightPass                           OFFSET(get<bool>, {0x637, 1, 0, 0})
	DMember(bool)                                      bIsFootPhase_RightPlantedLeftPass                           OFFSET(get<bool>, {0x638, 1, 0, 0})
	SMember(FGameplayTagContainer)                     SlipstreamTags                                              OFFSET(getStruct<T>, {0x640, 32, 0, 0})
	DMember(bool)                                      bIsInSlipstream                                             OFFSET(get<bool>, {0x660, 1, 0, 0})
	SMember(FGameplayTagContainer)                     SkydivingTags                                               OFFSET(getStruct<T>, {0x668, 32, 0, 0})
	DMember(bool)                                      bMovementMode_Skydiving                                     OFFSET(get<bool>, {0x688, 1, 0, 0})
	SMember(FGameplayTagContainer)                     SkytubingTags                                               OFFSET(getStruct<T>, {0x690, 32, 0, 0})
	DMember(bool)                                      bGameplay_Status_Skytubing                                  OFFSET(get<bool>, {0x6B0, 1, 0, 0})
	DMember(bool)                                      bIsAbducted                                                 OFFSET(get<bool>, {0x6B1, 1, 0, 0})
	SMember(FGameplayTagContainer)                     TractorBeamTags                                             OFFSET(getStruct<T>, {0x6B8, 32, 0, 0})
	DMember(bool)                                      bIsInTractorBeam                                            OFFSET(get<bool>, {0x6D8, 1, 0, 0})
	DMember(bool)                                      bIsFloating                                                 OFFSET(get<bool>, {0x6D9, 1, 0, 0})
	DMember(float)                                     JustGotPlayerInitialDelaySec                                OFFSET(get<float>, {0x6DC, 4, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoAIFaunaAnimInstance.UpdateTurnAngleStored
	// void UpdateTurnAngleStored();                                                                                            // [0x644ece8] Native|Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoAIFaunaAnimInstance.UpdateSwimmingYaw
	// void UpdateSwimmingYaw();                                                                                                // [0x644ed18] Native|Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoAIFaunaAnimInstance.UpdateRidingMovePlayRate
	// void UpdateRidingMovePlayRate();                                                                                         // [0xa76e884] Native|Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoAIFaunaAnimInstance.UpdatePlayLandAdditive
	// void UpdatePlayLandAdditive();                                                                                           // [0xa76e86c] Native|Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoAIFaunaAnimInstance.UpdateFootPhaseStop
	// void UpdateFootPhaseStop();                                                                                              // [0x6453f00] Native|Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoAIFaunaAnimInstance.UpdateBoostPlayRate
	// void UpdateBoostPlayRate();                                                                                              // [0xa76e6cc] Native|Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoAIFaunaAnimInstance.UpdateBodyRoll
	// void UpdateBodyRoll();                                                                                                   // [0x644ed00] Native|Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoAIFaunaAnimInstance.UpdateBackwardVelocity
	// void UpdateBackwardVelocity();                                                                                           // [0xa76e688] Native|Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoAIFaunaAnimInstance.UpdateBackwardsPlayRate
	// void UpdateBackwardsPlayRate();                                                                                          // [0x644ecd0] Native|Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoAIFaunaAnimInstance.FinishFootPhaseStopUpdate
	// void FinishFootPhaseStopUpdate();                                                                                        // [0x644e9c0] Native|Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoAIFaunaAnimInstance.CalculateLookAtAlpha
	// void CalculateLookAtAlpha(bool bForceDisableLookAt, float DeltaSeconds);                                                 // [0xb9a3a14] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoCreatureAnimInstance
/// Size: 0x0270 (0x000570 - 0x0007E0)
class UJunoCreatureAnimInstance : public UJunoPawnAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2016;

public:
	DMember(bool)                                      bIsTurning                                                  OFFSET(get<bool>, {0x568, 1, 0, 0})
	DMember(bool)                                      bWasTurning                                                 OFFSET(get<bool>, {0x569, 1, 0, 0})
	DMember(bool)                                      bIdleShuffleTurnDirection                                   OFFSET(get<bool>, {0x56A, 1, 0, 0})
	DMember(float)                                     IdleShufflePlayRate                                         OFFSET(get<float>, {0x56C, 4, 0, 0})
	DMember(bool)                                      bIsIdleShuffleTurn                                          OFFSET(get<bool>, {0x570, 1, 0, 0})
	SMember(FVector)                                   CreaturePosition                                            OFFSET(getStruct<T>, {0x578, 24, 0, 0})
	SMember(FVector)                                   CreaturePositionDelta                                       OFFSET(getStruct<T>, {0x590, 24, 0, 0})
	SMember(FRotator)                                  CreatureRootRotation                                        OFFSET(getStruct<T>, {0x5A8, 24, 0, 0})
	SMember(FRotator)                                  CreatureRootRotationOffset                                  OFFSET(getStruct<T>, {0x5C0, 24, 0, 0})
	SMember(FRotator)                                  CreatureRotation                                            OFFSET(getStruct<T>, {0x5D8, 24, 0, 0})
	SMember(FRotator)                                  CreatureRotationDelta                                       OFFSET(getStruct<T>, {0x5F0, 24, 0, 0})
	SMember(FVector)                                   CreatureVelocity                                            OFFSET(getStruct<T>, {0x608, 24, 0, 0})
	DMember(float)                                     CreatureYaw                                                 OFFSET(get<float>, {0x620, 4, 0, 0})
	DMember(float)                                     CreatureYawDelta                                            OFFSET(get<float>, {0x624, 4, 0, 0})
	DMember(bool)                                      RootSmoothing_Enabled                                       OFFSET(get<bool>, {0x628, 1, 0, 0})
	DMember(float)                                     RootSmoothing_Distance                                      OFFSET(get<float>, {0x62C, 4, 0, 0})
	DMember(bool)                                      bSlopeWarpingIsEnabled                                      OFFSET(get<bool>, {0x630, 1, 0, 0})
	DMember(float)                                     SlopeWarpingFloorCheckFrequency                             OFFSET(get<float>, {0x634, 4, 0, 0})
	DMember(float)                                     SlopeWarpingRollAlpha                                       OFFSET(get<float>, {0x638, 4, 0, 0})
	DMember(bool)                                      bStartingInPlace                                            OFFSET(get<bool>, {0x63C, 1, 0, 0})
	SMember(FVector)                                   StartInPlace_RootTranslation                                OFFSET(getStruct<T>, {0x640, 24, 0, 0})
	CMember(class UAnimSequence*)                      StartInPlace_Sequence                                       OFFSET(get<T>, {0x658, 8, 0, 0})
	DMember(float)                                     StartInPlace_SequenceTime                                   OFFSET(get<float>, {0x660, 4, 0, 0})
	DMember(bool)                                      bTurningInPlace                                             OFFSET(get<bool>, {0x664, 1, 0, 0})
	DMember(bool)                                      bTurnInPlace_UseAuthoredAngle                               OFFSET(get<bool>, {0x665, 1, 0, 0})
	CMember(class UAnimSequence*)                      TurnAnimation                                               OFFSET(get<T>, {0x668, 8, 0, 0})
	DMember(float)                                     TurnInPlace_AnimationAuthoredAngle                          OFFSET(get<float>, {0x670, 4, 0, 0})
	DMember(float)                                     TurnPlayRate                                                OFFSET(get<float>, {0x674, 4, 0, 0})
	DMember(float)                                     TurnInPlace_RootRotationZ                                   OFFSET(get<float>, {0x678, 4, 0, 0})
	DMember(float)                                     TurnInPlace_RotationAngle                                   OFFSET(get<float>, {0x67C, 4, 0, 0})
	DMember(float)                                     TurnInPlace_RotationAngle_Min                               OFFSET(get<float>, {0x680, 4, 0, 0})
	DMember(float)                                     TurnInPlace_RotationRate                                    OFFSET(get<float>, {0x684, 4, 0, 0})
	CMember(class UAnimSequence*)                      TurnInPlace_Sequence                                        OFFSET(get<T>, {0x688, 8, 0, 0})
	DMember(float)                                     TurnInPlace_SequenceTime                                    OFFSET(get<float>, {0x690, 4, 0, 0})
	DMember(bool)                                      bStateRule_Idle_Moving                                      OFFSET(get<bool>, {0x694, 1, 0, 0})
	DMember(float)                                     IdleShuffleTurnThreshold                                    OFFSET(get<float>, {0x698, 4, 0, 0})
	DMember(float)                                     IdleShuffleTurnDirectionThreshold                           OFFSET(get<float>, {0x69C, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateInRangeA                                 OFFSET(get<float>, {0x6A0, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateInRangeB                                 OFFSET(get<float>, {0x6A4, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateOutRangeA                                OFFSET(get<float>, {0x6A8, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateOutRangeB                                OFFSET(get<float>, {0x6AC, 4, 0, 0})
	DMember(bool)                                      bHasValidAimTarget                                          OFFSET(get<bool>, {0x6B0, 1, 0, 0})
	SMember(FVector)                                   AimTargetLocation                                           OFFSET(getStruct<T>, {0x6B8, 24, 0, 0})
	DMember(float)                                     AimTime                                                     OFFSET(get<float>, {0x6D0, 4, 0, 0})
	DMember(float)                                     LookAtAlpha                                                 OFFSET(get<float>, {0x6D4, 4, 0, 0})
	DMember(float)                                     MaxDistanceToPlayerForLookAt                                OFFSET(get<float>, {0x6D8, 4, 0, 0})
	DMember(float)                                     LookAtTooFarFromPlayerTimeOut                               OFFSET(get<float>, {0x6DC, 4, 0, 0})
	DMember(bool)                                      bDisableLookAtDuringMontage                                 OFFSET(get<bool>, {0x6E0, 1, 0, 0})
	DMember(bool)                                      bStartTurn                                                  OFFSET(get<bool>, {0x6E1, 1, 0, 0})
	DMember(float)                                     TurnAngle                                                   OFFSET(get<float>, {0x6E4, 4, 0, 0})
	DMember(float)                                     TurnRate                                                    OFFSET(get<float>, {0x6E8, 4, 0, 0})
	SMember(FName)                                     DisableHeadTrackingCurveName                                OFFSET(getStruct<T>, {0x6EC, 4, 0, 0})
	DMember(float)                                     Speed                                                       OFFSET(get<float>, {0x6F0, 4, 0, 0})
	DMember(bool)                                      bPlayLandAdditive                                           OFFSET(get<bool>, {0x6F4, 1, 0, 0})
	DMember(bool)                                      bIsFloating                                                 OFFSET(get<bool>, {0x6F5, 1, 0, 0})
	DMember(bool)                                      bIsSurfaceSwimming                                          OFFSET(get<bool>, {0x6F6, 1, 0, 0})
	DMember(bool)                                      bIsTurningInPlace                                           OFFSET(get<bool>, {0x6F7, 1, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoCreatureAnimInstance.TurnInPlace_Started
	// void TurnInPlace_Started();                                                                                              // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoCreatureAnimInstance.TurnInPlace_SignalAnimationEnded
	// void TurnInPlace_SignalAnimationEnded();                                                                                 // [0xb9a793c] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCreatureAnimInstance.TurnInPlace_Setup
	// void TurnInPlace_Setup(class UAnimSequence* TurnAnimSequence);                                                           // [0xb9a6e84] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCreatureAnimInstance.TurnInPlace_Interrupted
	// void TurnInPlace_Interrupted();                                                                                          // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoCreatureAnimInstance.TurnInPlace_Ended
	// void TurnInPlace_Ended();                                                                                                // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoCreatureAnimInstance.StartInPlace_Started
	// void StartInPlace_Started();                                                                                             // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoCreatureAnimInstance.StartInPlace_Setup
	// void StartInPlace_Setup(class UAnimSequence* StartAnimSequence);                                                         // [0xb9a6d84] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCreatureAnimInstance.CreatureIsMovingRight
	// bool CreatureIsMovingRight();                                                                                            // [0xb9a43c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoCreatureAnimInstance.CreatureIsMovingLeft
	// bool CreatureIsMovingLeft();                                                                                             // [0xb9a4338] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoCreatureAnimInstance_LootLlama
/// Size: 0x0030 (0x0007E0 - 0x000810)
class UJunoCreatureAnimInstance_LootLlama : public UJunoCreatureAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2064;

public:
	DMember(bool)                                      bHighVelocity                                               OFFSET(get<bool>, {0x7E0, 1, 0, 0})
	DMember(bool)                                      bIsInterruptible                                            OFFSET(get<bool>, {0x7E1, 1, 0, 0})
	DMember(bool)                                      bLocoToIdle                                                 OFFSET(get<bool>, {0x7E2, 1, 0, 0})
	DMember(bool)                                      bIdleToLoco                                                 OFFSET(get<bool>, {0x7E3, 1, 0, 0})
	DMember(bool)                                      bJumpStartToJumpLoop                                        OFFSET(get<bool>, {0x7E4, 1, 0, 0})
	DMember(bool)                                      bJumpLandToMovement                                         OFFSET(get<bool>, {0x7E5, 1, 0, 0})
	DMember(bool)                                      bIsRunning                                                  OFFSET(get<bool>, {0x7E6, 1, 0, 0})
	DMember(bool)                                      bIdleToFalling                                              OFFSET(get<bool>, {0x7E7, 1, 0, 0})
	DMember(bool)                                      bToppledOnGround                                            OFFSET(get<bool>, {0x7E8, 1, 0, 0})
	DMember(bool)                                      bTransitionToLand                                           OFFSET(get<bool>, {0x7E9, 1, 0, 0})
	DMember(float)                                     TargetDistance                                              OFFSET(get<float>, {0x7EC, 4, 0, 0})
	DMember(bool)                                      bTargetIsClose                                              OFFSET(get<bool>, {0x7F0, 1, 0, 0})
	DMember(bool)                                      bIsToppled                                                  OFFSET(get<bool>, {0x7F1, 1, 0, 0})
	DMember(bool)                                      bIsLeaking                                                  OFFSET(get<bool>, {0x7F2, 1, 0, 0})
	DMember(float)                                     MinHighVelocityMagnitude                                    OFFSET(get<float>, {0x7F4, 4, 0, 0})
	DMember(float)                                     MaxInterruptibleCurveValue                                  OFFSET(get<float>, {0x7F8, 4, 0, 0})
	DMember(float)                                     LocoIdleTransitionThreshold                                 OFFSET(get<float>, {0x7FC, 4, 0, 0})
	DMember(float)                                     RunSpeedThreshold                                           OFFSET(get<float>, {0x800, 4, 0, 0})
	DMember(float)                                     JumpLandToMovementInterruptibleThreshold                    OFFSET(get<float>, {0x804, 4, 0, 0})
	DMember(float)                                     MinTargetIsCloseDistance                                    OFFSET(get<float>, {0x808, 4, 0, 0})
	SMember(FName)                                     CurveName_Interruptible                                     OFFSET(getStruct<T>, {0x80C, 4, 0, 0})
};

/// Class /Script/JunoGameNative.JunoFreeBuildPersistenceFeatureDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoFreeBuildPersistenceFeatureDataInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoDamageFormulaExecutionCalculation
/// Size: 0x0000 (0x000048 - 0x000048)
class UJunoDamageFormulaExecutionCalculation : public UFortDamageFormulaExecutionCalculation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/JunoGameNative.JunoInventory
/// Size: 0x0078 (0x000508 - 0x000580)
class AJunoInventory : public AFortInventory
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1408;

public:
	SMember(FGuid)                                     SavedActorGuid                                              OFFSET(getStruct<T>, {0x530, 16, 0, 0})
	DMember(int32_t)                                   InventoryCapacity                                           OFFSET(get<int32_t>, {0x568, 4, 0, 0})
	SMember(FGuid)                                     InventoryHandleGuid                                         OFFSET(getStruct<T>, {0x56C, 16, 0, 0})
	DMember(bool)                                      bIsPersistent                                               OFFSET(get<bool>, {0x57C, 1, 0, 0})
	DMember(bool)                                      bWasSpawnedByLevelSaveRecord                                OFFSET(get<bool>, {0x57D, 1, 0, 0})
};

/// Class /Script/JunoGameNative.JunoInventoryManagerComponent
/// Size: 0x0060 (0x0000A0 - 0x000100)
class UJunoInventoryManagerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	CMember(TArray<FJunoInventoryHandle>)              InventoryHandles                                            OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr<AJunoInventory*>>)   InventoryInstances                                          OFFSET(get<T>, {0xB0, 16, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoInventoryManagerComponent.OnRep_InventoryInstances
	// void OnRep_InventoryInstances();                                                                                         // [0xb9a5698] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoInventoryManagerComponent.OnRep_InventoryHandles
	// void OnRep_InventoryHandles();                                                                                           // [0xb9a5684] Final|Native|Protected 
};

/// Class /Script/JunoGameNative.JunoInventoryPersistenceFeatureData
/// Size: 0x0018 (0x000040 - 0x000058)
class UJunoInventoryPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FJunoInventoriesSaveData)                  SavedInventories                                            OFFSET(getStruct<T>, {0x48, 16, 0, 0})
};

/// Class /Script/JunoGameNative.JunoInventoryPersistenceFeatureDataActor
/// Size: 0x0018 (0x0002D0 - 0x0002E8)
class AJunoInventoryPersistenceFeatureDataActor : public AJunoPersistenceFeatureDataActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:
	CMember(TArray<class AJunoInventory*>)             SavedInventories                                            OFFSET(get<T>, {0x2D8, 16, 0, 0})
};

/// Class /Script/JunoGameNative.JunoInventoryPersistenceFeatureDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoInventoryPersistenceFeatureDataInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoInventoryUIPersistenceFeatureData
/// Size: 0x0058 (0x000040 - 0x000098)
class UJunoInventoryUIPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FJunoInventoryUISaveData)                  SavedInventoryUI                                            OFFSET(getStruct<T>, {0x48, 80, 0, 0})
};

/// Class /Script/JunoGameNative.JunoInventoryUIPersistenceFeatureDataActor
/// Size: 0x0058 (0x0002D0 - 0x000328)
class AJunoInventoryUIPersistenceFeatureDataActor : public AJunoPersistenceFeatureDataActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
	CMember(TMap<FGuid, FJunoSavedInventoryUIData>)    SavedInventoryUI                                            OFFSET(get<T>, {0x2D8, 80, 0, 0})
};

/// Class /Script/JunoGameNative.JunoInventoryUIPersistenceFeatureDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoInventoryUIPersistenceFeatureDataInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoPlayerInventoryComponent
/// Size: 0x0000 (0x000318 - 0x000318)
class UJunoPlayerInventoryComponent : public UJunoInventoryComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoPlayerInventoryComponent.OnPlayerPawnPossessed
	// void OnPlayerPawnPossessed(class APawn* PossessedPawn);                                                                  // [0xb9a553c] Final|Native|Protected 
};

/// Class /Script/JunoGameNative.JunoBuilderTool
/// Size: 0x0070 (0x001500 - 0x001570)
class AJunoBuilderTool : public AFortWeapon
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5488;

public:
	SMember(FMulticastInlineDelegate)                  OnBuilderToolInteractionStarted                             OFFSET(getStruct<T>, {0x1500, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnBuilderToolInteractionStopped                             OFFSET(getStruct<T>, {0x1510, 16, 0, 0})
	SMember(FJunoInputMapping)                         InputMapping                                                OFFSET(getStruct<T>, {0x1520, 16, 0, 0})
	CMember(class UInputAction*)                       UnEquipInputAction                                          OFFSET(get<T>, {0x1530, 8, 0, 0})
	SMember(FGameplayTagContainer)                     ActivatedTags                                               OFFSET(getStruct<T>, {0x1538, 32, 0, 0})
	CMember(TArray<class UJunoBuilderToolInteractionBehavior*>) InteractionBehaviors                               OFFSET(get<T>, {0x1558, 16, 0, 0})
	CMember(class UJunoBuilderToolInteractionBehavior*) ActiveInteractionBehavior                                  OFFSET(get<T>, {0x1568, 8, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoBuilderTool.ServerStartInteraction
	// void ServerStartInteraction(TArray<FJunoBuilderToolSelectedActor> SelectedActors, FGuid SelectionGUID);                  // [0xb9a6430] Final|Net|NetReliableNative|Event|Private|NetServer|HasDefaults 
	// Function /Script/JunoGameNative.JunoBuilderTool.ServerClearInteraction
	// void ServerClearInteraction(bool bExited);                                                                               // [0xb9a6024] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/JunoGameNative.JunoBuilderTool.ReceiveInteractionStarted
	// void ReceiveInteractionStarted(class UJunoBuilderToolInteractionBehavior* InteractionBehavior);                          // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuilderTool.ReceiveInteractionEnded
	// void ReceiveInteractionEnded(class UJunoBuilderToolInteractionBehavior* InteractionBehavior);                            // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuilderTool.MulticastStartInteractionOnRemoteClients
	// void MulticastStartInteractionOnRemoteClients(class UJunoBuilderToolInteractionBehavior* InteractionBehavior, TArray<FJunoBuilderToolSelectedActor> SelectedActors, FGuid SelectionGUID); // [0xb9a4d70] Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults 
	// Function /Script/JunoGameNative.JunoBuilderTool.MulticastClearInteractionOnRemoteClients
	// void MulticastClearInteractionOnRemoteClients();                                                                         // [0x8888d28] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/JunoGameNative.JunoBuilderTool.IsRunningOnOwningClient
	// bool IsRunningOnOwningClient();                                                                                          // [0xb9a4d28] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuilderTool.IsEnabled
	// bool IsEnabled();                                                                                                        // [0xb9a4d00] Native|Event|Protected|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuilderTool.GetSelectionGUID
	// FGuid GetSelectionGUID();                                                                                                // [0xb9a4cd8] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuilderTool.GetSelectedActors
	// TArray<FJunoBuilderToolSelectedActor> GetSelectedActors();                                                               // [0xb9a4604] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuilderTool.GetActiveInteractionBehavior
	// class UJunoBuilderToolInteractionBehavior* GetActiveInteractionBehavior();                                               // [0xb52b8e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuilderTool.ClientStopInteraction
	// void ClientStopInteraction(bool bIsExiting);                                                                             // [0x838549c] Final|Net|NetReliableNative|Event|Private|NetClient 
	// Function /Script/JunoGameNative.JunoBuilderTool.ClientStartInteraction
	// void ClientStartInteraction(class UJunoBuilderToolInteractionBehavior* InteractionBehavior, TArray<FJunoBuilderToolSelectedActor> SelectedActors, FGuid SelectionGUID); // [0xb9a3b6c] Final|Net|NetReliableNative|Event|Private|HasDefaults|NetClient 
};

/// Class /Script/JunoGameNative.JunoBuilderToolInteractionBehavior
/// Size: 0x01B0 (0x0000A0 - 0x000250)
class UJunoBuilderToolInteractionBehavior : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	SMember(FMulticastInlineDelegate)                  OnInteractionStart                                          OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnInteractionTrigger                                        OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnInteractionEnd                                            OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnInteractionExit                                           OFFSET(getStruct<T>, {0xD0, 16, 0, 0})
	DMember(bool)                                      bShouldAddToParent                                          OFFSET(get<bool>, {0xE0, 1, 0, 0})
	DMember(int32_t)                                   Priority                                                    OFFSET(get<int32_t>, {0xE4, 4, 0, 0})
	SMember(FDataTableRowHandle)                       ConfigData                                                  OFFSET(getStruct<T>, {0xE8, 16, 0, 0})
	SMember(FGameplayTagContainer)                     ActivatedTags                                               OFFSET(getStruct<T>, {0xF8, 32, 0, 0})
	CMember(class UInputMappingContext*)               InputMappingContext                                         OFFSET(get<T>, {0x120, 8, 0, 0})
	DMember(int32_t)                                   InputMappingPriority                                        OFFSET(get<int32_t>, {0x128, 4, 0, 0})
	CMember(class UInputAction*)                       TriggerInputAction                                          OFFSET(get<T>, {0x130, 8, 0, 0})
	CMember(class UInputAction*)                       ExitInputAction                                             OFFSET(get<T>, {0x138, 8, 0, 0})
	CMember(class UClass*)                             StartInteractionAbility                                     OFFSET(get<T>, {0x140, 8, 0, 0})
	CMember(class UClass*)                             EndInteractionAbility                                       OFFSET(get<T>, {0x148, 8, 0, 0})
	CMember(class UClass*)                             FailAbility                                                 OFFSET(get<T>, {0x150, 8, 0, 0})
	CMember(class UClass*)                             ExitAbility                                                 OFFSET(get<T>, {0x158, 8, 0, 0})
	SMember(FJunoBuilderToolInteractionActorClassSet)  SupportedClasses                                            OFFSET(getStruct<T>, {0x160, 160, 0, 0})
	CMember(TArray<FJunoBuilderToolSelectedActor>)     SelectedActors                                              OFFSET(get<T>, {0x200, 16, 0, 0})
	SMember(FGuid)                                     SelectionGUID                                               OFFSET(getStruct<T>, {0x210, 16, 0, 0})
	CMember(TArray<FJunoBuilderToolTimedActors>)       ClientPredictedActors                                       OFFSET(get<T>, {0x220, 16, 0, 0})
	CMember(TArray<FServerSpawnedActorPair>)           ServerSpawnedActors                                         OFFSET(get<T>, {0x230, 16, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.ServerSpawnSelectedActors
	// void ServerSpawnSelectedActors(FJunoBuilderToolSelectionSpawnParams SelectionSpawnParameters);                           // [0xb9a62c4] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.ServerOnSpawnedActorProcessedByClient
	// void ServerOnSpawnedActorProcessedByClient(FName StableName);                                                            // [0xb9a6240] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.ReceiveTriggerInteraction
	// void ReceiveTriggerInteraction();                                                                                        // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.ReceiveTickInteraction
	// void ReceiveTickInteraction();                                                                                           // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.ReceiveStartInteractionOnServer
	// void ReceiveStartInteractionOnServer(TArray<FJunoBuilderToolSelectedActor>& Actors, FGuid& Guid);                        // [0x2177018] Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.ReceiveStartInteractionOnRemoteClient
	// void ReceiveStartInteractionOnRemoteClient(TArray<FJunoBuilderToolSelectedActor>& Actors, FGuid& Guid);                  // [0x2177018] Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.ReceiveStartInteractionOnClient
	// void ReceiveStartInteractionOnClient(TArray<FJunoBuilderToolSelectedActor>& Actors, FGuid& Guid);                        // [0x2177018] Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.ReceiveSpawnedActor
	// void ReceiveSpawnedActor(class AActor* SpawnedActor);                                                                    // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.ReceiveExitInteraction
	// void ReceiveExitInteraction(bool bClearInteractionBehavior);                                                             // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.ReceiveEndInteraction
	// void ReceiveEndInteraction();                                                                                            // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.ReceiveClearInteractionOnRemoteClient
	// void ReceiveClearInteractionOnRemoteClient();                                                                            // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.PlayGameplayAbility
	// void PlayGameplayAbility(class UClass* AbilityClass);                                                                    // [0xb9a56d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.OnRep_ServerSpawnedActors
	// void OnRep_ServerSpawnedActors();                                                                                        // [0xb9a56ac] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.IsRunningOnOwningClient
	// bool IsRunningOnOwningClient();                                                                                          // [0xb9a4d4c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.GetSelectionGUID
	// FGuid GetSelectionGUID();                                                                                                // [0x9fc344c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.GetSelectedActors
	// TArray<FJunoBuilderToolSelectedActor> GetSelectedActors();                                                               // [0xb9a4cbc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.GetPlayerController
	// class APlayerController* GetPlayerController();                                                                          // [0xb9a45e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.GetInstigator
	// class APawn* GetInstigator();                                                                                            // [0xb9a4490] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.GetFortPlayerController
	// class AFortPlayerController* GetFortPlayerController();                                                                  // [0xb9a446c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.GetBuilderTool
	// class AJunoBuilderTool* GetBuilderTool();                                                                                // [0xb9a4448] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.ClientOnServerSpawnSelectedActorsFailed
	// void ClientOnServerSpawnSelectedActorsFailed(TArray<FName> FailedNames);                                                 // [0xb9a3ad8] Final|Net|NetReliableNative|Event|Private|NetClient 
};

/// Class /Script/JunoGameNative.JunoBuildingActor
/// Size: 0x0290 (0x000C10 - 0x000EA0)
class AJunoBuildingActor : public AJunoBuildingProp
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3744;

public:
	SMember(FVector)                                   GridSizeOverride                                            OFFSET(getStruct<T>, {0xC30, 24, 0, 0})
	SMember(FJunoBuildingBehaviorGridLimits)           GridOffsetLimits                                            OFFSET(getStruct<T>, {0xC48, 16, 0, 0})
	SMember(FJunoBuilderToolInteractionActorClassSet)  OverlappableClasses                                         OFFSET(getStruct<T>, {0xC58, 160, 0, 0})
	SMember(FJunoBuilderToolInteractionActorClassSet)  SupportableClasses                                          OFFSET(getStruct<T>, {0xCF8, 160, 0, 0})
	CMember(class UJunoConnectivityComponent*)         Connectivity                                                OFFSET(get<T>, {0xD98, 8, 0, 0})
	CMember(class UJunoGeometryCollectionAssemblerComponent*) GeometryCollectionAssemblerComponent                 OFFSET(get<T>, {0xDA0, 8, 0, 0})
	SMember(FTransform)                                BuildingPivotOffset                                         OFFSET(getStruct<T>, {0xDB0, 96, 0, 0})
	SMember(FVector)                                   BuildingGridSnapOffset                                      OFFSET(getStruct<T>, {0xE10, 24, 0, 0})
	CMember(TArray<FJunoBuildingSnapEntry>)            SnapEntries                                                 OFFSET(get<T>, {0xE28, 16, 0, 0})
	CMember(TArray<FJunoBuildingActorOverlapAction>)   OverlapActions                                              OFFSET(get<T>, {0xE38, 16, 0, 0})
	CMember(TMap<FName, UClass*>)                      PreviewComponentTemplates                                   OFFSET(get<T>, {0xE48, 80, 0, 0})
	DMember(bool)                                      bCanRegenHealth                                             OFFSET(get<bool>, {0xE98, 1, 1, 0})
	DMember(bool)                                      bProcessOverlaps                                            OFFSET(get<bool>, {0xE99, 1, 0, 0})
	DMember(bool)                                      bShouldPersist                                              OFFSET(get<bool>, {0xE9A, 1, 0, 0})
	DMember(bool)                                      bForceOverrideDestroyFoliageWhenPlaced                      OFFSET(get<bool>, {0xE9B, 1, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoBuildingActor.SetCanEverAffectNavigation
	// void SetCanEverAffectNavigation(bool bCanEverAffectNavigation, class UActorComponent* TargetActorComponent);             // [0xa9d8184] Final|Native|Protected|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingActor.ReceiveCustomOverlapAction
	// bool ReceiveCustomOverlapAction(FJunoBuildingMultiOverlapResult& OverlapResult, class UPrimitiveComponent* PrimitiveComp); // [0x2177018] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingActor.OnRep_bForceOverrideDestroyFoliageWhenPlaced
	// void OnRep_bForceOverrideDestroyFoliageWhenPlaced();                                                                     // [0xb9ea324] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoBuildingActor.OnPlacedInWorld
	// void OnPlacedInWorld(bool bFinalize, TArray<FJunoBuilderToolSupportActorComponentPair>& SupportCandidates);              // [0xb9e9c30] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoBuildingAssociatedItemInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoBuildingAssociatedItemInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoBuildingAssociatedItemInterface.CanRemoveAssociatedItemFromInventory
	// bool CanRemoveAssociatedItemFromInventory();                                                                             // [0x2a50c94] Native|Event|Public|BlueprintEvent|Const 
};

/// Class /Script/JunoGameNative.JunoBuildingBehaviorBase
/// Size: 0x0330 (0x000250 - 0x000580)
class UJunoBuildingBehaviorBase : public UJunoBuilderToolInteractionBehavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1408;

public:
	CMember(class UClass*)                             PreviewerClass                                              OFFSET(get<T>, {0x280, 8, 0, 0})
	SMember(FJunoBuildingPreviewParams)                DefaultPreviewParams                                        OFFSET(getStruct<T>, {0x288, 16, 0, 0})
	CMember(class AJunoBuildingPreviewer*)             Previewer_Internal                                          OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(EJunoBuildingBehaviorState)                BuildingState                                               OFFSET(get<T>, {0x2A0, 1, 0, 0})
	SMember(FGameplayTagContainer)                     BuildingStateTags                                           OFFSET(getStruct<T>, {0x2A8, 32, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnBuildingStateChanged                                      OFFSET(getStruct<T>, {0x2C8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnBuildingStateTagsChanged                                  OFFSET(getStruct<T>, {0x2D8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEnterPreviewMode                                          OFFSET(getStruct<T>, {0x2E8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnExitPreviewMode                                           OFFSET(getStruct<T>, {0x2F8, 16, 0, 0})
	SMember(FJunoInputMapping)                         BuildPreviewModeInputMapping                                OFFSET(getStruct<T>, {0x308, 16, 0, 0})
	CMember(class UInputAction*)                       BuildingPreviewModeCameraRotationAction                     OFFSET(get<T>, {0x318, 8, 0, 0})
	SMember(FTransform)                                SelectionToWorld                                            OFFSET(getStruct<T>, {0x320, 96, 0, 0})
	SMember(FTransform)                                TargetSelectionToWorld                                      OFFSET(getStruct<T>, {0x380, 96, 0, 0})
	SMember(FTransform)                                SmoothedSelectionToWorld                                    OFFSET(getStruct<T>, {0x3E0, 96, 0, 0})
	SMember(FTransform)                                SelectionToBasis                                            OFFSET(getStruct<T>, {0x440, 96, 0, 0})
	SMember(FTransform)                                InterpolationBasis                                          OFFSET(getStruct<T>, {0x4A0, 96, 0, 0})
	DMember(float)                                     LocationLerpAlpha                                           OFFSET(get<float>, {0x500, 4, 0, 0})
	DMember(float)                                     RotationLerpAlpha                                           OFFSET(get<float>, {0x504, 4, 0, 0})
	DMember(bool)                                      bIsCurrentlyInPreviewMode                                   OFFSET(get<bool>, {0x509, 1, 0, 0})
	CMember(EJunoBuildModeType)                        CurrentBuildMode                                            OFFSET(get<T>, {0x50A, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPositionInterpStart                                       OFFSET(getStruct<T>, {0x510, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPositionInterpEnd                                         OFFSET(getStruct<T>, {0x520, 16, 0, 0})
	SMember(FGameplayTagQuery)                         SpatialInterfaceSelectionQuery                              OFFSET(getStruct<T>, {0x530, 72, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.SetTargetSelectionToWorld
	// void SetTargetSelectionToWorld(FTransform& NewSelectionToWorld);                                                         // [0xb9ea954] Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.SetTargetSelectionRotation
	// void SetTargetSelectionRotation(FQuat& NewRotation);                                                                     // [0xb9ea8c0] Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.SetTargetSelectionLocation
	// void SetTargetSelectionLocation(FVector& NewLocation);                                                                   // [0xb9ea7ec] Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.SetSmoothedSelectionToWorld
	// void SetSmoothedSelectionToWorld(FTransform& NewSmoothedSelectionToWorld);                                               // [0xb9ea6b4] Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.SetInterpolationBasis
	// void SetInterpolationBasis(FTransform& NewInterpolationBasis);                                                           // [0xb9ea5b4] Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.SetDisabled
	// void SetDisabled(bool bShouldBeDisabled);                                                                                // [0xb9ea45c] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.ReceivePositionInterpStart
	// void ReceivePositionInterpStart();                                                                                       // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.ReceivePositionInterpEnd
	// void ReceivePositionInterpEnd();                                                                                         // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.ReceiveBuildingStateChanged
	// void ReceiveBuildingStateChanged(EJunoBuildingBehaviorState PreviousState, EJunoBuildingBehaviorState NewState);         // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.IsDisabled
	// bool IsDisabled();                                                                                                       // [0xb9e9b50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.HandleBuildModeChanged
	// void HandleBuildModeChanged(FJunoEvent_BuildingModeChanged& Event);                                                      // [0xb9e9a4c] Final|Native|Protected|HasOutParms 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.GetTargetSelectionToWorld
	// FTransform GetTargetSelectionToWorld();                                                                                  // [0xb9e9548] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.GetSelectionToWorld
	// FTransform GetSelectionToWorld();                                                                                        // [0xb9e93f8] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.GetPreviewWorldBounds
	// FBox GetPreviewWorldBounds();                                                                                            // [0xb9e9384] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.GetPreviewLocalBounds
	// FBox GetPreviewLocalBounds();                                                                                            // [0xb9e933c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.GetPreviewer
	// class AJunoBuildingPreviewer* GetPreviewer();                                                                            // [0x6301550] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.GetDefaultPreviewParams
	// FJunoBuildingPreviewParams GetDefaultPreviewParams();                                                                    // [0xb9e8fa4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.GetBuildingStateTags
	// FGameplayTagContainer GetBuildingStateTags();                                                                            // [0xb9e8db4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.GetBuildingState
	// EJunoBuildingBehaviorState GetBuildingState();                                                                           // [0xabb27a4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.CanSelectedActorsBePlaced
	// bool CanSelectedActorsBePlaced(TArray<FJunoBuilderToolSelectedActor>& InSelectedActors, FTransform& InSelectionToWorld, FGameplayTagContainer& OutBuildingStateTags); // [0xb9e8440] Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.CanPlaceSelectedActors
	// bool CanPlaceSelectedActors(FGameplayTagContainer& OutBuildingStateTags);                                                // [0xb9e836c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoBuildingBehavior
/// Size: 0x0CD0 (0x000580 - 0x001250)
class UJunoBuildingBehavior : public UJunoBuildingBehaviorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4688;

public:
	CMember(class UInputAction*)                       RotateInputAction                                           OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(class UInputAction*)                       NudgeInputAction                                            OFFSET(get<T>, {0x580, 8, 0, 0})
	CMember(class UInputAction*)                       ToggleNudgeInputAction                                      OFFSET(get<T>, {0x588, 8, 0, 0})
	CMember(class UInputAction*)                       AdjacencyInputAction                                        OFFSET(get<T>, {0x590, 8, 0, 0})
	CMember(class UInputAction*)                       SnapToggleInputAction                                       OFFSET(get<T>, {0x598, 8, 0, 0})
	DMember(double)                                    RotationStep                                                OFFSET(get<double>, {0x5A0, 8, 0, 0})
	DMember(float)                                     MaxSelectionDistance                                        OFFSET(get<float>, {0x5A8, 4, 0, 0})
	DMember(float)                                     MaxSelectionDistanceZ                                       OFFSET(get<float>, {0x5AC, 4, 0, 0})
	SMember(FVector)                                   MaxConnectivityDistance                                     OFFSET(getStruct<T>, {0x5B0, 24, 0, 0})
	SMember(FJunoBuildingBehaviorGridLimits)           DefaultGridOffsetLimit                                      OFFSET(getStruct<T>, {0x5C8, 16, 0, 0})
	SMember(FVector)                                   PenetrationTolerance                                        OFFSET(getStruct<T>, {0x5D8, 24, 0, 0})
	CMember(class UClass*)                             RotateAbility                                               OFFSET(get<T>, {0x5F0, 8, 0, 0})
	SMember(FJunoBuildingBehaviorOverrides)            Overrides                                                   OFFSET(getStruct<T>, {0x5F8, 608, 0, 0})
	SMember(FQuat)                                     RotationOffset                                              OFFSET(getStruct<T>, {0xD70, 32, 0, 0})
	SMember(FJunoBuildingSnapContext)                  SnapContext                                                 OFFSET(getStruct<T>, {0xDA0, 80, 0, 0})
	SMember(FJunoBuildingConnectivityContext)          ConnectivityContext                                         OFFSET(getStruct<T>, {0xEC0, 672, 0, 0})
	DMember(bool)                                      bEnableAdjacency                                            OFFSET(get<bool>, {0x1160, 1, 0, 0})
	DMember(bool)                                      bEnableSnapPlacement                                        OFFSET(get<bool>, {0x1161, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnToggleSnapping                                            OFFSET(getStruct<T>, {0x1168, 16, 0, 0})
	SMember(FIntPoint)                                 GridOffset                                                  OFFSET(getStruct<T>, {0x1178, 8, 0, 0})
	SMember(FQuat)                                     GridOffsetControlRotation                                   OFFSET(getStruct<T>, {0x1180, 32, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPlacementTypeChanged                                      OFFSET(getStruct<T>, {0x11A0, 16, 0, 0})
	SMember(FJunoBuildingBehaviorStateContext)         CachedBuildingStateContext                                  OFFSET(getStruct<T>, {0x11B0, 48, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnBuildingStateContextChanged                               OFFSET(getStruct<T>, {0x11E0, 16, 0, 0})
	DMember(double)                                    LastTriggerRequestedTimestamp                               OFFSET(get<double>, {0x11F0, 8, 0, 0})
	DMember(double)                                    LastTriggerTimestamp                                        OFFSET(get<double>, {0x11F8, 8, 0, 0})
	DMember(bool)                                      bAdhesionNeedsReset                                         OFFSET(get<bool>, {0x1200, 1, 0, 0})
	SMember(FVector)                                   LastPawnLocationForSmoothing                                OFFSET(getStruct<T>, {0x1208, 24, 0, 0})
	SMember(FRotator)                                  LastCameraRotationForSmoothing                              OFFSET(getStruct<T>, {0x1220, 24, 0, 0})
	DMember(float)                                     PlayerMotionAmount                                          OFFSET(get<float>, {0x1238, 4, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoBuildingBehavior.ToggleAdjacency
	// void ToggleAdjacency();                                                                                                  // [0xb9eab54] Final|Native|Private|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.SetGridOffset
	// void SetGridOffset(FIntPoint& NewOffset);                                                                                // [0xb9ea52c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.RotateSelection
	// void RotateSelection(double Delta);                                                                                      // [0xb9ea354] Final|Native|Private|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.ReceiveSnappingEnabled
	// void ReceiveSnappingEnabled();                                                                                           // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.ReceiveSnappingDisabled
	// void ReceiveSnappingDisabled();                                                                                          // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.ReceiveRotateSelection
	// void ReceiveRotateSelection();                                                                                           // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.ReceivePositionChangedGridCell
	// void ReceivePositionChangedGridCell(FVector& GridCellLocation);                                                          // [0x2177018] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.ReceiveNudgeInputAction
	// void ReceiveNudgeInputAction(bool bOffsetChanged);                                                                       // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.ReceivedFailedInteraction
	// void ReceivedFailedInteraction();                                                                                        // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.IsAdjacencyEnabled
	// bool IsAdjacencyEnabled();                                                                                               // [0xb9e9b38] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.HasAnySnapEntries
	// bool HasAnySnapEntries();                                                                                                // [0xb9e9ae8] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.GetWorldSpacePivotOffset
	// FVector GetWorldSpacePivotOffset();                                                                                      // [0xb9e99f4] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.GetWorldSpaceGridOffsetLimits
	// FVector2D GetWorldSpaceGridOffsetLimits(FVector2D& MinOffset, FVector2D& MaxOffset);                                     // [0xb9e98fc] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.GetWorldSpaceGridOffset
	// FVector2D GetWorldSpaceGridOffset();                                                                                     // [0xb9e98b0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.GetTargetTraceResult
	// FHitResult GetTargetTraceResult();                                                                                       // [0xb9e95a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.GetSnapContext
	// FJunoBuildingSnapContext GetSnapContext();                                                                               // [0xb9e9450] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.GetPivotOffset
	// FVector GetPivotOffset();                                                                                                // [0xb9e924c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.GetPenetrationTolerance
	// FVector GetPenetrationTolerance();                                                                                       // [0xb9e91ec] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.GetLastPlacementResult
	// FJunoBuildingPlacementResult GetLastPlacementResult();                                                                   // [0xb9e9118] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.GetGridSnapOffset
	// FVector GetGridSnapOffset();                                                                                             // [0xb9e90c0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.GetGridSize
	// FVector GetGridSize();                                                                                                   // [0xb9e9060] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.GetGridOffsetLimits
	// FJunoBuildingBehaviorGridLimits GetGridOffsetLimits();                                                                   // [0xb9e9044] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.GetGridOffset
	// FIntPoint GetGridOffset();                                                                                               // [0xb9e8ffc] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.GetConnectivityContext
	// FJunoBuildingConnectivityContext GetConnectivityContext();                                                               // [0xb9e8e14] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.GetConfigData
	// FJunoBuildingBehaviorInteractionRow GetConfigData();                                                                     // [0xb9e8df8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.GetBuildingStateContext
	// FJunoBuildingBehaviorStateContext GetBuildingStateContext();                                                             // [0xb9e8d98] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.AddGridOffset
	// void AddGridOffset(FIntPoint& OffsetDelta);                                                                              // [0xb9e7ff8] Final|Native|Private|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.AddCameraSpaceGridOffset
	// void AddCameraSpaceGridOffset(FIntPoint& Delta);                                                                         // [0xb9e7f70] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoBuildingBehaviorSelectedActorInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoBuildingBehaviorSelectedActorInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoBuildingBehaviorSelectedActorInterface.UpdateNoTargetPlacement
	// void UpdateNoTargetPlacement(FTransform& NewSelectionToWorld, FTransform& NewUnsnappedSelectionToWorld, FTransform& NewBasis, FTransform& ActorToSelection, FJunoBuildingPlacementResult& PlacementResult, class UJunoBuildingBehavior* Behavior); // [0xb9eab68] Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorSelectedActorInterface.ShouldMinDistanceIncludeBounds
	// bool ShouldMinDistanceIncludeBounds();                                                                                   // [0x66def58] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorSelectedActorInterface.ShouldIgnoreOverlaps
	// bool ShouldIgnoreOverlaps(class UPrimitiveComponent* PrimComp, class AActor* OverlappingActor);                          // [0xb9eaa8c] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorSelectedActorInterface.ShouldBeGridAligned
	// bool ShouldBeGridAligned();                                                                                              // [0xa7e41d4] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorSelectedActorInterface.GetRotationOffset
	// FRotator GetRotationOffset();                                                                                            // [0x2b2468c] Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorSelectedActorInterface.GetPivotOffset
	// FVector GetPivotOffset();                                                                                                // [0xb9e9214] Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorSelectedActorInterface.GetOverlappableClasses
	// FJunoBuilderToolInteractionActorClassSet GetOverlappableClasses();                                                       // [0xb9e9188] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorSelectedActorInterface.GetMinDistance
	// float GetMinDistance();                                                                                                  // [0x8ec6a24] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorSelectedActorInterface.GetGridSnapOffset
	// FVector GetGridSnapOffset();                                                                                             // [0xb9e9088] Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorSelectedActorInterface.GetGridSize
	// FVector GetGridSize();                                                                                                   // [0xaed7380] Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorSelectedActorInterface.GetGridOffsetLimits
	// FJunoBuildingBehaviorGridLimits GetGridOffsetLimits();                                                                   // [0xb9e9014] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorSelectedActorInterface.GetFloatingValidationDirections
	// TArray<EJunoContactDirection> GetFloatingValidationDirections();                                                         // [0xb9e8fc0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorSelectedActorInterface.GetCoordinateBasis
	// FTransform GetCoordinateBasis();                                                                                         // [0xb9e8e30] Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorSelectedActorInterface.CanSupport
	// bool CanSupport(class UClass* ActorClass);                                                                               // [0xb9e8c98] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorSelectedActorInterface.CanPlaceSelectedActor
	// bool CanPlaceSelectedActor(class UJunoBuildingBehavior* Behavior, FTransform& ToWorld, FGameplayTagContainer& OutBuildingStateTags); // [0xb9e81ec] Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoBuildingBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoBuildingBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoBuildingBlueprintLibrary.GetUnitGridSize
	// FVector GetUnitGridSize();                                                                                               // [0xb9e9870] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoBuildingBlueprintLibrary.GetTargetTransform
	// FTransform GetTargetTransform(FJunoBuildingPlacementResult& PlacementResult);                                            // [0xb9e977c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoBuildingBlueprintLibrary.GetTargetTraceResult
	// FHitResult GetTargetTraceResult(FJunoBuildingPlacementResult& PlacementResult);                                          // [0xb9e9644] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoBuildingBlueprintLibrary.GetSupportCandidates
	// TArray<AActor*> GetSupportCandidates(FJunoBuilderToolSelectionSpawnParams& Params);                                      // [0xb9e946c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoBuildingBlueprintLibrary.GetPlacementType
	// EJunoBuildingPlacementType GetPlacementType(FJunoBuildingPlacementResult& PlacementResult);                              // [0xb9e9280] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoBuildingBlueprintLibrary.GetCoordinateBasis
	// FTransform GetCoordinateBasis(FJunoBuildingPlacementResult& PlacementResult);                                            // [0xb9e8eb0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/JunoGameNative.JunoBuildingGameplayActor
/// Size: 0x0200 (0x000980 - 0x000B80)
class AJunoBuildingGameplayActor : public ABuildingGameplayActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2944;

public:
	SMember(FVector)                                   GridSizeOverride                                            OFFSET(getStruct<T>, {0x9C0, 24, 0, 0})
	SMember(FTransform)                                BuildingPivotOffset                                         OFFSET(getStruct<T>, {0x9E0, 96, 0, 0})
	SMember(FVector)                                   BuildingGridSnapOffset                                      OFFSET(getStruct<T>, {0xA40, 24, 0, 0})
	SMember(FJunoBuildingBehaviorGridLimits)           GridOffsetLimits                                            OFFSET(getStruct<T>, {0xA58, 16, 0, 0})
	SMember(FJunoBuilderToolInteractionActorClassSet)  OverlappableClasses                                         OFFSET(getStruct<T>, {0xA68, 160, 0, 0})
	CMember(class UFortItemDefinition*)                AssociatedItem                                              OFFSET(get<T>, {0xB08, 8, 0, 0})
	CMember(TMap<FName, UClass*>)                      PreviewComponentTemplates                                   OFFSET(get<T>, {0xB10, 80, 0, 0})
	DMember(bool)                                      bShouldPersist                                              OFFSET(get<bool>, {0xB60, 1, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoBuildingGameplayActor.SetAssociatedItem
	// void SetAssociatedItem(class UFortItemDefinition* Item);                                                                 // [0xb9ea3d8] Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingGameplayActor.OnPhysicsStateChanged
	// void OnPhysicsStateChanged(class UPrimitiveComponent* PrimitiveComponent, EComponentPhysicsStateChange StateChange);     // [0xb9e9b6c] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoBuildingGameplayActor.HasBeenMigrated
	// bool HasBeenMigrated();                                                                                                  // [0xb9e9b04] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingGameplayActor.GetAssociatedItem
	// class UFortItemDefinition* GetAssociatedItem();                                                                          // [0xb9e8d40] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingGameplayActor.BlueprintCanDropResourceWithTagOnDeath
	// bool BlueprintCanDropResourceWithTagOnDeath(FGameplayTag ResourceTag);                                                   // [0xb9e80a8] Native|Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingGameplayActor.BlueprintCanDropResourceOnDeath
	// bool BlueprintCanDropResourceOnDeath();                                                                                  // [0x883fc98] Native|Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingGameplayActor.BlueprintCanDropItemOnDestroy
	// bool BlueprintCanDropItemOnDestroy();                                                                                    // [0xb9e8080] Native|Event|Public|BlueprintEvent|Const 
};

/// Class /Script/JunoGameNative.JunoBuildingSnapEditorComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UJunoBuildingSnapEditorComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(TArray<FJunoBuildingSnapEntry>)            SnapEntries                                                 OFFSET(get<T>, {0xA0, 16, 0, 0})
	DMember(bool)                                      bShowUnselectedTargetingAreas                               OFFSET(get<bool>, {0xB0, 1, 0, 0})
};

/// Class /Script/JunoGameNative.JunoBuildingSnappingLocation
/// Size: 0x0030 (0x000290 - 0x0002C0)
class UJunoBuildingSnappingLocation : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	SMember(FGameplayTagContainer)                     LocationTags                                                OFFSET(getStruct<T>, {0x290, 32, 0, 0})
	CMember(TArray<FJunoBuildingSnapEntryBase>)        SnapEntries                                                 OFFSET(get<T>, {0x2B0, 16, 0, 0})
};

/// Class /Script/JunoGameNative.JunoDamageableBuildingInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoDamageableBuildingInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoDamageableBuildingInterface.OnBuildingHandleOutOfHealth
	// void OnBuildingHandleOutOfHealth(FGameplayEffectContextHandle& EffectContext, class AController* EventInstigator, class AActor* DamageCauser, FGameplayTagContainer& InTags); // [0xba2d5f8] RequiredAPI|Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoDamageableBuildingInterface.OnBuildingHandleDamage
	// void OnBuildingHandleDamage(class AActor* DamageCauser);                                                                 // [0x80e4e20] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/JunoGameNative.JunoGuidedBuildingActor
/// Size: 0x06E0 (0x000C10 - 0x0012F0)
class AJunoGuidedBuildingActor : public AJunoBuildingProp
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4848;

public:
	SMember(FMulticastInlineDelegate)                  OnCurrentStageUpdateDelegate                                OFFSET(getStruct<T>, {0xC30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnStageUpdateDelegate                                       OFFSET(getStruct<T>, {0xC40, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnStageCompleteDelegate                                     OFFSET(getStruct<T>, {0xC50, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSectionCompleteDelegate                                   OFFSET(getStruct<T>, {0xC60, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSetCompleteDelegate                                       OFFSET(getStruct<T>, {0xC70, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSetUnfinishedDelegate                                     OFFSET(getStruct<T>, {0xC80, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCurrentStageChange                                        OFFSET(getStruct<T>, {0xC90, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSnapsUpdatedDelegate                                      OFFSET(getStruct<T>, {0xCA0, 16, 0, 0})
	SMember(FTransform)                                BuildingPivotOffset                                         OFFSET(getStruct<T>, {0xCC0, 96, 0, 0})
	SMember(FVector)                                   BuildingGridSnapOffset                                      OFFSET(getStruct<T>, {0xD20, 24, 0, 0})
	SMember(FJunoBuilderToolInteractionActorClassSet)  OverlappableClasses                                         OFFSET(getStruct<T>, {0xD38, 160, 0, 0})
	SMember(FVector)                                   GridSizeOverride                                            OFFSET(getStruct<T>, {0xDD8, 24, 0, 0})
	SMember(FJunoBuildingBehaviorGridLimits)           GridOffsetLimits                                            OFFSET(getStruct<T>, {0xDF0, 16, 0, 0})
	DMember(float)                                     MinDistanceOverride                                         OFFSET(get<float>, {0xE00, 4, 0, 0})
	CMember(TMap<FName, UClass*>)                      PreviewComponentTemplates                                   OFFSET(get<T>, {0xE08, 80, 0, 0})
	SMember(FGameplayTagContainer)                     DestroyOnPlacementTags                                      OFFSET(getStruct<T>, {0xE58, 32, 0, 0})
	CMember(TArray<FJunoGuidedBuildingData>)           DataArray                                                   OFFSET(get<T>, {0xE78, 16, 0, 0})
	SMember(FJunoGuidedBuildingStateArray)             StateArray                                                  OFFSET(getStruct<T>, {0xE88, 288, 0, 0})
	SMember(FJunoStageKey)                             CurrentStage                                                OFFSET(getStruct<T>, {0xFA8, 8, 0, 0})
	SMember(FJunoGuidedBuildingSetCompleteState)       SetCompleteState                                            OFFSET(getStruct<T>, {0xFB0, 16, 0, 0})
	SMember(FDateTime)                                 TimeStarted                                                 OFFSET(getStruct<T>, {0xFC0, 8, 0, 0})
	SMember(FUniqueNetIdRepl)                          OwningPlayerID                                              OFFSET(getStruct<T>, {0xFC8, 48, 0, 0})
	CMember(TWeakObjectPtr<UMaterial*>)                GuidedBuildingMaterial                                      OFFSET(get<T>, {0xFF8, 32, 0, 0})
	SMember(FJunoGuidedBuildingSetData)                SetData                                                     OFFSET(getStruct<T>, {0x1018, 112, 0, 0})
	DMember(float)                                     LifespanAfterCompletion                                     OFFSET(get<float>, {0x1088, 4, 0, 0})
	DMember(float)                                     LifespanAfterUnfinished                                     OFFSET(get<float>, {0x108C, 4, 0, 0})
	DMember(float)                                     TimeDelayBeforeShowingNewStageGhostBrushes                  OFFSET(get<float>, {0x1090, 4, 0, 0})
	CMember(class AFortPlayerController*)              LocalRegisteredController                                   OFFSET(get<T>, {0x1098, 8, 0, 0})
	SMember(FJunoGuidedBuildingRegisteredPlayerArray)  RegisteredPlayers                                           OFFSET(getStruct<T>, {0x10A0, 328, 0, 0})
	CMember(TWeakObjectPtr<APawn*>)                    AutoCompleteInstigatingPawn                                 OFFSET(get<T>, {0x11E8, 8, 0, 0})
	CMember(class UClass*)                             InteractionComponentClass                                   OFFSET(get<T>, {0x11F0, 8, 0, 0})
	SMember(FScalableFloat)                            FoundationVerticalOffset                                    OFFSET(getStruct<T>, {0x11F8, 40, 0, 0})
	SMember(FGuid)                                     BuildId                                                     OFFSET(getStruct<T>, {0x1220, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr<AActor*>>)           PendingInstantAutoCompleteActors                            OFFSET(get<T>, {0x1230, 16, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.UpdateBlueprintColor
	// void UpdateBlueprintColor(FJunoGuidedBuildingBrushState& BrushState);                                                    // [0x2177018] BlueprintCosmetic|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.ShowSparkleEffect
	// void ShowSparkleEffect();                                                                                                // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.SetupComponent
	// void SetupComponent(class UPrimitiveComponent* PrimComp);                                                                // [0x88752e8] Native|Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.SetToAutoComplete
	// void SetToAutoComplete(class APawn* InInstigator);                                                                       // [0xba2e960] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.OnRep_SetCompleteState
	// void OnRep_SetCompleteState();                                                                                           // [0xba2e2bc] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.OnRep_RegisteredPlayers
	// void OnRep_RegisteredPlayers();                                                                                          // [0xba2e2a8] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.OnRep_CurrentStage
	// void OnRep_CurrentStage(FJunoStageKey OldKeyVal);                                                                        // [0xba2e104] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.OnGhostBrushesVisible
	// void OnGhostBrushesVisible(bool bIsFocused, bool bCanBlendVisibility);                                                   // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.OnGhostBrushesHidden
	// void OnGhostBrushesHidden(bool bCanBlendVisibility);                                                                     // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.OnFilledPieceDied
	// void OnFilledPieceDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* HitComponent, FName BoneName, FVector Momentum); // [0xba2da1c] Final|Native|Protected|HasDefaults 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.OnFilledPieceDestroyed
	// void OnFilledPieceDestroyed(class AActor* Actor);                                                                        // [0xba2d99c] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.IsSetComplete
	// bool IsSetComplete();                                                                                                    // [0xba2d3fc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.IsRecipeInStage
	// bool IsRecipeInStage(FJunoStageKey& InStageKey, FName& Recipe);                                                          // [0xba2d2a8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.IsRecipeInCurrentStage
	// bool IsRecipeInCurrentStage(FName& Recipe);                                                                              // [0xba2d204] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.IsOwningPlayerController
	// bool IsOwningPlayerController(class APlayerController* Controller);                                                      // [0xba2d134] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.HideSparkleEffect
	// void HideSparkleEffect();                                                                                                // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.GetStageUpdate
	// FGuidedBuildingUpdate GetStageUpdate(FJunoStageKey& InKey);                                                              // [0xba2ca70] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.GetSetCompleteState
	// FJunoGuidedBuildingSetCompleteState GetSetCompleteState();                                                               // [0xba2c9e0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.GetRemainingPartsInfoForRecipeInCurrentStage
	// FJunoGuidedBuildRemainingPartsInfo GetRemainingPartsInfoForRecipeInCurrentStage(FName& Recipe);                          // [0xba2c920] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.GetRemainingPartsInfoForRecipe
	// FJunoGuidedBuildRemainingPartsInfo GetRemainingPartsInfoForRecipe(FJunoStageKey& InStageKey, FName& Recipe);             // [0xba2c820] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.GetPartsInStage
	// bool GetPartsInStage(FJunoStageKey& InStageKey, TArray<FJunoGuidedBuildRemainingPartsInfo>& OutArray);                   // [0xba2bfa8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.GetPartsInCurrentStage
	// bool GetPartsInCurrentStage(TArray<FJunoGuidedBuildRemainingPartsInfo>& OutArray);                                       // [0xba2b8ec] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.GetMissingPartsForRecipe
	// FJunoGuidedBuildRemainingPartsInfo GetMissingPartsForRecipe(FName& Recipe);                                              // [0xba2b5f0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.GetMissingParts
	// void GetMissingParts(TArray<FJunoGuidedBuildRemainingPartsInfo>& OutArray);                                              // [0xba2af30] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.GetLatestUpdate
	// FGuidedBuildingUpdate GetLatestUpdate();                                                                                 // [0xba2aeec] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.GetEntryState
	// EJunoGuidedBuildingState GetEntryState(int32_t BuildingDataIndex);                                                       // [0xba2ae18] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoGuidedBuildingBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoGuidedBuildingBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoGuidedBuildingBlueprintLibrary.ShowProgressUpTo
	// void ShowProgressUpTo(FJunoStageKey& InStageKey);                                                                        // [0xba2d414] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGuidedBuildingBlueprintLibrary.ShowAllStages
	// void ShowAllStages();                                                                                                    // [0x32e6c74] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGuidedBuildingBlueprintLibrary.SetStageHidden
	// void SetStageHidden(FJunoStageKey StageKey, bool bHidden);                                                               // [0xba2e784] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGuidedBuildingBlueprintLibrary.SetActorToAutoComplete
	// void SetActorToAutoComplete(class AActor* Actor, bool bAutoComplete);                                                    // [0x80e6a34] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGuidedBuildingBlueprintLibrary.MoveActorToNewStageByName
	// void MoveActorToNewStageByName(FName& ActorName, FJunoStageKey& NewStage);                                               // [0xba2d534] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGuidedBuildingBlueprintLibrary.MoveActorToNewStage
	// void MoveActorToNewStage(class AActor* Actor, FJunoStageKey& NewStage);                                                  // [0xba2d484] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGuidedBuildingBlueprintLibrary.IsolateStage
	// void IsolateStage(FJunoStageKey& InStageKey);                                                                            // [0xba2d414] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGuidedBuildingBlueprintLibrary.HideAllStages
	// void HideAllStages();                                                                                                    // [0x32e6c74] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGuidedBuildingBlueprintLibrary.GetPreviousStage
	// FJunoStageKey GetPreviousStage(FJunoStageKey StageKey);                                                                  // [0xba2b698] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoGuidedBuildingBlueprintLibrary.GetNextStage
	// FJunoStageKey GetNextStage(FJunoStageKey StageKey);                                                                      // [0xba2b698] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoGuidedBuildingBlueprintLibrary.GetJunoGuidedBuildingWorldSettings
	// class AJunoGuidedBuildingSettings* GetJunoGuidedBuildingWorldSettings();                                                 // [0x665ff84] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGuidedBuildingBlueprintLibrary.GetAllStageKeys
	// TArray<FJunoStageKey> GetAllStageKeys();                                                                                 // [0xba2adbc] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/JunoGameNative.JunoGuidedBuildingInteractionComponent
/// Size: 0x0030 (0x0000A0 - 0x0000D0)
class UJunoGuidedBuildingInteractionComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TWeakObjectPtr<AJunoGuidedBuildingActor*>) ParentBuilding                                              OFFSET(get<T>, {0xA8, 8, 0, 0})
	SMember(FText)                                     InteractionText                                             OFFSET(getStruct<T>, {0xB0, 24, 0, 0})
	DMember(float)                                     InteractRatingAdjustment                                    OFFSET(get<float>, {0xC8, 4, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoGuidedBuildingInteractionComponent.GetInteractionText
	// FText GetInteractionText();                                                                                              // [0xba2aea4] Native|Event|Protected|BlueprintEvent|Const 
};

/// Class /Script/JunoGameNative.JunoGuidedBuildingSettings
/// Size: 0x01E0 (0x000290 - 0x000470)
class AJunoGuidedBuildingSettings : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1136;

public:
	DMember(float)                                     ZLevelSize                                                  OFFSET(get<float>, {0x290, 4, 0, 0})
	CMember(TArray<FGameplayTag>)                      SortRankTags                                                OFFSET(get<T>, {0x298, 16, 0, 0})
	SMember(FJunoGuidedBuildingSetEditorData)          GeneratedData                                               OFFSET(getStruct<T>, {0x2A8, 128, 0, 0})
	SMember(FString)                                   PrimaryPluginName                                           OFFSET(getStruct<T>, {0x328, 16, 0, 0})
	SMember(FName)                                     PrimaryPlaylist                                             OFFSET(getStruct<T>, {0x338, 4, 0, 0})
	CMember(TMap<UClass*, FName>)                      ClassToRecipeMap                                            OFFSET(get<T>, {0x340, 80, 0, 0})
	SMember(FName)                                     CraftingFormulaRegistryType                                 OFFSET(getStruct<T>, {0x390, 4, 0, 0})
	SMember(FGuidedBuildingCachedEditorData)           CurrentState                                                OFFSET(getStruct<T>, {0x398, 200, 0, 0})
	CMember(TArray<FJunoBuildingEditorActorEntry>)     ActorList                                                   OFFSET(get<T>, {0x460, 16, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoGuidedBuildingSettings.StartGeneratingGuidedBuildingAssets
	// void StartGeneratingGuidedBuildingAssets();                                                                              // [0xba2e9fc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGuidedBuildingSettings.SetActorToAutoComplete
	// void SetActorToAutoComplete(class AActor* Actor, bool bAutoComplete);                                                    // [0x80e6a34] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGuidedBuildingSettings.MoveActorToNewStageByName
	// void MoveActorToNewStageByName(FName& ActorName, FJunoStageKey& NewStage);                                               // [0xba2d534] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGuidedBuildingSettings.MoveActorToNewStage
	// void MoveActorToNewStage(class AActor* Actor, FJunoStageKey& NewStage);                                                  // [0xba2d484] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGuidedBuildingSettings.GetAllStageKeys
	// TArray<FJunoStageKey> GetAllStageKeys();                                                                                 // [0xba2ada0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGuidedBuildingSettings.GenerateNewStageData
	// void GenerateNewStageData();                                                                                             // [0xba2ad44] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoISMPoolRenderer
/// Size: 0x01D8 (0x000028 - 0x000200)
class UJunoISMPoolRenderer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	CMember(class AGeometryCollectionISMPoolActor*)    ISMPoolActor                                                OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UGeometryCollectionISMPoolComponent*) ISMPoolComponentOverride                                   OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(TArray<class UAtomModelAssetUserData*>)    AtomUserDatas                                               OFFSET(get<T>, {0x1E0, 16, 0, 0})
};

/// Class /Script/JunoGameNative.JunoBuildingRenderComponent
/// Size: 0x0000 (0x000290 - 0x000290)
class UJunoBuildingRenderComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
};

/// Class /Script/JunoGameNative.JunoISMPoolRendererSettings
/// Size: 0x0048 (0x000030 - 0x000078)
class UJunoISMPoolRendererSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(int32_t)                                   MergedMeshMinLod                                            OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	DMember(float)                                     MergedMeshLodScale                                          OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   MergedMeshPropMinLod                                        OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(int32_t)                                   MergedMeshCullDistance                                      OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(int32_t)                                   MergedMeshPropCullDistance                                  OFFSET(get<int32_t>, {0x44, 4, 0, 0})
	DMember(bool)                                      bMergedMeshAffectDistanceFieldLighting                      OFFSET(get<bool>, {0x48, 1, 0, 0})
	DMember(bool)                                      bMergedMeshOverrideCastFarShadows                           OFFSET(get<bool>, {0x49, 1, 0, 0})
	DMember(bool)                                      bCommonPartsEnable                                          OFFSET(get<bool>, {0x4A, 1, 0, 0})
	DMember(int32_t)                                   CommonPartsTypeMask                                         OFFSET(get<int32_t>, {0x4C, 4, 0, 0})
	DMember(bool)                                      bCommonPartsEnableShadows                                   OFFSET(get<bool>, {0x50, 1, 0, 0})
	DMember(int32_t)                                   CommonPartsCullDistanceStart                                OFFSET(get<int32_t>, {0x54, 4, 0, 0})
	DMember(int32_t)                                   CommonPartsCullDistanceEnd                                  OFFSET(get<int32_t>, {0x58, 4, 0, 0})
	DMember(int32_t)                                   CommonPartsCullDistanceBoost                                OFFSET(get<int32_t>, {0x5C, 4, 0, 0})
	DMember(int32_t)                                   CommonPartsCellSize                                         OFFSET(get<int32_t>, {0x60, 4, 0, 0})
	DMember(bool)                                      bInstancesEnable                                            OFFSET(get<bool>, {0x64, 1, 0, 0})
	DMember(int32_t)                                   InstancesMinLod                                             OFFSET(get<int32_t>, {0x68, 4, 0, 0})
	DMember(float)                                     InstancesLodScale                                           OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(int32_t)                                   InstancesCullDistance                                       OFFSET(get<int32_t>, {0x70, 4, 0, 0})
	DMember(bool)                                      bInstancesEnableShadows                                     OFFSET(get<bool>, {0x74, 1, 0, 0})
	DMember(bool)                                      bInstancesPreallocateComponents                             OFFSET(get<bool>, {0x75, 1, 0, 0})
	DMember(bool)                                      bInstancesAllowRemove                                       OFFSET(get<bool>, {0x76, 1, 0, 0})
};

/// Class /Script/JunoGameNative.JunoCommonPartsDataMappings
/// Size: 0x0050 (0x000030 - 0x000080)
class UJunoCommonPartsDataMappings : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TMap<TWeakObjectPtr<UStaticMesh*>, FJunoCommonPartsSettings>) Mapping                                  OFFSET(get<T>, {0x30, 80, 0, 0})
};

/// Class /Script/JunoGameNative.JunoPhysicsToySpawnerActor
/// Size: 0x0020 (0x000EA0 - 0x000EC0)
class AJunoPhysicsToySpawnerActor : public AJunoBuildingActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3776;

public:
	DMember(bool)                                      bUseOffsetOrientation                                       OFFSET(get<bool>, {0xEA0, 1, 1, 0})
	CMember(TArray<EJunoContactDirection>)             FloatingValidationDirections                                OFFSET(get<T>, {0xEA8, 16, 0, 0})
};

/// Class /Script/JunoGameNative.JunoPickupComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UJunoPickupComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FDataTableRowHandle)                       CraftingSourceTable                                         OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	CMember(class UDataTable*)                         ResourceDataTable                                           OFFSET(get<T>, {0xB0, 8, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoPickupComponent.PickupBuildingctor
	// void PickupBuildingctor(class AFortPlayerController* FPC);                                                               // [0x5fffda8] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoResourceComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UJunoResourceComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(class UDataTable*)                         BuildingTagDataTable                                        OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(class UDataTable*)                         ResourceDataTable                                           OFFSET(get<T>, {0xA8, 8, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoResourceComponent.HandleBuildingDamaged
	// void HandleBuildingDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0xba2cb34] Final|Native|Private|HasDefaults 
};

/// Class /Script/JunoGameNative.JunoStorageChest
/// Size: 0x0230 (0x000C10 - 0x000E40)
class AJunoStorageChest : public AJunoBuildingProp
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3648;

public:
	CMember(class UGeometryCollectionComponent*)       GeometryCollectionComponent                                 OFFSET(get<T>, {0xC28, 8, 0, 0})
	CMember(class UJunoInventoryComponent*)            ChestInventoryComponent                                     OFFSET(get<T>, {0xC30, 8, 0, 0})
	CMember(class UJunoCampMembershipActorComponent*)  CampMembershipComponent                                     OFFSET(get<T>, {0xC38, 8, 0, 0})
	DMember(bool)                                      bTakeAllItemsOnInteract                                     OFFSET(get<bool>, {0xC40, 1, 0, 0})
	DMember(bool)                                      bDestroyOnInteract                                          OFFSET(get<bool>, {0xC41, 1, 0, 0})
	SMember(FVector)                                   GridSizeOverride                                            OFFSET(getStruct<T>, {0xC48, 24, 0, 0})
	SMember(FTransform)                                BuildingPivotOffset                                         OFFSET(getStruct<T>, {0xC60, 96, 0, 0})
	SMember(FVector)                                   BuildingGridSnapOffset                                      OFFSET(getStruct<T>, {0xCC0, 24, 0, 0})
	SMember(FJunoBuildingBehaviorGridLimits)           GridOffsetLimits                                            OFFSET(getStruct<T>, {0xCD8, 16, 0, 0})
	SMember(FJunoBuilderToolInteractionActorClassSet)  OverlappableClasses                                         OFFSET(getStruct<T>, {0xCE8, 160, 0, 0})
	CMember(TMap<FName, UClass*>)                      PreviewComponentTemplates                                   OFFSET(get<T>, {0xD88, 80, 0, 0})
	SMember(FUniqueNetIdRepl)                          OwnerPlayerId                                               OFFSET(getStruct<T>, {0xDD8, 48, 0, 0})
	SMember(FName)                                     BaseLootTierGroup                                           OFFSET(getStruct<T>, {0xE08, 4, 0, 0})
	DMember(float)                                     DefaultInteractTime                                         OFFSET(get<float>, {0xE0C, 4, 0, 0})
	DMember(float)                                     PlayerPlacedInteractTime                                    OFFSET(get<float>, {0xE10, 4, 0, 0})
	DMember(float)                                     SearchedInteractTime                                        OFFSET(get<float>, {0xE14, 4, 0, 0})
	DMember(bool)                                      bUsePlayerPlacedInteractionTime                             OFFSET(get<bool>, {0xE18, 1, 0, 0})
	CMember(class UStaticMesh*)                        SearchedMesh                                                OFFSET(get<T>, {0xE20, 8, 0, 0})
	DMember(float)                                     LootTossSpeed                                               OFFSET(get<float>, {0xE28, 4, 0, 0})
	DMember(float)                                     LootTossAngle                                               OFFSET(get<float>, {0xE2C, 4, 0, 0})
	DMember(bool)                                      bChestSearched                                              OFFSET(get<bool>, {0xE30, 1, 0, 0})
	DMember(bool)                                      bChestLooted                                                OFFSET(get<bool>, {0xE31, 1, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   LastInteractor                                              OFFSET(get<T>, {0xE34, 8, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoStorageChest.OnRep_ChestSearched
	// void OnRep_ChestSearched();                                                                                              // [0xba2e0e0] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoStorageChest.OnRep_ChestLooted
	// void OnRep_ChestLooted();                                                                                                // [0xba2e090] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoStorageChest.OnPersistentPlayspaceDataLoadEnd
	// void OnPersistentPlayspaceDataLoadEnd(class AJunoPersistentPlayspace* PersistentPlayspace, bool bSuccess);               // [0xba2de98] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoStorageChest.OnInventoryAcquired
	// void OnInventoryAcquired();                                                                                              // [0xba2de84] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoStorageChest.IsChestAlreadySearched
	// bool IsChestAlreadySearched();                                                                                           // [0xba2d11c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoStorageChest.GetOwningPlayerID
	// FUniqueNetIdRepl GetOwningPlayerID();                                                                                    // [0xba2b7d8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoStorageChest.CanInteractWithChest
	// bool CanInteractWithChest(class AFortPawn* FortPawn);                                                                    // [0xba2a2ac] Native|Event|Protected|BlueprintEvent|Const 
	// Function /Script/JunoGameNative.JunoStorageChest.BlueprintOnChestLooted
	// void BlueprintOnChestLooted();                                                                                           // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoStorageChest.BlueprintGetLootTierGroup
	// FName BlueprintGetLootTierGroup(FJunoBiomeInfoQueryResult BiomeInfo);                                                    // [0x2177018] BlueprintAuthorityOnly|Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoStorageChest.BlueprintCanShowInventoryUI
	// bool BlueprintCanShowInventoryUI(FInteractionType& InteractType);                                                        // [0xba2a22c] Native|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoStorageChest.BlueprintAllowSpawnLoot
	// bool BlueprintAllowSpawnLoot(FInteractionType& InteractType);                                                            // [0xba2a22c] Native|Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/JunoGameNative.JunoBuildingPreviewComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UJunoBuildingPreviewComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoBuildingPreviewComponent.ReceiveSet
	// void ReceiveSet();                                                                                                       // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingPreviewComponent.ReceivePlacementStarted
	// void ReceivePlacementStarted();                                                                                          // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingPreviewComponent.ReceiveEnabled
	// void ReceiveEnabled();                                                                                                   // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingPreviewComponent.ReceiveDisabled
	// void ReceiveDisabled();                                                                                                  // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingPreviewComponent.ReceiveCreated
	// void ReceiveCreated();                                                                                                   // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingPreviewComponent.ReceiveCleared
	// void ReceiveCleared();                                                                                                   // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingPreviewComponent.IsSet
	// bool IsSet();                                                                                                            // [0xba2d398] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingPreviewComponent.GetSourceActorClass
	// class UClass* GetSourceActorClass();                                                                                     // [0xba2ca34] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingPreviewComponent.GetPreviewer
	// class AJunoBuildingPreviewer* GetPreviewer();                                                                            // [0xba2c7fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingPreviewComponent.GetOwningPreviewRef
	// FJunoBuildingSelectionPreview GetOwningPreviewRef(bool& bSuccess);                                                       // [0xba2b838] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoBuildingPreviewer
/// Size: 0x0170 (0x000290 - 0x000400)
class AJunoBuildingPreviewer : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1024;

public:
	CMember(TWeakObjectPtr<UClass*>)                   SnapLocationMeshComponentClass                              OFFSET(get<T>, {0x290, 32, 0, 0})
	CMember(class UClass*)                             LoadedSnapLocationMeshComponentClass                        OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(TWeakObjectPtr<UJunoBuildingBehaviorBase*>) OwningBehavior                                             OFFSET(get<T>, {0x2B8, 8, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x2C0, 1, 0, 0})
	CMember(TMap<FGuid, FJunoBuildingSelectionPreview>) PreviewPool                                                OFFSET(get<T>, {0x2C8, 80, 0, 0})
	CMember(TArray<FGuid>)                             MostRecentlyUpdated                                         OFFSET(get<T>, {0x318, 16, 0, 0})
	SMember(FGuid)                                     CurrentlySetPreviewGUID                                     OFFSET(getStruct<T>, {0x328, 16, 0, 0})
	DMember(bool)                                      bHasSetPreview                                              OFFSET(get<bool>, {0x338, 1, 0, 0})
	SMember(FJunoBuildingPlacementPreview)             PlacementPreview                                            OFFSET(getStruct<T>, {0x340, 192, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.SetPreviewVisibility
	// void SetPreviewVisibility(bool bVisible);                                                                                // [0xba2e6ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.SetPreview
	// bool SetPreview(FGuid& Guid);                                                                                            // [0xba2e610] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.ReceiveUpdateSnapEntryPreviews
	// void ReceiveUpdateSnapEntryPreviews(TArray<FJunoBuildingSnapEntryPreview>& Previews);                                    // [0x2177018] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.ReceivePreviewSet
	// void ReceivePreviewSet(FJunoBuildingSelectionPreview& Preview);                                                          // [0x2177018] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.ReceivePreviewCreated
	// void ReceivePreviewCreated(FJunoBuildingSelectionPreview& Preview);                                                      // [0x2177018] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.ReceivePreviewCleared
	// void ReceivePreviewCleared(FJunoBuildingSelectionPreview& Preview);                                                      // [0x2177018] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.ReceivePlacementStarted
	// void ReceivePlacementStarted();                                                                                          // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.ReceivePlacementPreviewInitialized
	// void ReceivePlacementPreviewInitialized(FJunoBuildingPlacementPreview& Preview);                                         // [0x2177018] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.ReceivePlacementPreviewHidden
	// void ReceivePlacementPreviewHidden(FJunoBuildingPlacementPreview& Preview);                                              // [0x2177018] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.ReceiveEnabled
	// void ReceiveEnabled();                                                                                                   // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.ReceiveDisabled
	// void ReceiveDisabled();                                                                                                  // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.ReceiveDestroyPreview
	// void ReceiveDestroyPreview(FJunoBuildingSelectionPreview& Preview);                                                      // [0x2177018] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.ReceiveDestroyPlacementPreview
	// void ReceiveDestroyPlacementPreview(FJunoBuildingPlacementPreview& Preview);                                             // [0x2177018] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.ReceiveClearSnapEntryPreviews
	// void ReceiveClearSnapEntryPreviews(TArray<FJunoBuildingSnapEntryPreview>& Previews);                                     // [0x2177018] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.NotifyPlacementStarted
	// void NotifyPlacementStarted();                                                                                           // [0xba2d5e4] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.IsPreviewerEnabled
	// bool IsPreviewerEnabled();                                                                                               // [0x8a12d6c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.InitializePlacementPreview
	// void InitializePlacementPreview();                                                                                       // [0xba2d108] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.HidePlacementPreview
	// void HidePlacementPreview();                                                                                             // [0xba2d0c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.HasSetPreview
	// bool HasSetPreview();                                                                                                    // [0xba2d0a4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.GetPreviewRef
	// FJunoBuildingSelectionPreview GetPreviewRef(bool& bSuccess);                                                             // [0xba2c73c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.GetPlacementPreview
	// FJunoBuildingPlacementPreview GetPlacementPreview();                                                                     // [0xba2c6a4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.GetOwningBuildingBehavior
	// class UJunoBuildingBehaviorBase* GetOwningBuildingBehavior();                                                            // [0xba2b7b0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.FindPreviewRef
	// FJunoBuildingSelectionPreview FindPreviewRef(FGuid& Guid, bool& bSuccess);                                               // [0xba2ac34] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.Enable
	// void Enable();                                                                                                           // [0xba2ac20] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.Disable
	// void Disable();                                                                                                          // [0xba2ac0c] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.DestroyPreview
	// void DestroyPreview(FGuid Guid);                                                                                         // [0xba2aacc] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.DestroyPlacementPreview
	// void DestroyPlacementPreview();                                                                                          // [0xba2aab8] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.CreatePreview
	// bool CreatePreview(TArray<FJunoBuilderToolSelectedActor>& SelectedActors, FGuid& Guid, FJunoBuildingPreviewParams& Params); // [0xba2a354] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.ClearPreview
	// void ClearPreview();                                                                                                     // [0xba2a340] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoBuildingPreviewInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoBuildingPreviewInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoBuildingPreviewInterface.GetPreviewComponentTemplates
	// TMap<FName, UClass*> GetPreviewComponentTemplates();                                                                     // [0xba2c6dc] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoGameStateComponent_Loot
/// Size: 0x0030 (0x0000A0 - 0x0000D0)
class UJunoGameStateComponent_Loot : public UFortGameStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TArray<class UDataTable*>)                 LootTierTables                                              OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(TArray<class UDataTable*>)                 LootPackageTables                                           OFFSET(get<T>, {0xC0, 16, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoGameStateComponent_Loot.OnPlaylistDataReady
	// void OnPlaylistDataReady(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, FGameplayTagContainer& PlaylistContextTags); // [0xba2df60] Final|Native|Private|HasOutParms 
};

/// Class /Script/JunoGameNative.JunoBuildInstructionsItemDefinition
/// Size: 0x0070 (0x0008A0 - 0x000910)
class UJunoBuildInstructionsItemDefinition : public UFortWorldItemDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2320;

public:
	DMember(bool)                                      bGiveResourcesOnDestroy                                     OFFSET(get<bool>, {0x898, 1, 1, 0})
	SMember(FName)                                     SelfCraftingFormulaName                                     OFFSET(getStruct<T>, {0x89C, 4, 0, 0})
	CMember(TArray<FName>)                             PrerequisiteCraftingFormulaNames                            OFFSET(get<T>, {0x8A0, 16, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   ActorClassToBuild                                           OFFSET(get<T>, {0x8B0, 32, 0, 0})
	CMember(class UFortPlaysetPropItemDefinition*)     PlaysetPropToBuild                                          OFFSET(get<T>, {0x8D0, 8, 0, 0})
	SMember(FText)                                     SizeDescription                                             OFFSET(getStruct<T>, {0x8D8, 24, 0, 0})
	SMember(FText)                                     SetDescription                                              OFFSET(getStruct<T>, {0x8F0, 24, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoBuildInstructionsItemDefinition.ShouldGiveResourcesOnDestroy
	// bool ShouldGiveResourcesOnDestroy();                                                                                     // [0xba2e9e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildInstructionsItemDefinition.GetSizeDescription
	// FText GetSizeDescription();                                                                                              // [0xba2ca18] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildInstructionsItemDefinition.GetSetDescription
	// FText GetSetDescription();                                                                                               // [0xba2c9fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildInstructionsItemDefinition.GetSelfCraftingFormulaName
	// FName GetSelfCraftingFormulaName();                                                                                      // [0xba2c9c8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildInstructionsItemDefinition.GetPrerequisiteCraftingFormulaNames
	// TArray<FName> GetPrerequisiteCraftingFormulaNames();                                                                     // [0xba2c6c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildInstructionsItemDefinition.GetActorClassToBuild
	// TWeakObjectPtr<UClass*> GetActorClassToBuild();                                                                          // [0xba2ad78] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoControllerComponent_CraftingNetworkEvents
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UJunoControllerComponent_CraftingNetworkEvents : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TArray<FActorUpgradeInfo>)                 ActorsToUpgrade                                             OFFSET(get<T>, {0xA8, 16, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   LastUpgradedActor                                           OFFSET(get<T>, {0xB8, 8, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoControllerComponent_CraftingNetworkEvents.ServerSetAutoPassiveCraftingFormula
	// void ServerSetAutoPassiveCraftingFormula(class AActor* PassiveCraftingObject, FName FormulaName);                        // [0xba2e524] RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	// Function /Script/JunoGameNative.JunoControllerComponent_CraftingNetworkEvents.ServerEnableAutoPassiveCrafting
	// void ServerEnableAutoPassiveCrafting(class AActor* PassiveCraftingObject);                                               // [0xba2e484] RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	// Function /Script/JunoGameNative.JunoControllerComponent_CraftingNetworkEvents.ServerDisableAutoPassiveCrafting
	// void ServerDisableAutoPassiveCrafting(class AActor* PassiveCraftingObject);                                              // [0xba2e3e4] RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	// Function /Script/JunoGameNative.JunoControllerComponent_CraftingNetworkEvents.ServerAttemptCraftingUpgrage
	// void ServerAttemptCraftingUpgrage(class AActor* ActorToUpgrade, FName RecipeName);                                       // [0xba2e2f8] RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	// Function /Script/JunoGameNative.JunoControllerComponent_CraftingNetworkEvents.OnRep_LastUpgradedActor
	// void OnRep_LastUpgradedActor();                                                                                          // [0xba2e234] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoControllerComponent_CraftingNetworkEvents.OnCraftingSuccess
	// void OnCraftingSuccess(FCraftingObjectSuccessEvent& Event);                                                              // [0xba2d8f4] Final|Native|Protected|HasOutParms 
	// Function /Script/JunoGameNative.JunoControllerComponent_CraftingNetworkEvents.OnCraftingChangedState
	// void OnCraftingChangedState(FCraftingObjectStateChangedEvent& Event);                                                    // [0xba2d858] Final|Native|Protected|HasOutParms 
};

/// Class /Script/JunoGameNative.JunoCraftingObjectBGA
/// Size: 0x01D8 (0x0009E8 - 0x000BC0)
class AJunoCraftingObjectBGA : public ACraftingObjectBGA
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3008;

public:
	SMember(FVector)                                   GridSizeOverride                                            OFFSET(getStruct<T>, {0xA18, 24, 0, 0})
	SMember(FTransform)                                BuildingPivotOffset                                         OFFSET(getStruct<T>, {0xA30, 96, 0, 0})
	SMember(FVector)                                   BuildingGridSnapOffset                                      OFFSET(getStruct<T>, {0xA90, 24, 0, 0})
	SMember(FJunoBuildingBehaviorGridLimits)           GridOffsetLimits                                            OFFSET(getStruct<T>, {0xAA8, 16, 0, 0})
	SMember(FJunoBuilderToolInteractionActorClassSet)  OverlappableClasses                                         OFFSET(getStruct<T>, {0xAB8, 160, 0, 0})
	CMember(class UFortItemDefinition*)                AssociatedItem                                              OFFSET(get<T>, {0xB58, 8, 0, 0})
	CMember(TMap<FName, UClass*>)                      PreviewComponentTemplates                                   OFFSET(get<T>, {0xB60, 80, 0, 0})
	SMember(FName)                                     UpgradeRecipe                                               OFFSET(getStruct<T>, {0xBB0, 4, 0, 0})
	DMember(bool)                                      bShouldPersist                                              OFFSET(get<bool>, {0xBB4, 1, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoCraftingObjectBGA.HandleCraftingSuccess
	// void HandleCraftingSuccess(FCraftingObjectSuccessEvent& Event);                                                          // [0xba2cffc] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoCraftingObjectBGA.GetAssociatedItem
	// class UFortItemDefinition* GetAssociatedItem();                                                                          // [0xba2adec] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoGameStateComponent_Crafting
/// Size: 0x0000 (0x000250 - 0x000250)
class UJunoGameStateComponent_Crafting : public UFortGameStateComponent_Crafting
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoGameStateComponent_Crafting.HandleLootTablesLoaded
	// void HandleLootTablesLoaded();                                                                                           // [0x88b62b0] Final|Native|Protected 
};

/// Class /Script/JunoGameNative.JunoRecipeBundleItemDefinition
/// Size: 0x0010 (0x0008A0 - 0x0008B0)
class UJunoRecipeBundleItemDefinition : public UFortWorldItemDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2224;

public:
	CMember(TArray<FDataTableRowHandle>)               CraftingFormulas                                            OFFSET(get<T>, {0x898, 16, 0, 0})
};

/// Class /Script/JunoGameNative.JunoConnectivityDataComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UJunoConnectivityDataComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/JunoGameNative.JunoConnectivitySupportDataComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UJunoConnectivitySupportDataComponent : public UJunoConnectivityDataComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/JunoGameNative.JunoPhysicsToy
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoPhysicsToy : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoPhysicsToy.StopAttachment
	// void StopAttachment();                                                                                                   // [0x32e1dc4] RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoPhysicsToy.StartAttachmentToActor
	// void StartAttachmentToActor(class AActor* Actor);                                                                        // [0x703ee14] RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoPhysicsToy.OnToyStopTrigger
	// void OnToyStopTrigger();                                                                                                 // [0x7062be4] RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoPhysicsToy.OnToyStartTrigger
	// void OnToyStartTrigger(bool bIsControlled);                                                                              // [0xba812e8] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoPhysicsToy.EnablePhysics
	// void EnablePhysics();                                                                                                    // [0x334e86c] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoPhysicsToy.DisablePhysics
	// void DisablePhysics();                                                                                                   // [0x30e8658] RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoPhysicsToy.DestroyToy
	// void DestroyToy();                                                                                                       // [0x2faa8e4] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/JunoGameNative.JunoBasePlayspaceMigrationComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UJunoBasePlayspaceMigrationComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/JunoGameNative.JunoClientAtomicReplacementComponent
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UJunoClientAtomicReplacementComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FGuid)                                     Guid                                                        OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	CMember(class AJunoPersistentPlayspace*)           TargetPlayspace                                             OFFSET(get<T>, {0xB0, 8, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoClientAtomicReplacementComponent.OnRep_PlayspsaceRenameRepData
	// void OnRep_PlayspsaceRenameRepData();                                                                                    // [0xba81138] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoClientAtomicReplacementComponent.OnRep_Guid
	// void OnRep_Guid(FGuid OldGuid);                                                                                          // [0xba80fd4] Final|Native|Private|HasDefaults 
	// Function /Script/JunoGameNative.JunoClientAtomicReplacementComponent.OnOwnerGuidChanged
	// void OnOwnerGuidChanged(class AActor* Owner, FGuid InGuid);                                                              // [0xba80710] Final|Native|Private|HasDefaults 
};

/// Class /Script/JunoGameNative.JunoClientAtomicReplacementWorldSubsystem
/// Size: 0x0050 (0x000030 - 0x000080)
class UJunoClientAtomicReplacementWorldSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/JunoGameNative.JunoClusterUnionActor
/// Size: 0x0070 (0x000330 - 0x0003A0)
class AJunoClusterUnionActor : public AFortClusterUnionActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 928;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoClusterUnionActor.OnComponentRemovedFromClusterUnion
	// void OnComponentRemovedFromClusterUnion(class UPrimitiveComponent* Component, TArray<FClusterUnionBoneData>& RemovedBonesData); // [0xba7fdf8] Final|Native|Protected|HasOutParms 
	// Function /Script/JunoGameNative.JunoClusterUnionActor.OnComponentAddedToClusterUnion
	// void OnComponentAddedToClusterUnion(class UPrimitiveComponent* Component, TArray<FClusterUnionBoneData>& BonesData, TArray<FClusterUnionBoneData>& RemovedBoneIDs, bool bIsNew); // [0xba7f9d8] Final|Native|Protected|HasOutParms 
};

/// Class /Script/JunoGameNative.JunoConnectivityComponent
/// Size: 0x0100 (0x0000A0 - 0x0001A0)
class UJunoConnectivityComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	SMember(FMulticastInlineDelegate)                  NotifyAddedIntoClusterUnion                                 OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  NotifyRemovedFromClusterUnion                               OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	DMember(float)                                     ContactDistance                                             OFFSET(get<float>, {0xC8, 4, 0, 0})
	DMember(bool)                                      bIsInGraph                                                  OFFSET(get<bool>, {0xCC, 1, 0, 0})
	CMember(TArray<FComponentReference>)               GeometryCollectionsToIgnoreBreaksForConnectivity            OFFSET(get<T>, {0xD0, 16, 0, 0})
	CMember(TArray<FComponentReference>)               RootDoorComponentReferences                                 OFFSET(get<T>, {0xE0, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr<UPrimitiveComponent*>>) DoorComponents                                           OFFSET(get<T>, {0xF0, 16, 0, 0})
	DMember(bool)                                      bAreDoorsEjected                                            OFFSET(get<bool>, {0x100, 1, 0, 0})
	DMember(bool)                                      bAreDoorsEjectedInternal                                    OFFSET(get<bool>, {0x101, 1, 0, 0})
	SMember(FGraphVertexHandle)                        GraphHandle                                                 OFFSET(getStruct<T>, {0x104, 28, 0, 0})
	DMember(bool)                                      bRootPlayspaceInitialized                                   OFFSET(get<bool>, {0x120, 1, 0, 0})
	DMember(bool)                                      bIsDebris                                                   OFFSET(get<bool>, {0x121, 1, 0, 0})
	DMember(bool)                                      bHasBeenSaved                                               OFFSET(get<bool>, {0x122, 1, 0, 0})
	CMember(EJunoAutomaticConnectionMethod)            AutomaticConnectionMethod                                   OFFSET(get<T>, {0x123, 1, 0, 0})
	CMember(TArray<EJunoContactDirection>)             CustomConnectionDirections                                  OFFSET(get<T>, {0x128, 16, 0, 0})
	DMember(bool)                                      bCanBeConnectedTo                                           OFFSET(get<bool>, {0x138, 1, 0, 0})
	DMember(bool)                                      bMustConnectToDynamic                                       OFFSET(get<bool>, {0x139, 1, 0, 0})
	DMember(bool)                                      bForceIndependentlySupported                                OFFSET(get<bool>, {0x13A, 1, 0, 0})
	DMember(bool)                                      bForceWorldSupportWhenPotentialConnectionsAreNotFound       OFFSET(get<bool>, {0x13B, 1, 0, 0})
	DMember(bool)                                      bAddToConnectivityGraphOnBeginPlay                          OFFSET(get<bool>, {0x13C, 1, 0, 0})
	DMember(bool)                                      bCanBeWorldSupported                                        OFFSET(get<bool>, {0x13D, 1, 0, 0})
	CMember(TArray<class UClass*>)                     ClassesThatAreAlwaysValidForWorldSupport                    OFFSET(get<T>, {0x140, 16, 0, 0})
	SMember(FVector)                                   OverlapMargin                                               OFFSET(getStruct<T>, {0x150, 24, 0, 0})
	DMember(int32_t)                                   MinimumIslandSize                                           OFFSET(get<int32_t>, {0x168, 4, 0, 0})
	CMember(TArray<TWeakObjectPtr<AActor*>>)           AttachedToys                                                OFFSET(get<T>, {0x170, 16, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoConnectivityComponent.ShouldUsePartialDestruction
	// bool ShouldUsePartialDestruction();                                                                                      // [0xba81d24] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoConnectivityComponent.OverrideMinimumIslandSize
	// void OverrideMinimumIslandSize(int32_t NewSize);                                                                         // [0xba81380] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoConnectivityComponent.OnVertexRemovedFromGraph
	// void OnVertexRemovedFromGraph();                                                                                         // [0xba8136c] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoConnectivityComponent.OnToyAttached
	// void OnToyAttached(class AActor* ToyActor);                                                                              // [0xba8114c] Final|Native|Public  
	// Function /Script/JunoGameNative.JunoConnectivityComponent.OnRep_IsDebris
	// void OnRep_IsDebris();                                                                                                   // [0xba81114] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoConnectivityComponent.OnRep_AreDoorsEjected
	// void OnRep_AreDoorsEjected();                                                                                            // [0xba80fc0] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoConnectivityComponent.OnRemovedFromGraph
	// void OnRemovedFromGraph();                                                                                               // [0x2555e28] Native|Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoConnectivityComponent.OnRemovedFromClusterUnion
	// void OnRemovedFromClusterUnion(class UClusterUnionComponent* ClusterUnion, class UPrimitiveComponent* Component);        // [0xba80e1c] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoConnectivityComponent.OnParentClusterUnionAwake
	// void OnParentClusterUnionAwake(class UPrimitiveComponent* WakingComponent, FName BoneName);                              // [0xba80d58] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoConnectivityComponent.OnParentActorDeath
	// void OnParentActorDeath(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0xba80890] Final|Native|Protected|HasDefaults 
	// Function /Script/JunoGameNative.JunoConnectivityComponent.OnGeometryCollectionDecayed
	// void OnGeometryCollectionDecayed();                                                                                      // [0xba80338] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoConnectivityComponent.OnGeometryCollectionBreak
	// void OnGeometryCollectionBreak(FChaosBreakEvent& BreakEvent);                                                            // [0xba802a0] Final|Native|Protected|HasOutParms 
	// Function /Script/JunoGameNative.JunoConnectivityComponent.OnAttachedToyDetached
	// void OnAttachedToyDetached(class AActor* ToyActor);                                                                      // [0xba7f864] Final|Native|Public  
	// Function /Script/JunoGameNative.JunoConnectivityComponent.OnAddedIntoClusterUnion
	// void OnAddedIntoClusterUnion(class UClusterUnionComponent* ClusterUnion, class UPrimitiveComponent* Component);          // [0xba7f7a0] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoConnectivityComponent.NotifyRemovedFromGraph
	// void NotifyRemovedFromGraph();                                                                                           // [0x6e4de20] Net|NetReliableNative|Event|NetMulticast|Public 
	// Function /Script/JunoGameNative.JunoConnectivityComponent.GetRelevantSimulatingComponents
	// TArray<UPrimitiveComponent*> GetRelevantSimulatingComponents();                                                          // [0xba7eeb0] Final|RequiredAPI|Native|Public|Const 
	// Function /Script/JunoGameNative.JunoConnectivityComponent.GetContactDistance
	// float GetContactDistance();                                                                                              // [0x6367514] Final|Native|Public|Const 
	// Function /Script/JunoGameNative.JunoConnectivityComponent.GetBaseAttachParentActor
	// class AActor* GetBaseAttachParentActor();                                                                                // [0xba7e8bc] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoConnectivityComponent.GetAutomaticallyConnectedComponents
	// void GetAutomaticallyConnectedComponents(TArray<UJunoConnectivityComponent*>& Results);                                  // [0xba7e200] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/JunoGameNative.JunoConnectivityGraphWorldSubsystem
/// Size: 0x01E8 (0x000040 - 0x000228)
class UJunoConnectivityGraphWorldSubsystem : public UTickableWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 552;

public:
};

/// Class /Script/JunoGameNative.JunoConnectivityManagerComponent
/// Size: 0x0178 (0x0000A0 - 0x000218)
class UJunoConnectivityManagerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
	DMember(bool)                                      bIsReady                                                    OFFSET(get<bool>, {0xB8, 1, 0, 0})
	DMember(bool)                                      bIsNewPlayspace                                             OFFSET(get<bool>, {0xB9, 1, 0, 0})
	CMember(class UFortConnectivityGraph*)             Graph                                                       OFFSET(get<T>, {0xC0, 8, 0, 0})
	DMember(bool)                                      bIsGraphDirty                                               OFFSET(get<bool>, {0xC8, 1, 0, 0})
	CMember(TMap<FGraphVertexHandle, UJunoConnectivityComponent*>) VertexToConnectivityComponents                  OFFSET(get<T>, {0xD0, 80, 0, 0})
	CMember(TMap<FGraphIslandHandle, AJunoClusterUnionActor*>) IslandToClusterUnionActors                          OFFSET(get<T>, {0x120, 80, 0, 0})
	SMember(FJunoConnectivityDebugData)                DebugDrawData                                               OFFSET(getStruct<T>, {0x170, 56, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoConnectivityManagerComponent.RequestAddActorsToConnectivityGraph
	// void RequestAddActorsToConnectivityGraph(TArray<AActor*>& Actors);                                                       // [0xba813fc] Final|Native|Public|HasOutParms 
	// Function /Script/JunoGameNative.JunoConnectivityManagerComponent.OnGraphVertexRemovedFromIsland
	// void OnGraphVertexRemovedFromIsland(FGraphIslandHandle& IslandHandle, FGraphVertexHandle& VertexHandle);                 // [0xba8060c] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoConnectivityManagerComponent.OnGraphVertexAddedToIsland
	// void OnGraphVertexAddedToIsland(FGraphIslandHandle& IslandHandle, FGraphVertexHandle& VertexHandle);                     // [0xba80508] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoConnectivityManagerComponent.OnGraphIslandDestroyed
	// void OnGraphIslandDestroyed(FGraphIslandHandle& IslandHandle);                                                           // [0xba80474] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoConnectivityManagerComponent.OnGraphIslandCreated
	// void OnGraphIslandCreated(FGraphIslandHandle& IslandHandle);                                                             // [0xba803e0] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoConnectivityManagerComponent.OnGraphIslandConnectivityChanged
	// void OnGraphIslandConnectivityChanged(FGraphIslandHandle& IslandHandle);                                                 // [0xba8034c] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoConnectivityManagerComponent.HandleOnGeometryCollectionBreaks
	// void HandleOnGeometryCollectionBreaks(TArray<FChaosBreakEvent>& BreakEvents);                                            // [0xba7eef0] Final|Native|Protected|HasOutParms 
};

/// Class /Script/JunoGameNative.JunoPhysicsToyActor
/// Size: 0x0000 (0x000B80 - 0x000B80)
class AJunoPhysicsToyActor : public AJunoBuildingGameplayActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2944;

public:
};

/// Class /Script/JunoGameNative.JunoPhysicsToyConnectivityComponent
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UJunoPhysicsToyConnectivityComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	DMember(bool)                                      bPlayspaceInitialized                                       OFFSET(get<bool>, {0xB0, 1, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoPhysicsToyConnectivityComponent.DetachFromConnectivity
	// void DetachFromConnectivity();                                                                                           // [0xba7e1ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPhysicsToyConnectivityComponent.AttachToConnectivity
	// void AttachToConnectivity(class AActor* Other);                                                                          // [0xba7e16c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoConnectivityGraphPersistenceFeatureData
/// Size: 0x0110 (0x0002D0 - 0x0003E0)
class AJunoConnectivityGraphPersistenceFeatureData : public AJunoPersistenceFeatureDataActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 992;

public:
	SMember(FSerializableConnectivityGraph)            SavedConnectivityData                                       OFFSET(getStruct<T>, {0x2D8, 264, 0, 0})
};

/// Class /Script/JunoGameNative.JunoPhysicsPersistenceComponent
/// Size: 0x0060 (0x0000A0 - 0x000100)
class UJunoPhysicsPersistenceComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
};

/// Class /Script/JunoGameNative.JunoPhysicsPersistenceWorldSubsystem
/// Size: 0x0058 (0x000040 - 0x000098)
class UJunoPhysicsPersistenceWorldSubsystem : public UTickableWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
};

/// Class /Script/JunoGameNative.JunoGlobalKnowledgeComponent
/// Size: 0x0148 (0x0000A0 - 0x0001E8)
class UJunoGlobalKnowledgeComponent : public UFortGameStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 488;

public:
	SMember(FJunoKnowledgeSaveRecord)                  CurrentWorldKnowledge                                       OFFSET(getStruct<T>, {0x100, 224, 0, 0})
};

/// Class /Script/JunoGameNative.JunoKnowledgeComponent
/// Size: 0x0538 (0x0000A8 - 0x0005E0)
class UJunoKnowledgeComponent : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1504;

public:
	DMember(bool)                                      bEnableKnowledgeComponent                                   OFFSET(get<bool>, {0x108, 1, 0, 0})
	DMember(bool)                                      bEnableKnowledgePersistence                                 OFFSET(get<bool>, {0x109, 1, 0, 0})
	DMember(bool)                                      bEnableKnowledgeFiltering                                   OFFSET(get<bool>, {0x10A, 1, 0, 0})
	CMember(TArray<class UFortItemDefinition*>)        DefaultKnownItems                                           OFFSET(get<T>, {0x110, 16, 0, 0})
	SMember(FGameplayTagContainer)                     DefaultCraftingObjects                                      OFFSET(getStruct<T>, {0x120, 32, 0, 0})
	SMember(FGameplayTagContainer)                     FoundCraftingObjects                                        OFFSET(getStruct<T>, {0x140, 32, 0, 0})
	SMember(FGameplayTagContainer)                     ClaimedKnowlegeBundles                                      OFFSET(getStruct<T>, {0x160, 32, 0, 0})
	SMember(FJunoKnowledgeRecipeStateFastArray)        RecipeStateArray                                            OFFSET(getStruct<T>, {0x180, 288, 0, 0})
	SMember(FJunoKnowledgeItemStateFastArray)          ItemStateStateArray                                         OFFSET(getStruct<T>, {0x2A0, 288, 0, 0})
	DMember(bool)                                      bComponentReady                                             OFFSET(get<bool>, {0x460, 1, 0, 0})
	CMember(TSet<UFortItemDefinition*>)                ItemQuickLookup                                             OFFSET(get<T>, {0x468, 80, 0, 0})
	SMember(FGameplayEventListenerHandle)              CraftingObjectPlacedHandle                                  OFFSET(getStruct<T>, {0x5A0, 28, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.ViewRecipe
	// void ViewRecipe(FName InRecipeName);                                                                                     // [0xba81ee0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.ViewItem
	// void ViewItem(class UFortItemDefinition* InItemDef);                                                                     // [0xba81d3c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.SetRecipeKnowledgeState
	// void SetRecipeKnowledgeState(FName RowName, EJunoKnowledgeState NewState);                                               // [0xba81c60] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.SetPlayerRecipeKnowledgeState
	// void SetPlayerRecipeKnowledgeState(class AFortPlayerController* PC, FName RowName, EJunoKnowledgeState NewState);        // [0xba81b64] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.ServerViewRecipe
	// void ServerViewRecipe(FName InRecipeName);                                                                               // [0xba81ae0] RequiredAPI|Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.ServerViewItem
	// void ServerViewItem(class UFortItemDefinition* InItemDef);                                                               // [0xb9651c0] RequiredAPI|Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.RevealRecipeCategoryForPlayer
	// void RevealRecipeCategoryForPlayer(class AFortPlayerController* PC, FGameplayTag CraftingObjectTag, FGameplayTag CategoryTag, FGameplayTag SubCategoryTag); // [0xba817b4] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.RevealRecipeCategory
	// void RevealRecipeCategory(FGameplayTag CraftingObjectTag, FGameplayTag CategoryTag, FGameplayTag SubCategoryTag);        // [0xba814d8] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.OnCraftingObjectInteraction
	// void OnCraftingObjectInteraction(FCraftingMessage CraftingMessage);                                                      // [0xba80158] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.HasViewedRecipe
	// bool HasViewedRecipe(FName InRecipeName);                                                                                // [0xba7f714] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.HasViewedItem
	// bool HasViewedItem(class UFortItemDefinition* InItemDef);                                                                // [0xba7f684] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.HasClaimedKnowledgeBundle
	// bool HasClaimedKnowledgeBundle(FGameplayTag& BundleIdentifier);                                                          // [0xba7f5b0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.GetRecipeKnowledgeState
	// EJunoKnowledgeState GetRecipeKnowledgeState(FName RowName);                                                              // [0xba7ee24] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.GetRecipeFromGuidForPlayer
	// FName GetRecipeFromGuidForPlayer(class AFortPlayerController* PC, FGuid InGuid);                                         // [0xba7ec8c] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.GetRecipeFromGuid
	// FName GetRecipeFromGuid(FGuid InGuid);                                                                                   // [0xba7eb44] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.GetPlayerRecipeKnowledgeState
	// EJunoKnowledgeState GetPlayerRecipeKnowledgeState(class AFortPlayerController* PC, FName RowName);                       // [0xba7ea68] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.GetGuidFromRecipeForPlayer
	// FGuid GetGuidFromRecipeForPlayer(class AFortPlayerController* PC, FName RecipeName);                                     // [0xba7e98c] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.GetGuidFromRecipe
	// FGuid GetGuidFromRecipe(FName RecipeName);                                                                               // [0xba7e8f4] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.AddCraftingObjectTagsToPlayer
	// void AddCraftingObjectTagsToPlayer(class AFortPlayerController* PC, FGameplayTagContainer CraftingObjectTags);           // [0xba7dfa4] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.AddCraftingObjectTags
	// void AddCraftingObjectTags(FGameplayTagContainer CraftingObjectTags);                                                    // [0xba7de50] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.AcquireItemForPlayer
	// void AcquireItemForPlayer(class AFortPlayerController* PC, class UFortItemDefinition* NewItemDef);                       // [0xba7dd84] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.AcquireItem
	// void AcquireItem(class UFortItemDefinition* NewItemDef);                                                                 // [0xba7dd04] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoKnowledgePersistenceFeatureData
/// Size: 0x00E8 (0x000040 - 0x000128)
class UJunoKnowledgePersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	SMember(FJunoKnowledgeSaveData)                    KnowledgeSaveData                                           OFFSET(getStruct<T>, {0x48, 224, 0, 0})
};

/// Class /Script/JunoGameNative.JunoKnowledgePersistenceFeatureDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoKnowledgePersistenceFeatureDataInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoFogOfWarPersistenceFeatureData
/// Size: 0x0018 (0x000040 - 0x000058)
class UJunoFogOfWarPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FJunoFogOfWarSaveData)                     FogOfWarSaveDatas                                           OFFSET(getStruct<T>, {0x48, 16, 0, 0})
};

/// Class /Script/JunoGameNative.JunoFogOfWarPersistenceFeatureDataActor
/// Size: 0x0018 (0x0002D0 - 0x0002E8)
class AJunoFogOfWarPersistenceFeatureDataActor : public AJunoPersistenceFeatureDataActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:
	CMember(TArray<FJunoFogOfWar>)                     FogOfWarData                                                OFFSET(get<T>, {0x2D8, 16, 0, 0})
};

/// Class /Script/JunoGameNative.JunoFogOfWarPersistenceFeatureDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoFogOfWarPersistenceFeatureDataInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoMarkerManagerPlayspaceComponent
/// Size: 0x0078 (0x0000F8 - 0x000170)
class UJunoMarkerManagerPlayspaceComponent : public UFortPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	CMember(TArray<FJunoMarker>)                       Markers                                                     OFFSET(get<T>, {0x118, 16, 0, 0})
	CMember(TArray<FGuid>)                             MarkersIds                                                  OFFSET(get<T>, {0x128, 16, 0, 0})
	CMember(class UDataTable*)                         MarkerConfigData                                            OFFSET(get<T>, {0x138, 8, 0, 0})
	CMember(TArray<FUniqueMarkerSettings>)             UniqueMarkers                                               OFFSET(get<T>, {0x140, 16, 0, 0})
	CMember(TArray<class UObject*>)                    LoadedIconTextures                                          OFFSET(get<T>, {0x150, 16, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoMarkerManagerPlayspaceComponent.OnRep_MarkersIds
	// void OnRep_MarkersIds();                                                                                                 // [0xbace140] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoMarkerManagerPlayspaceComponent.OnRep_Markers
	// void OnRep_Markers();                                                                                                    // [0xbace12c] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoMarkerManagerPlayspaceComponent.GetJunoMarkerManagerComponent
	// class UJunoMarkerManagerPlayspaceComponent* GetJunoMarkerManagerComponent(class UObject* WorldContextObject);            // [0xbacdb1c] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoMarkerManagerPlayspaceComponent.CreateMarker
	// bool CreateMarker(class AActor* Actor, FJunoMarker& Marker);                                                             // [0xbacd974] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoMarkersPersistenceFeatureData
/// Size: 0x0028 (0x000040 - 0x000068)
class UJunoMarkersPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FJunoMarkersSaveData)                      MarkersSaveData                                             OFFSET(getStruct<T>, {0x48, 32, 0, 0})
};

/// Class /Script/JunoGameNative.JunoMarkersPersistenceFeatureDataActor
/// Size: 0x0028 (0x0002D0 - 0x0002F8)
class AJunoMarkersPersistenceFeatureDataActor : public AJunoPersistenceFeatureDataActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	CMember(TArray<FJunoMarker>)                       MarkersData                                                 OFFSET(get<T>, {0x2D8, 16, 0, 0})
	CMember(TArray<FGuid>)                             MarkersIds                                                  OFFSET(get<T>, {0x2E8, 16, 0, 0})
};

/// Class /Script/JunoGameNative.JunoMarkersPersistenceFeatureDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoMarkersPersistenceFeatureDataInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoModeratorModeBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoModeratorModeBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoModeratorModeBlueprintLibrary.IsPlayerAllowedToFly
	// bool IsPlayerAllowedToFly(class UObject* WorldContextObject);                                                            // [0xbacde54] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoModeratorModeBlueprintLibrary.IsModeratorModeEnabled
	// bool IsModeratorModeEnabled(class UObject* WorldContextObject);                                                          // [0xbacdcf4] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoModeratorModeComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UJunoModeratorModeComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(class UInputAction*)                       InputAction_TeleportPlayer_ModeratorMode                    OFFSET(get<T>, {0xA0, 8, 0, 0})
	DMember(bool)                                      bIsModeratorModeEnabled                                     OFFSET(get<bool>, {0xA8, 1, 0, 0})
	DMember(bool)                                      bIsPlayerAllowedToFly                                       OFFSET(get<bool>, {0xA9, 1, 0, 0})
	DMember(bool)                                      bModeratorConfirmed                                         OFFSET(get<bool>, {0xAA, 1, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoModeratorModeComponent.OnRootPlayspaceOwnerSet
	// void OnRootPlayspaceOwnerSet(class AFortPlayerControllerAthena* PlayerControllerAthena);                                 // [0x5fffda8] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoModeratorModeComponent.OnRep_IsModeratorModeEnabled
	// void OnRep_IsModeratorModeEnabled();                                                                                     // [0xbace118] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoModeratorModeComponent.OnPawnDestroyed
	// void OnPawnDestroyed(class AActor* DestroyedActor);                                                                      // [0xbace084] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoModeratorModeComponent.IsPlayerAllowedToFly
	// bool IsPlayerAllowedToFly();                                                                                             // [0xbacded4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoModeratorModeComponent.IsModeratorModeEnabled
	// bool IsModeratorModeEnabled();                                                                                           // [0xaba5198] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoModeratorModeComponent.HandleTeleportPlayer
	// void HandleTeleportPlayer();                                                                                             // [0xbacdce0] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoModeratorModeComponent.HandlePlayerPossesedPawn
	// void HandlePlayerPossesedPawn(class APawn* PlayerPawn);                                                                  // [0xbacdc60] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoModeratorModeComponent.HandleOnCreativeFlyChangedDelegate
	// void HandleOnCreativeFlyChangedDelegate(bool bIsFlying);                                                                 // [0xbacdb9c] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoModeratorModeComponent.EnableModeratorMode
	// void EnableModeratorMode();                                                                                              // [0x32e6c74] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoModeratorModeComponent.DisableModeratorMode
	// void DisableModeratorMode();                                                                                             // [0x32e6c74] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoModeratorModeComponent.CheatModeratorConfirm
	// void CheatModeratorConfirm();                                                                                            // [0xbacd95c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoDoorMetaNavArea
/// Size: 0x0008 (0x000048 - 0x000050)
class UJunoDoorMetaNavArea : public UNavAreaMeta
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FNavAgentSelector)                         DoorAwareAgents                                             OFFSET(getStruct<T>, {0x48, 4, 0, 0})
};

/// Class /Script/JunoGameNative.JunoMetaNavArea
/// Size: 0x0008 (0x000048 - 0x000050)
class UJunoMetaNavArea : public UNavAreaMeta
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(int32_t)                                   HealthThreshold                                             OFFSET(get<int32_t>, {0x48, 4, 0, 0})
};

/// Class /Script/JunoGameNative.JunoPawnComponentMood
/// Size: 0x00B8 (0x0000A8 - 0x000160)
class UJunoPawnComponentMood : public UFortPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FMulticastInlineDelegate)                  OnJunoMoodChangedDelegate                                   OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnJunoMoodReactionTriggeredDelegate                         OFFSET(getStruct<T>, {0xD0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnJunoMoodReactionFinishedDelegate                          OFFSET(getStruct<T>, {0xF8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnJunoMoodReactionCanceledDelegate                          OFFSET(getStruct<T>, {0x120, 16, 0, 0})
	SMember(FJunoMoodStateData)                        CurrentMoodState                                            OFFSET(getStruct<T>, {0x148, 4, 0, 0})
	CMember(class UProxyTable*)                        MoodAnimProxyTable                                          OFFSET(get<T>, {0x150, 8, 0, 0})
	DMember(bool)                                      bIsMoodReactionActive                                       OFFSET(get<bool>, {0x158, 1, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoPawnComponentMood.OnRep_CurrentMoodState
	// void OnRep_CurrentMoodState();                                                                                           // [0xbace104] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPawnComponentMood.NotifyMoodReactionComplete
	// void NotifyMoodReactionComplete();                                                                                       // [0xbace028] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPawnComponentMood.MulticastTriggerMoodReaction
	// void MulticastTriggerMoodReaction(FGameplayTag MoodReactionTag);                                                         // [0xbacdef4] RequiredAPI|Net|NetReliableNative|Event|NetMulticast|Public 
	// Function /Script/JunoGameNative.JunoPawnComponentMood.MulticastOnMoodReactionComplete
	// void MulticastOnMoodReactionComplete();                                                                                  // [0x15560c8] Final|Net|NetReliableNative|Event|NetMulticast|Private|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPawnComponentMood.MulticastOnCancelCurrentMoodReaction
	// void MulticastOnCancelCurrentMoodReaction();                                                                             // [0x2555e28] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/JunoGameNative.JunoPawnComponentMood.IsMoodReactionSupported_Internal
	// bool IsMoodReactionSupported_Internal(FGameplayTag& MoodReactionTag);                                                    // [0x2177018] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoPawnComponentMood.IsMoodReactionSupported
	// bool IsMoodReactionSupported(FGameplayTag& MoodReactionTag);                                                             // [0xbacdd80] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPawnComponentMood.GetMoodAnimProxyTable
	// class UProxyTable* GetMoodAnimProxyTable();                                                                              // [0x7011874] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPawnComponentMood.GetCurrentMoodState
	// FJunoMoodStateData GetCurrentMoodState();                                                                                // [0xa08d7ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoPawnComponentSpeechBubble
/// Size: 0x0000 (0x0001D8 - 0x0001D8)
class UJunoPawnComponentSpeechBubble : public UFortPawnComponent_SpeechBubble
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 472;

public:
};

/// Class /Script/JunoGameNative.JunoDeltaFile
/// Size: 0x0068 (0x000768 - 0x0007D0)
class UJunoDeltaFile : public ULevelSaveRecord
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2000;

public:
	SMember(FName)                                     UniquePackageName                                           OFFSET(getStruct<T>, {0x768, 4, 0, 0})
	CMember(TMap<FGuid, FJunoUpdateAction>)            UpdateActions                                               OFFSET(get<T>, {0x770, 80, 0, 0})
	CMember(TWeakObjectPtr<AJunoPersistentPlayspace*>) WeakPersistentPlayspaceToApplyTo                            OFFSET(get<T>, {0x7C0, 8, 0, 0})
	DMember(bool)                                      bDirty                                                      OFFSET(get<bool>, {0x7C8, 1, 0, 0})
};

/// Class /Script/JunoGameNative.JunoDeltaFileApplier
/// Size: 0x00A0 (0x0004F0 - 0x000590)
class UJunoDeltaFileApplier : public ULevelRecordSpawner
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1424;

public:
	CMember(TMap<FGuid, FJunoUpdateAction>)            UpdateActionMap                                             OFFSET(get<T>, {0x4F0, 80, 0, 0})
	CMember(TMap<FGuid, FDeleteAction>)                DeleteActionMap                                             OFFSET(get<T>, {0x540, 80, 0, 0})
};

/// Class /Script/JunoGameNative.JunoDeltasLevelSaveComponent
/// Size: 0x0000 (0x000970 - 0x000970)
class UJunoDeltasLevelSaveComponent : public UFortLevelSaveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2416;

public:
};

/// Class /Script/JunoGameNative.JunoPFWModule_LevelDeltas
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UJunoPFWModule_LevelDeltas : public UPersistenceFrameworkModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/JunoGameNative.JunoPFWContainer_LevelDelta
/// Size: 0x0028 (0x000140 - 0x000168)
class UJunoPFWContainer_LevelDelta : public UPersistenceFrameworkContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
};

/// Class /Script/JunoGameNative.JunoPFWContainer_LevelDeltaIndex
/// Size: 0x0020 (0x0001E0 - 0x000200)
class UJunoPFWContainer_LevelDeltaIndex : public UJunoBasePFWContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
};

/// Class /Script/JunoGameNative.JunoPlayspaceTrackableInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoPlayspaceTrackableInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoPersistentPlayspaceLevelRegistry
/// Size: 0x0050 (0x000030 - 0x000080)
class UJunoPersistentPlayspaceLevelRegistry : public UEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TMap<FName, FJunoPersistentPlayspaceLevelRegistryEntry>) PersistentPlayspaceLevelMap                   OFFSET(get<T>, {0x30, 80, 0, 0})
};

/// Class /Script/JunoGameNative.JunoPlayerPersistenceComponent
/// Size: 0x0150 (0x0000F8 - 0x000248)
class UJunoPlayerPersistenceComponent : public UFortPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 584;

public:
	CMember(TMap<FUniqueNetIdRepl, FJunoPlayerSaveData>) PlayerSaveData                                            OFFSET(get<T>, {0x138, 80, 0, 0})
	CMember(TMap<FUniqueNetIdRepl, TWeakObjectPtr<UJunoPlayerSaveData_Container*>>) PlayerSaveDataContainers       OFFSET(get<T>, {0x188, 80, 0, 0})
	CMember(TSet<FUniqueNetIdRepl>)                    InFlightPlayerSaves                                         OFFSET(get<T>, {0x1D8, 80, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoPlayerPersistenceComponent.OnControllerBeginDestroy
	// void OnControllerBeginDestroy(class AFortPlayerControllerAthena* FortPCAthena);                                          // [0x5fffda8] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPlayerPersistenceComponent.OnAnyPlayerLoggedOut
	// void OnAnyPlayerLoggedOut(class AGameModeBase* GameModeBase, class AController* Controller);                             // [0x696d714] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPlayerPersistenceComponent.OnAnyPlayerLoggedIn
	// void OnAnyPlayerLoggedIn(class APlayerController* PlayerController);                                                     // [0x5fffda8] Final|Native|Private 
};

/// Class /Script/JunoGameNative.JunoWorldPersistenceHandler
/// Size: 0x0008 (0x000028 - 0x000030)
class UJunoWorldPersistenceHandler : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/JunoGameNative.JunoWorldPersistenceHandler_Deltas
/// Size: 0x0140 (0x000030 - 0x000170)
class UJunoWorldPersistenceHandler_Deltas : public UJunoWorldPersistenceHandler
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	DMember(int32_t)                                   DeltasPeriodicSaveIntervalSeconds_Default                   OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   DeltasPeriodicSaveIntervalSeconds_PIEOverride               OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	CMember(class UJunoDeltasSaveHandler*)             DeltasSaveHandler                                           OFFSET(get<T>, {0x128, 8, 0, 0})
	SMember(FSoftClassPath)                            DefaultDeltaFileClass                                       OFFSET(getStruct<T>, {0x140, 24, 0, 0})
	CMember(TArray<FJunoRollbackBadCheckpointRange>)   RollbackBadCheckpointRanges                                 OFFSET(get<T>, {0x158, 16, 0, 0})
};

/// Class /Script/JunoGameNative.JunoWorldPersistencePlayerManager
/// Size: 0x0098 (0x000028 - 0x0000C0)
class UJunoWorldPersistencePlayerManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoWorldPersistencePlayerManager.OnAnyPlayerLoggedIn
	// void OnAnyPlayerLoggedIn(class APlayerController* PlayerController);                                                     // [0xbb05924] Final|Native|Public  
};

/// Class /Script/JunoGameNative.JunoAIPersistenceFeatureData
/// Size: 0x0130 (0x000040 - 0x000170)
class UJunoAIPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FSavedAIDataManager)                       SavedAIData                                                 OFFSET(getStruct<T>, {0x50, 288, 0, 0})
};

/// Class /Script/JunoGameNative.JunoPlayspaceAccountantPersistenceFeatureDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoPlayspaceAccountantPersistenceFeatureDataInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoPlayspaceIndexPersistenceFeatureData
/// Size: 0x0050 (0x000040 - 0x000090)
class UJunoPlayspaceIndexPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FJunoPlayspaceIndexSaveData)               PlayspaceIndexSaveData                                      OFFSET(getStruct<T>, {0x40, 80, 0, 0})
};

/// Class /Script/JunoGameNative.JunoWorldPersistenceFeatureData
/// Size: 0x0048 (0x000040 - 0x000088)
class UJunoWorldPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FJunoWorldSaveData)                        WorldSaveData                                               OFFSET(getStruct<T>, {0x48, 64, 0, 0})
};

/// Class /Script/JunoGameNative.JunoWorldPersistenceFeatureDataActor
/// Size: 0x0048 (0x0002D0 - 0x000318)
class AJunoWorldPersistenceFeatureDataActor : public AJunoPersistenceFeatureDataActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	SMember(FJunoWorldSaveData)                        WorldSaveData                                               OFFSET(getStruct<T>, {0x2D8, 64, 0, 0})
};

/// Class /Script/JunoGameNative.JunoWorldPersistenceFeatureDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoWorldPersistenceFeatureDataInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoClusterUnionPersistenceFeatureData
/// Size: 0x0050 (0x000040 - 0x000090)
class UJunoClusterUnionPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FJunoClusterUnionSaveData)                 SaveData                                                    OFFSET(getStruct<T>, {0x40, 80, 0, 0})
};

/// Class /Script/JunoGameNative.JunoClusterUnionPersistenceFeatureData_Container
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoClusterUnionPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
};

/// Class /Script/JunoGameNative.JunoConnectivityGraphPersistenceFeatureDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoConnectivityGraphPersistenceFeatureDataInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoConnectivityGraphPFWPersistenceFeatureData
/// Size: 0x0110 (0x000040 - 0x000150)
class UJunoConnectivityGraphPFWPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FSerializableConnectivityGraph)            SavedConnectivityData                                       OFFSET(getStruct<T>, {0x48, 264, 0, 0})
};

/// Class /Script/JunoGameNative.JunoConnectivityGraphPFW_Container
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoConnectivityGraphPFW_Container : public UJunoBasePFWPersistenceFeatureDataContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
};

/// Class /Script/JunoGameNative.JunoPhysicsPFWModule
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UJunoPhysicsPFWModule : public UPersistenceFrameworkModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/JunoGameNative.JunoPhysicsToyPersistenceFeatureData
/// Size: 0x0050 (0x000040 - 0x000090)
class UJunoPhysicsToyPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FJunoPhysicsToySaveData)                   Container                                                   OFFSET(getStruct<T>, {0x40, 80, 0, 0})
};

/// Class /Script/JunoGameNative.JunoPhysicsToyPersistenceFeatureData_Container
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoPhysicsToyPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
};

/// Class /Script/JunoGameNative.JunoPlayerPersistenceFeatureDataActor
/// Size: 0x0070 (0x0002D0 - 0x000340)
class AJunoPlayerPersistenceFeatureDataActor : public AJunoPersistenceFeatureDataActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	CMember(TMap<FUniqueNetIdRepl, FJunoPlayerSaveData>) PlayerSaveData                                            OFFSET(get<T>, {0x2D8, 80, 0, 0})
};

/// Class /Script/JunoGameNative.JunoPlayerPersistenceFeatureDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoPlayerPersistenceFeatureDataInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoPersistenceFeaturePFWState
/// Size: 0x0008 (0x000028 - 0x000030)
class UJunoPersistenceFeaturePFWState : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TWeakObjectPtr<UJunoBasePFWPersistenceFeatureDataContainer*>) ContainerWeakPtr                         OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/JunoGameNative.PFWSubsystemExtension_JunoGameNative
/// Size: 0x0008 (0x000038 - 0x000040)
class UPFWSubsystemExtension_JunoGameNative : public UPersistenceFrameworkSubsystemExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/JunoGameNative.JunoControllerComponent
/// Size: 0x0408 (0x0000A8 - 0x0004B0)
class UJunoControllerComponent : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1200;

public:
	SMember(FMulticastInlineDelegate)                  OnPlayerSpawnedActorWithBuilderTool                         OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnOffhandInputPressed                                       OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnOffhandInputReleased                                      OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	CMember(class UFortWorldItemDefinition*)           EmptyHandItemDefinition                                     OFFSET(get<T>, {0xD8, 8, 0, 0})
	DMember(float)                                     InteractionDistanceFromCamera                               OFFSET(get<float>, {0xE0, 4, 0, 0})
	DMember(float)                                     InteractionDistanceFromPlayer                               OFFSET(get<float>, {0xE4, 4, 0, 0})
	SMember(FPrimaryAssetId)                           BuilderToolPrimaryAsset                                     OFFSET(getStruct<T>, {0xE8, 8, 0, 0})
	CMember(class UClass*)                             DeathChestActorClass                                        OFFSET(get<T>, {0xF0, 8, 0, 0})
	CMember(class UClass*)                             DeathChestNavFilterClass                                    OFFSET(get<T>, {0xF8, 8, 0, 0})
	SMember(FVector)                                   DeathChestNavQuestyExtents                                  OFFSET(getStruct<T>, {0x100, 24, 0, 0})
	DMember(float)                                     DeathChestZDistanceToCheck                                  OFFSET(get<float>, {0x118, 4, 0, 0})
	SMember(FJunoMarker)                               CheckpointMarker                                            OFFSET(getStruct<T>, {0x120, 152, 0, 0})
	SMember(FGuid)                                     ItemToBuildGUID                                             OFFSET(getStruct<T>, {0x1B8, 16, 0, 0})
	SMember(FGuid)                                     ItemSelectedGuid                                            OFFSET(getStruct<T>, {0x1D8, 16, 0, 0})
	CMember(class UInputComponent*)                    InputComponent                                              OFFSET(get<T>, {0x1F8, 8, 0, 0})
	CMember(class UFortItem*)                          CachedQuickBuildItem                                        OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(class UFortOffhandComponent*)              OffhandComponent                                            OFFSET(get<T>, {0x428, 8, 0, 0})
	SMember(FGameplayEventListenerHandle)              CheckpointActorDestroyedHandle                              OFFSET(getStruct<T>, {0x430, 28, 0, 0})
	DMember(bool)                                      bIsModeratorModeEnabled                                     OFFSET(get<bool>, {0x4A8, 1, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoControllerComponent.SwitchToEmptyHands
	// void SwitchToEmptyHands(bool bTriggerSelection);                                                                         // [0xbb06928] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoControllerComponent.SetPlayerLastCaveTeleporterLocation
	// void SetPlayerLastCaveTeleporterLocation(FVector& TeleporterLocation);                                                   // [0xbb06864] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoControllerComponent.SetPlayerCheckpoint
	// void SetPlayerCheckpoint(class AActor* CheckpointActor, FVector& CheckpointLocation);                                    // [0xbb0675c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoControllerComponent.SetIsModeratorModeEnabled
	// void SetIsModeratorModeEnabled(bool bEnable);                                                                            // [0xbb066dc] Final|Native|Public  
	// Function /Script/JunoGameNative.JunoControllerComponent.ServerTeleportToPOI
	// void ServerTeleportToPOI();                                                                                              // [0x788579c] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/JunoGameNative.JunoControllerComponent.ServerTeleportToLocation
	// void ServerTeleportToLocation(FVector TeleportLocation, FRotator TeleportRotation);                                      // [0xbb06278] Net|NetReliableNative|Event|Public|NetServer|HasDefaults 
	// Function /Script/JunoGameNative.JunoControllerComponent.ServerTeleportToCave
	// void ServerTeleportToCave();                                                                                             // [0x8386c28] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/JunoGameNative.JunoControllerComponent.ServerSetSelectedItem
	// void ServerSetSelectedItem(FGuid ItemGuid, FGameplayTag SlotGroupTag, int32_t SlotRow, int32_t SlotColumn);              // [0xbb05eb0] Final|Net|Native|Event|Private|NetServer|HasDefaults 
	// Function /Script/JunoGameNative.JunoControllerComponent.ServerSetCraftingContextItem
	// void ServerSetCraftingContextItem(FGuid InItemGuid);                                                                     // [0xbb05d6c] Net|NetReliableNative|Event|Public|NetServer|HasDefaults 
	// Function /Script/JunoGameNative.JunoControllerComponent.ServerRequestPersistenceDataReport
	// void ServerRequestPersistenceDataReport(EJunoPersistenceReportOptions ReportOptions);                                    // [0xbb05ce8] Net|NetReliableNative|Event|Public|NetServer|Const 
	// Function /Script/JunoGameNative.JunoControllerComponent.ServerReplicateMapData
	// void ServerReplicateMapData();                                                                                           // [0x81b738c] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/JunoGameNative.JunoControllerComponent.ServerFreeBuildAddInventoryItem
	// void ServerFreeBuildAddInventoryItem(FFortItemEntry InItemEntry);                                                        // [0xbb05b7c] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/JunoGameNative.JunoControllerComponent.OnRep_ItemSelectedGuid
	// void OnRep_ItemSelectedGuid();                                                                                           // [0xbb059ec] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoControllerComponent.OnCameraToggle
	// void OnCameraToggle();                                                                                                   // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoControllerComponent.OnAnimToggle
	// void OnAnimToggle();                                                                                                     // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoControllerComponent.HandleFortPawnChanged
	// void HandleFortPawnChanged(class AFortPawn* NewPawn);                                                                    // [0xbb054cc] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoControllerComponent.HandleBuilderToolUnEquip
	// void HandleBuilderToolUnEquip(class AFortWeapon* Weapon);                                                                // [0xbb04f58] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoControllerComponent.HandleBuilderToolInteractionStopped
	// void HandleBuilderToolInteractionStopped(class AJunoBuilderTool* BuilderTool, class UJunoBuilderToolInteractionBehavior* Behavior); // [0xbb04e94] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoControllerComponent.HandleBuilderToolInteractionStarted
	// void HandleBuilderToolInteractionStarted(class AJunoBuilderTool* BuilderTool, class UJunoBuilderToolInteractionBehavior* Behavior); // [0xbb04dd0] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoControllerComponent.GetPlayerCheckpoint
	// FJunoPlayerCheckpoint GetPlayerCheckpoint();                                                                             // [0xbb04d70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoControllerComponent.GetLastCaveTeleporterLocation
	// FVector GetLastCaveTeleporterLocation();                                                                                 // [0xbb04d48] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoControllerComponent.GetIsModeratorModeEnabled
	// bool GetIsModeratorModeEnabled();                                                                                        // [0xbb04d30] Final|Native|Public  
	// Function /Script/JunoGameNative.JunoControllerComponent.GetBuilderTool
	// class AJunoBuilderTool* GetBuilderTool();                                                                                // [0xbb04cdc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoControllerComponent.ClientPrintPersistenceDataReport
	// void ClientPrintPersistenceDataReport(TArray<FString> Logs);                                                             // [0xbb04c4c] Net|NetReliableNative|Event|Public|NetClient|Const 
	// Function /Script/JunoGameNative.JunoControllerComponent.ClientNotifyInventoryFull
	// void ClientNotifyInventoryFull();                                                                                        // [0x81dc30c] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/JunoGameNative.JunoControllerComponent.AddRecipeToBuilderTool
	// void AddRecipeToBuilderTool(FName RecipeName);                                                                           // [0xbb04bcc] Final|Native|Public  
	// Function /Script/JunoGameNative.JunoControllerComponent.AddItemToBuilderToolOnEquip
	// void AddItemToBuilderToolOnEquip(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);                           // [0xbb04b08] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoControllerComponent.AddItemToBuilderTool
	// void AddItemToBuilderTool(class UFortItem* Item);                                                                        // [0xbb04a88] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoHealthComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UJunoHealthComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/JunoGameNative.JunoInputControllerComponent
/// Size: 0x0138 (0x0000A8 - 0x0001E0)
class UJunoInputControllerComponent : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	DMember(bool)                                      bCachedEnableClientSettingsRestoreInputPresets              OFFSET(get<bool>, {0xE8, 1, 1, 0})
	SMember(FJunoInputMapping)                         DefaultInputMapping                                         OFFSET(getStruct<T>, {0xF0, 16, 0, 0})
	SMember(FJunoInputMapping)                         BasicGameplayInputMapping                                   OFFSET(getStruct<T>, {0x100, 16, 0, 0})
	CMember(class UInputAction*)                       InputAction_HandleCameraToggle                              OFFSET(get<T>, {0x110, 8, 0, 0})
	CMember(class UInputAction*)                       InputAction_HandleAnimToggle                                OFFSET(get<T>, {0x118, 8, 0, 0})
	CMember(class UInputAction*)                       InputAction_HandleCyclePOI                                  OFFSET(get<T>, {0x120, 8, 0, 0})
	CMember(class UInputAction*)                       InputAction_HandleTeleportToCave                            OFFSET(get<T>, {0x128, 8, 0, 0})
	CMember(class UInputAction*)                       InputAction_NextQuickbarSlot                                OFFSET(get<T>, {0x130, 8, 0, 0})
	CMember(class UInputAction*)                       InputAction_NextQuickbarSlot_Delayed                        OFFSET(get<T>, {0x138, 8, 0, 0})
	CMember(class UInputAction*)                       InputAction_PrevQuickbarSlot                                OFFSET(get<T>, {0x140, 8, 0, 0})
	CMember(class UInputAction*)                       InputAction_PrevQuickbarSlot_Delayed                        OFFSET(get<T>, {0x148, 8, 0, 0})
	CMember(class UInputAction*)                       InputAction_HandleOpenHudMenu                               OFFSET(get<T>, {0x150, 8, 0, 0})
	CMember(class UInputAction*)                       InputAction_HandleOpenBuildingMenu                          OFFSET(get<T>, {0x158, 8, 0, 0})
	CMember(class UInputAction*)                       InputAction_HandleOpenMapMenu                               OFFSET(get<T>, {0x160, 8, 0, 0})
	CMember(class UInputAction*)                       InputAction_HandleOpenInventoryMenu                         OFFSET(get<T>, {0x168, 8, 0, 0})
	CMember(class UInputAction*)                       InputAction_HandleOpenEscapeMenu                            OFFSET(get<T>, {0x170, 8, 0, 0})
	CMember(class UInputAction*)                       InputAction_JunoBuildingStartPlacement                      OFFSET(get<T>, {0x178, 8, 0, 0})
	CMember(class UInputAction*)                       InputAction_ToggleBuildMode                                 OFFSET(get<T>, {0x180, 8, 0, 0})
	CMember(class UInputAction*)                       InputAction_TeleportPlayer                                  OFFSET(get<T>, {0x188, 8, 0, 0})
	CMember(class UInputAction*)                       InputAction_OffhandUse                                      OFFSET(get<T>, {0x190, 8, 0, 0})
	CMember(class UInputAction*)                       InputAction_FlyDown                                         OFFSET(get<T>, {0x198, 8, 0, 0})
	CMember(class UInputAction*)                       InputAction_FlyUp                                           OFFSET(get<T>, {0x1A0, 8, 0, 0})
	CMember(TArray<class UInputAction*>)               QuickbarBindings                                            OFFSET(get<T>, {0x1A8, 16, 0, 0})
	CMember(TArray<FJunoEnhancedInputActionToGameplayEvent>) InputActionsToGameplayEvents                          OFFSET(get<T>, {0x1B8, 16, 0, 0})
	DMember(bool)                                      bJunoIsFlying                                               OFFSET(get<bool>, {0x1C8, 1, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoInputControllerComponent.ReplaceInputMappingContext
	// void ReplaceInputMappingContext(FJunoInputMapping& InputMapping);                                                        // [0xbb05ad8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoInputControllerComponent.RemoveInputMappingContext
	// void RemoveInputMappingContext(class UInputMappingContext* InputMappingContext);                                         // [0xbb05a58] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/JunoGameNative.JunoInputControllerComponent.HandleOnCreativeFlyChangedDelegate
	// void HandleOnCreativeFlyChangedDelegate(bool bIsFlying);                                                                 // [0xbb05880] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoInputControllerComponent.AddInputMappingContext
	// void AddInputMappingContext(FJunoInputMapping& InputMapping);                                                            // [0xbb049f8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoLWITriggerComponent
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UJunoLWITriggerComponent : public UFortPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Class /Script/JunoGameNative.JunoPawnComponent
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UJunoPawnComponent : public UFortPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(bool)                                      bShouldSpawnDeathChest                                      OFFSET(get<bool>, {0xA8, 1, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoPawnComponent.ShouldPawnSpawnDeathChest
	// bool ShouldPawnSpawnDeathChest();                                                                                        // [0xaba5198] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPawnComponent.IsPlayerInCave
	// bool IsPlayerInCave();                                                                                                   // [0xbb05900] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoPawnComponent_EmotionalState
/// Size: 0x0090 (0x0000A8 - 0x000138)
class UJunoPawnComponent_EmotionalState : public UFortPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	SMember(FMulticastInlineDelegate)                  OnJunoCurrentEmotionalStateChangedDelegate                  OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnJunoCurrentEmotionalStateStartedChange                    OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnJunoCurrentEmotionChangeFinished                          OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCheatEmotionIndexChanged                                  OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
	CMember(EJunoPawnEmotionalState)                   CurrentEmotionalState                                       OFFSET(get<T>, {0xE8, 1, 0, 0})
	SMember(FJunoEmotionalStateData)                   TargetEmotionalState                                        OFFSET(getStruct<T>, {0xEC, 16, 0, 0})
	DMember(char)                                      CheatEmotionIndex                                           OFFSET(get<char>, {0xFC, 1, 0, 0})
	CMember(TArray<FJunoPawnEmotionalStateMappingFromAwesomeLevel>) JunoPawnEmotionalStateMappingFromAwesomeLevel  OFFSET(get<T>, {0x100, 16, 0, 0})
	DMember(float)                                     ResetToDefaultEmotionRate                                   OFFSET(get<float>, {0x118, 4, 0, 0})
	DMember(float)                                     TimeToStayAtEmotionInSeconds                                OFFSET(get<float>, {0x11C, 4, 0, 0})
	SMember(FTimerHandle)                              DefaultEmotionHandle                                        OFFSET(getStruct<T>, {0x128, 8, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoPawnComponent_EmotionalState.SetEmotionalState
	// void SetEmotionalState(FJunoEmotionalStateData Emotion);                                                                 // [0xbb06598] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPawnComponent_EmotionalState.SetCurrentEmotionalState
	// void SetCurrentEmotionalState(EJunoPawnEmotionalState NewEmotion);                                                       // [0xbb06518] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPawnComponent_EmotionalState.ResetToDefaultEmotionalState
	// void ResetToDefaultEmotionalState();                                                                                     // [0xbb05b68] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPawnComponent_EmotionalState.OnRep_TargetEmotionalState
	// void OnRep_TargetEmotionalState();                                                                                       // [0xbb05a44] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPawnComponent_EmotionalState.OnRep_CurrentEmotionalState
	// void OnRep_CurrentEmotionalState();                                                                                      // [0xbb059d8] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPawnComponent_EmotionalState.OnRep_CheatEmotionIndex
	// void OnRep_CheatEmotionIndex();                                                                                          // [0xbb059a4] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPawnComponent_EmotionalState.HandleJunoAwesomeLevelChanged
	// void HandleJunoAwesomeLevelChanged(FJunoAwesomeLevelChangeData& ChangeData);                                             // [0xbb05670] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoPawnComponent_EmotionalState.GetCurrentEmotionalStateValue
	// float GetCurrentEmotionalStateValue();                                                                                   // [0xbb04d18] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPawnComponent_EmotionalState.GetCurrentEmotionalState
	// EJunoPawnEmotionalState GetCurrentEmotionalState();                                                                      // [0xbb04d00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoPawnPhysicsRepulsionComponent
/// Size: 0x0030 (0x0000A0 - 0x0000D0)
class UJunoPawnPhysicsRepulsionComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	DMember(float)                                     PushOutMaxDistance                                          OFFSET(get<float>, {0xA0, 4, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoPawnPhysicsRepulsionComponent.SetCapsuleMass
	// void SetCapsuleMass(float InBaseForce);                                                                                  // [0xbb06490] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPawnPhysicsRepulsionComponent.HandleMovementModeChanged
	// void HandleMovementModeChanged(TEnumAsByte<EMovementMode> MovementMode, char CustomMode);                                // [0xbb057c4] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPawnPhysicsRepulsionComponent.HandleMovementBaseChanged
	// void HandleMovementBaseChanged(class UPrimitiveComponent* NewBaseComponent, FName BoneName);                             // [0xbb05700] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPawnPhysicsRepulsionComponent.HandleHeldObjectChanged
	// void HandleHeldObjectChanged(class AActor* HeldObject);                                                                  // [0xbb055f4] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPawnPhysicsRepulsionComponent.HandleComponentPhysicsStateChange
	// void HandleComponentPhysicsStateChange(class UPrimitiveComponent* ChangedComponent, EComponentPhysicsStateChange StateChange); // [0xbb05408] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPawnPhysicsRepulsionComponent.HandleComponentHit
	// void HandleComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& Hit); // [0xbb05048] Final|Native|Private|HasOutParms|HasDefaults 
	// Function /Script/JunoGameNative.JunoPawnPhysicsRepulsionComponent.GetCapsuleMass
	// float GetCapsuleMass();                                                                                                  // [0x6367514] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoPlayerState
/// Size: 0x0020 (0x001888 - 0x0018A8)
class AJunoPlayerState : public AFortPlayerStateAthena
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6312;

public:
	SMember(FGuid)                                     CaveId                                                      OFFSET(getStruct<T>, {0x1888, 16, 0, 0})
	CMember(TArray<FLinearColor>)                      PinColorForPlayer                                           OFFSET(get<T>, {0x1898, 16, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoPlayerState.GetCaveId
	// FGuid GetCaveId();                                                                                                       // [0xbb3c2d0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoWorldStreamingSourceProviderInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoWorldStreamingSourceProviderInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoControllerComponent_StreamingSources
/// Size: 0x0050 (0x000110 - 0x000160)
class UJunoControllerComponent_StreamingSources : public UFortControllerComponent_StreamingSources
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
};

/// Class /Script/JunoGameNative.PlayspaceComponent_JunoAIPersistence
/// Size: 0x0120 (0x0000F8 - 0x000218)
class UPlayspaceComponent_JunoAIPersistence : public UFortPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
};

/// Class /Script/JunoGameNative.PlayspaceComponent_JunoPerformance
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UPlayspaceComponent_JunoPerformance : public UPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/JunoGameNative.PlayspaceComponent_JunoServerExpiration
/// Size: 0x0018 (0x0001B8 - 0x0001D0)
class UPlayspaceComponent_JunoServerExpiration : public UPlayspaceComponent_ServerExpiration
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
	DMember(bool)                                      bUseConfigAlertDataList                                     OFFSET(get<bool>, {0x1B8, 1, 0, 0})
	CMember(TArray<FServerExpirationAlertData>)        ConfigAlertDataList                                         OFFSET(get<T>, {0x1C0, 16, 0, 0})
};

/// Class /Script/JunoGameNative.JunoClusterUnionCustomRepNode
/// Size: 0x0070 (0x000050 - 0x0000C0)
class UJunoClusterUnionCustomRepNode : public UFortReplicationGraphNode_Custom
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TArray<class AJunoClusterUnionActor*>)     AllClusterUnions                                            OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TSet<AJunoClusterUnionActor*>)             FlushedClusterUnionsWhenIrrelevant                          OFFSET(get<T>, {0x60, 80, 0, 0})
};

/// Class /Script/JunoGameNative.JunoAction
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoAction : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoAction.K2_OnExecuteAction
	// void K2_OnExecuteAction(FJunoActionTargetPayload& ActionTargetPayload, class UJunoActionConfig* Config);                 // [0x2177018] Event|Protected|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/JunoGameNative.JunoAction_SetStaticMesh
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoAction_SetStaticMesh : public UJunoAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoBuildingActorCountMetric
/// Size: 0x0008 (0x000028 - 0x000030)
class UJunoBuildingActorCountMetric : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UDataTable*)                         BuildLimitPools                                             OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/JunoGameNative.JunoBuildingActorCountMetricComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UJunoBuildingActorCountMetricComponent : public UGameStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(class UClass*)                             JunoBuildingMetricClass                                     OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(class UJunoBuildingActorCountMetric*)      JunoBuildingMetric                                          OFFSET(get<T>, {0xA8, 8, 0, 0})
};

/// Class /Script/JunoGameNative.JunoBuildingActorMetric
/// Size: 0x0130 (0x000040 - 0x000170)
class UJunoBuildingActorMetric : public USpatialMetric
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FScalableFloat)                            MinValue                                                    OFFSET(getStruct<T>, {0x48, 40, 0, 0})
	SMember(FScalableFloat)                            NetworkRelevantActorCountThreshold                          OFFSET(getStruct<T>, {0x70, 40, 0, 0})
	SMember(FScalableFloat)                            SpatialPrecision                                            OFFSET(getStruct<T>, {0x98, 40, 0, 0})
	CMember(TMap<FJunoTrackedActorKey, FJunoRelevantActorTrackingData>) ActorCounts                                OFFSET(get<T>, {0xC0, 80, 0, 0})
	CMember(TSet<FJunoTrackedActor>)                   TrackedActors                                               OFFSET(get<T>, {0x110, 80, 0, 0})
	CMember(TArray<class UClass*>)                     TrackedClasses                                              OFFSET(get<T>, {0x160, 16, 0, 0})
};

/// Class /Script/JunoGameNative.JunoBuildingSpatialMetricComponent
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class UJunoBuildingSpatialMetricComponent : public UGameStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(TWeakObjectPtr<UClass*>)                   JunoBuildingMetricClass                                     OFFSET(get<T>, {0xA0, 32, 0, 0})
	CMember(TWeakObjectPtr<UJunoBuildingActorMetric*>) JunoBuildingMetric                                          OFFSET(get<T>, {0xC0, 8, 0, 0})
};

/// Class /Script/JunoGameNative.JunoAssetList
/// Size: 0x0010 (0x000028 - 0x000038)
class UJunoAssetList : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FSoftObjectPath>)                   Assets                                                      OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/JunoGameNative.JunoBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.SpawnPersistentActor
	// class AActor* SpawnPersistentActor(class UObject* WorldContextObject, class UClass*& ActorClass, FTransform& SpawnTransform, class APawn* Instigator, class AJunoPersistentPlayspace* Playspace, FGameplayTagQuery PlayspaceTagQuery); // [0xbb3e1fc] Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.SetGeometryCollectionISMPoolCustomInstanceData
	// void SetGeometryCollectionISMPoolCustomInstanceData(class UGeometryCollectionComponent* GeometryCollectionComponent, int32_t CustomDataIndex, float CustomDataValue); // [0xbb3e0c4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.JunoForEachActorComponentConstDelegate__DelegateSignature
	// void JunoForEachActorComponentConstDelegate__DelegateSignature(class UActorComponent* Component);                        // [0x2177018] Public|Delegate      
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.IsFreshWorld
	// bool IsFreshWorld(class UObject* WorldContextObject);                                                                    // [0xbb3d6f4] Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.IsFirstPlayerSpawn
	// bool IsFirstPlayerSpawn(class AFortPlayerPawn* PlayerPawn);                                                              // [0xbb3d674] Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetWorldStartPosition
	// void GetWorldStartPosition(class UObject* WorldContextObject, FVector& Location, bool& bIsReady);                        // [0xbb3d520] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetPreviewSmartObjectEntranceLocationsWithValidation
	// bool GetPreviewSmartObjectEntranceLocationsWithValidation(class UObject* WorldContextObject, FTransform& WorldTransform, class USmartObjectDefinition* SmartObjectDefinition, class AActor* SkipActor, FSmartObjectSlotEntranceLocationRequest& Request, TArray<FSmartObjectSlotEntranceLocationResult>& Results); // [0xbb3d1b0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetPreviewSmartObjectEntranceLocations
	// bool GetPreviewSmartObjectEntranceLocations(FTransform& WorldTransform, class USmartObjectDefinition* SmartObjectDefinition, TArray<FSmartObjectSlotEntranceLocationResult>& Results); // [0xbb3ce24] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetPlayspaceComponentFromPlayspace
	// class UPlayspaceComponent* GetPlayspaceComponentFromPlayspace(class AActor* Actor, class UClass* ComponentClass, class UClass* PlayspaceClass); // [0xbb3cc9c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetPlayspaceComponentByInterface
	// class UPlayspaceComponent* GetPlayspaceComponentByInterface(class AActor* Actor, class UClass* InterfaceClass, class UClass* PlayspaceClass); // [0xbb3cae8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetPlayerSaveData
	// FJunoPlayerSaveData GetPlayerSaveData(class AController* PlayerController, bool& bIsValid);                              // [0xbb3c920] Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetMergedMeshComponents
	// TArray<UPrimitiveComponent*> GetMergedMeshComponents(class UObject* WorldContextObject);                                 // [0xbb3c88c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetMapManagerComponent
	// class UJunoMapManagerComponent* GetMapManagerComponent(class UObject* WorldContextObject);                               // [0xbb3c80c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetKnownCraftingRecipes
	// void GetKnownCraftingRecipes(class AFortPlayerController* FortPC, class AActor* CraftingObject, TArray<FName>& OutFormulas); // [0xbb3c57c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetIsWorldOwner
	// bool GetIsWorldOwner(class AFortPlayerController* PC);                                                                   // [0xbb3c4fc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetDistanceToWorldStartPosition
	// double GetDistanceToWorldStartPosition(class UObject* WorldContextObject, FVector& Location, bool& bIsReady);            // [0xbb3c3a4] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetCountOfResourcesInAIResourcesInventory
	// int32_t GetCountOfResourcesInAIResourcesInventory(class AActor* AIActor);                                                // [0xbb3c2ec] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetBoneIndex
	// int32_t GetBoneIndex(class USkeletalMesh* SkeletalMesh, FName BoneName);                                                 // [0xbb3c1e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetBiomeInformationForActor
	// void GetBiomeInformationForActor(class AActor* Actor, FJunoBiomeInfoQueryResult& OutResult);                             // [0xbb3c030] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetBiomeInformationAtLocation
	// void GetBiomeInformationAtLocation(class UObject* WorldContextObject, FVector& Location, FJunoBiomeInfoQueryResult& OutResult); // [0xbb3bed0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetBiomeForActor
	// void GetBiomeForActor(class AActor* Actor, EJunoBiome& OutResult);                                                       // [0xbb3bd1c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetAMSCustomizableObjectInstance
	// class UCustomizableObjectInstance* GetAMSCustomizableObjectInstance(class AActor* Actor);                                // [0xbb3bbc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetAMSAnimDataAssetsFromActor
	// bool GetAMSAnimDataAssetsFromActor(class AActor* Actor, FAssembledMeshSchemaData_AnimDataAssets& AnimData);              // [0xbb3bab0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetAMSAnimDataAssets
	// bool GetAMSAnimDataAssets(class AFortPlayerPawn* FortPlayerPawn, FAssembledMeshSchemaData_AnimDataAssets& AnimData);     // [0xbb3bab0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetActorPersistentPlayspace
	// class AJunoPersistentPlayspace* GetActorPersistentPlayspace(class AActor* Actor);                                        // [0xbb3bc6c] Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.ForEachComponentOfActorClassDefault
	// void ForEachComponentOfActorClassDefault(class UClass*& ActorClass, class UClass*& ComponentClass, FDelegateProperty& Func); // [0xbb3b954] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.CostlyFindAIDisplayNameFromUniqueAIIdentifier
	// FText CostlyFindAIDisplayNameFromUniqueAIIdentifier(class UObject* WorldContextObject, FGameplayTag& UniqueAIIdentifier); // [0xbb3b840] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.BreakHitResultThreadSafe
	// void BreakHitResultThreadSafe(FHitResult& Hit, bool& bBlockingHit, bool& bInitialOverlap, float& Time, float& Distance, FVector& Location, FVector& ImpactPoint, FVector& Normal, FVector& ImpactNormal, class UPhysicalMaterial*& PhysMat, class AActor*& HitActor, class UPrimitiveComponent*& HitComponent, FName& HitBoneName, FName& BoneName, int32_t& HitItem, int32_t& ElementIndex, int32_t& FaceIndex, FVector& TraceStart, FVector& TraceEnd); // [0xbb3b048] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/JunoGameNative.JunoCheatManager
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoCheatManager : public UChildCheatManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoCheatManager.JunoUpdateWorldLastAccessTime
	// void JunoUpdateWorldLastAccessTime(FString JunoWorldId);                                                                 // [0x8bef450] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoTurnOnWorldSetting
	// void JunoTurnOnWorldSetting(FName WorldSetting);                                                                         // [0x86d247c] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoTurnOffWorldSetting
	// void JunoTurnOffWorldSetting(FName WorldSetting);                                                                        // [0x86d247c] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoTransitionWeatherNow
	// void JunoTransitionWeatherNow(FName OptionalLocation);                                                                   // [0x86d247c] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoToggleKnowledgeFiltering
	// void JunoToggleKnowledgeFiltering();                                                                                     // [0x32e6c74] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoToggleFreeCrafting
	// void JunoToggleFreeCrafting();                                                                                           // [0x32e6c74] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoShowDualLocalPlayerInventory
	// void JunoShowDualLocalPlayerInventory();                                                                                 // [0x32e6c74] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoSetEmotion
	// void JunoSetEmotion(int32_t EmotionIndex);                                                                               // [0x664cbb0] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoSavePersistenceDataCsvReport
	// void JunoSavePersistenceDataCsvReport();                                                                                 // [0x32e6c74] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoRevealRecipesOfCategory
	// void JunoRevealRecipesOfCategory(FName CraftingObjectTag, FName CategoryTag, FName SubCategoryTag);                      // [0xbb3dfe4] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoRevealRecipe
	// void JunoRevealRecipe(FName RecipeName);                                                                                 // [0x86d247c] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoRevealBuildingTestRecipes
	// void JunoRevealBuildingTestRecipes();                                                                                    // [0x32e6c74] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoResaveAllPersistentPlayspacesActorsAroundPlayer
	// void JunoResaveAllPersistentPlayspacesActorsAroundPlayer(float Max2DDistance);                                           // [0x69d95c4] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoResaveAllPersistentPlayspacesActors
	// void JunoResaveAllPersistentPlayspacesActors();                                                                          // [0x32e6c74] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoProfiler_Item
	// void JunoProfiler_Item();                                                                                                // [0x32e6c74] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoProfiler_Creature
	// void JunoProfiler_Creature();                                                                                            // [0x32e6c74] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoProfiler_BuildingSuburb
	// void JunoProfiler_BuildingSuburb(int32_t NumBuildings);                                                                  // [0x664cbb0] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoProfiler_BuildingJunkyard
	// void JunoProfiler_BuildingJunkyard(int32_t NumBuildings);                                                                // [0x664cbb0] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoProfiler_BuildingActor
	// void JunoProfiler_BuildingActor();                                                                                       // [0x32e6c74] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoProcessPlayerProgression
	// void JunoProcessPlayerProgression();                                                                                     // [0x32e6c74] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoPrintWorldSettings
	// void JunoPrintWorldSettings();                                                                                           // [0x32e6c74] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoPrintPersistenceDataReport
	// void JunoPrintPersistenceDataReport(bool bShowTemplateData, bool bShowActorInstanceData, bool bShowJunoUpdateActions, bool bShowJunoDeleteActions); // [0xbb3dec4] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoPrintConnectivityGraphSummary
	// void JunoPrintConnectivityGraphSummary();                                                                                // [0x32e6c74] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoPrintAreaAwesomeLevelInfo
	// void JunoPrintAreaAwesomeLevelInfo();                                                                                    // [0x32e6c74] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoLogPersistenceDebugInfo
	// void JunoLogPersistenceDebugInfo();                                                                                      // [0x32e6c74] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoListWorlds
	// void JunoListWorlds();                                                                                                   // [0x32e6c74] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoGiveWeapon
	// void JunoGiveWeapon(FString WeaponPath);                                                                                 // [0x8bef450] Final|Exec|Native|Private|Const 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoForceWeatherState
	// void JunoForceWeatherState(FName NewWeatherType, FName OptionalLocation);                                                // [0x681c918] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoForcePlayerTemperature
	// void JunoForcePlayerTemperature(FName NewTemperatureTag);                                                                // [0x86d247c] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoEnableSpawnedActorPersistentPlayspaceTracking
	// void JunoEnableSpawnedActorPersistentPlayspaceTracking(FName ActorName);                                                 // [0x86d247c] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoEnableModeratorMode
	// void JunoEnableModeratorMode();                                                                                          // [0x32e6c74] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoEnableFreeBuild
	// void JunoEnableFreeBuild();                                                                                              // [0x32e6c74] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoDumpWorldPersistentContents
	// void JunoDumpWorldPersistentContents();                                                                                  // [0x32e6c74] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoDisableModeratorMode
	// void JunoDisableModeratorMode();                                                                                         // [0x32e6c74] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoDisableFreeBuild
	// void JunoDisableFreeBuild();                                                                                             // [0x32e6c74] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoDestroyCurrentVillage
	// void JunoDestroyCurrentVillage();                                                                                        // [0x32e6c74] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoDestroyAllSupportStructures
	// void JunoDestroyAllSupportStructures();                                                                                  // [0x32e6c74] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoDeleteWorld
	// void JunoDeleteWorld(FString JunoWorldId);                                                                               // [0x8bef450] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoDeleteAllWorlds
	// void JunoDeleteAllWorlds();                                                                                              // [0x32e6c74] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoCreateNewWorld
	// void JunoCreateNewWorld(FString Title, int32_t AdventureSeed, FString WorldDevMetadata);                                 // [0xbb3d774] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoCreateCurrentWorldCheckpoint
	// void JunoCreateCurrentWorldCheckpoint();                                                                                 // [0x32e6c74] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoCompleteGuidedBuild
	// void JunoCompleteGuidedBuild();                                                                                          // [0x32e6c74] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoClearKnowledgeCloudSave
	// void JunoClearKnowledgeCloudSave();                                                                                      // [0x32e6c74] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoClearFOW
	// void JunoClearFOW(bool bForCurrentTile);                                                                                 // [0x5fe71f4] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoClearClientFOW
	// void JunoClearClientFOW(bool bForCurrentTile);                                                                           // [0x5fe71f4] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoCheckInWorldSaveDataAndExitPIE
	// void JunoCheckInWorldSaveDataAndExitPIE();                                                                               // [0x32e6c74] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoAdjustAreaAwesomePoints
	// void JunoAdjustAreaAwesomePoints(int32_t AwesomePointsDelta);                                                            // [0x664cbb0] Final|BlueprintAuthorityOnly|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoAddEssence
	// void JunoAddEssence(FString EssencePath);                                                                                // [0x8bef450] Final|Exec|Native|Private|Const 
};

/// Class /Script/JunoGameNative.JunoGlobals
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoGlobals : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoWeatherPersistenceFeatureData
/// Size: 0x0018 (0x000040 - 0x000058)
class UJunoWeatherPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FJunoWeatherSaveData)                      WeatherSaveData                                             OFFSET(getStruct<T>, {0x48, 16, 0, 0})
};

/// Class /Script/JunoGameNative.JunoWeatherPersistenceFeatureDataActor
/// Size: 0x0010 (0x0002D0 - 0x0002E0)
class AJunoWeatherPersistenceFeatureDataActor : public AJunoPersistenceFeatureDataActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	CMember(TArray<FSavedWeather>)                     SavedWeathers                                               OFFSET(get<T>, {0x2D0, 16, 0, 0})
};

/// Class /Script/JunoGameNative.JunoWeatherPersistenceFeatureDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoWeatherPersistenceFeatureDataInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoWorldConditionWeatherState
/// Size: 0x0020 (0x000028 - 0x000048)
class UJunoWorldConditionWeatherState : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoWorldConditionWeatherState.HandleWeatherChanged
	// void HandleWeatherChanged(FJunoEvent_WeatherPhaseChanged& Payload);                                                      // [0xbb4ca74] Final|Native|Private|HasOutParms 
};

/// Class /Script/JunoGameNative.BlockOctreeManager
/// Size: 0x0168 (0x000290 - 0x0003F8)
class ABlockOctreeManager : public AInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1016;

public:
	DMember(int32_t)                                   RelevancyRadius                                             OFFSET(get<int32_t>, {0x290, 4, 0, 0})
	DMember(int32_t)                                   MaxISMCsToPopulateAFrame                                    OFFSET(get<int32_t>, {0x294, 4, 0, 0})
	DMember(bool)                                      bRenderAllBricks                                            OFFSET(get<bool>, {0x298, 1, 0, 0})
	CMember(TMap<int32_t, UInstancedStaticMeshComponent*>) CellIdToISMC                                            OFFSET(get<T>, {0x340, 80, 0, 0})
	CMember(class UInstancedStaticMeshComponent*)      ISMC                                                        OFFSET(get<T>, {0x3A0, 8, 0, 0})
	CMember(TArray<class UInstancedStaticMeshComponent*>) ISMCFreeList                                             OFFSET(get<T>, {0x3A8, 16, 0, 0})
	CMember(TArray<FVector>)                           Positions                                                   OFFSET(get<T>, {0x3C8, 16, 0, 0})
	CMember(TArray<FLinearColor>)                      Colors                                                      OFFSET(get<T>, {0x3D8, 16, 0, 0})
	CMember(TArray<FLinearColor>)                      RandomColors                                                OFFSET(get<T>, {0x3E8, 16, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.BlockOctreeManager.Towers
	// void Towers(int32_t Rows, int32_t Cols);                                                                                 // [0xbb4cb94] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.StressISMManager
/// Size: 0x0060 (0x000290 - 0x0002F0)
class AStressISMManager : public AInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	DMember(bool)                                      bPushUpdatesEveryTick                                       OFFSET(get<bool>, {0x290, 1, 0, 0})
	CMember(class UInstancedStaticMeshComponent*)      ISMC                                                        OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(TArray<class UInstancedStaticMeshComponent*>) ChildISMC                                                OFFSET(get<T>, {0x2A0, 16, 0, 0})
	CMember(TArray<FVector>)                           Positions                                                   OFFSET(get<T>, {0x2B0, 16, 0, 0})
	CMember(TArray<FRotator>)                          Rotations                                                   OFFSET(get<T>, {0x2C0, 16, 0, 0})
	CMember(TArray<FLinearColor>)                      Colors                                                      OFFSET(get<T>, {0x2D0, 16, 0, 0})
	CMember(TArray<FLinearColor>)                      RandomColors                                                OFFSET(get<T>, {0x2E0, 16, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.StressISMManager.Towers
	// void Towers(int32_t Rows, int32_t Cols, int32_t Height);                                                                 // [0xbb4cc54] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.StressISMManager.SetNumChildISMC
	// void SetNumChildISMC(int32_t Num);                                                                                       // [0xbb4cb14] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.StressISMManager.PushUpdatesToISMC
	// void PushUpdatesToISMC();                                                                                                // [0xbb4cb00] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/JunoGameNative.SoundBreakEvent
/// Size: 0x0040 (0x000000 - 0x000040)
class FSoundBreakEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FGuid)                                     UniqueID                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	DMember(int32_t)                                   BreakEventNum                                               OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(float)                                     AccumulatedMass                                             OFFSET(get<float>, {0x2C, 4, 0, 0})
	CMember(class UPhysicalMaterial*)                  PhysMaterial                                                OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.SoundCollisionEvent
/// Size: 0x0058 (0x000000 - 0x000058)
class FSoundCollisionEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FGuid)                                     UniqueID                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	DMember(int32_t)                                   CollisionEventNum                                           OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(float)                                     AccumulatedMass                                             OFFSET(get<float>, {0x2C, 4, 0, 0})
	SMember(FVector)                                   DeltaVelocity                                               OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	CMember(class UPhysicalMaterial*)                  PhysMaterial                                                OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_EnterBuildModePreview
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoEvent_EnterBuildModePreview : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class AFortPlayerController*)              SourceController                                            OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class AJunoBuilderTool*)                   BuilderTool                                                 OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_ExitBuildModePreview
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoEvent_ExitBuildModePreview : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class AFortPlayerController*)              SourceController                                            OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class AJunoBuilderTool*)                   BuilderTool                                                 OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingBehaviorStateContext
/// Size: 0x0030 (0x000000 - 0x000030)
class FJunoBuildingBehaviorStateContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TWeakObjectPtr<UPrimitiveComponent*>)      OverlappedPreviewComponent                                  OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FJunoBuildingMultiOverlapResult)           OverlapResult                                               OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	CMember(TArray<FJunoBuildingSupportedComponent>)   SupportedComponents                                         OFFSET(get<T>, {0x18, 16, 0, 0})
	DMember(bool)                                      bBlockedByAssembly                                          OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      bGuidedBuildMisplacement                                    OFFSET(get<bool>, {0x29, 1, 0, 0})
	DMember(bool)                                      bBlockedByActorCount                                        OFFSET(get<bool>, {0x2A, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingSupportedComponent
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoBuildingSupportedComponent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TWeakObjectPtr<UPrimitiveComponent*>)      Component                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FJunoBuildingFloatingResult)               Result                                                      OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingFloatingResult
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoBuildingFloatingResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<TWeakObjectPtr<UPrimitiveComponent*>>) SupportingComponents                                     OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingMultiOverlapResult
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoBuildingMultiOverlapResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FJunoBuildingOverlapResult>)        Overlaps                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingOverlapResult
/// Size: 0x0038 (0x000000 - 0x000038)
class FJunoBuildingOverlapResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TWeakObjectPtr<AActor*>)                   OverlappedActor                                             OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TWeakObjectPtr<UPrimitiveComponent*>)      OverlappedComponent                                         OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TArray<FBox>)                              Intersections                                               OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FVector)                                   MTD                                                         OFFSET(getStruct<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoTemperatureChangedEvent
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoTemperatureChangedEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class AActor*)                             Actor                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FGameplayTag)                              OldTemperature                                              OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FGameplayTag)                              NewTemperature                                              OFFSET(getStruct<T>, {0xC, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoTemperatureRangesChangedEvent
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoTemperatureRangesChangedEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class AActor*)                             Actor                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<FTemperatureRange>)                 NewTemperatureRanges                                        OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.TemperatureRange
/// Size: 0x0014 (0x000000 - 0x000014)
class FTemperatureRange : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FGameplayTag)                              tag                                                         OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FFloatRange)                               Range                                                       OFFSET(getStruct<T>, {0x4, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_TemperatureChanged
/// Size: 0x000C (0x000000 - 0x00000C)
class FJunoEvent_TemperatureChanged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FJunoWeatherLocation)                      Location                                                    OFFSET(getStruct<T>, {0x0, 2, 0, 0})
	SMember(FGameplayTag)                              NewTemperature                                              OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	DMember(float)                                     NewFloatTemperature                                         OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoWeatherLocation
/// Size: 0x0002 (0x000000 - 0x000002)
class FJunoWeatherLocation : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	CMember(EJunoBiome)                                Biome                                                       OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EJunoBiomeHabitat)                         Habitat                                                     OFFSET(get<T>, {0x1, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_WeatherPhaseChanged
/// Size: 0x0078 (0x000000 - 0x000078)
class FJunoEvent_WeatherPhaseChanged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FJunoWeatherLocation)                      Location                                                    OFFSET(getStruct<T>, {0x0, 2, 0, 0})
	SMember(FJunoWeatherPhase)                         NewWeatherPhase                                             OFFSET(getStruct<T>, {0x8, 56, 0, 0})
	SMember(FJunoWeatherPhase)                         NextWeatherPhase                                            OFFSET(getStruct<T>, {0x40, 56, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoWeatherPhase
/// Size: 0x0038 (0x000000 - 0x000038)
class FJunoWeatherPhase : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FGameplayTag)                              WeatherTypeName                                             OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(float)                                     TransitionIn                                                OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     TransitionOut                                               OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     WindDirectionDegree                                         OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     duration                                                    OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     WeatherIntensity                                            OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     WindSpeed                                                   OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(double)                                    GameTimeWeatherEnds                                         OFFSET(get<double>, {0x20, 8, 0, 0})
	SMember(FGameplayTag)                              MorningTemperature                                          OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	SMember(FGameplayTag)                              DayTemperature                                              OFFSET(getStruct<T>, {0x2C, 4, 0, 0})
	SMember(FGameplayTag)                              EveningTemperature                                          OFFSET(getStruct<T>, {0x30, 4, 0, 0})
	SMember(FGameplayTag)                              NightTemperature                                            OFFSET(getStruct<T>, {0x34, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoCampAwesomeStatsData
/// Size: 0x0014 (0x000000 - 0x000014)
class FJunoCampAwesomeStatsData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(int32_t)                                   CurrentAwesomePoints                                        OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   AwesomeLevelFloor                                           OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   AwesomeLevel                                                OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   MaxAwesomeLevel                                             OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(bool)                                      bIsFromPersistence                                          OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoAwesomeLevelChangeData
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoAwesomeLevelChangeData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   NewAwesomeLevel                                             OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   OldAwesomeLevel                                             OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   CurrentAwesomePoints                                        OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	CMember(class AJunoCampActor*)                     OwningCamp                                                  OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoAwesomePointModificationData
/// Size: 0x0028 (0x000000 - 0x000028)
class FJunoAwesomePointModificationData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   AwesomePointAmount                                          OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   AwesomePointsPostModification                               OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	CMember(class AActor*)                             SourceActor                                                 OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class AActor*)                             TargetActor                                                 OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(EJunoAwesomePointModificationContext)      ModificationContext                                         OFFSET(get<T>, {0x18, 1, 0, 0})
	CMember(class AJunoCampActor*)                     OwningCamp                                                  OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoCampRemovalStatusData
/// Size: 0x000C (0x000000 - 0x00000C)
class FJunoCampRemovalStatusData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(bool)                                      bIsSoftRemoved                                              OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     RemainingRealSecondsBeforeHardRemoval                       OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      bIsInitialized                                              OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoMoodStateData
/// Size: 0x0004 (0x000000 - 0x000004)
class FJunoMoodStateData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FGameplayTag)                              MoodTag                                                     OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoMoodReactionPayload
/// Size: 0x000C (0x000000 - 0x00000C)
class FJunoMoodReactionPayload : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FGameplayTag)                              MoodReactionTag                                             OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FGameplayTag)                              SoundLibraryTag                                             OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FGameplayCueTag)                           GameplayCueTag                                              OFFSET(getStruct<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoRecruitmentObjectAssignedData
/// Size: 0x0080 (0x000000 - 0x000080)
class FJunoRecruitmentObjectAssignedData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FGuid)                                     CampGuid                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FGameplayTag)                              UniqueAIIdentifier                                          OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	SMember(FUniqueNetIdRepl)                          PlayerNetId                                                 OFFSET(getStruct<T>, {0x18, 48, 0, 0})
	SMember(FText)                                     DisplayText                                                 OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               NPCPortrait                                                 OFFSET(get<T>, {0x60, 32, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoWeatherLocationChangedEvent
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoWeatherLocationChangedEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class AActor*)                             Actor                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FJunoWeatherLocation)                      OldLocation                                                 OFFSET(getStruct<T>, {0x8, 2, 0, 0})
	SMember(FJunoWeatherLocation)                      NewLocation                                                 OFFSET(getStruct<T>, {0xA, 2, 0, 0})
};

/// Struct /Script/JunoGameNative.GuidedBuildingMessageBase
/// Size: 0x0008 (0x000000 - 0x000008)
class FGuidedBuildingMessageBase : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(TWeakObjectPtr<AJunoGuidedBuildingActor*>) GuidedBuildingActor                                         OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.GuidedBuildingUpdate
/// Size: 0x0038 (0x000008 - 0x000040)
class FGuidedBuildingUpdate : public FGuidedBuildingMessageBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FJunoStageKey)                             StageKey                                                    OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FJunoStageKey)                             CurrentStageKey                                             OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	DMember(int32_t)                                   TotalNumberOfStagesInSection                                OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   TotalNumberOfSections                                       OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	DMember(int32_t)                                   CurrentStageInSet                                           OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   TotalNumberOfStagesInSet                                    OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	DMember(int32_t)                                   CurrentNumberOfSnapsInStage                                 OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   TotalNumberOfSnapsInStage                                   OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   CurrentNumberOfSnapsInSection                               OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   TotalNumberOfSnapsInSection                                 OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	DMember(int32_t)                                   CurrentNumberOfSnapsInSet                                   OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   TotalNumberOfSnapsInSet                                     OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoStageKey
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoStageKey : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   SectionIndex                                                OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   StageIndex                                                  OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.AssembledMeshSchemaData_AnimDataAssets
/// Size: 0x004F (0x000001 - 0x000050)
class FAssembledMeshSchemaData_AnimDataAssets : public FAssembledMeshSchemaData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FName, UPrimaryDataAsset*>)           DataAssetMap                                                OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBiomeInfoQueryResult
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoBiomeInfoQueryResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(EJunoBiome)                                PrimaryBiome                                                OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EJunoBiome)                                SecondaryBiome                                              OFFSET(get<T>, {0x1, 1, 0, 0})
	CMember(EJunoBiomeHabitat)                         PrimaryHabitat                                              OFFSET(get<T>, {0x2, 1, 0, 0})
	CMember(EJunoBiomeHabitat)                         SecondaryHabitat                                            OFFSET(get<T>, {0x3, 1, 0, 0})
	CMember(EJunoCaveType)                             CaveType                                                    OFFSET(get<T>, {0x4, 1, 0, 0})
	DMember(float)                                     BiomeMix                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     HabitatMix                                                  OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoPlayerSaveData
/// Size: 0x00E8 (0x000000 - 0x0000E8)
class FJunoPlayerSaveData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FVector)                                   SpawnPosition                                               OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   OriginalSpawnPosition                                       OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FRotator)                                  Rotation                                                    OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FJunoInventoryHandle)                      InventoryHandle                                             OFFSET(getStruct<T>, {0x48, 36, 0, 0})
	CMember(TArray<FGameplayTag>)                      CompletedFirstTimeConversationNPCIdentifiers                OFFSET(get<T>, {0x70, 16, 0, 0})
	DMember(int32_t)                                   WorldVisitCount                                             OFFSET(get<int32_t>, {0x80, 4, 0, 0})
	SMember(FJunoPlayerStats)                          PlayerStats                                                 OFFSET(getStruct<T>, {0x84, 8, 0, 0})
	SMember(FJunoPlayerCheckpoint)                     CheckpointInfo                                              OFFSET(getStruct<T>, {0x90, 56, 0, 0})
	DMember(int32_t)                                   CampCreatedCount                                            OFFSET(get<int32_t>, {0xC8, 4, 0, 0})
	SMember(FVector)                                   LastCaveTeleporterLocation                                  OFFSET(getStruct<T>, {0xD0, 24, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoPlayerCheckpoint
/// Size: 0x0038 (0x000000 - 0x000038)
class FJunoPlayerCheckpoint : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FGuid)                                     CheckpointGUID                                              OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(class AActor*)                             CheckpointActor                                             OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FVector)                                   CheckpointLocation                                          OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	DMember(bool)                                      bHasCheckpointActor                                         OFFSET(get<bool>, {0x30, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoPlayerStats
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoPlayerStats : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     Health                                                      OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Hunger                                                      OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoInventoryHandle
/// Size: 0x0024 (0x000000 - 0x000024)
class FJunoInventoryHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	SMember(FGuid)                                     Guid                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TWeakObjectPtr<AJunoInventory*>)           Inventory                                                   OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoItemSlot
/// Size: 0x0044 (0x00000C - 0x000050)
class FJunoItemSlot : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FGameplayTag)                              GroupTag                                                    OFFSET(getStruct<T>, {0xC, 4, 0, 0})
	SMember(FGameplayTagContainer)                     SlotTags                                                    OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	DMember(int32_t)                                   RowIndex                                                    OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   ColumnIndex                                                 OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	SMember(FGuid)                                     ItemGuid                                                    OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	CMember(class UFortItem*)                          Item                                                        OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoItemTransferRequest
/// Size: 0x00B8 (0x000000 - 0x0000B8)
class FJunoItemTransferRequest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FJunoItemSlot)                             SourceItemSlot                                              OFFSET(getStruct<T>, {0x0, 80, 0, 0})
	SMember(FJunoItemSlot)                             DestinationItemSlot                                         OFFSET(getStruct<T>, {0x50, 80, 0, 0})
	CMember(class UJunoInventoryComponent*)            SourceInventoryComponent                                    OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(class UJunoInventoryComponent*)            DestinationInventoryComponent                               OFFSET(get<T>, {0xA8, 8, 0, 0})
	DMember(int32_t)                                   Count                                                       OFFSET(get<int32_t>, {0xB0, 4, 0, 0})
	DMember(bool)                                      bTopOffExistingStacks                                       OFFSET(get<bool>, {0xB4, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoTakeItemRequest
/// Size: 0x0078 (0x000000 - 0x000078)
class FJunoTakeItemRequest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FJunoItemSlot)                             SourceItemSlot                                              OFFSET(getStruct<T>, {0x0, 80, 0, 0})
	CMember(class UJunoInventoryComponent*)            SourceInventoryComponent                                    OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(class UJunoInventoryComponent*)            DestinationInventoryComponent                               OFFSET(get<T>, {0x58, 8, 0, 0})
	DMember(int32_t)                                   Count                                                       OFFSET(get<int32_t>, {0x60, 4, 0, 0})
	CMember(TArray<FGameplayTag>)                      PreferredDestinationGroupOrder                              OFFSET(get<T>, {0x68, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoSelectedSlotData
/// Size: 0x000C (0x000000 - 0x00000C)
class FJunoSelectedSlotData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FGameplayTag)                              GroupTag                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   RowIndex                                                    OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   ColumnIndex                                                 OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoReplicatedItemSlotList
/// Size: 0x0020 (0x000108 - 0x000128)
class FJunoReplicatedItemSlotList : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	CMember(TArray<FJunoItemSlot>)                     ItemSlots                                                   OFFSET(get<T>, {0x118, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoItemSlotGroup
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoItemSlotGroup : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FGameplayTag)                              GroupType                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<FJunoItemSlot>)                     SlotList                                                    OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoInventoryConfig
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoInventoryConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FJunoInventoryGroupConfig>)         InventoryGroupConfigs                                       OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FGameplayTag)                              GameplayTag                                                 OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	DMember(bool)                                      bIsPersistent                                               OFFSET(get<bool>, {0x14, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoInventoryGroupConfig
/// Size: 0x0060 (0x000000 - 0x000060)
class FJunoInventoryGroupConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FGameplayTag)                              GroupType                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(uint32_t)                                  NumItemRows                                                 OFFSET(get<uint32_t>, {0x4, 4, 0, 0})
	DMember(uint32_t)                                  NumItemColumns                                              OFFSET(get<uint32_t>, {0x8, 4, 0, 0})
	CMember(TMap<int32_t, FGameplayTagContainer>)      SlotTagMap                                                  OFFSET(get<T>, {0x10, 80, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_PlacementData
/// Size: 0x0001 (0x000000 - 0x000001)
class FJunoEvent_PlacementData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bQuickBuild                                                 OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_PlacementStarted
/// Size: 0x0001 (0x000000 - 0x000001)
class FJunoEvent_PlacementStarted : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/JunoGameNative.JunoEvent_BuildingExited
/// Size: 0x0001 (0x000000 - 0x000001)
class FJunoEvent_BuildingExited : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/JunoGameNative.JunoEvent_BuildingPrebuild
/// Size: 0x0001 (0x000000 - 0x000001)
class FJunoEvent_BuildingPrebuild : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/JunoGameNative.JunoEvent_QuickbuildRecipeChanged
/// Size: 0x0001 (0x000000 - 0x000001)
class FJunoEvent_QuickbuildRecipeChanged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/JunoGameNative.JunoEvent_QuickBuildSelectionData
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoEvent_QuickBuildSelectionData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class UJunoQuickBuildSelectionData*)       QuickBuildSelectionData                                     OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_QuickBuildSelectionResult
/// Size: 0x0004 (0x000000 - 0x000004)
class FJunoEvent_QuickBuildSelectionResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FName)                                     SelectedRecipe                                              OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.BuildingRecipeListItemSelected
/// Size: 0x0008 (0x000000 - 0x000008)
class FBuildingRecipeListItemSelected : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     RecipeName                                                  OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(bool)                                      bCanCraft                                                   OFFSET(get<bool>, {0x4, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_InputMessage
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoEvent_InputMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class AFortPlayerController*)              SourceController                                            OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_OpenHudMessage
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoEvent_OpenHudMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class AFortPlayerController*)              SourceController                                            OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_CloseHudMessage
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoEvent_CloseHudMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class AFortPlayerController*)              SourceController                                            OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_OpenBuildingMenuMessage
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoEvent_OpenBuildingMenuMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class AFortPlayerController*)              SourceController                                            OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_OpenMapMenuMessage
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoEvent_OpenMapMenuMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class AFortPlayerController*)              SourceController                                            OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_OpenInventoryMenuMessage
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoEvent_OpenInventoryMenuMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class AFortPlayerController*)              SourceController                                            OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_OpenBedAssignmentMenuMessage
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoEvent_OpenBedAssignmentMenuMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class AActor*)                             BedActor                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_OpenEscapeMenuMessage
/// Size: 0x0001 (0x000000 - 0x000001)
class FJunoEvent_OpenEscapeMenuMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/JunoGameNative.JunoEvent_InventoryItemExecuted
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoEvent_InventoryItemExecuted : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class UFortItem*)                          ItemExecuted                                                OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_InventoryItemSelected
/// Size: 0x001C (0x000000 - 0x00001C)
class FJunoEvent_InventoryItemSelected : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	SMember(FGuid)                                     ItemSelected                                                OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_InventoryMenuOpen
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoEvent_InventoryMenuOpen : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class AActor*)                             InventoryObject                                             OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_EmptyHands
/// Size: 0x0001 (0x000000 - 0x000001)
class FJunoEvent_EmptyHands : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/JunoGameNative.JunoEvent_FreeBuildItemSpawned
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoEvent_FreeBuildItemSpawned : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class UFortItemDefinition*)                SpawnedItemDefinition                                       OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.PushMontageData
/// Size: 0x00D8 (0x000000 - 0x0000D8)
class FPushMontageData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FGameplayTagRequirements)                  MontageDataRequirement                                      OFFSET(getStruct<T>, {0x0, 136, 0, 0})
	CMember(TMap<EFortPhysicsSimSize, UAnimMontage*>)  SizeToMontageMap                                            OFFSET(get<T>, {0x88, 80, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoAccountItemDefinitionOverride
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoAccountItemDefinitionOverride : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UFortAccountItemDefinition*)         OverridenAccountItemDefinition                              OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoAccountItemConversionRow
/// Size: 0x0080 (0x000008 - 0x000088)
class FJunoAccountItemConversionRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x8, 1, 0, 0})
	SMember(FGameplayTagContainer)                     GameplayTagsToAdd                                           OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	DMember(bool)                                      bOverrideFrontendTransform                                  OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(float)                                     FrontendPreviewScale                                        OFFSET(get<float>, {0x34, 4, 0, 0})
	SMember(FVector)                                   FrontendPreviewPivotOffset                                  OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	SMember(FRotator)                                  FrontendPreviewInitialRotation                              OFFSET(getStruct<T>, {0x50, 24, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   PreviewActorClass                                           OFFSET(get<T>, {0x68, 32, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEmoteConversionRow
/// Size: 0x00C8 (0x000088 - 0x000150)
class FJunoEmoteConversionRow : public FJunoAccountItemConversionRow
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	CMember(TWeakObjectPtr<UAnimMontage*>)             Animation                                                   OFFSET(get<T>, {0x88, 32, 0, 0})
	CMember(TWeakObjectPtr<UAnimMontage*>)             AnimationFemaleOverride                                     OFFSET(get<T>, {0xA8, 32, 0, 0})
	CMember(TArray<FFortEmoteMapping>)                 AnimationOverrides                                          OFFSET(get<T>, {0xC8, 16, 0, 0})
	CMember(TWeakObjectPtr<UAnimMontage*>)             FrontEndAnimation                                           OFFSET(get<T>, {0xD8, 32, 0, 0})
	CMember(TWeakObjectPtr<UAnimMontage*>)             FrontEndAnimationFemaleOverride                             OFFSET(get<T>, {0xF8, 32, 0, 0})
	CMember(TArray<FFortEmoteMapping>)                 FrontEndAnimationOverrides                                  OFFSET(get<T>, {0x118, 16, 0, 0})
	SMember(FVector)                                   GroupEmotePositionOffset                                    OFFSET(getStruct<T>, {0x128, 24, 0, 0})
	DMember(float)                                     GroupEmotePositionOffsetTolerance                           OFFSET(get<float>, {0x140, 4, 0, 0})
	DMember(float)                                     GroupEmoteFollowDistance                                    OFFSET(get<float>, {0x144, 4, 0, 0})
	DMember(float)                                     WalkForwardSpeed                                            OFFSET(get<float>, {0x148, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoCharacterConversionRow
/// Size: 0x0048 (0x000088 - 0x0000D0)
class FJunoCharacterConversionRow : public FJunoAccountItemConversionRow
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TWeakObjectPtr<UAssembledMeshSchema*>)     AssembledMeshSchema                                         OFFSET(get<T>, {0x88, 32, 0, 0})
	CMember(TWeakObjectPtr<UAnimMontage*>)             FrontendAnimMontageIdleOverride                             OFFSET(get<T>, {0xA8, 32, 0, 0})
	DMember(float)                                     PreviewPawnScale                                            OFFSET(get<float>, {0xC8, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoActorAttributeOverrideData
/// Size: 0x0010 (0x000008 - 0x000018)
class FJunoActorAttributeOverrideData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     PrimaryLootTier                                             OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FName)                                     SecondaryLootTier                                           OFFSET(getStruct<T>, {0xC, 4, 0, 0})
	SMember(FGameplayTag)                              DamageSurfaceTypeTag                                        OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	DMember(float)                                     Health                                                      OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoAIPersistenceFeatureData_InGameClass_PersistentInfo
/// Size: 0x0120 (0x000000 - 0x000120)
class FJunoAIPersistenceFeatureData_InGameClass_PersistentInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FSavedAIDataManager)                       SavedAIData                                                 OFFSET(getStruct<T>, {0x0, 288, 0, 0})
};

/// Struct /Script/JunoGameNative.SavedAIDataManager
/// Size: 0x0120 (0x000000 - 0x000120)
class FSavedAIDataManager : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TMap<FGameplayTag, FSavedAIData>)          SavedAIDataPerUniqueAIIdentifier                            OFFSET(get<T>, {0x0, 80, 0, 0})
	SMember(FSavedGlobalAIData)                        SavedGlobalAIData                                           OFFSET(getStruct<T>, {0x50, 208, 0, 0})
};

/// Struct /Script/JunoGameNative.SavedGlobalAIData
/// Size: 0x00D0 (0x000000 - 0x0000D0)
class FSavedGlobalAIData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FSavedGlobalAIData_FTUE)                   FTUE                                                        OFFSET(getStruct<T>, {0x0, 40, 0, 0})
	SMember(FSavedGlobalAIData_Rewards)                Rewards                                                     OFFSET(getStruct<T>, {0x28, 80, 0, 0})
	SMember(FSavedGlobalAIData_WorldSettings)          WorldSettings                                               OFFSET(getStruct<T>, {0x78, 3, 0, 0})
	SMember(FSavedGlobalAIData_RecruitmentObjectData)  RecruitmentObjectData                                       OFFSET(getStruct<T>, {0x80, 80, 0, 0})
};

/// Struct /Script/JunoGameNative.SavedAIData_BaseType
/// Size: 0x0001 (0x000000 - 0x000001)
class FSavedAIData_BaseType : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/JunoGameNative.SavedGlobalAIData_RecruitmentObjectData
/// Size: 0x004F (0x000001 - 0x000050)
class FSavedGlobalAIData_RecruitmentObjectData : public FSavedAIData_BaseType
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FGuid, FJunoRecruitmentObjectAssignedData>) RecruitmentObjectToAssignedData                       OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/JunoGameNative.SavedGlobalAIData_WorldSettings
/// Size: 0x0002 (0x000001 - 0x000003)
class FSavedGlobalAIData_WorldSettings : public FSavedAIData_BaseType
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 3;

public:
	DMember(bool)                                      bEnableFriendlyCreatures                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bEnableHostileCreatures                                     OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bEnableFriendlyNPCs                                         OFFSET(get<bool>, {0x2, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.SavedGlobalAIData_Rewards
/// Size: 0x004F (0x000001 - 0x000050)
class FSavedGlobalAIData_Rewards : public FSavedAIData_BaseType
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FName, int32_t>)                      CountOfRewardedLootTierGroups                               OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/JunoGameNative.SavedGlobalAIData_FTUE
/// Size: 0x0027 (0x000001 - 0x000028)
class FSavedGlobalAIData_FTUE : public FSavedAIData_BaseType
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FGameplayTag)                              PickedFTUENPC                                               OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FVector)                                   FTUEStartLocation                                           OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	DMember(bool)                                      bFTUEWasEverCompleted                                       OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.SavedAIData
/// Size: 0x0190 (0x000000 - 0x000190)
class FSavedAIData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FSavedAIData_Tokens)                       Tokens                                                      OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	SMember(FSavedAIData_Camp)                         Camp                                                        OFFSET(getStruct<T>, {0x20, 96, 0, 0})
	SMember(FSavedAIData_SoftRemoval)                  SoftRemoval                                                 OFFSET(getStruct<T>, {0x80, 48, 0, 0})
	SMember(FSavedAIData_Resources)                    Resources                                                   OFFSET(getStruct<T>, {0xB0, 152, 0, 0})
	SMember(FSavedAIData_Merchant)                     Merchant                                                    OFFSET(getStruct<T>, {0x148, 32, 0, 0})
	SMember(FSavedAIData_WorldSpawn)                   WorldSpawn                                                  OFFSET(getStruct<T>, {0x168, 40, 0, 0})
};

/// Struct /Script/JunoGameNative.SavedAIData_WorldSpawn
/// Size: 0x0027 (0x000001 - 0x000028)
class FSavedAIData_WorldSpawn : public FSavedAIData_BaseType
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FGuid)                                     PointProviderGuid                                           OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int64_t)                                   AssignationEndGameTime                                      OFFSET(get<int64_t>, {0x10, 8, 0, 0})
	SMember(FString)                                   EventDataPath                                               OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.SavedAIData_Merchant
/// Size: 0x001F (0x000001 - 0x000020)
class FSavedAIData_Merchant : public FSavedAIData_BaseType
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FPrimaryAssetId)                           WantItemId                                                  OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	CMember(TArray<FSavedAIData_Merchant_StockEntry>)  StockEntries                                                OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(float)                                     StockRefreshTimeRemaining                                   OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.SavedAIData_Merchant_StockEntry
/// Size: 0x000C (0x000000 - 0x00000C)
class FSavedAIData_Merchant_StockEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(int32_t)                                   StockQuantity                                               OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FPrimaryAssetId)                           StockSaleItemId                                             OFFSET(getStruct<T>, {0x4, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.SavedAIData_Resources
/// Size: 0x0097 (0x000001 - 0x000098)
class FSavedAIData_Resources : public FSavedAIData_BaseType
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(TMap<FName, double>)                       GeneratingLootTierGroups                                    OFFSET(get<T>, {0x0, 80, 0, 0})
	CMember(TArray<FSavedAIData_Resources_GeneratedItem>) GeneratedItems                                           OFFSET(get<T>, {0x50, 16, 0, 0})
	DMember(int32_t)                                   GeneratedLootCallsSinceLastRefresh                          OFFSET(get<int32_t>, {0x60, 4, 0, 0})
	SMember(FPrimaryAssetId)                           LastUsedGatheringActorItemId                                OFFSET(getStruct<T>, {0x64, 8, 0, 0})
	SMember(FName)                                     LastGeneratedLootTier                                       OFFSET(getStruct<T>, {0x6C, 4, 0, 0})
	SMember(FJunoInventoryHandle)                      SavedFullInventoryHandle                                    OFFSET(getStruct<T>, {0x70, 36, 0, 0})
};

/// Struct /Script/JunoGameNative.SavedAIData_Resources_GeneratedItem
/// Size: 0x000C (0x000000 - 0x00000C)
class FSavedAIData_Resources_GeneratedItem : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FPrimaryAssetId)                           PrimaryAssetId                                              OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   Count                                                       OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.SavedAIData_SoftRemoval
/// Size: 0x002F (0x000001 - 0x000030)
class FSavedAIData_SoftRemoval : public FSavedAIData_BaseType
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FGameplayTagContainer)                     SoftRemovedReasons                                          OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	DMember(int64_t)                                   SoftRemovedElapsedJunoGameTime                              OFFSET(get<int64_t>, {0x20, 8, 0, 0})
	DMember(int64_t)                                   NoInteractionsElapsedJunoGameTime                           OFFSET(get<int64_t>, {0x28, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.SavedAIData_Camp
/// Size: 0x005F (0x000001 - 0x000060)
class FSavedAIData_Camp : public FSavedAIData_BaseType
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FGuid)                                     UniqueGuid                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int64_t)                                   AssignedJunoGameTime                                        OFFSET(get<int64_t>, {0x10, 8, 0, 0})
	DMember(bool)                                      bWasRecruitedRemotely                                       OFFSET(get<bool>, {0x18, 1, 0, 0})
	SMember(FGameplayTag)                              Role                                                        OFFSET(getStruct<T>, {0x1C, 4, 0, 0})
	SMember(FUniqueNetIdRepl)                          AttachedPlayerNetId                                         OFFSET(getStruct<T>, {0x20, 48, 0, 0})
	DMember(int64_t)                                   LastSpawnTime                                               OFFSET(get<int64_t>, {0x50, 8, 0, 0})
	CMember(EJunoBiome)                                AttachedBiome                                               OFFSET(get<T>, {0x58, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.SavedAIData_Tokens
/// Size: 0x001F (0x000001 - 0x000020)
class FSavedAIData_Tokens : public FSavedAIData_BaseType
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FGameplayTagContainer)                     SavedTokens                                                 OFFSET(getStruct<T>, {0x0, 32, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoWeaponEssenceData
/// Size: 0x0028 (0x000008 - 0x000030)
class FJunoWeaponEssenceData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TWeakObjectPtr<UFortItemDefinition*>)      WeaponDefinition                                            OFFSET(get<T>, {0x8, 32, 0, 0})
	DMember(int32_t)                                   EssenceSlotCount                                            OFFSET(get<int32_t>, {0x28, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoAwesomeInteractionConfigTableRow
/// Size: 0x0008 (0x000008 - 0x000010)
class FJunoAwesomeInteractionConfigTableRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   AwesomePointAdjustment                                      OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoAwesomePlacementCategoryConfigTableRow
/// Size: 0x0008 (0x000008 - 0x000010)
class FJunoAwesomePlacementCategoryConfigTableRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              BuildingCategory                                            OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   AwesomePointsToContribute                                   OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoAwesomeUpgradeResourceCost
/// Size: 0x0028 (0x000000 - 0x000028)
class FJunoAwesomeUpgradeResourceCost : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TWeakObjectPtr<UFortItemDefinition*>)      ResourceCostItemDefinition                                  OFFSET(get<T>, {0x0, 32, 0, 0})
	DMember(int32_t)                                   ItemAmount                                                  OFFSET(get<int32_t>, {0x20, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoAwesomeUpgradeResourceCostList
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoAwesomeUpgradeResourceCostList : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FJunoAwesomeUpgradeResourceCost>)   ResourceCostList                                            OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoAwesomePoiConfigTableRow
/// Size: 0x0020 (0x000008 - 0x000028)
class FJunoAwesomePoiConfigTableRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<int32_t>)                           AwesomePointGoals                                           OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FJunoAwesomeUpgradeResourceCostList>) UpgradeResourceCosts                                      OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBarterSaleItemData
/// Size: 0x0028 (0x000000 - 0x000028)
class FJunoBarterSaleItemData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TWeakObjectPtr<UFortItemDefinition*>)      SaleItemDefinition                                          OFFSET(get<T>, {0x0, 32, 0, 0})
	DMember(int32_t)                                   SaleItemBulkQuantity                                        OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   WantItemQuantity                                            OFFSET(get<int32_t>, {0x24, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBarterPricingData
/// Size: 0x0030 (0x000008 - 0x000038)
class FJunoBarterPricingData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TWeakObjectPtr<UFortItemDefinition*>)      WantItemDefinition                                          OFFSET(get<T>, {0x8, 32, 0, 0})
	CMember(TArray<FJunoBarterSaleItemData>)           SaleItemDatas                                               OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoDebugWorldInfoResult
/// Size: 0x0060 (0x000000 - 0x000060)
class FJunoDebugWorldInfoResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FText)                                     AdventureSeed                                               OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FText)                                     TileSet                                                     OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FText)                                     TileName                                                    OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FText)                                     BiomeName                                                   OFFSET(getStruct<T>, {0x48, 24, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoWorldAnalyticsInfoResult
/// Size: 0x0028 (0x000000 - 0x000028)
class FJunoWorldAnalyticsInfoResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   TileName                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FVector)                                   NormalizedTileLocation                                      OFFSET(getStruct<T>, {0x10, 24, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoTrackedActorKey
/// Size: 0x000C (0x000000 - 0x00000C)
class FJunoTrackedActorKey : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FIntVector)                                LocationKey                                                 OFFSET(getStruct<T>, {0x0, 12, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoTrackedActor
/// Size: 0x001C (0x000000 - 0x00001C)
class FJunoTrackedActor : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	CMember(TWeakObjectPtr<AActor*>)                   Actor                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FJunoTrackedActorKey)                      ActorKey                                                    OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	DMember(float)                                     InitialNetRelevanceDistance                                 OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   NumberOfRelevantActors                                      OFFSET(get<int32_t>, {0x18, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingMetricQuery
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoBuildingMetricQuery : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingConnectivityComponentEntry
/// Size: 0x0058 (0x000000 - 0x000058)
class FJunoBuildingConnectivityComponentEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TWeakObjectPtr<USceneComponent*>)          Component                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TSet<int32_t>)                             Ids                                                         OFFSET(get<T>, {0x8, 80, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingConnectionPoint
/// Size: 0x00E0 (0x000000 - 0x0000E0)
class FJunoBuildingConnectionPoint : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FTransform)                                FieldToObject                                               OFFSET(getStruct<T>, {0x0, 96, 0, 0})
	SMember(FTransform)                                PointToObject                                               OFFSET(getStruct<T>, {0x60, 96, 0, 0})
	SMember(FVector2D)                                 FieldSize                                                   OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	CMember(TWeakObjectPtr<USceneComponent*>)          Component                                                   OFFSET(get<T>, {0xD0, 8, 0, 0})
	DMember(int32_t)                                   ObjectId                                                    OFFSET(get<int32_t>, {0xD8, 4, 0, 0})
	CMember(EConnectionPointType)                      PointType                                                   OFFSET(get<T>, {0xDC, 1, 0, 0})
	DMember(bool)                                      bAvailable                                                  OFFSET(get<bool>, {0xDD, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingConnectionPoints
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoBuildingConnectionPoints : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FJunoBuildingConnectionPoint>)      Value                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingConnectionPointsResult
/// Size: 0x0050 (0x000000 - 0x000050)
class FJunoBuildingConnectionPointsResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<EConnectionFieldGender, FJunoBuildingConnectionPoints>) PointsMap                                 OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingConnection
/// Size: 0x01D0 (0x000000 - 0x0001D0)
class FJunoBuildingConnection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
	SMember(FJunoBuildingConnectionPoint)              Candidate                                                   OFFSET(getStruct<T>, {0x0, 224, 0, 0})
	SMember(FJunoBuildingConnectionPoint)              Target                                                      OFFSET(getStruct<T>, {0xE0, 224, 0, 0})
	CMember(TArray<FVector>)                           Locations                                                   OFFSET(get<T>, {0x1C0, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_CampCenterCreated
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoEvent_CampCenterCreated : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/JunoGameNative.JunoEvent_CampCenterDestroyed
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoEvent_CampCenterDestroyed : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/JunoGameNative.JunoEvent_CampCenterActivated
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoEvent_CampCenterActivated : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/JunoGameNative.JunoEvent_CampCenterDeactivated
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoEvent_CampCenterDeactivated : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/JunoGameNative.JunoEvent_CampActorActivated
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoEvent_CampActorActivated : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/JunoGameNative.JunoEvent_CampActorDeactivated
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoEvent_CampActorDeactivated : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/JunoGameNative.JunoEvent_CampAwesomeLevelChanged
/// Size: 0x0028 (0x000000 - 0x000028)
class FJunoEvent_CampAwesomeLevelChanged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/JunoGameNative.JunoEvent_CampAwesomePointsModified
/// Size: 0x0038 (0x000000 - 0x000038)
class FJunoEvent_CampAwesomePointsModified : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/JunoGameNative.AwesomeLevelSaveData
/// Size: 0x0058 (0x000000 - 0x000058)
class FAwesomeLevelSaveData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(int32_t)                                   AwesomePoints                                               OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   AwesomeLevel                                                OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	CMember(TSet<FGuid>)                               AwesomePrefabIDs                                            OFFSET(get<T>, {0x8, 80, 0, 0})
};

/// Struct /Script/JunoGameNative.AICampManagementSaveData
/// Size: 0x0020 (0x000000 - 0x000020)
class FAICampManagementSaveData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int64_t)                                   LastPassiveResourceGatheringSimulatedJunoRealTime           OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	DMember(int64_t)                                   CampCreationTime                                            OFFSET(get<int64_t>, {0x8, 8, 0, 0})
	DMember(int64_t)                                   FirstRecruitedNPCTime                                       OFFSET(get<int64_t>, {0x10, 8, 0, 0})
	DMember(int64_t)                                   LastVisitorsUpdateTime                                      OFFSET(get<int64_t>, {0x18, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.NamedPOISaveData
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FNamedPOISaveData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FText)                                     POIName                                                     OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FJunoMarker)                               Marker                                                      OFFSET(getStruct<T>, {0x18, 152, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoMarker
/// Size: 0x0098 (0x000000 - 0x000098)
class FJunoMarker : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	CMember(class UTexture*)                           Icon                                                        OFFSET(get<T>, {0x18, 8, 0, 0})
	SMember(FColor)                                    Color                                                       OFFSET(getStruct<T>, {0x20, 4, 0, 0})
	DMember(bool)                                      bOverrideColor                                              OFFSET(get<bool>, {0x24, 1, 0, 0})
	DMember(bool)                                      bEnableMarkerCustomization                                  OFFSET(get<bool>, {0x25, 1, 0, 0})
	DMember(float)                                     TimeLeft                                                    OFFSET(get<float>, {0x28, 4, 0, 0})
	SMember(FUniqueNetIdRepl)                          AttachedPlayerNetId                                         OFFSET(getStruct<T>, {0x30, 48, 0, 0})
	SMember(FGuid)                                     VolumeId                                                    OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	SMember(FName)                                     SettingsName                                                OFFSET(getStruct<T>, {0x70, 4, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           MaterialInstanceDynamic                                     OFFSET(get<T>, {0x78, 8, 0, 0})
	SMember(FName)                                     IconParamName                                               OFFSET(getStruct<T>, {0x80, 4, 0, 0})
	SMember(FName)                                     ColorParamName                                              OFFSET(getStruct<T>, {0x84, 4, 0, 0})
	SMember(FDataTableRowHandle)                       CustomizationOptionsHandle                                  OFFSET(getStruct<T>, {0x88, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoCampPersistenceFeatureData_InGameClass_PersistentInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoCampPersistenceFeatureData_InGameClass_PersistentInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FJunoAllCampsSaveData)                     SavedAllCamps                                               OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoAllCampsSaveData
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoAllCampsSaveData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FJunoCampSaveData>)                 Camps                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoCampSaveData
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FJunoCampSaveData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FGuid)                                     CampCenterID                                                OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FPrimaryAssetId)                           CampCenterAssetID                                           OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	SMember(FGuid)                                     CampActorID                                                 OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FBox)                                      CampBounds                                                  OFFSET(getStruct<T>, {0x28, 56, 0, 0})
	DMember(int64_t)                                   SoftRemovedElapsedJunoGameTime                              OFFSET(get<int64_t>, {0x60, 8, 0, 0})
	DMember(int64_t)                                   LastRewardsRollInJunoGameTime                               OFFSET(get<int64_t>, {0x68, 8, 0, 0})
	SMember(FJunoCampRewardResults)                    LastRewardResults                                           OFFSET(getStruct<T>, {0x70, 32, 0, 0})
	SMember(FName)                                     LastRewardsRollLootTierGroupToSave                          OFFSET(getStruct<T>, {0x90, 4, 0, 0})
	DMember(int32_t)                                   LastAwesomenessLevel                                        OFFSET(get<int32_t>, {0x94, 4, 0, 0})
	CMember(EJunoBiome)                                CampBiome                                                   OFFSET(get<T>, {0x98, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoCampRewardResults
/// Size: 0x0020 (0x000000 - 0x000020)
class FJunoCampRewardResults : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FFortItemEntry>)                    Items                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FJunoCampRewardRecipeResult>)       Recipes                                                     OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoCampRewardRecipeResult
/// Size: 0x0028 (0x000000 - 0x000028)
class FJunoCampRewardRecipeResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TWeakObjectPtr<UJunoBuildInstructionsItemDefinition*>) KnowledgeItemDefinition                         OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(EJunoKnowledgeState)                       NewState                                                    OFFSET(get<T>, {0x20, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.ActiveCampNPCEntry
/// Size: 0x0088 (0x000000 - 0x000088)
class FActiveCampNPCEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FGameplayTag)                              UniqueAIIdentifier                                          OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FGameplayTag)                              RoleTag                                                     OFFSET(getStruct<T>, {0x20, 4, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               NPCIconSmall                                                OFFSET(get<T>, {0x28, 32, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               NPCIconLarge                                                OFFSET(get<T>, {0x48, 32, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               NPCIconWide                                                 OFFSET(get<T>, {0x68, 32, 0, 0})
};

/// Struct /Script/JunoGameNative.ChaosAudioEventSizeSounds
/// Size: 0x0020 (0x000000 - 0x000020)
class FChaosAudioEventSizeSounds : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(class USoundBase*)                         Single                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class USoundBase*)                         Small                                                       OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class USoundBase*)                         Medium                                                      OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class USoundBase*)                         Large                                                       OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoConnectivityDebugVertexData
/// Size: 0x0050 (0x000000 - 0x000050)
class FJunoConnectivityDebugVertexData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FVector)                                   Position                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	DMember(int32_t)                                   DrawColorIndex                                              OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(bool)                                      bIsIndependentlySupported                                   OFFSET(get<bool>, {0x1C, 1, 0, 0})
	CMember(TArray<int32_t>)                           AdjacentVerticesIndices                                     OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoConnectivityDebugData
/// Size: 0x0038 (0x000000 - 0x000038)
class FJunoConnectivityDebugData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FJunoConnectivityDebugVertexData>)  VertexDataToDraw                                            OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bDebugDrawEnabled                                           OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoTableRow_AFKEvent
/// Size: 0x0018 (0x000008 - 0x000020)
class FJunoTableRow_AFKEvent : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int32_t)                                   EventWeight                                                 OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	CMember(TArray<FInstancedStruct>)                  EventFilters                                                OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoIndicatorVisibilityQueryEntry
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoIndicatorVisibilityQueryEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class AFortPawn*)                          Pawn                                                        OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.NewCraftingObjectMessage
/// Size: 0x0008 (0x000000 - 0x000008)
class FNewCraftingObjectMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class AActor*)                             CraftingObject                                              OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_CraftingObjectPlaced
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoEvent_CraftingObjectPlaced : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class AActor*)                             CraftingObject                                              OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoDestructionMaterialReplacementDataTable
/// Size: 0x0038 (0x000008 - 0x000040)
class FJunoDestructionMaterialReplacementDataTable : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FString)                                   SearchString                                                OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   BaseMaterialSearchString                                    OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	CMember(class UMaterialInterface*)                 MaterialReplacement                                         OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FString)                                   Annotations                                                 OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoDestructionFixISMMaterialsDataflowNode
/// Size: 0x0020 (0x0000E8 - 0x000108)
class FJunoDestructionFixISMMaterialsDataflowNode : public FDataflowNode
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	CMember(class UGeometryCollection*)                GCAsset                                                     OFFSET(get<T>, {0xE8, 8, 0, 0})
	CMember(TArray<FGeometryCollectionAutoInstanceMesh>) InstancedMeshes                                           OFFSET(get<T>, {0xF0, 16, 0, 0})
	CMember(class UDataTable*)                         ISMMaterialDataTable                                        OFFSET(get<T>, {0x100, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoLivingWorldPointProviderEventLimiter
/// Size: 0x0020 (0x000000 - 0x000020)
class FJunoLivingWorldPointProviderEventLimiter : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(bool)                                      bCanLimitBasedOnEvent                                       OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(TWeakObjectPtr<UFortAthenaLivingWorldEventData*>) EventData                                            OFFSET(get<T>, {0x4, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoExampleMacroGenerated_InGameClass_PersistentInfo
/// Size: 0x0004 (0x000000 - 0x000004)
class FJunoExampleMacroGenerated_InGameClass_PersistentInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   PersistentData_InStorage                                    OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoExample_InGameClass_PersistentInfo
/// Size: 0x0004 (0x000000 - 0x000004)
class FJunoExample_InGameClass_PersistentInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   PersistentData_InStorage                                    OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoFogOfWarPersistenceFeatureData_InGameClass_PersistentInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoFogOfWarPersistenceFeatureData_InGameClass_PersistentInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FJunoFogOfWarSaveData)                     FogOfWarSaveData                                            OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoFogOfWarSaveData
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoFogOfWarSaveData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FJunoFogOfWar>)                     TileDatas                                                   OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoFogOfWar
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoFogOfWar : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   ClearedPixelCount                                           OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(TArray<char>)                              ExplorationMask                                             OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoFreeBuildPersistenceFeatureData_InGameClass_PersistentInfo
/// Size: 0x0002 (0x000000 - 0x000002)
class FJunoFreeBuildPersistenceFeatureData_InGameClass_PersistentInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	SMember(FJunoFreeBuildSaveData)                    FreeBuildSaveData                                           OFFSET(getStruct<T>, {0x0, 2, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoFreeBuildSaveData
/// Size: 0x0002 (0x000000 - 0x000002)
class FJunoFreeBuildSaveData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(bool)                                      bIsFreeBuildSaved                                           OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bWasFreeBuildEverSaved                                      OFFSET(get<bool>, {0x1, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoFreeBuildToggleEvent
/// Size: 0x0004 (0x000000 - 0x000004)
class FJunoFreeBuildToggleEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(bool)                                      bIsFreeBuildEnabled                                         OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bIsItemSpawnerEnabled                                       OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bIsPlayerAllowedToFly                                       OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(bool)                                      bIsFreeBuildCostFilteringEnabled                            OFFSET(get<bool>, {0x3, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoFreeBuildEverUsedEvent
/// Size: 0x0001 (0x000000 - 0x000001)
class FJunoFreeBuildEverUsedEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bWasFreeBuildEverEnabled                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoFreeBuildSpawnable
/// Size: 0x0000 (0x000008 - 0x000008)
class FJunoFreeBuildSpawnable : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/JunoGameNative.JunoFreeBuildSpawnableItem
/// Size: 0x0020 (0x000008 - 0x000028)
class FJunoFreeBuildSpawnableItem : public FJunoFreeBuildSpawnable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TWeakObjectPtr<UFortItemDefinition*>)      Item                                                        OFFSET(get<T>, {0x8, 32, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoGeometryCollectionAssemblerGCInfo
/// Size: 0x0040 (0x000000 - 0x000040)
class FJunoGeometryCollectionAssemblerGCInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/JunoGameNative.JunoGeometryCollectionAssemblerTargetData
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoGeometryCollectionAssemblerTargetData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     TargetRatio                                                 OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     ForcedStartRatio                                            OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.GuidedBuildingNewFocus
/// Size: 0x0008 (0x000000 - 0x000008)
class FGuidedBuildingNewFocus : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(TWeakObjectPtr<AJunoGuidedBuildingActor*>) GuidedBuildingActor                                         OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.GuidedBuildBarUpdate
/// Size: 0x0010 (0x000008 - 0x000018)
class FGuidedBuildBarUpdate : public FGuidedBuildingMessageBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FName>)                             GuidedBuildBarRecipes                                       OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.GuidedBuildingRegistrationEvent
/// Size: 0x0014 (0x000000 - 0x000014)
class FGuidedBuildingRegistrationEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	CMember(TWeakObjectPtr<AJunoGuidedBuildingActor*>) GuidedBuild                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TWeakObjectPtr<AFortPlayerState*>)         PlayerState                                                 OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bIsRegistering                                              OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoIndexedSerializedEdgeData
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoIndexedSerializedEdgeData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(uint32_t)                                  Node1                                                       OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
	DMember(uint32_t)                                  Node2                                                       OFFSET(get<uint32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoIndexedSerializedIslandData
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoIndexedSerializedIslandData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<uint32_t>)                          Vertices                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoIndexedSavedConnectivityData
/// Size: 0x0088 (0x000000 - 0x000088)
class FJunoIndexedSavedConnectivityData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FGraphProperties)                          Properties                                                  OFFSET(getStruct<T>, {0x0, 1, 0, 0})
	CMember(TArray<FGraphVertexHandle>)                Vertices                                                    OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FJunoIndexedSerializedEdgeData>)    Edges                                                       OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TMap<FGraphIslandHandle, FJunoIndexedSerializedIslandData>) Islands                                    OFFSET(get<T>, {0x28, 80, 0, 0})
	CMember(TArray<bool>)                              ConnectivityVertexData                                      OFFSET(get<T>, {0x78, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoInputMapping
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoInputMapping : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UInputMappingContext*)               Context                                                     OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   Priority                                                    OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoInputAlternateDisplayText
/// Size: 0x0028 (0x000000 - 0x000028)
class FJunoInputAlternateDisplayText : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class UInputAction*)                       InputAction                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     ActionName                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FText)                                     DisplayText                                                 OFFSET(getStruct<T>, {0x10, 24, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoInputMappingChangedMessage
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoInputMappingChangedMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class UJunoInputMappingComponent*)         JunoInputMappingComponent                                   OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoInventoriesSaveData
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoInventoriesSaveData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<class AJunoInventory*>)             Inventories                                                 OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoInventoryPersistenceFeatureData_InGameClass_PersistentInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoInventoryPersistenceFeatureData_InGameClass_PersistentInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FPersistenceFrameworkLevelSaveSpawnablePtr>) Inventories                                        OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoInventoryUIPersistenceFeatureData_InGameClass_PersistentInfo
/// Size: 0x0050 (0x000000 - 0x000050)
class FJunoInventoryUIPersistenceFeatureData_InGameClass_PersistentInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FJunoInventoryUISaveData)                  SavedInventoryUI                                            OFFSET(getStruct<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoInventoryUISaveData
/// Size: 0x0050 (0x000000 - 0x000050)
class FJunoInventoryUISaveData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FGuid, FJunoSavedInventoryUIData>)    InventoryUIData                                             OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoSavedInventoryUIData
/// Size: 0x0030 (0x000000 - 0x000030)
class FJunoSavedInventoryUIData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FGuid)                                     InventoryHandleNewGuid                                      OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TArray<FJunoItemSlot>)                     AllSlotData                                                 OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FJunoSelectedSlotData>)             SelectedItemGroupSlot                                       OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoKnowledgeBundleTableRow
/// Size: 0x0008 (0x000008 - 0x000010)
class FJunoKnowledgeBundleTableRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     CraftingRecipeIdentifier                                    OFFSET(getStruct<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoKnowledgePersistenceFeatureData_InGameClass_PersistentInfo
/// Size: 0x00E0 (0x000000 - 0x0000E0)
class FJunoKnowledgePersistenceFeatureData_InGameClass_PersistentInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FJunoKnowledgeSaveData)                    KnowledgeSaveData                                           OFFSET(getStruct<T>, {0x0, 224, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoKnowledgeSaveData
/// Size: 0x00E0 (0x000000 - 0x0000E0)
class FJunoKnowledgeSaveData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FJunoKnowledgeSaveRecord)                  WorldKnowledgeRecord                                        OFFSET(getStruct<T>, {0x0, 224, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoKnowledgeSaveRecord
/// Size: 0x00E0 (0x000000 - 0x0000E0)
class FJunoKnowledgeSaveRecord : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FGameplayTagContainer)                     CraftingObjectTags                                          OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	SMember(FGameplayTagContainer)                     ClaimedBundleIdentifiers                                    OFFSET(getStruct<T>, {0x20, 32, 0, 0})
	CMember(TMap<UFortItemDefinition*, FJunoKnowledgeItemStateEntry>) ItemStates                                   OFFSET(get<T>, {0x40, 80, 0, 0})
	CMember(TMap<FName, FJunoKnowledgeRecipeStateEntry>) RecipeStates                                              OFFSET(get<T>, {0x90, 80, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoKnowledgeRecipeStateEntry
/// Size: 0x0058 (0x000000 - 0x000058)
class FJunoKnowledgeRecipeStateEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(EJunoKnowledgeState)                       KnowledgeState                                              OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TSet<FUniqueNetIdRepl>)                    ViewedPlayerIds                                             OFFSET(get<T>, {0x8, 80, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoKnowledgeItemStateEntry
/// Size: 0x0058 (0x000000 - 0x000058)
class FJunoKnowledgeItemStateEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FDateTime)                                 DateFound                                                   OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	CMember(TSet<FUniqueNetIdRepl>)                    ViewedPlayerIds                                             OFFSET(get<T>, {0x8, 80, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoTileInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoTileInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   TileId                                                      OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FVector2D)                                 WorldLocation                                               OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoExploredTile
/// Size: 0x0024 (0x00000C - 0x000030)
class FJunoExploredTile : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int32_t)                                   TileId                                                      OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   ClearedPixelCount                                           OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	CMember(TArray<char>)                              PackedTileMask                                              OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.MapExplorationData
/// Size: 0x0018 (0x000108 - 0x000120)
class FMapExplorationData : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<FJunoExploredTile>)                 ExploredTiles                                               OFFSET(get<T>, {0x108, 16, 0, 0})
	DMember(int32_t)                                   KnownClearedPixelCount                                      OFFSET(get<int32_t>, {0x118, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoMarkerSettingsRow
/// Size: 0x0040 (0x000008 - 0x000048)
class FJunoMarkerSettingsRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TWeakObjectPtr<UObject*>)                  Icon                                                        OFFSET(get<T>, {0x8, 32, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	DMember(bool)                                      bAnchorOnEdges                                              OFFSET(get<bool>, {0x38, 1, 0, 0})
	DMember(float)                                     Size                                                        OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(bool)                                      bShowUnderground                                            OFFSET(get<bool>, {0x40, 1, 0, 0})
	DMember(bool)                                      bShowOnlyForOwner                                           OFFSET(get<bool>, {0x41, 1, 0, 0})
	DMember(bool)                                      bIsContainer                                                OFFSET(get<bool>, {0x42, 1, 0, 0})
	DMember(bool)                                      bHasLimitedDuration                                         OFFSET(get<bool>, {0x43, 1, 0, 0})
	DMember(int32_t)                                   duration                                                    OFFSET(get<int32_t>, {0x44, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoMarkerCustomizationOptionsRow
/// Size: 0x0020 (0x000008 - 0x000028)
class FJunoMarkerCustomizationOptionsRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<TWeakObjectPtr<UTexture*>>)         Icons                                                       OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FLinearColor>)                      Colors                                                      OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoMarkersPersistenceFeatureData_InGameClass_PersistentInfo
/// Size: 0x0020 (0x000000 - 0x000020)
class FJunoMarkersPersistenceFeatureData_InGameClass_PersistentInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FJunoMarkersSaveData)                      MarkersSaveData                                             OFFSET(getStruct<T>, {0x0, 32, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoMarkersSaveData
/// Size: 0x0020 (0x000000 - 0x000020)
class FJunoMarkersSaveData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FJunoMarker>)                       MarkersData                                                 OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FGuid>)                             MarkersIds                                                  OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoMassCommonStateFragment
/// Size: 0x0003 (0x000001 - 0x000004)
class FJunoMassCommonStateFragment : public FMassFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     Health                                                      OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoMerchantPricingLevel
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoMerchantPricingLevel : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UDataTable*)                         BarterPricingData                                           OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     TierGroup                                                   OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   NumberOfPackagesForSale                                     OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoMerchantWantedItemData
/// Size: 0x0028 (0x000000 - 0x000028)
class FJunoMerchantWantedItemData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TWeakObjectPtr<UFortItemDefinition*>)      WantItemDefinition                                          OFFSET(get<T>, {0x0, 32, 0, 0})
	DMember(float)                                     WantItemWeight                                              OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoMerchantSalesData
/// Size: 0x0030 (0x000008 - 0x000038)
class FJunoMerchantSalesData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FGameplayTag)                              MerchantTag                                                 OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   InitialPricingLevel                                         OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	CMember(TArray<FJunoMerchantPricingLevel>)         PricingLevels                                               OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FJunoMerchantWantedItemData>)       WantedItemDatas                                             OFFSET(get<T>, {0x20, 16, 0, 0})
	DMember(int32_t)                                   RefreshTimeInHours                                          OFFSET(get<int32_t>, {0x30, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoSynchronizedWeatherState
/// Size: 0x0078 (0x000000 - 0x000078)
class FJunoSynchronizedWeatherState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FJunoWeatherLocation)                      Location                                                    OFFSET(getStruct<T>, {0x0, 2, 0, 0})
	SMember(FJunoWeatherPhase)                         CurrentWeatherPhase                                         OFFSET(getStruct<T>, {0x8, 56, 0, 0})
	SMember(FJunoWeatherPhase)                         NextWeatherPhase                                            OFFSET(getStruct<T>, {0x40, 56, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoModeratorModeToggleEvent
/// Size: 0x0002 (0x000000 - 0x000002)
class FJunoModeratorModeToggleEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(bool)                                      bIsModeratorModeEnabled                                     OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bIsPlayerAllowedToFly                                       OFFSET(get<bool>, {0x1, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoMoodReactionConfigTableRow
/// Size: 0x0008 (0x000008 - 0x000010)
class FJunoMoodReactionConfigTableRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              SoundLibraryTag                                             OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FGameplayCueTag)                           GameplayCueTag                                              OFFSET(getStruct<T>, {0xC, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_ToggleFreeCrafting
/// Size: 0x0001 (0x000000 - 0x000001)
class FJunoEvent_ToggleFreeCrafting : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bIsFreeCrafting                                             OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.PassiveResourcesGathererRow
/// Size: 0x0010 (0x000008 - 0x000018)
class FPassiveResourcesGathererRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FGameplayTag)                              RequiredRole                                                OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(float)                                     MinutesToGenerate                                           OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   MaxLootCalls                                                OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.PassiveResourcesGatheringRow
/// Size: 0x0020 (0x000008 - 0x000028)
class FPassiveResourcesGatheringRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     LootTierGroup                                               OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FWorldConditionQueryDefinition)            SelectionPreconditions                                      OFFSET(getStruct<T>, {0x10, 24, 0, 0})
};

/// Struct /Script/JunoGameNative.PassiveResourcesGatheringSimulationConfigurationRow
/// Size: 0x0008 (0x000008 - 0x000010)
class FPassiveResourcesGatheringSimulationConfigurationRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     OverridenMultiplierForSimulatedGeneration                   OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.PassiveResourcesGatheringRowRuntime
/// Size: 0x0058 (0x000000 - 0x000058)
class FPassiveResourcesGatheringRowRuntime : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FWorldConditionQueryState)                 SelectionPreconditionsQueryState                            OFFSET(getStruct<T>, {0x28, 48, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoPickupManagementSettingsRow
/// Size: 0x0018 (0x000008 - 0x000020)
class FJunoPickupManagementSettingsRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int32_t)                                   PickupsAllowedMax                                           OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   PickupsDesiredSlack                                         OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(float)                                     PickupDespawnDelaySeconds                                   OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      bDebugPickupManagement                                      OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(bool)                                      bEnablePickupManagement                                     OFFSET(get<bool>, {0x15, 1, 0, 0})
	CMember(EFortRarity)                               NotJunkPickupThreshold                                      OFFSET(get<T>, {0x16, 1, 0, 0})
	CMember(EFortRarity)                               ImportantPickupThreshold                                    OFFSET(get<T>, {0x17, 1, 0, 0})
	DMember(bool)                                      bFlagPlayerDropsAsImportant                                 OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingSlotData
/// Size: 0x0034 (0x00000C - 0x000040)
class FJunoBuildingSlotData : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FName)                                     AssociatedRecipe                                            OFFSET(getStruct<T>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   ResultingQuantity                                           OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	CMember(class UFortItemDefinition*)                ResultingItemDefintion                                      OFFSET(get<T>, {0x18, 8, 0, 0})
	DMember(bool)                                      bCanCraft                                                   OFFSET(get<bool>, {0x20, 1, 0, 0})
	DMember(bool)                                      bIsPinned                                                   OFFSET(get<bool>, {0x21, 1, 0, 0})
	CMember(class UInputAction*)                       InputAction                                                 OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingSlotDataArray
/// Size: 0x0030 (0x000108 - 0x000138)
class FJunoBuildingSlotDataArray : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	CMember(TArray<FJunoBuildingSlotData>)             Entries                                                     OFFSET(get<T>, {0x120, 16, 0, 0})
	CMember(EJunoBuildModeType)                        BuildModeType                                               OFFSET(get<T>, {0x130, 1, 0, 0})
	DMember(int32_t)                                   LastSelectedIndex                                           OFFSET(get<int32_t>, {0x134, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_BuildingSlotPinned
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoEvent_BuildingSlotPinned : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   UpdatedSlot                                                 OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(bool)                                      bIsPinned                                                   OFFSET(get<bool>, {0x4, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_BuildingSlotUpdate
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoEvent_BuildingSlotUpdate : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UJunoPlayerBuildingComponent*)       BuildingComp                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(EJunoBuildModeType)                        BuildModeType                                               OFFSET(get<T>, {0x8, 1, 0, 0})
	DMember(int32_t)                                   UpdatedSlot                                                 OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_SelectedSlotIndexUpdate
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoEvent_SelectedSlotIndexUpdate : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UJunoPlayerBuildingComponent*)       BuildingComp                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(EJunoBuildModeType)                        BuildModeType                                               OFFSET(get<T>, {0x8, 1, 0, 0})
	DMember(int32_t)                                   NewSelectedSlot                                             OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(bool)                                      bIsInBuildMode                                              OFFSET(get<bool>, {0x10, 1, 0, 0})
	SMember(FName)                                     CurrentRecipe                                               OFFSET(getStruct<T>, {0x14, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_BuildingModeChanged
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoEvent_BuildingModeChanged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UJunoPlayerBuildingComponent*)       BuildingComp                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(EJunoBuildModeType)                        BuildModeType                                               OFFSET(get<T>, {0x8, 1, 0, 0})
	DMember(int32_t)                                   SelectedSlot                                                OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	SMember(FName)                                     CurrentRecipe                                               OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	DMember(bool)                                      bIsInBuildMode                                              OFFSET(get<bool>, {0x14, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_EnableBuildModeWithRecipe
/// Size: 0x0030 (0x000000 - 0x000030)
class FJunoEvent_EnableBuildModeWithRecipe : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(EJunoBuildModeType)                        BuildModeType                                               OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FName)                                     RecipeName                                                  OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	DMember(bool)                                      bFromRecents                                                OFFSET(get<bool>, {0x8, 1, 0, 0})
	SMember(FGameplayTagContainer)                     Tags                                                        OFFSET(getStruct<T>, {0x10, 32, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoLastLoadedRecipeData
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoLastLoadedRecipeData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(EJunoBuildModeType)                        BuildModeType                                               OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FName)                                     RecipeName                                                  OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoSlotIndex
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoSlotIndex : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(EJunoBuildModeType)                        BuildModeType                                               OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoSelectedSlot
/// Size: 0x0030 (0x000000 - 0x000030)
class FJunoSelectedSlot : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FJunoSlotIndex)                            Slot                                                        OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     ForcedRecipe                                                OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FGameplayTagContainer)                     Tags                                                        OFFSET(getStruct<T>, {0x10, 32, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingSessionEntry
/// Size: 0x0040 (0x000000 - 0x000040)
class FJunoBuildingSessionEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TWeakObjectPtr<AActor*>)                   SpawnedActor                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FVector)                                   SpawnLocation                                               OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FDateTime)                                 SpawnTime                                                   OFFSET(getStruct<T>, {0x20, 8, 0, 0})
	CMember(class UClass*)                             ActorClass                                                  OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TWeakObjectPtr<UFortItemDefinition*>)      ItemDef                                                     OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FName)                                     Recipe                                                      OFFSET(getStruct<T>, {0x38, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingSessionInfo
/// Size: 0x0028 (0x000000 - 0x000028)
class FJunoBuildingSessionInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<FJunoBuildingSessionEntry>)         Entries                                                     OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FGuid)                                     SessionId                                                   OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingMetricsClientPermissions
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoBuildingMetricsClientPermissions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FInt32Vector)                              Location                                                    OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	DMember(int8_t)                                    BuildBudgetUsagePercent                                     OFFSET(get<int8_t>, {0xC, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoPlayspaceAccountantFeatureData_InGameClass_PersistentInfo
/// Size: 0x0050 (0x000000 - 0x000050)
class FJunoPlayspaceAccountantFeatureData_InGameClass_PersistentInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FJunoPlayspaceAccountantSaveData)          PlayspaceAccountantSaveData                                 OFFSET(getStruct<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoPlayspaceAccountantSaveData
/// Size: 0x0050 (0x000000 - 0x000050)
class FJunoPlayspaceAccountantSaveData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FName, int32_t>)                      PersistentValueTable                                        OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoPlayspaceIndexPersistenceFeatureData_InGameClass_PersistentInfo
/// Size: 0x0050 (0x000000 - 0x000050)
class FJunoPlayspaceIndexPersistenceFeatureData_InGameClass_PersistentInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FJunoPlayspaceIndexSaveData)               PlayspaceIndexSaveData                                      OFFSET(getStruct<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoPlayspaceIndexSaveData
/// Size: 0x0050 (0x000000 - 0x000050)
class FJunoPlayspaceIndexSaveData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FGuid, FJunoPlayspaceIndexNode>)      PlayspaceNodes                                              OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoPlayspaceIndexNode
/// Size: 0x0030 (0x000000 - 0x000030)
class FJunoPlayspaceIndexNode : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FGuid)                                     ID                                                          OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FGuid)                                     ParentID                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(TArray<FGuid>)                             ChildrenIds                                                 OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoRollbackBadCheckpointRange
/// Size: 0x0028 (0x000000 - 0x000028)
class FJunoRollbackBadCheckpointRange : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   StartCL                                                     OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   EndCL                                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	SMember(FString)                                   StartTimestamp                                              OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   EndTimestamp                                                OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoSyncWeatherCache
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoSyncWeatherCache : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/JunoGameNative.JunoHUDVehicleAmmoInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoHUDVehicleAmmoInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   AmmoCount                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(class UFortItemDefinition*)                AmmoItemDefinition                                          OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoHUDVehicleEnterEvent
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoHUDVehicleEnterEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FJunoHUDVehicleAmmoInfo)                   AmmoInfo                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(float)                                     CurrentCooldownPercent                                      OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     CurrentCooldownDuration                                     OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoHUDVehicleExitEvent
/// Size: 0x0001 (0x000000 - 0x000001)
class FJunoHUDVehicleExitEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/JunoGameNative.JunoHUDVehicleFireEvent
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoHUDVehicleFireEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FJunoHUDVehicleAmmoInfo)                   AmmoInfo                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(float)                                     CooldownDuration                                            OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoHUDVehicleCooldownUpdateEvent
/// Size: 0x0004 (0x000000 - 0x000004)
class FJunoHUDVehicleCooldownUpdateEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     Percent                                                     OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoHUDGliderCanDeployEvent
/// Size: 0x0001 (0x000000 - 0x000001)
class FJunoHUDGliderCanDeployEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bCanDeploy                                                  OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoHUDMenuVillageInteractEvent
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoHUDMenuVillageInteractEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class AJunoCampActor*)                     CampActor                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UJunoCampMembershipActorComponent*)  CampActorMembershipActorComponent                           OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoVerbMessage_AwesomeLevelIncreased
/// Size: 0x0048 (0x000078 - 0x0000C0)
class FJunoVerbMessage_AwesomeLevelIncreased : public FVerbMessage
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FSubjectTagsPair)                          SourceActor                                                 OFFSET(getStruct<T>, {0x78, 56, 0, 0})
	DMember(int32_t)                                   NewAwesomeLevel                                             OFFSET(get<int32_t>, {0xB0, 4, 0, 0})
	DMember(int32_t)                                   PrevAwesomeLevel                                            OFFSET(get<int32_t>, {0xB4, 4, 0, 0})
	DMember(int32_t)                                   RemainingAwesomePoints                                      OFFSET(get<int32_t>, {0xB8, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoVerbMessage_GuidedBuildCompleted
/// Size: 0x0048 (0x000078 - 0x0000C0)
class FJunoVerbMessage_GuidedBuildCompleted : public FVerbMessage
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FSubjectTagsPair)                          GuidedBuilding                                              OFFSET(getStruct<T>, {0x78, 56, 0, 0})
	CMember(TArray<FSubjectTagsPair>)                  BuildContributors                                           OFFSET(get<T>, {0xB0, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoVerbMessage_GuidedBuildStageCompleted
/// Size: 0x0040 (0x000078 - 0x0000B8)
class FJunoVerbMessage_GuidedBuildStageCompleted : public FVerbMessage
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FSubjectTagsPair)                          GuidedBuilding                                              OFFSET(getStruct<T>, {0x78, 56, 0, 0})
	SMember(FJunoStageKey)                             StageKey                                                    OFFSET(getStruct<T>, {0xB0, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoVerbMessage_RecruitNPC
/// Size: 0x0070 (0x000078 - 0x0000E8)
class FJunoVerbMessage_RecruitNPC : public FVerbMessage
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FSubjectTagsPair)                          UniqueAIIdentifier                                          OFFSET(getStruct<T>, {0x78, 56, 0, 0})
	SMember(FSubjectTagsPair)                          AIRole                                                      OFFSET(getStruct<T>, {0xB0, 56, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoVerbMessage_TemperatureUpdated
/// Size: 0x0070 (0x000078 - 0x0000E8)
class FJunoVerbMessage_TemperatureUpdated : public FVerbMessage
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FSubjectTagsPair)                          PreviousTemperature                                         OFFSET(getStruct<T>, {0x78, 56, 0, 0})
	SMember(FSubjectTagsPair)                          NewTemperature                                              OFFSET(getStruct<T>, {0xB0, 56, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoWeatherPersistenceFeatureData_InGameClass_PersistentInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoWeatherPersistenceFeatureData_InGameClass_PersistentInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FJunoWeatherSaveData)                      WeatherSaveData                                             OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoWeatherSaveData
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoWeatherSaveData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FSavedWeather>)                     SavedWeathers                                               OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.SavedWeather
/// Size: 0x0090 (0x000000 - 0x000090)
class FSavedWeather : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FJunoWeatherLocation)                      Location                                                    OFFSET(getStruct<T>, {0x0, 2, 0, 0})
	DMember(int64_t)                                   EndUnixTime                                                 OFFSET(get<int64_t>, {0x8, 8, 0, 0})
	SMember(FJunoWeatherPhase)                         CurrentPhase                                                OFFSET(getStruct<T>, {0x10, 56, 0, 0})
	SMember(FJunoWeatherPhase)                         NextPhase                                                   OFFSET(getStruct<T>, {0x48, 56, 0, 0})
	CMember(TArray<FJunoWeatherPhase>)                 NextPhaseQueue                                              OFFSET(get<T>, {0x80, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoWeatherPhaseForecast
/// Size: 0x0064 (0x000000 - 0x000064)
class FJunoWeatherPhaseForecast : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 100;

public:
	SMember(FGameplayTag)                              WeatherTypeName                                             OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FFloatRange)                               WeatherTypeWeight                                           OFFSET(getStruct<T>, {0x4, 16, 0, 0})
	SMember(FFloatRange)                               duration                                                    OFFSET(getStruct<T>, {0x14, 16, 0, 0})
	DMember(float)                                     TransitionIn                                                OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     TransitionOut                                               OFFSET(get<float>, {0x28, 4, 0, 0})
	SMember(FFloatRange)                               WindSpeedRange                                              OFFSET(getStruct<T>, {0x2C, 16, 0, 0})
	DMember(bool)                                      UseRandomWindDirection                                      OFFSET(get<bool>, {0x3C, 1, 0, 0})
	DMember(float)                                     WindDirectionDegree                                         OFFSET(get<float>, {0x40, 4, 0, 0})
	SMember(FGameplayTag)                              MorningTemperature                                          OFFSET(getStruct<T>, {0x44, 4, 0, 0})
	SMember(FGameplayTag)                              DayTemperature                                              OFFSET(getStruct<T>, {0x48, 4, 0, 0})
	SMember(FGameplayTag)                              EveningTemperature                                          OFFSET(getStruct<T>, {0x4C, 4, 0, 0})
	SMember(FGameplayTag)                              NightTemperature                                            OFFSET(getStruct<T>, {0x50, 4, 0, 0})
	SMember(FFloatRange)                               WeatherIntensityRange                                       OFFSET(getStruct<T>, {0x54, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoWeatherLocalizedForecasts
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoWeatherLocalizedForecasts : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FJunoWeatherLocation)                      Location                                                    OFFSET(getStruct<T>, {0x0, 2, 0, 0})
	CMember(TArray<FJunoWeatherPhaseForecast>)         WeatherTypes                                                OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoWeatherSeasonRow
/// Size: 0x0018 (0x000008 - 0x000020)
class FJunoWeatherSeasonRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FGameplayTag)                              Season                                                      OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	CMember(TArray<FJunoWeatherLocalizedForecasts>)    LocalizedForecasts                                          OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoWorldConditionAICampChecks
/// Size: 0x00B8 (0x000010 - 0x0000C8)
class FJunoWorldConditionAICampChecks : public FWorldConditionCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FWorldConditionContextDataRef)             EventDataRef                                                OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	SMember(FWorldConditionContextDataRef)             AIRef                                                       OFFSET(getStruct<T>, {0x18, 8, 0, 0})
	CMember(EJunoWorldConditionAICampChecksIsAssigned) MustBeAssignedToACamp                                       OFFSET(get<T>, {0x20, 1, 0, 0})
	CMember(EJunoWorldConditionAICampChecksIsAssigned) MustBeAssignedToPlayer                                      OFFSET(get<T>, {0x21, 1, 0, 0})
	SMember(FWorldConditionContextDataRef)             PlayerControllerRef                                         OFFSET(getStruct<T>, {0x24, 8, 0, 0})
	SMember(FGameplayTagQuery)                         RoleMustMatchQuery                                          OFFSET(getStruct<T>, {0x30, 72, 0, 0})
	SMember(FGameplayTagQuery)                         SoftRemovedReasonsMustMatchQuery                            OFFSET(getStruct<T>, {0x78, 72, 0, 0})
	CMember(EJunoWorldConditionMustHaveLastUsedGatheringActor) MustHaveLastUsedGatheringActor                      OFFSET(get<T>, {0xC0, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoWorldConditionBed
/// Size: 0x0018 (0x000010 - 0x000028)
class FJunoWorldConditionBed : public FWorldConditionCommonActorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FWorldConditionContextDataRef)             BedActorRef                                                 OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	SMember(FWorldConditionContextDataRef)             UserActorRef                                                OFFSET(getStruct<T>, {0x18, 8, 0, 0})
	CMember(EJunoWorldConditionAssignmentState)        AssignmentState                                             OFFSET(get<T>, {0x20, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoWorldConditionIsSpatiallyInCamp
/// Size: 0x0008 (0x000010 - 0x000018)
class FJunoWorldConditionIsSpatiallyInCamp : public FWorldConditionCommonActorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FWorldConditionContextDataRef)             ActorRef                                                    OFFSET(getStruct<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoWorldConditionLocalCampChecks
/// Size: 0x0010 (0x000010 - 0x000020)
class FJunoWorldConditionLocalCampChecks : public FWorldConditionCommonActorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FWorldConditionContextDataRef)             ActorRef                                                    OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	DMember(bool)                                      bMustHaveFreeRecruitmentObject                              OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(float)                                     MinimumRemainingSoftRemovalTimeInJunoHours                  OFFSET(get<float>, {0x1C, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoWorldConditionPlayerCampChecks
/// Size: 0x0010 (0x000010 - 0x000020)
class FJunoWorldConditionPlayerCampChecks : public FWorldConditionCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FWorldConditionContextDataRef)             PlayerControllerRef                                         OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	CMember(EJunoWorldConditionHasFollower)            PlayerHasFollowersCheck                                     OFFSET(get<T>, {0x18, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoWorldConditionQuantityInAIResourcesInventory
/// Size: 0x0010 (0x000010 - 0x000020)
class FJunoWorldConditionQuantityInAIResourcesInventory : public FWorldConditionCommonActorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FWorldConditionContextDataRef)             AIRef                                                       OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	DMember(int32_t)                                   RequiredResourcesCount                                      OFFSET(get<int32_t>, {0x18, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoWorldConditionSandboxChecks
/// Size: 0x0000 (0x000010 - 0x000010)
class FJunoWorldConditionSandboxChecks : public FWorldConditionCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/JunoGameNative.JunoWorldPersistenceFeatureData_InGameClass_PersistentInfo
/// Size: 0x0040 (0x000000 - 0x000040)
class FJunoWorldPersistenceFeatureData_InGameClass_PersistentInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FJunoWorldSaveData)                        WorldSaveData                                               OFFSET(getStruct<T>, {0x0, 64, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoWorldSaveData
/// Size: 0x0040 (0x000000 - 0x000040)
class FJunoWorldSaveData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(uint32_t)                                  WorldPersistenceVersion                                     OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
	SMember(FDateTime)                                 CreationTime                                                OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FJunoWorldRandomSeed)                      RandomSeed                                                  OFFSET(getStruct<T>, {0x10, 20, 0, 0})
	SMember(FVector)                                   InitialPlayerStartLocation                                  OFFSET(getStruct<T>, {0x28, 24, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoWorldRandomSeed
/// Size: 0x0014 (0x000000 - 0x000014)
class FJunoWorldRandomSeed : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(int32_t)                                   RootSeed                                                    OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FGuid)                                     Version                                                     OFFSET(getStruct<T>, {0x4, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoWorldSettingRepState
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoWorldSettingRepState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FGameplayTag)                              SettingName                                                 OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(bool)                                      bIsSettingOn                                                OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(bool)                                      bIsSettingTainted                                           OFFSET(get<bool>, {0x5, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoWorldSettingMapping
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoWorldSettingMapping : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FGameplayTag)                              TagName                                                     OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     SavedName                                                   OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoWorldSettingsPersistenceFeatureData_InGameClass_PersistentInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoWorldSettingsPersistenceFeatureData_InGameClass_PersistentInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FJunoWorldSettingsSaveData)                WorldSettingsSaveData                                       OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoWorldSettingsSaveData
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoWorldSettingsSaveData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FName>)                             TaintedSettings                                             OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoWorldSettingBoolToggleEvent
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoWorldSettingBoolToggleEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FGameplayTag)                              SettingName                                                 OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(bool)                                      bIsSettingOn                                                OFFSET(get<bool>, {0x4, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoWorldSettingTaintedEvent
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoWorldSettingTaintedEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FGameplayTag)                              SettingName                                                 OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(bool)                                      bIsSettingTainted                                           OFFSET(get<bool>, {0x4, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoItemDiscoveredMessage
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoItemDiscoveredMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UFortItemDefinition*)                NewItemDefinition                                           OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class AFortPlayerState*)                   InstigatorPlayerState                                       OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoItemViewStateChanged
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoItemViewStateChanged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class AFortPlayerState*)                   PlayerState                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UFortItemDefinition*)                ItemDefinition                                              OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bIsViewed                                                   OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoRecipeViewStateChanged
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoRecipeViewStateChanged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class AFortPlayerState*)                   PlayerState                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     RecipeName                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(bool)                                      bIsViewed                                                   OFFSET(get<bool>, {0xC, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoRecipeMessageData
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoRecipeMessageData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     RowName                                                     OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(class AFortPlayerState*)                   DiscoveredByPlayerState                                     OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoRecipeRevealedMessage
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoRecipeRevealedMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FJunoRecipeMessageData>)            FoundRecipes                                                OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoRecipeVisibleMessage
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoRecipeVisibleMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FJunoRecipeMessageData>)            VisibleRecipes                                              OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_RequestMapMarkerCustomization
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoEvent_RequestMapMarkerCustomization : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class UJunoMapMarkerCustomizationInitData*) InitData                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_OpenPlayerManagement
/// Size: 0x0001 (0x000000 - 0x000001)
class FJunoEvent_OpenPlayerManagement : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/JunoGameNative.CampRemovalEntry
/// Size: 0x0018 (0x000000 - 0x000018)
class FCampRemovalEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TWeakObjectPtr<AJunoCampActor*>)           CampActor                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.ReplicatedCampData
/// Size: 0x0058 (0x000000 - 0x000058)
class FReplicatedCampData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FGuid)                                     CampActorID                                                 OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FPrimaryAssetId)                           CampCenterAssetID                                           OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	SMember(FBox)                                      CampBounds                                                  OFFSET(getStruct<T>, {0x18, 56, 0, 0})
	DMember(bool)                                      bIsSoftRemoved                                              OFFSET(get<bool>, {0x50, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.POIEncounterDataForCamps
/// Size: 0x0040 (0x000000 - 0x000040)
class FPOIEncounterDataForCamps : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FBox)                                      Bounds                                                      OFFSET(getStruct<T>, {0x8, 56, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoCampManagementPerk
/// Size: 0x0060 (0x000008 - 0x000068)
class FJunoCampManagementPerk : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FText)                                     Title                                                       OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FText)                                     Description                                                 OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FGameplayTagContainer)                     GameplayTags                                                OFFSET(getStruct<T>, {0x38, 32, 0, 0})
	CMember(TArray<class UClass*>)                     GEsToApply                                                  OFFSET(get<T>, {0x58, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoCampManagementPlayerPerk
/// Size: 0x0018 (0x000068 - 0x000080)
class FJunoCampManagementPlayerPerk : public FJunoCampManagementPerk
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FWorldConditionQueryDefinition)            SelectionPreconditions                                      OFFSET(getStruct<T>, {0x68, 24, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoCampManagementNPCPerk
/// Size: 0x0000 (0x000068 - 0x000068)
class FJunoCampManagementNPCPerk : public FJunoCampManagementPerk
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Struct /Script/JunoGameNative.JunoCampManagementNPCPerkPerBiome
/// Size: 0x0000 (0x000068 - 0x000068)
class FJunoCampManagementNPCPerkPerBiome : public FJunoCampManagementPerk
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Struct /Script/JunoGameNative.JunoStudGunSelected
/// Size: 0x0001 (0x000000 - 0x000001)
class FJunoStudGunSelected : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/JunoGameNative.JunoStudGunAttachModeEntered
/// Size: 0x0001 (0x000000 - 0x000001)
class FJunoStudGunAttachModeEntered : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/JunoGameNative.JunoStudGunAttachModeExited
/// Size: 0x0001 (0x000000 - 0x000001)
class FJunoStudGunAttachModeExited : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/JunoGameNative.JunoStudGunUnselected
/// Size: 0x0001 (0x000000 - 0x000001)
class FJunoStudGunUnselected : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/JunoGameNative.JunoAwesomeThresholdMapping
/// Size: 0x0090 (0x000000 - 0x000090)
class FJunoAwesomeThresholdMapping : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(TArray<class UJunoActionConfig*>)          ThresholdActionConfigs                                      OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FScalableFloat)                            AwesomeLevelThreshold                                       OFFSET(getStruct<T>, {0x10, 40, 0, 0})
	SMember(FScalableFloat)                            AwesomeLevelRangeMinThreshold                               OFFSET(getStruct<T>, {0x38, 40, 0, 0})
	SMember(FScalableFloat)                            AwesomeLevelRangeMaxThreshold                               OFFSET(getStruct<T>, {0x60, 40, 0, 0})
	CMember(EJunoAwesomeThresholdTestMode)             ThresholdTestMode                                           OFFSET(get<T>, {0x88, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoAwesomePlacementConfigTableRow
/// Size: 0x0028 (0x000008 - 0x000030)
class FJunoAwesomePlacementConfigTableRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TWeakObjectPtr<UJunoBuildInstructionsItemDefinition*>) ItemDefinition                                  OFFSET(get<T>, {0x8, 32, 0, 0})
	DMember(int32_t)                                   AwesomePointsToContribute                                   OFFSET(get<int32_t>, {0x28, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoRecipeUnlockType
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoRecipeUnlockType : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/JunoGameNative.JunoRecipeUnlockType_BuildInstructions
/// Size: 0x0010 (0x000008 - 0x000018)
class FJunoRecipeUnlockType_BuildInstructions : public FJunoRecipeUnlockType
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<TWeakObjectPtr<UJunoBuildInstructionsItemDefinition*>>) BuildInstructions                       OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoRecipeUnlockType_CraftingRowNames
/// Size: 0x0010 (0x000008 - 0x000018)
class FJunoRecipeUnlockType_CraftingRowNames : public FJunoRecipeUnlockType
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FName>)                             CraftingRowNames                                            OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoRecipeUnlockType_KnowledgeBundle
/// Size: 0x0008 (0x000008 - 0x000010)
class FJunoRecipeUnlockType_KnowledgeBundle : public FJunoRecipeUnlockType
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UJunoKnowledgeBundle*)               KnowledgeBundle                                             OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEventReaction_RecipeKnowledgeState
/// Size: 0x0018 (0x000008 - 0x000020)
class FJunoEventReaction_RecipeKnowledgeState : public FEventReactionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FInstancedStruct>)                  RecipeUnlockTypes                                           OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(EJunoKnowledgeState)                       NewState                                                    OFFSET(get<T>, {0x18, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.PlayerAwesomeUpgradeResourceData
/// Size: 0x0018 (0x000000 - 0x000018)
class FPlayerAwesomeUpgradeResourceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<class UFortItem*>)                  ResourceInstances                                           OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.AwesomePerkReward
/// Size: 0x0050 (0x000000 - 0x000050)
class FAwesomePerkReward : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FText)                                     Title                                                       OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FText)                                     Description                                                 OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FGameplayTagContainer)                     GameplayTags                                                OFFSET(getStruct<T>, {0x30, 32, 0, 0})
};

/// Struct /Script/JunoGameNative.AwesomeLevelRewardEntry
/// Size: 0x0028 (0x000000 - 0x000028)
class FAwesomeLevelRewardEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   MaxVillagerCapacity                                         OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(TArray<FAwesomePerkReward>)                PlayerPerkRewards                                           OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FAwesomePerkReward>)                NPCPerkRewards                                              OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoVerbFilter_AwesomeLevelIncreased
/// Size: 0x0090 (0x0000A0 - 0x000130)
class FJunoVerbFilter_AwesomeLevelIncreased : public FObjectiveFilter
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FObjectiveSubjectTags_Progressible)        SourceActor                                                 OFFSET(getStruct<T>, {0xA0, 80, 0, 0})
	DMember(bool)                                      bUseNewLevelRequirement                                     OFFSET(get<bool>, {0xF0, 1, 0, 0})
	SMember(FInt32Range)                               RequiredNewLevel                                            OFFSET(getStruct<T>, {0xF4, 16, 0, 0})
	DMember(bool)                                      bUsePrevLevelRequirement                                    OFFSET(get<bool>, {0x104, 1, 0, 0})
	SMember(FInt32Range)                               RequiredPrevLevel                                           OFFSET(getStruct<T>, {0x108, 16, 0, 0})
	DMember(bool)                                      bUseRemainingPointsLevelRequirement                         OFFSET(get<bool>, {0x118, 1, 0, 0})
	SMember(FInt32Range)                               RequiredRemainingPoints                                     OFFSET(getStruct<T>, {0x11C, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoVerbFilter_GuidedBuildCompleted
/// Size: 0x0098 (0x0000A0 - 0x000138)
class FJunoVerbFilter_GuidedBuildCompleted : public FObjectiveFilter
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	SMember(FObjectiveSubjectTags)                     GuidedBuilding                                              OFFSET(getStruct<T>, {0xA0, 72, 0, 0})
	SMember(FObjectiveSubjectTags_Progressible)        BuildContributors                                           OFFSET(getStruct<T>, {0xE8, 80, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoVerbFilter_GuidedBuildStageCompleted
/// Size: 0x0050 (0x0000A0 - 0x0000F0)
class FJunoVerbFilter_GuidedBuildStageCompleted : public FObjectiveFilter
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FObjectiveSubjectTags)                     GuidedBuilding                                              OFFSET(getStruct<T>, {0xA0, 72, 0, 0})
	SMember(FJunoStageKey)                             StageKey                                                    OFFSET(getStruct<T>, {0xE8, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoVerbFilter_RecruitNPC
/// Size: 0x0090 (0x0000A0 - 0x000130)
class FJunoVerbFilter_RecruitNPC : public FObjectiveFilter
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FObjectiveSubjectTags)                     UniqueAIIdentifier                                          OFFSET(getStruct<T>, {0xA0, 72, 0, 0})
	SMember(FObjectiveSubjectTags)                     AIRole                                                      OFFSET(getStruct<T>, {0xE8, 72, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoVerbFilter_TemperatureUpdated
/// Size: 0x0090 (0x0000A0 - 0x000130)
class FJunoVerbFilter_TemperatureUpdated : public FObjectiveFilter
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FObjectiveSubjectTags)                     PreviousTemperature                                         OFFSET(getStruct<T>, {0xA0, 72, 0, 0})
	SMember(FObjectiveSubjectTags)                     NewTemperature                                              OFFSET(getStruct<T>, {0xE8, 72, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoMinifigLayeringParameters
/// Size: 0x0014 (0x000000 - 0x000014)
class FJunoMinifigLayeringParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(float)                                     Prop1                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Prop2                                                       OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     AddLocomotion                                               OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     AddSecondary                                                OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     MeshSpace                                                   OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoMinifigLayeringMask
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FJunoMinifigLayeringMask : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FJunoMinifigLayeringParameters)            head                                                        OFFSET(getStruct<T>, {0x0, 20, 0, 0})
	SMember(FJunoMinifigLayeringParameters)            Torso                                                       OFFSET(getStruct<T>, {0x14, 20, 0, 0})
	SMember(FJunoMinifigLayeringParameters)            ArmL                                                        OFFSET(getStruct<T>, {0x28, 20, 0, 0})
	SMember(FJunoMinifigLayeringParameters)            ArmR                                                        OFFSET(getStruct<T>, {0x3C, 20, 0, 0})
	SMember(FJunoMinifigLayeringParameters)            HandL                                                       OFFSET(getStruct<T>, {0x50, 20, 0, 0})
	SMember(FJunoMinifigLayeringParameters)            HandR                                                       OFFSET(getStruct<T>, {0x64, 20, 0, 0})
	SMember(FJunoMinifigLayeringParameters)            pelvis                                                      OFFSET(getStruct<T>, {0x78, 20, 0, 0})
	SMember(FJunoMinifigLayeringParameters)            Legs                                                        OFFSET(getStruct<T>, {0x8C, 20, 0, 0})
};

/// Struct /Script/JunoGameNative.AICharacterInfo
/// Size: 0x0040 (0x000000 - 0x000040)
class FAICharacterInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FGameplayTag)                              AICharacterGameplayTag                                      OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FText)                                     AICharacterDisplayName                                      OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               AICharacterIcon                                             OFFSET(get<T>, {0x20, 32, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingResourceData
/// Size: 0x0018 (0x000008 - 0x000020)
class FJunoBuildingResourceData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FDataTableRowHandle)                       ResourceItemHandle                                          OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	CMember(EJunoResourceScale)                        ResourceScale                                               OFFSET(get<T>, {0x18, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingHitData
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoBuildingHitData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class ABuildingActor*)                     BuildingActor                                               OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FTimerHandle)                              HealthRegenHandle                                           OFFSET(getStruct<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoResourceData
/// Size: 0x0070 (0x000008 - 0x000078)
class FJunoResourceData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TWeakObjectPtr<UFortWorldItemDefinition*>) ItemDefinition                                              OFFSET(get<T>, {0x8, 32, 0, 0})
	CMember(TMap<EJunoResourceScale, int32_t>)         Amount                                                      OFFSET(get<T>, {0x28, 80, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_RootPlayspaceReady
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoEvent_RootPlayspaceReady : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class AJunoRootPlayspace*)                 Playspace                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_WorldLoadedOrCreated
/// Size: 0x0088 (0x000000 - 0x000088)
class FJunoEvent_WorldLoadedOrCreated : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FJunoWorldMetadata)                        WorldMetadata                                               OFFSET(getStruct<T>, {0x0, 136, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoReplicatedWorldMetadata
/// Size: 0x00E0 (0x000000 - 0x0000E0)
class FJunoReplicatedWorldMetadata : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FJunoWorldMetadata)                        MetaData                                                    OFFSET(getStruct<T>, {0x0, 136, 0, 0})
	SMember(FString)                                   OwnerId                                                     OFFSET(getStruct<T>, {0x88, 16, 0, 0})
	SMember(FString)                                   OwnerName                                                   OFFSET(getStruct<T>, {0x98, 16, 0, 0})
	CMember(TArray<FString>)                           Keyholders                                                  OFFSET(get<T>, {0xA8, 16, 0, 0})
	CMember(TArray<FString>)                           Occupants                                                   OFFSET(get<T>, {0xB8, 16, 0, 0})
	DMember(double)                                    WorldOwnerGuestReservationExpiration                        OFFSET(get<double>, {0xC8, 8, 0, 0})
	SMember(FDateTime)                                 CreatedAt                                                   OFFSET(getStruct<T>, {0xD0, 8, 0, 0})
	SMember(FDateTime)                                 LastPlayed                                                  OFFSET(getStruct<T>, {0xD8, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.PCGJunoPossibleWorld
/// Size: 0x0038 (0x000008 - 0x000040)
class FPCGJunoPossibleWorld : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TWeakObjectPtr<UWorld*>)                   PersistentLevel                                             OFFSET(get<T>, {0x8, 32, 0, 0})
	CMember(TArray<TWeakObjectPtr<UWorld*>>)           OverlayLevels                                               OFFSET(get<T>, {0x28, 16, 0, 0})
	DMember(bool)                                      bCanBeRandomlySelected                                      OFFSET(get<bool>, {0x38, 1, 0, 0})
	DMember(bool)                                      bIsDeprecated                                               OFFSET(get<bool>, {0x39, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoRidingAnimationData
/// Size: 0x0014 (0x000000 - 0x000014)
class FJunoRidingAnimationData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(bool)                                      bIsRidden                                                   OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bIsTurningInPlace                                           OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bIsSprinting                                                OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(bool)                                      bIsBeingPetted                                              OFFSET(get<bool>, {0x3, 1, 0, 0})
	DMember(bool)                                      bIsMovingBackwards                                          OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(float)                                     TurnInPlaceRotationSpeed                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     TurnInPlaceAngleDelta                                       OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     RiderReferentialYaw                                         OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoItemChangedMessage
/// Size: 0x0060 (0x000000 - 0x000060)
class FJunoItemChangedMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(class UJunoInventoryComponent*)            OwningInventoryComponent                                    OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FJunoItemSlot)                             ChangedSlot                                                 OFFSET(getStruct<T>, {0x8, 80, 0, 0})
	CMember(EJunoItemChangeType)                       ItemChangeType                                              OFFSET(get<T>, {0x58, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoItemSlotPrediction
/// Size: 0x0030 (0x000000 - 0x000030)
class FJunoItemSlotPrediction : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/JunoGameNative.ServerSpawnedActorPair
/// Size: 0x000C (0x000000 - 0x00000C)
class FServerSpawnedActorPair : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(TWeakObjectPtr<AActor*>)                   Actor                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     StableName                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuilderToolSupportActorComponentPair
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoBuilderToolSupportActorComponentPair : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class AActor*)                             Actor                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UPrimitiveComponent*)                Component                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuilderToolSupportCandidate
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoBuilderToolSupportCandidate : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TWeakObjectPtr<AActor*>)                   Actor                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TWeakObjectPtr<UPrimitiveComponent*>)      Component                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuilderToolSelectedActor
/// Size: 0x0070 (0x000000 - 0x000070)
class FJunoBuilderToolSelectedActor : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(class UClass*)                             Class                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FTransform)                                ToSelection                                                 OFFSET(getStruct<T>, {0x10, 96, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuilderToolInteractionActorClassSet
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FJunoBuilderToolInteractionActorClassSet : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(TSet<TWeakObjectPtr<UClass*>>)             Classes                                                     OFFSET(get<T>, {0x0, 80, 0, 0})
	CMember(TSet<TWeakObjectPtr<UClass*>>)             ExcludedSubclasses                                          OFFSET(get<T>, {0x50, 80, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuilderToolInteractionRow
/// Size: 0x00A0 (0x000008 - 0x0000A8)
class FJunoBuilderToolInteractionRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FJunoBuilderToolInteractionActorClassSet)  SupportedClasses                                            OFFSET(getStruct<T>, {0x8, 160, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuilderToolSelectionSpawnParams
/// Size: 0x0100 (0x000000 - 0x000100)
class FJunoBuilderToolSelectionSpawnParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	CMember(TArray<FJunoBuilderToolSelectedActor>)     SelectedActors                                              OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FTransform)                                SelectionTransform                                          OFFSET(getStruct<T>, {0x10, 96, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   AttachmentActor                                             OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(TArray<FJunoBuilderToolSupportCandidate>)  SupportCandidates                                           OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(class APawn*)                              Instigator                                                  OFFSET(get<T>, {0x88, 8, 0, 0})
	SMember(FName)                                     RecipeName                                                  OFFSET(getStruct<T>, {0x90, 4, 0, 0})
	CMember(TArray<FName>)                             StableNames                                                 OFFSET(get<T>, {0x98, 16, 0, 0})
	SMember(FGameplayTagContainer)                     GameplayTags                                                OFFSET(getStruct<T>, {0xA8, 32, 0, 0})
	SMember(FBox)                                      WorldSpaceBoundingBox                                       OFFSET(getStruct<T>, {0xC8, 56, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuilderToolTimedActors
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoBuilderToolTimedActors : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<TWeakObjectPtr<AActor*>>)           Actors                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingActorOverlapAction
/// Size: 0x0028 (0x000000 - 0x000028)
class FJunoBuildingActorOverlapAction : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(EJunoBuildingActorOverlapActionType)       OverlapActionType                                           OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FName)                                     ComponentTag                                                OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FGameplayTagContainer)                     RequiredTags                                                OFFSET(getStruct<T>, {0x8, 32, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingSnapEntry
/// Size: 0x0100 (0x000000 - 0x000100)
class FJunoBuildingSnapEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FName)                                     Label                                                       OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FGameplayTagContainer)                     Tags                                                        OFFSET(getStruct<T>, {0x8, 32, 0, 0})
	SMember(FTransform)                                ToActor                                                     OFFSET(getStruct<T>, {0x30, 96, 0, 0})
	SMember(FVector)                                   PreviewOffset                                               OFFSET(getStruct<T>, {0x90, 24, 0, 0})
	SMember(FGameplayTagContainer)                     ConnectableTags                                             OFFSET(getStruct<T>, {0xA8, 32, 0, 0})
	SMember(FBox)                                      TargetingArea                                               OFFSET(getStruct<T>, {0xC8, 56, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingSnapEntryContext
/// Size: 0x0070 (0x000000 - 0x000070)
class FJunoBuildingSnapEntryContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(EJunoBuildingSnapEntryState)               State                                                       OFFSET(get<T>, {0x8, 1, 0, 0})
	SMember(FTransform)                                ToWorld                                                     OFFSET(getStruct<T>, {0x10, 96, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingSnapContext
/// Size: 0x0050 (0x000000 - 0x000050)
class FJunoBuildingSnapContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<FJunoBuildingSnapEntryContext>)     TargetEntries                                               OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FQuat)                                     RotationOffset                                              OFFSET(getStruct<T>, {0x30, 32, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingConnectivityContext
/// Size: 0x02A0 (0x000000 - 0x0002A0)
class FJunoBuildingConnectivityContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	SMember(FJunoBuildingConnectionPointsResult)       PreviewConnectionPoints                                     OFFSET(getStruct<T>, {0x0, 80, 0, 0})
	SMember(FVector)                                   TargetTraceToActorLocation                                  OFFSET(getStruct<T>, {0x50, 24, 0, 0})
	SMember(FJunoBuildingConnectionPointsResult)       TargetConnectionPoints                                      OFFSET(getStruct<T>, {0x80, 80, 0, 0})
	SMember(FJunoBuildingConnection)                   Connection                                                  OFFSET(getStruct<T>, {0xD0, 464, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingOverlapParams
/// Size: 0x0140 (0x000000 - 0x000140)
class FJunoBuildingOverlapParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
};

/// Struct /Script/JunoGameNative.JunoBuildingFloatingParams
/// Size: 0x0160 (0x000000 - 0x000160)
class FJunoBuildingFloatingParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
};

/// Struct /Script/JunoGameNative.OnPlacementAction
/// Size: 0x000C (0x000000 - 0x00000C)
class FOnPlacementAction : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(TWeakObjectPtr<AActor*>)                   Actor                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(EOnPlacementAction)                        Action                                                      OFFSET(get<T>, {0x8, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingPlacementResult
/// Size: 0x0280 (0x000000 - 0x000280)
class FJunoBuildingPlacementResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 640;

public:
	SMember(FTransform)                                CameraViewPoint                                             OFFSET(getStruct<T>, {0x0, 96, 0, 0})
	SMember(FHitResult)                                TargetTraceResult                                           OFFSET(getStruct<T>, {0x60, 232, 0, 0})
	CMember(EJunoBuildingPlacementType)                PlacementType                                               OFFSET(get<T>, {0x148, 1, 0, 0})
	SMember(FTransform)                                UnsnappedTargetTransform                                    OFFSET(getStruct<T>, {0x150, 96, 0, 0})
	SMember(FTransform)                                TargetTransform                                             OFFSET(getStruct<T>, {0x1B0, 96, 0, 0})
	SMember(FTransform)                                CoordinateBasis                                             OFFSET(getStruct<T>, {0x210, 96, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   AttachmentActor                                             OFFSET(get<T>, {0x270, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingBehaviorGridLimits
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoBuildingBehaviorGridLimits : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FIntPoint)                                 Min                                                         OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FIntPoint)                                 Max                                                         OFFSET(getStruct<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingBehaviorInteractionRow
/// Size: 0x0140 (0x0000A8 - 0x0001E8)
class FJunoBuildingBehaviorInteractionRow : public FJunoBuilderToolInteractionRow
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 488;

public:
	SMember(FJunoBuilderToolInteractionActorClassSet)  OverlappableClasses                                         OFFSET(getStruct<T>, {0xA8, 160, 0, 0})
	SMember(FJunoBuilderToolInteractionActorClassSet)  PlacementSupportingClasses                                  OFFSET(getStruct<T>, {0x148, 160, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingBehaviorOverrides
/// Size: 0x0260 (0x000000 - 0x000260)
class FJunoBuildingBehaviorOverrides : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	SMember(FJunoBuildingBehaviorInteractionRow)       ConfigData                                                  OFFSET(getStruct<T>, {0x0, 488, 0, 0})
	SMember(FVector)                                   GridSize                                                    OFFSET(getStruct<T>, {0x1E8, 24, 0, 0})
	SMember(FRotator)                                  RotationOffset                                              OFFSET(getStruct<T>, {0x200, 24, 0, 0})
	SMember(FVector)                                   PivotOffset                                                 OFFSET(getStruct<T>, {0x218, 24, 0, 0})
	SMember(FVector)                                   GridSnapOffset                                              OFFSET(getStruct<T>, {0x230, 24, 0, 0})
	SMember(FJunoBuildingBehaviorGridLimits)           GridOffsetLimits                                            OFFSET(getStruct<T>, {0x248, 16, 0, 0})
	DMember(float)                                     MinDistance                                                 OFFSET(get<float>, {0x258, 4, 0, 0})
	DMember(bool)                                      bMinDistanceIncludesBounds                                  OFFSET(get<bool>, {0x25C, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingSnapEntryBase
/// Size: 0x0028 (0x000000 - 0x000028)
class FJunoBuildingSnapEntryBase : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FGameplayTagContainer)                     RequiredTags                                                OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoGuidedBuildingComponentData
/// Size: 0x0070 (0x000000 - 0x000070)
class FJunoGuidedBuildingComponentData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(class UStaticMesh*)                        StaticMesh                                                  OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UGeometryCollectionComponent*)       GeoCollectionComp                                           OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x10, 96, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingEditorActorEntry
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FJunoBuildingEditorActorEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FName)                                     ActorName                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(class AJunoBuildingActor*)                 Actor                                                       OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class UClass*)                             ActorClass                                                  OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x20, 96, 0, 0})
	CMember(TArray<FJunoGuidedBuildingComponentData>)  CompData                                                    OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TArray<FName>)                             ConnectedActors                                             OFFSET(get<T>, {0x90, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoGuidedBuildingStageData
/// Size: 0x0040 (0x000000 - 0x000040)
class FJunoGuidedBuildingStageData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FText)                                     StageDisplayName                                            OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	CMember(TArray<int32_t>)                           ActorIndexes                                                OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<int32_t>)                           AutoCompleteIndexes                                         OFFSET(get<T>, {0x28, 16, 0, 0})
	DMember(int32_t)                                   NumCompleted                                                OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(bool)                                      bStageEverCompleted                                         OFFSET(get<bool>, {0x3C, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoGuidedBuildingStageEditorData
/// Size: 0x0028 (0x000040 - 0x000068)
class FJunoGuidedBuildingStageEditorData : public FJunoGuidedBuildingStageData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FName)                                     StageName                                                   OFFSET(getStruct<T>, {0x40, 4, 0, 0})
	SMember(FGameplayTag)                              StageTag                                                    OFFSET(getStruct<T>, {0x44, 4, 0, 0})
	CMember(TArray<FName>)                             ActorNames                                                  OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<FName>)                             AutoCompleteActorNames                                      OFFSET(get<T>, {0x58, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoGuidedBuildingSectionData
/// Size: 0x0038 (0x000000 - 0x000038)
class FJunoGuidedBuildingSectionData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FText)                                     SectionDisplayName                                          OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	DMember(int32_t)                                   NumCompleted                                                OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   TotalNumberOfSnapsInSection                                 OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	DMember(bool)                                      bSectionEverCompleted                                       OFFSET(get<bool>, {0x20, 1, 0, 0})
	CMember(TArray<FJunoGuidedBuildingStageData>)      Stages                                                      OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoGuidedBuildingSectionEditorData
/// Size: 0x0020 (0x000038 - 0x000058)
class FJunoGuidedBuildingSectionEditorData : public FJunoGuidedBuildingSectionData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(double)                                    ZSortValue                                                  OFFSET(get<double>, {0x38, 8, 0, 0})
	SMember(FName)                                     SectionName                                                 OFFSET(getStruct<T>, {0x40, 4, 0, 0})
	CMember(TArray<FJunoGuidedBuildingStageEditorData>) EditorStages                                               OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoGuidedBuildingSetData
/// Size: 0x0070 (0x000000 - 0x000070)
class FJunoGuidedBuildingSetData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FText)                                     SetDisplayName                                              OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	DMember(int32_t)                                   TotalNumberOfSnapsInSet                                     OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	SMember(FJunoGuidedBuildingStageData)              FoundationStage                                             OFFSET(getStruct<T>, {0x20, 64, 0, 0})
	CMember(TArray<FJunoGuidedBuildingSectionData>)    Sections                                                    OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoGuidedBuildingSetEditorData
/// Size: 0x0010 (0x000070 - 0x000080)
class FJunoGuidedBuildingSetEditorData : public FJunoGuidedBuildingSetData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TArray<FJunoGuidedBuildingSectionEditorData>) EditorSections                                           OFFSET(get<T>, {0x70, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.GuidedBuildingCachedEditorData
/// Size: 0x00C8 (0x000000 - 0x0000C8)
class FGuidedBuildingCachedEditorData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(class UWorld*)                             World                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class AJunoGuidedBuildingSettings*)        SettingsActor                                               OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TArray<FJunoBuildingEditorActorEntry>)     ActorEntries                                                OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   BaseName                                                    OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FString)                                   GuidedBuildingBlueprintName                                 OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   GuidedBuildingPreviewMeshName                               OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FString)                                   GuidedBuildingPluginName                                    OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FString)                                   GuidedBuildingBlueprintPath                                 OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	SMember(FString)                                   GuidedBuildingPreviewMeshPath                               OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	SMember(FString)                                   OldBPPath                                                   OFFSET(getStruct<T>, {0x80, 16, 0, 0})
	SMember(FName)                                     PlaylistName                                                OFFSET(getStruct<T>, {0x90, 4, 0, 0})
	CMember(TArray<FString>)                           PluginsToActivate                                           OFFSET(get<T>, {0x98, 16, 0, 0})
	CMember(class UClass*)                             ParentClass                                                 OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(class UClass*)                             NewBPClass                                                  OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(TArray<FJunoStageKey>)                     AllStageKeys                                                OFFSET(get<T>, {0xB8, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoSortTagData
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoSortTagData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FGameplayTag)                              SortTag                                                     OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   MaxStageSize                                                OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoGuidedBuildingData
/// Size: 0x0058 (0x000000 - 0x000058)
class FJunoGuidedBuildingData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FName)                                     ActorName                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     Recipe                                                      OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	CMember(TArray<FComponentReference>)               ComponentReferences                                         OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   ActorClass                                                  OFFSET(get<T>, {0x18, 32, 0, 0})
	CMember(TArray<class UPrimitiveComponent*>)        Components                                                  OFFSET(get<T>, {0x38, 16, 0, 0})
	SMember(FJunoStageKey)                             StageKey                                                    OFFSET(getStruct<T>, {0x48, 8, 0, 0})
	DMember(int32_t)                                   BuildingStateIndex                                          OFFSET(get<int32_t>, {0x50, 4, 0, 0})
	DMember(bool)                                      bIsInstantAutoComplete                                      OFFSET(get<bool>, {0x54, 1, 1, 0})
	DMember(bool)                                      bIsAutoComplete                                             OFFSET(get<bool>, {0x54, 1, 1, 1})
	DMember(bool)                                      bIsFoundation                                               OFFSET(get<bool>, {0x54, 1, 1, 2})
	DMember(bool)                                      bForceIndependentlySupported                                OFFSET(get<bool>, {0x54, 1, 1, 3})
};

/// Struct /Script/JunoGameNative.JunoGuidedBuildingStateEntry
/// Size: 0x0014 (0x00000C - 0x000020)
class FJunoGuidedBuildingStateEntry : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(EJunoGuidedBuildingState)                  CurrentState                                                OFFSET(get<T>, {0xC, 1, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   FilledActor                                                 OFFSET(get<T>, {0x10, 8, 0, 0})
	DMember(int32_t)                                   BuildingDataIndex                                           OFFSET(get<int32_t>, {0x18, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoGuidedBuildingStateArray
/// Size: 0x0018 (0x000108 - 0x000120)
class FJunoGuidedBuildingStateArray : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<FJunoGuidedBuildingStateEntry>)     Entries                                                     OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(class AJunoGuidedBuildingActor*)           Parent                                                      OFFSET(get<T>, {0x118, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoGuidedBuildingUpdateData
/// Size: 0x0050 (0x000000 - 0x000050)
class FJunoGuidedBuildingUpdateData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<int32_t>)                           UpdatedSnaps                                                OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FJunoStageKey>)                     UpdatedStages                                               OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FJunoStageKey>)                     CompletedStages                                             OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FJunoStageKey>)                     CompletedSections                                           OFFSET(get<T>, {0x30, 16, 0, 0})
	DMember(bool)                                      bSetComplete                                                OFFSET(get<bool>, {0x40, 1, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   FinishingPlayer                                             OFFSET(get<T>, {0x44, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoGuidedBuildRemainingPartsInfo
/// Size: 0x000C (0x000000 - 0x00000C)
class FJunoGuidedBuildRemainingPartsInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     Recipe                                                      OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Remaining                                                   OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   Total                                                       OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_LastGuidedBuildingActorChanged
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoEvent_LastGuidedBuildingActorChanged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(TWeakObjectPtr<AJunoGuidedBuildingActor*>) NewActor                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoGuidedBuildingSetCompleteState
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoGuidedBuildingSetCompleteState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      bSetComplete                                                OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   FinishingPlayer                                             OFFSET(get<T>, {0x4, 8, 0, 0})
	DMember(bool)                                      bSetUnfinished                                              OFFSET(get<bool>, {0xC, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.AutoCompleteData
/// Size: 0x0020 (0x000000 - 0x000020)
class FAutoCompleteData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int32_t)                                   BuildingDataIndex                                           OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(class APawn*)                              Instigator                                                  OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(double)                                    ServerSpawnTime                                             OFFSET(get<double>, {0x10, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoGuidedBuildingRegisteredPlayer
/// Size: 0x0008 (0x00000C - 0x000014)
class FJunoGuidedBuildingRegisteredPlayer : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	CMember(TWeakObjectPtr<AFortPlayerState*>)         PlayerState                                                 OFFSET(get<T>, {0xC, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoGuidedBuildingRegisteredPlayerArray
/// Size: 0x0040 (0x000108 - 0x000148)
class FJunoGuidedBuildingRegisteredPlayerArray : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	CMember(TArray<FJunoGuidedBuildingRegisteredPlayer>) Entries                                                   OFFSET(get<T>, {0x138, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoGuidedBuildingBrushState
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoGuidedBuildingBrushState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(bool)                                      bIsGuidedBuildSelected                                      OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(TArray<class UPrimitiveComponent*>)        Comps                                                       OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoCommonPartsSettings
/// Size: 0x0020 (0x000000 - 0x000020)
class FJunoCommonPartsSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(class UStaticMesh*)                        Mesh                                                        OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UMaterialInterface*)                 Material                                                    OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(float)                                     Height                                                      OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     InnerRadius                                                 OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(bool)                                      bShowLogo                                                   OFFSET(get<bool>, {0x1C, 1, 0, 0})
	DMember(char)                                      PlaneQuadrant                                               OFFSET(get<char>, {0x1D, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.ProjectPlayResourceData
/// Size: 0x0030 (0x000008 - 0x000038)
class FProjectPlayResourceData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TWeakObjectPtr<UFortWorldItemDefinition*>) ItemDefinition                                              OFFSET(get<T>, {0x8, 32, 0, 0})
	SMember(FCurveTableRowHandle)                      ResourceAmount                                              OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingTagData
/// Size: 0x0028 (0x000008 - 0x000030)
class FJunoBuildingTagData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TWeakObjectPtr<UClass*>)                   BlueprintClass                                              OFFSET(get<T>, {0x8, 32, 0, 0})
	SMember(FGameplayTag)                              tag                                                         OFFSET(getStruct<T>, {0x28, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoComponentActorMapEntry
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoComponentActorMapEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TWeakObjectPtr<UPrimitiveComponent*>)      Component                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UClass*)                             SelectedActorClass                                          OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoCollisionChannelResponsePair
/// Size: 0x0002 (0x000000 - 0x000002)
class FJunoCollisionChannelResponsePair : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	CMember(TEnumAsByte<ECollisionChannel>)            Channel                                                     OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TEnumAsByte<ECollisionResponse>)           Response                                                    OFFSET(get<T>, {0x1, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingPreviewParams
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoBuildingPreviewParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FJunoCollisionChannelResponsePair>) CollisionResponses                                          OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingSnapEntryPreview
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FJunoBuildingSnapEntryPreview : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(class UPrimitiveComponent*)                Component                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(EJunoBuildingSnapEntryState)               State                                                       OFFSET(get<T>, {0x8, 1, 0, 0})
	SMember(FTransform)                                ToWorld                                                     OFFSET(getStruct<T>, {0x10, 96, 0, 0})
	SMember(FBox)                                      TargetingArea                                               OFFSET(getStruct<T>, {0x70, 56, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingSelectionPreview
/// Size: 0x0118 (0x000000 - 0x000118)
class FJunoBuildingSelectionPreview : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	CMember(TArray<class UJunoBuildingPreviewComponent*>) PreviewComponents                                        OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<class UPrimitiveComponent*>)        CollisionComponents                                         OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<class UMeshComponent*>)             MeshComponents                                              OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FJunoBuildingSnapEntryPreview>)     SnapEntryPreviews                                           OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FJunoComponentActorMapEntry>)       ComponentToClassMap                                         OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FBox)                                      LocalCollisionBounds                                        OFFSET(getStruct<T>, {0x50, 56, 0, 0})
	SMember(FBox)                                      FoundationCollisionBounds                                   OFFSET(getStruct<T>, {0x88, 56, 0, 0})
	SMember(FBox)                                      NonFoundationCollisionBounds                                OFFSET(getStruct<T>, {0xC0, 56, 0, 0})
	CMember(class UBoxComponent*)                      NoTargetPlacementCollisionGBA                               OFFSET(get<T>, {0xF8, 8, 0, 0})
	CMember(class UBoxComponent*)                      FoundationPlacementCollisionGBA                             OFFSET(get<T>, {0x100, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingPlacementPreview
/// Size: 0x00C0 (0x000000 - 0x0000C0)
class FJunoBuildingPlacementPreview : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FGuid)                                     Guid                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TArray<class UMeshComponent*>)             MeshComponents                                              OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FTransform)                                ToWorld                                                     OFFSET(getStruct<T>, {0x20, 96, 0, 0})
	SMember(FBox)                                      Bounds                                                      OFFSET(getStruct<T>, {0x80, 56, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildInstructionsDisplayData
/// Size: 0x0080 (0x000000 - 0x000080)
class FJunoBuildInstructionsDisplayData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(EFortItemType)                             ItemType                                                    OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FText)                                     ItemTypeNameOverride                                        OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FText)                                     QuantityDisplayName                                         OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	SMember(FText)                                     ShortDescription                                            OFFSET(getStruct<T>, {0x50, 24, 0, 0})
	SMember(FText)                                     Description                                                 OFFSET(getStruct<T>, {0x68, 24, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildInstructionsPickupData
/// Size: 0x0100 (0x000000 - 0x000100)
class FJunoBuildInstructionsPickupData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	CMember(TWeakObjectPtr<UStaticMesh*>)              PickupStaticMesh                                            OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(TWeakObjectPtr<USkeletalMesh*>)            PickupSkeletalMesh                                          OFFSET(get<T>, {0x20, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   PickupEffectOverride                                        OFFSET(get<T>, {0x40, 32, 0, 0})
	CMember(TWeakObjectPtr<USoundBase*>)               PickupSound                                                 OFFSET(get<T>, {0x60, 32, 0, 0})
	CMember(TWeakObjectPtr<USoundBase*>)               PickupByNearbyPawnSound                                     OFFSET(get<T>, {0x80, 32, 0, 0})
	CMember(TWeakObjectPtr<USoundBase*>)               DropSound                                                   OFFSET(get<T>, {0xA0, 32, 0, 0})
	CMember(TWeakObjectPtr<USoundBase*>)               DroppedLoopSound                                            OFFSET(get<T>, {0xC0, 32, 0, 0})
	CMember(TWeakObjectPtr<USoundBase*>)               LandedSound                                                 OFFSET(get<T>, {0xE0, 32, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildInstructionsItemData
/// Size: 0x0058 (0x000000 - 0x000058)
class FJunoBuildInstructionsItemData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(bool)                                      bGiveResourcesOnDestroy                                     OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FName)                                     SelfCraftingFormulaName                                     OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   ActorClassToBuild                                           OFFSET(get<T>, {0x8, 32, 0, 0})
	SMember(FText)                                     SizeDescription                                             OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	SMember(FText)                                     SetDescription                                              OFFSET(getStruct<T>, {0x40, 24, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildInstructionsInitializationParams
/// Size: 0x01F8 (0x000000 - 0x0001F8)
class FJunoBuildInstructionsInitializationParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 504;

public:
	SMember(FJunoBuildInstructionsDisplayData)         Display                                                     OFFSET(getStruct<T>, {0x0, 128, 0, 0})
	SMember(FGameplayTagContainer)                     GameplayTags                                                OFFSET(getStruct<T>, {0x80, 32, 0, 0})
	SMember(FJunoBuildInstructionsPickupData)          Pickup                                                      OFFSET(getStruct<T>, {0xA0, 256, 0, 0})
	SMember(FJunoBuildInstructionsItemData)            BuildInstructions                                           OFFSET(getStruct<T>, {0x1A0, 88, 0, 0})
};

/// Struct /Script/JunoGameNative.ActorUpgradeInfo
/// Size: 0x00D0 (0x000000 - 0x0000D0)
class FActorUpgradeInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FString)                                   FlowName                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   ActorToUpgrade                                              OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   CraftingObject                                              OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(TWeakObjectPtr<AJunoPersistentPlayspace*>) Playspace                                                   OFFSET(get<T>, {0x20, 8, 0, 0})
	SMember(FName)                                     RecipeName                                                  OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	CMember(class UJunoBuildInstructionsItemDefinition*) OldItemDef                                                OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UJunoBuildInstructionsItemDefinition*) ItemDef                                                   OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FTransform)                                ActorTransform                                              OFFSET(getStruct<T>, {0x40, 96, 0, 0})
	CMember(TArray<FFortItemEntry>)                    ConsumedIngredients                                         OFFSET(get<T>, {0xA0, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.ConnectivityRemovalStreamPendingData
/// Size: 0x0010 (0x000000 - 0x000010)
class FConnectivityRemovalStreamPendingData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UJunoConnectivityComponent*)         Component                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     Z                                                           OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.ConnectivityRemovalStreamPendingContainer
/// Size: 0x0010 (0x000000 - 0x000010)
class FConnectivityRemovalStreamPendingContainer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FConnectivityRemovalStreamPendingData>) Data                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoKnowledgeRecipeStateFastEntry
/// Size: 0x0084 (0x00000C - 0x000090)
class FJunoKnowledgeRecipeStateFastEntry : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(EJunoKnowledgeState)                       CurrentState                                                OFFSET(get<T>, {0xC, 1, 0, 0})
	SMember(FName)                                     RowName                                                     OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	SMember(FGuid)                                     Guid                                                        OFFSET(getStruct<T>, {0x14, 16, 0, 0})
	CMember(class AFortPlayerState*)                   DiscoveredByPlayerState                                     OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TArray<FUniqueNetIdRepl>)                  ViewedPlayerIds                                             OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<bool>)                              IngredientSatisfied                                         OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FGameplayTagContainer>)             IngredientTags                                              OFFSET(get<T>, {0x50, 16, 0, 0})
	SMember(FGameplayTagContainer)                     McpProfileOwnershipTags                                     OFFSET(getStruct<T>, {0x60, 32, 0, 0})
	CMember(class UFortItemDefinition*)                ResultItem                                                  OFFSET(get<T>, {0x80, 8, 0, 0})
	DMember(bool)                                      bResultAcquired                                             OFFSET(get<bool>, {0x88, 1, 0, 0})
	DMember(bool)                                      bIgnoreIngredientsForReveal                                 OFFSET(get<bool>, {0x89, 1, 0, 0})
	DMember(bool)                                      bMissingMpcProfileOwnership                                 OFFSET(get<bool>, {0x8A, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoKnowledgeRecipeStateFastArray
/// Size: 0x0018 (0x000108 - 0x000120)
class FJunoKnowledgeRecipeStateFastArray : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<FJunoKnowledgeRecipeStateFastEntry>) Entries                                                    OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(class UJunoKnowledgeComponent*)            ParentComp                                                  OFFSET(get<T>, {0x118, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoKnowledgeItemStateFastEntry
/// Size: 0x002C (0x00000C - 0x000038)
class FJunoKnowledgeItemStateFastEntry : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FDateTime)                                 DateFound                                                   OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	CMember(class UFortItemDefinition*)                ItemDefinition                                              OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(class AFortPlayerState*)                   InstigatorPlayerState                                       OFFSET(get<T>, {0x20, 8, 0, 0})
	CMember(TArray<FUniqueNetIdRepl>)                  ViewedPlayerIds                                             OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoKnowledgeItemStateFastArray
/// Size: 0x0018 (0x000108 - 0x000120)
class FJunoKnowledgeItemStateFastArray : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<FJunoKnowledgeItemStateFastEntry>)  Entries                                                     OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(class UJunoKnowledgeComponent*)            ParentComp                                                  OFFSET(get<T>, {0x118, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.UniqueMarkerSettings
/// Size: 0x0020 (0x000000 - 0x000020)
class FUniqueMarkerSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FDataTableRowHandle)                       OriginalSettings                                            OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FDataTableRowHandle)                       ReplacementSettings                                         OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoUpdateAction
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FJunoUpdateAction : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FActorInstanceRecord)                      ActorInstanceRecord                                         OFFSET(getStruct<T>, {0x0, 160, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoDeltasStorage_Index_Dss
/// Size: 0x0058 (0x000000 - 0x000058)
class FJunoDeltasStorage_Index_Dss : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(int32_t)                                   WorldCompatibilityVersion                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(TMap<FString, FString>)                    PackageDeltaFiles                                           OFFSET(get<T>, {0x8, 80, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoDeltasStorage_Index_PFW
/// Size: 0x0058 (0x000000 - 0x000058)
class FJunoDeltasStorage_Index_PFW : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(int32_t)                                   WorldCompatibilityVersion                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(TMap<FString, FJsonObjectWrapper>)         DeltasMetadata                                              OFFSET(get<T>, {0x8, 80, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoPersistentPlayspaceLevelRegistryEntry
/// Size: 0x0024 (0x000000 - 0x000024)
class FJunoPersistentPlayspaceLevelRegistryEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	CMember(TWeakObjectPtr<AJunoPersistentPlayspace*>) PersistentPlayspaceWeakPtr                                  OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoPersistenceFeature
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FJunoPersistenceFeature : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(class UClass*)                             Class                                                       OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(EJunoPersistenceFeatureCheckoutState)      CurrentCheckoutState                                        OFFSET(get<T>, {0x10, 4, 0, 0})
	CMember(EJunoPersistenceFeatureCheckoutState)      TargetCheckoutState                                         OFFSET(get<T>, {0x14, 4, 0, 0})
	DMember(uint32_t)                                  CheckoutStateChangeRequestKey                               OFFSET(get<uint32_t>, {0x18, 4, 0, 0})
	CMember(class UObject*)                            ImplementationCustomStateObject                             OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(TScriptInterface<Class>)                   Data                                                        OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(class UClass*)                             SourceImplementationDataClass                               OFFSET(get<T>, {0x80, 8, 0, 0})
	CMember(TScriptInterface<Class>)                   DifferentImplementationData                                 OFFSET(get<T>, {0x88, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoClusterUnionPersistenceFeatureData_PersistentInfo
/// Size: 0x0050 (0x000000 - 0x000050)
class FJunoClusterUnionPersistenceFeatureData_PersistentInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FJunoClusterUnionSaveData)                 SaveData                                                    OFFSET(getStruct<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoClusterUnionSaveData
/// Size: 0x0050 (0x000000 - 0x000050)
class FJunoClusterUnionSaveData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FGraphIslandHandle, FJunoSingleClusterUnionSaveData>) PerClusterUnionData                         OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoSingleClusterUnionSaveData
/// Size: 0x0060 (0x000000 - 0x000060)
class FJunoSingleClusterUnionSaveData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FTransform)                                WorldTransform                                              OFFSET(getStruct<T>, {0x0, 96, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoConnectivityGraphPFW_PersistentInfo
/// Size: 0x0108 (0x000000 - 0x000108)
class FJunoConnectivityGraphPFW_PersistentInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FSerializableConnectivityGraph)            SavedConnectivityData                                       OFFSET(getStruct<T>, {0x0, 264, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoPhysicsToyPersistenceFeatureData_PersistentInfo
/// Size: 0x0050 (0x000000 - 0x000050)
class FJunoPhysicsToyPersistenceFeatureData_PersistentInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FJunoPhysicsToySaveData)                   Container                                                   OFFSET(getStruct<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoPhysicsToySaveData
/// Size: 0x0050 (0x000000 - 0x000050)
class FJunoPhysicsToySaveData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FGuid, FJunoSinglePhysicsToySaveData>) PerToyData                                                 OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoSinglePhysicsToySaveData
/// Size: 0x0080 (0x000000 - 0x000080)
class FJunoSinglePhysicsToySaveData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FPersistenceFrameworkLevelSaveSpawnablePtr) AttachedActor                                              OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	SMember(FTransform)                                RelativeOffset                                              OFFSET(getStruct<T>, {0x20, 96, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_OnDeathUI
/// Size: 0x0001 (0x000000 - 0x000001)
class FJunoEvent_OnDeathUI : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/JunoGameNative.JunoEvent_OnInventoryFull
/// Size: 0x0001 (0x000000 - 0x000001)
class FJunoEvent_OnInventoryFull : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/JunoGameNative.JunoEvent_TransitionUIState
/// Size: 0x0001 (0x000000 - 0x000001)
class FJunoEvent_TransitionUIState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_CheckPointRemoved
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoEvent_CheckPointRemoved : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGuid)                                     CheckpointGUID                                              OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEnhancedInputActionToGameplayEvent
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoEnhancedInputActionToGameplayEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UInputAction*)                       InputAction                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FGameplayTag)                              GameplayEventTag                                            OFFSET(getStruct<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEmotionalStateData
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoEmotionalStateData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(EJunoPawnEmotionalState)                   EmotionalState                                              OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     EmotionPercent                                              OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     EmotionSetRate                                              OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(int8_t)                                    ForceRepCounter                                             OFFSET(get<int8_t>, {0xC, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_PawnEmotion
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoEvent_PawnEmotion : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class AFortPlayerPawnAthena*)              Pawn                                                        OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(EJunoPawnEmotionalState)                   CurrentEmotionalState                                       OFFSET(get<T>, {0x8, 1, 0, 0})
	DMember(float)                                     EmotionPercent                                              OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoPawnEmotionalStateMappingFromAwesomeLevel
/// Size: 0x000C (0x000000 - 0x00000C)
class FJunoPawnEmotionalStateMappingFromAwesomeLevel : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(EJunoPawnEmotionalState)                   EmotionalState                                              OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   NumericalTestValue                                          OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	CMember(EJunoPawnEmotionalStateMappingTest)        NumericalTestMode                                           OFFSET(get<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoWorldStreamingSources
/// Size: 0x0060 (0x000000 - 0x000060)
class FJunoWorldStreamingSources : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Struct /Script/JunoGameNative.JunoActionTargetPayload
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoActionTargetPayload : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class AActor*)                             Target                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildLimitPool
/// Size: 0x0020 (0x000008 - 0x000028)
class FJunoBuildLimitPool : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<class UClass*>)                     Classes                                                     OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   MaxInstanceCount                                            OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	CMember(class UClass*)                             BuildLimitGetterClass                                       OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoRelevantActorTrackingData
/// Size: 0x0004 (0x000000 - 0x000004)
class FJunoRelevantActorTrackingData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   NetRelevantActorCount                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoProcessAwesomenessInteractionStateTreeTaskInstanceData
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoProcessAwesomenessInteractionStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class AActor*)                             Actor                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class AActor*)                             TargetActor                                                 OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FGameplayTag)                              InteractionTypeTag                                          OFFSET(getStruct<T>, {0x10, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoProcessAwesomenessInteractionStateTreeTask
/// Size: 0x0008 (0x000020 - 0x000028)
class FJunoProcessAwesomenessInteractionStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(EGameplayInteractionTaskTrigger)           InteractionTrigger                                          OFFSET(get<T>, {0x20, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.MeshAuditInfo
/// Size: 0x0080 (0x000000 - 0x000080)
class FMeshAuditInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FSoftObjectPath)                           AssetPath                                                   OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	CMember(EMeshAuditFailureReason)                   FailureReason                                               OFFSET(get<T>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   NumConvexShapes                                             OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	DMember(int32_t)                                   NumConvexShapePointsTotal                                   OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   CollisionLOD                                                OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	DMember(int32_t)                                   NumTrianglesInPhysicsMesh                                   OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   NumNonStreamingLODs                                         OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   NumInlineLODs                                               OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   NumLODs                                                     OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	CMember(TEnumAsByte<ECollisionTraceFlag>)          CollisionTraceFlag                                          OFFSET(get<T>, {0x38, 1, 0, 0})
	CMember(TArray<int32_t>)                           TriCounts                                                   OFFSET(get<T>, {0x40, 16, 0, 0})
	DMember(int64_t)                                   RenderResourceSystemSize                                    OFFSET(get<int64_t>, {0x50, 8, 0, 0})
	DMember(int64_t)                                   BodySetupResourceSize                                       OFFSET(get<int64_t>, {0x58, 8, 0, 0})
	DMember(float)                                     WorstTriRatio                                               OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     MeshBoundingBoxAreaMeters                                   OFFSET(get<float>, {0x64, 4, 0, 0})
	SMember(FString)                                   RouteToAsset                                                OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	DMember(bool)                                      bCustomizedCollision                                        OFFSET(get<bool>, {0x78, 1, 0, 0})
	DMember(bool)                                      bMeshCollideAll                                             OFFSET(get<bool>, {0x79, 1, 0, 0})
	DMember(bool)                                      bNeverStream                                                OFFSET(get<bool>, {0x7A, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.SkeletalMeshAuditInfo
/// Size: 0x0060 (0x000000 - 0x000060)
class FSkeletalMeshAuditInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FSoftObjectPath)                           AssetPath                                                   OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	CMember(EMeshAuditFailureReason)                   FailureReason                                               OFFSET(get<T>, {0x18, 4, 0, 0})
	DMember(int64_t)                                   RenderResourceSystemSize                                    OFFSET(get<int64_t>, {0x20, 8, 0, 0})
	DMember(int32_t)                                   NumNonOptionalLODs                                          OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   NumInlineLODs                                               OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   NumLODs                                                     OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	CMember(TArray<int32_t>)                           TriCounts                                                   OFFSET(get<T>, {0x38, 16, 0, 0})
	DMember(int32_t)                                   NumBoneInfluencesPerVertex                                  OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	DMember(int32_t)                                   NumBonesInSkeleton                                          OFFSET(get<int32_t>, {0x4C, 4, 0, 0})
	DMember(float)                                     WorstTriRatio                                               OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     MeshBoundingBoxAreaMeters                                   OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(bool)                                      bNeverStream                                                OFFSET(get<bool>, {0x58, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.GeometryCollectionAuditData
/// Size: 0x00B8 (0x000000 - 0x0000B8)
class FGeometryCollectionAuditData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FSoftObjectPath)                           AssetPath                                                   OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	DMember(uint64_t)                                  RestCollection_ManagedArraysSize                            OFFSET(get<uint64_t>, {0x18, 8, 0, 0})
	DMember(uint32_t)                                  ComponentInstanceCount                                      OFFSET(get<uint32_t>, {0x20, 4, 0, 0})
	DMember(uint32_t)                                  DynamicCollectionCount                                      OFFSET(get<uint32_t>, {0x24, 4, 0, 0})
	DMember(uint64_t)                                  DynamicCollectionsTotalSize                                 OFFSET(get<uint64_t>, {0x28, 8, 0, 0})
	DMember(int32_t)                                   NumRigidsAllInstances                                       OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   NumSimulatedParticlesAllInstances                           OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	DMember(int32_t)                                   ReservedUnusedParticles                                     OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   MaxClusterLevelRequested                                    OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(int32_t)                                   MaxSimulatedClusterLevelRequested                           OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(int32_t)                                   MaxCalculatedClusterLevel                                   OFFSET(get<int32_t>, {0x44, 4, 0, 0})
	DMember(int32_t)                                   MaxActualClusterLevel                                       OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	DMember(uint64_t)                                  RenderDataSize                                              OFFSET(get<uint64_t>, {0x50, 8, 0, 0})
	DMember(int32_t)                                   NumExemplars                                                OFFSET(get<int32_t>, {0x58, 4, 0, 0})
	DMember(uint64_t)                                  NaniteDataSize                                              OFFSET(get<uint64_t>, {0x60, 8, 0, 0})
	CMember(TArray<class UStaticMesh*>)                RootProxyMeshes                                             OFFSET(get<T>, {0x68, 16, 0, 0})
	DMember(uint64_t)                                  NumAutoInstancedMeshes                                      OFFSET(get<uint64_t>, {0x78, 8, 0, 0})
	CMember(TArray<class UStaticMesh*>)                AutoInstancedMeshes                                         OFFSET(get<T>, {0x80, 16, 0, 0})
	DMember(uint64_t)                                  SizeSpecificDataSize                                        OFFSET(get<uint64_t>, {0x90, 8, 0, 0})
	SMember(FString)                                   DynamicCollectionGroupsAndSizes                             OFFSET(getStruct<T>, {0x98, 16, 0, 0})
	SMember(FString)                                   RestCollectionGroupsAndSizes                                OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoWorldConditionWeather
/// Size: 0x0048 (0x000010 - 0x000058)
class FJunoWorldConditionWeather : public FWorldConditionCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FGameplayTagQuery)                         AllowedWeather                                              OFFSET(getStruct<T>, {0x10, 72, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoWorldConditionActorWeather
/// Size: 0x0050 (0x000010 - 0x000060)
class FJunoWorldConditionActorWeather : public FWorldConditionCommonActorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FWorldConditionContextDataRef)             ActorRef                                                    OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	SMember(FGameplayTagQuery)                         AllowedWeather                                              OFFSET(getStruct<T>, {0x18, 72, 0, 0})
};

/// Enum /Script/JunoGameNative.EJunoBuildingPlacementType
/// Size: 0x05
enum EJunoBuildingPlacementType : uint8_t
{
	EJunoBuildingPlacementType__GuidedSnapping                                       = 0,
	EJunoBuildingPlacementType__Connectivity                                         = 1,
	EJunoBuildingPlacementType__SnapPlacement                                        = 2,
	EJunoBuildingPlacementType__NoTarget                                             = 3,
	EJunoBuildingPlacementType__MAX                                                  = 4
};

/// Enum /Script/JunoGameNative.EJunoBuildingBehaviorState
/// Size: 0x06
enum EJunoBuildingBehaviorState : uint8_t
{
	EJunoBuildingBehaviorState__Uninitialized                                        = 0,
	EJunoBuildingBehaviorState__Pending                                              = 1,
	EJunoBuildingBehaviorState__Ready                                                = 2,
	EJunoBuildingBehaviorState__Invalid                                              = 3,
	EJunoBuildingBehaviorState__Disabled                                             = 4,
	EJunoBuildingBehaviorState__MAX                                                  = 5
};

/// Enum /Script/JunoGameNative.EJunoBiomeHabitat
/// Size: 0x16
enum EJunoBiomeHabitat : uint8_t
{
	EJunoBiomeHabitat__Unknown                                                       = 0,
	EJunoBiomeHabitat__POI                                                           = 1,
	EJunoBiomeHabitat__Cave                                                          = 2,
	EJunoBiomeHabitat__Stone                                                         = 3,
	EJunoBiomeHabitat__Asphalt                                                       = 4,
	EJunoBiomeHabitat__Snow                                                          = 5,
	EJunoBiomeHabitat__Dirt                                                          = 6,
	EJunoBiomeHabitat__Sand                                                          = 7,
	EJunoBiomeHabitat__Grass                                                         = 8,
	EJunoBiomeHabitat__Flowers                                                       = 9,
	EJunoBiomeHabitat__Heather                                                       = 10,
	EJunoBiomeHabitat__Moss                                                          = 11,
	EJunoBiomeHabitat__Ocean                                                         = 12,
	EJunoBiomeHabitat__Lake                                                          = 13,
	EJunoBiomeHabitat__River                                                         = 14,
	EJunoBiomeHabitat__Max                                                           = 15
};

/// Enum /Script/JunoGameNative.EJunoBiome
/// Size: 0x09
enum EJunoBiome : uint8_t
{
	EJunoBiome__Unknown                                                              = 0,
	EJunoBiome__Grasslands                                                           = 1,
	EJunoBiome__DarkForest                                                           = 2,
	EJunoBiome__Desert                                                               = 3,
	EJunoBiome__Tropical                                                             = 4,
	EJunoBiome__Alpine                                                               = 5,
	EJunoBiome__Water                                                                = 6,
	EJunoBiome__Reserved                                                             = 7,
	EJunoBiome__Max                                                                  = 8
};

/// Enum /Script/JunoGameNative.EJunoAwesomePointModificationContext
/// Size: 0x06
enum EJunoAwesomePointModificationContext : uint8_t
{
	EJunoAwesomePointModificationContext__Cheat                                      = 0,
	EJunoAwesomePointModificationContext__Interaction                                = 1,
	EJunoAwesomePointModificationContext__ActorPlacement                             = 2,
	EJunoAwesomePointModificationContext__ActorRemoval                               = 3,
	EJunoAwesomePointModificationContext__QuestCompletion                            = 4,
	EJunoAwesomePointModificationContext__EJunoAwesomePointModificationContext_MAX   = 5
};

/// Enum /Script/JunoGameNative.EJunoPawnEmotionalState
/// Size: 0x04
enum EJunoPawnEmotionalState : uint8_t
{
	EJunoPawnEmotionalState__Default                                                 = 0,
	EJunoPawnEmotionalState__Happy                                                   = 1,
	EJunoPawnEmotionalState__Sad                                                     = 2,
	EJunoPawnEmotionalState__MAX                                                     = 3
};

/// Enum /Script/JunoGameNative.EPassiveCraftingDoneReason
/// Size: 0x05
enum EPassiveCraftingDoneReason : uint8_t
{
	EPassiveCraftingDoneReason__UnexpectedError                                      = 0,
	EPassiveCraftingDoneReason__PlayerStopped                                        = 1,
	EPassiveCraftingDoneReason__NoOutputSpace                                        = 2,
	EPassiveCraftingDoneReason__MissingIngredients                                   = 3,
	EPassiveCraftingDoneReason__EPassiveCraftingDoneReason_MAX                       = 4
};

/// Enum /Script/JunoGameNative.EJunoCaveType
/// Size: 0x11
enum EJunoCaveType : uint8_t
{
	EJunoCaveType__Unknown                                                           = 0,
	EJunoCaveType__Surface                                                           = 1,
	EJunoCaveType__Lava                                                              = 2,
	EJunoCaveType__Rift                                                              = 3,
	EJunoCaveType__Ruins                                                             = 4,
	EJunoCaveType__SurfaceMines                                                      = 5,
	EJunoCaveType__Pirate                                                            = 6,
	EJunoCaveType__Bear                                                              = 7,
	EJunoCaveType__Treasure                                                          = 8,
	EJunoCaveType__BossRoom                                                          = 9,
	EJunoCaveType__Max                                                               = 10
};

/// Enum /Script/JunoGameNative.EJunoCompassDirection
/// Size: 0x10
enum EJunoCompassDirection : uint8_t
{
	EJunoCompassDirection__Unknown                                                   = 0,
	EJunoCompassDirection__North                                                     = 1,
	EJunoCompassDirection__NorthEast                                                 = 2,
	EJunoCompassDirection__East                                                      = 3,
	EJunoCompassDirection__SouthEast                                                 = 4,
	EJunoCompassDirection__South                                                     = 5,
	EJunoCompassDirection__SouthWest                                                 = 6,
	EJunoCompassDirection__West                                                      = 7,
	EJunoCompassDirection__NorthWest                                                 = 8,
	EJunoCompassDirection__Max                                                       = 9
};

/// Enum /Script/JunoGameNative.EChaosEventSize
/// Size: 0x06
enum EChaosEventSize : uint8_t
{
	Single                                                                           = 0,
	Small                                                                            = 1,
	Medium                                                                           = 2,
	Large                                                                            = 3,
	Default                                                                          = 1,
	EChaosEventSize_MAX                                                              = 4
};

/// Enum /Script/JunoGameNative.EJunoContactDirection
/// Size: 0x07
enum EJunoContactDirection : uint8_t
{
	EJunoContactDirection__PosX                                                      = 0,
	EJunoContactDirection__NegX                                                      = 1,
	EJunoContactDirection__PosY                                                      = 2,
	EJunoContactDirection__NegY                                                      = 3,
	EJunoContactDirection__PosZ                                                      = 4,
	EJunoContactDirection__NegZ                                                      = 5,
	EJunoContactDirection__EJunoContactDirection_MAX                                 = 6
};

/// Enum /Script/JunoGameNative.EJunoGeometryCollectionAssemblerDurationType
/// Size: 0x04
enum EJunoGeometryCollectionAssemblerDurationType : uint32_t
{
	EJunoGeometryCollectionAssemblerDurationType__Default                            = 0,
	EJunoGeometryCollectionAssemblerDurationType__CalculateLayerCount                = 1,
	EJunoGeometryCollectionAssemblerDurationType__SpecifyLayerCount                  = 2,
	EJunoGeometryCollectionAssemblerDurationType__EJunoGeometryCollectionAssemblerDurationType_MAX = 3
};

/// Enum /Script/JunoGameNative.EJunoKnowledgeState
/// Size: 0x04
enum EJunoKnowledgeState : uint8_t
{
	EJunoKnowledgeState__Hidden                                                      = 0,
	EJunoKnowledgeState__Revealed                                                    = 1,
	EJunoKnowledgeState__Acquired                                                    = 2,
	EJunoKnowledgeState__EJunoKnowledgeState_MAX                                     = 3
};

/// Enum /Script/JunoGameNative.EJunoWorldSaveDataState
/// Size: 0x06
enum EJunoWorldSaveDataState : uint8_t
{
	EJunoWorldSaveDataState__Uninitialized                                           = 0,
	EJunoWorldSaveDataState__Loading                                                 = 1,
	EJunoWorldSaveDataState__Loaded                                                  = 2,
	EJunoWorldSaveDataState__CheckingIn                                              = 3,
	EJunoWorldSaveDataState__CheckedIn                                               = 4,
	EJunoWorldSaveDataState__EJunoWorldSaveDataState_MAX                             = 5
};

/// Enum /Script/JunoGameNative.EJunoLevelSaveDataState
/// Size: 0x05
enum EJunoLevelSaveDataState : uint8_t
{
	EJunoLevelSaveDataState__None                                                    = 0,
	EJunoLevelSaveDataState__CheckedOut                                              = 1,
	EJunoLevelSaveDataState__Applied                                                 = 2,
	EJunoLevelSaveDataState__CheckedIn                                               = 3,
	EJunoLevelSaveDataState__EJunoLevelSaveDataState_MAX                             = 4
};

/// Enum /Script/JunoGameNative.EJunoPersistenceFeatureCheckoutState
/// Size: 0x04
enum EJunoPersistenceFeatureCheckoutState : uint32_t
{
	EJunoPersistenceFeatureCheckoutState__None                                       = 0,
	EJunoPersistenceFeatureCheckoutState__CheckedOut                                 = 1,
	EJunoPersistenceFeatureCheckoutState__CheckedIn                                  = 2,
	EJunoPersistenceFeatureCheckoutState__EJunoPersistenceFeatureCheckoutState_MAX   = 3
};

/// Enum /Script/JunoGameNative.EJunoBuildModeType
/// Size: 0x05
enum EJunoBuildModeType : uint8_t
{
	EJunoBuildModeType__BuildMode                                                    = 0,
	EJunoBuildModeType__GuidedBuildingMode                                           = 1,
	EJunoBuildModeType__NumOfBuildModes                                              = 2,
	EJunoBuildModeType__ActionMode                                                   = 3,
	EJunoBuildModeType__EJunoBuildModeType_MAX                                       = 4
};

/// Enum /Script/JunoGameNative.EJunoPersistenceReportOptions
/// Size: 0x14
enum EJunoPersistenceReportOptions : uint16_t
{
	EJunoPersistenceReportOptions__None                                              = 0,
	EJunoPersistenceReportOptions__ActorTemplateDataEnabled                          = 1,
	EJunoPersistenceReportOptions__ActorInstanceDataEnabled                          = 2,
	EJunoPersistenceReportOptions__JunoUpdateActionDataEnabled                       = 4,
	EJunoPersistenceReportOptions__JunoDeleteActionDataEnabled                       = 8,
	EJunoPersistenceReportOptions__DataEnabledDefaultFlags                           = 15,
	EJunoPersistenceReportOptions__ShowReportHeader                                  = 16,
	EJunoPersistenceReportOptions__ShowDeltasHeaders                                 = 32,
	EJunoPersistenceReportOptions__ShowSubreportsHeaders                             = 64,
	EJunoPersistenceReportOptions__ShowTablesHeaders                                 = 128,
	EJunoPersistenceReportOptions__ShowIndividualItemsStats                          = 256,
	EJunoPersistenceReportOptions__ShowAggregatedStats                               = 512,
	EJunoPersistenceReportOptions__ShowDefaultFlags                                  = 752,
	EJunoPersistenceReportOptions__EJunoPersistenceReportOptions_MAX                 = 753
};

/// Enum /Script/JunoGameNative.EJunoWorldConditionAICampChecksIsAssigned
/// Size: 0x04
enum EJunoWorldConditionAICampChecksIsAssigned : uint8_t
{
	EJunoWorldConditionAICampChecksIsAssigned__None                                  = 0,
	EJunoWorldConditionAICampChecksIsAssigned__Assigned                              = 1,
	EJunoWorldConditionAICampChecksIsAssigned__Unassigned                            = 2,
	EJunoWorldConditionAICampChecksIsAssigned__EJunoWorldConditionAICampChecksIsAssigned_MAX = 3
};

/// Enum /Script/JunoGameNative.EJunoWorldConditionMustHaveLastUsedGatheringActor
/// Size: 0x04
enum EJunoWorldConditionMustHaveLastUsedGatheringActor : uint8_t
{
	EJunoWorldConditionMustHaveLastUsedGatheringActor__None                          = 0,
	EJunoWorldConditionMustHaveLastUsedGatheringActor__IsValid                       = 1,
	EJunoWorldConditionMustHaveLastUsedGatheringActor__IsNotValid                    = 2,
	EJunoWorldConditionMustHaveLastUsedGatheringActor__EJunoWorldConditionMustHaveLastUsedGatheringActor_MAX = 3
};

/// Enum /Script/JunoGameNative.EJunoWorldConditionAssignmentState
/// Size: 0x05
enum EJunoWorldConditionAssignmentState : uint8_t
{
	EJunoWorldConditionAssignmentState__None                                         = 0,
	EJunoWorldConditionAssignmentState__AssignedToUserActor                          = 1,
	EJunoWorldConditionAssignmentState__Assigned                                     = 2,
	EJunoWorldConditionAssignmentState__Unassigned                                   = 3,
	EJunoWorldConditionAssignmentState__EJunoWorldConditionAssignmentState_MAX       = 4
};

/// Enum /Script/JunoGameNative.EJunoWorldConditionHasFollower
/// Size: 0x04
enum EJunoWorldConditionHasFollower : uint8_t
{
	EJunoWorldConditionHasFollower__Unset                                            = 0,
	EJunoWorldConditionHasFollower__Zero                                             = 1,
	EJunoWorldConditionHasFollower__OneOrMore                                        = 2,
	EJunoWorldConditionHasFollower__EJunoWorldConditionHasFollower_MAX               = 3
};

/// Enum /Script/JunoGameNative.EPhysicalStrainHealthMode
/// Size: 0x05
enum EPhysicalStrainHealthMode : uint8_t
{
	EPhysicalStrainHealthMode__Disabled                                              = 0,
	EPhysicalStrainHealthMode__FullIntegrityPercentageMapping                        = 1,
	EPhysicalStrainHealthMode__ZeroIntegrity                                         = 2,
	EPhysicalStrainHealthMode__FullIntegrityFatigueThresholdMapping                  = 3,
	EPhysicalStrainHealthMode__EPhysicalStrainHealthMode_MAX                         = 4
};

/// Enum /Script/JunoGameNative.EJunoAwesomeThresholdTestMode
/// Size: 0x04
enum EJunoAwesomeThresholdTestMode : uint32_t
{
	EJunoAwesomeThresholdTestMode__LessOrEqual                                       = 0,
	EJunoAwesomeThresholdTestMode__GreaterOrEqual                                    = 1,
	EJunoAwesomeThresholdTestMode__Range                                             = 2,
	EJunoAwesomeThresholdTestMode__EJunoAwesomeThresholdTestMode_MAX                 = 3
};

/// Enum /Script/JunoGameNative.EJunoAwesomeLevelUpgradeQueryResult
/// Size: 0x04
enum EJunoAwesomeLevelUpgradeQueryResult : uint8_t
{
	EJunoAwesomeLevelUpgradeQueryResult__Fail_LackingAwesomePoints                   = 0,
	EJunoAwesomeLevelUpgradeQueryResult__Fail_LackingPlayerResources                 = 1,
	EJunoAwesomeLevelUpgradeQueryResult__Pass                                        = 2,
	EJunoAwesomeLevelUpgradeQueryResult__EJunoAwesomeLevelUpgradeQueryResult_MAX     = 3
};

/// Enum /Script/JunoGameNative.EImpactOrDamage_ExecutionPin
/// Size: 0x04
enum EImpactOrDamage_ExecutionPin : uint8_t
{
	EImpactOrDamage_ExecutionPin__LocalImpact                                        = 0,
	EImpactOrDamage_ExecutionPin__LocalDamage                                        = 1,
	EImpactOrDamage_ExecutionPin__OtherDamage                                        = 2,
	EImpactOrDamage_ExecutionPin__EImpactOrDamage_MAX                                = 3
};

/// Enum /Script/JunoGameNative.EUpdateAnimationTimer_ExecutionPin
/// Size: 0x03
enum EUpdateAnimationTimer_ExecutionPin : uint8_t
{
	EUpdateAnimationTimer_ExecutionPin__Active                                       = 0,
	EUpdateAnimationTimer_ExecutionPin__Expired                                      = 1,
	EUpdateAnimationTimer_ExecutionPin__EUpdateAnimationTimer_MAX                    = 2
};

/// Enum /Script/JunoGameNative.EJunoMinifigRotationMode
/// Size: 0x05
enum EJunoMinifigRotationMode : uint8_t
{
	EJunoMinifigRotationMode__NoRotation                                             = 0,
	EJunoMinifigRotationMode__ContinuousRotateToTarget                               = 1,
	EJunoMinifigRotationMode__CurveRotateToMovingTarget                              = 2,
	EJunoMinifigRotationMode__CurveRotateToStaticTarget                              = 3,
	EJunoMinifigRotationMode__EJunoMinifigRotationMode_MAX                           = 4
};

/// Enum /Script/JunoGameNative.EJunoResourceScale
/// Size: 0x07
enum EJunoResourceScale : uint8_t
{
	EJunoResourceScale__Invalid                                                      = 0,
	EJunoResourceScale__Small                                                        = 1,
	EJunoResourceScale__Medium                                                       = 2,
	EJunoResourceScale__Large                                                        = 3,
	EJunoResourceScale__VerySmall                                                    = 4,
	EJunoResourceScale__VeryLarge                                                    = 5,
	EJunoResourceScale__EJunoResourceScale_MAX                                       = 6
};

/// Enum /Script/JunoGameNative.EWorldDataAvailable
/// Size: 0x04
enum EWorldDataAvailable : uint8_t
{
	EWorldDataAvailable__Undefined                                                   = 0,
	EWorldDataAvailable__WasLoadedFromPersistentData                                 = 1,
	EWorldDataAvailable__WasInitializedFromWorldMetadata                             = 2,
	EWorldDataAvailable__EWorldDataAvailable_MAX                                     = 3
};

/// Enum /Script/JunoGameNative.EJunoItemChangeType
/// Size: 0x06
enum EJunoItemChangeType : uint8_t
{
	EJunoItemChangeType__Added                                                       = 0,
	EJunoItemChangeType__Removed                                                     = 1,
	EJunoItemChangeType__ItemChanged                                                 = 2,
	EJunoItemChangeType__SlotChanged                                                 = 3,
	EJunoItemChangeType__Swapped                                                     = 4,
	EJunoItemChangeType__EJunoItemChangeType_MAX                                     = 5
};

/// Enum /Script/JunoGameNative.EJunoInventoryAcquisitionResult
/// Size: 0x05
enum EJunoInventoryAcquisitionResult : uint8_t
{
	EJunoInventoryAcquisitionResult__Failure                                         = 0,
	EJunoInventoryAcquisitionResult__SystemNotReady                                  = 1,
	EJunoInventoryAcquisitionResult__InventoryCreated                                = 2,
	EJunoInventoryAcquisitionResult__InventoryRestored                               = 3,
	EJunoInventoryAcquisitionResult__EJunoInventoryAcquisitionResult_MAX             = 4
};

/// Enum /Script/JunoGameNative.EJunoBuildingActorOverlapActionType
/// Size: 0x05
enum EJunoBuildingActorOverlapActionType : uint8_t
{
	EJunoBuildingActorOverlapActionType__AllowOverlap                                = 0,
	EJunoBuildingActorOverlapActionType__DestroyComponent                            = 1,
	EJunoBuildingActorOverlapActionType__CropComponent                               = 2,
	EJunoBuildingActorOverlapActionType__Custom                                      = 3,
	EJunoBuildingActorOverlapActionType__EJunoBuildingActorOverlapActionType_MAX     = 4
};

/// Enum /Script/JunoGameNative.EJunoBuildingSnapEntryState
/// Size: 0x06
enum EJunoBuildingSnapEntryState : uint8_t
{
	EJunoBuildingSnapEntryState__Incompatible                                        = 0,
	EJunoBuildingSnapEntryState__Compatible                                          = 1,
	EJunoBuildingSnapEntryState__InRangeRejected                                     = 2,
	EJunoBuildingSnapEntryState__InRangeValid                                        = 3,
	EJunoBuildingSnapEntryState__Connected                                           = 4,
	EJunoBuildingSnapEntryState__EJunoBuildingSnapEntryState_MAX                     = 5
};

/// Enum /Script/JunoGameNative.EOnPlacementAction
/// Size: 0x03
enum EOnPlacementAction : uint8_t
{
	EOnPlacementAction__IgnoreOnly                                                   = 0,
	EOnPlacementAction__IgnoreAndDestroy                                             = 1,
	EOnPlacementAction__EOnPlacementAction_MAX                                       = 2
};

/// Enum /Script/JunoGameNative.EJunoGuidedBuildingState
/// Size: 0x05
enum EJunoGuidedBuildingState : uint8_t
{
	EJunoGuidedBuildingState__Default                                                = 0,
	EJunoGuidedBuildingState__Hidden                                                 = 1,
	EJunoGuidedBuildingState__Unfilled                                               = 2,
	EJunoGuidedBuildingState__Filled                                                 = 3,
	EJunoGuidedBuildingState__EJunoGuidedBuildingState_MAX                           = 4
};

/// Enum /Script/JunoGameNative.EJunoAutomaticConnectionMethod
/// Size: 0x04
enum EJunoAutomaticConnectionMethod : uint8_t
{
	EJunoAutomaticConnectionMethod__Full                                             = 0,
	EJunoAutomaticConnectionMethod__Below                                            = 1,
	EJunoAutomaticConnectionMethod__Custom                                           = 2,
	EJunoAutomaticConnectionMethod__EJunoAutomaticConnectionMethod_MAX               = 3
};

/// Enum /Script/JunoGameNative.EJunoDeltaActionTypes
/// Size: 0x05
enum EJunoDeltaActionTypes : uint8_t
{
	EJunoDeltaActionTypes__None                                                      = 0,
	EJunoDeltaActionTypes__Add                                                       = 1,
	EJunoDeltaActionTypes__Update                                                    = 2,
	EJunoDeltaActionTypes__Delete                                                    = 4,
	EJunoDeltaActionTypes__EJunoDeltaActionTypes_MAX                                 = 5
};

/// Enum /Script/JunoGameNative.EJunoQuickbarSelectionDirection
/// Size: 0x03
enum EJunoQuickbarSelectionDirection : uint8_t
{
	EJunoQuickbarSelectionDirection__Next                                            = 0,
	EJunoQuickbarSelectionDirection__Prev                                            = 1,
	EJunoQuickbarSelectionDirection__EJunoQuickbarSelectionDirection_MAX             = 2
};

/// Enum /Script/JunoGameNative.EJunoPawnEmotionalStateMappingTest
/// Size: 0x03
enum EJunoPawnEmotionalStateMappingTest : uint32_t
{
	EJunoPawnEmotionalStateMappingTest__LessOrEqual                                  = 0,
	EJunoPawnEmotionalStateMappingTest__GreaterOrEqual                               = 1,
	EJunoPawnEmotionalStateMappingTest__EJunoPawnEmotionalStateMappingTest_MAX       = 2
};

/// Enum /Script/JunoGameNative.EJunoActionExecutionConfig
/// Size: 0x04
enum EJunoActionExecutionConfig : uint8_t
{
	EJunoActionExecutionConfig__ExecuteEveryTime                                     = 0,
	EJunoActionExecutionConfig__ExecuteFirstTimeOnly                                 = 1,
	EJunoActionExecutionConfig__ExecuteReloadOnly                                    = 2,
	EJunoActionExecutionConfig__EJunoActionExecutionConfig_MAX                       = 3
};

/// Enum /Script/JunoGameNative.EMeshAuditFailureReason
/// Size: 0x12
enum EMeshAuditFailureReason : uint32_t
{
	EMeshAuditFailureReason__MAFR_None                                               = 0,
	EMeshAuditFailureReason__MAFR_NeverStream                                        = 1,
	EMeshAuditFailureReason__MAFR_HighTriRatioInLODs                                 = 2,
	EMeshAuditFailureReason__MAFR_SimplestLODTooComplex                              = 4,
	EMeshAuditFailureReason__MAFR_TriDensityTooHigh                                  = 8,
	EMeshAuditFailureReason__MAFR_PhysicsTriDensityHigh                              = 256,
	EMeshAuditFailureReason__MAFR_PhysicsComplexAsSimple                             = 512,
	EMeshAuditFailureReason__MAFR_PhysicsMeshIsHighLOD                               = 1024,
	EMeshAuditFailureReason__MAFR_PhysicsSimpleShapeTooComplex                       = 2048,
	EMeshAuditFailureReason__MAFR_PhysicsTooDetailedForSmallObject                   = 4096,
	EMeshAuditFailureReason__MAFR_PhysicsCollideAll                                  = 8192,
	EMeshAuditFailureReason__MAFR_MAX                                                = 8193
};

