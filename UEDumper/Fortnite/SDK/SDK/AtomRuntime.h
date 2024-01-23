
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: StructUtils

/// Enum /Script/AtomRuntime.EAtomModelMergedMeshSelection
/// Size: 0x04
enum class EAtomModelMergedMeshSelection : uint8_t
{
	EAtomModelMergedMeshSelection__AllMeshes                                         = 0,
	EAtomModelMergedMeshSelection__OnlyOpaqueMeshes                                  = 1,
	EAtomModelMergedMeshSelection__OnlyTransparentMeshes                             = 2,
	EAtomModelMergedMeshSelection__EAtomModelMergedMeshSelection_MAX                 = 3
};

/// Enum /Script/AtomRuntime.EAtomMaterialType
/// Size: 0x06
enum class EAtomMaterialType : uint8_t
{
	EAtomMaterialType__Standard                                                      = 0,
	EAtomMaterialType__Transparent                                                   = 1,
	EAtomMaterialType__Glitter                                                       = 2,
	EAtomMaterialType__Opalescent                                                    = 3,
	EAtomMaterialType__Metallic                                                      = 4,
	EAtomMaterialType__EAtomMaterialType_MAX                                         = 5
};

/// Enum /Script/AtomRuntime.EAtomPrimitiveCollisionVolumeType
/// Size: 0x07
enum class EAtomPrimitiveCollisionVolumeType : uint8_t
{
	EAtomPrimitiveCollisionVolumeType__Box                                           = 0,
	EAtomPrimitiveCollisionVolumeType__Sphere                                        = 1,
	EAtomPrimitiveCollisionVolumeType__Capsule                                       = 2,
	EAtomPrimitiveCollisionVolumeType__Cylinder                                      = 3,
	EAtomPrimitiveCollisionVolumeType__Tube                                          = 4,
	EAtomPrimitiveCollisionVolumeType__Crate                                         = 5,
	EAtomPrimitiveCollisionVolumeType__EAtomPrimitiveCollisionVolumeType_MAX         = 6
};

/// Enum /Script/AtomRuntime.EPrimitiveAutoCollisionType
/// Size: 0x08
enum class EPrimitiveAutoCollisionType : uint8_t
{
	EPrimitiveAutoCollisionType__Box                                                 = 0,
	EPrimitiveAutoCollisionType__Sphere                                              = 1,
	EPrimitiveAutoCollisionType__NDOP10_X                                            = 2,
	EPrimitiveAutoCollisionType__NDOP10_Y                                            = 3,
	EPrimitiveAutoCollisionType__NDOP10_Z                                            = 4,
	EPrimitiveAutoCollisionType__NDOP18                                              = 5,
	EPrimitiveAutoCollisionType__NDOP26                                              = 6,
	EPrimitiveAutoCollisionType__EPrimitiveAutoCollisionType_MAX                     = 7
};

/// Enum /Script/AtomRuntime.EPrimitiveGeometryComplexity
/// Size: 0x07
enum class EPrimitiveGeometryComplexity : uint8_t
{
	EPrimitiveGeometryComplexity__JustShell                                          = 0,
	EPrimitiveGeometryComplexity__ShellAndUncommonParts                              = 1,
	EPrimitiveGeometryComplexity__ShellWithInsideDetailsAndUncommonParts             = 2,
	EPrimitiveGeometryComplexity__ShellWithInsideDetails                             = 3,
	EPrimitiveGeometryComplexity__ShellWithFlatCapAndUncommonParts                   = 4,
	EPrimitiveGeometryComplexity__ShellWithFlatCap                                   = 5,
	EPrimitiveGeometryComplexity__EPrimitiveGeometryComplexity_MAX                   = 6
};

/// Enum /Script/AtomRuntime.EGetCommonPartDescriptionResult
/// Size: 0x03
enum class EGetCommonPartDescriptionResult : uint8_t
{
	EGetCommonPartDescriptionResult__Valid                                           = 0,
	EGetCommonPartDescriptionResult__Invalid                                         = 1,
	EGetCommonPartDescriptionResult__EGetCommonPartDescriptionResult_MAX             = 2
};

/// Enum /Script/AtomRuntime.EAtomShaderType
/// Size: 0x11
enum class EAtomShaderType : uint32_t
{
	EAtomShaderType__Unknown                                                         = 0,
	EAtomShaderType__ShinyPlastic                                                    = 1,
	EAtomShaderType__MattePlastic                                                    = 2,
	EAtomShaderType__Rubber                                                          = 3,
	EAtomShaderType__ShinySteel                                                      = 4,
	EAtomShaderType__BrushedSteel                                                    = 5,
	EAtomShaderType__MatteSteel                                                      = 6,
	EAtomShaderType__Glitter                                                         = 7,
	EAtomShaderType__Metallic                                                        = 8,
	EAtomShaderType__Opalescence                                                     = 9,
	EAtomShaderType__EAtomShaderType_MAX                                             = 10
};

/// Enum /Script/AtomRuntime.EColorEffects
/// Size: 0x05
enum class EColorEffects : uint8_t
{
	EColorEffects__None                                                              = 0,
	EColorEffects__Metallic                                                          = 1,
	EColorEffects__Glitter                                                           = 2,
	EColorEffects__Opalescent                                                        = 3,
	EColorEffects__EColorEffects_MAX                                                 = 4
};

/// Enum /Script/AtomRuntime.EAtomModelCommonPartOptimizationFlag
/// Size: 0x07
enum class EAtomModelCommonPartOptimizationFlag : uint8_t
{
	EAtomModelCommonPartOptimizationFlag__None                                       = 0,
	EAtomModelCommonPartOptimizationFlag__RemoveConnected                            = 1,
	EAtomModelCommonPartOptimizationFlag__RemoveKnobs                                = 2,
	EAtomModelCommonPartOptimizationFlag__RemoveTubes                                = 4,
	EAtomModelCommonPartOptimizationFlag__RemovePins                                 = 8,
	EAtomModelCommonPartOptimizationFlag__All                                        = 15,
	EAtomModelCommonPartOptimizationFlag__EAtomModelCommonPartOptimizationFlag_MAX   = 16
};

/// Enum /Script/AtomRuntime.EAtomModelPivotAnchor
/// Size: 0x05
enum class EAtomModelPivotAnchor : uint32_t
{
	EAtomModelPivotAnchor__Original                                                  = 0,
	EAtomModelPivotAnchor__TopCenter                                                 = 1,
	EAtomModelPivotAnchor__Center                                                    = 2,
	EAtomModelPivotAnchor__BottomCenter                                              = 3,
	EAtomModelPivotAnchor__EAtomModelPivotAnchor_MAX                                 = 4
};

/// Enum /Script/AtomRuntime.EAtomIssue
/// Size: 0x17
enum class EAtomIssue : uint32_t
{
	EAtomIssue__None                                                                 = 0,
	EAtomIssue__FailedToLoadModelFile                                                = 1,
	EAtomIssue__UnsupportedLxFMLVersion                                              = 2,
	EAtomIssue__UnsupportedLxFMLSticker                                              = 3,
	EAtomIssue__MissingPrimitive                                                     = 4,
	EAtomIssue__MismatchedPrimitive                                                  = 5,
	EAtomIssue__UnsupportedPrimitive                                                 = 6,
	EAtomIssue__UnplacedPrimitive                                                    = 7,
	EAtomIssue__MissingPrimitiveSourceGeometry                                       = 8,
	EAtomIssue__ExcludedByFilter                                                     = 9,
	EAtomIssue__UnsupportedCommonPart                                                = 10,
	EAtomIssue__OldVersionPrimitive                                                  = 11,
	EAtomIssue__UnknownDecorationTexture                                             = 12,
	EAtomIssue__UnknownDecorationSurface                                             = 13,
	EAtomIssue__DuplicatedSelectionSet                                               = 14,
	EAtomIssue__EmptySelectionSet                                                    = 15,
	EAtomIssue__EAtomIssue_MAX                                                       = 16
};

/// Enum /Script/AtomRuntime.EAtomModelInstanceType
/// Size: 0x06
enum class EAtomModelInstanceType : uint8_t
{
	EAtomModelInstanceType__Components                                               = 0,
	EAtomModelInstanceType__Actors                                                   = 1,
	EAtomModelInstanceType__HISM                                                     = 2,
	EAtomModelInstanceType__ComponentsWithVertexColor                                = 3,
	EAtomModelInstanceType__RenderStylesComponents                                   = 4,
	EAtomModelInstanceType__EAtomModelInstanceType_MAX                               = 5
};

/// Enum /Script/AtomRuntime.EAtomPlatform
/// Size: 0x22
enum class EAtomPlatform : uint8_t
{
	EAtomPlatform__NA                                                                = 0,
	EAtomPlatform__Duplo                                                             = 1,
	EAtomPlatform__Atom                                                              = 2,
	EAtomPlatform__Technic                                                           = 3,
	EAtomPlatform__Clickits                                                          = 4,
	EAtomPlatform__ActionFigures                                                     = 5,
	EAtomPlatform__Outdoor                                                           = 6,
	EAtomPlatform__SoftPrimitives                                                    = 7,
	EAtomPlatform__ExtendedLine                                                      = 8,
	EAtomPlatform__Scala                                                             = 9,
	EAtomPlatform__Znap                                                              = 10,
	EAtomPlatform__Toolo                                                             = 11,
	EAtomPlatform__Storage                                                           = 12,
	EAtomPlatform__MusicBuilder                                                      = 13,
	EAtomPlatform__StoryBuilder                                                      = 14,
	EAtomPlatform__Quatro                                                            = 15,
	EAtomPlatform__Ccbs                                                              = 16,
	EAtomPlatform__Primo1                                                            = 17,
	EAtomPlatform__AtomFoundation                                                    = 18,
	EAtomPlatform__DieCutToStickers                                                  = 98,
	EAtomPlatform__GeneralPlatform                                                   = 99,
	EAtomPlatform__EAtomPlatform_MAX                                                 = 100
};

/// Enum /Script/AtomRuntime.EAtomCommonPartType
/// Size: 0x26
enum class EAtomCommonPartType : uint8_t
{
	EAtomCommonPartType__None                                                        = 0,
	EAtomCommonPartType__Dknob_01_C                                                  = 1,
	EAtomCommonPartType__Dknob_01_D                                                  = 2,
	EAtomCommonPartType__Dpin_01_C                                                   = 3,
	EAtomCommonPartType__Dtube_01_C                                                  = 4,
	EAtomCommonPartType__Dtube_02_C                                                  = 5,
	EAtomCommonPartType__Dtube_03_C                                                  = 6,
	EAtomCommonPartType__Dtube_04_C                                                  = 7,
	EAtomCommonPartType__knob_01_C                                                   = 8,
	EAtomCommonPartType__knob_01_D                                                   = 9,
	EAtomCommonPartType__knob_01_P                                                   = 10,
	EAtomCommonPartType__knob_01_PC                                                  = 11,
	EAtomCommonPartType__knob_02_P                                                   = 12,
	EAtomCommonPartType__knob_02_PC                                                  = 13,
	EAtomCommonPartType__knob_03_P                                                   = 14,
	EAtomCommonPartType__knob_03_PC                                                  = 15,
	EAtomCommonPartType__knob_04_P                                                   = 16,
	EAtomCommonPartType__knob_04_PC                                                  = 17,
	EAtomCommonPartType__pin_01_C                                                    = 18,
	EAtomCommonPartType__pin_01_D                                                    = 19,
	EAtomCommonPartType__pin_02_C                                                    = 20,
	EAtomCommonPartType__pin_02_D                                                    = 21,
	EAtomCommonPartType__tube_01_D                                                   = 22,
	EAtomCommonPartType__tube_02_D                                                   = 23,
	EAtomCommonPartType__tube_03_D                                                   = 24,
	EAtomCommonPartType__EAtomCommonPartType_MAX                                     = 25
};

/// Enum /Script/AtomRuntime.EAtomCommonPartCategory
/// Size: 0x05
enum class EAtomCommonPartCategory : uint8_t
{
	EAtomCommonPartCategory__None                                                    = 0,
	EAtomCommonPartCategory__Knob                                                    = 1,
	EAtomCommonPartCategory__Pin                                                     = 2,
	EAtomCommonPartCategory__Tube                                                    = 3,
	EAtomCommonPartCategory__EAtomCommonPartCategory_MAX                             = 4
};

