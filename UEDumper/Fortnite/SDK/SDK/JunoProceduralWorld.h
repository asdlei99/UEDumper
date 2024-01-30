
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DataRegistry
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: JunoGameNative
/// dependency: JunoProceduralLandscape
/// dependency: LagerRuntime
/// dependency: Landscape
/// dependency: MassActors
/// dependency: MassEntity
/// dependency: MassRepresentation
/// dependency: MassSignals
/// dependency: MassSpawner
/// dependency: ModularGameplay
/// dependency: NetCore
/// dependency: PCG
/// dependency: PlayspaceSystem
/// dependency: StructUtils
/// dependency: Water
/// dependency: WorldConditions

/// Enum /Script/JunoProceduralWorld.EJunoGetMergedCaveDataRegistryDataResult
/// Size: 0x03
enum class EJunoGetMergedCaveDataRegistryDataResult : uint8_t
{
	EJunoGetMergedCaveDataRegistryDataResult__Success                                = 0,
	EJunoGetMergedCaveDataRegistryDataResult__Failure                                = 1,
	EJunoGetMergedCaveDataRegistryDataResult__EJunoGetMergedCaveDataRegistryDataResult_MAX = 2
};

/// Enum /Script/JunoProceduralWorld.EJunoCaveGeneratorShellType
/// Size: 0x06
enum class EJunoCaveGeneratorShellType : uint8_t
{
	EJunoCaveGeneratorShellType__Room                                                = 0,
	EJunoCaveGeneratorShellType__Connector                                           = 1,
	EJunoCaveGeneratorShellType__Entrance                                            = 2,
	EJunoCaveGeneratorShellType__Hero                                                = 3,
	EJunoCaveGeneratorShellType__FeatureRoom                                         = 4,
	EJunoCaveGeneratorShellType__EJunoCaveGeneratorShellType_MAX                     = 5
};

/// Enum /Script/JunoProceduralWorld.EJunoCaveGeneratorShellSize
/// Size: 0x05
enum class EJunoCaveGeneratorShellSize : uint8_t
{
	EJunoCaveGeneratorShellSize__Small                                               = 0,
	EJunoCaveGeneratorShellSize__Medium                                              = 1,
	EJunoCaveGeneratorShellSize__Large                                               = 2,
	EJunoCaveGeneratorShellSize__Hallway                                             = 3,
	EJunoCaveGeneratorShellSize__EJunoCaveGeneratorShellSize_MAX                     = 4
};

/// Enum /Script/JunoProceduralWorld.EJunoCaveGeneratorShellTags
/// Size: 0x07
enum class EJunoCaveGeneratorShellTags : uint8_t
{
	EJunoCaveGeneratorShellTags__BearCave                                            = 0,
	EJunoCaveGeneratorShellTags__WolfCave                                            = 1,
	EJunoCaveGeneratorShellTags__TreasureCave                                        = 2,
	EJunoCaveGeneratorShellTags__PirateCave                                          = 3,
	EJunoCaveGeneratorShellTags__AnimalDen                                           = 4,
	EJunoCaveGeneratorShellTags__BossRoom                                            = 5,
	EJunoCaveGeneratorShellTags__EJunoCaveGeneratorShellTags_MAX                     = 6
};

/// Enum /Script/JunoProceduralWorld.EJunoCaveGeneratorLayoutTags
/// Size: 0x02
enum class EJunoCaveGeneratorLayoutTags : uint8_t
{
	EJunoCaveGeneratorLayoutTags__OroMine                                            = 0,
	EJunoCaveGeneratorLayoutTags__EJunoCaveGeneratorLayoutTags_MAX                   = 1
};

/// Enum /Script/JunoProceduralWorld.EJunoCaveGeneratorPCGType
/// Size: 0x08
enum class EJunoCaveGeneratorPCGType : uint8_t
{
	EJunoCaveGeneratorPCGType__GemsAndOre                                            = 0,
	EJunoCaveGeneratorPCGType__GemsAndOre_HighValue                                  = 1,
	EJunoCaveGeneratorPCGType__Mushroom                                              = 2,
	EJunoCaveGeneratorPCGType__Plants                                                = 3,
	EJunoCaveGeneratorPCGType__Ceiling                                               = 4,
	EJunoCaveGeneratorPCGType__Clutter                                               = 5,
	EJunoCaveGeneratorPCGType__Rare                                                  = 6,
	EJunoCaveGeneratorPCGType__EJunoCaveGeneratorPCGType_MAX                         = 7
};

/// Enum /Script/JunoProceduralWorld.EAddChainResult
/// Size: 0x07
enum class EAddChainResult : uint8_t
{
	EAddChainResult__Success                                                         = 0,
	EAddChainResult__NoMatchingShell                                                 = 1,
	EAddChainResult__InvalidAttachIndex                                              = 2,
	EAddChainResult__NoExitsLeft                                                     = 3,
	EAddChainResult__CannotFitShell                                                  = 4,
	EAddChainResult__NoShellsGenerated                                               = 5,
	EAddChainResult__EAddChainResult_MAX                                             = 6
};

/// Enum /Script/JunoProceduralWorld.EJunoCaveTheme_DEPRECATED
/// Size: 0x06
enum class EJunoCaveTheme_DEPRECATED : uint8_t
{
	EJunoCaveTheme_DEPRECATED__Grassland                                             = 0,
	EJunoCaveTheme_DEPRECATED__DarkForest                                            = 1,
	EJunoCaveTheme_DEPRECATED__Tropical                                              = 2,
	EJunoCaveTheme_DEPRECATED__Alpine                                                = 3,
	EJunoCaveTheme_DEPRECATED__Desert                                                = 4,
	EJunoCaveTheme_DEPRECATED__EJunoCaveTheme_MAX                                    = 5
};

/// Enum /Script/JunoProceduralWorld.EJunoCreateCaveResult
/// Size: 0x04
enum class EJunoCreateCaveResult : uint8_t
{
	EJunoCreateCaveResult__Success                                                   = 0,
	EJunoCreateCaveResult__Failure                                                   = 1,
	EJunoCreateCaveResult__Disabled                                                  = 2,
	EJunoCreateCaveResult__EJunoCreateCaveResult_MAX                                 = 3
};

/// Enum /Script/JunoProceduralWorld.EJunoQueryCaveDataResult
/// Size: 0x05
enum class EJunoQueryCaveDataResult : uint8_t
{
	EJunoQueryCaveDataResult__NotReady                                               = 0,
	EJunoQueryCaveDataResult__NotAllowed                                             = 1,
	EJunoQueryCaveDataResult__Cached                                                 = 2,
	EJunoQueryCaveDataResult__NoEntry                                                = 3,
	EJunoQueryCaveDataResult__EJunoQueryCaveDataResult_MAX                           = 4
};

/// Enum /Script/JunoProceduralWorld.EJunoQueryCaveSurfaceDataStateResult
/// Size: 0x05
enum class EJunoQueryCaveSurfaceDataStateResult : uint8_t
{
	EJunoQueryCaveSurfaceDataStateResult__NotReady                                   = 0,
	EJunoQueryCaveSurfaceDataStateResult__NotAllowed                                 = 1,
	EJunoQueryCaveSurfaceDataStateResult__Cached                                     = 2,
	EJunoQueryCaveSurfaceDataStateResult__NoEntry                                    = 3,
	EJunoQueryCaveSurfaceDataStateResult__EJunoQueryCaveSurfaceDataStateResult_MAX   = 4
};

/// Enum /Script/JunoProceduralWorld.EJunoGetCaveSurfaceDataForEntranceResult
/// Size: 0x05
enum class EJunoGetCaveSurfaceDataForEntranceResult : uint8_t
{
	EJunoGetCaveSurfaceDataForEntranceResult__NotReady                               = 0,
	EJunoGetCaveSurfaceDataForEntranceResult__NotAllowed                             = 1,
	EJunoGetCaveSurfaceDataForEntranceResult__IsACave                                = 2,
	EJunoGetCaveSurfaceDataForEntranceResult__NotACave                               = 3,
	EJunoGetCaveSurfaceDataForEntranceResult__EJunoGetCaveSurfaceDataForEntranceResult_MAX = 4
};

/// Enum /Script/JunoProceduralWorld.EJunoGetCaveShellInstanceDataResult
/// Size: 0x03
enum class EJunoGetCaveShellInstanceDataResult : uint8_t
{
	EJunoGetCaveShellInstanceDataResult__Success                                     = 0,
	EJunoGetCaveShellInstanceDataResult__Failure                                     = 1,
	EJunoGetCaveShellInstanceDataResult__EJunoGetCaveShellInstanceDataResult_MAX     = 2
};

/// Enum /Script/JunoProceduralWorld.EJunoGetBestCaveResult
/// Size: 0x03
enum class EJunoGetBestCaveResult : uint8_t
{
	EJunoGetBestCaveResult__Success                                                  = 0,
	EJunoGetBestCaveResult__Failure                                                  = 1,
	EJunoGetBestCaveResult__EJunoGetBestCaveResult_MAX                               = 2
};

/// Enum /Script/JunoProceduralWorld.EJunoCalculateCaveDistanceResult
/// Size: 0x04
enum class EJunoCalculateCaveDistanceResult : uint8_t
{
	EJunoCalculateCaveDistanceResult__Success                                        = 0,
	EJunoCalculateCaveDistanceResult__ParentIDsNotCorrect                            = 1,
	EJunoCalculateCaveDistanceResult__ShellsAreNotConnected                          = 2,
	EJunoCalculateCaveDistanceResult__EJunoCalculateCaveDistanceResult_MAX           = 3
};

/// Enum /Script/JunoProceduralWorld.EJunoGetCaveDataCollectionsFromRegistryResult
/// Size: 0x03
enum class EJunoGetCaveDataCollectionsFromRegistryResult : uint8_t
{
	EJunoGetCaveDataCollectionsFromRegistryResult__Success                           = 0,
	EJunoGetCaveDataCollectionsFromRegistryResult__Failure                           = 1,
	EJunoGetCaveDataCollectionsFromRegistryResult__EJunoGetCaveDataCollectionsFromRegistryResult_MAX = 2
};

/// Enum /Script/JunoProceduralWorld.EJunoIAVolumeShape
/// Size: 0x03
enum class EJunoIAVolumeShape : uint8_t
{
	EJunoIAVolumeShape__Box                                                          = 0,
	EJunoIAVolumeShape__Sphere                                                       = 1,
	EJunoIAVolumeShape__EJunoIAVolumeShape_MAX                                       = 2
};

/// Enum /Script/JunoProceduralWorld.EJunoPCGVolumeSource
/// Size: 0x03
enum class EJunoPCGVolumeSource : uint8_t
{
	EJunoPCGVolumeSource__Transient                                                  = 0,
	EJunoPCGVolumeSource__Persistent                                                 = 1,
	EJunoPCGVolumeSource__EJunoPCGVolumeSource_MAX                                   = 2
};

/// Enum /Script/JunoProceduralWorld.EJunoFindNextMatchingPOIResourceResult
/// Size: 0x03
enum class EJunoFindNextMatchingPOIResourceResult : uint8_t
{
	EJunoFindNextMatchingPOIResourceResult__Found                                    = 0,
	EJunoFindNextMatchingPOIResourceResult__NotFound                                 = 1,
	EJunoFindNextMatchingPOIResourceResult__EJunoFindNextMatchingPOIResourceResult_MAX = 2
};

/// Enum /Script/JunoProceduralWorld.EJunoCreateLevelResult
/// Size: 0x03
enum class EJunoCreateLevelResult : uint8_t
{
	EJunoCreateLevelResult__Success                                                  = 0,
	EJunoCreateLevelResult__Failed                                                   = 1,
	EJunoCreateLevelResult__EJunoCreateLevelResult_MAX                               = 2
};

/// Enum /Script/JunoProceduralWorld.EJunoCompareTagSetsResult
/// Size: 0x04
enum class EJunoCompareTagSetsResult : uint8_t
{
	EJunoCompareTagSetsResult__NoMatch                                               = 0,
	EJunoCompareTagSetsResult__PartialMatch                                          = 1,
	EJunoCompareTagSetsResult__FullMatch                                             = 2,
	EJunoCompareTagSetsResult__EJunoCompareTagSetsResult_MAX                         = 3
};

/// Enum /Script/JunoProceduralWorld.EJunoResolveWorldSoftObjectPathResult
/// Size: 0x04
enum class EJunoResolveWorldSoftObjectPathResult : uint8_t
{
	EJunoResolveWorldSoftObjectPathResult__Success                                   = 0,
	EJunoResolveWorldSoftObjectPathResult__NotAWorldObject                           = 1,
	EJunoResolveWorldSoftObjectPathResult__InvalidPath                               = 2,
	EJunoResolveWorldSoftObjectPathResult__EJunoResolveWorldSoftObjectPathResult_MAX = 3
};

/// Enum /Script/JunoProceduralWorld.EJunoLevelInstanceMode
/// Size: 0x04
enum class EJunoLevelInstanceMode : uint8_t
{
	EJunoLevelInstanceMode__Disabled                                                 = 0,
	EJunoLevelInstanceMode__StreamingWP                                              = 1,
	EJunoLevelInstanceMode__CellInjection                                            = 2,
	EJunoLevelInstanceMode__EJunoLevelInstanceMode_MAX                               = 3
};

/// Enum /Script/JunoProceduralWorld.EJunoWorldRegistryType
/// Size: 0x04
enum class EJunoWorldRegistryType : uint8_t
{
	EJunoWorldRegistryType__Invalid                                                  = 0,
	EJunoWorldRegistryType__POI                                                      = 1,
	EJunoWorldRegistryType__Enemy                                                    = 2,
	EJunoWorldRegistryType__EJunoWorldRegistryType_MAX                               = 3
};

/// Enum /Script/JunoProceduralWorld.EJunoGetWorldTileTransformResult
/// Size: 0x03
enum class EJunoGetWorldTileTransformResult : uint8_t
{
	EJunoGetWorldTileTransformResult__Success                                        = 0,
	EJunoGetWorldTileTransformResult__Failure                                        = 1,
	EJunoGetWorldTileTransformResult__EJunoGetWorldTileTransformResult_MAX           = 2
};

/// Enum /Script/JunoProceduralWorld.EJunoGetWorldTileBoundsResult
/// Size: 0x03
enum class EJunoGetWorldTileBoundsResult : uint8_t
{
	EJunoGetWorldTileBoundsResult__Success                                           = 0,
	EJunoGetWorldTileBoundsResult__Failure                                           = 1,
	EJunoGetWorldTileBoundsResult__EJunoGetWorldTileBoundsResult_MAX                 = 2
};

/// Enum /Script/JunoProceduralWorld.EJunoTileStatus
/// Size: 0x07
enum class EJunoTileStatus : uint8_t
{
	EJunoTileStatus__Disabled                                                        = 0,
	EJunoTileStatus__Enabled                                                         = 1,
	EJunoTileStatus__Deprecated                                                      = 2,
	EJunoTileStatus__Instantiated                                                    = 3,
	EJunoTileStatus__Reserved                                                        = 4,
	EJunoTileStatus__OutOfBounds                                                     = 5,
	EJunoTileStatus__EJunoTileStatus_MAX                                             = 6
};

/// Enum /Script/JunoProceduralWorld.EJunoTileGenerationType
/// Size: 0x03
enum class EJunoTileGenerationType : uint8_t
{
	EJunoTileGenerationType__Unknown                                                 = 0,
	EJunoTileGenerationType__Cooked                                                  = 1,
	EJunoTileGenerationType__EJunoTileGenerationType_MAX                             = 2
};

/// Enum /Script/JunoProceduralWorld.EJunoWorldTilePOIType
/// Size: 0x05
enum class EJunoWorldTilePOIType : uint8_t
{
	EJunoWorldTilePOIType__Overworld                                                 = 0,
	EJunoWorldTilePOIType__Cave                                                      = 1,
	EJunoWorldTilePOIType__CaveEntrance                                              = 2,
	EJunoWorldTilePOIType__Bridge                                                    = 3,
	EJunoWorldTilePOIType__EJunoWorldTilePOIType_MAX                                 = 4
};

/// Enum /Script/JunoProceduralWorld.EJunoPOISlotState
/// Size: 0x06
enum class EJunoPOISlotState : uint8_t
{
	EJunoPOISlotState__Normal                                                        = 0,
	EJunoPOISlotState__Unused                                                        = 1,
	EJunoPOISlotState__Cosmetic                                                      = 2,
	EJunoPOISlotState__CaveEntrance                                                  = 3,
	EJunoPOISlotState__UnusedNearWorldStart                                          = 4,
	EJunoPOISlotState__EJunoPOISlotState_MAX                                         = 5
};

/// Enum /Script/JunoProceduralWorld.EJunoWorldTileInjectedLevelType
/// Size: 0x03
enum class EJunoWorldTileInjectedLevelType : uint8_t
{
	EJunoWorldTileInjectedLevelType__POI                                             = 0,
	EJunoWorldTileInjectedLevelType__Cave                                            = 1,
	EJunoWorldTileInjectedLevelType__EJunoWorldTileInjectedLevelType_MAX             = 2
};

/// Enum /Script/JunoProceduralWorld.EPushFrontierResult
/// Size: 0x10
enum class EPushFrontierResult : uint8_t
{
	EPushFrontierResult__Continue                                                    = 0,
	EPushFrontierResult__Success                                                     = 1,
	EPushFrontierResult__Fail                                                        = 2,
	EPushFrontierResult__OutOfFrontierNodes                                          = 3,
	EPushFrontierResult__NoNewFrontierCreated                                        = 4,
	EPushFrontierResult__ReachedMaxCost                                              = 5,
	EPushFrontierResult__ReachedMaxSteps                                             = 6,
	EPushFrontierResult__ReachedDestination                                          = 7,
	EPushFrontierResult__NoValidResult                                               = 8,
	EPushFrontierResult__EPushFrontierResult_MAX                                     = 9
};

/// Enum /Script/JunoProceduralWorld.EPathfinderNodeState
/// Size: 0x05
enum class EPathfinderNodeState : uint8_t
{
	EPathfinderNodeState__Normal                                                     = 0,
	EPathfinderNodeState__Snap                                                       = 1,
	EPathfinderNodeState__Warp                                                       = 2,
	EPathfinderNodeState__Invalid                                                    = 3,
	EPathfinderNodeState__EPathfinderNodeState_MAX                                   = 4
};

/// Enum /Script/JunoProceduralWorld.EJunoRepresentation
/// Size: 0x04
enum class EJunoRepresentation : uint8_t
{
	EJunoRepresentation__None                                                        = 0,
	EJunoRepresentation__Actor                                                       = 1,
	EJunoRepresentation__Instance                                                    = 2,
	EJunoRepresentation__EJunoRepresentation_MAX                                     = 3
};

/// Enum /Script/JunoProceduralWorld.EJunoPOISize
/// Size: 0x10
enum class EJunoPOISize : uint8_t
{
	EJunoPOISize__None                                                               = 0,
	EJunoPOISize__JPOI_1x1                                                           = 1,
	EJunoPOISize__JPOI_2x2                                                           = 2,
	EJunoPOISize__JPOI_3x3                                                           = 3,
	EJunoPOISize__JPOI_4x4                                                           = 4,
	EJunoPOISize__JPOI_5x5                                                           = 5,
	EJunoPOISize__JPOI_8x8                                                           = 8,
	EJunoPOISize__JPOI_10x10                                                         = 10,
	EJunoPOISize__JPOI_11x11                                                         = 11,
	EJunoPOISize__EJunoPOISize_MAX                                                   = 12
};

/// Enum /Script/JunoProceduralWorld.PCGJunoApplyMaskNodeMode
/// Size: 0x05
enum class PCGJunoApplyMaskNodeMode : uint8_t
{
	PCGJunoApplyMaskNodeMode__Subtract                                               = 0,
	PCGJunoApplyMaskNodeMode__Intersect                                              = 1,
	PCGJunoApplyMaskNodeMode__SubtractSmaller                                        = 2,
	PCGJunoApplyMaskNodeMode__SubtractLarger                                         = 3,
	PCGJunoApplyMaskNodeMode__PCGJunoApplyMaskNodeMode_MAX                           = 4
};

/// Enum /Script/JunoProceduralWorld.ELandmassRiverTier
/// Size: 0x02
enum class ELandmassRiverTier : uint8_t
{
	ELandmassRiverTier__Default                                                      = 0,
	ELandmassRiverTier__ELandmassRiverTier_MAX                                       = 1
};

/// Enum /Script/JunoProceduralWorld.EQueryPOIStateResult
/// Size: 0x05
enum class EQueryPOIStateResult : uint8_t
{
	EQueryPOIStateResult__NotReady                                                   = 0,
	EQueryPOIStateResult__NotAllowed                                                 = 1,
	EQueryPOIStateResult__Cached                                                     = 2,
	EQueryPOIStateResult__NoEntry                                                    = 3,
	EQueryPOIStateResult__EQueryPOIStateResult_MAX                                   = 4
};

/// Enum /Script/JunoProceduralWorld.EGeneratePOIResult
/// Size: 0x03
enum class EGeneratePOIResult : uint8_t
{
	EGeneratePOIResult__Success                                                      = 0,
	EGeneratePOIResult__Failure                                                      = 1,
	EGeneratePOIResult__EGeneratePOIResult_MAX                                       = 2
};

/// Enum /Script/JunoProceduralWorld.EJunoMarkSlotPOIUnusedResult
/// Size: 0x03
enum class EJunoMarkSlotPOIUnusedResult : uint8_t
{
	EJunoMarkSlotPOIUnusedResult__Success                                            = 0,
	EJunoMarkSlotPOIUnusedResult__Failure                                            = 1,
	EJunoMarkSlotPOIUnusedResult__EJunoMarkSlotPOIUnusedResult_MAX                   = 2
};

/// Enum /Script/JunoProceduralWorld.EJunoSetSlotPOIMetaDataResult
/// Size: 0x03
enum class EJunoSetSlotPOIMetaDataResult : uint8_t
{
	EJunoSetSlotPOIMetaDataResult__Success                                           = 0,
	EJunoSetSlotPOIMetaDataResult__Failure                                           = 1,
	EJunoSetSlotPOIMetaDataResult__EJunoSetSlotPOIMetaDataResult_MAX                 = 2
};

/// Enum /Script/JunoProceduralWorld.EJunoGetMatchingPOIsFromDataRegistryResult
/// Size: 0x03
enum class EJunoGetMatchingPOIsFromDataRegistryResult : uint8_t
{
	EJunoGetMatchingPOIsFromDataRegistryResult__Success                              = 0,
	EJunoGetMatchingPOIsFromDataRegistryResult__Failure                              = 1,
	EJunoGetMatchingPOIsFromDataRegistryResult__EJunoGetMatchingPOIsFromDataRegistryResult_MAX = 2
};

/// Enum /Script/JunoProceduralWorld.EVerticalDirection
/// Size: 0x04
enum class EVerticalDirection : uint8_t
{
	EVerticalDirection__Both                                                         = 0,
	EVerticalDirection__DownwardOnly                                                 = 1,
	EVerticalDirection__UpwardOnly                                                   = 2,
	EVerticalDirection__EVerticalDirection_MAX                                       = 3
};

/// Enum /Script/JunoProceduralWorld.ELandmassRoadTier
/// Size: 0x09
enum class ELandmassRoadTier : uint8_t
{
	ELandmassRoadTier__Default                                                       = 0,
	ELandmassRoadTier__Dirt                                                          = 1,
	ELandmassRoadTier__Rural                                                         = 2,
	ELandmassRoadTier__Metropolitan                                                  = 3,
	ELandmassRoadTier__Suburban                                                      = 4,
	ELandmassRoadTier__Highway                                                       = 5,
	ELandmassRoadTier__BreadCrumbs                                                   = 6,
	ELandmassRoadTier__Hidden                                                        = 7,
	ELandmassRoadTier__ELandmassRoadTier_MAX                                         = 8
};

/// Enum /Script/JunoProceduralWorld.ERouteGenerationState
/// Size: 0x04
enum class ERouteGenerationState : uint8_t
{
	ERouteGenerationState__Inactive                                                  = 0,
	ERouteGenerationState__Active                                                    = 1,
	ERouteGenerationState__Dormant                                                   = 2,
	ERouteGenerationState__ERouteGenerationState_MAX                                 = 3
};

/// Enum /Script/JunoProceduralWorld.ERouteAvoidancePrimitiveType
/// Size: 0x04
enum class ERouteAvoidancePrimitiveType : uint8_t
{
	ERouteAvoidancePrimitiveType__Disc                                               = 0,
	ERouteAvoidancePrimitiveType__Curve                                              = 1,
	ERouteAvoidancePrimitiveType__ProceduralRoutes                                   = 2,
	ERouteAvoidancePrimitiveType__ERouteAvoidancePrimitiveType_MAX                   = 3
};

/// Enum /Script/JunoProceduralWorld.EProceduralRouteGuideSetSelectMethod
/// Size: 0x03
enum class EProceduralRouteGuideSetSelectMethod : uint8_t
{
	EProceduralRouteGuideSetSelectMethod__UseTileId                                  = 0,
	EProceduralRouteGuideSetSelectMethod__UseTileIndex                               = 1,
	EProceduralRouteGuideSetSelectMethod__EProceduralRouteGuideSetSelectMethod_MAX   = 2
};

/// Enum /Script/JunoProceduralWorld.EProceduralRiverAnchorType
/// Size: 0x05
enum class EProceduralRiverAnchorType : uint8_t
{
	EProceduralRiverAnchorType__Source                                               = 0,
	EProceduralRiverAnchorType__Lake                                                 = 1,
	EProceduralRiverAnchorType__Coastline                                            = 2,
	EProceduralRiverAnchorType__DeepSea                                              = 3,
	EProceduralRiverAnchorType__EProceduralRiverAnchorType_MAX                       = 4
};

/// Enum /Script/JunoProceduralWorld.PCGJunoFractalNoise2DMode
/// Size: 0x07
enum class PCGJunoFractalNoise2DMode : uint32_t
{
	PCGJunoFractalNoise2DMode__Perlin                                                = 0,
	PCGJunoFractalNoise2DMode__Caustic                                               = 1,
	PCGJunoFractalNoise2DMode__Voronoi                                               = 2,
	PCGJunoFractalNoise2DMode__TiledVoronoi                                          = 3,
	PCGJunoFractalNoise2DMode__Brownian                                              = 4,
	PCGJunoFractalNoise2DMode__EdgeMask                                              = 5,
	PCGJunoFractalNoise2DMode__PCGJunoFractalNoise2DMode_MAX                         = 6
};

/// Enum /Script/JunoProceduralWorld.PCGJunoFractalNoise2DEdgeMode
/// Size: 0x04
enum class PCGJunoFractalNoise2DEdgeMode : uint32_t
{
	PCGJunoFractalNoise2DEdgeMode__Perlin                                            = 0,
	PCGJunoFractalNoise2DEdgeMode__Caustic                                           = 1,
	PCGJunoFractalNoise2DEdgeMode__Brownian                                          = 2,
	PCGJunoFractalNoise2DEdgeMode__PCGJunoFractalNoise2DEdgeMode_MAX                 = 3
};

/// Enum /Script/JunoProceduralWorld.PCGJunoFractalDensityMode
/// Size: 0x05
enum class PCGJunoFractalDensityMode : uint32_t
{
	PCGJunoFractalDensityMode__Ignore                                                = 0,
	PCGJunoFractalDensityMode__Set                                                   = 1,
	PCGJunoFractalDensityMode__Add                                                   = 2,
	PCGJunoFractalDensityMode__Multiply                                              = 3,
	PCGJunoFractalDensityMode__PCGJunoFractalDensityMode_MAX                         = 4
};

/// Struct /Script/JunoProceduralWorld.JunoBridgePOISelectorParams
/// Size: 0x0018 (0x000000 - 0x000018)
struct FJunoBridgePOISelectorParams
{ 
	FGuid                                              Guid;                                                       // 0x0000   (0x0010)  
	double                                             RiverWidth;                                                 // 0x0010   (0x0008)  
};

