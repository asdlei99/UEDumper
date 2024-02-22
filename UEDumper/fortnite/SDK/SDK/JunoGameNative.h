
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
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
/// dependency: FortImGuiCore
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
/// dependency: ItemizationCoreRuntime
/// dependency: JsonUtilities
/// dependency: JunoWorldManagement
/// dependency: MassEntity
/// dependency: McpProfileSys
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
/// dependency: Water
/// dependency: WorldConditions

/// Enum /Script/JunoGameNative.EJunoBuildingPlacementType
/// Size: 0x05
enum class EJunoBuildingPlacementType : uint8_t
{
	EJunoBuildingPlacementType__GuidedSnapping                                       = 0,
	EJunoBuildingPlacementType__Connectivity                                         = 1,
	EJunoBuildingPlacementType__SnapPlacement                                        = 2,
	EJunoBuildingPlacementType__NoTarget                                             = 3,
	EJunoBuildingPlacementType__MAX                                                  = 4
};

/// Enum /Script/JunoGameNative.EJunoBuildingBehaviorState
/// Size: 0x06
enum class EJunoBuildingBehaviorState : uint8_t
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
enum class EJunoBiomeHabitat : uint8_t
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
enum class EJunoBiome : uint8_t
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
enum class EJunoAwesomePointModificationContext : uint8_t
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
enum class EJunoPawnEmotionalState : uint8_t
{
	EJunoPawnEmotionalState__Default                                                 = 0,
	EJunoPawnEmotionalState__Happy                                                   = 1,
	EJunoPawnEmotionalState__Sad                                                     = 2,
	EJunoPawnEmotionalState__MAX                                                     = 3
};

/// Enum /Script/JunoGameNative.EPassiveCraftingDoneReason
/// Size: 0x05
enum class EPassiveCraftingDoneReason : uint8_t
{
	EPassiveCraftingDoneReason__UnexpectedError                                      = 0,
	EPassiveCraftingDoneReason__PlayerStopped                                        = 1,
	EPassiveCraftingDoneReason__NoOutputSpace                                        = 2,
	EPassiveCraftingDoneReason__MissingIngredients                                   = 3,
	EPassiveCraftingDoneReason__EPassiveCraftingDoneReason_MAX                       = 4
};

/// Enum /Script/JunoGameNative.EJunoCaveType
/// Size: 0x11
enum class EJunoCaveType : uint8_t
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
enum class EJunoCompassDirection : uint8_t
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

/// Enum /Script/JunoGameNative.EJunoTrackedActorRefreshReason
/// Size: 0x05
enum class EJunoTrackedActorRefreshReason : uint8_t
{
	EJunoTrackedActorRefreshReason__LocationChanged                                  = 0,
	EJunoTrackedActorRefreshReason__NetRelDistanceChanged                            = 1,
	EJunoTrackedActorRefreshReason__NumberOfRelevantActorsChanged                    = 2,
	EJunoTrackedActorRefreshReason__Unknown                                          = 3,
	EJunoTrackedActorRefreshReason__EJunoTrackedActorRefreshReason_MAX               = 4
};

/// Enum /Script/JunoGameNative.EChaosEventSize
/// Size: 0x06
enum class EChaosEventSize : uint8_t
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
enum class EJunoContactDirection : uint8_t
{
	EJunoContactDirection__PosX                                                      = 0,
	EJunoContactDirection__NegX                                                      = 1,
	EJunoContactDirection__PosY                                                      = 2,
	EJunoContactDirection__NegY                                                      = 3,
	EJunoContactDirection__PosZ                                                      = 4,
	EJunoContactDirection__NegZ                                                      = 5,
	EJunoContactDirection__EJunoContactDirection_MAX                                 = 6
};

/// Enum /Script/JunoGameNative.EJunoDumpWorldPersistentContentsVerbosity
/// Size: 0x04
enum class EJunoDumpWorldPersistentContentsVerbosity : uint8_t
{
	EJunoDumpWorldPersistentContentsVerbosity__Compact                               = 0,
	EJunoDumpWorldPersistentContentsVerbosity__Default                               = 1,
	EJunoDumpWorldPersistentContentsVerbosity__Verbose                               = 2,
	EJunoDumpWorldPersistentContentsVerbosity__EJunoDumpWorldPersistentContentsVerbosity_MAX = 3
};

/// Enum /Script/JunoGameNative.EJunoGeneratePersistenceAssetsReportCommandletAction
/// Size: 0x04
enum class EJunoGeneratePersistenceAssetsReportCommandletAction : uint8_t
{
	EJunoGeneratePersistenceAssetsReportCommandletAction__None                       = 0,
	EJunoGeneratePersistenceAssetsReportCommandletAction__GeneratePersistenceAssetsReport = 1,
	EJunoGeneratePersistenceAssetsReportCommandletAction__GeneratePersistenceAssetsBackwardCompatibiliyReport = 2,
	EJunoGeneratePersistenceAssetsReportCommandletAction__EJunoGeneratePersistenceAssetsReportCommandletAction_MAX = 3
};

/// Enum /Script/JunoGameNative.EJunoGeometryCollectionAssemblerDurationType
/// Size: 0x04
enum class EJunoGeometryCollectionAssemblerDurationType : uint32_t
{
	EJunoGeometryCollectionAssemblerDurationType__Default                            = 0,
	EJunoGeometryCollectionAssemblerDurationType__CalculateLayerCount                = 1,
	EJunoGeometryCollectionAssemblerDurationType__SpecifyLayerCount                  = 2,
	EJunoGeometryCollectionAssemblerDurationType__EJunoGeometryCollectionAssemblerDurationType_MAX = 3
};

/// Enum /Script/JunoGameNative.EJunoKnowledgeState
/// Size: 0x04
enum class EJunoKnowledgeState : uint8_t
{
	EJunoKnowledgeState__Hidden                                                      = 0,
	EJunoKnowledgeState__Revealed                                                    = 1,
	EJunoKnowledgeState__Acquired                                                    = 2,
	EJunoKnowledgeState__EJunoKnowledgeState_MAX                                     = 3
};

/// Enum /Script/JunoGameNative.EJunoPersistenceAssetBackwardCompatibilityIssueType
/// Size: 0x05
enum class EJunoPersistenceAssetBackwardCompatibilityIssueType : uint8_t
{
	EJunoPersistenceAssetBackwardCompatibilityIssueType__None                        = 0,
	EJunoPersistenceAssetBackwardCompatibilityIssueType__Missing                     = 1,
	EJunoPersistenceAssetBackwardCompatibilityIssueType__NoLongerCooked              = 2,
	EJunoPersistenceAssetBackwardCompatibilityIssueType__IncompatibleContents        = 3,
	EJunoPersistenceAssetBackwardCompatibilityIssueType__EJunoPersistenceAssetBackwardCompatibilityIssueType_MAX = 4
};

/// Enum /Script/JunoGameNative.EJunoWorldSaveDataState
/// Size: 0x06
enum class EJunoWorldSaveDataState : uint8_t
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
enum class EJunoLevelSaveDataState : uint8_t
{
	EJunoLevelSaveDataState__None                                                    = 0,
	EJunoLevelSaveDataState__CheckedOut                                              = 1,
	EJunoLevelSaveDataState__Applied                                                 = 2,
	EJunoLevelSaveDataState__CheckedIn                                               = 3,
	EJunoLevelSaveDataState__EJunoLevelSaveDataState_MAX                             = 4
};

/// Enum /Script/JunoGameNative.EJunoPersistenceFeatureCheckoutState
/// Size: 0x04
enum class EJunoPersistenceFeatureCheckoutState : uint32_t
{
	EJunoPersistenceFeatureCheckoutState__None                                       = 0,
	EJunoPersistenceFeatureCheckoutState__CheckedOut                                 = 1,
	EJunoPersistenceFeatureCheckoutState__CheckedIn                                  = 2,
	EJunoPersistenceFeatureCheckoutState__EJunoPersistenceFeatureCheckoutState_MAX   = 3
};

/// Enum /Script/JunoGameNative.EJunoBuildModeType
/// Size: 0x05
enum class EJunoBuildModeType : uint8_t
{
	EJunoBuildModeType__BuildMode                                                    = 0,
	EJunoBuildModeType__GuidedBuildingMode                                           = 1,
	EJunoBuildModeType__NumOfBuildModes                                              = 2,
	EJunoBuildModeType__ActionMode                                                   = 3,
	EJunoBuildModeType__EJunoBuildModeType_MAX                                       = 4
};

/// Enum /Script/JunoGameNative.EJunoPersistenceReportOptions
/// Size: 0x15
enum class EJunoPersistenceReportOptions : uint16_t
{
	EJunoPersistenceReportOptions__None                                              = 0,
	EJunoPersistenceReportOptions__ActorTemplateDataEnabled                          = 1,
	EJunoPersistenceReportOptions__ActorInstanceDataEnabled                          = 2,
	EJunoPersistenceReportOptions__JunoUpdateActionDataEnabled                       = 4,
	EJunoPersistenceReportOptions__JunoDeleteActionDataEnabled                       = 8,
	EJunoPersistenceReportOptions__JunoPersistenceFeaturesDataEnabled                = 16,
	EJunoPersistenceReportOptions__DataEnabledDefaultFlags                           = 31,
	EJunoPersistenceReportOptions__ShowReportHeader                                  = 32,
	EJunoPersistenceReportOptions__ShowPlayspaceHeaders                              = 64,
	EJunoPersistenceReportOptions__ShowSubreportsHeaders                             = 128,
	EJunoPersistenceReportOptions__ShowTablesHeaders                                 = 256,
	EJunoPersistenceReportOptions__ShowIndividualItemsStats                          = 512,
	EJunoPersistenceReportOptions__ShowAggregatedStats                               = 1024,
	EJunoPersistenceReportOptions__ShowDefaultFlags                                  = 1504,
	EJunoPersistenceReportOptions__EJunoPersistenceReportOptions_MAX                 = 1505
};

/// Enum /Script/JunoGameNative.EJunoWorldConditionAICampChecksIsAssigned
/// Size: 0x04
enum class EJunoWorldConditionAICampChecksIsAssigned : uint8_t
{
	EJunoWorldConditionAICampChecksIsAssigned__None                                  = 0,
	EJunoWorldConditionAICampChecksIsAssigned__Assigned                              = 1,
	EJunoWorldConditionAICampChecksIsAssigned__Unassigned                            = 2,
	EJunoWorldConditionAICampChecksIsAssigned__EJunoWorldConditionAICampChecksIsAssigned_MAX = 3
};

/// Enum /Script/JunoGameNative.EJunoWorldConditionMustHaveLastUsedGatheringActor
/// Size: 0x04
enum class EJunoWorldConditionMustHaveLastUsedGatheringActor : uint8_t
{
	EJunoWorldConditionMustHaveLastUsedGatheringActor__None                          = 0,
	EJunoWorldConditionMustHaveLastUsedGatheringActor__IsValid                       = 1,
	EJunoWorldConditionMustHaveLastUsedGatheringActor__IsNotValid                    = 2,
	EJunoWorldConditionMustHaveLastUsedGatheringActor__EJunoWorldConditionMustHaveLastUsedGatheringActor_MAX = 3
};

/// Enum /Script/JunoGameNative.EJunoWorldConditionAssignmentState
/// Size: 0x05
enum class EJunoWorldConditionAssignmentState : uint8_t
{
	EJunoWorldConditionAssignmentState__None                                         = 0,
	EJunoWorldConditionAssignmentState__AssignedToUserActor                          = 1,
	EJunoWorldConditionAssignmentState__Assigned                                     = 2,
	EJunoWorldConditionAssignmentState__Unassigned                                   = 3,
	EJunoWorldConditionAssignmentState__EJunoWorldConditionAssignmentState_MAX       = 4
};

/// Enum /Script/JunoGameNative.EJunoWorldConditionPawnType
/// Size: 0x05
enum class EJunoWorldConditionPawnType : uint8_t
{
	EJunoWorldConditionPawnType__None                                                = 0,
	EJunoWorldConditionPawnType__Player                                              = 1,
	EJunoWorldConditionPawnType__Villager                                            = 2,
	EJunoWorldConditionPawnType__EnemyMinifig                                        = 4,
	EJunoWorldConditionPawnType__EJunoWorldConditionPawnType_MAX                     = 5
};

/// Enum /Script/JunoGameNative.EJunoWorldConditionHasFollower
/// Size: 0x04
enum class EJunoWorldConditionHasFollower : uint8_t
{
	EJunoWorldConditionHasFollower__Unset                                            = 0,
	EJunoWorldConditionHasFollower__Zero                                             = 1,
	EJunoWorldConditionHasFollower__OneOrMore                                        = 2,
	EJunoWorldConditionHasFollower__EJunoWorldConditionHasFollower_MAX               = 3
};

/// Enum /Script/JunoGameNative.EPhysicalStrainHealthMode
/// Size: 0x05
enum class EPhysicalStrainHealthMode : uint8_t
{
	EPhysicalStrainHealthMode__Disabled                                              = 0,
	EPhysicalStrainHealthMode__FullIntegrityPercentageMapping                        = 1,
	EPhysicalStrainHealthMode__ZeroIntegrity                                         = 2,
	EPhysicalStrainHealthMode__FullIntegrityFatigueThresholdMapping                  = 3,
	EPhysicalStrainHealthMode__EPhysicalStrainHealthMode_MAX                         = 4
};

/// Enum /Script/JunoGameNative.EJunoAwesomeThresholdTestMode
/// Size: 0x04
enum class EJunoAwesomeThresholdTestMode : uint32_t
{
	EJunoAwesomeThresholdTestMode__LessOrEqual                                       = 0,
	EJunoAwesomeThresholdTestMode__GreaterOrEqual                                    = 1,
	EJunoAwesomeThresholdTestMode__Range                                             = 2,
	EJunoAwesomeThresholdTestMode__EJunoAwesomeThresholdTestMode_MAX                 = 3
};

/// Enum /Script/JunoGameNative.EJunoAwesomePlacementConfigType
/// Size: 0x03
enum class EJunoAwesomePlacementConfigType : uint8_t
{
	EJunoAwesomePlacementConfigType__ItemDefinition                                  = 0,
	EJunoAwesomePlacementConfigType__CraftingRowName                                 = 1,
	EJunoAwesomePlacementConfigType__EJunoAwesomePlacementConfigType_MAX             = 2
};

/// Enum /Script/JunoGameNative.EJunoAwesomeLevelUpgradeQueryResult
/// Size: 0x04
enum class EJunoAwesomeLevelUpgradeQueryResult : uint8_t
{
	EJunoAwesomeLevelUpgradeQueryResult__Fail_LackingAwesomePoints                   = 0,
	EJunoAwesomeLevelUpgradeQueryResult__Fail_LackingPlayerResources                 = 1,
	EJunoAwesomeLevelUpgradeQueryResult__Pass                                        = 2,
	EJunoAwesomeLevelUpgradeQueryResult__EJunoAwesomeLevelUpgradeQueryResult_MAX     = 3
};

/// Enum /Script/JunoGameNative.EJunoAwesomeLevelIncrementType
/// Size: 0x03
enum class EJunoAwesomeLevelIncrementType : uint8_t
{
	EJunoAwesomeLevelIncrementType__LevelDelta                                       = 0,
	EJunoAwesomeLevelIncrementType__CurrentLevel                                     = 1,
	EJunoAwesomeLevelIncrementType__EJunoAwesomeLevelIncrementType_MAX               = 2
};

/// Enum /Script/JunoGameNative.EImpactOrDamage_ExecutionPin
/// Size: 0x04
enum class EImpactOrDamage_ExecutionPin : uint8_t
{
	EImpactOrDamage_ExecutionPin__LocalImpact                                        = 0,
	EImpactOrDamage_ExecutionPin__LocalDamage                                        = 1,
	EImpactOrDamage_ExecutionPin__OtherDamage                                        = 2,
	EImpactOrDamage_ExecutionPin__EImpactOrDamage_MAX                                = 3
};

/// Enum /Script/JunoGameNative.EUpdateAnimationTimer_ExecutionPin
/// Size: 0x03
enum class EUpdateAnimationTimer_ExecutionPin : uint8_t
{
	EUpdateAnimationTimer_ExecutionPin__Active                                       = 0,
	EUpdateAnimationTimer_ExecutionPin__Expired                                      = 1,
	EUpdateAnimationTimer_ExecutionPin__EUpdateAnimationTimer_MAX                    = 2
};

/// Enum /Script/JunoGameNative.EJunoMinifigRotationMode
/// Size: 0x05
enum class EJunoMinifigRotationMode : uint8_t
{
	EJunoMinifigRotationMode__NoRotation                                             = 0,
	EJunoMinifigRotationMode__ContinuousRotateToTarget                               = 1,
	EJunoMinifigRotationMode__CurveRotateToMovingTarget                              = 2,
	EJunoMinifigRotationMode__CurveRotateToStaticTarget                              = 3,
	EJunoMinifigRotationMode__EJunoMinifigRotationMode_MAX                           = 4
};

/// Enum /Script/JunoGameNative.EJunoBedAssignmentProcessingState
/// Size: 0x03
enum class EJunoBedAssignmentProcessingState : uint8_t
{
	EJunoBedAssignmentProcessingState__Processing                                    = 0,
	EJunoBedAssignmentProcessingState__Ready                                         = 1,
	EJunoBedAssignmentProcessingState__EJunoBedAssignmentProcessingState_MAX         = 2
};

/// Enum /Script/JunoGameNative.EJunoResourceScale
/// Size: 0x07
enum class EJunoResourceScale : uint8_t
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
enum class EWorldDataAvailable : uint8_t
{
	EWorldDataAvailable__Undefined                                                   = 0,
	EWorldDataAvailable__WasLoadedFromPersistentData                                 = 1,
	EWorldDataAvailable__WasInitializedFromWorldMetadata                             = 2,
	EWorldDataAvailable__EWorldDataAvailable_MAX                                     = 3
};

/// Enum /Script/JunoGameNative.EJunoItemChangeType
/// Size: 0x06
enum class EJunoItemChangeType : uint8_t
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
enum class EJunoInventoryAcquisitionResult : uint8_t
{
	EJunoInventoryAcquisitionResult__Failure                                         = 0,
	EJunoInventoryAcquisitionResult__SystemNotReady                                  = 1,
	EJunoInventoryAcquisitionResult__InventoryCreated                                = 2,
	EJunoInventoryAcquisitionResult__InventoryRestored                               = 3,
	EJunoInventoryAcquisitionResult__EJunoInventoryAcquisitionResult_MAX             = 4
};

/// Enum /Script/JunoGameNative.EJunoBuildingSnapEntryState
/// Size: 0x06
enum class EJunoBuildingSnapEntryState : uint8_t
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
enum class EOnPlacementAction : uint8_t
{
	EOnPlacementAction__IgnoreOnly                                                   = 0,
	EOnPlacementAction__IgnoreAndDestroy                                             = 1,
	EOnPlacementAction__EOnPlacementAction_MAX                                       = 2
};

/// Enum /Script/JunoGameNative.EJunoGuidedBuildingState
/// Size: 0x05
enum class EJunoGuidedBuildingState : uint8_t
{
	EJunoGuidedBuildingState__Default                                                = 0,
	EJunoGuidedBuildingState__Hidden                                                 = 1,
	EJunoGuidedBuildingState__Unfilled                                               = 2,
	EJunoGuidedBuildingState__Filled                                                 = 3,
	EJunoGuidedBuildingState__EJunoGuidedBuildingState_MAX                           = 4
};

/// Enum /Script/JunoGameNative.EJunoLandscapeVisualModifierType
/// Size: 0x03
enum class EJunoLandscapeVisualModifierType : uint8_t
{
	EJunoLandscapeVisualModifierType__None                                           = 0,
	EJunoLandscapeVisualModifierType__DirtPatch                                      = 1,
	EJunoLandscapeVisualModifierType__EJunoLandscapeVisualModifierType_MAX           = 2
};

/// Enum /Script/JunoGameNative.EJunoAutomaticConnectionMethod
/// Size: 0x04
enum class EJunoAutomaticConnectionMethod : uint8_t
{
	EJunoAutomaticConnectionMethod__Full                                             = 0,
	EJunoAutomaticConnectionMethod__Below                                            = 1,
	EJunoAutomaticConnectionMethod__Custom                                           = 2,
	EJunoAutomaticConnectionMethod__EJunoAutomaticConnectionMethod_MAX               = 3
};

/// Enum /Script/JunoGameNative.EJunoDeltaActionTypes
/// Size: 0x05
enum class EJunoDeltaActionTypes : uint8_t
{
	EJunoDeltaActionTypes__None                                                      = 0,
	EJunoDeltaActionTypes__Add                                                       = 1,
	EJunoDeltaActionTypes__Update                                                    = 2,
	EJunoDeltaActionTypes__Delete                                                    = 4,
	EJunoDeltaActionTypes__EJunoDeltaActionTypes_MAX                                 = 5
};

/// Enum /Script/JunoGameNative.EJunoQuickbarSelectionDirection
/// Size: 0x03
enum class EJunoQuickbarSelectionDirection : uint8_t
{
	EJunoQuickbarSelectionDirection__Next                                            = 0,
	EJunoQuickbarSelectionDirection__Prev                                            = 1,
	EJunoQuickbarSelectionDirection__EJunoQuickbarSelectionDirection_MAX             = 2
};

/// Enum /Script/JunoGameNative.EJunoPawnEmotionalStateMappingTest
/// Size: 0x03
enum class EJunoPawnEmotionalStateMappingTest : uint32_t
{
	EJunoPawnEmotionalStateMappingTest__LessOrEqual                                  = 0,
	EJunoPawnEmotionalStateMappingTest__GreaterOrEqual                               = 1,
	EJunoPawnEmotionalStateMappingTest__EJunoPawnEmotionalStateMappingTest_MAX       = 2
};

/// Enum /Script/JunoGameNative.EJunoActionExecutionConfig
/// Size: 0x04
enum class EJunoActionExecutionConfig : uint8_t
{
	EJunoActionExecutionConfig__ExecuteEveryTime                                     = 0,
	EJunoActionExecutionConfig__ExecuteFirstTimeOnly                                 = 1,
	EJunoActionExecutionConfig__ExecuteReloadOnly                                    = 2,
	EJunoActionExecutionConfig__EJunoActionExecutionConfig_MAX                       = 3
};

/// Enum /Script/JunoGameNative.EMeshAuditFailureReason
/// Size: 0x12
enum class EMeshAuditFailureReason : uint32_t
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

/// Class /Script/JunoGameNative.FortAutomationRpcManager_Juno
/// Size: 0x0050 (0x000058 - 0x0000A8)
class UFortAutomationRpcManager_Juno : public UFortAutomationRpcManager
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0058   (0x0050)  MISSED
};

/// Class /Script/JunoGameNative.FortQueryGenerator_PointsOutsideVolume
/// Size: 0x0078 (0x000088 - 0x000100)
class UFortQueryGenerator_PointsOutsideVolume : public UEnvQueryGenerator_ProjectedPoints
{ 
public:
	FAIDataProviderFloatValue                          SpaceBetween;                                               // 0x0088   (0x0038)  
	FAIDataProviderFloatValue                          NumberOfRingsAroundVolume;                                  // 0x00C0   (0x0038)  
	class UClass*                                      GenerateInVolume;                                           // 0x00F8   (0x0008)  
};

/// Class /Script/JunoGameNative.JunoBuildingTrackedActorInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoBuildingTrackedActorInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/JunoGameNative.JunoBuildingTrackedActorInterface.ShouldBeTrackedByMetrics
	// bool ShouldBeTrackedByMetrics();                                                                                      // [0x1377b44] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/JunoGameNative.JunoBuildingTrackedActorInterface.GetNumberOfRelevantActors
	// int32_t GetNumberOfRelevantActors();                                                                                  // [0x614efe4] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/JunoGameNative.JunoBuildingTrackedActorInterface.GetNetRelevanceDistanceOverride
	// float GetNetRelevanceDistanceOverride();                                                                              // [0xb9e8194] Native|Event|Public|BlueprintEvent|Const 
};

/// Struct /Script/JunoGameNative.PushMontageData
/// Size: 0x00D8 (0x000000 - 0x0000D8)
struct FPushMontageData
{ 
	FGameplayTagRequirements                           MontageDataRequirement;                                     // 0x0000   (0x0088)  
	SDK_UNDEFINED(80,11931) /* TMap<EFortPhysicsSimSize, UAnimMontage*> */ __um(SizeToMontageMap);                 // 0x0088   (0x0050)  
};

/// Class /Script/JunoGameNative.JunoAbility_PlayerPushPhysicsObject
/// Size: 0x0130 (0x000B60 - 0x000C90)
class UJunoAbility_PlayerPushPhysicsObject : public UFortGameplayAbility
{ 
public:
	EFortPhysicsSimSize                                MaxPhysicsObjectSizeToPush;                                 // 0x0B60   (0x0001)  
	EFortPhysicsSimSize                                MinPhysicsObjectSizeToPush;                                 // 0x0B61   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0B62   (0x0006)  MISSED
	FGameplayTagContainer                              NoTagsPusher;                                               // 0x0B68   (0x0020)  
	FGameplayTagContainer                              NoTagsPushedObject;                                         // 0x0B88   (0x0020)  
	class UAnimMontage*                                DefaultPushMontage;                                         // 0x0BA8   (0x0008)  
	TArray<FPushMontageData>                           SpecializedPushMontages;                                    // 0x0BB0   (0x0010)  
	FGameplayTagQuery                                  EnergyComponentQuery;                                       // 0x0BC0   (0x0048)  
	FScalableFloat                                     EnergyInitialCost;                                          // 0x0C08   (0x0028)  
	FScalableFloat                                     EnergyDrainPerSecond;                                       // 0x0C30   (0x0028)  
	bool                                               bEnergyExhausted;                                           // 0x0C58   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0C59   (0x0003)  MISSED
	SDK_UNDEFINED(8,11932) /* TWeakObjectPtr<UFortComponent_Energy*> */ __um(CachedEnergyComponent);               // 0x0C5C   (0x0008)  
	unsigned char                                      UnknownData02_5[0xC];                                       // 0x0C64   (0x000C)  MISSED
	SDK_UNDEFINED(8,11933) /* TWeakObjectPtr<AActor*> */ __um(TrackedObjectToPush);                                // 0x0C70   (0x0008)  
	EFortPhysicsSimSize                                TrackedObjectSimSize;                                       // 0x0C78   (0x0001)  
	unsigned char                                      UnknownData03_6[0x17];                                      // 0x0C79   (0x0017)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoAbility_PlayerPushPhysicsObject.StopUsingEnergy
	// void StopUsingEnergy();                                                                                               // [0xb9e87f0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoAbility_PlayerPushPhysicsObject.PotentiallyStartUsingEnergy
	// void PotentiallyStartUsingEnergy();                                                                                   // [0xb9e85e0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoAbility_PlayerPushPhysicsObject.OnPlayerHit
	// void OnPlayerHit(class AActor* HitPlayer, class AActor* HitActor, FVector NormalImpulse, FHitResult& Hit);            // [0xb9e8354] Final|Native|Private|HasOutParms|HasDefaults 
	// Function /Script/JunoGameNative.JunoAbility_PlayerPushPhysicsObject.OnEnergyFullyRecharged
	// void OnEnergyFullyRecharged(class UFortComponent_Energy* EnergyComponentRecharged);                                   // [0xb9e82c0] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoAbility_PlayerPushPhysicsObject.OnEnergyDrained
	// void OnEnergyDrained(class UFortComponent_Energy* EnergyComponentDrained);                                            // [0xb9e822c] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoAbility_PlayerPushPhysicsObject.GetMontageToPlay
	// class UAnimMontage* GetMontageToPlay();                                                                               // [0xb9e8170] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoAbility_PlayerPushPhysicsObject.CancelPushingPhysicsObject
	// void CancelPushingPhysicsObject();                                                                                    // [0x3097b14] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoAccountItemDefinitionOverrideManager
/// Size: 0x0168 (0x000028 - 0x000190)
class UJunoAccountItemDefinitionOverrideManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	class UFortHeroType*                               JunoHeroDefinition;                                         // 0x0030   (0x0008)  
	class UDataTable*                                  DefaultCharacters;                                          // 0x0038   (0x0008)  
	SDK_UNDEFINED(80,11934) /* TMap<TWeakObjectPtr<UClass*>, TWeakObjectPtr<UClass*>> */ __um(PreviewActorClasses); // 0x0040   (0x0050)  
	SDK_UNDEFINED(80,11935) /* TMap<TWeakObjectPtr<UClass*>, FGameplayTagContainer> */ __um(GameplayTagParentsToRemoveFromOverrides); // 0x0090   (0x0050)  
	SDK_UNDEFINED(80,11936) /* TMap<TWeakObjectPtr<UClass*>, FGameplayTagContainer> */ __um(GameplayTagsToAdd);    // 0x00E0   (0x0050)  
	SDK_UNDEFINED(80,11937) /* TMap<FPrimaryAssetId, FJunoAccountItemDefinitionOverride> */ __um(Overrides);       // 0x0130   (0x0050)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0180   (0x0010)  MISSED
};

/// Class /Script/JunoGameNative.JunoAccountItemOverrideDefinition
/// Size: 0x0078 (0x000030 - 0x0000A8)
class UJunoAccountItemOverrideDefinition : public UPrimaryDataAsset
{ 
public:
	FGameplayTagContainer                              GameplayTagsToAdd;                                          // 0x0030   (0x0020)  
	bool                                               bOverrideFrontendTransform;                                 // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0051   (0x0003)  MISSED
	float                                              FrontendPreviewScale;                                       // 0x0054   (0x0004)  
	FVector                                            FrontendPreviewPivotOffset;                                 // 0x0058   (0x0018)  
	FRotator                                           FrontendPreviewInitialRotation;                             // 0x0070   (0x0018)  
	SDK_UNDEFINED(32,11938) /* TWeakObjectPtr<UClass*> */ __um(PreviewActorClass);                                 // 0x0088   (0x0020)  
};

/// Class /Script/JunoGameNative.JunoAthenaCharacterItemOverrideDefinition
/// Size: 0x0088 (0x0000A8 - 0x000130)
class UJunoAthenaCharacterItemOverrideDefinition : public UJunoAccountItemOverrideDefinition
{ 
public:
	SDK_UNDEFINED(32,11939) /* TWeakObjectPtr<UAthenaCharacterItemDefinition*> */ __um(BaseAthenaCharacterItemDefinition); // 0x00A8   (0x0020)  
	SDK_UNDEFINED(32,11940) /* TWeakObjectPtr<UAssembledMeshSchema*> */ __um(AssembledMeshSchema);                 // 0x00C8   (0x0020)  
	SDK_UNDEFINED(32,11941) /* TWeakObjectPtr<UAssembledMeshSchema*> */ __um(LowDetailsAssembledMeshSchema);       // 0x00E8   (0x0020)  
	SDK_UNDEFINED(32,11942) /* TWeakObjectPtr<UAnimMontage*> */ __um(FrontendAnimMontageIdleOverride);             // 0x0108   (0x0020)  
	float                                              PreviewPawnScale;                                           // 0x0128   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x012C   (0x0004)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoAthenaCharacterItemOverrideDefinition.SetBaseAthenaCharacterItemDefinition
	// void SetBaseAthenaCharacterItemDefinition(TWeakObjectPtr<UAthenaCharacterItemDefinition*> InBaseAthenaCharacterItemDefinition); // [0xb9e85f4] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoAthenaDanceItemOverrideDefinition
/// Size: 0x00E8 (0x0000A8 - 0x000190)
class UJunoAthenaDanceItemOverrideDefinition : public UJunoAccountItemOverrideDefinition
{ 
public:
	SDK_UNDEFINED(32,11943) /* TWeakObjectPtr<UAthenaDanceItemDefinition*> */ __um(BaseAthenaDanceItemDefinition); // 0x00A8   (0x0020)  
	SDK_UNDEFINED(32,11944) /* TWeakObjectPtr<UAnimMontage*> */ __um(Animation);                                   // 0x00C8   (0x0020)  
	SDK_UNDEFINED(32,11945) /* TWeakObjectPtr<UAnimMontage*> */ __um(AnimationFemaleOverride);                     // 0x00E8   (0x0020)  
	TArray<FFortEmoteMapping>                          AnimationOverrides;                                         // 0x0108   (0x0010)  
	SDK_UNDEFINED(32,11946) /* TWeakObjectPtr<UAnimMontage*> */ __um(FrontEndAnimation);                           // 0x0118   (0x0020)  
	SDK_UNDEFINED(32,11947) /* TWeakObjectPtr<UAnimMontage*> */ __um(FrontEndAnimationFemaleOverride);             // 0x0138   (0x0020)  
	TArray<FFortEmoteMapping>                          FrontEndAnimationOverrides;                                 // 0x0158   (0x0010)  
	FVector                                            GroupEmotePositionOffset;                                   // 0x0168   (0x0018)  
	float                                              GroupEmotePositionOffsetTolerance;                          // 0x0180   (0x0004)  
	float                                              GroupEmoteFollowDistance;                                   // 0x0184   (0x0004)  
	float                                              WalkForwardSpeed;                                           // 0x0188   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x018C   (0x0004)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoAthenaDanceItemOverrideDefinition.SetBaseAthenaDanceItemDefinition
	// void SetBaseAthenaDanceItemDefinition(TWeakObjectPtr<UAthenaDanceItemDefinition*> InBaseAthenaDanceItemDefinition);   // [0xb9e86e8] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoActionConfig
/// Size: 0x0010 (0x000028 - 0x000038)
class UJunoActionConfig : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class UClass*                                      JunoActionClass;                                            // 0x0028   (0x0008)  
	EJunoActionExecutionConfig                         JunoActionExecutionConfig;                                  // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Class /Script/JunoGameNative.JunoActionConfig_StaticMesh
/// Size: 0x0008 (0x000038 - 0x000040)
class UJunoActionConfig_StaticMesh : public UJunoActionConfig
{ 
public:
	class UStaticMesh*                                 StaticMesh;                                                 // 0x0038   (0x0008)  
};

/// Class /Script/JunoGameNative.JunoActorAttributeOverrideComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UJunoActorAttributeOverrideComponent : public UFortBuildingActorTagComponent
{ 
public:
	FDataRegistryType                                  AttributeOverrideDataRegistry;                              // 0x00A0   (0x0004)  
	FDataRegistryId                                    DataRegistryItemId;                                         // 0x00A4   (0x0008)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x00AC   (0x000C)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoActorAttributeOverrideComponent.SetupHealthAttributeSet
	// void SetupHealthAttributeSet();                                                                                       // [0xb9e87dc] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoActorAttributeOverrideComponent.GetSecondaryLootTier
	// FName GetSecondaryLootTier();                                                                                         // [0xb9e81f4] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoActorAttributeOverrideComponent.GetPrimaryLootTier
	// FName GetPrimaryLootTier();                                                                                           // [0xb9e81bc] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoActorInstancesReportHandler
/// Size: 0x0028 (0x000028 - 0x000050)
class UJunoActorInstancesReportHandler : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0000   (0x0050)  MISSED
};

/// Class /Script/JunoGameNative.JunoPersistenceFeatureDataActor
/// Size: 0x0040 (0x000290 - 0x0002D0)
class AJunoPersistenceFeatureDataActor : public AInfo
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0290   (0x0028)  MISSED
	FGuid                                              SavedActorGuid;                                             // 0x02B8   (0x0010)  
	int32_t                                            Version;                                                    // 0x02C8   (0x0004)  
	bool                                               bSpawnedByLevelSaveRecord;                                  // 0x02CC   (0x0001)  
	bool                                               bForceDirty;                                                // 0x02CD   (0x0001)  
	bool                                               bDirty;                                                     // 0x02CE   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x02CF   (0x0001)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoPersistenceFeatureDataActor.OnPersistentDataModified
	// void OnPersistentDataModified();                                                                                      // [0x6169b80] Native|Protected|BlueprintCallable 
};

/// Struct /Script/JunoGameNative.SavedAIData_BaseType
/// Size: 0x0001 (0x000000 - 0x000001)
struct FSavedAIData_BaseType
{ 
};

/// Struct /Script/JunoGameNative.SavedGlobalAIData_FTUE
/// Size: 0x0027 (0x000001 - 0x000028)
struct FSavedGlobalAIData_FTUE : FSavedAIData_BaseType
{ 
	FGameplayTag                                       PickedFTUENPC;                                              // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FVector                                            FTUEStartLocation;                                          // 0x0008   (0x0018)  
	bool                                               bFTUEWasEverCompleted;                                      // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/JunoGameNative.SavedGlobalAIData_Rewards
/// Size: 0x004F (0x000001 - 0x000050)
struct FSavedGlobalAIData_Rewards : FSavedAIData_BaseType
{ 
	SDK_UNDEFINED(80,11948) /* TMap<FName, int32_t> */ __um(CountOfRewardedLootTierGroups);                        // 0x0000   (0x0050)  
};

/// Struct /Script/JunoGameNative.SavedGlobalAIData_WorldSettings
/// Size: 0x0002 (0x000001 - 0x000003)
struct FSavedGlobalAIData_WorldSettings : FSavedAIData_BaseType
{ 
	bool                                               bEnableFriendlyCreatures;                                   // 0x0000   (0x0001)  
	bool                                               bEnableHostileCreatures;                                    // 0x0001   (0x0001)  
	bool                                               bEnableFriendlyNPCs;                                        // 0x0002   (0x0001)  
};

/// Struct /Script/JunoGameNative.SavedGlobalAIData_RecruitmentObjectData
/// Size: 0x004F (0x000001 - 0x000050)
struct FSavedGlobalAIData_RecruitmentObjectData : FSavedAIData_BaseType
{ 
	SDK_UNDEFINED(80,11949) /* TMap<FGuid, FJunoRecruitmentObjectAssignedData> */ __um(RecruitmentObjectToAssignedData); // 0x0000   (0x0050)  
};

/// Struct /Script/JunoGameNative.SavedGlobalAIData
/// Size: 0x00D0 (0x000000 - 0x0000D0)
struct FSavedGlobalAIData
{ 
	FSavedGlobalAIData_FTUE                            FTUE;                                                       // 0x0000   (0x0028)  
	FSavedGlobalAIData_Rewards                         Rewards;                                                    // 0x0028   (0x0050)  
	FSavedGlobalAIData_WorldSettings                   WorldSettings;                                              // 0x0078   (0x0003)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x007B   (0x0005)  MISSED
	FSavedGlobalAIData_RecruitmentObjectData           RecruitmentObjectData;                                      // 0x0080   (0x0050)  
};

/// Struct /Script/JunoGameNative.SavedAIDataManager
/// Size: 0x0120 (0x000000 - 0x000120)
struct FSavedAIDataManager
{ 
	SDK_UNDEFINED(80,11950) /* TMap<FGameplayTag, FSavedAIData> */ __um(SavedAIDataPerUniqueAIIdentifier);         // 0x0000   (0x0050)  
	FSavedGlobalAIData                                 SavedGlobalAIData;                                          // 0x0050   (0x00D0)  
};

/// Class /Script/JunoGameNative.JunoAIPersistenceFeatureDataActor
/// Size: 0x0130 (0x0002D0 - 0x000400)
class AJunoAIPersistenceFeatureDataActor : public AJunoPersistenceFeatureDataActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x02D0   (0x0010)  MISSED
	FSavedAIDataManager                                SavedAIData;                                                // 0x02E0   (0x0120)  
};

/// Class /Script/JunoGameNative.JunoAIPersistenceFeatureDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoAIPersistenceFeatureDataInterface : public UInterface
{ 
public:
};

/// Class /Script/JunoGameNative.JunoAIPersistenceFeatureModule
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UJunoAIPersistenceFeatureModule : public UPersistenceFrameworkModule
{ 
public:
};

/// Class /Script/JunoGameNative.JunoBasePFWContainer
/// Size: 0x00A0 (0x000140 - 0x0001E0)
class UJunoBasePFWContainer : public UPersistenceFrameworkContainer
{ 
public:
	unsigned char                                      UnknownData00_1[0xA0];                                      // 0x0140   (0x00A0)  MISSED
};

/// Class /Script/JunoGameNative.JunoBasePFWPersistenceFeatureDataContainer
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoBasePFWPersistenceFeatureDataContainer : public UJunoBasePFWContainer
{ 
public:
};

/// Class /Script/JunoGameNative.JunoAIPersistenceFeatureData_Container
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoAIPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer
{ 
public:
};

/// Class /Script/JunoGameNative.JunoAlterationCraftingComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UJunoAlterationCraftingComponent : public UGameFrameworkComponent
{ 
public:
	SDK_UNDEFINED(8,11951) /* TWeakObjectPtr<UCraftingObjectComponent*> */ __um(CachedCraftingObjectComponent);    // 0x00A0   (0x0008)  
	FDataRegistryType                                  WeaponEssenceDataRegistryType;                              // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00AC   (0x0004)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoAlterationCraftingComponent.OnCraftingSuccess
	// void OnCraftingSuccess(FCraftingObjectSuccessEvent& Event);                                                           // [0xb9eb040] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoAlterationCraftingComponent.OnCheckValidItemType
	// bool OnCheckValidItemType(class AFortPlayerController* Instigator);                                                   // [0x8661964] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoAlterationCraftingComponent.HandleCraftingStateChanged
	// void HandleCraftingStateChanged(FCraftingObjectStateChangedEvent& Event);                                             // [0xb9eafa4] Final|Native|Private|HasOutParms 
};

/// Class /Script/JunoGameNative.JunoAnalytics
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoAnalytics : public UObject
{ 
public:
};

/// Class /Script/JunoGameNative.JunoAnimNotifyState_QueueInput
/// Size: 0x0068 (0x000030 - 0x000098)
class UJunoAnimNotifyState_QueueInput : public UAnimNotifyState
{ 
public:
	bool                                               bQueueMantisInput;                                          // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0031   (0x0007)  MISSED
	FGameplayTagContainer                              GameplayEventTagsToQueue;                                   // 0x0038   (0x0020)  
	FGameplayTagContainer                              AbilityTagsToRemove;                                        // 0x0058   (0x0020)  
	FGameplayTagContainer                              AbilityTagsToAdd;                                           // 0x0078   (0x0020)  
};

/// Class /Script/JunoGameNative.JunoAnimNotifyState_MakeInterruptible
/// Size: 0x0040 (0x000030 - 0x000070)
class UJunoAnimNotifyState_MakeInterruptible : public UAnimNotifyState
{ 
public:
	FGameplayTagContainer                              AbilityTagsToRemove;                                        // 0x0030   (0x0020)  
	FGameplayTagContainer                              AbilityTagsToAdd;                                           // 0x0050   (0x0020)  
};

/// Class /Script/JunoGameNative.JunoAsyncAction_WaitForEventRouter
/// Size: 0x0030 (0x000030 - 0x000060)
class UJunoAsyncAction_WaitForEventRouter : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,11952) /* FMulticastInlineDelegate */ __um(OnGameplayEventRouterAvailable);                   // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0040   (0x0020)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoAsyncAction_WaitForEventRouter.WaitForEventRouter
	// class UJunoAsyncAction_WaitForEventRouter* WaitForEventRouter(class AActor* ContextActor);                            // [0xb9eb2f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoAsyncAction_WaitForEventRouter.onGameplayEventRouterAvailable__DelegateSignature
	// void onGameplayEventRouterAvailable__DelegateSignature(class UGameplayEventRouterComponent* EventRouter);             // [0x3d1d968] MulticastDelegate|Public|Delegate 
};

/// Class /Script/JunoGameNative.JunoBuilderToolSelectedActorInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoBuilderToolSelectedActorInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/JunoGameNative.JunoBuilderToolSelectedActorInterface.ReceiveSpawnedByBuilderTool
	// void ReceiveSpawnedByBuilderTool(class AJunoBuilderTool* BuilderTool, class UJunoBuilderToolInteractionBehavior* Behavior); // [0xb9eb22c] Native|Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuilderToolSelectedActorInterface.ReceiveSelectionSpawnedByBuilderTool
	// void ReceiveSelectionSpawnedByBuilderTool(class AJunoBuilderTool* BuilderTool, class UJunoBuilderToolInteractionBehavior* Behavior, FJunoBuilderToolSelectionSpawnParams& SelectionSpawnParameters); // [0xb9eb0e8] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/JunoGameNative.JunoBuildingAccountItemDefBase
/// Size: 0x0030 (0x000740 - 0x000770)
class UJunoBuildingAccountItemDefBase : public UAthenaCosmeticItemDefinition
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0740   (0x0008)  MISSED
	SDK_UNDEFINED(32,11953) /* TWeakObjectPtr<UClass*> */ __um(BuildingActorClassToPreview);                       // 0x0748   (0x0020)  
	float                                              JunoBuildingFrontendPreviewScale;                           // 0x0768   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x076C   (0x0004)  MISSED
};

/// Class /Script/JunoGameNative.JunoBuildingSetAccountItemDefinition
/// Size: 0x0000 (0x000770 - 0x000770)
class UJunoBuildingSetAccountItemDefinition : public UJunoBuildingAccountItemDefBase
{ 
public:
};

/// Class /Script/JunoGameNative.JunoBuildingPropAccountItemDefinition
/// Size: 0x0000 (0x000770 - 0x000770)
class UJunoBuildingPropAccountItemDefinition : public UJunoBuildingAccountItemDefBase
{ 
public:
};

/// Class /Script/JunoGameNative.JunoBuildingConnectivityBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoBuildingConnectivityBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/JunoGameNative.JunoBuildingConnectivityBlueprintLibrary.GetKnobs
	// TArray<FJunoBuildingConnectionPoint> GetKnobs(FJunoBuildingConnectionPointsResult& Result);                           // [0xb9ed904] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoBuildingConnectivityBlueprintLibrary.GetAtomModelAssetUserData
	// TArray<UAtomModelAssetUserData*> GetAtomModelAssetUserData(class UObject* Object);                                    // [0xb9ed784] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingConnectivityBlueprintLibrary.DebugDrawConnections
	// void DebugDrawConnections(class UObject* WorldContextObject, FJunoBuildingConnectionPointsResult& Candidates, FJunoBuildingConnectionPointsResult& Targets, FJunoBuildingConnection& ChosenConnection, TArray<FJunoBuildingConnection>& Connections); // [0xb9ecd3c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingConnectivityBlueprintLibrary.DebugDrawConnectionLocations
	// void DebugDrawConnectionLocations(class UObject* WorldContextObject, FJunoBuildingConnection& Connection);            // [0xb9ecc58] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoBuildingCosmeticsSettings
/// Size: 0x00D8 (0x000030 - 0x000108)
class UJunoBuildingCosmeticsSettings : public UPrimaryDataAsset
{ 
public:
	SDK_UNDEFINED(32,11954) /* TWeakObjectPtr<UClass*> */ __um(JunoBuildingSetPreviewActorClass);                  // 0x0030   (0x0020)  
	SDK_UNDEFINED(32,11955) /* TWeakObjectPtr<UClass*> */ __um(JunoBuildingPropPreviewActorClass);                 // 0x0050   (0x0020)  
	SDK_UNDEFINED(32,11956) /* TWeakObjectPtr<UClass*> */ __um(JunoBuildingSetPreviewPrefabAssetClass);            // 0x0070   (0x0020)  
	SDK_UNDEFINED(32,11957) /* TWeakObjectPtr<UClass*> */ __um(JunoBuildingPropPreviewPrefabAssetClass);           // 0x0090   (0x0020)  
	FGameplayTag                                       BuildingPartCategoryTag;                                    // 0x00B0   (0x0004)  
	FGameplayTag                                       BuildingPartSubCategoryTag;                                 // 0x00B4   (0x0004)  
	SDK_UNDEFINED(80,11958) /* TMap<FGameplayTag, FText> */ __um(PartCategoryNames);                               // 0x00B8   (0x0050)  
};

/// Class /Script/JunoGameNative.JunoBuildingPreviewPrefabAsset
/// Size: 0x00D0 (0x000290 - 0x000360)
class AJunoBuildingPreviewPrefabAsset : public AActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0290   (0x0010)  MISSED
	FFortUICameraFrameTargetBounds                     CameraFrameTargetBounds;                                    // 0x02A0   (0x0020)  
	float                                              ZoomedInBoundsScale;                                        // 0x02C0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x9C];                                      // 0x02C4   (0x009C)  MISSED
};

/// Class /Script/JunoGameNative.JunoBuildingProp
/// Size: 0x0048 (0x000BC8 - 0x000C10)
class AJunoBuildingProp : public ABuildingProp
{ 
public:
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x0BC8   (0x0020)  MISSED
	class UJunoHarvestingComponent*                    HarvestingComponent;                                        // 0x0BE8   (0x0008)  
	class UJunoPhysicsPersistenceComponent*            PhysicsPersistenceComponent;                                // 0x0BF0   (0x0008)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x0BF8   (0x0010)  MISSED
	class UItemDefinitionBase*                         AssociatedItem;                                             // 0x0C08   (0x0008)  


	/// Functions
	// Function /Script/JunoGameNative.JunoBuildingProp.GetAssociatedItem
	// class UItemDefinitionBase* GetAssociatedItem();                                                                       // [0xbb34c54] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoBuildingPropTree
/// Size: 0x0008 (0x000C10 - 0x000C18)
class AJunoBuildingPropTree : public AJunoBuildingProp
{ 
public:
	class UActorComponent*                             LifeCycleComponent;                                         // 0x0C10   (0x0008)  


	/// Functions
	// Function /Script/JunoGameNative.JunoBuildingPropTree.BlueprintCanDieInLifecyclePhase
	// bool BlueprintCanDieInLifecyclePhase(char CurrentPhaseIndex);                                                         // [0x3d1d968] BlueprintAuthorityOnly|Event|Protected|BlueprintEvent 
};

/// Class /Script/JunoGameNative.JunoCampActor
/// Size: 0x0090 (0x000290 - 0x000320)
class AJunoCampActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x60];                                      // 0x0290   (0x0060)  MISSED
	FGuid                                              SavedActorGuid;                                             // 0x02F0   (0x0010)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0300   (0x0008)  MISSED
	class UOverlapComponent*                           BoundsComponent;                                            // 0x0308   (0x0008)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0310   (0x0010)  MISSED
};

/// Class /Script/JunoGameNative.JunoCampCenterComponent
/// Size: 0x00E0 (0x0000A0 - 0x000180)
class UJunoCampCenterComponent : public UGameFrameworkComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00A0   (0x0008)  MISSED
	SDK_UNDEFINED(16,11959) /* FMulticastInlineDelegate */ __um(OnJunoCampAwesomeLevelChangedDelegate);            // 0x00A8   (0x0010)  
	SDK_UNDEFINED(16,11960) /* FMulticastInlineDelegate */ __um(OnJunoCampAwesomePointModificationDelegate);       // 0x00B8   (0x0010)  
	unsigned char                                      UnknownData01_5[0x30];                                      // 0x00C8   (0x0030)  MISSED
	class UClass*                                      CampActorClassToSpawn;                                      // 0x00F8   (0x0008)  
	FGameplayTag                                       CampCenterDestructionDeathReasonTag;                        // 0x0100   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0104   (0x0004)  MISSED
	class UJunoAsyncAction_WaitForEventRouter*         WaitForEventRouterAction;                                   // 0x0108   (0x0008)  
	FGuid                                              LinkedCampActorID;                                          // 0x0110   (0x0010)  
	unsigned char                                      UnknownData03_6[0x60];                                      // 0x0120   (0x0060)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoCampCenterComponent.OnCampAwesomePointModification
	// void OnCampAwesomePointModification(FJunoEvent_CampAwesomePointsModified& Payload);                                   // [0xb9ee5e4] Final|Native|Protected|HasOutParms 
	// Function /Script/JunoGameNative.JunoCampCenterComponent.OnCampAwesomeLevelChanged
	// void OnCampAwesomeLevelChanged(FJunoEvent_CampAwesomeLevelChanged& Payload);                                          // [0xb9ee54c] Final|Native|Protected|HasOutParms 
	// Function /Script/JunoGameNative.JunoCampCenterComponent.NotifyOwnerPlacedByBuilderTool
	// void NotifyOwnerPlacedByBuilderTool(class AFortPlayerController* FortPC);                                             // [0xb9ee480] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCampCenterComponent.HandleSmartObjectEvent
	// void HandleSmartObjectEvent(FSmartObjectEventData& SmartObjectEventData, class AActor* Actor);                        // [0xb9ee0fc] Final|Native|Private|HasOutParms 
};

/// Class /Script/JunoGameNative.JunoCampComponentBase
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UJunoCampComponentBase : public UGameFrameworkComponent
{ 
public:
};

/// Struct /Script/JunoGameNative.JunoMarker
/// Size: 0x0098 (0x000000 - 0x000098)
struct FJunoMarker
{ 
	FVector                                            Location;                                                   // 0x0000   (0x0018)  
	class UTexture*                                    Icon;                                                       // 0x0018   (0x0008)  
	FColor                                             Color;                                                      // 0x0020   (0x0004)  
	bool                                               bOverrideColor;                                             // 0x0024   (0x0001)  
	bool                                               bEnableMarkerCustomization;                                 // 0x0025   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0026   (0x0002)  MISSED
	float                                              TimeLeft;                                                   // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	FUniqueNetIdRepl                                   AttachedPlayerNetId;                                        // 0x0030   (0x0030)  
	FGuid                                              VolumeId;                                                   // 0x0060   (0x0010)  
	FName                                              SettingsName;                                               // 0x0070   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0074   (0x0004)  MISSED
	class UMaterialInstanceDynamic*                    MaterialInstanceDynamic;                                    // 0x0078   (0x0008)  
	FName                                              IconParamName;                                              // 0x0080   (0x0004)  
	FName                                              ColorParamName;                                             // 0x0084   (0x0004)  
	FDataTableRowHandle                                CustomizationOptionsHandle;                                 // 0x0088   (0x0010)  
};

/// Class /Script/JunoGameNative.JunoMarkerComponent
/// Size: 0x00B0 (0x0000A0 - 0x000150)
class UJunoMarkerComponent : public UActorComponent
{ 
public:
	FJunoMarker                                        Settings;                                                   // 0x00A0   (0x0098)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0138   (0x0010)  MISSED
	bool                                               bShouldCreateMarkerOnStart;                                 // 0x0148   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0149   (0x0007)  MISSED
};

/// Class /Script/JunoGameNative.JunoCampMarkerComponent
/// Size: 0x0000 (0x000150 - 0x000150)
class UJunoCampMarkerComponent : public UJunoMarkerComponent
{ 
public:
};

/// Class /Script/JunoGameNative.JunoCampMembershipActorComponent
/// Size: 0x0088 (0x0000E0 - 0x000168)
class UJunoCampMembershipActorComponent : public UFortAthenaTrackableAIObjectComponent
{ 
public:
	SDK_UNDEFINED(16,11961) /* FMulticastInlineDelegate */ __um(OnJunoCampMembershipChanged);                      // 0x00E0   (0x0010)  
	unsigned char                                      UnknownData00_5[0x18];                                      // 0x00F0   (0x0018)  MISSED
	SDK_UNDEFINED(8,11962) /* TWeakObjectPtr<AJunoCampActor*> */ __um(BoundCamp);                                  // 0x0108   (0x0008)  
	unsigned char                                      UnknownData01_5[0x30];                                      // 0x0110   (0x0030)  MISSED
	FScalableFloat                                     ToleranceForMovementUpdates;                                // 0x0140   (0x0028)  


	/// Functions
	// Function /Script/JunoGameNative.JunoCampMembershipActorComponent.OnRep_BoundCamp
	// void OnRep_BoundCamp();                                                                                               // [0xb9ee67c] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoCampMembershipActorComponent.HasCampAtLocation
	// bool HasCampAtLocation(class UObject* WorldContextObject, FVector& Location);                                         // [0xb9ee378] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCampMembershipActorComponent.HasCampAtBounds
	// bool HasCampAtBounds(class UObject* WorldContextObject, FBox& Bounds);                                                // [0xb9ee2a8] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCampMembershipActorComponent.HandleBoundCampEndPlayEvent
	// void HandleBoundCampEndPlayEvent(class AActor* InOwner, TEnumAsByte<EEndPlayReason> EndPlayReason);                   // [0xb9ee038] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoCampMembershipActorComponent.GetBoundComponent
	// class UActorComponent* GetBoundComponent(class UClass* ComponentClass);                                               // [0xb9ed860] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoCampMembershipActorComponent.GetBoundCamp
	// class AJunoCampActor* GetBoundCamp();                                                                                 // [0xb9ed83c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoCampMembershipActorComponent.FindOrCreateCampMembershipComponentAndReturnComponent
	// class UActorComponent* FindOrCreateCampMembershipComponentAndReturnComponent(class UClass* ComponentClass, class AActor* Owner); // [0xb9ed6a8] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCampMembershipActorComponent.FindOrCreateCampMembershipActorComponentOnActor
	// class UJunoCampMembershipActorComponent* FindOrCreateCampMembershipActorComponentOnActor(class AActor* Owner);        // [0xb9ed628] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCampMembershipActorComponent.FindCampMembershipComponentAndReturnComponent
	// class UActorComponent* FindCampMembershipComponentAndReturnComponent(class UClass* ComponentClass, class AActor* Owner); // [0xb9ed52c] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCampMembershipActorComponent.FindCampMembershipActorComponentOnActor
	// class UJunoCampMembershipActorComponent* FindCampMembershipActorComponentOnActor(class AActor* Owner);                // [0xb9ed4a0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCampMembershipActorComponent.FindBindableLocalCampForLocation
	// class AJunoCampActor* FindBindableLocalCampForLocation(class UObject* WorldContextObject, FVector& Location);         // [0xb9ed398] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCampMembershipActorComponent.FindBindableLocalCampForArea
	// class AJunoCampActor* FindBindableLocalCampForArea(class AActor* Actor, FBox& AreaBox);                               // [0xb9ed24c] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCampMembershipActorComponent.FindBindableLocalCampForActorAndReturnComponent
	// class UActorComponent* FindBindableLocalCampForActorAndReturnComponent(class UClass* ComponentClass, class AActor* Actor); // [0xb9ed154] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCampMembershipActorComponent.FindBindableLocalCampForActor
	// class AJunoCampActor* FindBindableLocalCampForActor(class AActor* Actor);                                             // [0xb9ed0d4] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCampMembershipActorComponent.FindBindableLocalCampAtLocationAndReturnComponent
	// class UActorComponent* FindBindableLocalCampAtLocationAndReturnComponent(class UClass* ComponentClass, class UObject* WorldContextObject, FVector& Location); // [0xb9ecf54] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCampMembershipActorComponent.AttemptToBindToCamp
	// void AttemptToBindToCamp();                                                                                           // [0xb9ecc44] Final|Native|Private 
};

/// Struct /Script/JunoGameNative.AwesomeLevelSaveData
/// Size: 0x0058 (0x000000 - 0x000058)
struct FAwesomeLevelSaveData
{ 
	int32_t                                            AwesomePoints;                                              // 0x0000   (0x0004)  
	int32_t                                            AwesomeLevel;                                               // 0x0004   (0x0004)  
	SDK_UNDEFINED(80,11963) /* TSet<FGuid> */          __um(AwesomePrefabIDs);                                     // 0x0008   (0x0050)  
};

/// Struct /Script/JunoGameNative.AICampManagementSaveData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FAICampManagementSaveData
{ 
	int64_t                                            LastPassiveResourceGatheringSimulatedJunoRealTime;          // 0x0000   (0x0008)  
	int64_t                                            CampCreationTime;                                           // 0x0008   (0x0008)  
	int64_t                                            FirstRecruitedNPCTime;                                      // 0x0010   (0x0008)  
	int64_t                                            LastVisitorsUpdateTime;                                     // 0x0018   (0x0008)  
};

/// Struct /Script/JunoGameNative.NamedPOISaveData
/// Size: 0x00B0 (0x000000 - 0x0000B0)
struct FNamedPOISaveData
{ 
	SDK_UNDEFINED(24,11964) /* FText */                __um(POIName);                                              // 0x0000   (0x0018)  
	FJunoMarker                                        Marker;                                                     // 0x0018   (0x0098)  
};

/// Class /Script/JunoGameNative.JunoCampPersistenceComponent
/// Size: 0x0160 (0x0000A0 - 0x000200)
class UJunoCampPersistenceComponent : public UJunoCampComponentBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x00A0   (0x0020)  MISSED
	FAwesomeLevelSaveData                              AwesomeLevelSaveData;                                       // 0x00C0   (0x0058)  
	FAICampManagementSaveData                          AICampManagementSaveData;                                   // 0x0118   (0x0020)  
	FNamedPOISaveData                                  NamedPOISaveData;                                           // 0x0138   (0x00B0)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x01E8   (0x0018)  MISSED
};

/// Class /Script/JunoGameNative.JunoCampPersistenceFeatureModule
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UJunoCampPersistenceFeatureModule : public UPersistenceFrameworkModule
{ 
public:
};

/// Class /Script/JunoGameNative.JunoCampPersistenceFeatureData_Container
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoCampPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer
{ 
public:
};

/// Struct /Script/JunoGameNative.ActiveCampNPCEntry
/// Size: 0x0088 (0x000000 - 0x000088)
struct FActiveCampNPCEntry
{ 
	FGameplayTag                                       UniqueAIIdentifier;                                         // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(24,11965) /* FText */                __um(DisplayName);                                          // 0x0008   (0x0018)  
	FGameplayTag                                       RoleTag;                                                    // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	SDK_UNDEFINED(32,11966) /* TWeakObjectPtr<UTexture2D*> */ __um(NPCIconSmall);                                  // 0x0028   (0x0020)  
	SDK_UNDEFINED(32,11967) /* TWeakObjectPtr<UTexture2D*> */ __um(NPCIconLarge);                                  // 0x0048   (0x0020)  
	SDK_UNDEFINED(32,11968) /* TWeakObjectPtr<UTexture2D*> */ __um(NPCIconWide);                                   // 0x0068   (0x0020)  
};

/// Class /Script/JunoGameNative.JunoCampRecruitmentComponent
/// Size: 0x0050 (0x0000A0 - 0x0000F0)
class UJunoCampRecruitmentComponent : public UJunoCampComponentBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x40];                                      // 0x00A0   (0x0040)  MISSED
	TArray<FActiveCampNPCEntry>                        ActiveNPCEntries;                                           // 0x00E0   (0x0010)  


	/// Functions
	// Function /Script/JunoGameNative.JunoCampRecruitmentComponent.GetActiveNPCEntries
	// TArray<FActiveCampNPCEntry> GetActiveNPCEntries();                                                                    // [0xb9f0bf0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/JunoGameNative.JunoRecruitmentObjectAssignedData
/// Size: 0x0080 (0x000000 - 0x000080)
struct FJunoRecruitmentObjectAssignedData
{ 
	FGuid                                              CampGuid;                                                   // 0x0000   (0x0010)  
	FGameplayTag                                       UniqueAIIdentifier;                                         // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	FUniqueNetIdRepl                                   PlayerNetId;                                                // 0x0018   (0x0030)  
	SDK_UNDEFINED(24,11969) /* FText */                __um(DisplayText);                                          // 0x0048   (0x0018)  
	SDK_UNDEFINED(32,11970) /* TWeakObjectPtr<UTexture2D*> */ __um(NPCPortrait);                                   // 0x0060   (0x0020)  
};

/// Class /Script/JunoGameNative.JunoCampRecruitmentObjectComponent
/// Size: 0x00E8 (0x0000A0 - 0x000188)
class UJunoCampRecruitmentObjectComponent : public UGameFrameworkComponent
{ 
public:
	SDK_UNDEFINED(16,11971) /* FMulticastInlineDelegate */ __um(OnJunoRecruitmentObjectAssignedChangedDelegate);   // 0x00A0   (0x0010)  
	unsigned char                                      UnknownData00_5[0x18];                                      // 0x00B0   (0x0018)  MISSED
	SDK_UNDEFINED(16,11972) /* FMulticastInlineDelegate */ __um(OnJunoRecruitmentObjectEnableChangeDelegate);      // 0x00C8   (0x0010)  
	bool                                               bIsEnabled;                                                 // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x00D9   (0x0007)  MISSED
	FJunoRecruitmentObjectAssignedData                 CachedAssignedData;                                         // 0x00E0   (0x0080)  
	unsigned char                                      UnknownData02_6[0x28];                                      // 0x0160   (0x0028)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoCampRecruitmentObjectComponent.OnRep_bIsEnabled
	// void OnRep_bIsEnabled();                                                                                              // [0xb9f2674] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoCampRecruitmentObjectComponent.OnRep_AssignedData
	// void OnRep_AssignedData();                                                                                            // [0xb9f25b8] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoCampRecruitmentObjectComponent.IsEnabled
	// bool IsEnabled();                                                                                                     // [0x8471b48] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoCampRecruitmentObjectComponent.IsAssignedToPlayer
	// bool IsAssignedToPlayer();                                                                                            // [0xb9f168c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoCampRecruitmentObjectComponent.IsAssignedToAI
	// bool IsAssignedToAI();                                                                                                // [0x84739fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoCampRecruitmentObjectComponent.HandleOnEmptyRecrutmentObjectInteracted
	// void HandleOnEmptyRecrutmentObjectInteracted(class AFortPlayerController* InteractingController);                     // [0xb9f1600] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCampRecruitmentObjectComponent.HandleDied
	// void HandleDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0xb9f1100] Final|Native|Private|HasDefaults 
	// Function /Script/JunoGameNative.JunoCampRecruitmentObjectComponent.GetAssignedData
	// FJunoRecruitmentObjectAssignedData GetAssignedData();                                                                 // [0xb9f0c0c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoCampRecruitmentObjectComponent.CostlyFindAssignableNPCs
	// bool CostlyFindAssignableNPCs(TArray<FGameplayTag>& OutAssignableNPCs);                                               // [0xb9f0b44] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoCampRecruitmentObjectComponent.AssignToPlayer
	// void AssignToPlayer(class AFortPlayerController* PlayerController, bool bCheckForDuplicateRecruitmentObjects);        // [0xb9f070c] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/JunoGameNative.JunoCampRemovalStatusData
/// Size: 0x000C (0x000000 - 0x00000C)
struct FJunoCampRemovalStatusData
{ 
	bool                                               bIsSoftRemoved;                                             // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              RemainingRealSecondsBeforeHardRemoval;                      // 0x0004   (0x0004)  
	bool                                               bIsInitialized;                                             // 0x0008   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Class /Script/JunoGameNative.JunoCampRemovalStatusComponent
/// Size: 0x0058 (0x0000A0 - 0x0000F8)
class UJunoCampRemovalStatusComponent : public UJunoCampComponentBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x00A0   (0x0010)  MISSED
	FScalableFloat                                     SoftRemovalCampComponentUpdateRate;                         // 0x00B0   (0x0028)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x00D8   (0x0008)  MISSED
	FJunoCampRemovalStatusData                         CampRemovalStatusData;                                      // 0x00E0   (0x000C)  
	unsigned char                                      UnknownData02_6[0xC];                                       // 0x00EC   (0x000C)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoCampRemovalStatusComponent.OnRep_CampRemovalStatusData
	// void OnRep_CampRemovalStatusData();                                                                                   // [0xb9f25cc] Final|Native|Private 
};

/// Class /Script/JunoGameNative.JunoCaveContainerInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoCaveContainerInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/JunoGameNative.JunoCaveContainerInterface.GetCaveEntrances
	// void GetCaveEntrances(TArray<FTransform>& Transforms);                                                                // [0xb9f0c28] Native|Public|HasOutParms|Const 
};

/// Class /Script/JunoGameNative.JunoChaosAudioGameStateComponent
/// Size: 0x02C0 (0x0000A0 - 0x000360)
class UJunoChaosAudioGameStateComponent : public UFortGameStateComponent
{ 
public:
	class UPhysicalMaterial*                           FallbackPhysicalMaterial;                                   // 0x00A0   (0x0008)  
	FName                                              CollisionEventSizeParamName;                                // 0x00A8   (0x0004)  
	FName                                              CollisionTriggerUpdateParamName;                            // 0x00AC   (0x0004)  
	SDK_UNDEFINED(32,11973) /* TWeakObjectPtr<USoundBase*> */ __um(Collision_Loop);                                // 0x00B0   (0x0020)  
	FScalableFloat                                     CollisionMassToSize;                                        // 0x00D0   (0x0028)  
	FScalableFloat                                     CollisionVolumeMultiplier;                                  // 0x00F8   (0x0028)  
	SDK_UNDEFINED(80,11974) /* TMap<UPhysicalMaterial*, FChaosAudioEventSizeSounds> */ __um(CollisionMaterials);   // 0x0120   (0x0050)  
	FName                                              BreakEventSizeParamName;                                    // 0x0170   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0174   (0x0004)  MISSED
	SDK_UNDEFINED(32,11975) /* TWeakObjectPtr<USoundBase*> */ __um(Break_Group_Default);                           // 0x0178   (0x0020)  
	SDK_UNDEFINED(80,11976) /* TMap<UPhysicalMaterial*, USoundBase*> */ __um(BreakGroupMaterialMap);               // 0x0198   (0x0050)  
	FScalableFloat                                     BreakMassToSize;                                            // 0x01E8   (0x0028)  
	FScalableFloat                                     BreakVolumeMultiplier;                                      // 0x0210   (0x0028)  
	SDK_UNDEFINED(80,11977) /* TMap<UPhysicalMaterial*, FChaosAudioEventSizeSounds> */ __um(BreakMaterials);       // 0x0238   (0x0050)  
	SDK_UNDEFINED(80,11978) /* TMap<FGuid, TWeakObjectPtr<UAudioComponent*>> */ __um(CollisionSoundMap);           // 0x0288   (0x0050)  
	SDK_UNDEFINED(80,11979) /* TMap<FGuid, TWeakObjectPtr<UAudioComponent*>> */ __um(BreakSoundMap);               // 0x02D8   (0x0050)  
	class UAudioEventAggregatorSubsystem*              AudioEventAggregatorSubsystem;                              // 0x0328   (0x0008)  
	SDK_UNDEFINED(16,11980) /* TArray<TWeakObjectPtr<USoundBase*>> */ __um(SoftAssets);                            // 0x0330   (0x0010)  
	TArray<class USoundBase*>                          LoadedAssets;                                               // 0x0340   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0350   (0x0010)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoChaosAudioGameStateComponent.UnSubscribeToChaosEventRelayEvents
	// void UnSubscribeToChaosEventRelayEvents();                                                                            // [0xb9f390c] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoChaosAudioGameStateComponent.SubscribeToChaosEventRelayEvents
	// void SubscribeToChaosEventRelayEvents();                                                                              // [0xb9f38f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoChaosAudioGameStateComponent.OnSoundCollisionEvents
	// void OnSoundCollisionEvents(TArray<FSoundCollisionEvent>& SoundCollisionEvents);                                      // [0xb9f2d5c] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoChaosAudioGameStateComponent.OnSoundBreakEvents
	// void OnSoundBreakEvents(TArray<FSoundBreakEvent>& SoundBreakEvents);                                                  // [0xb9f269c] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoChaosAudioGameStateComponent.OnActiveSoundCollisionEventsUpdated
	// void OnActiveSoundCollisionEventsUpdated(TArray<FSoundCollisionEvent>& SoundCollisionEvents);                         // [0xb9f1e78] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoChaosAudioGameStateComponent.OnActiveSoundCollisionEventSoundFinished
	// void OnActiveSoundCollisionEventSoundFinished(class UAudioComponent* Component);                                      // [0xb9f1df8] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoChaosAudioGameStateComponent.OnActiveSoundBreakEventsUpdated
	// void OnActiveSoundBreakEventsUpdated(TArray<FSoundBreakEvent>& SoundBreakEvents);                                     // [0xb9f1738] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoChaosAudioGameStateComponent.OnActiveSoundBreakEventSoundFinished
	// void OnActiveSoundBreakEventSoundFinished(class UAudioComponent* Component);                                          // [0xb9f16b8] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoChaosAudioGameStateComponent.GetSingleChaosEventSound
	// class USoundBase* GetSingleChaosEventSound(TMap<UPhysicalMaterial*, FChaosAudioEventSizeSounds> ChaosEventMaterials, class UPhysicalMaterial* Material, char EventSize); // [0xb9f0d04] Final|Native|Private 
};

/// Class /Script/JunoGameNative.JunoCheatProfilerSubsystem
/// Size: 0x0080 (0x000040 - 0x0000C0)
class UJunoCheatProfilerSubsystem : public UTickableWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x80];                                      // 0x0040   (0x0080)  MISSED
};

/// Class /Script/JunoGameNative.JunoClosedDoorNavArea
/// Size: 0x0000 (0x000048 - 0x000048)
class UJunoClosedDoorNavArea : public UNavArea
{ 
public:
};

/// Class /Script/JunoGameNative.JunoClusterUnionComponent
/// Size: 0x00C0 (0x000740 - 0x000800)
class UJunoClusterUnionComponent : public UClusterUnionComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0xC0];                                      // 0x0740   (0x00C0)  MISSED
};

/// Class /Script/JunoGameNative.JunoComponent_HealthIndicator
/// Size: 0x0040 (0x0000A0 - 0x0000E0)
class UJunoComponent_HealthIndicator : public UPawnComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x00A0   (0x0020)  MISSED
	float                                              Health;                                                     // 0x00C0   (0x0004)  
	float                                              MaxHealth;                                                  // 0x00C4   (0x0004)  
	FVector                                            AttachOffset;                                               // 0x00C8   (0x0018)  


	/// Functions
	// Function /Script/JunoGameNative.JunoComponent_HealthIndicator.OnServerPawnHealthChanged
	// void OnServerPawnHealthChanged();                                                                                     // [0xb9f2688] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoComponent_HealthIndicator.OnRep_MaxHealth
	// void OnRep_MaxHealth();                                                                                               // [0xb9f2630] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoComponent_HealthIndicator.OnRep_Health
	// void OnRep_Health();                                                                                                  // [0xb9f25ec] Final|Native|Protected 
};

/// Class /Script/JunoGameNative.JunoComponent_Stamina
/// Size: 0x0000 (0x0002F0 - 0x0002F0)
class UJunoComponent_Stamina : public UFortComponent_Energy
{ 
public:


	/// Functions
	// Function /Script/JunoGameNative.JunoComponent_Stamina.SetMaxEnergy
	// void SetMaxEnergy(FScalableFloat NewMaxEnergy);                                                                       // [0xb9f378c] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoComponent_Stamina.GetMaxEnergy
	// FScalableFloat GetMaxEnergy();                                                                                        // [0xb9f0cc8] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoConnectableActorInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoConnectableActorInterface : public UInterface
{ 
public:
};

/// Class /Script/JunoGameNative.JunoConnectedActorLevelPlayspaceComponent
/// Size: 0x0000 (0x0000F8 - 0x0000F8)
class UJunoConnectedActorLevelPlayspaceComponent : public UFortPlayspaceComponent
{ 
public:
};

/// Class /Script/JunoGameNative.JunoControllerComponent_AFKHandler
/// Size: 0x0068 (0x0000D0 - 0x000138)
class UJunoControllerComponent_AFKHandler : public UFortControllerComponent_AFKHandler
{ 
public:
	class UDataTable*                                  AFKEventsDataTable;                                         // 0x00D0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x60];                                      // 0x00D8   (0x0060)  MISSED
};

/// Struct /Script/JunoGameNative.JunoIndicatorVisibilityQueryEntry
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoIndicatorVisibilityQueryEntry
{ 
	class AFortPawn*                                   Pawn;                                                       // 0x0008   (0x0008)  
};

/// Class /Script/JunoGameNative.JunoControllerComponent_Indicators
/// Size: 0x0100 (0x0000A8 - 0x0001A8)
class UJunoControllerComponent_Indicators : public UFortControllerComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x00A8   (0x0010)  MISSED
	float                                              ShowDistance;                                               // 0x00B8   (0x0004)  
	float                                              HideDistance;                                               // 0x00BC   (0x0004)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x00C0   (0x0010)  MISSED
	SDK_UNDEFINED(80,11981) /* TSet<AFortPawn*> */     __um(VisiblePawnsCache);                                    // 0x00D0   (0x0050)  
	TArray<FJunoIndicatorVisibilityQueryEntry>         QueryToPawnEntries;                                         // 0x0120   (0x0010)  
	unsigned char                                      UnknownData02_5[0x60];                                      // 0x0130   (0x0060)  MISSED
	float                                              BuildingHealthBarDisplayMaxDuration;                        // 0x0190   (0x0004)  
	SDK_UNDEFINED(8,11982) /* TWeakObjectPtr<ABuildingActor*> */ __um(JunoBuildingActor);                          // 0x0194   (0x0008)  
	unsigned char                                      UnknownData03_6[0xC];                                       // 0x019C   (0x000C)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoControllerComponent_Indicators.OnAnyFortPawnDestroyed
	// void OnAnyFortPawnDestroyed(class AActor* FortPawnActor);                                                             // [0xb9f2538] Final|Native|Private 
};

/// Class /Script/JunoGameNative.JunoControllerComponent_MapMarker
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UJunoControllerComponent_MapMarker : public UFortControllerComponent
{ 
public:


	/// Functions
	// Function /Script/JunoGameNative.JunoControllerComponent_MapMarker.ServerCreateMarker
	// void ServerCreateMarker(FGuid Guid, FJunoMarker NewMarker, FText DisplayName);                                        // [0xb9f341c] Net|NetReliableNative|Event|Public|NetServer|HasDefaults 
	// Function /Script/JunoGameNative.JunoControllerComponent_MapMarker.ClientRequestCustomization
	// void ClientRequestCustomization(FGuid Guid, FJunoMarker NewMarker, FText DisplayName);                                // [0xb9f07d4] Net|NetReliableNative|Event|Public|HasDefaults|NetClient 
};

/// Class /Script/JunoGameNative.JunoControllerComponent_SocialSim
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UJunoControllerComponent_SocialSim : public UFortControllerComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x00A8   (0x0010)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoControllerComponent_SocialSim.Server_TriggerVillageSelfDestruct
	// void Server_TriggerVillageSelfDestruct();                                                                             // [0x80d7358] RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoControllerComponent_SocialSim.Server_TriggerAwesomeLevelChange
	// void Server_TriggerAwesomeLevelChange(class AFortPlayerController* TriggeringPlayer);                                 // [0x894cee8] RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoControllerComponent_SocialSim.OnJunoPlayerPersistenceDataAvailable
	// void OnJunoPlayerPersistenceDataAvailable(FUniqueNetIdRepl& UniquePlayerId, FJunoPlayerSaveData& SaveData);           // [0xb9f5764] Final|Native|Private|HasOutParms 
};

/// Class /Script/JunoGameNative.JunoCraftingAnalytics
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoCraftingAnalytics : public UObject
{ 
public:
};

/// Class /Script/JunoGameNative.JunoCraftingGameplayAbility
/// Size: 0x0000 (0x000B60 - 0x000B60)
class UJunoCraftingGameplayAbility : public UFortGameplayAbility
{ 
public:
};

/// Struct /Script/JunoGameNative.JunoInventoryGroupConfig
/// Size: 0x0060 (0x000000 - 0x000060)
struct FJunoInventoryGroupConfig
{ 
	FGameplayTag                                       GroupType;                                                  // 0x0000   (0x0004)  
	uint32_t                                           NumItemRows;                                                // 0x0004   (0x0004)  
	uint32_t                                           NumItemColumns;                                             // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	SDK_UNDEFINED(80,11983) /* TMap<int32_t, FGameplayTagContainer> */ __um(SlotTagMap);                           // 0x0010   (0x0050)  
};

/// Struct /Script/JunoGameNative.JunoInventoryConfig
/// Size: 0x0018 (0x000000 - 0x000018)
struct FJunoInventoryConfig
{ 
	TArray<FJunoInventoryGroupConfig>                  InventoryGroupConfigs;                                      // 0x0000   (0x0010)  
	FGameplayTag                                       GameplayTag;                                                // 0x0010   (0x0004)  
	bool                                               bIsPersistent;                                              // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/JunoGameNative.JunoInventoryHandle
/// Size: 0x0024 (0x000000 - 0x000024)
struct FJunoInventoryHandle
{ 
	FGuid                                              Guid;                                                       // 0x0000   (0x0010)  
	SDK_UNDEFINED(8,11984) /* TWeakObjectPtr<AJunoInventory*> */ __um(Inventory);                                  // 0x0010   (0x0008)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0018   (0x000C)  MISSED
};

/// Struct /Script/JunoGameNative.JunoItemSlot
/// Size: 0x0044 (0x00000C - 0x000050)
struct FJunoItemSlot : FFastArraySerializerItem
{ 
	FGameplayTag                                       GroupTag;                                                   // 0x000C   (0x0004)  
	FGameplayTagContainer                              SlotTags;                                                   // 0x0010   (0x0020)  
	int32_t                                            RowIndex;                                                   // 0x0030   (0x0004)  
	int32_t                                            ColumnIndex;                                                // 0x0034   (0x0004)  
	FGuid                                              ItemGuid;                                                   // 0x0038   (0x0010)  
	class UFortItem*                                   Item;                                                       // 0x0048   (0x0008)  
};

/// Struct /Script/JunoGameNative.JunoReplicatedItemSlotList
/// Size: 0x0020 (0x000108 - 0x000128)
struct FJunoReplicatedItemSlotList : FFastArraySerializer
{ 
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0108   (0x0010)  MISSED
	TArray<FJunoItemSlot>                              ItemSlots;                                                  // 0x0118   (0x0010)  
};

/// Struct /Script/JunoGameNative.JunoSelectedSlotData
/// Size: 0x000C (0x000000 - 0x00000C)
struct FJunoSelectedSlotData
{ 
	FGameplayTag                                       GroupTag;                                                   // 0x0000   (0x0004)  
	int32_t                                            RowIndex;                                                   // 0x0004   (0x0004)  
	int32_t                                            ColumnIndex;                                                // 0x0008   (0x0004)  
};

/// Class /Script/JunoGameNative.JunoInventoryComponent
/// Size: 0x0278 (0x0000A0 - 0x000318)
class UJunoInventoryComponent : public UGameFrameworkComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x70];                                      // 0x00A0   (0x0070)  MISSED
	FJunoInventoryConfig                               InventoryConfig;                                            // 0x0110   (0x0018)  
	FName                                              InventoryLootTierGroup;                                     // 0x0128   (0x0004)  
	bool                                               bShouldDropContentsOnOwnerDeath;                            // 0x012C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x012D   (0x0003)  MISSED
	float                                              LootTossSpeed;                                              // 0x0130   (0x0004)  
	float                                              LootTossAngle;                                              // 0x0134   (0x0004)  
	FJunoInventoryHandle                               InventoryHandle;                                            // 0x0138   (0x0024)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x015C   (0x0004)  MISSED
	SDK_UNDEFINED(80,11985) /* TMap<FGameplayTag, FJunoItemSlotGroup> */ __um(ItemSlotGroups);                     // 0x0160   (0x0050)  
	FJunoReplicatedItemSlotList                        ReplicatedItemSlotData;                                     // 0x01B0   (0x0128)  
	SDK_UNDEFINED(16,11986) /* FMulticastInlineDelegate */ __um(OnInventoryChangedEvent);                          // 0x02D8   (0x0010)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x02E8   (0x0008)  MISSED
	TArray<FJunoSelectedSlotData>                      SelectedItemGroupSlots;                                     // 0x02F0   (0x0010)  
	unsigned char                                      UnknownData04_6[0x18];                                      // 0x0300   (0x0018)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoInventoryComponent.UseOffHandDurability
	// void UseOffHandDurability(float DurabilityPerUse);                                                                    // [0xbaa0c14] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoInventoryComponent.ServerTakeItem
	// void ServerTakeItem(FJunoTakeItemRequest Request);                                                                    // [0xba9fe64] RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/JunoGameNative.JunoInventoryComponent.ServerMoveAllItemsPossible
	// void ServerMoveAllItemsPossible(class UJunoInventoryComponent* SourceInventoryComponent, class UJunoInventoryComponent* DestinationInventoryComponent, TArray<FGameplayTag> SourceGroupTags, TArray<FGameplayTag> DestinationGroupTags); // [0xba9fcf8] RequiredAPI|Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/JunoGameNative.JunoInventoryComponent.ServerMergeAllItemsPossible
	// void ServerMergeAllItemsPossible(class AActor* TargetInventoryActor);                                                 // [0xba9fc74] RequiredAPI|Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/JunoGameNative.JunoInventoryComponent.ServerAttemptItemTransfer
	// void ServerAttemptItemTransfer(FJunoItemTransferRequest Request);                                                     // [0xba9fafc] RequiredAPI|Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/JunoGameNative.JunoInventoryComponent.ServerAttemptItemMerge
	// void ServerAttemptItemMerge(FJunoItemSlot SourceItemSlot, FJunoItemSlot DestinationItemSlot, class AActor* SourceInventoryActor, class AActor* DestinationInventoryActor, int32_t Count); // [0xba9f548] RequiredAPI|Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/JunoGameNative.JunoInventoryComponent.RemoveItemFromInventory
	// bool RemoveItemFromInventory(FGuid ItemGuid, int32_t Count);                                                          // [0xba9f338] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoInventoryComponent.OnRep_InventoryHandle
	// void OnRep_InventoryHandle();                                                                                         // [0xba9f0ec] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoInventoryComponent.OnOwningBuildingActorKilled
	// void OnOwningBuildingActorKilled(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* HitComponent, FName BoneName, FVector Momentum); // [0x865e4f4] Final|Native|Private|HasDefaults 
	// Function /Script/JunoGameNative.JunoInventoryComponent.OnInventoryChangedEvent__DelegateSignature
	// void OnInventoryChangedEvent__DelegateSignature(TArray<UFortItem*>& AddedItems, TArray<UFortItem*>& RemovedItems);    // [0x3d1d968] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/JunoGameNative.JunoInventoryComponent.GetOffhandItem
	// class UFortItem* GetOffhandItem();                                                                                    // [0xba9ef94] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoInventoryComponent.GetInventoryItemsInGroups
	// TArray<UFortWorldItem*> GetInventoryItemsInGroups(TArray<FGameplayTag>& Groups);                                      // [0xba9ed44] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoInventoryComponent.GetInventoryItems
	// TArray<UFortWorldItem*> GetInventoryItems();                                                                          // [0xba9ed04] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoInventoryComponent.ClientMoveAllItemsPossibleComplete
	// void ClientMoveAllItemsPossibleComplete();                                                                            // [0x2e6c604] RequiredAPI|Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/JunoGameNative.JunoInventoryComponent.ClientMergeAllItemsPossibleComplete
	// void ClientMergeAllItemsPossibleComplete();                                                                           // [0x3841600] RequiredAPI|Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/JunoGameNative.JunoInventoryComponent.AddItemToInventory
	// class UFortItem* AddItemToInventory(class UFortItemDefinition* ItemDefinition, int32_t Count);                        // [0xba9db08] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoCraftingInventoryComponent
/// Size: 0x0000 (0x000318 - 0x000318)
class UJunoCraftingInventoryComponent : public UJunoInventoryComponent
{ 
public:
};

/// Class /Script/JunoGameNative.JunoCraftingLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoCraftingLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/JunoGameNative.JunoCraftingLibrary.MakePerPlayerCraftingKey
	// FCraftingMultiKey MakePerPlayerCraftingKey(class AActor* Instigator);                                                 // [0xb9f5664] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoCraftingLibrary.FindRecipesCraftableFrom
	// TArray<FName> FindRecipesCraftableFrom(class UObject* WorldContextObject, TArray<FItemAndCount>& Ingredients);        // [0xb9f4f80] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoDeleteActionsReportHandler
/// Size: 0x0018 (0x000028 - 0x000040)
class UJunoDeleteActionsReportHandler : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0000   (0x0040)  MISSED
};

/// Class /Script/JunoGameNative.JunoDeltasSaveHandler
/// Size: 0x00F0 (0x000028 - 0x000118)
class UJunoDeltasSaveHandler : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x110];                                     // 0x0000   (0x0110)  MISSED
	class UDeltaFileSaveHandler*                       SaveHandler;                                                // 0x0110   (0x0008)  
};

/// Class /Script/JunoGameNative.JunoDestructionBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoDestructionBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/JunoGameNative.JunoDestructionBlueprintLibrary.SetGeometryCollectionSourceFromAtomModel
	// void SetGeometryCollectionSourceFromAtomModel(class UGeometryCollection* GeometryCollection, class UAtomModel* AtomModel, FName SelectionSetFilter); // [0xb9f5bc8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoDestructionBlueprintLibrary.SetGeometryCollectionMaterialForInstancedMeshes
	// void SetGeometryCollectionMaterialForInstancedMeshes(class UGeometryCollection* GeometryCollection, class UMaterialInterface* OpaqueMaterial, class UMaterialInterface* TransparentMaterial, class UMaterialInterface* GlitterMaterial, class UMaterialInterface* OpalMaterial, class UMaterialInterface* InternalGlowMaterial); // [0xb9f5a2c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoDestructionBlueprintLibrary.GetGeometryCollectionSource
	// TArray<FGeometryCollectionSource> GetGeometryCollectionSource(class UAtomModel* AtomModel, FName SelectionSetFilter); // [0xb9f528c] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoDumpWorldPersistentContents
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoDumpWorldPersistentContents : public UInterface
{ 
public:
};

/// Class /Script/JunoGameNative.JunoEncounterCheatInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoEncounterCheatInterface : public UInterface
{ 
public:
};

/// Class /Script/JunoGameNative.JunoEssenceLevelComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UJunoEssenceLevelComponent : public UFortWeaponComponent
{ 
public:


	/// Functions
	// Function /Script/JunoGameNative.JunoEssenceLevelComponent.OnEquip
	// void OnEquip(class AFortWeapon* Weapon);                                                                              // [0xb9f56e4] Final|Native|Protected 
};

/// Class /Script/JunoGameNative.JunoEventLimiterInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoEventLimiterInterface : public UInterface
{ 
public:
};

/// Class /Script/JunoGameNative.JunoEventRouterLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoEventRouterLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/JunoGameNative.JunoEventRouterLibrary.GetGameplayEventRouter
	// class UGameplayEventRouterComponent* GetGameplayEventRouter(class AActor* ContextActor);                              // [0xb9f520c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/JunoGameNative.JunoExampleMacroGenerated_CheatTestSetup
/// Size: 0x0048 (0x000030 - 0x000078)
class UJunoExampleMacroGenerated_CheatTestSetup : public UPFWCheatTestSetup
{ 
public:
	unsigned char                                      UnknownData00_3[0x38];                                      // 0x0030   (0x0038)  MISSED
	class UJunoExample_InGameClass*                    InGameClass;                                                // 0x0068   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0070   (0x0008)  MISSED
};

/// Class /Script/JunoGameNative.JunoExampleMacroGenerated_Container
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoExampleMacroGenerated_Container : public UJunoBasePFWContainer
{ 
public:
};

/// Class /Script/JunoGameNative.JunoExample_CheatTestSetup
/// Size: 0x0048 (0x000030 - 0x000078)
class UJunoExample_CheatTestSetup : public UPFWCheatTestSetup
{ 
public:
	unsigned char                                      UnknownData00_3[0x38];                                      // 0x0030   (0x0038)  MISSED
	class UJunoExample_InGameClass*                    InGameClass;                                                // 0x0068   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0070   (0x0008)  MISSED
};

/// Class /Script/JunoGameNative.JunoExample_Container
/// Size: 0x0008 (0x0001E0 - 0x0001E8)
class UJunoExample_Container : public UJunoBasePFWContainer
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x01E0   (0x0008)  MISSED
};

/// Class /Script/JunoGameNative.JunoExample_InGameClass
/// Size: 0x0008 (0x000028 - 0x000030)
class UJunoExample_InGameClass : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	int32_t                                            PersistentData;                                             // 0x0028   (0x0004)  
	int32_t                                            TransientData;                                              // 0x002C   (0x0004)  
};

/// Class /Script/JunoGameNative.JunoExample_Module
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UJunoExample_Module : public UPersistenceFrameworkModule
{ 
public:
};

/// Class /Script/JunoGameNative.JunoFilteredEventContextCollector
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoFilteredEventContextCollector : public UFilteredEventContextCollectorBase
{ 
public:
};

/// Class /Script/JunoGameNative.JunoFogOfWarPersistenceFeatureModule
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UJunoFogOfWarPersistenceFeatureModule : public UPersistenceFrameworkModule
{ 
public:
};

/// Class /Script/JunoGameNative.JunoFogOfWarPersistenceFeatureData_Container
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoFogOfWarPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer
{ 
public:
};

/// Class /Script/JunoGameNative.JunoFreeBuildBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoFreeBuildBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/JunoGameNative.JunoFreeBuildBlueprintLibrary.IsPlayerAllowedToFly
	// bool IsPlayerAllowedToFly(class UObject* WorldContextObject);                                                         // [0xb9f55c4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoFreeBuildBlueprintLibrary.IsItemSpawnerEnabled
	// bool IsItemSpawnerEnabled(class UObject* WorldContextObject);                                                         // [0xb9f5514] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoFreeBuildBlueprintLibrary.IsFreeBuildEnabled
	// bool IsFreeBuildEnabled(class UObject* WorldContextObject);                                                           // [0xb9f547c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoFreeBuildBlueprintLibrary.IsFreeBuildCostFilteringEnabled
	// bool IsFreeBuildCostFilteringEnabled(class UObject* WorldContextObject);                                              // [0xb9f53dc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoFreeBuildBlueprintLibrary.GetFreeBuildSpawnableItems
	// TArray<FName> GetFreeBuildSpawnableItems(class UObject* WorldContextObject);                                          // [0xb9f5178] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoFreeBuildBlueprintLibrary.GetFreeBuildSpawnableItemDefinition
	// class UFortItemDefinition* GetFreeBuildSpawnableItemDefinition(class UObject* WorldContextObject, FName& Name);       // [0xb9f50a8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoFreeBuildComponent
/// Size: 0x0030 (0x0000A0 - 0x0000D0)
class UJunoFreeBuildComponent : public UGameFrameworkComponent
{ 
public:
	FDataRegistryType                                  SpawnableItemsRegistryType;                                 // 0x00A0   (0x0004)  
	bool                                               bIsFreeBuildEnabled;                                        // 0x00A4   (0x0001)  
	bool                                               bIsItemSpawnerEnabled;                                      // 0x00A5   (0x0001)  
	bool                                               bIsPlayerAllowedToFly;                                      // 0x00A6   (0x0001)  
	bool                                               bIsFreeBuildCostFilteringEnabled;                           // 0x00A7   (0x0001)  
	bool                                               bWasFreeBuildEverEnabled;                                   // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x27];                                      // 0x00A9   (0x0027)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoFreeBuildComponent.WasFreeBuildEverEnabled
	// bool WasFreeBuildEverEnabled();                                                                                       // [0xb2dfbe4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoFreeBuildComponent.OnRep_WasFreeBuildEverEnabled
	// void OnRep_WasFreeBuildEverEnabled();                                                                                 // [0xb9f5a18] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoFreeBuildComponent.OnRep_IsFreeBuildEnabled
	// void OnRep_IsFreeBuildEnabled();                                                                                      // [0xb9f59e4] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoFreeBuildComponent.OnRep_AnyFreeBuildFlag
	// void OnRep_AnyFreeBuildFlag();                                                                                        // [0xb9f59d0] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoFreeBuildComponent.OnPlaylistDataReady
	// void OnPlaylistDataReady(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, FGameplayTagContainer& PlaylistContextTags); // [0xb9f58a0] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoFreeBuildComponent.IsPlayerAllowedToFly
	// bool IsPlayerAllowedToFly();                                                                                          // [0xb9f5644] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoFreeBuildComponent.IsItemSpawnerEnabled
	// bool IsItemSpawnerEnabled();                                                                                          // [0xb9f55a4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoFreeBuildComponent.IsFreeBuildEnabled
	// bool IsFreeBuildEnabled();                                                                                            // [0xb9f54fc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoFreeBuildComponent.IsFreeBuildCostFilteringEnabled
	// bool IsFreeBuildCostFilteringEnabled();                                                                               // [0xb9f545c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoFreeBuildComponent.GetSpawnableItems
	// TArray<FName> GetSpawnableItems();                                                                                    // [0xb9f539c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoFreeBuildComponent.EnableFreeBuild
	// void EnableFreeBuild();                                                                                               // [0xb9f4f6c] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoFreeBuildComponent.DisableFreeBuild
	// void DisableFreeBuild();                                                                                              // [0xb9f4f58] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoBasePFWPersistenceFeatureData
/// Size: 0x0018 (0x000028 - 0x000040)
class UJunoBasePFWPersistenceFeatureData : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x38];                                      // 0x0000   (0x0038)  MISSED
	bool                                               bDirty;                                                     // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0039   (0x0007)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoBasePFWPersistenceFeatureData.OnPersistentDataModified
	// void OnPersistentDataModified();                                                                                      // [0x610dcc8] RequiredAPI|Native|Protected|BlueprintCallable 
};

/// Struct /Script/JunoGameNative.JunoFreeBuildSaveData
/// Size: 0x0002 (0x000000 - 0x000002)
struct FJunoFreeBuildSaveData
{ 
	bool                                               bIsFreeBuildSaved;                                          // 0x0000   (0x0001)  
	bool                                               bWasFreeBuildEverSaved;                                     // 0x0001   (0x0001)  
};

/// Class /Script/JunoGameNative.JunoFreeBuildPersistenceFeatureData
/// Size: 0x0018 (0x000040 - 0x000058)
class UJunoFreeBuildPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0040   (0x0010)  MISSED
	FJunoFreeBuildSaveData                             FreeBuildSaveData;                                          // 0x0050   (0x0002)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0052   (0x0006)  MISSED
};

/// Class /Script/JunoGameNative.JunoFreeBuildPersistenceFeatureDataActor
/// Size: 0x0018 (0x0002D0 - 0x0002E8)
class AJunoFreeBuildPersistenceFeatureDataActor : public AJunoPersistenceFeatureDataActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x02D0   (0x0010)  MISSED
	FJunoFreeBuildSaveData                             FreeBuildSaveData;                                          // 0x02E0   (0x0002)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x02E2   (0x0006)  MISSED
};

/// Class /Script/JunoGameNative.JunoFreeBuildPersistenceFeatureModule
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UJunoFreeBuildPersistenceFeatureModule : public UPersistenceFrameworkModule
{ 
public:
};

/// Class /Script/JunoGameNative.JunoFreeBuildPersistenceFeatureData_Container
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoFreeBuildPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer
{ 
public:
};

/// Class /Script/JunoGameNative.JunoGameStateComponent_WorldReactionsManager
/// Size: 0x0050 (0x000318 - 0x000368)
class UJunoGameStateComponent_WorldReactionsManager : public UFortGameStateComponent_WorldReactionsManager
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0318   (0x0050)  MISSED
};

/// Class /Script/JunoGameNative.JunoGameStateSettings
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UJunoGameStateSettings : public UGameStateComponent
{ 
public:
	class UJunoRuntimeSettings*                        PreOverrideRuntimeSettings;                                 // 0x00A0   (0x0008)  
};

/// Class /Script/JunoGameNative.JunoRuntimeSettings
/// Size: 0x0008 (0x000030 - 0x000038)
class UJunoRuntimeSettings : public UDeveloperSettings
{ 
public:
	bool                                               bPawnsUseProbeCollision;                                    // 0x0030   (0x0001)  
	bool                                               bCharacterBasedMovementIgnorePhysicsBase;                   // 0x0031   (0x0001)  
	bool                                               bCharacterStayBasedInAir;                                   // 0x0032   (0x0001)  
	bool                                               bBuoyancyEnabled;                                           // 0x0033   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/JunoGameNative.JunoGameStateTemperatureComponent
/// Size: 0x00C0 (0x0000A0 - 0x000160)
class UJunoGameStateTemperatureComponent : public UGameStateComponent
{ 
public:
	SDK_UNDEFINED(80,11987) /* TMap<FGameplayTag, FScalableFloat> */ __um(TemperatureToFloatMap);                  // 0x00A0   (0x0050)  
	SDK_UNDEFINED(80,11988) /* TMap<FGameplayTag, FScalableFloat> */ __um(TemperatureThresholdsMap);               // 0x00F0   (0x0050)  
	FFloatRange                                        TemperatureRange;                                           // 0x0140   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0150   (0x0010)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoGameStateTemperatureComponent.TemperatureToFloat
	// float TemperatureToFloat(FGameplayTag& Temperature);                                                                  // [0xb9f85e4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGameStateTemperatureComponent.GetTemperatureRanges
	// TArray<FTemperatureRange> GetTemperatureRanges();                                                                     // [0xb9f7568] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGameStateTemperatureComponent.GetMinimumTemperature
	// float GetMinimumTemperature();                                                                                        // [0xb9f7548] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGameStateTemperatureComponent.GetMaximumTemperature
	// float GetMaximumTemperature();                                                                                        // [0xb9f7528] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoGameStateWeatherComponent
/// Size: 0x0030 (0x0000A0 - 0x0000D0)
class UJunoGameStateWeatherComponent : public UGameStateComponent
{ 
public:
	class UDataTable*                                  SeasonTable;                                                // 0x00A0   (0x0008)  
	class UClass*                                      LocalizedWeatherStateSubclass;                              // 0x00A8   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x00B0   (0x0008)  MISSED
	class UJunoPlayspacePersistenceFeatureHelper*      WeatherPersistenceFeatureHelper;                            // 0x00B8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x00C0   (0x0010)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoGameStateWeatherComponent.TransitionWeatherNowTo
	// void TransitionWeatherNowTo(FJunoWeatherPhase& NewWeatherPhase, FJunoWeatherPhase& NewNextWeatherPhase, FJunoWeatherLocation OptionalLocation); // [0xb9f873c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGameStateWeatherComponent.TransitionWeatherNow
	// void TransitionWeatherNow(FName OptionalLocation);                                                                    // [0xb9f86bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGameStateWeatherComponent.SetAutoTransitioning
	// void SetAutoTransitioning(bool bAutoTransitionWeather);                                                               // [0xb9f7c90] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGameStateWeatherComponent.OnWeatherPhaseChanged
	// void OnWeatherPhaseChanged(class UJunoWeatherStateComponent* WeatherState);                                           // [0x5decebc] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoGameStateWeatherComponent.OnNextWeatherQueueChanged
	// void OnNextWeatherQueueChanged(class UJunoWeatherStateComponent* WeatherState);                                       // [0x5decebc] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoGameStateWeatherComponent.IsAutoTransitioning
	// bool IsAutoTransitioning();                                                                                           // [0x7bf1d2c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGameStateWeatherComponent.HandleWeatherStatesSetup
	// void HandleWeatherStatesSetup(TArray<UJunoWeatherStateComponent*>& WeatherStates);                                    // [0x3d1d968] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoGameStateWeatherComponent.GetWeatherStates
	// TArray<UJunoWeatherStateComponent*> GetWeatherStates();                                                               // [0xb9f75a4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGameStateWeatherComponent.ForceWeatherState
	// void ForceWeatherState(FName NewWeatherType, FName OptionalLocation);                                                 // [0xb9f7464] Native|Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoGameStateWeatherComponent.FindWeatherState
	// class UJunoWeatherStateComponent* FindWeatherState(FJunoWeatherLocation& Location);                                   // [0xb9f7348] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/JunoGameNative.JunoGeneratePersistenceAssetsReportCommandlet
/// Size: 0x0000 (0x000080 - 0x000080)
class UJunoGeneratePersistenceAssetsReportCommandlet : public UCommandlet
{ 
public:
};

/// Struct /Script/JunoGameNative.JunoGeometryCollectionAssemblerTargetData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FJunoGeometryCollectionAssemblerTargetData
{ 
	float                                              TargetRatio;                                                // 0x0000   (0x0004)  
	float                                              ForcedStartRatio;                                           // 0x0004   (0x0004)  
};

/// Class /Script/JunoGameNative.JunoGeometryCollectionAssemblerComponent
/// Size: 0x0180 (0x0000A0 - 0x000220)
class UJunoGeometryCollectionAssemblerComponent : public UActorComponent
{ 
public:
	float                                              AssemblyRatioInterpSpeed;                                   // 0x00A0   (0x0004)  
	EJunoGeometryCollectionAssemblerDurationType       DurationType;                                               // 0x00A4   (0x0004)  
	float                                              LayerHeight;                                                // 0x00A8   (0x0004)  
	int32_t                                            LayerCount;                                                 // 0x00AC   (0x0004)  
	FScalableFloat                                     TimeToAssemble;                                             // 0x00B0   (0x0028)  
	FScalableFloat                                     SingleGeometryTimeToAssemble;                               // 0x00D8   (0x0028)  
	FScalableFloat                                     DisassembledZDistance;                                      // 0x0100   (0x0028)  
	FScalableFloat                                     DisassembledZDistanceRandomRatio;                           // 0x0128   (0x0028)  
	FScalableFloat                                     DisassembledRotationAmount;                                 // 0x0150   (0x0028)  
	bool                                               bFreeMemoryWhenNotAnimating;                                // 0x0178   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0179   (0x0007)  MISSED
	SDK_UNDEFINED(80,11989) /* TMap<UGeometryCollectionComponent*, FJunoGeometryCollectionAssemblerGCInfo> */ __um(GeometryCollectionInfos); // 0x0180   (0x0050)  
	SDK_UNDEFINED(16,11990) /* FMulticastInlineDelegate */ __um(OnAssemblyVisualsAnimationStart);                  // 0x01D0   (0x0010)  
	SDK_UNDEFINED(16,11991) /* FMulticastInlineDelegate */ __um(OnAssemblyVisualsAnimationUpdated);                // 0x01E0   (0x0010)  
	SDK_UNDEFINED(16,11992) /* FMulticastInlineDelegate */ __um(OnAssemblyVisualsAnimationEnd);                    // 0x01F0   (0x0010)  
	FJunoGeometryCollectionAssemblerTargetData         TargetData;                                                 // 0x0200   (0x0008)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0208   (0x0018)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoGeometryCollectionAssemblerComponent.SetFreeMemoryWhenNotAnimating
	// void SetFreeMemoryWhenNotAnimating(bool bValue);                                                                      // [0xb9f7d10] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGeometryCollectionAssemblerComponent.OnRep_TargetData
	// void OnRep_TargetData();                                                                                              // [0xb9f77a4] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoGeometryCollectionAssemblerComponent.IsUpdating
	// bool IsUpdating();                                                                                                    // [0x62c2794] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGeometryCollectionAssemblerComponent.IsDisassembling
	// bool IsDisassembling();                                                                                               // [0xb9f774c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGeometryCollectionAssemblerComponent.IsDisassembled
	// bool IsDisassembled();                                                                                                // [0xb9f772c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGeometryCollectionAssemblerComponent.IsAssembling
	// bool IsAssembling();                                                                                                  // [0xb9f7708] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGeometryCollectionAssemblerComponent.IsAssembled
	// bool IsAssembled();                                                                                                   // [0xb9f76e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGeometryCollectionAssemblerComponent.IsActorAssembled
	// bool IsActorAssembled(class AActor* Actor);                                                                           // [0xb9f7610] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGeometryCollectionAssemblerComponent.GetAssemblyRatio
	// float GetAssemblyRatio();                                                                                             // [0x60f2944] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoGuidedBuildingBCOInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoGuidedBuildingBCOInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/JunoGameNative.JunoGuidedBuildingBCOInterface.SetParentGuidedBuilding
	// void SetParentGuidedBuilding(class AJunoGuidedBuildingActor* OurGuidedBuild);                                         // [0x3d1d968] Event|Public|BlueprintEvent 
};

/// Struct /Script/JunoGameNative.JunoInputMapping
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoInputMapping
{ 
	class UInputMappingContext*                        Context;                                                    // 0x0000   (0x0008)  
	int32_t                                            Priority;                                                   // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/JunoGameNative.JunoInputAlternateDisplayText
/// Size: 0x0028 (0x000000 - 0x000028)
struct FJunoInputAlternateDisplayText
{ 
	class UInputAction*                                InputAction;                                                // 0x0000   (0x0008)  
	FName                                              ActionName;                                                 // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	SDK_UNDEFINED(24,11993) /* FText */                __um(DisplayText);                                          // 0x0010   (0x0018)  
};

/// Class /Script/JunoGameNative.JunoInputMappingComponent
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class UJunoInputMappingComponent : public UGameFrameworkComponent
{ 
public:
	bool                                               bPopDefaultContext;                                         // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00A1   (0x0007)  MISSED
	FJunoInputMapping                                  DesiredInputMapping;                                        // 0x00A8   (0x0010)  
	TArray<FJunoInputAlternateDisplayText>             DisplayTexts;                                               // 0x00B8   (0x0010)  


	/// Functions
	// Function /Script/JunoGameNative.JunoInputMappingComponent.PushContext
	// void PushContext(class UJunoInputControllerComponent* JunoInputController);                                           // [0xb9f7b78] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoInputMappingComponent.PopContext
	// void PopContext(class UJunoInputControllerComponent* JunoInputController);                                            // [0xb9f7ae0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoInputQueueComponent
/// Size: 0x0068 (0x0000A0 - 0x000108)
class UJunoInputQueueComponent : public UPawnComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x68];                                      // 0x00A0   (0x0068)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoInputQueueComponent.StopQueueingInput
	// void StopQueueingInput(int32_t MontageInstanceID, FGameplayTagContainer AbilityTagsToAdd, FGameplayTagContainer AbilityTagsToRemove); // [0xb9f8300] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoInputQueueComponent.StartQueueingInput
	// void StartQueueingInput(int32_t MontageInstanecID, class UGameplayAbility* Ability, bool bQueueMantisInputs, FGameplayTagContainer EventTags); // [0xb9f80c4] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoInputQueueComponent.SetInterruptible
	// void SetInterruptible(int32_t MontageInstanceID, FGameplayTagContainer AbilityTagsToAdd, FGameplayTagContainer AbilityTagsToRemove); // [0xb9f7df0] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoInputQueueComponent.ResetBlockingTags
	// void ResetBlockingTags(int32_t MontageInstanceID);                                                                    // [0xb9f7c10] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoInputQueueComponent.OverrideBlockingTags
	// void OverrideBlockingTags(int32_t MontageInstanceID, class UGameplayAbility* Ability, FGameplayTagContainer AbilityTagsToAdd, FGameplayTagContainer AbilityTagsToRemove); // [0xb9f77c4] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoInputQueueComponent.FireQueuedInputs
	// void FireQueuedInputs(int32_t MontageInstanceID);                                                                     // [0xb9f73e4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoInventoryPersistenceFeatureModule
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UJunoInventoryPersistenceFeatureModule : public UPersistenceFrameworkModule
{ 
public:
};

/// Class /Script/JunoGameNative.JunoInventoryPersistenceFeatureData_Container
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoInventoryPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer
{ 
public:
};

/// Class /Script/JunoGameNative.JunoInventoryUIPersistenceFeatureModule
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UJunoInventoryUIPersistenceFeatureModule : public UPersistenceFrameworkModule
{ 
public:
};

/// Class /Script/JunoGameNative.JunoInventoryUIPersistenceFeatureData_Container
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoInventoryUIPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer
{ 
public:
};

/// Class /Script/JunoGameNative.JunoKnowledgeBundle
/// Size: 0x0060 (0x000030 - 0x000090)
class UJunoKnowledgeBundle : public UPrimaryDataAsset
{ 
public:
	class UDataTable*                                  RecipeTable;                                                // 0x0030   (0x0008)  
	SDK_UNDEFINED(24,11994) /* FText */                __um(BundleName);                                           // 0x0038   (0x0018)  
	SDK_UNDEFINED(24,11995) /* FText */                __um(BundleDescription);                                    // 0x0050   (0x0018)  
	SDK_UNDEFINED(32,11996) /* TWeakObjectPtr<UObject*> */ __um(BundleImage);                                      // 0x0068   (0x0020)  
	FGameplayTag                                       BundleIdentifier;                                           // 0x0088   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x008C   (0x0004)  MISSED
};

/// Class /Script/JunoGameNative.JunoKnowledgeCraftingComponent
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UJunoKnowledgeCraftingComponent : public UGameFrameworkComponent
{ 
public:
	SDK_UNDEFINED(8,11997) /* TWeakObjectPtr<UCraftingObjectComponent*> */ __um(CachedCraftingObjectComponent);    // 0x00A0   (0x0008)  


	/// Functions
	// Function /Script/JunoGameNative.JunoKnowledgeCraftingComponent.OnCraftingSuccess
	// void OnCraftingSuccess(FCraftingObjectSuccessEvent& Event);                                                           // [0xba03ae0] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoKnowledgeCraftingComponent.HandleCraftingStateChanged
	// void HandleCraftingStateChanged(FCraftingObjectStateChangedEvent& Event);                                             // [0xba038f8] Final|Native|Private|HasOutParms 
};

/// Struct /Script/JunoGameNative.JunoKnowledgeSaveRecord
/// Size: 0x00E8 (0x000000 - 0x0000E8)
struct FJunoKnowledgeSaveRecord
{ 
	FGameplayTagContainer                              CraftingObjectTags;                                         // 0x0000   (0x0020)  
	FGameplayTagContainer                              ClaimedBundleIdentifiers;                                   // 0x0020   (0x0020)  
	SDK_UNDEFINED(80,11998) /* TMap<UItemDefinitionBase*, FJunoKnowledgeItemStateEntry> */ __um(ItemStates);       // 0x0040   (0x0050)  
	SDK_UNDEFINED(80,11999) /* TMap<FName, FJunoKnowledgeRecipeStateEntry> */ __um(RecipeStates);                  // 0x0090   (0x0050)  
	bool                                               bMCPRecipesBlocked;                                         // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00E1   (0x0007)  MISSED
};

/// Struct /Script/JunoGameNative.JunoKnowledgeSaveData
/// Size: 0x00E8 (0x000000 - 0x0000E8)
struct FJunoKnowledgeSaveData
{ 
	FJunoKnowledgeSaveRecord                           WorldKnowledgeRecord;                                       // 0x0000   (0x00E8)  
};

/// Class /Script/JunoGameNative.JunoKnowledgePersistenceFeatureDataActor
/// Size: 0x00F0 (0x0002D0 - 0x0003C0)
class AJunoKnowledgePersistenceFeatureDataActor : public AJunoPersistenceFeatureDataActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x02D0   (0x0008)  MISSED
	FJunoKnowledgeSaveData                             KnowledgeSaveData;                                          // 0x02D8   (0x00E8)  
};

/// Class /Script/JunoGameNative.JunoKnowledgePersistenceFeatureModule
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UJunoKnowledgePersistenceFeatureModule : public UPersistenceFrameworkModule
{ 
public:
};

/// Class /Script/JunoGameNative.JunoKnowledgePersistenceFeatureData_Container
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoKnowledgePersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer
{ 
public:
};

/// Class /Script/JunoGameNative.JunoLevelProviderInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoLevelProviderInterface : public UInterface
{ 
public:
};

/// Class /Script/JunoGameNative.JunoLifeCycleInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoLifeCycleInterface : public UInterface
{ 
public:
};

/// Class /Script/JunoGameNative.JunoLocalEnvironmentComponentInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoLocalEnvironmentComponentInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/JunoGameNative.JunoLocalEnvironmentComponentInterface.GetCaveId
	// FGuid GetCaveId();                                                                                                    // [0xba0383c] Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoLocalEnvironmentComponentInterface.GetBiome
	// FJunoBiomeInfoQueryResult GetBiome();                                                                                 // [0xba03764] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoLocalEnvironmentActorInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoLocalEnvironmentActorInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/JunoGameNative.JunoLocalEnvironmentActorInterface.GetBiomeInfo
	// bool GetBiomeInfo(FJunoBiomeInfoQueryResult& OutHabitat);                                                             // [0xba03798] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoLocalEnvironmentActorInterface.GetBiome
	// bool GetBiome(EJunoBiome& OutBiome);                                                                                  // [0xba036c8] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoLWMCaveEventDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoLWMCaveEventDataInterface : public UInterface
{ 
public:
};

/// Class /Script/JunoGameNative.DisplayableTile
/// Size: 0x0018 (0x000028 - 0x000040)
class UDisplayableTile : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	int32_t                                            TileId;                                                     // 0x0028   (0x0004)  
	int32_t                                            ClearedPixelCount;                                          // 0x002C   (0x0004)  
	class UTexture2D*                                  FogMask;                                                    // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Struct /Script/JunoGameNative.JunoExploredTile
/// Size: 0x0024 (0x00000C - 0x000030)
struct FJunoExploredTile : FFastArraySerializerItem
{ 
	int32_t                                            TileId;                                                     // 0x000C   (0x0004)  
	int32_t                                            ClearedPixelCount;                                          // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	TArray<char>                                       PackedTileMask;                                             // 0x0018   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Struct /Script/JunoGameNative.MapExplorationData
/// Size: 0x0018 (0x000108 - 0x000120)
struct FMapExplorationData : FFastArraySerializer
{ 
	TArray<FJunoExploredTile>                          ExploredTiles;                                              // 0x0108   (0x0010)  
	int32_t                                            KnownClearedPixelCount;                                     // 0x0118   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x011C   (0x0004)  MISSED
};

/// Struct /Script/JunoGameNative.JunoTileInfo
/// Size: 0x0018 (0x000000 - 0x000018)
struct FJunoTileInfo
{ 
	int32_t                                            TileId;                                                     // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FVector2D                                          WorldLocation;                                              // 0x0008   (0x0010)  
};

/// Class /Script/JunoGameNative.JunoMapManagerComponent
/// Size: 0x0180 (0x0000F8 - 0x000278)
class UJunoMapManagerComponent : public UFortPlayspaceComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00F8   (0x0008)  MISSED
	float                                              ExploredRadius;                                             // 0x0100   (0x0004)  
	unsigned char                                      UnknownData01_5[0x14];                                      // 0x0104   (0x0014)  MISSED
	FMapExplorationData                                MapExplorationData;                                         // 0x0118   (0x0120)  
	TArray<class UDisplayableTile*>                    DisplayableTiles;                                           // 0x0238   (0x0010)  
	TArray<FJunoTileInfo>                              LoadedTiles;                                                // 0x0248   (0x0010)  
	class UTexture2D*                                  ClearedFogMask;                                             // 0x0258   (0x0008)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x0260   (0x0018)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoMapManagerComponent.GetFOWForTile
	// class UTexture2D* GetFOWForTile(int32_t TileId);                                                                      // [0xba0386c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoBuildLimitGetter
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoBuildLimitGetter : public UObject
{ 
public:
};

/// Class /Script/JunoGameNative.JunoMarkersLimitPool
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoMarkersLimitPool : public UJunoBuildLimitGetter
{ 
public:
};

/// Class /Script/JunoGameNative.JunoMarkersPersistenceFeatureModule
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UJunoMarkersPersistenceFeatureModule : public UPersistenceFrameworkModule
{ 
public:
};

/// Class /Script/JunoGameNative.JunoMarkersPersistenceFeatureData_Container
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoMarkersPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer
{ 
public:
};

/// Class /Script/JunoGameNative.JunoMerchantDatabase
/// Size: 0x0008 (0x0000F8 - 0x000100)
class UJunoMerchantDatabase : public UFortPlayspaceComponent
{ 
public:
	class UDataTable*                                  MerchantSalesDataTable;                                     // 0x00F8   (0x0008)  
};

/// Struct /Script/JunoGameNative.JunoWeatherLocation
/// Size: 0x0002 (0x000000 - 0x000002)
struct FJunoWeatherLocation
{ 
	EJunoBiome                                         Biome;                                                      // 0x0000   (0x0001)  
	EJunoBiomeHabitat                                  Habitat;                                                    // 0x0001   (0x0001)  
};

/// Struct /Script/JunoGameNative.JunoWeatherPhase
/// Size: 0x0038 (0x000000 - 0x000038)
struct FJunoWeatherPhase
{ 
	FGameplayTag                                       WeatherTypeName;                                            // 0x0000   (0x0004)  
	float                                              TransitionIn;                                               // 0x0004   (0x0004)  
	float                                              TransitionOut;                                              // 0x0008   (0x0004)  
	float                                              WindDirectionDegree;                                        // 0x000C   (0x0004)  
	float                                              duration;                                                   // 0x0010   (0x0004)  
	float                                              WeatherIntensity;                                           // 0x0014   (0x0004)  
	float                                              WindSpeed;                                                  // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	double                                             GameTimeWeatherEnds;                                        // 0x0020   (0x0008)  
	FGameplayTag                                       MorningTemperature;                                         // 0x0028   (0x0004)  
	FGameplayTag                                       DayTemperature;                                             // 0x002C   (0x0004)  
	FGameplayTag                                       EveningTemperature;                                         // 0x0030   (0x0004)  
	FGameplayTag                                       NightTemperature;                                           // 0x0034   (0x0004)  
};

/// Struct /Script/JunoGameNative.JunoSynchronizedWeatherState
/// Size: 0x0078 (0x000000 - 0x000078)
struct FJunoSynchronizedWeatherState
{ 
	FJunoWeatherLocation                               Location;                                                   // 0x0000   (0x0002)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0002   (0x0006)  MISSED
	FJunoWeatherPhase                                  CurrentWeatherPhase;                                        // 0x0008   (0x0038)  
	FJunoWeatherPhase                                  NextWeatherPhase;                                           // 0x0040   (0x0038)  
};

/// Class /Script/JunoGameNative.JunoMeshNetworkWeatherComponent
/// Size: 0x0058 (0x000150 - 0x0001A8)
class UJunoMeshNetworkWeatherComponent : public UMeshNetworkComponent
{ 
public:
	TArray<FJunoSynchronizedWeatherState>              SynchronizedWeatherStates;                                  // 0x0150   (0x0010)  
	unsigned char                                      UnknownData00_6[0x48];                                      // 0x0160   (0x0048)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoMeshNetworkWeatherComponent.OnRep_OnSynchronizedWeatherStates
	// void OnRep_OnSynchronizedWeatherStates();                                                                             // [0xba03c4c] Final|Native|Private 
};

/// Class /Script/JunoGameNative.JunoMoodReactionConfigMappings
/// Size: 0x0050 (0x000030 - 0x000080)
class UJunoMoodReactionConfigMappings : public UDataAsset
{ 
public:
	SDK_UNDEFINED(80,12000) /* TMap<FGameplayTag, FDataTableRowHandle> */ __um(MoodReactionConfigMap);             // 0x0030   (0x0050)  
};

/// Class /Script/JunoGameNative.JunoMutator_AutoPickup
/// Size: 0x0020 (0x000338 - 0x000358)
class AJunoMutator_AutoPickup : public AFortAthenaMutator
{ 
public:
	FGameplayTagContainer                              DoNotAutoPickupGameplayTags;                                // 0x0338   (0x0020)  
};

/// Class /Script/JunoGameNative.JunoNPCMoodReactionDatabase
/// Size: 0x0008 (0x0000F8 - 0x000100)
class UJunoNPCMoodReactionDatabase : public UFortPlayspaceComponent
{ 
public:
	class UJunoMoodReactionConfigMappings*             MoodReactionConfigMappings;                                 // 0x00F8   (0x0008)  
};

/// Struct /Script/JunoGameNative.JunoPassiveCraftingItemAndCount
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoPassiveCraftingItemAndCount
{ 
	int32_t                                            Count;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UItemDefinitionBase*                         Item;                                                       // 0x0008   (0x0008)  
};

/// Struct /Script/JunoGameNative.JunoPassiveCraftingContributorAnalytics
/// Size: 0x0028 (0x000000 - 0x000028)
struct FJunoPassiveCraftingContributorAnalytics
{ 
	SDK_UNDEFINED(16,12001) /* FString */              __um(AccountId);                                            // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,12002) /* FString */              __um(SessionId);                                            // 0x0010   (0x0010)  
	double                                             SessionTime;                                                // 0x0020   (0x0008)  
};

/// Class /Script/JunoGameNative.JunoPassiveCraftingAnalyticsComponent
/// Size: 0x0048 (0x0000A0 - 0x0000E8)
class UJunoPassiveCraftingAnalyticsComponent : public UGameFrameworkComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00A0   (0x0008)  MISSED
	FJunoPassiveCraftingItemAndCount                   AccumulatedItem;                                            // 0x00A8   (0x0010)  
	TArray<FJunoPassiveCraftingContributorAnalytics>   AccumulatedContributors;                                    // 0x00B8   (0x0010)  
	TArray<FJunoPassiveCraftingItemAndCount>           AccumulatedIngredients;                                     // 0x00C8   (0x0010)  
	FName                                              Recipe;                                                     // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00DC   (0x0004)  MISSED
	double                                             AccumulatedCraftingTime;                                    // 0x00E0   (0x0008)  
};

/// Class /Script/JunoGameNative.JunoPassiveCraftingComponent
/// Size: 0x0060 (0x0000A0 - 0x000100)
class UJunoPassiveCraftingComponent : public UGameFrameworkComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00A0   (0x0008)  MISSED
	SDK_UNDEFINED(16,12003) /* FMulticastInlineDelegate */ __um(OnPassiveCraftingDone);                            // 0x00A8   (0x0010)  
	SDK_UNDEFINED(16,12004) /* FMulticastInlineDelegate */ __um(OnAutoCraftingFormulaRowChanged);                  // 0x00B8   (0x0010)  
	bool                                               bAutoSelectRecipeFromIngredients;                           // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00C9   (0x0003)  MISSED
	SDK_UNDEFINED(8,12005) /* TWeakObjectPtr<UJunoInventoryComponent*> */ __um(CachedInventoryComponent);          // 0x00CC   (0x0008)  
	SDK_UNDEFINED(8,12006) /* TWeakObjectPtr<UCraftingObjectComponent*> */ __um(CachedCraftingObjectComponent);    // 0x00D4   (0x0008)  
	bool                                               bIsAutoCrafting;                                            // 0x00DC   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x00DD   (0x0003)  MISSED
	FName                                              AutoCraftingFormulaRow;                                     // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x00E4   (0x0004)  MISSED
	FDateTime                                          AutoCraftingStartDateTime;                                  // 0x00E8   (0x0008)  
	unsigned char                                      UnknownData04_6[0x10];                                      // 0x00F0   (0x0010)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoPassiveCraftingComponent.SetAutoCraftRecipe
	// void SetAutoCraftRecipe(FName FormulaRow);                                                                            // [0xba03c60] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPassiveCraftingComponent.OnRep_AutoCraftingFormulaRow
	// void OnRep_AutoCraftingFormulaRow();                                                                                  // [0xba03c0c] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPassiveCraftingComponent.OnCraftingSuccess
	// void OnCraftingSuccess(FCraftingObjectSuccessEvent& Event);                                                           // [0xba03b88] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoPassiveCraftingComponent.MulticastFireCraftingDone
	// void MulticastFireCraftingDone(EPassiveCraftingDoneReason Reason);                                                    // [0xba03a5c] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/JunoGameNative.JunoPassiveCraftingComponent.IsAutoCrafting
	// bool IsAutoCrafting();                                                                                                // [0xba03a44] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPassiveCraftingComponent.HandleInventoryDataRestored
	// void HandleInventoryDataRestored();                                                                                   // [0xba03a30] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPassiveCraftingComponent.HandleCraftingStateChanged
	// void HandleCraftingStateChanged(FCraftingObjectStateChangedEvent& Event);                                             // [0xba03994] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoPassiveCraftingComponent.GetAutoCraftingFormulaRow
	// FName GetAutoCraftingFormulaRow();                                                                                    // [0x6de9d2c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPassiveCraftingComponent.EnableAutoCrafting
	// void EnableAutoCrafting();                                                                                            // [0xba036b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPassiveCraftingComponent.DisableAutoCrafting
	// void DisableAutoCrafting();                                                                                           // [0xba036a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPassiveCraftingComponent.CalculateNumRemainingAutoCraft
	// int32_t CalculateNumRemainingAutoCraft(FName OptionalFormulaRow);                                                     // [0xba03614] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoPassiveResourcesGathererPawnComponent
/// Size: 0x0090 (0x0000A0 - 0x000130)
class UJunoPassiveResourcesGathererPawnComponent : public UPawnComponent
{ 
public:
	FScalableFloat                                     JobEstimationTimeMultiplier;                                // 0x00A0   (0x0028)  
	class UDataTable*                                  GathererTable;                                              // 0x00C8   (0x0008)  
	SDK_UNDEFINED(16,12007) /* FMulticastInlineDelegate */ __um(OnPassiveResourceGeneratedOnPawnDelegate);         // 0x00D0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x00E0   (0x0050)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoPassiveResourcesGathererPawnComponent.GetTotalJobCompletionTimeInJunoHours
	// float GetTotalJobCompletionTimeInJunoHours();                                                                         // [0xba0e770] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPassiveResourcesGathererPawnComponent.GetRemainingJobCompletionTimeInJunoHours
	// float GetRemainingJobCompletionTimeInJunoHours();                                                                     // [0xba0e518] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPassiveResourcesGathererPawnComponent.GetLastUsedGatheringActorItemId
	// FPrimaryAssetId GetLastUsedGatheringActorItemId();                                                                    // [0xba0e4a4] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPassiveResourcesGathererPawnComponent.GetLastUsedGatheringActorDisplayText
	// FText GetLastUsedGatheringActorDisplayText();                                                                         // [0xba0e460] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPassiveResourcesGathererPawnComponent.GetLastGeneratedPercentage
	// float GetLastGeneratedPercentage();                                                                                   // [0xba0e3fc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPassiveResourcesGathererPawnComponent.GetEstimatedTotalJobCompletionTimeInJunoDays
	// float GetEstimatedTotalJobCompletionTimeInJunoDays();                                                                 // [0xba0e3b8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoPassiveResourcesGatheringWorldConditionSchema
/// Size: 0x0010 (0x000038 - 0x000048)
class UJunoPassiveResourcesGatheringWorldConditionSchema : public UWorldConditionSchema
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0038   (0x0010)  MISSED
};

/// Struct /Script/JunoGameNative.PassiveResourcesGatheringRowRuntime
/// Size: 0x0058 (0x000000 - 0x000058)
struct FPassiveResourcesGatheringRowRuntime
{ 
	FWorldConditionQueryState                          SelectionPreconditionsQueryState;                           // 0x0028   (0x0030)  
};

/// Class /Script/JunoGameNative.JunoPassiveResourcesGatheringComponent
/// Size: 0x00D8 (0x0000A0 - 0x000178)
class UJunoPassiveResourcesGatheringComponent : public UGameFrameworkComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x00A0   (0x0028)  MISSED
	TArray<FPassiveResourcesGatheringRowRuntime>       ActiveGatheringRows;                                        // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,12008) /* FMulticastInlineDelegate */ __um(OnPassiveResourceGeneratedDelegate);               // 0x00D8   (0x0010)  
	unsigned char                                      UnknownData01_5[0x28];                                      // 0x00E8   (0x0028)  MISSED
	FGameplayTagQuery                                  MatchingRolesQuery;                                         // 0x0110   (0x0048)  
	TArray<FDataTableRowHandle>                        GatheringRows;                                              // 0x0158   (0x0010)  
	FDataTableRowHandle                                SimulationConfigurationRow;                                 // 0x0168   (0x0010)  


	/// Functions
	// Function /Script/JunoGameNative.JunoPassiveResourcesGatheringComponent.RemoveGatheringRowOverride
	// void RemoveGatheringRowOverride();                                                                                    // [0xba0edcc] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPassiveResourcesGatheringComponent.OverrideGatheringRow
	// bool OverrideGatheringRow(FDataTableRowHandle& GatheringRow);                                                         // [0xba0ed30] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoPersistenceDeveloperSettings
/// Size: 0x0070 (0x000030 - 0x0000A0)
class UJunoPersistenceDeveloperSettings : public UDeveloperSettings
{ 
public:
	bool                                               bCreateNewWorldAlways;                                      // 0x0030   (0x0001)  
	bool                                               bDisablePersistence;                                        // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0032   (0x0006)  MISSED
	SDK_UNDEFINED(16,12009) /* FString */              __um(WorldNameSuffix);                                      // 0x0038   (0x0010)  
	bool                                               bEnablePersistenceFrameworkDeltas;                          // 0x0048   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0049   (0x0003)  MISSED
	int32_t                                            NewWorldAdventureSeed;                                      // 0x004C   (0x0004)  
	SDK_UNDEFINED(80,12010) /* TMap<FString, FString> */ __um(NewWorldDevProperties);                              // 0x0050   (0x0050)  
};

/// Class /Script/JunoGameNative.JunoPersistenceFeatureData
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoPersistenceFeatureData : public UInterface
{ 
public:
};

/// Class /Script/JunoGameNative.JunoPersistenceFeaturesReportHandler
/// Size: 0x0018 (0x000028 - 0x000040)
class UJunoPersistenceFeaturesReportHandler : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0000   (0x0040)  MISSED
};

/// Class /Script/JunoGameNative.JunoPersistenceReportGenerator
/// Size: 0x0020 (0x000028 - 0x000048)
class UJunoPersistenceReportGenerator : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x48];                                      // 0x0000   (0x0048)  MISSED
};

/// Class /Script/JunoGameNative.JunoPFWDefaultServiceWrapperSettings
/// Size: 0x0000 (0x000040 - 0x000040)
class UJunoPFWDefaultServiceWrapperSettings : public UPersistenceFrameworkServiceSettingsBase
{ 
public:
};

/// Class /Script/JunoGameNative.JunoPickup
/// Size: 0x0008 (0x0007B8 - 0x0007C0)
class AJunoPickup : public AFortPickupAthena
{ 
public:
	float                                              MaxDropTossSpeed;                                           // 0x07B8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x07BC   (0x0004)  MISSED
};

/// Struct /Script/JunoGameNative.JunoSlotIndex
/// Size: 0x0008 (0x000000 - 0x000008)
struct FJunoSlotIndex
{ 
	EJunoBuildModeType                                 BuildModeType;                                              // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            Index;                                                      // 0x0004   (0x0004)  
};

/// Struct /Script/JunoGameNative.JunoSelectedSlot
/// Size: 0x0030 (0x000000 - 0x000030)
struct FJunoSelectedSlot
{ 
	FJunoSlotIndex                                     Slot;                                                       // 0x0000   (0x0008)  
	FName                                              ForcedRecipe;                                               // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FGameplayTagContainer                              Tags;                                                       // 0x0010   (0x0020)  
};

/// Struct /Script/JunoGameNative.JunoBuildingSlotData
/// Size: 0x0034 (0x00000C - 0x000040)
struct FJunoBuildingSlotData : FFastArraySerializerItem
{ 
	FName                                              AssociatedRecipe;                                           // 0x000C   (0x0004)  
	int32_t                                            ResultingQuantity;                                          // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	class UItemDefinitionBase*                         ResultingItemDefintion;                                     // 0x0018   (0x0008)  
	bool                                               bCanCraft;                                                  // 0x0020   (0x0001)  
	bool                                               bIsPinned;                                                  // 0x0021   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x0022   (0x0006)  MISSED
	class UInputAction*                                InputAction;                                                // 0x0028   (0x0008)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0030   (0x0010)  MISSED
};

/// Struct /Script/JunoGameNative.JunoBuildingSlotDataArray
/// Size: 0x0030 (0x000108 - 0x000138)
struct FJunoBuildingSlotDataArray : FFastArraySerializer
{ 
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x0108   (0x0018)  MISSED
	TArray<FJunoBuildingSlotData>                      Entries;                                                    // 0x0120   (0x0010)  
	EJunoBuildModeType                                 BuildModeType;                                              // 0x0130   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0131   (0x0003)  MISSED
	int32_t                                            LastSelectedIndex;                                          // 0x0134   (0x0004)  
};

/// Struct /Script/JunoGameNative.JunoBuildingSessionEntry
/// Size: 0x0040 (0x000000 - 0x000040)
struct FJunoBuildingSessionEntry
{ 
	SDK_UNDEFINED(8,12011) /* TWeakObjectPtr<AActor*> */ __um(SpawnedActor);                                       // 0x0000   (0x0008)  
	FVector                                            SpawnLocation;                                              // 0x0008   (0x0018)  
	FDateTime                                          SpawnTime;                                                  // 0x0020   (0x0008)  
	class UClass*                                      ActorClass;                                                 // 0x0028   (0x0008)  
	SDK_UNDEFINED(8,12012) /* TWeakObjectPtr<UItemDefinitionBase*> */ __um(ItemDef);                               // 0x0030   (0x0008)  
	FName                                              Recipe;                                                     // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/JunoGameNative.JunoBuildingSessionInfo
/// Size: 0x0028 (0x000000 - 0x000028)
struct FJunoBuildingSessionInfo
{ 
	TArray<FJunoBuildingSessionEntry>                  Entries;                                                    // 0x0000   (0x0010)  
	FGuid                                              SessionId;                                                  // 0x0010   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0020   (0x0008)  MISSED
};

/// Struct /Script/JunoGameNative.JunoBuildingMetricsClientPermissions
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoBuildingMetricsClientPermissions
{ 
	FInt32Vector                                       Location;                                                   // 0x0000   (0x000C)  
	int8_t                                             BuildBudgetUsagePercent;                                    // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/JunoGameNative.JunoMCPItemPlacementStatus
/// Size: 0x000C (0x000000 - 0x00000C)
struct FJunoMCPItemPlacementStatus
{ 
	int32_t                                            NumOfMCPItemWorlds;                                         // 0x0000   (0x0004)  
	bool                                               bHasPlacedMCPItemThisSession;                               // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0005   (0x0007)  MISSED
};

/// Struct /Script/JunoGameNative.JunoMCPItemPlacementStatusAlertData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FJunoMCPItemPlacementStatusAlertData
{ 
	class UFortUINotification*                         Notification;                                               // 0x0000   (0x0008)  
};

/// Class /Script/JunoGameNative.JunoPlayerBuildingComponent
/// Size: 0x0500 (0x0000A8 - 0x0005A8)
class UJunoPlayerBuildingComponent : public UFortControllerComponent
{ 
public:
	FJunoSelectedSlot                                  ReplicatedSelectedSlot;                                     // 0x00A8   (0x0030)  
	unsigned char                                      UnknownData00_5[0x38];                                      // 0x00D8   (0x0038)  MISSED
	FJunoBuildingSlotDataArray                         BuildBars;                                                  // 0x0110   (0x0270)  
	SDK_UNDEFINED(8,12013) /* TWeakObjectPtr<AJunoGuidedBuildingActor*> */ __um(LastGuidedBuildingActor);          // 0x0380   (0x0008)  
	SDK_UNDEFINED(8,12014) /* TWeakObjectPtr<AJunoGuidedBuildingActor*> */ __um(ReplicatedLastGuidedBuildingActor); // 0x0388   (0x0008)  
	float                                              ReplicateLastGuidedActorTime;                               // 0x0390   (0x0004)  
	float                                              ReplicateBuildingMetricSpatialPrecision;                    // 0x0394   (0x0004)  
	FJunoBuildingSessionInfo                           BuildingSessionInfo;                                        // 0x0398   (0x0028)  
	FJunoInputMapping                                  BuildingMappingContext;                                     // 0x03C0   (0x0010)  
	class UInputAction*                                NextSlot;                                                   // 0x03D0   (0x0008)  
	class UInputAction*                                PrevSlot;                                                   // 0x03D8   (0x0008)  
	class UInputAction*                                ExitBuildMode;                                              // 0x03E0   (0x0008)  
	class UInputAction*                                PinItem;                                                    // 0x03E8   (0x0008)  
	TArray<class UInputAction*>                        BuildBarBindings;                                           // 0x03F0   (0x0010)  
	TArray<FDataTableRowHandle>                        DefaultRecipes;                                             // 0x0400   (0x0010)  
	TArray<FJunoBuildingMetricsClientPermissions>      ClientSpatialMetricsBuildingPermissions;                    // 0x0410   (0x0010)  
	FIntVector                                         LastKnownPawnSpatialCell;                                   // 0x0420   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x042C   (0x0004)  MISSED
	SDK_UNDEFINED(80,12015) /* TSet<FJunoTrackedActorKey> */ __um(DirtyCellLocations);                             // 0x0430   (0x0050)  
	unsigned char                                      UnknownData02_5[0x10];                                      // 0x0480   (0x0010)  MISSED
	int32_t                                            MaxRecentRecipes;                                           // 0x0490   (0x0004)  
	FJunoMCPItemPlacementStatus                        MCPItemPlacementStatus;                                     // 0x0494   (0x000C)  
	SDK_UNDEFINED(32,12016) /* TWeakObjectPtr<UObject*> */ __um(UINotificationIcon);                               // 0x04A0   (0x0020)  
	TArray<FJunoMCPItemPlacementStatusAlertData>       AlertData;                                                  // 0x04C0   (0x0010)  
	unsigned char                                      UnknownData03_5[0xC0];                                      // 0x04D0   (0x00C0)  MISSED
	class UJunoAsyncAction_WaitForEventRouter*         WaitForEventRouterAction;                                   // 0x0590   (0x0008)  
	unsigned char                                      UnknownData04_6[0x10];                                      // 0x0598   (0x0010)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.SetRecipeAtIndex
	// void SetRecipeAtIndex(int32_t InIndex, FName RecipeName, EJunoBuildModeType ModeType);                                // [0xba0f2b8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.SetLastGuidedBuildingActor
	// void SetLastGuidedBuildingActor(class AJunoGuidedBuildingActor* InLastGuidedBuildingActor);                           // [0xba0f238] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.ServerSetRecipeAtIndex
	// void ServerSetRecipeAtIndex(FJunoSlotIndex NewSlot, FName RecipeName);                                                // [0xba0f004] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.ServerSetLastGuidedBuildingActor
	// void ServerSetLastGuidedBuildingActor(class AJunoGuidedBuildingActor* InLastActor);                                   // [0xba0ef80] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.ServerSelectSlot
	// void ServerSelectSlot(FJunoSelectedSlot NewSlot);                                                                     // [0xba0ede8] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.ServerEndGuidedBuild
	// void ServerEndGuidedBuild();                                                                                          // [0x787a850] RequiredAPI|Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.OnRep_ReplicateLastGuidedActorTime
	// void OnRep_ReplicateLastGuidedActorTime();                                                                            // [0xba0ecf4] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.OnRep_ReplicatedSelectedSlot
	// void OnRep_ReplicatedSelectedSlot();                                                                                  // [0xba0ed1c] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.OnRep_ReplicatedLastGuidedBuildingActor
	// void OnRep_ReplicatedLastGuidedBuildingActor();                                                                       // [0xba0ed08] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.OnRep_MCPItemPlacementStatus
	// void OnRep_MCPItemPlacementStatus();                                                                                  // [0xba0ec90] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.OnGuidedBuildingStageChanged
	// void OnGuidedBuildingStageChanged(FGuidedBuildingUpdate& StageUpdate);                                                // [0xba0ec00] Final|Native|Protected|HasOutParms 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.OnGuidedBuildDone
	// void OnGuidedBuildDone(FGuidedBuildingUpdate& StageUpdate);                                                           // [0xba0eb70] Final|Native|Protected|HasOutParms 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.IsRecipePinned
	// bool IsRecipePinned(FName Recipe);                                                                                    // [0xba0eae4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.IsBuildModeEnabled
	// bool IsBuildModeEnabled();                                                                                            // [0x2d64ed4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.HasSelectedRemainingParts
	// bool HasSelectedRemainingParts();                                                                                     // [0xba0eac0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.HasSelectedMissingParts
	// bool HasSelectedMissingParts();                                                                                       // [0xba0ea9c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.HandleBuildingMetricsThresholdChange
	// void HandleBuildingMetricsThresholdChange(FInt32Vector& Location);                                                    // [0xba0ea14] Final|Native|Protected|HasOutParms|HasDefaults 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.HandleBuildingMetricsActorCountChange
	// void HandleBuildingMetricsActorCountChange(FInt32Vector& Location, int32_t PreviousActorCount, int32_t NewActorCount); // [0xba0e798] Final|Native|Protected|HasOutParms|HasDefaults 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.GetTotalAllowedMCPItemWorlds
	// int32_t GetTotalAllowedMCPItemWorlds();                                                                               // [0xba0e754] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.GetSlotData
	// FJunoBuildingSlotData GetSlotData(int32_t Index, EJunoBuildModeType InType);                                          // [0xba0e624] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.GetSelectedSlotIndex
	// int32_t GetSelectedSlotIndex(EJunoBuildModeType InType);                                                              // [0xba0e598] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.GetRemainingWorldsForMCPItems
	// int32_t GetRemainingWorldsForMCPItems();                                                                              // [0xba0e574] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.GetRemainingPartsForSelectedRecipe
	// FJunoGuidedBuildRemainingPartsInfo GetRemainingPartsForSelectedRecipe();                                              // [0xba0e540] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.GetMCPItemPlacedMessageTitle
	// FText GetMCPItemPlacedMessageTitle();                                                                                 // [0xa390ee4] Native|Event|Protected|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.GetMCPItemPlacedMessageDescription
	// FText GetMCPItemPlacedMessageDescription();                                                                           // [0xba0e4d0] Native|Event|Protected|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.GetLastSelectedRecipe
	// FName GetLastSelectedRecipe();                                                                                        // [0x38e68b4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.GetLastLoadedRecipeData
	// FJunoLastLoadedRecipeData GetLastLoadedRecipeData();                                                                  // [0xba0e448] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.GetLastLoadedRecipe
	// FName GetLastLoadedRecipe();                                                                                          // [0x38e644c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.GetLastGuidedBuildingActor
	// class AJunoGuidedBuildingActor* GetLastGuidedBuildingActor();                                                         // [0xba0e424] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.GetLastFocusedRecipe
	// FName GetLastFocusedRecipe();                                                                                         // [0x38e689c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.GetIsInBuildMode
	// bool GetIsInBuildMode();                                                                                              // [0xba0e3e0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.GetForcedRecipe
	// FName GetForcedRecipe();                                                                                              // [0x6de9d2c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.GetCurrentRecipe
	// FName GetCurrentRecipe();                                                                                             // [0xba0e390] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.GetBuildModeType
	// EJunoBuildModeType GetBuildModeType();                                                                                // [0x8471b48] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.EnterGuidedBuilding
	// void EnterGuidedBuilding(class AJunoGuidedBuildingActor* InLastGuidedBuildingActor);                                  // [0xba0e310] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.EnterBuildingModeAndSelectIndex
	// void EnterBuildingModeAndSelectIndex(int32_t Index, EJunoBuildModeType InType);                                       // [0xba0e220] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.CanPlaceRecipe
	// bool CanPlaceRecipe(FName RecipeToPlace);                                                                             // [0xba0e198] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.CanPlaceMCPItems
	// bool CanPlaceMCPItems();                                                                                              // [0xba0e174] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.AttempEndGuidedBuild
	// void AttempEndGuidedBuild();                                                                                          // [0xba0e160] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoPlayerCampPawnComponent
/// Size: 0x0070 (0x0000A0 - 0x000110)
class UJunoPlayerCampPawnComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x00A0   (0x0070)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoPlayerCampPawnComponent.HandleAwesomeLevelChanged
	// void HandleAwesomeLevelChanged(FJunoAwesomeLevelChangeData& ChangeData);                                              // [0xba11728] Final|Native|Private|HasOutParms 
};

/// Class /Script/JunoGameNative.JunoPlayerControllerComponent_SessionAnalytics
/// Size: 0x0200 (0x0000A0 - 0x0002A0)
class UJunoPlayerControllerComponent_SessionAnalytics : public UControllerComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00A0   (0x0008)  MISSED
	double                                             JunoPlaySessionStartedTime;                                 // 0x00A8   (0x0008)  
	FGuid                                              JunoPlaySessionID;                                          // 0x00B0   (0x0010)  
	TArray<FName>                                      RecipesUnlockedDuringSession;                               // 0x00C0   (0x0010)  
	float                                              AccumulatedDistanceTraveled;                                // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00D4   (0x0004)  MISSED
	FVector                                            LastPlayerPawnLocation;                                     // 0x00D8   (0x0018)  
	unsigned char                                      UnknownData02_5[0x50];                                      // 0x00F0   (0x0050)  MISSED
	SDK_UNDEFINED(16,12017) /* FString */              __um(SavedDisconnectReason);                                // 0x0140   (0x0010)  
	FGameplayEventListenerHandle                       GracefulShutdownInitiatedEventHandle;                       // 0x0150   (0x001C)  
	bool                                               bGracefulShutdownStarted;                                   // 0x016C   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x016D   (0x0003)  MISSED
	int32_t                                            GracefulShutdownExitCode;                                   // 0x0170   (0x0004)  
	int32_t                                            GracefulShutdownMaxTime;                                    // 0x0174   (0x0004)  
	unsigned char                                      UnknownData04_5[0x50];                                      // 0x0178   (0x0050)  MISSED
	FGameplayEventListenerHandle                       PawnEliminatedEventHandle;                                  // 0x01C8   (0x001C)  
	unsigned char                                      UnknownData05_6[0xBC];                                      // 0x01E4   (0x00BC)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoPlayerControllerComponent_SessionAnalytics.ResetHeartbeatStats
	// void ResetHeartbeatStats();                                                                                           // [0xba12638] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPlayerControllerComponent_SessionAnalytics.OnRep_JunoPlaySessionID
	// void OnRep_JunoPlaySessionID();                                                                                       // [0xba12510] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPlayerControllerComponent_SessionAnalytics.OnPlayerStatsUpdateTimer
	// void OnPlayerStatsUpdateTimer();                                                                                      // [0xba121c0] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPlayerControllerComponent_SessionAnalytics.OnPlayerDisconnecting
	// void OnPlayerDisconnecting(class AFortPlayerController* FortPlayerController, FString DevReason, bool bGracefulDisconnect); // [0xba11a9c] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPlayerControllerComponent_SessionAnalytics.OnHeartbeatTimer
	// void OnHeartbeatTimer();                                                                                              // [0xba119f8] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPlayerControllerComponent_SessionAnalytics.HandleInventoryDataRestored
	// void HandleInventoryDataRestored();                                                                                   // [0xba11854] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPlayerControllerComponent_SessionAnalytics.HandleGracefulShutdownInitiated
	// void HandleGracefulShutdownInitiated(FFortGracefulShutdownInitiatedEvent& Event);                                     // [0xba117b8] Final|Native|Private|HasOutParms 
};

/// Class /Script/JunoGameNative.JunoPlayerSaveDataProviderInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoPlayerSaveDataProviderInterface : public UInterface
{ 
public:
};

/// Class /Script/JunoGameNative.JunoPlayerPersistenceFeatureModule
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UJunoPlayerPersistenceFeatureModule : public UPersistenceFrameworkModule
{ 
public:
};

/// Class /Script/JunoGameNative.JunoPlayerSaveData_Container
/// Size: 0x0068 (0x0001E0 - 0x000248)
class UJunoPlayerSaveData_Container : public UJunoBasePFWContainer
{ 
public:
	FPersistenceFrameworkPlayerInfo                    PlayerInfo;                                                 // 0x01E0   (0x0020)  
	FUniqueNetIdRepl                                   PlayerNetId;                                                // 0x0200   (0x0030)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0230   (0x0018)  MISSED
};

/// Struct /Script/JunoGameNative.JunoPlayspaceAccountantSaveData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FJunoPlayspaceAccountantSaveData
{ 
	SDK_UNDEFINED(80,12018) /* TMap<FName, int32_t> */ __um(PersistentValueTable);                                 // 0x0000   (0x0050)  
};

/// Class /Script/JunoGameNative.JunoPlayspaceAccountantFeatureData
/// Size: 0x0058 (0x000040 - 0x000098)
class UJunoPlayspaceAccountantFeatureData : public UJunoBasePFWPersistenceFeatureData
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0040   (0x0008)  MISSED
	FJunoPlayspaceAccountantSaveData                   JunoPlayspaceAccountantSaveData;                            // 0x0048   (0x0050)  
};

/// Class /Script/JunoGameNative.JunoPlayspaceAccountantFeatureDataActor
/// Size: 0x0058 (0x0002D0 - 0x000328)
class AJunoPlayspaceAccountantFeatureDataActor : public AJunoPersistenceFeatureDataActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x02D0   (0x0008)  MISSED
	SDK_UNDEFINED(80,12019) /* TMap<FName, int32_t> */ __um(PersistentValueTable);                                 // 0x02D8   (0x0050)  
};

/// Class /Script/JunoGameNative.JunoPlayspaceAccountantPersistenceFeatureModule
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UJunoPlayspaceAccountantPersistenceFeatureModule : public UPersistenceFrameworkModule
{ 
public:
};

/// Class /Script/JunoGameNative.JunoPlayspaceAccountantPersistenceFeatureData_Container
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoPlayspaceAccountantPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer
{ 
public:
};

/// Class /Script/JunoGameNative.JunoPlayspaceControllerComponent_PlayerSpawning
/// Size: 0x0040 (0x000118 - 0x000158)
class UJunoPlayspaceControllerComponent_PlayerSpawning : public UPlayspaceControllerComponent_PlayerSpawning
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x0118   (0x0018)  MISSED
	FVector                                            PlayspaceSearchBoxExtent;                                   // 0x0130   (0x0018)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0148   (0x0010)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoPlayspaceControllerComponent_PlayerSpawning.StartRespawn
	// void StartRespawn();                                                                                                  // [0xba12818] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPlayspaceControllerComponent_PlayerSpawning.ServerQueuePlayerForRespawn
	// void ServerQueuePlayerForRespawn();                                                                                   // [0xba1264c] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/JunoGameNative.JunoPlayspaceControllerComponent_PlayerSpawning.OnPawnPosessed
	// void OnPawnPosessed(class AFortPawn* NewPawn);                                                                        // [0xba11a0c] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPlayspaceControllerComponent_PlayerSpawning.IsAllowedToShowRespawnUI
	// bool IsAllowedToShowRespawnUI();                                                                                      // [0xba119c8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoPlayspaceIndexPersistenceFeatureModule
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UJunoPlayspaceIndexPersistenceFeatureModule : public UPersistenceFrameworkModule
{ 
public:
};

/// Class /Script/JunoGameNative.JunoPlayspaceIndexPersistenceFeatureData_Container
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoPlayspaceIndexPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer
{ 
public:
};

/// Class /Script/JunoGameNative.JunoPlayspacePersistenceFeatureHelper
/// Size: 0x0028 (0x000028 - 0x000050)
class UJunoPlayspacePersistenceFeatureHelper : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class UClass*                                      PersistenceFeatureDataClass;                                // 0x0028   (0x0008)  
	SDK_UNDEFINED(16,12020) /* TScriptInterface<Class> */ __um(PersistenceFeatureData);                            // 0x0030   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0040   (0x0010)  MISSED
};

/// Class /Script/JunoGameNative.JunoQueryContext_Camp_Center
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoQueryContext_Camp_Center : public UEnvQueryContext
{ 
public:
};

/// Class /Script/JunoGameNative.JunoQueryContext_Camp_Extents
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoQueryContext_Camp_Extents : public UEnvQueryContext
{ 
public:
};

/// Class /Script/JunoGameNative.JunoQuickBuildSelectionData
/// Size: 0x0018 (0x000028 - 0x000040)
class UJunoQuickBuildSelectionData : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	int32_t                                            CurrentlySelectedIndex;                                     // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	TArray<FName>                                      QuickBuildRecipes;                                          // 0x0030   (0x0010)  
};

/// Class /Script/JunoGameNative.JunoRainCapture
/// Size: 0x0030 (0x000290 - 0x0002C0)
class AJunoRainCapture : public AActor
{ 
public:
	class USceneCaptureComponent2D*                    SceneCaptureComponent2D;                                    // 0x0290   (0x0008)  
	class UMaterialParameterCollection*                MaterialParameterCollection;                                // 0x0298   (0x0008)  
	FName                                              RainOccluderSceneCaptureLocationName;                       // 0x02A0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x02A4   (0x0004)  MISSED
	FVector                                            RainOccluderPositionOffset;                                 // 0x02A8   (0x0018)  
};

/// Class /Script/JunoGameNative.JunoRainCaptureSubsystem
/// Size: 0x0050 (0x000040 - 0x000090)
class UJunoRainCaptureSubsystem : public UTickableWorldSubsystem
{ 
public:
	FSoftObjectPath                                    SubsystemDataAssetPath;                                     // 0x0040   (0x0018)  
	class UJunoRainCaptureSubsystemData*               SubsystemData;                                              // 0x0058   (0x0008)  
	unsigned char                                      UnknownData00_5[0x20];                                      // 0x0060   (0x0020)  MISSED
	class AJunoRainCapture*                            RainCaptureInstance;                                        // 0x0080   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0088   (0x0008)  MISSED
};

/// Class /Script/JunoGameNative.JunoRainCaptureSubsystemData
/// Size: 0x0038 (0x000030 - 0x000068)
class UJunoRainCaptureSubsystemData : public UPrimaryDataAsset
{ 
public:
	class UMaterialParameterCollection*                MaterialParameterCollection;                                // 0x0030   (0x0008)  
	class UTextureRenderTarget2D*                      TextureTarget;                                              // 0x0038   (0x0008)  
	FName                                              WeatherParameterName;                                       // 0x0040   (0x0004)  
	FName                                              RainOccluderSceneCaptureLocationName;                       // 0x0044   (0x0004)  
	FVector                                            RainOccluderPositionOffset;                                 // 0x0048   (0x0018)  
	float                                              UpdateDistanceThreshold;                                    // 0x0060   (0x0004)  
	float                                              UpdateTimeThreshold;                                        // 0x0064   (0x0004)  
};

/// Class /Script/JunoGameNative.JunoRainOccluderComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UJunoRainOccluderComponent : public UGameFrameworkComponent
{ 
public:
};

/// Class /Script/JunoGameNative.JunoReportHandler
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoReportHandler : public UInterface
{ 
public:
};

/// Struct /Script/JunoGameNative.JunoPersistenceFeature
/// Size: 0x00B0 (0x000000 - 0x0000B0)
struct FJunoPersistenceFeature
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UClass*                                      Class;                                                      // 0x0008   (0x0008)  
	EJunoPersistenceFeatureCheckoutState               CurrentCheckoutState;                                       // 0x0010   (0x0004)  
	EJunoPersistenceFeatureCheckoutState               TargetCheckoutState;                                        // 0x0014   (0x0004)  
	uint32_t                                           CheckoutStateChangeRequestKey;                              // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4C];                                      // 0x001C   (0x004C)  MISSED
	class UObject*                                     ImplementationCustomStateObject;                            // 0x0068   (0x0008)  
	SDK_UNDEFINED(16,12021) /* TScriptInterface<Class> */ __um(Data);                                              // 0x0070   (0x0010)  
	class UClass*                                      SourceImplementationDataClass;                              // 0x0080   (0x0008)  
	SDK_UNDEFINED(16,12022) /* TScriptInterface<Class> */ __um(DifferentImplementationData);                       // 0x0088   (0x0010)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x0098   (0x0018)  MISSED
};

/// Class /Script/JunoGameNative.JunoPlayspacePersistenceComponent
/// Size: 0x0028 (0x0000F8 - 0x000120)
class UJunoPlayspacePersistenceComponent : public UFortPlayspaceComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00F8   (0x0008)  MISSED
	TArray<class UClass*>                              RequiredPersistenceFeatureDataClasses;                      // 0x0100   (0x0010)  
	TArray<FJunoPersistenceFeature>                    PersistenceFeatures;                                        // 0x0110   (0x0010)  
};

/// Class /Script/JunoGameNative.JunoRootPlayspacePersistenceComponent
/// Size: 0x0000 (0x000120 - 0x000120)
class UJunoRootPlayspacePersistenceComponent : public UJunoPlayspacePersistenceComponent
{ 
public:
};

/// Class /Script/JunoGameNative.JunoSmartObjectComponent
/// Size: 0x0010 (0x0002D0 - 0x0002E0)
class UJunoSmartObjectComponent : public UFortSmartObjectComponent
{ 
public:
	class UCurveFloat*                                 LootTierPercentageToSlotPickingModifier;                    // 0x02D0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x02D8   (0x0008)  MISSED
};

/// Class /Script/JunoGameNative.JunoSyncTimeOfDayComponent
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UJunoSyncTimeOfDayComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A0   (0x0008)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoSyncTimeOfDayComponent.SetTimeOfDaySyncEnabled
	// void SetTimeOfDaySyncEnabled(bool bNewTimeOfDaySyncEnabled);                                                          // [0xba12798] Final|Native|Protected|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoSyncTimeOfDayComponent.GetTimeOfDaySyncEnabled
	// bool GetTimeOfDaySyncEnabled();                                                                                       // [0x80e8094] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoSyncWeatherComponent
/// Size: 0x0050 (0x0000A0 - 0x0000F0)
class UJunoSyncWeatherComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x00A0   (0x0050)  MISSED
};

/// Class /Script/JunoGameNative.JunoTeamStart
/// Size: 0x0008 (0x0002C0 - 0x0002C8)
class AJunoTeamStart : public APlayerStart
{ 
public:
	float                                              CapsuleRadius;                                              // 0x02C0   (0x0004)  
	float                                              CapsuleHeight;                                              // 0x02C4   (0x0004)  
};

/// Class /Script/JunoGameNative.JunoTeleporter
/// Size: 0x0010 (0x000BC8 - 0x000BD8)
class AJunoTeleporter : public ABuildingProp
{ 
public:
	SDK_UNDEFINED(8,12023) /* TWeakObjectPtr<AJunoTeleporter*> */ __um(TargetTeleporter);                          // 0x0BC8   (0x0008)  
	bool                                               bIsTeleporterEnabled;                                       // 0x0BD0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0BD1   (0x0007)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoTeleporter.SetTargetTeleporter
	// void SetTargetTeleporter(class AJunoTeleporter* TargetTeleportActor);                                                 // [0xba12698] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoTeleporter.IsTeleporterEnabled
	// bool IsTeleporterEnabled();                                                                                           // [0xba119e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoTeleporter.GetTargetTeleporter
	// class AJunoTeleporter* GetTargetTeleporter();                                                                         // [0xba11700] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/JunoGameNative.TemperatureRange
/// Size: 0x0014 (0x000000 - 0x000014)
struct FTemperatureRange
{ 
	FGameplayTag                                       tag;                                                        // 0x0000   (0x0004)  
	FFloatRange                                        Range;                                                      // 0x0004   (0x0010)  
};

/// Class /Script/JunoGameNative.JunoTemperatureAttributeSet
/// Size: 0x0100 (0x000030 - 0x000130)
class UJunoTemperatureAttributeSet : public UFortAttributeSet
{ 
public:
	FGameplayTagContainer                              BlockedTemperatures;                                        // 0x0030   (0x0020)  
	FFortGameplayAttributeData                         Temperature;                                                // 0x0050   (0x0028)  
	FFortGameplayAttributeData                         ColdResistance;                                             // 0x0078   (0x0028)  
	FFortGameplayAttributeData                         HeatResistance;                                             // 0x00A0   (0x0028)  
	FGameplayTag                                       CurrentTemperature;                                         // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00CC   (0x0004)  MISSED
	TArray<FTemperatureRange>                          TemperatureRanges;                                          // 0x00D0   (0x0010)  
	SDK_UNDEFINED(16,12024) /* FMulticastInlineDelegate */ __um(OnTemperatureChanged);                             // 0x00E0   (0x0010)  
	SDK_UNDEFINED(16,12025) /* FMulticastInlineDelegate */ __um(OnTemperatureRangesChanged);                       // 0x00F0   (0x0010)  
	bool                                               bAddTemperatureTagToActor;                                  // 0x0100   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0101   (0x0003)  MISSED
	FGameplayTag                                       ForcedTemperature;                                          // 0x0104   (0x0004)  
	unsigned char                                      UnknownData02_6[0x28];                                      // 0x0108   (0x0028)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoTemperatureAttributeSet.OnRep_TemperatureRanges
	// void OnRep_TemperatureRanges();                                                                                       // [0xba12624] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoTemperatureAttributeSet.OnRep_Temperature
	// void OnRep_Temperature(FFortGameplayAttributeData& OldValue);                                                         // [0xba12524] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoTemperatureAttributeSet.OnRep_HeatResistance
	// void OnRep_HeatResistance(FFortGameplayAttributeData& OldValue);                                                      // [0xba12410] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoTemperatureAttributeSet.OnRep_CurrentTemperature
	// void OnRep_CurrentTemperature(FGameplayTag OldTemperature);                                                           // [0xba122d4] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoTemperatureAttributeSet.OnRep_ColdResistance
	// void OnRep_ColdResistance(FFortGameplayAttributeData& OldValue);                                                      // [0xba121d4] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoTemperatureAttributeSet.HandleWeatherTemperatureChanged
	// void HandleWeatherTemperatureChanged(FJunoEvent_TemperatureChanged Payload);                                          // [0xba11868] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoTemperatureAttributeSet.ForceTemperature
	// void ForceTemperature(FGameplayTag TemperatureToForce);                                                               // [0xba115c4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoTemperatureComponent
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UJunoTemperatureComponent : public UGameFrameworkComponent
{ 
public:
	SDK_UNDEFINED(8,12026) /* TWeakObjectPtr<UJunoTemperatureAttributeSet*> */ __um(TemperatureAttributeSet);      // 0x00A0   (0x0008)  


	/// Functions
	// Function /Script/JunoGameNative.JunoTemperatureComponent.HandleOwnerASCInvalidated
	// void HandleOwnerASCInvalidated();                                                                                     // [0xba14924] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoTemperatureComponent.HandleOwnerASCInitialized
	// void HandleOwnerASCInitialized(class UFortAbilitySystemComponent* FortAbilitySystemComponent, class AFortPlayerPawn* AffectedPawn); // [0xba14868] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoTemperatureComponent.GetTemperatureAttributeSet
	// class UJunoTemperatureAttributeSet* GetTemperatureAttributeSet();                                                     // [0x6616d7c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoTemplatesReportHandler
/// Size: 0x0018 (0x000028 - 0x000040)
class UJunoTemplatesReportHandler : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0000   (0x0040)  MISSED
};

/// Class /Script/JunoGameNative.JunoToyAttachmentFixupComponent
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UJunoToyAttachmentFixupComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A0   (0x0008)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoToyAttachmentFixupComponent.HandleToyAttachementFixupTimer
	// void HandleToyAttachementFixupTimer();                                                                                // [0xba14938] Final|Native|Protected 
};

/// Class /Script/JunoGameNative.JunoUpdateActionsReportHandler
/// Size: 0x0018 (0x000028 - 0x000040)
class UJunoUpdateActionsReportHandler : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0000   (0x0040)  MISSED
};

/// Class /Script/JunoGameNative.JunoWeaponAbility
/// Size: 0x0000 (0x000B60 - 0x000B60)
class UJunoWeaponAbility : public UFortGameplayAbility
{ 
public:
};

/// Class /Script/JunoGameNative.JunoWeaponCreatureItemDefinition
/// Size: 0x0020 (0x000CC0 - 0x000CE0)
class UJunoWeaponCreatureItemDefinition : public UFortWeaponRangedItemDefinition
{ 
public:
	TArray<class UClass*>                              Debug_CreaturesToSpawn;                                     // 0x0CC0   (0x0010)  
	TArray<FDataTableRowHandle>                        SpawnEvents;                                                // 0x0CD0   (0x0010)  
};

/// Class /Script/JunoGameNative.JunoWeaponsBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoWeaponsBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/JunoGameNative.JunoWeaponsBlueprintLibrary.GetSpawnEvents
	// TArray<FDataTableRowHandle> GetSpawnEvents(class UGameplayAbility* GameplayAbility);                                  // [0xba14730] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoWeaponsBlueprintLibrary.GetCreaturesToSpawn
	// TArray<UClass*> GetCreaturesToSpawn(class UGameplayAbility* GameplayAbility);                                         // [0xba13ef8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/JunoGameNative.JunoWeatherFXPersistence
/// Size: 0x0058 (0x000290 - 0x0002E8)
class AJunoWeatherFXPersistence : public AActor
{ 
public:
	class UMaterialParameterCollection*                MaterialParameterCollection;                                // 0x0290   (0x0008)  
	class UMaterialParameterCollectionInstance*        CachedMPCInstance;                                          // 0x0298   (0x0008)  
	FLinearColor                                       WindPosition;                                               // 0x02A0   (0x0010)  
	FLinearColor                                       WindValueInCave;                                            // 0x02B0   (0x0010)  
	float                                              MaxWindSpeed;                                               // 0x02C0   (0x0004)  
	FLinearColor                                       GustMaxWindSpeedAddend;                                     // 0x02C4   (0x0010)  
	float                                              WindScalar;                                                 // 0x02D4   (0x0004)  
	FName                                              WindParamName;                                              // 0x02D8   (0x0004)  
	FName                                              WindPositionParamName;                                      // 0x02DC   (0x0004)  
	FName                                              WindPreviousPositionParamName;                              // 0x02E0   (0x0004)  
	bool                                               bInCave;                                                    // 0x02E4   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x02E5   (0x0003)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoWeatherFXPersistence.UpdateWindGust
	// void UpdateWindGust(float IntensityScalar, FVector& GustIntensity, FLinearColor& CurrentWind);                        // [0xba14f50] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoWeatherLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoWeatherLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/JunoGameNative.JunoWeatherLibrary.StringToLocation
	// FJunoWeatherLocation StringToLocation(FName LocationName);                                                            // [0xba14ed0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoWeatherLibrary.RollWeatherFromSeason
	// FJunoWeatherPhase RollWeatherFromSeason(FJunoWeatherSeasonRow& Season, FJunoWeatherLocation& Location, FGameplayTag& OptionalWeatherType); // [0xba14d20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoWeatherLibrary.RollWeatherFromForecast
	// FJunoWeatherPhase RollWeatherFromForecast(FJunoWeatherPhaseForecast& Forecast);                                       // [0xba14c60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoWeatherLibrary.NotEqual_JunoWeatherLocation
	// bool NotEqual_JunoWeatherLocation(FJunoWeatherLocation& A, FJunoWeatherLocation& B);                                  // [0xba14a9c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoWeatherLibrary.FindGameStateWeatherComponent
	// class UJunoGameStateWeatherComponent* FindGameStateWeatherComponent(class UObject* WorldContextObject);               // [0xba13dc0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoWeatherLibrary.EqualEqual_JunoWeatherLocation
	// bool EqualEqual_JunoWeatherLocation(FJunoWeatherLocation& A, FJunoWeatherLocation& B);                                // [0xba13ccc] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoWeatherLibrary.DescribePhase
	// FString DescribePhase(FJunoWeatherPhase& WeatherPhase);                                                               // [0xba13c24] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoWeatherLibrary.DescribeLocation
	// FString DescribeLocation(FJunoWeatherLocation& WeatherLocation);                                                      // [0xba13b80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoWeatherLibrary.CalculateLocation
	// FJunoWeatherLocation CalculateLocation(class AActor* Actor);                                                          // [0xba13b00] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoWeatherLocationComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UJunoWeatherLocationComponent : public UGameFrameworkComponent
{ 
public:
	SDK_UNDEFINED(16,12027) /* FMulticastInlineDelegate */ __um(OnLocationChanged);                                // 0x00A0   (0x0010)  
	FJunoWeatherLocation                               Location;                                                   // 0x00B0   (0x0002)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x00B2   (0x0006)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoWeatherLocationComponent.OnRep_Location
	// void OnRep_Location(FJunoWeatherLocation& OldLocation);                                                               // [0xba14b90] Final|Native|Protected|HasOutParms 
	// Function /Script/JunoGameNative.JunoWeatherLocationComponent.HandleLocationChanged
	// void HandleLocationChanged();                                                                                         // [0xba14854] Final|Native|Protected|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoWeatherLocationComponent.GetLocation
	// FJunoWeatherLocation GetLocation();                                                                                   // [0xba14714] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoWeatherLocationComponent.BP_CalculateLocation
	// FJunoWeatherLocation BP_CalculateLocation();                                                                          // [0xba13ad0] Native|Event|Protected|BlueprintEvent|Const 
};

/// Class /Script/JunoGameNative.JunoWeatherPersistenceFeatureModule
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UJunoWeatherPersistenceFeatureModule : public UPersistenceFrameworkModule
{ 
public:
};

/// Class /Script/JunoGameNative.JunoWeatherPersistenceFeatureData_Container
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoWeatherPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer
{ 
public:
};

/// Class /Script/JunoGameNative.JunoWeatherReactionComponent
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class UJunoWeatherReactionComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,12028) /* FMulticastInlineDelegate */ __um(OnWeatherPhaseChanged);                            // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,12029) /* FMulticastInlineDelegate */ __um(OnTemperatureChanged);                             // 0x00B0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00C0   (0x0008)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoWeatherReactionComponent.ReceiveOnWeatherPhaseChanged
	// void ReceiveOnWeatherPhaseChanged(FJunoEvent_WeatherPhaseChanged Payload);                                            // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoWeatherReactionComponent.ReceiveOnTemperatureChanged
	// void ReceiveOnTemperatureChanged(FJunoEvent_TemperatureChanged Payload);                                              // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoWeatherReactionComponent.HandleWeatherLocationChanged
	// void HandleWeatherLocationChanged(FJunoWeatherLocationChangedEvent Payload);                                          // [0xba1494c] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoWeatherReactionComponent.GetCurrentWeatherPhase
	// FJunoWeatherPhase GetCurrentWeatherPhase();                                                                           // [0xba14684] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoWeatherReactionComponent.GetCurrentTemperatureFloat
	// float GetCurrentTemperatureFloat();                                                                                   // [0xba1465c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoWeatherReactionComponent.GetCurrentTemperature
	// FGameplayTag GetCurrentTemperature();                                                                                 // [0xba14618] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoWeatherReactionComponent.GetClosestStatefulLocationFor
	// FJunoWeatherLocation GetClosestStatefulLocationFor(FJunoWeatherLocation& WeatherLocation);                            // [0xba13e64] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoWeatherReactionComponent.FindWeatherState
	// class UJunoWeatherStateComponent* FindWeatherState();                                                                 // [0xba13e40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoWeatherStateComponent
/// Size: 0x00E8 (0x0000A0 - 0x000188)
class UJunoWeatherStateComponent : public UGameFrameworkComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x00A0   (0x0030)  MISSED
	FJunoWeatherLocation                               Location;                                                   // 0x00D0   (0x0002)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x00D2   (0x0006)  MISSED
	class UDataTable*                                  SeasonTable;                                                // 0x00D8   (0x0008)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x00E0   (0x0008)  MISSED
	FJunoWeatherPhase                                  CurrentWeatherPhase;                                        // 0x00E8   (0x0038)  
	FJunoWeatherPhase                                  NextWeatherPhase;                                           // 0x0120   (0x0038)  
	TArray<FJunoWeatherPhase>                          NextWeatherQueue;                                           // 0x0158   (0x0010)  
	unsigned char                                      UnknownData03_6[0x20];                                      // 0x0168   (0x0020)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.TransitionWeatherNowTo
	// void TransitionWeatherNowTo(FJunoWeatherPhase& NewWeatherPhase, FJunoWeatherPhase& NewNextWeatherPhase);              // [0xba17b14] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.TransitionWeatherNow
	// void TransitionWeatherNow();                                                                                          // [0xba17b00] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.SetAutoTransitioning
	// void SetAutoTransitioning(bool bAutoTransitionWeather);                                                               // [0xba17a80] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.RollWeatherPhase
	// FJunoWeatherPhase RollWeatherPhase();                                                                                 // [0xba17a38] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.RerollNextWeatherWith
	// void RerollNextWeatherWith(FGameplayTag& WeatherTypeName);                                                            // [0xba17970] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.ReceiveWeatherPhaseChanged
	// void ReceiveWeatherPhaseChanged(FJunoEvent_WeatherPhaseChanged& Payload);                                             // [0x3d1d968] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.ReceiveTemperatureChanged
	// void ReceiveTemperatureChanged(FJunoEvent_TemperatureChanged& Payload);                                               // [0x3d1d968] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.QueueNextWeather
	// void QueueNextWeather(FJunoWeatherPhase& QueuedWeather);                                                              // [0xba17868] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.OnRep_CurrentWeatherPhase
	// void OnRep_CurrentWeatherPhase();                                                                                     // [0xba17194] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.IsAutoTransitioning
	// bool IsAutoTransitioning();                                                                                           // [0xba16bbc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.GetTransitionOutAlpha
	// float GetTransitionOutAlpha();                                                                                        // [0xba16334] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.GetTransitionInAlpha
	// float GetTransitionInAlpha();                                                                                         // [0xba1631c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.GetNextWeatherQueue
	// TArray<FJunoWeatherPhase> GetNextWeatherQueue();                                                                      // [0xba162e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.GetNextWeatherPhase
	// FJunoWeatherPhase GetNextWeatherPhase();                                                                              // [0xba162a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.GetLocation
	// FJunoWeatherLocation GetLocation();                                                                                   // [0xba16284] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.GetCurrentWeatherPhase
	// FJunoWeatherPhase GetCurrentWeatherPhase();                                                                           // [0xba16244] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.GetCurrentTemperatureFloat
	// float GetCurrentTemperatureFloat();                                                                                   // [0x6de9d44] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.GetCurrentTemperature
	// FGameplayTag GetCurrentTemperature();                                                                                 // [0xba16218] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.GetCurrentSeason
	// FGameplayTag GetCurrentSeason();                                                                                      // [0xba161e8] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.ForceNextWeatherTo
	// void ForceNextWeatherTo(FJunoWeatherPhase& NewNextWeatherPhase);                                                      // [0xba15ff8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.ClearNextWeatherQueue
	// void ClearNextWeatherQueue();                                                                                         // [0xba15fe4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoWorldPersistenceCheckpointManager
/// Size: 0x0028 (0x000028 - 0x000050)
class UJunoWorldPersistenceCheckpointManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	int32_t                                            CheckpointIntervalSeconds;                                  // 0x0028   (0x0004)  
	int32_t                                            MinCheckpointIntervalSeconds;                               // 0x002C   (0x0004)  
	int32_t                                            MaxCheckpointCountWithinConfiguredInterval;                 // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_6[0x1C];                                      // 0x0034   (0x001C)  MISSED
};

/// Class /Script/JunoGameNative.JunoWorldPersistenceFeatureModule
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UJunoWorldPersistenceFeatureModule : public UPersistenceFrameworkModule
{ 
public:
};

/// Class /Script/JunoGameNative.JunoWorldPersistenceFeatureData_Container
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoWorldPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer
{ 
public:
};

/// Class /Script/JunoGameNative.JunoWorldPersistenceSubsystem
/// Size: 0x00F8 (0x000030 - 0x000128)
class UJunoWorldPersistenceSubsystem : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_3[0x38];                                      // 0x0030   (0x0038)  MISSED
	bool                                               bEnableWorldPersistence;                                    // 0x0068   (0x0001)  
	bool                                               bEnableWorldPersistenceInPIE;                               // 0x0069   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x006A   (0x0006)  MISSED
	class UJunoWorldPersistenceHandler*                WorldPersistenceHandler;                                    // 0x0070   (0x0008)  
	class UJunoWorldPersistencePlayerManager*          WorldPersistencePlayerManager;                              // 0x0078   (0x0008)  
	class UJunoWorldPersistenceSubsystemData*          SubsystemData;                                              // 0x0080   (0x0008)  
	class UJunoWorldPersistenceCheckpointManager*      CheckpointManager;                                          // 0x0088   (0x0008)  
	SDK_UNDEFINED(80,12030) /* TMap<FGuid, TWeakObjectPtr<AJunoPersistentPlayspace*>> */ __um(PersistentPlayspaceMap); // 0x0090   (0x0050)  
	EJunoWorldSaveDataState                            WorldSaveDataState;                                         // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x00E1   (0x0007)  MISSED
	FSoftObjectPath                                    SubsystemDataAssetPath;                                     // 0x00E8   (0x0018)  
	unsigned char                                      UnknownData03_5[0x18];                                      // 0x0100   (0x0018)  MISSED
	SDK_UNDEFINED(16,12031) /* TArray<FString> */      __um(ErrorCodeAllowList);                                   // 0x0118   (0x0010)  


	/// Functions
	// Function /Script/JunoGameNative.JunoWorldPersistenceSubsystem.WasActorSpawnedFromSavedGame
	// bool WasActorSpawnedFromSavedGame(class AActor* Actor);                                                               // [0xba17fc4] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoWorldPersistenceSubsystem.RequestActorSave
	// void RequestActorSave(class AActor* Actor);                                                                           // [0xba178f8] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoWorldPersistenceSubsystem.GenerateDeterministicMapActorGUID
	// FGuid GenerateDeterministicMapActorGUID(class AActor* Actor);                                                         // [0xba16088] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoWorldPersistenceSubsystemData
/// Size: 0x0018 (0x000030 - 0x000048)
class UJunoWorldPersistenceSubsystemData : public UPrimaryDataAsset
{ 
public:
	TArray<class UClass*>                              AvailableWorldPersistenceHandlerClasses;                    // 0x0030   (0x0010)  
	class UClass*                                      DefaultWorldPersistenceHandlerClass;                        // 0x0040   (0x0008)  
};

/// Class /Script/JunoGameNative.JunoWorldRegistryInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoWorldRegistryInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/JunoGameNative.JunoWorldRegistryInterface.GetWorldDebugInfoText
	// void GetWorldDebugInfoText(class AFortPlayerPawn* PlayerPawn, FJunoDebugWorldInfoResult& WorldDebugInfo);             // [0xba16acc] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoWorldRegistryInterface.GetWorldAnalyticsInfo
	// void GetWorldAnalyticsInfo(class UObject* WorldContextObject, FVector& WorldLocation, FJunoWorldAnalyticsInfoResult& WorldAnalyticsInfo); // [0xba1634c] Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoWorldSettingsBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoWorldSettingsBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/JunoGameNative.JunoWorldSettingsBlueprintLibrary.TurnWorldSettingOn
	// void TurnWorldSettingOn(class UObject* WorldContextObject, FGameplayTag& SettingName);                                // [0xba17eb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoWorldSettingsBlueprintLibrary.TurnWorldSettingOff
	// void TurnWorldSettingOff(class UObject* WorldContextObject, FGameplayTag& SettingName);                               // [0xba17d9c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoWorldSettingsBlueprintLibrary.IsWorldSettingTainted
	// bool IsWorldSettingTainted(class UObject* WorldContextObject, FGameplayTag& SettingName);                             // [0xba17078] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoWorldSettingsBlueprintLibrary.IsWorldSettingSaved
	// bool IsWorldSettingSaved(class UObject* WorldContextObject, FGameplayTag& SettingName);                               // [0xba16f5c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoWorldSettingsBlueprintLibrary.IsWorldSettingOn
	// bool IsWorldSettingOn(class UObject* WorldContextObject, FGameplayTag& SettingName);                                  // [0xba16e50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoWorldSettingsBlueprintLibrary.GetAllWorldSettingNames
	// TArray<FGameplayTag> GetAllWorldSettingNames(class UObject* WorldContextObject);                                      // [0xba16154] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/JunoGameNative.JunoWorldSettingMapping
/// Size: 0x0008 (0x000000 - 0x000008)
struct FJunoWorldSettingMapping
{ 
	FGameplayTag                                       TagName;                                                    // 0x0000   (0x0004)  
	FName                                              SavedName;                                                  // 0x0004   (0x0004)  
};

/// Struct /Script/JunoGameNative.JunoWorldSettingRepState
/// Size: 0x0008 (0x000000 - 0x000008)
struct FJunoWorldSettingRepState
{ 
	FGameplayTag                                       SettingName;                                                // 0x0000   (0x0004)  
	bool                                               bIsSettingOn;                                               // 0x0004   (0x0001)  
	bool                                               bIsSettingTainted;                                          // 0x0005   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0006   (0x0002)  MISSED
};

/// Class /Script/JunoGameNative.JunoWorldSettingsComponent
/// Size: 0x0030 (0x0000A0 - 0x0000D0)
class UJunoWorldSettingsComponent : public UPlayspaceComponent
{ 
public:
	TArray<FJunoWorldSettingMapping>                   OptionalSettingNames;                                       // 0x00A0   (0x0010)  
	TArray<FJunoWorldSettingRepState>                  WorldSettings;                                              // 0x00B0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x00C0   (0x0010)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoWorldSettingsComponent.TurnSettingOn
	// void TurnSettingOn(FGameplayTag& SettingName);                                                                        // [0xba17cd4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoWorldSettingsComponent.TurnSettingOff
	// void TurnSettingOff(FGameplayTag& SettingName);                                                                       // [0xba17c0c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoWorldSettingsComponent.OnRep_WorldSettings
	// void OnRep_WorldSettings(TArray<FJunoWorldSettingRepState>& OldValue);                                                // [0xba171a8] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoWorldSettingsComponent.IsSettingTainted
	// bool IsSettingTainted(FGameplayTag& SettingName);                                                                     // [0xba16d7c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoWorldSettingsComponent.IsSettingSaved
	// bool IsSettingSaved(FGameplayTag& SettingName);                                                                       // [0xba16ca8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoWorldSettingsComponent.IsSettingOn
	// bool IsSettingOn(FGameplayTag& SettingName);                                                                          // [0xba16bd4] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoWorldSettingsComponent.GetAllSettingNames
	// TArray<FGameplayTag> GetAllSettingNames();                                                                            // [0xba16114] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/JunoGameNative.JunoWorldSettingsSaveData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoWorldSettingsSaveData
{ 
	TArray<FName>                                      TaintedSettings;                                            // 0x0000   (0x0010)  
};

/// Class /Script/JunoGameNative.JunoWorldSettingsPersistenceFeatureData
/// Size: 0x0068 (0x000040 - 0x0000A8)
class UJunoWorldSettingsPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0040   (0x0008)  MISSED
	SDK_UNDEFINED(80,12032) /* TMap<FName, bool> */    __um(BoolWorldSettings);                                    // 0x0048   (0x0050)  
	FJunoWorldSettingsSaveData                         WorldSettingsSaveData;                                      // 0x0098   (0x0010)  
};

/// Class /Script/JunoGameNative.JunoWorldSettingsPersistenceFeatureModule
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UJunoWorldSettingsPersistenceFeatureModule : public UPersistenceFrameworkModule
{ 
public:
};

/// Class /Script/JunoGameNative.JunoWorldSettingsPersistenceFeatureData_Container
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoWorldSettingsPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer
{ 
public:
};

/// Class /Script/JunoGameNative.JunoMapMarkerCustomizationInitData
/// Size: 0x00C0 (0x000028 - 0x0000E8)
class UJunoMapMarkerCustomizationInitData : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FGuid                                              MarkerID;                                                   // 0x0028   (0x0010)  
	FJunoMarker                                        NewMarker;                                                  // 0x0038   (0x0098)  
	SDK_UNDEFINED(24,12033) /* FText */                __um(DisplayName);                                          // 0x00D0   (0x0018)  
};

/// Class /Script/JunoGameNative.PhysicalStrainHealthSubsystem
/// Size: 0x0018 (0x000040 - 0x000058)
class UPhysicalStrainHealthSubsystem : public UTickableWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0040   (0x0018)  MISSED
};

/// Class /Script/JunoGameNative.PhysicalStrainHealthRuntimeSettings
/// Size: 0x0010 (0x000030 - 0x000040)
class UPhysicalStrainHealthRuntimeSettings : public UDeveloperSettings
{ 
public:
	EPhysicalStrainHealthMode                          Mode;                                                       // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              FatigueDamageThresholdPercent;                              // 0x0034   (0x0004)  
	float                                              FatigueDamageThresholdMinimum;                              // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/JunoGameNative.JunoCampWorldConditionSchema
/// Size: 0x0008 (0x000038 - 0x000040)
class UJunoCampWorldConditionSchema : public UWorldConditionSchema
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Struct /Script/JunoGameNative.ReplicatedCampData
/// Size: 0x0058 (0x000000 - 0x000058)
struct FReplicatedCampData
{ 
	FGuid                                              CampActorID;                                                // 0x0000   (0x0010)  
	FPrimaryAssetId                                    CampCenterAssetID;                                          // 0x0010   (0x0008)  
	FBox                                               CampBounds;                                                 // 0x0018   (0x0038)  
	bool                                               bIsSoftRemoved;                                             // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0051   (0x0007)  MISSED
};

/// Struct /Script/JunoGameNative.POIEncounterDataForCamps
/// Size: 0x0040 (0x000000 - 0x000040)
struct FPOIEncounterDataForCamps
{ 
	FBox                                               Bounds;                                                     // 0x0008   (0x0038)  
};

/// Class /Script/JunoGameNative.PlayspaceComponent_JunoRootCampManagement
/// Size: 0x04D8 (0x0000F8 - 0x0005D0)
class UPlayspaceComponent_JunoRootCampManagement : public UFortPlayspaceComponent
{ 
public:
	FScalableFloat                                     TimeBeforeSoftRemovedCampBecomesHardRemovedInJunoGameTimeHours; // 0x00F8   (0x0028)  
	FScalableFloat                                     RunValidityChecksForCampPlacementOnServer;                  // 0x0120   (0x0028)  
	FScalableFloat                                     RunValidityChecksForCampPlacementOnClients;                 // 0x0148   (0x0028)  
	FScalableFloat                                     BoxExtentsForCampValidityCheck;                             // 0x0170   (0x0028)  
	FScalableFloat                                     BoxExtentsForCampValidityCheckForPOIs;                      // 0x0198   (0x0028)  
	FScalableFloat                                     MoveCampWhenNewSquareIsAddedAfterSoftRemoval;               // 0x01C0   (0x0028)  
	SDK_UNDEFINED(80,12034) /* TMap<int32_t, UDataTable*> */ __um(PlayerPerksPerAwesomenessLevel);                 // 0x01E8   (0x0050)  
	SDK_UNDEFINED(80,12035) /* TMap<int32_t, UDataTable*> */ __um(NPCPerksPerAwesomenessLevel);                    // 0x0238   (0x0050)  
	SDK_UNDEFINED(80,12036) /* TMap<EJunoBiome, UDataTable*> */ __um(NPCPerksPerBiome);                            // 0x0288   (0x0050)  
	unsigned char                                      UnknownData00_5[0x30];                                      // 0x02D8   (0x0030)  MISSED
	class UJunoAsyncAction_WaitForEventRouter*         WaitForEventRouterAction;                                   // 0x0308   (0x0008)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x0310   (0x0010)  MISSED
	TArray<FReplicatedCampData>                        ReplicatedCampDatas;                                        // 0x0320   (0x0010)  
	unsigned char                                      UnknownData02_5[0x150];                                     // 0x0330   (0x0150)  MISSED
	TArray<FPOIEncounterDataForCamps>                  LoadedPOIEncounters;                                        // 0x0480   (0x0010)  
	unsigned char                                      UnknownData03_6[0x140];                                     // 0x0490   (0x0140)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.PlayspaceComponent_JunoRootCampManagement.IsAValidLocationForANewCamp
	// bool IsAValidLocationForANewCamp(FVector& Location, FGameplayTagContainer& OutFailureReasons);                        // [0xba332bc] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.PlayspaceComponent_JunoRootCampManagement.GetRootPlayspaceJunoCampManagementComponent
	// class UPlayspaceComponent_JunoRootCampManagement* GetRootPlayspaceJunoCampManagementComponent(class UObject* WorldContextObject); // [0xba33188] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoAwesomeInteractionConfigMappings
/// Size: 0x0050 (0x000030 - 0x000080)
class UJunoAwesomeInteractionConfigMappings : public UDataAsset
{ 
public:
	SDK_UNDEFINED(80,12037) /* TMap<FGameplayTag, FDataTableRowHandle> */ __um(InteractionConfigMap);              // 0x0030   (0x0050)  
};

/// Class /Script/JunoGameNative.JunoAwesomePlacementConfigMappings
/// Size: 0x0100 (0x000030 - 0x000130)
class UJunoAwesomePlacementConfigMappings : public UDataAsset
{ 
public:
	unsigned char                                      UnknownData00_3[0xA0];                                      // 0x0030   (0x00A0)  MISSED
	class UDataTable*                                  PlacementConfigTable;                                       // 0x00D0   (0x0008)  
	unsigned char                                      UnknownData01_5[0x50];                                      // 0x00D8   (0x0050)  MISSED
	class UDataTable*                                  CategoryConfigTable;                                        // 0x0128   (0x0008)  
};

/// Class /Script/JunoGameNative.JunoAwesomePoiConfigMappings
/// Size: 0x0060 (0x000030 - 0x000090)
class UJunoAwesomePoiConfigMappings : public UDataAsset
{ 
public:
	SDK_UNDEFINED(80,12038) /* TMap<EJunoBiome, FDataTableRowHandle> */ __um(PoiConfigMap);                        // 0x0030   (0x0050)  
	FDataTableRowHandle                                DefaultConfig;                                              // 0x0080   (0x0010)  
};

/// Class /Script/JunoGameNative.JunoAwesomeSystemDatabaseComponent
/// Size: 0x0018 (0x0000F8 - 0x000110)
class UJunoAwesomeSystemDatabaseComponent : public UFortPlayspaceComponent
{ 
public:
	class UJunoAwesomeInteractionConfigMappings*       InteractionConfigMappings;                                  // 0x00F8   (0x0008)  
	class UJunoAwesomePlacementConfigMappings*         PlacementConfigMappings;                                    // 0x0100   (0x0008)  
	class UJunoAwesomePoiConfigMappings*               PoiConfigMappings;                                          // 0x0108   (0x0008)  
};

/// Struct /Script/JunoGameNative.JunoAwesomeThresholdMapping
/// Size: 0x0090 (0x000000 - 0x000090)
struct FJunoAwesomeThresholdMapping
{ 
	TArray<class UJunoActionConfig*>                   ThresholdActionConfigs;                                     // 0x0000   (0x0010)  
	FScalableFloat                                     AwesomeLevelThreshold;                                      // 0x0010   (0x0028)  
	FScalableFloat                                     AwesomeLevelRangeMinThreshold;                              // 0x0038   (0x0028)  
	FScalableFloat                                     AwesomeLevelRangeMaxThreshold;                              // 0x0060   (0x0028)  
	EJunoAwesomeThresholdTestMode                      ThresholdTestMode;                                          // 0x0088   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x008C   (0x0004)  MISSED
};

/// Class /Script/JunoGameNative.JunoAwesomeThresholdsComponent
/// Size: 0x0038 (0x0000A0 - 0x0000D8)
class UJunoAwesomeThresholdsComponent : public UGameFrameworkComponent
{ 
public:
	SDK_UNDEFINED(16,12039) /* FMulticastInlineDelegate */ __um(OnAwesomeLevelChanged);                            // 0x00A0   (0x0010)  
	TArray<FJunoAwesomeThresholdMapping>               AwesomeThresholdToActionsMappings;                          // 0x00B0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x00C0   (0x0018)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoAwesomeThresholdsComponent.HandleJunoAwesomeLevelChanged
	// void HandleJunoAwesomeLevelChanged(FJunoAwesomeLevelChangeData& ChangeData);                                          // [0xba33208] Final|Native|Private|HasOutParms 
};

/// Struct /Script/JunoGameNative.JunoAwesomeUpgradeResourceCost
/// Size: 0x0028 (0x000000 - 0x000028)
struct FJunoAwesomeUpgradeResourceCost
{ 
	SDK_UNDEFINED(32,12040) /* TWeakObjectPtr<UFortItemDefinition*> */ __um(ResourceCostItemDefinition);           // 0x0000   (0x0020)  
	int32_t                                            ItemAmount;                                                 // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/JunoGameNative.JunoAwesomeUpgradeResourceCostList
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoAwesomeUpgradeResourceCostList
{ 
	TArray<FJunoAwesomeUpgradeResourceCost>            ResourceCostList;                                           // 0x0000   (0x0010)  
};

/// Struct /Script/JunoGameNative.JunoAwesomePointModificationData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FJunoAwesomePointModificationData
{ 
	int32_t                                            AwesomePointAmount;                                         // 0x0000   (0x0004)  
	int32_t                                            AwesomePointsPostModification;                              // 0x0004   (0x0004)  
	class AActor*                                      SourceActor;                                                // 0x0008   (0x0008)  
	class AActor*                                      TargetActor;                                                // 0x0010   (0x0008)  
	EJunoAwesomePointModificationContext               ModificationContext;                                        // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0019   (0x0007)  MISSED
	class AJunoCampActor*                              OwningCamp;                                                 // 0x0020   (0x0008)  
};

/// Struct /Script/JunoGameNative.JunoAwesomeLevelChangeData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FJunoAwesomeLevelChangeData
{ 
	int32_t                                            NewAwesomeLevel;                                            // 0x0000   (0x0004)  
	int32_t                                            OldAwesomeLevel;                                            // 0x0004   (0x0004)  
	int32_t                                            CurrentAwesomePoints;                                       // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	class AJunoCampActor*                              OwningCamp;                                                 // 0x0010   (0x0008)  
};

/// Struct /Script/JunoGameNative.AwesomePerkReward
/// Size: 0x0050 (0x000000 - 0x000050)
struct FAwesomePerkReward
{ 
	SDK_UNDEFINED(24,12041) /* FText */                __um(Title);                                                // 0x0000   (0x0018)  
	SDK_UNDEFINED(24,12042) /* FText */                __um(Description);                                          // 0x0018   (0x0018)  
	FGameplayTagContainer                              GameplayTags;                                               // 0x0030   (0x0020)  
};

/// Struct /Script/JunoGameNative.AwesomeLevelRewardEntry
/// Size: 0x0028 (0x000000 - 0x000028)
struct FAwesomeLevelRewardEntry
{ 
	int32_t                                            MaxVillagerCapacity;                                        // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FAwesomePerkReward>                         PlayerPerkRewards;                                          // 0x0008   (0x0010)  
	TArray<FAwesomePerkReward>                         NPCPerkRewards;                                             // 0x0018   (0x0010)  
};

/// Class /Script/JunoGameNative.JunoAwesomeLevelComponent
/// Size: 0x0150 (0x0000A0 - 0x0001F0)
class UJunoAwesomeLevelComponent : public UJunoCampComponentBase
{ 
public:
	SDK_UNDEFINED(16,12043) /* FMulticastInlineDelegate */ __um(OnJunoAwesomeLevelChangedDelegate);                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,12044) /* FMulticastInlineDelegate */ __um(OnJunoAwesomePointModification);                   // 0x00B0   (0x0010)  
	SDK_UNDEFINED(16,12045) /* FMulticastInlineDelegate */ __um(OnJunoAwesomeComponentReadyDelegate);              // 0x00C0   (0x0010)  
	int32_t                                            AwesomeLevel;                                               // 0x00D0   (0x0004)  
	int32_t                                            CurrentAwesomePoints;                                       // 0x00D4   (0x0004)  
	unsigned char                                      UnknownData00_5[0x50];                                      // 0x00D8   (0x0050)  MISSED
	TArray<int32_t>                                    AwesomePointGoals;                                          // 0x0128   (0x0010)  
	TArray<FJunoAwesomeUpgradeResourceCostList>        AwesomeUpgradeResourceCosts;                                // 0x0138   (0x0010)  
	FJunoAwesomeUpgradeResourceCostList                CurrentUpgradeResourceCosts;                                // 0x0148   (0x0010)  
	FGameplayTag                                       PoiType;                                                    // 0x0158   (0x0004)  
	EJunoBiome                                         CampBiomeType;                                              // 0x015C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x13];                                      // 0x015D   (0x0013)  MISSED
	bool                                               bIsReadyForUse;                                             // 0x0170   (0x0001)  
	bool                                               bIsFromPersistence;                                         // 0x0171   (0x0001)  
	unsigned char                                      UnknownData02_5[0x26];                                      // 0x0172   (0x0026)  MISSED
	FJunoAwesomePointModificationData                  CachedAwesomePointModificationData;                         // 0x0198   (0x0028)  
	FJunoAwesomeLevelChangeData                        CachedAwesomeLevelChangeData;                               // 0x01C0   (0x0018)  
	bool                                               bSkipAwesomeUpgradeResourceChecks;                          // 0x01D8   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x01D9   (0x0007)  MISSED
	TArray<FAwesomeLevelRewardEntry>                   AwesomeLevelRewardEntries;                                  // 0x01E0   (0x0010)  


	/// Functions
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.TriggerAwesomeLevelChange
	// void TriggerAwesomeLevelChange(class AFortPlayerController* TriggeringPlayer);                                        // [0xba33984] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.ProcessAwesomePointModifierCheat
	// bool ProcessAwesomePointModifierCheat(int32_t AwesomePointAmount, class AActor* SourceActor);                         // [0xba3366c] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.OnRep_CurrentAwesomePoints
	// void OnRep_CurrentAwesomePoints();                                                                                    // [0xba335f4] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.OnRep_bIsReadyForUse
	// void OnRep_bIsReadyForUse();                                                                                          // [0xba33640] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.OnRep_AwesomeLevel
	// void OnRep_AwesomeLevel();                                                                                            // [0xba335dc] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.OnAwesomeSettingsInitialized
	// void OnAwesomeSettingsInitialized();                                                                                  // [0xba335c8] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.IsReadyForUse
	// bool IsReadyForUse();                                                                                                 // [0xb403c84] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.IsAwesomeLevelUpPending
	// EJunoAwesomeLevelUpgradeQueryResult IsAwesomeLevelUpPending(class AFortPlayerController* TriggeringPlayer);           // [0xba33418] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.HasEnoughAwesomePointsForALevelUp
	// bool HasEnoughAwesomePointsForALevelUp();                                                                             // [0xba33298] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.GetMaxAwesomeLevel
	// int32_t GetMaxAwesomeLevel();                                                                                         // [0xba33150] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.GetMaxAwesomeIndex
	// int32_t GetMaxAwesomeIndex();                                                                                         // [0x9600160] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.GetCurrentUpgradeResourceCosts
	// FJunoAwesomeUpgradeResourceCostList GetCurrentUpgradeResourceCosts();                                                 // [0xba33118] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.GetCurrentAwesomePointGoal
	// int32_t GetCurrentAwesomePointGoal();                                                                                 // [0xba330f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.GetCurrentAwesomePointFloor
	// int32_t GetCurrentAwesomePointFloor();                                                                                // [0xba330d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.GetBiomeType
	// EJunoBiome GetBiomeType();                                                                                            // [0x94c1860] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.GetAwesomePointsNeededForNextLevel
	// int32_t GetAwesomePointsNeededForNextLevel();                                                                         // [0xba330ac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.GetAwesomePoints
	// int32_t GetAwesomePoints();                                                                                           // [0x9ab1418] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.GetAwesomeLevelRewardEntries
	// TArray<FAwesomeLevelRewardEntry> GetAwesomeLevelRewardEntries();                                                      // [0xba33090] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.GetAwesomeLevelFromCurrentPoints
	// int32_t GetAwesomeLevelFromCurrentPoints();                                                                           // [0xba3306c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.GetAwesomeLevel
	// int32_t GetAwesomeLevel();                                                                                            // [0x8791ea4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.BP_OnAwesomePointsModified
	// void BP_OnAwesomePointsModified(FJunoAwesomePointModificationData& ModificationData);                                 // [0x3d1d968] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.BP_OnAwesomeLevelChanged
	// void BP_OnAwesomeLevelChanged(FJunoAwesomeLevelChangeData& ChangeData);                                               // [0x3d1d968] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/JunoGameNative.JunoNamedPOIComponent
/// Size: 0x00D8 (0x0000A0 - 0x000178)
class UJunoNamedPOIComponent : public UJunoCampComponentBase
{ 
public:
	SDK_UNDEFINED(16,12046) /* FMulticastInlineDelegate */ __um(OnJunoPOIMarkerChangedDelegate);                   // 0x00A0   (0x0010)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x00B0   (0x0010)  MISSED
	SDK_UNDEFINED(24,12047) /* FText */                __um(POIName);                                              // 0x00C0   (0x0018)  
	FJunoMarker                                        Marker;                                                     // 0x00D8   (0x0098)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0170   (0x0008)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoNamedPOIComponent.SetPOIName
	// void SetPOIName(FText& NewPOIName);                                                                                   // [0xba338e8] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoNamedPOIComponent.SetMarker
	// void SetMarker(FJunoMarker& NewMarker);                                                                               // [0xba33824] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoNamedPOIComponent.ProcessCampReadyLogic
	// void ProcessCampReadyLogic(FJunoCampAwesomeStatsData& ReadyData);                                                     // [0xba33790] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoNamedPOIComponent.PrepareForCampReadyLogic
	// void PrepareForCampReadyLogic();                                                                                      // [0xba33658] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoNamedPOIComponent.OnRep_Marker
	// void OnRep_Marker();                                                                                                  // [0xba3360c] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoNamedPOIComponent.OnAwesomePointsModifiedCosmetic
	// void OnAwesomePointsModifiedCosmetic(FJunoAwesomePointModificationData& ModificationData);                            // [0xba33538] Final|Native|Protected|HasOutParms 
	// Function /Script/JunoGameNative.JunoNamedPOIComponent.OnAwesomeLevelChangedCosmetic
	// void OnAwesomeLevelChangedCosmetic(FJunoAwesomeLevelChangeData& ChangeData);                                          // [0xba334a8] Final|Native|Protected|HasOutParms 
	// Function /Script/JunoGameNative.JunoNamedPOIComponent.K2_OnPlayerExitedCampCosmetic
	// void K2_OnPlayerExitedCampCosmetic(int32_t CurrentAwesomeLevel, int32_t AwesomePoints, class AJunoCampActor* OwningCamp); // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoNamedPOIComponent.K2_OnPlayerEnteredCampCosmetic
	// void K2_OnPlayerEnteredCampCosmetic(int32_t CurrentAwesomeLevel, int32_t AwesomePoints, class AJunoCampActor* OwningCamp); // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoNamedPOIComponent.K2_OnAwesomePointsModifiedCosmetic
	// void K2_OnAwesomePointsModifiedCosmetic(FJunoAwesomePointModificationData& ModificationData);                         // [0x3d1d968] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoNamedPOIComponent.K2_OnAwesomeLevelChangedCosmetic
	// void K2_OnAwesomeLevelChangedCosmetic(FJunoAwesomeLevelChangeData& ChangeData);                                       // [0x3d1d968] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoNamedPOIComponent.GetPOIName
	// FText GetPOIName();                                                                                                   // [0xba3316c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoNamedPOIComponent.GetMarker
	// FJunoMarker GetMarker();                                                                                              // [0xba33134] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoAdventurePlayspaceBase
/// Size: 0x0028 (0x0006E8 - 0x000710)
class AJunoAdventurePlayspaceBase : public AFortPlayspace
{ 
public:
	bool                                               bShouldPersist;                                             // 0x06E8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x06E9   (0x0007)  MISSED
	FGameplayTagContainer                              AdventureTags;                                              // 0x06F0   (0x0020)  


	/// Functions
	// Function /Script/JunoGameNative.JunoAdventurePlayspaceBase.RemoveAdventureTags
	// void RemoveAdventureTags(FGameplayTagContainer& TagsToRemove);                                                        // [0xba67e68] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoAdventurePlayspaceBase.GetAdventureTags
	// FGameplayTagContainer GetAdventureTags();                                                                             // [0xba657d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoAdventurePlayspaceBase.ContainsController
	// bool ContainsController(class AController* Controller);                                                               // [0xba64f14] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoAdventurePlayspaceBase.AppendAdventureTags
	// void AppendAdventureTags(FGameplayTagContainer& TagsToAdd);                                                           // [0xba64d24] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/JunoGameNative.JunoCampRewardRecipeResult
/// Size: 0x0028 (0x000000 - 0x000028)
struct FJunoCampRewardRecipeResult
{ 
	SDK_UNDEFINED(32,12048) /* TWeakObjectPtr<UJunoBuildInstructionsItemDefinition*> */ __um(KnowledgeItemDefinition); // 0x0000   (0x0020)  
	EJunoKnowledgeState                                NewState;                                                   // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/JunoGameNative.JunoCampRewardResults
/// Size: 0x0020 (0x000000 - 0x000020)
struct FJunoCampRewardResults
{ 
	TArray<FFortItemEntry>                             Items;                                                      // 0x0000   (0x0010)  
	TArray<FJunoCampRewardRecipeResult>                Recipes;                                                    // 0x0010   (0x0010)  
};

/// Struct /Script/JunoGameNative.JunoCampSaveData
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FJunoCampSaveData
{ 
	FGuid                                              CampCenterID;                                               // 0x0000   (0x0010)  
	FPrimaryAssetId                                    CampCenterAssetID;                                          // 0x0010   (0x0008)  
	FGuid                                              CampActorID;                                                // 0x0018   (0x0010)  
	FBox                                               CampBounds;                                                 // 0x0028   (0x0038)  
	int64_t                                            SoftRemovedElapsedJunoGameTime;                             // 0x0060   (0x0008)  
	int64_t                                            LastRewardsRollInJunoGameTime;                              // 0x0068   (0x0008)  
	FJunoCampRewardResults                             LastRewardResults;                                          // 0x0070   (0x0020)  
	FName                                              LastRewardsRollLootTierGroupToSave;                         // 0x0090   (0x0004)  
	int32_t                                            LastAwesomenessLevel;                                       // 0x0094   (0x0004)  
	EJunoBiome                                         CampBiome;                                                  // 0x0098   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0099   (0x0007)  MISSED
};

/// Struct /Script/JunoGameNative.JunoAllCampsSaveData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoAllCampsSaveData
{ 
	TArray<FJunoCampSaveData>                          Camps;                                                      // 0x0000   (0x0010)  
};

/// Class /Script/JunoGameNative.JunoCampPersistenceFeatureData
/// Size: 0x0018 (0x000040 - 0x000058)
class UJunoCampPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0040   (0x0008)  MISSED
	FJunoAllCampsSaveData                              SavedAllCamps;                                              // 0x0048   (0x0010)  
};

/// Class /Script/JunoGameNative.JunoCampPersistenceFeatureDataActor
/// Size: 0x0018 (0x0002D0 - 0x0002E8)
class AJunoCampPersistenceFeatureDataActor : public AJunoPersistenceFeatureDataActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x02D0   (0x0008)  MISSED
	TArray<FJunoCampSaveData>                          SavedCamps;                                                 // 0x02D8   (0x0010)  
};

/// Class /Script/JunoGameNative.JunoCampPersistenceFeatureDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoCampPersistenceFeatureDataInterface : public UInterface
{ 
public:
};

/// Class /Script/JunoGameNative.JunoQuestActorSpawnPoint
/// Size: 0x0020 (0x000290 - 0x0002B0)
class AJunoQuestActorSpawnPoint : public AActor
{ 
public:
	FGameplayTagContainer                              SpawnTags;                                                  // 0x0290   (0x0020)  
};

/// Class /Script/JunoGameNative.JunoVerbProcessor_AwesomeLevelIncreased
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UJunoVerbProcessor_AwesomeLevelIncreased : public UFortObjectiveProcessor
{ 
public:
};

/// Class /Script/JunoGameNative.JunoVerbProcessor_GuidedBuildCompleted
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UJunoVerbProcessor_GuidedBuildCompleted : public UFortObjectiveProcessor
{ 
public:
};

/// Class /Script/JunoGameNative.JunoVerbProcessor_GuidedBuildStageCompleted
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UJunoVerbProcessor_GuidedBuildStageCompleted : public UFortObjectiveProcessor
{ 
public:
};

/// Class /Script/JunoGameNative.JunoVerbProcessor_RecruitNPC
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UJunoVerbProcessor_RecruitNPC : public UFortObjectiveProcessor
{ 
public:
};

/// Class /Script/JunoGameNative.JunoVerbProcessor_TemperatureUpdated
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UJunoVerbProcessor_TemperatureUpdated : public UFortObjectiveProcessor
{ 
public:
};

/// Class /Script/JunoGameNative.JunoAdventureGameplayVolume
/// Size: 0x0040 (0x000330 - 0x000370)
class AJunoAdventureGameplayVolume : public AGameplayVolume
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0330   (0x0008)  MISSED
	bool                                               bShouldPersist;                                             // 0x0338   (0x0001)  
	bool                                               bDestroyLinkedPlayspaceOnEndPlay;                           // 0x0339   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1E];                                      // 0x033A   (0x001E)  MISSED
	FGuid                                              SavedActorGuid;                                             // 0x0358   (0x0010)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0368   (0x0008)  MISSED
};

/// Class /Script/JunoGameNative.JunoAINavInvokerComponent
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UJunoAINavInvokerComponent : public UNavigationInvokerComponent
{ 
public:


	/// Functions
	// Function /Script/JunoGameNative.JunoAINavInvokerComponent.OnPlayerPossessed
	// void OnPlayerPossessed(class APawn* Pawn);                                                                            // [0xba67644] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoAINavInvokerComponent.OnNPCPossessed
	// void OnNPCPossessed(class APawn* Pawn);                                                                               // [0xba675c4] Final|Native|Protected 
};

/// Class /Script/JunoGameNative.JunoNavSystemConfig
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UJunoNavSystemConfig : public UAthenaNavSystemConfig
{ 
public:
};

/// Class /Script/JunoGameNative.JunoPhysicsObjectNavigationComponent
/// Size: 0x00A0 (0x0000A0 - 0x000140)
class UJunoPhysicsObjectNavigationComponent : public UActorComponent
{ 
public:
	float                                              LowSpeedThreshold;                                          // 0x00A0   (0x0004)  
	float                                              LowSpeedDistanceThreshold;                                  // 0x00A4   (0x0004)  
	float                                              LowSpeedRotationThreshold;                                  // 0x00A8   (0x0004)  
	float                                              LowSpeedScaleThreshold;                                     // 0x00AC   (0x0004)  
	float                                              LowSpeedDurationTrigger;                                    // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x6C];                                      // 0x00B4   (0x006C)  MISSED
	class UPrimitiveComponent*                         PrimitiveComponentAffectingNavMesh;                         // 0x0120   (0x0008)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0128   (0x0018)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoPhysicsObjectNavigationComponent.OnWake
	// void OnWake(class UPrimitiveComponent* SimulatingComponent, FName BoneName);                                          // [0xba67990] Final|RequiredAPI|Native|Protected 
	// Function /Script/JunoGameNative.JunoPhysicsObjectNavigationComponent.OnSleep
	// void OnSleep(class UPrimitiveComponent* SimulatingComponent, FName BoneName);                                         // [0xba678cc] Final|RequiredAPI|Native|Protected 
	// Function /Script/JunoGameNative.JunoPhysicsObjectNavigationComponent.OnRemovedFromClusterUnion
	// void OnRemovedFromClusterUnion(class UClusterUnionComponent* ClusterUnion, class UPrimitiveComponent* Component);     // [0xba677f4] Final|RequiredAPI|Native|Protected 
	// Function /Script/JunoGameNative.JunoPhysicsObjectNavigationComponent.OnClusterUnionPhysicsObjectAwakeChanged
	// void OnClusterUnionPhysicsObjectAwakeChanged(class UPrimitiveComponent* SimulatingComponent, bool bIsAwake);          // [0xba674fc] Final|RequiredAPI|Native|Protected 
	// Function /Script/JunoGameNative.JunoPhysicsObjectNavigationComponent.OnAddedToClusterUnion
	// void OnAddedToClusterUnion(class UClusterUnionComponent* ClusterUnion, class UPrimitiveComponent* Component);         // [0xba67308] Final|RequiredAPI|Native|Protected 
};

/// Class /Script/JunoGameNative.JunoGameFeatureAction_AddJunoAnalytics
/// Size: 0x0008 (0x000028 - 0x000030)
class UJunoGameFeatureAction_AddJunoAnalytics : public UGameFeatureAction
{ 
public:
	class UJunoAnalytics*                              JunoAnalytics;                                              // 0x0028   (0x0008)  
};

/// Class /Script/JunoGameNative.JunoAnimationBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoAnimationBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/JunoGameNative.JunoAnimationBlueprintLibrary.ImpactOrDamage
	// void ImpactOrDamage(FGameplayTagContainer& DamageTags, class AFortPawn* DamageInstigator, class AActor* DamageSource, EImpactOrDamage_ExecutionPin& ExecutionPin); // [0xba67018] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoAnimationBlueprintLibrary.HasMatchingImpactCue
	// bool HasMatchingImpactCue(FGameplayTagContainer& DamageTags, class AFortPawn* DamageInstigator, class AActor* DamageSource); // [0xba66e58] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoAnimationBlueprintLibrary.GetFacingTargetRotation
	// FRotator GetFacingTargetRotation(class USceneComponent* Source, class USceneComponent* Target, bool bYawOnly);        // [0xba6644c] Final|Native|Static|Private|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoAnimationBlueprintLibrary.GetFacingRotation
	// FRotator GetFacingRotation(FVector SourceLocation, FVector TargetLocation);                                           // [0xba661dc] Final|Native|Static|Private|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoAnimationBlueprintLibrary.GetClampedWarpTargetLocation
	// void GetClampedWarpTargetLocation(FVector WarpStartLocation, FVector WarpTargetLocation, float WarpTargetRadius, float WarpDistanceMax, bool ConstrainToPawnForwardVector, FVector PawnForward, FVector& ClampedTargetLocation, FRotator& FaceTargetRotation); // [0xba65a54] Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoAnimationBlueprintLibrary.GetCapsuleActorSpaceBounds
	// void GetCapsuleActorSpaceBounds(class UCapsuleComponent* Capsule, FVector& Origin, FVector& Extents);                 // [0xba658ac] Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoAnimationBlueprintLibrary.AbilityMontage_SetNextSection
	// void AbilityMontage_SetNextSection(class AFortPawn* FortPawn, FName NextSection);                                     // [0xba64c38] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoAnimationBlueprintLibrary.AbilityMontage_ReplicatePosition
	// void AbilityMontage_ReplicatePosition(class AFortPawn* FortPawn, bool bReplicatePosition);                            // [0xba64b58] Final|Native|Static|Private|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoAnimInstance
/// Size: 0x0010 (0x000460 - 0x000470)
class UJunoAnimInstance : public UFortBaseAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0458   (0x0018)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoAnimInstance.UpdateAnimationTimer
	// void UpdateAnimationTimer(float& TimeRemaining, bool& bTimeIsExpired, EUpdateAnimationTimer_ExecutionPin& ExecutionPin); // [0xba68664] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoAnimInstance.RandomizeAnimationTimer
	// void RandomizeAnimationTimer(float MinTime, float MaxTime, float& TimeRemaining, bool& bTimeIsExpired);               // [0xba67a54] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoAnimInstance.GetMainAnimInstance
	// class UJunoAnimInstance* GetMainAnimInstance();                                                                       // [0xba66af0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoAnimInstance.BlendCurvesByName
	// float BlendCurvesByName(FName CurveA, FName CurveB, float Alpha);                                                     // [0xba64de0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoGliderAnimInstance
/// Size: 0x0010 (0x000830 - 0x000840)
class UJunoGliderAnimInstance : public UFortGliderAnimInstance
{ 
public:
	bool                                               bIsSkydiving : 1;                                           // 0x0828:0 (0x0001)  
	bool                                               bIsParachuteOpen : 1;                                       // 0x0828:1 (0x0001)  
	bool                                               bGliderUseFastDeploy : 1;                                   // 0x0828:2 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0829   (0x0003)  MISSED
	float                                              GliderPitch;                                                // 0x082C   (0x0004)  
	float                                              GliderRoll;                                                 // 0x0830   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0834   (0x0004)  MISSED
	class UJunoPlayerAnimInstance*                     PlayerAnimInstance;                                         // 0x0838   (0x0008)  
};

/// Class /Script/JunoGameNative.JunoMinifigAnimationComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UJunoMinifigAnimationComponent : public UPawnComponent
{ 
public:
	FRotator                                           MinifigLookAtRotation;                                      // 0x00A0   (0x0018)  
};

/// Class /Script/JunoGameNative.JunoPawnAnimInstance
/// Size: 0x0110 (0x000470 - 0x000580)
class UJunoPawnAnimInstance : public UJunoAnimInstance
{ 
public:
	float                                              PawnMovingSpeedThreshold;                                   // 0x0470   (0x0004)  
	bool                                               bIsFalling;                                                 // 0x0474   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0475   (0x0003)  MISSED
	float                                              PawnSpeed2D;                                                // 0x0478   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x047C   (0x0004)  MISSED
	FVector                                            PawnVelocity;                                               // 0x0480   (0x0018)  
	FRotator                                           PawnRotationRate;                                           // 0x0498   (0x0018)  
	bool                                               bPawnIsDying : 1;                                           // 0x04B0:0 (0x0001)  
	bool                                               bPawnIsFalling : 1;                                         // 0x04B0:1 (0x0001)  
	bool                                               bPawnIsOnGround : 1;                                        // 0x04B0:2 (0x0001)  
	bool                                               bPawnIsIdling : 1;                                          // 0x04B0:3 (0x0001)  
	bool                                               bPawnIsJumping : 1;                                         // 0x04B0:4 (0x0001)  
	bool                                               bPawnIsMoving2D : 1;                                        // 0x04B0:5 (0x0001)  
	bool                                               bPawnIsMovingOnGround : 1;                                  // 0x04B0:6 (0x0001)  
	bool                                               bPawnWasMoving2D : 1;                                       // 0x04B0:7 (0x0001)  
	bool                                               bPawnHasAcceleration : 1;                                   // 0x04B1:0 (0x0001)  
	bool                                               bPawnHasRootMotion : 1;                                     // 0x04B1:1 (0x0001)  
	bool                                               bPawnHasVelocity : 1;                                       // 0x04B1:2 (0x0001)  
	bool                                               bPawnIdleBreakTimeIsExpired : 1;                            // 0x04B1:3 (0x0001)  
	bool                                               bPawnMovingIdleBreakTimeIsExpired : 1;                      // 0x04B1:4 (0x0001)  
	unsigned char                                      UnknownData02_4[0x6];                                       // 0x04B2   (0x0006)  MISSED
	FVector                                            PawnAcceleration;                                           // 0x04B8   (0x0018)  
	float                                              PawnAccelerationDirection;                                  // 0x04D0   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x04D4   (0x0004)  MISSED
	FRotator                                           PawnRotation;                                               // 0x04D8   (0x0018)  
	FRotator                                           PawnRotationDelta;                                          // 0x04F0   (0x0018)  
	FRotator                                           PawnRotationRateNormalized;                                 // 0x0508   (0x0018)  
	FRotator                                           PawnRootRotation;                                           // 0x0520   (0x0018)  
	float                                              PawnVelocityDirection;                                      // 0x0538   (0x0004)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x053C   (0x0004)  MISSED
	FVector                                            PawnPreviousVelocity;                                       // 0x0540   (0x0018)  
	float                                              PawnIdleBreakTime;                                          // 0x0558   (0x0004)  
	float                                              PawnMovingIdleBreakTime;                                    // 0x055C   (0x0004)  
	int32_t                                            PawnCurrentLOD;                                             // 0x0560   (0x0004)  
	unsigned char                                      UnknownData05_5[0x4];                                       // 0x0564   (0x0004)  MISSED
	FVector                                            PawnLocation;                                               // 0x0568   (0x0018)  


	/// Functions
	// Function /Script/JunoGameNative.JunoPawnAnimInstance.StartPawnMovingIdleBreakTimer
	// void StartPawnMovingIdleBreakTimer(float MinTime, float MaxTime);                                                     // [0xba68444] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPawnAnimInstance.StartPawnIdleBreakTimer
	// void StartPawnIdleBreakTimer(float MinTime, float MaxTime);                                                           // [0xba68374] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPawnAnimInstance.ClearPawnMovingIdleBreakTimer
	// void ClearPawnMovingIdleBreakTimer();                                                                                 // [0xba64ef8] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPawnAnimInstance.ClearPawnIdleBreakTimer
	// void ClearPawnIdleBreakTimer();                                                                                       // [0xba64edc] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/JunoGameNative.JunoMinifigLayeringParameters
/// Size: 0x0014 (0x000000 - 0x000014)
struct FJunoMinifigLayeringParameters
{ 
	float                                              Prop1;                                                      // 0x0000   (0x0004)  
	float                                              Prop2;                                                      // 0x0004   (0x0004)  
	float                                              AddLocomotion;                                              // 0x0008   (0x0004)  
	float                                              AddSecondary;                                               // 0x000C   (0x0004)  
	float                                              MeshSpace;                                                  // 0x0010   (0x0004)  
};

/// Struct /Script/JunoGameNative.JunoMinifigLayeringMask
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FJunoMinifigLayeringMask
{ 
	FJunoMinifigLayeringParameters                     head;                                                       // 0x0000   (0x0014)  
	FJunoMinifigLayeringParameters                     Torso;                                                      // 0x0014   (0x0014)  
	FJunoMinifigLayeringParameters                     ArmL;                                                       // 0x0028   (0x0014)  
	FJunoMinifigLayeringParameters                     ArmR;                                                       // 0x003C   (0x0014)  
	FJunoMinifigLayeringParameters                     HandL;                                                      // 0x0050   (0x0014)  
	FJunoMinifigLayeringParameters                     HandR;                                                      // 0x0064   (0x0014)  
	FJunoMinifigLayeringParameters                     pelvis;                                                     // 0x0078   (0x0014)  
	FJunoMinifigLayeringParameters                     Legs;                                                       // 0x008C   (0x0014)  
};

/// Class /Script/JunoGameNative.JunoPlayerAnimInstance
/// Size: 0x0370 (0x000580 - 0x0008F0)
class UJunoPlayerAnimInstance : public UJunoPawnAnimInstance
{ 
public:
	float                                              PlayerLookAngleFromPawnMax;                                 // 0x0580   (0x0004)  
	float                                              PlayerLookAngleFromRootMax;                                 // 0x0584   (0x0004)  
	float                                              PlayerFaceVisibleAngle;                                     // 0x0588   (0x0004)  
	float                                              PlayerRunningAccelerationThreshold;                         // 0x058C   (0x0004)  
	float                                              PlayerWalkingAccelerationThreshold;                         // 0x0590   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0594   (0x0004)  MISSED
	class UCurveVector*                                PlayerStrafeCurve;                                          // 0x0598   (0x0008)  
	class AFortPlayerPawn*                             FortPlayerPawn;                                             // 0x05A0   (0x0008)  
	bool                                               bIsAccelerating2D : 1;                                      // 0x05A8:0 (0x0001)  
	bool                                               bIsSurfaceSwimming : 1;                                     // 0x05A8:1 (0x0001)  
	bool                                               bIsMovingAndInMotionEmote : 1;                              // 0x05A8:2 (0x0001)  
	bool                                               bIsSlopeSliding;                                            // 0x05A9   (0x0001)  
	bool                                               bIsInVehicle : 1;                                           // 0x05AA:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x5];                                       // 0x05AB   (0x0005)  MISSED
	FVector                                            LocalAcceleration;                                          // 0x05B0   (0x0018)  
	float                                              LocalAccelYawAngle;                                         // 0x05C8   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x05CC   (0x0004)  MISSED
	FVector                                            LocalVelocity;                                              // 0x05D0   (0x0018)  
	float                                              LocalVelocityYawAngle;                                      // 0x05E8   (0x0004)  
	float                                              MaxSpeed;                                                   // 0x05EC   (0x0004)  
	float                                              MaxSwimSpeed;                                               // 0x05F0   (0x0004)  
	float                                              VelocityZ;                                                  // 0x05F4   (0x0004)  
	FVector                                            WorldAcceleration;                                          // 0x05F8   (0x0018)  
	FVector                                            WorldVelocity;                                              // 0x0610   (0x0018)  
	FRotator                                           ActorRotationLastTick;                                      // 0x0628   (0x0018)  
	float                                              YawDeltaCurrentTick;                                        // 0x0640   (0x0004)  
	float                                              YawDeltaLastTick;                                           // 0x0644   (0x0004)  
	float                                              YawDeltaSmoothed;                                           // 0x0648   (0x0004)  
	bool                                               bIsTacticalSprint : 1;                                      // 0x064C:0 (0x0001)  
	bool                                               bIsSkydiving : 1;                                           // 0x064C:1 (0x0001)  
	bool                                               bIsParachuteOpen : 1;                                       // 0x064C:2 (0x0001)  
	bool                                               bGliderUseFastDeploy : 1;                                   // 0x064C:3 (0x0001)  
	bool                                               bGliderIsOpen : 1;                                          // 0x064C:4 (0x0001)  
	bool                                               bGliderWasOpen : 1;                                         // 0x064C:5 (0x0001)  
	bool                                               bPlayerProp1Aim : 1;                                        // 0x064C:6 (0x0001)  
	bool                                               bPlayerProp2Aim : 1;                                        // 0x064C:7 (0x0001)  
	bool                                               bPlayerIsCold : 1;                                          // 0x064D:0 (0x0001)  
	bool                                               bPlayerIsMildCold : 1;                                      // 0x064D:1 (0x0001)  
	bool                                               bPlayerIsVeryCold : 1;                                      // 0x064D:2 (0x0001)  
	bool                                               bPlayerIsHot : 1;                                           // 0x064D:3 (0x0001)  
	bool                                               bPlayerIsMildHot : 1;                                       // 0x064D:4 (0x0001)  
	bool                                               bPlayerIsVeryHot : 1;                                       // 0x064D:5 (0x0001)  
	bool                                               bPlayerIsHumanControlled : 1;                               // 0x064D:6 (0x0001)  
	bool                                               bPlayerIsSneaking : 1;                                      // 0x064D:7 (0x0001)  
	bool                                               bPlayerIsFishing : 1;                                       // 0x064E:0 (0x0001)  
	bool                                               bPlayerWasFishing : 1;                                      // 0x064E:1 (0x0001)  
	bool                                               bPlayerIsFocusing : 1;                                      // 0x064E:2 (0x0001)  
	bool                                               bPlayerIsFlying : 1;                                        // 0x064E:3 (0x0001)  
	bool                                               bPlayerIsFacingController : 1;                              // 0x064E:4 (0x0001)  
	bool                                               bPlayerIsMovingBackwards : 1;                               // 0x064E:5 (0x0001)  
	bool                                               bPlayerIsProp1AimTargetValid : 1;                           // 0x064E:6 (0x0001)  
	bool                                               bPlayerIsPushing : 1;                                       // 0x064E:7 (0x0001)  
	bool                                               bPlayerWasPushing : 1;                                      // 0x064F:0 (0x0001)  
	bool                                               bPlayerIsRunning : 1;                                       // 0x064F:1 (0x0001)  
	bool                                               bPlayerIsSprinting : 1;                                     // 0x064F:2 (0x0001)  
	bool                                               bPlayerIsWalking : 1;                                       // 0x064F:3 (0x0001)  
	bool                                               bPlayerIsWaterJumping : 1;                                  // 0x064F:4 (0x0001)  
	bool                                               bPlayerShouldMove : 1;                                      // 0x064F:5 (0x0001)  
	bool                                               bPlayerShouldTurnInPlace : 1;                               // 0x064F:6 (0x0001)  
	bool                                               bPlayerFaceIsVisible : 1;                                   // 0x064F:7 (0x0001)  
	bool                                               bPlayerUpperBodyIsSwinging : 1;                             // 0x0650:0 (0x0001)  
	bool                                               bPlayerProp1MontageActive : 1;                              // 0x0650:1 (0x0001)  
	bool                                               bPlayerProp2MontageActive : 1;                              // 0x0650:2 (0x0001)  
	bool                                               bPlayerHeadShouldFollowCamera : 1;                          // 0x0650:3 (0x0001)  
	SDK_UNDEFINED(1,12049) /* TEnumAsByte<EFortMovementStyle> */ __um(PlayerMovementStyle);                        // 0x0651   (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x0652   (0x0002)  MISSED
	float                                              PlayerAccelerationAmount;                                   // 0x0654   (0x0004)  
	FRotator                                           PlayerLookAtRotation;                                       // 0x0658   (0x0018)  
	FRotator                                           PlayerRotationTarget;                                       // 0x0670   (0x0018)  
	FRotator                                           PlayerPreviousRotationTarget;                               // 0x0688   (0x0018)  
	float                                              PlayerRotationTargetRate;                                   // 0x06A0   (0x0004)  
	float                                              PlayerVelocityYawRate;                                      // 0x06A4   (0x0004)  
	float                                              PlayerUseProceduralFaceAnim;                                // 0x06A8   (0x0004)  
	FJunoMinifigLayeringMask                           LayeringMask;                                               // 0x06AC   (0x00A0)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x074C   (0x0004)  MISSED
	FInputAlphaBoolBlend                               SecondaryMotionLODBlend;                                    // 0x0750   (0x0048)  
	int32_t                                            SecondaryMotionLODThreshold;                                // 0x0798   (0x0004)  
	float                                              SecondaryMotionLODBlendTime;                                // 0x079C   (0x0004)  
	float                                              GliderPitch;                                                // 0x07A0   (0x0004)  
	float                                              GliderRoll;                                                 // 0x07A4   (0x0004)  
	class AFortWeapon*                                 PlayerMainHandItem;                                         // 0x07A8   (0x0008)  
	class AFortWeapon*                                 PlayerOffHandItem;                                          // 0x07B0   (0x0008)  
	FVector2D                                          PlayerAimOffset;                                            // 0x07B8   (0x0010)  
	FVector                                            PlayerAimOffsetTemp;                                        // 0x07C8   (0x0018)  
	FVector2D                                          PlayerProp1AimOffset;                                       // 0x07E0   (0x0010)  
	FVector                                            PlayerProp1AimTargetLocation;                               // 0x07F0   (0x0018)  
	FRotator                                           PlayerSlopeMatchingRotationOffset;                          // 0x0808   (0x0018)  
	float                                              PlayerSlopeMatchingWeight;                                  // 0x0820   (0x0004)  
	unsigned char                                      UnknownData05_5[0x4];                                       // 0x0824   (0x0004)  MISSED
	FRotator                                           PlayerPreviousRootRotation;                                 // 0x0828   (0x0018)  
	EJunoMinifigRotationMode                           PlayerRotationMode;                                         // 0x0840   (0x0001)  
	unsigned char                                      UnknownData06_5[0x7];                                       // 0x0841   (0x0007)  MISSED
	FRotator                                           SmoothedRotationTarget;                                     // 0x0848   (0x0018)  
	FRotator                                           SuperSmoothedRotationTarget;                                // 0x0860   (0x0018)  
	FRotator                                           PlayerStartingRotation;                                     // 0x0878   (0x0018)  
	float                                              PlayerStartingAngle;                                        // 0x0890   (0x0004)  
	bool                                               bPlayerEmotionHasChanged;                                   // 0x0894   (0x0001)  
	unsigned char                                      UnknownData07_6[0x5B];                                      // 0x0895   (0x005B)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoPlayerAnimInstance.UpdatePlayerRotationTarget
	// void UpdatePlayerRotationTarget(float DeltaSeconds);                                                                  // [0xba68e14] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPlayerAnimInstance.UpdatePlayerRootRotation
	// void UpdatePlayerRootRotation(float DeltaSeconds);                                                                    // [0xba68d94] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPlayerAnimInstance.UpdatePlayerCurveRotateToStaticTarget
	// void UpdatePlayerCurveRotateToStaticTarget(float DeltaSeconds);                                                       // [0xba68d18] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPlayerAnimInstance.UpdatePlayerCurveRotateToMovingTarget
	// void UpdatePlayerCurveRotateToMovingTarget(float DeltaSeconds);                                                       // [0xba68c98] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPlayerAnimInstance.UpdatePlayerContinuousRotateToTarget
	// void UpdatePlayerContinuousRotateToTarget(float DeltaSeconds);                                                        // [0xba68c18] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPlayerAnimInstance.UpdatePlayerAimOffsetWithRootCompensation
	// void UpdatePlayerAimOffsetWithRootCompensation(FRotator LookAtRotation, float InterpSpeed, bool bCompensate, float DeltaSeconds); // [0xba68810] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPlayerAnimInstance.UpdatePlayerAimOffset
	// void UpdatePlayerAimOffset(float DeltaSeconds);                                                                       // [0xba68790] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPlayerAnimInstance.ShouldForcePlayerToFacePawnRotation
	// bool ShouldForcePlayerToFacePawnRotation();                                                                           // [0xba68350] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerAnimInstance.SetPlayerRotationMode
	// void SetPlayerRotationMode(EJunoMinifigRotationMode RotationMode);                                                    // [0xba68230] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPlayerAnimInstance.OnPlayerStoppedPushing
	// void OnPlayerStoppedPushing();                                                                                        // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoPlayerAnimInstance.OnPlayerOffHandItemChanged
	// void OnPlayerOffHandItemChanged(class AFortWeapon* CurrentItem);                                                      // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoPlayerAnimInstance.OnPlayerMainHandItemChanged
	// void OnPlayerMainHandItemChanged(class AFortWeapon* CurrentItem);                                                     // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoPlayerAnimInstance.OnPlayerEmotionChanged
	// void OnPlayerEmotionChanged();                                                                                        // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoPlayerAnimInstance.GetPlayerStrideScale
	// float GetPlayerStrideScale();                                                                                         // [0xba66c60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerAnimInstance.GetPlayerRotationTargetInterpolationSpeeds
	// void GetPlayerRotationTargetInterpolationSpeeds(float& SmoothedSpeed, float& SuperSmoothedSpeed);                     // [0xba66b88] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerAnimInstance.GetPlayerRotationMode
	// EJunoMinifigRotationMode GetPlayerRotationMode();                                                                     // [0xba66b34] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerAnimInstance.GetPlayerLeanAmount
	// float GetPlayerLeanAmount();                                                                                          // [0xba66b14] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoPlayerAnimInstanceProxy
/// Size: 0x0000 (0x001620 - 0x001620)
class UJunoPlayerAnimInstanceProxy : public UFortPlayerAnimInstanceProxy
{ 
public:
};

/// Class /Script/JunoGameNative.AudioEventAggregatorSubsystem
/// Size: 0x0080 (0x000030 - 0x0000B0)
class UAudioEventAggregatorSubsystem : public UWorldSubsystem
{ 
public:
	SDK_UNDEFINED(16,12050) /* FMulticastInlineDelegate */ __um(OnSoundBreakEvents);                               // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,12051) /* FMulticastInlineDelegate */ __um(OnSoundCollisionEvents);                           // 0x0040   (0x0010)  
	SDK_UNDEFINED(16,12052) /* FMulticastInlineDelegate */ __um(OnActiveSoundBreakEventsUpdated);                  // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,12053) /* FMulticastInlineDelegate */ __um(OnActiveSoundCollisionEventsUpdated);              // 0x0060   (0x0010)  
	class UWorld*                                      World;                                                      // 0x0070   (0x0008)  
	unsigned char                                      UnknownData00_6[0x38];                                      // 0x0078   (0x0038)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.AudioEventAggregatorSubsystem.SetRadius
	// void SetRadius(float Radius);                                                                                         // [0xba682cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.AudioEventAggregatorSubsystem.SetCollisionEventLifetime
	// void SetCollisionEventLifetime(float Time);                                                                           // [0xba681b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.AudioEventAggregatorSubsystem.SetCollisionDeltaVelocityMagnitudeThreshold
	// void SetCollisionDeltaVelocityMagnitudeThreshold(float Magnitude);                                                    // [0xba68130] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.AudioEventAggregatorSubsystem.SetBreakEventLifetime
	// void SetBreakEventLifetime(float Time);                                                                               // [0xba680b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.AudioEventAggregatorSubsystem.RemoveActiveCollisionEvent
	// void RemoveActiveCollisionEvent(FGuid EventId);                                                                       // [0xba67d10] Final|Native|Public|HasDefaults 
	// Function /Script/JunoGameNative.AudioEventAggregatorSubsystem.RemoveActiveBreakEvent
	// void RemoveActiveBreakEvent(FGuid EventId);                                                                           // [0xba67bb8] Final|Native|Public|HasDefaults 
	// Function /Script/JunoGameNative.AudioEventAggregatorSubsystem.IsAggregatingCollisionEvents
	// bool IsAggregatingCollisionEvents();                                                                                  // [0xba672d4] Final|Native|Public  
	// Function /Script/JunoGameNative.AudioEventAggregatorSubsystem.InitChaosEventRelay
	// void InitChaosEventRelay();                                                                                           // [0xba672a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.AudioEventAggregatorSubsystem.FilterAndGroupCollisionEvents
	// void FilterAndGroupCollisionEvents(TArray<FCollisionChaosEvent>& CollisionEvents);                                    // [0xba65738] Final|Native|Public|HasOutParms 
	// Function /Script/JunoGameNative.AudioEventAggregatorSubsystem.FilterAndGroupBreakEvents
	// void FilterAndGroupBreakEvents(TArray<FChaosBreakEvent>& BreakEvents);                                                // [0xba65078] Final|Native|Public|HasOutParms 
	// Function /Script/JunoGameNative.AudioEventAggregatorSubsystem.DeinitChaosEventRelay
	// void DeinitChaosEventRelay();                                                                                         // [0xba65064] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoFoleyContext
/// Size: 0x0008 (0x0000D8 - 0x0000E0)
class UJunoFoleyContext : public UFortPlayerFoleyContext
{ 
public:
	float                                              PitchMultiplier;                                            // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00DC   (0x0004)  MISSED
};

/// Class /Script/JunoGameNative.JunoActiveItemAnimContext
/// Size: 0x0000 (0x000098 - 0x000098)
class UJunoActiveItemAnimContext : public USoundLibraryAnimContext
{ 
public:
};

/// Class /Script/JunoGameNative.JunoCameraMode_OrbitCam
/// Size: 0x00C0 (0x001BA0 - 0x001C60)
class UJunoCameraMode_OrbitCam : public UFortCameraMode_ThirdPerson
{ 
public:
	bool                                               bIsBuildPreviewMode;                                        // 0x1BA0   (0x0001)  
	unsigned char                                      UnknownData00_5[0xF];                                       // 0x1BA1   (0x000F)  MISSED
	FTransform                                         BuildPreviewActorTransform;                                 // 0x1BB0   (0x0060)  
	FBox                                               BuildPreviewLocalBounds;                                    // 0x1C10   (0x0038)  
	bool                                               bOverrideCameraOriginDuringBuildPreview;                    // 0x1C48   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x1C49   (0x0007)  MISSED
	class UCurveFloat*                                 BuildPreviewBoundsToForwardDistanceScale;                   // 0x1C50   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x1C58   (0x0008)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoCameraMode_OrbitCam.UpdateCameraBP
	// void UpdateCameraBP(class AActor* ViewTarget, float DeltaTime, FTViewTarget& OutVT);                                  // [0x3d1d968] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoCameraMode_OrbitCam.OnBecomeActiveBP
	// void OnBecomeActiveBP(class AActor* ViewTarget);                                                                      // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoCameraMode_OrbitCam.IsCurrentlyInBuildPreviewMode
	// bool IsCurrentlyInBuildPreviewMode();                                                                                 // [0xba672f0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoCameraMode_OrbitCam.GetBuildPreviewerFromViewTarget
	// class AJunoBuilderTool* GetBuildPreviewerFromViewTarget(class AActor* ViewTarget);                                    // [0xba657f0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCameraMode_OrbitCam.CalculateCameraOriginForBuildPreview
	// bool CalculateCameraOriginForBuildPreview(class AActor* ViewTarget, FVector& OutOrigin);                              // [0x3d1d968] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent|Const 
};

/// Class /Script/JunoGameNative.FortClientPilot_QuickSmokeJuno
/// Size: 0x0010 (0x000310 - 0x000320)
class UFortClientPilot_QuickSmokeJuno : public UFortClientPilot_GameplayBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0310   (0x0010)  MISSED
};

/// Class /Script/JunoGameNative.FortPickupInteractOverrideComponent_Juno
/// Size: 0x0000 (0x0000C0 - 0x0000C0)
class UFortPickupInteractOverrideComponent_Juno : public UFortPickupInteractOverrideComponent
{ 
public:
};

/// Class /Script/JunoGameNative.JunoAIPersistenceComponent
/// Size: 0x0028 (0x0000A8 - 0x0000D0)
class UJunoAIPersistenceComponent : public UFortPawnComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x00A8   (0x0028)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoAIPersistenceComponent.HandleAIFullySpawned
	// void HandleAIFullySpawned(class AAIController* Controller, class AFortPawn* Pawn);                                    // [0xba66d14] Final|Native|Protected 
};

/// Class /Script/JunoGameNative.JunoCameraModeOverrideComponent
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UJunoCameraModeOverrideComponent : public UFortCameraModeOverrideComponent
{ 
public:
};

/// Struct /Script/JunoGameNative.JunoBedAssignmentCharacterInfo
/// Size: 0x0048 (0x000000 - 0x000048)
struct FJunoBedAssignmentCharacterInfo
{ 
	FGameplayTag                                       AICharacterGameplayTag;                                     // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(24,12054) /* FText */                __um(AICharacterDisplayName);                               // 0x0008   (0x0018)  
	SDK_UNDEFINED(32,12055) /* TWeakObjectPtr<UTexture2D*> */ __um(AICharacterIcon);                               // 0x0020   (0x0020)  
	bool                                               bHasBed;                                                    // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0041   (0x0007)  MISSED
};

/// Struct /Script/JunoGameNative.JunoReplicatedCharacterData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FJunoReplicatedCharacterData
{ 
	int32_t                                            ForceRepNumber;                                             // 0x0000   (0x0004)  
	EJunoBedAssignmentProcessingState                  ProcessingState;                                            // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	TArray<FJunoBedAssignmentCharacterInfo>            AssignedCharacterInfo;                                      // 0x0008   (0x0010)  
	TArray<FUniqueNetIdRepl>                           PlayerNetIds;                                               // 0x0018   (0x0010)  
};

/// Class /Script/JunoGameNative.JunoControllerComponent_BedAssignmentNetworkEvents
/// Size: 0x0050 (0x0000A8 - 0x0000F8)
class UJunoControllerComponent_BedAssignmentNetworkEvents : public UFortControllerComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x00A8   (0x0018)  MISSED
	FJunoReplicatedCharacterData                       ReplicatedCharacterData;                                    // 0x00C0   (0x0028)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x00E8   (0x0010)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoControllerComponent_BedAssignmentNetworkEvents.TryFindCharacterDisplayName
	// FText TryFindCharacterDisplayName(FGameplayTag& CharacterGameplayTag);                                                // [0xba68514] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoControllerComponent_BedAssignmentNetworkEvents.ServerHandleEndInteraction
	// void ServerHandleEndInteraction();                                                                                    // [0x839537c] RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoControllerComponent_BedAssignmentNetworkEvents.ServerAttemptAssignPlayerCharacter
	// void ServerAttemptAssignPlayerCharacter(class AActor* ReceivingActor);                                                // [0xba0ef80] RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoControllerComponent_BedAssignmentNetworkEvents.ServerAttemptAssignAICharacter
	// void ServerAttemptAssignAICharacter(class AActor* ReceivingActor, FGameplayTag CharacterGameplayTag);                 // [0xba67f24] RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoControllerComponent_BedAssignmentNetworkEvents.OnRep_CharacterData
	// void OnRep_CharacterData();                                                                                           // [0xba678b8] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoControllerComponent_BedAssignmentNetworkEvents.HandleCampObjectInteracted
	// void HandleCampObjectInteracted(class AActor* ReceivingActor);                                                        // [0xba66dd8] Final|Native|Public  
	// Function /Script/JunoGameNative.JunoControllerComponent_BedAssignmentNetworkEvents.GetCharacterData
	// FJunoReplicatedCharacterData GetCharacterData();                                                                      // [0xba65a38] Final|RequiredAPI|Native|Public 
	// Function /Script/JunoGameNative.JunoControllerComponent_BedAssignmentNetworkEvents.ClientNotifyObjectInteracted
	// void ClientNotifyObjectInteracted(class AActor* ReceivingActor);                                                      // [0x83cf1c0] Net|NetReliableNative|Event|Public|NetClient 
};

/// Class /Script/JunoGameNative.JunoGameStateComponent_PickupManagement
/// Size: 0x0010 (0x000158 - 0x000168)
class UJunoGameStateComponent_PickupManagement : public UFortGameStateComponent_PickupManagement
{ 
public:
	FDataTableRowHandle                                SettingsRow;                                                // 0x0158   (0x0010)  


	/// Functions
	// Function /Script/JunoGameNative.JunoGameStateComponent_PickupManagement.OnPlaylistDataReady
	// void OnPlaylistDataReady(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, FGameplayTagContainer& PlaylistContextTags); // [0xba676c4] Final|Native|Private|HasOutParms 
};

/// Class /Script/JunoGameNative.JunoPlayspaceAccountantComponent
/// Size: 0x0028 (0x0000F8 - 0x000120)
class UJunoPlayspaceAccountantComponent : public UFortPlayspaceComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x00F8   (0x0028)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoPlayspaceAccountantComponent.IsAccountantReady
	// bool IsAccountantReady();                                                                                             // [0xba672b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayspaceAccountantComponent.IncrementValue
	// void IncrementValue(FName ValueName, int32_t Value);                                                                  // [0xba671e4] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPlayspaceAccountantComponent.GetValue
	// int32_t GetValue(FName ValueName);                                                                                    // [0xba66c88] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayspaceAccountantComponent.GetJunoPlayspaceAccountantComponent
	// class UJunoPlayspaceAccountantComponent* GetJunoPlayspaceAccountantComponent(class UObject* WorldContextObject, FVector& Location); // [0xba66998] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPlayspaceAccountantComponent.DecrementValue
	// void DecrementValue(FName ValueName, int32_t Value);                                                                  // [0xba64fa4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoPlayspaceRandomStreamComponent
/// Size: 0x0008 (0x0000F8 - 0x000100)
class UJunoPlayspaceRandomStreamComponent : public UFortPlayspaceComponent
{ 
public:
	int32_t                                            PlayspaceRandomSeed;                                        // 0x00F8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00FC   (0x0004)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoPlayspaceRandomStreamComponent.OnVolumeGuidChanged
	// void OnVolumeGuidChanged(class AActor* Actor, FGuid NewGuid);                                                         // [0xba9f1b8] Final|Native|Private|HasDefaults 
	// Function /Script/JunoGameNative.JunoPlayspaceRandomStreamComponent.OnVolumeBoundsChanged
	// void OnVolumeBoundsChanged(class APlayspace* Playspace);                                                              // [0xba9f13c] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPlayspaceRandomStreamComponent.GetJunoRootPlayspaceRandomStreamComponent
	// class UJunoPlayspaceRandomStreamComponent* GetJunoRootPlayspaceRandomStreamComponent(class UObject* WorldContextObject); // [0xba9ef14] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPlayspaceRandomStreamComponent.GetJunoPlayspaceRandomStreamComponent
	// class UJunoPlayspaceRandomStreamComponent* GetJunoPlayspaceRandomStreamComponent(class UObject* WorldContextObject, FVector& Location); // [0xba9ee0c] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPlayspaceRandomStreamComponent.GenerateRandomStream
	// FRandomStream GenerateRandomStream(FString Name, FVector OptionalLocation);                                           // [0xba9e544] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayspaceRandomStreamComponent.GenerateRandomSeed
	// int32_t GenerateRandomSeed(FString Name, FVector OptionalLocation);                                                   // [0xba9dd8c] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/JunoGameNative.JunoBuildingHitData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoBuildingHitData
{ 
	class ABuildingActor*                              BuildingActor;                                              // 0x0000   (0x0008)  
	FTimerHandle                                       HealthRegenHandle;                                          // 0x0008   (0x0008)  
};

/// Class /Script/JunoGameNative.JunoHarvestingComponent
/// Size: 0x00A8 (0x0000A0 - 0x000148)
class UJunoHarvestingComponent : public UPlayspaceComponent
{ 
public:
	float                                              HeightOffset;                                               // 0x00A0   (0x0004)  
	float                                              HorizontalConeRadius;                                       // 0x00A4   (0x0004)  
	float                                              VerticalConeRadius;                                         // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00AC   (0x0004)  MISSED
	class UDataTable*                                  BuildingTagToResourceDataTable;                             // 0x00B0   (0x0008)  
	class UDataTable*                                  CraftingIngredientDataTable;                                // 0x00B8   (0x0008)  
	FGameplayTagContainer                              ResourceIdentifierTags;                                     // 0x00C0   (0x0020)  
	FGameplayTagContainer                              BuildingTagsToIgnoreForResourceSplitting;                   // 0x00E0   (0x0020)  
	float                                              TimeToRegenHealth;                                          // 0x0100   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0104   (0x0004)  MISSED
	TArray<FJunoBuildingHitData>                       BuildingsHitList;                                           // 0x0108   (0x0010)  
	float                                              ResourcePercentToReturn;                                    // 0x0118   (0x0004)  
	int32_t                                            PickupsPerResource;                                         // 0x011C   (0x0004)  
	SDK_UNDEFINED(32,12056) /* TWeakObjectPtr<UClass*> */ __um(PickupClassPtr);                                    // 0x0120   (0x0020)  
	float                                              TossSpeed;                                                  // 0x0140   (0x0004)  
	float                                              ConeHalfAngleDegrees;                                       // 0x0144   (0x0004)  
};

/// Class /Script/JunoGameNative.JunoPlayerSpawningComponent
/// Size: 0x0028 (0x0000B0 - 0x0000D8)
class UJunoPlayerSpawningComponent : public UPlayspaceComponent_PlayerSpawning
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x00B0   (0x0028)  MISSED
};

/// Class /Script/JunoGameNative.JunoCoreMutators
/// Size: 0x0048 (0x000338 - 0x000380)
class AJunoCoreMutators : public AFortAthenaMutator
{ 
public:
	SDK_UNDEFINED(16,12057) /* FMulticastInlineDelegate */ __um(OnPawnLoaded);                                     // 0x0338   (0x0010)  
	SDK_UNDEFINED(16,12058) /* FMulticastInlineDelegate */ __um(OnClientInitialLoadingFinished);                   // 0x0348   (0x0010)  
	bool                                               bIsJunoPlayspaceReady;                                      // 0x0358   (0x0001)  
	unsigned char                                      UnknownData00_6[0x27];                                      // 0x0359   (0x0027)  MISSED
};

/// Class /Script/JunoGameNative.JunoPersistentPlayspace
/// Size: 0x0120 (0x0006E8 - 0x000808)
class AJunoPersistentPlayspace : public AFortPlayspace
{ 
public:
	unsigned char                                      UnknownData00_3[0x40];                                      // 0x06E8   (0x0040)  MISSED
	class UJunoPlayspacePersistenceComponent*          PersistenceComponent;                                       // 0x0728   (0x0008)  
	ESpatialLoadingState                               SpatialLoadingState;                                        // 0x0730   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0731   (0x0003)  MISSED
	FName                                              PersistenceMainLevelUniquePackageName;                      // 0x0734   (0x0004)  
	SDK_UNDEFINED(8,12059) /* TWeakObjectPtr<ULevel*> */ __um(PersistenceMainLevelWeakPtr);                        // 0x0738   (0x0008)  
	uint32_t                                           PlayspaceRequestKey;                                        // 0x0740   (0x0004)  
	unsigned char                                      UnknownData02_6[0xC4];                                      // 0x0744   (0x00C4)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoPersistentPlayspace.ShouldBeTrackedByPlayspace
	// bool ShouldBeTrackedByPlayspace(class AActor* Actor);                                                                 // [0xbc0ac38] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPersistentPlayspace.SetShouldBeTrackedByPlayspace
	// void SetShouldBeTrackedByPlayspace(class AActor* Actor, bool bShouldBeTracked);                                       // [0xbc0ab84] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPersistentPlayspace.RemoveActorWhenEndPlay
	// void RemoveActorWhenEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);                          // [0xbc0aac0] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPersistentPlayspace.EnableSpawnedActorTracking
	// void EnableSpawnedActorTracking(class AActor* Actor);                                                                 // [0xbc0a9d0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/JunoGameNative.JunoReplicatedWorldMetadata
/// Size: 0x00E0 (0x000000 - 0x0000E0)
struct FJunoReplicatedWorldMetadata
{ 
	FJunoWorldMetadata                                 MetaData;                                                   // 0x0000   (0x0088)  
	SDK_UNDEFINED(16,12060) /* FString */              __um(OwnerId);                                              // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,12061) /* FString */              __um(OwnerName);                                            // 0x0098   (0x0010)  
	SDK_UNDEFINED(16,12062) /* TArray<FString> */      __um(Keyholders);                                           // 0x00A8   (0x0010)  
	SDK_UNDEFINED(16,12063) /* TArray<FString> */      __um(Occupants);                                            // 0x00B8   (0x0010)  
	double                                             WorldOwnerGuestReservationExpiration;                       // 0x00C8   (0x0008)  
	FDateTime                                          CreatedAt;                                                  // 0x00D0   (0x0008)  
	FDateTime                                          LastPlayed;                                                 // 0x00D8   (0x0008)  
};

/// Class /Script/JunoGameNative.JunoRootPlayspace
/// Size: 0x0178 (0x000808 - 0x000980)
class AJunoRootPlayspace : public AJunoPersistentPlayspace
{ 
public:
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x0808   (0x0020)  MISSED
	SDK_UNDEFINED(8,12064) /* TWeakObjectPtr<AFortPlayerControllerAthena*> */ __um(OwningController);              // 0x0828   (0x0008)  
	FGameplayTag                                       DefaultInventoryItemTag;                                    // 0x0830   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0834   (0x0004)  MISSED
	class UPlayspaceComponent_JunoServerExpiration*    JunoServerExpiration;                                       // 0x0838   (0x0008)  
	unsigned char                                      UnknownData02_5[0x18];                                      // 0x0840   (0x0018)  MISSED
	float                                              ProcessPlayerProgressionTime;                               // 0x0858   (0x0004)  
	unsigned char                                      UnknownData03_5[0xC];                                       // 0x085C   (0x000C)  MISSED
	class UClass*                                      JunoStateMachineClass;                                      // 0x0868   (0x0008)  
	EWorldDataAvailable                                WorldDataAvailable;                                         // 0x0870   (0x0001)  
	bool                                               bRootPlayspaceReady;                                        // 0x0871   (0x0001)  
	unsigned char                                      UnknownData04_5[0x6];                                       // 0x0872   (0x0006)  MISSED
	class UJunoWorld*                                  CurrentJunoWorld;                                           // 0x0878   (0x0008)  
	unsigned char                                      UnknownData05_5[0x8];                                       // 0x0880   (0x0008)  MISSED
	FJunoReplicatedWorldMetadata                       MetadataForReplication;                                     // 0x0888   (0x00E0)  
	unsigned char                                      UnknownData06_5[0x10];                                      // 0x0968   (0x0010)  MISSED
	class UJunoPlayerPersistenceComponent*             JunoPlayerPersistenceComponent;                             // 0x0978   (0x0008)  


	/// Functions
	// Function /Script/JunoGameNative.JunoRootPlayspace.OnRep_WorldMetadata
	// void OnRep_WorldMetadata();                                                                                           // [0xba9f128] Final|Native|Private 
};

/// Class /Script/JunoGameNative.JunoStateMachine
/// Size: 0x0000 (0x0000C8 - 0x0000C8)
class UJunoStateMachine : public UGameplayStateMachine
{ 
public:
};

/// Class /Script/JunoGameNative.JunoState_Setup
/// Size: 0x0028 (0x000078 - 0x0000A0)
class UJunoState_Setup : public UGameplayState
{ 
public:
	SDK_UNDEFINED(32,12065) /* TWeakObjectPtr<UDataTable*> */ __um(PossibleWorldsDataTable);                       // 0x0078   (0x0020)  
	int32_t                                            WorldRandomSeed;                                            // 0x0098   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x009C   (0x0004)  MISSED
};

/// Struct /Script/JunoGameNative.JunoRidingAnimationData
/// Size: 0x0014 (0x000000 - 0x000014)
struct FJunoRidingAnimationData
{ 
	bool                                               bIsRidden;                                                  // 0x0000   (0x0001)  
	bool                                               bIsTurningInPlace;                                          // 0x0001   (0x0001)  
	bool                                               bIsSprinting;                                               // 0x0002   (0x0001)  
	bool                                               bIsBeingPetted;                                             // 0x0003   (0x0001)  
	bool                                               bIsMovingBackwards;                                         // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	float                                              TurnInPlaceRotationSpeed;                                   // 0x0008   (0x0004)  
	float                                              TurnInPlaceAngleDelta;                                      // 0x000C   (0x0004)  
	float                                              RiderReferentialYaw;                                        // 0x0010   (0x0004)  
};

/// Class /Script/JunoGameNative.JunoAIFaunaAnimInstance
/// Size: 0x0160 (0x0005A0 - 0x000700)
class UJunoAIFaunaAnimInstance : public UFortAIAnimInstance
{ 
public:
	float                                              AverageSpeed;                                               // 0x0598   (0x0004)  
	float                                              AverageSpeedTimeFrame;                                      // 0x059C   (0x0004)  
	bool                                               bHasValidAimTarget;                                         // 0x05A0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x05A1   (0x0003)  MISSED
	float                                              AimTime;                                                    // 0x05A4   (0x0004)  
	FVector                                            AimTargetLocation;                                          // 0x05A8   (0x0018)  
	bool                                               bIsSurfaceSwimming;                                         // 0x05C0   (0x0001)  
	bool                                               bIsMovingOnGround;                                          // 0x05C1   (0x0001)  
	bool                                               bIsInTornado;                                               // 0x05C2   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x05C3   (0x0001)  MISSED
	float                                              LookAtAlpha;                                                // 0x05C4   (0x0004)  
	float                                              MaxDistanceToPlayerForLookAt;                               // 0x05C8   (0x0004)  
	float                                              LookAtTooFarFromPlayerTimeOut;                              // 0x05CC   (0x0004)  
	bool                                               bDisableLookAtDuringMontage;                                // 0x05D0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x05D1   (0x0003)  MISSED
	FName                                              DisableHeadTrackingCurveName;                               // 0x05D4   (0x0004)  
	FJunoRidingAnimationData                           RidingAnimationData;                                        // 0x05D8   (0x0014)  
	bool                                               bIsSlopeSliding;                                            // 0x05EC   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x05ED   (0x0003)  MISSED
	float                                              SlopeSlidingPitch;                                          // 0x05F0   (0x0004)  
	float                                              SlopeSlidingRoll;                                           // 0x05F4   (0x0004)  
	float                                              RidingMovePlayRate;                                         // 0x05F8   (0x0004)  
	bool                                               bJustGotPlayer;                                             // 0x05FC   (0x0001)  
	bool                                               bIsBoosting;                                                // 0x05FD   (0x0001)  
	bool                                               bIsTurningInPlace;                                          // 0x05FE   (0x0001)  
	unsigned char                                      UnknownData04_5[0x1];                                       // 0x05FF   (0x0001)  MISSED
	float                                              TurnInPlaceRotationSpeed;                                   // 0x0600   (0x0004)  
	float                                              TurnInPlaceAngleDelta;                                      // 0x0604   (0x0004)  
	bool                                               bIsMovingBackwards;                                         // 0x0608   (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x0609   (0x0003)  MISSED
	float                                              RiderReferentialYaw;                                        // 0x060C   (0x0004)  
	float                                              BoostPlayRate;                                              // 0x0610   (0x0004)  
	bool                                               bIsTurnInPlaceAngleDeltaPositive;                           // 0x0614   (0x0001)  
	bool                                               bPlayLandAdditive;                                          // 0x0615   (0x0001)  
	unsigned char                                      UnknownData06_5[0x2];                                       // 0x0616   (0x0002)  MISSED
	float                                              BackwardVelocity;                                           // 0x0618   (0x0004)  
	bool                                               bShouldPlayStopBackwards;                                   // 0x061C   (0x0001)  
	unsigned char                                      UnknownData07_5[0x3];                                       // 0x061D   (0x0003)  MISSED
	float                                              SwimmingYaw;                                                // 0x0620   (0x0004)  
	float                                              BackwardsPlayRate;                                          // 0x0624   (0x0004)  
	float                                              BodyRoll;                                                   // 0x0628   (0x0004)  
	float                                              TurnAngleStored;                                            // 0x062C   (0x0004)  
	bool                                               bWasTurningRight;                                           // 0x0630   (0x0001)  
	ERidingFootPhase                                   FootPhase;                                                  // 0x0631   (0x0001)  
	bool                                               bIsFootPhase_FeetInAir;                                     // 0x0632   (0x0001)  
	bool                                               bIsFootPhase_FrontFeetPlanted;                              // 0x0633   (0x0001)  
	bool                                               bIsFootPhase_BackFeetPlanted;                               // 0x0634   (0x0001)  
	bool                                               bIsFootPhase_LeftBackFeetForward;                           // 0x0635   (0x0001)  
	bool                                               bIsFootPhase_RightBackFeetForward;                          // 0x0636   (0x0001)  
	bool                                               bIsFootPhase_LeftPlantedRightPass;                          // 0x0637   (0x0001)  
	bool                                               bIsFootPhase_RightPlantedLeftPass;                          // 0x0638   (0x0001)  
	unsigned char                                      UnknownData08_5[0x7];                                       // 0x0639   (0x0007)  MISSED
	FGameplayTagContainer                              SlipstreamTags;                                             // 0x0640   (0x0020)  
	bool                                               bIsInSlipstream;                                            // 0x0660   (0x0001)  
	unsigned char                                      UnknownData09_5[0x7];                                       // 0x0661   (0x0007)  MISSED
	FGameplayTagContainer                              SkydivingTags;                                              // 0x0668   (0x0020)  
	bool                                               bMovementMode_Skydiving;                                    // 0x0688   (0x0001)  
	unsigned char                                      UnknownData10_5[0x7];                                       // 0x0689   (0x0007)  MISSED
	FGameplayTagContainer                              SkytubingTags;                                              // 0x0690   (0x0020)  
	bool                                               bGameplay_Status_Skytubing;                                 // 0x06B0   (0x0001)  
	bool                                               bIsAbducted;                                                // 0x06B1   (0x0001)  
	unsigned char                                      UnknownData11_5[0x6];                                       // 0x06B2   (0x0006)  MISSED
	FGameplayTagContainer                              TractorBeamTags;                                            // 0x06B8   (0x0020)  
	bool                                               bIsInTractorBeam;                                           // 0x06D8   (0x0001)  
	bool                                               bIsFloating;                                                // 0x06D9   (0x0001)  
	unsigned char                                      UnknownData12_5[0x2];                                       // 0x06DA   (0x0002)  MISSED
	float                                              JustGotPlayerInitialDelaySec;                               // 0x06DC   (0x0004)  
	unsigned char                                      UnknownData13_6[0x20];                                      // 0x06E0   (0x0020)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoAIFaunaAnimInstance.UpdateTurnAngleStored
	// void UpdateTurnAngleStored();                                                                                         // [0x625f814] Native|Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoAIFaunaAnimInstance.UpdateSwimmingYaw
	// void UpdateSwimmingYaw();                                                                                             // [0x625f844] Native|Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoAIFaunaAnimInstance.UpdateRidingMovePlayRate
	// void UpdateRidingMovePlayRate();                                                                                      // [0xac710a0] Native|Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoAIFaunaAnimInstance.UpdatePlayLandAdditive
	// void UpdatePlayLandAdditive();                                                                                        // [0xac71088] Native|Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoAIFaunaAnimInstance.UpdateFootPhaseStop
	// void UpdateFootPhaseStop();                                                                                           // [0x6265044] Native|Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoAIFaunaAnimInstance.UpdateBoostPlayRate
	// void UpdateBoostPlayRate();                                                                                           // [0xac70ee8] Native|Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoAIFaunaAnimInstance.UpdateBodyRoll
	// void UpdateBodyRoll();                                                                                                // [0x625f82c] Native|Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoAIFaunaAnimInstance.UpdateBackwardVelocity
	// void UpdateBackwardVelocity();                                                                                        // [0xac70ea4] Native|Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoAIFaunaAnimInstance.UpdateBackwardsPlayRate
	// void UpdateBackwardsPlayRate();                                                                                       // [0x625f7fc] Native|Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoAIFaunaAnimInstance.FinishFootPhaseStopUpdate
	// void FinishFootPhaseStopUpdate();                                                                                     // [0x625f4ec] Native|Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoAIFaunaAnimInstance.CalculateLookAtAlpha
	// void CalculateLookAtAlpha(bool bForceDisableLookAt, float DeltaSeconds);                                              // [0xba9dbb8] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoCreatureAnimInstance
/// Size: 0x0280 (0x000580 - 0x000800)
#pragma pack(push, 0x1)
class alignas(0x10) 
UJunoCreatureAnimInstance : public UJunoPawnAnimInstance
{ 
public:
	bool                                               bIsTurning;                                                 // 0x0580   (0x0001)  
	bool                                               bWasTurning;                                                // 0x0581   (0x0001)  
	bool                                               bIdleShuffleTurnDirection;                                  // 0x0582   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0583   (0x0001)  MISSED
	float                                              IdleShufflePlayRate;                                        // 0x0584   (0x0004)  
	bool                                               bIsIdleShuffleTurn;                                         // 0x0588   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0589   (0x0007)  MISSED
	FVector                                            CreaturePosition;                                           // 0x0590   (0x0018)  
	FVector                                            CreaturePositionDelta;                                      // 0x05A8   (0x0018)  
	FRotator                                           CreatureRootRotation;                                       // 0x05C0   (0x0018)  
	FRotator                                           CreatureRootRotationOffset;                                 // 0x05D8   (0x0018)  
	FRotator                                           CreatureRotation;                                           // 0x05F0   (0x0018)  
	FRotator                                           CreatureRotationDelta;                                      // 0x0608   (0x0018)  
	FVector                                            CreatureVelocity;                                           // 0x0620   (0x0018)  
	float                                              CreatureYaw;                                                // 0x0638   (0x0004)  
	float                                              CreatureYawDelta;                                           // 0x063C   (0x0004)  
	bool                                               RootSmoothing_Enabled;                                      // 0x0640   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0641   (0x0003)  MISSED
	float                                              RootSmoothing_Distance;                                     // 0x0644   (0x0004)  
	bool                                               bSlopeWarpingIsEnabled;                                     // 0x0648   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0649   (0x0003)  MISSED
	float                                              SlopeWarpingFloorCheckFrequency;                            // 0x064C   (0x0004)  
	float                                              SlopeWarpingRollAlpha;                                      // 0x0650   (0x0004)  
	bool                                               bStartingInPlace;                                           // 0x0654   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x0655   (0x0003)  MISSED
	FVector                                            StartInPlace_RootTranslation;                               // 0x0658   (0x0018)  
	class UAnimSequence*                               StartInPlace_Sequence;                                      // 0x0670   (0x0008)  
	float                                              StartInPlace_SequenceTime;                                  // 0x0678   (0x0004)  
	bool                                               bTurningInPlace;                                            // 0x067C   (0x0001)  
	bool                                               bTurnInPlace_UseAuthoredAngle;                              // 0x067D   (0x0001)  
	unsigned char                                      UnknownData05_5[0x2];                                       // 0x067E   (0x0002)  MISSED
	class UAnimSequence*                               TurnAnimation;                                              // 0x0680   (0x0008)  
	float                                              TurnInPlace_AnimationAuthoredAngle;                         // 0x0688   (0x0004)  
	float                                              TurnPlayRate;                                               // 0x068C   (0x0004)  
	float                                              TurnInPlace_RootRotationZ;                                  // 0x0690   (0x0004)  
	float                                              TurnInPlace_RotationAngle;                                  // 0x0694   (0x0004)  
	float                                              TurnInPlace_RotationAngle_Min;                              // 0x0698   (0x0004)  
	float                                              TurnInPlace_RotationRate;                                   // 0x069C   (0x0004)  
	class UAnimSequence*                               TurnInPlace_Sequence;                                       // 0x06A0   (0x0008)  
	float                                              TurnInPlace_SequenceTime;                                   // 0x06A8   (0x0004)  
	bool                                               bStateRule_Idle_Moving;                                     // 0x06AC   (0x0001)  
	unsigned char                                      UnknownData06_5[0x3];                                       // 0x06AD   (0x0003)  MISSED
	float                                              IdleShuffleTurnThreshold;                                   // 0x06B0   (0x0004)  
	float                                              IdleShuffleTurnDirectionThreshold;                          // 0x06B4   (0x0004)  
	float                                              IdleShufflePlayRateInRangeA;                                // 0x06B8   (0x0004)  
	float                                              IdleShufflePlayRateInRangeB;                                // 0x06BC   (0x0004)  
	float                                              IdleShufflePlayRateOutRangeA;                               // 0x06C0   (0x0004)  
	float                                              IdleShufflePlayRateOutRangeB;                               // 0x06C4   (0x0004)  
	bool                                               bHasValidAimTarget;                                         // 0x06C8   (0x0001)  
	unsigned char                                      UnknownData07_5[0x7];                                       // 0x06C9   (0x0007)  MISSED
	FVector                                            AimTargetLocation;                                          // 0x06D0   (0x0018)  
	float                                              AimTime;                                                    // 0x06E8   (0x0004)  
	float                                              LookAtAlpha;                                                // 0x06EC   (0x0004)  
	float                                              MaxDistanceToPlayerForLookAt;                               // 0x06F0   (0x0004)  
	float                                              LookAtTooFarFromPlayerTimeOut;                              // 0x06F4   (0x0004)  
	bool                                               bDisableLookAtDuringMontage;                                // 0x06F8   (0x0001)  
	bool                                               bStartTurn;                                                 // 0x06F9   (0x0001)  
	unsigned char                                      UnknownData08_5[0x2];                                       // 0x06FA   (0x0002)  MISSED
	float                                              TurnAngle;                                                  // 0x06FC   (0x0004)  
	float                                              TurnRate;                                                   // 0x0700   (0x0004)  
	FName                                              DisableHeadTrackingCurveName;                               // 0x0704   (0x0004)  
	float                                              Speed;                                                      // 0x0708   (0x0004)  
	bool                                               bPlayLandAdditive;                                          // 0x070C   (0x0001)  
	bool                                               bIsFloating;                                                // 0x070D   (0x0001)  
	bool                                               bIsSurfaceSwimming;                                         // 0x070E   (0x0001)  
	bool                                               bIsTurningInPlace;                                          // 0x070F   (0x0001)  
	unsigned char                                      UnknownData09_6[0xE8];                                      // 0x0710   (0x00E8)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoCreatureAnimInstance.TurnInPlace_Started
	// void TurnInPlace_Started();                                                                                           // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoCreatureAnimInstance.TurnInPlace_SignalAnimationEnded
	// void TurnInPlace_SignalAnimationEnded();                                                                              // [0xbaa0c00] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCreatureAnimInstance.TurnInPlace_Setup
	// void TurnInPlace_Setup(class UAnimSequence* TurnAnimSequence);                                                        // [0xbaa0148] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCreatureAnimInstance.TurnInPlace_Interrupted
	// void TurnInPlace_Interrupted();                                                                                       // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoCreatureAnimInstance.TurnInPlace_Ended
	// void TurnInPlace_Ended();                                                                                             // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoCreatureAnimInstance.StartInPlace_Started
	// void StartInPlace_Started();                                                                                          // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoCreatureAnimInstance.StartInPlace_Setup
	// void StartInPlace_Setup(class UAnimSequence* StartAnimSequence);                                                      // [0xbaa0048] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCreatureAnimInstance.CreatureIsMovingRight
	// bool CreatureIsMovingRight();                                                                                         // [0xba9dd04] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoCreatureAnimInstance.CreatureIsMovingLeft
	// bool CreatureIsMovingLeft();                                                                                          // [0xba9dc7c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};
#pragma pack(pop)

/// Class /Script/JunoGameNative.JunoCreatureAnimInstance_LootLlama
/// Size: 0x0030 (0x000800 - 0x000830)
class UJunoCreatureAnimInstance_LootLlama : public UJunoCreatureAnimInstance
{ 
public:
	bool                                               bHighVelocity;                                              // 0x07F8   (0x0001)  
	bool                                               bIsInterruptible;                                           // 0x07F9   (0x0001)  
	bool                                               bLocoToIdle;                                                // 0x07FA   (0x0001)  
	bool                                               bIdleToLoco;                                                // 0x07FB   (0x0001)  
	bool                                               bJumpStartToJumpLoop;                                       // 0x07FC   (0x0001)  
	bool                                               bJumpLandToMovement;                                        // 0x07FD   (0x0001)  
	bool                                               bIsRunning;                                                 // 0x07FE   (0x0001)  
	bool                                               bIdleToFalling;                                             // 0x07FF   (0x0001)  
	bool                                               bToppledOnGround;                                           // 0x0800   (0x0001)  
	bool                                               bTransitionToLand;                                          // 0x0801   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0802   (0x0002)  MISSED
	float                                              TargetDistance;                                             // 0x0804   (0x0004)  
	bool                                               bTargetIsClose;                                             // 0x0808   (0x0001)  
	bool                                               bIsToppled;                                                 // 0x0809   (0x0001)  
	bool                                               bIsLeaking;                                                 // 0x080A   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x080B   (0x0001)  MISSED
	float                                              MinHighVelocityMagnitude;                                   // 0x080C   (0x0004)  
	float                                              MaxInterruptibleCurveValue;                                 // 0x0810   (0x0004)  
	float                                              LocoIdleTransitionThreshold;                                // 0x0814   (0x0004)  
	float                                              RunSpeedThreshold;                                          // 0x0818   (0x0004)  
	float                                              JumpLandToMovementInterruptibleThreshold;                   // 0x081C   (0x0004)  
	float                                              MinTargetIsCloseDistance;                                   // 0x0820   (0x0004)  
	FName                                              CurveName_Interruptible;                                    // 0x0824   (0x0004)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0828   (0x0008)  MISSED
};

/// Class /Script/JunoGameNative.JunoFreeBuildPersistenceFeatureDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoFreeBuildPersistenceFeatureDataInterface : public UInterface
{ 
public:
};

/// Class /Script/JunoGameNative.JunoDamageFormulaExecutionCalculation
/// Size: 0x0000 (0x000048 - 0x000048)
class UJunoDamageFormulaExecutionCalculation : public UFortDamageFormulaExecutionCalculation
{ 
public:
};

/// Class /Script/JunoGameNative.JunoInventory
/// Size: 0x0080 (0x000508 - 0x000588)
class AJunoInventory : public AFortInventory
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0508   (0x0030)  MISSED
	FGuid                                              SavedActorGuid;                                             // 0x0538   (0x0010)  
	unsigned char                                      UnknownData01_5[0x28];                                      // 0x0548   (0x0028)  MISSED
	int32_t                                            InventoryCapacity;                                          // 0x0570   (0x0004)  
	FGuid                                              InventoryHandleGuid;                                        // 0x0574   (0x0010)  
	bool                                               bIsPersistent;                                              // 0x0584   (0x0001)  
	bool                                               bWasSpawnedByLevelSaveRecord;                               // 0x0585   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x0586   (0x0002)  MISSED
};

/// Class /Script/JunoGameNative.JunoInventoryManagerComponent
/// Size: 0x0060 (0x0000A0 - 0x000100)
class UJunoInventoryManagerComponent : public UActorComponent
{ 
public:
	TArray<FJunoInventoryHandle>                       InventoryHandles;                                           // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,12066) /* TArray<TWeakObjectPtr<AJunoInventory*>> */ __um(InventoryInstances);                // 0x00B0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x40];                                      // 0x00C0   (0x0040)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoInventoryManagerComponent.OnRep_InventoryInstances
	// void OnRep_InventoryInstances();                                                                                      // [0xba9f114] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoInventoryManagerComponent.OnRep_InventoryHandles
	// void OnRep_InventoryHandles();                                                                                        // [0xba9f100] Final|Native|Protected 
};

/// Struct /Script/JunoGameNative.JunoInventoriesSaveData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoInventoriesSaveData
{ 
	TArray<class AJunoInventory*>                      Inventories;                                                // 0x0000   (0x0010)  
};

/// Class /Script/JunoGameNative.JunoInventoryPersistenceFeatureData
/// Size: 0x0018 (0x000040 - 0x000058)
class UJunoInventoryPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0040   (0x0008)  MISSED
	FJunoInventoriesSaveData                           SavedInventories;                                           // 0x0048   (0x0010)  
};

/// Class /Script/JunoGameNative.JunoInventoryPersistenceFeatureDataActor
/// Size: 0x0018 (0x0002D0 - 0x0002E8)
class AJunoInventoryPersistenceFeatureDataActor : public AJunoPersistenceFeatureDataActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x02D0   (0x0008)  MISSED
	TArray<class AJunoInventory*>                      SavedInventories;                                           // 0x02D8   (0x0010)  
};

/// Class /Script/JunoGameNative.JunoInventoryPersistenceFeatureDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoInventoryPersistenceFeatureDataInterface : public UInterface
{ 
public:
};

/// Struct /Script/JunoGameNative.JunoInventoryUISaveData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FJunoInventoryUISaveData
{ 
	SDK_UNDEFINED(80,12067) /* TMap<FGuid, FJunoSavedInventoryUIData> */ __um(InventoryUIData);                    // 0x0000   (0x0050)  
};

/// Class /Script/JunoGameNative.JunoInventoryUIPersistenceFeatureData
/// Size: 0x0058 (0x000040 - 0x000098)
class UJunoInventoryUIPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0040   (0x0008)  MISSED
	FJunoInventoryUISaveData                           SavedInventoryUI;                                           // 0x0048   (0x0050)  
};

/// Class /Script/JunoGameNative.JunoInventoryUIPersistenceFeatureDataActor
/// Size: 0x0058 (0x0002D0 - 0x000328)
class AJunoInventoryUIPersistenceFeatureDataActor : public AJunoPersistenceFeatureDataActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x02D0   (0x0008)  MISSED
	SDK_UNDEFINED(80,12068) /* TMap<FGuid, FJunoSavedInventoryUIData> */ __um(SavedInventoryUI);                   // 0x02D8   (0x0050)  
};

/// Class /Script/JunoGameNative.JunoInventoryUIPersistenceFeatureDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoInventoryUIPersistenceFeatureDataInterface : public UInterface
{ 
public:
};

/// Class /Script/JunoGameNative.JunoPlayerInventoryComponent
/// Size: 0x0000 (0x000318 - 0x000318)
class UJunoPlayerInventoryComponent : public UJunoInventoryComponent
{ 
public:


	/// Functions
	// Function /Script/JunoGameNative.JunoPlayerInventoryComponent.OnPlayerPawnPossessed
	// void OnPlayerPawnPossessed(class APawn* PossessedPawn);                                                               // [0xba9efb8] Final|Native|Protected 
};

/// Class /Script/JunoGameNative.JunoBuilderTool
/// Size: 0x0070 (0x001518 - 0x001588)
class AJunoBuilderTool : public AFortWeapon
{ 
public:
	SDK_UNDEFINED(16,12069) /* FMulticastInlineDelegate */ __um(OnBuilderToolInteractionStarted);                  // 0x1518   (0x0010)  
	SDK_UNDEFINED(16,12070) /* FMulticastInlineDelegate */ __um(OnBuilderToolInteractionStopped);                  // 0x1528   (0x0010)  
	FJunoInputMapping                                  InputMapping;                                               // 0x1538   (0x0010)  
	class UInputAction*                                UnEquipInputAction;                                         // 0x1548   (0x0008)  
	FGameplayTagContainer                              ActivatedTags;                                              // 0x1550   (0x0020)  
	TArray<class UJunoBuilderToolInteractionBehavior*> InteractionBehaviors;                                       // 0x1570   (0x0010)  
	class UJunoBuilderToolInteractionBehavior*         ActiveInteractionBehavior;                                  // 0x1580   (0x0008)  


	/// Functions
	// Function /Script/JunoGameNative.JunoBuilderTool.ServerStartInteraction
	// void ServerStartInteraction(TArray<FJunoBuilderToolSelectedActor> SelectedActors, FGuid SelectionGUID);               // [0xbaf8638] Final|Net|NetReliableNative|Event|Private|NetServer|HasDefaults 
	// Function /Script/JunoGameNative.JunoBuilderTool.ServerClearInteraction
	// void ServerClearInteraction(bool bExited);                                                                            // [0xbaf8384] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/JunoGameNative.JunoBuilderTool.ReceiveInteractionStarted
	// void ReceiveInteractionStarted(class UJunoBuilderToolInteractionBehavior* InteractionBehavior);                       // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuilderTool.ReceiveInteractionEnded
	// void ReceiveInteractionEnded(class UJunoBuilderToolInteractionBehavior* InteractionBehavior);                         // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuilderTool.MulticastStartInteractionOnRemoteClients
	// void MulticastStartInteractionOnRemoteClients(class UJunoBuilderToolInteractionBehavior* InteractionBehavior, TArray<FJunoBuilderToolSelectedActor> SelectedActors, FGuid SelectionGUID); // [0xbaf6ff4] Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults 
	// Function /Script/JunoGameNative.JunoBuilderTool.MulticastClearInteractionOnRemoteClients
	// void MulticastClearInteractionOnRemoteClients();                                                                      // [0x88a160c] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/JunoGameNative.JunoBuilderTool.IsRunningOnOwningClient
	// bool IsRunningOnOwningClient();                                                                                       // [0xbaf6fac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuilderTool.IsEnabled
	// bool IsEnabled();                                                                                                     // [0xbaf6f84] Native|Event|Protected|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuilderTool.GetSelectionGUID
	// FGuid GetSelectionGUID();                                                                                             // [0xbaf67e8] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuilderTool.GetSelectedActors
	// TArray<FJunoBuilderToolSelectedActor> GetSelectedActors();                                                            // [0xbaf6114] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuilderTool.GetActiveInteractionBehavior
	// class UJunoBuilderToolInteractionBehavior* GetActiveInteractionBehavior();                                            // [0xb899120] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuilderTool.ClientStopInteraction
	// void ClientStopInteraction(bool bIsExiting);                                                                          // [0xbaf595c] Final|Net|NetReliableNative|Event|Private|NetClient 
	// Function /Script/JunoGameNative.JunoBuilderTool.ClientStartInteraction
	// void ClientStartInteraction(class UJunoBuilderToolInteractionBehavior* InteractionBehavior, TArray<FJunoBuilderToolSelectedActor> SelectedActors, FGuid SelectionGUID); // [0xbaf5178] Final|Net|NetReliableNative|Event|Private|HasDefaults|NetClient 
};

/// Struct /Script/JunoGameNative.JunoBuilderToolInteractionActorClassSet
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FJunoBuilderToolInteractionActorClassSet
{ 
	SDK_UNDEFINED(80,12071) /* TSet<TWeakObjectPtr<UClass*>> */ __um(Classes);                                     // 0x0000   (0x0050)  
	SDK_UNDEFINED(80,12072) /* TSet<TWeakObjectPtr<UClass*>> */ __um(ExcludedSubclasses);                          // 0x0050   (0x0050)  
};

/// Struct /Script/JunoGameNative.JunoBuilderToolSelectedActor
/// Size: 0x0070 (0x000000 - 0x000070)
struct FJunoBuilderToolSelectedActor
{ 
	class UClass*                                      Class;                                                      // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         ToSelection;                                                // 0x0010   (0x0060)  
};

/// Struct /Script/JunoGameNative.JunoBuilderToolTimedActors
/// Size: 0x0018 (0x000000 - 0x000018)
struct FJunoBuilderToolTimedActors
{ 
	SDK_UNDEFINED(16,12073) /* TArray<TWeakObjectPtr<AActor*>> */ __um(Actors);                                    // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0010   (0x0008)  MISSED
};

/// Struct /Script/JunoGameNative.ServerSpawnedActorPair
/// Size: 0x000C (0x000000 - 0x00000C)
struct FServerSpawnedActorPair
{ 
	SDK_UNDEFINED(8,12074) /* TWeakObjectPtr<AActor*> */ __um(Actor);                                              // 0x0000   (0x0008)  
	FName                                              StableName;                                                 // 0x0008   (0x0004)  
};

/// Class /Script/JunoGameNative.JunoBuilderToolInteractionBehavior
/// Size: 0x01B0 (0x0000A0 - 0x000250)
class UJunoBuilderToolInteractionBehavior : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,12075) /* FMulticastInlineDelegate */ __um(OnInteractionStart);                               // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,12076) /* FMulticastInlineDelegate */ __um(OnInteractionTrigger);                             // 0x00B0   (0x0010)  
	SDK_UNDEFINED(16,12077) /* FMulticastInlineDelegate */ __um(OnInteractionEnd);                                 // 0x00C0   (0x0010)  
	SDK_UNDEFINED(16,12078) /* FMulticastInlineDelegate */ __um(OnInteractionExit);                                // 0x00D0   (0x0010)  
	bool                                               bShouldAddToParent;                                         // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00E1   (0x0003)  MISSED
	int32_t                                            Priority;                                                   // 0x00E4   (0x0004)  
	FDataTableRowHandle                                ConfigData;                                                 // 0x00E8   (0x0010)  
	FGameplayTagContainer                              ActivatedTags;                                              // 0x00F8   (0x0020)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0118   (0x0008)  MISSED
	class UInputMappingContext*                        InputMappingContext;                                        // 0x0120   (0x0008)  
	int32_t                                            InputMappingPriority;                                       // 0x0128   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x012C   (0x0004)  MISSED
	class UInputAction*                                TriggerInputAction;                                         // 0x0130   (0x0008)  
	class UInputAction*                                ExitInputAction;                                            // 0x0138   (0x0008)  
	class UClass*                                      StartInteractionAbility;                                    // 0x0140   (0x0008)  
	class UClass*                                      EndInteractionAbility;                                      // 0x0148   (0x0008)  
	class UClass*                                      FailAbility;                                                // 0x0150   (0x0008)  
	class UClass*                                      ExitAbility;                                                // 0x0158   (0x0008)  
	FJunoBuilderToolInteractionActorClassSet           SupportedClasses;                                           // 0x0160   (0x00A0)  
	TArray<FJunoBuilderToolSelectedActor>              SelectedActors;                                             // 0x0200   (0x0010)  
	FGuid                                              SelectionGUID;                                              // 0x0210   (0x0010)  
	TArray<FJunoBuilderToolTimedActors>                ClientPredictedActors;                                      // 0x0220   (0x0010)  
	TArray<FServerSpawnedActorPair>                    ServerSpawnedActors;                                        // 0x0230   (0x0010)  
	unsigned char                                      UnknownData03_6[0x10];                                      // 0x0240   (0x0010)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.ServerSpawnSelectedActors
	// void ServerSpawnSelectedActors(FJunoBuilderToolSelectionSpawnParams SelectionSpawnParameters);                        // [0xbaf84b8] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.ServerOnSpawnedActorProcessedByClient
	// void ServerOnSpawnedActorProcessedByClient(FName StableName);                                                         // [0xbaf8434] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.ReceiveTriggerInteraction
	// void ReceiveTriggerInteraction();                                                                                     // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.ReceiveTickInteraction
	// void ReceiveTickInteraction();                                                                                        // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.ReceiveStartInteractionOnServer
	// void ReceiveStartInteractionOnServer(TArray<FJunoBuilderToolSelectedActor>& Actors, FGuid& Guid);                     // [0x3d1d968] Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.ReceiveStartInteractionOnRemoteClient
	// void ReceiveStartInteractionOnRemoteClient(TArray<FJunoBuilderToolSelectedActor>& Actors, FGuid& Guid);               // [0x3d1d968] Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.ReceiveStartInteractionOnClient
	// void ReceiveStartInteractionOnClient(TArray<FJunoBuilderToolSelectedActor>& Actors, FGuid& Guid);                     // [0x3d1d968] Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.ReceiveSpawnedActor
	// void ReceiveSpawnedActor(class AActor* SpawnedActor);                                                                 // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.ReceiveExitInteraction
	// void ReceiveExitInteraction(bool bClearInteractionBehavior);                                                          // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.ReceiveEndInteraction
	// void ReceiveEndInteraction();                                                                                         // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.ReceiveClearInteractionOnRemoteClient
	// void ReceiveClearInteractionOnRemoteClient();                                                                         // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.PlayGameplayAbility
	// void PlayGameplayAbility(class UClass* AbilityClass);                                                                 // [0xbaf826c] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.OnRep_ServerSpawnedActors
	// void OnRep_ServerSpawnedActors();                                                                                     // [0xbaf8228] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.IsRunningOnOwningClient
	// bool IsRunningOnOwningClient();                                                                                       // [0xbaf6fd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.GetSelectionGUID
	// FGuid GetSelectionGUID();                                                                                             // [0xa171900] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.GetSelectedActors
	// TArray<FJunoBuilderToolSelectedActor> GetSelectedActors();                                                            // [0xbaf67cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.GetPlayerController
	// class APlayerController* GetPlayerController();                                                                       // [0xbaf6034] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.GetInstigator
	// class APawn* GetInstigator();                                                                                         // [0xbaf5dec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.GetFortPlayerController
	// class AFortPlayerController* GetFortPlayerController();                                                               // [0xbaf5cac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.GetBuilderTool
	// class AJunoBuilderTool* GetBuilderTool();                                                                             // [0xbaf5a0c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.ClientOnServerSpawnSelectedActorsFailed
	// void ClientOnServerSpawnSelectedActorsFailed(TArray<FName> FailedNames);                                              // [0xbaf50e4] Final|Net|NetReliableNative|Event|Private|NetClient 
};

/// Struct /Script/JunoGameNative.JunoBuildingBehaviorGridLimits
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoBuildingBehaviorGridLimits
{ 
	FIntPoint                                          Min;                                                        // 0x0000   (0x0008)  
	FIntPoint                                          Max;                                                        // 0x0008   (0x0008)  
};

/// Struct /Script/JunoGameNative.JunoBuildingSnapEntry
/// Size: 0x0100 (0x000000 - 0x000100)
struct FJunoBuildingSnapEntry
{ 
	FName                                              Label;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FGameplayTagContainer                              Tags;                                                       // 0x0008   (0x0020)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0028   (0x0008)  MISSED
	FTransform                                         ToActor;                                                    // 0x0030   (0x0060)  
	FVector                                            PreviewOffset;                                              // 0x0090   (0x0018)  
	FGameplayTagContainer                              ConnectableTags;                                            // 0x00A8   (0x0020)  
	FBox                                               TargetingArea;                                              // 0x00C8   (0x0038)  
};

/// Class /Script/JunoGameNative.JunoBuildingActor
/// Size: 0x0280 (0x000C10 - 0x000E90)
class AJunoBuildingActor : public AJunoBuildingProp
{ 
public:
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x0C10   (0x0020)  MISSED
	FVector                                            GridSizeOverride;                                           // 0x0C30   (0x0018)  
	FJunoBuildingBehaviorGridLimits                    GridOffsetLimits;                                           // 0x0C48   (0x0010)  
	FJunoBuilderToolInteractionActorClassSet           OverlappableClasses;                                        // 0x0C58   (0x00A0)  
	FJunoBuilderToolInteractionActorClassSet           SupportableClasses;                                         // 0x0CF8   (0x00A0)  
	class UJunoConnectivityComponent*                  Connectivity;                                               // 0x0D98   (0x0008)  
	class UJunoGeometryCollectionAssemblerComponent*   GeometryCollectionAssemblerComponent;                       // 0x0DA0   (0x0008)  
	class AJunoGuidedBuildingLandscapeVisualModifierActor* TerrainVisualModifierActor;                             // 0x0DA8   (0x0008)  
	FTransform                                         BuildingPivotOffset;                                        // 0x0DB0   (0x0060)  
	FVector                                            BuildingGridSnapOffset;                                     // 0x0E10   (0x0018)  
	TArray<FJunoBuildingSnapEntry>                     SnapEntries;                                                // 0x0E28   (0x0010)  
	SDK_UNDEFINED(80,12079) /* TMap<FName, UClass*> */ __um(PreviewComponentTemplates);                            // 0x0E38   (0x0050)  
	bool                                               bCanRegenHealth : 1;                                        // 0x0E88:0 (0x0001)  
	bool                                               bShouldPersist;                                             // 0x0E89   (0x0001)  
	bool                                               bForceOverrideDestroyFoliageWhenPlaced;                     // 0x0E8A   (0x0001)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x0E8B   (0x0005)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoBuildingActor.SetCanEverAffectNavigation
	// void SetCanEverAffectNavigation(bool bCanEverAffectNavigation, class UActorComponent* TargetActorComponent);          // [0xaeda27c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingActor.OnRep_bForceOverrideDestroyFoliageWhenPlaced
	// void OnRep_bForceOverrideDestroyFoliageWhenPlaced();                                                                  // [0xbaf823c] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoBuildingActor.OnPlacedInWorld
	// void OnPlacedInWorld(bool bFinalize, TArray<FJunoBuilderToolSupportActorComponentPair>& SupportCandidates);           // [0xbaf7b34] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoBuildingAssociatedItemInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoBuildingAssociatedItemInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/JunoGameNative.JunoBuildingAssociatedItemInterface.CanRemoveAssociatedItemFromInventory
	// bool CanRemoveAssociatedItemFromInventory();                                                                          // [0x23bb874] Native|Event|Public|BlueprintEvent|Const 
};

/// Struct /Script/JunoGameNative.JunoCollisionChannelResponsePair
/// Size: 0x0002 (0x000000 - 0x000002)
struct FJunoCollisionChannelResponsePair
{ 
	SDK_UNDEFINED(1,12080) /* TEnumAsByte<ECollisionChannel> */ __um(Channel);                                     // 0x0000   (0x0001)  
	SDK_UNDEFINED(1,12081) /* TEnumAsByte<ECollisionResponse> */ __um(Response);                                   // 0x0001   (0x0001)  
};

/// Struct /Script/JunoGameNative.JunoBuildingPreviewParams
/// Size: 0x0018 (0x000000 - 0x000018)
struct FJunoBuildingPreviewParams
{ 
	TArray<FJunoCollisionChannelResponsePair>          CollisionResponses;                                         // 0x0000   (0x0010)  
	bool                                               bShowFoundationPieces;                                      // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Class /Script/JunoGameNative.JunoBuildingBehaviorBase
/// Size: 0x0340 (0x000250 - 0x000590)
#pragma pack(push, 0x1)
class alignas(0x10) 
UJunoBuildingBehaviorBase : public UJunoBuilderToolInteractionBehavior
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0250   (0x0030)  MISSED
	class UClass*                                      PreviewerClass;                                             // 0x0280   (0x0008)  
	FJunoBuildingPreviewParams                         DefaultPreviewParams;                                       // 0x0288   (0x0018)  
	class AJunoBuildingPreviewer*                      Previewer_Internal;                                         // 0x02A0   (0x0008)  
	EJunoBuildingBehaviorState                         BuildingState;                                              // 0x02A8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x02A9   (0x0007)  MISSED
	FGameplayTagContainer                              BuildingStateTags;                                          // 0x02B0   (0x0020)  
	SDK_UNDEFINED(16,12082) /* FMulticastInlineDelegate */ __um(OnBuildingStateChanged);                           // 0x02D0   (0x0010)  
	SDK_UNDEFINED(16,12083) /* FMulticastInlineDelegate */ __um(OnBuildingStateTagsChanged);                       // 0x02E0   (0x0010)  
	SDK_UNDEFINED(16,12084) /* FMulticastInlineDelegate */ __um(OnEnterPreviewMode);                               // 0x02F0   (0x0010)  
	SDK_UNDEFINED(16,12085) /* FMulticastInlineDelegate */ __um(OnExitPreviewMode);                                // 0x0300   (0x0010)  
	FJunoInputMapping                                  BuildPreviewModeInputMapping;                               // 0x0310   (0x0010)  
	class UInputAction*                                BuildingPreviewModeCameraRotationAction;                    // 0x0320   (0x0008)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0328   (0x0008)  MISSED
	FTransform                                         SelectionToWorld;                                           // 0x0330   (0x0060)  
	FTransform                                         TargetSelectionToWorld;                                     // 0x0390   (0x0060)  
	FTransform                                         SmoothedSelectionToWorld;                                   // 0x03F0   (0x0060)  
	FTransform                                         SelectionToBasis;                                           // 0x0450   (0x0060)  
	FTransform                                         InterpolationBasis;                                         // 0x04B0   (0x0060)  
	float                                              LocationLerpAlpha;                                          // 0x0510   (0x0004)  
	float                                              RotationLerpAlpha;                                          // 0x0514   (0x0004)  
	unsigned char                                      UnknownData03_5[0x1];                                       // 0x0518   (0x0001)  MISSED
	bool                                               bIsCurrentlyInPreviewMode;                                  // 0x0519   (0x0001)  
	EJunoBuildModeType                                 CurrentBuildMode;                                           // 0x051A   (0x0001)  
	unsigned char                                      UnknownData04_5[0x5];                                       // 0x051B   (0x0005)  MISSED
	SDK_UNDEFINED(16,12086) /* FMulticastInlineDelegate */ __um(OnPositionInterpStart);                            // 0x0520   (0x0010)  
	SDK_UNDEFINED(16,12087) /* FMulticastInlineDelegate */ __um(OnPositionInterpEnd);                              // 0x0530   (0x0010)  
	FGameplayTagQuery                                  SpatialInterfaceSelectionQuery;                             // 0x0540   (0x0048)  


	/// Functions
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.SetTargetSelectionToWorld
	// void SetTargetSelectionToWorld(FTransform& NewSelectionToWorld);                                                      // [0xbaf959c] Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.SetTargetSelectionRotation
	// void SetTargetSelectionRotation(FQuat& NewRotation);                                                                  // [0xbaf9514] Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.SetTargetSelectionLocation
	// void SetTargetSelectionLocation(FVector& NewLocation);                                                                // [0xbaf9450] Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.SetSmoothedSelectionToWorld
	// void SetSmoothedSelectionToWorld(FTransform& NewSmoothedSelectionToWorld);                                            // [0xbaf9350] Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.SetInterpolationBasis
	// void SetInterpolationBasis(FTransform& NewInterpolationBasis);                                                        // [0xbaf9250] Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.SetDisabled
	// void SetDisabled(bool bShouldBeDisabled);                                                                             // [0xbaf90f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.ServerUpdatePreview
	// void ServerUpdatePreview(FTransform NewSelectionToWorld, EJunoBuildingBehaviorState NewBuildingState);                // [0xbaf8ddc] Final|Net|NetReliableNative|Event|Private|NetServer|HasDefaults 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.ReceivePositionInterpStart
	// void ReceivePositionInterpStart();                                                                                    // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.ReceivePositionInterpEnd
	// void ReceivePositionInterpEnd();                                                                                      // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.ReceiveBuildingStateChanged
	// void ReceiveBuildingStateChanged(EJunoBuildingBehaviorState PreviousState, EJunoBuildingBehaviorState NewState);      // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.MulticastUpdatePreviewOnRemoteClients
	// void MulticastUpdatePreviewOnRemoteClients(FTransform NewSelectionToWorld, EJunoBuildingBehaviorState NewBuildingState); // [0xbaf77d8] Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.IsDisabled
	// bool IsDisabled();                                                                                                    // [0xbaf6f68] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.HandleBuildModeChanged
	// void HandleBuildModeChanged(FJunoEvent_BuildingModeChanged& Event);                                                   // [0xbaf6e64] Final|Native|Protected|HasOutParms 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.GetTargetSelectionToWorld
	// FTransform GetTargetSelectionToWorld();                                                                               // [0xbaf6960] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.GetSelectionToWorld
	// FTransform GetSelectionToWorld();                                                                                     // [0xbaf6810] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.GetPreviewWorldBounds
	// FBox GetPreviewWorldBounds();                                                                                         // [0xbaf60a0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.GetPreviewLocalBounds
	// FBox GetPreviewLocalBounds();                                                                                         // [0xbaf6058] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.GetPreviewer
	// class AJunoBuildingPreviewer* GetPreviewer();                                                                         // [0x608e164] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.GetDefaultPreviewParams
	// FJunoBuildingPreviewParams GetDefaultPreviewParams();                                                                 // [0xbaf5c54] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.GetBuildingStateTags
	// FGameplayTagContainer GetBuildingStateTags();                                                                         // [0xbaf5a64] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.GetBuildingState
	// EJunoBuildingBehaviorState GetBuildingState();                                                                        // [0xbaf5a30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.CanSelectedActorsBePlaced
	// bool CanSelectedActorsBePlaced(TArray<FJunoBuilderToolSelectedActor>& InSelectedActors, FTransform& InSelectionToWorld, FGameplayTagContainer& OutBuildingStateTags); // [0xbaf47d8] Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.CanPlaceSelectedActors
	// bool CanPlaceSelectedActors(FGameplayTagContainer& OutBuildingStateTags);                                             // [0xbaf4704] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};
#pragma pack(pop)

/// Struct /Script/JunoGameNative.JunoBuilderToolInteractionRow
/// Size: 0x00A0 (0x000008 - 0x0000A8)
struct FJunoBuilderToolInteractionRow : FTableRowBase
{ 
	FJunoBuilderToolInteractionActorClassSet           SupportedClasses;                                           // 0x0008   (0x00A0)  
};

/// Struct /Script/JunoGameNative.JunoBuildingBehaviorInteractionRow
/// Size: 0x0140 (0x0000A8 - 0x0001E8)
struct FJunoBuildingBehaviorInteractionRow : FJunoBuilderToolInteractionRow
{ 
	FJunoBuilderToolInteractionActorClassSet           OverlappableClasses;                                        // 0x00A8   (0x00A0)  
	FJunoBuilderToolInteractionActorClassSet           PlacementSupportingClasses;                                 // 0x0148   (0x00A0)  
};

/// Struct /Script/JunoGameNative.JunoBuildingBehaviorOverrides
/// Size: 0x0260 (0x000000 - 0x000260)
struct FJunoBuildingBehaviorOverrides
{ 
	FJunoBuildingBehaviorInteractionRow                ConfigData;                                                 // 0x0000   (0x01E8)  
	FVector                                            GridSize;                                                   // 0x01E8   (0x0018)  
	FRotator                                           RotationOffset;                                             // 0x0200   (0x0018)  
	FVector                                            PivotOffset;                                                // 0x0218   (0x0018)  
	FVector                                            GridSnapOffset;                                             // 0x0230   (0x0018)  
	FJunoBuildingBehaviorGridLimits                    GridOffsetLimits;                                           // 0x0248   (0x0010)  
	float                                              MinDistance;                                                // 0x0258   (0x0004)  
	bool                                               bMinDistanceIncludesBounds;                                 // 0x025C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x025D   (0x0003)  MISSED
};

/// Struct /Script/JunoGameNative.JunoBuildingSnapEntryContext
/// Size: 0x0080 (0x000000 - 0x000080)
struct FJunoBuildingSnapEntryContext
{ 
	EJunoBuildingSnapEntryState                        State;                                                      // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	FTransform                                         ToWorld;                                                    // 0x0010   (0x0060)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0070   (0x0010)  MISSED
};

/// Struct /Script/JunoGameNative.JunoBuildingSnapContext
/// Size: 0x0050 (0x000000 - 0x000050)
struct FJunoBuildingSnapContext
{ 
	TArray<FJunoBuildingSnapEntryContext>              TargetEntries;                                              // 0x0020   (0x0010)  
	FQuat                                              RotationOffset;                                             // 0x0030   (0x0020)  
};

/// Struct /Script/JunoGameNative.JunoBuildingConnectionPointsResult
/// Size: 0x0050 (0x000000 - 0x000050)
struct FJunoBuildingConnectionPointsResult
{ 
	SDK_UNDEFINED(80,12088) /* TMap<EConnectionFieldGender, FJunoBuildingConnectionPoints> */ __um(PointsMap);     // 0x0000   (0x0050)  
};

/// Struct /Script/JunoGameNative.JunoBuildingConnectionPoint
/// Size: 0x00E0 (0x000000 - 0x0000E0)
struct FJunoBuildingConnectionPoint
{ 
	FTransform                                         FieldToObject;                                              // 0x0000   (0x0060)  
	FTransform                                         PointToObject;                                              // 0x0060   (0x0060)  
	FVector2D                                          FieldSize;                                                  // 0x00C0   (0x0010)  
	SDK_UNDEFINED(8,12089) /* TWeakObjectPtr<USceneComponent*> */ __um(Component);                                 // 0x00D0   (0x0008)  
	int32_t                                            ObjectId;                                                   // 0x00D8   (0x0004)  
	EConnectionPointType                               PointType;                                                  // 0x00DC   (0x0001)  
	bool                                               bAvailable;                                                 // 0x00DD   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00DE   (0x0002)  MISSED
};

/// Struct /Script/JunoGameNative.JunoBuildingConnection
/// Size: 0x01D0 (0x000000 - 0x0001D0)
struct FJunoBuildingConnection
{ 
	FJunoBuildingConnectionPoint                       Candidate;                                                  // 0x0000   (0x00E0)  
	FJunoBuildingConnectionPoint                       Target;                                                     // 0x00E0   (0x00E0)  
	TArray<FVector>                                    Locations;                                                  // 0x01C0   (0x0010)  
};

/// Struct /Script/JunoGameNative.JunoBuildingConnectivityContext
/// Size: 0x02A0 (0x000000 - 0x0002A0)
struct FJunoBuildingConnectivityContext
{ 
	FJunoBuildingConnectionPointsResult                PreviewConnectionPoints;                                    // 0x0000   (0x0050)  
	FVector                                            TargetTraceToActorLocation;                                 // 0x0050   (0x0018)  
	unsigned char                                      UnknownData00_5[0x18];                                      // 0x0068   (0x0018)  MISSED
	FJunoBuildingConnectionPointsResult                TargetConnectionPoints;                                     // 0x0080   (0x0050)  
	FJunoBuildingConnection                            Connection;                                                 // 0x00D0   (0x01D0)  
};

/// Struct /Script/JunoGameNative.JunoBuildingFloatingResult
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoBuildingFloatingResult
{ 
	SDK_UNDEFINED(16,12090) /* TArray<TWeakObjectPtr<UPrimitiveComponent*>> */ __um(SupportingComponents);         // 0x0000   (0x0010)  
};

/// Struct /Script/JunoGameNative.JunoBuildingSupportedComponent
/// Size: 0x0018 (0x000000 - 0x000018)
struct FJunoBuildingSupportedComponent
{ 
	SDK_UNDEFINED(8,12091) /* TWeakObjectPtr<UPrimitiveComponent*> */ __um(Component);                             // 0x0000   (0x0008)  
	FJunoBuildingFloatingResult                        Result;                                                     // 0x0008   (0x0010)  
};

/// Struct /Script/JunoGameNative.JunoBuildingBehaviorStateContext
/// Size: 0x0030 (0x000000 - 0x000030)
struct FJunoBuildingBehaviorStateContext
{ 
	SDK_UNDEFINED(8,12092) /* TWeakObjectPtr<UPrimitiveComponent*> */ __um(OverlappedPreviewComponent);            // 0x0000   (0x0008)  
	FJunoBuildingMultiOverlapResult                    OverlapResult;                                              // 0x0008   (0x0010)  
	TArray<FJunoBuildingSupportedComponent>            SupportedComponents;                                        // 0x0018   (0x0010)  
	bool                                               bBlockedByAssembly;                                         // 0x0028   (0x0001)  
	bool                                               bGuidedBuildMisplacement;                                   // 0x0029   (0x0001)  
	bool                                               bBlockedByActorCount;                                       // 0x002A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x002B   (0x0005)  MISSED
};

/// Class /Script/JunoGameNative.JunoBuildingBehavior
/// Size: 0x0CD0 (0x000590 - 0x001260)
class UJunoBuildingBehavior : public UJunoBuildingBehaviorBase
{ 
public:
	class UInputAction*                                RotateInputAction;                                          // 0x0588   (0x0008)  
	class UInputAction*                                NudgeInputAction;                                           // 0x0590   (0x0008)  
	class UInputAction*                                ToggleNudgeInputAction;                                     // 0x0598   (0x0008)  
	class UInputAction*                                AdjacencyInputAction;                                       // 0x05A0   (0x0008)  
	class UInputAction*                                SnapToggleInputAction;                                      // 0x05A8   (0x0008)  
	double                                             RotationStep;                                               // 0x05B0   (0x0008)  
	float                                              MaxSelectionDistance;                                       // 0x05B8   (0x0004)  
	float                                              MaxSelectionDistanceZ;                                      // 0x05BC   (0x0004)  
	FVector                                            MaxConnectivityDistance;                                    // 0x05C0   (0x0018)  
	FJunoBuildingBehaviorGridLimits                    DefaultGridOffsetLimit;                                     // 0x05D8   (0x0010)  
	FVector                                            PenetrationTolerance;                                       // 0x05E8   (0x0018)  
	class UClass*                                      RotateAbility;                                              // 0x0600   (0x0008)  
	FJunoBuildingBehaviorOverrides                     Overrides;                                                  // 0x0608   (0x0260)  
	unsigned char                                      UnknownData00_5[0x518];                                     // 0x0868   (0x0518)  MISSED
	FQuat                                              RotationOffset;                                             // 0x0D80   (0x0020)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x0DA0   (0x0010)  MISSED
	FJunoBuildingSnapContext                           SnapContext;                                                // 0x0DB0   (0x0050)  
	unsigned char                                      UnknownData02_5[0xD0];                                      // 0x0E00   (0x00D0)  MISSED
	FJunoBuildingConnectivityContext                   ConnectivityContext;                                        // 0x0ED0   (0x02A0)  
	bool                                               bEnableAdjacency;                                           // 0x1170   (0x0001)  
	bool                                               bEnableSnapPlacement;                                       // 0x1171   (0x0001)  
	unsigned char                                      UnknownData03_5[0x6];                                       // 0x1172   (0x0006)  MISSED
	SDK_UNDEFINED(16,12093) /* FMulticastInlineDelegate */ __um(OnToggleSnapping);                                 // 0x1178   (0x0010)  
	FIntPoint                                          GridOffset;                                                 // 0x1188   (0x0008)  
	FQuat                                              GridOffsetControlRotation;                                  // 0x1190   (0x0020)  
	SDK_UNDEFINED(16,12094) /* FMulticastInlineDelegate */ __um(OnPlacementTypeChanged);                           // 0x11B0   (0x0010)  
	FJunoBuildingBehaviorStateContext                  CachedBuildingStateContext;                                 // 0x11C0   (0x0030)  
	SDK_UNDEFINED(16,12095) /* FMulticastInlineDelegate */ __um(OnBuildingStateContextChanged);                    // 0x11F0   (0x0010)  
	double                                             LastTriggerRequestedTimestamp;                              // 0x1200   (0x0008)  
	double                                             LastTriggerTimestamp;                                       // 0x1208   (0x0008)  
	bool                                               bAdhesionNeedsReset;                                        // 0x1210   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x1211   (0x0007)  MISSED
	FVector                                            LastPawnLocationForSmoothing;                               // 0x1218   (0x0018)  
	FRotator                                           LastCameraRotationForSmoothing;                             // 0x1230   (0x0018)  
	float                                              PlayerMotionAmount;                                         // 0x1248   (0x0004)  
	unsigned char                                      UnknownData05_6[0x14];                                      // 0x124C   (0x0014)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoBuildingBehavior.ToggleAdjacency
	// void ToggleAdjacency();                                                                                               // [0xbaf9764] Final|Native|Private|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.SetGridOffset
	// void SetGridOffset(FIntPoint& NewOffset);                                                                             // [0xbaf91c8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.RotateSelection
	// void RotateSelection(double Delta);                                                                                   // [0xbaf8300] Final|Native|Private|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.ReceiveSnappingEnabled
	// void ReceiveSnappingEnabled();                                                                                        // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.ReceiveSnappingDisabled
	// void ReceiveSnappingDisabled();                                                                                       // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.ReceiveRotateSelection
	// void ReceiveRotateSelection();                                                                                        // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.ReceivePositionChangedGridCell
	// void ReceivePositionChangedGridCell(FVector& GridCellLocation);                                                       // [0x3d1d968] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.ReceiveNudgeInputAction
	// void ReceiveNudgeInputAction(bool bOffsetChanged);                                                                    // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.ReceivedFailedInteraction
	// void ReceivedFailedInteraction();                                                                                     // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.IsAdjacencyEnabled
	// bool IsAdjacencyEnabled();                                                                                            // [0xbaf6f50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.HasAnySnapEntries
	// bool HasAnySnapEntries();                                                                                             // [0xbaf6f00] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.GetWorldSpacePivotOffset
	// FVector GetWorldSpacePivotOffset();                                                                                   // [0xbaf6e0c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.GetWorldSpaceGridOffsetLimits
	// FVector2D GetWorldSpaceGridOffsetLimits(FVector2D& MinOffset, FVector2D& MaxOffset);                                  // [0xbaf6d14] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.GetWorldSpaceGridOffset
	// FVector2D GetWorldSpaceGridOffset();                                                                                  // [0xbaf6cc8] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.GetTargetTraceResult
	// FHitResult GetTargetTraceResult();                                                                                    // [0xbaf69b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.GetSnapContext
	// FJunoBuildingSnapContext GetSnapContext();                                                                            // [0xbaf6868] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.GetPivotOffset
	// FVector GetPivotOffset();                                                                                             // [0xbaf5f44] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.GetPenetrationTolerance
	// FVector GetPenetrationTolerance();                                                                                    // [0xbaf5ee4] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.GetLastPlacementResult
	// FJunoBuildingPlacementResult GetLastPlacementResult();                                                                // [0xbaf5e10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.GetGridSnapOffset
	// FVector GetGridSnapOffset();                                                                                          // [0xbaf5d94] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.GetGridSize
	// FVector GetGridSize();                                                                                                // [0xbaf5d34] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.GetGridOffsetLimits
	// FJunoBuildingBehaviorGridLimits GetGridOffsetLimits();                                                                // [0xbaf5d18] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.GetGridOffset
	// FIntPoint GetGridOffset();                                                                                            // [0xbaf5cd0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.GetConnectivityContext
	// FJunoBuildingConnectivityContext GetConnectivityContext();                                                            // [0xbaf5ac4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.GetConfigData
	// FJunoBuildingBehaviorInteractionRow GetConfigData();                                                                  // [0xbaf5aa8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.GetBuildingStateContext
	// FJunoBuildingBehaviorStateContext GetBuildingStateContext();                                                          // [0xbaf5a48] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.AddGridOffset
	// void AddGridOffset(FIntPoint& OffsetDelta);                                                                           // [0xbaf4380] Final|Native|Private|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.AddCameraSpaceGridOffset
	// void AddCameraSpaceGridOffset(FIntPoint& Delta);                                                                      // [0xbaf42f8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoBuildingBehaviorSelectedActorInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoBuildingBehaviorSelectedActorInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/JunoGameNative.JunoBuildingBehaviorSelectedActorInterface.UpdateNoTargetPlacement
	// void UpdateNoTargetPlacement(FTransform& NewSelectionToWorld, FTransform& NewUnsnappedSelectionToWorld, FTransform& NewBasis, FTransform& ActorToSelection, FJunoBuildingPlacementResult& PlacementResult, class UJunoBuildingBehavior* Behavior); // [0xbaf9778] Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorSelectedActorInterface.ShouldMinDistanceIncludeBounds
	// bool ShouldMinDistanceIncludeBounds();                                                                                // [0x650f520] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorSelectedActorInterface.ShouldIgnoreOverlaps
	// bool ShouldIgnoreOverlaps(class UPrimitiveComponent* PrimComp, class AActor* OverlappingActor);                       // [0xbaf969c] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorSelectedActorInterface.ShouldBeGridAligned
	// bool ShouldBeGridAligned();                                                                                           // [0x811243c] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorSelectedActorInterface.GetRotationOffset
	// FRotator GetRotationOffset();                                                                                         // [0x2a6bc20] Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorSelectedActorInterface.GetPivotOffset
	// FVector GetPivotOffset();                                                                                             // [0xbaf5f0c] Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorSelectedActorInterface.GetOverlappableClasses
	// FJunoBuilderToolInteractionActorClassSet GetOverlappableClasses();                                                    // [0xbaf5e80] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorSelectedActorInterface.GetMinDistance
	// float GetMinDistance();                                                                                               // [0x8f58908] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorSelectedActorInterface.GetGridSnapOffset
	// FVector GetGridSnapOffset();                                                                                          // [0xbaf5d5c] Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorSelectedActorInterface.GetGridSize
	// FVector GetGridSize();                                                                                                // [0xa994cfc] Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorSelectedActorInterface.GetGridOffsetLimits
	// FJunoBuildingBehaviorGridLimits GetGridOffsetLimits();                                                                // [0xbaf5ce8] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorSelectedActorInterface.GetFloatingValidationDirections
	// TArray<EJunoContactDirection> GetFloatingValidationDirections();                                                      // [0xbaf5c70] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorSelectedActorInterface.GetCoordinateBasis
	// FTransform GetCoordinateBasis();                                                                                      // [0xbaf5ae0] Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorSelectedActorInterface.CanSupport
	// bool CanSupport(class UClass* ActorClass);                                                                            // [0xbaf503c] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorSelectedActorInterface.CanPlaceSelectedActor
	// bool CanPlaceSelectedActor(class UJunoBuildingBehavior* Behavior, FTransform& ToWorld, FGameplayTagContainer& OutBuildingStateTags); // [0xbaf4584] Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoBuildingBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoBuildingBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/JunoGameNative.JunoBuildingBlueprintLibrary.GetUnitGridSize
	// FVector GetUnitGridSize();                                                                                            // [0xbaf6c88] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoBuildingBlueprintLibrary.GetTargetTransform
	// FTransform GetTargetTransform(FJunoBuildingPlacementResult& PlacementResult);                                         // [0xbaf6b94] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoBuildingBlueprintLibrary.GetTargetTraceResult
	// FHitResult GetTargetTraceResult(FJunoBuildingPlacementResult& PlacementResult);                                       // [0xbaf6a5c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoBuildingBlueprintLibrary.GetSupportCandidates
	// TArray<AActor*> GetSupportCandidates(FJunoBuilderToolSelectionSpawnParams& Params);                                   // [0xbaf6884] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoBuildingBlueprintLibrary.GetPlacementType
	// EJunoBuildingPlacementType GetPlacementType(FJunoBuildingPlacementResult& PlacementResult);                           // [0xbaf5f78] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoBuildingBlueprintLibrary.GetCoordinateBasis
	// FTransform GetCoordinateBasis(FJunoBuildingPlacementResult& PlacementResult);                                         // [0xbaf5b60] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/JunoGameNative.JunoBuildingGameplayActor
/// Size: 0x0200 (0x000980 - 0x000B80)
class AJunoBuildingGameplayActor : public ABuildingGameplayActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x40];                                      // 0x0980   (0x0040)  MISSED
	FVector                                            GridSizeOverride;                                           // 0x09C0   (0x0018)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x09D8   (0x0008)  MISSED
	FTransform                                         BuildingPivotOffset;                                        // 0x09E0   (0x0060)  
	FVector                                            BuildingGridSnapOffset;                                     // 0x0A40   (0x0018)  
	FJunoBuildingBehaviorGridLimits                    GridOffsetLimits;                                           // 0x0A58   (0x0010)  
	FJunoBuilderToolInteractionActorClassSet           OverlappableClasses;                                        // 0x0A68   (0x00A0)  
	class UItemDefinitionBase*                         AssociatedItem;                                             // 0x0B08   (0x0008)  
	SDK_UNDEFINED(80,12096) /* TMap<FName, UClass*> */ __um(PreviewComponentTemplates);                            // 0x0B10   (0x0050)  
	bool                                               bShouldPersist;                                             // 0x0B60   (0x0001)  
	unsigned char                                      UnknownData02_6[0x1F];                                      // 0x0B61   (0x001F)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoBuildingGameplayActor.SetAssociatedItem
	// void SetAssociatedItem(class UItemDefinitionBase* Item);                                                              // [0xbaf9074] Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingGameplayActor.OnPhysicsStateChanged
	// void OnPhysicsStateChanged(class UPrimitiveComponent* PrimitiveComponent, EComponentPhysicsStateChange StateChange);  // [0xbaf7a70] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoBuildingGameplayActor.HasBeenMigrated
	// bool HasBeenMigrated();                                                                                               // [0xbaf6f1c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingGameplayActor.GetAssociatedItem
	// class UItemDefinitionBase* GetAssociatedItem();                                                                       // [0xbaf59e0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingGameplayActor.BlueprintCanDropResourceWithTagOnDeath
	// bool BlueprintCanDropResourceWithTagOnDeath(FGameplayTag ResourceTag);                                                // [0xbaf4430] Native|Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingGameplayActor.BlueprintCanDropResourceOnDeath
	// bool BlueprintCanDropResourceOnDeath();                                                                               // [0x8855bec] Native|Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingGameplayActor.BlueprintCanDropItemOnDestroy
	// bool BlueprintCanDropItemOnDestroy();                                                                                 // [0xbaf4408] Native|Event|Public|BlueprintEvent|Const 
};

/// Class /Script/JunoGameNative.JunoBuildingSnapEditorComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UJunoBuildingSnapEditorComponent : public UActorComponent
{ 
public:
	TArray<FJunoBuildingSnapEntry>                     SnapEntries;                                                // 0x00A0   (0x0010)  
	bool                                               bShowUnselectedTargetingAreas;                              // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00B1   (0x0007)  MISSED
};

/// Struct /Script/JunoGameNative.JunoBuildingSnapEntryBase
/// Size: 0x0028 (0x000000 - 0x000028)
struct FJunoBuildingSnapEntryBase
{ 
	FGameplayTagContainer                              RequiredTags;                                               // 0x0000   (0x0020)  
	float                                              Radius;                                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Class /Script/JunoGameNative.JunoBuildingSnappingLocation
/// Size: 0x0030 (0x000220 - 0x000250)
class UJunoBuildingSnappingLocation : public USceneComponent
{ 
public:
	FGameplayTagContainer                              LocationTags;                                               // 0x0220   (0x0020)  
	TArray<FJunoBuildingSnapEntryBase>                 SnapEntries;                                                // 0x0240   (0x0010)  
};

/// Class /Script/JunoGameNative.JunoDamageableBuildingInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoDamageableBuildingInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/JunoGameNative.JunoDamageableBuildingInterface.OnBuildingHandleOutOfHealth
	// void OnBuildingHandleOutOfHealth(FGameplayEffectContextHandle& EffectContext, class AController* EventInstigator, class AActor* DamageCauser, FGameplayTagContainer& InTags); // [0xbb372c8] RequiredAPI|Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoDamageableBuildingInterface.OnBuildingHandleDamage
	// void OnBuildingHandleDamage(class AActor* DamageCauser);                                                              // [0x8100ce8] Native|Event|Public|BlueprintEvent 
};

/// Struct /Script/JunoGameNative.JunoStageKey
/// Size: 0x0008 (0x000000 - 0x000008)
struct FJunoStageKey
{ 
	int32_t                                            SectionIndex;                                               // 0x0000   (0x0004)  
	int32_t                                            StageIndex;                                                 // 0x0004   (0x0004)  
};

/// Struct /Script/JunoGameNative.JunoGuidedBuildingData
/// Size: 0x0058 (0x000000 - 0x000058)
struct FJunoGuidedBuildingData
{ 
	FName                                              ActorName;                                                  // 0x0000   (0x0004)  
	FName                                              Recipe;                                                     // 0x0004   (0x0004)  
	TArray<FComponentReference>                        ComponentReferences;                                        // 0x0008   (0x0010)  
	SDK_UNDEFINED(32,12097) /* TWeakObjectPtr<UClass*> */ __um(ActorClass);                                        // 0x0018   (0x0020)  
	TArray<class UPrimitiveComponent*>                 Components;                                                 // 0x0038   (0x0010)  
	FJunoStageKey                                      StageKey;                                                   // 0x0048   (0x0008)  
	int32_t                                            BuildingStateIndex;                                         // 0x0050   (0x0004)  
	bool                                               bIsInstantAutoComplete : 1;                                 // 0x0054:0 (0x0001)  
	bool                                               bIsAutoComplete : 1;                                        // 0x0054:1 (0x0001)  
	bool                                               bIsFoundation : 1;                                          // 0x0054:2 (0x0001)  
	bool                                               bForceIndependentlySupported : 1;                           // 0x0054:3 (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0055   (0x0003)  MISSED
};

/// Struct /Script/JunoGameNative.JunoGuidedBuildingStateEntry
/// Size: 0x0014 (0x00000C - 0x000020)
struct FJunoGuidedBuildingStateEntry : FFastArraySerializerItem
{ 
	EJunoGuidedBuildingState                           CurrentState;                                               // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	SDK_UNDEFINED(8,12098) /* TWeakObjectPtr<AActor*> */ __um(FilledActor);                                        // 0x0010   (0x0008)  
	int32_t                                            BuildingDataIndex;                                          // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/JunoGameNative.JunoGuidedBuildingStateArray
/// Size: 0x0018 (0x000108 - 0x000120)
struct FJunoGuidedBuildingStateArray : FFastArraySerializer
{ 
	TArray<FJunoGuidedBuildingStateEntry>              Entries;                                                    // 0x0108   (0x0010)  
	class AJunoGuidedBuildingActor*                    Parent;                                                     // 0x0118   (0x0008)  
};

/// Struct /Script/JunoGameNative.JunoGuidedBuildingSetCompleteState
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoGuidedBuildingSetCompleteState
{ 
	bool                                               bSetComplete;                                               // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	SDK_UNDEFINED(8,12099) /* TWeakObjectPtr<AActor*> */ __um(FinishingPlayer);                                    // 0x0004   (0x0008)  
	bool                                               bSetUnfinished;                                             // 0x000C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/JunoGameNative.JunoGuidedBuildingStageData
/// Size: 0x0040 (0x000000 - 0x000040)
struct FJunoGuidedBuildingStageData
{ 
	SDK_UNDEFINED(24,12100) /* FText */                __um(StageDisplayName);                                     // 0x0000   (0x0018)  
	TArray<int32_t>                                    ActorIndexes;                                               // 0x0018   (0x0010)  
	TArray<int32_t>                                    AutoCompleteIndexes;                                        // 0x0028   (0x0010)  
	int32_t                                            NumCompleted;                                               // 0x0038   (0x0004)  
	bool                                               bStageEverCompleted;                                        // 0x003C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x003D   (0x0003)  MISSED
};

/// Struct /Script/JunoGameNative.JunoGuidedBuildingSectionData
/// Size: 0x0038 (0x000000 - 0x000038)
struct FJunoGuidedBuildingSectionData
{ 
	SDK_UNDEFINED(24,12101) /* FText */                __um(SectionDisplayName);                                   // 0x0000   (0x0018)  
	int32_t                                            NumCompleted;                                               // 0x0018   (0x0004)  
	int32_t                                            TotalNumberOfSnapsInSection;                                // 0x001C   (0x0004)  
	bool                                               bSectionEverCompleted;                                      // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0021   (0x0007)  MISSED
	TArray<FJunoGuidedBuildingStageData>               Stages;                                                     // 0x0028   (0x0010)  
};

/// Struct /Script/JunoGameNative.JunoGuidedBuildingSetData
/// Size: 0x0070 (0x000000 - 0x000070)
struct FJunoGuidedBuildingSetData
{ 
	SDK_UNDEFINED(24,12102) /* FText */                __um(SetDisplayName);                                       // 0x0000   (0x0018)  
	int32_t                                            TotalNumberOfSnapsInSet;                                    // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	FJunoGuidedBuildingStageData                       FoundationStage;                                            // 0x0020   (0x0040)  
	TArray<FJunoGuidedBuildingSectionData>             Sections;                                                   // 0x0060   (0x0010)  
};

/// Struct /Script/JunoGameNative.JunoGuidedBuildingRegisteredPlayer
/// Size: 0x0008 (0x00000C - 0x000014)
struct FJunoGuidedBuildingRegisteredPlayer : FFastArraySerializerItem
{ 
	SDK_UNDEFINED(8,12103) /* TWeakObjectPtr<AFortPlayerState*> */ __um(PlayerState);                              // 0x000C   (0x0008)  
};

/// Struct /Script/JunoGameNative.JunoGuidedBuildingRegisteredPlayerArray
/// Size: 0x0040 (0x000108 - 0x000148)
struct FJunoGuidedBuildingRegisteredPlayerArray : FFastArraySerializer
{ 
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0108   (0x0030)  MISSED
	TArray<FJunoGuidedBuildingRegisteredPlayer>        Entries;                                                    // 0x0138   (0x0010)  
};

/// Class /Script/JunoGameNative.JunoGuidedBuildingActor
/// Size: 0x0760 (0x000C10 - 0x001370)
class AJunoGuidedBuildingActor : public AJunoBuildingProp
{ 
public:
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x0C10   (0x0020)  MISSED
	SDK_UNDEFINED(16,12104) /* FMulticastInlineDelegate */ __um(OnCurrentStageUpdateDelegate);                     // 0x0C30   (0x0010)  
	SDK_UNDEFINED(16,12105) /* FMulticastInlineDelegate */ __um(OnStageUpdateDelegate);                            // 0x0C40   (0x0010)  
	SDK_UNDEFINED(16,12106) /* FMulticastInlineDelegate */ __um(OnStageCompleteDelegate);                          // 0x0C50   (0x0010)  
	SDK_UNDEFINED(16,12107) /* FMulticastInlineDelegate */ __um(OnSectionCompleteDelegate);                        // 0x0C60   (0x0010)  
	SDK_UNDEFINED(16,12108) /* FMulticastInlineDelegate */ __um(OnSetCompleteDelegate);                            // 0x0C70   (0x0010)  
	SDK_UNDEFINED(16,12109) /* FMulticastInlineDelegate */ __um(OnSetUnfinishedDelegate);                          // 0x0C80   (0x0010)  
	SDK_UNDEFINED(16,12110) /* FMulticastInlineDelegate */ __um(OnCurrentStageChange);                             // 0x0C90   (0x0010)  
	SDK_UNDEFINED(16,12111) /* FMulticastInlineDelegate */ __um(OnSnapsUpdatedDelegate);                           // 0x0CA0   (0x0010)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x0CB0   (0x0010)  MISSED
	FTransform                                         BuildingPivotOffset;                                        // 0x0CC0   (0x0060)  
	FVector                                            BuildingGridSnapOffset;                                     // 0x0D20   (0x0018)  
	FJunoBuilderToolInteractionActorClassSet           OverlappableClasses;                                        // 0x0D38   (0x00A0)  
	FVector                                            GridSizeOverride;                                           // 0x0DD8   (0x0018)  
	FJunoBuildingBehaviorGridLimits                    GridOffsetLimits;                                           // 0x0DF0   (0x0010)  
	float                                              MinDistanceOverride;                                        // 0x0E00   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0E04   (0x0004)  MISSED
	SDK_UNDEFINED(80,12112) /* TMap<FName, UClass*> */ __um(PreviewComponentTemplates);                            // 0x0E08   (0x0050)  
	FGameplayTagContainer                              DestroyOnPlacementTags;                                     // 0x0E58   (0x0020)  
	TArray<FJunoGuidedBuildingData>                    DataArray;                                                  // 0x0E78   (0x0010)  
	FJunoGuidedBuildingStateArray                      StateArray;                                                 // 0x0E88   (0x0120)  
	FJunoStageKey                                      CurrentStage;                                               // 0x0FA8   (0x0008)  
	FJunoGuidedBuildingSetCompleteState                SetCompleteState;                                           // 0x0FB0   (0x0010)  
	FDateTime                                          TimeStarted;                                                // 0x0FC0   (0x0008)  
	FUniqueNetIdRepl                                   OwningPlayerID;                                             // 0x0FC8   (0x0030)  
	SDK_UNDEFINED(32,12113) /* TWeakObjectPtr<UMaterial*> */ __um(GuidedBuildingMaterial);                         // 0x0FF8   (0x0020)  
	FJunoGuidedBuildingSetData                         SetData;                                                    // 0x1018   (0x0070)  
	float                                              LifespanAfterCompletion;                                    // 0x1088   (0x0004)  
	float                                              LifespanAfterUnfinished;                                    // 0x108C   (0x0004)  
	float                                              TimeDelayBeforeShowingNewStageGhostBrushes;                 // 0x1090   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x1094   (0x0004)  MISSED
	class AFortPlayerController*                       LocalRegisteredController;                                  // 0x1098   (0x0008)  
	class AJunoGuidedBuildingLandscapeVisualModifierActor* TerrainVisualModifierActor;                             // 0x10A0   (0x0008)  
	unsigned char                                      UnknownData04_5[0x68];                                      // 0x10A8   (0x0068)  MISSED
	FJunoGuidedBuildingRegisteredPlayerArray           RegisteredPlayers;                                          // 0x1110   (0x0148)  
	SDK_UNDEFINED(8,12114) /* TWeakObjectPtr<APawn*> */ __um(AutoCompleteInstigatingPawn);                         // 0x1258   (0x0008)  
	class UClass*                                      InteractionComponentClass;                                  // 0x1260   (0x0008)  
	FScalableFloat                                     FoundationVerticalOffset;                                   // 0x1268   (0x0028)  
	FGuid                                              BuildId;                                                    // 0x1290   (0x0010)  
	SDK_UNDEFINED(16,12115) /* TArray<TWeakObjectPtr<AActor*>> */ __um(PendingInstantAutoCompleteActors);          // 0x12A0   (0x0010)  
	TArray<FJunoBuildingSnapEntry>                     SnapEntries;                                                // 0x12B0   (0x0010)  
	unsigned char                                      UnknownData05_6[0xB0];                                      // 0x12C0   (0x00B0)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.UpdateBlueprintColor
	// void UpdateBlueprintColor(FJunoGuidedBuildingBrushState& BrushState);                                                 // [0x3d1d968] BlueprintCosmetic|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.ShowSparkleEffect
	// void ShowSparkleEffect();                                                                                             // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.SetupComponent
	// void SetupComponent(class UPrimitiveComponent* PrimComp);                                                             // [0x888c480] Native|Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.SetToAutoCompleteToStage
	// void SetToAutoCompleteToStage(class APawn* InInstigator, FJunoStageKey& InAutoCompleteToStage);                       // [0xbb383b8] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.SetToAutoCompleteCurrentStage
	// void SetToAutoCompleteCurrentStage(class APawn* InInstigator);                                                        // [0xbb38330] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.SetToAutoComplete
	// void SetToAutoComplete(class APawn* InInstigator);                                                                    // [0xbb382b0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.SetTerrainVisualModifierOptions
	// void SetTerrainVisualModifierOptions(EJunoLandscapeVisualModifierType InModifierType, FTransform& InTransform);       // [0xbb38144] Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.OnRep_SetCompleteState
	// void OnRep_SetCompleteState();                                                                                        // [0xbb37d18] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.OnRep_RegisteredPlayers
	// void OnRep_RegisteredPlayers();                                                                                       // [0xbb37d04] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.OnRep_CurrentStage
	// void OnRep_CurrentStage(FJunoStageKey OldKeyVal);                                                                     // [0xbb37bb0] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.OnGhostBrushesVisible
	// void OnGhostBrushesVisible(bool bIsFocused, bool bCanBlendVisibility);                                                // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.OnGhostBrushesHidden
	// void OnGhostBrushesHidden(bool bCanBlendVisibility);                                                                  // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.OnFilledPieceDied
	// void OnFilledPieceDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* HitComponent, FName BoneName, FVector Momentum); // [0xbb375c0] Final|Native|Protected|HasDefaults 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.OnFilledPieceDestroyed
	// void OnFilledPieceDestroyed(class AActor* Actor);                                                                     // [0xbb37540] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.IsSetComplete
	// bool IsSetComplete();                                                                                                 // [0xbb3713c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.IsRecipeInStage
	// bool IsRecipeInStage(FJunoStageKey& InStageKey, FName& Recipe);                                                       // [0xbb36fe8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.IsRecipeInCurrentStage
	// bool IsRecipeInCurrentStage(FName& Recipe);                                                                           // [0xbb36f44] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.IsOwningPlayerController
	// bool IsOwningPlayerController(class APlayerController* Controller);                                                   // [0xbb36e74] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.HideSparkleEffect
	// void HideSparkleEffect();                                                                                             // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.GetStageUpdate
	// FGuidedBuildingUpdate GetStageUpdate(FJunoStageKey& InKey);                                                           // [0xbb36820] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.GetSetCompleteState
	// FJunoGuidedBuildingSetCompleteState GetSetCompleteState();                                                            // [0xbb367c8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.GetRemainingPartsInfoForRecipeInCurrentStage
	// FJunoGuidedBuildRemainingPartsInfo GetRemainingPartsInfoForRecipeInCurrentStage(FName& Recipe);                       // [0xbb36720] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.GetRemainingPartsInfoForRecipe
	// FJunoGuidedBuildRemainingPartsInfo GetRemainingPartsInfoForRecipe(FJunoStageKey& InStageKey, FName& Recipe);          // [0xbb36620] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.GetPartsInStage
	// bool GetPartsInStage(FJunoStageKey& InStageKey, TArray<FJunoGuidedBuildRemainingPartsInfo>& OutArray);                // [0xbb35e24] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.GetPartsInCurrentStage
	// bool GetPartsInCurrentStage(TArray<FJunoGuidedBuildRemainingPartsInfo>& OutArray);                                    // [0xbb35768] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.GetMissingPartsForRecipe
	// FJunoGuidedBuildRemainingPartsInfo GetMissingPartsForRecipe(FName& Recipe);                                           // [0xbb35458] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.GetMissingParts
	// void GetMissingParts(TArray<FJunoGuidedBuildRemainingPartsInfo>& OutArray);                                           // [0xbb34d98] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.GetLatestUpdate
	// FGuidedBuildingUpdate GetLatestUpdate();                                                                              // [0xbb34d54] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.GetEntryState
	// EJunoGuidedBuildingState GetEntryState(int32_t BuildingDataIndex);                                                    // [0xbb34c80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoGuidedBuildingBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoGuidedBuildingBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/JunoGameNative.JunoGuidedBuildingBlueprintLibrary.ShowProgressUpTo
	// void ShowProgressUpTo(FJunoStageKey& InStageKey);                                                                     // [0xbb33fa8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGuidedBuildingBlueprintLibrary.ShowAllStages
	// void ShowAllStages();                                                                                                 // [0x3097b14] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGuidedBuildingBlueprintLibrary.SetStageHidden
	// void SetStageHidden(FJunoStageKey StageKey, bool bHidden);                                                            // [0xbb37f44] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGuidedBuildingBlueprintLibrary.SetActorToAutoComplete
	// void SetActorToAutoComplete(class AActor* Actor, bool bAutoComplete);                                                 // [0x81029b8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGuidedBuildingBlueprintLibrary.MoveActorToNewStageByName
	// void MoveActorToNewStageByName(FName& ActorName, FJunoStageKey& NewStage);                                            // [0xbb37204] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGuidedBuildingBlueprintLibrary.MoveActorToNewStage
	// void MoveActorToNewStage(class AActor* Actor, FJunoStageKey& NewStage);                                               // [0xbb37154] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGuidedBuildingBlueprintLibrary.IsolateStage
	// void IsolateStage(FJunoStageKey& InStageKey);                                                                         // [0xbb33fa8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGuidedBuildingBlueprintLibrary.HideAllStages
	// void HideAllStages();                                                                                                 // [0x3097b14] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGuidedBuildingBlueprintLibrary.GetPreviousStage
	// FJunoStageKey GetPreviousStage(FJunoStageKey StageKey);                                                               // [0xbb35500] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoGuidedBuildingBlueprintLibrary.GetNextStage
	// FJunoStageKey GetNextStage(FJunoStageKey StageKey);                                                                   // [0xbb35500] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoGuidedBuildingBlueprintLibrary.GetJunoGuidedBuildingWorldSettings
	// class AJunoGuidedBuildingSettings* GetJunoGuidedBuildingWorldSettings();                                              // [0x6486500] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGuidedBuildingBlueprintLibrary.GetAllStageKeys
	// TArray<FJunoStageKey> GetAllStageKeys();                                                                              // [0xbb34c24] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/JunoGameNative.JunoGuidedBuildingInteractionComponent
/// Size: 0x0030 (0x0000A0 - 0x0000D0)
class UJunoGuidedBuildingInteractionComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00A0   (0x0008)  MISSED
	SDK_UNDEFINED(8,12116) /* TWeakObjectPtr<AJunoGuidedBuildingActor*> */ __um(ParentBuilding);                   // 0x00A8   (0x0008)  
	SDK_UNDEFINED(24,12117) /* FText */                __um(InteractionText);                                      // 0x00B0   (0x0018)  
	float                                              InteractRatingAdjustment;                                   // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00CC   (0x0004)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoGuidedBuildingInteractionComponent.GetInteractionText
	// FText GetInteractionText();                                                                                           // [0xbb34d0c] Native|Event|Protected|BlueprintEvent|Const 
};

/// Class /Script/JunoGameNative.JunoGuidedBuildingLandscapeVisualModifierActor
/// Size: 0x0048 (0x000290 - 0x0002D8)
class AJunoGuidedBuildingLandscapeVisualModifierActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0290   (0x0008)  MISSED
	class UJunoLandscapeVisualModifierComponent*       VisualModifier;                                             // 0x0298   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x02A0   (0x0004)  MISSED
	FGuid                                              SavedActorGuid;                                             // 0x02A4   (0x0010)  
	unsigned char                                      UnknownData02_6[0x24];                                      // 0x02B4   (0x0024)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoGuidedBuildingLandscapeVisualModifierActor.SetupVisualModifier
	// void SetupVisualModifier(EJunoLandscapeVisualModifierType InModifierType);                                            // [0xbb38490] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGuidedBuildingLandscapeVisualModifierActor.RemoveOwningPartRef
	// void RemoveOwningPartRef(class AActor* InOwningPart);                                                                 // [0xbb37d54] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGuidedBuildingLandscapeVisualModifierActor.AddOwningPartRef
	// void AddOwningPartRef(class AActor* InOwningPart);                                                                    // [0xbb33f2c] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/JunoGameNative.JunoGuidedBuildingStageEditorData
/// Size: 0x0028 (0x000040 - 0x000068)
struct FJunoGuidedBuildingStageEditorData : FJunoGuidedBuildingStageData
{ 
	FGameplayTag                                       StageTag;                                                   // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	TArray<FName>                                      ActorNames;                                                 // 0x0048   (0x0010)  
	TArray<FName>                                      AutoCompleteActorNames;                                     // 0x0058   (0x0010)  
};

/// Struct /Script/JunoGameNative.JunoGuidedBuildingSectionEditorData
/// Size: 0x0018 (0x000038 - 0x000050)
struct FJunoGuidedBuildingSectionEditorData : FJunoGuidedBuildingSectionData
{ 
	double                                             ZSortValue;                                                 // 0x0038   (0x0008)  
	TArray<FJunoGuidedBuildingStageEditorData>         EditorStages;                                               // 0x0040   (0x0010)  
};

/// Struct /Script/JunoGameNative.JunoGuidedBuildingSetEditorData
/// Size: 0x0010 (0x000070 - 0x000080)
struct FJunoGuidedBuildingSetEditorData : FJunoGuidedBuildingSetData
{ 
	TArray<FJunoGuidedBuildingSectionEditorData>       EditorSections;                                             // 0x0070   (0x0010)  
};

/// Struct /Script/JunoGameNative.JunoGuidedBuildingComponentData
/// Size: 0x0070 (0x000000 - 0x000070)
struct FJunoGuidedBuildingComponentData
{ 
	class UStaticMesh*                                 StaticMesh;                                                 // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0060)  
};

/// Struct /Script/JunoGameNative.JunoBuildingEditorActorEntry
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FJunoBuildingEditorActorEntry
{ 
	FName                                              ActorName;                                                  // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	class AActor*                                      Actor;                                                      // 0x0008   (0x0008)  
	class UClass*                                      ActorClass;                                                 // 0x0010   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0020   (0x0060)  
	TArray<FJunoGuidedBuildingComponentData>           CompData;                                                   // 0x0080   (0x0010)  
	TArray<FName>                                      ConnectedActors;                                            // 0x0090   (0x0010)  
};

/// Struct /Script/JunoGameNative.GuidedBuildingCachedEditorData
/// Size: 0x00C8 (0x000000 - 0x0000C8)
struct FGuidedBuildingCachedEditorData
{ 
	class UWorld*                                      World;                                                      // 0x0000   (0x0008)  
	class AJunoGuidedBuildingSettings*                 SettingsActor;                                              // 0x0008   (0x0008)  
	TArray<FJunoBuildingEditorActorEntry>              ActorEntries;                                               // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,12118) /* FString */              __um(BaseName);                                             // 0x0020   (0x0010)  
	SDK_UNDEFINED(16,12119) /* FString */              __um(GuidedBuildingBlueprintName);                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,12120) /* FString */              __um(GuidedBuildingPreviewMeshName);                        // 0x0040   (0x0010)  
	SDK_UNDEFINED(16,12121) /* FString */              __um(GuidedBuildingPluginName);                             // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,12122) /* FString */              __um(GuidedBuildingBlueprintPath);                          // 0x0060   (0x0010)  
	SDK_UNDEFINED(16,12123) /* FString */              __um(GuidedBuildingPreviewMeshPath);                        // 0x0070   (0x0010)  
	SDK_UNDEFINED(16,12124) /* FString */              __um(OldBPPath);                                            // 0x0080   (0x0010)  
	FName                                              PlaylistName;                                               // 0x0090   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0094   (0x0004)  MISSED
	SDK_UNDEFINED(16,12125) /* TArray<FString> */      __um(PluginsToActivate);                                    // 0x0098   (0x0010)  
	class UClass*                                      ParentClass;                                                // 0x00A8   (0x0008)  
	class UClass*                                      NewBPClass;                                                 // 0x00B0   (0x0008)  
	TArray<FJunoStageKey>                              AllStageKeys;                                               // 0x00B8   (0x0010)  
};

/// Class /Script/JunoGameNative.JunoGuidedBuildingSettings
/// Size: 0x0210 (0x000290 - 0x0004A0)
class AJunoGuidedBuildingSettings : public AActor
{ 
public:
	float                                              ZLevelSize;                                                 // 0x0290   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0294   (0x0004)  MISSED
	TArray<FGameplayTag>                               SortRankTags;                                               // 0x0298   (0x0010)  
	TArray<class UClass*>                              BaseActorClasses;                                           // 0x02A8   (0x0010)  
	TArray<class UClass*>                              AllowedInterfaces;                                          // 0x02B8   (0x0010)  
	TArray<class UClass*>                              ExcludedBaseActorClasses;                                   // 0x02C8   (0x0010)  
	FJunoGuidedBuildingSetEditorData                   GeneratedData;                                              // 0x02D8   (0x0080)  
	SDK_UNDEFINED(16,12126) /* TArray<FString> */      __um(DefaultPluginsToActivate);                             // 0x0358   (0x0010)  
	FName                                              PrimaryPlaylist;                                            // 0x0368   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x036C   (0x0004)  MISSED
	SDK_UNDEFINED(80,12127) /* TMap<UClass*, FName> */ __um(ClassToRecipeMap);                                     // 0x0370   (0x0050)  
	FName                                              CraftingFormulaRegistryType;                                // 0x03C0   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x03C4   (0x0004)  MISSED
	FGuidedBuildingCachedEditorData                    CurrentState;                                               // 0x03C8   (0x00C8)  
	TArray<FJunoBuildingEditorActorEntry>              ActorList;                                                  // 0x0490   (0x0010)  


	/// Functions
	// Function /Script/JunoGameNative.JunoGuidedBuildingSettings.StartGeneratingGuidedBuildingAssets
	// void StartGeneratingGuidedBuildingAssets();                                                                           // [0xbb38510] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGuidedBuildingSettings.SetActorToAutoComplete
	// void SetActorToAutoComplete(class AActor* Actor, bool bAutoComplete);                                                 // [0x81029b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGuidedBuildingSettings.MoveActorToNewStageByName
	// void MoveActorToNewStageByName(FName& ActorName, FJunoStageKey& NewStage);                                            // [0xbb37204] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGuidedBuildingSettings.MoveActorToNewStage
	// void MoveActorToNewStage(class AActor* Actor, FJunoStageKey& NewStage);                                               // [0xbb37154] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGuidedBuildingSettings.GetAllStageKeys
	// TArray<FJunoStageKey> GetAllStageKeys();                                                                              // [0xbb34c08] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGuidedBuildingSettings.GetActorIdentifier
	// FName GetActorIdentifier(class AActor* ActorPtr);                                                                     // [0xbb34b84] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGuidedBuildingSettings.GenerateNewStageData
	// void GenerateNewStageData();                                                                                          // [0xbb34b50] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGuidedBuildingSettings.AddStage
	// void AddStage(FJunoStageKey& NewStage);                                                                               // [0xbb33fa8] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoISMPoolRenderer
/// Size: 0x01D8 (0x000028 - 0x000200)
class UJunoISMPoolRenderer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	class AGeometryCollectionISMPoolActor*             ISMPoolActor;                                               // 0x0030   (0x0008)  
	class UGeometryCollectionISMPoolComponent*         ISMPoolComponentOverride;                                   // 0x0038   (0x0008)  
	unsigned char                                      UnknownData01_5[0x1A0];                                     // 0x0040   (0x01A0)  MISSED
	TArray<class UAtomModelAssetUserData*>             AtomUserDatas;                                              // 0x01E0   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x01F0   (0x0010)  MISSED
};

/// Class /Script/JunoGameNative.JunoBuildingRenderComponent
/// Size: 0x0000 (0x000220 - 0x000220)
class UJunoBuildingRenderComponent : public USceneComponent
{ 
public:
};

/// Class /Script/JunoGameNative.JunoISMPoolRendererSettings
/// Size: 0x0048 (0x000030 - 0x000078)
class UJunoISMPoolRendererSettings : public UDeveloperSettings
{ 
public:
	unsigned char                                      UnknownData00_3[0x4];                                       // 0x0030   (0x0004)  MISSED
	int32_t                                            MergedMeshMinLod;                                           // 0x0034   (0x0004)  
	float                                              MergedMeshLodScale;                                         // 0x0038   (0x0004)  
	int32_t                                            MergedMeshPropMinLod;                                       // 0x003C   (0x0004)  
	int32_t                                            MergedMeshCullDistance;                                     // 0x0040   (0x0004)  
	int32_t                                            MergedMeshPropCullDistance;                                 // 0x0044   (0x0004)  
	bool                                               bMergedMeshAffectDistanceFieldLighting;                     // 0x0048   (0x0001)  
	bool                                               bMergedMeshOverrideCastFarShadows;                          // 0x0049   (0x0001)  
	bool                                               bCommonPartsEnable;                                         // 0x004A   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x004B   (0x0001)  MISSED
	int32_t                                            CommonPartsTypeMask;                                        // 0x004C   (0x0004)  
	bool                                               bCommonPartsEnableShadows;                                  // 0x0050   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0051   (0x0003)  MISSED
	int32_t                                            CommonPartsCullDistanceStart;                               // 0x0054   (0x0004)  
	int32_t                                            CommonPartsCullDistanceEnd;                                 // 0x0058   (0x0004)  
	int32_t                                            CommonPartsCullDistanceBoost;                               // 0x005C   (0x0004)  
	int32_t                                            CommonPartsCellSize;                                        // 0x0060   (0x0004)  
	bool                                               bInstancesEnable;                                           // 0x0064   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0065   (0x0003)  MISSED
	int32_t                                            InstancesMinLod;                                            // 0x0068   (0x0004)  
	float                                              InstancesLodScale;                                          // 0x006C   (0x0004)  
	int32_t                                            InstancesCullDistance;                                      // 0x0070   (0x0004)  
	bool                                               bInstancesEnableShadows;                                    // 0x0074   (0x0001)  
	bool                                               bInstancesPreallocateComponents;                            // 0x0075   (0x0001)  
	bool                                               bInstancesAllowRemove;                                      // 0x0076   (0x0001)  
	unsigned char                                      UnknownData04_6[0x1];                                       // 0x0077   (0x0001)  MISSED
};

/// Class /Script/JunoGameNative.JunoCommonPartsDataMappings
/// Size: 0x0050 (0x000030 - 0x000080)
class UJunoCommonPartsDataMappings : public UPrimaryDataAsset
{ 
public:
	SDK_UNDEFINED(80,12128) /* TMap<TWeakObjectPtr<UStaticMesh*>, FJunoCommonPartsSettings> */ __um(Mapping);      // 0x0030   (0x0050)  
};

/// Class /Script/JunoGameNative.JunoLandscapeVisualModifierComponent
/// Size: 0x0030 (0x000220 - 0x000250)
class UJunoLandscapeVisualModifierComponent : public USceneComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x0220   (0x0018)  MISSED
	class UStaticMeshComponent*                        DirtPlane;                                                  // 0x0238   (0x0008)  
	EJunoLandscapeVisualModifierType                   VisualModifierType;                                         // 0x0240   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0241   (0x000F)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoLandscapeVisualModifierComponent.OnRep_LandscapeModifierData
	// void OnRep_LandscapeModifierData();                                                                                   // [0xbb37cf0] Final|Native|Private 
};

/// Class /Script/JunoGameNative.JunoPhysicsToySpawnerActor
/// Size: 0x0020 (0x000E90 - 0x000EB0)
class AJunoPhysicsToySpawnerActor : public AJunoBuildingActor
{ 
public:
	bool                                               bUseOffsetOrientation : 1;                                  // 0x0E90:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x7];                                       // 0x0E91   (0x0007)  MISSED
	TArray<EJunoContactDirection>                      FloatingValidationDirections;                               // 0x0E98   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0EA8   (0x0008)  MISSED
};

/// Class /Script/JunoGameNative.JunoPickupComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UJunoPickupComponent : public UGameFrameworkComponent
{ 
public:
	FDataTableRowHandle                                CraftingSourceTable;                                        // 0x00A0   (0x0010)  
	class UDataTable*                                  ResourceDataTable;                                          // 0x00B0   (0x0008)  


	/// Functions
	// Function /Script/JunoGameNative.JunoPickupComponent.PickupBuildingctor
	// void PickupBuildingctor(class AFortPlayerController* FPC);                                                            // [0x5decebc] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoResourceComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UJunoResourceComponent : public UGameFrameworkComponent
{ 
public:
	class UDataTable*                                  BuildingTagDataTable;                                       // 0x00A0   (0x0008)  
	class UDataTable*                                  ResourceDataTable;                                          // 0x00A8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00B0   (0x0008)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoResourceComponent.HandleBuildingDamaged
	// void HandleBuildingDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0xbb368e4] Final|Native|Private|HasDefaults 
};

/// Class /Script/JunoGameNative.JunoStorageChest
/// Size: 0x0230 (0x000C10 - 0x000E40)
class AJunoStorageChest : public AJunoBuildingProp
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x0C10   (0x0018)  MISSED
	class UGeometryCollectionComponent*                GeometryCollectionComponent;                                // 0x0C28   (0x0008)  
	class UJunoInventoryComponent*                     ChestInventoryComponent;                                    // 0x0C30   (0x0008)  
	class UJunoCampMembershipActorComponent*           CampMembershipComponent;                                    // 0x0C38   (0x0008)  
	bool                                               bTakeAllItemsOnInteract;                                    // 0x0C40   (0x0001)  
	bool                                               bDestroyOnInteract;                                         // 0x0C41   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x0C42   (0x0006)  MISSED
	FVector                                            GridSizeOverride;                                           // 0x0C48   (0x0018)  
	FTransform                                         BuildingPivotOffset;                                        // 0x0C60   (0x0060)  
	FVector                                            BuildingGridSnapOffset;                                     // 0x0CC0   (0x0018)  
	FJunoBuildingBehaviorGridLimits                    GridOffsetLimits;                                           // 0x0CD8   (0x0010)  
	FJunoBuilderToolInteractionActorClassSet           OverlappableClasses;                                        // 0x0CE8   (0x00A0)  
	SDK_UNDEFINED(80,12129) /* TMap<FName, UClass*> */ __um(PreviewComponentTemplates);                            // 0x0D88   (0x0050)  
	FUniqueNetIdRepl                                   OwnerPlayerId;                                              // 0x0DD8   (0x0030)  
	FName                                              BaseLootTierGroup;                                          // 0x0E08   (0x0004)  
	float                                              DefaultInteractTime;                                        // 0x0E0C   (0x0004)  
	float                                              PlayerPlacedInteractTime;                                   // 0x0E10   (0x0004)  
	float                                              SearchedInteractTime;                                       // 0x0E14   (0x0004)  
	bool                                               bUsePlayerPlacedInteractionTime;                            // 0x0E18   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0E19   (0x0007)  MISSED
	class UStaticMesh*                                 SearchedMesh;                                               // 0x0E20   (0x0008)  
	float                                              LootTossSpeed;                                              // 0x0E28   (0x0004)  
	float                                              LootTossAngle;                                              // 0x0E2C   (0x0004)  
	bool                                               bChestSearched;                                             // 0x0E30   (0x0001)  
	bool                                               bChestLooted;                                               // 0x0E31   (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x0E32   (0x0002)  MISSED
	SDK_UNDEFINED(8,12130) /* TWeakObjectPtr<AActor*> */ __um(LastInteractor);                                     // 0x0E34   (0x0008)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x0E3C   (0x0004)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoStorageChest.UpdateVisibilityOfLightBeamDeathChest
	// void UpdateVisibilityOfLightBeamDeathChest(bool IsVisible);                                                           // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoStorageChest.OnRep_ChestSearched
	// void OnRep_ChestSearched();                                                                                           // [0xbb37b8c] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoStorageChest.OnRep_ChestLooted
	// void OnRep_ChestLooted();                                                                                             // [0xbb37b3c] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoStorageChest.OnPersistentPlayspaceDataLoadEnd
	// void OnPersistentPlayspaceDataLoadEnd(class AJunoPersistentPlayspace* PersistentPlayspace, bool bSuccess);            // [0xbb37a74] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoStorageChest.OnInventoryAcquired
	// void OnInventoryAcquired();                                                                                           // [0xbb37a60] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoStorageChest.IsChestAlreadySearched
	// bool IsChestAlreadySearched();                                                                                        // [0xbb36e5c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoStorageChest.GetOwningPlayerID
	// FUniqueNetIdRepl GetOwningPlayerID();                                                                                 // [0xbb35654] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoStorageChest.CanInteractWithChest
	// bool CanInteractWithChest(class AFortPawn* FortPawn);                                                                 // [0xbb34098] Native|Event|Protected|BlueprintEvent|Const 
	// Function /Script/JunoGameNative.JunoStorageChest.BlueprintOnChestLooted
	// void BlueprintOnChestLooted();                                                                                        // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoStorageChest.BlueprintGetLootTierGroup
	// FName BlueprintGetLootTierGroup(FJunoBiomeInfoQueryResult BiomeInfo);                                                 // [0x3d1d968] BlueprintAuthorityOnly|Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoStorageChest.BlueprintCanShowInventoryUI
	// bool BlueprintCanShowInventoryUI(FInteractionType& InteractType);                                                     // [0xbb34018] Native|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoStorageChest.BlueprintAllowSpawnLoot
	// bool BlueprintAllowSpawnLoot(FInteractionType& InteractType);                                                         // [0xbb34018] Native|Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/JunoGameNative.JunoBuildingPreviewComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UJunoBuildingPreviewComponent : public UGameFrameworkComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x00A0   (0x0010)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoBuildingPreviewComponent.ReceiveSet
	// void ReceiveSet();                                                                                                    // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingPreviewComponent.ReceivePlacementStarted
	// void ReceivePlacementStarted();                                                                                       // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingPreviewComponent.ReceiveEnabled
	// void ReceiveEnabled();                                                                                                // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingPreviewComponent.ReceiveDisabled
	// void ReceiveDisabled();                                                                                               // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingPreviewComponent.ReceiveCreated
	// void ReceiveCreated();                                                                                                // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingPreviewComponent.ReceiveCleared
	// void ReceiveCleared();                                                                                                // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingPreviewComponent.IsSet
	// bool IsSet();                                                                                                         // [0xbb370d8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingPreviewComponent.GetSourceActorClass
	// class UClass* GetSourceActorClass();                                                                                  // [0xbb367e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingPreviewComponent.GetPreviewer
	// class AJunoBuildingPreviewer* GetPreviewer();                                                                         // [0xbb365fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingPreviewComponent.GetOwningPreviewRef
	// FJunoBuildingSelectionPreview GetOwningPreviewRef(bool& bSuccess);                                                    // [0xbb356b4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/JunoGameNative.JunoBuildingPlacementPreview
/// Size: 0x00C0 (0x000000 - 0x0000C0)
struct FJunoBuildingPlacementPreview
{ 
	FGuid                                              Guid;                                                       // 0x0000   (0x0010)  
	TArray<class UMeshComponent*>                      MeshComponents;                                             // 0x0010   (0x0010)  
	FTransform                                         ToWorld;                                                    // 0x0020   (0x0060)  
	FBox                                               Bounds;                                                     // 0x0080   (0x0038)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00B8   (0x0008)  MISSED
};

/// Class /Script/JunoGameNative.JunoBuildingPreviewer
/// Size: 0x0150 (0x000290 - 0x0003E0)
class AJunoBuildingPreviewer : public AActor
{ 
public:
	SDK_UNDEFINED(8,12131) /* TWeakObjectPtr<UJunoBuildingBehaviorBase*> */ __um(OwningBehavior);                  // 0x0290   (0x0008)  
	bool                                               bEnabled;                                                   // 0x0298   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0299   (0x0007)  MISSED
	SDK_UNDEFINED(80,12132) /* TMap<FGuid, FJunoBuildingSelectionPreview> */ __um(PreviewPool);                    // 0x02A0   (0x0050)  
	TArray<FGuid>                                      MostRecentlyUpdated;                                        // 0x02F0   (0x0010)  
	FGuid                                              CurrentlySetPreviewGUID;                                    // 0x0300   (0x0010)  
	bool                                               bHasSetPreview;                                             // 0x0310   (0x0001)  
	unsigned char                                      UnknownData01_5[0xF];                                       // 0x0311   (0x000F)  MISSED
	FJunoBuildingPlacementPreview                      PlacementPreview;                                           // 0x0320   (0x00C0)  


	/// Functions
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.SetPreviewVisibility
	// void SetPreviewVisibility(bool bVisible);                                                                             // [0xbb37e6c] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.SetPreview
	// bool SetPreview(FGuid& Guid);                                                                                         // [0xbb37dd0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.ReceiveUpdateSnapEntryPreviews
	// void ReceiveUpdateSnapEntryPreviews(TArray<FJunoBuildingSnapEntryPreview>& Previews);                                 // [0x3d1d968] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.ReceivePreviewSet
	// void ReceivePreviewSet(FJunoBuildingSelectionPreview& Preview);                                                       // [0x3d1d968] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.ReceivePreviewCreated
	// void ReceivePreviewCreated(FJunoBuildingSelectionPreview& Preview);                                                   // [0x3d1d968] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.ReceivePreviewCleared
	// void ReceivePreviewCleared(FJunoBuildingSelectionPreview& Preview);                                                   // [0x3d1d968] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.ReceivePlacementStarted
	// void ReceivePlacementStarted();                                                                                       // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.ReceivePlacementPreviewInitialized
	// void ReceivePlacementPreviewInitialized(FJunoBuildingPlacementPreview& Preview);                                      // [0x3d1d968] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.ReceivePlacementPreviewHidden
	// void ReceivePlacementPreviewHidden(FJunoBuildingPlacementPreview& Preview);                                           // [0x3d1d968] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.ReceiveEnabled
	// void ReceiveEnabled();                                                                                                // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.ReceiveDisabled
	// void ReceiveDisabled();                                                                                               // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.ReceiveDestroyPreview
	// void ReceiveDestroyPreview(FJunoBuildingSelectionPreview& Preview);                                                   // [0x3d1d968] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.ReceiveDestroyPlacementPreview
	// void ReceiveDestroyPlacementPreview(FJunoBuildingPlacementPreview& Preview);                                          // [0x3d1d968] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.ReceiveClearSnapEntryPreviews
	// void ReceiveClearSnapEntryPreviews(TArray<FJunoBuildingSnapEntryPreview>& Previews);                                  // [0x3d1d968] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.NotifyPlacementStarted
	// void NotifyPlacementStarted();                                                                                        // [0xbb372b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.IsPreviewerEnabled
	// bool IsPreviewerEnabled();                                                                                            // [0x664c8f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.InitializePlacementPreview
	// void InitializePlacementPreview();                                                                                    // [0xbb36e48] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.HidePlacementPreview
	// void HidePlacementPreview();                                                                                          // [0xbb36e08] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.HasSetPreview
	// bool HasSetPreview();                                                                                                 // [0xbb36de4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.GetPreviewRef
	// FJunoBuildingSelectionPreview GetPreviewRef(bool& bSuccess);                                                          // [0xbb3653c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.GetPlacementPreview
	// FJunoBuildingPlacementPreview GetPlacementPreview();                                                                  // [0xbb36520] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.GetOwningBuildingBehavior
	// class UJunoBuildingBehaviorBase* GetOwningBuildingBehavior();                                                         // [0xbb3562c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.FindPreviewRef
	// FJunoBuildingSelectionPreview FindPreviewRef(FGuid& Guid, bool& bSuccess);                                            // [0xbb34a40] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.Enable
	// void Enable();                                                                                                        // [0xbb34a2c] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.Disable
	// void Disable();                                                                                                       // [0xbb34a18] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.DestroyPreview
	// void DestroyPreview(FGuid Guid);                                                                                      // [0xbb348c0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.DestroyPlacementPreview
	// void DestroyPlacementPreview();                                                                                       // [0xbb348ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.CreatePreview
	// bool CreatePreview(TArray<FJunoBuilderToolSelectedActor>& SelectedActors, FGuid& Guid, FJunoBuildingPreviewParams& Params); // [0xbb34140] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.ClearPreview
	// void ClearPreview();                                                                                                  // [0xbb3412c] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/JunoGameNative.JunoBuildingPreviewerRequestData
/// Size: 0x0110 (0x000000 - 0x000110)
struct FJunoBuildingPreviewerRequestData
{ 
	SDK_UNDEFINED(80,12133) /* TMap<UActorComponent*, USceneComponent*> */ __um(AttachParents);                    // 0x0000   (0x0050)  
	unsigned char                                      UnknownData00_6[0xC0];                                      // 0x0050   (0x00C0)  MISSED
};

/// Struct /Script/JunoGameNative.JunoBuildingSnapEntryPreview
/// Size: 0x00C0 (0x000000 - 0x0000C0)
struct FJunoBuildingSnapEntryPreview
{ 
	EJunoBuildingSnapEntryState                        State;                                                      // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0xF];                                       // 0x0001   (0x000F)  MISSED
	FTransform                                         ToWorld;                                                    // 0x0010   (0x0060)  
	FBox                                               TargetingArea;                                              // 0x0070   (0x0038)  
	double                                             FadePercentage;                                             // 0x00A8   (0x0008)  
	bool                                               bOnPrimaryActor;                                            // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x00B1   (0x000F)  MISSED
};

/// Struct /Script/JunoGameNative.JunoComponentActorMapEntry
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoComponentActorMapEntry
{ 
	SDK_UNDEFINED(8,12134) /* TWeakObjectPtr<UPrimitiveComponent*> */ __um(Component);                             // 0x0000   (0x0008)  
	class UClass*                                      SelectedActorClass;                                         // 0x0008   (0x0008)  
};

/// Struct /Script/JunoGameNative.JunoBuildingSelectionPreview
/// Size: 0x0118 (0x000000 - 0x000118)
struct FJunoBuildingSelectionPreview
{ 
	TArray<class UJunoBuildingPreviewComponent*>       PreviewComponents;                                          // 0x0000   (0x0010)  
	TArray<class UPrimitiveComponent*>                 CollisionComponents;                                        // 0x0010   (0x0010)  
	TArray<class UMeshComponent*>                      MeshComponents;                                             // 0x0020   (0x0010)  
	TArray<FJunoBuildingSnapEntryPreview>              SnapEntryPreviews;                                          // 0x0030   (0x0010)  
	TArray<FJunoComponentActorMapEntry>                ComponentToClassMap;                                        // 0x0040   (0x0010)  
	FBox                                               LocalCollisionBounds;                                       // 0x0050   (0x0038)  
	FBox                                               FoundationCollisionBounds;                                  // 0x0088   (0x0038)  
	FBox                                               NonFoundationCollisionBounds;                               // 0x00C0   (0x0038)  
	class UBoxComponent*                               NoTargetPlacementCollisionGBA;                              // 0x00F8   (0x0008)  
	class UBoxComponent*                               FoundationPlacementCollisionGBA;                            // 0x0100   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0108   (0x0010)  MISSED
};

/// Struct /Script/JunoGameNative.JunoBuildingPreviewerWorkingData
/// Size: 0x0240 (0x000000 - 0x000240)
struct FJunoBuildingPreviewerWorkingData
{ 
	TArray<class UActorComponent*>                     DefaultComponents;                                          // 0x0000   (0x0010)  
	FJunoBuildingPreviewerRequestData                  RequestData;                                                // 0x0010   (0x0110)  
	FJunoBuildingSelectionPreview                      Result;                                                     // 0x0120   (0x0118)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0238   (0x0008)  MISSED
};

/// Struct /Script/JunoGameNative.JunoBuildingPreviewerWorkingDataAsync
/// Size: 0x0260 (0x000000 - 0x000260)
struct FJunoBuildingPreviewerWorkingDataAsync
{ 
	FJunoBuildingPreviewerWorkingData                  WorkingData;                                                // 0x0000   (0x0240)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0240   (0x0020)  MISSED
};

/// Class /Script/JunoGameNative.JunoBuildingPreviewerSubsystem
/// Size: 0x0010 (0x000040 - 0x000050)
class UJunoBuildingPreviewerSubsystem : public UTickableWorldSubsystem
{ 
public:
	TArray<FJunoBuildingPreviewerWorkingDataAsync>     AsyncPreviewsStack;                                         // 0x0040   (0x0010)  
};

/// Class /Script/JunoGameNative.JunoBuildingPreviewInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoBuildingPreviewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/JunoGameNative.JunoBuildingPreviewInterface.GetPreviewComponentTemplates
	// TMap<FName, UClass*> GetPreviewComponentTemplates();                                                                  // [0xbb75a10] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoGameStateComponent_Loot
/// Size: 0x0030 (0x0000A0 - 0x0000D0)
class UJunoGameStateComponent_Loot : public UFortGameStateComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x00A0   (0x0010)  MISSED
	TArray<class UDataTable*>                          LootTierTables;                                             // 0x00B0   (0x0010)  
	TArray<class UDataTable*>                          LootPackageTables;                                          // 0x00C0   (0x0010)  


	/// Functions
	// Function /Script/JunoGameNative.JunoGameStateComponent_Loot.OnPlaylistDataReady
	// void OnPlaylistDataReady(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, FGameplayTagContainer& PlaylistContextTags); // [0xbb77944] Final|Native|Private|HasOutParms 
};

/// Class /Script/JunoGameNative.JunoBuildInstructionsItemDefinition
/// Size: 0x0070 (0x000850 - 0x0008C0)
class UJunoBuildInstructionsItemDefinition : public UFortWorldItemDefinition
{ 
public:
	bool                                               bGiveResourcesOnDestroy : 1;                                // 0x0848:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0849   (0x0003)  MISSED
	FName                                              SelfCraftingFormulaName;                                    // 0x084C   (0x0004)  
	TArray<FName>                                      PrerequisiteCraftingFormulaNames;                           // 0x0850   (0x0010)  
	SDK_UNDEFINED(32,12135) /* TWeakObjectPtr<UClass*> */ __um(ActorClassToBuild);                                 // 0x0860   (0x0020)  
	class UFortPlaysetPropItemDefinition*              PlaysetPropToBuild;                                         // 0x0880   (0x0008)  
	SDK_UNDEFINED(24,12136) /* FText */                __um(SizeDescription);                                      // 0x0888   (0x0018)  
	SDK_UNDEFINED(24,12137) /* FText */                __um(SetDescription);                                       // 0x08A0   (0x0018)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x08B8   (0x0008)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoBuildInstructionsItemDefinition.ShouldGiveResourcesOnDestroy
	// bool ShouldGiveResourcesOnDestroy();                                                                                  // [0xbb78574] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildInstructionsItemDefinition.GetSizeDescription
	// FText GetSizeDescription();                                                                                           // [0xbb75ae4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildInstructionsItemDefinition.GetSetDescription
	// FText GetSetDescription();                                                                                            // [0xbb75ac8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildInstructionsItemDefinition.GetSelfCraftingFormulaName
	// FName GetSelfCraftingFormulaName();                                                                                   // [0xbb75ab0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildInstructionsItemDefinition.GetPrerequisiteCraftingFormulaNames
	// TArray<FName> GetPrerequisiteCraftingFormulaNames();                                                                  // [0xbb759f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildInstructionsItemDefinition.GetActorClassToBuild
	// TWeakObjectPtr<UClass*> GetActorClassToBuild();                                                                       // [0xbb75940] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/JunoGameNative.ActorUpgradeInfo
/// Size: 0x00D0 (0x000000 - 0x0000D0)
struct FActorUpgradeInfo
{ 
	SDK_UNDEFINED(16,12138) /* FString */              __um(FlowName);                                             // 0x0000   (0x0010)  
	SDK_UNDEFINED(8,12139) /* TWeakObjectPtr<AActor*> */ __um(ActorToUpgrade);                                     // 0x0010   (0x0008)  
	SDK_UNDEFINED(8,12140) /* TWeakObjectPtr<AActor*> */ __um(CraftingObject);                                     // 0x0018   (0x0008)  
	SDK_UNDEFINED(8,12141) /* TWeakObjectPtr<AJunoPersistentPlayspace*> */ __um(Playspace);                        // 0x0020   (0x0008)  
	FName                                              RecipeName;                                                 // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	class UJunoBuildInstructionsItemDefinition*        OldItemDef;                                                 // 0x0030   (0x0008)  
	class UJunoBuildInstructionsItemDefinition*        ItemDef;                                                    // 0x0038   (0x0008)  
	FTransform                                         ActorTransform;                                             // 0x0040   (0x0060)  
	TArray<FFortItemEntry>                             ConsumedIngredients;                                        // 0x00A0   (0x0010)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x00B0   (0x0020)  MISSED
};

/// Class /Script/JunoGameNative.JunoControllerComponent_CraftingNetworkEvents
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UJunoControllerComponent_CraftingNetworkEvents : public UFortControllerComponent
{ 
public:
	TArray<FActorUpgradeInfo>                          ActorsToUpgrade;                                            // 0x00A8   (0x0010)  
	SDK_UNDEFINED(8,12142) /* TWeakObjectPtr<AActor*> */ __um(LastUpgradedActor);                                  // 0x00B8   (0x0008)  


	/// Functions
	// Function /Script/JunoGameNative.JunoControllerComponent_CraftingNetworkEvents.ServerSetAutoPassiveCraftingFormula
	// void ServerSetAutoPassiveCraftingFormula(class AActor* PassiveCraftingObject, FName FormulaName);                     // [0xbb78488] RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	// Function /Script/JunoGameNative.JunoControllerComponent_CraftingNetworkEvents.ServerHandleCraftingBGAContributor
	// void ServerHandleCraftingBGAContributor(class AActor* CraftingObject);                                                // [0xbb783e8] RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	// Function /Script/JunoGameNative.JunoControllerComponent_CraftingNetworkEvents.ServerEnableAutoPassiveCrafting
	// void ServerEnableAutoPassiveCrafting(class AActor* PassiveCraftingObject);                                            // [0xbb78348] RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	// Function /Script/JunoGameNative.JunoControllerComponent_CraftingNetworkEvents.ServerDisableAutoPassiveCrafting
	// void ServerDisableAutoPassiveCrafting(class AActor* PassiveCraftingObject);                                           // [0xbb782a8] RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	// Function /Script/JunoGameNative.JunoControllerComponent_CraftingNetworkEvents.ServerAttemptCraftingUpgrage
	// void ServerAttemptCraftingUpgrage(class AActor* ActorToUpgrade, FName RecipeName);                                    // [0xbb781bc] RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	// Function /Script/JunoGameNative.JunoControllerComponent_CraftingNetworkEvents.OnRep_LastUpgradedActor
	// void OnRep_LastUpgradedActor();                                                                                       // [0xbb77da8] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoControllerComponent_CraftingNetworkEvents.OnCraftingSuccess
	// void OnCraftingSuccess(FCraftingObjectSuccessEvent& Event);                                                           // [0xbb76cd0] Final|Native|Protected|HasOutParms 
	// Function /Script/JunoGameNative.JunoControllerComponent_CraftingNetworkEvents.OnCraftingChangedState
	// void OnCraftingChangedState(FCraftingObjectStateChangedEvent& Event);                                                 // [0xbb76c34] Final|Native|Protected|HasOutParms 
};

/// Class /Script/JunoGameNative.JunoCraftingObjectBGA
/// Size: 0x01D8 (0x0009E8 - 0x000BC0)
class AJunoCraftingObjectBGA : public ACraftingObjectBGA
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x09E8   (0x0030)  MISSED
	FVector                                            GridSizeOverride;                                           // 0x0A18   (0x0018)  
	FTransform                                         BuildingPivotOffset;                                        // 0x0A30   (0x0060)  
	FVector                                            BuildingGridSnapOffset;                                     // 0x0A90   (0x0018)  
	FJunoBuildingBehaviorGridLimits                    GridOffsetLimits;                                           // 0x0AA8   (0x0010)  
	FJunoBuilderToolInteractionActorClassSet           OverlappableClasses;                                        // 0x0AB8   (0x00A0)  
	class UItemDefinitionBase*                         AssociatedItem;                                             // 0x0B58   (0x0008)  
	SDK_UNDEFINED(80,12143) /* TMap<FName, UClass*> */ __um(PreviewComponentTemplates);                            // 0x0B60   (0x0050)  
	FName                                              UpgradeRecipe;                                              // 0x0BB0   (0x0004)  
	bool                                               bShouldPersist;                                             // 0x0BB4   (0x0001)  
	unsigned char                                      UnknownData01_6[0xB];                                       // 0x0BB5   (0x000B)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoCraftingObjectBGA.HandleCraftingSuccess
	// void HandleCraftingSuccess(FCraftingObjectSuccessEvent& Event);                                                       // [0xbb75b00] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoCraftingObjectBGA.GetAssociatedItem
	// class UItemDefinitionBase* GetAssociatedItem();                                                                       // [0xbb75968] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoGameStateComponent_Crafting
/// Size: 0x0060 (0x000250 - 0x0002B0)
class UJunoGameStateComponent_Crafting : public UFortGameStateComponent_Crafting
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0250   (0x0060)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoGameStateComponent_Crafting.HandleLootTablesLoaded
	// void HandleLootTablesLoaded();                                                                                        // [0x88cea94] Final|Native|Protected 
};

/// Class /Script/JunoGameNative.JunoRecipeBundleItemDefinition
/// Size: 0x0010 (0x000850 - 0x000860)
class UJunoRecipeBundleItemDefinition : public UFortWorldItemDefinition
{ 
public:
	TArray<FDataTableRowHandle>                        CraftingFormulas;                                           // 0x0848   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0858   (0x0008)  MISSED
};

/// Class /Script/JunoGameNative.JunoConnectivityDataComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UJunoConnectivityDataComponent : public UGameFrameworkComponent
{ 
public:
};

/// Class /Script/JunoGameNative.JunoConnectivitySupportDataComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UJunoConnectivitySupportDataComponent : public UJunoConnectivityDataComponent
{ 
public:
};

/// Class /Script/JunoGameNative.JunoPhysicsToy
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoPhysicsToy : public UInterface
{ 
public:


	/// Functions
	// Function /Script/JunoGameNative.JunoPhysicsToy.StopAttachment
	// void StopAttachment();                                                                                                // [0x2f9f064] RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoPhysicsToy.StartAttachmentToActor
	// void StartAttachmentToActor(class AActor* Actor);                                                                     // [0xb89a2b0] RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoPhysicsToy.OnToyStopTrigger
	// void OnToyStopTrigger();                                                                                              // [0x6fc9864] RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoPhysicsToy.OnToyStartTrigger
	// void OnToyStartTrigger(bool bIsControlled);                                                                           // [0xbb77fcc] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoPhysicsToy.EnablePhysics
	// void EnablePhysics();                                                                                                 // [0x313fdf0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoPhysicsToy.DisablePhysics
	// void DisablePhysics();                                                                                                // [0x2c0e95c] RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoPhysicsToy.DestroyToy
	// void DestroyToy();                                                                                                    // [0x2ead9f4] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/JunoGameNative.JunoBasePlayspaceMigrationComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UJunoBasePlayspaceMigrationComponent : public UGameFrameworkComponent
{ 
public:
};

/// Class /Script/JunoGameNative.JunoClientAtomicReplacementComponent
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UJunoClientAtomicReplacementComponent : public UGameFrameworkComponent
{ 
public:
	FGuid                                              Guid;                                                       // 0x00A0   (0x0010)  
	class AJunoPersistentPlayspace*                    TargetPlayspace;                                            // 0x00B0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00B8   (0x0008)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoClientAtomicReplacementComponent.OnRep_PlayspsaceRenameRepData
	// void OnRep_PlayspsaceRenameRepData();                                                                                 // [0xbb77e1c] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoClientAtomicReplacementComponent.OnRep_Guid
	// void OnRep_Guid(FGuid OldGuid);                                                                                       // [0xbb77c2c] Final|Native|Private|HasDefaults 
	// Function /Script/JunoGameNative.JunoClientAtomicReplacementComponent.OnOwnerGuidChanged
	// void OnOwnerGuidChanged(class AActor* Owner, FGuid InGuid);                                                           // [0xbb771e8] Final|Native|Private|HasDefaults 
};

/// Class /Script/JunoGameNative.JunoClientAtomicReplacementWorldSubsystem
/// Size: 0x0050 (0x000030 - 0x000080)
class UJunoClientAtomicReplacementWorldSubsystem : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0030   (0x0050)  MISSED
};

/// Class /Script/JunoGameNative.JunoClusterUnionActor
/// Size: 0x0070 (0x000330 - 0x0003A0)
class AJunoClusterUnionActor : public AFortClusterUnionActor
{ 
public:
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x0330   (0x0070)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoClusterUnionActor.OnComponentRemovedFromClusterUnion
	// void OnComponentRemovedFromClusterUnion(class UPrimitiveComponent* Component, TArray<FClusterUnionBoneData>& RemovedBonesData); // [0xbb768d4] Final|Native|Protected|HasOutParms 
	// Function /Script/JunoGameNative.JunoClusterUnionActor.OnComponentAddedToClusterUnion
	// void OnComponentAddedToClusterUnion(class UPrimitiveComponent* Component, TArray<FClusterUnionBoneData>& BonesData, TArray<FClusterUnionBoneData>& RemovedBoneIDs, bool bIsNew); // [0xbb764a0] Final|Native|Protected|HasOutParms 
};

/// Class /Script/JunoGameNative.JunoConnectivityComponent
/// Size: 0x0100 (0x0000A0 - 0x0001A0)
class UJunoConnectivityComponent : public UGameFrameworkComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00A0   (0x0008)  MISSED
	SDK_UNDEFINED(16,12144) /* FMulticastInlineDelegate */ __um(NotifyAddedIntoClusterUnion);                      // 0x00A8   (0x0010)  
	SDK_UNDEFINED(16,12145) /* FMulticastInlineDelegate */ __um(NotifyRemovedFromClusterUnion);                    // 0x00B8   (0x0010)  
	float                                              ContactDistance;                                            // 0x00C8   (0x0004)  
	bool                                               bIsInGraph;                                                 // 0x00CC   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00CD   (0x0003)  MISSED
	TArray<FComponentReference>                        GeometryCollectionsToIgnoreBreaksForConnectivity;           // 0x00D0   (0x0010)  
	TArray<FComponentReference>                        RootDoorComponentReferences;                                // 0x00E0   (0x0010)  
	SDK_UNDEFINED(16,12146) /* TArray<TWeakObjectPtr<UPrimitiveComponent*>> */ __um(DoorComponents);               // 0x00F0   (0x0010)  
	bool                                               bAreDoorsEjected;                                           // 0x0100   (0x0001)  
	bool                                               bAreDoorsEjectedInternal;                                   // 0x0101   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x0102   (0x0002)  MISSED
	FGraphVertexHandle                                 GraphHandle;                                                // 0x0104   (0x001C)  
	bool                                               bRootPlayspaceInitialized;                                  // 0x0120   (0x0001)  
	bool                                               bIsDebris;                                                  // 0x0121   (0x0001)  
	bool                                               bHasBeenSaved;                                              // 0x0122   (0x0001)  
	EJunoAutomaticConnectionMethod                     AutomaticConnectionMethod;                                  // 0x0123   (0x0001)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x0124   (0x0004)  MISSED
	TArray<EJunoContactDirection>                      CustomConnectionDirections;                                 // 0x0128   (0x0010)  
	bool                                               bCanBeConnectedTo;                                          // 0x0138   (0x0001)  
	bool                                               bMustConnectToDynamic;                                      // 0x0139   (0x0001)  
	bool                                               bForceIndependentlySupported;                               // 0x013A   (0x0001)  
	bool                                               bForceWorldSupportWhenPotentialConnectionsAreNotFound;      // 0x013B   (0x0001)  
	bool                                               bAddToConnectivityGraphOnBeginPlay;                         // 0x013C   (0x0001)  
	bool                                               bCanBeWorldSupported;                                       // 0x013D   (0x0001)  
	unsigned char                                      UnknownData04_5[0x2];                                       // 0x013E   (0x0002)  MISSED
	TArray<class UClass*>                              ClassesThatAreAlwaysValidForWorldSupport;                   // 0x0140   (0x0010)  
	FVector                                            OverlapMargin;                                              // 0x0150   (0x0018)  
	int32_t                                            MinimumIslandSize;                                          // 0x0168   (0x0004)  
	unsigned char                                      UnknownData05_5[0x4];                                       // 0x016C   (0x0004)  MISSED
	SDK_UNDEFINED(16,12147) /* TArray<TWeakObjectPtr<AActor*>> */ __um(AttachedToys);                              // 0x0170   (0x0010)  
	unsigned char                                      UnknownData06_6[0x20];                                      // 0x0180   (0x0020)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoConnectivityComponent.ShouldUsePartialDestruction
	// bool ShouldUsePartialDestruction();                                                                                   // [0xbb78590] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoConnectivityComponent.OverrideMinimumIslandSize
	// void OverrideMinimumIslandSize(int32_t NewSize);                                                                      // [0xbb78064] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoConnectivityComponent.OnVertexRemovedFromGraph
	// void OnVertexRemovedFromGraph();                                                                                      // [0xbb78050] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoConnectivityComponent.OnToyAttached
	// void OnToyAttached(class AActor* ToyActor);                                                                           // [0xbb77e30] Final|Native|Public  
	// Function /Script/JunoGameNative.JunoConnectivityComponent.OnRep_IsDebris
	// void OnRep_IsDebris();                                                                                                // [0xbb77d84] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoConnectivityComponent.OnRep_AreDoorsEjected
	// void OnRep_AreDoorsEjected();                                                                                         // [0xbb77c18] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoConnectivityComponent.OnRemovedFromGraph
	// void OnRemovedFromGraph();                                                                                            // [0x3841600] Native|Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoConnectivityComponent.OnRemovedFromClusterUnion
	// void OnRemovedFromClusterUnion(class UClusterUnionComponent* ClusterUnion, class UPrimitiveComponent* Component);     // [0xbb77a74] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoConnectivityComponent.OnParentClusterUnionAwake
	// void OnParentClusterUnionAwake(class UPrimitiveComponent* WakingComponent, FName BoneName);                           // [0xbb77880] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoConnectivityComponent.OnParentActorDeath
	// void OnParentActorDeath(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0xbb77380] Final|Native|Protected|HasDefaults 
	// Function /Script/JunoGameNative.JunoConnectivityComponent.OnGeometryCollectionDecayed
	// void OnGeometryCollectionDecayed();                                                                                   // [0xbb76e10] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoConnectivityComponent.OnGeometryCollectionBreak
	// void OnGeometryCollectionBreak(FChaosBreakEvent& BreakEvent);                                                         // [0xbb76d78] Final|Native|Protected|HasOutParms 
	// Function /Script/JunoGameNative.JunoConnectivityComponent.OnAttachedToyDetached
	// void OnAttachedToyDetached(class AActor* ToyActor);                                                                   // [0xbb7632c] Final|Native|Public  
	// Function /Script/JunoGameNative.JunoConnectivityComponent.OnAddedIntoClusterUnion
	// void OnAddedIntoClusterUnion(class UClusterUnionComponent* ClusterUnion, class UPrimitiveComponent* Component);       // [0xbb76268] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoConnectivityComponent.NotifyRemovedFromGraph
	// void NotifyRemovedFromGraph();                                                                                        // [0x6db0d14] Net|NetReliableNative|Event|NetMulticast|Public 
	// Function /Script/JunoGameNative.JunoConnectivityComponent.GetRelevantSimulatingComponents
	// TArray<UPrimitiveComponent*> GetRelevantSimulatingComponents();                                                       // [0xbb75a70] Final|RequiredAPI|Native|Public|Const 
	// Function /Script/JunoGameNative.JunoConnectivityComponent.GetCurrentClusterUnion
	// class UClusterUnionComponent* GetCurrentClusterUnion();                                                               // [0xbb759cc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoConnectivityComponent.GetContactDistance
	// float GetContactDistance();                                                                                           // [0x6171360] Final|Native|Public|Const 
	// Function /Script/JunoGameNative.JunoConnectivityComponent.GetBaseAttachParentActor
	// class AActor* GetBaseAttachParentActor();                                                                             // [0xbb75994] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoConnectivityComponent.GetAutomaticallyConnectedComponents
	// void GetAutomaticallyConnectedComponents(TArray<UJunoConnectivityComponent*>& Results);                               // [0x8f79804] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/JunoGameNative.JunoConnectivityGraphWorldSubsystem
/// Size: 0x01E8 (0x000040 - 0x000228)
class UJunoConnectivityGraphWorldSubsystem : public UTickableWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x1E8];                                     // 0x0040   (0x01E8)  MISSED
};

/// Struct /Script/JunoGameNative.JunoConnectivityDebugVertexData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FJunoConnectivityDebugVertexData
{ 
	FVector                                            Position;                                                   // 0x0000   (0x0018)  
	int32_t                                            DrawColorIndex;                                             // 0x0018   (0x0004)  
	bool                                               bIsIndependentlySupported;                                  // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x001D   (0x0003)  MISSED
	TArray<int32_t>                                    AdjacentVerticesIndices;                                    // 0x0020   (0x0010)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0030   (0x0020)  MISSED
};

/// Struct /Script/JunoGameNative.JunoConnectivityDebugData
/// Size: 0x0038 (0x000000 - 0x000038)
struct FJunoConnectivityDebugData
{ 
	TArray<FJunoConnectivityDebugVertexData>           VertexDataToDraw;                                           // 0x0000   (0x0010)  
	bool                                               bDebugDrawEnabled;                                          // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x27];                                      // 0x0011   (0x0027)  MISSED
};

/// Class /Script/JunoGameNative.JunoConnectivityManagerComponent
/// Size: 0x0178 (0x0000A0 - 0x000218)
class UJunoConnectivityManagerComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x00A0   (0x0018)  MISSED
	bool                                               bIsReady;                                                   // 0x00B8   (0x0001)  
	bool                                               bIsNewPlayspace;                                            // 0x00B9   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x00BA   (0x0006)  MISSED
	class UFortConnectivityGraph*                      Graph;                                                      // 0x00C0   (0x0008)  
	bool                                               bIsGraphDirty;                                              // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x00C9   (0x0007)  MISSED
	SDK_UNDEFINED(80,12148) /* TMap<FGraphVertexHandle, UJunoConnectivityComponent*> */ __um(VertexToConnectivityComponents); // 0x00D0   (0x0050)  
	SDK_UNDEFINED(80,12149) /* TMap<FGraphIslandHandle, AJunoClusterUnionActor*> */ __um(IslandToClusterUnionActors); // 0x0120   (0x0050)  
	FJunoConnectivityDebugData                         DebugDrawData;                                              // 0x0170   (0x0038)  
	unsigned char                                      UnknownData03_6[0x70];                                      // 0x01A8   (0x0070)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoConnectivityManagerComponent.RequestAddActorsToConnectivityGraph
	// void RequestAddActorsToConnectivityGraph(TArray<AActor*>& Actors);                                                    // [0xbb780e0] Final|Native|Public|HasOutParms 
	// Function /Script/JunoGameNative.JunoConnectivityManagerComponent.OnGraphVertexRemovedFromIsland
	// void OnGraphVertexRemovedFromIsland(FGraphIslandHandle& IslandHandle, FGraphVertexHandle& VertexHandle);              // [0xbb770e4] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoConnectivityManagerComponent.OnGraphVertexAddedToIsland
	// void OnGraphVertexAddedToIsland(FGraphIslandHandle& IslandHandle, FGraphVertexHandle& VertexHandle);                  // [0xbb76fe0] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoConnectivityManagerComponent.OnGraphIslandDestroyed
	// void OnGraphIslandDestroyed(FGraphIslandHandle& IslandHandle);                                                        // [0xbb76f4c] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoConnectivityManagerComponent.OnGraphIslandCreated
	// void OnGraphIslandCreated(FGraphIslandHandle& IslandHandle);                                                          // [0xbb76eb8] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoConnectivityManagerComponent.OnGraphIslandConnectivityChanged
	// void OnGraphIslandConnectivityChanged(FGraphIslandHandle& IslandHandle);                                              // [0xbb76e24] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoConnectivityManagerComponent.HandleOnGeometryCollectionBreaks
	// void HandleOnGeometryCollectionBreaks(TArray<FChaosBreakEvent>& BreakEvents);                                         // [0xbb75ba8] Final|Native|Protected|HasOutParms 
};

/// Class /Script/JunoGameNative.JunoPhysicsToyActor
/// Size: 0x0000 (0x000B80 - 0x000B80)
class AJunoPhysicsToyActor : public AJunoBuildingGameplayActor
{ 
public:
};

/// Class /Script/JunoGameNative.JunoPhysicsToyConnectivityComponent
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UJunoPhysicsToyConnectivityComponent : public UGameFrameworkComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x00A0   (0x0010)  MISSED
	bool                                               bPlayspaceInitialized;                                      // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x00B1   (0x000F)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoPhysicsToyConnectivityComponent.DetachFromConnectivity
	// void DetachFromConnectivity();                                                                                        // [0xbbb6354] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPhysicsToyConnectivityComponent.AttachToConnectivity
	// void AttachToConnectivity(class AActor* Other);                                                                       // [0xbbb6184] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoConnectivityGraphPersistenceFeatureData
/// Size: 0x0118 (0x0002D0 - 0x0003E8)
class AJunoConnectivityGraphPersistenceFeatureData : public AJunoPersistenceFeatureDataActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x02D0   (0x0010)  MISSED
	FSerializableConnectivityGraph                     SavedConnectivityData;                                      // 0x02E0   (0x0108)  
};

/// Class /Script/JunoGameNative.JunoPhysicsPersistenceComponent
/// Size: 0x0060 (0x0000A0 - 0x000100)
class UJunoPhysicsPersistenceComponent : public UGameFrameworkComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x00A0   (0x0060)  MISSED
};

/// Class /Script/JunoGameNative.JunoPhysicsPersistenceWorldSubsystem
/// Size: 0x0058 (0x000040 - 0x000098)
class UJunoPhysicsPersistenceWorldSubsystem : public UTickableWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0040   (0x0058)  MISSED
};

/// Class /Script/JunoGameNative.JunoGlobalKnowledgeComponent
/// Size: 0x0168 (0x0000A0 - 0x000208)
class UJunoGlobalKnowledgeComponent : public UFortGameStateComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x78];                                      // 0x00A0   (0x0078)  MISSED
	FJunoKnowledgeSaveRecord                           CurrentWorldKnowledge;                                      // 0x0118   (0x00E8)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0200   (0x0008)  MISSED
};

/// Struct /Script/JunoGameNative.JunoKnowledgeRecipeStateFastEntry
/// Size: 0x009C (0x00000C - 0x0000A8)
struct FJunoKnowledgeRecipeStateFastEntry : FFastArraySerializerItem
{ 
	EJunoKnowledgeState                                CurrentState;                                               // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	FName                                              RowName;                                                    // 0x0010   (0x0004)  
	FGuid                                              Guid;                                                       // 0x0014   (0x0010)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	class AFortPlayerState*                            DiscoveredByPlayerState;                                    // 0x0028   (0x0008)  
	TArray<FUniqueNetIdRepl>                           ViewedPlayerIds;                                            // 0x0030   (0x0010)  
	TArray<FUniqueNetIdRepl>                           EverAcquiredPlayerIds;                                      // 0x0040   (0x0010)  
	bool                                               bMissingMpcProfileOwnership;                                // 0x0050   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0051   (0x0007)  MISSED
	FGameplayTagContainer                              McpProfileOwnershipTags;                                    // 0x0058   (0x0020)  
	TArray<bool>                                       IngredientSatisfied;                                        // 0x0078   (0x0010)  
	TArray<FGameplayTagContainer>                      IngredientTags;                                             // 0x0088   (0x0010)  
	class UItemDefinitionBase*                         ResultItem;                                                 // 0x0098   (0x0008)  
	bool                                               bResultAcquired;                                            // 0x00A0   (0x0001)  
	bool                                               bIgnoreIngredientsForReveal;                                // 0x00A1   (0x0001)  
	unsigned char                                      UnknownData03_6[0x6];                                       // 0x00A2   (0x0006)  MISSED
};

/// Struct /Script/JunoGameNative.JunoKnowledgeRecipeStateFastArray
/// Size: 0x0018 (0x000108 - 0x000120)
struct FJunoKnowledgeRecipeStateFastArray : FFastArraySerializer
{ 
	TArray<FJunoKnowledgeRecipeStateFastEntry>         Entries;                                                    // 0x0108   (0x0010)  
	class UJunoKnowledgeComponent*                     ParentComp;                                                 // 0x0118   (0x0008)  
};

/// Struct /Script/JunoGameNative.JunoKnowledgeItemStateFastEntry
/// Size: 0x002C (0x00000C - 0x000038)
struct FJunoKnowledgeItemStateFastEntry : FFastArraySerializerItem
{ 
	unsigned char                                      UnknownData00_3[0x4];                                       // 0x000C   (0x0004)  MISSED
	FDateTime                                          DateFound;                                                  // 0x0010   (0x0008)  
	class UItemDefinitionBase*                         ItemDefinition;                                             // 0x0018   (0x0008)  
	class AFortPlayerState*                            InstigatorPlayerState;                                      // 0x0020   (0x0008)  
	TArray<FUniqueNetIdRepl>                           ViewedPlayerIds;                                            // 0x0028   (0x0010)  
};

/// Struct /Script/JunoGameNative.JunoKnowledgeItemStateFastArray
/// Size: 0x0018 (0x000108 - 0x000120)
struct FJunoKnowledgeItemStateFastArray : FFastArraySerializer
{ 
	TArray<FJunoKnowledgeItemStateFastEntry>           Entries;                                                    // 0x0108   (0x0010)  
	class UJunoKnowledgeComponent*                     ParentComp;                                                 // 0x0118   (0x0008)  
};

/// Class /Script/JunoGameNative.JunoKnowledgeComponent
/// Size: 0x05F8 (0x0000A8 - 0x0006A0)
class UJunoKnowledgeComponent : public UFortControllerComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x78];                                      // 0x00A8   (0x0078)  MISSED
	bool                                               bEnableKnowledgeComponent;                                  // 0x0120   (0x0001)  
	bool                                               bEnableKnowledgePersistence;                                // 0x0121   (0x0001)  
	bool                                               bEnableKnowledgeFiltering;                                  // 0x0122   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x0123   (0x0001)  MISSED
	bool                                               bUnownedMCPRecipesKnowledgeBlockedWhenUnfiltered;           // 0x0124   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0125   (0x0003)  MISSED
	TArray<class UFortItemDefinition*>                 DefaultKnownItems;                                          // 0x0128   (0x0010)  
	FGameplayTagContainer                              DefaultCraftingObjects;                                     // 0x0138   (0x0020)  
	FGameplayTag                                       UnblockMCPRecipesWorldStateTag;                             // 0x0158   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x015C   (0x0004)  MISSED
	FGameplayTagContainer                              FoundCraftingObjects;                                       // 0x0160   (0x0020)  
	FGameplayTagContainer                              ClaimedKnowlegeBundles;                                     // 0x0180   (0x0020)  
	FJunoKnowledgeRecipeStateFastArray                 RecipeStateArray;                                           // 0x01A0   (0x0120)  
	FJunoKnowledgeItemStateFastArray                   ItemStateStateArray;                                        // 0x02C0   (0x0120)  
	FGameplayTagContainer                              McpProfileOwnershipTagsCached;                              // 0x03E0   (0x0020)  
	unsigned char                                      UnknownData04_5[0xA0];                                      // 0x0400   (0x00A0)  MISSED
	bool                                               bMCPRecipesBlocked;                                         // 0x04A0   (0x0001)  
	bool                                               bComponentReady;                                            // 0x04A1   (0x0001)  
	unsigned char                                      UnknownData05_5[0x6];                                       // 0x04A2   (0x0006)  MISSED
	SDK_UNDEFINED(80,12150) /* TSet<UItemDefinitionBase*> */ __um(ItemQuickLookup);                                // 0x04A8   (0x0050)  
	unsigned char                                      UnknownData06_5[0xE8];                                      // 0x04F8   (0x00E8)  MISSED
	FGameplayEventListenerHandle                       CraftingObjectPlacedHandle;                                 // 0x05E0   (0x001C)  
	unsigned char                                      UnknownData07_6[0xA4];                                      // 0x05FC   (0x00A4)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.ViewRecipe
	// void ViewRecipe(FName InRecipeName);                                                                                  // [0xbbb8084] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.ViewItem
	// void ViewItem(class UFortItemDefinition* InItemDef);                                                                  // [0xbbb7ee0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.UnblockMCPRecipes
	// bool UnblockMCPRecipes();                                                                                             // [0xbbb7ebc] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.SetRecipeKnowledgeState
	// void SetRecipeKnowledgeState(FName RowName, EJunoKnowledgeState NewState);                                            // [0xbbb7df8] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.SetPlayerRecipeKnowledgeState
	// void SetPlayerRecipeKnowledgeState(class AFortPlayerController* PC, FName RowName, EJunoKnowledgeState NewState);     // [0xbbb7cfc] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.ServerViewRecipe
	// void ServerViewRecipe(FName InRecipeName);                                                                            // [0xbbb7c78] RequiredAPI|Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.ServerViewItem
	// void ServerViewItem(class UFortItemDefinition* InItemDef);                                                            // [0xba0ef80] RequiredAPI|Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.RevealRecipeCategoryForPlayer
	// void RevealRecipeCategoryForPlayer(class AFortPlayerController* PC, FGameplayTag CraftingObjectTag, FGameplayTag CategoryTag, FGameplayTag SubCategoryTag); // [0xbbb7924] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.RevealRecipeCategory
	// void RevealRecipeCategory(FGameplayTag CraftingObjectTag, FGameplayTag CategoryTag, FGameplayTag SubCategoryTag);     // [0xbbb761c] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.OwnsAnyMCPRecipe
	// bool OwnsAnyMCPRecipe();                                                                                              // [0xbbb7600] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.OnMcpInventoryChanged
	// void OnMcpInventoryChanged(TSet<FString>& ItemChangeFlags, int64_t ProfileRevision);                                  // [0xbbb7338] Final|Native|Protected|HasOutParms 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.OnCraftingObjectInteraction
	// void OnCraftingObjectInteraction(FCraftingMessage CraftingMessage);                                                   // [0xbbb71e4] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.IsRecipeMissingMCPOwnership
	// bool IsRecipeMissingMCPOwnership(FName RowName);                                                                      // [0xbbb6fb8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.HasViewedRecipe
	// bool HasViewedRecipe(FName InRecipeName);                                                                             // [0xbbb6d2c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.HasViewedItem
	// bool HasViewedItem(class UFortItemDefinition* InItemDef);                                                             // [0xbbb6c9c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.HasClaimedKnowledgeBundle
	// bool HasClaimedKnowledgeBundle(FGameplayTag& BundleIdentifier);                                                       // [0xbbb6bc8] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.HandleWorldStateChanged
	// void HandleWorldStateChanged();                                                                                       // [0xbbb6bb4] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.GetRecipeKnowledgeState
	// EJunoKnowledgeState GetRecipeKnowledgeState(FName RowName);                                                           // [0xbbb69d0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.GetRecipeFromGuidForPlayer
	// FName GetRecipeFromGuidForPlayer(class AFortPlayerController* PC, FGuid InGuid);                                      // [0xbbb6820] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.GetRecipeFromGuid
	// FName GetRecipeFromGuid(FGuid InGuid);                                                                                // [0xbbb66c4] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.GetPlayerRecipeKnowledgeState
	// EJunoKnowledgeState GetPlayerRecipeKnowledgeState(class AFortPlayerController* PC, FName RowName);                    // [0xbbb65e8] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.GetGuidFromRecipeForPlayer
	// FGuid GetGuidFromRecipeForPlayer(class AFortPlayerController* PC, FName RecipeName);                                  // [0xbbb648c] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.GetGuidFromRecipe
	// FGuid GetGuidFromRecipe(FName RecipeName);                                                                            // [0xbbb63f4] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.DoesRecipeRequireMCPOwnership
	// bool DoesRecipeRequireMCPOwnership(FName RowName);                                                                    // [0xbbb6368] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.AreMCPRecipesBlocked
	// bool AreMCPRecipesBlocked();                                                                                          // [0xbbb6160] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.AddCraftingObjectTagsToPlayer
	// void AddCraftingObjectTagsToPlayer(class AFortPlayerController* PC, FGameplayTagContainer CraftingObjectTags);        // [0xbbb5f6c] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.AddCraftingObjectTags
	// void AddCraftingObjectTags(FGameplayTagContainer CraftingObjectTags);                                                 // [0xbbb5df0] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.AcquireItemForPlayer
	// void AcquireItemForPlayer(class AFortPlayerController* PC, class UItemDefinitionBase* NewItemDef);                    // [0xbbb5d24] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.AcquireItem
	// void AcquireItem(class UItemDefinitionBase* NewItemDef);                                                              // [0xbbb5ca4] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoKnowledgeDebugMenu
/// Size: 0x0400 (0x0004C0 - 0x0008C0)
class AJunoKnowledgeDebugMenu : public AImGuiDebugMenuBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x408];                                     // 0x04B8   (0x0408)  MISSED
};

/// Class /Script/JunoGameNative.JunoKnowledgePersistenceFeatureData
/// Size: 0x00F0 (0x000040 - 0x000130)
class UJunoKnowledgePersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0040   (0x0008)  MISSED
	FJunoKnowledgeSaveData                             KnowledgeSaveData;                                          // 0x0048   (0x00E8)  
};

/// Class /Script/JunoGameNative.JunoKnowledgePersistenceFeatureDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoKnowledgePersistenceFeatureDataInterface : public UInterface
{ 
public:
};

/// Struct /Script/JunoGameNative.JunoFogOfWar
/// Size: 0x0018 (0x000000 - 0x000018)
struct FJunoFogOfWar
{ 
	int32_t                                            ClearedPixelCount;                                          // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<char>                                       ExplorationMask;                                            // 0x0008   (0x0010)  
};

/// Struct /Script/JunoGameNative.JunoFogOfWarSaveData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoFogOfWarSaveData
{ 
	TArray<FJunoFogOfWar>                              TileDatas;                                                  // 0x0000   (0x0010)  
};

/// Class /Script/JunoGameNative.JunoFogOfWarPersistenceFeatureData
/// Size: 0x0018 (0x000040 - 0x000058)
class UJunoFogOfWarPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0040   (0x0008)  MISSED
	FJunoFogOfWarSaveData                              FogOfWarSaveDatas;                                          // 0x0048   (0x0010)  
};

/// Class /Script/JunoGameNative.JunoFogOfWarPersistenceFeatureDataActor
/// Size: 0x0018 (0x0002D0 - 0x0002E8)
class AJunoFogOfWarPersistenceFeatureDataActor : public AJunoPersistenceFeatureDataActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x02D0   (0x0008)  MISSED
	TArray<FJunoFogOfWar>                              FogOfWarData;                                               // 0x02D8   (0x0010)  
};

/// Class /Script/JunoGameNative.JunoFogOfWarPersistenceFeatureDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoFogOfWarPersistenceFeatureDataInterface : public UInterface
{ 
public:
};

/// Struct /Script/JunoGameNative.UniqueMarkerSettings
/// Size: 0x0020 (0x000000 - 0x000020)
struct FUniqueMarkerSettings
{ 
	FDataTableRowHandle                                OriginalSettings;                                           // 0x0000   (0x0010)  
	FDataTableRowHandle                                ReplacementSettings;                                        // 0x0010   (0x0010)  
};

/// Class /Script/JunoGameNative.JunoMarkerManagerPlayspaceComponent
/// Size: 0x0090 (0x0000F8 - 0x000188)
class UJunoMarkerManagerPlayspaceComponent : public UFortPlayspaceComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x38];                                      // 0x00F8   (0x0038)  MISSED
	TArray<FJunoMarker>                                Markers;                                                    // 0x0130   (0x0010)  
	TArray<FGuid>                                      MarkersIds;                                                 // 0x0140   (0x0010)  
	class UDataTable*                                  MarkerConfigData;                                           // 0x0150   (0x0008)  
	TArray<FUniqueMarkerSettings>                      UniqueMarkers;                                              // 0x0158   (0x0010)  
	TArray<class UObject*>                             LoadedIconTextures;                                         // 0x0168   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0178   (0x0010)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoMarkerManagerPlayspaceComponent.OnRep_MarkersIds
	// void OnRep_MarkersIds();                                                                                              // [0xbbb75ec] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoMarkerManagerPlayspaceComponent.OnRep_Markers
	// void OnRep_Markers();                                                                                                 // [0xbbb75d8] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoMarkerManagerPlayspaceComponent.GetJunoMarkerManagerComponent
	// class UJunoMarkerManagerPlayspaceComponent* GetJunoMarkerManagerComponent(class UObject* WorldContextObject);         // [0xbbb6568] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoMarkerManagerPlayspaceComponent.CreateMarker
	// bool CreateMarker(class AActor* Actor, FJunoMarker& Marker);                                                          // [0xbbb621c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/JunoGameNative.JunoMarkersSaveData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FJunoMarkersSaveData
{ 
	TArray<FJunoMarker>                                MarkersData;                                                // 0x0000   (0x0010)  
	TArray<FGuid>                                      MarkersIds;                                                 // 0x0010   (0x0010)  
};

/// Class /Script/JunoGameNative.JunoMarkersPersistenceFeatureData
/// Size: 0x0028 (0x000040 - 0x000068)
class UJunoMarkersPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0040   (0x0008)  MISSED
	FJunoMarkersSaveData                               MarkersSaveData;                                            // 0x0048   (0x0020)  
};

/// Class /Script/JunoGameNative.JunoMarkersPersistenceFeatureDataActor
/// Size: 0x0028 (0x0002D0 - 0x0002F8)
class AJunoMarkersPersistenceFeatureDataActor : public AJunoPersistenceFeatureDataActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x02D0   (0x0008)  MISSED
	TArray<FJunoMarker>                                MarkersData;                                                // 0x02D8   (0x0010)  
	TArray<FGuid>                                      MarkersIds;                                                 // 0x02E8   (0x0010)  
};

/// Class /Script/JunoGameNative.JunoMarkersPersistenceFeatureDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoMarkersPersistenceFeatureDataInterface : public UInterface
{ 
public:
};

/// Class /Script/JunoGameNative.JunoModeratorModeBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoModeratorModeBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/JunoGameNative.JunoModeratorModeBlueprintLibrary.IsPlayerAllowedToFly
	// bool IsPlayerAllowedToFly(class UObject* WorldContextObject);                                                         // [0xbbb6f18] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoModeratorModeBlueprintLibrary.IsModeratorModeEnabled
	// bool IsModeratorModeEnabled(class UObject* WorldContextObject);                                                       // [0xbbb6db8] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoModeratorModeComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UJunoModeratorModeComponent : public UGameFrameworkComponent
{ 
public:
	class UInputAction*                                InputAction_TeleportPlayer_ModeratorMode;                   // 0x00A0   (0x0008)  
	bool                                               bIsModeratorModeEnabled;                                    // 0x00A8   (0x0001)  
	bool                                               bIsPlayerAllowedToFly;                                      // 0x00A9   (0x0001)  
	bool                                               bModeratorConfirmed;                                        // 0x00AA   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x00AB   (0x0005)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoModeratorModeComponent.OnRootPlayspaceOwnerSet
	// void OnRootPlayspaceOwnerSet(class AFortPlayerControllerAthena* PlayerControllerAthena);                              // [0x5decebc] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoModeratorModeComponent.OnRep_IsModeratorModeEnabled
	// void OnRep_IsModeratorModeEnabled();                                                                                  // [0xbbb75c4] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoModeratorModeComponent.OnPawnDestroyed
	// void OnPawnDestroyed(class AActor* DestroyedActor);                                                                   // [0xbbb7530] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoModeratorModeComponent.IsPlayerAllowedToFly
	// bool IsPlayerAllowedToFly();                                                                                          // [0xbbb6f98] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoModeratorModeComponent.IsModeratorModeEnabled
	// bool IsModeratorModeEnabled();                                                                                        // [0xb2dfbe4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoModeratorModeComponent.HandleTeleportPlayer
	// void HandleTeleportPlayer();                                                                                          // [0xbbb6ba0] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoModeratorModeComponent.HandlePlayerPossesedPawn
	// void HandlePlayerPossesedPawn(class APawn* PlayerPawn);                                                               // [0xbbb6b20] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoModeratorModeComponent.HandleOnCreativeFlyChangedDelegate
	// void HandleOnCreativeFlyChangedDelegate(bool bIsFlying);                                                              // [0xbbb6a5c] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoModeratorModeComponent.EnableModeratorMode
	// void EnableModeratorMode();                                                                                           // [0x3097b14] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoModeratorModeComponent.DisableModeratorMode
	// void DisableModeratorMode();                                                                                          // [0x3097b14] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoModeratorModeComponent.CheatModeratorConfirm
	// void CheatModeratorConfirm();                                                                                         // [0xbbb6204] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoDoorMetaNavArea
/// Size: 0x0008 (0x000048 - 0x000050)
class UJunoDoorMetaNavArea : public UNavAreaMeta
{ 
public:
	FNavAgentSelector                                  DoorAwareAgents;                                            // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Class /Script/JunoGameNative.JunoMetaNavArea
/// Size: 0x0008 (0x000048 - 0x000050)
class UJunoMetaNavArea : public UNavAreaMeta
{ 
public:
	int32_t                                            HealthThreshold;                                            // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/JunoGameNative.JunoMoodStateData
/// Size: 0x0004 (0x000000 - 0x000004)
struct FJunoMoodStateData
{ 
	FGameplayTag                                       MoodTag;                                                    // 0x0000   (0x0004)  
};

/// Class /Script/JunoGameNative.JunoPawnComponentMood
/// Size: 0x00B8 (0x0000A8 - 0x000160)
class UJunoPawnComponentMood : public UFortPawnComponent
{ 
public:
	SDK_UNDEFINED(16,12151) /* FMulticastInlineDelegate */ __um(OnJunoMoodChangedDelegate);                        // 0x00A8   (0x0010)  
	unsigned char                                      UnknownData00_5[0x18];                                      // 0x00B8   (0x0018)  MISSED
	SDK_UNDEFINED(16,12152) /* FMulticastInlineDelegate */ __um(OnJunoMoodReactionTriggeredDelegate);              // 0x00D0   (0x0010)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x00E0   (0x0018)  MISSED
	SDK_UNDEFINED(16,12153) /* FMulticastInlineDelegate */ __um(OnJunoMoodReactionFinishedDelegate);               // 0x00F8   (0x0010)  
	unsigned char                                      UnknownData02_5[0x18];                                      // 0x0108   (0x0018)  MISSED
	SDK_UNDEFINED(16,12154) /* FMulticastInlineDelegate */ __um(OnJunoMoodReactionCanceledDelegate);               // 0x0120   (0x0010)  
	unsigned char                                      UnknownData03_5[0x18];                                      // 0x0130   (0x0018)  MISSED
	FJunoMoodStateData                                 CurrentMoodState;                                           // 0x0148   (0x0004)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x014C   (0x0004)  MISSED
	class UProxyTable*                                 MoodAnimProxyTable;                                         // 0x0150   (0x0008)  
	bool                                               bIsMoodReactionActive;                                      // 0x0158   (0x0001)  
	unsigned char                                      UnknownData05_6[0x7];                                       // 0x0159   (0x0007)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoPawnComponentMood.OnRep_CurrentMoodState
	// void OnRep_CurrentMoodState();                                                                                        // [0xbbb75b0] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPawnComponentMood.NotifyMoodReactionComplete
	// void NotifyMoodReactionComplete();                                                                                    // [0xbbb7188] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPawnComponentMood.MulticastTriggerMoodReaction
	// void MulticastTriggerMoodReaction(FGameplayTag MoodReactionTag);                                                      // [0xbbb7044] RequiredAPI|Net|NetReliableNative|Event|NetMulticast|Public 
	// Function /Script/JunoGameNative.JunoPawnComponentMood.MulticastOnMoodReactionComplete
	// void MulticastOnMoodReactionComplete();                                                                               // [0x2e6c604] Final|Net|NetReliableNative|Event|NetMulticast|Private|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPawnComponentMood.MulticastOnCancelCurrentMoodReaction
	// void MulticastOnCancelCurrentMoodReaction();                                                                          // [0x3841600] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/JunoGameNative.JunoPawnComponentMood.IsMoodReactionSupported_Internal
	// bool IsMoodReactionSupported_Internal(FGameplayTag& MoodReactionTag);                                                 // [0x3d1d968] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoPawnComponentMood.IsMoodReactionSupported
	// bool IsMoodReactionSupported(FGameplayTag& MoodReactionTag);                                                          // [0xbbb6e44] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPawnComponentMood.GetMoodAnimProxyTable
	// class UProxyTable* GetMoodAnimProxyTable();                                                                           // [0x6f70640] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPawnComponentMood.GetCurrentMoodState
	// FJunoMoodStateData GetCurrentMoodState();                                                                             // [0xa24ef98] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoPawnComponentSpeechBubble
/// Size: 0x0000 (0x0001D8 - 0x0001D8)
class UJunoPawnComponentSpeechBubble : public UFortPawnComponent_SpeechBubble
{ 
public:
};

/// Class /Script/JunoGameNative.JunoDeltaFile
/// Size: 0x0068 (0x000768 - 0x0007D0)
class UJunoDeltaFile : public ULevelSaveRecord
{ 
public:
	FName                                              UniquePackageName;                                          // 0x0768   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x076C   (0x0004)  MISSED
	SDK_UNDEFINED(80,12155) /* TMap<FGuid, FJunoUpdateAction> */ __um(UpdateActions);                              // 0x0770   (0x0050)  
	SDK_UNDEFINED(8,12156) /* TWeakObjectPtr<AJunoPersistentPlayspace*> */ __um(WeakPersistentPlayspaceToApplyTo); // 0x07C0   (0x0008)  
	bool                                               bDirty;                                                     // 0x07C8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x07C9   (0x0007)  MISSED
};

/// Class /Script/JunoGameNative.JunoDeltaFileApplier
/// Size: 0x00A0 (0x0004F0 - 0x000590)
class UJunoDeltaFileApplier : public ULevelRecordSpawner
{ 
public:
	SDK_UNDEFINED(80,12157) /* TMap<FGuid, FJunoUpdateAction> */ __um(UpdateActionMap);                            // 0x04F0   (0x0050)  
	SDK_UNDEFINED(80,12158) /* TMap<FGuid, FDeleteAction> */ __um(DeleteActionMap);                                // 0x0540   (0x0050)  
};

/// Class /Script/JunoGameNative.JunoDeltasLevelSaveComponent
/// Size: 0x0000 (0x0008F0 - 0x0008F0)
class UJunoDeltasLevelSaveComponent : public UFortLevelSaveComponent
{ 
public:
};

/// Class /Script/JunoGameNative.JunoPFWModule_LevelDeltas
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UJunoPFWModule_LevelDeltas : public UPersistenceFrameworkModule
{ 
public:
};

/// Class /Script/JunoGameNative.JunoPFWContainer_LevelDelta
/// Size: 0x0038 (0x000140 - 0x000178)
class UJunoPFWContainer_LevelDelta : public UPersistenceFrameworkContainer
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0140   (0x0038)  MISSED
};

/// Class /Script/JunoGameNative.JunoPFWContainer_LevelDeltaIndex
/// Size: 0x0020 (0x0001E0 - 0x000200)
class UJunoPFWContainer_LevelDeltaIndex : public UJunoBasePFWContainer
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x01E0   (0x0020)  MISSED
};

/// Class /Script/JunoGameNative.JunoPlayspaceTrackableInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoPlayspaceTrackableInterface : public UInterface
{ 
public:
};

/// Class /Script/JunoGameNative.JunoPersistentPlayspaceLevelRegistry
/// Size: 0x0050 (0x000030 - 0x000080)
class UJunoPersistentPlayspaceLevelRegistry : public UEngineSubsystem
{ 
public:
	SDK_UNDEFINED(80,12159) /* TMap<FName, FJunoPersistentPlayspaceLevelRegistryEntry> */ __um(PersistentPlayspaceLevelMap); // 0x0030   (0x0050)  
};

/// Class /Script/JunoGameNative.JunoPlayerPersistenceComponent
/// Size: 0x01A0 (0x0000F8 - 0x000298)
class UJunoPlayerPersistenceComponent : public UFortPlayspaceComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x40];                                      // 0x00F8   (0x0040)  MISSED
	SDK_UNDEFINED(80,12160) /* TMap<FUniqueNetIdRepl, int32_t> */ __um(PlayerSaveDataRefCount);                    // 0x0138   (0x0050)  
	SDK_UNDEFINED(80,12161) /* TMap<FUniqueNetIdRepl, FJunoPlayerSaveData> */ __um(PlayerSaveData);                // 0x0188   (0x0050)  
	SDK_UNDEFINED(80,12162) /* TMap<FUniqueNetIdRepl, TWeakObjectPtr<UJunoPlayerSaveData_Container*>> */ __um(PlayerSaveDataContainers); // 0x01D8   (0x0050)  
	SDK_UNDEFINED(80,12163) /* TSet<FUniqueNetIdRepl> */ __um(InFlightPlayerSaves);                                // 0x0228   (0x0050)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0278   (0x0020)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoPlayerPersistenceComponent.OnRemovePlayer
	// void OnRemovePlayer(class APlayerController* PlayerController);                                                       // [0x5decebc] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPlayerPersistenceComponent.OnControllerBeginDestroy
	// void OnControllerBeginDestroy(class AFortPlayerControllerAthena* FortPCAthena);                                       // [0x5decebc] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPlayerPersistenceComponent.OnAnyPlayerLoggedOut
	// void OnAnyPlayerLoggedOut(class AGameModeBase* GameModeBase, class AController* Controller);                          // [0x67b718c] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPlayerPersistenceComponent.OnAnyPlayerLoggedIn
	// void OnAnyPlayerLoggedIn(class APlayerController* PlayerController);                                                  // [0x5decebc] Final|Native|Private 
};

/// Class /Script/JunoGameNative.JunoWorldPersistenceHandler
/// Size: 0x0008 (0x000028 - 0x000030)
class UJunoWorldPersistenceHandler : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0000   (0x0030)  MISSED
};

/// Struct /Script/JunoGameNative.JunoRollbackBadCheckpointRange
/// Size: 0x0028 (0x000000 - 0x000028)
struct FJunoRollbackBadCheckpointRange
{ 
	int32_t                                            StartCL;                                                    // 0x0000   (0x0004)  
	int32_t                                            EndCL;                                                      // 0x0004   (0x0004)  
	SDK_UNDEFINED(16,12164) /* FString */              __um(StartTimestamp);                                       // 0x0008   (0x0010)  
	SDK_UNDEFINED(16,12165) /* FString */              __um(EndTimestamp);                                         // 0x0018   (0x0010)  
};

/// Class /Script/JunoGameNative.JunoWorldPersistenceHandler_Deltas
/// Size: 0x0140 (0x000030 - 0x000170)
class UJunoWorldPersistenceHandler_Deltas : public UJunoWorldPersistenceHandler
{ 
public:
	int32_t                                            DeltasPeriodicSaveIntervalSeconds_Default;                  // 0x0030   (0x0004)  
	int32_t                                            DeltasPeriodicSaveIntervalSeconds_PIEOverride;              // 0x0034   (0x0004)  
	unsigned char                                      UnknownData00_5[0xF0];                                      // 0x0038   (0x00F0)  MISSED
	class UJunoDeltasSaveHandler*                      DeltasSaveHandler;                                          // 0x0128   (0x0008)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x0130   (0x0010)  MISSED
	FSoftClassPath                                     DefaultDeltaFileClass;                                      // 0x0140   (0x0018)  
	TArray<FJunoRollbackBadCheckpointRange>            RollbackBadCheckpointRanges;                                // 0x0158   (0x0010)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0168   (0x0008)  MISSED
};

/// Class /Script/JunoGameNative.JunoWorldPersistencePlayerManager
/// Size: 0x0098 (0x000028 - 0x0000C0)
class UJunoWorldPersistencePlayerManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0xC0];                                      // 0x0000   (0x00C0)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoWorldPersistencePlayerManager.OnAnyPlayerLoggedIn
	// void OnAnyPlayerLoggedIn(class APlayerController* PlayerController);                                                  // [0xbc0aa40] Final|Native|Public  
};

/// Class /Script/JunoGameNative.JunoAIPersistenceFeatureData
/// Size: 0x0130 (0x000040 - 0x000170)
class UJunoAIPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0040   (0x0010)  MISSED
	FSavedAIDataManager                                SavedAIData;                                                // 0x0050   (0x0120)  
};

/// Class /Script/JunoGameNative.JunoPlayspaceAccountantPersistenceFeatureDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoPlayspaceAccountantPersistenceFeatureDataInterface : public UInterface
{ 
public:
};

/// Struct /Script/JunoGameNative.JunoPlayspaceIndexSaveData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FJunoPlayspaceIndexSaveData
{ 
	SDK_UNDEFINED(80,12166) /* TMap<FGuid, FJunoPlayspaceIndexNode> */ __um(PlayspaceNodes);                       // 0x0000   (0x0050)  
};

/// Class /Script/JunoGameNative.JunoPlayspaceIndexPersistenceFeatureData
/// Size: 0x0050 (0x000040 - 0x000090)
class UJunoPlayspaceIndexPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData
{ 
public:
	FJunoPlayspaceIndexSaveData                        PlayspaceIndexSaveData;                                     // 0x0040   (0x0050)  
};

/// Struct /Script/JunoGameNative.JunoWorldRandomSeed
/// Size: 0x0014 (0x000000 - 0x000014)
struct FJunoWorldRandomSeed
{ 
	int32_t                                            RootSeed;                                                   // 0x0000   (0x0004)  
	FGuid                                              Version;                                                    // 0x0004   (0x0010)  
};

/// Struct /Script/JunoGameNative.JunoWorldSaveData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FJunoWorldSaveData
{ 
	uint32_t                                           WorldPersistenceVersion;                                    // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FDateTime                                          CreationTime;                                               // 0x0008   (0x0008)  
	FJunoWorldRandomSeed                               RandomSeed;                                                 // 0x0010   (0x0014)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	FVector                                            InitialPlayerStartLocation;                                 // 0x0028   (0x0018)  
	SDK_UNDEFINED(16,12167) /* FString */              __um(LatestSessionId);                                      // 0x0040   (0x0010)  
};

/// Class /Script/JunoGameNative.JunoWorldPersistenceFeatureData
/// Size: 0x0058 (0x000040 - 0x000098)
class UJunoWorldPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0040   (0x0008)  MISSED
	FJunoWorldSaveData                                 WorldSaveData;                                              // 0x0048   (0x0050)  
};

/// Class /Script/JunoGameNative.JunoWorldPersistenceFeatureDataActor
/// Size: 0x0058 (0x0002D0 - 0x000328)
class AJunoWorldPersistenceFeatureDataActor : public AJunoPersistenceFeatureDataActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x02D0   (0x0008)  MISSED
	FJunoWorldSaveData                                 WorldSaveData;                                              // 0x02D8   (0x0050)  
};

/// Class /Script/JunoGameNative.JunoWorldPersistenceFeatureDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoWorldPersistenceFeatureDataInterface : public UInterface
{ 
public:
};

/// Struct /Script/JunoGameNative.JunoClusterUnionSaveData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FJunoClusterUnionSaveData
{ 
	SDK_UNDEFINED(80,12168) /* TMap<FGraphIslandHandle, FJunoSingleClusterUnionSaveData> */ __um(PerClusterUnionData); // 0x0000   (0x0050)  
};

/// Class /Script/JunoGameNative.JunoClusterUnionPersistenceFeatureData
/// Size: 0x0050 (0x000040 - 0x000090)
class UJunoClusterUnionPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData
{ 
public:
	FJunoClusterUnionSaveData                          SaveData;                                                   // 0x0040   (0x0050)  
};

/// Class /Script/JunoGameNative.JunoClusterUnionPersistenceFeatureData_Container
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoClusterUnionPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer
{ 
public:
};

/// Class /Script/JunoGameNative.JunoConnectivityGraphPersistenceFeatureDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoConnectivityGraphPersistenceFeatureDataInterface : public UInterface
{ 
public:
};

/// Class /Script/JunoGameNative.JunoConnectivityGraphPFWPersistenceFeatureData
/// Size: 0x0110 (0x000040 - 0x000150)
class UJunoConnectivityGraphPFWPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0040   (0x0008)  MISSED
	FSerializableConnectivityGraph                     SavedConnectivityData;                                      // 0x0048   (0x0108)  
};

/// Class /Script/JunoGameNative.JunoConnectivityGraphPFW_Container
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoConnectivityGraphPFW_Container : public UJunoBasePFWPersistenceFeatureDataContainer
{ 
public:
};

/// Class /Script/JunoGameNative.JunoPhysicsPFWModule
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UJunoPhysicsPFWModule : public UPersistenceFrameworkModule
{ 
public:
};

/// Struct /Script/JunoGameNative.JunoPhysicsToySaveData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FJunoPhysicsToySaveData
{ 
	SDK_UNDEFINED(80,12169) /* TMap<FGuid, FJunoSinglePhysicsToySaveData> */ __um(PerToyData);                     // 0x0000   (0x0050)  
};

/// Class /Script/JunoGameNative.JunoPhysicsToyPersistenceFeatureData
/// Size: 0x0050 (0x000040 - 0x000090)
class UJunoPhysicsToyPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData
{ 
public:
	FJunoPhysicsToySaveData                            Container;                                                  // 0x0040   (0x0050)  
};

/// Class /Script/JunoGameNative.JunoPhysicsToyPersistenceFeatureData_Container
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoPhysicsToyPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer
{ 
public:
};

/// Class /Script/JunoGameNative.JunoPlayerPersistenceFeatureDataActor
/// Size: 0x0070 (0x0002D0 - 0x000340)
class AJunoPlayerPersistenceFeatureDataActor : public AJunoPersistenceFeatureDataActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x02D0   (0x0008)  MISSED
	SDK_UNDEFINED(80,12170) /* TMap<FUniqueNetIdRepl, FJunoPlayerSaveData> */ __um(PlayerSaveData);                // 0x02D8   (0x0050)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0328   (0x0018)  MISSED
};

/// Class /Script/JunoGameNative.JunoPlayerPersistenceFeatureDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoPlayerPersistenceFeatureDataInterface : public UInterface
{ 
public:
};

/// Class /Script/JunoGameNative.JunoPersistenceFeaturePFWState
/// Size: 0x0008 (0x000028 - 0x000030)
class UJunoPersistenceFeaturePFWState : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(8,12171) /* TWeakObjectPtr<UJunoBasePFWPersistenceFeatureDataContainer*> */ __um(ContainerWeakPtr); // 0x0028   (0x0008)  
};

/// Class /Script/JunoGameNative.PFWSubsystemExtension_JunoGameNative
/// Size: 0x0008 (0x000038 - 0x000040)
class UPFWSubsystemExtension_JunoGameNative : public UPersistenceFrameworkSubsystemExtension
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Class /Script/JunoGameNative.JunoControllerComponent
/// Size: 0x0410 (0x0000A8 - 0x0004B8)
class UJunoControllerComponent : public UFortControllerComponent
{ 
public:
	SDK_UNDEFINED(16,12172) /* FMulticastInlineDelegate */ __um(OnPlayerSpawnedActorWithBuilderTool);              // 0x00A8   (0x0010)  
	SDK_UNDEFINED(16,12173) /* FMulticastInlineDelegate */ __um(OnOffhandInputPressed);                            // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,12174) /* FMulticastInlineDelegate */ __um(OnOffhandInputReleased);                           // 0x00C8   (0x0010)  
	class UFortWorldItemDefinition*                    EmptyHandItemDefinition;                                    // 0x00D8   (0x0008)  
	float                                              InteractionDistanceFromCamera;                              // 0x00E0   (0x0004)  
	float                                              InteractionDistanceFromPlayer;                              // 0x00E4   (0x0004)  
	FPrimaryAssetId                                    BuilderToolPrimaryAsset;                                    // 0x00E8   (0x0008)  
	class UClass*                                      DeathChestActorClass;                                       // 0x00F0   (0x0008)  
	class UClass*                                      DeathChestNavFilterClass;                                   // 0x00F8   (0x0008)  
	FVector                                            DeathChestNavQuestyExtents;                                 // 0x0100   (0x0018)  
	float                                              DeathChestZDistanceToCheck;                                 // 0x0118   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x011C   (0x0004)  MISSED
	FJunoMarker                                        CheckpointMarker;                                           // 0x0120   (0x0098)  
	FGuid                                              ItemToBuildGUID;                                            // 0x01B8   (0x0010)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x01C8   (0x0010)  MISSED
	FGuid                                              ItemSelectedGuid;                                           // 0x01D8   (0x0010)  
	bool                                               bSpawnedBackpack;                                           // 0x01E8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x17];                                      // 0x01E9   (0x0017)  MISSED
	class UInputComponent*                             InputComponent;                                             // 0x0200   (0x0008)  
	unsigned char                                      UnknownData03_5[0x90];                                      // 0x0208   (0x0090)  MISSED
	class UFortItem*                                   CachedQuickBuildItem;                                       // 0x0298   (0x0008)  
	unsigned char                                      UnknownData04_5[0x190];                                     // 0x02A0   (0x0190)  MISSED
	class UFortOffhandComponent*                       OffhandComponent;                                           // 0x0430   (0x0008)  
	FGameplayEventListenerHandle                       CheckpointActorDestroyedHandle;                             // 0x0438   (0x001C)  
	unsigned char                                      UnknownData05_5[0x5C];                                      // 0x0454   (0x005C)  MISSED
	bool                                               bIsModeratorModeEnabled;                                    // 0x04B0   (0x0001)  
	unsigned char                                      UnknownData06_6[0x7];                                       // 0x04B1   (0x0007)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoControllerComponent.SwitchToEmptyHands
	// void SwitchToEmptyHands(bool bTriggerSelection, FGameplayTag OptionalSlotGroupTag, int32_t OptionalSlotRow, int32_t OptionalSlotColumn); // [0xbc4cc9c] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoControllerComponent.SpawnedBackpack
	// bool SpawnedBackpack();                                                                                               // [0xbc4cc84] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoControllerComponent.ShouldSpawnDeathChest
	// bool ShouldSpawnDeathChest();                                                                                         // [0xbc4cc60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoControllerComponent.SetPlayerLastCaveTeleporterLocation
	// void SetPlayerLastCaveTeleporterLocation(FVector& TeleporterLocation);                                                // [0xbc4cb9c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoControllerComponent.SetPlayerCheckpoint
	// void SetPlayerCheckpoint(class AActor* CheckpointActor, FVector& CheckpointLocation);                                 // [0xbc4ca94] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoControllerComponent.SetIsModeratorModeEnabled
	// void SetIsModeratorModeEnabled(bool bEnable);                                                                         // [0xbc4ca14] Final|Native|Public  
	// Function /Script/JunoGameNative.JunoControllerComponent.ServerTeleportToPOI
	// void ServerTeleportToPOI();                                                                                           // [0x787a850] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/JunoGameNative.JunoControllerComponent.ServerTeleportToLocation
	// void ServerTeleportToLocation(FVector TeleportLocation, FRotator TeleportRotation);                                   // [0xbc4c57c] Net|NetReliableNative|Event|Public|NetServer|HasDefaults 
	// Function /Script/JunoGameNative.JunoControllerComponent.ServerTeleportToCave
	// void ServerTeleportToCave();                                                                                          // [0x8397e8c] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/JunoGameNative.JunoControllerComponent.ServerSetSelectedItem
	// void ServerSetSelectedItem(FGuid ItemGuid, FGameplayTag SlotGroupTag, int32_t SlotRow, int32_t SlotColumn);           // [0xbc4c178] Final|Net|Native|Event|Private|NetServer|HasDefaults 
	// Function /Script/JunoGameNative.JunoControllerComponent.ServerSetCraftingContextItem
	// void ServerSetCraftingContextItem(FGuid InItemGuid);                                                                  // [0xbc4c01c] Net|NetReliableNative|Event|Public|NetServer|HasDefaults 
	// Function /Script/JunoGameNative.JunoControllerComponent.ServerRequestPersistenceDataReport
	// void ServerRequestPersistenceDataReport(EJunoPersistenceReportOptions ReportOptions);                                 // [0xbc4bf98] Net|NetReliableNative|Event|Public|NetServer|Const 
	// Function /Script/JunoGameNative.JunoControllerComponent.ServerReplicateMapData
	// void ServerReplicateMapData();                                                                                        // [0x81c4bcc] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/JunoGameNative.JunoControllerComponent.ServerFreeBuildAddInventoryItem
	// void ServerFreeBuildAddInventoryItem(FFortItemEntry InItemEntry);                                                     // [0xbc4be18] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/JunoGameNative.JunoControllerComponent.OnRep_ItemSelectedGuid
	// void OnRep_ItemSelectedGuid();                                                                                        // [0xbc4bc88] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoControllerComponent.OnCameraToggle
	// void OnCameraToggle();                                                                                                // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoControllerComponent.OnAnimToggle
	// void OnAnimToggle();                                                                                                  // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoControllerComponent.HandleFortPawnChanged
	// void HandleFortPawnChanged(class AFortPawn* NewPawn);                                                                 // [0xbc4b7e8] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoControllerComponent.HandleBuilderToolUnEquip
	// void HandleBuilderToolUnEquip(class AFortWeapon* Weapon);                                                             // [0xbc4b248] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoControllerComponent.HandleBuilderToolInteractionStopped
	// void HandleBuilderToolInteractionStopped(class AJunoBuilderTool* BuilderTool, class UJunoBuilderToolInteractionBehavior* Behavior); // [0xbc4b184] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoControllerComponent.HandleBuilderToolInteractionStarted
	// void HandleBuilderToolInteractionStarted(class AJunoBuilderTool* BuilderTool, class UJunoBuilderToolInteractionBehavior* Behavior); // [0xbc4b0c0] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoControllerComponent.GetPlayerCheckpoint
	// FJunoPlayerCheckpoint GetPlayerCheckpoint();                                                                          // [0xbc4b060] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoControllerComponent.GetLastCaveTeleporterLocation
	// FVector GetLastCaveTeleporterLocation();                                                                              // [0xbc4b038] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoControllerComponent.GetIsModeratorModeEnabled
	// bool GetIsModeratorModeEnabled();                                                                                     // [0xbc4b020] Final|Native|Public  
	// Function /Script/JunoGameNative.JunoControllerComponent.GetBuilderTool
	// class AJunoBuilderTool* GetBuilderTool();                                                                             // [0xbc4afcc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoControllerComponent.ClientPrintPersistenceDataReport
	// void ClientPrintPersistenceDataReport(TArray<FString> Logs);                                                          // [0xbc4af3c] Net|NetReliableNative|Event|Public|NetClient|Const 
	// Function /Script/JunoGameNative.JunoControllerComponent.ClientNotifyInventoryInvoked
	// void ClientNotifyInventoryInvoked(class AActor* ReceivingActor);                                                      // [0xbc4aeb8] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/JunoGameNative.JunoControllerComponent.ClientNotifyInventoryFull
	// void ClientNotifyInventoryFull();                                                                                     // [0x81eb684] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/JunoGameNative.JunoControllerComponent.ClientNotifyInventoryClosed
	// void ClientNotifyInventoryClosed(class AActor* ReceivingActor);                                                       // [0xbc4ae34] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/JunoGameNative.JunoControllerComponent.AddRecipeToBuilderTool
	// void AddRecipeToBuilderTool(FName RecipeName);                                                                        // [0xbc4adb4] Final|Native|Public  
	// Function /Script/JunoGameNative.JunoControllerComponent.AddItemToBuilderToolOnEquip
	// void AddItemToBuilderToolOnEquip(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);                        // [0xbc4acf0] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoControllerComponent.AddItemToBuilderTool
	// void AddItemToBuilderTool(class UFortItem* Item);                                                                     // [0xbc4ac70] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoHealthComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UJunoHealthComponent : public UGameFrameworkComponent
{ 
public:
};

/// Struct /Script/JunoGameNative.JunoEnhancedInputActionToGameplayEvent
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoEnhancedInputActionToGameplayEvent
{ 
	class UInputAction*                                InputAction;                                                // 0x0000   (0x0008)  
	FGameplayTag                                       GameplayEventTag;                                           // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Class /Script/JunoGameNative.JunoInputControllerComponent
/// Size: 0x0148 (0x0000A8 - 0x0001F0)
class UJunoInputControllerComponent : public UFortControllerComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x40];                                      // 0x00A8   (0x0040)  MISSED
	bool                                               bCachedEnableClientSettingsRestoreInputPresets : 1;         // 0x00E8:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x7];                                       // 0x00E9   (0x0007)  MISSED
	FJunoInputMapping                                  DefaultInputMapping;                                        // 0x00F0   (0x0010)  
	FJunoInputMapping                                  BasicGameplayInputMapping;                                  // 0x0100   (0x0010)  
	class UInputAction*                                InputAction_HandleCameraToggle;                             // 0x0110   (0x0008)  
	class UInputAction*                                InputAction_HandleAnimToggle;                               // 0x0118   (0x0008)  
	class UInputAction*                                InputAction_HandleCyclePOI;                                 // 0x0120   (0x0008)  
	class UInputAction*                                InputAction_HandleTeleportToCave;                           // 0x0128   (0x0008)  
	class UInputAction*                                InputAction_NextQuickbarSlot;                               // 0x0130   (0x0008)  
	class UInputAction*                                InputAction_NextQuickbarSlot_Delayed;                       // 0x0138   (0x0008)  
	class UInputAction*                                InputAction_PrevQuickbarSlot;                               // 0x0140   (0x0008)  
	class UInputAction*                                InputAction_PrevQuickbarSlot_Delayed;                       // 0x0148   (0x0008)  
	class UInputAction*                                InputAction_HandleOpenHudMenu;                              // 0x0150   (0x0008)  
	class UInputAction*                                InputAction_HandleOpenBuildingMenu;                         // 0x0158   (0x0008)  
	class UInputAction*                                InputAction_HandleOpenMapMenu;                              // 0x0160   (0x0008)  
	class UInputAction*                                InputAction_HandleOpenInventoryMenu;                        // 0x0168   (0x0008)  
	class UInputAction*                                InputAction_HandleOpenShopMenu;                             // 0x0170   (0x0008)  
	class UInputAction*                                InputAction_HandleOpenEngagementMenu;                       // 0x0178   (0x0008)  
	class UInputAction*                                InputAction_HandleOpenEscapeMenu;                           // 0x0180   (0x0008)  
	class UInputAction*                                InputAction_JunoBuildingStartPlacement;                     // 0x0188   (0x0008)  
	class UInputAction*                                InputAction_ToggleBuildMode;                                // 0x0190   (0x0008)  
	class UInputAction*                                InputAction_TeleportPlayer;                                 // 0x0198   (0x0008)  
	class UInputAction*                                InputAction_OffhandUse;                                     // 0x01A0   (0x0008)  
	class UInputAction*                                InputAction_FlyDown;                                        // 0x01A8   (0x0008)  
	class UInputAction*                                InputAction_FlyUp;                                          // 0x01B0   (0x0008)  
	TArray<class UInputAction*>                        QuickbarBindings;                                           // 0x01B8   (0x0010)  
	TArray<FJunoEnhancedInputActionToGameplayEvent>    InputActionsToGameplayEvents;                               // 0x01C8   (0x0010)  
	bool                                               bJunoIsFlying;                                              // 0x01D8   (0x0001)  
	unsigned char                                      UnknownData02_6[0x17];                                      // 0x01D9   (0x0017)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoInputControllerComponent.ReplaceInputMappingContext
	// void ReplaceInputMappingContext(FJunoInputMapping& InputMapping);                                                     // [0xbc4bd74] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoInputControllerComponent.RemoveInputMappingContext
	// void RemoveInputMappingContext(class UInputMappingContext* InputMappingContext);                                      // [0xbc4bcf4] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/JunoGameNative.JunoInputControllerComponent.HandleOnCreativeFlyChangedDelegate
	// void HandleOnCreativeFlyChangedDelegate(bool bIsFlying);                                                              // [0xbc4bb9c] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoInputControllerComponent.AddInputMappingContext
	// void AddInputMappingContext(FJunoInputMapping& InputMapping);                                                         // [0xbc4abe0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoLWITriggerComponent
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UJunoLWITriggerComponent : public UFortPawnComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x00A8   (0x0018)  MISSED
};

/// Class /Script/JunoGameNative.JunoPawnComponent
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UJunoPawnComponent : public UFortPawnComponent
{ 
public:
	bool                                               bShouldSpawnDeathChest;                                     // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00A9   (0x0007)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoPawnComponent.ShouldPawnSpawnDeathChest
	// bool ShouldPawnSpawnDeathChest();                                                                                     // [0xb2dfbe4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPawnComponent.IsPlayerInCave
	// bool IsPlayerInCave();                                                                                                // [0xbc4bc1c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/JunoGameNative.JunoEmotionalStateData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoEmotionalStateData
{ 
	EJunoPawnEmotionalState                            EmotionalState;                                             // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              EmotionPercent;                                             // 0x0004   (0x0004)  
	float                                              EmotionSetRate;                                             // 0x0008   (0x0004)  
	int8_t                                             ForceRepCounter;                                            // 0x000C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/JunoGameNative.JunoPawnEmotionalStateMappingFromAwesomeLevel
/// Size: 0x000C (0x000000 - 0x00000C)
struct FJunoPawnEmotionalStateMappingFromAwesomeLevel
{ 
	EJunoPawnEmotionalState                            EmotionalState;                                             // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            NumericalTestValue;                                         // 0x0004   (0x0004)  
	EJunoPawnEmotionalStateMappingTest                 NumericalTestMode;                                          // 0x0008   (0x0004)  
};

/// Class /Script/JunoGameNative.JunoPawnComponent_EmotionalState
/// Size: 0x0090 (0x0000A8 - 0x000138)
class UJunoPawnComponent_EmotionalState : public UFortPawnComponent
{ 
public:
	SDK_UNDEFINED(16,12175) /* FMulticastInlineDelegate */ __um(OnJunoCurrentEmotionalStateChangedDelegate);       // 0x00A8   (0x0010)  
	SDK_UNDEFINED(16,12176) /* FMulticastInlineDelegate */ __um(OnJunoCurrentEmotionalStateStartedChange);         // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,12177) /* FMulticastInlineDelegate */ __um(OnJunoCurrentEmotionChangeFinished);               // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,12178) /* FMulticastInlineDelegate */ __um(OnCheatEmotionIndexChanged);                       // 0x00D8   (0x0010)  
	EJunoPawnEmotionalState                            CurrentEmotionalState;                                      // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00E9   (0x0003)  MISSED
	FJunoEmotionalStateData                            TargetEmotionalState;                                       // 0x00EC   (0x0010)  
	char                                               CheatEmotionIndex;                                          // 0x00FC   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00FD   (0x0003)  MISSED
	TArray<FJunoPawnEmotionalStateMappingFromAwesomeLevel> JunoPawnEmotionalStateMappingFromAwesomeLevel;          // 0x0100   (0x0010)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0110   (0x0008)  MISSED
	float                                              ResetToDefaultEmotionRate;                                  // 0x0118   (0x0004)  
	float                                              TimeToStayAtEmotionInSeconds;                               // 0x011C   (0x0004)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x0120   (0x0008)  MISSED
	FTimerHandle                                       DefaultEmotionHandle;                                       // 0x0128   (0x0008)  
	unsigned char                                      UnknownData04_6[0x8];                                       // 0x0130   (0x0008)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoPawnComponent_EmotionalState.SetEmotionalState
	// void SetEmotionalState(FJunoEmotionalStateData Emotion);                                                              // [0xbc4c8b8] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPawnComponent_EmotionalState.SetCurrentEmotionalState
	// void SetCurrentEmotionalState(EJunoPawnEmotionalState NewEmotion);                                                    // [0xbc4c838] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPawnComponent_EmotionalState.ResetToDefaultEmotionalState
	// void ResetToDefaultEmotionalState();                                                                                  // [0xbc4be04] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPawnComponent_EmotionalState.OnRep_TargetEmotionalState
	// void OnRep_TargetEmotionalState();                                                                                    // [0xbc4bce0] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPawnComponent_EmotionalState.OnRep_CurrentEmotionalState
	// void OnRep_CurrentEmotionalState();                                                                                   // [0xbc4bc74] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPawnComponent_EmotionalState.OnRep_CheatEmotionIndex
	// void OnRep_CheatEmotionIndex();                                                                                       // [0xbc4bc40] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPawnComponent_EmotionalState.HandleJunoAwesomeLevelChanged
	// void HandleJunoAwesomeLevelChanged(FJunoAwesomeLevelChangeData& ChangeData);                                          // [0xbc4b98c] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoPawnComponent_EmotionalState.GetCurrentEmotionalStateValue
	// float GetCurrentEmotionalStateValue();                                                                                // [0xbc4b008] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPawnComponent_EmotionalState.GetCurrentEmotionalState
	// EJunoPawnEmotionalState GetCurrentEmotionalState();                                                                   // [0xbc4aff0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoPawnPhysicsRepulsionComponent
/// Size: 0x0030 (0x0000A0 - 0x0000D0)
class UJunoPawnPhysicsRepulsionComponent : public UActorComponent
{ 
public:
	float                                              PushOutMaxDistance;                                         // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x2C];                                      // 0x00A4   (0x002C)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoPawnPhysicsRepulsionComponent.SetCapsuleMass
	// void SetCapsuleMass(float InBaseForce);                                                                               // [0xbc4c7b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPawnPhysicsRepulsionComponent.HandleMovementModeChanged
	// void HandleMovementModeChanged(TEnumAsByte<EMovementMode> MovementMode, char CustomMode);                             // [0xbc4bae0] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPawnPhysicsRepulsionComponent.HandleMovementBaseChanged
	// void HandleMovementBaseChanged(class UPrimitiveComponent* NewBaseComponent, FName BoneName);                          // [0xbc4ba1c] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPawnPhysicsRepulsionComponent.HandleHeldObjectChanged
	// void HandleHeldObjectChanged(class AActor* HeldObject);                                                               // [0xbc4b910] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPawnPhysicsRepulsionComponent.HandleComponentPhysicsStateChange
	// void HandleComponentPhysicsStateChange(class UPrimitiveComponent* ChangedComponent, EComponentPhysicsStateChange StateChange); // [0xbc4b724] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPawnPhysicsRepulsionComponent.HandleComponentHit
	// void HandleComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& Hit); // [0xbc4b338] Final|Native|Private|HasOutParms|HasDefaults 
	// Function /Script/JunoGameNative.JunoPawnPhysicsRepulsionComponent.GetCapsuleMass
	// float GetCapsuleMass();                                                                                               // [0x6171360] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoPlayerState
/// Size: 0x0028 (0x001888 - 0x0018B0)
class AJunoPlayerState : public AFortPlayerStateAthena
{ 
public:
	FGuid                                              CaveId;                                                     // 0x1888   (0x0010)  
	TArray<FLinearColor>                               PinColorForPlayer;                                          // 0x1898   (0x0010)  
	FGameplayTag                                       GameplayTagPresentWhenTeleporting;                          // 0x18A8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x18AC   (0x0004)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoPlayerState.GetCaveId
	// FGuid GetCaveId();                                                                                                    // [0xbc780d0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoWorldStreamingSourceProviderInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoWorldStreamingSourceProviderInterface : public UInterface
{ 
public:
};

/// Class /Script/JunoGameNative.JunoControllerComponent_StreamingSources
/// Size: 0x0050 (0x000110 - 0x000160)
class UJunoControllerComponent_StreamingSources : public UFortControllerComponent_StreamingSources
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0110   (0x0050)  MISSED
};

/// Class /Script/JunoGameNative.PlayspaceComponent_JunoAIPersistence
/// Size: 0x0120 (0x0000F8 - 0x000218)
class UPlayspaceComponent_JunoAIPersistence : public UFortPlayspaceComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x120];                                     // 0x00F8   (0x0120)  MISSED
};

/// Class /Script/JunoGameNative.PlayspaceComponent_JunoPerformance
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UPlayspaceComponent_JunoPerformance : public UPlayspaceComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A0   (0x0008)  MISSED
};

/// Class /Script/JunoGameNative.PlayspaceComponent_JunoServerExpiration
/// Size: 0x0018 (0x0001B8 - 0x0001D0)
class UPlayspaceComponent_JunoServerExpiration : public UPlayspaceComponent_ServerExpiration
{ 
public:
	bool                                               bUseConfigAlertDataList;                                    // 0x01B8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x01B9   (0x0007)  MISSED
	TArray<FServerExpirationAlertData>                 ConfigAlertDataList;                                        // 0x01C0   (0x0010)  
};

/// Class /Script/JunoGameNative.JunoClusterUnionCustomRepNode
/// Size: 0x0070 (0x000050 - 0x0000C0)
class UJunoClusterUnionCustomRepNode : public UFortReplicationGraphNode_Custom
{ 
public:
	TArray<class AJunoClusterUnionActor*>              AllClusterUnions;                                           // 0x0050   (0x0010)  
	SDK_UNDEFINED(80,12179) /* TSet<AJunoClusterUnionActor*> */ __um(FlushedClusterUnionsWhenIrrelevant);          // 0x0060   (0x0050)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x00B0   (0x0010)  MISSED
};

/// Class /Script/JunoGameNative.JunoAction
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoAction : public UObject
{ 
public:


	/// Functions
	// Function /Script/JunoGameNative.JunoAction.K2_OnExecuteAction
	// void K2_OnExecuteAction(FJunoActionTargetPayload& ActionTargetPayload, class UJunoActionConfig* Config);              // [0x3d1d968] Event|Protected|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/JunoGameNative.JunoAction_SetStaticMesh
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoAction_SetStaticMesh : public UJunoAction
{ 
public:
};

/// Class /Script/JunoGameNative.JunoBuildingActorCountMetric
/// Size: 0x0008 (0x000028 - 0x000030)
class UJunoBuildingActorCountMetric : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class UDataTable*                                  BuildLimitPools;                                            // 0x0028   (0x0008)  
};

/// Class /Script/JunoGameNative.JunoBuildingActorCountMetricComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UJunoBuildingActorCountMetricComponent : public UGameStateComponent
{ 
public:
	class UClass*                                      JunoBuildingMetricClass;                                    // 0x00A0   (0x0008)  
	class UJunoBuildingActorCountMetric*               JunoBuildingMetric;                                         // 0x00A8   (0x0008)  
};

/// Class /Script/JunoGameNative.JunoBuildingActorMetric
/// Size: 0x01D8 (0x000058 - 0x000230)
class UJunoBuildingActorMetric : public USpatialMetricInterface
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0058   (0x0010)  MISSED
	FScalableFloat                                     MinValue;                                                   // 0x0068   (0x0028)  
	FScalableFloat                                     NetworkRelevantActorCountThreshold;                         // 0x0090   (0x0028)  
	FScalableFloat                                     SpatialPrecision;                                           // 0x00B8   (0x0028)  
	SDK_UNDEFINED(80,12180) /* TMap<FJunoTrackedActorKey, FJunoRelevantActorTrackingData> */ __um(ActorCounts);    // 0x00E0   (0x0050)  
	SDK_UNDEFINED(80,12181) /* TSet<FJunoTrackedActor> */ __um(TrackedActors);                                     // 0x0130   (0x0050)  
	TArray<class UClass*>                              TrackedClasses;                                             // 0x0180   (0x0010)  
	SDK_UNDEFINED(80,12182) /* TSet<FJunoTrackedActorRefreshmentOptions> */ __um(PendingRefreshments);             // 0x0190   (0x0050)  
	SDK_UNDEFINED(80,12183) /* TSet<TWeakObjectPtr<AActor*>> */ __um(ActorsPendingAdd);                            // 0x01E0   (0x0050)  
};

/// Class /Script/JunoGameNative.JunoBuildingSpatialMetricComponent
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class UJunoBuildingSpatialMetricComponent : public UGameStateComponent
{ 
public:
	SDK_UNDEFINED(32,12184) /* TWeakObjectPtr<UClass*> */ __um(JunoBuildingMetricClass);                           // 0x00A0   (0x0020)  
	SDK_UNDEFINED(8,12185) /* TWeakObjectPtr<UJunoBuildingActorMetric*> */ __um(JunoBuildingMetric);               // 0x00C0   (0x0008)  
};

/// Class /Script/JunoGameNative.JunoAssetList
/// Size: 0x0010 (0x000028 - 0x000038)
class UJunoAssetList : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	TArray<FSoftObjectPath>                            Assets;                                                     // 0x0028   (0x0010)  
};

/// Class /Script/JunoGameNative.JunoBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.SpawnPersistentActor
	// class AActor* SpawnPersistentActor(class UObject* WorldContextObject, class UClass*& ActorClass, FTransform& SpawnTransform, class APawn* Instigator, class AJunoPersistentPlayspace* Playspace, FGameplayTagQuery PlayspaceTagQuery); // [0xbc7a108] Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.SetGeometryCollectionISMPoolCustomInstanceData
	// void SetGeometryCollectionISMPoolCustomInstanceData(class UGeometryCollectionComponent* GeometryCollectionComponent, int32_t CustomDataIndex, float CustomDataValue); // [0xbc79fd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.JunoForEachActorComponentConstDelegate__DelegateSignature
	// void JunoForEachActorComponentConstDelegate__DelegateSignature(class UActorComponent* Component);                     // [0x3d1d968] Public|Delegate      
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.IsFreshWorld
	// bool IsFreshWorld(class UObject* WorldContextObject);                                                                 // [0xbc79600] Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.IsFirstPlayerSpawn
	// bool IsFirstPlayerSpawn(class AFortPlayerPawn* PlayerPawn);                                                           // [0xbc79580] Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetWorldStartPosition
	// void GetWorldStartPosition(class UObject* WorldContextObject, FVector& Location, bool& bIsReady);                     // [0xbc793a0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetPreviewSmartObjectEntranceLocationsWithValidation
	// bool GetPreviewSmartObjectEntranceLocationsWithValidation(class UObject* WorldContextObject, FTransform& WorldTransform, class USmartObjectDefinition* SmartObjectDefinition, class AActor* SkipActor, FSmartObjectSlotEntranceLocationRequest& Request, TArray<FSmartObjectSlotEntranceLocationResult>& Results); // [0xbc79030] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetPreviewSmartObjectEntranceLocations
	// bool GetPreviewSmartObjectEntranceLocations(FTransform& WorldTransform, class USmartObjectDefinition* SmartObjectDefinition, TArray<FSmartObjectSlotEntranceLocationResult>& Results); // [0xbc78ca4] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetPlayspaceComponentFromPlayspace
	// class UPlayspaceComponent* GetPlayspaceComponentFromPlayspace(class AActor* Actor, class UClass* ComponentClass, class UClass* PlayspaceClass); // [0xbc78b1c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetPlayspaceComponentByInterface
	// class UPlayspaceComponent* GetPlayspaceComponentByInterface(class AActor* Actor, class UClass* InterfaceClass, class UClass* PlayspaceClass); // [0xbc78968] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetPlayerSaveData
	// FJunoPlayerSaveData GetPlayerSaveData(class AController* PlayerController, bool& bIsValid);                           // [0xbc787a0] Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetMergedMeshComponents
	// TArray<UPrimitiveComponent*> GetMergedMeshComponents(class UObject* WorldContextObject);                              // [0xbc7870c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetMapManagerComponent
	// class UJunoMapManagerComponent* GetMapManagerComponent(class UObject* WorldContextObject);                            // [0xbc7868c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetKnownCraftingRecipes
	// void GetKnownCraftingRecipes(class AFortPlayerController* FortPC, class AActor* CraftingObject, TArray<FName>& OutFormulas); // [0xbc783fc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetIsWorldOwner
	// bool GetIsWorldOwner(class AFortPlayerController* PC);                                                                // [0xbc7837c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetIsWorldKeyHolder
	// bool GetIsWorldKeyHolder(class AFortPlayerController* PC);                                                            // [0xbc782fc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetDistanceToWorldStartPosition
	// double GetDistanceToWorldStartPosition(class UObject* WorldContextObject, FVector& Location, bool& bIsReady);         // [0xbc781a4] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetCountOfResourcesInAIResourcesInventory
	// int32_t GetCountOfResourcesInAIResourcesInventory(class AActor* AIActor);                                             // [0xbc780ec] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetBoneIndex
	// int32_t GetBoneIndex(class USkeletalMesh* SkeletalMesh, FName BoneName);                                              // [0xbc77fe0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetBiomeInformationForActor
	// void GetBiomeInformationForActor(class AActor* Actor, FJunoBiomeInfoQueryResult& OutResult);                          // [0xbc77e24] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetBiomeInformationAtLocation
	// void GetBiomeInformationAtLocation(class UObject* WorldContextObject, FVector& Location, FJunoBiomeInfoQueryResult& OutResult); // [0xbc77cc8] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetBiomeForActor
	// void GetBiomeForActor(class AActor* Actor, EJunoBiome& OutResult);                                                    // [0xbc77b18] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetAMSCustomizableObjectInstance
	// class UCustomizableObjectInstance* GetAMSCustomizableObjectInstance(class AActor* Actor);                             // [0xbc779bc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetAMSAnimDataAssetsFromActor
	// bool GetAMSAnimDataAssetsFromActor(class AActor* Actor, FAssembledMeshSchemaData_AnimDataAssets& AnimData);           // [0xbc778ac] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetAMSAnimDataAssets
	// bool GetAMSAnimDataAssets(class AFortPlayerPawn* FortPlayerPawn, FAssembledMeshSchemaData_AnimDataAssets& AnimData);  // [0xbc778ac] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetActorPersistentPlayspace
	// class AJunoPersistentPlayspace* GetActorPersistentPlayspace(class AActor* Actor);                                     // [0xbc77a68] Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.ForEachComponentOfActorClassDefault
	// void ForEachComponentOfActorClassDefault(class UClass*& ActorClass, class UClass*& ComponentClass, FDelegateProperty& Func); // [0xbc77750] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.CostlyFindAIDisplayNameFromUniqueAIIdentifier
	// FText CostlyFindAIDisplayNameFromUniqueAIIdentifier(class UObject* WorldContextObject, FGameplayTag& UniqueAIIdentifier); // [0xbc7763c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.BreakHitResultThreadSafe
	// void BreakHitResultThreadSafe(FHitResult& Hit, bool& bBlockingHit, bool& bInitialOverlap, float& Time, float& Distance, FVector& Location, FVector& ImpactPoint, FVector& Normal, FVector& ImpactNormal, class UPhysicalMaterial*& PhysMat, class AActor*& HitActor, class UPrimitiveComponent*& HitComponent, FName& HitBoneName, FName& BoneName, int32_t& HitItem, int32_t& ElementIndex, int32_t& FaceIndex, FVector& TraceStart, FVector& TraceEnd); // [0xbc76e44] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/JunoGameNative.JunoCheatManager
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoCheatManager : public UChildCheatManager
{ 
public:


	/// Functions
	// Function /Script/JunoGameNative.JunoCheatManager.JunoUpdateWorldLastAccessTime
	// void JunoUpdateWorldLastAccessTime(FString JunoWorldId);                                                              // [0x8c2fc5c] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoTurnOnWorldSetting
	// void JunoTurnOnWorldSetting(FName WorldSetting);                                                                      // [0x86debf4] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoTurnOffWorldSetting
	// void JunoTurnOffWorldSetting(FName WorldSetting);                                                                     // [0x86debf4] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoTransitionWeatherNow
	// void JunoTransitionWeatherNow(FName OptionalLocation);                                                                // [0x86debf4] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoToggleKnowledgeFiltering
	// void JunoToggleKnowledgeFiltering();                                                                                  // [0x3097b14] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoToggleKnowledgeDebugMenu
	// void JunoToggleKnowledgeDebugMenu();                                                                                  // [0x3097b14] Final|BlueprintAuthorityOnly|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoToggleFreeCrafting
	// void JunoToggleFreeCrafting();                                                                                        // [0x3097b14] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoToggleBlockUnownedMCPRecipesKnowledgeWhenUnfiltered
	// void JunoToggleBlockUnownedMCPRecipesKnowledgeWhenUnfiltered();                                                       // [0x3097b14] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoTeleportToPersistenceLocationOfInterest
	// void JunoTeleportToPersistenceLocationOfInterest();                                                                   // [0x3097b14] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoShowDualLocalPlayerInventory
	// void JunoShowDualLocalPlayerInventory();                                                                              // [0x3097b14] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoSetEmotion
	// void JunoSetEmotion(int32_t EmotionIndex);                                                                            // [0x6470f8c] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoSavePersistenceDataCsvReport
	// void JunoSavePersistenceDataCsvReport();                                                                              // [0x3097b14] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoRevealRecipesOfCategory
	// void JunoRevealRecipesOfCategory(FName CraftingObjectTag, FName CategoryTag, FName SubCategoryTag);                   // [0xbc79ef0] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoRevealRecipe
	// void JunoRevealRecipe(FName RecipeName);                                                                              // [0x86debf4] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoRevealBuildingTestRecipes
	// void JunoRevealBuildingTestRecipes();                                                                                 // [0x3097b14] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoResaveAllPersistentPlayspacesActorsAroundPlayer
	// void JunoResaveAllPersistentPlayspacesActorsAroundPlayer(float Max2DDistance);                                        // [0x621acf8] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoResaveAllPersistentPlayspacesActors
	// void JunoResaveAllPersistentPlayspacesActors();                                                                       // [0x3097b14] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoProfiler_Item
	// void JunoProfiler_Item();                                                                                             // [0x3097b14] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoProfiler_Creature
	// void JunoProfiler_Creature();                                                                                         // [0x3097b14] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoProfiler_BuildingSuburb
	// void JunoProfiler_BuildingSuburb(int32_t NumBuildings);                                                               // [0x6470f8c] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoProfiler_BuildingPropBundle
	// void JunoProfiler_BuildingPropBundle(FString PropBundleTemplateId);                                                   // [0x6650f60] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoProfiler_BuildingJunkyard
	// void JunoProfiler_BuildingJunkyard(int32_t NumBuildings, bool bSpawnRandom);                                          // [0x9616484] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoProfiler_BuildingActor
	// void JunoProfiler_BuildingActor();                                                                                    // [0x3097b14] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoProcessPlayerProgression
	// void JunoProcessPlayerProgression();                                                                                  // [0x3097b14] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoPrintWorldSettings
	// void JunoPrintWorldSettings();                                                                                        // [0x3097b14] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoPrintPersistenceDataReport
	// void JunoPrintPersistenceDataReport(bool bShowTemplateData, bool bShowActorInstanceData, bool bShowJunoUpdateActions, bool bShowJunoDeleteActions); // [0xbc79dd0] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoPrintConnectivityGraphSummary
	// void JunoPrintConnectivityGraphSummary();                                                                             // [0x3097b14] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoPrintAreaAwesomeLevelInfo
	// void JunoPrintAreaAwesomeLevelInfo();                                                                                 // [0x3097b14] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoLogPersistenceDebugInfo
	// void JunoLogPersistenceDebugInfo();                                                                                   // [0x3097b14] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoListWorlds
	// void JunoListWorlds();                                                                                                // [0x3097b14] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoGiveWeapon
	// void JunoGiveWeapon(FString WeaponPath);                                                                              // [0x8c2fc5c] Final|Exec|Native|Private|Const 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoForceWeatherState
	// void JunoForceWeatherState(FName NewWeatherType, FName OptionalLocation);                                             // [0x6656a6c] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoForcePlayerTemperature
	// void JunoForcePlayerTemperature(FName NewTemperatureTag);                                                             // [0x86debf4] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoEnableSpawnedActorPersistentPlayspaceTracking
	// void JunoEnableSpawnedActorPersistentPlayspaceTracking(FName ActorName);                                              // [0x86debf4] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoEnableSandbox
	// void JunoEnableSandbox();                                                                                             // [0x3097b14] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoEnableModeratorMode
	// void JunoEnableModeratorMode();                                                                                       // [0x3097b14] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoEnableFreeBuild
	// void JunoEnableFreeBuild();                                                                                           // [0x3097b14] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoDumpWorldPersistentContents
	// void JunoDumpWorldPersistentContents();                                                                               // [0x3097b14] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoDumpAllDeltasAssetReferences
	// void JunoDumpAllDeltasAssetReferences();                                                                              // [0x3097b14] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoDisableSandbox
	// void JunoDisableSandbox();                                                                                            // [0x3097b14] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoDisableModeratorMode
	// void JunoDisableModeratorMode();                                                                                      // [0x3097b14] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoDisableFreeBuild
	// void JunoDisableFreeBuild();                                                                                          // [0x3097b14] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoDestroyCurrentVillage
	// void JunoDestroyCurrentVillage();                                                                                     // [0x3097b14] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoDestroyAllSupportStructures
	// void JunoDestroyAllSupportStructures();                                                                               // [0x3097b14] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoDeleteWorld
	// void JunoDeleteWorld(FString JunoWorldId);                                                                            // [0x8c2fc5c] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoDeleteAllWorlds
	// void JunoDeleteAllWorlds();                                                                                           // [0x3097b14] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoCreateNewWorld
	// void JunoCreateNewWorld(FString Title, int32_t AdventureSeed, FString WorldDevMetadata);                              // [0xbc79680] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoCreateCurrentWorldCheckpoint
	// void JunoCreateCurrentWorldCheckpoint();                                                                              // [0x3097b14] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoCompleteGuidedBuildToStage
	// void JunoCompleteGuidedBuildToStage(int32_t SectionIndex, int32_t StageIndex);                                        // [0x6177060] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoCompleteGuidedBuild
	// void JunoCompleteGuidedBuild();                                                                                       // [0x3097b14] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoCompleteCurrentGuidedBuildStage
	// void JunoCompleteCurrentGuidedBuildStage();                                                                           // [0x3097b14] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoClearKnowledgeCloudSave
	// void JunoClearKnowledgeCloudSave();                                                                                   // [0x3097b14] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoClearFOW
	// void JunoClearFOW(bool bForCurrentTile);                                                                              // [0x5dd0bf8] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoClearClientFOW
	// void JunoClearClientFOW(bool bForCurrentTile);                                                                        // [0x5dd0bf8] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoCheckInWorldSaveDataAndExitPIE
	// void JunoCheckInWorldSaveDataAndExitPIE();                                                                            // [0x3097b14] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoApplyDamageToRadius
	// void JunoApplyDamageToRadius(float Radius, float DamageToApply);                                                      // [0x80e56e0] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoAdjustAreaAwesomePoints
	// void JunoAdjustAreaAwesomePoints(int32_t AwesomePointsDelta);                                                         // [0x6470f8c] Final|BlueprintAuthorityOnly|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoAddEssence
	// void JunoAddEssence(FString EssencePath);                                                                             // [0x8c2fc5c] Final|Exec|Native|Private|Const 
};

/// Class /Script/JunoGameNative.JunoGlobals
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoGlobals : public UObject
{ 
public:
};

/// Struct /Script/JunoGameNative.SavedWeather
/// Size: 0x0090 (0x000000 - 0x000090)
struct FSavedWeather
{ 
	FJunoWeatherLocation                               Location;                                                   // 0x0000   (0x0002)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0002   (0x0006)  MISSED
	int64_t                                            EndUnixTime;                                                // 0x0008   (0x0008)  
	FJunoWeatherPhase                                  CurrentPhase;                                               // 0x0010   (0x0038)  
	FJunoWeatherPhase                                  NextPhase;                                                  // 0x0048   (0x0038)  
	TArray<FJunoWeatherPhase>                          NextPhaseQueue;                                             // 0x0080   (0x0010)  
};

/// Struct /Script/JunoGameNative.JunoWeatherSaveData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoWeatherSaveData
{ 
	TArray<FSavedWeather>                              SavedWeathers;                                              // 0x0000   (0x0010)  
};

/// Class /Script/JunoGameNative.JunoWeatherPersistenceFeatureData
/// Size: 0x0018 (0x000040 - 0x000058)
class UJunoWeatherPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0040   (0x0008)  MISSED
	FJunoWeatherSaveData                               WeatherSaveData;                                            // 0x0048   (0x0010)  
};

/// Class /Script/JunoGameNative.JunoWeatherPersistenceFeatureDataActor
/// Size: 0x0010 (0x0002D0 - 0x0002E0)
class AJunoWeatherPersistenceFeatureDataActor : public AJunoPersistenceFeatureDataActor
{ 
public:
	TArray<FSavedWeather>                              SavedWeathers;                                              // 0x02D0   (0x0010)  
};

/// Class /Script/JunoGameNative.JunoWeatherPersistenceFeatureDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoWeatherPersistenceFeatureDataInterface : public UInterface
{ 
public:
};

/// Class /Script/JunoGameNative.JunoWorldConditionWeatherState
/// Size: 0x0020 (0x000028 - 0x000048)
class UJunoWorldConditionWeatherState : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x48];                                      // 0x0000   (0x0048)  MISSED


	/// Functions
	// Function /Script/JunoGameNative.JunoWorldConditionWeatherState.HandleWeatherChanged
	// void HandleWeatherChanged(FJunoEvent_WeatherPhaseChanged& Payload);                                                   // [0xbc794f4] Final|Native|Private|HasOutParms 
};

/// Class /Script/JunoGameNative.BlockOctreeManager
/// Size: 0x0168 (0x000290 - 0x0003F8)
class ABlockOctreeManager : public AInfo
{ 
public:
	int32_t                                            RelevancyRadius;                                            // 0x0290   (0x0004)  
	int32_t                                            MaxISMCsToPopulateAFrame;                                   // 0x0294   (0x0004)  
	bool                                               bRenderAllBricks;                                           // 0x0298   (0x0001)  
	unsigned char                                      UnknownData00_5[0xA7];                                      // 0x0299   (0x00A7)  MISSED
	SDK_UNDEFINED(80,12186) /* TMap<int32_t, UInstancedStaticMeshComponent*> */ __um(CellIdToISMC);                // 0x0340   (0x0050)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x0390   (0x0010)  MISSED
	class UInstancedStaticMeshComponent*               ISMC;                                                       // 0x03A0   (0x0008)  
	TArray<class UInstancedStaticMeshComponent*>       ISMCFreeList;                                               // 0x03A8   (0x0010)  
	unsigned char                                      UnknownData02_5[0x10];                                      // 0x03B8   (0x0010)  MISSED
	TArray<FVector>                                    Positions;                                                  // 0x03C8   (0x0010)  
	TArray<FLinearColor>                               Colors;                                                     // 0x03D8   (0x0010)  
	TArray<FLinearColor>                               RandomColors;                                               // 0x03E8   (0x0010)  


	/// Functions
	// Function /Script/JunoGameNative.BlockOctreeManager.Towers
	// void Towers(int32_t Rows, int32_t Cols);                                                                              // [0xbc80048] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.StressISMManager
/// Size: 0x0060 (0x000290 - 0x0002F0)
class AStressISMManager : public AInfo
{ 
public:
	bool                                               bPushUpdatesEveryTick;                                      // 0x0290   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0291   (0x0007)  MISSED
	class UInstancedStaticMeshComponent*               ISMC;                                                       // 0x0298   (0x0008)  
	TArray<class UInstancedStaticMeshComponent*>       ChildISMC;                                                  // 0x02A0   (0x0010)  
	TArray<FVector>                                    Positions;                                                  // 0x02B0   (0x0010)  
	TArray<FRotator>                                   Rotations;                                                  // 0x02C0   (0x0010)  
	TArray<FLinearColor>                               Colors;                                                     // 0x02D0   (0x0010)  
	TArray<FLinearColor>                               RandomColors;                                               // 0x02E0   (0x0010)  


	/// Functions
	// Function /Script/JunoGameNative.StressISMManager.Towers
	// void Towers(int32_t Rows, int32_t Cols, int32_t Height);                                                              // [0xbc80108] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.StressISMManager.SetNumChildISMC
	// void SetNumChildISMC(int32_t Num);                                                                                    // [0xbc7ffc8] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.StressISMManager.PushUpdatesToISMC
	// void PushUpdatesToISMC();                                                                                             // [0xbc7ffb4] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/JunoGameNative.SoundBreakEvent
/// Size: 0x0040 (0x000000 - 0x000040)
struct FSoundBreakEvent
{ 
	FGuid                                              UniqueID;                                                   // 0x0000   (0x0010)  
	FVector                                            Location;                                                   // 0x0010   (0x0018)  
	int32_t                                            BreakEventNum;                                              // 0x0028   (0x0004)  
	float                                              AccumulatedMass;                                            // 0x002C   (0x0004)  
	class UPhysicalMaterial*                           PhysMaterial;                                               // 0x0030   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Struct /Script/JunoGameNative.SoundCollisionEvent
/// Size: 0x0058 (0x000000 - 0x000058)
struct FSoundCollisionEvent
{ 
	FGuid                                              UniqueID;                                                   // 0x0000   (0x0010)  
	FVector                                            Location;                                                   // 0x0010   (0x0018)  
	int32_t                                            CollisionEventNum;                                          // 0x0028   (0x0004)  
	float                                              AccumulatedMass;                                            // 0x002C   (0x0004)  
	FVector                                            DeltaVelocity;                                              // 0x0030   (0x0018)  
	class UPhysicalMaterial*                           PhysMaterial;                                               // 0x0048   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0050   (0x0008)  MISSED
};

/// Struct /Script/JunoGameNative.JunoEvent_EnterBuildModePreview
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoEvent_EnterBuildModePreview
{ 
	class AFortPlayerController*                       SourceController;                                           // 0x0000   (0x0008)  
	class AJunoBuilderTool*                            BuilderTool;                                                // 0x0008   (0x0008)  
};

/// Struct /Script/JunoGameNative.JunoEvent_ExitBuildModePreview
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoEvent_ExitBuildModePreview
{ 
	class AFortPlayerController*                       SourceController;                                           // 0x0000   (0x0008)  
	class AJunoBuilderTool*                            BuilderTool;                                                // 0x0008   (0x0008)  
};

/// Struct /Script/JunoGameNative.JunoTemperatureChangedEvent
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoTemperatureChangedEvent
{ 
	class AActor*                                      Actor;                                                      // 0x0000   (0x0008)  
	FGameplayTag                                       OldTemperature;                                             // 0x0008   (0x0004)  
	FGameplayTag                                       NewTemperature;                                             // 0x000C   (0x0004)  
};

/// Struct /Script/JunoGameNative.JunoTemperatureRangesChangedEvent
/// Size: 0x0018 (0x000000 - 0x000018)
struct FJunoTemperatureRangesChangedEvent
{ 
	class AActor*                                      Actor;                                                      // 0x0000   (0x0008)  
	TArray<FTemperatureRange>                          NewTemperatureRanges;                                       // 0x0008   (0x0010)  
};

/// Struct /Script/JunoGameNative.JunoEvent_TemperatureChanged
/// Size: 0x000C (0x000000 - 0x00000C)
struct FJunoEvent_TemperatureChanged
{ 
	FJunoWeatherLocation                               Location;                                                   // 0x0000   (0x0002)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	FGameplayTag                                       NewTemperature;                                             // 0x0004   (0x0004)  
	float                                              NewFloatTemperature;                                        // 0x0008   (0x0004)  
};

/// Struct /Script/JunoGameNative.JunoEvent_WeatherPhaseChanged
/// Size: 0x0078 (0x000000 - 0x000078)
struct FJunoEvent_WeatherPhaseChanged
{ 
	FJunoWeatherLocation                               Location;                                                   // 0x0000   (0x0002)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0002   (0x0006)  MISSED
	FJunoWeatherPhase                                  NewWeatherPhase;                                            // 0x0008   (0x0038)  
	FJunoWeatherPhase                                  NextWeatherPhase;                                           // 0x0040   (0x0038)  
};

/// Struct /Script/JunoGameNative.JunoCampAwesomeStatsData
/// Size: 0x0014 (0x000000 - 0x000014)
struct FJunoCampAwesomeStatsData
{ 
	int32_t                                            CurrentAwesomePoints;                                       // 0x0000   (0x0004)  
	int32_t                                            AwesomeLevelFloor;                                          // 0x0004   (0x0004)  
	int32_t                                            AwesomeLevel;                                               // 0x0008   (0x0004)  
	int32_t                                            MaxAwesomeLevel;                                            // 0x000C   (0x0004)  
	bool                                               bIsFromPersistence;                                         // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
};

/// Struct /Script/JunoGameNative.JunoMoodReactionPayload
/// Size: 0x000C (0x000000 - 0x00000C)
struct FJunoMoodReactionPayload
{ 
	FGameplayTag                                       MoodReactionTag;                                            // 0x0000   (0x0004)  
	FGameplayTag                                       SoundLibraryTag;                                            // 0x0004   (0x0004)  
	FGameplayCueTag                                    GameplayCueTag;                                             // 0x0008   (0x0004)  
};

/// Struct /Script/JunoGameNative.JunoWeatherLocationChangedEvent
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoWeatherLocationChangedEvent
{ 
	class AActor*                                      Actor;                                                      // 0x0000   (0x0008)  
	FJunoWeatherLocation                               OldLocation;                                                // 0x0008   (0x0002)  
	FJunoWeatherLocation                               NewLocation;                                                // 0x000A   (0x0002)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/JunoGameNative.GuidedBuildingMessageBase
/// Size: 0x0008 (0x000000 - 0x000008)
struct FGuidedBuildingMessageBase
{ 
	SDK_UNDEFINED(8,12187) /* TWeakObjectPtr<AJunoGuidedBuildingActor*> */ __um(GuidedBuildingActor);              // 0x0000   (0x0008)  
};

/// Struct /Script/JunoGameNative.GuidedBuildingUpdate
/// Size: 0x0038 (0x000008 - 0x000040)
struct FGuidedBuildingUpdate : FGuidedBuildingMessageBase
{ 
	FJunoStageKey                                      StageKey;                                                   // 0x0008   (0x0008)  
	FJunoStageKey                                      CurrentStageKey;                                            // 0x0010   (0x0008)  
	int32_t                                            TotalNumberOfStagesInSection;                               // 0x0018   (0x0004)  
	int32_t                                            TotalNumberOfSections;                                      // 0x001C   (0x0004)  
	int32_t                                            CurrentStageInSet;                                          // 0x0020   (0x0004)  
	int32_t                                            TotalNumberOfStagesInSet;                                   // 0x0024   (0x0004)  
	int32_t                                            CurrentNumberOfSnapsInStage;                                // 0x0028   (0x0004)  
	int32_t                                            TotalNumberOfSnapsInStage;                                  // 0x002C   (0x0004)  
	int32_t                                            CurrentNumberOfSnapsInSection;                              // 0x0030   (0x0004)  
	int32_t                                            TotalNumberOfSnapsInSection;                                // 0x0034   (0x0004)  
	int32_t                                            CurrentNumberOfSnapsInSet;                                  // 0x0038   (0x0004)  
	int32_t                                            TotalNumberOfSnapsInSet;                                    // 0x003C   (0x0004)  
};

/// Struct /Script/JunoGameNative.AssembledMeshSchemaData_AnimDataAssets
/// Size: 0x004F (0x000001 - 0x000050)
struct FAssembledMeshSchemaData_AnimDataAssets : FAssembledMeshSchemaData
{ 
	SDK_UNDEFINED(80,12188) /* TMap<FName, UPrimaryDataAsset*> */ __um(DataAssetMap);                              // 0x0000   (0x0050)  
};

/// Struct /Script/JunoGameNative.JunoBiomeInfoQueryResult
/// Size: 0x0028 (0x000000 - 0x000028)
struct FJunoBiomeInfoQueryResult
{ 
	EJunoBiome                                         PrimaryBiome;                                               // 0x0000   (0x0001)  
	EJunoBiome                                         SecondaryBiome;                                             // 0x0001   (0x0001)  
	EJunoBiomeHabitat                                  PrimaryHabitat;                                             // 0x0002   (0x0001)  
	EJunoBiomeHabitat                                  SecondaryHabitat;                                           // 0x0003   (0x0001)  
	EJunoCaveType                                      CaveType;                                                   // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	float                                              BiomeMix;                                                   // 0x0008   (0x0004)  
	float                                              HabitatMix;                                                 // 0x000C   (0x0004)  
	bool                                               bIsWater;                                                   // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              WaterDepth;                                                 // 0x0014   (0x0004)  
	float                                              WaterSurfaceHeight;                                         // 0x0018   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	class AWaterBody*                                  WaterBody;                                                  // 0x0020   (0x0008)  
};

/// Struct /Script/JunoGameNative.JunoPlayerStats
/// Size: 0x0008 (0x000000 - 0x000008)
struct FJunoPlayerStats
{ 
	float                                              Health;                                                     // 0x0000   (0x0004)  
	float                                              Hunger;                                                     // 0x0004   (0x0004)  
};

/// Struct /Script/JunoGameNative.JunoPlayerCheckpoint
/// Size: 0x0038 (0x000000 - 0x000038)
struct FJunoPlayerCheckpoint
{ 
	FGuid                                              CheckpointGUID;                                             // 0x0000   (0x0010)  
	class AActor*                                      CheckpointActor;                                            // 0x0010   (0x0008)  
	FVector                                            CheckpointLocation;                                         // 0x0018   (0x0018)  
	bool                                               bHasCheckpointActor;                                        // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/JunoGameNative.JunoPlayerSaveData
/// Size: 0x00E8 (0x000000 - 0x0000E8)
struct FJunoPlayerSaveData
{ 
	FVector                                            SpawnPosition;                                              // 0x0000   (0x0018)  
	FVector                                            OriginalSpawnPosition;                                      // 0x0018   (0x0018)  
	FRotator                                           Rotation;                                                   // 0x0030   (0x0018)  
	FJunoInventoryHandle                               InventoryHandle;                                            // 0x0048   (0x0024)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x006C   (0x0004)  MISSED
	TArray<FGameplayTag>                               CompletedFirstTimeConversationNPCIdentifiers;               // 0x0070   (0x0010)  
	int32_t                                            WorldVisitCount;                                            // 0x0080   (0x0004)  
	FJunoPlayerStats                                   PlayerStats;                                                // 0x0084   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x008C   (0x0004)  MISSED
	FJunoPlayerCheckpoint                              CheckpointInfo;                                             // 0x0090   (0x0038)  
	int32_t                                            CampCreatedCount;                                           // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x00CC   (0x0004)  MISSED
	FVector                                            LastCaveTeleporterLocation;                                 // 0x00D0   (0x0018)  
};

/// Struct /Script/JunoGameNative.JunoItemTransferRequest
/// Size: 0x00B8 (0x000000 - 0x0000B8)
struct FJunoItemTransferRequest
{ 
	FJunoItemSlot                                      SourceItemSlot;                                             // 0x0000   (0x0050)  
	FJunoItemSlot                                      DestinationItemSlot;                                        // 0x0050   (0x0050)  
	class UJunoInventoryComponent*                     SourceInventoryComponent;                                   // 0x00A0   (0x0008)  
	class UJunoInventoryComponent*                     DestinationInventoryComponent;                              // 0x00A8   (0x0008)  
	int32_t                                            Count;                                                      // 0x00B0   (0x0004)  
	bool                                               bTopOffExistingStacks;                                      // 0x00B4   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00B5   (0x0003)  MISSED
};

/// Struct /Script/JunoGameNative.JunoTakeItemRequest
/// Size: 0x0078 (0x000000 - 0x000078)
struct FJunoTakeItemRequest
{ 
	FJunoItemSlot                                      SourceItemSlot;                                             // 0x0000   (0x0050)  
	class UJunoInventoryComponent*                     SourceInventoryComponent;                                   // 0x0050   (0x0008)  
	class UJunoInventoryComponent*                     DestinationInventoryComponent;                              // 0x0058   (0x0008)  
	int32_t                                            Count;                                                      // 0x0060   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0064   (0x0004)  MISSED
	TArray<FGameplayTag>                               PreferredDestinationGroupOrder;                             // 0x0068   (0x0010)  
};

/// Struct /Script/JunoGameNative.JunoItemSlotGroup
/// Size: 0x0018 (0x000000 - 0x000018)
struct FJunoItemSlotGroup
{ 
	FGameplayTag                                       GroupType;                                                  // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FJunoItemSlot>                              SlotList;                                                   // 0x0008   (0x0010)  
};

/// Struct /Script/JunoGameNative.JunoEvent_PlacementData
/// Size: 0x0001 (0x000000 - 0x000001)
struct FJunoEvent_PlacementData
{ 
	bool                                               bQuickBuild;                                                // 0x0000   (0x0001)  
};

/// Struct /Script/JunoGameNative.JunoEvent_PlacementStarted
/// Size: 0x0001 (0x000000 - 0x000001)
struct FJunoEvent_PlacementStarted
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/JunoGameNative.JunoEvent_BuildingExited
/// Size: 0x0001 (0x000000 - 0x000001)
struct FJunoEvent_BuildingExited
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/JunoGameNative.JunoEvent_BuildingPrebuild
/// Size: 0x0001 (0x000000 - 0x000001)
struct FJunoEvent_BuildingPrebuild
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/JunoGameNative.JunoEvent_QuickbuildRecipeChanged
/// Size: 0x0001 (0x000000 - 0x000001)
struct FJunoEvent_QuickbuildRecipeChanged
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/JunoGameNative.JunoEvent_QuickBuildSelectionData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FJunoEvent_QuickBuildSelectionData
{ 
	class UJunoQuickBuildSelectionData*                QuickBuildSelectionData;                                    // 0x0000   (0x0008)  
};

/// Struct /Script/JunoGameNative.JunoEvent_QuickBuildSelectionResult
/// Size: 0x0004 (0x000000 - 0x000004)
struct FJunoEvent_QuickBuildSelectionResult
{ 
	FName                                              SelectedRecipe;                                             // 0x0000   (0x0004)  
};

/// Struct /Script/JunoGameNative.BuildingRecipeListItemSelected
/// Size: 0x0008 (0x000000 - 0x000008)
struct FBuildingRecipeListItemSelected
{ 
	FName                                              RecipeName;                                                 // 0x0000   (0x0004)  
	bool                                               bCanCraft;                                                  // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Struct /Script/JunoGameNative.JunoEvent_MCPItemPlacedInNewWorld
/// Size: 0x0008 (0x000000 - 0x000008)
struct FJunoEvent_MCPItemPlacedInNewWorld
{ 
	int32_t                                            RemainingWorlds;                                            // 0x0000   (0x0004)  
	int32_t                                            TotalAllowedWorlds;                                         // 0x0004   (0x0004)  
};

/// Struct /Script/JunoGameNative.JunoEvent_InputMessage
/// Size: 0x0008 (0x000000 - 0x000008)
struct FJunoEvent_InputMessage
{ 
	class AFortPlayerController*                       SourceController;                                           // 0x0000   (0x0008)  
};

/// Struct /Script/JunoGameNative.JunoEvent_OpenHudMessage
/// Size: 0x0008 (0x000000 - 0x000008)
struct FJunoEvent_OpenHudMessage
{ 
	class AFortPlayerController*                       SourceController;                                           // 0x0000   (0x0008)  
};

/// Struct /Script/JunoGameNative.JunoEvent_CloseHudMessage
/// Size: 0x0008 (0x000000 - 0x000008)
struct FJunoEvent_CloseHudMessage
{ 
	class AFortPlayerController*                       SourceController;                                           // 0x0000   (0x0008)  
};

/// Struct /Script/JunoGameNative.JunoEvent_PrimaryContentPushedMessage
/// Size: 0x0001 (0x000000 - 0x000001)
struct FJunoEvent_PrimaryContentPushedMessage
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/JunoGameNative.JunoEvent_PrimaryContentPoppedMessage
/// Size: 0x0001 (0x000000 - 0x000001)
struct FJunoEvent_PrimaryContentPoppedMessage
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/JunoGameNative.JunoEvent_OpenBuildingMenuMessage
/// Size: 0x0008 (0x000000 - 0x000008)
struct FJunoEvent_OpenBuildingMenuMessage
{ 
	class AFortPlayerController*                       SourceController;                                           // 0x0000   (0x0008)  
};

/// Struct /Script/JunoGameNative.JunoEvent_OpenMapMenuMessage
/// Size: 0x0008 (0x000000 - 0x000008)
struct FJunoEvent_OpenMapMenuMessage
{ 
	class AFortPlayerController*                       SourceController;                                           // 0x0000   (0x0008)  
};

/// Struct /Script/JunoGameNative.JunoEvent_OpenInventoryMenuMessage
/// Size: 0x0008 (0x000000 - 0x000008)
struct FJunoEvent_OpenInventoryMenuMessage
{ 
	class AFortPlayerController*                       SourceController;                                           // 0x0000   (0x0008)  
};

/// Struct /Script/JunoGameNative.JunoEvent_OpenShopMenuMessage
/// Size: 0x0001 (0x000000 - 0x000001)
struct FJunoEvent_OpenShopMenuMessage
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/JunoGameNative.JunoEvent_CloseShopMenuMessage
/// Size: 0x0001 (0x000000 - 0x000001)
struct FJunoEvent_CloseShopMenuMessage
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/JunoGameNative.JunoEvent_OpenEngagementMenuMessage
/// Size: 0x0001 (0x000000 - 0x000001)
struct FJunoEvent_OpenEngagementMenuMessage
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/JunoGameNative.JunoEvent_OpenBedAssignmentMenuMessage
/// Size: 0x0008 (0x000000 - 0x000008)
struct FJunoEvent_OpenBedAssignmentMenuMessage
{ 
	class AActor*                                      BedActor;                                                   // 0x0000   (0x0008)  
};

/// Struct /Script/JunoGameNative.JunoEvent_OpenEscapeMenuMessage
/// Size: 0x0001 (0x000000 - 0x000001)
struct FJunoEvent_OpenEscapeMenuMessage
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/JunoGameNative.JunoEvent_InventoryItemExecuted
/// Size: 0x0008 (0x000000 - 0x000008)
struct FJunoEvent_InventoryItemExecuted
{ 
	class UFortItem*                                   ItemExecuted;                                               // 0x0000   (0x0008)  
};

/// Struct /Script/JunoGameNative.JunoEvent_InventoryItemSelected
/// Size: 0x001C (0x000000 - 0x00001C)
struct FJunoEvent_InventoryItemSelected
{ 
	FGuid                                              ItemSelected;                                               // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0010   (0x000C)  MISSED
};

/// Struct /Script/JunoGameNative.JunoEvent_InventoryMenuOpen
/// Size: 0x0008 (0x000000 - 0x000008)
struct FJunoEvent_InventoryMenuOpen
{ 
	class AActor*                                      InventoryObject;                                            // 0x0000   (0x0008)  
};

/// Struct /Script/JunoGameNative.JunoEvent_InventoryMenuClose
/// Size: 0x0008 (0x000000 - 0x000008)
struct FJunoEvent_InventoryMenuClose
{ 
	class AActor*                                      InventoryObject;                                            // 0x0000   (0x0008)  
};

/// Struct /Script/JunoGameNative.JunoEvent_EmptyHands
/// Size: 0x000C (0x000000 - 0x00000C)
struct FJunoEvent_EmptyHands
{ 
	unsigned char                                      UnknownData00_2[0xC];                                       // 0x0000   (0x000C)  MISSED
};

/// Struct /Script/JunoGameNative.JunoEvent_FreeBuildItemSpawned
/// Size: 0x0008 (0x000000 - 0x000008)
struct FJunoEvent_FreeBuildItemSpawned
{ 
	class UFortItemDefinition*                         SpawnedItemDefinition;                                      // 0x0000   (0x0008)  
};

/// Struct /Script/JunoGameNative.JunoAccountItemDefinitionOverride
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoAccountItemDefinitionOverride
{ 
	class UFortAccountItemDefinition*                  OverridenAccountItemDefinition;                             // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0008   (0x0008)  MISSED
};

/// Struct /Script/JunoGameNative.JunoAccountItemConversionRow
/// Size: 0x0080 (0x000008 - 0x000088)
struct FJunoAccountItemConversionRow : FTableRowBase
{ 
	bool                                               bEnabled;                                                   // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	FGameplayTagContainer                              GameplayTagsToAdd;                                          // 0x0010   (0x0020)  
	bool                                               bOverrideFrontendTransform;                                 // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              FrontendPreviewScale;                                       // 0x0034   (0x0004)  
	FVector                                            FrontendPreviewPivotOffset;                                 // 0x0038   (0x0018)  
	FRotator                                           FrontendPreviewInitialRotation;                             // 0x0050   (0x0018)  
	SDK_UNDEFINED(32,12189) /* TWeakObjectPtr<UClass*> */ __um(PreviewActorClass);                                 // 0x0068   (0x0020)  
};

/// Struct /Script/JunoGameNative.JunoEmoteConversionRow
/// Size: 0x00C8 (0x000088 - 0x000150)
struct FJunoEmoteConversionRow : FJunoAccountItemConversionRow
{ 
	SDK_UNDEFINED(32,12190) /* TWeakObjectPtr<UAnimMontage*> */ __um(Animation);                                   // 0x0088   (0x0020)  
	SDK_UNDEFINED(32,12191) /* TWeakObjectPtr<UAnimMontage*> */ __um(AnimationFemaleOverride);                     // 0x00A8   (0x0020)  
	TArray<FFortEmoteMapping>                          AnimationOverrides;                                         // 0x00C8   (0x0010)  
	SDK_UNDEFINED(32,12192) /* TWeakObjectPtr<UAnimMontage*> */ __um(FrontEndAnimation);                           // 0x00D8   (0x0020)  
	SDK_UNDEFINED(32,12193) /* TWeakObjectPtr<UAnimMontage*> */ __um(FrontEndAnimationFemaleOverride);             // 0x00F8   (0x0020)  
	TArray<FFortEmoteMapping>                          FrontEndAnimationOverrides;                                 // 0x0118   (0x0010)  
	FVector                                            GroupEmotePositionOffset;                                   // 0x0128   (0x0018)  
	float                                              GroupEmotePositionOffsetTolerance;                          // 0x0140   (0x0004)  
	float                                              GroupEmoteFollowDistance;                                   // 0x0144   (0x0004)  
	float                                              WalkForwardSpeed;                                           // 0x0148   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x014C   (0x0004)  MISSED
};

/// Struct /Script/JunoGameNative.JunoCharacterConversionRow
/// Size: 0x0048 (0x000088 - 0x0000D0)
struct FJunoCharacterConversionRow : FJunoAccountItemConversionRow
{ 
	SDK_UNDEFINED(32,12194) /* TWeakObjectPtr<UAssembledMeshSchema*> */ __um(AssembledMeshSchema);                 // 0x0088   (0x0020)  
	SDK_UNDEFINED(32,12195) /* TWeakObjectPtr<UAnimMontage*> */ __um(FrontendAnimMontageIdleOverride);             // 0x00A8   (0x0020)  
	float                                              PreviewPawnScale;                                           // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00CC   (0x0004)  MISSED
};

/// Struct /Script/JunoGameNative.JunoActorAttributeOverrideData
/// Size: 0x0010 (0x000008 - 0x000018)
struct FJunoActorAttributeOverrideData : FTableRowBase
{ 
	FName                                              PrimaryLootTier;                                            // 0x0008   (0x0004)  
	FName                                              SecondaryLootTier;                                          // 0x000C   (0x0004)  
	FGameplayTag                                       DamageSurfaceTypeTag;                                       // 0x0010   (0x0004)  
	float                                              Health;                                                     // 0x0014   (0x0004)  
};

/// Struct /Script/JunoGameNative.JunoAIPersistenceFeatureData_InGameClass_PersistentInfo
/// Size: 0x0120 (0x000000 - 0x000120)
struct FJunoAIPersistenceFeatureData_InGameClass_PersistentInfo
{ 
	FSavedAIDataManager                                SavedAIData;                                                // 0x0000   (0x0120)  
};

/// Struct /Script/JunoGameNative.SavedAIData_Tokens
/// Size: 0x001F (0x000001 - 0x000020)
struct FSavedAIData_Tokens : FSavedAIData_BaseType
{ 
	FGameplayTagContainer                              SavedTokens;                                                // 0x0000   (0x0020)  
};

/// Struct /Script/JunoGameNative.SavedAIData_Camp
/// Size: 0x005F (0x000001 - 0x000060)
struct FSavedAIData_Camp : FSavedAIData_BaseType
{ 
	FGuid                                              UniqueGuid;                                                 // 0x0000   (0x0010)  
	int64_t                                            AssignedJunoGameTime;                                       // 0x0010   (0x0008)  
	bool                                               bWasRecruitedRemotely;                                      // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0019   (0x0003)  MISSED
	FGameplayTag                                       Role;                                                       // 0x001C   (0x0004)  
	FUniqueNetIdRepl                                   AttachedPlayerNetId;                                        // 0x0020   (0x0030)  
	int64_t                                            LastSpawnTime;                                              // 0x0050   (0x0008)  
	EJunoBiome                                         AttachedBiome;                                              // 0x0058   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0059   (0x0007)  MISSED
};

/// Struct /Script/JunoGameNative.SavedAIData_SoftRemoval
/// Size: 0x002F (0x000001 - 0x000030)
struct FSavedAIData_SoftRemoval : FSavedAIData_BaseType
{ 
	FGameplayTagContainer                              SoftRemovedReasons;                                         // 0x0000   (0x0020)  
	int64_t                                            SoftRemovedElapsedJunoGameTime;                             // 0x0020   (0x0008)  
	int64_t                                            NoInteractionsElapsedJunoGameTime;                          // 0x0028   (0x0008)  
};

/// Struct /Script/JunoGameNative.SavedAIData_Resources_GeneratedItem
/// Size: 0x000C (0x000000 - 0x00000C)
struct FSavedAIData_Resources_GeneratedItem
{ 
	FPrimaryAssetId                                    PrimaryAssetId;                                             // 0x0000   (0x0008)  
	int32_t                                            Count;                                                      // 0x0008   (0x0004)  
};

/// Struct /Script/JunoGameNative.SavedAIData_Resources
/// Size: 0x0097 (0x000001 - 0x000098)
struct FSavedAIData_Resources : FSavedAIData_BaseType
{ 
	SDK_UNDEFINED(80,12196) /* TMap<FName, double> */  __um(GeneratingLootTierGroups);                             // 0x0000   (0x0050)  
	TArray<FSavedAIData_Resources_GeneratedItem>       GeneratedItems;                                             // 0x0050   (0x0010)  
	int32_t                                            GeneratedLootCallsSinceLastRefresh;                         // 0x0060   (0x0004)  
	FPrimaryAssetId                                    LastUsedGatheringActorItemId;                               // 0x0064   (0x0008)  
	FName                                              LastGeneratedLootTier;                                      // 0x006C   (0x0004)  
	FJunoInventoryHandle                               SavedFullInventoryHandle;                                   // 0x0070   (0x0024)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0094   (0x0004)  MISSED
};

/// Struct /Script/JunoGameNative.SavedAIData_Merchant_StockEntry
/// Size: 0x000C (0x000000 - 0x00000C)
struct FSavedAIData_Merchant_StockEntry
{ 
	int32_t                                            StockQuantity;                                              // 0x0000   (0x0004)  
	FPrimaryAssetId                                    StockSaleItemId;                                            // 0x0004   (0x0008)  
};

/// Struct /Script/JunoGameNative.SavedAIData_Merchant
/// Size: 0x001F (0x000001 - 0x000020)
struct FSavedAIData_Merchant : FSavedAIData_BaseType
{ 
	FPrimaryAssetId                                    WantItemId;                                                 // 0x0000   (0x0008)  
	TArray<FSavedAIData_Merchant_StockEntry>           StockEntries;                                               // 0x0008   (0x0010)  
	float                                              StockRefreshTimeRemaining;                                  // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/JunoGameNative.SavedAIData_WorldSpawn
/// Size: 0x0027 (0x000001 - 0x000028)
struct FSavedAIData_WorldSpawn : FSavedAIData_BaseType
{ 
	FGuid                                              PointProviderGuid;                                          // 0x0000   (0x0010)  
	int64_t                                            AssignationEndGameTime;                                     // 0x0010   (0x0008)  
	SDK_UNDEFINED(16,12197) /* FString */              __um(EventDataPath);                                        // 0x0018   (0x0010)  
};

/// Struct /Script/JunoGameNative.SavedAIData
/// Size: 0x0190 (0x000000 - 0x000190)
struct FSavedAIData
{ 
	FSavedAIData_Tokens                                Tokens;                                                     // 0x0000   (0x0020)  
	FSavedAIData_Camp                                  Camp;                                                       // 0x0020   (0x0060)  
	FSavedAIData_SoftRemoval                           SoftRemoval;                                                // 0x0080   (0x0030)  
	FSavedAIData_Resources                             Resources;                                                  // 0x00B0   (0x0098)  
	FSavedAIData_Merchant                              Merchant;                                                   // 0x0148   (0x0020)  
	FSavedAIData_WorldSpawn                            WorldSpawn;                                                 // 0x0168   (0x0028)  
};

/// Struct /Script/JunoGameNative.JunoWeaponEssenceData
/// Size: 0x0028 (0x000008 - 0x000030)
struct FJunoWeaponEssenceData : FTableRowBase
{ 
	SDK_UNDEFINED(32,12198) /* TWeakObjectPtr<UFortItemDefinition*> */ __um(WeaponDefinition);                     // 0x0008   (0x0020)  
	int32_t                                            EssenceSlotCount;                                           // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/JunoGameNative.JunoAwesomeInteractionConfigTableRow
/// Size: 0x0008 (0x000008 - 0x000010)
struct FJunoAwesomeInteractionConfigTableRow : FTableRowBase
{ 
	int32_t                                            AwesomePointAdjustment;                                     // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/JunoGameNative.JunoAwesomePlacementCategoryConfigTableRow
/// Size: 0x0008 (0x000008 - 0x000010)
struct FJunoAwesomePlacementCategoryConfigTableRow : FTableRowBase
{ 
	FGameplayTag                                       BuildingCategory;                                           // 0x0008   (0x0004)  
	int32_t                                            AwesomePointsToContribute;                                  // 0x000C   (0x0004)  
};

/// Struct /Script/JunoGameNative.JunoAwesomePoiConfigTableRow
/// Size: 0x0020 (0x000008 - 0x000028)
struct FJunoAwesomePoiConfigTableRow : FTableRowBase
{ 
	TArray<int32_t>                                    AwesomePointGoals;                                          // 0x0008   (0x0010)  
	TArray<FJunoAwesomeUpgradeResourceCostList>        UpgradeResourceCosts;                                       // 0x0018   (0x0010)  
};

/// Struct /Script/JunoGameNative.JunoBarterSaleItemData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FJunoBarterSaleItemData
{ 
	SDK_UNDEFINED(32,12199) /* TWeakObjectPtr<UFortItemDefinition*> */ __um(SaleItemDefinition);                   // 0x0000   (0x0020)  
	int32_t                                            SaleItemBulkQuantity;                                       // 0x0020   (0x0004)  
	int32_t                                            WantItemQuantity;                                           // 0x0024   (0x0004)  
};

/// Struct /Script/JunoGameNative.JunoBarterPricingData
/// Size: 0x0030 (0x000008 - 0x000038)
struct FJunoBarterPricingData : FTableRowBase
{ 
	SDK_UNDEFINED(32,12200) /* TWeakObjectPtr<UFortItemDefinition*> */ __um(WantItemDefinition);                   // 0x0008   (0x0020)  
	TArray<FJunoBarterSaleItemData>                    SaleItemDatas;                                              // 0x0028   (0x0010)  
};

/// Struct /Script/JunoGameNative.JunoWaterLocationResult
/// Size: 0x0050 (0x000000 - 0x000050)
struct FJunoWaterLocationResult
{ 
	FVector                                            Location;                                                   // 0x0000   (0x0018)  
	EJunoBiomeHabitat                                  WaterType;                                                  // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0019   (0x0007)  MISSED
	FVector                                            Direction;                                                  // 0x0020   (0x0018)  
	float                                              Distance;                                                   // 0x0038   (0x0004)  
	int32_t                                            DirectionMaskIndex;                                         // 0x003C   (0x0004)  
	bool                                               bFoundWater;                                                // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0041   (0x0007)  MISSED
	class AWaterBody*                                  WaterBody;                                                  // 0x0048   (0x0008)  
};

/// Struct /Script/JunoGameNative.JunoDebugWorldInfoResult
/// Size: 0x0060 (0x000000 - 0x000060)
struct FJunoDebugWorldInfoResult
{ 
	SDK_UNDEFINED(24,12201) /* FText */                __um(AdventureSeed);                                        // 0x0000   (0x0018)  
	SDK_UNDEFINED(24,12202) /* FText */                __um(TileSet);                                              // 0x0018   (0x0018)  
	SDK_UNDEFINED(24,12203) /* FText */                __um(TileName);                                             // 0x0030   (0x0018)  
	SDK_UNDEFINED(24,12204) /* FText */                __um(BiomeName);                                            // 0x0048   (0x0018)  
};

/// Struct /Script/JunoGameNative.JunoWorldAnalyticsInfoResult
/// Size: 0x0028 (0x000000 - 0x000028)
struct FJunoWorldAnalyticsInfoResult
{ 
	SDK_UNDEFINED(16,12205) /* FString */              __um(TileName);                                             // 0x0000   (0x0010)  
	FVector                                            NormalizedTileLocation;                                     // 0x0010   (0x0018)  
};

/// Struct /Script/JunoGameNative.JunoTrackedActorKey
/// Size: 0x000C (0x000000 - 0x00000C)
struct FJunoTrackedActorKey
{ 
	FIntVector                                         LocationKey;                                                // 0x0000   (0x000C)  
};

/// Struct /Script/JunoGameNative.JunoTrackedActor
/// Size: 0x001C (0x000000 - 0x00001C)
struct FJunoTrackedActor
{ 
	SDK_UNDEFINED(8,12206) /* TWeakObjectPtr<AActor*> */ __um(Actor);                                              // 0x0000   (0x0008)  
	FJunoTrackedActorKey                               ActorKey;                                                   // 0x0008   (0x000C)  
	float                                              InitialNetRelevanceDistance;                                // 0x0014   (0x0004)  
	int32_t                                            NumberOfRelevantActors;                                     // 0x0018   (0x0004)  
};

/// Struct /Script/JunoGameNative.JunoBuildingMetricQuery
/// Size: 0x0018 (0x000000 - 0x000018)
struct FJunoBuildingMetricQuery
{ 
	FVector                                            Location;                                                   // 0x0000   (0x0018)  
};

/// Struct /Script/JunoGameNative.JunoTrackedActorRefreshmentOptions
/// Size: 0x000C (0x000000 - 0x00000C)
struct FJunoTrackedActorRefreshmentOptions
{ 
	EJunoTrackedActorRefreshReason                     Reason;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	SDK_UNDEFINED(8,12207) /* TWeakObjectPtr<AActor*> */ __um(ActorRequiringRefresh);                              // 0x0004   (0x0008)  
};

/// Struct /Script/JunoGameNative.JunoBuildingConnectivityComponentEntry
/// Size: 0x0058 (0x000000 - 0x000058)
struct FJunoBuildingConnectivityComponentEntry
{ 
	SDK_UNDEFINED(8,12208) /* TWeakObjectPtr<USceneComponent*> */ __um(Component);                                 // 0x0000   (0x0008)  
	SDK_UNDEFINED(80,12209) /* TSet<int32_t> */        __um(IDs);                                                  // 0x0008   (0x0050)  
};

/// Struct /Script/JunoGameNative.JunoBuildingConnectionPoints
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoBuildingConnectionPoints
{ 
	TArray<FJunoBuildingConnectionPoint>               Value;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/JunoGameNative.JunoEvent_CampCenterCreated
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoEvent_CampCenterCreated
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/JunoGameNative.JunoEvent_CampCenterDestroyed
/// Size: 0x0008 (0x000000 - 0x000008)
struct FJunoEvent_CampCenterDestroyed
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/JunoGameNative.JunoEvent_CampCenterActivated
/// Size: 0x0008 (0x000000 - 0x000008)
struct FJunoEvent_CampCenterActivated
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/JunoGameNative.JunoEvent_CampCenterDeactivated
/// Size: 0x0008 (0x000000 - 0x000008)
struct FJunoEvent_CampCenterDeactivated
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/JunoGameNative.JunoEvent_CampActorActivated
/// Size: 0x0008 (0x000000 - 0x000008)
struct FJunoEvent_CampActorActivated
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/JunoGameNative.JunoEvent_CampActorDeactivated
/// Size: 0x0008 (0x000000 - 0x000008)
struct FJunoEvent_CampActorDeactivated
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/JunoGameNative.JunoEvent_CampAwesomeLevelChanged
/// Size: 0x0028 (0x000000 - 0x000028)
struct FJunoEvent_CampAwesomeLevelChanged
{ 
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/JunoGameNative.JunoEvent_CampAwesomePointsModified
/// Size: 0x0038 (0x000000 - 0x000038)
struct FJunoEvent_CampAwesomePointsModified
{ 
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x0000   (0x0038)  MISSED
};

/// Struct /Script/JunoGameNative.JunoCampPersistenceFeatureData_InGameClass_PersistentInfo
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoCampPersistenceFeatureData_InGameClass_PersistentInfo
{ 
	FJunoAllCampsSaveData                              SavedAllCamps;                                              // 0x0000   (0x0010)  
};

/// Struct /Script/JunoGameNative.ChaosAudioEventSizeSounds
/// Size: 0x0020 (0x000000 - 0x000020)
struct FChaosAudioEventSizeSounds
{ 
	class USoundBase*                                  Single;                                                     // 0x0000   (0x0008)  
	class USoundBase*                                  Small;                                                      // 0x0008   (0x0008)  
	class USoundBase*                                  Medium;                                                     // 0x0010   (0x0008)  
	class USoundBase*                                  Large;                                                      // 0x0018   (0x0008)  
};

/// Struct /Script/JunoGameNative.JunoTableRow_AFKEvent
/// Size: 0x0018 (0x000008 - 0x000020)
struct FJunoTableRow_AFKEvent : FTableRowBase
{ 
	int32_t                                            EventWeight;                                                // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FInstancedStruct>                           EventFilters;                                               // 0x0010   (0x0010)  
};

/// Struct /Script/JunoGameNative.NewCraftingObjectMessage
/// Size: 0x0008 (0x000000 - 0x000008)
struct FNewCraftingObjectMessage
{ 
	class AActor*                                      CraftingObject;                                             // 0x0000   (0x0008)  
};

/// Struct /Script/JunoGameNative.JunoEvent_CraftingObjectPlaced
/// Size: 0x0008 (0x000000 - 0x000008)
struct FJunoEvent_CraftingObjectPlaced
{ 
	class AActor*                                      CraftingObject;                                             // 0x0000   (0x0008)  
};

/// Struct /Script/JunoGameNative.JunoDestructionMaterialReplacementDataTable
/// Size: 0x0038 (0x000008 - 0x000040)
struct FJunoDestructionMaterialReplacementDataTable : FTableRowBase
{ 
	SDK_UNDEFINED(16,12210) /* FString */              __um(SearchString);                                         // 0x0008   (0x0010)  
	SDK_UNDEFINED(16,12211) /* FString */              __um(BaseMaterialSearchString);                             // 0x0018   (0x0010)  
	class UMaterialInterface*                          MaterialReplacement;                                        // 0x0028   (0x0008)  
	SDK_UNDEFINED(16,12212) /* FString */              __um(Annotations);                                          // 0x0030   (0x0010)  
};

/// Struct /Script/JunoGameNative.JunoDestructionFixISMMaterialsDataflowNode
/// Size: 0x0020 (0x0000E8 - 0x000108)
struct FJunoDestructionFixISMMaterialsDataflowNode : FDataflowNode
{ 
	class UGeometryCollection*                         GCAsset;                                                    // 0x00E8   (0x0008)  
	TArray<FGeometryCollectionAutoInstanceMesh>        InstancedMeshes;                                            // 0x00F0   (0x0010)  
	class UDataTable*                                  ISMMaterialDataTable;                                       // 0x0100   (0x0008)  
};

/// Struct /Script/JunoGameNative.JunoLivingWorldPointProviderEventLimiter
/// Size: 0x0020 (0x000000 - 0x000020)
struct FJunoLivingWorldPointProviderEventLimiter
{ 
	bool                                               bCanLimitBasedOnEvent;                                      // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	SDK_UNDEFINED(8,12213) /* TWeakObjectPtr<UFortAthenaLivingWorldEventData*> */ __um(EventData);                 // 0x0004   (0x0008)  
	unsigned char                                      UnknownData01_6[0x14];                                      // 0x000C   (0x0014)  MISSED
};

/// Struct /Script/JunoGameNative.JunoExampleMacroGenerated_InGameClass_PersistentInfo
/// Size: 0x0004 (0x000000 - 0x000004)
struct FJunoExampleMacroGenerated_InGameClass_PersistentInfo
{ 
	int32_t                                            PersistentData_InStorage;                                   // 0x0000   (0x0004)  
};

/// Struct /Script/JunoGameNative.JunoExample_InGameClass_PersistentInfo
/// Size: 0x0004 (0x000000 - 0x000004)
struct FJunoExample_InGameClass_PersistentInfo
{ 
	int32_t                                            PersistentData_InStorage;                                   // 0x0000   (0x0004)  
};

/// Struct /Script/JunoGameNative.JunoFogOfWarPersistenceFeatureData_InGameClass_PersistentInfo
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoFogOfWarPersistenceFeatureData_InGameClass_PersistentInfo
{ 
	FJunoFogOfWarSaveData                              FogOfWarSaveData;                                           // 0x0000   (0x0010)  
};

/// Struct /Script/JunoGameNative.JunoFreeBuildPersistenceFeatureData_InGameClass_PersistentInfo
/// Size: 0x0002 (0x000000 - 0x000002)
struct FJunoFreeBuildPersistenceFeatureData_InGameClass_PersistentInfo
{ 
	FJunoFreeBuildSaveData                             FreeBuildSaveData;                                          // 0x0000   (0x0002)  
};

/// Struct /Script/JunoGameNative.JunoFreeBuildToggleEvent
/// Size: 0x0004 (0x000000 - 0x000004)
struct FJunoFreeBuildToggleEvent
{ 
	bool                                               bIsFreeBuildEnabled;                                        // 0x0000   (0x0001)  
	bool                                               bIsItemSpawnerEnabled;                                      // 0x0001   (0x0001)  
	bool                                               bIsPlayerAllowedToFly;                                      // 0x0002   (0x0001)  
	bool                                               bIsFreeBuildCostFilteringEnabled;                           // 0x0003   (0x0001)  
};

/// Struct /Script/JunoGameNative.JunoFreeBuildEverUsedEvent
/// Size: 0x0001 (0x000000 - 0x000001)
struct FJunoFreeBuildEverUsedEvent
{ 
	bool                                               bWasFreeBuildEverEnabled;                                   // 0x0000   (0x0001)  
};

/// Struct /Script/JunoGameNative.JunoFreeBuildSpawnable
/// Size: 0x0000 (0x000008 - 0x000008)
struct FJunoFreeBuildSpawnable : FTableRowBase
{ 
};

/// Struct /Script/JunoGameNative.JunoFreeBuildSpawnableItem
/// Size: 0x0020 (0x000008 - 0x000028)
struct FJunoFreeBuildSpawnableItem : FJunoFreeBuildSpawnable
{ 
	SDK_UNDEFINED(32,12214) /* TWeakObjectPtr<UFortItemDefinition*> */ __um(Item);                                 // 0x0008   (0x0020)  
};

/// Struct /Script/JunoGameNative.JunoGeometryCollectionAssemblerGCInfo
/// Size: 0x0040 (0x000000 - 0x000040)
struct FJunoGeometryCollectionAssemblerGCInfo
{ 
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x0000   (0x0040)  MISSED
};

/// Struct /Script/JunoGameNative.GuidedBuildingNewFocus
/// Size: 0x0008 (0x000000 - 0x000008)
struct FGuidedBuildingNewFocus
{ 
	SDK_UNDEFINED(8,12215) /* TWeakObjectPtr<AJunoGuidedBuildingActor*> */ __um(GuidedBuildingActor);              // 0x0000   (0x0008)  
};

/// Struct /Script/JunoGameNative.GuidedBuildBarUpdate
/// Size: 0x0010 (0x000008 - 0x000018)
struct FGuidedBuildBarUpdate : FGuidedBuildingMessageBase
{ 
	TArray<FName>                                      GuidedBuildBarRecipes;                                      // 0x0008   (0x0010)  
};

/// Struct /Script/JunoGameNative.GuidedBuildingRegistrationEvent
/// Size: 0x0014 (0x000000 - 0x000014)
struct FGuidedBuildingRegistrationEvent
{ 
	SDK_UNDEFINED(8,12216) /* TWeakObjectPtr<AJunoGuidedBuildingActor*> */ __um(GuidedBuild);                      // 0x0000   (0x0008)  
	SDK_UNDEFINED(8,12217) /* TWeakObjectPtr<AFortPlayerState*> */ __um(PlayerState);                              // 0x0008   (0x0008)  
	bool                                               bIsRegistering;                                             // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
};

/// Struct /Script/JunoGameNative.JunoIndexedSerializedEdgeData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FJunoIndexedSerializedEdgeData
{ 
	uint32_t                                           Node1;                                                      // 0x0000   (0x0004)  
	uint32_t                                           Node2;                                                      // 0x0004   (0x0004)  
};

/// Struct /Script/JunoGameNative.JunoIndexedSerializedIslandData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoIndexedSerializedIslandData
{ 
	TArray<uint32_t>                                   Vertices;                                                   // 0x0000   (0x0010)  
};

/// Struct /Script/JunoGameNative.JunoIndexedSavedConnectivityData
/// Size: 0x0088 (0x000000 - 0x000088)
struct FJunoIndexedSavedConnectivityData
{ 
	FGraphProperties                                   Properties;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	TArray<FGraphVertexHandle>                         Vertices;                                                   // 0x0008   (0x0010)  
	TArray<FJunoIndexedSerializedEdgeData>             Edges;                                                      // 0x0018   (0x0010)  
	SDK_UNDEFINED(80,12218) /* TMap<FGraphIslandHandle, FJunoIndexedSerializedIslandData> */ __um(Islands);        // 0x0028   (0x0050)  
	TArray<bool>                                       ConnectivityVertexData;                                     // 0x0078   (0x0010)  
};

/// Struct /Script/JunoGameNative.JunoInputMappingChangedMessage
/// Size: 0x0008 (0x000000 - 0x000008)
struct FJunoInputMappingChangedMessage
{ 
	class UJunoInputMappingComponent*                  JunoInputMappingComponent;                                  // 0x0000   (0x0008)  
};

/// Struct /Script/JunoGameNative.JunoInventoryPersistenceFeatureData_InGameClass_PersistentInfo
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoInventoryPersistenceFeatureData_InGameClass_PersistentInfo
{ 
	TArray<FPersistenceFrameworkLevelSaveSpawnablePtr> Inventories;                                                // 0x0000   (0x0010)  
};

/// Struct /Script/JunoGameNative.JunoInventoryUIPersistenceFeatureData_InGameClass_PersistentInfo
/// Size: 0x0050 (0x000000 - 0x000050)
struct FJunoInventoryUIPersistenceFeatureData_InGameClass_PersistentInfo
{ 
	FJunoInventoryUISaveData                           SavedInventoryUI;                                           // 0x0000   (0x0050)  
};

/// Struct /Script/JunoGameNative.JunoSavedInventoryUIData
/// Size: 0x0030 (0x000000 - 0x000030)
struct FJunoSavedInventoryUIData
{ 
	FGuid                                              InventoryHandleNewGuid;                                     // 0x0000   (0x0010)  
	TArray<FJunoItemSlot>                              AllSlotData;                                                // 0x0010   (0x0010)  
	TArray<FJunoSelectedSlotData>                      SelectedItemGroupSlot;                                      // 0x0020   (0x0010)  
};

/// Struct /Script/JunoGameNative.JunoKnowledgeBundleTableRow
/// Size: 0x0008 (0x000008 - 0x000010)
struct FJunoKnowledgeBundleTableRow : FTableRowBase
{ 
	FName                                              CraftingRecipeIdentifier;                                   // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/JunoGameNative.JunoKnowledgePersistenceFeatureData_InGameClass_PersistentInfo
/// Size: 0x00E8 (0x000000 - 0x0000E8)
struct FJunoKnowledgePersistenceFeatureData_InGameClass_PersistentInfo
{ 
	FJunoKnowledgeSaveData                             KnowledgeSaveData;                                          // 0x0000   (0x00E8)  
};

/// Struct /Script/JunoGameNative.JunoKnowledgeRecipeStateEntry
/// Size: 0x00A8 (0x000000 - 0x0000A8)
struct FJunoKnowledgeRecipeStateEntry
{ 
	EJunoKnowledgeState                                KnowledgeState;                                             // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	SDK_UNDEFINED(80,12219) /* TSet<FUniqueNetIdRepl> */ __um(ViewedPlayerIds);                                    // 0x0008   (0x0050)  
	SDK_UNDEFINED(80,12220) /* TSet<FUniqueNetIdRepl> */ __um(EverAcquiredPlayerIds);                              // 0x0058   (0x0050)  
};

/// Struct /Script/JunoGameNative.JunoKnowledgeItemStateEntry
/// Size: 0x0058 (0x000000 - 0x000058)
struct FJunoKnowledgeItemStateEntry
{ 
	FDateTime                                          DateFound;                                                  // 0x0000   (0x0008)  
	SDK_UNDEFINED(80,12221) /* TSet<FUniqueNetIdRepl> */ __um(ViewedPlayerIds);                                    // 0x0008   (0x0050)  
};

/// Struct /Script/JunoGameNative.JunoMarkerSettingsRow
/// Size: 0x0060 (0x000008 - 0x000068)
struct FJunoMarkerSettingsRow : FTableRowBase
{ 
	SDK_UNDEFINED(32,12222) /* TWeakObjectPtr<UObject*> */ __um(Icon);                                             // 0x0008   (0x0020)  
	SDK_UNDEFINED(32,12223) /* TWeakObjectPtr<UObject*> */ __um(CompassIcon);                                      // 0x0028   (0x0020)  
	FLinearColor                                       Color;                                                      // 0x0048   (0x0010)  
	bool                                               bAnchorOnEdges;                                             // 0x0058   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0059   (0x0003)  MISSED
	float                                              Size;                                                       // 0x005C   (0x0004)  
	bool                                               bShowUnderground;                                           // 0x0060   (0x0001)  
	bool                                               bShowOnlyForOwner;                                          // 0x0061   (0x0001)  
	bool                                               bIsContainer;                                               // 0x0062   (0x0001)  
	bool                                               bHasLimitedDuration;                                        // 0x0063   (0x0001)  
	int32_t                                            duration;                                                   // 0x0064   (0x0004)  
};

/// Struct /Script/JunoGameNative.JunoMarkerCustomizationOptionsRow
/// Size: 0x0020 (0x000008 - 0x000028)
struct FJunoMarkerCustomizationOptionsRow : FTableRowBase
{ 
	SDK_UNDEFINED(16,12224) /* TArray<TWeakObjectPtr<UTexture*>> */ __um(Icons);                                   // 0x0008   (0x0010)  
	TArray<FLinearColor>                               Colors;                                                     // 0x0018   (0x0010)  
};

/// Struct /Script/JunoGameNative.JunoMarkersPersistenceFeatureData_InGameClass_PersistentInfo
/// Size: 0x0020 (0x000000 - 0x000020)
struct FJunoMarkersPersistenceFeatureData_InGameClass_PersistentInfo
{ 
	FJunoMarkersSaveData                               MarkersSaveData;                                            // 0x0000   (0x0020)  
};

/// Struct /Script/JunoGameNative.JunoMassCommonStateFragment
/// Size: 0x0003 (0x000001 - 0x000004)
struct FJunoMassCommonStateFragment : FMassFragment
{ 
	float                                              Health;                                                     // 0x0000   (0x0004)  
};

/// Struct /Script/JunoGameNative.JunoMerchantPricingLevel
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoMerchantPricingLevel
{ 
	class UDataTable*                                  BarterPricingData;                                          // 0x0000   (0x0008)  
	FName                                              TierGroup;                                                  // 0x0008   (0x0004)  
	int32_t                                            NumberOfPackagesForSale;                                    // 0x000C   (0x0004)  
};

/// Struct /Script/JunoGameNative.JunoMerchantWantedItemData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FJunoMerchantWantedItemData
{ 
	SDK_UNDEFINED(32,12225) /* TWeakObjectPtr<UFortItemDefinition*> */ __um(WantItemDefinition);                   // 0x0000   (0x0020)  
	float                                              WantItemWeight;                                             // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/JunoGameNative.JunoMerchantSalesData
/// Size: 0x0030 (0x000008 - 0x000038)
struct FJunoMerchantSalesData : FTableRowBase
{ 
	FGameplayTag                                       MerchantTag;                                                // 0x0008   (0x0004)  
	int32_t                                            InitialPricingLevel;                                        // 0x000C   (0x0004)  
	TArray<FJunoMerchantPricingLevel>                  PricingLevels;                                              // 0x0010   (0x0010)  
	TArray<FJunoMerchantWantedItemData>                WantedItemDatas;                                            // 0x0020   (0x0010)  
	int32_t                                            RefreshTimeInHours;                                         // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/JunoGameNative.JunoModeratorModeToggleEvent
/// Size: 0x0002 (0x000000 - 0x000002)
struct FJunoModeratorModeToggleEvent
{ 
	bool                                               bIsModeratorModeEnabled;                                    // 0x0000   (0x0001)  
	bool                                               bIsPlayerAllowedToFly;                                      // 0x0001   (0x0001)  
};

/// Struct /Script/JunoGameNative.JunoMoodReactionConfigTableRow
/// Size: 0x0008 (0x000008 - 0x000010)
struct FJunoMoodReactionConfigTableRow : FTableRowBase
{ 
	FGameplayTag                                       SoundLibraryTag;                                            // 0x0008   (0x0004)  
	FGameplayCueTag                                    GameplayCueTag;                                             // 0x000C   (0x0004)  
};

/// Struct /Script/JunoGameNative.JunoEvent_ToggleFreeCrafting
/// Size: 0x0001 (0x000000 - 0x000001)
struct FJunoEvent_ToggleFreeCrafting
{ 
	bool                                               bIsFreeCrafting;                                            // 0x0000   (0x0001)  
};

/// Struct /Script/JunoGameNative.PassiveResourcesGathererRow
/// Size: 0x0010 (0x000008 - 0x000018)
struct FPassiveResourcesGathererRow : FTableRowBase
{ 
	FGameplayTag                                       RequiredRole;                                               // 0x0008   (0x0004)  
	float                                              MinutesToGenerate;                                          // 0x000C   (0x0004)  
	int32_t                                            MaxLootCalls;                                               // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/JunoGameNative.PassiveResourcesGatheringRow
/// Size: 0x0020 (0x000008 - 0x000028)
struct FPassiveResourcesGatheringRow : FTableRowBase
{ 
	FName                                              LootTierGroup;                                              // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FWorldConditionQueryDefinition                     SelectionPreconditions;                                     // 0x0010   (0x0018)  
};

/// Struct /Script/JunoGameNative.PassiveResourcesGatheringSimulationConfigurationRow
/// Size: 0x0008 (0x000008 - 0x000010)
struct FPassiveResourcesGatheringSimulationConfigurationRow : FTableRowBase
{ 
	float                                              Weight;                                                     // 0x0008   (0x0004)  
	float                                              OverridenMultiplierForSimulatedGeneration;                  // 0x000C   (0x0004)  
};

/// Struct /Script/JunoGameNative.JunoPersistenceAssetSourceControlInfo
/// Size: 0x0030 (0x000000 - 0x000030)
struct FJunoPersistenceAssetSourceControlInfo
{ 
	SDK_UNDEFINED(16,12226) /* FString */              __um(CurrentRevisionCheckInIdentifier);                     // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,12227) /* FString */              __um(CurrentRevisionAction);                                // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,12228) /* FString */              __um(CurrentRevisionUser);                                  // 0x0020   (0x0010)  
};

/// Struct /Script/JunoGameNative.JunoPersistenceAssetInfo
/// Size: 0x0080 (0x000000 - 0x000080)
struct FJunoPersistenceAssetInfo
{ 
	SDK_UNDEFINED(16,12229) /* FString */              __um(PackageName);                                          // 0x0000   (0x0010)  
	FTopLevelAssetPath                                 AssetClassPath;                                             // 0x0010   (0x0008)  
	SDK_UNDEFINED(16,12230) /* FString */              __um(FilePath);                                             // 0x0018   (0x0010)  
	bool                                               bIsInCook;                                                  // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	FJsonObjectWrapper                                 CustomDump;                                                 // 0x0030   (0x0020)  
	FJunoPersistenceAssetSourceControlInfo             SourceControlInfo;                                          // 0x0050   (0x0030)  
};

/// Struct /Script/JunoGameNative.JunoPersistenceAssetBackwardCompatibilityIssue
/// Size: 0x0080 (0x000000 - 0x000080)
struct FJunoPersistenceAssetBackwardCompatibilityIssue
{ 
	SDK_UNDEFINED(16,12231) /* FString */              __um(PackageName);                                          // 0x0000   (0x0010)  
	FTopLevelAssetPath                                 AssetClassPath;                                             // 0x0010   (0x0008)  
	EJunoPersistenceAssetBackwardCompatibilityIssueType IssueType;                                                 // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0019   (0x0007)  MISSED
	FJsonObjectWrapper                                 IssueData;                                                  // 0x0020   (0x0020)  
	SDK_UNDEFINED(16,12232) /* FString */              __um(AssetSourceControlInfoVersion);                        // 0x0040   (0x0010)  
	FJunoPersistenceAssetSourceControlInfo             AssetSourceControlInfo;                                     // 0x0050   (0x0030)  
};

/// Struct /Script/JunoGameNative.JunoPersistenceAssetsReportSettings
/// Size: 0x0028 (0x000000 - 0x000028)
struct FJunoPersistenceAssetsReportSettings
{ 
	SDK_UNDEFINED(16,12233) /* FString */              __um(PreviousVersionPersistenceAssetsReportPath);           // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,12234) /* FString */              __um(CurrentVersionPersistenceAssetsReportPath);            // 0x0010   (0x0010)  
	bool                                               bInCookOnly;                                                // 0x0020   (0x0001)  
	bool                                               bGenerateSourceControlInfo;                                 // 0x0021   (0x0001)  
	bool                                               bGenerateAssetCustomDump;                                   // 0x0022   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x0023   (0x0005)  MISSED
};

/// Struct /Script/JunoGameNative.JunoPersistenceAssetsBackwardCompatibilityReport
/// Size: 0x0060 (0x000000 - 0x000060)
struct FJunoPersistenceAssetsBackwardCompatibilityReport
{ 
	SDK_UNDEFINED(16,12235) /* FString */              __um(CurrentVersion);                                       // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,12236) /* FString */              __um(PreviousVersion);                                      // 0x0010   (0x0010)  
	FDateTime                                          ReportDate;                                                 // 0x0020   (0x0008)  
	FJunoPersistenceAssetsReportSettings               Settings;                                                   // 0x0028   (0x0028)  
	TArray<FJunoPersistenceAssetBackwardCompatibilityIssue> Issues;                                                // 0x0050   (0x0010)  
};

/// Struct /Script/JunoGameNative.JunoPersistenceAssetsReport
/// Size: 0x0050 (0x000000 - 0x000050)
struct FJunoPersistenceAssetsReport
{ 
	SDK_UNDEFINED(16,12237) /* FString */              __um(BuildVersion);                                         // 0x0000   (0x0010)  
	FDateTime                                          ReportDate;                                                 // 0x0010   (0x0008)  
	FJunoPersistenceAssetsReportSettings               Settings;                                                   // 0x0018   (0x0028)  
	TArray<FJunoPersistenceAssetInfo>                  PersistenceAssetInfos;                                      // 0x0040   (0x0010)  
};

/// Struct /Script/JunoGameNative.JunoPickupManagementSettingsRow
/// Size: 0x0018 (0x000008 - 0x000020)
struct FJunoPickupManagementSettingsRow : FTableRowBase
{ 
	int32_t                                            PickupsAllowedMax;                                          // 0x0008   (0x0004)  
	int32_t                                            PickupsDesiredSlack;                                        // 0x000C   (0x0004)  
	float                                              PickupDespawnDelaySeconds;                                  // 0x0010   (0x0004)  
	bool                                               bDebugPickupManagement;                                     // 0x0014   (0x0001)  
	bool                                               bEnablePickupManagement;                                    // 0x0015   (0x0001)  
	EFortRarity                                        NotJunkPickupThreshold;                                     // 0x0016   (0x0001)  
	EFortRarity                                        ImportantPickupThreshold;                                   // 0x0017   (0x0001)  
	bool                                               bFlagPlayerDropsAsImportant;                                // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/JunoGameNative.JunoEvent_BuildingSlotPinned
/// Size: 0x0008 (0x000000 - 0x000008)
struct FJunoEvent_BuildingSlotPinned
{ 
	int32_t                                            UpdatedSlot;                                                // 0x0000   (0x0004)  
	bool                                               bIsPinned;                                                  // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Struct /Script/JunoGameNative.JunoEvent_BuildingSlotUpdate
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoEvent_BuildingSlotUpdate
{ 
	class UJunoPlayerBuildingComponent*                BuildingComp;                                               // 0x0000   (0x0008)  
	EJunoBuildModeType                                 BuildModeType;                                              // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	int32_t                                            UpdatedSlot;                                                // 0x000C   (0x0004)  
};

/// Struct /Script/JunoGameNative.JunoEvent_SelectedSlotIndexUpdate
/// Size: 0x0018 (0x000000 - 0x000018)
struct FJunoEvent_SelectedSlotIndexUpdate
{ 
	class UJunoPlayerBuildingComponent*                BuildingComp;                                               // 0x0000   (0x0008)  
	EJunoBuildModeType                                 BuildModeType;                                              // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	int32_t                                            NewSelectedSlot;                                            // 0x000C   (0x0004)  
	bool                                               bIsInBuildMode;                                             // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	FName                                              CurrentRecipe;                                              // 0x0014   (0x0004)  
};

/// Struct /Script/JunoGameNative.JunoEvent_BuildingModeChanged
/// Size: 0x0018 (0x000000 - 0x000018)
struct FJunoEvent_BuildingModeChanged
{ 
	class UJunoPlayerBuildingComponent*                BuildingComp;                                               // 0x0000   (0x0008)  
	EJunoBuildModeType                                 BuildModeType;                                              // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	int32_t                                            SelectedSlot;                                               // 0x000C   (0x0004)  
	FName                                              CurrentRecipe;                                              // 0x0010   (0x0004)  
	bool                                               bIsInBuildMode;                                             // 0x0014   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/JunoGameNative.JunoEvent_EnableBuildModeWithRecipe
/// Size: 0x0030 (0x000000 - 0x000030)
struct FJunoEvent_EnableBuildModeWithRecipe
{ 
	EJunoBuildModeType                                 BuildModeType;                                              // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              RecipeName;                                                 // 0x0004   (0x0004)  
	bool                                               bFromRecents;                                               // 0x0008   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	FGameplayTagContainer                              Tags;                                                       // 0x0010   (0x0020)  
};

/// Struct /Script/JunoGameNative.JunoLastLoadedRecipeData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FJunoLastLoadedRecipeData
{ 
	EJunoBuildModeType                                 BuildModeType;                                              // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              RecipeName;                                                 // 0x0004   (0x0004)  
};

/// Struct /Script/JunoGameNative.JunoPlayspaceAccountantFeatureData_InGameClass_PersistentInfo
/// Size: 0x0050 (0x000000 - 0x000050)
struct FJunoPlayspaceAccountantFeatureData_InGameClass_PersistentInfo
{ 
	FJunoPlayspaceAccountantSaveData                   PlayspaceAccountantSaveData;                                // 0x0000   (0x0050)  
};

/// Struct /Script/JunoGameNative.JunoPlayspaceIndexPersistenceFeatureData_InGameClass_PersistentInfo
/// Size: 0x0050 (0x000000 - 0x000050)
struct FJunoPlayspaceIndexPersistenceFeatureData_InGameClass_PersistentInfo
{ 
	FJunoPlayspaceIndexSaveData                        PlayspaceIndexSaveData;                                     // 0x0000   (0x0050)  
};

/// Struct /Script/JunoGameNative.JunoPlayspaceIndexNode
/// Size: 0x0030 (0x000000 - 0x000030)
struct FJunoPlayspaceIndexNode
{ 
	FGuid                                              ID;                                                         // 0x0000   (0x0010)  
	FGuid                                              ParentID;                                                   // 0x0010   (0x0010)  
	TArray<FGuid>                                      ChildrenIds;                                                // 0x0020   (0x0010)  
};

/// Struct /Script/JunoGameNative.JunoSyncWeatherCache
/// Size: 0x0018 (0x000000 - 0x000018)
struct FJunoSyncWeatherCache
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/JunoGameNative.JunoHUDVehicleAmmoInfo
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoHUDVehicleAmmoInfo
{ 
	int32_t                                            AmmoCount;                                                  // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UFortItemDefinition*                         AmmoItemDefinition;                                         // 0x0008   (0x0008)  
};

/// Struct /Script/JunoGameNative.JunoHUDVehicleEnterEvent
/// Size: 0x0018 (0x000000 - 0x000018)
struct FJunoHUDVehicleEnterEvent
{ 
	FJunoHUDVehicleAmmoInfo                            AmmoInfo;                                                   // 0x0000   (0x0010)  
	float                                              CurrentCooldownPercent;                                     // 0x0010   (0x0004)  
	float                                              CurrentCooldownDuration;                                    // 0x0014   (0x0004)  
};

/// Struct /Script/JunoGameNative.JunoHUDVehicleExitEvent
/// Size: 0x0001 (0x000000 - 0x000001)
struct FJunoHUDVehicleExitEvent
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/JunoGameNative.JunoHUDVehicleFireEvent
/// Size: 0x0018 (0x000000 - 0x000018)
struct FJunoHUDVehicleFireEvent
{ 
	FJunoHUDVehicleAmmoInfo                            AmmoInfo;                                                   // 0x0000   (0x0010)  
	float                                              CooldownDuration;                                           // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/JunoGameNative.JunoHUDVehicleCooldownUpdateEvent
/// Size: 0x0004 (0x000000 - 0x000004)
struct FJunoHUDVehicleCooldownUpdateEvent
{ 
	float                                              Percent;                                                    // 0x0000   (0x0004)  
};

/// Struct /Script/JunoGameNative.JunoHUDGliderCanDeployEvent
/// Size: 0x0001 (0x000000 - 0x000001)
struct FJunoHUDGliderCanDeployEvent
{ 
	bool                                               bCanDeploy;                                                 // 0x0000   (0x0001)  
};

/// Struct /Script/JunoGameNative.JunoHUDMenuVillageInteractEvent
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoHUDMenuVillageInteractEvent
{ 
	class AJunoCampActor*                              CampActor;                                                  // 0x0000   (0x0008)  
	class UJunoCampMembershipActorComponent*           CampActorMembershipActorComponent;                          // 0x0008   (0x0008)  
};

/// Struct /Script/JunoGameNative.JunoVerbMessage_AwesomeLevelIncreased
/// Size: 0x0048 (0x000078 - 0x0000C0)
struct FJunoVerbMessage_AwesomeLevelIncreased : FVerbMessage
{ 
	FSubjectTagsPair                                   SourceActor;                                                // 0x0078   (0x0038)  
	int32_t                                            NewAwesomeLevel;                                            // 0x00B0   (0x0004)  
	int32_t                                            PrevAwesomeLevel;                                           // 0x00B4   (0x0004)  
	int32_t                                            RemainingAwesomePoints;                                     // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00BC   (0x0004)  MISSED
};

/// Struct /Script/JunoGameNative.JunoVerbMessage_GuidedBuildCompleted
/// Size: 0x0048 (0x000078 - 0x0000C0)
struct FJunoVerbMessage_GuidedBuildCompleted : FVerbMessage
{ 
	FSubjectTagsPair                                   GuidedBuilding;                                             // 0x0078   (0x0038)  
	TArray<FSubjectTagsPair>                           BuildContributors;                                          // 0x00B0   (0x0010)  
};

/// Struct /Script/JunoGameNative.JunoVerbMessage_GuidedBuildStageCompleted
/// Size: 0x0040 (0x000078 - 0x0000B8)
struct FJunoVerbMessage_GuidedBuildStageCompleted : FVerbMessage
{ 
	FSubjectTagsPair                                   GuidedBuilding;                                             // 0x0078   (0x0038)  
	FJunoStageKey                                      StageKey;                                                   // 0x00B0   (0x0008)  
};

/// Struct /Script/JunoGameNative.JunoVerbMessage_RecruitNPC
/// Size: 0x0070 (0x000078 - 0x0000E8)
struct FJunoVerbMessage_RecruitNPC : FVerbMessage
{ 
	FSubjectTagsPair                                   UniqueAIIdentifier;                                         // 0x0078   (0x0038)  
	FSubjectTagsPair                                   AIRole;                                                     // 0x00B0   (0x0038)  
};

/// Struct /Script/JunoGameNative.JunoVerbMessage_TemperatureUpdated
/// Size: 0x0070 (0x000078 - 0x0000E8)
struct FJunoVerbMessage_TemperatureUpdated : FVerbMessage
{ 
	FSubjectTagsPair                                   PreviousTemperature;                                        // 0x0078   (0x0038)  
	FSubjectTagsPair                                   NewTemperature;                                             // 0x00B0   (0x0038)  
};

/// Struct /Script/JunoGameNative.JunoWeatherPersistenceFeatureData_InGameClass_PersistentInfo
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoWeatherPersistenceFeatureData_InGameClass_PersistentInfo
{ 
	FJunoWeatherSaveData                               WeatherSaveData;                                            // 0x0000   (0x0010)  
};

/// Struct /Script/JunoGameNative.JunoWeatherPhaseForecast
/// Size: 0x0064 (0x000000 - 0x000064)
struct FJunoWeatherPhaseForecast
{ 
	FGameplayTag                                       WeatherTypeName;                                            // 0x0000   (0x0004)  
	FFloatRange                                        WeatherTypeWeight;                                          // 0x0004   (0x0010)  
	FFloatRange                                        duration;                                                   // 0x0014   (0x0010)  
	float                                              TransitionIn;                                               // 0x0024   (0x0004)  
	float                                              TransitionOut;                                              // 0x0028   (0x0004)  
	FFloatRange                                        WindSpeedRange;                                             // 0x002C   (0x0010)  
	bool                                               UseRandomWindDirection;                                     // 0x003C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x003D   (0x0003)  MISSED
	float                                              WindDirectionDegree;                                        // 0x0040   (0x0004)  
	FGameplayTag                                       MorningTemperature;                                         // 0x0044   (0x0004)  
	FGameplayTag                                       DayTemperature;                                             // 0x0048   (0x0004)  
	FGameplayTag                                       EveningTemperature;                                         // 0x004C   (0x0004)  
	FGameplayTag                                       NightTemperature;                                           // 0x0050   (0x0004)  
	FFloatRange                                        WeatherIntensityRange;                                      // 0x0054   (0x0010)  
};

/// Struct /Script/JunoGameNative.JunoWeatherLocalizedForecasts
/// Size: 0x0018 (0x000000 - 0x000018)
struct FJunoWeatherLocalizedForecasts
{ 
	FJunoWeatherLocation                               Location;                                                   // 0x0000   (0x0002)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0002   (0x0006)  MISSED
	TArray<FJunoWeatherPhaseForecast>                  WeatherTypes;                                               // 0x0008   (0x0010)  
};

/// Struct /Script/JunoGameNative.JunoWeatherSeasonRow
/// Size: 0x0018 (0x000008 - 0x000020)
struct FJunoWeatherSeasonRow : FTableRowBase
{ 
	FGameplayTag                                       Season;                                                     // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FJunoWeatherLocalizedForecasts>             LocalizedForecasts;                                         // 0x0010   (0x0010)  
};

/// Struct /Script/JunoGameNative.JunoWorldConditionAICampChecks
/// Size: 0x00B8 (0x000010 - 0x0000C8)
struct FJunoWorldConditionAICampChecks : FWorldConditionCommonBase
{ 
	FWorldConditionContextDataRef                      EventDataRef;                                               // 0x0010   (0x0008)  
	FWorldConditionContextDataRef                      AIRef;                                                      // 0x0018   (0x0008)  
	EJunoWorldConditionAICampChecksIsAssigned          MustBeAssignedToACamp;                                      // 0x0020   (0x0001)  
	EJunoWorldConditionAICampChecksIsAssigned          MustBeAssignedToPlayer;                                     // 0x0021   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0022   (0x0002)  MISSED
	FWorldConditionContextDataRef                      PlayerControllerRef;                                        // 0x0024   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	FGameplayTagQuery                                  RoleMustMatchQuery;                                         // 0x0030   (0x0048)  
	FGameplayTagQuery                                  SoftRemovedReasonsMustMatchQuery;                           // 0x0078   (0x0048)  
	EJunoWorldConditionMustHaveLastUsedGatheringActor  MustHaveLastUsedGatheringActor;                             // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x00C1   (0x0007)  MISSED
};

/// Struct /Script/JunoGameNative.JunoWorldConditionBed
/// Size: 0x0018 (0x000010 - 0x000028)
struct FJunoWorldConditionBed : FWorldConditionCommonActorBase
{ 
	FWorldConditionContextDataRef                      BedActorRef;                                                // 0x0010   (0x0008)  
	FWorldConditionContextDataRef                      UserActorRef;                                               // 0x0018   (0x0008)  
	EJunoWorldConditionAssignmentState                 AssignmentState;                                            // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/JunoGameNative.JunoWorldConditionIsInCave
/// Size: 0x0008 (0x000010 - 0x000018)
struct FJunoWorldConditionIsInCave : FWorldConditionCommonActorBase
{ 
	FWorldConditionContextDataRef                      ActorRef;                                                   // 0x0010   (0x0008)  
};

/// Struct /Script/JunoGameNative.JunoWorldConditionIsSpatiallyInCamp
/// Size: 0x0008 (0x000010 - 0x000018)
struct FJunoWorldConditionIsSpatiallyInCamp : FWorldConditionCommonActorBase
{ 
	FWorldConditionContextDataRef                      ActorRef;                                                   // 0x0010   (0x0008)  
};

/// Struct /Script/JunoGameNative.JunoWorldConditionLocalCampChecks
/// Size: 0x0010 (0x000010 - 0x000020)
struct FJunoWorldConditionLocalCampChecks : FWorldConditionCommonActorBase
{ 
	FWorldConditionContextDataRef                      ActorRef;                                                   // 0x0010   (0x0008)  
	bool                                               bMustHaveFreeRecruitmentObject;                             // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0019   (0x0003)  MISSED
	float                                              MinimumRemainingSoftRemovalTimeInJunoHours;                 // 0x001C   (0x0004)  
};

/// Struct /Script/JunoGameNative.JunoWorldConditionPawnType
/// Size: 0x0010 (0x000010 - 0x000020)
struct FJunoWorldConditionPawnType : FWorldConditionCommonActorBase
{ 
	FWorldConditionContextDataRef                      PawnRef;                                                    // 0x0010   (0x0008)  
	char                                               AnyPawnType;                                                // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/JunoGameNative.JunoWorldConditionPlayerCampChecks
/// Size: 0x0010 (0x000010 - 0x000020)
struct FJunoWorldConditionPlayerCampChecks : FWorldConditionCommonBase
{ 
	FWorldConditionContextDataRef                      PlayerControllerRef;                                        // 0x0010   (0x0008)  
	EJunoWorldConditionHasFollower                     PlayerHasFollowersCheck;                                    // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/JunoGameNative.JunoWorldConditionQuantityInAIResourcesInventory
/// Size: 0x0010 (0x000010 - 0x000020)
struct FJunoWorldConditionQuantityInAIResourcesInventory : FWorldConditionCommonActorBase
{ 
	FWorldConditionContextDataRef                      AIRef;                                                      // 0x0010   (0x0008)  
	int32_t                                            RequiredResourcesCount;                                     // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/JunoGameNative.JunoWorldConditionSandboxChecks
/// Size: 0x0000 (0x000010 - 0x000010)
struct FJunoWorldConditionSandboxChecks : FWorldConditionCommonBase
{ 
};

/// Struct /Script/JunoGameNative.JunoWorldPersistenceFeatureData_InGameClass_PersistentInfo
/// Size: 0x0050 (0x000000 - 0x000050)
struct FJunoWorldPersistenceFeatureData_InGameClass_PersistentInfo
{ 
	FJunoWorldSaveData                                 WorldSaveData;                                              // 0x0000   (0x0050)  
};

/// Struct /Script/JunoGameNative.JunoWorldSettingsPersistenceFeatureData_InGameClass_PersistentInfo
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoWorldSettingsPersistenceFeatureData_InGameClass_PersistentInfo
{ 
	FJunoWorldSettingsSaveData                         WorldSettingsSaveData;                                      // 0x0000   (0x0010)  
};

/// Struct /Script/JunoGameNative.JunoWorldSettingBoolToggleEvent
/// Size: 0x0008 (0x000000 - 0x000008)
struct FJunoWorldSettingBoolToggleEvent
{ 
	FGameplayTag                                       SettingName;                                                // 0x0000   (0x0004)  
	bool                                               bIsSettingOn;                                               // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Struct /Script/JunoGameNative.JunoWorldSettingTaintedEvent
/// Size: 0x0008 (0x000000 - 0x000008)
struct FJunoWorldSettingTaintedEvent
{ 
	FGameplayTag                                       SettingName;                                                // 0x0000   (0x0004)  
	bool                                               bIsSettingTainted;                                          // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Struct /Script/JunoGameNative.JunoItemDiscoveredMessage
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoItemDiscoveredMessage
{ 
	class UFortItemDefinition*                         NewItemDefinition;                                          // 0x0000   (0x0008)  
	class AFortPlayerState*                            InstigatorPlayerState;                                      // 0x0008   (0x0008)  
};

/// Struct /Script/JunoGameNative.JunoItemViewStateChanged
/// Size: 0x0018 (0x000000 - 0x000018)
struct FJunoItemViewStateChanged
{ 
	class AFortPlayerState*                            PlayerState;                                                // 0x0000   (0x0008)  
	class UFortItemDefinition*                         ItemDefinition;                                             // 0x0008   (0x0008)  
	bool                                               bIsViewed;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/JunoGameNative.JunoRecipeViewStateChanged
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoRecipeViewStateChanged
{ 
	class AFortPlayerState*                            PlayerState;                                                // 0x0000   (0x0008)  
	FName                                              RecipeName;                                                 // 0x0008   (0x0004)  
	bool                                               bIsViewed;                                                  // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/JunoGameNative.JunoRecipeMessageData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoRecipeMessageData
{ 
	FName                                              RowName;                                                    // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	class AFortPlayerState*                            DiscoveredByPlayerState;                                    // 0x0008   (0x0008)  
};

/// Struct /Script/JunoGameNative.JunoRecipeRevealedMessage
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoRecipeRevealedMessage
{ 
	TArray<FJunoRecipeMessageData>                     FoundRecipes;                                               // 0x0000   (0x0010)  
};

/// Struct /Script/JunoGameNative.JunoRecipeVisibleMessage
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoRecipeVisibleMessage
{ 
	TArray<FJunoRecipeMessageData>                     VisibleRecipes;                                             // 0x0000   (0x0010)  
};

/// Struct /Script/JunoGameNative.JunoEvent_RequestMapMarkerCustomization
/// Size: 0x0008 (0x000000 - 0x000008)
struct FJunoEvent_RequestMapMarkerCustomization
{ 
	class UJunoMapMarkerCustomizationInitData*         InitData;                                                   // 0x0000   (0x0008)  
};

/// Struct /Script/JunoGameNative.JunoEvent_OpenPlayerManagement
/// Size: 0x0001 (0x000000 - 0x000001)
struct FJunoEvent_OpenPlayerManagement
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/JunoGameNative.CampRemovalEntry
/// Size: 0x0018 (0x000000 - 0x000018)
struct FCampRemovalEntry
{ 
	SDK_UNDEFINED(8,12238) /* TWeakObjectPtr<AJunoCampActor*> */ __um(CampActor);                                  // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0008   (0x0010)  MISSED
};

/// Struct /Script/JunoGameNative.JunoCampManagementPerk
/// Size: 0x0060 (0x000008 - 0x000068)
struct FJunoCampManagementPerk : FTableRowBase
{ 
	SDK_UNDEFINED(24,12239) /* FText */                __um(Title);                                                // 0x0008   (0x0018)  
	SDK_UNDEFINED(24,12240) /* FText */                __um(Description);                                          // 0x0020   (0x0018)  
	FGameplayTagContainer                              GameplayTags;                                               // 0x0038   (0x0020)  
	TArray<class UClass*>                              GEsToApply;                                                 // 0x0058   (0x0010)  
};

/// Struct /Script/JunoGameNative.JunoCampManagementPlayerPerk
/// Size: 0x0018 (0x000068 - 0x000080)
struct FJunoCampManagementPlayerPerk : FJunoCampManagementPerk
{ 
	FWorldConditionQueryDefinition                     SelectionPreconditions;                                     // 0x0068   (0x0018)  
};

/// Struct /Script/JunoGameNative.JunoCampManagementNPCPerk
/// Size: 0x0000 (0x000068 - 0x000068)
struct FJunoCampManagementNPCPerk : FJunoCampManagementPerk
{ 
};

/// Struct /Script/JunoGameNative.JunoCampManagementNPCPerkPerBiome
/// Size: 0x0000 (0x000068 - 0x000068)
struct FJunoCampManagementNPCPerkPerBiome : FJunoCampManagementPerk
{ 
};

/// Struct /Script/JunoGameNative.JunoStudGunSelected
/// Size: 0x0001 (0x000000 - 0x000001)
struct FJunoStudGunSelected
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/JunoGameNative.JunoStudGunAttachModeEntered
/// Size: 0x0001 (0x000000 - 0x000001)
struct FJunoStudGunAttachModeEntered
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/JunoGameNative.JunoStudGunAttachModeExited
/// Size: 0x0001 (0x000000 - 0x000001)
struct FJunoStudGunAttachModeExited
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/JunoGameNative.JunoStudGunUnselected
/// Size: 0x0001 (0x000000 - 0x000001)
struct FJunoStudGunUnselected
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/JunoGameNative.JunoAwesomePlacementConfigTableRow
/// Size: 0x0030 (0x000008 - 0x000038)
struct FJunoAwesomePlacementConfigTableRow : FTableRowBase
{ 
	EJunoAwesomePlacementConfigType                    PlacementConfigType;                                        // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	SDK_UNDEFINED(32,12241) /* TWeakObjectPtr<UJunoBuildInstructionsItemDefinition*> */ __um(ItemDefinition);      // 0x0010   (0x0020)  
	FName                                              CraftingRowName;                                            // 0x0030   (0x0004)  
	int32_t                                            AwesomePointsToContribute;                                  // 0x0034   (0x0004)  
};

/// Struct /Script/JunoGameNative.JunoRecipeUnlockType
/// Size: 0x0008 (0x000000 - 0x000008)
struct FJunoRecipeUnlockType
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/JunoGameNative.JunoRecipeUnlockType_BuildInstructions
/// Size: 0x0010 (0x000008 - 0x000018)
struct FJunoRecipeUnlockType_BuildInstructions : FJunoRecipeUnlockType
{ 
	SDK_UNDEFINED(16,12242) /* TArray<TWeakObjectPtr<UJunoBuildInstructionsItemDefinition*>> */ __um(BuildInstructions); // 0x0008   (0x0010)  
};

/// Struct /Script/JunoGameNative.JunoRecipeUnlockType_CraftingRowNames
/// Size: 0x0010 (0x000008 - 0x000018)
struct FJunoRecipeUnlockType_CraftingRowNames : FJunoRecipeUnlockType
{ 
	TArray<FName>                                      CraftingRowNames;                                           // 0x0008   (0x0010)  
};

/// Struct /Script/JunoGameNative.JunoRecipeUnlockType_KnowledgeBundle
/// Size: 0x0008 (0x000008 - 0x000010)
struct FJunoRecipeUnlockType_KnowledgeBundle : FJunoRecipeUnlockType
{ 
	class UJunoKnowledgeBundle*                        KnowledgeBundle;                                            // 0x0008   (0x0008)  
};

/// Struct /Script/JunoGameNative.JunoEventReaction_RecipeKnowledgeState
/// Size: 0x0018 (0x000008 - 0x000020)
struct FJunoEventReaction_RecipeKnowledgeState : FEventReactionBase
{ 
	TArray<FInstancedStruct>                           RecipeUnlockTypes;                                          // 0x0008   (0x0010)  
	EJunoKnowledgeState                                NewState;                                                   // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/JunoGameNative.PlayerAwesomeUpgradeResourceData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPlayerAwesomeUpgradeResourceData
{ 
	TArray<class UFortItem*>                           ResourceInstances;                                          // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0010   (0x0008)  MISSED
};

/// Struct /Script/JunoGameNative.JunoVerbFilter_AwesomeLevelIncreased
/// Size: 0x0090 (0x0000A0 - 0x000130)
struct FJunoVerbFilter_AwesomeLevelIncreased : FObjectiveFilter
{ 
	FObjectiveSubjectTags_Progressible                 SourceActor;                                                // 0x00A0   (0x0050)  
	bool                                               bUseNewLevelRequirement;                                    // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00F1   (0x0003)  MISSED
	FInt32Range                                        RequiredNewLevel;                                           // 0x00F4   (0x0010)  
	bool                                               bUsePrevLevelRequirement;                                   // 0x0104   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0105   (0x0003)  MISSED
	FInt32Range                                        RequiredPrevLevel;                                          // 0x0108   (0x0010)  
	bool                                               bUseRemainingPointsLevelRequirement;                        // 0x0118   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0119   (0x0003)  MISSED
	FInt32Range                                        RequiredRemainingPoints;                                    // 0x011C   (0x0010)  
	EJunoAwesomeLevelIncrementType                     IncrementBy;                                                // 0x012C   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x012D   (0x0003)  MISSED
};

/// Struct /Script/JunoGameNative.JunoVerbFilter_GuidedBuildCompleted
/// Size: 0x0098 (0x0000A0 - 0x000138)
struct FJunoVerbFilter_GuidedBuildCompleted : FObjectiveFilter
{ 
	FObjectiveSubjectTags                              GuidedBuilding;                                             // 0x00A0   (0x0048)  
	FObjectiveSubjectTags_Progressible                 BuildContributors;                                          // 0x00E8   (0x0050)  
};

/// Struct /Script/JunoGameNative.JunoVerbFilter_GuidedBuildStageCompleted
/// Size: 0x0050 (0x0000A0 - 0x0000F0)
struct FJunoVerbFilter_GuidedBuildStageCompleted : FObjectiveFilter
{ 
	FObjectiveSubjectTags                              GuidedBuilding;                                             // 0x00A0   (0x0048)  
	FJunoStageKey                                      StageKey;                                                   // 0x00E8   (0x0008)  
};

/// Struct /Script/JunoGameNative.JunoVerbFilter_RecruitNPC
/// Size: 0x0090 (0x0000A0 - 0x000130)
struct FJunoVerbFilter_RecruitNPC : FObjectiveFilter
{ 
	FObjectiveSubjectTags                              UniqueAIIdentifier;                                         // 0x00A0   (0x0048)  
	FObjectiveSubjectTags                              AIRole;                                                     // 0x00E8   (0x0048)  
};

/// Struct /Script/JunoGameNative.JunoVerbFilter_TemperatureUpdated
/// Size: 0x0090 (0x0000A0 - 0x000130)
struct FJunoVerbFilter_TemperatureUpdated : FObjectiveFilter
{ 
	FObjectiveSubjectTags                              PreviousTemperature;                                        // 0x00A0   (0x0048)  
	FObjectiveSubjectTags                              NewTemperature;                                             // 0x00E8   (0x0048)  
};

/// Struct /Script/JunoGameNative.JunoBuildingResourceData
/// Size: 0x0018 (0x000008 - 0x000020)
struct FJunoBuildingResourceData : FTableRowBase
{ 
	FDataTableRowHandle                                ResourceItemHandle;                                         // 0x0008   (0x0010)  
	EJunoResourceScale                                 ResourceScale;                                              // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/JunoGameNative.JunoResourceData
/// Size: 0x0070 (0x000008 - 0x000078)
struct FJunoResourceData : FTableRowBase
{ 
	SDK_UNDEFINED(32,12243) /* TWeakObjectPtr<UFortWorldItemDefinition*> */ __um(ItemDefinition);                  // 0x0008   (0x0020)  
	SDK_UNDEFINED(80,12244) /* TMap<EJunoResourceScale, int32_t> */ __um(Amount);                                  // 0x0028   (0x0050)  
};

/// Struct /Script/JunoGameNative.JunoEvent_RootPlayspaceReady
/// Size: 0x0008 (0x000000 - 0x000008)
struct FJunoEvent_RootPlayspaceReady
{ 
	class AJunoRootPlayspace*                          Playspace;                                                  // 0x0000   (0x0008)  
};

/// Struct /Script/JunoGameNative.JunoEvent_WorldLoadedOrCreated
/// Size: 0x0088 (0x000000 - 0x000088)
struct FJunoEvent_WorldLoadedOrCreated
{ 
	FJunoWorldMetadata                                 WorldMetadata;                                              // 0x0000   (0x0088)  
};

/// Struct /Script/JunoGameNative.PCGJunoPossibleWorld
/// Size: 0x0038 (0x000008 - 0x000040)
struct FPCGJunoPossibleWorld : FTableRowBase
{ 
	SDK_UNDEFINED(32,12245) /* TWeakObjectPtr<UWorld*> */ __um(PersistentLevel);                                   // 0x0008   (0x0020)  
	SDK_UNDEFINED(16,12246) /* TArray<TWeakObjectPtr<UWorld*>> */ __um(OverlayLevels);                             // 0x0028   (0x0010)  
	bool                                               bCanBeRandomlySelected;                                     // 0x0038   (0x0001)  
	bool                                               bIsDeprecated;                                              // 0x0039   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x003A   (0x0006)  MISSED
};

/// Struct /Script/JunoGameNative.JunoItemChangedMessage
/// Size: 0x0060 (0x000000 - 0x000060)
struct FJunoItemChangedMessage
{ 
	class UJunoInventoryComponent*                     OwningInventoryComponent;                                   // 0x0000   (0x0008)  
	FJunoItemSlot                                      ChangedSlot;                                                // 0x0008   (0x0050)  
	EJunoItemChangeType                                ItemChangeType;                                             // 0x0058   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0059   (0x0007)  MISSED
};

/// Struct /Script/JunoGameNative.JunoItemSlotPrediction
/// Size: 0x0030 (0x000000 - 0x000030)
struct FJunoItemSlotPrediction
{ 
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0000   (0x0030)  MISSED
};

/// Struct /Script/JunoGameNative.JunoBuilderToolSupportActorComponentPair
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoBuilderToolSupportActorComponentPair
{ 
	class AActor*                                      Actor;                                                      // 0x0000   (0x0008)  
	class UPrimitiveComponent*                         Component;                                                  // 0x0008   (0x0008)  
};

/// Struct /Script/JunoGameNative.JunoBuilderToolSupportCandidate
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoBuilderToolSupportCandidate
{ 
	SDK_UNDEFINED(8,12247) /* TWeakObjectPtr<AActor*> */ __um(Actor);                                              // 0x0000   (0x0008)  
	SDK_UNDEFINED(8,12248) /* TWeakObjectPtr<UPrimitiveComponent*> */ __um(Component);                             // 0x0008   (0x0008)  
};

/// Struct /Script/JunoGameNative.JunoBuilderToolSelectionSpawnParams
/// Size: 0x0100 (0x000000 - 0x000100)
struct FJunoBuilderToolSelectionSpawnParams
{ 
	TArray<FJunoBuilderToolSelectedActor>              SelectedActors;                                             // 0x0000   (0x0010)  
	FTransform                                         SelectionTransform;                                         // 0x0010   (0x0060)  
	SDK_UNDEFINED(8,12249) /* TWeakObjectPtr<AActor*> */ __um(AttachmentActor);                                    // 0x0070   (0x0008)  
	TArray<FJunoBuilderToolSupportCandidate>           SupportCandidates;                                          // 0x0078   (0x0010)  
	class APawn*                                       Instigator;                                                 // 0x0088   (0x0008)  
	FName                                              RecipeName;                                                 // 0x0090   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0094   (0x0004)  MISSED
	TArray<FName>                                      StableNames;                                                // 0x0098   (0x0010)  
	FGameplayTagContainer                              GameplayTags;                                               // 0x00A8   (0x0020)  
	FBox                                               WorldSpaceBoundingBox;                                      // 0x00C8   (0x0038)  
};

/// Struct /Script/JunoGameNative.JunoBuildingFloatingParams
/// Size: 0x0160 (0x000000 - 0x000160)
struct FJunoBuildingFloatingParams
{ 
	unsigned char                                      UnknownData00_2[0x160];                                     // 0x0000   (0x0160)  MISSED
};

/// Struct /Script/JunoGameNative.OnPlacementAction
/// Size: 0x000C (0x000000 - 0x00000C)
struct FOnPlacementAction
{ 
	SDK_UNDEFINED(8,12250) /* TWeakObjectPtr<AActor*> */ __um(Actor);                                              // 0x0000   (0x0008)  
	EOnPlacementAction                                 Action;                                                     // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/JunoGameNative.JunoBuildingPlacementResult
/// Size: 0x0280 (0x000000 - 0x000280)
struct FJunoBuildingPlacementResult
{ 
	FTransform                                         CameraViewPoint;                                            // 0x0000   (0x0060)  
	FHitResult                                         TargetTraceResult;                                          // 0x0060   (0x00E8)  
	EJunoBuildingPlacementType                         PlacementType;                                              // 0x0148   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0149   (0x0007)  MISSED
	FTransform                                         UnsnappedTargetTransform;                                   // 0x0150   (0x0060)  
	FTransform                                         TargetTransform;                                            // 0x01B0   (0x0060)  
	FTransform                                         CoordinateBasis;                                            // 0x0210   (0x0060)  
	SDK_UNDEFINED(8,12251) /* TWeakObjectPtr<AActor*> */ __um(AttachmentActor);                                    // 0x0270   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0278   (0x0008)  MISSED
};

/// Struct /Script/JunoGameNative.JunoSortTagData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FJunoSortTagData
{ 
	FGameplayTag                                       SortTag;                                                    // 0x0000   (0x0004)  
	int32_t                                            MaxStageSize;                                               // 0x0004   (0x0004)  
};

/// Struct /Script/JunoGameNative.JunoGuidedBuildingUpdateData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FJunoGuidedBuildingUpdateData
{ 
	TArray<int32_t>                                    UpdatedSnaps;                                               // 0x0000   (0x0010)  
	TArray<FJunoStageKey>                              UpdatedStages;                                              // 0x0010   (0x0010)  
	TArray<FJunoStageKey>                              CompletedStages;                                            // 0x0020   (0x0010)  
	TArray<FJunoStageKey>                              CompletedSections;                                          // 0x0030   (0x0010)  
	bool                                               bSetComplete;                                               // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0041   (0x0003)  MISSED
	SDK_UNDEFINED(8,12252) /* TWeakObjectPtr<AActor*> */ __um(FinishingPlayer);                                    // 0x0044   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/JunoGameNative.JunoGuidedBuildRemainingPartsInfo
/// Size: 0x000C (0x000000 - 0x00000C)
struct FJunoGuidedBuildRemainingPartsInfo
{ 
	FName                                              Recipe;                                                     // 0x0000   (0x0004)  
	int32_t                                            Remaining;                                                  // 0x0004   (0x0004)  
	int32_t                                            Total;                                                      // 0x0008   (0x0004)  
};

/// Struct /Script/JunoGameNative.JunoEvent_LastGuidedBuildingActorChanged
/// Size: 0x0008 (0x000000 - 0x000008)
struct FJunoEvent_LastGuidedBuildingActorChanged
{ 
	SDK_UNDEFINED(8,12253) /* TWeakObjectPtr<AJunoGuidedBuildingActor*> */ __um(NewActor);                         // 0x0000   (0x0008)  
};

/// Struct /Script/JunoGameNative.AutoCompleteData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FAutoCompleteData
{ 
	int32_t                                            BuildingDataIndex;                                          // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	class APawn*                                       Instigator;                                                 // 0x0008   (0x0008)  
	double                                             ServerSpawnTime;                                            // 0x0010   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0018   (0x0008)  MISSED
};

/// Struct /Script/JunoGameNative.JunoGuidedBuildingBrushState
/// Size: 0x0018 (0x000000 - 0x000018)
struct FJunoGuidedBuildingBrushState
{ 
	bool                                               bIsGuidedBuildSelected;                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	TArray<class UPrimitiveComponent*>                 Comps;                                                      // 0x0008   (0x0010)  
};

/// Struct /Script/JunoGameNative.JunoCommonPartsSettings
/// Size: 0x0020 (0x000000 - 0x000020)
struct FJunoCommonPartsSettings
{ 
	class UStaticMesh*                                 Mesh;                                                       // 0x0000   (0x0008)  
	class UMaterialInterface*                          Material;                                                   // 0x0008   (0x0008)  
	float                                              Height;                                                     // 0x0010   (0x0004)  
	float                                              Radius;                                                     // 0x0014   (0x0004)  
	float                                              InnerRadius;                                                // 0x0018   (0x0004)  
	bool                                               bShowLogo;                                                  // 0x001C   (0x0001)  
	char                                               PlaneQuadrant;                                              // 0x001D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x001E   (0x0002)  MISSED
};

/// Struct /Script/JunoGameNative.ProjectPlayResourceData
/// Size: 0x0030 (0x000008 - 0x000038)
struct FProjectPlayResourceData : FTableRowBase
{ 
	SDK_UNDEFINED(32,12254) /* TWeakObjectPtr<UFortWorldItemDefinition*> */ __um(ItemDefinition);                  // 0x0008   (0x0020)  
	FCurveTableRowHandle                               ResourceAmount;                                             // 0x0028   (0x0010)  
};

/// Struct /Script/JunoGameNative.JunoBuildingTagData
/// Size: 0x0028 (0x000008 - 0x000030)
struct FJunoBuildingTagData : FTableRowBase
{ 
	SDK_UNDEFINED(32,12255) /* TWeakObjectPtr<UClass*> */ __um(BlueprintClass);                                    // 0x0008   (0x0020)  
	FGameplayTag                                       tag;                                                        // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/JunoGameNative.JunoBuildInstructionsDisplayData
/// Size: 0x0080 (0x000000 - 0x000080)
struct FJunoBuildInstructionsDisplayData
{ 
	EFortItemType                                      ItemType;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	SDK_UNDEFINED(24,12256) /* FText */                __um(ItemTypeNameOverride);                                 // 0x0008   (0x0018)  
	SDK_UNDEFINED(24,12257) /* FText */                __um(DisplayName);                                          // 0x0020   (0x0018)  
	SDK_UNDEFINED(24,12258) /* FText */                __um(QuantityDisplayName);                                  // 0x0038   (0x0018)  
	SDK_UNDEFINED(24,12259) /* FText */                __um(ShortDescription);                                     // 0x0050   (0x0018)  
	SDK_UNDEFINED(24,12260) /* FText */                __um(Description);                                          // 0x0068   (0x0018)  
};

/// Struct /Script/JunoGameNative.JunoBuildInstructionsPickupData
/// Size: 0x0100 (0x000000 - 0x000100)
struct FJunoBuildInstructionsPickupData
{ 
	SDK_UNDEFINED(32,12261) /* TWeakObjectPtr<UStaticMesh*> */ __um(PickupStaticMesh);                             // 0x0000   (0x0020)  
	SDK_UNDEFINED(32,12262) /* TWeakObjectPtr<USkeletalMesh*> */ __um(PickupSkeletalMesh);                         // 0x0020   (0x0020)  
	SDK_UNDEFINED(32,12263) /* TWeakObjectPtr<UClass*> */ __um(PickupEffectOverride);                              // 0x0040   (0x0020)  
	SDK_UNDEFINED(32,12264) /* TWeakObjectPtr<USoundBase*> */ __um(PickupSound);                                   // 0x0060   (0x0020)  
	SDK_UNDEFINED(32,12265) /* TWeakObjectPtr<USoundBase*> */ __um(PickupByNearbyPawnSound);                       // 0x0080   (0x0020)  
	SDK_UNDEFINED(32,12266) /* TWeakObjectPtr<USoundBase*> */ __um(DropSound);                                     // 0x00A0   (0x0020)  
	SDK_UNDEFINED(32,12267) /* TWeakObjectPtr<USoundBase*> */ __um(DroppedLoopSound);                              // 0x00C0   (0x0020)  
	SDK_UNDEFINED(32,12268) /* TWeakObjectPtr<USoundBase*> */ __um(LandedSound);                                   // 0x00E0   (0x0020)  
};

/// Struct /Script/JunoGameNative.JunoBuildInstructionsItemData
/// Size: 0x0058 (0x000000 - 0x000058)
struct FJunoBuildInstructionsItemData
{ 
	bool                                               bGiveResourcesOnDestroy;                                    // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              SelfCraftingFormulaName;                                    // 0x0004   (0x0004)  
	SDK_UNDEFINED(32,12269) /* TWeakObjectPtr<UClass*> */ __um(ActorClassToBuild);                                 // 0x0008   (0x0020)  
	SDK_UNDEFINED(24,12270) /* FText */                __um(SizeDescription);                                      // 0x0028   (0x0018)  
	SDK_UNDEFINED(24,12271) /* FText */                __um(SetDescription);                                       // 0x0040   (0x0018)  
};

/// Struct /Script/JunoGameNative.JunoBuildInstructionsInitializationParams
/// Size: 0x01F8 (0x000000 - 0x0001F8)
struct FJunoBuildInstructionsInitializationParams
{ 
	FJunoBuildInstructionsDisplayData                  Display;                                                    // 0x0000   (0x0080)  
	FGameplayTagContainer                              GameplayTags;                                               // 0x0080   (0x0020)  
	FJunoBuildInstructionsPickupData                   Pickup;                                                     // 0x00A0   (0x0100)  
	FJunoBuildInstructionsItemData                     BuildInstructions;                                          // 0x01A0   (0x0058)  
};

/// Struct /Script/JunoGameNative.ConnectivityRemovalStreamPendingData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FConnectivityRemovalStreamPendingData
{ 
	class UJunoConnectivityComponent*                  Component;                                                  // 0x0000   (0x0008)  
	float                                              Z;                                                          // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/JunoGameNative.ConnectivityRemovalStreamPendingContainer
/// Size: 0x0010 (0x000000 - 0x000010)
struct FConnectivityRemovalStreamPendingContainer
{ 
	TArray<FConnectivityRemovalStreamPendingData>      Data;                                                       // 0x0000   (0x0010)  
};

/// Struct /Script/JunoGameNative.JunoEvent_KnowledgeComponentReadyOnClient
/// Size: 0x0008 (0x000000 - 0x000008)
struct FJunoEvent_KnowledgeComponentReadyOnClient
{ 
	class UJunoKnowledgeComponent*                     KnowledgeComponent;                                         // 0x0000   (0x0008)  
};

/// Struct /Script/JunoGameNative.JunoUpdateAction
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FJunoUpdateAction
{ 
	FActorInstanceRecord                               ActorInstanceRecord;                                        // 0x0000   (0x00A0)  
};

/// Struct /Script/JunoGameNative.JunoDeltasStorage_Index_Dss
/// Size: 0x0058 (0x000000 - 0x000058)
struct FJunoDeltasStorage_Index_Dss
{ 
	int32_t                                            WorldCompatibilityVersion;                                  // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(80,12272) /* TMap<FString, FString> */ __um(PackageDeltaFiles);                                  // 0x0008   (0x0050)  
};

/// Struct /Script/JunoGameNative.JunoDeltasStorage_Index_PFW
/// Size: 0x0058 (0x000000 - 0x000058)
struct FJunoDeltasStorage_Index_PFW
{ 
	int32_t                                            WorldCompatibilityVersion;                                  // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(80,12273) /* TMap<FString, FJsonObjectWrapper> */ __um(DeltasMetadata);                          // 0x0008   (0x0050)  
};

/// Struct /Script/JunoGameNative.JunoPFWDeltaContentBase64
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoPFWDeltaContentBase64
{ 
	SDK_UNDEFINED(16,12274) /* FString */              __um(Content);                                              // 0x0000   (0x0010)  
};

/// Struct /Script/JunoGameNative.JunoPersistentPlayspaceLevelRegistryEntry
/// Size: 0x0024 (0x000000 - 0x000024)
struct FJunoPersistentPlayspaceLevelRegistryEntry
{ 
	SDK_UNDEFINED(8,12275) /* TWeakObjectPtr<AJunoPersistentPlayspace*> */ __um(PersistentPlayspaceWeakPtr);       // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x1C];                                      // 0x0008   (0x001C)  MISSED
};

/// Struct /Script/JunoGameNative.JunoClusterUnionPersistenceFeatureData_PersistentInfo
/// Size: 0x0050 (0x000000 - 0x000050)
struct FJunoClusterUnionPersistenceFeatureData_PersistentInfo
{ 
	FJunoClusterUnionSaveData                          SaveData;                                                   // 0x0000   (0x0050)  
};

/// Struct /Script/JunoGameNative.JunoSingleClusterUnionSaveData
/// Size: 0x0060 (0x000000 - 0x000060)
struct FJunoSingleClusterUnionSaveData
{ 
	FTransform                                         WorldTransform;                                             // 0x0000   (0x0060)  
};

/// Struct /Script/JunoGameNative.JunoConnectivityGraphPFW_PersistentInfo
/// Size: 0x0108 (0x000000 - 0x000108)
struct FJunoConnectivityGraphPFW_PersistentInfo
{ 
	FSerializableConnectivityGraph                     SavedConnectivityData;                                      // 0x0000   (0x0108)  
};

/// Struct /Script/JunoGameNative.JunoPhysicsToyPersistenceFeatureData_PersistentInfo
/// Size: 0x0050 (0x000000 - 0x000050)
struct FJunoPhysicsToyPersistenceFeatureData_PersistentInfo
{ 
	FJunoPhysicsToySaveData                            Container;                                                  // 0x0000   (0x0050)  
};

/// Struct /Script/JunoGameNative.JunoSinglePhysicsToySaveData
/// Size: 0x0080 (0x000000 - 0x000080)
struct FJunoSinglePhysicsToySaveData
{ 
	FPersistenceFrameworkLevelSaveSpawnablePtr         AttachedActor;                                              // 0x0000   (0x0020)  
	FTransform                                         RelativeOffset;                                             // 0x0020   (0x0060)  
};

/// Struct /Script/JunoGameNative.JunoEvent_OnDeathUI
/// Size: 0x0001 (0x000000 - 0x000001)
struct FJunoEvent_OnDeathUI
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/JunoGameNative.JunoEvent_OnInventoryFull
/// Size: 0x0001 (0x000000 - 0x000001)
struct FJunoEvent_OnInventoryFull
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/JunoGameNative.JunoEvent_TransitionUIState
/// Size: 0x0001 (0x000000 - 0x000001)
struct FJunoEvent_TransitionUIState
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
};

/// Struct /Script/JunoGameNative.JunoEvent_CheckPointRemoved
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoEvent_CheckPointRemoved
{ 
	FGuid                                              CheckpointGUID;                                             // 0x0000   (0x0010)  
};

/// Struct /Script/JunoGameNative.JunoEvent_PawnEmotion
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoEvent_PawnEmotion
{ 
	class AFortPlayerPawnAthena*                       Pawn;                                                       // 0x0000   (0x0008)  
	EJunoPawnEmotionalState                            CurrentEmotionalState;                                      // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              EmotionPercent;                                             // 0x000C   (0x0004)  
};

/// Struct /Script/JunoGameNative.JunoWorldStreamingSources
/// Size: 0x0060 (0x000000 - 0x000060)
struct FJunoWorldStreamingSources
{ 
	unsigned char                                      UnknownData00_2[0x60];                                      // 0x0000   (0x0060)  MISSED
};

/// Struct /Script/JunoGameNative.JunoActionTargetPayload
/// Size: 0x0008 (0x000000 - 0x000008)
struct FJunoActionTargetPayload
{ 
	class AActor*                                      Target;                                                     // 0x0000   (0x0008)  
};

/// Struct /Script/JunoGameNative.JunoBuildLimitPool
/// Size: 0x0020 (0x000008 - 0x000028)
struct FJunoBuildLimitPool : FTableRowBase
{ 
	TArray<class UClass*>                              Classes;                                                    // 0x0008   (0x0010)  
	int32_t                                            MaxInstanceCount;                                           // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	class UClass*                                      BuildLimitGetterClass;                                      // 0x0020   (0x0008)  
};

/// Struct /Script/JunoGameNative.JunoRelevantActorTrackingData
/// Size: 0x0004 (0x000000 - 0x000004)
struct FJunoRelevantActorTrackingData
{ 
	int32_t                                            NetRelevantActorCount;                                      // 0x0000   (0x0004)  
};

/// Struct /Script/JunoGameNative.JunoProcessAwesomenessInteractionStateTreeTaskInstanceData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FJunoProcessAwesomenessInteractionStateTreeTaskInstanceData
{ 
	class AActor*                                      Actor;                                                      // 0x0000   (0x0008)  
	class AActor*                                      TargetActor;                                                // 0x0008   (0x0008)  
	FGameplayTag                                       InteractionTypeTag;                                         // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/JunoGameNative.JunoProcessAwesomenessInteractionStateTreeTask
/// Size: 0x0008 (0x000020 - 0x000028)
struct FJunoProcessAwesomenessInteractionStateTreeTask : FStateTreeTaskCommonBase
{ 
	EGameplayInteractionTaskTrigger                    InteractionTrigger;                                         // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/JunoGameNative.MeshAuditInfo
/// Size: 0x0080 (0x000000 - 0x000080)
struct FMeshAuditInfo
{ 
	FSoftObjectPath                                    AssetPath;                                                  // 0x0000   (0x0018)  
	EMeshAuditFailureReason                            FailureReason;                                              // 0x0018   (0x0004)  
	int32_t                                            NumConvexShapes;                                            // 0x001C   (0x0004)  
	int32_t                                            NumConvexShapePointsTotal;                                  // 0x0020   (0x0004)  
	int32_t                                            CollisionLOD;                                               // 0x0024   (0x0004)  
	int32_t                                            NumTrianglesInPhysicsMesh;                                  // 0x0028   (0x0004)  
	int32_t                                            NumNonStreamingLODs;                                        // 0x002C   (0x0004)  
	int32_t                                            NumInlineLODs;                                              // 0x0030   (0x0004)  
	int32_t                                            NumLODs;                                                    // 0x0034   (0x0004)  
	SDK_UNDEFINED(1,12276) /* TEnumAsByte<ECollisionTraceFlag> */ __um(CollisionTraceFlag);                        // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	TArray<int32_t>                                    TriCounts;                                                  // 0x0040   (0x0010)  
	int64_t                                            RenderResourceSystemSize;                                   // 0x0050   (0x0008)  
	int64_t                                            BodySetupResourceSize;                                      // 0x0058   (0x0008)  
	float                                              WorstTriRatio;                                              // 0x0060   (0x0004)  
	float                                              MeshBoundingBoxAreaMeters;                                  // 0x0064   (0x0004)  
	SDK_UNDEFINED(16,12277) /* FString */              __um(RouteToAsset);                                         // 0x0068   (0x0010)  
	bool                                               bCustomizedCollision;                                       // 0x0078   (0x0001)  
	bool                                               bMeshCollideAll;                                            // 0x0079   (0x0001)  
	bool                                               bNeverStream;                                               // 0x007A   (0x0001)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x007B   (0x0005)  MISSED
};

/// Struct /Script/JunoGameNative.SkeletalMeshAuditInfo
/// Size: 0x0060 (0x000000 - 0x000060)
struct FSkeletalMeshAuditInfo
{ 
	FSoftObjectPath                                    AssetPath;                                                  // 0x0000   (0x0018)  
	EMeshAuditFailureReason                            FailureReason;                                              // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	int64_t                                            RenderResourceSystemSize;                                   // 0x0020   (0x0008)  
	int32_t                                            NumNonOptionalLODs;                                         // 0x0028   (0x0004)  
	int32_t                                            NumInlineLODs;                                              // 0x002C   (0x0004)  
	int32_t                                            NumLODs;                                                    // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	TArray<int32_t>                                    TriCounts;                                                  // 0x0038   (0x0010)  
	int32_t                                            NumBoneInfluencesPerVertex;                                 // 0x0048   (0x0004)  
	int32_t                                            NumBonesInSkeleton;                                         // 0x004C   (0x0004)  
	float                                              WorstTriRatio;                                              // 0x0050   (0x0004)  
	float                                              MeshBoundingBoxAreaMeters;                                  // 0x0054   (0x0004)  
	bool                                               bNeverStream;                                               // 0x0058   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0059   (0x0007)  MISSED
};

/// Struct /Script/JunoGameNative.GeometryCollectionAuditData
/// Size: 0x00B8 (0x000000 - 0x0000B8)
struct FGeometryCollectionAuditData
{ 
	FSoftObjectPath                                    AssetPath;                                                  // 0x0000   (0x0018)  
	uint64_t                                           RestCollection_ManagedArraysSize;                           // 0x0018   (0x0008)  
	uint32_t                                           ComponentInstanceCount;                                     // 0x0020   (0x0004)  
	uint32_t                                           DynamicCollectionCount;                                     // 0x0024   (0x0004)  
	uint64_t                                           DynamicCollectionsTotalSize;                                // 0x0028   (0x0008)  
	int32_t                                            NumRigidsAllInstances;                                      // 0x0030   (0x0004)  
	int32_t                                            NumSimulatedParticlesAllInstances;                          // 0x0034   (0x0004)  
	int32_t                                            ReservedUnusedParticles;                                    // 0x0038   (0x0004)  
	int32_t                                            MaxClusterLevelRequested;                                   // 0x003C   (0x0004)  
	int32_t                                            MaxSimulatedClusterLevelRequested;                          // 0x0040   (0x0004)  
	int32_t                                            MaxCalculatedClusterLevel;                                  // 0x0044   (0x0004)  
	int32_t                                            MaxActualClusterLevel;                                      // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	uint64_t                                           RenderDataSize;                                             // 0x0050   (0x0008)  
	int32_t                                            NumExemplars;                                               // 0x0058   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x005C   (0x0004)  MISSED
	uint64_t                                           NaniteDataSize;                                             // 0x0060   (0x0008)  
	TArray<class UStaticMesh*>                         RootProxyMeshes;                                            // 0x0068   (0x0010)  
	uint64_t                                           NumAutoInstancedMeshes;                                     // 0x0078   (0x0008)  
	TArray<class UStaticMesh*>                         AutoInstancedMeshes;                                        // 0x0080   (0x0010)  
	uint64_t                                           SizeSpecificDataSize;                                       // 0x0090   (0x0008)  
	SDK_UNDEFINED(16,12278) /* FString */              __um(DynamicCollectionGroupsAndSizes);                      // 0x0098   (0x0010)  
	SDK_UNDEFINED(16,12279) /* FString */              __um(RestCollectionGroupsAndSizes);                         // 0x00A8   (0x0010)  
};

/// Struct /Script/JunoGameNative.JunoWorldConditionWeather
/// Size: 0x0048 (0x000010 - 0x000058)
struct FJunoWorldConditionWeather : FWorldConditionCommonBase
{ 
	FGameplayTagQuery                                  AllowedWeather;                                             // 0x0010   (0x0048)  
};

/// Struct /Script/JunoGameNative.JunoWorldConditionActorWeather
/// Size: 0x0050 (0x000010 - 0x000060)
struct FJunoWorldConditionActorWeather : FWorldConditionCommonActorBase
{ 
	FWorldConditionContextDataRef                      ActorRef;                                                   // 0x0010   (0x0008)  
	FGameplayTagQuery                                  AllowedWeather;                                             // 0x0018   (0x0048)  
};