/// Enum /Script/AtomRuntime.EAtomPrimitiveImportWarningFlags
/// Size: 0x09
enum class EAtomPrimitiveImportWarningFlags : uint8_t
{
	EAtomPrimitiveImportWarningFlags__None                                           = 0,
	EAtomPrimitiveImportWarningFlags__UnableToFindUnwrappedMeshUVSet                 = 1,
	EAtomPrimitiveImportWarningFlags__BrokenPrincipalUVSet                           = 2,
	EAtomPrimitiveImportWarningFlags__InvalidFBXFile                                 = 4,
	EAtomPrimitiveImportWarningFlags__InvalidMeshInFBXScene                          = 8,
	EAtomPrimitiveImportWarningFlags__CommonPartMeshNotFound                         = 16,
	EAtomPrimitiveImportWarningFlags__FullyTriangulated                              = 32,
	EAtomPrimitiveImportWarningFlags__TransformedMeshes                              = 64,
	EAtomPrimitiveImportWarningFlags__EAtomPrimitiveImportWarningFlags_MAX           = 65
};

/// Enum /Script/AtomRuntime.EAtomPrimitiveGeoOptimization
/// Size: 0x04
enum class EAtomPrimitiveGeoOptimization : uint8_t
{
	EAtomPrimitiveGeoOptimization__Default                                           = 0,
	EAtomPrimitiveGeoOptimization__UseForDetailOnly                                  = 1,
	EAtomPrimitiveGeoOptimization__UseApproximationForLODs                           = 2,
	EAtomPrimitiveGeoOptimization__EAtomPrimitiveGeoOptimization_MAX                 = 3
};

/// Enum /Script/AtomRuntime.EAtomPrimitiveGeoOptimization_Old
/// Size: 0x04
enum class EAtomPrimitiveGeoOptimization_Old : uint32_t
{
	EAtomPrimitiveGeoOptimization_Old__Default                                       = 0,
	EAtomPrimitiveGeoOptimization_Old__UseForDetailOnly                              = 1,
	EAtomPrimitiveGeoOptimization_Old__UseApproximationForLODs                       = 2,
	EAtomPrimitiveGeoOptimization_Old__EAtomPrimitiveGeoOptimization_MAX             = 3
};

/// Enum /Script/AtomRuntime.EAtomPrimitiveApproximationShapeType
/// Size: 0x06
enum class EAtomPrimitiveApproximationShapeType : uint8_t
{
	EAtomPrimitiveApproximationShapeType__Auto                                       = 0,
	EAtomPrimitiveApproximationShapeType__OrientedBox                                = 1,
	EAtomPrimitiveApproximationShapeType__ExtrudedConvexHull2D                       = 2,
	EAtomPrimitiveApproximationShapeType__ConvexHull3D                               = 3,
	EAtomPrimitiveApproximationShapeType__Extrusion                                  = 4,
	EAtomPrimitiveApproximationShapeType__EAtomPrimitiveApproximationShapeType_MAX   = 5
};

/// Enum /Script/AtomRuntime.EAtomPrimitiveApproximationShapeType_Old
/// Size: 0x06
enum class EAtomPrimitiveApproximationShapeType_Old : uint32_t
{
	EAtomPrimitiveApproximationShapeType_Old__Auto                                   = 0,
	EAtomPrimitiveApproximationShapeType_Old__OrientedBox                            = 1,
	EAtomPrimitiveApproximationShapeType_Old__ExtrudedConvexHull2D                   = 2,
	EAtomPrimitiveApproximationShapeType_Old__ConvexHull3D                           = 3,
	EAtomPrimitiveApproximationShapeType_Old__Extrusion                              = 4,
	EAtomPrimitiveApproximationShapeType_Old__EAtomPrimitiveApproximationShapeType_MAX = 5
};

/// Enum /Script/AtomRuntime.EConnectionFieldType
/// Size: 0x11
enum class EConnectionFieldType : uint8_t
{
	EConnectionFieldType__Planar                                                     = 0,
	EConnectionFieldType__Hinge                                                      = 1,
	EConnectionFieldType__Axle                                                       = 2,
	EConnectionFieldType__Ball                                                       = 3,
	EConnectionFieldType__Cardan                                                     = 4,
	EConnectionFieldType__Fixed                                                      = 5,
	EConnectionFieldType__Rail                                                       = 6,
	EConnectionFieldType__Slider                                                     = 7,
	EConnectionFieldType__Gear                                                       = 8,
	EConnectionFieldType__User                                                       = 9,
	EConnectionFieldType__EConnectionFieldType_MAX                                   = 10
};

/// Enum /Script/AtomRuntime.EConnectionFieldSuperType
/// Size: 0x04
enum class EConnectionFieldSuperType : uint8_t
{
	EConnectionFieldSuperType__Planar                                                = 0,
	EConnectionFieldSuperType__Line                                                  = 1,
	EConnectionFieldSuperType__Point                                                 = 2,
	EConnectionFieldSuperType__EConnectionFieldSuperType_MAX                         = 3
};

/// Enum /Script/AtomRuntime.EConnectionFieldGender
/// Size: 0x04
enum class EConnectionFieldGender : uint8_t
{
	EConnectionFieldGender__Receptor                                                 = 0,
	EConnectionFieldGender__Connector                                                = 1,
	EConnectionFieldGender__Any                                                      = 2,
	EConnectionFieldGender__EConnectionFieldGender_MAX                               = 3
};

/// Enum /Script/AtomRuntime.EFieldConnectResult
/// Size: 0x15
enum class EFieldConnectResult : uint8_t
{
	EFieldConnectResult__NoConnection                                                = 0,
	EFieldConnectResult__Rejection                                                   = 1,
	EFieldConnectResult__FixedConnection                                             = 2,
	EFieldConnectResult__FreeConnection                                              = 3,
	EFieldConnectResult__HingeConnection                                             = 4,
	EFieldConnectResult__CardanConnection                                            = 5,
	EFieldConnectResult__BallConnection                                              = 6,
	EFieldConnectResult__PrismaticConnection                                         = 7,
	EFieldConnectResult__CylindricalConnection                                       = 8,
	EFieldConnectResult__PrismaticAPerpendicularHingeConnection                      = 9,
	EFieldConnectResult__PrismaticBPerpendicularHingeConnection                      = 10,
	EFieldConnectResult__ConnectResultMax                                            = 11,
	EFieldConnectResult__FirstConnection                                             = 2,
	EFieldConnectResult__LastConnection                                              = 10,
	EFieldConnectResult__EFieldConnectResult_MAX                                     = 12
};

/// Enum /Script/AtomRuntime.EAxleDiameter
/// Size: 0x04
enum class EAxleDiameter : uint8_t
{
	EAxleDiameter__Tiny                                                              = 0,
	EAxleDiameter__Medium                                                            = 1,
	EAxleDiameter__Large                                                             = 2,
	EAxleDiameter__EAxleDiameter_MAX                                                 = 3
};

/// Enum /Script/AtomRuntime.EConnectionAxleType
/// Size: 0x24
enum class EConnectionAxleType : uint8_t
{
	EConnectionAxleType__UnusedReceptor                                              = 0,
	EConnectionAxleType__UnusedConnector                                             = 1,
	EConnectionAxleType__RoundAxleReceptor                                           = 2,
	EConnectionAxleType__RoundAxleConnector                                          = 3,
	EConnectionAxleType__CrossAxleReceptor                                           = 4,
	EConnectionAxleType__CrossAxleConnector                                          = 5,
	EConnectionAxleType__SecondaryPinReceptor                                        = 6,
	EConnectionAxleType__SecondaryPinConnector                                       = 7,
	EConnectionAxleType__PlateRoundCrossAxleReceptor                                 = 8,
	EConnectionAxleType__UnusedPlateRoundCrossAxleConnector                          = 9,
	EConnectionAxleType__MiniFigNeckReceptor                                         = 10,
	EConnectionAxleType__MiniFigNeckConnector                                        = 11,
	EConnectionAxleType__RoundCrossAxleReceptor                                      = 12,
	EConnectionAxleType__RoundCrossAxleConnector                                     = 13,
	EConnectionAxleType__TinyPinReceptor                                             = 14,
	EConnectionAxleType__TinyPinConnector                                            = 15,
	EConnectionAxleType__UnusedCrossAxlePegHoleCapAlignmentReceptor                  = 16,
	EConnectionAxleType__CrossAxlePegHoleCapAlignmentConnector                       = 17,
	EConnectionAxleType__UnusedRoundAxleReceptorDontRejectSecondaryPinConnector      = 18,
	EConnectionAxleType__RoundAxleConnectorDontRejectSecondaryPinConnector           = 19,
	EConnectionAxleType__UnusedSecondaryPinReceptorDontRejectTinyPinConnector        = 20,
	EConnectionAxleType__SecondaryPinConnectorDontRejectTinyPinConnector             = 21,
	EConnectionAxleType__SubTypeSize                                                 = 22,
	EConnectionAxleType__EConnectionAxleType_MAX                                     = 23
};

/// Enum /Script/AtomRuntime.EConnectionPointType
/// Size: 0x47
enum class EConnectionPointType : uint8_t
{
	EConnectionPointType__Knob                                                       = 0,
	EConnectionPointType__HollowKnob                                                 = 1,
	EConnectionPointType__KnobFitInPegHole                                           = 2,
	EConnectionPointType__HollowKnobFitInPegHole                                     = 3,
	EConnectionPointType__SquareKnob                                                 = 4,
	EConnectionPointType__Tube                                                       = 5,
	EConnectionPointType__TubeWithRib                                                = 6,
	EConnectionPointType__BottomTube                                                 = 7,
	EConnectionPointType__BottomTubeWithRib                                          = 8,
	EConnectionPointType__SecondaryPin                                               = 9,
	EConnectionPointType__SecondaryPinWithRib                                        = 10,
	EConnectionPointType__SecondaryPinWithTinyPinReceptor                            = 11,
	EConnectionPointType__SecondaryPinWithRibAndTinyPinReceptor                      = 12,
	EConnectionPointType__FixedTube                                                  = 13,
	EConnectionPointType__FixedTubeWithAntiKnob                                      = 14,
	EConnectionPointType__AntiKnob                                                   = 15,
	EConnectionPointType__PegHole                                                    = 16,
	EConnectionPointType__SquareAntiKnob                                             = 17,
	EConnectionPointType__TubeGap                                                    = 18,
	EConnectionPointType__TubeGrabber                                                = 19,
	EConnectionPointType__TinyPin                                                    = 20,
	EConnectionPointType__TinyPinReceptor                                            = 21,
	EConnectionPointType__Edge                                                       = 22,
	EConnectionPointType__EdgeGap                                                    = 23,
	EConnectionPointType__KnobReject                                                 = 24,
	EConnectionPointType__PowerFuncLeftTop                                           = 25,
	EConnectionPointType__PowerFuncRightTop                                          = 26,
	EConnectionPointType__PowerFuncLeftBottom                                        = 27,
	EConnectionPointType__PowerFuncRightBottom                                       = 28,
	EConnectionPointType__VoidFeature                                                = 29,
	EConnectionPointType__DuploKnob                                                  = 30,
	EConnectionPointType__DuploHollowKnob                                            = 31,
	EConnectionPointType__DuploAntiKnob                                              = 32,
	EConnectionPointType__DuploTube                                                  = 33,
	EConnectionPointType__DuploFixedTube                                             = 34,
	EConnectionPointType__DuploTubeGap                                               = 35,
	EConnectionPointType__DuploAnimalKnob                                            = 36,
	EConnectionPointType__DuploAnimalTube                                            = 37,
	EConnectionPointType__SecondaryPinReceptor                                       = 38,
	EConnectionPointType__DuploFixedAnimalTube                                       = 39,
	EConnectionPointType__DuploSecondaryPinWithRib                                   = 40,
	EConnectionPointType__DuploSecondaryPin                                          = 41,
	EConnectionPointType__DuploKnobReject                                            = 42,
	EConnectionPointType___size                                                      = 43,
	EConnectionPointType___duploBegin                                                = 30,
	EConnectionPointType___duploEnd                                                  = 42,
	EConnectionPointType__EConnectionPointType_MAX                                   = 44
};

