
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: Chaos
/// dependency: ChaosSolverEngine
/// dependency: CoreUObject
/// dependency: DataflowEngine
/// dependency: Engine
/// dependency: PhysicsCore

/// Class /Script/GeometryCollectionEngine.GeometryCollectionExternalRenderInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UGeometryCollectionExternalRenderInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionISMPoolSubSystem
/// Size: 0x0050 (0x000030 - 0x000080)
class UGeometryCollectionISMPoolSubSystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:


	/// Functions
	// Function /Script/GeometryCollectionEngine.GeometryCollectionISMPoolSubSystem.OnActorEndPlay
	// void OnActorEndPlay(class AActor* InSource, TEnumAsByte<EEndPlayReason> Reason);                                         // [0x60a97f0] Final|Native|Protected 
};

/// Class /Script/GeometryCollectionEngine.ChaosDestructionListener
/// Size: 0x02B0 (0x000290 - 0x000540)
class UChaosDestructionListener : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1344;

public:
	DMember(bool)                                      bIsCollisionEventListeningEnabled                           OFFSET(get<bool>, {0x290, 1, 1, 0})
	DMember(bool)                                      bIsBreakingEventListeningEnabled                            OFFSET(get<bool>, {0x290, 1, 1, 1})
	DMember(bool)                                      bIsTrailingEventListeningEnabled                            OFFSET(get<bool>, {0x290, 1, 1, 2})
	DMember(bool)                                      bIsRemovalEventListeningEnabled                             OFFSET(get<bool>, {0x290, 1, 1, 3})
	SMember(FChaosCollisionEventRequestSettings)       CollisionEventRequestSettings                               OFFSET(getStruct<T>, {0x294, 24, 0, 0})
	SMember(FChaosBreakingEventRequestSettings)        BreakingEventRequestSettings                                OFFSET(getStruct<T>, {0x2AC, 24, 0, 0})
	SMember(FChaosTrailingEventRequestSettings)        TrailingEventRequestSettings                                OFFSET(getStruct<T>, {0x2C4, 24, 0, 0})
	SMember(FChaosRemovalEventRequestSettings)         RemovalEventRequestSettings                                 OFFSET(getStruct<T>, {0x2DC, 16, 0, 0})
	CMember(TSet<AChaosSolverActor*>)                  ChaosSolverActors                                           OFFSET(get<T>, {0x2F0, 80, 0, 0})
	CMember(TSet<AGeometryCollectionActor*>)           GeometryCollectionActors                                    OFFSET(get<T>, {0x340, 80, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCollisionEvents                                           OFFSET(getStruct<T>, {0x390, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnBreakingEvents                                            OFFSET(getStruct<T>, {0x3A0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTrailingEvents                                            OFFSET(getStruct<T>, {0x3B0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnRemovalEvents                                             OFFSET(getStruct<T>, {0x3C0, 16, 0, 0})


	/// Functions
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents
	// void SortTrailingEvents(TArray<FChaosTrailingEventData>& TrailingEvents, EChaosTrailingSortMethod SortMethod);           // [0x60ad418] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SortRemovalEvents
	// void SortRemovalEvents(TArray<FChaosRemovalEventData>& RemovalEvents, EChaosRemovalSortMethod SortMethod);               // [0x60acc70] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents
	// void SortCollisionEvents(TArray<FChaosCollisionEventData>& CollisionEvents, EChaosCollisionSortMethod SortMethod);       // [0x60ac4c8] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents
	// void SortBreakingEvents(TArray<FChaosBreakingEventData>& BreakingEvents, EChaosBreakingSortMethod SortMethod);           // [0x60abd20] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings
	// void SetTrailingEventRequestSettings(FChaosTrailingEventRequestSettings& InSettings);                                    // [0x60abb54] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled
	// void SetTrailingEventEnabled(bool bIsEnabled);                                                                           // [0x60abac0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventRequestSettings
	// void SetRemovalEventRequestSettings(FChaosRemovalEventRequestSettings& InSettings);                                      // [0x60ab70c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventEnabled
	// void SetRemovalEventEnabled(bool bIsEnabled);                                                                            // [0x60ab678] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings
	// void SetCollisionEventRequestSettings(FChaosCollisionEventRequestSettings& InSettings);                                  // [0x60aa780] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled
	// void SetCollisionEventEnabled(bool bIsEnabled);                                                                          // [0x60aa6f0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings
	// void SetBreakingEventRequestSettings(FChaosBreakingEventRequestSettings& InSettings);                                    // [0x60aa644] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled
	// void SetBreakingEventEnabled(bool bIsEnabled);                                                                           // [0x60aa5b0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor
	// void RemoveGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor);                             // [0x60a9be4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor
	// void RemoveChaosSolverActor(class AChaosSolverActor* ChaosSolverActor);                                                  // [0x5fffda8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.IsEventListening
	// bool IsEventListening();                                                                                                 // [0x60a97bc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor
	// void AddGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor);                                // [0x60a81a8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor
	// void AddChaosSolverActor(class AChaosSolverActor* ChaosSolverActor);                                                     // [0x5fffda8] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionActor
/// Size: 0x0010 (0x000290 - 0x0002A0)
class AGeometryCollectionActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	CMember(class UGeometryCollectionComponent*)       GeometryCollectionComponent                                 OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(class UGeometryCollectionDebugDrawComponent*) GeometryCollectionDebugDrawComponent                     OFFSET(get<T>, {0x298, 8, 0, 0})


	/// Functions
	// Function /Script/GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle
	// bool RaycastSingle(FVector Start, FVector End, FHitResult& OutHit);                                                      // [0x60a98f0] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionCache
/// Size: 0x0028 (0x000028 - 0x000050)
class UGeometryCollectionCache : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FRecordedTransformTrack)                   RecordedData                                                OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	CMember(class UGeometryCollection*)                SupportedCollection                                         OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FGuid)                                     CompatibleCollectionState                                   OFFSET(getStruct<T>, {0x40, 16, 0, 0})
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionComponent
/// Size: 0x0650 (0x0005B0 - 0x000C00)
class UGeometryCollectionComponent : public UMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3072;

public:
	CMember(class AChaosSolverActor*)                  ChaosSolverActor                                            OFFSET(get<T>, {0x5B0, 8, 0, 0})
	CMember(class UGeometryCollection*)                RestCollection                                              OFFSET(get<T>, {0x5C0, 8, 0, 0})
	CMember(TArray<class AFieldSystemActor*>)          InitializationFields                                        OFFSET(get<T>, {0x5C8, 16, 0, 0})
	DMember(bool)                                      Simulating                                                  OFFSET(get<bool>, {0x5D8, 1, 0, 0})
	CMember(EObjectStateTypeEnum)                      ObjectType                                                  OFFSET(get<T>, {0x5DA, 1, 0, 0})
	DMember(int32_t)                                   GravityGroupIndex                                           OFFSET(get<int32_t>, {0x5DC, 4, 0, 0})
	DMember(int32_t)                                   OneWayInteractionLevel                                      OFFSET(get<int32_t>, {0x5E0, 4, 0, 0})
	DMember(bool)                                      bDensityFromPhysicsMaterial                                 OFFSET(get<bool>, {0x5E4, 1, 0, 0})
	DMember(bool)                                      bForceMotionBlur                                            OFFSET(get<bool>, {0x5E5, 1, 0, 0})
	DMember(bool)                                      EnableClustering                                            OFFSET(get<bool>, {0x5E6, 1, 0, 0})
	DMember(int32_t)                                   ClusterGroupIndex                                           OFFSET(get<int32_t>, {0x5E8, 4, 0, 0})
	DMember(int32_t)                                   MaxClusterLevel                                             OFFSET(get<int32_t>, {0x5EC, 4, 0, 0})
	DMember(int32_t)                                   MaxSimulatedLevel                                           OFFSET(get<int32_t>, {0x5F0, 4, 0, 0})
	CMember(EDamageModelTypeEnum)                      DamageModel                                                 OFFSET(get<T>, {0x5F4, 1, 0, 0})
	CMember(TArray<float>)                             DamageThreshold                                             OFFSET(get<T>, {0x5F8, 16, 0, 0})
	DMember(bool)                                      bUseSizeSpecificDamageThreshold                             OFFSET(get<bool>, {0x608, 1, 0, 0})
	DMember(bool)                                      bUseMaterialDamageModifiers                                 OFFSET(get<bool>, {0x609, 1, 0, 0})
	SMember(FGeometryCollectionDamagePropagationData)  DamagePropagationData                                       OFFSET(getStruct<T>, {0x60C, 12, 0, 0})
	DMember(bool)                                      bEnableDamageFromCollision                                  OFFSET(get<bool>, {0x618, 1, 0, 0})
	DMember(bool)                                      bAllowRemovalOnSleep                                        OFFSET(get<bool>, {0x619, 1, 0, 0})
	DMember(bool)                                      bAllowRemovalOnBreak                                        OFFSET(get<bool>, {0x61A, 1, 0, 0})
	CMember(EClusterConnectionTypeEnum)                ClusterConnectionType                                       OFFSET(get<T>, {0x61B, 1, 0, 0})
	DMember(int32_t)                                   CollisionGroup                                              OFFSET(get<int32_t>, {0x61C, 4, 0, 0})
	DMember(float)                                     CollisionSampleFraction                                     OFFSET(get<float>, {0x620, 4, 0, 0})
	DMember(float)                                     LinearEtherDrag                                             OFFSET(get<float>, {0x624, 4, 0, 0})
	DMember(float)                                     AngularEtherDrag                                            OFFSET(get<float>, {0x628, 4, 0, 0})
	CMember(class UChaosPhysicalMaterial*)             PhysicalMaterial                                            OFFSET(get<T>, {0x630, 8, 0, 0})
	CMember(EInitialVelocityTypeEnum)                  InitialVelocityType                                         OFFSET(get<T>, {0x638, 1, 0, 0})
	SMember(FVector)                                   InitialLinearVelocity                                       OFFSET(getStruct<T>, {0x640, 24, 0, 0})
	SMember(FVector)                                   InitialAngularVelocity                                      OFFSET(getStruct<T>, {0x658, 24, 0, 0})
	CMember(class UPhysicalMaterial*)                  PhysicalMaterialOverride                                    OFFSET(get<T>, {0x670, 8, 0, 0})
	SMember(FGeomComponentCacheParameters)             CacheParameters                                             OFFSET(getStruct<T>, {0x678, 80, 0, 0})
	CMember(TArray<FTransform>)                        RestTransforms                                              OFFSET(get<T>, {0x6C8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  NotifyGeometryCollectionPhysicsStateChange                  OFFSET(getStruct<T>, {0x6D8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  NotifyGeometryCollectionPhysicsLoadingStateChange           OFFSET(getStruct<T>, {0x6E8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnChaosBreakEvent                                           OFFSET(getStruct<T>, {0x710, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnChaosRemovalEvent                                         OFFSET(getStruct<T>, {0x720, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnChaosCrumblingEvent                                       OFFSET(getStruct<T>, {0x730, 16, 0, 0})
	DMember(float)                                     DesiredCacheTime                                            OFFSET(get<float>, {0x788, 4, 0, 0})
	DMember(bool)                                      CachePlayback                                               OFFSET(get<bool>, {0x78C, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnChaosPhysicsCollision                                     OFFSET(getStruct<T>, {0x790, 16, 0, 0})
	DMember(bool)                                      bNotifyBreaks                                               OFFSET(get<bool>, {0x7A0, 1, 0, 0})
	DMember(bool)                                      bNotifyCollisions                                           OFFSET(get<bool>, {0x7A1, 1, 0, 0})
	DMember(bool)                                      bNotifyTrailing                                             OFFSET(get<bool>, {0x7A2, 1, 0, 0})
	DMember(bool)                                      bNotifyRemovals                                             OFFSET(get<bool>, {0x7A3, 1, 0, 0})
	DMember(bool)                                      bNotifyCrumblings                                           OFFSET(get<bool>, {0x7A4, 1, 0, 0})
	DMember(bool)                                      bCrumblingEventIncludesChildren                             OFFSET(get<bool>, {0x7A5, 1, 0, 0})
	DMember(bool)                                      bNotifyGlobalBreaks                                         OFFSET(get<bool>, {0x7A6, 1, 0, 0})
	DMember(bool)                                      bNotifyGlobalCollisions                                     OFFSET(get<bool>, {0x7A7, 1, 0, 0})
	DMember(bool)                                      bNotifyGlobalRemovals                                       OFFSET(get<bool>, {0x7A8, 1, 0, 0})
	DMember(bool)                                      bNotifyGlobalCrumblings                                     OFFSET(get<bool>, {0x7A9, 1, 0, 0})
	DMember(bool)                                      bGlobalCrumblingEventIncludesChildren                       OFFSET(get<bool>, {0x7AA, 1, 0, 0})
	DMember(bool)                                      bStoreVelocities                                            OFFSET(get<bool>, {0x7AB, 1, 0, 0})
	DMember(bool)                                      bIsCurrentlyNavigationRelevant                              OFFSET(get<bool>, {0x7AC, 1, 0, 0})
	DMember(bool)                                      bShowBoneColors                                             OFFSET(get<bool>, {0x7AD, 1, 0, 0})
	DMember(bool)                                      bUpdateComponentTransformToRootBone                         OFFSET(get<bool>, {0x7AE, 1, 0, 0})
	DMember(bool)                                      bUseRootProxyForNavigation                                  OFFSET(get<bool>, {0x7AF, 1, 0, 0})
	DMember(bool)                                      bUpdateNavigationInTick                                     OFFSET(get<bool>, {0x7B0, 1, 0, 0})
	CMember(class AGeometryCollectionISMPoolActor*)    ISMPool                                                     OFFSET(get<T>, {0x7B8, 8, 0, 0})
	DMember(bool)                                      bAutoAssignISMPool                                          OFFSET(get<bool>, {0x7C0, 1, 0, 0})
	DMember(bool)                                      bOverrideCustomRenderer                                     OFFSET(get<bool>, {0x7C1, 1, 0, 0})
	CMember(class UClass*)                             CustomRendererType                                          OFFSET(get<T>, {0x7C8, 8, 0, 0})
	DMember(bool)                                      bEnableRootProxyForCustomRenderer                           OFFSET(get<bool>, {0x7D0, 1, 0, 0})
	CMember(TScriptInterface<Class>)                   CustomRenderer                                              OFFSET(get<T>, {0x7D8, 16, 0, 0})
	DMember(bool)                                      bEnableReplication                                          OFFSET(get<bool>, {0x7E8, 1, 0, 0})
	DMember(bool)                                      bEnableAbandonAfterLevel                                    OFFSET(get<bool>, {0x7E9, 1, 0, 0})
	SMember(FName)                                     AbandonedCollisionProfileName                               OFFSET(getStruct<T>, {0x7EC, 4, 0, 0})
	CMember(TArray<FName>)                             CollisionProfilePerLevel                                    OFFSET(get<T>, {0x7F0, 16, 0, 0})
	DMember(int32_t)                                   ReplicationAbandonClusterLevel                              OFFSET(get<int32_t>, {0x810, 4, 0, 0})
	DMember(int32_t)                                   ReplicationAbandonAfterLevel                                OFFSET(get<int32_t>, {0x814, 4, 0, 0})
	DMember(int32_t)                                   ReplicationMaxPositionAndVelocityCorrectionLevel            OFFSET(get<int32_t>, {0x818, 4, 0, 0})
	SMember(FGeometryCollectionRepData)                RepData                                                     OFFSET(getStruct<T>, {0x820, 56, 0, 0})
	SMember(FGeometryCollectionRepStateData)           RepStateData                                                OFFSET(getStruct<T>, {0x858, 64, 0, 0})
	SMember(FGeometryCollectionRepDynamicData)         RepDynamicData                                              OFFSET(getStruct<T>, {0x898, 24, 0, 0})
	CMember(class UBodySetup*)                         DummyBodySetup                                              OFFSET(get<T>, {0xB58, 8, 0, 0})
	CMember(class UChaosGameplayEventDispatcher*)      EventDispatcher                                             OFFSET(get<T>, {0xB60, 8, 0, 0})
	CMember(TArray<class UInstancedStaticMeshComponent*>) EmbeddedGeometryComponents                               OFFSET(get<T>, {0xB68, 16, 0, 0})
	DMember(bool)                                      bUseStaticMeshCollisionForTraces                            OFFSET(get<bool>, {0xB78, 1, 0, 0})


	/// Functions
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetUseStaticMeshCollisionForTraces
	// void SetUseStaticMeshCollisionForTraces(bool bInUseStaticMeshCollisionForTraces);                                        // [0x60abc80] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetUseMaterialDamageModifiers
	// void SetUseMaterialDamageModifiers(bool bInUseMaterialDamageModifiers);                                                  // [0x60abc00] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetRestCollection
	// void SetRestCollection(class UGeometryCollection* RestCollectionIn, bool bApplyAssetDefaults);                           // [0x60ab7ac] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetPerParticleCollisionProfileName
	// void SetPerParticleCollisionProfileName(TArray<int32_t>& BoneIds, FName ProfileName);                                    // [0x60ab4d0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetPerLevelCollisionProfileNames
	// void SetPerLevelCollisionProfileNames(TArray<FName>& ProfileNames);                                                      // [0x60ab434] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetOneWayInteractionLevel
	// void SetOneWayInteractionLevel(int32_t InOneWayInteractionLevel);                                                        // [0x60ab3b4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyRemovals
	// void SetNotifyRemovals(bool bNewNotifyRemovals);                                                                         // [0x60ab324] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyGlobalRemovals
	// void SetNotifyGlobalRemovals(bool bNewNotifyGlobalRemovals);                                                             // [0x60ab274] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyGlobalCrumblings
	// void SetNotifyGlobalCrumblings(bool bNewNotifyGlobalCrumblings, bool bGlobalNewCrumblingEventIncludesChildren);          // [0x60ab164] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyGlobalCollision
	// void SetNotifyGlobalCollision(bool bNewNotifyGlobalCollisions);                                                          // [0x60ab0b4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyGlobalBreaks
	// void SetNotifyGlobalBreaks(bool bNewNotifyGlobalBreaks);                                                                 // [0x60ab034] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyCrumblings
	// void SetNotifyCrumblings(bool bNewNotifyCrumblings, bool bNewCrumblingEventIncludesChildren);                            // [0x60aaf1c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks
	// void SetNotifyBreaks(bool bNewNotifyBreaks);                                                                             // [0x60aae60] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetLocalRestTransforms
	// void SetLocalRestTransforms(TArray<FTransform>& Transforms, bool bOnlyLeaves);                                           // [0x60aaccc] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetGravityGroupIndex
	// void SetGravityGroupIndex(int32_t InGravityGroupIndex);                                                                  // [0x60aac30] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetEnableDamageFromCollision
	// void SetEnableDamageFromCollision(bool bValue);                                                                          // [0x60aab28] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetDensityFromPhysicsMaterial
	// void SetDensityFromPhysicsMaterial(bool bInDensityFromPhysicsMaterial);                                                  // [0x60aaaa8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetDamageThreshold
	// void SetDamageThreshold(TArray<float>& InDamageThreshold);                                                               // [0x60aa9cc] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetDamagePropagationData
	// void SetDamagePropagationData(FGeometryCollectionDamagePropagationData& InDamagePropagationData);                        // [0x60aa934] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetDamageModel
	// void SetDamageModel(EDamageModelTypeEnum InDamageModel);                                                                 // [0x60aa8b4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetAnchoredByTransformedBox
	// void SetAnchoredByTransformedBox(FBox Box, FTransform Transform, bool bAnchored, int32_t MaxLevel);                      // [0x60aa11c] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetAnchoredByIndex
	// void SetAnchoredByIndex(int32_t Index, bool bAnchored);                                                                  // [0x60aa034] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetAnchoredByBox
	// void SetAnchoredByBox(FBox WorldSpaceBox, bool bAnchored, int32_t MaxLevel);                                             // [0x60a9d24] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetAbandonedParticleCollisionProfileName
	// void SetAbandonedParticleCollisionProfileName(FName CollisionProfile);                                                   // [0x60a9c98] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.RemoveAllAnchors
	// void RemoveAllAnchors();                                                                                                 // [0x60a9bd0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision
	// void ReceivePhysicsCollision(FChaosPhysicsCollisionInfo& CollisionInfo);                                                 // [0x2177018] RequiredAPI|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.OnRep_RepStateData
	// void OnRep_RepStateData();                                                                                               // [0x60a98dc] Final|RequiredAPI|Native|Protected 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.OnRep_RepDynamicData
	// void OnRep_RepDynamicData();                                                                                             // [0x60a98c8] Final|RequiredAPI|Native|Protected 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.OnRep_RepData
	// void OnRep_RepData();                                                                                                    // [0x60a98b4] Final|RequiredAPI|Native|Protected 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature
	// void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent); // [0x2177018] MulticastDelegate|Public|Delegate 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature
	// void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent); // [0x2177018] MulticastDelegate|Public|Delegate 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.IsRootBroken
	// bool IsRootBroken();                                                                                                     // [0x60a97d8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.GetUseStaticMeshCollisionForTraces
	// bool GetUseStaticMeshCollisionForTraces();                                                                               // [0x60a97a4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.GetRootInitialTransform
	// FTransform GetRootInitialTransform();                                                                                    // [0x60a9748] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.GetRootIndex
	// int32_t GetRootIndex();                                                                                                  // [0x60a9728] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.GetRootCurrentTransform
	// FTransform GetRootCurrentTransform();                                                                                    // [0x60a96cc] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.GetMassAndExtents
	// void GetMassAndExtents(int32_t ItemIndex, float& OutMass, FBox& OutExtents);                                             // [0x60a95ac] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.GetLocalBounds
	// FBox GetLocalBounds();                                                                                                   // [0x60a956c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.GetInitialLocalRestTransforms
	// TArray<FTransform> GetInitialLocalRestTransforms();                                                                      // [0x60a952c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.GetInitialLevel
	// int32_t GetInitialLevel(int32_t ItemIndex);                                                                              // [0x60a94a0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.GetDebugInfo
	// FString GetDebugInfo();                                                                                                  // [0x60a9460] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.GetDamageThreshold
	// TArray<float> GetDamageThreshold();                                                                                      // [0x60a93d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.CrumbleCluster
	// void CrumbleCluster(int32_t ItemIndex);                                                                                  // [0x60a9350] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.CrumbleActiveClusters
	// void CrumbleActiveClusters();                                                                                            // [0x60a933c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField
	// void ApplyPhysicsField(bool Enabled, EGeometryCollectionPhysicsTypeEnum Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field); // [0x60a8fbc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyLinearVelocity
	// void ApplyLinearVelocity(int32_t ItemIndex, FVector& LinearVelocity);                                                    // [0x60a8e84] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField
	// void ApplyKinematicField(float Radius, FVector Position);                                                                // [0x60a8d00] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyInternalStrain
	// void ApplyInternalStrain(int32_t ItemIndex, FVector& Location, float Radius, int32_t PropagationDepth, float PropagationFactor, float Strain); // [0x60a89cc] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyExternalStrain
	// void ApplyExternalStrain(int32_t ItemIndex, FVector& Location, float Radius, int32_t PropagationDepth, float PropagationFactor, float Strain); // [0x60a8698] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyBreakingLinearVelocity
	// void ApplyBreakingLinearVelocity(int32_t ItemIndex, FVector& LinearVelocity);                                            // [0x60a855c] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyBreakingAngularVelocity
	// void ApplyBreakingAngularVelocity(int32_t ItemIndex, FVector& AngularVelocity);                                          // [0x60a8420] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyAssetDefaults
	// void ApplyAssetDefaults();                                                                                               // [0x60a840c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyAngularVelocity
	// void ApplyAngularVelocity(int32_t ItemIndex, FVector& AngularVelocity);                                                  // [0x60a82d4] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionDebugDrawActor
/// Size: 0x00C0 (0x000290 - 0x000350)
class AGeometryCollectionDebugDrawActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 848;

public:
	SMember(FGeometryCollectionDebugDrawWarningMessage) WarningMessage                                             OFFSET(getStruct<T>, {0x290, 1, 0, 0})
	SMember(FGeometryCollectionDebugDrawActorSelectedRigidBody) SelectedRigidBody                                  OFFSET(getStruct<T>, {0x298, 24, 0, 0})
	DMember(bool)                                      bDebugDrawWholeCollection                                   OFFSET(get<bool>, {0x2B0, 1, 0, 0})
	DMember(bool)                                      bDebugDrawHierarchy                                         OFFSET(get<bool>, {0x2B1, 1, 0, 0})
	DMember(bool)                                      bDebugDrawClustering                                        OFFSET(get<bool>, {0x2B2, 1, 0, 0})
	CMember(EGeometryCollectionDebugDrawActorHideGeometry) HideGeometry                                            OFFSET(get<T>, {0x2B3, 1, 0, 0})
	DMember(bool)                                      bShowRigidBodyId                                            OFFSET(get<bool>, {0x2B4, 1, 0, 0})
	DMember(bool)                                      bShowRigidBodyCollision                                     OFFSET(get<bool>, {0x2B5, 1, 0, 0})
	DMember(bool)                                      bCollisionAtOrigin                                          OFFSET(get<bool>, {0x2B6, 1, 0, 0})
	DMember(bool)                                      bShowRigidBodyTransform                                     OFFSET(get<bool>, {0x2B7, 1, 0, 0})
	DMember(bool)                                      bShowRigidBodyInertia                                       OFFSET(get<bool>, {0x2B8, 1, 0, 0})
	DMember(bool)                                      bShowRigidBodyVelocity                                      OFFSET(get<bool>, {0x2B9, 1, 0, 0})
	DMember(bool)                                      bShowRigidBodyForce                                         OFFSET(get<bool>, {0x2BA, 1, 0, 0})
	DMember(bool)                                      bShowRigidBodyInfos                                         OFFSET(get<bool>, {0x2BB, 1, 0, 0})
	DMember(bool)                                      bShowTransformIndex                                         OFFSET(get<bool>, {0x2BC, 1, 0, 0})
	DMember(bool)                                      bShowTransform                                              OFFSET(get<bool>, {0x2BD, 1, 0, 0})
	DMember(bool)                                      bShowParent                                                 OFFSET(get<bool>, {0x2BE, 1, 0, 0})
	DMember(bool)                                      bShowLevel                                                  OFFSET(get<bool>, {0x2BF, 1, 0, 0})
	DMember(bool)                                      bShowConnectivityEdges                                      OFFSET(get<bool>, {0x2C0, 1, 0, 0})
	DMember(bool)                                      bShowGeometryIndex                                          OFFSET(get<bool>, {0x2C1, 1, 0, 0})
	DMember(bool)                                      bShowGeometryTransform                                      OFFSET(get<bool>, {0x2C2, 1, 0, 0})
	DMember(bool)                                      bShowBoundingBox                                            OFFSET(get<bool>, {0x2C3, 1, 0, 0})
	DMember(bool)                                      bShowFaces                                                  OFFSET(get<bool>, {0x2C4, 1, 0, 0})
	DMember(bool)                                      bShowFaceIndices                                            OFFSET(get<bool>, {0x2C5, 1, 0, 0})
	DMember(bool)                                      bShowFaceNormals                                            OFFSET(get<bool>, {0x2C6, 1, 0, 0})
	DMember(bool)                                      bShowSingleFace                                             OFFSET(get<bool>, {0x2C7, 1, 0, 0})
	DMember(int32_t)                                   SingleFaceIndex                                             OFFSET(get<int32_t>, {0x2C8, 4, 0, 0})
	DMember(bool)                                      bShowVertices                                               OFFSET(get<bool>, {0x2CC, 1, 0, 0})
	DMember(bool)                                      bShowVertexIndices                                          OFFSET(get<bool>, {0x2CD, 1, 0, 0})
	DMember(bool)                                      bShowVertexNormals                                          OFFSET(get<bool>, {0x2CE, 1, 0, 0})
	DMember(bool)                                      bUseActiveVisualization                                     OFFSET(get<bool>, {0x2CF, 1, 0, 0})
	DMember(float)                                     PointThickness                                              OFFSET(get<float>, {0x2D0, 4, 0, 0})
	DMember(float)                                     LineThickness                                               OFFSET(get<float>, {0x2D4, 4, 0, 0})
	DMember(bool)                                      bTextShadow                                                 OFFSET(get<bool>, {0x2D8, 1, 0, 0})
	DMember(float)                                     TextScale                                                   OFFSET(get<float>, {0x2DC, 4, 0, 0})
	DMember(float)                                     NormalScale                                                 OFFSET(get<float>, {0x2E0, 4, 0, 0})
	DMember(float)                                     AxisScale                                                   OFFSET(get<float>, {0x2E4, 4, 0, 0})
	DMember(float)                                     ArrowScale                                                  OFFSET(get<float>, {0x2E8, 4, 0, 0})
	SMember(FColor)                                    RigidBodyIdColor                                            OFFSET(getStruct<T>, {0x2EC, 4, 0, 0})
	DMember(float)                                     RigidBodyTransformScale                                     OFFSET(get<float>, {0x2F0, 4, 0, 0})
	SMember(FColor)                                    RigidBodyCollisionColor                                     OFFSET(getStruct<T>, {0x2F4, 4, 0, 0})
	SMember(FColor)                                    RigidBodyInertiaColor                                       OFFSET(getStruct<T>, {0x2F8, 4, 0, 0})
	SMember(FColor)                                    RigidBodyVelocityColor                                      OFFSET(getStruct<T>, {0x2FC, 4, 0, 0})
	SMember(FColor)                                    RigidBodyForceColor                                         OFFSET(getStruct<T>, {0x300, 4, 0, 0})
	SMember(FColor)                                    RigidBodyInfoColor                                          OFFSET(getStruct<T>, {0x304, 4, 0, 0})
	SMember(FColor)                                    TransformIndexColor                                         OFFSET(getStruct<T>, {0x308, 4, 0, 0})
	DMember(float)                                     TransformScale                                              OFFSET(get<float>, {0x30C, 4, 0, 0})
	SMember(FColor)                                    LevelColor                                                  OFFSET(getStruct<T>, {0x310, 4, 0, 0})
	SMember(FColor)                                    ParentColor                                                 OFFSET(getStruct<T>, {0x314, 4, 0, 0})
	DMember(float)                                     ConnectivityEdgeThickness                                   OFFSET(get<float>, {0x318, 4, 0, 0})
	SMember(FColor)                                    GeometryIndexColor                                          OFFSET(getStruct<T>, {0x31C, 4, 0, 0})
	DMember(float)                                     GeometryTransformScale                                      OFFSET(get<float>, {0x320, 4, 0, 0})
	SMember(FColor)                                    BoundingBoxColor                                            OFFSET(getStruct<T>, {0x324, 4, 0, 0})
	SMember(FColor)                                    FaceColor                                                   OFFSET(getStruct<T>, {0x328, 4, 0, 0})
	SMember(FColor)                                    FaceIndexColor                                              OFFSET(getStruct<T>, {0x32C, 4, 0, 0})
	SMember(FColor)                                    FaceNormalColor                                             OFFSET(getStruct<T>, {0x330, 4, 0, 0})
	SMember(FColor)                                    SingleFaceColor                                             OFFSET(getStruct<T>, {0x334, 4, 0, 0})
	SMember(FColor)                                    VertexColor                                                 OFFSET(getStruct<T>, {0x338, 4, 0, 0})
	SMember(FColor)                                    VertexIndexColor                                            OFFSET(getStruct<T>, {0x33C, 4, 0, 0})
	SMember(FColor)                                    VertexNormalColor                                           OFFSET(getStruct<T>, {0x340, 4, 0, 0})
	CMember(class UBillboardComponent*)                SpriteComponent                                             OFFSET(get<T>, {0x348, 8, 0, 0})
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UGeometryCollectionDebugDrawComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(class AGeometryCollectionDebugDrawActor*)  GeometryCollectionDebugDrawActor                            OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(class AGeometryCollectionRenderLevelSetActor*) GeometryCollectionRenderLevelSetActor                   OFFSET(get<T>, {0xA8, 8, 0, 0})
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionISMPoolActor
/// Size: 0x0010 (0x000290 - 0x0002A0)
class AGeometryCollectionISMPoolActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	CMember(class UGeometryCollectionISMPoolComponent*) ISMPoolComp                                                OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(class UGeometryCollectionISMPoolDebugDrawComponent*) ISMPoolDebugDrawComp                              OFFSET(get<T>, {0x298, 8, 0, 0})
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionISMPoolComponent
/// Size: 0x0130 (0x000290 - 0x0003C0)
class UGeometryCollectionISMPoolComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 960;

public:
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionISMPoolRenderer
/// Size: 0x00B8 (0x000028 - 0x0000E0)
class UGeometryCollectionISMPoolRenderer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(class AGeometryCollectionISMPoolActor*)    ISMPoolActor                                                OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/GeometryCollectionEngine.GeometryCollection
/// Size: 0x01F0 (0x000028 - 0x000218)
class UGeometryCollection : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
	DMember(bool)                                      EnableClustering                                            OFFSET(get<bool>, {0x38, 1, 0, 0})
	DMember(int32_t)                                   ClusterGroupIndex                                           OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(int32_t)                                   MaxClusterLevel                                             OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	CMember(EDamageModelTypeEnum)                      DamageModel                                                 OFFSET(get<T>, {0x44, 1, 0, 0})
	CMember(TArray<float>)                             DamageThreshold                                             OFFSET(get<T>, {0x48, 16, 0, 0})
	DMember(bool)                                      bUseSizeSpecificDamageThreshold                             OFFSET(get<bool>, {0x58, 1, 0, 0})
	DMember(bool)                                      bUseMaterialDamageModifiers                                 OFFSET(get<bool>, {0x59, 1, 0, 0})
	DMember(bool)                                      PerClusterOnlyDamageThreshold                               OFFSET(get<bool>, {0x5A, 1, 0, 0})
	SMember(FGeometryCollectionDamagePropagationData)  DamagePropagationData                                       OFFSET(getStruct<T>, {0x5C, 12, 0, 0})
	CMember(EClusterConnectionTypeEnum)                ClusterConnectionType                                       OFFSET(get<T>, {0x68, 1, 0, 0})
	DMember(float)                                     ConnectionGraphBoundsFilteringMargin                        OFFSET(get<float>, {0x6C, 4, 0, 0})
	CMember(TArray<class UMaterialInterface*>)         Materials                                                   OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<FGeometryCollectionEmbeddedExemplar>) EmbeddedGeometryExemplar                                  OFFSET(get<T>, {0x80, 16, 0, 0})
	DMember(bool)                                      bUseFullPrecisionUVs                                        OFFSET(get<bool>, {0x90, 1, 0, 0})
	DMember(bool)                                      bStripOnCook                                                OFFSET(get<bool>, {0x91, 1, 0, 0})
	DMember(bool)                                      bStripRenderDataOnCook                                      OFFSET(get<bool>, {0x92, 1, 0, 0})
	CMember(class UClass*)                             CustomRendererType                                          OFFSET(get<T>, {0x98, 8, 0, 0})
	SMember(FGeometryCollectionProxyMeshData)          RootProxyData                                               OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	CMember(TArray<FGeometryCollectionAutoInstanceMesh>) AutoInstanceMeshes                                        OFFSET(get<T>, {0xB0, 16, 0, 0})
	DMember(bool)                                      EnableNanite                                                OFFSET(get<bool>, {0xC0, 1, 0, 0})
	DMember(bool)                                      bConvertVertexColorsToSRGB                                  OFFSET(get<bool>, {0xC1, 1, 0, 0})
	CMember(class UPhysicalMaterial*)                  PhysicsMaterial                                             OFFSET(get<T>, {0xC8, 8, 0, 0})
	DMember(bool)                                      bDensityFromPhysicsMaterial                                 OFFSET(get<bool>, {0xD0, 1, 0, 0})
	DMember(float)                                     CachedDensityFromPhysicsMaterialInGCm3                      OFFSET(get<float>, {0xD4, 4, 0, 0})
	DMember(bool)                                      bMassAsDensity                                              OFFSET(get<bool>, {0xD8, 1, 0, 0})
	DMember(float)                                     Mass                                                        OFFSET(get<float>, {0xDC, 4, 0, 0})
	DMember(float)                                     MinimumMassClamp                                            OFFSET(get<float>, {0xE0, 4, 0, 0})
	DMember(bool)                                      bImportCollisionFromSource                                  OFFSET(get<bool>, {0xE4, 1, 0, 0})
	DMember(bool)                                      bScaleOnRemoval                                             OFFSET(get<bool>, {0xE5, 1, 0, 0})
	DMember(bool)                                      bRemoveOnMaxSleep                                           OFFSET(get<bool>, {0xE6, 1, 0, 0})
	SMember(FVector2D)                                 MaximumSleepTime                                            OFFSET(getStruct<T>, {0xE8, 16, 0, 0})
	SMember(FVector2D)                                 RemovalDuration                                             OFFSET(getStruct<T>, {0xF8, 16, 0, 0})
	DMember(bool)                                      bSlowMovingAsSleeping                                       OFFSET(get<bool>, {0x108, 1, 0, 0})
	DMember(float)                                     SlowMovingVelocityThreshold                                 OFFSET(get<float>, {0x10C, 4, 0, 0})
	CMember(TArray<FGeometryCollectionSizeSpecificData>) SizeSpecificData                                          OFFSET(get<T>, {0x110, 16, 0, 0})
	DMember(bool)                                      EnableRemovePiecesOnFracture                                OFFSET(get<bool>, {0x120, 1, 0, 0})
	CMember(TArray<class UMaterialInterface*>)         RemoveOnFractureMaterials                                   OFFSET(get<T>, {0x128, 16, 0, 0})
	CMember(class UDataflow*)                          DataflowAsset                                               OFFSET(get<T>, {0x138, 8, 0, 0})
	SMember(FString)                                   DataflowTerminal                                            OFFSET(getStruct<T>, {0x140, 16, 0, 0})
	CMember(TMap<FString, FString>)                    Overrides                                                   OFFSET(get<T>, {0x150, 80, 0, 0})
	SMember(FGuid)                                     PersistentGuid                                              OFFSET(getStruct<T>, {0x1A0, 16, 0, 0})
	SMember(FGuid)                                     StateGuid                                                   OFFSET(getStruct<T>, {0x1B0, 16, 0, 0})
	DMember(int32_t)                                   RootIndex                                                   OFFSET(get<int32_t>, {0x1C0, 4, 0, 0})
	CMember(TArray<int32_t>)                           BreadthFirstTransformIndices                                OFFSET(get<T>, {0x1C8, 16, 0, 0})
	CMember(TArray<int32_t>)                           AutoInstanceTransformRemapIndices                           OFFSET(get<T>, {0x1D8, 16, 0, 0})
	DMember(int32_t)                                   BoneSelectedMaterialIndex                                   OFFSET(get<int32_t>, {0x1E8, 4, 0, 0})
	CMember(class UMaterialInterface*)                 BoneSelectedMaterial                                        OFFSET(get<T>, {0x1F0, 8, 0, 0})
	CMember(TArray<class UAssetUserData*>)             AssetUserData                                               OFFSET(get<T>, {0x208, 16, 0, 0})


	/// Functions
	// Function /Script/GeometryCollectionEngine.GeometryCollection.SetEnableNanite
	// void SetEnableNanite(bool bValue);                                                                                       // [0x60aaba8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollection.SetConvertVertexColorsToSRGB
	// void SetConvertVertexColorsToSRGB(bool bValue);                                                                          // [0x60aa82c] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
/// Size: 0x00F0 (0x000290 - 0x000380)
class AGeometryCollectionRenderLevelSetActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	CMember(class UVolumeTexture*)                     TargetVolumeTexture                                         OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(class UMaterial*)                          RayMarchMaterial                                            OFFSET(get<T>, {0x298, 8, 0, 0})
	DMember(float)                                     SurfaceTolerance                                            OFFSET(get<float>, {0x2A0, 4, 0, 0})
	DMember(float)                                     Isovalue                                                    OFFSET(get<float>, {0x2A4, 4, 0, 0})
	DMember(bool)                                      Enabled                                                     OFFSET(get<bool>, {0x2A8, 1, 0, 0})
	DMember(bool)                                      RenderVolumeBoundingBox                                     OFFSET(get<bool>, {0x2A9, 1, 0, 0})
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionISMPoolDebugDrawComponent
/// Size: 0x0020 (0x0005C0 - 0x0005E0)
class UGeometryCollectionISMPoolDebugDrawComponent : public UDebugDrawComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1504;

public:
	DMember(bool)                                      bShowGlobalStats                                            OFFSET(get<bool>, {0x5C0, 1, 0, 0})
	DMember(bool)                                      bShowStats                                                  OFFSET(get<bool>, {0x5C1, 1, 0, 0})
	DMember(bool)                                      bShowBounds                                                 OFFSET(get<bool>, {0x5C2, 1, 0, 0})
	CMember(class UInstancedStaticMeshComponent*)      SelectedComponent                                           OFFSET(get<T>, {0x5C8, 8, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.ChaosBreakingEventData
/// Size: 0x0038 (0x000000 - 0x000038)
class FChaosBreakingEventData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   Velocity                                                    OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	DMember(float)                                     Mass                                                        OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.ChaosCollisionEventData
/// Size: 0x0080 (0x000000 - 0x000080)
class FChaosCollisionEventData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   Normal                                                      OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FVector)                                   Velocity1                                                   OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FVector)                                   Velocity2                                                   OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	DMember(float)                                     Mass1                                                       OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     Mass2                                                       OFFSET(get<float>, {0x64, 4, 0, 0})
	SMember(FVector)                                   Impulse                                                     OFFSET(getStruct<T>, {0x68, 24, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.ChaosRemovalEventData
/// Size: 0x0020 (0x000000 - 0x000020)
class FChaosRemovalEventData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	DMember(float)                                     Mass                                                        OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   ParticleIndex                                               OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.ChaosTrailingEventData
/// Size: 0x0050 (0x000000 - 0x000050)
class FChaosTrailingEventData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   Velocity                                                    OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FVector)                                   AngularVelocity                                             OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	DMember(float)                                     Mass                                                        OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(int32_t)                                   ParticleIndex                                               OFFSET(get<int32_t>, {0x4C, 4, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionDamagePropagationData
/// Size: 0x000C (0x000000 - 0x00000C)
class FGeometryCollectionDamagePropagationData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     BreakDamagePropagationFactor                                OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     ShockDamagePropagationFactor                                OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionRepDynamicData
/// Size: 0x0018 (0x000000 - 0x000018)
class FGeometryCollectionRepDynamicData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionRepStateData
/// Size: 0x0040 (0x000000 - 0x000040)
class FGeometryCollectionRepStateData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionRepData
/// Size: 0x0038 (0x000000 - 0x000038)
class FGeometryCollectionRepData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/GeometryCollectionEngine.GeomComponentCacheParameters
/// Size: 0x0050 (0x000000 - 0x000050)
class FGeomComponentCacheParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(EGeometryCollectionCacheType)              CacheMode                                                   OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(class UGeometryCollectionCache*)           TargetCache                                                 OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(float)                                     ReverseCacheBeginTime                                       OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      SaveCollisionData                                           OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(bool)                                      DoGenerateCollisionData                                     OFFSET(get<bool>, {0x15, 1, 0, 0})
	DMember(int32_t)                                   CollisionDataSizeMax                                        OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(bool)                                      DoCollisionDataSpatialHash                                  OFFSET(get<bool>, {0x1C, 1, 0, 0})
	DMember(float)                                     CollisionDataSpatialHashRadius                              OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   MaxCollisionPerCell                                         OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	DMember(bool)                                      SaveBreakingData                                            OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      DoGenerateBreakingData                                      OFFSET(get<bool>, {0x29, 1, 0, 0})
	DMember(int32_t)                                   BreakingDataSizeMax                                         OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(bool)                                      DoBreakingDataSpatialHash                                   OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(float)                                     BreakingDataSpatialHashRadius                               OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(int32_t)                                   MaxBreakingPerCell                                          OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(bool)                                      SaveTrailingData                                            OFFSET(get<bool>, {0x3C, 1, 0, 0})
	DMember(bool)                                      DoGenerateTrailingData                                      OFFSET(get<bool>, {0x3D, 1, 0, 0})
	DMember(int32_t)                                   TrailingDataSizeMax                                         OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(float)                                     TrailingMinSpeedThreshold                                   OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     TrailingMinVolumeThreshold                                  OFFSET(get<float>, {0x48, 4, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.ChaosBreakingEventRequestSettings
/// Size: 0x0018 (0x000000 - 0x000018)
class FChaosBreakingEventRequestSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   MaxNumberOfResults                                          OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     MinRadius                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MinSpeed                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MinMass                                                     OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     MaxDistance                                                 OFFSET(get<float>, {0x10, 4, 0, 0})
	CMember(EChaosBreakingSortMethod)                  SortMethod                                                  OFFSET(get<T>, {0x14, 1, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.ChaosCollisionEventRequestSettings
/// Size: 0x0018 (0x000000 - 0x000018)
class FChaosCollisionEventRequestSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   MaxNumberResults                                            OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     MinMass                                                     OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MinSpeed                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MinImpulse                                                  OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     MaxDistance                                                 OFFSET(get<float>, {0x10, 4, 0, 0})
	CMember(EChaosCollisionSortMethod)                 SortMethod                                                  OFFSET(get<T>, {0x14, 1, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.ChaosRemovalEventRequestSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FChaosRemovalEventRequestSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   MaxNumberOfResults                                          OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     MinMass                                                     OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MaxDistance                                                 OFFSET(get<float>, {0x8, 4, 0, 0})
	CMember(EChaosRemovalSortMethod)                   SortMethod                                                  OFFSET(get<T>, {0xC, 1, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.ChaosTrailingEventRequestSettings
/// Size: 0x0018 (0x000000 - 0x000018)
class FChaosTrailingEventRequestSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   MaxNumberOfResults                                          OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     MinMass                                                     OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MinSpeed                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MinAngularSpeed                                             OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     MaxDistance                                                 OFFSET(get<float>, {0x10, 4, 0, 0})
	CMember(EChaosTrailingSortMethod)                  SortMethod                                                  OFFSET(get<T>, {0x14, 1, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionDebugDrawWarningMessage
/// Size: 0x0001 (0x000000 - 0x000001)
class FGeometryCollectionDebugDrawWarningMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionDebugDrawActorSelectedRigidBody
/// Size: 0x0018 (0x000000 - 0x000018)
class FGeometryCollectionDebugDrawActorSelectedRigidBody : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   ID                                                          OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(class AChaosSolverActor*)                  Solver                                                      OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class AGeometryCollectionActor*)           GeometryCollection                                          OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionSource
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FGeometryCollectionSource : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FSoftObjectPath)                           SourceGeometryObject                                        OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FTransform)                                LocalTransform                                              OFFSET(getStruct<T>, {0x20, 96, 0, 0})
	CMember(TArray<class UMaterialInterface*>)         SourceMaterial                                              OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TArray<float>)                             InstanceCustomData                                          OFFSET(get<T>, {0x90, 16, 0, 0})
	DMember(bool)                                      bAddInternalMaterials                                       OFFSET(get<bool>, {0xA0, 1, 0, 0})
	DMember(bool)                                      bSplitComponents                                            OFFSET(get<bool>, {0xA1, 1, 0, 0})
	DMember(bool)                                      bSetInternalFromMaterialIndex                               OFFSET(get<bool>, {0xA2, 1, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionAutoInstanceMesh
/// Size: 0x0030 (0x000000 - 0x000030)
class FGeometryCollectionAutoInstanceMesh : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UStaticMesh*)                        Mesh                                                        OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<class UMaterialInterface*>)         Materials                                                   OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   NumInstances                                                OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	CMember(TArray<float>)                             CustomData                                                  OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionEmbeddedExemplar
/// Size: 0x0028 (0x000000 - 0x000028)
class FGeometryCollectionEmbeddedExemplar : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FSoftObjectPath)                           StaticMeshExemplar                                          OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	DMember(float)                                     StartCullDistance                                           OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     EndCullDistance                                             OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(int32_t)                                   InstanceCount                                               OFFSET(get<int32_t>, {0x20, 4, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionLevelSetData
/// Size: 0x0010 (0x000000 - 0x000010)
class FGeometryCollectionLevelSetData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   MinLevelSetResolution                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   MaxLevelSetResolution                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   MinClusterLevelSetResolution                                OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   MaxClusterLevelSetResolution                                OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionCollisionParticleData
/// Size: 0x0008 (0x000000 - 0x000008)
class FGeometryCollectionCollisionParticleData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     CollisionParticlesFraction                                  OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   MaximumCollisionParticles                                   OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionCollisionTypeData
/// Size: 0x0024 (0x000000 - 0x000024)
class FGeometryCollectionCollisionTypeData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	CMember(ECollisionTypeEnum)                        CollisionType                                               OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EImplicitTypeEnum)                         ImplicitType                                                OFFSET(get<T>, {0x1, 1, 0, 0})
	SMember(FGeometryCollectionLevelSetData)           LevelSet                                                    OFFSET(getStruct<T>, {0x4, 16, 0, 0})
	SMember(FGeometryCollectionCollisionParticleData)  CollisionParticles                                          OFFSET(getStruct<T>, {0x14, 8, 0, 0})
	DMember(float)                                     CollisionObjectReductionPercentage                          OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     CollisionMarginFraction                                     OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionSizeSpecificData
/// Size: 0x0020 (0x000000 - 0x000020)
class FGeometryCollectionSizeSpecificData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     MaxSize                                                     OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(TArray<FGeometryCollectionCollisionTypeData>) CollisionShapes                                          OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   DamageThreshold                                             OFFSET(get<int32_t>, {0x18, 4, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionProxyMeshData
/// Size: 0x0010 (0x000000 - 0x000010)
class FGeometryCollectionProxyMeshData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<class UStaticMesh*>)                ProxyMeshes                                                 OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionRenderResourceSizeInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FGeometryCollectionRenderResourceSizeInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(uint64_t)                                  MeshResourcesSize                                           OFFSET(get<uint64_t>, {0x0, 8, 0, 0})
	DMember(uint64_t)                                  NaniteResourcesSize                                         OFFSET(get<uint64_t>, {0x8, 8, 0, 0})
};

/// Enum /Script/GeometryCollectionEngine.ECollectionAttributeEnum
/// Size: 0x04
enum ECollectionAttributeEnum : uint8_t
{
	ECollectionAttributeEnum__Chaos_Active                                           = 0,
	ECollectionAttributeEnum__Chaos_DynamicState                                     = 1,
	ECollectionAttributeEnum__Chaos_CollisionGroup                                   = 2,
	ECollectionAttributeEnum__Chaos_Max                                              = 3
};

/// Enum /Script/GeometryCollectionEngine.ECollectionGroupEnum
/// Size: 0x02
enum ECollectionGroupEnum : uint8_t
{
	ECollectionGroupEnum__Chaos_Traansform                                           = 0,
	ECollectionGroupEnum__Chaos_Max                                                  = 1
};

/// Enum /Script/GeometryCollectionEngine.EChaosBreakingSortMethod
/// Size: 0x06
enum EChaosBreakingSortMethod : uint8_t
{
	EChaosBreakingSortMethod__SortNone                                               = 0,
	EChaosBreakingSortMethod__SortByHighestMass                                      = 1,
	EChaosBreakingSortMethod__SortByHighestSpeed                                     = 2,
	EChaosBreakingSortMethod__SortByNearestFirst                                     = 3,
	EChaosBreakingSortMethod__Count                                                  = 4,
	EChaosBreakingSortMethod__EChaosBreakingSortMethod_MAX                           = 5
};

/// Enum /Script/GeometryCollectionEngine.EChaosCollisionSortMethod
/// Size: 0x07
enum EChaosCollisionSortMethod : uint8_t
{
	EChaosCollisionSortMethod__SortNone                                              = 0,
	EChaosCollisionSortMethod__SortByHighestMass                                     = 1,
	EChaosCollisionSortMethod__SortByHighestSpeed                                    = 2,
	EChaosCollisionSortMethod__SortByHighestImpulse                                  = 3,
	EChaosCollisionSortMethod__SortByNearestFirst                                    = 4,
	EChaosCollisionSortMethod__Count                                                 = 5,
	EChaosCollisionSortMethod__EChaosCollisionSortMethod_MAX                         = 6
};

/// Enum /Script/GeometryCollectionEngine.EChaosRemovalSortMethod
/// Size: 0x05
enum EChaosRemovalSortMethod : uint8_t
{
	EChaosRemovalSortMethod__SortNone                                                = 0,
	EChaosRemovalSortMethod__SortByHighestMass                                       = 1,
	EChaosRemovalSortMethod__SortByNearestFirst                                      = 2,
	EChaosRemovalSortMethod__Count                                                   = 3,
	EChaosRemovalSortMethod__EChaosRemovalSortMethod_MAX                             = 4
};

/// Enum /Script/GeometryCollectionEngine.EChaosTrailingSortMethod
/// Size: 0x06
enum EChaosTrailingSortMethod : uint8_t
{
	EChaosTrailingSortMethod__SortNone                                               = 0,
	EChaosTrailingSortMethod__SortByHighestMass                                      = 1,
	EChaosTrailingSortMethod__SortByHighestSpeed                                     = 2,
	EChaosTrailingSortMethod__SortByNearestFirst                                     = 3,
	EChaosTrailingSortMethod__Count                                                  = 4,
	EChaosTrailingSortMethod__EChaosTrailingSortMethod_MAX                           = 5
};

/// Enum /Script/GeometryCollectionEngine.EGeometryCollectionDebugDrawActorHideGeometry
/// Size: 0x06
enum EGeometryCollectionDebugDrawActorHideGeometry : uint8_t
{
	EGeometryCollectionDebugDrawActorHideGeometry__HideNone                          = 0,
	EGeometryCollectionDebugDrawActorHideGeometry__HideWithCollision                 = 1,
	EGeometryCollectionDebugDrawActorHideGeometry__HideSelected                      = 2,
	EGeometryCollectionDebugDrawActorHideGeometry__HideWholeCollection               = 3,
	EGeometryCollectionDebugDrawActorHideGeometry__HideAll                           = 4,
	EGeometryCollectionDebugDrawActorHideGeometry__EGeometryCollectionDebugDrawActorHideGeometry_MAX = 5
};