/// Class /Script/JunoProceduralWorld.JunoBridgePOISelectorComponent
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class UJunoBridgePOISelectorComponent : public UGameFrameworkComponent
{ 
public:
	FJunoBridgePOISelectorParams                       Params;                                                     // 0x00A0   (0x0018)  
	FDataRegistryType                                  DataRegistryType;                                           // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x00BC   (0x000C)  MISSED


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoBridgePOISelectorComponent.DoSelection
	// void DoSelection();                                                                                                   // [0xbc3ce50] Final|Native|Protected 
	// Function /Script/JunoProceduralWorld.JunoBridgePOISelectorComponent.BeginBridgeSelection
	// void BeginBridgeSelection(FJunoBridgePOISelectorParams& Params);                                                      // [0xbc3c0fc] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/JunoProceduralWorld.JunoCaveGeneratorDataMergerInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoCaveGeneratorDataMergerInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoCaveGeneratorDataMergerInterface.MergeCaveData
	// void MergeCaveData(FJunoCaveGeneratorData& CaveData);                                                                 // [0x211c0a0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Struct /Script/JunoProceduralWorld.JunoCaveGeneratorResourceWorlds
/// Size: 0x0060 (0x000000 - 0x000060)
struct FJunoCaveGeneratorResourceWorlds
{ 
	SDK_UNDEFINED(80,14212) /* TSet<EJunoBiome> */     __um(ValidBiomes);                                          // 0x0000   (0x0050)  
	TArray<FSoftObjectPath>                            Worlds;                                                     // 0x0050   (0x0010)  
};

/// Struct /Script/JunoProceduralWorld.JunoCaveGeneratorPOIMarker
/// Size: 0x00B0 (0x000000 - 0x0000B0)
struct FJunoCaveGeneratorPOIMarker
{ 
	SDK_UNDEFINED(80,14213) /* TSet<EJunoPOISize> */   __um(ValidSizes);                                           // 0x0000   (0x0050)  
	FTransform                                         Transform;                                                  // 0x0050   (0x0060)  
};

/// Struct /Script/JunoProceduralWorld.JunoCaveGeneratorShellData
/// Size: 0x01A0 (0x000000 - 0x0001A0)
struct FJunoCaveGeneratorShellData
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FSoftObjectPath                                    World;                                                      // 0x0008   (0x0018)  
	SDK_UNDEFINED(80,14214) /* TSet<EJunoBiome> */     __um(ValidBiomes);                                          // 0x0020   (0x0050)  
	SDK_UNDEFINED(80,14215) /* TSet<EJunoCaveGeneratorShellTags> */ __um(ShellTags);                               // 0x0070   (0x0050)  
	EJunoCaveGeneratorShellType                        ShellType;                                                  // 0x00C0   (0x0001)  
	EJunoCaveGeneratorShellSize                        ShellSize;                                                  // 0x00C1   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x00C2   (0x0002)  MISSED
	int32_t                                            MinDepth;                                                   // 0x00C4   (0x0004)  
	int32_t                                            MaxDepth;                                                   // 0x00C8   (0x0004)  
	bool                                               bEnabled;                                                   // 0x00CC   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x00CD   (0x0003)  MISSED
	int32_t                                            Version;                                                    // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x00D4   (0x0004)  MISSED
	TArray<FJunoCaveGeneratorResourceWorlds>           ResourceLevels;                                             // 0x00D8   (0x0010)  
	FVector                                            ShellBoundsSize;                                            // 0x00E8   (0x0018)  
	FVector                                            ShellBoundsCenter;                                          // 0x0100   (0x0018)  
	TArray<FTransform>                                 ExitLocations;                                              // 0x0118   (0x0010)  
	int32_t                                            NumOfSpawners;                                              // 0x0128   (0x0004)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x012C   (0x0004)  MISSED
	TArray<FJunoCaveGeneratorPOIMarker>                POIMarkers;                                                 // 0x0130   (0x0010)  
	int32_t                                            NumOfAIPointProviders;                                      // 0x0140   (0x0004)  
	unsigned char                                      UnknownData05_5[0x4];                                       // 0x0144   (0x0004)  MISSED
	SDK_UNDEFINED(80,14216) /* TMap<EJunoCaveGeneratorLayoutTags, FJunoCaveGeneratorWorldsList> */ __um(SupportedLayouts); // 0x0148   (0x0050)  
	bool                                               bHasFixedEntrance;                                          // 0x0198   (0x0001)  
	unsigned char                                      UnknownData06_5[0x3];                                       // 0x0199   (0x0003)  MISSED
	int32_t                                            PersistenceVersion;                                         // 0x019C   (0x0004)  
};

/// Struct /Script/JunoProceduralWorld.JunoCaveGeneratorThemeEntry
/// Size: 0x0138 (0x000000 - 0x000138)
struct FJunoCaveGeneratorThemeEntry
{ 
	SDK_UNDEFINED(32,14217) /* TWeakObjectPtr<UMaterialInterface*> */ __um(CaveMaterial);                          // 0x0000   (0x0020)  
	SDK_UNDEFINED(32,14218) /* TWeakObjectPtr<UDataTable*> */ __um(ThemeResourceDataTable);                        // 0x0020   (0x0020)  
	SDK_UNDEFINED(32,14219) /* TWeakObjectPtr<UDataTable*> */ __um(POIDataTable);                                  // 0x0040   (0x0020)  
	SDK_UNDEFINED(80,14220) /* TMap<EJunoCaveGeneratorPCGType, FJunoCaveGeneratorPCGResourceMap> */ __um(PCGTypeWeights); // 0x0060   (0x0050)  
	bool                                               bEnabled;                                                   // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00B1   (0x0003)  MISSED
	FName                                              Name;                                                       // 0x00B4   (0x0004)  
	SDK_UNDEFINED(80,14221) /* TSet<EJunoBiome> */     __um(Biomes);                                               // 0x00B8   (0x0050)  
	bool                                               bExportTheme;                                               // 0x0108   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0109   (0x0003)  MISSED
	FName                                              ThemeExportName;                                            // 0x010C   (0x0004)  
	FName                                              ThemeExportPath;                                            // 0x0110   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0114   (0x0004)  MISSED
	SDK_UNDEFINED(32,14222) /* TWeakObjectPtr<UClass*> */ __um(TeleporterClass);                                   // 0x0118   (0x0020)  
};

/// Struct /Script/JunoProceduralWorld.JunoCaveGeneratorRule
/// Size: 0x004C (0x000000 - 0x00004C)
struct FJunoCaveGeneratorRule
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	int32_t                                            SelectionWeight;                                            // 0x0004   (0x0004)  
	bool                                               bEnabled;                                                   // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	int32_t                                            DepthAttemptThreshold;                                      // 0x000C   (0x0004)  
	int32_t                                            MaxNumberOfTeleporters;                                     // 0x0010   (0x0004)  
	int32_t                                            MinPrimaryChainLength;                                      // 0x0014   (0x0004)  
	int32_t                                            MaxPrimaryChainLength;                                      // 0x0018   (0x0004)  
	float                                              PrimaryChainHallwayChance;                                  // 0x001C   (0x0004)  
	int32_t                                            MinNumberOfSecondaryChains;                                 // 0x0020   (0x0004)  
	int32_t                                            MaxNumberOfSecondaryChains;                                 // 0x0024   (0x0004)  
	int32_t                                            MinSecondaryChainLength;                                    // 0x0028   (0x0004)  
	int32_t                                            MaxSecondaryChainLength;                                    // 0x002C   (0x0004)  
	int32_t                                            MinStartingDepthOfSecondaryChains;                          // 0x0030   (0x0004)  
	int32_t                                            MaxStartingDepthOfSecondaryChains;                          // 0x0034   (0x0004)  
	bool                                               bCanSpawnOnSecondaryChains;                                 // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	float                                              SecondaryChainHallwayChance;                                // 0x003C   (0x0004)  
	int32_t                                            MaxNumberOfPOIs;                                            // 0x0040   (0x0004)  
	float                                              BasePOISpawnChance;                                         // 0x0044   (0x0004)  
	bool                                               bAllowPOIsInTeleporterRooms;                                // 0x0048   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0049   (0x0003)  MISSED
};

/// Struct /Script/JunoProceduralWorld.JunoCaveGeneratorTypeData
/// Size: 0x0110 (0x000000 - 0x000110)
struct FJunoCaveGeneratorTypeData
{ 
	FName                                              TypeName;                                                   // 0x0000   (0x0004)  
	bool                                               bEnabled;                                                   // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	TArray<FJunoCaveGeneratorRule>                     Rules;                                                      // 0x0008   (0x0010)  
	EJunoCaveType                                      Type;                                                       // 0x0018   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0019   (0x0007)  MISSED
	SDK_UNDEFINED(80,14223) /* TSet<EJunoBiome> */     __um(ValidBiomes);                                          // 0x0020   (0x0050)  
	SDK_UNDEFINED(80,14224) /* TSet<EJunoCaveGeneratorShellTags> */ __um(ShellTags);                               // 0x0070   (0x0050)  
	SDK_UNDEFINED(80,14225) /* TSet<EJunoCaveGeneratorLayoutTags> */ __um(LayoutTags);                             // 0x00C0   (0x0050)  
};

/// Struct /Script/JunoProceduralWorld.JunoCaveGeneratorData
/// Size: 0x0030 (0x000008 - 0x000038)
struct FJunoCaveGeneratorData : FTableRowBase
{ 
	TArray<FJunoCaveGeneratorShellData>                Shells;                                                     // 0x0008   (0x0010)  
	TArray<FJunoCaveGeneratorThemeEntry>               Themes;                                                     // 0x0018   (0x0010)  
	TArray<FJunoCaveGeneratorTypeData>                 Types;                                                      // 0x0028   (0x0010)  
};