/// Enum /Script/AtomRuntime.EConnectionPointFlags
/// Size: 0x21
enum class EConnectionPointFlags : uint32_t
{
	EConnectionPointFlags__SquareFeature                                             = 1,
	EConnectionPointFlags__RoundFeature                                              = 2,
	EConnectionPointFlags__KnobWithHole                                              = 4,
	EConnectionPointFlags__KnobWithMiniFigHandHole                                   = 8,
	EConnectionPointFlags__KnobWithSingleCollision                                   = 16,
	EConnectionPointFlags__SingleFeature                                             = 32,
	EConnectionPointFlags__ReceptorDontRemoveKnobCollision                           = 64,
	EConnectionPointFlags__KnobWithoutCollision                                      = 128,
	EConnectionPointFlags__CreationValidFlags                                        = 255,
	EConnectionPointFlags__ThisSideTransparent                                       = 256,
	EConnectionPointFlags__ThisSideHidden                                            = 512,
	EConnectionPointFlags__DynamicValidFlags                                         = 768,
	EConnectionPointFlags__InternalIsDuploSecondaryPin                               = 268435456,
	EConnectionPointFlags__InternalIsQuadConnector                                   = 536870912,
	EConnectionPointFlags__InternalIsSecondaryPin                                    = 1073741824,
	EConnectionPointFlags__InternalIsAnyKnob                                         = -2147483648,
	EConnectionPointFlags__SquareOcclusionShapeIndex                                 = 1,
	EConnectionPointFlags__RoundOcclusionShapeIndex                                  = 2,
	EConnectionPointFlags__OtherOcclusionShapeIndex                                  = 0,
	EConnectionPointFlags__OcclusionShapeMask                                        = 3,
	EConnectionPointFlags__EConnectionPointFlags_MAX                                 = -2147483647
};

/// Class /Script/AtomRuntime.AtomAssetImportData
/// Size: 0x0000 (0x000028 - 0x000028)
class UAtomAssetImportData : public UAssetImportData
{ 
public:
};

/// Class /Script/AtomRuntime.AtomModelMergedMeshImportData
/// Size: 0x0000 (0x000028 - 0x000028)
class UAtomModelMergedMeshImportData : public UAssetImportData
{ 
public:
};

/// Class /Script/AtomRuntime.AtomModelGeometryCollectionImportData
/// Size: 0x0000 (0x000028 - 0x000028)
class UAtomModelGeometryCollectionImportData : public UAssetImportData
{ 
public:
};

/// Class /Script/AtomRuntime.AtomDatabaseSubsystemBase
/// Size: 0x0000 (0x000030 - 0x000030)
class UAtomDatabaseSubsystemBase : public UEngineSubsystem
{ 
public:
};

/// Class /Script/AtomRuntime.AtomModelActor
/// Size: 0x0018 (0x000290 - 0x0002A8)
class AAtomModelActor : public AActor
{ 
public:
	class UAtomModel*                                  AtomModel;                                                  // 0x0290   (0x0008)  
	SDK_UNDEFINED(16,11561) /* FString */              __um(PrimitiveStyleName);                                   // 0x0298   (0x0010)  
};

/// Struct /Script/AtomRuntime.ConnectionField
/// Size: 0x0040 (0x000000 - 0x000040)
struct FConnectionField
{ 
	FQuat                                              Rotation;                                                   // 0x0000   (0x0020)  
	FVector                                            Location;                                                   // 0x0020   (0x0018)  
	uint32_t                                           Subtype;                                                    // 0x0038   (0x0004)  
	EConnectionFieldType                               Type;                                                       // 0x003C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x003D   (0x0003)  MISSED
};

/// Struct /Script/AtomRuntime.ConnectionPoint
/// Size: 0x0008 (0x000000 - 0x000008)
struct FConnectionPoint
{ 
	EConnectionPointFlags                              Flags;                                                      // 0x0000   (0x0004)  
	EConnectionPointType                               Type;                                                       // 0x0004   (0x0001)  
	char                                               Size;                                                       // 0x0005   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0006   (0x0002)  MISSED
};

/// Struct /Script/AtomRuntime.ConnectionFieldPlanar
/// Size: 0x0020 (0x000040 - 0x000060)
struct FConnectionFieldPlanar : FConnectionField
{ 
	char                                               Width;                                                      // 0x0040   (0x0001)  
	char                                               Height;                                                     // 0x0041   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0042   (0x0006)  MISSED
	TArray<FConnectionPoint>                           Points;                                                     // 0x0048   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0058   (0x0008)  MISSED
};

/// Struct /Script/AtomRuntime.ConnectionFieldContainer
/// Size: 0x0030 (0x000000 - 0x000030)
struct FConnectionFieldContainer
{ 
	TArray<FConnectionFieldPlanar>                     PlanarFields;                                               // 0x0000   (0x0010)  
	TArray<FInstancedStruct>                           LineFields;                                                 // 0x0010   (0x0010)  
	TArray<FInstancedStruct>                           PointFields;                                                // 0x0020   (0x0010)  
};

/// Struct /Script/AtomRuntime.PlanarFieldPointConnectionInfo
/// Size: 0x0004 (0x000000 - 0x000004)
struct FPlanarFieldPointConnectionInfo
{ 
	uint16_t                                           IndexA;                                                     // 0x0000   (0x0002)  
	uint16_t                                           IndexB;                                                     // 0x0002   (0x0002)  
};

/// Struct /Script/AtomRuntime.PlanarFieldConnectionInfo
/// Size: 0x0020 (0x000000 - 0x000020)
struct FPlanarFieldConnectionInfo
{ 
	TArray<FPlanarFieldPointConnectionInfo>            PointConnections;                                           // 0x0000   (0x0010)  
	EFieldConnectResult                                ConnectResult;                                              // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	uint32_t                                           OverlapA;                                                   // 0x0014   (0x0004)  
	uint32_t                                           OverlapB;                                                   // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/AtomRuntime.ConnectivityFieldReference
/// Size: 0x0008 (0x000000 - 0x000008)
struct FConnectivityFieldReference
{ 
	int32_t                                            ObjectId;                                                   // 0x0000   (0x0004)  
	uint16_t                                           FieldIndex;                                                 // 0x0004   (0x0002)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0006   (0x0002)  MISSED
};

/// Struct /Script/AtomRuntime.SerializedPlanarConnection
/// Size: 0x0030 (0x000000 - 0x000030)
struct FSerializedPlanarConnection
{ 
	FPlanarFieldConnectionInfo                         Connection;                                                 // 0x0000   (0x0020)  
	FConnectivityFieldReference                        FieldA;                                                     // 0x0020   (0x0008)  
	FConnectivityFieldReference                        FieldB;                                                     // 0x0028   (0x0008)  
};

/// Struct /Script/AtomRuntime.SerializedConnectivityObjects
/// Size: 0x0020 (0x000000 - 0x000020)
struct FSerializedConnectivityObjects
{ 
	TArray<FConnectionFieldContainer>                  Fields;                                                     // 0x0000   (0x0010)  
	TArray<FSerializedPlanarConnection>                PlanarConnections;                                          // 0x0010   (0x0010)  
};

/// Struct /Script/AtomRuntime.CommonPartInstanceDescription
/// Size: 0x0040 (0x000000 - 0x000040)
struct FCommonPartInstanceDescription
{ 
	FTransform3f                                       Transform;                                                  // 0x0000   (0x0030)  
	int16_t                                            MeshIdx;                                                    // 0x0030   (0x0002)  
	int16_t                                            MaterialIdx;                                                // 0x0032   (0x0002)  
	int16_t                                            UUIDIdx;                                                    // 0x0034   (0x0002)  
	uint16_t                                           ColorId;                                                    // 0x0036   (0x0002)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Struct /Script/AtomRuntime.AtomCommonPartInstancesCache
/// Size: 0x0050 (0x000000 - 0x000050)
struct FAtomCommonPartInstancesCache
{ 
	TArray<class UStaticMesh*>                         Meshes;                                                     // 0x0000   (0x0010)  
	TArray<class UMaterialInterface*>                  Materials;                                                  // 0x0010   (0x0010)  
	TArray<FGuid>                                      UUIDs;                                                      // 0x0020   (0x0010)  
	TArray<FCommonPartInstanceDescription>             Instances;                                                  // 0x0030   (0x0010)  
	TArray<FTransform3f>                               InstanceTransforms;                                         // 0x0040   (0x0010)  
};

/// Class /Script/AtomRuntime.AtomModelAssetUserData
/// Size: 0x00A0 (0x000028 - 0x0000C8)
class UAtomModelAssetUserData : public UAssetUserData
{ 
public:
	SDK_UNDEFINED(32,11562) /* TWeakObjectPtr<UAtomModel*> */ __um(AtomModelAsset);                                // 0x0028   (0x0020)  
	FSerializedConnectivityObjects                     AtomModelConnections;                                       // 0x0048   (0x0020)  
	FAtomCommonPartInstancesCache                      CommonPartCache;                                            // 0x0068   (0x0050)  
	TArray<FName>                                      Tags;                                                       // 0x00B8   (0x0010)  
};

/// Struct /Script/AtomRuntime.AtomCommonPartAssetDescription
/// Size: 0x000C (0x000000 - 0x00000C)
struct FAtomCommonPartAssetDescription
{ 
	EAtomCommonPartType                                CommonPartType;                                             // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              CommonPartStyle;                                            // 0x0004   (0x0004)  
	float                                              Scale;                                                      // 0x0008   (0x0004)  
};

/// Class /Script/AtomRuntime.AtomCommonPartModelAssetUserData
/// Size: 0x0010 (0x000028 - 0x000038)
class UAtomCommonPartModelAssetUserData : public UAssetUserData
{ 
public:
	FAtomCommonPartAssetDescription                    AssetDescription;                                           // 0x0028   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/AtomRuntime.AtomPartsCollectionBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAtomPartsCollectionBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AtomRuntime.AtomPartsCollectionBlueprintLibrary.SetName
	// void SetName(FAtomModelPartsCollection& PartsCollection, FString Name);                                               // [0xb88f630] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AtomRuntime.AtomPartsCollectionBlueprintLibrary.ReplacePartInstance
	// void ReplacePartInstance(FAtomModelPartsCollection& PartCollection, FAtomModelPartInstanceInfo& SourcePartInstance, FAtomModelPartGuid& TargetPartInstanceId); // [0xb88eda4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AtomRuntime.AtomPartsCollectionBlueprintLibrary.RemovePartInstance
	// void RemovePartInstance(FAtomModelPartsCollection& PartCollection, FAtomModelPartGuid& PartInstanceId);               // [0xb88ec90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AtomRuntime.AtomPartsCollectionBlueprintLibrary.InitializeCommonParts
	// FAtomModelPartsCollection InitializeCommonParts(FAtomModelPartsCollection& PartsCollection, class UAtomModel* Model, float Scale, bool bRemoveConnectedParts, bool bRemoveAllKnobs, bool bRemoveAllTubes, bool bRemoveAllPins); // [0xb88e654] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AtomRuntime.AtomPartsCollectionBlueprintLibrary.GetParts
	// TArray<FAtomModelPartInstanceInfo> GetParts(FAtomModelPartsCollection& PartsCollection);                              // [0xb88e58c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AtomRuntime.AtomPartsCollectionBlueprintLibrary.GetName
	// FString GetName(FAtomModelPartsCollection& PartsCollection);                                                          // [0xb88ddec] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AtomRuntime.AtomPartsCollectionBlueprintLibrary.FilterTransparent
	// FAtomModelPartsCollection FilterTransparent(FAtomModelPartsCollection& PartsCollectionToFilter, FString NewPartsCollectionName); // [0xb88dba0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AtomRuntime.AtomPartsCollectionBlueprintLibrary.FilterSelectionSet
	// FAtomModelPartsCollection FilterSelectionSet(FAtomModelPartsCollection& PartsCollectionToFilter, FString SelectionSetName, FString NewPartsCollectionName); // [0xb88d8b8] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AtomRuntime.AtomPartsCollectionBlueprintLibrary.FilterNonTransparent
	// FAtomModelPartsCollection FilterNonTransparent(FAtomModelPartsCollection& PartsCollectionToFilter, FString NewPartsCollectionName); // [0xb88d6d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AtomRuntime.AtomPartsCollectionBlueprintLibrary.FilterGroup
	// FAtomModelPartsCollection FilterGroup(class UAtomModel* Model, FAtomModelPartsCollection& PartsCollectionToFilter, FString GroupName, FString NewPartsCollectionName); // [0xb88d3ac] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AtomRuntime.AtomPartsCollectionBlueprintLibrary.CreateColorInfoFromColorId
	// FAtomModelPartColorInfo CreateColorInfoFromColorId(int32_t ColorId);                                                  // [0xb88d268] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AtomRuntime.AtomPartsCollectionBlueprintLibrary.Conv_StringToModelPartGuid
	// FAtomModelPartGuid Conv_StringToModelPartGuid(FString InString);                                                      // [0xb88c4a8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AtomRuntime.AtomPartsCollectionBlueprintLibrary.Conv_ModelPartGuidToString
	// FString Conv_ModelPartGuidToString(FAtomModelPartGuid& InModelPartGuid);                                              // [0xb88c3f4] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AtomRuntime.AtomPartsCollectionBlueprintLibrary.AddPartInstance
	// void AddPartInstance(FAtomModelPartsCollection& PartCollection, FAtomModelPartInstanceInfo& PartInstance);            // [0xb88bd98] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AtomRuntime.AtomPrimitiveBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAtomPrimitiveBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AtomRuntime.AtomPrimitiveBlueprintLibrary.GetDefaultPrimitiveScale
	// float GetDefaultPrimitiveScale();                                                                                     // [0xb88dd88] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AtomRuntime.AtomPrimitiveGeometry
/// Size: 0x02C0 (0x000028 - 0x0002E8)
class UAtomPrimitiveGeometry : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x2C0];                                     // 0x0028   (0x02C0)  MISSED


	/// Functions
	// Function /Script/AtomRuntime.AtomPrimitiveGeometry.ToSimplifiedStaticMesh
	// class UStaticMesh* ToSimplifiedStaticMesh(float Scale, class UObject* Outer, FString Name, bool bFastBuild);          // [0xb88f984] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AtomRuntime.AtomPrimitiveGeometry.SplitByPolygonGroup
	// TArray<UAtomPrimitiveGeometry*> SplitByPolygonGroup();                                                                // [0xb88f918] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AtomRuntime.AtomPrimitiveGeometry.SetVertexColor
	// class UAtomPrimitiveGeometry* SetVertexColor(FColor& Color);                                                          // [0xb88f880] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AtomRuntime.AtomPrimitiveGeometry.SetTiledUVs
	// class UAtomPrimitiveGeometry* SetTiledUVs(float TileSize);                                                            // [0xb88f7f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AtomRuntime.AtomPrimitiveGeometry.SetMaterialName
	// class UAtomPrimitiveGeometry* SetMaterialName(FString Name, int32_t PolygonGroupIndex);                               // [0xb88ef5c] Final|Native|Public|BlueprintCallable 
	// Function /Script/AtomRuntime.AtomPrimitiveGeometry.GetNumberOfCommonPartLODs
	// int32_t GetNumberOfCommonPartLODs(FString ExportStyleName, EAtomCommonPartType CommonPartType);                       // [0xb88dec8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AtomRuntime.AtomPrimitiveGeometry.GetMaterialNames
	// TArray<FString> GetMaterialNames();                                                                                   // [0xb88ddb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AtomRuntime.AtomPrimitiveGeometry.DuplicateGeometry
	// class UAtomPrimitiveGeometry* DuplicateGeometry();                                                                    // [0xb88d370] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/AtomRuntime.AtomPrimitiveGeometry.CreateEmptyAtomGeometry
	// class UAtomPrimitiveGeometry* CreateEmptyAtomGeometry();                                                              // [0xb88d31c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AtomRuntime.AtomPrimitiveGeometry.CreateAtomGeometryFromCommonPart
	// class UAtomPrimitiveGeometry* CreateAtomGeometryFromCommonPart(FString ExportStyleName, EAtomCommonPartType CommonPartType, int32_t LODIndex); // [0xb88cb70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AtomRuntime.AtomPrimitiveGeometry.BakeTransforms
	// class UAtomPrimitiveGeometry* BakeTransforms(TArray<FTransform3f>& Transforms);                                       // [0xb88c348] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AtomRuntime.AtomPrimitiveGeometry.BakeTransform
	// class UAtomPrimitiveGeometry* BakeTransform(FTransform3f& Transform);                                                 // [0xb88c27c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AtomRuntime.AtomPrimitiveGeometry.BakeScale
	// class UAtomPrimitiveGeometry* BakeScale(float Scale);                                                                 // [0xb88c1ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/AtomRuntime.AtomPrimitiveGeometry.AppendAndWeld
	// class UAtomPrimitiveGeometry* AppendAndWeld(class UAtomPrimitiveGeometry* GeometryToAppend, FTransform3f& Transform); // [0xb88c04c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AtomRuntime.AtomPrimitiveGeometry.Append
	// class UAtomPrimitiveGeometry* Append(class UAtomPrimitiveGeometry* GeometryToAppend, FTransform3f& Transform);        // [0xb88befc] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/AtomRuntime.AtomPrimitiveGeometryContainer
/// Size: 0x00D0 (0x000028 - 0x0000F8)
class UAtomPrimitiveGeometryContainer : public UObject
{ 
public:
	SDK_UNDEFINED(32,11563) /* TWeakObjectPtr<UStaticMesh*> */ __um(SourceMesh);                                   // 0x0028   (0x0020)  
	SDK_UNDEFINED(16,11564) /* FString */              __um(ExportStyleName);                                      // 0x0048   (0x0010)  
	SDK_UNDEFINED(80,11565) /* TMap<FString, int32_t> */ __um(GeometryCount);                                      // 0x0058   (0x0050)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x00A8   (0x0050)  MISSED


	/// Functions
	// Function /Script/AtomRuntime.AtomPrimitiveGeometryContainer.GetShellGeometry
	// FAtomPrimitiveGeometryAndTransform GetShellGeometry();                                                                // [0xb89442c] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AtomRuntime.AtomPrimitiveGeometryContainer.GetScaledShellGeometry
	// FAtomPrimitiveGeometryAndTransform GetScaledShellGeometry(float Scale);                                               // [0xb894378] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AtomRuntime.AtomPrimitiveGeometryContainer.GetScaledGeometry
	// class UAtomPrimitiveGeometry* GetScaledGeometry(EPrimitiveGeometryComplexity PrimitiveGeometryComplexity, float Scale); // [0xb8942b4] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AtomRuntime.AtomPrimitiveGeometryContainer.GetScaledDetailsGeometry
	// TArray<FAtomPrimitiveGeometryAndTransform> GetScaledDetailsGeometry(float Scale);                                     // [0xb89420c] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AtomRuntime.AtomPrimitiveGeometryContainer.GetScaledCapsGeometry
	// TArray<FAtomPrimitiveGeometryAndTransform> GetScaledCapsGeometry(float Scale);                                        // [0xb894164] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AtomRuntime.AtomPrimitiveGeometryContainer.GetPartsGeometry
	// TArray<FAtomPrimitiveGeometryAndTransform> GetPartsGeometry();                                                        // [0xb893e1c] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AtomRuntime.AtomPrimitiveGeometryContainer.GetGeometryWithMaterialNames
	// class UAtomPrimitiveGeometry* GetGeometryWithMaterialNames(EPrimitiveGeometryComplexity PrimitiveGeometryComplexity, FString ShellMaterial, FString UndersideMaterial); // [0xb893384] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AtomRuntime.AtomPrimitiveGeometryContainer.GetGeometry
	// class UAtomPrimitiveGeometry* GetGeometry(EPrimitiveGeometryComplexity PrimitiveGeometryComplexity);                  // [0xb8932f4] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AtomRuntime.AtomPrimitiveGeometryContainer.GetExportStyleName
	// FString GetExportStyleName();                                                                                         // [0xa4f4840] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AtomRuntime.AtomPrimitiveGeometryContainer.GetDetailsGeometry
	// TArray<FAtomPrimitiveGeometryAndTransform> GetDetailsGeometry();                                                      // [0xb893174] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AtomRuntime.AtomPrimitiveGeometryContainer.GetCapsGeometry
	// TArray<FAtomPrimitiveGeometryAndTransform> GetCapsGeometry();                                                         // [0xb89236c] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AtomRuntime.AtomRuntimeBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAtomRuntimeBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AtomRuntime.AtomRuntimeBlueprintLibrary.GetInfoForColorId
	// FAtomColorInfo GetInfoForColorId(int32_t ColorId);                                                                    // [0xb893aac] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AtomRuntime.AtomRuntimeBlueprintLibrary.GetCommonPartDescriptionFromType
	// void GetCommonPartDescriptionFromType(EAtomCommonPartType CommonPartType, FAtomCommonPartDescription& OutDescription); // [0xb89295c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AtomRuntime.AtomRuntimeBlueprintLibrary.GetCommonPartCategoryFromType
	// EAtomCommonPartCategory GetCommonPartCategoryFromType(EAtomCommonPartType CommonPartType);                            // [0xb8928dc] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AtomRuntime.AtomRuntimeBlueprintLibrary.GetCommonPartAssetDescriptionFromStaticMesh
	// void GetCommonPartAssetDescriptionFromStaticMesh(class UStaticMesh* StaticMesh, FAtomCommonPartAssetDescription& OutDescription, EGetCommonPartDescriptionResult& OutIsValid); // [0xb89275c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AtomRuntime.AtomRuntimeBlueprintLibrary.GetBitPackForColorId
	// int32_t GetBitPackForColorId(int32_t AtomColorId);                                                                    // [0xb8922b4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AtomRuntime.AtomRuntimeBlueprintLibrary.GetBitPackForColor
	// int32_t GetBitPackForColor(FColor& Color);                                                                            // [0xb89221c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AtomRuntime.AtomRuntimeBlueprintLibrary.GetAllColorInfo
	// TMap<int32_t, FAtomColorInfo> GetAllColorInfo();                                                                      // [0xb8920f8] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AtomRuntime.AtomRuntimeSettings
/// Size: 0x0048 (0x000030 - 0x000078)
class UAtomRuntimeSettings : public UDeveloperSettings
{ 
public:
	float                                              PrimitiveGlobalScale;                                       // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	SDK_UNDEFINED(32,11566) /* TWeakObjectPtr<UDataTable*> */ __um(ColorDataTableOverride);                        // 0x0038   (0x0020)  
	float                                              CommonPartsScale;                                           // 0x0058   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x005C   (0x0004)  MISSED
	FDirectoryPath                                     CommonPartMeshesBasePath;                                   // 0x0060   (0x0010)  
	bool                                               bEnableWorldConnectivity;                                   // 0x0070   (0x0001)  
	bool                                               bCookContent;                                               // 0x0071   (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x0072   (0x0006)  MISSED


	/// Functions
	// Function /Script/AtomRuntime.AtomRuntimeSettings.GetColorDataTable
	// class UDataTable* GetColorDataTable();                                                                                // [0xb892738] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AtomRuntime.WorldConnectivitySubsystem
/// Size: 0x0150 (0x000030 - 0x000180)
class UWorldConnectivitySubsystem : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x150];                                     // 0x0030   (0x0150)  MISSED