/// Class /Script/JunoProceduralWorld.JunoCaveGeneratorPlayspaceComponent
/// Size: 0x0098 (0x0000F8 - 0x000190)
class UJunoCaveGeneratorPlayspaceComponent : public UFortPlayspaceComponent
{ 
public:
	FDataRegistryType                                  CaveGeneratorRegistry;                                      // 0x00F8   (0x0004)  
	FDataRegistryType                                  POIDataRegistry;                                            // 0x00FC   (0x0004)  
	FJunoCaveGeneratorData                             MergedData;                                                 // 0x0100   (0x0038)  
	unsigned char                                      UnknownData00_5[0x50];                                      // 0x0138   (0x0050)  MISSED
	bool                                               bWasDataMerged;                                             // 0x0188   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0189   (0x0007)  MISSED


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoCaveGeneratorPlayspaceComponent.SetMergedData
	// void SetMergedData(FJunoCaveGeneratorData& Data);                                                                     // [0xbc40424] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoCaveGeneratorPlayspaceComponent.IsNativeCaveGeneratorEnabled
	// bool IsNativeCaveGeneratorEnabled();                                                                                  // [0xbc3ed38] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoProceduralWorld.JunoCaveGeneratorPlayspaceComponent.GetRootCaveGeneratorComponent
	// class UJunoCaveGeneratorPlayspaceComponent* GetRootCaveGeneratorComponent(class UObject* WorldContextObject);         // [0xbc3ebf8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoCaveGeneratorPlayspaceComponent.GetMergedCaveDataRegistryData
	// void GetMergedCaveDataRegistryData(FDataRegistryType& CaveGeneratorDataRegistry, FJunoCaveGeneratorData& ResourceData, EJunoGetMergedCaveDataRegistryDataResult& Result); // [0xbc3ea54] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoCaveGeneratorPlayspaceComponent.GenerateCaveData
	// bool GenerateCaveData(FJunoCaveGeneratorData& ResourceData, FDataRegistryType& POIDataRegistry, FRandomStream& RandomStream, FJunoCaveSurfaceData& CaveSurfaceData, EJunoBiome Biome, FBox& Bounds, class UClass*& SurfaceTeleporterClass, TArray<FJunoGeneratedCaveShellData>& Shells, TArray<FJunoPOIData>& POIs); // [0xbc3d1e4] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoCaveGeneratorPlayspaceComponent.GenerateCave
	// void GenerateCave(class AActor* WorldActor, FRandomStream& RandomStream, FJunoCaveSurfaceData& CaveSurfaceData, EJunoBiome Biome, FBox& Bounds, class UClass*& SurfaceTeleporterClass); // [0xbc3cf3c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/JunoProceduralWorld.JunoLivingWorldStaticPointProvider
/// Size: 0x0058 (0x000370 - 0x0003C8)
class AJunoLivingWorldStaticPointProvider : public AFortAthenaLivingWorldStaticPointProvider
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0370   (0x0010)  MISSED
	FJunoLivingWorldPointProviderEventLimiter          EventLimiter;                                               // 0x0380   (0x0020)  
	FGuid                                              SavedActorGuid;                                             // 0x03A0   (0x0010)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x03B0   (0x0018)  MISSED


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoLivingWorldStaticPointProvider.AppendFiltersTags
	// void AppendFiltersTags(FGameplayTagContainer& Container);                                                             // [0xbc7bf58] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/JunoProceduralWorld.JunoCaveConditionalTags
/// Size: 0x0028 (0x000000 - 0x000028)
struct FJunoCaveConditionalTags
{ 
	EJunoCaveType                                      Type;                                                       // 0x0000   (0x0001)  
	EJunoBiome                                         Biome;                                                      // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0002   (0x0006)  MISSED
	FGameplayTagContainer                              TagsToApply;                                                // 0x0008   (0x0020)  
};

/// Class /Script/JunoProceduralWorld.JunoCaveLivingWorldStaticPointProvider
/// Size: 0x0050 (0x0003C8 - 0x000418)
class AJunoCaveLivingWorldStaticPointProvider : public AJunoLivingWorldStaticPointProvider
{ 
public:
	FName                                              CaveShellID;                                                // 0x03C8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x03CC   (0x0004)  MISSED
	TArray<FJunoCaveConditionalTags>                   ConditionalTags;                                            // 0x03D0   (0x0010)  
	FScalableFloat                                     AssignLeashVolume;                                          // 0x03E0   (0x0028)  
	SDK_UNDEFINED(8,14226) /* TWeakObjectPtr<UCaveShellSpawnEntry*> */ __um(CaveShellEntry);                       // 0x0408   (0x0008)  
	bool                                               bNeverEnable;                                               // 0x0410   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0411   (0x0007)  MISSED


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoCaveLivingWorldStaticPointProvider.GetCaveShellInstanceData
	// void GetCaveShellInstanceData(FJunoCaveShellInstanceData& Data, EJunoGetCaveShellInstanceDataResult& Result);         // [0xbc3df44] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/JunoProceduralWorld.JunoStreamingGameplayVolume
/// Size: 0x0080 (0x000330 - 0x0003B0)
class AJunoStreamingGameplayVolume : public AGameplayVolume
{ 
public:
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0330   (0x0020)  MISSED
	FGuid                                              SavedActorGuid;                                             // 0x0350   (0x0010)  
	bool                                               bSpawnedByLevelSaveRecord;                                  // 0x0360   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0361   (0x0007)  MISSED
	FVector                                            BoundsExtent;                                               // 0x0368   (0x0018)  
	FVector                                            BoundsOffset;                                               // 0x0380   (0x0018)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0398   (0x0008)  MISSED
	SDK_UNDEFINED(16,14227) /* TArray<TWeakObjectPtr<UWorld*>> */ __um(LevelsToLoad);                              // 0x03A0   (0x0010)  


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoStreamingGameplayVolume.Unload
	// void Unload();                                                                                                        // [0x20de634] Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoStreamingGameplayVolume.SetBounds
	// void SetBounds(FVector& Offset, FVector& Extent);                                                                     // [0xbc4a630] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoStreamingGameplayVolume.Load
	// void Load();                                                                                                          // [0x6809dd0] Native|Public|BlueprintCallable 
};

/// Struct /Script/JunoProceduralWorld.JunoCaveTeleporterLink
/// Size: 0x00D0 (0x000000 - 0x0000D0)
struct FJunoCaveTeleporterLink
{ 
	FTransform                                         SurfaceTransform;                                           // 0x0000   (0x0060)  
	FTransform                                         CaveTransform;                                              // 0x0060   (0x0060)  
	class UClass*                                      SurfaceTeleporterClass;                                     // 0x00C0   (0x0008)  
	class UClass*                                      CaveTeleporterClass;                                        // 0x00C8   (0x0008)  
};

/// Struct /Script/JunoProceduralWorld.JunoCaveShellInstanceData
/// Size: 0x0078 (0x000000 - 0x000078)
struct FJunoCaveShellInstanceData
{ 
	int32_t                                            ExitsUsedMask;                                              // 0x0000   (0x0004)  
	int32_t                                            Depth;                                                      // 0x0004   (0x0004)  
	int32_t                                            Tier;                                                       // 0x0008   (0x0004)  
	int32_t                                            ChainID;                                                    // 0x000C   (0x0004)  
	EJunoCaveType                                      Type;                                                       // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	FName                                              ThemeName;                                                  // 0x0014   (0x0004)  
	SDK_UNDEFINED(32,14228) /* TWeakObjectPtr<UObject*> */ __um(ThemeObject);                                      // 0x0018   (0x0020)  
	FName                                              BranchParentShellID;                                        // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x003C   (0x0004)  MISSED
	double                                             EntranceZ;                                                  // 0x0040   (0x0008)  
	EJunoBiome                                         EntranceBiome;                                              // 0x0048   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0049   (0x0007)  MISSED
	FVector                                            TeleporterTargetPosition;                                   // 0x0050   (0x0018)  
	TArray<FJunoCaveTeleporterLink>                    Teleporters;                                                // 0x0068   (0x0010)  
};

/// Struct /Script/JunoProceduralWorld.JunoWorldTileStreamingLevel
/// Size: 0x00A8 (0x000000 - 0x0000A8)
struct FJunoWorldTileStreamingLevel
{ 
	SDK_UNDEFINED(32,14229) /* TWeakObjectPtr<UWorld*> */ __um(WorldAsset);                                        // 0x0000   (0x0020)  
	SDK_UNDEFINED(32,14230) /* TWeakObjectPtr<UWorld*> */ __um(HLODWorldAsset);                                    // 0x0020   (0x0020)  
	FVector                                            Position;                                                   // 0x0040   (0x0018)  
	FVector3f                                          BoundsOffset;                                               // 0x0058   (0x000C)  
	FVector3f                                          BoundsExtent;                                               // 0x0064   (0x000C)  
	FGuid                                              Guid;                                                       // 0x0070   (0x0010)  
	FGuid                                              PlayspaceGuid;                                              // 0x0080   (0x0010)  
	FGuid                                              WorldTileGuid;                                              // 0x0090   (0x0010)  
	int32_t                                            PlayspaceLevelKey;                                          // 0x00A0   (0x0004)  
	EJunoWorldTileInjectedLevelType                    Type;                                                       // 0x00A4   (0x0001)  
	char                                               RotationBits;                                               // 0x00A5   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00A6   (0x0002)  MISSED
};

/// Class /Script/JunoProceduralWorld.JunoCaveShellGameplayVolume
/// Size: 0x00B8 (0x0003B0 - 0x000468)
class AJunoCaveShellGameplayVolume : public AJunoStreamingGameplayVolume
{ 
public:
	FJunoCaveShellInstanceData                         InstanceData;                                               // 0x03B0   (0x0078)  
	FName                                              ShellID;                                                    // 0x0428   (0x0004)  
	FGuid                                              CaveGuid;                                                   // 0x042C   (0x0010)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x043C   (0x0004)  MISSED
	TArray<class AJunoTeleporter*>                     Teleporters;                                                // 0x0440   (0x0010)  
	TArray<FJunoWorldTileStreamingLevel>               LevelsToInject;                                             // 0x0450   (0x0010)  
	int32_t                                            PersistenceVersion;                                         // 0x0460   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0464   (0x0004)  MISSED
};

/// Class /Script/JunoProceduralWorld.JunoCaveBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoCaveBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoCaveBlueprintLibrary.SetCaveSurfaceData
	// void SetCaveSurfaceData(class AActor* Actor, TArray<FJunoCaveSurfaceData>& CaveSurfaceData);                          // [0xbc40354] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoCaveBlueprintLibrary.QueryCaveSurfaceDataState
	// void QueryCaveSurfaceDataState(class AActor* Actor, EJunoQueryCaveSurfaceDataStateResult& Result);                    // [0xbc40294] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoCaveBlueprintLibrary.QueryCaveShellInstanceDataState
	// EJunoQueryCaveDataResult QueryCaveShellInstanceDataState(class AActor* CaveSlotActor, FGuid& CaveSlotGuid);           // [0xbc401c0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoProceduralWorld.JunoCaveBlueprintLibrary.QueryCaveDataStateFromSurfaceData
	// void QueryCaveDataStateFromSurfaceData(class AActor* POISlotActor, FJunoCaveSurfaceData& SurfaceData, EJunoQueryCaveDataResult& Result, FBox& WorldTileBounds, TArray<FJunoCaveTeleporterLink>& Teleporters); // [0xbc3f7e4] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoCaveBlueprintLibrary.QueryCaveDataStateFromActor
	// void QueryCaveDataStateFromActor(class AActor* CaveSlotActor, FGuid& CaveSlotGuid, EJunoQueryCaveDataResult& Result, FBox& WorldTileBounds, TArray<FJunoCaveTeleporterLink>& Teleporters); // [0xbc3ee28] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoCaveBlueprintLibrary.NeedsCaveShellInstanceData
	// bool NeedsCaveShellInstanceData(class AActor* CaveSlotActor, FGuid& CaveSlotGuid);                                    // [0xbc3ed50] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoProceduralWorld.JunoCaveBlueprintLibrary.IsBitSet
	// bool IsBitSet(int32_t BitMask, int32_t Bit);                                                                          // [0xbc3ec78] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoProceduralWorld.JunoCaveBlueprintLibrary.GetCaveSurfaceDataForEntrance
	// void GetCaveSurfaceDataForEntrance(class AActor* Actor, FGuid& EntranceGuid, FJunoCaveSurfaceData& CaveSurfaceData, int32_t& CaveIndex, EJunoGetCaveSurfaceDataForEntranceResult& Result, bool bWorldTeleporterTransforms); // [0xbc3e78c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoCaveBlueprintLibrary.GetCaveShellVolumeFromArea
	// class AJunoCaveShellGameplayVolume* GetCaveShellVolumeFromArea(class UObject* WorldContextObject, FBox& Area, FName ShellID); // [0xbc3e560] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoCaveBlueprintLibrary.GetCaveShellInstanceDataFromArea
	// void GetCaveShellInstanceDataFromArea(class UObject* WorldContextObject, FBox& Area, FName ShellID, FJunoCaveShellInstanceData& Data, EJunoGetCaveShellInstanceDataResult& Result); // [0xbc3e304] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoCaveBlueprintLibrary.GetCaveShellInstanceDataFromActor
	// void GetCaveShellInstanceDataFromActor(class AActor* CaveShellChildActor, FName ShellID, FJunoCaveShellInstanceData& Data, EJunoGetCaveShellInstanceDataResult& Result); // [0xbc3e1a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoCaveBlueprintLibrary.GetCaveShellInstanceData
	// FJunoCaveShellInstanceData GetCaveShellInstanceData(class AActor* CaveShellChildActor, FName ShellID, bool& Success); // [0xbc3e050] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoProceduralWorld.JunoCaveBlueprintLibrary.GetCaveDataCollectionsFromRegistry
	// void GetCaveDataCollectionsFromRegistry(FDataRegistryType& DataRegistry, TArray<TWeakObjectPtr<UJunoCaveDataCollectionBase*>>& Array, EJunoGetCaveDataCollectionsFromRegistryResult& Result); // [0xbc3de10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoCaveBlueprintLibrary.GetBestCaveShellFromArea
	// void GetBestCaveShellFromArea(class UObject* WorldContextObject, FBox& Area, FJunoCave& Cave, FGuid& CaveGuid, FName& ShellID, EJunoGetBestCaveResult& Result); // [0xbc3d608] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoCaveBlueprintLibrary.ExitsUsedMaskToArray
	// TArray<int32_t> ExitsUsedMaskToArray(int32_t ExitsUsedMask);                                                          // [0xbc3ce64] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoProceduralWorld.JunoCaveBlueprintLibrary.CreateExitsUsedMaskFromArray
	// int32_t CreateExitsUsedMaskFromArray(TArray<int32_t>& ExitsUsed);                                                     // [0xbc3cd9c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoProceduralWorld.JunoCaveBlueprintLibrary.CreateCaveInstanceDataForSurfaceData
	// void CreateCaveInstanceDataForSurfaceData(class AActor* POISlotActor, FJunoCaveSurfaceData& SurfaceData, TArray<FJunoGeneratedCaveShellData>& CaveShellData, EJunoCreateCaveResult& Result); // [0xbc3cbf0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoCaveBlueprintLibrary.CreateCaveInstanceData
	// void CreateCaveInstanceData(class AActor* CaveSlotActor, FGuid& CaveSlotGuid, TArray<FJunoGeneratedCaveShellData>& CaveShellData, EJunoCreateCaveResult& Result); // [0xbc3ca78] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoCaveBlueprintLibrary.CalculateCaveShellDistance
	// void CalculateCaveShellDistance(FJunoCave& Cave, FName ShellID_A, FName ShellID_B, int32_t& Distance, EJunoCalculateCaveDistanceResult& Result); // [0xbc3c194] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/JunoProceduralWorld.JunoCaveVolumePlayspaceComponent
/// Size: 0x0000 (0x0000F8 - 0x0000F8)
class UJunoCaveVolumePlayspaceComponent : public UFortPlayspaceComponent
{ 
public:


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoCaveVolumePlayspaceComponent.OnPlayerLeavingCaveVolume
	// void OnPlayerLeavingCaveVolume(class AFortPlayerPawnAthena* PlayerPawn);                                              // [0x211c0a0] Event|Public|BlueprintEvent 
	// Function /Script/JunoProceduralWorld.JunoCaveVolumePlayspaceComponent.OnPlayerEnteringCaveVolume
	// void OnPlayerEnteringCaveVolume(class AFortPlayerPawnAthena* PlayerPawn);                                             // [0x211c0a0] Event|Public|BlueprintEvent 
	// Function /Script/JunoProceduralWorld.JunoCaveVolumePlayspaceComponent.NotifyActorEndOverlap
	// void NotifyActorEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor);                                  // [0xbc42b84] Final|Native|Private 
	// Function /Script/JunoProceduralWorld.JunoCaveVolumePlayspaceComponent.NotifyActorBeginOverlap
	// void NotifyActorBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor);                                // [0xbc42a84] Final|Native|Private 
};

/// Class /Script/JunoProceduralWorld.JunoCheatManager_ProceduralWorld
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoCheatManager_ProceduralWorld : public UChildCheatManager
{ 
public:


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoCheatManager_ProceduralWorld.JunoPOIVolumeDumpAll
	// void JunoPOIVolumeDumpAll();                                                                                          // [0x32e4b44] Final|BlueprintAuthorityOnly|Exec|Native|Private 
	// Function /Script/JunoProceduralWorld.JunoCheatManager_ProceduralWorld.JunoPOIVolumeDump
	// void JunoPOIVolumeDump();                                                                                             // [0x32e4b44] Final|BlueprintAuthorityOnly|Exec|Native|Private 
	// Function /Script/JunoProceduralWorld.JunoCheatManager_ProceduralWorld.JunoGoNearActor
	// void JunoGoNearActor(FString ActorClassName);                                                                         // [0x8c0e6d0] Final|Exec|Native|Private 
	// Function /Script/JunoProceduralWorld.JunoCheatManager_ProceduralWorld.JunoGoBiome
	// void JunoGoBiome(FName Biome);                                                                                        // [0x86fce54] Final|Exec|Native|Private 
	// Function /Script/JunoProceduralWorld.JunoCheatManager_ProceduralWorld.JunoGoActor
	// void JunoGoActor(FString ActorClassName);                                                                             // [0x8c0e6d0] Final|Exec|Native|Private 
	// Function /Script/JunoProceduralWorld.JunoCheatManager_ProceduralWorld.JunoDumpMapTileImages
	// void JunoDumpMapTileImages();                                                                                         // [0x32e4b44] Final|Exec|Native|Private 
};

/// Class /Script/JunoProceduralWorld.JunoClientInstancedActorSpawnerSubsystem
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UJunoClientInstancedActorSpawnerSubsystem : public UMassActorSpawnerSubsystem
{ 
public:
};

/// Class /Script/JunoProceduralWorld.JunoDynamicRuntimeCell
/// Size: 0x0048 (0x000098 - 0x0000E0)
class UJunoDynamicRuntimeCell : public UWorldPartitionRuntimeLevelStreamingCell
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0098   (0x0018)  MISSED
	class ULevel*                                      DynamicCellLevel;                                           // 0x00B0   (0x0008)  
	TArray<FName>                                      DynamicDataLayers;                                          // 0x00B8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x00C8   (0x0018)  MISSED
};

/// Class /Script/JunoProceduralWorld.JunoDynamicRuntimeSpatialHash
/// Size: 0x00F0 (0x0000E8 - 0x0001D8)
class UJunoDynamicRuntimeSpatialHash : public UWorldPartitionRuntimeSpatialHash
{ 
public:
	SDK_UNDEFINED(16,14231) /* FMulticastInlineDelegate */ __um(OnCellLoad);                                       // 0x00E8   (0x0010)  
	SDK_UNDEFINED(16,14232) /* FMulticastInlineDelegate */ __um(OnCellUnload);                                     // 0x00F8   (0x0010)  
	SDK_UNDEFINED(16,14233) /* FMulticastInlineDelegate */ __um(OnCellActivate);                                   // 0x0108   (0x0010)  
	SDK_UNDEFINED(16,14234) /* FMulticastInlineDelegate */ __um(OnCellDeactivate);                                 // 0x0118   (0x0010)  
	unsigned char                                      UnknownData00_6[0xB0];                                      // 0x0128   (0x00B0)  MISSED
};

/// Class /Script/JunoProceduralWorld.JunoGenerateTileInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoGenerateTileInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoGenerateTileInterface.GenerateTile
	// void GenerateTile(FJunoGenerateTileParams& Params);                                                                   // [0xbc42390] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/JunoProceduralWorld.JunoGenerateTileCommandlet
/// Size: 0x0008 (0x000080 - 0x000088)
class UJunoGenerateTileCommandlet : public UCommandlet
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0080   (0x0008)  MISSED


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoGenerateTileCommandlet.FinishedGenerating
	// void FinishedGenerating();                                                                                            // [0x32e4b44] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/JunoProceduralWorld.JunoActorInstanceIndex
/// Size: 0x0002 (0x000000 - 0x000002)
struct FJunoActorInstanceIndex
{ 
	uint16_t                                           Index;                                                      // 0x0000   (0x0002)  
};

/// Struct /Script/JunoProceduralWorld.JunoActorInstanceHandle
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoActorInstanceHandle
{ 
	class UJunoInstancedActorData*                     InstancedActorData;                                         // 0x0000   (0x0008)  
	FJunoActorInstanceIndex                            Index;                                                      // 0x0008   (0x0002)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x000A   (0x0006)  MISSED
};

/// Class /Script/JunoProceduralWorld.JunoInstancedActorComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UJunoInstancedActorComponent : public UActorComponent
{ 
public:
	FJunoActorInstanceHandle                           InstanceHandle;                                             // 0x00A0   (0x0010)  


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoInstancedActorComponent.OnRep_InstanceHandle
	// void OnRep_InstanceHandle();                                                                                          // [0xbc42c84] Final|Native|Protected 
	// Function /Script/JunoProceduralWorld.JunoInstancedActorComponent.HasMassEntity
	// bool HasMassEntity();                                                                                                 // [0xbc42a4c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/JunoProceduralWorld.JunoInstancedActorTagSet
/// Size: 0x0028 (0x000000 - 0x000028)
struct FJunoInstancedActorTagSet
{ 
	FGameplayTagContainer                              Tags;                                                       // 0x0000   (0x0020)  
	uint32_t                                           Hash;                                                       // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/JunoProceduralWorld.JunoInstancedActorVisualizationDesc
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoInstancedActorVisualizationDesc
{ 
	TArray<FISMComponentDescriptor>                    ISMComponentDescriptors;                                    // 0x0000   (0x0010)  
};

/// Struct /Script/JunoProceduralWorld.JunoInstancedActorVisualizationInfo
/// Size: 0x0050 (0x000000 - 0x000050)
struct FJunoInstancedActorVisualizationInfo
{ 
	FJunoInstancedActorVisualizationDesc               VisualizationDesc;                                          // 0x0000   (0x0010)  
	TArray<class UInstancedStaticMeshComponent*>       ISMComponents;                                              // 0x0010   (0x0010)  
	FStaticMeshInstanceVisualizationDescHandle         MassStaticMeshDescHandle;                                   // 0x0020   (0x0002)  
	unsigned char                                      UnknownData00_6[0x2E];                                      // 0x0022   (0x002E)  MISSED
};

/// Struct /Script/JunoProceduralWorld.JunoCompressedTransforms
/// Size: 0x0230 (0x000000 - 0x000230)
struct FJunoCompressedTransforms
{ 
	unsigned char                                      UnknownData00_1[0x230];                                     // 0x0000   (0x0230)  MISSED
};

/// Struct /Script/JunoProceduralWorld.JunoInstancedActorDelta
/// Size: 0x0004 (0x00000C - 0x000010)
struct FJunoInstancedActorDelta : FFastArraySerializerItem
{ 
	FJunoActorInstanceIndex                            InstanceIndex;                                              // 0x000C   (0x0002)  
	bool                                               bDestroyed : 1;                                             // 0x000E:0 (0x0001)  
	char                                               CurrentLifecyclePhaseIndex;                                 // 0x000F   (0x0001)  
};

/// Struct /Script/JunoProceduralWorld.JunoInstancedActorDeltaList
/// Size: 0x0070 (0x000108 - 0x000178)
struct FJunoInstancedActorDeltaList : FFastArraySerializer
{ 
	unsigned char                                      UnknownData00_2[0x58];                                      // 0x0108   (0x0058)  MISSED
	TArray<FJunoInstancedActorDelta>                   InstanceDeltas;                                             // 0x0160   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0170   (0x0008)  MISSED
};

/// Class /Script/JunoProceduralWorld.JunoInstancedActorData
/// Size: 0x04C8 (0x000028 - 0x0004F0)
class UJunoInstancedActorData : public UObject
{ 
public:
	uint16_t                                           ID;                                                         // 0x0028   (0x0002)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x002A   (0x0006)  MISSED
	class UClass*                                      ActorClass;                                                 // 0x0030   (0x0008)  
	FJunoInstancedActorTagSet                          Tags;                                                       // 0x0038   (0x0028)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x0060   (0x0010)  MISSED
	TArray<FTransform>                                 InstanceTransforms;                                         // 0x0070   (0x0010)  
	uint16_t                                           NumValidInstances;                                          // 0x0080   (0x0002)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x0082   (0x0006)  MISSED
	FBox                                               Bounds;                                                     // 0x0088   (0x0038)  
	uint16_t                                           NumInstances;                                               // 0x00C0   (0x0002)  
	unsigned char                                      UnknownData03_5[0x6];                                       // 0x00C2   (0x0006)  MISSED
	TArray<FMassEntityHandle>                          Entities;                                                   // 0x00C8   (0x0010)  
	unsigned char                                      UnknownData04_5[0x30];                                      // 0x00D8   (0x0030)  MISSED
	TArray<FJunoInstancedActorVisualizationInfo>       InstanceVisualizations;                                     // 0x0108   (0x0010)  
	unsigned char                                      UnknownData05_5[0x28];                                      // 0x0118   (0x0028)  MISSED
	FJunoCompressedTransforms                          CompressedInstanceTransforms;                               // 0x0140   (0x0230)  
	FJunoInstancedActorDeltaList                       InstanceDeltas;                                             // 0x0370   (0x0178)  
	unsigned char                                      UnknownData06_6[0x8];                                       // 0x04E8   (0x0008)  MISSED


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoInstancedActorData.GetManager
	// class AJunoInstancedActorManager* GetManager();                                                                       // [0x32af65c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoProceduralWorld.JunoInstancedActorInitializerProcessor
/// Size: 0x02A0 (0x0000C0 - 0x000360)
class UJunoInstancedActorInitializerProcessor : public UMassProcessor
{ 
public:
	unsigned char                                      UnknownData00_1[0x2A0];                                     // 0x00C0   (0x02A0)  MISSED
};

/// Struct /Script/JunoProceduralWorld.JunoInstancedActorManagerHandle
/// Size: 0x0004 (0x000000 - 0x000004)
struct FJunoInstancedActorManagerHandle
{ 
	int32_t                                            ManagerID;                                                  // 0x0000   (0x0004)  
};

/// Class /Script/JunoProceduralWorld.JunoInstancedActorManager
/// Size: 0x0148 (0x000290 - 0x0003D8)
class AJunoInstancedActorManager : public APartitionActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0290   (0x0020)  MISSED
	class UJunoInstancedActorSubsystem*                InstancedActorSubsystem;                                    // 0x02B0   (0x0008)  
	FJunoInstancedActorManagerHandle                   ManagerHandle;                                              // 0x02B8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x2C];                                      // 0x02BC   (0x002C)  MISSED
	FGuid                                              SavedActorGuid;                                             // 0x02E8   (0x0010)  
	bool                                               bPersistentDataRestored;                                    // 0x02F8   (0x0001)  
	bool                                               bHasSpawnedEntities;                                        // 0x02F9   (0x0001)  
	uint16_t                                           NextInstanceDataID;                                         // 0x02FA   (0x0002)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x02FC   (0x0004)  MISSED
	TArray<class UJunoInstancedActorData*>             PerActorClassInstanceData;                                  // 0x0300   (0x0010)  
	FBox                                               InstanceBounds;                                             // 0x0310   (0x0038)  
	unsigned char                                      UnknownData03_5[0x40];                                      // 0x0348   (0x0040)  MISSED
	SDK_UNDEFINED(80,14235) /* TMap<UInstancedStaticMeshComponent*, int32_t> */ __um(ISMComponentToInstanceDataMap); // 0x0388   (0x0050)  
};

/// Class /Script/JunoProceduralWorld.JunoInstancedActorModifierBase
/// Size: 0x0050 (0x000028 - 0x000078)
class UJunoInstancedActorModifierBase : public UObject
{ 
public:
	FGameplayTagQuery                                  InstanceTagsQuery;                                          // 0x0028   (0x0048)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0070   (0x0008)  MISSED
};

/// Class /Script/JunoProceduralWorld.JunoRemoveInstancedActorsModifier
/// Size: 0x0000 (0x000078 - 0x000078)
class UJunoRemoveInstancedActorsModifier : public UJunoInstancedActorModifierBase
{ 
public:
};

/// Class /Script/JunoProceduralWorld.JunoInstancedActorModifierVolume
/// Size: 0x0008 (0x000290 - 0x000298)
class AJunoInstancedActorModifierVolume : public AActor
{ 
public:
	class UJunoInstancedActorModifierVolumeComponent*  ModifierVolumeComponent;                                    // 0x0290   (0x0008)  
};

/// Class /Script/JunoProceduralWorld.JunoInstancedActorRemovalModifierVolume
/// Size: 0x0000 (0x000298 - 0x000298)
class AJunoInstancedActorRemovalModifierVolume : public AJunoInstancedActorModifierVolume
{ 
public:
};

/// Struct /Script/JunoProceduralWorld.JunoInstancedActorModifierVolumeHandle
/// Size: 0x0004 (0x000000 - 0x000004)
struct FJunoInstancedActorModifierVolumeHandle
{ 
	int32_t                                            ModifierVolumeID;                                           // 0x0000   (0x0004)  
};

/// Class /Script/JunoProceduralWorld.JunoInstancedActorModifierVolumeComponent
/// Size: 0x0080 (0x000570 - 0x0005F0)
class UJunoInstancedActorModifierVolumeComponent : public UPrimitiveComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0570   (0x0008)  MISSED
	EJunoIAVolumeShape                                 Shape;                                                      // 0x0578   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0579   (0x0007)  MISSED
	FVector                                            Extent;                                                     // 0x0580   (0x0018)  
	float                                              Radius;                                                     // 0x0598   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x059C   (0x0004)  MISSED
	TArray<class UJunoInstancedActorModifierBase*>     Modifiers;                                                  // 0x05A0   (0x0010)  
	bool                                               bIgnoreOwnLevelsInstances;                                  // 0x05B0   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x05B1   (0x0007)  MISSED
	SDK_UNDEFINED(16,14236) /* TArray<TWeakObjectPtr<UWorld*>> */ __um(LevelsToIgnore);                            // 0x05B8   (0x0010)  
	FColor                                             Color;                                                      // 0x05C8   (0x0004)  
	bool                                               bDrawOnlyIfSelected;                                        // 0x05CC   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x05CD   (0x0003)  MISSED
	float                                              LineThickness;                                              // 0x05D0   (0x0004)  
	FJunoInstancedActorModifierVolumeHandle            ModifierVolumeHandle;                                       // 0x05D4   (0x0004)  
	SDK_UNDEFINED(16,14237) /* TArray<TWeakObjectPtr<AJunoInstancedActorManager*>> */ __um(ModifiedManagers);      // 0x05D8   (0x0010)  
	unsigned char                                      UnknownData05_6[0x8];                                       // 0x05E8   (0x0008)  MISSED
};

/// Class /Script/JunoProceduralWorld.JunoRemoveInstancesModifierVolumeComponent
/// Size: 0x0000 (0x0005F0 - 0x0005F0)
class UJunoRemoveInstancesModifierVolumeComponent : public UJunoInstancedActorModifierVolumeComponent
{ 
public:
};

/// Class /Script/JunoProceduralWorld.JunoInstancedActorRepresentationActorManagement
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoInstancedActorRepresentationActorManagement : public UMassRepresentationActorManagement
{ 
public:
};

/// Class /Script/JunoProceduralWorld.JunoInstancedActorRepresentationSubsystem
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UJunoInstancedActorRepresentationSubsystem : public UMassRepresentationSubsystem
{ 
public:
};

/// Class /Script/JunoProceduralWorld.JunoInstancedActorProjectSettings
/// Size: 0x0018 (0x000030 - 0x000048)
class UJunoInstancedActorProjectSettings : public UDeveloperSettings
{ 
public:
	int32_t                                            GridSize;                                                   // 0x0030   (0x0004)  
	FDataRegistryType                                  NamedSettingsRegistryType;                                  // 0x0034   (0x0004)  
	FDataRegistryType                                  ActorClassSettingsRegistryType;                             // 0x0038   (0x0004)  
	FName                                              DefaultBaseSettingsName;                                    // 0x003C   (0x0004)  
	FName                                              EnforcedSettingsName;                                       // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Class /Script/JunoProceduralWorld.JunoInstancedActorSubsystem
/// Size: 0x02C0 (0x000040 - 0x000300)
class UJunoInstancedActorSubsystem : public UTickableWorldSubsystem
{ 
public:
	class UJunoInstancedActorProjectSettings*          ProjectSettings;                                            // 0x0040   (0x0008)  
	class UDataRegistrySubsystem*                      DataRegistrySubsystem;                                      // 0x0048   (0x0008)  
	class UActorPartitionSubsystem*                    ActorPartitionSubsystem;                                    // 0x0050   (0x0008)  
	unsigned char                                      UnknownData00_5[0x250];                                     // 0x0058   (0x0250)  MISSED
	class UWorld*                                      ExemplarActorWorld;                                         // 0x02A8   (0x0008)  
	SDK_UNDEFINED(80,14238) /* TMap<UClass*, AActor*> */ __um(ExemplarActors);                                     // 0x02B0   (0x0050)  
};

/// Class /Script/JunoProceduralWorld.JunoInstancedActorVisualizationSwitcherProcessor
/// Size: 0x02A0 (0x0000C0 - 0x000360)
class UJunoInstancedActorVisualizationSwitcherProcessor : public UMassProcessor
{ 
public:
	unsigned char                                      UnknownData00_1[0x2A0];                                     // 0x00C0   (0x02A0)  MISSED
};

/// Class /Script/JunoProceduralWorld.JunoInstancedActorVisualizationTrait
/// Size: 0x0000 (0x000120 - 0x000120)
class UJunoInstancedActorVisualizationTrait : public UMassStationaryDistanceVisualizationTrait
{ 
public:
};

/// Struct /Script/JunoProceduralWorld.JunoLifecyclePhase
/// Size: 0x00B0 (0x000000 - 0x0000B0)
struct FJunoLifecyclePhase
{ 
	FScalableFloat                                     duration;                                                   // 0x0000   (0x0028)  
	bool                                               bOverrideMesh;                                              // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	SDK_UNDEFINED(32,14239) /* TWeakObjectPtr<UStaticMesh*> */ __um(Mesh);                                         // 0x0030   (0x0020)  
	bool                                               bOverrideMaterials;                                         // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0051   (0x0007)  MISSED
	TArray<class UMaterialInterface*>                  Materials;                                                  // 0x0058   (0x0010)  
	bool                                               bOverrideCollisionEnabled;                                  // 0x0068   (0x0001)  
	SDK_UNDEFINED(1,14240) /* TEnumAsByte<ECollisionEnabled> */ __um(CollisionEnabled);                            // 0x0069   (0x0001)  
	bool                                               bOverrideHealth;                                            // 0x006A   (0x0001)  
	unsigned char                                      UnknownData02_5[0x5];                                       // 0x006B   (0x0005)  MISSED
	FScalableFloat                                     Health;                                                     // 0x0070   (0x0028)  
	FGameplayTag                                       tag;                                                        // 0x0098   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x009C   (0x0004)  MISSED
	FInstancedStruct                                   CustomData;                                                 // 0x00A0   (0x0010)  
};

/// Class /Script/JunoProceduralWorld.JunoLifecycleComponent
/// Size: 0x0060 (0x0000B0 - 0x000110)
class UJunoLifecycleComponent : public UJunoInstancedActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x00B0   (0x0010)  MISSED
	TArray<FJunoLifecyclePhase>                        LifecyclePhases;                                            // 0x00C0   (0x0010)  
	bool                                               bAutoAddFinalLifecyclePhase;                                // 0x00D0   (0x0001)  
	bool                                               bRepeatLifecyclePhases;                                     // 0x00D1   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x00D2   (0x0006)  MISSED
	SDK_UNDEFINED(16,14241) /* FMulticastInlineDelegate */ __um(OnLifecyclePhaseChangedDelegate);                  // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,14242) /* FMulticastInlineDelegate */ __um(OnLifecycleCompletedDelegate);                     // 0x00E8   (0x0010)  
	class UStaticMeshComponent*                        MeshComponent;                                              // 0x00F8   (0x0008)  
	char                                               StartingPhaseIndex;                                         // 0x0100   (0x0001)  
	char                                               CurrentPhaseIndex;                                          // 0x0101   (0x0001)  
	unsigned char                                      UnknownData02_6[0xE];                                       // 0x0102   (0x000E)  MISSED


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoLifecycleComponent.SetCurrentPhaseByIndex
	// bool SetCurrentPhaseByIndex(char NewCurrentPhaseIndex, float TimeElapsedInNewPhase, bool bUpdateMass);                // [0xbc45d58] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoLifecycleComponent.OnRep_CurrentPhaseIndex
	// void OnRep_CurrentPhaseIndex(char PreviousLifecyclePhaseIndex);                                                       // [0xbc45a20] Final|Native|Protected 
	// Function /Script/JunoProceduralWorld.JunoLifecycleComponent.HasCompletedLifecycle
	// bool HasCompletedLifecycle();                                                                                         // [0xbc458e8] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.JunoLifecycleComponent.GetCurrentPhaseTimeElapsed
	// float GetCurrentPhaseTimeElapsed();                                                                                   // [0xbc458c0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.JunoLifecycleComponent.GetCurrentPhaseIndex
	// char GetCurrentPhaseIndex();                                                                                          // [0xbc45894] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.JunoLifecycleComponent.BP_GetCurrentPhase
	// bool BP_GetCurrentPhase(FJunoLifecyclePhase& OutCurrentPhase);                                                        // [0xbc44f94] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.JunoLifecycleComponent.ApplyCurrentPhaseOverrides
	// void ApplyCurrentPhaseOverrides();                                                                                    // [0xbc44f80] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoProceduralWorld.JunoLifecycleProcessor
/// Size: 0x02A0 (0x0000C0 - 0x000360)
class UJunoLifecycleProcessor : public UMassProcessor
{ 
public:
	unsigned char                                      UnknownData00_1[0x2A0];                                     // 0x00C0   (0x02A0)  MISSED
};

/// Class /Script/JunoProceduralWorld.JunoLifecycleVisualizationProcessor
/// Size: 0x02A0 (0x0000C0 - 0x000360)
class UJunoLifecycleVisualizationProcessor : public UMassProcessor
{ 
public:
	unsigned char                                      UnknownData00_1[0x2A0];                                     // 0x00C0   (0x02A0)  MISSED
};

/// Class /Script/JunoProceduralWorld.JunoLightWeightBuildingProp
/// Size: 0x0000 (0x000290 - 0x000290)
class AJunoLightWeightBuildingProp : public AActor
{ 
public:
};

/// Class /Script/JunoProceduralWorld.JunoLightWeightBuildingGameplayActor
/// Size: 0x0000 (0x000290 - 0x000290)
class AJunoLightWeightBuildingGameplayActor : public AActor
{ 
public:
};

/// Class /Script/JunoProceduralWorld.JunoLightWeightFortStaticMeshActor
/// Size: 0x0000 (0x000290 - 0x000290)
class AJunoLightWeightFortStaticMeshActor : public AActor
{ 
public:
};

/// Class /Script/JunoProceduralWorld.JunoMassEntityClientDebugProcessor
/// Size: 0x0000 (0x0000C0 - 0x0000C0)
class UJunoMassEntityClientDebugProcessor : public UMassProcessor
{ 
public:
};

/// Class /Script/JunoProceduralWorld.JunoMassHydrationSignalProcessorBase
/// Size: 0x0000 (0x000420 - 0x000420)
class UJunoMassHydrationSignalProcessorBase : public UMassSignalProcessorBase
{ 
public:
};

/// Class /Script/JunoProceduralWorld.JunoMassHydrationSignalProcessor
/// Size: 0x0000 (0x000420 - 0x000420)
class UJunoMassHydrationSignalProcessor : public UJunoMassHydrationSignalProcessorBase
{ 
public:
};

/// Class /Script/JunoProceduralWorld.JunoMassDehydrationSignalProcessor
/// Size: 0x0000 (0x000420 - 0x000420)
class UJunoMassDehydrationSignalProcessor : public UJunoMassHydrationSignalProcessorBase
{ 
public:
};

/// Class /Script/JunoProceduralWorld.JunoMassStationaryLODBatchProcessor
/// Size: 0x0570 (0x0000C0 - 0x000630)
class UJunoMassStationaryLODBatchProcessor : public UMassProcessor
{ 
public:
	unsigned char                                      UnknownData00_2[0x540];                                     // 0x00C0   (0x0540)  MISSED
	double                                             DelayPerBulkLOD;                                            // 0x0600   (0x0020)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0620   (0x0010)  MISSED
};

/// Class /Script/JunoProceduralWorld.JunoMinimapGenerator
/// Size: 0x0010 (0x000290 - 0x0002A0)
class AJunoMinimapGenerator : public AActor
{ 
public:
	SDK_UNDEFINED(16,14243) /* FMulticastInlineDelegate */ __um(OnTexture2DPackageCreatedDelegate);                // 0x0290   (0x0010)  


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoMinimapGenerator.CreatePackageAndSaveTexture2D
	// class UPackage* CreatePackageAndSaveTexture2D(class UTextureRenderTarget2D* RenderTarget, FString PackageName);       // [0xbc451a4] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/JunoProceduralWorld.JunoOutOfBoundsTile
/// Size: 0x0000 (0x000290 - 0x000290)
class AJunoOutOfBoundsTile : public AActor
{ 
public:
};

/// Class /Script/JunoProceduralWorld.JunoPawnComponent_StreamingSourcesProvider
/// Size: 0x0068 (0x0000B0 - 0x000118)
class UJunoPawnComponent_StreamingSourcesProvider : public UJunoPawnComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00B0   (0x0008)  MISSED
	FVector                                            AboveGroundLocation;                                        // 0x00B8   (0x0018)  
	FRotator                                           AboveGroundRotation;                                        // 0x00D0   (0x0018)  
	FVector                                            BelowGroundLocation;                                        // 0x00E8   (0x0018)  
	FRotator                                           BelowGroundRotation;                                        // 0x0100   (0x0018)  
};

/// Class /Script/JunoProceduralWorld.JunoPCGVolume
/// Size: 0x0070 (0x000290 - 0x000300)
class AJunoPCGVolume : public AActor
{ 
public:
	SDK_UNDEFINED(80,14244) /* TMap<FName, FJunoCompressedPointList> */ __um(CompressedData);                      // 0x0290   (0x0050)  
	bool                                               bIsCompressedDataValid;                                     // 0x02E0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x02E1   (0x0007)  MISSED
	class UBoxComponent*                               SceneRootComponent;                                         // 0x02E8   (0x0008)  
	class UPCGComponent*                               GeneratorComponent;                                         // 0x02F0   (0x0008)  
	class UPCGComponent*                               SpawnerComponent;                                           // 0x02F8   (0x0008)  


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoPCGVolume.IsSpawnerBusy
	// bool IsSpawnerBusy();                                                                                                 // [0xbc459ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.JunoPCGVolume.IsGeneratorBusy
	// bool IsGeneratorBusy();                                                                                               // [0xbc45914] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.JunoPCGVolume.CalculateCompressedDataSize
	// int32_t CalculateCompressedDataSize();                                                                                // [0xbc4515c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.JunoPCGVolume.CalcCompressedObjectCount
	// int32_t CalcCompressedObjectCount();                                                                                  // [0xbc45138] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/JunoProceduralWorld.JunoPOIManagerSlot
/// Size: 0x0040 (0x000000 - 0x000040)
struct FJunoPOIManagerSlot
{ 
	FVector                                            Location;                                                   // 0x0000   (0x0018)  
	FGuid                                              Guid;                                                       // 0x0018   (0x0010)  
	EJunoBiome                                         Biome;                                                      // 0x0028   (0x0001)  
	EJunoPOISize                                       Size;                                                       // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x002A   (0x0006)  MISSED
	TArray<FName>                                      Tags;                                                       // 0x0030   (0x0010)  
};

/// Struct /Script/JunoProceduralWorld.PCGJunoWorldTilePOI
/// Size: 0x01B8 (0x000008 - 0x0001C0)
struct FPCGJunoWorldTilePOI : FTableRowBase
{ 
	SDK_UNDEFINED(32,14245) /* TWeakObjectPtr<UWorld*> */ __um(WorldAsset);                                        // 0x0008   (0x0020)  
	SDK_UNDEFINED(32,14246) /* TWeakObjectPtr<UWorld*> */ __um(HLODWorldAsset);                                    // 0x0028   (0x0020)  
	bool                                               bEnabled;                                                   // 0x0048   (0x0001)  
	EJunoPOISize                                       Size;                                                       // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x004A   (0x0006)  MISSED
	SDK_UNDEFINED(80,14247) /* TSet<EJunoPOISize> */   __um(SlotSizes);                                            // 0x0050   (0x0050)  
	FVector                                            BoundsSize;                                                 // 0x00A0   (0x0018)  
	SDK_UNDEFINED(80,14248) /* TSet<EJunoBiome> */     __um(Biomes);                                               // 0x00B8   (0x0050)  
	SDK_UNDEFINED(80,14249) /* TSet<FName> */          __um(Tags);                                                 // 0x0108   (0x0050)  
	EJunoWorldTilePOIType                              Type;                                                       // 0x0158   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0159   (0x0003)  MISSED
	int32_t                                            MaximumCountPerWorld;                                       // 0x015C   (0x0004)  
	FGameplayTagContainer                              EncounterCapabilities;                                      // 0x0160   (0x0020)  
	int32_t                                            EncounterVariantCount;                                      // 0x0180   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0184   (0x0004)  MISSED
	SDK_UNDEFINED(32,14250) /* TWeakObjectPtr<UDataTable*> */ __um(EncounterCategoryTable);                        // 0x0188   (0x0020)  
	TArray<FTransform>                                 TeleporterOffsets;                                          // 0x01A8   (0x0010)  
	int32_t                                            PersistenceVersion;                                         // 0x01B8   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x01BC   (0x0004)  MISSED
};

/// Class /Script/JunoProceduralWorld.JunoPOIPreselectorComponent
/// Size: 0x00F0 (0x0000A0 - 0x000190)
class UJunoPOIPreselectorComponent : public UGameFrameworkComponent
{ 
public:
	TArray<FJunoPOIManagerSlot>                        WorldTileSlots;                                             // 0x00A0   (0x0010)  
	unsigned char                                      UnknownData00_5[0x28];                                      // 0x00B0   (0x0028)  MISSED
	TArray<FPCGJunoWorldTilePOI>                       DebugSpawnPOIs;                                             // 0x00D8   (0x0010)  
	FDataRegistryType                                  POIDataRegistry;                                            // 0x00E8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00EC   (0x0004)  MISSED
	class AJunoWorldTile*                              WorldTile;                                                  // 0x00F0   (0x0008)  
	unsigned char                                      UnknownData02_6[0x98];                                      // 0x00F8   (0x0098)  MISSED


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoPOIPreselectorComponent.OnWorldTileContentsAvailable
	// void OnWorldTileContentsAvailable();                                                                                  // [0xbc45d44] Final|Native|Protected 
	// Function /Script/JunoProceduralWorld.JunoPOIPreselectorComponent.OnSpawnPositionSet
	// void OnSpawnPositionSet(FUniqueNetIdRepl ID, FVector Location);                                                       // [0xbc45abc] Final|Native|Protected|HasDefaults 
	// Function /Script/JunoProceduralWorld.JunoPOIPreselectorComponent.BeginPreselection
	// void BeginPreselection();                                                                                             // [0xbc45124] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoProceduralWorld.JunoCaveGeneratorInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoCaveGeneratorInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoCaveGeneratorInterface.GenerateCave
	// void GenerateCave(FJunoCaveSurfaceData& CaveSurfaceData, EJunoBiome Biome, int32_t CaveIndex, FBox& Bounds);          // [0x211c0a0] Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
};

/// Struct /Script/JunoProceduralWorld.JunoPOISelectorTeleporterClass
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoPOISelectorTeleporterClass
{ 
	EJunoBiome                                         Biome;                                                      // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	class UClass*                                      Teleporter;                                                 // 0x0008   (0x0008)  
};

/// Struct /Script/JunoProceduralWorld.JunoPOISelectorParams
/// Size: 0x0030 (0x000000 - 0x000030)
struct FJunoPOISelectorParams
{ 
	FGuid                                              Guid;                                                       // 0x0000   (0x0010)  
	EJunoPOISize                                       Size;                                                       // 0x0010   (0x0001)  
	EJunoBiome                                         Biome;                                                      // 0x0011   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0012   (0x0006)  MISSED
	TArray<FName>                                      SlotTags;                                                   // 0x0018   (0x0010)  
	class AActor*                                      PoiManager;                                                 // 0x0028   (0x0008)  
};

/// Struct /Script/JunoProceduralWorld.JunoCaveSurfaceData
/// Size: 0x0030 (0x000000 - 0x000030)
struct FJunoCaveSurfaceData
{ 
	FGuid                                              CaveGuid;                                                   // 0x0000   (0x0010)  
	TArray<FGuid>                                      Entrances;                                                  // 0x0010   (0x0010)  
	TArray<FTransform>                                 EntranceTeleporterTransforms;                               // 0x0020   (0x0010)  
};

/// Class /Script/JunoProceduralWorld.JunoPOISelectorComponent
/// Size: 0x00B8 (0x0000A0 - 0x000158)
class UJunoPOISelectorComponent : public UGameFrameworkComponent
{ 
public:
	FDataRegistryType                                  DataRegistryType;                                           // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00A4   (0x0004)  MISSED
	FGameplayTagContainer                              CosmeticEncounterTags;                                      // 0x00A8   (0x0020)  
	TArray<FJunoPOISelectorTeleporterClass>            TeleporterClasses;                                          // 0x00C8   (0x0010)  
	FJunoPOISelectorParams                             Params;                                                     // 0x00D8   (0x0030)  
	SDK_UNDEFINED(8,14251) /* TWeakObjectPtr<UJunoPOIPreselectorComponent*> */ __um(PreSelectorComponent);         // 0x0108   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0110   (0x0008)  MISSED
	FJunoCaveSurfaceData                               CaveSurfaceData;                                            // 0x0118   (0x0030)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0148   (0x0010)  MISSED


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoPOISelectorComponent.TriggerCaveGeneration
	// void TriggerCaveGeneration();                                                                                         // [0xbc45e54] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoPOISelectorComponent.IsPOIPreselectorActorReady
	// bool IsPOIPreselectorActorReady(class AActor* Actor);                                                                 // [0xbc45960] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoPOISelectorComponent.IsNativePOISelectorEnabled
	// bool IsNativePOISelectorEnabled();                                                                                    // [0xbc45948] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoProceduralWorld.JunoPOISelectorComponent.DoSelection
	// void DoSelection();                                                                                                   // [0xbc45880] Final|Native|Protected 
	// Function /Script/JunoProceduralWorld.JunoPOISelectorComponent.CaveGridResolution
	// int32_t CaveGridResolution();                                                                                         // [0xbc45180] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoProceduralWorld.JunoPOISelectorComponent.BeginPOISelection
	// void BeginPOISelection(FJunoPOISelectorParams& Params);                                                               // [0xbc45068] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/JunoProceduralWorld.JunoProceduralWorldBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoProceduralWorldBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoProceduralWorldBlueprintLibrary.UnionActorBounds
	// FBox UnionActorBounds(TArray<AActor*>& Actors);                                                                       // [0xbc4a95c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoProceduralWorldBlueprintLibrary.SetGridCellSize
	// void SetGridCellSize(class AActor* WorldContextObject, FName GridName, float CellSize, float LoadingRange, FVector2D Origin); // [0xbc4a790] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoProceduralWorldBlueprintLibrary.SetBoxBrushSize
	// void SetBoxBrushSize(class AActor* Volume, FVector& Size);                                                            // [0x91b8390] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoProceduralWorldBlueprintLibrary.SaveCurrentLevelAs
	// bool SaveCurrentLevelAs(FString NewPackageName);                                                                      // [0x80f3e40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoProceduralWorldBlueprintLibrary.RunParallelCommandlets
	// void RunParallelCommandlets(FText& DialogueTitle, TArray<FString>& Commands, int32_t MaxProcesses);                   // [0xbc4a484] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoProceduralWorldBlueprintLibrary.JunoCreateLevel
	// void JunoCreateLevel(FJunoCreateLevelParams& Params, TWeakObjectPtr<UWorld*>& CreatedLevel, EJunoCreateLevelResult& Result); // [0xbc4a1b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoProceduralWorldBlueprintLibrary.GetJunoWorldRegistry
	// class UJunoWorldRegistryManager* GetJunoWorldRegistry(class UObject* WorldContextObject);                             // [0xbc4a130] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoProceduralWorld.JunoProceduralWorldBlueprintLibrary.FindNextMatchingPOIResourceEx
	// void FindNextMatchingPOIResourceEx(FJunoRandomTableKeysIterator& Iterator, class UDataTable* DataTable, EJunoPOISize Size, EJunoBiome Biome, FPCGJunoWorldTilePOI& FoundPOI, EJunoFindNextMatchingPOIResourceResult& Result); // [0xbc49b50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoProceduralWorldBlueprintLibrary.FindNextMatchingPOIResource
	// void FindNextMatchingPOIResource(FJunoRandomTableKeysIterator& Iterator, class UDataTable* DataTable, EJunoPOISize SlotPOISize, TArray<FName>& SlotTags, FPCGJunoWorldTilePOI& FoundPOI, EJunoFindNextMatchingPOIResourceResult& Result, bool bRemoveFromIterator); // [0xbc496d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoProceduralWorldBlueprintLibrary.FindAllResourcesInFolder
	// void FindAllResourcesInFolder(FString Folder, class UClass* AssetClass, TArray<FSoftObjectPath>& OutPaths);           // [0xbc489b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoProceduralWorldBlueprintLibrary.EnableLandscapeNaniteSkirts
	// void EnableLandscapeNaniteSkirts(class ALandscape* Landscape, bool bEnable, float SkirtDepth);                        // [0xbc488cc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoProceduralWorldBlueprintLibrary.DisableLandscapeEditLayers
	// void DisableLandscapeEditLayers(class ALandscape* Landscape);                                                         // [0x604b150] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoProceduralWorldBlueprintLibrary.DeterministicShuffleKeys
	// TArray<FName> DeterministicShuffleKeys(FRandomStream& RandomSource, TArray<FName>& Array);                            // [0xbc48780] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoProceduralWorldBlueprintLibrary.CreateJunoWPLevelFromActors
	// void CreateJunoWPLevelFromActors(FString LevelPackageName, TArray<AActor*>& Actors, TWeakObjectPtr<UWorld*>& CreatedLevel, bool bUseWorldPartition, FName GridName, float LoadingRange, int32_t WorldPartitionGridCellSize, FVector2D WorldPartitionGridCellOrigin, class UHLODLayer* DefaultHLODLayer, EWorldPartitionServerStreamingMode ServerStreamingMode, EWorldPartitionServerStreamingOutMode ServerStreamingOutMode); // [0xbc47974] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoProceduralWorldBlueprintLibrary.CreateJunoRandomTableKeysIterator
	// FJunoRandomTableKeysIterator CreateJunoRandomTableKeysIterator(FRandomStream& RandomStream, TArray<FName>& Keys);     // [0xbc47848] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoProceduralWorldBlueprintLibrary.CompareTagSets
	// void CompareTagSets(TSet<FName>& Source, TSet<FName>& Target, EJunoCompareTagSetsResult& Result);                     // [0xbc475e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoProceduralWorldBlueprintLibrary.CalcPOISizeExtent
	// FVector CalcPOISizeExtent(EJunoPOISize Size);                                                                         // [0xbc4754c] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/JunoProceduralWorld.JunoProceduralWorldDeveloperSettings
/// Size: 0x0000 (0x000030 - 0x000030)
class UJunoProceduralWorldDeveloperSettings : public UDeveloperSettings
{ 
public:
};

/// Class /Script/JunoProceduralWorld.JunoProceduralWorldSettings
/// Size: 0x00E8 (0x0000F8 - 0x0001E0)
class UJunoProceduralWorldSettings : public UFortPlayspaceComponent
{ 
public:
	bool                                               bEnableTiledWorldsInPIE;                                    // 0x00F8   (0x0001)  
	EJunoLevelInstanceMode                             Caves_LevelInstanceMode;                                    // 0x00F9   (0x0001)  
	EJunoLevelInstanceMode                             POI_LevelInstanceMode;                                      // 0x00FA   (0x0001)  
	bool                                               bEnablePOI_HLODs;                                           // 0x00FB   (0x0001)  
	int32_t                                            MaxPOIsPerTile;                                             // 0x00FC   (0x0004)  
	FName                                              InjectedPOI_GridName;                                       // 0x0100   (0x0004)  
	FName                                              InjectedPOI_HLODGridName;                                   // 0x0104   (0x0004)  
	FName                                              InjectedCave_GridName;                                      // 0x0108   (0x0004)  
	FName                                              InjectedCave_HLODGridName;                                  // 0x010C   (0x0004)  
	int32_t                                            POIStreamingPriority;                                       // 0x0110   (0x0004)  
	int32_t                                            CaveStreamingPriority;                                      // 0x0114   (0x0004)  
	int64_t                                            TileSize;                                                   // 0x0118   (0x0008)  
	int64_t                                            WorldSize;                                                  // 0x0120   (0x0008)  
	FIntVector                                         WorldOriginTileOffset;                                      // 0x0128   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0134   (0x0004)  MISSED
	int64_t                                            DynamicGridLevels;                                          // 0x0138   (0x0008)  
	float                                              DynamicGridWorldMaxExtent;                                  // 0x0140   (0x0004)  
	float                                              DynamicGridLoadingRange;                                    // 0x0144   (0x0004)  
	FVector                                            OffsetTerrain;                                              // 0x0148   (0x0018)  
	class UClass*                                      TileSelectionClass;                                         // 0x0160   (0x0008)  
	class UClass*                                      WorldTileClass;                                             // 0x0168   (0x0008)  
	class UClass*                                      OutOfBoundsTileActor;                                       // 0x0170   (0x0008)  
	float                                              TerrainElevationMinimum;                                    // 0x0178   (0x0004)  
	float                                              TerrainElevationMaximum;                                    // 0x017C   (0x0004)  
	class UClass*                                      CaveVolumeClass;                                            // 0x0180   (0x0008)  
	class UClass*                                      POIVolumeClass;                                             // 0x0188   (0x0008)  
	SDK_UNDEFINED(32,14252) /* TWeakObjectPtr<UDataTable*> */ __um(POIResourcesTable);                             // 0x0190   (0x0020)  
	FDataRegistryType                                  POIRegistryType;                                            // 0x01B0   (0x0004)  
	FDataRegistryType                                  TileSelectorRegistryType;                                   // 0x01B4   (0x0004)  
	SDK_UNDEFINED(32,14253) /* TWeakObjectPtr<UWorld*> */ __um(TestOverlayLevel);                                  // 0x01B8   (0x0020)  
	FName                                              TileSelectorOverride;                                       // 0x01D8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x01DC   (0x0004)  MISSED
};

/// Class /Script/JunoProceduralWorld.JunoServerInstancedActorSpawnerSubsystem
/// Size: 0x0028 (0x0000F0 - 0x000118)
class UJunoServerInstancedActorSpawnerSubsystem : public UMassActorSpawnerSubsystem
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x00F0   (0x0010)  MISSED
	class AActor*                                      TransientActorBeingSpawned;                                 // 0x0100   (0x0008)  
	FJunoActorInstanceHandle                           TransientActorSpawningInstance;                             // 0x0108   (0x0010)  
};

/// Class /Script/JunoProceduralWorld.JunoStaticMeshPoolSubsystem
/// Size: 0x0008 (0x000030 - 0x000038)
class UJunoStaticMeshPoolSubsystem : public UWorldSubsystem
{ 
public:
	class AJunoStaticMeshPoolActor*                    StaticMeshPoolActor;                                        // 0x0030   (0x0008)  
};

/// Class /Script/JunoProceduralWorld.JunoStreamingGameplayVolumeDebugger
/// Size: 0x0000 (0x000040 - 0x000040)
class UJunoStreamingGameplayVolumeDebugger : public UTickableWorldSubsystem
{ 
public:
};

/// Class /Script/JunoProceduralWorld.JunoStreamingPlayspace
/// Size: 0x0000 (0x0007C8 - 0x0007C8)
class AJunoStreamingPlayspace : public AJunoPersistentPlayspace
{ 
public:
};

/// Struct /Script/JunoProceduralWorld.JunoTerrainGenerationConfiguration
/// Size: 0x0058 (0x000000 - 0x000058)
struct FJunoTerrainGenerationConfiguration
{ 
	float                                              GenerateStart;                                              // 0x0000   (0x0004)  
	float                                              GenerateRemove;                                             // 0x0004   (0x0004)  
	unsigned char                                      UnknownData00_5[0x20];                                      // 0x0008   (0x0020)  MISSED
	double                                             GenerationFlushDistance;                                    // 0x0028   (0x0008)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x0030   (0x0028)  MISSED
};

/// Class /Script/JunoProceduralWorld.JunoTerrainGenerationSystem
/// Size: 0x04B0 (0x000040 - 0x0004F0)
class UJunoTerrainGenerationSystem : public UTickableWorldSubsystem
{ 
public:
	SDK_UNDEFINED(80,14254) /* TSet<ALandscapeProxy*> */ __um(TrackedLandscapes);                                  // 0x0040   (0x0050)  
	SDK_UNDEFINED(80,14255) /* TSet<UJunoLandscapeComponent*> */ __um(TrackedLandscapeComponents);                 // 0x0090   (0x0050)  
	class UJunoLandscapeManager*                       JunoLandscapeManager;                                       // 0x00E0   (0x0008)  
	class UJunoLandscapeLayersData*                    LayersData;                                                 // 0x00E8   (0x0008)  
	unsigned char                                      UnknownData00_5[0x150];                                     // 0x00F0   (0x0150)  MISSED
	FJunoTerrainGenerationConfiguration                VisualsConfiguration;                                       // 0x0240   (0x0058)  
	FJunoTerrainGenerationConfiguration                HeightmapConfiguration;                                     // 0x0298   (0x0058)  
	FJunoTerrainGenerationConfiguration                GrassConfiguration;                                         // 0x02F0   (0x0058)  
	FJunoTerrainGenerationConfiguration                CollisionConfiguration;                                     // 0x0348   (0x0058)  
	FJunoTerrainGenerationConfiguration                WeightmapConfiguration;                                     // 0x03A0   (0x0058)  
	TArray<FName>                                      WeightmapsToGather;                                         // 0x03F8   (0x0010)  
	bool                                               bEnablePhysicsAndGrassStripping;                            // 0x0408   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0409   (0x0007)  MISSED
	SDK_UNDEFINED(16,14256) /* TArray<FString> */      __um(ExcludePhysicsAndGrassStrippingPlatforms);             // 0x0410   (0x0010)  
	bool                                               bEnablePCGCacheStripping;                                   // 0x0420   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0421   (0x0007)  MISSED
	SDK_UNDEFINED(16,14257) /* TArray<FString> */      __um(ExcludePCGCacheStrippingPlatforms);                    // 0x0428   (0x0010)  
	class UJunoLandscapeCustomMaterial*                WaterNavigationMaterial;                                    // 0x0438   (0x0008)  
	class UJunoLandscapeCustomMaterial*                WaterIdentificationMaterial;                                // 0x0440   (0x0008)  
	unsigned char                                      UnknownData03_6[0xA8];                                      // 0x0448   (0x00A8)  MISSED


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoTerrainGenerationSystem.ValidateSavedTiles
	// void ValidateSavedTiles();                                                                                            // [0x32e4b44] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoTerrainGenerationSystem.OnProxyDestroyed
	// void OnProxyDestroyed(class AActor* DestroyedActor);                                                                  // [0xbc4a404] Final|Native|Private 
	// Function /Script/JunoProceduralWorld.JunoTerrainGenerationSystem.OnCellUnload
	// void OnCellUnload(class UJunoDynamicRuntimeCell* Cell);                                                               // [0xbc4a384] Final|Native|Public  
	// Function /Script/JunoProceduralWorld.JunoTerrainGenerationSystem.OnCellLoad
	// void OnCellLoad(class UJunoDynamicRuntimeCell* Cell);                                                                 // [0x604b150] Final|Native|Public  
	// Function /Script/JunoProceduralWorld.JunoTerrainGenerationSystem.OnCellDeactivate
	// void OnCellDeactivate(class UJunoDynamicRuntimeCell* Cell);                                                           // [0x604b150] Final|Native|Public  
	// Function /Script/JunoProceduralWorld.JunoTerrainGenerationSystem.OnCellActivate
	// void OnCellActivate(class UJunoDynamicRuntimeCell* Cell);                                                             // [0xbc4a304] Final|Native|Public  
	// Function /Script/JunoProceduralWorld.JunoTerrainGenerationSystem.GetInterpolatedOceanInformation
	// TArray<FJunoTerrainOceanInformation> GetInterpolatedOceanInformation(FVector Location, bool& OutLocationIsOcean);     // [0xbc49f84] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.JunoTerrainGenerationSystem.ForceSaveForMissingLayers
	// void ForceSaveForMissingLayers();                                                                                     // [0x32e4b44] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoTerrainGenerationSystem.FixupWorldLandscapeWeightmapLayers
	// void FixupWorldLandscapeWeightmapLayers(class UObject* WorldContextObject);                                           // [0x604b150] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoTerrainGenerationSystem.FixupAllJunoLandscapeWeightmapLayers
	// void FixupAllJunoLandscapeWeightmapLayers();                                                                          // [0x32e4b44] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/JunoProceduralWorld.JunoTerrainSystemAssets
/// Size: 0x0010 (0x000030 - 0x000040)
class UJunoTerrainSystemAssets : public UPrimaryDataAsset
{ 
public:
	class UJunoLandscapeCustomMaterial*                WaterNavigationMaterial;                                    // 0x0030   (0x0008)  
	class UJunoLandscapeCustomMaterial*                WaterIdentificationMaterial;                                // 0x0038   (0x0008)  
};

/// Class /Script/JunoProceduralWorld.JunoTerrainMaterialCollector
/// Size: 0x0070 (0x000028 - 0x000098)
class UJunoTerrainMaterialCollector : public UJunoLandscapeExternalMaterialsCollector
{ 
public:
	TArray<FName>                                      Biomes;                                                     // 0x0028   (0x0010)  
	TArray<FName>                                      BorderNames;                                                // 0x0038   (0x0010)  
	SDK_UNDEFINED(80,14258) /* TMap<FName, FName> */   __um(SwappableBiomeNames);                                  // 0x0048   (0x0050)  
};

/// Struct /Script/JunoProceduralWorld.JunoTileGridPersistentData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FJunoTileGridPersistentData
{ 
	SDK_UNDEFINED(80,14259) /* TMap<FName, AJunoWorldTile*> */ __um(Tiles);                                        // 0x0000   (0x0050)  
};

/// Struct /Script/JunoProceduralWorld.JunoTileGridSaveData
/// Size: 0x00F0 (0x000000 - 0x0000F0)
struct FJunoTileGridSaveData
{ 
	FJunoTileGridPersistentData                        Data;                                                       // 0x0000   (0x0050)  
	SDK_UNDEFINED(80,14260) /* TMap<FName, FJunoReservedAreaPersistentData> */ __um(ReservedAreas);                // 0x0050   (0x0050)  
	SDK_UNDEFINED(80,14261) /* TMap<FName, FJunoPOICellDistributionPersistentData> */ __um(PerCellRarePOICounts);  // 0x00A0   (0x0050)  
};

/// Class /Script/JunoProceduralWorld.JunoTileGridPersistenceFeatureData
/// Size: 0x00F8 (0x000040 - 0x000138)
class UJunoTileGridPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0040   (0x0008)  MISSED
	FJunoTileGridSaveData                              TileSaveData;                                               // 0x0048   (0x00F0)  
};

/// Class /Script/JunoProceduralWorld.JunoTileGridPersistenceFeatureDataActor
/// Size: 0x00F8 (0x0002D0 - 0x0003C8)
class AJunoTileGridPersistenceFeatureDataActor : public AJunoPersistenceFeatureDataActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x02D0   (0x0008)  MISSED
	FJunoTileGridPersistentData                        Data;                                                       // 0x02D8   (0x0050)  
	SDK_UNDEFINED(80,14262) /* TMap<FName, FJunoReservedAreaPersistentData> */ __um(ReservedAreas);                // 0x0328   (0x0050)  
	SDK_UNDEFINED(80,14263) /* TMap<FName, FJunoPOICellDistributionPersistentData> */ __um(PerCellRarePOICounts);  // 0x0378   (0x0050)  
};

/// Class /Script/JunoProceduralWorld.JunoTileGridPersistenceFeatureModule
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UJunoTileGridPersistenceFeatureModule : public UPersistenceFrameworkModule
{ 
public:
};

/// Class /Script/JunoProceduralWorld.JunoTileGridPersistenceFeatureData_Container
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoTileGridPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer
{ 
public:
};

/// Class /Script/JunoProceduralWorld.JunoTileSubsystem
/// Size: 0x0108 (0x000030 - 0x000138)
class UJunoTileSubsystem : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0030   (0x0008)  MISSED
	class UJunoPlayspacePersistenceFeatureHelper*      TileGridPersistenceFeatureHelper;                           // 0x0038   (0x0008)  
	class UJunoWorldTileSelectionBase*                 TileSelectionInterfaceObject;                               // 0x0040   (0x0008)  
	SDK_UNDEFINED(80,14264) /* TMap<FName, AActor*> */ __um(OutOfBoundsActors);                                    // 0x0048   (0x0050)  
	unsigned char                                      UnknownData01_6[0xA0];                                      // 0x0098   (0x00A0)  MISSED


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoTileSubsystem.OnCellUnload
	// void OnCellUnload(class UJunoDynamicRuntimeCell* Cell);                                                               // [0xbc55e88] Final|Native|Public  
	// Function /Script/JunoProceduralWorld.JunoTileSubsystem.OnCellLoad
	// void OnCellLoad(class UJunoDynamicRuntimeCell* Cell);                                                                 // [0x604b150] Final|Native|Public  
	// Function /Script/JunoProceduralWorld.JunoTileSubsystem.OnCellDeactivate
	// void OnCellDeactivate(class UJunoDynamicRuntimeCell* Cell);                                                           // [0x604b150] Final|Native|Public  
	// Function /Script/JunoProceduralWorld.JunoTileSubsystem.OnCellActivate
	// void OnCellActivate(class UJunoDynamicRuntimeCell* Cell);                                                             // [0xbc55e08] Final|Native|Public  
	// Function /Script/JunoProceduralWorld.JunoTileSubsystem.HandlePossessedPawnChanged
	// void HandlePossessedPawnChanged(class APawn* OldPawn, class APawn* Pawn);                                             // [0xbc55c80] Final|Native|Private 
};

/// Class /Script/JunoProceduralWorld.JunoWaterSplineInjector
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UJunoWaterSplineInjector : public UActorComponent
{ 
public:


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoWaterSplineInjector.InjectSplineGuideIntoWaterBody
	// void InjectSplineGuideIntoWaterBody(FJunoWaterSplineInjectorParams& Params);                                          // [0xbc55d44] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoWaterSplineInjector.ForceWaterUpdate
	// void ForceWaterUpdate();                                                                                              // [0x32e4b44] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoProceduralWorld.JunoWorldLocalEnvironmentComponent
/// Size: 0x0080 (0x0000A0 - 0x000120)
class UJunoWorldLocalEnvironmentComponent : public UGameFrameworkComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00A0   (0x0008)  MISSED
	FJunoBiomeInfoQueryResult                          LocalBiome;                                                 // 0x00A8   (0x0010)  
	FJunoBiomeInfoQueryResult                          ServerBiome;                                                // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,14265) /* FMulticastInlineDelegate */ __um(OnJunoEnvironmentChanged);                         // 0x00C8   (0x0010)  
	unsigned char                                      UnknownData01_5[0x28];                                      // 0x00D8   (0x0028)  MISSED
	FGuid                                              CaveGuid;                                                   // 0x0100   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0110   (0x0010)  MISSED


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoWorldLocalEnvironmentComponent.OnRep_ServerBiome
	// void OnRep_ServerBiome();                                                                                             // [0xbc55f08] Final|Native|Private 
};

/// Class /Script/JunoProceduralWorld.JunoWorldTilePlayspaceComponent
/// Size: 0x0000 (0x0000F8 - 0x0000F8)
class UJunoWorldTilePlayspaceComponent : public UFortPlayspaceComponent
{ 
public:
};

/// Struct /Script/JunoProceduralWorld.JunoLayerSwap
/// Size: 0x0008 (0x000000 - 0x000008)
struct FJunoLayerSwap
{ 
	FName                                              SwapFrom;                                                   // 0x0000   (0x0004)  
	FName                                              SwapTo;                                                     // 0x0004   (0x0004)  
};

/// Struct /Script/JunoProceduralWorld.PCGJunoWorldTile
/// Size: 0x00F0 (0x000008 - 0x0000F8)
struct FPCGJunoWorldTile : FTableRowBase
{ 
	EJunoTileStatus                                    Status;                                                     // 0x0008   (0x0001)  
	EJunoTileGenerationType                            GenerationType;                                             // 0x0009   (0x0001)  
	bool                                               bIsDebugTile;                                               // 0x000A   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x000B   (0x0001)  MISSED
	int32_t                                            Version;                                                    // 0x000C   (0x0004)  
	FDataRegistryId                                    OriginRegistryId;                                           // 0x0010   (0x0008)  
	SDK_UNDEFINED(32,14266) /* TWeakObjectPtr<UWorld*> */ __um(Terrain);                                           // 0x0018   (0x0020)  
	SDK_UNDEFINED(32,14267) /* TWeakObjectPtr<UTexture2D*> */ __um(MiniMapTexture);                                // 0x0038   (0x0020)  
	SDK_UNDEFINED(32,14268) /* TWeakObjectPtr<UWorld*> */ __um(StaticBiomeDecorations);                            // 0x0058   (0x0020)  
	SDK_UNDEFINED(16,14269) /* TArray<TWeakObjectPtr<UWorld*>> */ __um(Overlays);                                  // 0x0078   (0x0010)  
	SDK_UNDEFINED(16,14270) /* TArray<TWeakObjectPtr<UWorld*>> */ __um(PrimaryBiomeResourceVariations);            // 0x0088   (0x0010)  
	SDK_UNDEFINED(32,14271) /* TWeakObjectPtr<UWorld*> */ __um(PrimaryBiomeResource);                              // 0x0098   (0x0020)  
	EJunoBiome                                         NWBiome;                                                    // 0x00B8   (0x0001)  
	EJunoBiome                                         NEBiome;                                                    // 0x00B9   (0x0001)  
	EJunoBiome                                         SEBiome;                                                    // 0x00BA   (0x0001)  
	EJunoBiome                                         SWBiome;                                                    // 0x00BB   (0x0001)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00BC   (0x0004)  MISSED
	TArray<FJunoLayerSwap>                             LayerSwaps;                                                 // 0x00C0   (0x0010)  
	SDK_UNDEFINED(32,14272) /* TWeakObjectPtr<UDataTable*> */ __um(POISlots);                                      // 0x00D0   (0x0020)  
	FName                                              ReservedAreaName;                                           // 0x00F0   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x00F4   (0x0004)  MISSED
};

/// Struct /Script/JunoProceduralWorld.JunoWorldTileStreamingLevelEntry
/// Size: 0x00AC (0x00000C - 0x0000B8)
struct FJunoWorldTileStreamingLevelEntry : FFastArraySerializerItem
{ 
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x000C   (0x0004)  MISSED
	FJunoWorldTileStreamingLevel                       Value;                                                      // 0x0010   (0x00A8)  
};

/// Struct /Script/JunoProceduralWorld.JunoWorldTileStreamingLevelFastArray
/// Size: 0x0018 (0x000108 - 0x000120)
struct FJunoWorldTileStreamingLevelFastArray : FFastArraySerializer
{ 
	TArray<FJunoWorldTileStreamingLevelEntry>          Entries;                                                    // 0x0108   (0x0010)  
	class AJunoWorldTile*                              WorldTile;                                                  // 0x0118   (0x0008)  
};

/// Class /Script/JunoProceduralWorld.JunoWorldTile
/// Size: 0x0280 (0x0003B0 - 0x000630)
class AJunoWorldTile : public AJunoStreamingGameplayVolume
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x03B0   (0x0008)  MISSED
	FPCGJunoWorldTile                                  TileInformation;                                            // 0x03B8   (0x00F8)  
	FJunoWorldTileStreamingLevelFastArray              InjectedLevels;                                             // 0x04B0   (0x0120)  
	TArray<class URuntimeSpatialHashExternalStreamingObject*> InjectedObjects;                                     // 0x05D0   (0x0010)  
	int32_t                                            InjectedLevelCount;                                         // 0x05E0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x05E4   (0x0004)  MISSED
	class UWorldPartition*                             InjectedObjectsWorldPartition;                              // 0x05E8   (0x0008)  
	unsigned char                                      UnknownData02_6[0x40];                                      // 0x05F0   (0x0040)  MISSED


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoWorldTile.OnUnloadBegin
	// void OnUnloadBegin(class ULevel* Level);                                                                              // [0xbc55f3c] Final|Native|Private 
	// Function /Script/JunoProceduralWorld.JunoWorldTile.IsTestLevelWorldTile
	// bool IsTestLevelWorldTile();                                                                                          // [0x2f1d290] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.JunoWorldTile.GetJunoWorldTileTransform
	// void GetJunoWorldTileTransform(class AActor* ActorInWorldTile, FTransform& Transform, EJunoGetWorldTileTransformResult& Result); // [0xbc55aa8] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoWorldTile.GetJunoWorldTileBounds
	// void GetJunoWorldTileBounds(class AActor* ActorInWorldTile, FBox& TileBounds, EJunoGetWorldTileBoundsResult& Result); // [0xbc5594c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoWorldTile.ClientOnAllLevelsLoaded
	// void ClientOnAllLevelsLoaded();                                                                                       // [0x2a27ecc] Final|Native|Private 
	// Function /Script/JunoProceduralWorld.JunoWorldTile.ArePositionsInSameWorldTile
	// bool ArePositionsInSameWorldTile(class UObject* WorldContextObject, FVector& LocationA, FVector& LocationB);          // [0xbc55708] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/JunoProceduralWorld.JunoWorldTileDebugger
/// Size: 0x0000 (0x000040 - 0x000040)
class UJunoWorldTileDebugger : public UTickableWorldSubsystem
{ 
public:
};

/// Class /Script/JunoProceduralWorld.JunoTestPOIMarker
/// Size: 0x0008 (0x000290 - 0x000298)
class AJunoTestPOIMarker : public AActor
{ 
public:
	float                                              DebugBoxSize;                                               // 0x0290   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0294   (0x0004)  MISSED
};

/// Class /Script/JunoProceduralWorld.JunoWorldTileControllerComponent
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UJunoWorldTileControllerComponent : public UFortControllerComponent
{ 
public:


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoWorldTileControllerComponent.ServerCheckWorldTileState
	// void ServerCheckWorldTileState();                                                                                     // [0x83b8590] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/JunoProceduralWorld.JunoWorldTileControllerComponent.ClientCheckWorldTileState
	// void ClientCheckWorldTileState(TArray<FJunoDebugWorldTileState> WorldTileState);                                      // [0xbc558bc] Final|Net|NetReliableNative|Event|Private|NetClient 
};

/// Class /Script/JunoProceduralWorld.JunoCaveDataCollectionBase
/// Size: 0x0000 (0x000030 - 0x000030)
class UJunoCaveDataCollectionBase : public UPrimaryDataAsset
{ 
public:
};

/// Class /Script/JunoProceduralWorld.JunoWorldTileLandscapeSpatialHash
/// Size: 0x0000 (0x0000E8 - 0x0000E8)
class UJunoWorldTileLandscapeSpatialHash : public UWorldPartitionRuntimeSpatialHash
{ 
public:
};

/// Class /Script/JunoProceduralWorld.JunoWorldTilePersistenceFeatureDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoWorldTilePersistenceFeatureDataInterface : public UInterface
{ 
public:
};

/// Class /Script/JunoProceduralWorld.JunoWorldTilePersistenceFeatureModule
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UJunoWorldTilePersistenceFeatureModule : public UPersistenceFrameworkModule
{ 
public:
};

/// Class /Script/JunoProceduralWorld.JunoWorldTileSaveData_Container
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoWorldTileSaveData_Container : public UJunoBasePFWPersistenceFeatureDataContainer
{ 
public:
};

/// Class /Script/JunoProceduralWorld.JunoWorldTileSelectionBase
/// Size: 0x0020 (0x000030 - 0x000050)
class UJunoWorldTileSelectionBase : public UPrimaryDataAsset
{ 
public:
	float                                              TileExtent;                                                 // 0x0030   (0x0004)  
	int32_t                                            WorldGridCount;                                             // 0x0034   (0x0004)  
	int64_t                                            WorldSize;                                                  // 0x0038   (0x0008)  
	bool                                               bRequiresDebugArea;                                         // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0041   (0x0003)  MISSED
	FRandomStream                                      RandomStream;                                               // 0x0044   (0x0008)  
	bool                                               bEnableBiomeSwaps;                                          // 0x004C   (0x0001)  
	bool                                               bEnableBorderPermutations;                                  // 0x004D   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x004E   (0x0002)  MISSED


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoWorldTileSelectionBase.UseReservedArea
	// bool UseReservedArea(class UObject* WorldContextObject, FName& AreaName, TMap<FName, FBox2D>& AreaTiles, TArray<FPCGJunoWorldTile>& OutNewTiles); // [0xbc5b2f0] RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/JunoProceduralWorld.JunoWorldTileSelectionBase.UpdateTile
	// bool UpdateTile(class UObject* WorldContextObject, FPCGJunoWorldTile& CurrentTile, FPCGJunoWorldTile& OutUpdatedTile); // [0xbc5b180] RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/JunoProceduralWorld.JunoWorldTileSelectionBase.Setup
	// void Setup(class UObject* WorldContextObject);                                                                        // [0x70a603c] RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/JunoProceduralWorld.JunoWorldTileSelectionBase.GetDebugLevelLocation
	// FVector GetDebugLevelLocation(class UObject* WorldContextObject);                                                     // [0xbc59400] RequiredAPI|Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Script/JunoProceduralWorld.JunoWorldTileSelectionBase.ChooseTile
	// void ChooseTile(class UObject* WorldContextObject, FVector& Position, FPCGJunoWorldTile& OutSelectedTile);            // [0xbc585bc] RequiredAPI|Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Script/JunoProceduralWorld.JunoWorldTileSelectionBase.ChooseStartTile
	// bool ChooseStartTile(class UObject* WorldContextObject, FVector& StartTileLocation);                                  // [0x91bb858] RequiredAPI|Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Script/JunoProceduralWorld.JunoWorldTileSelectionBase.ChooseOutOfBoundsTile
	// void ChooseOutOfBoundsTile(class UObject* WorldContextObject, FPCGJunoWorldTile& OutSelectedTile);                    // [0xbc584c8] RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/JunoProceduralWorld.JunoWorldTileSelectionBase.ChooseDebugTile
	// void ChooseDebugTile(class UObject* WorldContextObject, FVector& Position, FPCGJunoWorldTile& OutSelectedTile);       // [0xbc5834c] RequiredAPI|Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/JunoProceduralWorld.JunoWorldTileSelectionForced
/// Size: 0x0010 (0x000050 - 0x000060)
class UJunoWorldTileSelectionForced : public UJunoWorldTileSelectionBase
{ 
public:
	int32_t                                            RandomTileSeed;                                             // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0054   (0x0004)  MISSED
	class UDataTable*                                  WorldTilesDataTable;                                        // 0x0058   (0x0008)  
};

/// Class /Script/JunoProceduralWorld.JunoWorldTileSelectionAgatha
/// Size: 0x0038 (0x000050 - 0x000088)
class UJunoWorldTileSelectionAgatha : public UJunoWorldTileSelectionBase
{ 
public:
	class UDataTable*                                  WorldTilesDataTable;                                        // 0x0050   (0x0008)  
	TArray<EJunoBiome>                                 ScatteredLandBiomes;                                        // 0x0058   (0x0010)  
	float                                              WaterLevel;                                                 // 0x0068   (0x0004)  
	float                                              TileNoiseFrequency;                                         // 0x006C   (0x0004)  
	int32_t                                            NumberOfDarklandsIslands;                                   // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_6[0x14];                                      // 0x0074   (0x0014)  MISSED


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoWorldTileSelectionAgatha.GenerateCornersForUI
	// void GenerateCornersForUI(class UObject* WorldContextObject, TArray<EJunoBiome>& Corners);                            // [0xbc58d14] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/JunoProceduralWorld.JunoWorldTileSelectionBeryl
/// Size: 0x0110 (0x000050 - 0x000160)
class UJunoWorldTileSelectionBeryl : public UJunoWorldTileSelectionBase
{ 
public:
	FDataRegistryType                                  TileRegistryType;                                           // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0054   (0x0004)  MISSED
	TArray<EJunoBiome>                                 ScatteredLandBiomes;                                        // 0x0058   (0x0010)  
	TArray<EJunoBiome>                                 StartTileRequiredBiomes;                                    // 0x0068   (0x0010)  
	float                                              WaterLevel;                                                 // 0x0078   (0x0004)  
	float                                              TileNoiseFrequency;                                         // 0x007C   (0x0004)  
	int32_t                                            NumBigAlpineBiomes;                                         // 0x0080   (0x0004)  
	int32_t                                            BigAlpineMaxSize;                                           // 0x0084   (0x0004)  
	TArray<EJunoBiome>                                 ScatteredAlpineBiomes;                                      // 0x0088   (0x0010)  
	int32_t                                            NumSmallAlpineBiomes;                                       // 0x0098   (0x0004)  
	int32_t                                            NumberOfReservedAreas;                                      // 0x009C   (0x0004)  
	SDK_UNDEFINED(80,14273) /* TMap<FName, EJunoBiome> */ __um(AreasToUpdate);                                     // 0x00A0   (0x0050)  
	unsigned char                                      UnknownData01_6[0x70];                                      // 0x00F0   (0x0070)  MISSED
};

/// Class /Script/JunoProceduralWorld.JunoWorldTileSelectionCynthia
/// Size: 0x0110 (0x000050 - 0x000160)
class UJunoWorldTileSelectionCynthia : public UJunoWorldTileSelectionBase
{ 
public:
	FDataRegistryType                                  TileRegistryType;                                           // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0054   (0x0004)  MISSED
	TArray<EJunoBiome>                                 ScatteredLandBiomes;                                        // 0x0058   (0x0010)  
	TArray<EJunoBiome>                                 StartTileRequiredBiomes;                                    // 0x0068   (0x0010)  
	float                                              WaterLevel;                                                 // 0x0078   (0x0004)  
	float                                              TileNoiseFrequency;                                         // 0x007C   (0x0004)  
	int32_t                                            NumberOfAlpineRanges;                                       // 0x0080   (0x0004)  
	int32_t                                            AlpineRangeLength;                                          // 0x0084   (0x0004)  
	TArray<EJunoBiome>                                 ScatteredAlpineBiomes;                                      // 0x0088   (0x0010)  
	int32_t                                            NumberOfReservedAreas;                                      // 0x0098   (0x0004)  
	bool                                               bLimitReservedAreasToPerimeter;                             // 0x009C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x009D   (0x0003)  MISSED
	SDK_UNDEFINED(80,14274) /* TMap<FName, EJunoBiome> */ __um(AreasToUpdate);                                     // 0x00A0   (0x0050)  
	unsigned char                                      UnknownData02_6[0x70];                                      // 0x00F0   (0x0070)  MISSED
};

/// Class /Script/JunoProceduralWorld.JunoWorldWeatherLocationComponent
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UJunoWorldWeatherLocationComponent : public UJunoWeatherLocationComponent
{ 
public:
};

/// Struct /Script/JunoProceduralWorld.PathfinderHistory
/// Size: 0x0048 (0x000000 - 0x000048)
struct FPathfinderHistory
{ 
	FVector                                            NearestLocationToDestination;                               // 0x0000   (0x0018)  
	float                                              NearestLocationToDestinationDistance;                       // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_5[0x24];                                      // 0x001C   (0x0024)  MISSED
	int32_t                                            TotalPushSteps;                                             // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Class /Script/JunoProceduralWorld.LandmassPathfinder
/// Size: 0x0260 (0x000028 - 0x000288)
class ULandmassPathfinder : public UObject
{ 
public:
	class ALandscapeProxy*                             LandscapeProxy;                                             // 0x0028   (0x0008)  
	class ALandmassProceduralRoute*                    RouteSystem;                                                // 0x0030   (0x0008)  
	TArray<class ULandmassPathfinder*>                 BackStopPaths;                                              // 0x0038   (0x0010)  
	class ALandmassProceduralRoute*                    BlockingRoute;                                              // 0x0048   (0x0008)  
	unsigned char                                      UnknownData00_5[0x158];                                     // 0x0050   (0x0158)  MISSED
	SDK_UNDEFINED(8,14275) /* TWeakObjectPtr<UPCGSpatialData*> */ __um(PCGSampler);                                // 0x01A8   (0x0008)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x01B0   (0x0010)  MISSED
	SDK_UNDEFINED(16,14276) /* FMulticastInlineDelegate */ __um(PathfinderSpawnWarpingActorDelegate);              // 0x01C0   (0x0010)  
	FPathfinderHistory                                 PathfinderHistory;                                          // 0x01D0   (0x0048)  
	int32_t                                            MaxNodesPerCell;                                            // 0x0218   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x021C   (0x0004)  MISSED
	bool                                               bUsePCGSamplerIfAvailable;                                  // 0x0220   (0x0001)  
	bool                                               bVisualizeHeuristicSteps;                                   // 0x0221   (0x0001)  
	bool                                               bVisualizeBacktracedPathOfHeuristicSteps;                   // 0x0222   (0x0001)  
	bool                                               bVisualizeValidLocationSearching;                           // 0x0223   (0x0001)  
	unsigned char                                      UnknownData03_6[0x64];                                      // 0x0224   (0x0064)  MISSED


	/// Functions
	// Function /Script/JunoProceduralWorld.LandmassPathfinder.StartPathfinder
	// void StartPathfinder(FVector A, FVector B, bool bFindNearestValidLocationForA, bool bFindNearestValidLocationForB);   // [0xbc5ad9c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassPathfinder.SetDestinationActuallyReached
	// void SetDestinationActuallyReached(FVector Location);                                                                 // [0xbc5ac5c] Final|Native|Protected|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassPathfinder.SetDestination
	// void SetDestination(FVector Location);                                                                                // [0xbc5ab24] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassPathfinder.ProjectLocation
	// FVector ProjectLocation(FVector Location, bool& bOutIsValidLocation);                                                 // [0xbc5a868] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.LandmassPathfinder.OnStartPathfinder
	// void OnStartPathfinder(FVector A, FVector B);                                                                         // [0x211c0a0] Event|Public|HasDefaults|BlueprintEvent 
	// Function /Script/JunoProceduralWorld.LandmassPathfinder.OnInitialize
	// void OnInitialize(class ALandscapeProxy* InLandscapeProxy, class ALandmassProceduralRoute* InRoute, FLandmassPathfinderRules Rules, class ALandmassProceduralRoute* InBlockingRoute); // [0x211c0a0] Event|Public|BlueprintEvent 
	// Function /Script/JunoProceduralWorld.LandmassPathfinder.K2_StepPathfinder
	// EPushFrontierResult K2_StepPathfinder(TArray<FVector>& OutLocations, TArray<float>& OutCosts, TArray<bool>& bOutIsSnapped, TArray<EPathfinderNodeState>& OutNodeStates); // [0xbc59d28] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassPathfinder.K2_GetPriorityList
	// void K2_GetPriorityList(TArray<FVector>& Locations, TArray<float>& Costs);                                            // [0xbc59bd8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassPathfinder.IsTargetLocationValid
	// bool IsTargetLocationValid(FVector TargetLocation);                                                                   // [0xbc59a80] Native|Event|Public|HasDefaults|BlueprintEvent 
	// Function /Script/JunoProceduralWorld.LandmassPathfinder.Initialize
	// bool Initialize(class ALandscapeProxy* LandscapeProxy, class ALandmassProceduralRoute* InRoute, FLandmassPathfinderRules Rules, TArray<ULandmassPathfinder*> InBackStopPaths, class ALandmassProceduralRoute* InBlockingRoute); // [0xbc59684] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassPathfinder.GetLandscapeBox
	// FBox GetLandscapeBox();                                                                                               // [0xbc594c0] Final|Native|Protected|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.LandmassPathfinder.GetIsInitialized
	// bool GetIsInitialized();                                                                                              // [0xbc594a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.LandmassPathfinder.FindNearestValidLocation
	// bool FindNearestValidLocation(FVector InLocation, FVector& OutValidLocation, bool bShouldProject);                    // [0xbc58a00] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassPathfinder.ExecutePathfinderSync
	// void ExecutePathfinderSync(FVector A, FVector B, TArray<FVector>& Locations, TArray<float>& Costs);                   // [0xbc58738] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassPathfinder.AdditionalPushFrontierResultCondition
	// EPushFrontierResult AdditionalPushFrontierResultCondition(EPushFrontierResult ResultFromLastPush, FLandmassPathfinderRules InCurrentRules, FVector InHome, FVector InDestination, FVector InCurrentLocation, int32_t InCurrentPushSteps, float InCurrentCost, bool& bShouldUseBestNodeInsteadOfMostRecentNode); // [0xbc57c3c] Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
};

/// Struct /Script/JunoProceduralWorld.SplineCurvesInfo
/// Size: 0x0018 (0x000000 - 0x000018)
struct FSplineCurvesInfo
{ 
	SDK_UNDEFINED(16,14277) /* FString */              __um(Name);                                                 // 0x0000   (0x0010)  
	uint32_t                                           PointsNum;                                                  // 0x0010   (0x0004)  
	float                                              Length;                                                     // 0x0014   (0x0004)  
};

/// Struct /Script/JunoProceduralWorld.SplineGuide
/// Size: 0x0120 (0x000000 - 0x000120)
struct FSplineGuide
{ 
	FSplineCurves                                      SplineCurves;                                               // 0x0000   (0x0070)  
	bool                                               bIsClosedLoop;                                              // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_5[0xF];                                       // 0x0071   (0x000F)  MISSED
	FTransform                                         Transform;                                                  // 0x0080   (0x0060)  
	FSplineCurvesInfo                                  SplineCurvesInfo;                                           // 0x00E0   (0x0018)  
	bool                                               bAllowRandomYaw;                                            // 0x00F8   (0x0001)  
	bool                                               bAllowRandomScaleVariation;                                 // 0x00F9   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x00FA   (0x0006)  MISSED
	FVector2D                                          ScaleVariation;                                             // 0x0100   (0x0010)  
	class UClass*                                      GuideClass;                                                 // 0x0110   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0118   (0x0008)  MISSED
};

/// Struct /Script/JunoProceduralWorld.PathfinderGuideSet
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPathfinderGuideSet
{ 
	TArray<FSplineGuide>                               Guides;                                                     // 0x0000   (0x0010)  
};

/// Class /Script/JunoProceduralWorld.PathfinderGuideSetsDataAsset
/// Size: 0x0010 (0x000030 - 0x000040)
class UPathfinderGuideSetsDataAsset : public UDataAsset
{ 
public:
	TArray<FPathfinderGuideSet>                        GuideSets;                                                  // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/JunoProceduralWorld.PathfinderGuideSetsDataAsset.SaveCurveSetFromSplintComponents
	// void SaveCurveSetFromSplintComponents(TArray<USplineComponent*> SourceComponents, int32_t Index);                     // [0xbc5aa18] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.PathfinderGuideSetsDataAsset.LoadCurveSetAndAddSplineComponentsToActor
	// bool LoadCurveSetAndAddSplineComponentsToActor(class AActor* InActor, int32_t Index);                                 // [0xbc5a524] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.PathfinderGuideSetsDataAsset.GetRandomGuideSetFromSeed
	// FPathfinderGuideSet GetRandomGuideSetFromSeed(int32_t Seed);                                                          // [0xbc595a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.PathfinderGuideSetsDataAsset.GetRandomGuideSet
	// FPathfinderGuideSet GetRandomGuideSet();                                                                              // [0xbc59508] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoProceduralWorld.PCGJunoActorBoundsToPointSettings
/// Size: 0x0000 (0x000150 - 0x000150)
class UPCGJunoActorBoundsToPointSettings : public UPCGSettings
{ 
public:
};

/// Class /Script/JunoProceduralWorld.PCGJunoFindFoundationSettings
/// Size: 0x0008 (0x000150 - 0x000158)
class UPCGJunoFindFoundationSettings : public UPCGSettings
{ 
public:
	float                                              DistanceToSample;                                           // 0x0150   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0154   (0x0004)  MISSED
};

/// Class /Script/JunoProceduralWorld.PCGJunoMaskData
/// Size: 0x0058 (0x000038 - 0x000090)
class UPCGJunoMaskData : public UPCGData
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0038   (0x0058)  MISSED
};

/// Class /Script/JunoProceduralWorld.PCGJunoCreateMaskDataNodeSettings
/// Size: 0x0008 (0x000150 - 0x000158)
class UPCGJunoCreateMaskDataNodeSettings : public UPCGSettings
{ 
public:
	bool                                               bIs2D;                                                      // 0x0150   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0151   (0x0003)  MISSED
	int32_t                                            Resolution;                                                 // 0x0154   (0x0004)  
};

/// Class /Script/JunoProceduralWorld.PCGJunoApplyMaskNodeSettings
/// Size: 0x0008 (0x000150 - 0x000158)
class UPCGJunoApplyMaskNodeSettings : public UPCGSettings
{ 
public:
	PCGJunoApplyMaskNodeMode                           Mode;                                                       // 0x0150   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0151   (0x0007)  MISSED
};

/// Class /Script/JunoProceduralWorld.PCGJunoUnionMasksNodeSettings
/// Size: 0x0008 (0x000150 - 0x000158)
class UPCGJunoUnionMasksNodeSettings : public UPCGSettings
{ 
public:
	bool                                               bIs2D;                                                      // 0x0150   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0151   (0x0003)  MISSED
	int32_t                                            Resolution;                                                 // 0x0154   (0x0004)  
};

/// Class /Script/JunoProceduralWorld.PCGJunoProjectPositionSettings
/// Size: 0x0008 (0x000150 - 0x000158)
class UPCGJunoProjectPositionSettings : public UPCGSettings
{ 
public:
	bool                                               bProjectLandscapeMetadata;                                  // 0x0150   (0x0001)  
	bool                                               bProjectPositions;                                          // 0x0151   (0x0001)  
	bool                                               bProjectRotations;                                          // 0x0152   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x0153   (0x0005)  MISSED
};

/// Class /Script/JunoProceduralWorld.JunoProjectPositionTestShape
/// Size: 0x0000 (0x000080 - 0x000080)
class UJunoProjectPositionTestShape : public UPCGSpatialData
{ 
public:
};

/// Struct /Script/JunoProceduralWorld.JunoPCGVolumePointDataFeatures
/// Size: 0x000C (0x000000 - 0x00000C)
struct FJunoPCGVolumePointDataFeatures
{ 
	bool                                               bRotationX;                                                 // 0x0000   (0x0001)  
	bool                                               bRotationY;                                                 // 0x0001   (0x0001)  
	bool                                               bRotationZ;                                                 // 0x0002   (0x0001)  
	bool                                               bSpawnActorPathAttribute;                                   // 0x0003   (0x0001)  
	FName                                              SpawnActorPathAttributeName;                                // 0x0004   (0x0004)  
	FName                                              SpawnActorRepresentationAttributeName;                      // 0x0008   (0x0004)  
};

/// Struct /Script/JunoProceduralWorld.PCGJunoStoreDataPin
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPCGJunoStoreDataPin
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	FJunoPCGVolumePointDataFeatures                    Features;                                                   // 0x0004   (0x000C)  
};

/// Class /Script/JunoProceduralWorld.PCGJunoStoreDataSettings
/// Size: 0x0010 (0x000150 - 0x000160)
class UPCGJunoStoreDataSettings : public UPCGSettings
{ 
public:
	TArray<FPCGJunoStoreDataPin>                       ExpectedPins;                                               // 0x0150   (0x0010)  
};

/// Class /Script/JunoProceduralWorld.PCGJunoLoadDataSettings
/// Size: 0x0038 (0x000150 - 0x000188)
class UPCGJunoLoadDataSettings : public UPCGSettings
{ 
public:
	TArray<FName>                                      Pins;                                                       // 0x0150   (0x0010)  
	EJunoPCGVolumeSource                               Source;                                                     // 0x0160   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0161   (0x0007)  MISSED
	FVector                                            AdditionalExtents;                                          // 0x0168   (0x0018)  
	FName                                              tag;                                                        // 0x0180   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0184   (0x0004)  MISSED
};

/// Class /Script/JunoProceduralWorld.ProceduralRiverGenRulesAsset
/// Size: 0x0058 (0x000030 - 0x000088)
class UProceduralRiverGenRulesAsset : public UDataAsset
{ 
public:
	SDK_UNDEFINED(80,14278) /* TMap<ELandmassRiverTier, FProceduralRiverGenRules> */ __um(RuleSet);                // 0x0030   (0x0050)  
	float                                              RiverGridGridSize;                                          // 0x0080   (0x0004)  
	int32_t                                            RasterizeToRiverGridExtent;                                 // 0x0084   (0x0004)  
};

/// Class /Script/JunoProceduralWorld.JunoCaveVolume
/// Size: 0x0000 (0x000298 - 0x000298)
class AJunoCaveVolume : public ATriggerBox
{ 
public:


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoCaveVolume.RetrievePointProviders
	// void RetrievePointProviders(TArray<AJunoCaveLivingWorldStaticPointProvider*>& OutPointProviders);                     // [0xbc7d7ac] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/JunoProceduralWorld.JunoCaveVolume.OnPlayerLeavingCaveVolume
	// void OnPlayerLeavingCaveVolume(class AFortPlayerPawnAthena* PlayerPawn);                                              // [0x211c0a0] Event|Public|BlueprintEvent 
	// Function /Script/JunoProceduralWorld.JunoCaveVolume.OnPlayerEnteringCaveVolume
	// void OnPlayerEnteringCaveVolume(class AFortPlayerPawnAthena* PlayerPawn);                                             // [0x211c0a0] Event|Public|BlueprintEvent 
};

/// Class /Script/JunoProceduralWorld.JunoLevelInstance
/// Size: 0x0010 (0x0007A8 - 0x0007B8)
class AJunoLevelInstance : public ABuildingLevelInstance
{ 
public:
	SDK_UNDEFINED(16,14279) /* FMulticastInlineDelegate */ __um(OnLevelLoaded);                                    // 0x07A8   (0x0010)  


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoLevelInstance.GetActorsInLevel
	// TArray<AActor*> GetActorsInLevel();                                                                                   // [0xbc7cb6c] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/JunoProceduralWorld.JunoLivingWorldStaticPointProviderClusterEntryData
/// Size: 0x0038 (0x000000 - 0x000038)
struct FJunoLivingWorldStaticPointProviderClusterEntryData
{ 
	FVector                                            Location;                                                   // 0x0000   (0x0018)  
	FGameplayTagContainer                              Tags;                                                       // 0x0018   (0x0020)  
};

/// Struct /Script/JunoProceduralWorld.JunoLivingWorldStaticPointProviderClusterEntry
/// Size: 0x0018 (0x000000 - 0x000018)
struct FJunoLivingWorldStaticPointProviderClusterEntry
{ 
	class UClass*                                      PointProviderTemplate;                                      // 0x0000   (0x0008)  
	TArray<FJunoLivingWorldStaticPointProviderClusterEntryData> DataList;                                          // 0x0008   (0x0010)  
};

/// Struct /Script/JunoProceduralWorld.LWMClusterPointInfo
/// Size: 0x0018 (0x000000 - 0x000018)
struct FLWMClusterPointInfo
{ 
	class UJunoLivingWorldLightStaticPointProvider*    PointProvider;                                              // 0x0000   (0x0008)  
	FNavAgentSelector                                  SupportedAgents;                                            // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x000C   (0x000C)  MISSED
};

/// Class /Script/JunoProceduralWorld.JunoLivingWorldStaticPointProviderCluster
/// Size: 0x0160 (0x000290 - 0x0003F0)
class AJunoLivingWorldStaticPointProviderCluster : public AActor
{ 
public:
	TArray<FJunoLivingWorldStaticPointProviderClusterEntry> Entries;                                               // 0x0290   (0x0010)  
	TArray<FLWMClusterPointInfo>                       PointInfos;                                                 // 0x02A0   (0x0010)  
	FScalableFloat                                     PartitionnerCellSize;                                       // 0x02B0   (0x0028)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x02D8   (0x0004)  MISSED
	float                                              HysteresisSize;                                             // 0x02DC   (0x0004)  
	float                                              MaxPlayerQueryRange;                                        // 0x02E0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x10C];                                     // 0x02E4   (0x010C)  MISSED


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoLivingWorldStaticPointProviderCluster.OnCurrentPlaylistLoaded
	// void OnCurrentPlaylistLoaded(FName PlaylistName, FGameplayTagContainer& PlaylistContextTags);                         // [0xbc7d300] Final|Native|Protected|HasOutParms 
};

/// Struct /Script/JunoProceduralWorld.JunoPOIInstanceData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FJunoPOIInstanceData
{ 
	TArray<FName>                                      Tags;                                                       // 0x0000   (0x0010)  
	EJunoBiome                                         SlotBiome;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Class /Script/JunoProceduralWorld.JunoPOIGameplayVolume
/// Size: 0x0090 (0x0003B0 - 0x000440)
class AJunoPOIGameplayVolume : public AJunoStreamingGameplayVolume
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x03B0   (0x0008)  MISSED
	FJunoPOIInstanceData                               InstanceData;                                               // 0x03B8   (0x0018)  
	FGuid                                              POIGuid;                                                    // 0x03D0   (0x0010)  
	FGameplayTagContainer                              EncounterCapabilities;                                      // 0x03E0   (0x0020)  
	int32_t                                            EncounterVariantCount;                                      // 0x0400   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0404   (0x0004)  MISSED
	SDK_UNDEFINED(32,14280) /* TWeakObjectPtr<UDataTable*> */ __um(EncounterCategoryTable);                        // 0x0408   (0x0020)  
	TArray<FJunoWorldTileStreamingLevel>               LevelsToInject;                                             // 0x0428   (0x0010)  
	FName                                              RegistryItemName;                                           // 0x0438   (0x0004)  
	int32_t                                            PersistenceVersion;                                         // 0x043C   (0x0004)  
};

/// Class /Script/JunoProceduralWorld.JunoPOISlot
/// Size: 0x0048 (0x000290 - 0x0002D8)
class AJunoPOISlot : public AActor
{ 
public:
	SDK_UNDEFINED(32,14281) /* TWeakObjectPtr<UDataTable*> */ __um(PotentialPOIs);                                 // 0x0290   (0x0020)  
	EJunoPOISize                                       SlotSize;                                                   // 0x02B0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x02B1   (0x0007)  MISSED
	SDK_UNDEFINED(32,14282) /* TWeakObjectPtr<UTexture2D*> */ __um(TerrainHeightTexture);                          // 0x02B8   (0x0020)  
};

/// Class /Script/JunoProceduralWorld.JunoPOIBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoPOIBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoPOIBlueprintLibrary.SetPOISlotMetaDatas
	// void SetPOISlotMetaDatas(class AActor* POISlotActor, TArray<FJunoPOIManagerSlot>& POISlots, FJunoPOISlotMetaData& POISlotMetaData, EJunoSetSlotPOIMetaDataResult& Result); // [0xbc7de68] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoPOIBlueprintLibrary.QueryPOIState
	// void QueryPOIState(class AActor* POISlotActor, FGuid& POISlotGuid, EQueryPOIStateResult& Result, FJunoPOISlotMetaData& POISlotMetaData, FBox& WorldTileBounds); // [0xbc7d5e8] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoPOIBlueprintLibrary.QueryCavePOIState
	// void QueryCavePOIState(class AActor* CaveSlotActor, FGuid& CaveSlotGuid, FGuid& CaveShellGuid, EQueryPOIStateResult& Result, FBox& WorldTileBounds); // [0xbc7d3fc] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoPOIBlueprintLibrary.MarkPOISlotUnused
	// void MarkPOISlotUnused(class AActor* POISlotActor, FGuid& POISlotGuid, EJunoMarkSlotPOIUnusedResult& Result);         // [0xbc7d1f0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoPOIBlueprintLibrary.MarkCavePOISlotUnused
	// void MarkCavePOISlotUnused(class AActor* CaveSlotActor, FGuid& CaveSlotGuid, FGuid& CaveShellGuid, EJunoMarkSlotPOIUnusedResult& Result); // [0xbc7d080] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoPOIBlueprintLibrary.GetMatchingPOIsFromDataRegistry
	// void GetMatchingPOIsFromDataRegistry(FDataRegistryType& DataRegistry, TSet<FName>& Tags, TSet<EJunoPOISize>& Sizes, TSet<EJunoBiome>& Biomes, TArray<FPCGJunoWorldTilePOI>& Array, EJunoGetMatchingPOIsFromDataRegistryResult& Result, EJunoWorldTilePOIType Type); // [0xbc7cbf8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoPOIBlueprintLibrary.FindBestPOISlots
	// void FindBestPOISlots(TArray<FJunoPOIManagerSlot>& PotentialSlots, TArray<FJunoPOIManagerSlot>& AdditionalCompareSlots, int32_t DesiredNumber, double DesiredMinDistance, TArray<FJunoPOIManagerSlot>& Result, TArray<FJunoPOIManagerSlot>& Remainder, FBox& WorldTileBounds, EJunoBiome Biome, bool bEnforceMinDistance); // [0xbc7c610] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoPOIBlueprintLibrary.CreateRarePOIs
	// void CreateRarePOIs(class AActor* Actor, FRandomStream& RandomStream, FDataRegistryType& DataRegistry, TArray<FJunoPOIManagerSlot>& PotentialSlots, TArray<FJunoPOIManagerSlot>& UsedSlots, EGeneratePOIResult& Result); // [0xbc7c3e0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoPOIBlueprintLibrary.CreatePOI
	// void CreatePOI(class AActor* POISlotActor, FGuid& POISlotGuid, FJunoPOIData& Data, EGeneratePOIResult& Result);       // [0xbc7c230] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoPOIBlueprintLibrary.CreateCavePOI
	// void CreateCavePOI(class AActor* CaveSlotActor, FGuid& CaveSlotGuid, FGuid& CaveShellGuid, FJunoPOIData& Data, EGeneratePOIResult& Result); // [0xbc7c014] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/JunoProceduralWorld.JunoProceduralFoundation
/// Size: 0x0000 (0x001030 - 0x001030)
class AJunoProceduralFoundation : public ABuildingFoundation
{ 
public:


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoProceduralFoundation.AddAdditionalWorld
	// void AddAdditionalWorld(TWeakObjectPtr<UWorld*>& World);                                                              // [0xbc7beb8] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/JunoProceduralWorld.JunoStaticMeshPoolActor
/// Size: 0x0018 (0x000290 - 0x0002A8)
class AJunoStaticMeshPoolActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0290   (0x0018)  MISSED
};

/// Class /Script/JunoProceduralWorld.JunoWorldTileContentsPersistentData
/// Size: 0x0120 (0x0002D0 - 0x0003F0)
class AJunoWorldTileContentsPersistentData : public AJunoPersistenceFeatureDataActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x02D0   (0x0008)  MISSED
	SDK_UNDEFINED(80,14283) /* TMap<FGuid, FJunoCave> */ __um(Caves);                                              // 0x02D8   (0x0050)  
	SDK_UNDEFINED(80,14284) /* TMap<FGuid, AJunoPOIGameplayVolume*> */ __um(POIs);                                 // 0x0328   (0x0050)  
	TArray<FJunoWorldTileStreamingLevel>               InjectedLevels;                                             // 0x0378   (0x0010)  
	SDK_UNDEFINED(80,14285) /* TMap<FGuid, FJunoPOISlotMetaData> */ __um(POISlotMetaDatas);                        // 0x0388   (0x0050)  
	TArray<FJunoCaveSurfaceData>                       CaveSurfaceData;                                            // 0x03D8   (0x0010)  
	bool                                               bIsCaveSurfaceDataValid;                                    // 0x03E8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x03E9   (0x0007)  MISSED
};

/// Struct /Script/JunoProceduralWorld.CaveShellSpawnLimitData
/// Size: 0x0078 (0x000000 - 0x000078)
struct FCaveShellSpawnLimitData
{ 
	FScalableFloat                                     MaxNumberOfSpawn;                                           // 0x0000   (0x0028)  
	FScalableFloat                                     EventMemoryResetDurationsHours;                             // 0x0028   (0x0028)  
	FScalableFloat                                     MinDistanceToTeleporter;                                    // 0x0050   (0x0028)  
};

/// Class /Script/JunoProceduralWorld.JunoLivingWorldCaveSpawnLimiterComponent
/// Size: 0x0078 (0x0000A0 - 0x000118)
class UJunoLivingWorldCaveSpawnLimiterComponent : public UActorComponent
{ 
public:
	FCaveShellSpawnLimitData                           SpawnLimitData;                                             // 0x00A0   (0x0078)  
};

/// Class /Script/JunoProceduralWorld.CaveShellSpawnEntry
/// Size: 0x0038 (0x000028 - 0x000060)
class UCaveShellSpawnEntry : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0028   (0x0038)  MISSED
};

/// Class /Script/JunoProceduralWorld.JunoLivingWorldCaveSpawnManager
/// Size: 0x0050 (0x0000A0 - 0x0000F0)
class UJunoLivingWorldCaveSpawnManager : public UGameStateComponent
{ 
public:
	SDK_UNDEFINED(80,14286) /* TMap<FCaveShellID, UCaveShellSpawnEntry*> */ __um(Entries);                         // 0x00A0   (0x0050)  
};

/// Class /Script/JunoProceduralWorld.JunoLivingWorldStaticPointProviderClusterRenderComponent
/// Size: 0x0020 (0x0005C0 - 0x0005E0)
class UJunoLivingWorldStaticPointProviderClusterRenderComponent : public UDebugDrawComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x05C0   (0x0020)  MISSED
};

/// Class /Script/JunoProceduralWorld.JunoProceduralWorldSystem
/// Size: 0x0000 (0x000030 - 0x000030)
class UJunoProceduralWorldSystem : public UEngineSubsystem
{ 
public:
};

/// Class /Script/JunoProceduralWorld.LandmassCluster
/// Size: 0x0030 (0x000028 - 0x000058)
class ULandmassCluster : public UObject
{ 
public:
	bool                                               bInitialized;                                               // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x17];                                      // 0x0029   (0x0017)  MISSED
	TArray<class AActor*>                              Actors;                                                     // 0x0040   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0050   (0x0008)  MISSED


	/// Functions
	// Function /Script/JunoProceduralWorld.LandmassCluster.K2_AddConnection
	// bool K2_AddConnection(class AActor* LeafActorA, class AActor* LeafActorB);                                            // [0xbcecc48] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassCluster.InitializeDentrogram
	// void InitializeDentrogram(TArray<AActor*> InActors, TArray<FDendrogramLeafAttributes>& InAttributes);                 // [0xbceb7a8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassCluster.GetTopLevel
	// int32_t GetTopLevel();                                                                                                // [0xbcea1ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.LandmassCluster.GetLeafCount
	// int32_t GetLeafCount();                                                                                               // [0x2c3646c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.LandmassCluster.GetClustersAtLevel
	// TArray<FDendrogramClusterOutput> GetClustersAtLevel(int32_t InLevel);                                                 // [0xbce9568] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoProceduralWorld.LandmassFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class ULandmassFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/JunoProceduralWorld.LandmassFunctionLibrary.SetStaticMeshAffectDistanceField
	// void SetStaticMeshAffectDistanceField(class UStaticMeshComponent* Mesh, bool bNewValue);                              // [0xbced898] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassFunctionLibrary.SetControlPointWidth
	// void SetControlPointWidth(class ULandscapeSplineControlPoint* InControlPoint, float InWidth);                         // [0xbced66c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassFunctionLibrary.SetControlPointSideFalloff
	// void SetControlPointSideFalloff(class ULandscapeSplineControlPoint* InControlPoint, float InSideFalloff);             // [0xbced5b8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassFunctionLibrary.SetControlPointRotation
	// void SetControlPointRotation(class ULandscapeSplineControlPoint* InControlPoint, FRotator InRotation);                // [0xbced444] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassFunctionLibrary.SetControlPointLocation
	// void SetControlPointLocation(class ULandscapeSplineControlPoint* InControlPoint, FVector InLocation);                 // [0xbced2d0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassFunctionLibrary.SetControlPointLayerWidthRatio
	// void SetControlPointLayerWidthRatio(class ULandscapeSplineControlPoint* InControlPoint, float InLayerWidthRatio);     // [0xbced21c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassFunctionLibrary.ProjectLocationOnLandscape
	// FVector ProjectLocationOnLandscape(class ALandscapeProxy* LandscapeProxy, FVector Location, bool& bIsValidLocation);  // [0xbcecf48] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoProceduralWorld.LandmassFunctionLibrary.LevelInstanceSetAndUpdateWorldAsset
	// void LevelInstanceSetAndUpdateWorldAsset(class ALevelInstance* LevelInstance, TWeakObjectPtr<UWorld*>& WorldAsset);   // [0xbcece70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassFunctionLibrary.GetLandscapeHeightAtLocation
	// float GetLandscapeHeightAtLocation(class ALandscapeProxy* LandscapeProxy, FVector Location, bool& bIsValidLocation);  // [0xbce9e34] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoProceduralWorld.LandmassFunctionLibrary.GetLandscapeGradientAtLocation
	// FVector2D GetLandscapeGradientAtLocation(class ALandscapeProxy* LandscapeProxy, FVector Location);                    // [0xbce9ca8] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoProceduralWorld.LandmassFunctionLibrary.GetControlPointWidth
	// float GetControlPointWidth(class ULandscapeSplineControlPoint* InControlPoint);                                       // [0xbce9814] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoProceduralWorld.LandmassFunctionLibrary.GetControlPointSideFalloff
	// float GetControlPointSideFalloff(class ULandscapeSplineControlPoint* InControlPoint);                                 // [0xbce9798] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoProceduralWorld.LandmassFunctionLibrary.GetControlPointRotation
	// FRotator GetControlPointRotation(class ULandscapeSplineControlPoint* InControlPoint);                                 // [0xbce9710] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoProceduralWorld.LandmassFunctionLibrary.GetControlPointLocation
	// FVector GetControlPointLocation(class ULandscapeSplineControlPoint* InControlPoint);                                  // [0xbce9688] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoProceduralWorld.LandmassFunctionLibrary.GetControlPointLayerWidthRatio
	// float GetControlPointLayerWidthRatio(class ULandscapeSplineControlPoint* InControlPoint);                             // [0xbce960c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/JunoProceduralWorld.LandmassProceduralRoadGenRules
/// Size: 0x0058 (0x000030 - 0x000088)
class ULandmassProceduralRoadGenRules : public UDataAsset
{ 
public:
	SDK_UNDEFINED(80,14287) /* TMap<ELandmassRoadTier, FProceduralRoadGenRules> */ __um(RuleSet);                  // 0x0030   (0x0050)  
	float                                              RoadGridGridSize;                                           // 0x0080   (0x0004)  
	int32_t                                            RasterizeToRoadGridExtent;                                  // 0x0084   (0x0004)  
};

/// Class /Script/JunoProceduralWorld.ProceduralRouteDefinition
/// Size: 0x0008 (0x000028 - 0x000030)
class UProceduralRouteDefinition : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED


	/// Functions
	// Function /Script/JunoProceduralWorld.ProceduralRouteDefinition.FindLocationClosestToWorldLocation
	// FVector FindLocationClosestToWorldLocation(FVector& WorldLocation, float& OutDistanceSqr);                            // [0xbce7ea8] Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/JunoProceduralWorld.ProceduralRouteJunoTileInfo
/// Size: 0x000C (0x000000 - 0x00000C)
struct FProceduralRouteJunoTileInfo
{ 
	int32_t                                            TileIndex;                                                  // 0x0000   (0x0004)  
	int32_t                                            TileId;                                                     // 0x0004   (0x0004)  
	EProceduralRouteGuideSetSelectMethod               GuideSetSelectMethod;                                       // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Class /Script/JunoProceduralWorld.LandmassProceduralRoute
/// Size: 0x00C8 (0x000290 - 0x000358)
class ALandmassProceduralRoute : public AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0290   (0x0008)  MISSED
	bool                                               EditorTickIsEnabled;                                        // 0x0298   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0299   (0x0003)  MISSED
	SDK_UNDEFINED(8,14288) /* TWeakObjectPtr<UPCGSpatialData*> */ __um(PCGSampler);                                // 0x029C   (0x0008)  
	bool                                               bRunFromPCG;                                                // 0x02A4   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x02A5   (0x0003)  MISSED
	class ALandscapeProxy*                             LandscapeProxy;                                             // 0x02A8   (0x0008)  
	int32_t                                            TickFrequency;                                              // 0x02B0   (0x0004)  
	FProceduralRouteJunoTileInfo                       JunoTileInfo;                                               // 0x02B4   (0x000C)  
	class UClass*                                      Pathfinder;                                                 // 0x02C0   (0x0008)  
	TArray<class AWaterBody*>                          Lakes;                                                      // 0x02C8   (0x0010)  
	unsigned char                                      UnknownData03_5[0x10];                                      // 0x02D8   (0x0010)  MISSED
	SDK_UNDEFINED(16,14289) /* FMulticastInlineDelegate */ __um(OnGenerationFinishedMulticastDelegate);            // 0x02E8   (0x0010)  
	unsigned char                                      UnknownData04_5[0x20];                                      // 0x02F8   (0x0020)  MISSED
	TArray<class UProceduralRouteDefinition*>          PendingRoutesToAddToRouteGrid;                              // 0x0318   (0x0010)  
	unsigned char                                      UnknownData05_5[0x20];                                      // 0x0328   (0x0020)  MISSED
	class ULandmassCluster*                            LandmassCluster;                                            // 0x0348   (0x0008)  
	bool                                               bEnableDebugInfo;                                           // 0x0350   (0x0001)  
	unsigned char                                      UnknownData06_6[0x7];                                       // 0x0351   (0x0007)  MISSED


	/// Functions
	// Function /Script/JunoProceduralWorld.LandmassProceduralRoute.WakeUpDormantRoute
	// bool WakeUpDormantRoute();                                                                                            // [0xbcedabc] Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassProceduralRoute.StartRoute
	// void StartRoute();                                                                                                    // [0x3052978] Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassProceduralRoute.SetWidthForLastAddedPoint
	// void SetWidthForLastAddedPoint(float NewWidth);                                                                       // [0xbceda24] Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassProceduralRoute.SetWidthAtPointIndex
	// void SetWidthAtPointIndex(int32_t Index, float NewWidth);                                                             // [0xbced95c] Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassProceduralRoute.SetEditorTickEnabled
	// void SetEditorTickEnabled(bool bEnabled);                                                                             // [0xbced720] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassProceduralRoute.SetCurrentRouteGenerationState
	// void SetCurrentRouteGenerationState(ERouteGenerationState InState);                                                   // [0xaba1208] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassProceduralRoute.ResetAllAndInitialize
	// bool ResetAllAndInitialize(bool bResetAllLandscapeSplines);                                                           // [0xbced184] Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassProceduralRoute.RasterizeAllPendingRoutesToRouteGrid
	// void RasterizeAllPendingRoutesToRouteGrid();                                                                          // [0xbced120] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassProceduralRoute.PutIntoDormancy
	// bool PutIntoDormancy();                                                                                               // [0x99cf548] Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassProceduralRoute.OnGenerationFinished
	// void OnGenerationFinished();                                                                                          // [0xbcecf34] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassProceduralRoute.IsInsideOcean
	// bool IsInsideOcean(FVector Location);                                                                                 // [0xbcecb38] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.LandmassProceduralRoute.IsInsideLake
	// bool IsInsideLake(FVector Location, class AWaterBody* InLake, float Dilation);                                        // [0xbcec850] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.LandmassProceduralRoute.IsInsideAnyLakeAccurate
	// bool IsInsideAnyLakeAccurate(FVector Location);                                                                       // [0xbcec700] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.LandmassProceduralRoute.IsInsideAnyLake
	// bool IsInsideAnyLake(FVector Location, float Tolerance);                                                              // [0xbcec4d8] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.LandmassProceduralRoute.InitLandmassClusterLeavesOnly
	// void InitLandmassClusterLeavesOnly(TArray<FDendrogramLeafAttributes>& InLeafAttributes);                              // [0xbceb0d4] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassProceduralRoute.InitLandmassCluster
	// void InitLandmassCluster(TArray<AActor*> InActors, TArray<FDendrogramLeafAttributes>& InLeafAttributes);              // [0xbcea3a4] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassProceduralRoute.GetRouteDefinitions
	// TArray<UProceduralRouteDefinition*> GetRouteDefinitions();                                                            // [0xbcea17c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.LandmassProceduralRoute.GetLandmassCluster
	// class ULandmassCluster* GetLandmassCluster();                                                                         // [0xb837b34] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.LandmassProceduralRoute.GetCurrentRouteGenerationState
	// ERouteGenerationState GetCurrentRouteGenerationState();                                                               // [0x33e462c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.LandmassProceduralRoute.GenerateCluster
	// bool GenerateCluster();                                                                                               // [0xbce808c] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassProceduralRoute.FinishRoute
	// bool FinishRoute(int32_t& OutRouteIndex);                                                                             // [0xbce7fec] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassProceduralRoute.CustomTick
	// void CustomTick(float DeltaSeconds);                                                                                  // [0x211c0a0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/JunoProceduralWorld.LandmassProceduralRoute.ClearCreatedLandscapeSplines
	// bool ClearCreatedLandscapeSplines();                                                                                  // [0xbce7ae8] Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassProceduralRoute.BeginGeneratePCG
	// void BeginGeneratePCG(TArray<FLandmassPCGRouteInput>& Inputs);                                                        // [0xbce7a4c] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/JunoProceduralWorld.LandmassProceduralRoute.AddControlPoint
	// bool AddControlPoint(FVector WorldPosition);                                                                          // [0xbce78f4] Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassProceduralRoute.AddConnection
	// bool AddConnection(class AActor* LeafActorA, class AActor* LeafActorB);                                               // [0xbce782c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassProceduralRoute.AddAvoidancePrimitive
	// void AddAvoidancePrimitive(FRouteAvoidancePrimitive InPrimitive);                                                     // [0xbce76c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoProceduralWorld.ProceduralRiverDefinition
/// Size: 0x0018 (0x000030 - 0x000048)
class UProceduralRiverDefinition : public UProceduralRouteDefinition
{ 
public:
	class UProceduralRiverGenRulesAsset*               GenRulesAsset;                                              // 0x0030   (0x0008)  
	ELandmassRiverTier                                 RiverTier;                                                  // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	class AWaterBody*                                  WaterBody;                                                  // 0x0040   (0x0008)  


	/// Functions
	// Function /Script/JunoProceduralWorld.ProceduralRiverDefinition.GetWaterSpline
	// class UWaterSplineComponent* GetWaterSpline();                                                                        // [0xbcea364] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.ProceduralRiverDefinition.GetWaterBodyActor
	// class AWaterBody* GetWaterBodyActor();                                                                                // [0x60ac8e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/JunoProceduralWorld.ProceduralRiverAnchor
/// Size: 0x0018 (0x000000 - 0x000018)
struct FProceduralRiverAnchor
{ 
	FVector2D                                          Location2D;                                                 // 0x0000   (0x0010)  
	EProceduralRiverAnchorType                         Type;                                                       // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	int32_t                                            GroupId;                                                    // 0x0014   (0x0004)  
};

/// Class /Script/JunoProceduralWorld.ProceduralRivers
/// Size: 0x0778 (0x000358 - 0x000AD0)
class AProceduralRivers : public ALandmassProceduralRoute
{ 
public:
	class UClass*                                      WaterClass;                                                 // 0x0358   (0x0008)  
	class UProceduralRiverGenRulesAsset*               GenRulesAsset;                                              // 0x0360   (0x0008)  
	TArray<FProceduralRiverAnchor>                     AnchorsInput;                                               // 0x0368   (0x0010)  
	TArray<class UProceduralRiverDefinition*>          OutRivers;                                                  // 0x0378   (0x0010)  
	class UProceduralRiverDefinition*                  CurrentRoute;                                               // 0x0388   (0x0008)  
	bool                                               bEnableDebug;                                               // 0x0390   (0x0001)  
	unsigned char                                      UnknownData00_6[0x73F];                                     // 0x0391   (0x073F)  MISSED


	/// Functions
	// Function /Script/JunoProceduralWorld.ProceduralRivers.VisualizeAnchors
	// void VisualizeAnchors();                                                                                              // [0x32e4b44] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.ProceduralRivers.SurfaceLocationOverride
	// FVector SurfaceLocationOverride(FVector InLocation, bool& bOutIsOverriden);                                           // [0x211c0a0] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Script/JunoProceduralWorld.ProceduralRivers.StartRiverGeneration
	// void StartRiverGeneration();                                                                                          // [0xbcedaa8] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.ProceduralRivers.SetRiverTier
	// void SetRiverTier(ELandmassRiverTier InRiverTier);                                                                    // [0xbced7a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.ProceduralRivers.RebuildLastRiver
	// void RebuildLastRiver();                                                                                              // [0xbced134] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.ProceduralRivers.InitializeNeighborGrid
	// bool InitializeNeighborGrid();                                                                                        // [0xbcec490] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.ProceduralRivers.HaltRiverGeneration
	// void HaltRiverGeneration();                                                                                           // [0xbcea38c] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.ProceduralRivers.GetVelocityScalarAtDistanceAlongSpline
	// float GetVelocityScalarAtDistanceAlongSpline(class UWaterSplineComponent* WaterSplineComponent, float DistanceAlongSpline); // [0xbcea25c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoProceduralWorld.ProceduralRivers.GetRiverMergeSearchNeighborGridSize
	// float GetRiverMergeSearchNeighborGridSize();                                                                          // [0xbcea13c] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.ProceduralRivers.GetRiverDefinitions
	// TArray<UProceduralRiverDefinition*> GetRiverDefinitions();                                                            // [0xbcea0d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.ProceduralRivers.GetProceduralRiverActorTag
	// FName GetProceduralRiverActorTag();                                                                                   // [0xbce9ff4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoProceduralWorld.ProceduralRivers.GetHalfWidthAtDistanceAlongSpline
	// float GetHalfWidthAtDistanceAlongSpline(class UWaterSplineComponent* WaterSplineComponent, float DistanceAlongSpline); // [0xbce9ba0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoProceduralWorld.ProceduralRivers.GetGenerationRules
	// bool GetGenerationRules(ELandmassRiverTier InRiverTier, FProceduralRiverGenRules& OutRules);                          // [0xbce9998] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.ProceduralRivers.GetDepthAtDistanceAlongSpline
	// float GetDepthAtDistanceAlongSpline(class UWaterSplineComponent* WaterSplineComponent, float DistanceAlongSpline);    // [0xbce9890] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoProceduralWorld.ProceduralRivers.GetAvailableTargetAnchors
	// TArray<FProceduralRiverAnchor> GetAvailableTargetAnchors();                                                           // [0xbce8ee8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.ProceduralRivers.GetAvailableSourceAnchors
	// TArray<FProceduralRiverAnchor> GetAvailableSourceAnchors();                                                           // [0xbce8868] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.ProceduralRivers.GetAudioIntensityAtDistanceAlongSpline
	// float GetAudioIntensityAtDistanceAlongSpline(class UWaterSplineComponent* WaterSplineComponent, float DistanceAlongSpline); // [0xbce8760] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/JunoProceduralWorld.InterpSegment
/// Size: 0x0070 (0x000000 - 0x000070)
struct FInterpSegment
{ 
	FInterpCurveVector                                 SplineInfo;                                                 // 0x0000   (0x0018)  
	float                                              SplineLength;                                               // 0x0018   (0x0004)  
	float                                              SplineLengthBeforeThis;                                     // 0x001C   (0x0004)  
	float                                              StartFalloffFraction;                                       // 0x0020   (0x0004)  
	float                                              EndFalloffFraction;                                         // 0x0024   (0x0004)  
	float                                              StartWidth;                                                 // 0x0028   (0x0004)  
	float                                              EndWidth;                                                   // 0x002C   (0x0004)  
	float                                              StartLayerWidth;                                            // 0x0030   (0x0004)  
	float                                              EndLayerWidth;                                              // 0x0034   (0x0004)  
	float                                              FalloffStartLeftSide;                                       // 0x0038   (0x0004)  
	float                                              FalloffEndLeftSide;                                         // 0x003C   (0x0004)  
	float                                              FalloffStartRightSide;                                      // 0x0040   (0x0004)  
	float                                              FalloffEndRightSide;                                        // 0x0044   (0x0004)  
	float                                              FalloffStartLeftSideLayer;                                  // 0x0048   (0x0004)  
	float                                              FalloffEndLeftSideLayer;                                    // 0x004C   (0x0004)  
	float                                              FalloffStartRightSideLayer;                                 // 0x0050   (0x0004)  
	float                                              FalloffEndRightSideLayer;                                   // 0x0054   (0x0004)  
	float                                              StartRollDegrees;                                           // 0x0058   (0x0004)  
	float                                              EndRollDegrees;                                             // 0x005C   (0x0004)  
	float                                              StartRoll;                                                  // 0x0060   (0x0004)  
	float                                              EndRoll;                                                    // 0x0064   (0x0004)  
	float                                              StartMeshOffset;                                            // 0x0068   (0x0004)  
	float                                              EndMeshOffset;                                              // 0x006C   (0x0004)  
};

/// Class /Script/JunoProceduralWorld.ProceduralRoadDefinition
/// Size: 0x00A0 (0x000030 - 0x0000D0)
class UProceduralRoadDefinition : public UProceduralRouteDefinition
{ 
public:
	class ULandmassProceduralRoadGenRules*             GenRulesAsset;                                              // 0x0030   (0x0008)  
	ELandmassRoadTier                                  RoadTier;                                                   // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	FTransform                                         Transform;                                                  // 0x0040   (0x0060)  
	TArray<FInterpSegment>                             OutInterpSegments;                                          // 0x00A0   (0x0010)  
	float                                              Length;                                                     // 0x00B0   (0x0004)  
	float                                              LUTGridSize;                                                // 0x00B4   (0x0004)  
	TArray<int32_t>                                    LUT;                                                        // 0x00B8   (0x0010)  
	float                                              LUTResolution;                                              // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00CC   (0x0004)  MISSED
};

/// Class /Script/JunoProceduralWorld.ProceduralRoads
/// Size: 0x0348 (0x000358 - 0x0006A0)
class AProceduralRoads : public ALandmassProceduralRoute
{ 
public:
	bool                                               bDoesAffectLandscape;                                       // 0x0358   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0359   (0x0007)  MISSED
	class ULandscapeSplinesComponent*                  SplinesComponent;                                           // 0x0360   (0x0008)  
	int32_t                                            SplineLayerIndex;                                           // 0x0368   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x036C   (0x0004)  MISSED
	class ULandmassProceduralRoadGenRules*             GenRulesAsset;                                              // 0x0370   (0x0008)  
	TArray<class UProceduralRoadDefinition*>           OutRoads;                                                   // 0x0378   (0x0010)  
	class UProceduralRoadDefinition*                   CurrentRoute;                                               // 0x0388   (0x0008)  
	unsigned char                                      UnknownData02_5[0x60];                                      // 0x0390   (0x0060)  MISSED
	TArray<class ULandscapeSplineControlPoint*>        SelectedSplineControlPoints;                                // 0x03F0   (0x0010)  
	unsigned char                                      UnknownData03_5[0x278];                                     // 0x0400   (0x0278)  MISSED
	TArray<class ULandscapeSplineControlPoint*>        ControlPoints;                                              // 0x0678   (0x0010)  
	TArray<class ULandscapeSplineSegment*>             Segments;                                                   // 0x0688   (0x0010)  
	unsigned char                                      UnknownData04_6[0x8];                                       // 0x0698   (0x0008)  MISSED


	/// Functions
	// Function /Script/JunoProceduralWorld.ProceduralRoads.UpdateLandscapeSplines
	// void UpdateLandscapeSplines();                                                                                        // [0x32e4b44] Final|Native|Protected|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.ProceduralRoads.SetRoadTier
	// void SetRoadTier(ELandmassRoadTier InRoadTier);                                                                       // [0xbced81c] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.ProceduralRoads.RemoveHardTurnControlPoint
	// void RemoveHardTurnControlPoint();                                                                                    // [0xbced14c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.ProceduralRoads.K2_GetRoadGridDataAtLocation
	// TArray<FVector> K2_GetRoadGridDataAtLocation(FVector InLocation);                                                     // [0xbcecd0c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.ProceduralRoads.InitializeNeighborGrid
	// bool InitializeNeighborGrid();                                                                                        // [0xbcec4b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.ProceduralRoads.GetRoadMergeSearchNeighborGridSize
	// float GetRoadMergeSearchNeighborGridSize();                                                                           // [0xbcea15c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.ProceduralRoads.GetRoadDefinitions
	// TArray<UProceduralRoadDefinition*> GetRoadDefinitions();                                                              // [0xbcea0d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.ProceduralRoads.GetProceduralRoadLoopAnchorTag
	// FName GetProceduralRoadLoopAnchorTag(int32_t LoopIndex);                                                              // [0xbcea04c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoProceduralWorld.ProceduralRoads.GetProceduralRoadActorTag
	// FName GetProceduralRoadActorTag();                                                                                    // [0xbcea020] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoProceduralWorld.ProceduralRoads.GetGenerationRules
	// bool GetGenerationRules(ELandmassRoadTier InRoadTier, FProceduralRoadGenRules& OutRules);                             // [0xbce9aa4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.ProceduralRoads.GetAllControlPoints
	// TArray<ULandscapeSplineControlPoint*> GetAllControlPoints();                                                          // [0xbce80b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.ProceduralRoads.EvaluateRouteAtLength
	// FSegmentInterpResult EvaluateRouteAtLength(class UProceduralRoadDefinition* InRoute, float InLength, bool bTransformToWorld); // [0xbce7c94] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoProceduralWorld.ProceduralRoads.EnableOverrideGenRules
	// void EnableOverrideGenRules(FProceduralRoadGenRules InOverrideGenRules);                                              // [0xbce7b28] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.ProceduralRoads.DisableOverrideGenRules
	// void DisableOverrideGenRules();                                                                                       // [0xbce7b10] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoProceduralWorld.PCGAddLandscapeLayerWeightsSettings
/// Size: 0x0000 (0x000150 - 0x000150)
class UPCGAddLandscapeLayerWeightsSettings : public UPCGSettings
{ 
public:
};

/// Class /Script/JunoProceduralWorld.PCGJunoFractalNoise2DSettings
/// Size: 0x00B0 (0x000150 - 0x000200)
class UPCGJunoFractalNoise2DSettings : public UPCGSettings
{ 
public:
	FVector2D                                          TilingFactor;                                               // 0x0150   (0x0010)  
	float                                              Brightness;                                                 // 0x0160   (0x0004)  
	float                                              Contrast;                                                   // 0x0164   (0x0004)  
	int32_t                                            Iterations;                                                 // 0x0168   (0x0004)  
	PCGJunoFractalNoise2DMode                          Mode;                                                       // 0x016C   (0x0004)  
	FName                                              AttributeName;                                              // 0x0170   (0x0004)  
	FName                                              VoronoiIDAttributeName;                                     // 0x0174   (0x0004)  
	bool                                               bVoronoiOrientSamplesToCellEdge;                            // 0x0178   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0179   (0x0007)  MISSED
	double                                             VoronoiDistortion;                                          // 0x0180   (0x0008)  
	FVector2D                                          VoronoiDistortionTiling;                                    // 0x0188   (0x0010)  
	int32_t                                            TiledVoronoiResolution;                                     // 0x0198   (0x0004)  
	PCGJunoFractalDensityMode                          DensityMode;                                                // 0x019C   (0x0004)  
	FVector2D                                          Offset;                                                     // 0x01A0   (0x0010)  
	FVector2D                                          RandomizedOffset;                                           // 0x01B0   (0x0010)  
	float                                              EdgeBlendDistance;                                          // 0x01C0   (0x0004)  
	float                                              EdgeNoiseBrightness;                                        // 0x01C4   (0x0004)  
	float                                              EdgeNoiseContrast;                                          // 0x01C8   (0x0004)  
	float                                              EdgeBlendCurve;                                             // 0x01CC   (0x0004)  
	float                                              EdgeBlendCurveOffset;                                       // 0x01D0   (0x0004)  
	float                                              EdgeBlendNoise;                                             // 0x01D4   (0x0004)  
	bool                                               EdgeBlendFadeOut;                                           // 0x01D8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x01D9   (0x0007)  MISSED
	FVector2D                                          EdgeBlendNoiseTilingFactor;                                 // 0x01E0   (0x0010)  
	PCGJunoFractalNoise2DEdgeMode                      EdgeNoiseMode;                                              // 0x01F0   (0x0004)  
	int32_t                                            EdgeNoiseIterations;                                        // 0x01F4   (0x0004)  
	int32_t                                            EdgeBlendCellCount;                                         // 0x01F8   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x01FC   (0x0004)  MISSED
};

/// Class /Script/JunoProceduralWorld.PCGJunoPathfindSettings
/// Size: 0x0028 (0x000150 - 0x000178)
class UPCGJunoPathfindSettings : public UPCGSettings
{ 
public:
	FName                                              ProceduralRouteTag;                                         // 0x0150   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0154   (0x0004)  MISSED
	TArray<FName>                                      InputPins;                                                  // 0x0158   (0x0010)  
	TArray<FName>                                      OutputPins;                                                 // 0x0168   (0x0010)  
};

/// Class /Script/JunoProceduralWorld.PCGJunoReadProceduralSplinesSettings
/// Size: 0x0018 (0x000150 - 0x000168)
class UPCGJunoReadProceduralSplinesSettings : public UPCGSettings
{ 
public:
	FName                                              ProceduralRouteTag;                                         // 0x0150   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0154   (0x0004)  MISSED
	TArray<FName>                                      OutputPins;                                                 // 0x0158   (0x0010)  
};

/// Class /Script/JunoProceduralWorld.PCGJunoReadLandscapeSplinesSettings
/// Size: 0x0020 (0x000150 - 0x000170)
class UPCGJunoReadLandscapeSplinesSettings : public UPCGSettings
{ 
public:
	FVector                                            ExtraSearchExtents;                                         // 0x0150   (0x0018)  
	bool                                               bPerformBoundsCheck;                                        // 0x0168   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0169   (0x0007)  MISSED
};

/// Struct /Script/JunoProceduralWorld.PCGJunoSpawnLivingWorldStaticPointTag
/// Size: 0x0038 (0x000000 - 0x000038)
struct FPCGJunoSpawnLivingWorldStaticPointTag
{ 
	FGameplayTagContainer                              Tags;                                                       // 0x0000   (0x0020)  
	FName                                              AttributeName;                                              // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	double                                             MinValue;                                                   // 0x0028   (0x0008)  
	double                                             MaxValue;                                                   // 0x0030   (0x0008)  
};

/// Struct /Script/JunoProceduralWorld.PCGJunoSpawnLivingWorldStaticPointTagConditionSet
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPCGJunoSpawnLivingWorldStaticPointTagConditionSet
{ 
	bool                                               bOverridePreviousTags;                                      // 0x0000   (0x0001)  
	bool                                               bExclusiveConditionalTags;                                  // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0002   (0x0006)  MISSED
	TArray<FPCGJunoSpawnLivingWorldStaticPointTag>     ConditionalTags;                                            // 0x0008   (0x0010)  
};

/// Class /Script/JunoProceduralWorld.PCGJunoSpawnLivingWorldStaticPointSettings
/// Size: 0x0088 (0x000150 - 0x0001D8)
class UPCGJunoSpawnLivingWorldStaticPointSettings : public UPCGSettings
{ 
public:
	FGameplayTagContainer                              FiltersTags;                                                // 0x0150   (0x0020)  
	TArray<FPCGJunoSpawnLivingWorldStaticPointTag>     ConditionalTags;                                            // 0x0170   (0x0010)  
	TArray<FPCGJunoSpawnLivingWorldStaticPointTagConditionSet> ConditionalTagsSets;                                // 0x0180   (0x0010)  
	bool                                               bExclusiveConditionalTags;                                  // 0x0190   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0191   (0x0007)  MISSED
	SDK_UNDEFINED(32,14290) /* TWeakObjectPtr<UClass*> */ __um(StaticPointClass);                                  // 0x0198   (0x0020)  
	SDK_UNDEFINED(32,14291) /* TWeakObjectPtr<UClass*> */ __um(PointClusterClass);                                 // 0x01B8   (0x0020)  
};

/// Class /Script/JunoProceduralWorld.PCGResolveAudioBankSettings
/// Size: 0x0010 (0x000150 - 0x000160)
class UPCGResolveAudioBankSettings : public UPCGSettings
{ 
public:
	FName                                              AttributeNameForBiomeDataTable;                             // 0x0150   (0x0004)  
	FName                                              AttributeNameForResolvedActorPath;                          // 0x0154   (0x0004)  
	FName                                              AttributeNameForResolvedAudioBankPath;                      // 0x0158   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x015C   (0x0004)  MISSED
};

/// Struct /Script/JunoProceduralWorld.PCGJunoBiomeEntry
/// Size: 0x0028 (0x000000 - 0x000028)
struct FPCGJunoBiomeEntry
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	float                                              Density;                                                    // 0x0004   (0x0004)  
	SDK_UNDEFINED(32,14292) /* TWeakObjectPtr<UDataTable*> */ __um(BiomeElements);                                 // 0x0008   (0x0020)  
};

/// Class /Script/JunoProceduralWorld.PCGResolveBiomeSettings
/// Size: 0x0048 (0x000150 - 0x000198)
class UPCGResolveBiomeSettings : public UPCGSettings
{ 
public:
	FPCGJunoBiomeEntry                                 DefaultBiome;                                               // 0x0150   (0x0028)  
	TArray<FPCGJunoBiomeEntry>                         Biomes;                                                     // 0x0178   (0x0010)  
	FName                                              AttributeNameForResolvedBiome;                              // 0x0188   (0x0004)  
	FName                                              AttributeNameForResolvedBiomeEnum;                          // 0x018C   (0x0004)  
	FName                                              AttributeNameForResolvedBiomeDataTable;                     // 0x0190   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0194   (0x0004)  MISSED
};

/// Class /Script/JunoProceduralWorld.PCGResolveBiomeIngredientsSettings
/// Size: 0x0020 (0x000150 - 0x000170)
class UPCGResolveBiomeIngredientsSettings : public UPCGSettings
{ 
public:
	FName                                              AttributeNameForBiomeTypeFilter;                            // 0x0150   (0x0004)  
	FName                                              AttributeNameForBiomeDataTable;                             // 0x0154   (0x0004)  
	FName                                              AttributeNameForBiomeLayer;                                 // 0x0158   (0x0004)  
	FName                                              AttributeNameForResolvedActorPath;                          // 0x015C   (0x0004)  
	FName                                              AttributeNameForRepresentation;                             // 0x0160   (0x0004)  
	FName                                              AttributeNameForResolvedRowName;                            // 0x0164   (0x0004)  
	bool                                               bApplyBlendToVertical;                                      // 0x0168   (0x0001)  
	bool                                               bApplyRandomLeanAmount;                                     // 0x0169   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x016A   (0x0006)  MISSED
};

/// Class /Script/JunoProceduralWorld.PCGResolveBiomePOISettings
/// Size: 0x0018 (0x000150 - 0x000168)
class UPCGResolveBiomePOISettings : public UPCGSettings
{ 
public:
	FName                                              AttributeNameForBiomeDataTable;                             // 0x0150   (0x0004)  
	FName                                              AttributeNameForResolvedActorPath;                          // 0x0154   (0x0004)  
	FName                                              AttributeNameForResolvedPOIPath;                            // 0x0158   (0x0004)  
	FName                                              AttributeNameForBoundsMultiplier;                           // 0x015C   (0x0004)  
	FName                                              AttributeNameForRepresentation;                             // 0x0160   (0x0004)  
	FName                                              AttributeNameForResolvedRowName;                            // 0x0164   (0x0004)  
};

/// Class /Script/JunoProceduralWorld.PCGResolvePOISlotsSettings
/// Size: 0x0018 (0x000150 - 0x000168)
class UPCGResolvePOISlotsSettings : public UPCGSettings
{ 
public:
	FName                                              AttributeNameForBiomeDataTable;                             // 0x0150   (0x0004)  
	FName                                              AttributeNameForPotentialPIOsDataTable;                     // 0x0154   (0x0004)  
	FName                                              AttributeNameForResolvedActorPath;                          // 0x0158   (0x0004)  
	FName                                              AttributeNameForResolvedPOIPath;                            // 0x015C   (0x0004)  
	FName                                              AttributeNameForResolvedSlotSize;                           // 0x0160   (0x0004)  
	FName                                              AttributeNameForResolvedTerrainHeightPatch;                 // 0x0164   (0x0004)  
};

/// Class /Script/JunoProceduralWorld.PCGSetAudioBankSettings
/// Size: 0x0008 (0x000150 - 0x000158)
class UPCGSetAudioBankSettings : public UPCGSettings
{ 
public:
	FName                                              AttributeNameForResolvedAudioBankPath;                      // 0x0150   (0x0004)  
	FName                                              AttributeNameForSpawnedActorPtr;                            // 0x0154   (0x0004)  
};

/// Class /Script/JunoProceduralWorld.PCGSetFoundationLevelSettings
/// Size: 0x0008 (0x000150 - 0x000158)
class UPCGSetFoundationLevelSettings : public UPCGSettings
{ 
public:
	FName                                              AttributeNameForResolvedPOIPath;                            // 0x0150   (0x0004)  
	FName                                              AttributeNameForSpawnedActorPtr;                            // 0x0154   (0x0004)  
};

/// Class /Script/JunoProceduralWorld.PCGSetLevelInstanceLevelSettings
/// Size: 0x0008 (0x000150 - 0x000158)
class UPCGSetLevelInstanceLevelSettings : public UPCGSettings
{ 
public:
	FName                                              AttributeNameForResolvedPOIPath;                            // 0x0150   (0x0004)  
	FName                                              AttributeNameForSpawnedActorPtr;                            // 0x0154   (0x0004)  
};

/// Class /Script/JunoProceduralWorld.PCGSetPOISlotPropertiesSettings
/// Size: 0x0018 (0x000150 - 0x000168)
class UPCGSetPOISlotPropertiesSettings : public UPCGSettings
{ 
public:
	FName                                              AttributeNameForSpawnedActorPtr;                            // 0x0150   (0x0004)  
	FName                                              AttributeNameForPotentialPIOsDataTable;                     // 0x0154   (0x0004)  
	FName                                              AttributeNameForResolvedPOIPath;                            // 0x0158   (0x0004)  
	FName                                              AttributeNameForResolvedSlotSize;                           // 0x015C   (0x0004)  
	FName                                              AttributeNameForResolvedTerrainHeightPatch;                 // 0x0160   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0164   (0x0004)  MISSED
};

/// Class /Script/JunoProceduralWorld.PCGSpawnActorForPathSettings
/// Size: 0x0048 (0x000150 - 0x000198)
class UPCGSpawnActorForPathSettings : public UPCGSettings
{ 
public:
	bool                                               bUseLightWeightInstances;                                   // 0x0150   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0151   (0x0007)  MISSED
	FGameplayTagContainer                              InstanceTags;                                               // 0x0158   (0x0020)  
	TArray<FName>                                      TagsToAddOnActors;                                          // 0x0178   (0x0010)  
	bool                                               bAddSpawnedActorAttribute;                                  // 0x0188   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0189   (0x0003)  MISSED
	FName                                              AttributeNameForSpawnedActorPtr;                            // 0x018C   (0x0004)  
	FName                                              PathAttributeName;                                          // 0x0190   (0x0004)  
	FName                                              AttributeNameForRepresentation;                             // 0x0194   (0x0004)  
};

/// Class /Script/JunoProceduralWorld.PCGManageLightweightInstances
/// Size: 0x0050 (0x000088 - 0x0000D8)
class UPCGManageLightweightInstances : public UPCGManagedActors
{ 
public:
	SDK_UNDEFINED(80,14293) /* TSet<FActorInstanceHandle> */ __um(GeneratedLWIs);                                  // 0x0088   (0x0050)  
};

/// Class /Script/JunoProceduralWorld.PCGManagedActorInstances
/// Size: 0x0050 (0x000088 - 0x0000D8)
class UPCGManagedActorInstances : public UPCGManagedActors
{ 
public:
	SDK_UNDEFINED(80,14294) /* TSet<FJunoActorInstanceHandle> */ __um(GeneratedInstances);                         // 0x0088   (0x0050)  
};

/// Class /Script/JunoProceduralWorld.PCGSpawnJunoBiomeSettings
/// Size: 0x0038 (0x000150 - 0x000188)
class UPCGSpawnJunoBiomeSettings : public UPCGSettings
{ 
public:
	FPCGJunoBiomeEntry                                 DefaultBiome;                                               // 0x0150   (0x0028)  
	TArray<FPCGJunoBiomeEntry>                         Biomes;                                                     // 0x0178   (0x0010)  
};

/// Class /Script/JunoProceduralWorld.JunoTileGridPersistenceFeatureDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoTileGridPersistenceFeatureDataInterface : public UInterface
{ 
public:
};

/// Struct /Script/JunoProceduralWorld.JunoWorldTileSaveData
/// Size: 0x0068 (0x000000 - 0x000068)
struct FJunoWorldTileSaveData
{ 
	SDK_UNDEFINED(80,14295) /* TMap<FGuid, FJunoPOISlotMetaData> */ __um(POISlotMetaDatas);                        // 0x0000   (0x0050)  
	TArray<FJunoCaveSurfaceData>                       CaveSurfaceData;                                            // 0x0050   (0x0010)  
	bool                                               bIsCaveSurfaceDataValid;                                    // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0061   (0x0007)  MISSED
};

/// Class /Script/JunoProceduralWorld.JunoWorldTilePersistenceFeatureData
/// Size: 0x0118 (0x000040 - 0x000158)
class UJunoWorldTilePersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0040   (0x0010)  MISSED
	SDK_UNDEFINED(80,14296) /* TMap<FGuid, FJunoCave> */ __um(Caves);                                              // 0x0050   (0x0050)  
	SDK_UNDEFINED(80,14297) /* TMap<FGuid, AJunoPOIGameplayVolume*> */ __um(POIs);                                 // 0x00A0   (0x0050)  
	FJunoWorldTileSaveData                             SaveData;                                                   // 0x00F0   (0x0068)  
};

/// Class /Script/JunoProceduralWorld.JunoLivingWorldLightStaticPointProvider
/// Size: 0x0040 (0x000160 - 0x0001A0)
class UJunoLivingWorldLightStaticPointProvider : public UFortAthenaLivingWorldLightStaticPointProvider
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0160   (0x0008)  MISSED
	FJunoLivingWorldPointProviderEventLimiter          EventLimiter;                                               // 0x0168   (0x0020)  
	FGuid                                              SavedActorGuid;                                             // 0x0188   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0198   (0x0008)  MISSED


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoLivingWorldLightStaticPointProvider.AppendFiltersTags
	// void AppendFiltersTags(FGameplayTagContainer& Container);                                                             // [0xbd35d6c] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/JunoProceduralWorld.JunoWorldRegistryActorComponent
/// Size: 0x0048 (0x0000A0 - 0x0000E8)
class UJunoWorldRegistryActorComponent : public UGameFrameworkComponent
{ 
public:
	FGameplayTagContainer                              WorldRegistryEntryTags;                                     // 0x00A0   (0x0020)  
	EJunoWorldRegistryType                             WorldRegistryType;                                          // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00C1   (0x0007)  MISSED
	FGameplayTagContainer                              VisitedTags;                                                // 0x00C8   (0x0020)  
};

/// Class /Script/JunoProceduralWorld.JunoWorldRegistryManager
/// Size: 0x0028 (0x0000F8 - 0x000120)
class UJunoWorldRegistryManager : public UFortPlayspaceComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x00F8   (0x0028)  MISSED


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoWorldRegistryManager.GetWorldDebugInfoText
	// void GetWorldDebugInfoText(class AFortPlayerPawn* PlayerPawn, FJunoDebugWorldInfoResult& WorldDebugInfo);             // [0xbd36d50] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.JunoWorldRegistryManager.GetWorldBounds
	// FBoxSphereBounds GetWorldBounds();                                                                                    // [0xbd36d00] Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.JunoWorldRegistryManager.GetWorldAnalyticsInfo
	// void GetWorldAnalyticsInfo(class UObject* WorldContextObject, FVector& WorldLocation, FJunoWorldAnalyticsInfoResult& WorldAnalyticsInfo); // [0xbd3657c] Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.JunoWorldRegistryManager.GetTileMiniMapTexture
	// TWeakObjectPtr<UTexture2D*> GetTileMiniMapTexture(class UObject* WorldContextObject, FVector& WorldLocation);         // [0xbd36440] Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.JunoWorldRegistryManager.GetTileForLocation
	// class AJunoWorldTile* GetTileForLocation(class UObject* WorldContextObject, FVector& WorldLocation);                  // [0xbd36338] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoProceduralWorld.JunoWorldRegistryManager.GetNormalizedTileLocation
	// bool GetNormalizedTileLocation(class UObject* WorldContextObject, FVector& WorldLocation, FVector& OutResult);        // [0xbd36190] Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.JunoWorldRegistryManager.GetClosestEntryUsingTagQuery
	// FJunoWorldRegistryEntry GetClosestEntryUsingTagQuery(EJunoWorldRegistryType EntryType, FGameplayTagQuery& TagQuery, FVector& QueryLocation); // [0xbd35f5c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoProceduralWorld.JunoWorldRegistryManager.GetBiomeAtLocation
	// void GetBiomeAtLocation(FVector& Location, FJunoBiomeInfoQueryResult& OutResult);                                     // [0xbd35e28] Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/JunoProceduralWorld.JunoCaveGeneratorWorldsList
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoCaveGeneratorWorldsList
{ 
	TArray<FSoftObjectPath>                            Worlds;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/JunoProceduralWorld.JunoCaveGeneratorPCGResourceMap
/// Size: 0x0050 (0x000000 - 0x000050)
struct FJunoCaveGeneratorPCGResourceMap
{ 
	SDK_UNDEFINED(80,14298) /* TMap<FName, int32_t> */ __um(ResourceWeight);                                       // 0x0000   (0x0050)  
};

/// Struct /Script/JunoProceduralWorld.JunoCaveGeneratorResult
/// Size: 0x0050 (0x000000 - 0x000050)
struct FJunoCaveGeneratorResult
{ 
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0000   (0x0050)  MISSED
};

/// Struct /Script/JunoProceduralWorld.JunoGeneratedCaveShellData
/// Size: 0x0130 (0x000000 - 0x000130)
struct FJunoGeneratedCaveShellData
{ 
	FTransform                                         Transform;                                                  // 0x0000   (0x0060)  
	FVector                                            Extent;                                                     // 0x0060   (0x0018)  
	FVector                                            BoundsOffset;                                               // 0x0078   (0x0018)  
	FName                                              ShellID;                                                    // 0x0090   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0094   (0x0004)  MISSED
	TArray<FSoftObjectPath>                            Levels;                                                     // 0x0098   (0x0010)  
	FJunoCaveShellInstanceData                         InstanceData;                                               // 0x00A8   (0x0078)  
	int32_t                                            PersistenceVersion;                                         // 0x0120   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0124   (0x000C)  MISSED
};

/// Struct /Script/JunoProceduralWorld.JunoGenerateTileParams
/// Size: 0x0018 (0x000000 - 0x000018)
struct FJunoGenerateTileParams
{ 
	SDK_UNDEFINED(16,14299) /* FString */              __um(TilesToGenerate);                                      // 0x0000   (0x0010)  
	SDK_UNDEFINED(8,14300) /* TWeakObjectPtr<UJunoGenerateTileCommandlet*> */ __um(Commandlet);                    // 0x0010   (0x0008)  
};

/// Struct /Script/JunoProceduralWorld.InstancedActorMassSpawnData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FInstancedActorMassSpawnData
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/JunoProceduralWorld.JunoInstancedActorIterationContext
/// Size: 0x0070 (0x000000 - 0x000070)
struct FJunoInstancedActorIterationContext
{ 
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x0000   (0x0070)  MISSED
};

/// Struct /Script/JunoProceduralWorld.JunoInstancedActorSettings
/// Size: 0x0098 (0x000008 - 0x0000A0)
struct FJunoInstancedActorSettings : FTableRowBase
{ 
	bool                                               bOverride_bInstancesCastShadows : 1;                        // 0x0008:0 (0x0001)  
	bool                                               bOverride_MaxActorDistance : 1;                             // 0x0008:1 (0x0001)  
	bool                                               bOverride_bDisableAutoDistanceCulling : 1;                  // 0x0008:2 (0x0001)  
	bool                                               bOverride_MaxInstanceDistance : 1;                          // 0x0008:3 (0x0001)  
	bool                                               bOverride_MaxInstanceDistances : 1;                         // 0x0008:4 (0x0001)  
	bool                                               bOverride_LODDistanceScales : 1;                            // 0x0008:5 (0x0001)  
	bool                                               bOverride_AffectDistanceFieldLighting : 1;                  // 0x0008:6 (0x0001)  
	bool                                               bOverride_DetailedRepresentationLODDistance : 1;            // 0x0008:7 (0x0001)  
	bool                                               bOverride_ForceLowRepresentationLODDistance : 1;            // 0x0009:0 (0x0001)  
	bool                                               bOverride_WorldPositionOffsetDisableDistance : 1;           // 0x0009:1 (0x0001)  
	bool                                               bOverride_bEjectOnActorMoved : 1;                           // 0x0009:2 (0x0001)  
	bool                                               bOverride_ActorEjectionMovementThreshold : 1;               // 0x0009:3 (0x0001)  
	bool                                               bOverride_bCanBeBuiltUpon : 1;                              // 0x0009:4 (0x0001)  
	bool                                               bOverride_bCanEverAffectNavigation : 1;                     // 0x0009:5 (0x0001)  
	bool                                               bOverride_OverrideWorldPartitionGrid : 1;                   // 0x0009:6 (0x0001)  
	bool                                               bOverride_ScaleEntityCount : 1;                             // 0x0009:7 (0x0001)  
	bool                                               bOverride_ActorClass : 1;                                   // 0x000A:0 (0x0001)  
	bool                                               bOverride_bCanBeDamaged : 1;                                // 0x000A:1 (0x0001)  
	bool                                               bOverride_bIgnoreModifierVolumes : 1;                       // 0x000A:2 (0x0001)  
	bool                                               bInstancesCastShadows;                                      // 0x000B   (0x0001)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	double                                             MaxActorDistance;                                           // 0x0010   (0x0008)  
	bool                                               bDisableAutoDistanceCulling;                                // 0x0018   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0019   (0x0007)  MISSED
	double                                             MaxInstanceDistance;                                        // 0x0020   (0x0008)  
	TArray<double>                                     MaxInstanceDistances;                                       // 0x0028   (0x0010)  
	TArray<float>                                      LODDistanceScales;                                          // 0x0038   (0x0010)  
	TArray<bool>                                       AffectDistanceFieldLighting;                                // 0x0048   (0x0010)  
	double                                             DetailedRepresentationLODDistance;                          // 0x0058   (0x0008)  
	double                                             ForceLowRepresentationLODDistance;                          // 0x0060   (0x0008)  
	int32_t                                            WorldPositionOffsetDisableDistance;                         // 0x0068   (0x0004)  
	bool                                               bEjectOnActorMoved;                                         // 0x006C   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x006D   (0x0003)  MISSED
	float                                              ActorEjectionMovementThreshold;                             // 0x0070   (0x0004)  
	bool                                               bCanBeBuiltUpon;                                            // 0x0074   (0x0001)  
	bool                                               bCanEverAffectNavigation;                                   // 0x0075   (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x0076   (0x0002)  MISSED
	FName                                              OverrideWorldPartitionGrid;                                 // 0x0078   (0x0004)  
	float                                              ScaleEntityCount;                                           // 0x007C   (0x0004)  
	class UClass*                                      ActorClass;                                                 // 0x0080   (0x0008)  
	bool                                               bCanBeDamaged;                                              // 0x0088   (0x0001)  
	bool                                               bIgnoreModifierVolumes;                                     // 0x0089   (0x0001)  
	unsigned char                                      UnknownData04_5[0x6];                                       // 0x008A   (0x0006)  MISSED
	TArray<FName>                                      AppliedSettingsOverrides;                                   // 0x0090   (0x0010)  
};

/// Struct /Script/JunoProceduralWorld.JunoInstancedActorClassSettings
/// Size: 0x00B0 (0x000008 - 0x0000B8)
struct FJunoInstancedActorClassSettings : FTableRowBase
{ 
	TArray<FName>                                      BaseSettings;                                               // 0x0008   (0x0010)  
	FJunoInstancedActorSettings                        OverrideSettings;                                           // 0x0018   (0x00A0)  
};

/// Struct /Script/JunoProceduralWorld.JunoInstancedActorSoftVisualizationDesc
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoInstancedActorSoftVisualizationDesc
{ 
	TArray<FSoftISMComponentDescriptor>                ISMComponentDescriptors;                                    // 0x0000   (0x0010)  
};

/// Struct /Script/JunoProceduralWorld.JunoInstancedActorManagerSharedFragment
/// Size: 0x0017 (0x000001 - 0x000018)
struct FJunoInstancedActorManagerSharedFragment : FMassSharedFragment
{ 
	SDK_UNDEFINED(8,14301) /* TWeakObjectPtr<UJunoInstancedActorData*> */ __um(InstanceData);                      // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0008   (0x0010)  MISSED
};

/// Struct /Script/JunoProceduralWorld.JunoInstancedActorMeshSwitchFragment
/// Size: 0x0001 (0x000001 - 0x000002)
struct FJunoInstancedActorMeshSwitchFragment : FMassFragment
{ 
	FStaticMeshInstanceVisualizationDescHandle         NewStaticMeshDescHandle;                                    // 0x0000   (0x0002)  
};

/// Struct /Script/JunoProceduralWorld.JunoInstancedActorFragment
/// Size: 0x0001 (0x000001 - 0x000002)
struct FJunoInstancedActorFragment : FMassFragment
{ 
	FJunoActorInstanceIndex                            InstanceIndex;                                              // 0x0000   (0x0002)  
};

/// Struct /Script/JunoProceduralWorld.JunoLifecyclePhaseFragment
/// Size: 0x0001 (0x000001 - 0x000002)
struct FJunoLifecyclePhaseFragment : FMassFragment
{ 
	char                                               PrevPhaseIndex;                                             // 0x0000   (0x0001)  
	char                                               CurrentPhaseIndex;                                          // 0x0001   (0x0001)  
};

/// Struct /Script/JunoProceduralWorld.JunoLifecyclePhaseTimeFragment
/// Size: 0x0003 (0x000001 - 0x000004)
struct FJunoLifecyclePhaseTimeFragment : FMassFragment
{ 
	float                                              CurrentPhaseTimeElapsed;                                    // 0x0000   (0x0004)  
};

/// Struct /Script/JunoProceduralWorld.JunoLifecycleParameters
/// Size: 0x0017 (0x000001 - 0x000018)
struct FJunoLifecycleParameters : FMassSharedFragment
{ 
	TArray<FJunoLifecyclePhase>                        LifecyclePhases;                                            // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0010   (0x0001)  MISSED
	bool                                               bRepeatLifecyclePhases;                                     // 0x0011   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0012   (0x0006)  MISSED
};

/// Struct /Script/JunoProceduralWorld.JunoLifecycleVisualizationsSharedFragment
/// Size: 0x000F (0x000001 - 0x000010)
struct FJunoLifecycleVisualizationsSharedFragment : FMassSharedFragment
{ 
	TArray<char>                                       LifecyclePhaseVisualizations;                               // 0x0000   (0x0010)  
};

/// Struct /Script/JunoProceduralWorld.JunoCompressedPoint
/// Size: 0x000C (0x000000 - 0x00000C)
struct FJunoCompressedPoint
{ 
	uint16_t                                           X;                                                          // 0x0000   (0x0002)  
	uint16_t                                           Y;                                                          // 0x0002   (0x0002)  
	uint16_t                                           Z;                                                          // 0x0004   (0x0002)  
	char                                               RotationX;                                                  // 0x0006   (0x0001)  
	char                                               RotationY;                                                  // 0x0007   (0x0001)  
	char                                               RotationZ;                                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0009   (0x0001)  MISSED
	uint16_t                                           ActorSpawnInfoIndex;                                        // 0x000A   (0x0002)  
};

/// Struct /Script/JunoProceduralWorld.JunoCompressedActorSpawnInfo
/// Size: 0x0018 (0x000000 - 0x000018)
struct FJunoCompressedActorSpawnInfo
{ 
	SDK_UNDEFINED(16,14302) /* FString */              __um(ActorToSpawn);                                         // 0x0000   (0x0010)  
	EJunoRepresentation                                Representation;                                             // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/JunoProceduralWorld.JunoCompressedPointList
/// Size: 0x0080 (0x000000 - 0x000080)
struct FJunoCompressedPointList
{ 
	FVector                                            BoundsMin;                                                  // 0x0000   (0x0018)  
	FVector                                            BoundsMax;                                                  // 0x0018   (0x0018)  
	FVector3f                                          RotationMin;                                                // 0x0030   (0x000C)  
	FVector3f                                          RotationMax;                                                // 0x003C   (0x000C)  
	TArray<FJunoCompressedPoint>                       Points;                                                     // 0x0048   (0x0010)  
	uint16_t                                           HighResPosCount;                                            // 0x0058   (0x0002)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x005A   (0x0002)  MISSED
	int32_t                                            Seed;                                                       // 0x005C   (0x0004)  
	TArray<FJunoCompressedActorSpawnInfo>              ActorSpawnInfo;                                             // 0x0060   (0x0010)  
	FJunoPCGVolumePointDataFeatures                    Features;                                                   // 0x0070   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x007C   (0x0004)  MISSED
};

/// Struct /Script/JunoProceduralWorld.JunoPOIRegistryItem
/// Size: 0x01C8 (0x000000 - 0x0001C8)
struct FJunoPOIRegistryItem
{ 
	FName                                              Key;                                                        // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FPCGJunoWorldTilePOI                               Value;                                                      // 0x0008   (0x01C0)  
};

/// Struct /Script/JunoProceduralWorld.JunoRandomTableKeysIterator
/// Size: 0x0018 (0x000000 - 0x000018)
struct FJunoRandomTableKeysIterator
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/JunoProceduralWorld.JunoCreateLevelWorldPartitionGrid
/// Size: 0x0038 (0x000000 - 0x000038)
struct FJunoCreateLevelWorldPartitionGrid
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	int32_t                                            CellSize;                                                   // 0x0004   (0x0004)  
	float                                              LoadingRange;                                               // 0x0008   (0x0004)  
	bool                                               bBlockOnSlowStreaming;                                      // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	FVector2D                                          Origin;                                                     // 0x0010   (0x0010)  
	FLinearColor                                       DebugColor;                                                 // 0x0020   (0x0010)  
	int32_t                                            Priority;                                                   // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/JunoProceduralWorld.JunoCreateLevelParams
/// Size: 0x0040 (0x000000 - 0x000040)
struct FJunoCreateLevelParams
{ 
	SDK_UNDEFINED(16,14303) /* FString */              __um(LevelPackageName);                                     // 0x0000   (0x0010)  
	TArray<class AActor*>                              Actors;                                                     // 0x0010   (0x0010)  
	TArray<FJunoCreateLevelWorldPartitionGrid>         WorldPartitionGrids;                                        // 0x0020   (0x0010)  
	class UHLODLayer*                                  WorldPartitionDefaultHLODLayer;                             // 0x0030   (0x0008)  
	EWorldPartitionServerStreamingMode                 WorldPartitionServerStreamingMode;                          // 0x0038   (0x0001)  
	EWorldPartitionServerStreamingOutMode              WorldPartitionServerStreamingOutMode;                       // 0x0039   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x003A   (0x0006)  MISSED
};

/// Struct /Script/JunoProceduralWorld.JunoTerrainOceanInformation
/// Size: 0x0040 (0x000000 - 0x000040)
struct FJunoTerrainOceanInformation
{ 
	FVector                                            Direction;                                                  // 0x0000   (0x0018)  
	float                                              Distance;                                                   // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	FVector                                            Location;                                                   // 0x0020   (0x0018)  
	int32_t                                            DirectionMaskIndex;                                         // 0x0038   (0x0004)  
	EJunoBiomeHabitat                                  WaterType;                                                  // 0x003C   (0x0001)  
	bool                                               bWasNearMiss;                                               // 0x003D   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x003E   (0x0002)  MISSED
};

/// Struct /Script/JunoProceduralWorld.JunoTileGridPersistenceFeatureData_InGameClass_PersistentInfo
/// Size: 0x00F0 (0x000000 - 0x0000F0)
struct FJunoTileGridPersistenceFeatureData_InGameClass_PersistentInfo
{ 
	SDK_UNDEFINED(80,14304) /* TMap<FName, FPersistenceFrameworkLevelSaveSpawnablePtr> */ __um(Tiles);             // 0x0000   (0x0050)  
	SDK_UNDEFINED(80,14305) /* TMap<FName, FJunoReservedAreaPersistentData> */ __um(ReservedAreas);                // 0x0050   (0x0050)  
	SDK_UNDEFINED(80,14306) /* TMap<FName, FJunoPOICellDistributionPersistentData> */ __um(PerCellRarePOICounts);  // 0x00A0   (0x0050)  
};

/// Struct /Script/JunoProceduralWorld.JunoPOICellDistributionPersistentData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FJunoPOICellDistributionPersistentData
{ 
	SDK_UNDEFINED(80,14307) /* TMap<FName, int32_t> */ __um(POICount);                                             // 0x0000   (0x0050)  
};

/// Struct /Script/JunoProceduralWorld.JunoReservedAreaPersistentData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FJunoReservedAreaPersistentData
{ 
	SDK_UNDEFINED(80,14308) /* TMap<FName, FBox2D> */  __um(Tiles);                                                // 0x0000   (0x0050)  
};

/// Struct /Script/JunoProceduralWorld.JunoTileSelector
/// Size: 0x0030 (0x000008 - 0x000038)
struct FJunoTileSelector : FTableRowBase
{ 
	int64_t                                            Priority;                                                   // 0x0008   (0x0008)  
	int64_t                                            TileSize;                                                   // 0x0010   (0x0008)  
	int64_t                                            WorldSize;                                                  // 0x0018   (0x0008)  
	FIntVector                                         WorldOriginTileOffset;                                      // 0x0020   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	class UClass*                                      TileSelector;                                               // 0x0030   (0x0008)  
};

/// Struct /Script/JunoProceduralWorld.JunoWaterSplineInjectorParams
/// Size: 0x0140 (0x000000 - 0x000140)
struct FJunoWaterSplineInjectorParams
{ 
	FSplineGuide                                       SplineGuide;                                                // 0x0000   (0x0120)  
	int32_t                                            Seed;                                                       // 0x0120   (0x0004)  
	bool                                               bAllowRandomYaw;                                            // 0x0124   (0x0001)  
	bool                                               bAllowRandomScale;                                          // 0x0125   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0126   (0x0002)  MISSED
	FVector2D                                          ScaleRange;                                                 // 0x0128   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0138   (0x0008)  MISSED
};

/// Struct /Script/JunoProceduralWorld.JunoDebugWorldTileState
/// Size: 0x0020 (0x000000 - 0x000020)
struct FJunoDebugWorldTileState
{ 
	SDK_UNDEFINED(16,14309) /* FString */              __um(TileName);                                             // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,14310) /* TArray<FString> */      __um(Levels);                                               // 0x0010   (0x0010)  
};

/// Struct /Script/JunoProceduralWorld.PCGJunoWorldTilePOISlot
/// Size: 0x0040 (0x000008 - 0x000048)
struct FPCGJunoWorldTilePOISlot : FTableRowBase
{ 
	FVector                                            Position;                                                   // 0x0008   (0x0018)  
	TArray<FName>                                      Tags;                                                       // 0x0020   (0x0010)  
	EJunoPOISize                                       Size;                                                       // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	FGuid                                              POISlotGuid;                                                // 0x0034   (0x0010)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Struct /Script/JunoProceduralWorld.PCGJunoCaveDataRegistryRow
/// Size: 0x0020 (0x000008 - 0x000028)
struct FPCGJunoCaveDataRegistryRow : FTableRowBase
{ 
	SDK_UNDEFINED(32,14311) /* TWeakObjectPtr<UJunoCaveDataCollectionBase*> */ __um(CaveDataCollection);           // 0x0008   (0x0020)  
};

/// Struct /Script/JunoProceduralWorld.JunoPOISlotMetaData
/// Size: 0x0001 (0x000000 - 0x000001)
struct FJunoPOISlotMetaData
{ 
	EJunoPOISlotState                                  State;                                                      // 0x0000   (0x0001)  
};

/// Struct /Script/JunoProceduralWorld.JunoCave
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoCave
{ 
	TArray<class AJunoCaveShellGameplayVolume*>        Shells;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/JunoProceduralWorld.JunoWorldTileSaveData_Cave_PersistentInfo
/// Size: 0x0020 (0x000000 - 0x000020)
struct FJunoWorldTileSaveData_Cave_PersistentInfo
{ 
	FGuid                                              Guid;                                                       // 0x0000   (0x0010)  
	TArray<FPersistenceFrameworkLevelSaveSpawnablePtr> GameplayVolumes;                                            // 0x0010   (0x0010)  
};

/// Struct /Script/JunoProceduralWorld.JunoWorldTileSaveData_POI_PersistentInfo
/// Size: 0x0030 (0x000000 - 0x000030)
struct FJunoWorldTileSaveData_POI_PersistentInfo
{ 
	FGuid                                              Guid;                                                       // 0x0000   (0x0010)  
	FPersistenceFrameworkLevelSaveSpawnablePtr         GameplayVolume;                                             // 0x0010   (0x0020)  
};

/// Struct /Script/JunoProceduralWorld.JunoWorldTileSaveData_InGameClass_PersistentInfo
/// Size: 0x0088 (0x000000 - 0x000088)
struct FJunoWorldTileSaveData_InGameClass_PersistentInfo
{ 
	FJunoWorldTileSaveData                             SaveData;                                                   // 0x0000   (0x0068)  
	TArray<FJunoWorldTileSaveData_Cave_PersistentInfo> Caves;                                                      // 0x0068   (0x0010)  
	TArray<FJunoWorldTileSaveData_POI_PersistentInfo>  POIs;                                                       // 0x0078   (0x0010)  
};

/// Struct /Script/JunoProceduralWorld.ControlPointParameters
/// Size: 0x0060 (0x000000 - 0x000060)
struct FControlPointParameters
{ 
	float                                              Width;                                                      // 0x0000   (0x0004)  
	float                                              LayerWidthRatio;                                            // 0x0004   (0x0004)  
	float                                              SideFalloff;                                                // 0x0008   (0x0004)  
	float                                              LeftSideFalloffFactor;                                      // 0x000C   (0x0004)  
	float                                              RightSideFalloffFactor;                                     // 0x0010   (0x0004)  
	float                                              LeftSideLayerFalloffFactor;                                 // 0x0014   (0x0004)  
	float                                              RightSideLayerFalloffFactor;                                // 0x0018   (0x0004)  
	float                                              EndFalloff;                                                 // 0x001C   (0x0004)  
	float                                              SegmentMeshOffset;                                          // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	class UStaticMesh*                                 Mesh;                                                       // 0x0028   (0x0008)  
	TArray<class UMaterialInterface*>                  MaterialOverrides;                                          // 0x0030   (0x0010)  
	FVector                                            MeshScale;                                                  // 0x0040   (0x0018)  
	bool                                               bCastShadow;                                                // 0x0058   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0059   (0x0007)  MISSED
};

/// Struct /Script/JunoProceduralWorld.SegmentParameters
/// Size: 0x0030 (0x000000 - 0x000030)
struct FSegmentParameters
{ 
	FName                                              LayerName;                                                  // 0x0000   (0x0004)  
	bool                                               bRaiseTerrain;                                              // 0x0004   (0x0001)  
	bool                                               bLowerTerrain;                                              // 0x0005   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0006   (0x0002)  MISSED
	TArray<FLandscapeSplineMeshEntry>                  SplineMeshes;                                               // 0x0008   (0x0010)  
	bool                                               bCastShadow;                                                // 0x0018   (0x0001)  
	bool                                               bHiddenInGame;                                              // 0x0019   (0x0001)  
	bool                                               bPlaceSplineMeshesInStreamingLevels;                        // 0x001A   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x001B   (0x0001)  MISSED
	int32_t                                            RandomSeed;                                                 // 0x001C   (0x0004)  
	float                                              LDMaxDrawDistance;                                          // 0x0020   (0x0004)  
	int32_t                                            TranslucencySortPriority;                                   // 0x0024   (0x0004)  
	char                                               bRenderCustomDepth;                                         // 0x0028   (0x0001)  
	ERendererStencilMask                               CustomDepthStencilWriteMask;                                // 0x0029   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x002A   (0x0002)  MISSED
	int32_t                                            CustomDepthStencilValue;                                    // 0x002C   (0x0004)  
};

/// Struct /Script/JunoProceduralWorld.PCGJunoBiomeElementRow
/// Size: 0x0058 (0x000008 - 0x000060)
struct FPCGJunoBiomeElementRow : FTableRowBase
{ 
	float                                              Weight;                                                     // 0x0008   (0x0004)  
	FName                                              Type;                                                       // 0x000C   (0x0004)  
	TArray<float>                                      LayerWeights;                                               // 0x0010   (0x0010)  
	FVector                                            PositionOffset;                                             // 0x0020   (0x0018)  
	FVector2D                                          ScaleMinMax;                                                // 0x0038   (0x0010)  
	float                                              BlendToVertical;                                            // 0x0048   (0x0004)  
	float                                              RandomLeanAmount;                                           // 0x004C   (0x0004)  
	EJunoRepresentation                                Representation;                                             // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0051   (0x0007)  MISSED
	class UClass*                                      Actor;                                                      // 0x0058   (0x0008)  
};

/// Struct /Script/JunoProceduralWorld.PCGJunoPOIElementRow
/// Size: 0x0038 (0x000008 - 0x000040)
struct FPCGJunoPOIElementRow : FTableRowBase
{ 
	float                                              Weight;                                                     // 0x0008   (0x0004)  
	float                                              BoundsMultiplier;                                           // 0x000C   (0x0004)  
	class UClass*                                      POIActor;                                                   // 0x0010   (0x0008)  
	class UClass*                                      BuildingFoundation;                                         // 0x0018   (0x0008)  
	SDK_UNDEFINED(32,14312) /* TWeakObjectPtr<UWorld*> */ __um(Level);                                             // 0x0020   (0x0020)  
};

/// Struct /Script/JunoProceduralWorld.PCGJunoPOISlotElementRow
/// Size: 0x0050 (0x000008 - 0x000058)
struct FPCGJunoPOISlotElementRow : FTableRowBase
{ 
	float                                              Weight;                                                     // 0x0008   (0x0004)  
	EJunoPOISize                                       Size;                                                       // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	class UClass*                                      POISlotActor;                                               // 0x0010   (0x0008)  
	SDK_UNDEFINED(32,14313) /* TWeakObjectPtr<UDataTable*> */ __um(PotentialPOIs);                                 // 0x0018   (0x0020)  
	SDK_UNDEFINED(32,14314) /* TWeakObjectPtr<UTexture2D*> */ __um(TerrainHeightPatch);                            // 0x0038   (0x0020)  
};

/// Struct /Script/JunoProceduralWorld.PCGJunoAudioElementRow
/// Size: 0x0030 (0x000008 - 0x000038)
struct FPCGJunoAudioElementRow : FTableRowBase
{ 
	float                                              Weight;                                                     // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	class UClass*                                      AudioActorToSpawn;                                          // 0x0010   (0x0008)  
	SDK_UNDEFINED(32,14315) /* TWeakObjectPtr<UAmbientAudioDataAsset*> */ __um(Level);                             // 0x0018   (0x0020)  
};

/// Struct /Script/JunoProceduralWorld.PCGJunoCullDistanceGameplayTagRow
/// Size: 0x0010 (0x000008 - 0x000018)
struct FPCGJunoCullDistanceGameplayTagRow : FTableRowBase
{ 
	FGameplayTag                                       CullDistanceTag;                                            // 0x0008   (0x0004)  
	int32_t                                            EndCullDistance;                                            // 0x000C   (0x0004)  
	float                                              LODInstanceScale;                                           // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/JunoProceduralWorld.ProceduralRiverAnchorConnectionRules
/// Size: 0x0368 (0x000000 - 0x000368)
struct FProceduralRiverAnchorConnectionRules
{ 
	float                                              MaxConnectionSlope;                                         // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FRuntimeFloatCurve                                 CarveDownNearSourceAnchor;                                  // 0x0008   (0x0088)  
	FRuntimeFloatCurve                                 CarveDownNearTargetAnchor;                                  // 0x0090   (0x0088)  
	FRuntimeFloatCurve                                 WidthMultNearSourceAnchor;                                  // 0x0118   (0x0088)  
	FRuntimeFloatCurve                                 WidthMultNearTargetAnchor;                                  // 0x01A0   (0x0088)  
	FRuntimeFloatCurve                                 VelocityMultNearSourceAnchor;                               // 0x0228   (0x0088)  
	FRuntimeFloatCurve                                 VelocityMultNearTargetAnchor;                               // 0x02B0   (0x0088)  
	FVector2D                                          CoastlineAnchorZRange;                                      // 0x0338   (0x0010)  
	float                                              CoastlineProbeAboveZeroPercent;                             // 0x0348   (0x0004)  
	float                                              CoastlineProbeBelowZeroPercent;                             // 0x034C   (0x0004)  
	FVector2D                                          DeepSeaAnchorZRange;                                        // 0x0350   (0x0010)  
	float                                              DeepSeaAnchorMinDistanceToCoastline;                        // 0x0360   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0364   (0x0004)  MISSED
};

/// Struct /Script/JunoProceduralWorld.ProceduralRiverShapeRules
/// Size: 0x0220 (0x000000 - 0x000220)
struct FProceduralRiverShapeRules
{ 
	FRuntimeFloatCurve                                 DepthCurve;                                                 // 0x0000   (0x0088)  
	FRuntimeFloatCurve                                 WidthCurve;                                                 // 0x0088   (0x0088)  
	FRuntimeFloatCurve                                 VelocityCurve;                                              // 0x0110   (0x0088)  
	FRuntimeFloatCurve                                 VelocityBySlope;                                            // 0x0198   (0x0088)  
};

/// Struct /Script/JunoProceduralWorld.RouteClassAvoidance
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRouteClassAvoidance
{ 
	class UClass*                                      RouteClassesToAvoid;                                        // 0x0000   (0x0008)  
	float                                              Distance;                                                   // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/JunoProceduralWorld.LandmassPathfinderRules
/// Size: 0x00A8 (0x000000 - 0x0000A8)
struct FLandmassPathfinderRules
{ 
	EVerticalDirection                                 VerticalDirection;                                          // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              MaxSlopeWhileGoingAgainstLegalVerticalDirection;            // 0x0004   (0x0004)  
	bool                                               bFavorGoingDown;                                            // 0x0008   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              FavorGoingDownWeight;                                       // 0x000C   (0x0004)  
	bool                                               bUseGravitationalPotentialEnergy;                           // 0x0010   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              StartingGravitationalPotentialEnergy;                       // 0x0014   (0x0004)  
	float                                              MaxSlope;                                                   // 0x0018   (0x0004)  
	float                                              VerticalCostMultiplier;                                     // 0x001C   (0x0004)  
	float                                              SideRollCostMultiplier;                                     // 0x0020   (0x0004)  
	float                                              SearchRadius;                                               // 0x0024   (0x0004)  
	FVector2D                                          SearchConeInDegrees;                                        // 0x0028   (0x0010)  
	float                                              BackStop;                                                   // 0x0038   (0x0004)  
	int32_t                                            SearchPointsNum;                                            // 0x003C   (0x0004)  
	float                                              DestinationRadius;                                          // 0x0040   (0x0004)  
	float                                              MinimalViableDistance;                                      // 0x0044   (0x0004)  
	float                                              SnapDistance;                                               // 0x0048   (0x0004)  
	float                                              MaxCost;                                                    // 0x004C   (0x0004)  
	int32_t                                            MaxSteps;                                                   // 0x0050   (0x0004)  
	float                                              TooCloseDistanceRatio;                                      // 0x0054   (0x0004)  
	float                                              HeuristicToDestinationWeight;                               // 0x0058   (0x0004)  
	float                                              MaxBoostDistance;                                           // 0x005C   (0x0004)  
	float                                              BoostIntensity;                                             // 0x0060   (0x0004)  
	float                                              SnappedSpeedMultiplier;                                     // 0x0064   (0x0004)  
	TArray<FRouteClassAvoidance>                       RouteClassesAvoidances;                                     // 0x0068   (0x0010)  
	float                                              WarpFixedCost;                                              // 0x0078   (0x0004)  
	float                                              WarpAngleConstraint;                                        // 0x007C   (0x0004)  
	float                                              MaxWarpingDistance;                                         // 0x0080   (0x0004)  
	float                                              MaxWarpingZDelta;                                           // 0x0084   (0x0004)  
	float                                              MinPercentageOfLandOnEachSide;                              // 0x0088   (0x0004)  
	float                                              WarpZoneApproximatedGreaterHalfWidth;                       // 0x008C   (0x0004)  
	float                                              WarpZoneApproximatedLesserHalfWidth;                        // 0x0090   (0x0004)  
	bool                                               bUseWarpZoneDifficultTerrain;                               // 0x0094   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0095   (0x0003)  MISSED
	float                                              WarpZoneDifficultTerrainWidth;                              // 0x0098   (0x0004)  
	float                                              WarpZoneDifficultTerrainCostMult;                           // 0x009C   (0x0004)  
	float                                              TileDimension;                                              // 0x00A0   (0x0004)  
	float                                              TileEdgeAvoidanceDistance;                                  // 0x00A4   (0x0004)  
};

/// Struct /Script/JunoProceduralWorld.ProceduralRiverGenRules
/// Size: 0x0630 (0x000000 - 0x000630)
struct FProceduralRiverGenRules
{ 
	FProceduralRiverAnchorConnectionRules              AnchorConnectionRules;                                      // 0x0000   (0x0368)  
	FProceduralRiverShapeRules                         ProceduralRiverShapeRules;                                  // 0x0368   (0x0220)  
	FLandmassPathfinderRules                           PathfinderRules;                                            // 0x0588   (0x00A8)  
};

/// Struct /Script/JunoProceduralWorld.JunoPOIData
/// Size: 0x0120 (0x000000 - 0x000120)
struct FJunoPOIData
{ 
	FTransform                                         Transform;                                                  // 0x0000   (0x0060)  
	FVector                                            Extent;                                                     // 0x0060   (0x0018)  
	FVector                                            BoundsOffset;                                               // 0x0078   (0x0018)  
	TArray<FSoftObjectPath>                            Levels;                                                     // 0x0090   (0x0010)  
	TArray<FSoftObjectPath>                            HLODLevels;                                                 // 0x00A0   (0x0010)  
	FJunoPOIInstanceData                               InstanceData;                                               // 0x00B0   (0x0018)  
	FGameplayTagContainer                              EncounterCapabilities;                                      // 0x00C8   (0x0020)  
	int32_t                                            EncounterVariantCount;                                      // 0x00E8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00EC   (0x0004)  MISSED
	SDK_UNDEFINED(32,14316) /* TWeakObjectPtr<UDataTable*> */ __um(EncounterCategoryTable);                        // 0x00F0   (0x0020)  
	FName                                              RegistryItemName;                                           // 0x0110   (0x0004)  
	int32_t                                            PersistenceVersion;                                         // 0x0114   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0118   (0x0008)  MISSED
};

/// Struct /Script/JunoProceduralWorld.CaveSpawnEvent
/// Size: 0x001C (0x000000 - 0x00001C)
struct FCaveSpawnEvent
{ 
	unsigned char                                      UnknownData00_1[0x1C];                                      // 0x0000   (0x001C)  MISSED
};

/// Struct /Script/JunoProceduralWorld.CaveSpawnPointProviderMemory
/// Size: 0x0028 (0x000000 - 0x000028)
struct FCaveSpawnPointProviderMemory
{ 
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/JunoProceduralWorld.CaveShellID
/// Size: 0x0014 (0x000000 - 0x000014)
struct FCaveShellID
{ 
	unsigned char                                      UnknownData00_1[0x14];                                      // 0x0000   (0x0014)  MISSED
};

/// Struct /Script/JunoProceduralWorld.DendrogramLeafAttributes
/// Size: 0x0020 (0x000000 - 0x000020)
struct FDendrogramLeafAttributes
{ 
	FVector                                            Location;                                                   // 0x0000   (0x0018)  
	float                                              DistanceScale;                                              // 0x0018   (0x0004)  
	FName                                              LeafTypeName;                                               // 0x001C   (0x0004)  
};

/// Struct /Script/JunoProceduralWorld.DendrogramClusterOutput
/// Size: 0x0068 (0x000000 - 0x000068)
struct FDendrogramClusterOutput
{ 
	int32_t                                            NodeLevel;                                                  // 0x0000   (0x0004)  
	bool                                               bIsLeaf;                                                    // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	TArray<class AActor*>                              Actors;                                                     // 0x0008   (0x0010)  
	class AActor*                                      ConnectedActorA;                                            // 0x0018   (0x0008)  
	class AActor*                                      ConnectedActorB;                                            // 0x0020   (0x0008)  
	FDendrogramLeafAttributes                          LeafAAttributes;                                            // 0x0028   (0x0020)  
	FDendrogramLeafAttributes                          LeafBAttributes;                                            // 0x0048   (0x0020)  
};

/// Struct /Script/JunoProceduralWorld.ProceduralRoadGenRules
/// Size: 0x0138 (0x000000 - 0x000138)
struct FProceduralRoadGenRules
{ 
	FLandmassPathfinderRules                           PathfinderRules;                                            // 0x0000   (0x00A8)  
	FControlPointParameters                            ControlPointParams;                                         // 0x00A8   (0x0060)  
	FSegmentParameters                                 SegmentParams;                                              // 0x0108   (0x0030)  
};

/// Struct /Script/JunoProceduralWorld.LandmassPCGRouteInput
/// Size: 0x0018 (0x000000 - 0x000018)
struct FLandmassPCGRouteInput
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<class UPCGSpatialData*>                     Data;                                                       // 0x0008   (0x0010)  
};

/// Struct /Script/JunoProceduralWorld.RouteAvoidancePrimitive
/// Size: 0x0030 (0x000000 - 0x000030)
struct FRouteAvoidancePrimitive
{ 
	ERouteAvoidancePrimitiveType                       Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FVector2D                                          DiscLocation;                                               // 0x0008   (0x0010)  
	class USplineComponent*                            SplineComponent;                                            // 0x0018   (0x0008)  
	class ALandmassProceduralRoute*                    ProceduralRoutes;                                           // 0x0020   (0x0008)  
	float                                              Distance;                                                   // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/JunoProceduralWorld.SegmentInterpResult
/// Size: 0x0138 (0x000000 - 0x000138)
struct FSegmentInterpResult
{ 
	float                                              Time;                                                       // 0x0000   (0x0004)  
	float                                              CosInterp;                                                  // 0x0004   (0x0004)  
	float                                              Width;                                                      // 0x0008   (0x0004)  
	float                                              LayerWidth;                                                 // 0x000C   (0x0004)  
	float                                              LeftFalloff;                                                // 0x0010   (0x0004)  
	float                                              RightFalloff;                                               // 0x0014   (0x0004)  
	float                                              LeftLayerFalloff;                                           // 0x0018   (0x0004)  
	float                                              RightLayerFalloff;                                          // 0x001C   (0x0004)  
	float                                              Roll;                                                       // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	FVector                                            Pos;                                                        // 0x0028   (0x0018)  
	FVector                                            Tangent;                                                    // 0x0040   (0x0018)  
	FVector                                            Binormal;                                                   // 0x0058   (0x0018)  
	FVector                                            LeftPos;                                                    // 0x0070   (0x0018)  
	FVector                                            RightPos;                                                   // 0x0088   (0x0018)  
	FVector                                            FalloffLeftPos;                                             // 0x00A0   (0x0018)  
	FVector                                            FalloffRightPos;                                            // 0x00B8   (0x0018)  
	FVector                                            LayerLeftPos;                                               // 0x00D0   (0x0018)  
	FVector                                            LayerRightPos;                                              // 0x00E8   (0x0018)  
	FVector                                            LayerFalloffLeftPos;                                        // 0x0100   (0x0018)  
	FVector                                            LayerFalloffRightPos;                                       // 0x0118   (0x0018)  
	float                                              StartEndFalloff;                                            // 0x0130   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0134   (0x0004)  MISSED
};

/// Struct /Script/JunoProceduralWorld.BridgeSpawnInfo
/// Size: 0x0030 (0x000000 - 0x000030)
struct FBridgeSpawnInfo
{ 
	FVector                                            Start;                                                      // 0x0000   (0x0018)  
	FVector                                            End;                                                        // 0x0018   (0x0018)  
};

/// Struct /Script/JunoProceduralWorld.PCGJunoPathfindContext
/// Size: 0x0010 (0x0000B0 - 0x0000C0)
struct FPCGJunoPathfindContext : FPCGContext
{ 
	SDK_UNDEFINED(8,14317) /* TWeakObjectPtr<ALandmassProceduralRoute*> */ __um(LandmassProceduralRoute);          // 0x00B0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00B8   (0x0008)  MISSED
};

/// Struct /Script/JunoProceduralWorld.PCGJunoSpawnLivingWorldStaticPointContext
/// Size: 0x0028 (0x0000B0 - 0x0000D8)
struct FPCGJunoSpawnLivingWorldStaticPointContext : FPCGContext
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x00B0   (0x0010)  MISSED
	class UClass*                                      StaticPointClass;                                           // 0x00C0   (0x0008)  
	class UClass*                                      PointClusterClass;                                          // 0x00C8   (0x0008)  
	class UPCGManagedActors*                           ManagedActors;                                              // 0x00D0   (0x0008)  
};

/// Struct /Script/JunoProceduralWorld.JunoWorldConditionBiome
/// Size: 0x0038 (0x000010 - 0x000048)
struct FJunoWorldConditionBiome : FWorldConditionCommonActorBase
{ 
	FWorldConditionContextDataRef                      ActorRef;                                                   // 0x0010   (0x0008)  
	TArray<EJunoBiome>                                 AllowedBiomes;                                              // 0x0018   (0x0010)  
	bool                                               bCanBeSecondaryBiome;                                       // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	TArray<EJunoBiomeHabitat>                          AllowedHabitats;                                            // 0x0030   (0x0010)  
	bool                                               bCanBeSecondaryHabitat;                                     // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0041   (0x0007)  MISSED
};

/// Struct /Script/JunoProceduralWorld.JunoWorldRegistryEntry
/// Size: 0x0040 (0x000000 - 0x000040)
struct FJunoWorldRegistryEntry
{ 
	FVector                                            Location;                                                   // 0x0000   (0x0018)  
	FGameplayTagContainer                              GameplayTags;                                               // 0x0018   (0x0020)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0038   (0x0008)  MISSED
};