	/// Functions
	// Function /Script/AtomRuntime.WorldConnectivitySubsystem.UnregisterConnectivityActor
	// void UnregisterConnectivityActor(class AActor* Actor);                                                                // [0xb8957d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AtomRuntime.WorldConnectivitySubsystem.TryConnectObjectAtLocation
	// bool TryConnectObjectAtLocation(FWorldConnectivityHandle ObjectToConnect, FTransform& DesiredObjectTransform, TArray<FWorldConnectivityHandle>& ConnectionCandidates, bool PerformConnection); // [0xb894e1c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AtomRuntime.WorldConnectivitySubsystem.RunPlanarConnectivityQuery
	// TArray<FConnectivityQueryResult> RunPlanarConnectivityQuery(class AActor* AtomModelActorToPlace, class AActor* AtomModelActorToConnect, FVector& QueryStartLocation, FVector& QueryEndLocation, TEnumAsByte<ECollisionChannel> QueryCollisionChannel, int32_t QueryRadius); // [0xb894938] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AtomRuntime.WorldConnectivitySubsystem.RegisterModelActor
	// void RegisterModelActor(class AActor* Actor, FSerializedConnectivityObjects& Connections);                            // [0xb894844] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AtomRuntime.WorldConnectivitySubsystem.RegisterCustomConnectivityActor
	// void RegisterCustomConnectivityActor(class AActor* Actor, FSerializedConnectivityObjects& ConnectivityObject);        // [0xb894844] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AtomRuntime.WorldConnectivitySubsystem.RegisterConnectivityActor
	// void RegisterConnectivityActor(class AActor* Actor, class UAtomModel* Model);                                         // [0xb894774] Final|Native|Public|BlueprintCallable 
	// Function /Script/AtomRuntime.WorldConnectivitySubsystem.PlanarGridStepSize
	// double PlanarGridStepSize();                                                                                          // [0xb894754] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AtomRuntime.WorldConnectivitySubsystem.GetTransform
	// FTransform GetTransform(FWorldConnectivityHandle Handle);                                                             // [0xb8945ec] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AtomRuntime.WorldConnectivitySubsystem.GetPlanarFields
	// TArray<FPlanarFieldInfo> GetPlanarFields(FWorldConnectivityHandle Handle, EConnectionFieldGender Type);               // [0xb893f34] Final|Native|Public|BlueprintCallable 
	// Function /Script/AtomRuntime.WorldConnectivitySubsystem.GetPlanarFieldCenter
	// FVector GetPlanarFieldCenter(FPlanarFieldInfo& Field);                                                                // [0xb893e58] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AtomRuntime.WorldConnectivitySubsystem.GetOverlapPenetrationDepth
	// FVector GetOverlapPenetrationDepth(class AStaticMeshActor* Actor1, class AStaticMeshActor* Actor2, FVector Offset);   // [0xb893b58] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AtomRuntime.WorldConnectivitySubsystem.GetConnectivityHandles
	// TArray<FWorldConnectivityHandle> GetConnectivityHandles(class AActor* Actor);                                         // [0xb892f30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AtomRuntime.WorldConnectivitySubsystem.GetConnectivityHandle
	// FWorldConnectivityHandle GetConnectivityHandle(class AActor* Actor);                                                  // [0xb892cf8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AtomRuntime.WorldConnectivitySubsystem.GetConnectedObjectsRecursively
	// TArray<FWorldConnectivityHandle> GetConnectedObjectsRecursively(FWorldConnectivityHandle Object);                     // [0xb892ba0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AtomRuntime.WorldConnectivitySubsystem.GetConnectedObjects
	// TArray<FWorldConnectivityHandle> GetConnectedObjects(FWorldConnectivityHandle Object);                                // [0xb892a48] Final|Native|Public|BlueprintCallable 
	// Function /Script/AtomRuntime.WorldConnectivitySubsystem.GetClosestFieldToPoint
	// FPlanarFieldInfo GetClosestFieldToPoint(FWorldConnectivityHandle Handle, FVector& WorldLocation, EConnectionFieldGender Type, bool& bSuccess); // [0xb8923a8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AtomRuntime.WorldConnectivitySubsystem.GetAtomModelAssetUserData
	// class UAtomModelAssetUserData* GetAtomModelAssetUserData(class UObject* Object);                                      // [0xb89219c] Final|Native|Public|BlueprintCallable 
	// Function /Script/AtomRuntime.WorldConnectivitySubsystem.GetActor
	// class AActor* GetActor(FWorldConnectivityHandle Handle);                                                              // [0xb891fb8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AtomRuntime.WorldConnectivitySubsystem.DisconnectObjects
	// void DisconnectObjects(FWorldConnectivityHandle ObjectA, FWorldConnectivityHandle ObjectB);                           // [0xb891ca8] Final|Native|Public|BlueprintCallable 
	// Function /Script/AtomRuntime.WorldConnectivitySubsystem.DisconnectAllObjectConnections
	// void DisconnectAllObjectConnections(FWorldConnectivityHandle Object);                                                 // [0xb891b78] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AtomRuntime.WorldConnectivityBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UWorldConnectivityBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AtomRuntime.WorldConnectivityBlueprintLibrary.IsValid
	// bool IsValid(FWorldConnectivityHandle& Handle);                                                                       // [0xa230b48] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AtomRuntime.WorldConnectivityBlueprintLibrary.GetTransform
	// FTransform GetTransform(class UObject* WorldContext, FWorldConnectivityHandle& Handle);                               // [0xb89449c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AtomRuntime.WorldConnectivityBlueprintLibrary.GetFieldCenter
	// FVector GetFieldCenter(class UObject* WorldContext, FPlanarFieldInfo& Field);                                         // [0xb8931b0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AtomRuntime.WorldConnectivityBlueprintLibrary.GetActor
	// class AActor* GetActor(class UObject* WorldContext, FWorldConnectivityHandle& Handle);                                // [0xb891ec0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/AtomRuntime.AtomModelTags
/// Size: 0x0010 (0x000000 - 0x000010)
struct FAtomModelTags
{ 
	TArray<FName>                                      Tags;                                                       // 0x0000   (0x0010)  
};

/// Struct /Script/AtomRuntime.AtomModelGeometryOptimizationSettings
/// Size: 0x0018 (0x000000 - 0x000018)
struct FAtomModelGeometryOptimizationSettings
{ 
	bool                                               bEnforceLODBudgets;                                         // 0x0000   (0x0001)  
	bool                                               bUseTagBudget;                                              // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	int32_t                                            TriangleBudget;                                             // 0x0004   (0x0004)  
	double                                             SimplifyBaseTolerance;                                      // 0x0008   (0x0008)  
	double                                             OptimizeBaseTriCost;                                        // 0x0010   (0x0008)  
};

/// Struct /Script/AtomRuntime.AtomModelAssetSettings
/// Size: 0x0038 (0x000000 - 0x000038)
struct FAtomModelAssetSettings
{ 
	float                                              Scale;                                                      // 0x0000   (0x0004)  
	bool                                               CreateRigidElementComponents;                               // 0x0004   (0x0001)  
	bool                                               bEnableConnectivity;                                        // 0x0005   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0006   (0x0002)  MISSED
	EAtomModelPivotAnchor                              PivotAnchor;                                                // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FAtomModelTags                                     Tags;                                                       // 0x0010   (0x0010)  
	FAtomModelGeometryOptimizationSettings             OptimizationSettings;                                       // 0x0020   (0x0018)  
};

/// Struct /Script/AtomRuntime.AtomColorSurface
/// Size: 0x0008 (0x000000 - 0x000008)
struct FAtomColorSurface
{ 
	int32_t                                            ColorId;                                                    // 0x0000   (0x0004)  
	EAtomShaderType                                    ShaderType;                                                 // 0x0004   (0x0004)  
};

/// Struct /Script/AtomRuntime.AtomDecorationAssignment
/// Size: 0x0030 (0x000000 - 0x000030)
struct FAtomDecorationAssignment
{ 
	SDK_UNDEFINED(16,11567) /* FString */              __um(SurfaceName);                                          // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,11568) /* FString */              __um(TextureName);                                          // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,11569) /* FString */              __um(Version);                                              // 0x0020   (0x0010)  
};

/// Struct /Script/AtomRuntime.AtomModelPart
/// Size: 0x00B0 (0x000000 - 0x0000B0)
struct FAtomModelPart
{ 
	SDK_UNDEFINED(32,11570) /* TWeakObjectPtr<UAtomPrimitive*> */ __um(AtomPrimitive);                             // 0x0000   (0x0020)  
	SDK_UNDEFINED(32,11571) /* TWeakObjectPtr<UMaterialInterface*> */ __um(MaterialInstance);                      // 0x0020   (0x0020)  
	SDK_UNDEFINED(32,11572) /* TWeakObjectPtr<UMaterialInterface*> */ __um(MaterialWithPayload);                   // 0x0040   (0x0020)  
	TArray<FTransform>                                 Transforms;                                                 // 0x0060   (0x0010)  
	uint32_t                                           PartId;                                                     // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0074   (0x0004)  MISSED
	SDK_UNDEFINED(16,11573) /* FString */              __um(PartRevision);                                         // 0x0078   (0x0010)  
	TArray<FAtomColorSurface>                          ColorSurfaces;                                              // 0x0088   (0x0010)  
	TArray<FAtomDecorationAssignment>                  Decorations;                                                // 0x0098   (0x0010)  
	bool                                               bIgnoreCommonPartCulling;                                   // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00A9   (0x0007)  MISSED
};

/// Struct /Script/AtomRuntime.AtomModelPrimitive
/// Size: 0x0028 (0x000000 - 0x000028)
struct FAtomModelPrimitive
{ 
	TArray<FAtomModelPart>                             Parts;                                                      // 0x0000   (0x0010)  
	int32_t                                            DesignId;                                                   // 0x0010   (0x0004)  
	FGuid                                              UUID;                                                       // 0x0014   (0x0010)  
	FName                                              DesignName;                                                 // 0x0024   (0x0004)  
};

/// Struct /Script/AtomRuntime.AtomBoneReference
/// Size: 0x000C (0x000000 - 0x00000C)
struct FAtomBoneReference
{ 
	int32_t                                            PrimitiveIndex;                                             // 0x0000   (0x0004)  
	int32_t                                            PartIndex;                                                  // 0x0004   (0x0004)  
	int32_t                                            BoneIndex;                                                  // 0x0008   (0x0004)  
};

/// Struct /Script/AtomRuntime.AtomPrimitiveConnection
/// Size: 0x0018 (0x000000 - 0x000018)
struct FAtomPrimitiveConnection
{ 
	FAtomBoneReference                                 From;                                                       // 0x0000   (0x000C)  
	FAtomBoneReference                                 To;                                                         // 0x000C   (0x000C)  
};

/// Struct /Script/AtomRuntime.AtomRigidElementConnection
/// Size: 0x0080 (0x000000 - 0x000080)
struct FAtomRigidElementConnection
{ 
	FTransform                                         Transform;                                                  // 0x0000   (0x0060)  
	int32_t                                            OtherElementIndex;                                          // 0x0060   (0x0004)  
	int32_t                                            ConnectionUniqueId;                                         // 0x0064   (0x0004)  
	TArray<FAtomPrimitiveConnection>                   PrimitiveConnections;                                       // 0x0068   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0078   (0x0008)  MISSED
};

/// Struct /Script/AtomRuntime.AtomRigidElement
/// Size: 0x0028 (0x000000 - 0x000028)
struct FAtomRigidElement
{ 
	TArray<FAtomBoneReference>                         BoneReferences;                                             // 0x0000   (0x0010)  
	TArray<FAtomRigidElementConnection>                Connections;                                                // 0x0010   (0x0010)  
	FName                                              Name;                                                       // 0x0020   (0x0004)  
	int32_t                                            IndexOfMetaBone;                                            // 0x0024   (0x0004)  
};

/// Struct /Script/AtomRuntime.AtomHingedElement
/// Size: 0x0018 (0x000000 - 0x000018)
struct FAtomHingedElement
{ 
	TArray<FAtomRigidElement>                          RigidElements;                                              // 0x0000   (0x0010)  
	int32_t                                            HierarchyRootIndex;                                         // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/AtomRuntime.AtomModelSelectionSet
/// Size: 0x0068 (0x000000 - 0x000068)
struct FAtomModelSelectionSet
{ 
	SDK_UNDEFINED(80,11574) /* TSet<FGuid> */          __um(PrimitiveIds);                                         // 0x0000   (0x0050)  
	FName                                              SelectionSetName;                                           // 0x0050   (0x0004)  
	FName                                              ImportedName;                                               // 0x0054   (0x0004)  
	FGuid                                              ID;                                                         // 0x0058   (0x0010)  
};

/// Struct /Script/AtomRuntime.AtomModelConfigurationGroup
/// Size: 0x0078 (0x000000 - 0x000078)
struct FAtomModelConfigurationGroup
{ 
	FGuid                                              ID;                                                         // 0x0000   (0x0010)  
	FName                                              Name;                                                       // 0x0010   (0x0004)  
	FGuid                                              ParentGroupId;                                              // 0x0014   (0x0010)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	SDK_UNDEFINED(80,11575) /* TSet<FGuid> */          __um(PrimitiveIds);                                         // 0x0028   (0x0050)  
};

/// Struct /Script/AtomRuntime.AtomGlueSet
/// Size: 0x0050 (0x000000 - 0x000050)
struct FAtomGlueSet
{ 
	SDK_UNDEFINED(80,11576) /* TSet<FAtomModelPartReference> */ __um(Entries);                                     // 0x0000   (0x0050)  
};

/// Struct /Script/AtomRuntime.AtomSourceModel
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FAtomSourceModel
{ 
	TArray<FAtomModelPrimitive>                        Primitives;                                                 // 0x0000   (0x0010)  
	TArray<FAtomHingedElement>                         Elements;                                                   // 0x0010   (0x0010)  
	TArray<FAtomModelSelectionSet>                     SelectionSets;                                              // 0x0020   (0x0010)  
	TArray<FAtomGlueSet>                               GlueSets;                                                   // 0x0030   (0x0010)  
	TArray<FAtomModelConfigurationGroup>               Groups;                                                     // 0x0040   (0x0010)  
	FBox                                               Bounds;                                                     // 0x0050   (0x0038)  
	FVector                                            Pivot;                                                      // 0x0088   (0x0018)  
};

/// Class /Script/AtomRuntime.AtomModel
/// Size: 0x0230 (0x000028 - 0x000258)
class UAtomModel : public UObject
{ 
public:
	FAtomModelAssetSettings                            Settings;                                                   // 0x0028   (0x0038)  
	TArray<FAtomModelPrimitive>                        Primitives;                                                 // 0x0060   (0x0010)  
	TArray<FAtomHingedElement>                         Elements;                                                   // 0x0070   (0x0010)  
	TArray<FAtomModelSelectionSet>                     SelectionSets;                                              // 0x0080   (0x0010)  
	TArray<FAtomModelConfigurationGroup>               Groups;                                                     // 0x0090   (0x0010)  
	SDK_UNDEFINED(80,11577) /* TMap<EAtomCommonPartType, TWeakObjectPtr<UStaticMesh*>> */ __um(CommonPartOverrides); // 0x00A0   (0x0050)  
	char                                               CommonPartOptimization;                                     // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00F1   (0x0007)  MISSED
	FSerializedConnectivityObjects                     SerializedConnectivityObjects;                              // 0x00F8   (0x0020)  
	SDK_UNDEFINED(80,11578) /* TMap<FString, TWeakObjectPtr<UTexture*>> */ __um(TextureNameToAsset);               // 0x0118   (0x0050)  
	unsigned char                                      UnknownData01_5[0x50];                                      // 0x0168   (0x0050)  MISSED
	FAtomSourceModel                                   SourceModel;                                                // 0x01B8   (0x00A0)  


	/// Functions
	// Function /Script/AtomRuntime.AtomModel.GetTextureForDecorationTextureName
	// class UTexture* GetTextureForDecorationTextureName(FString TextureName);                                              // [0xb8c1de8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AtomRuntime.AtomModel.GetPrimitivesForChildArray
	// void GetPrimitivesForChildArray(int32_t InChildIdx, TArray<FAtomModelPrimitiveInstance>& OutPrimitives);              // [0xb8c15c8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AtomRuntime.AtomModel.GetPartsCollection
	// FAtomModelPartsCollection GetPartsCollection();                                                                       // [0xb8c1564] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AtomRuntime.AtomModel.GetModelPath
	// FString GetModelPath();                                                                                               // [0xb8c1408] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AtomRuntime.AtomModel.GetModelName
	// FString GetModelName();                                                                                               // [0xb8c13c8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AtomRuntime.AtomModel.GetGeneratedMergedMeshes
	// TArray<TWeakObjectPtr<UStaticMesh*>> GetGeneratedMergedMeshes();                                                      // [0xb8c0bd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AtomRuntime.AtomModel.GetChildIdentifier
	// FString GetChildIdentifier(int32_t InChildIdx);                                                                       // [0xb8c0544] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AtomRuntime.AtomModelComponent
/// Size: 0x00A0 (0x000290 - 0x000330)
class UAtomModelComponent : public USceneComponent
{ 
public:
	class UAtomModel*                                  AtomModel;                                                  // 0x0290   (0x0008)  
	EAtomModelInstanceType                             InstanceType;                                               // 0x0298   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0299   (0x0007)  MISSED
	SDK_UNDEFINED(16,11579) /* FString */              __um(RenderStyle);                                          // 0x02A0   (0x0010)  
	SDK_UNDEFINED(16,11580) /* FString */              __um(FallbackRenderStyle);                                  // 0x02B0   (0x0010)  
	bool                                               bUseCombinedMeshes;                                         // 0x02C0   (0x0001)  
	bool                                               bUseColorPayload;                                           // 0x02C1   (0x0001)  
	bool                                               bCreateRigidElements;                                       // 0x02C2   (0x0001)  
	bool                                               bEnableConnectivity;                                        // 0x02C3   (0x0001)  
	FName                                              SelectionSetFilter;                                         // 0x02C4   (0x0004)  
	char                                               CommonPartOptimization;                                     // 0x02C8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x02C9   (0x0007)  MISSED
	TArray<class USceneComponent*>                     RigidElementComponents;                                     // 0x02D0   (0x0010)  
	SDK_UNDEFINED(80,11581) /* TMap<FName, FModelPrimitiveEntry> */ __um(ComponentToPrimitive);                    // 0x02E0   (0x0050)  
};

/// Class /Script/AtomRuntime.AtomPrimitiveComponent
/// Size: 0x0030 (0x000630 - 0x000660)
class UAtomPrimitiveComponent : public UStaticMeshComponent
{ 
public:
	class UAtomPrimitive*                              AtomPrimitive;                                              // 0x0630   (0x0008)  
	SDK_UNDEFINED(16,11582) /* FString */              __um(RenderStyle);                                          // 0x0638   (0x0010)  
	SDK_UNDEFINED(16,11583) /* FString */              __um(FallbackRenderStyle);                                  // 0x0648   (0x0010)  
	bool                                               bUseCombinedMeshes;                                         // 0x0658   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0659   (0x0007)  MISSED
};

/// Class /Script/AtomRuntime.AtomModelProcessor
/// Size: 0x0030 (0x000028 - 0x000058)
class UAtomModelProcessor : public UObject
{ 
public:
	bool                                               bEnableRebuildProgress;                                     // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	float                                              DialogDelay;                                                // 0x002C   (0x0004)  
	int32_t                                            NumProgressSteps;                                           // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	SDK_UNDEFINED(16,11584) /* FString */              __um(ProgressMessage);                                      // 0x0038   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0048   (0x0010)  MISSED


	/// Functions
	// Function /Script/AtomRuntime.AtomModelProcessor.OnProcessPrimitive
	// FAtomProcessorResult OnProcessPrimitive(class UAtomModel* DummyModel, class UAtomPrimitive* Primitive, FAtomModelPartsCollection& AtomModelPartsCollection, FAtomOnProcessPrimitiveSettings& Settings); // [0x2177018] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AtomRuntime.AtomModelProcessor.OnProcessModel
	// FAtomProcessorResult OnProcessModel(class UAtomModel* Model, FAtomModelPartsCollection& AtomModelPartsCollection, TArray<TWeakObjectPtr<UObject*>>& ExistingObjects); // [0x2177018] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AtomRuntime.AtomModelProcessor.OnGetTargetAssetPath
	// FString OnGetTargetAssetPath(class UAtomModel* Model, class UAtomPrimitive* Primitive, FAtomModelPartsCollection& AtomModelPartsCollection); // [0x2177018] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AtomRuntime.AtomModelProcessor.OnGetProcessPrimitiveTargetAssetPath
	// FString OnGetProcessPrimitiveTargetAssetPath(class UAtomModel* Model, class UAtomPrimitive* Primitive, FAtomModelPartsCollection& AtomModelPartsCollection, FAtomOnProcessPrimitiveSettings& Settings); // [0x2177018] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AtomRuntime.AtomModelProcessor.OnGetProcessModelTargetAssetPath
	// FString OnGetProcessModelTargetAssetPath(class UAtomModel* Model, FAtomModelPartsCollection& AtomModelPartsCollection); // [0x2177018] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AtomRuntime.AtomModelProcessor.IncrementProgress
	// void IncrementProgress(int32_t NumSteps, FString Message);                                                            // [0xb8c2498] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AtomRuntime.AtomProcessorBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAtomProcessorBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AtomRuntime.AtomProcessorBlueprintLibrary.SetModelProcessor
	// void SetModelProcessor(FAtomModelProcessorInstance& ProcessorInstance, class UAtomModelProcessor* ModelProcessor, bool bUseCustomSettings); // [0xb8c2ca8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AtomRuntime.AtomProcessorBlueprintLibrary.IsValid
	// bool IsValid(FAtomModelProcessorInstance& ProcessorInstance);                                                         // [0xb8c2bdc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AtomRuntime.AtomProcessorBlueprintLibrary.GetProcessorClass
	// class UClass* GetProcessorClass(FAtomModelProcessorInstance& ProcessorInstance);                                      // [0xb8c1c90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AtomRuntime.AtomProcessorBlueprintLibrary.GetModelProcessor
	// class UAtomModelProcessor* GetModelProcessor(FAtomModelProcessorInstance& ProcessorInstance);                         // [0xb8c146c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AtomRuntime.AtomProcessorBlueprintLibrary.AppendAtomProcessorResult
	// FAtomProcessorResult AppendAtomProcessorResult(FAtomProcessorResult& Result, FAtomProcessorResult& ResultToAppend);   // [0xb8c03ac] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AtomRuntime.AtomPrimitive
/// Size: 0x01C8 (0x000028 - 0x0001F0)
class UAtomPrimitive : public UObject
{ 
public:
	int32_t                                            PartId;                                                     // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	SDK_UNDEFINED(16,11585) /* FString */              __um(PartRevision);                                         // 0x0030   (0x0010)  
	FName                                              DesignName;                                                 // 0x0040   (0x0004)  
	bool                                               bIsFlex;                                                    // 0x0044   (0x0001)  
	bool                                               bIsVariant;                                                 // 0x0045   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0046   (0x0002)  MISSED
	SDK_UNDEFINED(16,11586) /* TArray<FString> */      __um(DecorationSurfaceNames);                               // 0x0048   (0x0010)  
	int32_t                                            NumberOfColorSurfaces;                                      // 0x0058   (0x0004)  
	EAtomPlatform                                      AtomPlatform;                                               // 0x005C   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x005D   (0x0003)  MISSED
	int32_t                                            AtomMainGroupId;                                            // 0x0060   (0x0004)  
	int32_t                                            AtomSubMainGroupId;                                         // 0x0064   (0x0004)  
	SDK_UNDEFINED(80,11587) /* TMap<EAtomCommonPartType, FAtomPrimitiveCommonPart> */ __um(PrimitiveCommonParts);  // 0x0068   (0x0050)  
	SDK_UNDEFINED(80,11588) /* TMap<FName, FAtomPrimitiveCommonPart> */ __um(CommonParts);                         // 0x00B8   (0x0050)  
	bool                                               bOverrideConnectionFields;                                  // 0x0108   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0109   (0x0007)  MISSED
	FBoxSphereBounds                                   Bounds;                                                     // 0x0110   (0x0038)  
	FBoxSphereBounds                                   UnscaledBounds;                                             // 0x0148   (0x0038)  
	TArray<class UAtomPrimitiveGeometryContainer*>     GeometryContainers;                                         // 0x0180   (0x0010)  
	FConnectionFieldContainer                          ConnectionFields;                                           // 0x0190   (0x0030)  
	FConnectionFieldContainer                          ConnectionFieldsOverride;                                   // 0x01C0   (0x0030)  


	/// Functions
	// Function /Script/AtomRuntime.AtomPrimitive.IsFlexElement
	// bool IsFlexElement();                                                                                                 // [0xb8c2bc8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AtomRuntime.AtomPrimitive.GetSubMainGroupName
	// FName GetSubMainGroupName(int32_t SubMainGroupId);                                                                    // [0xb8c1d64] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AtomRuntime.AtomPrimitive.GetMainGroupName
	// FName GetMainGroupName(int32_t MainGroupId);                                                                          // [0xb8c1344] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AtomRuntime.AtomPrimitive.GetGeometryContainerForExportStyle
	// class UAtomPrimitiveGeometryContainer* GetGeometryContainerForExportStyle(FString ExportStyleName, FString FallbackExportStyleName); // [0xb8c0c5c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/AtomRuntime.AtomColorInfo
/// Size: 0x0020 (0x000008 - 0x000028)
struct FAtomColorInfo : FTableRowBase
{ 
	FColor                                             Color;                                                      // 0x0008   (0x0004)  
	EAtomMaterialType                                  MaterialType;                                               // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	SDK_UNDEFINED(16,11589) /* FString */              __um(Name);                                                 // 0x0010   (0x0010)  
	bool                                               bIsActive;                                                  // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/AtomRuntime.AtomMergedMeshLODDistanceSettings
/// Size: 0x0020 (0x000000 - 0x000020)
struct FAtomMergedMeshLODDistanceSettings
{ 
	bool                                               bOverrideLODScreenSizes;                                    // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              BaseLODScreenSize;                                          // 0x0004   (0x0004)  
	float                                              BaseLODScreenSizeScaling;                                   // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<float>                                      LODDistances;                                               // 0x0010   (0x0010)  
};

/// Struct /Script/AtomRuntime.AtomModelPartGuid
/// Size: 0x0014 (0x000000 - 0x000014)
struct FAtomModelPartGuid
{ 
	FGuid                                              Guid;                                                       // 0x0000   (0x0010)  
	int32_t                                            PartIndex;                                                  // 0x0010   (0x0004)  
};

/// Struct /Script/AtomRuntime.AtomModelPartColorInfo
/// Size: 0x000C (0x000000 - 0x00000C)
struct FAtomModelPartColorInfo
{ 
	FColor                                             Color;                                                      // 0x0000   (0x0004)  
	int32_t                                            ColorId;                                                    // 0x0004   (0x0004)  
	EAtomMaterialType                                  MaterialType;                                               // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/AtomRuntime.AtomModelPartDecorationInfo
/// Size: 0x0028 (0x000000 - 0x000028)
struct FAtomModelPartDecorationInfo
{ 
	class UMaterialInterface*                          Material;                                                   // 0x0000   (0x0008)  
	class UTexture*                                    Texture;                                                    // 0x0008   (0x0008)  
	SDK_UNDEFINED(16,11590) /* FString */              __um(PrimitiveSurfaceName);                                 // 0x0010   (0x0010)  
	int32_t                                            PrimitiveSurfaceIndex;                                      // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/AtomRuntime.AtomCommonPartAndTransform
/// Size: 0x0070 (0x000000 - 0x000070)
struct FAtomCommonPartAndTransform
{ 
	EAtomCommonPartType                                Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0xF];                                       // 0x0001   (0x000F)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0060)  
};

/// Struct /Script/AtomRuntime.AtomModelPartInstanceInfo
/// Size: 0x0080 (0x000000 - 0x000080)
struct FAtomModelPartInstanceInfo
{ 
	FAtomModelPartGuid                                 PartGuid;                                                   // 0x0000   (0x0014)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	int32_t                                            PartId;                                                     // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	class UAtomPrimitive*                              Primitive;                                                  // 0x0020   (0x0008)  
	TArray<FTransform>                                 Transforms;                                                 // 0x0028   (0x0010)  
	TArray<FAtomModelPartDecorationInfo>               Decorations;                                                // 0x0038   (0x0010)  
	TArray<FAtomModelPartColorInfo>                    Colors;                                                     // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,11591) /* TArray<FString> */      __um(SelectionSets);                                        // 0x0058   (0x0010)  
	TArray<FAtomCommonPartAndTransform>                CommonParts;                                                // 0x0068   (0x0010)  
	bool                                               bIsUndersideVisible;                                        // 0x0078   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0079   (0x0007)  MISSED
};

/// Struct /Script/AtomRuntime.AtomModelPartsCollection
/// Size: 0x0080 (0x000000 - 0x000080)
struct FAtomModelPartsCollection
{ 
	SDK_UNDEFINED(16,11592) /* FString */              __um(Name);                                                 // 0x0000   (0x0010)  
	FTransform                                         Pivot;                                                      // 0x0010   (0x0060)  
	TArray<FAtomModelPartInstanceInfo>                 Parts;                                                      // 0x0070   (0x0010)  
};

/// Struct /Script/AtomRuntime.AtomPrimitiveCollisionVolumeBox
/// Size: 0x0048 (0x000000 - 0x000048)
struct FAtomPrimitiveCollisionVolumeBox
{ 
	FVector                                            Location;                                                   // 0x0000   (0x0018)  
	FRotator                                           Rotation;                                                   // 0x0018   (0x0018)  
	FVector                                            HalfExtent;                                                 // 0x0030   (0x0018)  
};

/// Struct /Script/AtomRuntime.AtomPrimitiveCollisionVolumeCapsule
/// Size: 0x0038 (0x000000 - 0x000038)
struct FAtomPrimitiveCollisionVolumeCapsule
{ 
	FVector                                            Location;                                                   // 0x0000   (0x0018)  
	FRotator                                           Rotation;                                                   // 0x0018   (0x0018)  
	float                                              Radius;                                                     // 0x0030   (0x0004)  
	float                                              HalfLength;                                                 // 0x0034   (0x0004)  
};

/// Struct /Script/AtomRuntime.AtomPrimitiveCollisionVolumeCylinder
/// Size: 0x0038 (0x000000 - 0x000038)
struct FAtomPrimitiveCollisionVolumeCylinder
{ 
	FVector                                            Location;                                                   // 0x0000   (0x0018)  
	FRotator                                           Rotation;                                                   // 0x0018   (0x0018)  
	float                                              Radius;                                                     // 0x0030   (0x0004)  
	float                                              HalfLength;                                                 // 0x0034   (0x0004)  
};

/// Struct /Script/AtomRuntime.AtomPrimitiveCollisionVolumeTube
/// Size: 0x0040 (0x000000 - 0x000040)
struct FAtomPrimitiveCollisionVolumeTube
{ 
	FVector                                            Location;                                                   // 0x0000   (0x0018)  
	FRotator                                           Rotation;                                                   // 0x0018   (0x0018)  
	float                                              InnerRadius;                                                // 0x0030   (0x0004)  
	float                                              OuterRadius;                                                // 0x0034   (0x0004)  
	float                                              HalfLength;                                                 // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/AtomRuntime.AtomPrimitiveCollisionVolumeSphere
/// Size: 0x0020 (0x000000 - 0x000020)
struct FAtomPrimitiveCollisionVolumeSphere
{ 
	FVector                                            Location;                                                   // 0x0000   (0x0018)  
	float                                              Radius;                                                     // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/AtomRuntime.AtomPrimitiveCollisionVolumeContainer
/// Size: 0x0050 (0x000000 - 0x000050)
struct FAtomPrimitiveCollisionVolumeContainer
{ 
	TArray<FAtomPrimitiveCollisionVolumeBox>           Boxes;                                                      // 0x0000   (0x0010)  
	TArray<FAtomPrimitiveCollisionVolumeSphere>        Spheres;                                                    // 0x0010   (0x0010)  
	TArray<FAtomPrimitiveCollisionVolumeCapsule>       Capsules;                                                   // 0x0020   (0x0010)  
	TArray<FAtomPrimitiveCollisionVolumeCylinder>      Cylinders;                                                  // 0x0030   (0x0010)  
	TArray<FAtomPrimitiveCollisionVolumeTube>          Tubes;                                                      // 0x0040   (0x0010)  
};

/// Struct /Script/AtomRuntime.AtomPrimitiveCollisionGeometry
/// Size: 0x0078 (0x000000 - 0x000078)
struct FAtomPrimitiveCollisionGeometry
{ 
	FKAggregateGeom                                    AggGeom;                                                    // 0x0000   (0x0078)  
};

/// Struct /Script/AtomRuntime.AtomPrimitiveGeometryLODs
/// Size: 0x0090 (0x000000 - 0x000090)
struct FAtomPrimitiveGeometryLODs
{ 
	TArray<class UAtomPrimitiveGeometry*>              GeometryLODs;                                               // 0x0000   (0x0010)  
	class UAtomPrimitiveGeometry*                      HiResNaniteGeomery;                                         // 0x0010   (0x0008)  
	FAtomPrimitiveCollisionGeometry                    Collision;                                                  // 0x0018   (0x0078)  
};

/// Struct /Script/AtomRuntime.AtomPrimitiveGeometryAndTransform
/// Size: 0x0040 (0x000000 - 0x000040)
struct FAtomPrimitiveGeometryAndTransform
{ 
	class UAtomPrimitiveGeometry*                      AtomPrimitiveGeometry;                                      // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform3f                                       Transform;                                                  // 0x0010   (0x0030)  
};

/// Struct /Script/AtomRuntime.ConnectionFieldLine
/// Size: 0x0010 (0x000040 - 0x000050)
struct FConnectionFieldLine : FConnectionField
{ 
	double                                             Length;                                                     // 0x0040   (0x0008)  
	bool                                               StartCapped;                                                // 0x0048   (0x0001)  
	bool                                               EndCapped;                                                  // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x004A   (0x0006)  MISSED
};

/// Struct /Script/AtomRuntime.ConnectionFieldAxle
/// Size: 0x0010 (0x000050 - 0x000060)
struct FConnectionFieldAxle : FConnectionFieldLine
{ 
	bool                                               Grabbing;                                                   // 0x0050   (0x0001)  
	bool                                               RequireGrabbing;                                            // 0x0051   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0052   (0x0002)  MISSED
	float                                              DiscreteSnapInterval;                                       // 0x0054   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0058   (0x0008)  MISSED
};

/// Struct /Script/AtomRuntime.ConnectionFieldPoint
/// Size: 0x0000 (0x000040 - 0x000040)
struct FConnectionFieldPoint : FConnectionField
{ 
};

/// Struct /Script/AtomRuntime.ConnectionFieldBall
/// Size: 0x0000 (0x000040 - 0x000040)
struct FConnectionFieldBall : FConnectionFieldPoint
{ 
};

/// Struct /Script/AtomRuntime.ConnectionFieldFixed
/// Size: 0x0010 (0x000040 - 0x000050)
struct FConnectionFieldFixed : FConnectionFieldPoint
{ 
	uint32_t                                           Axes;                                                       // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0044   (0x000C)  MISSED
};

/// Struct /Script/AtomRuntime.ConnectionFieldGear
/// Size: 0x0010 (0x000050 - 0x000060)
struct FConnectionFieldGear : FConnectionFieldLine
{ 
	double                                             Radius;                                                     // 0x0050   (0x0008)  
	uint32_t                                           ToothCount;                                                 // 0x0058   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x005C   (0x0004)  MISSED
};

/// Struct /Script/AtomRuntime.ConnectionFieldHinge
/// Size: 0x0030 (0x000040 - 0x000070)
struct FConnectionFieldHinge : FConnectionFieldPoint
{ 
	bool                                               Oriented;                                                   // 0x0040   (0x0001)  
	bool                                               Flip;                                                       // 0x0041   (0x0001)  
	bool                                               HasLimits;                                                  // 0x0042   (0x0001)  
	bool                                               RequireGrabbing;                                            // 0x0043   (0x0001)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	double                                             OrientedMin;                                                // 0x0048   (0x0008)  
	double                                             OrientedMax;                                                // 0x0050   (0x0008)  
	double                                             FlippedMin;                                                 // 0x0058   (0x0008)  
	double                                             FlippedMax;                                                 // 0x0060   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0068   (0x0008)  MISSED
};

/// Struct /Script/AtomRuntime.ConnectionFieldSlider
/// Size: 0x0020 (0x000050 - 0x000070)
struct FConnectionFieldSlider : FConnectionFieldLine
{ 
	bool                                               Cylindrical;                                                // 0x0050   (0x0001)  
	bool                                               HasSpring;                                                  // 0x0051   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0052   (0x0006)  MISSED
	double                                             SpringRest;                                                 // 0x0058   (0x0008)  
	double                                             SpringStrength;                                             // 0x0060   (0x0008)  
	double                                             SpringDamping;                                              // 0x0068   (0x0008)  
};

/// Struct /Script/AtomRuntime.PlanarFieldPointInfo
/// Size: 0x0020 (0x000000 - 0x000020)
struct FPlanarFieldPointInfo
{ 
	FVector                                            PointLocation;                                              // 0x0000   (0x0018)  
	EConnectionPointType                               PointType;                                                  // 0x0018   (0x0001)  
	bool                                               IsAvailable;                                                // 0x0019   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x001A   (0x0006)  MISSED
};

/// Struct /Script/AtomRuntime.PlanarFieldInfo
/// Size: 0x0090 (0x000000 - 0x000090)
struct FPlanarFieldInfo
{ 
	FTransform                                         Transform;                                                  // 0x0000   (0x0060)  
	FVector2D                                          Size;                                                       // 0x0060   (0x0010)  
	EConnectionFieldGender                             PlanarFieldType;                                            // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0071   (0x0007)  MISSED
	TArray<FPlanarFieldPointInfo>                      PointInfo;                                                  // 0x0078   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0088   (0x0008)  MISSED
};

/// Struct /Script/AtomRuntime.WorldConnectivityHandle
/// Size: 0x0004 (0x000000 - 0x000004)
struct FWorldConnectivityHandle
{ 
	unsigned char                                      UnknownData00_1[0x4];                                       // 0x0000   (0x0004)  MISSED
};

/// Struct /Script/AtomRuntime.ConnectivityQueryResult
/// Size: 0x00C0 (0x000000 - 0x0000C0)
struct FConnectivityQueryResult
{ 
	bool                                               bHasValidConnection;                                        // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0xF];                                       // 0x0001   (0x000F)  MISSED
	FTransform                                         TargetTransformToConnect;                                   // 0x0010   (0x0060)  
	FVector                                            HitLocation;                                                // 0x0070   (0x0018)  
	FVector                                            OffsetToBestFit;                                            // 0x0088   (0x0018)  
	int32_t                                            SourceFieldIndex;                                           // 0x00A0   (0x0004)  
	int32_t                                            SourceFieldObjectId;                                        // 0x00A4   (0x0004)  
	int32_t                                            SourceFieldConnectionPointIndex;                            // 0x00A8   (0x0004)  
	int32_t                                            TargetFieldIndex;                                           // 0x00AC   (0x0004)  
	int32_t                                            TargetFieldObjectId;                                        // 0x00B0   (0x0004)  
	int32_t                                            TargetFieldConnectionPointIndex;                            // 0x00B4   (0x0004)  
	FName                                              ErrorMessage;                                               // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00BC   (0x0004)  MISSED
};

/// Struct /Script/AtomRuntime.AtomColor
/// Size: 0x0018 (0x000000 - 0x000018)
struct FAtomColor
{ 
	int32_t                                            ID;                                                         // 0x0000   (0x0004)  
	EColorEffects                                      Effects;                                                    // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x0008   (0x0010)  
};

/// Struct /Script/AtomRuntime.AtomModelPrimitiveInstance
/// Size: 0x0090 (0x000000 - 0x000090)
struct FAtomModelPrimitiveInstance
{ 
	class UAtomPrimitive*                              Primitive;                                                  // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         PrimitiveTransform;                                         // 0x0010   (0x0060)  
	FVector                                            PivotOrigin;                                                // 0x0070   (0x0018)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0088   (0x0008)  MISSED
};

/// Struct /Script/AtomRuntime.AtomModelPartReference
/// Size: 0x0014 (0x000000 - 0x000014)
struct FAtomModelPartReference
{ 
	FGuid                                              PrimitiveUUID;                                              // 0x0000   (0x0010)  
	int32_t                                            PartIndex;                                                  // 0x0010   (0x0004)  
};

/// Struct /Script/AtomRuntime.AtomPrimitiveGroup
/// Size: 0x0018 (0x000000 - 0x000018)
struct FAtomPrimitiveGroup
{ 
	FVector                                            PivotOrigin;                                                // 0x0000   (0x0018)  
};

/// Struct /Script/AtomRuntime.AtomSelectionSetPrimitiveGroup
/// Size: 0x0008 (0x000018 - 0x000020)
struct FAtomSelectionSetPrimitiveGroup : FAtomPrimitiveGroup
{ 
	FName                                              SelectionSetName;                                           // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/AtomRuntime.AtomModelPrimitiveGroup
/// Size: 0x0000 (0x000018 - 0x000018)
struct FAtomModelPrimitiveGroup : FAtomPrimitiveGroup
{ 
};

/// Struct /Script/AtomRuntime.AtomRigidElementIndices
/// Size: 0x000C (0x000000 - 0x00000C)
struct FAtomRigidElementIndices
{ 
	int32_t                                            HingedElementIndex;                                         // 0x0000   (0x0004)  
	int32_t                                            RigidElementIndex;                                          // 0x0004   (0x0004)  
	int32_t                                            BoneIndex;                                                  // 0x0008   (0x0004)  
};

/// Struct /Script/AtomRuntime.AtomResolvedModelPartReference
/// Size: 0x0018 (0x000000 - 0x000018)
struct FAtomResolvedModelPartReference
{ 
	FAtomBoneReference                                 Indices;                                                    // 0x0000   (0x000C)  
	FAtomRigidElementIndices                           ElementIndices;                                             // 0x000C   (0x000C)  
};

/// Struct /Script/AtomRuntime.AtomRigidElementSettings
/// Size: 0x001C (0x000000 - 0x00001C)
struct FAtomRigidElementSettings
{ 
	FAtomModelPartReference                            ElementIdentifyingPart;                                     // 0x0000   (0x0014)  
	FName                                              RigidElementName;                                           // 0x0014   (0x0004)  
	bool                                               MergeWithParentElement;                                     // 0x0018   (0x0001)  
	bool                                               ShouldBeRootElement;                                        // 0x0019   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x001A   (0x0002)  MISSED
};

/// Struct /Script/AtomRuntime.AtomModelIssue
/// Size: 0x0018 (0x000000 - 0x000018)
struct FAtomModelIssue
{ 
	EAtomIssue                                         Issue;                                                      // 0x0000   (0x0004)  
	int32_t                                            ID;                                                         // 0x0004   (0x0004)  
	SDK_UNDEFINED(16,11593) /* FString */              __um(StringData);                                           // 0x0008   (0x0010)  
};

/// Struct /Script/AtomRuntime.ModelPrimitiveEntry
/// Size: 0x0038 (0x000000 - 0x000038)
struct FModelPrimitiveEntry
{ 
	SDK_UNDEFINED(32,11594) /* TWeakObjectPtr<UMeshComponent*> */ __um(Component);                                 // 0x0000   (0x0020)  
	FAtomModelPartReference                            PartReference;                                              // 0x0020   (0x0014)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/AtomRuntime.AtomProcessorResult
/// Size: 0x0028 (0x000000 - 0x000028)
struct FAtomProcessorResult
{ 
	bool                                               bSuccess;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	TArray<class UObject*>                             ProcessedObjects;                                           // 0x0008   (0x0010)  
	TArray<class UObject*>                             SharedAssets;                                               // 0x0018   (0x0010)  
};

/// Struct /Script/AtomRuntime.AtomOnProcessPrimitiveSettings
/// Size: 0x0001 (0x000000 - 0x000001)
struct FAtomOnProcessPrimitiveSettings
{ 
	bool                                               bSupportDecorations;                                        // 0x0000   (0x0001)  
};

/// Struct /Script/AtomRuntime.AtomModelProcessorInstance
/// Size: 0x0028 (0x000000 - 0x000028)
struct FAtomModelProcessorInstance
{ 
	bool                                               bUseCustomSettings;                                         // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	class UAtomModelProcessor*                         Processor;                                                  // 0x0008   (0x0008)  
	class UAtomModelProcessor*                         InternalTransientPropStorage;                               // 0x0010   (0x0008)  
	SDK_UNDEFINED(16,11595) /* TArray<TWeakObjectPtr<UObject*>> */ __um(ProcessedObjects);                         // 0x0018   (0x0010)  
};

/// Struct /Script/AtomRuntime.AtomPrimitiveConnectionPointReference
/// Size: 0x0004 (0x000000 - 0x000004)
struct FAtomPrimitiveConnectionPointReference
{ 
	int16_t                                            PlanarFieldIndex;                                           // 0x0000   (0x0002)  
	int16_t                                            ConnectionPointIndex;                                       // 0x0002   (0x0002)  
};

/// Struct /Script/AtomRuntime.AtomCommonPartDescription
/// Size: 0x0010 (0x000000 - 0x000010)
struct FAtomCommonPartDescription
{ 
	float                                              Radius;                                                     // 0x0000   (0x0004)  
	float                                              Height;                                                     // 0x0004   (0x0004)  
	float                                              InnerRadius;                                                // 0x0008   (0x0004)  
	char                                               PlaneQuadrant;                                              // 0x000C   (0x0001)  
	bool                                               bShowLogo;                                                  // 0x000D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000E   (0x0002)  MISSED
};

/// Struct /Script/AtomRuntime.AtomCommonPartInstance
/// Size: 0x0040 (0x000000 - 0x000040)
struct FAtomCommonPartInstance
{ 
	FTransform3f                                       Transform;                                                  // 0x0000   (0x0030)  
	FAtomPrimitiveConnectionPointReference             ConnectionPointReference;                                   // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0034   (0x000C)  MISSED
};

/// Struct /Script/AtomRuntime.AtomPrimitiveCommonPart
/// Size: 0x0010 (0x000000 - 0x000010)
struct FAtomPrimitiveCommonPart
{ 
	TArray<FAtomCommonPartInstance>                    UnscaledInstances;                                          // 0x0000   (0x0010)  
};

/// Struct /Script/AtomRuntime.AtomPrimitivePhysicsAttributes
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FAtomPrimitivePhysicsAttributes
{ 
	FMatrix                                            InertiaTensor;                                              // 0x0000   (0x0080)  
	FVector                                            CenterOfMass;                                               // 0x0080   (0x0018)  
	float                                              Mass;                                                       // 0x0098   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x009C   (0x0004)  MISSED
};

/// Struct /Script/AtomRuntime.AtomPrimitiveUserNote
/// Size: 0x0020 (0x000000 - 0x000020)
struct FAtomPrimitiveUserNote
{ 
	SDK_UNDEFINED(16,11596) /* FString */              __um(Text);                                                 // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,11597) /* FString */              __um(PartRevision);                                         // 0x0010   (0x0010)  
};

/// Struct /Script/AtomRuntime.AtomPrimitiveOptimizationSettings
/// Size: 0x0030 (0x000000 - 0x000030)
struct FAtomPrimitiveOptimizationSettings
{ 
	EAtomPrimitiveGeoOptimization                      OptimizationType;                                           // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	EAtomPrimitiveGeoOptimization_Old                  GeometryOptions;                                            // 0x0004   (0x0004)  
	EAtomPrimitiveApproximationShapeType               ApproximationShapeType;                                     // 0x0008   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	EAtomPrimitiveApproximationShapeType_Old           ApproximationStrategy;                                      // 0x000C   (0x0004)  
	bool                                               bUseOptimizationAxisOverride;                               // 0x0010   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0011   (0x0007)  MISSED
	FVector                                            ApproximationAxisOverride;                                  // 0x0018   (0x0018)  
};

/// Struct /Script/AtomRuntime.AtomPrimitiveBevelOptions
/// Size: 0x0001 (0x000000 - 0x000001)
struct FAtomPrimitiveBevelOptions
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/AtomRuntime.AtomPrimitiveBuildOptions
/// Size: 0x0001 (0x000000 - 0x000001)
struct FAtomPrimitiveBuildOptions
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/AtomRuntime.AtomPrimitiveBuildSettings
/// Size: 0x0001 (0x000000 - 0x000001)
struct FAtomPrimitiveBuildSettings
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/AtomRuntime.ConnectivityFieldConnection
/// Size: 0x000C (0x000000 - 0x00000C)
struct FConnectivityFieldConnection
{ 
	FConnectivityFieldReference                        Reference;                                                  // 0x0000   (0x0008)  
	EFieldConnectResult                                ConnectResult;                                              // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/AtomRuntime.LineFieldConnectionInfo
/// Size: 0x000C (0x000000 - 0x00000C)
struct FLineFieldConnectionInfo
{ 
	bool                                               Flip;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	EFieldConnectResult                                ConnectResult;                                              // 0x0008   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/AtomRuntime.PointFieldConnectionInfo
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPointFieldConnectionInfo
{ 
	double                                             OneAxisRotation;                                            // 0x0000   (0x0008)  
	EFieldConnectResult                                ConnectResult;                                              // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/AtomRuntime.HingeFieldConnectionInfo
/// Size: 0x0008 (0x000010 - 0x000018)
struct FHingeFieldConnectionInfo : FPointFieldConnectionInfo
{ 
	bool                                               Flip;                                                       // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

