
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

/// Enum /Script/PCG.EPCGAttributeAccessorFlags
/// Size: 0x05
enum class EPCGAttributeAccessorFlags : uint8_t
{
	EPCGAttributeAccessorFlags__StrictType                                           = 1,
	EPCGAttributeAccessorFlags__AllowBroadcast                                       = 2,
	EPCGAttributeAccessorFlags__AllowConstructible                                   = 4,
	EPCGAttributeAccessorFlags__AllowSetDefaultValue                                 = 8,
	EPCGAttributeAccessorFlags__EPCGAttributeAccessorFlags_MAX                       = 9
};

/// Enum /Script/PCG.EPCGAttributeFilterOperator
/// Size: 0x10
enum class EPCGAttributeFilterOperator : uint8_t
{
	EPCGAttributeFilterOperator__Greater                                             = 0,
	EPCGAttributeFilterOperator__GreaterOrEqual                                      = 1,
	EPCGAttributeFilterOperator__Lesser                                              = 2,
	EPCGAttributeFilterOperator__LesserOrEqual                                       = 3,
	EPCGAttributeFilterOperator__Equal                                               = 4,
	EPCGAttributeFilterOperator__NotEqual                                            = 5,
	EPCGAttributeFilterOperator__InRange                                             = 6,
	EPCGAttributeFilterOperator__Substring                                           = 7,
	EPCGAttributeFilterOperator__Matches                                             = 8,
	EPCGAttributeFilterOperator__EPCGAttributeFilterOperator_MAX                     = 9
};

/// Enum /Script/PCG.EPCGAttributeFilterOperation
/// Size: 0x03
enum class EPCGAttributeFilterOperation : uint32_t
{
	EPCGAttributeFilterOperation__KeepSelectedAttributes                             = 0,
	EPCGAttributeFilterOperation__DeleteSelectedAttributes                           = 1,
	EPCGAttributeFilterOperation__EPCGAttributeFilterOperation_MAX                   = 2
};

/// Enum /Script/PCG.EPCGAttributePropertySelection
/// Size: 0x04
enum class EPCGAttributePropertySelection : uint32_t
{
	EPCGAttributePropertySelection__Attribute                                        = 0,
	EPCGAttributePropertySelection__PointProperty                                    = 1,
	EPCGAttributePropertySelection__ExtraProperty                                    = 2,
	EPCGAttributePropertySelection__EPCGAttributePropertySelection_MAX               = 3
};

/// Enum /Script/PCG.EPCGExtraProperties
/// Size: 0x02
enum class EPCGExtraProperties : uint8_t
{
	EPCGExtraProperties__Index                                                       = 0,
	EPCGExtraProperties__EPCGExtraProperties_MAX                                     = 1
};

/// Enum /Script/PCG.EPCGChangeType
/// Size: 0x09
enum class EPCGChangeType : uint8_t
{
	EPCGChangeType__None                                                             = 0,
	EPCGChangeType__Cosmetic                                                         = 1,
	EPCGChangeType__Settings                                                         = 2,
	EPCGChangeType__Input                                                            = 4,
	EPCGChangeType__Edge                                                             = 8,
	EPCGChangeType__Node                                                             = 16,
	EPCGChangeType__Structural                                                       = 32,
	EPCGChangeType__Debug                                                            = 64,
	EPCGChangeType__EPCGChangeType_MAX                                               = 65
};

/// Enum /Script/PCG.EPCGDataType
/// Size: 0x20
enum class EPCGDataType : uint32_t
{
	EPCGDataType__None                                                               = 0,
	EPCGDataType__Point                                                              = 2,
	EPCGDataType__Spline                                                             = 4,
	EPCGDataType__LandscapeSpline                                                    = 8,
	EPCGDataType__PolyLine                                                           = 12,
	EPCGDataType__Landscape                                                          = 16,
	EPCGDataType__Texture                                                            = 32,
	EPCGDataType__RenderTarget                                                       = 64,
	EPCGDataType__BaseTexture                                                        = 96,
	EPCGDataType__Surface                                                            = 112,
	EPCGDataType__Volume                                                             = 128,
	EPCGDataType__Primitive                                                          = 256,
	EPCGDataType__Concrete                                                           = 510,
	EPCGDataType__Composite                                                          = 512,
	EPCGDataType__Spatial                                                            = 1022,
	EPCGDataType__Param                                                              = 134217728,
	EPCGDataType__Settings                                                           = 268435456,
	EPCGDataType__Other                                                              = 536870912,
	EPCGDataType__Any                                                                = 1073741823,
	EPCGDataType__EPCGDataType_MAX                                                   = 1073741824
};

/// Enum /Script/PCG.EPCGExclusiveDataType
/// Size: 0x20
enum class EPCGExclusiveDataType : uint8_t
{
	EPCGExclusiveDataType__None                                                      = 0,
	EPCGExclusiveDataType__Point                                                     = 1,
	EPCGExclusiveDataType__Spline                                                    = 2,
	EPCGExclusiveDataType__LandscapeSpline                                           = 3,
	EPCGExclusiveDataType__PolyLine                                                  = 4,
	EPCGExclusiveDataType__Landscape                                                 = 5,
	EPCGExclusiveDataType__Texture                                                   = 6,
	EPCGExclusiveDataType__RenderTarget                                              = 7,
	EPCGExclusiveDataType__BaseTexture                                               = 8,
	EPCGExclusiveDataType__Surface                                                   = 9,
	EPCGExclusiveDataType__Volume                                                    = 10,
	EPCGExclusiveDataType__Primitive                                                 = 11,
	EPCGExclusiveDataType__Concrete                                                  = 12,
	EPCGExclusiveDataType__Composite                                                 = 13,
	EPCGExclusiveDataType__Spatial                                                   = 14,
	EPCGExclusiveDataType__Param                                                     = 15,
	EPCGExclusiveDataType__Settings                                                  = 16,
	EPCGExclusiveDataType__Other                                                     = 17,
	EPCGExclusiveDataType__Any                                                       = 18,
	EPCGExclusiveDataType__EPCGExclusiveDataType_MAX                                 = 19
};

/// Enum /Script/PCG.EPCGHiGenGrid
/// Size: 0x15
enum class EPCGHiGenGrid : uint32_t
{
	EPCGHiGenGrid__Uninitialized                                                     = 0,
	EPCGHiGenGrid__Grid4                                                             = 4,
	EPCGHiGenGrid__Grid8                                                             = 8,
	EPCGHiGenGrid__Grid16                                                            = 16,
	EPCGHiGenGrid__Grid32                                                            = 32,
	EPCGHiGenGrid__Grid64                                                            = 64,
	EPCGHiGenGrid__Grid128                                                           = 128,
	EPCGHiGenGrid__Grid256                                                           = 256,
	EPCGHiGenGrid__Grid512                                                           = 512,
	EPCGHiGenGrid__Grid1024                                                          = 1024,
	EPCGHiGenGrid__Grid2048                                                          = 2048,
	EPCGHiGenGrid__GridMin                                                           = 4,
	EPCGHiGenGrid__GridMax                                                           = 2048,
	EPCGHiGenGrid__Unbounded                                                         = 4096,
	EPCGHiGenGrid__EPCGHiGenGrid_MAX                                                 = 4097
};

/// Enum /Script/PCG.EPCGAttachOptions
/// Size: 0x04
enum class EPCGAttachOptions : uint32_t
{
	EPCGAttachOptions__NotAttached                                                   = 0,
	EPCGAttachOptions__Attached                                                      = 1,
	EPCGAttachOptions__InFolder                                                      = 2,
	EPCGAttachOptions__EPCGAttachOptions_MAX                                         = 3
};

/// Enum /Script/PCG.EPCGEditorDirtyMode
/// Size: 0x04
enum class EPCGEditorDirtyMode : uint8_t
{
	EPCGEditorDirtyMode__Normal                                                      = 0,
	EPCGEditorDirtyMode__Preview                                                     = 1,
	EPCGEditorDirtyMode__LoadAsPreview                                               = 2,
	EPCGEditorDirtyMode__EPCGEditorDirtyMode_MAX                                     = 3
};

/// Enum /Script/PCG.EPCGLocalGridPivot
/// Size: 0x04
enum class EPCGLocalGridPivot : uint8_t
{
	EPCGLocalGridPivot__Global                                                       = 0,
	EPCGLocalGridPivot__OriginalComponent                                            = 1,
	EPCGLocalGridPivot__LocalComponent                                               = 2,
	EPCGLocalGridPivot__EPCGLocalGridPivot_MAX                                       = 3
};

/// Enum /Script/PCG.EPCGPointPosition
/// Size: 0x03
enum class EPCGPointPosition : uint8_t
{
	EPCGPointPosition__CellCenter                                                    = 0,
	EPCGPointPosition__CellCorners                                                   = 1,
	EPCGPointPosition__EPCGPointPosition_MAX                                         = 2
};

/// Enum /Script/PCG.EPCGGridPivot
/// Size: 0x04
enum class EPCGGridPivot : uint8_t
{
	EPCGGridPivot__Global                                                            = 0,
	EPCGGridPivot__OriginalComponent                                                 = 1,
	EPCGGridPivot__LocalComponent                                                    = 2,
	EPCGGridPivot__EPCGGridPivot_MAX                                                 = 3
};

/// Enum /Script/PCG.PCGDistanceShape
/// Size: 0x04
enum class PCGDistanceShape : uint32_t
{
	PCGDistanceShape__SphereBounds                                                   = 0,
	PCGDistanceShape__BoxBounds                                                      = 1,
	PCGDistanceShape__Center                                                         = 2,
	PCGDistanceShape__PCGDistanceShape_MAX                                           = 3
};

/// Enum /Script/PCG.EPCGMetadataTypes
/// Size: 0x18
enum class EPCGMetadataTypes : uint8_t
{
	EPCGMetadataTypes__Float                                                         = 0,
	EPCGMetadataTypes__Double                                                        = 1,
	EPCGMetadataTypes__Integer32                                                     = 2,
	EPCGMetadataTypes__Integer64                                                     = 3,
	EPCGMetadataTypes__Vector2                                                       = 4,
	EPCGMetadataTypes__Vector                                                        = 5,
	EPCGMetadataTypes__Vector4                                                       = 6,
	EPCGMetadataTypes__Quaternion                                                    = 7,
	EPCGMetadataTypes__Transform                                                     = 8,
	EPCGMetadataTypes__String                                                        = 9,
	EPCGMetadataTypes__Boolean                                                       = 10,
	EPCGMetadataTypes__Rotator                                                       = 11,
	EPCGMetadataTypes__Name                                                          = 12,
	EPCGMetadataTypes__SoftObjectPath                                                = 13,
	EPCGMetadataTypes__SoftClassPath                                                 = 14,
	EPCGMetadataTypes__Count                                                         = 15,
	EPCGMetadataTypes__Unknown                                                       = 255,
	EPCGMetadataTypes__EPCGMetadataTypes_MAX                                         = 256
};

/// Enum /Script/PCG.EPCGMetadataOp
/// Size: 0x08
enum class EPCGMetadataOp : uint8_t
{
	EPCGMetadataOp__Min                                                              = 0,
	EPCGMetadataOp__Max                                                              = 1,
	EPCGMetadataOp__Sub                                                              = 2,
	EPCGMetadataOp__Add                                                              = 3,
	EPCGMetadataOp__Mul                                                              = 4,
	EPCGMetadataOp__Div                                                              = 5,
	EPCGMetadataOp__SourceValue                                                      = 6,
	EPCGMetadataOp__TargetValue                                                      = 7
};

/// Enum /Script/PCG.EPCGMetadataFilterMode
/// Size: 0x03
enum class EPCGMetadataFilterMode : uint8_t
{
	EPCGMetadataFilterMode__ExcludeAttributes                                        = 0,
	EPCGMetadataFilterMode__IncludeAttributes                                        = 1,
	EPCGMetadataFilterMode__EPCGMetadataFilterMode_MAX                               = 2
};

/// Enum /Script/PCG.EPCGMetadataMakeRotatorOp
/// Size: 0x12
enum class EPCGMetadataMakeRotatorOp : uint8_t
{
	EPCGMetadataMakeRotatorOp__MakeRotFromX                                          = 0,
	EPCGMetadataMakeRotatorOp__MakeRotFromY                                          = 1,
	EPCGMetadataMakeRotatorOp__MakeRotFromZ                                          = 2,
	EPCGMetadataMakeRotatorOp__MakeRotFromXY                                         = 3,
	EPCGMetadataMakeRotatorOp__MakeRotFromYX                                         = 4,
	EPCGMetadataMakeRotatorOp__MakeRotFromXZ                                         = 5,
	EPCGMetadataMakeRotatorOp__MakeRotFromZX                                         = 6,
	EPCGMetadataMakeRotatorOp__MakeRotFromYZ                                         = 7,
	EPCGMetadataMakeRotatorOp__MakeRotFromZY                                         = 8,
	EPCGMetadataMakeRotatorOp__MakeRotFromAxes                                       = 9,
	EPCGMetadataMakeRotatorOp__MakeRotFromAngles                                     = 10,
	EPCGMetadataMakeRotatorOp__EPCGMetadataMakeRotatorOp_MAX                         = 11
};

/// Enum /Script/PCG.EPCGMetadataTypesConstantStructStringMode
/// Size: 0x04
enum class EPCGMetadataTypesConstantStructStringMode : uint32_t
{
	EPCGMetadataTypesConstantStructStringMode__String                                = 0,
	EPCGMetadataTypesConstantStructStringMode__SoftObjectPath                        = 1,
	EPCGMetadataTypesConstantStructStringMode__SoftClassPath                         = 2,
	EPCGMetadataTypesConstantStructStringMode__EPCGMetadataTypesConstantStructStringMode_MAX = 3
};

/// Enum /Script/PCG.PCGNormalToDensityMode
/// Size: 0x08
enum class PCGNormalToDensityMode : uint8_t
{
	PCGNormalToDensityMode__Set                                                      = 0,
	PCGNormalToDensityMode__Minimum                                                  = 1,
	PCGNormalToDensityMode__Maximum                                                  = 2,
	PCGNormalToDensityMode__Add                                                      = 3,
	PCGNormalToDensityMode__Subtract                                                 = 4,
	PCGNormalToDensityMode__Multiply                                                 = 5,
	PCGNormalToDensityMode__Divide                                                   = 6,
	PCGNormalToDensityMode__PCGNormalToDensityMode_MAX                               = 7
};

/// Enum /Script/PCG.EPCGProjectionColorBlendMode
/// Size: 0x06
enum class EPCGProjectionColorBlendMode : uint8_t
{
	EPCGProjectionColorBlendMode__SourceValue                                        = 0,
	EPCGProjectionColorBlendMode__TargetValue                                        = 1,
	EPCGProjectionColorBlendMode__Add                                                = 2,
	EPCGProjectionColorBlendMode__Subtract                                           = 3,
	EPCGProjectionColorBlendMode__Multiply                                           = 4,
	EPCGProjectionColorBlendMode__EPCGProjectionColorBlendMode_MAX                   = 5
};

/// Enum /Script/PCG.EPCGSortMethod
/// Size: 0x03
enum class EPCGSortMethod : uint8_t
{
	EPCGSortMethod__Ascending                                                        = 0,
	EPCGSortMethod__Descending                                                       = 1,
	EPCGSortMethod__EPCGSortMethod_MAX                                               = 2
};

/// Enum /Script/PCG.EPCGDifferenceDensityFunction
/// Size: 0x04
enum class EPCGDifferenceDensityFunction : uint8_t
{
	EPCGDifferenceDensityFunction__Minimum                                           = 0,
	EPCGDifferenceDensityFunction__ClampedSubstraction                               = 1,
	EPCGDifferenceDensityFunction__Binary                                            = 2,
	EPCGDifferenceDensityFunction__EPCGDifferenceDensityFunction_MAX                 = 3
};

/// Enum /Script/PCG.EPCGDifferenceMode
/// Size: 0x04
enum class EPCGDifferenceMode : uint8_t
{
	EPCGDifferenceMode__Inferred                                                     = 0,
	EPCGDifferenceMode__Continuous                                                   = 1,
	EPCGDifferenceMode__Discrete                                                     = 2,
	EPCGDifferenceMode__EPCGDifferenceMode_MAX                                       = 3
};

/// Enum /Script/PCG.EPCGIntersectionDensityFunction
/// Size: 0x03
enum class EPCGIntersectionDensityFunction : uint8_t
{
	EPCGIntersectionDensityFunction__Multiply                                        = 0,
	EPCGIntersectionDensityFunction__Minimum                                         = 1,
	EPCGIntersectionDensityFunction__EPCGIntersectionDensityFunction_MAX             = 2
};

/// Enum /Script/PCG.EPCGTextureColorChannel
/// Size: 0x05
enum class EPCGTextureColorChannel : uint8_t
{
	EPCGTextureColorChannel__Red                                                     = 0,
	EPCGTextureColorChannel__Green                                                   = 1,
	EPCGTextureColorChannel__Blue                                                    = 2,
	EPCGTextureColorChannel__Alpha                                                   = 3,
	EPCGTextureColorChannel__EPCGTextureColorChannel_MAX                             = 4
};

/// Enum /Script/PCG.EPCGTextureDensityFunction
/// Size: 0x03
enum class EPCGTextureDensityFunction : uint8_t
{
	EPCGTextureDensityFunction__Ignore                                               = 0,
	EPCGTextureDensityFunction__Multiply                                             = 1,
	EPCGTextureDensityFunction__EPCGTextureDensityFunction_MAX                       = 2
};

/// Enum /Script/PCG.EPCGUnionType
/// Size: 0x04
enum class EPCGUnionType : uint8_t
{
	EPCGUnionType__LeftToRightPriority                                               = 0,
	EPCGUnionType__RightToLeftPriority                                               = 1,
	EPCGUnionType__KeepAll                                                           = 2,
	EPCGUnionType__EPCGUnionType_MAX                                                 = 3
};

/// Enum /Script/PCG.EPCGUnionDensityFunction
/// Size: 0x04
enum class EPCGUnionDensityFunction : uint8_t
{
	EPCGUnionDensityFunction__Maximum                                                = 0,
	EPCGUnionDensityFunction__ClampedAddition                                        = 1,
	EPCGUnionDensityFunction__Binary                                                 = 2,
	EPCGUnionDensityFunction__EPCGUnionDensityFunction_MAX                           = 3
};

/// Enum /Script/PCG.EPCGWorldQueryFilterByTag
/// Size: 0x04
enum class EPCGWorldQueryFilterByTag : uint32_t
{
	EPCGWorldQueryFilterByTag__NoTagFilter                                           = 0,
	EPCGWorldQueryFilterByTag__IncludeTagged                                         = 1,
	EPCGWorldQueryFilterByTag__ExcludeTagged                                         = 2,
	EPCGWorldQueryFilterByTag__EPCGWorldQueryFilterByTag_MAX                         = 3
};

/// Enum /Script/PCG.EPCGMedadataBitwiseOperation
/// Size: 0x05
enum class EPCGMedadataBitwiseOperation : uint16_t
{
	EPCGMedadataBitwiseOperation__And                                                = 0,
	EPCGMedadataBitwiseOperation__Not                                                = 1,
	EPCGMedadataBitwiseOperation__Or                                                 = 2,
	EPCGMedadataBitwiseOperation__Xor                                                = 3,
	EPCGMedadataBitwiseOperation__EPCGMedadataBitwiseOperation_MAX                   = 4
};

/// Enum /Script/PCG.EPCGMedadataBooleanOperation
/// Size: 0x05
enum class EPCGMedadataBooleanOperation : uint16_t
{
	EPCGMedadataBooleanOperation__And                                                = 0,
	EPCGMedadataBooleanOperation__Not                                                = 1,
	EPCGMedadataBooleanOperation__Or                                                 = 2,
	EPCGMedadataBooleanOperation__Xor                                                = 3,
	EPCGMedadataBooleanOperation__EPCGMedadataBooleanOperation_MAX                   = 4
};

/// Enum /Script/PCG.EPCGMedadataCompareOperation
/// Size: 0x07
enum class EPCGMedadataCompareOperation : uint16_t
{
	EPCGMedadataCompareOperation__Equal                                              = 0,
	EPCGMedadataCompareOperation__NotEqual                                           = 1,
	EPCGMedadataCompareOperation__Greater                                            = 2,
	EPCGMedadataCompareOperation__GreaterOrEqual                                     = 3,
	EPCGMedadataCompareOperation__Less                                               = 4,
	EPCGMedadataCompareOperation__LessOrEqual                                        = 5,
	EPCGMedadataCompareOperation__EPCGMedadataCompareOperation_MAX                   = 6
};

/// Enum /Script/PCG.EPCGMetadataOperationTarget
/// Size: 0x04
enum class EPCGMetadataOperationTarget : uint8_t
{
	EPCGMetadataOperationTarget__PropertyToAttribute                                 = 0,
	EPCGMetadataOperationTarget__AttributeToProperty                                 = 1,
	EPCGMetadataOperationTarget__AttributeToAttribute                                = 2,
	EPCGMetadataOperationTarget__EPCGMetadataOperationTarget_MAX                     = 3
};

/// Enum /Script/PCG.EPCGMetadataMakeVector3
/// Size: 0x03
enum class EPCGMetadataMakeVector3 : uint8_t
{
	EPCGMetadataMakeVector3__ThreeValues                                             = 0,
	EPCGMetadataMakeVector3__Vector2AndValue                                         = 1,
	EPCGMetadataMakeVector3__EPCGMetadataMakeVector3_MAX                             = 2
};

/// Enum /Script/PCG.EPCGMetadataMakeVector4
/// Size: 0x05
enum class EPCGMetadataMakeVector4 : uint8_t
{
	EPCGMetadataMakeVector4__FourValues                                              = 0,
	EPCGMetadataMakeVector4__Vector2AndTwoValues                                     = 1,
	EPCGMetadataMakeVector4__TwoVector2                                              = 2,
	EPCGMetadataMakeVector4__Vector3AndValue                                         = 3,
	EPCGMetadataMakeVector4__EPCGMetadataMakeVector4_MAX                             = 4
};

/// Enum /Script/PCG.EPCGMedadataMathsOperation
/// Size: 0x25
enum class EPCGMedadataMathsOperation : uint16_t
{
	EPCGMedadataMathsOperation__UnaryOp                                              = 1024,
	EPCGMedadataMathsOperation__Sign                                                 = 1025,
	EPCGMedadataMathsOperation__Frac                                                 = 1026,
	EPCGMedadataMathsOperation__Truncate                                             = 1027,
	EPCGMedadataMathsOperation__Round                                                = 1028,
	EPCGMedadataMathsOperation__Sqrt                                                 = 1029,
	EPCGMedadataMathsOperation__Abs                                                  = 1030,
	EPCGMedadataMathsOperation__Floor                                                = 1031,
	EPCGMedadataMathsOperation__Ceil                                                 = 1032,
	EPCGMedadataMathsOperation__OneMinus                                             = 1033,
	EPCGMedadataMathsOperation__BinaryOp                                             = 2048,
	EPCGMedadataMathsOperation__Add                                                  = 2049,
	EPCGMedadataMathsOperation__Subtract                                             = 2050,
	EPCGMedadataMathsOperation__Multiply                                             = 2051,
	EPCGMedadataMathsOperation__Divide                                               = 2052,
	EPCGMedadataMathsOperation__Max                                                  = 2053,
	EPCGMedadataMathsOperation__Min                                                  = 2054,
	EPCGMedadataMathsOperation__Pow                                                  = 2055,
	EPCGMedadataMathsOperation__ClampMin                                             = 2056,
	EPCGMedadataMathsOperation__ClampMax                                             = 2057,
	EPCGMedadataMathsOperation__Modulo                                               = 2058,
	EPCGMedadataMathsOperation__Set                                                  = 2059,
	EPCGMedadataMathsOperation__TernaryOp                                            = 4096,
	EPCGMedadataMathsOperation__Clamp                                                = 4097,
	EPCGMedadataMathsOperation__Lerp                                                 = 4098
};

/// Enum /Script/PCG.EPCGMetadataSettingsBaseMode
/// Size: 0x04
enum class EPCGMetadataSettingsBaseMode : uint8_t
{
	EPCGMetadataSettingsBaseMode__Inferred                                           = 0,
	EPCGMetadataSettingsBaseMode__NoBroadcast                                        = 1,
	EPCGMetadataSettingsBaseMode__Broadcast                                          = 2,
	EPCGMetadataSettingsBaseMode__EPCGMetadataSettingsBaseMode_MAX                   = 3
};

/// Enum /Script/PCG.EPCGMetadataSettingsBaseTypes
/// Size: 0x03
enum class EPCGMetadataSettingsBaseTypes : uint8_t
{
	EPCGMetadataSettingsBaseTypes__AutoUpcastTypes                                   = 0,
	EPCGMetadataSettingsBaseTypes__StrictTypes                                       = 1,
	EPCGMetadataSettingsBaseTypes__EPCGMetadataSettingsBaseTypes_MAX                 = 2
};

/// Enum /Script/PCG.EPCGMedadataRotatorOperation
/// Size: 0x09
enum class EPCGMedadataRotatorOperation : uint16_t
{
	EPCGMedadataRotatorOperation__RotatorOp                                          = 0,
	EPCGMedadataRotatorOperation__Combine                                            = 1,
	EPCGMedadataRotatorOperation__Invert                                             = 2,
	EPCGMedadataRotatorOperation__Lerp                                               = 3,
	EPCGMedadataRotatorOperation__Normalize                                          = 4,
	EPCGMedadataRotatorOperation__TransformOp                                        = 100,
	EPCGMedadataRotatorOperation__TransformRotation                                  = 101,
	EPCGMedadataRotatorOperation__InverseTransformRotation                           = 102,
	EPCGMedadataRotatorOperation__EPCGMedadataRotatorOperation_MAX                   = 103
};

/// Enum /Script/PCG.EPCGMetadataStringOperation
/// Size: 0x02
enum class EPCGMetadataStringOperation : uint16_t
{
	EPCGMetadataStringOperation__Append                                              = 0,
	EPCGMetadataStringOperation__EPCGMetadataStringOperation_MAX                     = 1
};

/// Enum /Script/PCG.EPCGMedadataTransformOperation
/// Size: 0x04
enum class EPCGMedadataTransformOperation : uint16_t
{
	EPCGMedadataTransformOperation__Compose                                          = 0,
	EPCGMedadataTransformOperation__Invert                                           = 1,
	EPCGMedadataTransformOperation__Lerp                                             = 2,
	EPCGMedadataTransformOperation__EPCGMedadataTransformOperation_MAX               = 3
};

/// Enum /Script/PCG.EPCGTransformLerpMode
/// Size: 0x04
enum class EPCGTransformLerpMode : uint16_t
{
	EPCGTransformLerpMode__QuatInterp                                                = 0,
	EPCGTransformLerpMode__EulerInterp                                               = 1,
	EPCGTransformLerpMode__DualQuatInterp                                            = 2,
	EPCGTransformLerpMode__EPCGTransformLerpMode_MAX                                 = 3
};

/// Enum /Script/PCG.EPCGMedadataTrigOperation
/// Size: 0x10
enum class EPCGMedadataTrigOperation : uint16_t
{
	EPCGMedadataTrigOperation__Acos                                                  = 0,
	EPCGMedadataTrigOperation__Asin                                                  = 1,
	EPCGMedadataTrigOperation__Atan                                                  = 2,
	EPCGMedadataTrigOperation__Atan2                                                 = 3,
	EPCGMedadataTrigOperation__Cos                                                   = 4,
	EPCGMedadataTrigOperation__Sin                                                   = 5,
	EPCGMedadataTrigOperation__Tan                                                   = 6,
	EPCGMedadataTrigOperation__DegToRad                                              = 7,
	EPCGMedadataTrigOperation__RadToDeg                                              = 8,
	EPCGMedadataTrigOperation__EPCGMedadataTrigOperation_MAX                         = 9
};

/// Enum /Script/PCG.EPCGMedadataVectorOperation
/// Size: 0x13
enum class EPCGMedadataVectorOperation : uint16_t
{
	EPCGMedadataVectorOperation__VectorOp                                            = 0,
	EPCGMedadataVectorOperation__Cross                                               = 1,
	EPCGMedadataVectorOperation__Dot                                                 = 2,
	EPCGMedadataVectorOperation__Distance                                            = 3,
	EPCGMedadataVectorOperation__Normalize                                           = 4,
	EPCGMedadataVectorOperation__Length                                              = 5,
	EPCGMedadataVectorOperation__RotateAroundAxis                                    = 6,
	EPCGMedadataVectorOperation__TransformOp                                         = 100,
	EPCGMedadataVectorOperation__TransformDirection                                  = 101,
	EPCGMedadataVectorOperation__TransformLocation                                   = 102,
	EPCGMedadataVectorOperation__InverseTransformDirection                           = 103,
	EPCGMedadataVectorOperation__InverseTransformLocation                            = 104,
	EPCGMedadataVectorOperation__EPCGMedadataVectorOperation_MAX                     = 105
};

/// Enum /Script/PCG.EPCGActorSelection
/// Size: 0x05
enum class EPCGActorSelection : uint8_t
{
	EPCGActorSelection__ByTag                                                        = 0,
	EPCGActorSelection__ByName                                                       = 1,
	EPCGActorSelection__ByClass                                                      = 2,
	EPCGActorSelection__Unknown                                                      = 3,
	EPCGActorSelection__EPCGActorSelection_MAX                                       = 4
};

/// Enum /Script/PCG.EPCGActorFilter
/// Size: 0x06
enum class EPCGActorFilter : uint8_t
{
	EPCGActorFilter__Self                                                            = 0,
	EPCGActorFilter__Parent                                                          = 1,
	EPCGActorFilter__Root                                                            = 2,
	EPCGActorFilter__AllWorldActors                                                  = 3,
	EPCGActorFilter__Original                                                        = 4,
	EPCGActorFilter__EPCGActorFilter_MAX                                             = 5
};

/// Enum /Script/PCG.EPCGAttributeNoiseMode
/// Size: 0x06
enum class EPCGAttributeNoiseMode : uint8_t
{
	EPCGAttributeNoiseMode__Set                                                      = 0,
	EPCGAttributeNoiseMode__Minimum                                                  = 1,
	EPCGAttributeNoiseMode__Maximum                                                  = 2,
	EPCGAttributeNoiseMode__Add                                                      = 3,
	EPCGAttributeNoiseMode__Multiply                                                 = 4,
	EPCGAttributeNoiseMode__EPCGAttributeNoiseMode_MAX                               = 5
};

/// Enum /Script/PCG.EPCGAttributeReduceOperation
/// Size: 0x03
enum class EPCGAttributeReduceOperation : uint32_t
{
	EPCGAttributeReduceOperation__Average                                            = 0,
	EPCGAttributeReduceOperation__Max                                                = 1,
	EPCGAttributeReduceOperation__Min                                                = 2
};

/// Enum /Script/PCG.EPCGAttributeSelectOperation
/// Size: 0x03
enum class EPCGAttributeSelectOperation : uint32_t
{
	EPCGAttributeSelectOperation__Min                                                = 0,
	EPCGAttributeSelectOperation__Max                                                = 1,
	EPCGAttributeSelectOperation__Median                                             = 2
};

/// Enum /Script/PCG.EPCGAttributeSelectAxis
/// Size: 0x06
enum class EPCGAttributeSelectAxis : uint32_t
{
	EPCGAttributeSelectAxis__X                                                       = 0,
	EPCGAttributeSelectAxis__Y                                                       = 1,
	EPCGAttributeSelectAxis__Z                                                       = 2,
	EPCGAttributeSelectAxis__W                                                       = 3,
	EPCGAttributeSelectAxis__CustomAxis                                              = 4,
	EPCGAttributeSelectAxis__EPCGAttributeSelectAxis_MAX                             = 5
};

/// Enum /Script/PCG.EPCGBoundsModifierMode
/// Size: 0x06
enum class EPCGBoundsModifierMode : uint8_t
{
	EPCGBoundsModifierMode__Set                                                      = 0,
	EPCGBoundsModifierMode__Intersect                                                = 1,
	EPCGBoundsModifierMode__Include                                                  = 2,
	EPCGBoundsModifierMode__Translate                                                = 3,
	EPCGBoundsModifierMode__Scale                                                    = 4,
	EPCGBoundsModifierMode__EPCGBoundsModifierMode_MAX                               = 5
};

/// Enum /Script/PCG.EPCGCopyPointsInheritanceMode
/// Size: 0x04
enum class EPCGCopyPointsInheritanceMode : uint8_t
{
	EPCGCopyPointsInheritanceMode__Relative                                          = 0,
	EPCGCopyPointsInheritanceMode__Source                                            = 1,
	EPCGCopyPointsInheritanceMode__Target                                            = 2,
	EPCGCopyPointsInheritanceMode__EPCGCopyPointsInheritanceMode_MAX                 = 3
};

/// Enum /Script/PCG.EPCGCopyPointsMetadataInheritanceMode
/// Size: 0x06
enum class EPCGCopyPointsMetadataInheritanceMode : uint8_t
{
	EPCGCopyPointsMetadataInheritanceMode__SourceFirst                               = 0,
	EPCGCopyPointsMetadataInheritanceMode__TargetFirst                               = 1,
	EPCGCopyPointsMetadataInheritanceMode__SourceOnly                                = 2,
	EPCGCopyPointsMetadataInheritanceMode__TargetOnly                                = 3,
	EPCGCopyPointsMetadataInheritanceMode__None                                      = 4,
	EPCGCopyPointsMetadataInheritanceMode__EPCGCopyPointsMetadataInheritanceMode_MAX = 5
};

/// Enum /Script/PCG.EPCGCreateSplineMode
/// Size: 0x04
enum class EPCGCreateSplineMode : uint8_t
{
	EPCGCreateSplineMode__CreateDataOnly                                             = 0,
	EPCGCreateSplineMode__CreateComponent                                            = 1,
	EPCGCreateSplineMode__CreateNewActor                                             = 2,
	EPCGCreateSplineMode__EPCGCreateSplineMode_MAX                                   = 3
};

/// Enum /Script/PCG.EPCGGetDataFromActorMode
/// Size: 0x06
enum class EPCGGetDataFromActorMode : uint8_t
{
	EPCGGetDataFromActorMode__ParseActorComponents                                   = 0,
	EPCGGetDataFromActorMode__GetSinglePoint                                         = 1,
	EPCGGetDataFromActorMode__GetDataFromProperty                                    = 2,
	EPCGGetDataFromActorMode__GetDataFromPCGComponent                                = 3,
	EPCGGetDataFromActorMode__GetDataFromPCGComponentOrParseComponents               = 4,
	EPCGGetDataFromActorMode__EPCGGetDataFromActorMode_MAX                           = 5
};

/// Enum /Script/PCG.EPCGFilterByTagOperation
/// Size: 0x03
enum class EPCGFilterByTagOperation : uint32_t
{
	EPCGFilterByTagOperation__KeepTagged                                             = 0,
	EPCGFilterByTagOperation__RemoveTagged                                           = 1,
	EPCGFilterByTagOperation__EPCGFilterByTagOperation_MAX                           = 2
};

/// Enum /Script/PCG.EPCGProxyInterfaceMode
/// Size: 0x04
enum class EPCGProxyInterfaceMode : uint8_t
{
	EPCGProxyInterfaceMode__ByNativeElement                                          = 0,
	EPCGProxyInterfaceMode__ByBlueprintElement                                       = 1,
	EPCGProxyInterfaceMode__BySettings                                               = 2,
	EPCGProxyInterfaceMode__EPCGProxyInterfaceMode_MAX                               = 3
};

/// Enum /Script/PCG.EPCGPointExtentsModifierMode
/// Size: 0x06
enum class EPCGPointExtentsModifierMode : uint8_t
{
	EPCGPointExtentsModifierMode__Set                                                = 0,
	EPCGPointExtentsModifierMode__Minimum                                            = 1,
	EPCGPointExtentsModifierMode__Maximum                                            = 2,
	EPCGPointExtentsModifierMode__Add                                                = 3,
	EPCGPointExtentsModifierMode__Multiply                                           = 4,
	EPCGPointExtentsModifierMode__EPCGPointExtentsModifierMode_MAX                   = 5
};

/// Enum /Script/PCG.EPCGSelfPruningType
/// Size: 0x06
enum class EPCGSelfPruningType : uint8_t
{
	EPCGSelfPruningType__LargeToSmall                                                = 0,
	EPCGSelfPruningType__SmallToLarge                                                = 1,
	EPCGSelfPruningType__AllEqual                                                    = 2,
	EPCGSelfPruningType__None                                                        = 3,
	EPCGSelfPruningType__RemoveDuplicates                                            = 4,
	EPCGSelfPruningType__EPCGSelfPruningType_MAX                                     = 5
};

/// Enum /Script/PCG.PCGSpatialNoiseMode
/// Size: 0x06
enum class PCGSpatialNoiseMode : uint32_t
{
	PCGSpatialNoiseMode__Perlin2D                                                    = 0,
	PCGSpatialNoiseMode__Caustic2D                                                   = 1,
	PCGSpatialNoiseMode__Voronoi2D                                                   = 2,
	PCGSpatialNoiseMode__FractionalBrownian2D                                        = 3,
	PCGSpatialNoiseMode__EdgeMask2D                                                  = 4,
	PCGSpatialNoiseMode__PCGSpatialNoiseMode_MAX                                     = 5
};

/// Enum /Script/PCG.PCGSpatialNoiseMask2DMode
/// Size: 0x04
enum class PCGSpatialNoiseMask2DMode : uint32_t
{
	PCGSpatialNoiseMask2DMode__Perlin                                                = 0,
	PCGSpatialNoiseMask2DMode__Caustic                                               = 1,
	PCGSpatialNoiseMask2DMode__FractionalBrownian                                    = 2,
	PCGSpatialNoiseMask2DMode__PCGSpatialNoiseMask2DMode_MAX                         = 3
};

/// Enum /Script/PCG.EPCGSpawnActorOption
/// Size: 0x04
enum class EPCGSpawnActorOption : uint8_t
{
	EPCGSpawnActorOption__CollapseActors                                             = 0,
	EPCGSpawnActorOption__MergePCGOnly                                               = 1,
	EPCGSpawnActorOption__NoMerging                                                  = 2,
	EPCGSpawnActorOption__EPCGSpawnActorOption_MAX                                   = 3
};

/// Enum /Script/PCG.EPCGSpawnActorGenerationTrigger
/// Size: 0x05
enum class EPCGSpawnActorGenerationTrigger : uint8_t
{
	EPCGSpawnActorGenerationTrigger__Default                                         = 0,
	EPCGSpawnActorGenerationTrigger__ForceGenerate                                   = 1,
	EPCGSpawnActorGenerationTrigger__DoNotGenerateInEditor                           = 2,
	EPCGSpawnActorGenerationTrigger__DoNotGenerate                                   = 3,
	EPCGSpawnActorGenerationTrigger__EPCGSpawnActorGenerationTrigger_MAX             = 4
};

/// Enum /Script/PCG.EPCGSplineSamplingMode
/// Size: 0x03
enum class EPCGSplineSamplingMode : uint8_t
{
	EPCGSplineSamplingMode__Subdivision                                              = 0,
	EPCGSplineSamplingMode__Distance                                                 = 1,
	EPCGSplineSamplingMode__EPCGSplineSamplingMode_MAX                               = 2
};

/// Enum /Script/PCG.EPCGSplineSamplingDimension
/// Size: 0x06
enum class EPCGSplineSamplingDimension : uint8_t
{
	EPCGSplineSamplingDimension__OnSpline                                            = 0,
	EPCGSplineSamplingDimension__OnHorizontal                                        = 1,
	EPCGSplineSamplingDimension__OnVertical                                          = 2,
	EPCGSplineSamplingDimension__OnVolume                                            = 3,
	EPCGSplineSamplingDimension__OnInterior                                          = 4,
	EPCGSplineSamplingDimension__EPCGSplineSamplingDimension_MAX                     = 5
};

/// Enum /Script/PCG.EPCGSplineSamplingFill
/// Size: 0x03
enum class EPCGSplineSamplingFill : uint8_t
{
	EPCGSplineSamplingFill__Fill                                                     = 0,
	EPCGSplineSamplingFill__EdgesOnly                                                = 1,
	EPCGSplineSamplingFill__EPCGSplineSamplingFill_MAX                               = 2
};

/// Enum /Script/PCG.EPCGSplineSamplingInteriorOrientation
/// Size: 0x03
enum class EPCGSplineSamplingInteriorOrientation : uint8_t
{
	EPCGSplineSamplingInteriorOrientation__Uniform                                   = 0,
	EPCGSplineSamplingInteriorOrientation__FollowCurvature                           = 1,
	EPCGSplineSamplingInteriorOrientation__EPCGSplineSamplingInteriorOrientation_MAX = 2
};

/// Enum /Script/PCG.EPCGLandscapeCacheSerializationMode
/// Size: 0x04
enum class EPCGLandscapeCacheSerializationMode : uint8_t
{
	EPCGLandscapeCacheSerializationMode__SerializeOnlyAtCook                         = 0,
	EPCGLandscapeCacheSerializationMode__NeverSerialize                              = 1,
	EPCGLandscapeCacheSerializationMode__AlwaysSerialize                             = 2,
	EPCGLandscapeCacheSerializationMode__EPCGLandscapeCacheSerializationMode_MAX     = 3
};

/// Enum /Script/PCG.EPCGLandscapeCacheSerializationContents
/// Size: 0x04
enum class EPCGLandscapeCacheSerializationContents : uint8_t
{
	EPCGLandscapeCacheSerializationContents__SerializeOnlyPositionsAndNormals        = 0,
	EPCGLandscapeCacheSerializationContents__SerializeOnlyLayerData                  = 1,
	EPCGLandscapeCacheSerializationContents__SerializeAll                            = 2,
	EPCGLandscapeCacheSerializationContents__EPCGLandscapeCacheSerializationContents_MAX = 3
};

/// Enum /Script/PCG.EPCGMeshSelectorMaterialOverrideMode
/// Size: 0x04
enum class EPCGMeshSelectorMaterialOverrideMode : uint8_t
{
	EPCGMeshSelectorMaterialOverrideMode__NoOverride                                 = 0,
	EPCGMeshSelectorMaterialOverrideMode__StaticOverride                             = 1,
	EPCGMeshSelectorMaterialOverrideMode__ByAttributeOverride                        = 2,
	EPCGMeshSelectorMaterialOverrideMode__EPCGMeshSelectorMaterialOverrideMode_MAX   = 3
};

/// Enum /Script/PCG.EPCGComponentInput
/// Size: 0x04
enum class EPCGComponentInput : uint8_t
{
	EPCGComponentInput__Actor                                                        = 0,
	EPCGComponentInput__Landscape                                                    = 1,
	EPCGComponentInput__Other                                                        = 2,
	EPCGComponentInput__EPCGComponentInput_MAX                                       = 3
};

/// Enum /Script/PCG.EPCGComponentGenerationTrigger
/// Size: 0x04
enum class EPCGComponentGenerationTrigger : uint8_t
{
	EPCGComponentGenerationTrigger__GenerateOnLoad                                   = 0,
	EPCGComponentGenerationTrigger__GenerateOnDemand                                 = 1,
	EPCGComponentGenerationTrigger__GenerateAtRuntime                                = 2,
	EPCGComponentGenerationTrigger__EPCGComponentGenerationTrigger_MAX               = 3
};

/// Enum /Script/PCG.EPCGComponentDirtyFlag
/// Size: 0x07
enum class EPCGComponentDirtyFlag : uint8_t
{
	EPCGComponentDirtyFlag__None                                                     = 0,
	EPCGComponentDirtyFlag__Actor                                                    = 1,
	EPCGComponentDirtyFlag__Landscape                                                = 2,
	EPCGComponentDirtyFlag__Input                                                    = 4,
	EPCGComponentDirtyFlag__Data                                                     = 8,
	EPCGComponentDirtyFlag__All                                                      = 15,
	EPCGComponentDirtyFlag__EPCGComponentDirtyFlag_MAX                               = 16
};

/// Enum /Script/PCG.EPCGExecutionPhase
/// Size: 0x06
enum class EPCGExecutionPhase : uint8_t
{
	EPCGExecutionPhase__NotExecuted                                                  = 0,
	EPCGExecutionPhase__PrepareData                                                  = 1,
	EPCGExecutionPhase__Execute                                                      = 2,
	EPCGExecutionPhase__PostExecute                                                  = 3,
	EPCGExecutionPhase__Done                                                         = 4,
	EPCGExecutionPhase__EPCGExecutionPhase_MAX                                       = 5
};

/// Enum /Script/PCG.EPCGDebugVisScaleMethod
/// Size: 0x04
enum class EPCGDebugVisScaleMethod : uint8_t
{
	EPCGDebugVisScaleMethod__Relative                                                = 0,
	EPCGDebugVisScaleMethod__Absolute                                                = 1,
	EPCGDebugVisScaleMethod__Extents                                                 = 2,
	EPCGDebugVisScaleMethod__EPCGDebugVisScaleMethod_MAX                             = 3
};

/// Enum /Script/PCG.EPCGTypeConversion
/// Size: 0x06
enum class EPCGTypeConversion : uint8_t
{
	EPCGTypeConversion__NoConversionRequired                                         = 0,
	EPCGTypeConversion__CollapseToPoint                                              = 1,
	EPCGTypeConversion__Filter                                                       = 2,
	EPCGTypeConversion__MakeConcrete                                                 = 3,
	EPCGTypeConversion__Failed                                                       = 4,
	EPCGTypeConversion__EPCGTypeConversion_MAX                                       = 5
};

/// Enum /Script/PCG.EPCGPointProperties
/// Size: 0x13
enum class EPCGPointProperties : uint8_t
{
	EPCGPointProperties__Density                                                     = 0,
	EPCGPointProperties__BoundsMin                                                   = 1,
	EPCGPointProperties__BoundsMax                                                   = 2,
	EPCGPointProperties__Extents                                                     = 3,
	EPCGPointProperties__Color                                                       = 4,
	EPCGPointProperties__Position                                                    = 5,
	EPCGPointProperties__Rotation                                                    = 6,
	EPCGPointProperties__Scale                                                       = 7,
	EPCGPointProperties__Transform                                                   = 8,
	EPCGPointProperties__Steepness                                                   = 9,
	EPCGPointProperties__LocalCenter                                                 = 10,
	EPCGPointProperties__Seed                                                        = 11,
	EPCGPointProperties__EPCGPointProperties_MAX                                     = 12
};

/// Enum /Script/PCG.EPCGSettingsExecutionMode
/// Size: 0x05
enum class EPCGSettingsExecutionMode : uint8_t
{
	EPCGSettingsExecutionMode__Enabled                                               = 0,
	EPCGSettingsExecutionMode__Debug                                                 = 1,
	EPCGSettingsExecutionMode__Isolated                                              = 2,
	EPCGSettingsExecutionMode__Disabled                                              = 3,
	EPCGSettingsExecutionMode__EPCGSettingsExecutionMode_MAX                         = 4
};

/// Enum /Script/PCG.EPCGSettingsType
/// Size: 0x15
enum class EPCGSettingsType : uint8_t
{
	EPCGSettingsType__InputOutput                                                    = 0,
	EPCGSettingsType__Spatial                                                        = 1,
	EPCGSettingsType__Density                                                        = 2,
	EPCGSettingsType__Blueprint                                                      = 3,
	EPCGSettingsType__Metadata                                                       = 4,
	EPCGSettingsType__Filter                                                         = 5,
	EPCGSettingsType__Sampler                                                        = 6,
	EPCGSettingsType__Spawner                                                        = 7,
	EPCGSettingsType__Subgraph                                                       = 8,
	EPCGSettingsType__Debug                                                          = 9,
	EPCGSettingsType__Generic                                                        = 10,
	EPCGSettingsType__Param                                                          = 11,
	EPCGSettingsType__HierarchicalGeneration                                         = 12,
	EPCGSettingsType__ControlFlow                                                    = 13,
	EPCGSettingsType__EPCGSettingsType_MAX                                           = 14
};

/// Enum /Script/PCG.EDeterminismLevel
/// Size: 0x08
enum class EDeterminismLevel : uint8_t
{
	EDeterminismLevel__None                                                          = 0,
	EDeterminismLevel__NoDeterminism                                                 = 0,
	EDeterminismLevel__Basic                                                         = 1,
	EDeterminismLevel__OrderOrthogonal                                               = 2,
	EDeterminismLevel__OrderConsistent                                               = 3,
	EDeterminismLevel__OrderIndependent                                              = 4,
	EDeterminismLevel__Deterministic                                                 = 4,
	EDeterminismLevel__EDeterminismLevel_MAX                                         = 5
};

/// Enum /Script/PCG.EPCGUnitTestDummyEnum
/// Size: 0x04
enum class EPCGUnitTestDummyEnum : uint64_t
{
	EPCGUnitTestDummyEnum__One                                                       = 0,
	EPCGUnitTestDummyEnum__Two                                                       = 1,
	EPCGUnitTestDummyEnum__Three                                                     = 2,
	EPCGUnitTestDummyEnum__EPCGUnitTestDummyEnum_MAX                                 = 3
};

/// Class /Script/PCG.PCGData
/// Size: 0x0010 (0x000028 - 0x000038)
class UPCGData : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	uint64_t                                           UID;                                                        // 0x0028   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Class /Script/PCG.PCGSettingsInterface
/// Size: 0x0008 (0x000038 - 0x000040)
class UPCGSettingsInterface : public UPCGData
{ 
public:
	bool                                               bEnabled;                                                   // 0x0038   (0x0001)  
	bool                                               bDebug;                                                     // 0x0039   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x003A   (0x0006)  MISSED
};

/// Struct /Script/PCG.PCGSettingsOverridableParam
/// Size: 0x0088 (0x000000 - 0x000088)
struct FPCGSettingsOverridableParam
{ 
	FName                                              Label;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FName>                                      PropertiesNames;                                            // 0x0008   (0x0010)  
	class UStruct*                                     PropertyClass;                                              // 0x0018   (0x0008)  
	SDK_UNDEFINED(80,14437) /* TMap<int32_t, FPCGPropertyAliases> */ __um(MapOfAliases);                           // 0x0020   (0x0050)  
	bool                                               bHasNameClash;                                              // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_6[0x17];                                      // 0x0071   (0x0017)  MISSED
};

/// Class /Script/PCG.PCGSettings
/// Size: 0x0110 (0x000040 - 0x000150)
class UPCGSettings : public UPCGSettingsInterface
{ 
public:
	int32_t                                            Seed;                                                       // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	SDK_UNDEFINED(80,14438) /* TSet<FString> */        __um(FilterOnTags);                                         // 0x0048   (0x0050)  
	bool                                               bPassThroughFilteredOutInputs;                              // 0x0098   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0099   (0x0007)  MISSED
	SDK_UNDEFINED(80,14439) /* TSet<FString> */        __um(TagsAppliedOnOutput);                                  // 0x00A0   (0x0050)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x00F0   (0x0008)  MISSED
	bool                                               bUseSeed;                                                   // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3F];                                      // 0x00F9   (0x003F)  MISSED
	TArray<FPCGSettingsOverridableParam>               CachedOverridableParams;                                    // 0x0138   (0x0010)  
	unsigned char                                      UnknownData04_6[0x8];                                       // 0x0148   (0x0008)  MISSED
};

/// Class /Script/PCG.PCGAddTagSettings
/// Size: 0x0010 (0x000150 - 0x000160)
class UPCGAddTagSettings : public UPCGSettings
{ 
public:
	SDK_UNDEFINED(16,14440) /* FString */              __um(TagsToAdd);                                            // 0x0150   (0x0010)  
};

/// Class /Script/PCG.PCGAttributeExtractorTestObject
/// Size: 0x0008 (0x000028 - 0x000030)
class UPCGAttributeExtractorTestObject : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	double                                             DoubleValue;                                                // 0x0028   (0x0008)  
};

/// Struct /Script/PCG.PCGAttributePropertySelector
/// Size: 0x0028 (0x000000 - 0x000028)
struct FPCGAttributePropertySelector
{ 
	EPCGAttributePropertySelection                     Selection;                                                  // 0x0008   (0x0004)  
	FName                                              AttributeName;                                              // 0x000C   (0x0004)  
	EPCGPointProperties                                PointProperty;                                              // 0x0010   (0x0001)  
	EPCGExtraProperties                                ExtraProperty;                                              // 0x0011   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0012   (0x0006)  MISSED
	SDK_UNDEFINED(16,14441) /* TArray<FString> */      __um(ExtraNames);                                           // 0x0018   (0x0010)  
};

/// Struct /Script/PCG.PCGAttributePropertyInputSelector
/// Size: 0x0000 (0x000028 - 0x000028)
struct FPCGAttributePropertyInputSelector : FPCGAttributePropertySelector
{ 
};

/// Struct /Script/PCG.PCGMetadataTypesConstantStruct
/// Size: 0x0160 (0x000000 - 0x000160)
struct FPCGMetadataTypesConstantStruct
{ 
	EPCGMetadataTypes                                  Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	EPCGMetadataTypesConstantStructStringMode          StringMode;                                                 // 0x0004   (0x0004)  
	float                                              FloatValue;                                                 // 0x0008   (0x0004)  
	int32_t                                            Int32Value;                                                 // 0x000C   (0x0004)  
	double                                             DoubleValue;                                                // 0x0010   (0x0008)  
	int64_t                                            IntValue;                                                   // 0x0018   (0x0008)  
	FVector2D                                          Vector2Value;                                               // 0x0020   (0x0010)  
	FVector                                            VectorValue;                                                // 0x0030   (0x0018)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0048   (0x0008)  MISSED
	FVector4                                           Vector4Value;                                               // 0x0050   (0x0020)  
	FQuat                                              QuatValue;                                                  // 0x0070   (0x0020)  
	FTransform                                         TransformValue;                                             // 0x0090   (0x0060)  
	SDK_UNDEFINED(16,14442) /* FString */              __um(StringValue);                                          // 0x00F0   (0x0010)  
	bool                                               BoolValue;                                                  // 0x0100   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0101   (0x0007)  MISSED
	FRotator                                           RotatorValue;                                               // 0x0108   (0x0018)  
	FName                                              NameValue;                                                  // 0x0120   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x0124   (0x0004)  MISSED
	FSoftClassPath                                     SoftClassPathValue;                                         // 0x0128   (0x0018)  
	FSoftObjectPath                                    SoftObjectPathValue;                                        // 0x0140   (0x0018)  
	bool                                               bAllowsTypeChange;                                          // 0x0158   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x0159   (0x0007)  MISSED
};

/// Class /Script/PCG.PCGAttributeFilteringSettings
/// Size: 0x01D0 (0x000150 - 0x000320)
class UPCGAttributeFilteringSettings : public UPCGSettings
{ 
public:
	EPCGAttributeFilterOperator                        Operator;                                                   // 0x0150   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0151   (0x0007)  MISSED
	FPCGAttributePropertyInputSelector                 TargetAttribute;                                            // 0x0158   (0x0028)  
	bool                                               bUseConstantThreshold;                                      // 0x0180   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0181   (0x0007)  MISSED
	FPCGAttributePropertyInputSelector                 ThresholdAttribute;                                         // 0x0188   (0x0028)  
	bool                                               bUseSpatialQuery;                                           // 0x01B0   (0x0001)  
	unsigned char                                      UnknownData02_5[0xF];                                       // 0x01B1   (0x000F)  MISSED
	FPCGMetadataTypesConstantStruct                    AttributeTypes;                                             // 0x01C0   (0x0160)  
};

/// Struct /Script/PCG.PCGAttributeFilterThresholdSettings
/// Size: 0x01A0 (0x000000 - 0x0001A0)
struct FPCGAttributeFilterThresholdSettings
{ 
	bool                                               bInclusive;                                                 // 0x0000   (0x0001)  
	bool                                               bUseConstantThreshold;                                      // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0002   (0x0006)  MISSED
	FPCGAttributePropertyInputSelector                 ThresholdAttribute;                                         // 0x0008   (0x0028)  
	bool                                               bUseSpatialQuery;                                           // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_5[0xF];                                       // 0x0031   (0x000F)  MISSED
	FPCGMetadataTypesConstantStruct                    AttributeTypes;                                             // 0x0040   (0x0160)  
};

/// Class /Script/PCG.PCGAttributeFilteringRangeSettings
/// Size: 0x0370 (0x000150 - 0x0004C0)
class UPCGAttributeFilteringRangeSettings : public UPCGSettings
{ 
public:
	FPCGAttributePropertyInputSelector                 TargetAttribute;                                            // 0x0150   (0x0028)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0178   (0x0008)  MISSED
	FPCGAttributeFilterThresholdSettings               MinThreshold;                                               // 0x0180   (0x01A0)  
	FPCGAttributeFilterThresholdSettings               MaxThreshold;                                               // 0x0320   (0x01A0)  
};

/// Class /Script/PCG.PCGAttributeFilterNamesSettings
/// Size: 0x0018 (0x000150 - 0x000168)
class UPCGAttributeFilterNamesSettings : public UPCGSettings
{ 
public:
	EPCGAttributeFilterOperation                       Operation;                                                  // 0x0150   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0154   (0x0004)  MISSED
	SDK_UNDEFINED(16,14443) /* FString */              __um(SelectedAttributes);                                   // 0x0158   (0x0010)  
};

/// Class /Script/PCG.PCGAttributePropertySelectorBlueprintHelpers
/// Size: 0x0000 (0x000028 - 0x000028)
class UPCGAttributePropertySelectorBlueprintHelpers : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PCG.PCGAttributePropertySelectorBlueprintHelpers.SetPointProperty
	// bool SetPointProperty(FPCGAttributePropertySelector& Selector, EPCGPointProperties InPointProperty);                  // [0xb0aef50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGAttributePropertySelectorBlueprintHelpers.SetExtraProperty
	// bool SetExtraProperty(FPCGAttributePropertySelector& Selector, EPCGExtraProperties InExtraProperty);                  // [0xb0aed94] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGAttributePropertySelectorBlueprintHelpers.SetAttributeName
	// bool SetAttributeName(FPCGAttributePropertySelector& Selector, FName InAttributeName);                                // [0xb0aebd8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGAttributePropertySelectorBlueprintHelpers.GetSelection
	// EPCGAttributePropertySelection GetSelection(FPCGAttributePropertySelector& Selector);                                 // [0xb0aeb24] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGAttributePropertySelectorBlueprintHelpers.GetPointProperty
	// EPCGPointProperties GetPointProperty(FPCGAttributePropertySelector& Selector);                                        // [0xb0aea70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGAttributePropertySelectorBlueprintHelpers.GetName
	// FName GetName(FPCGAttributePropertySelector& Selector);                                                               // [0xb0ae9b4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGAttributePropertySelectorBlueprintHelpers.GetExtraProperty
	// EPCGExtraProperties GetExtraProperty(FPCGAttributePropertySelector& Selector);                                        // [0xb0ae900] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGAttributePropertySelectorBlueprintHelpers.GetExtraNames
	// TArray<FString> GetExtraNames(FPCGAttributePropertySelector& Selector);                                               // [0xb0ae844] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGAttributePropertySelectorBlueprintHelpers.GetAttributeName
	// FName GetAttributeName(FPCGAttributePropertySelector& Selector);                                                      // [0xb0ae790] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGAttributePropertySelectorBlueprintHelpers.CopyAndFixSource
	// FPCGAttributePropertyOutputSelector CopyAndFixSource(FPCGAttributePropertyOutputSelector& Selector, FPCGAttributePropertyInputSelector& InSelector); // [0xb0ae630] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGAttributePropertySelectorBlueprintHelpers.CopyAndFixLast
	// FPCGAttributePropertyInputSelector CopyAndFixLast(FPCGAttributePropertyInputSelector& Selector, class UPCGData* InData); // [0xb0ae458] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/PCG.PCGBooleanSelectSettings
/// Size: 0x0008 (0x000150 - 0x000158)
class UPCGBooleanSelectSettings : public UPCGSettings
{ 
public:
	bool                                               bUseInputB;                                                 // 0x0150   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0151   (0x0007)  MISSED
};

/// Class /Script/PCG.PCGBranchSettings
/// Size: 0x0008 (0x000150 - 0x000158)
class UPCGBranchSettings : public UPCGSettings
{ 
public:
	bool                                               bOutputToB;                                                 // 0x0150   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0151   (0x0007)  MISSED
};

/// Class /Script/PCG.PCGSpatialData
/// Size: 0x0048 (0x000038 - 0x000080)
class UPCGSpatialData : public UPCGData
{ 
public:
	SDK_UNDEFINED(8,14444) /* TWeakObjectPtr<AActor*> */ __um(TargetActor);                                        // 0x0038   (0x0008)  
	bool                                               bKeepZeroDensityPoints;                                     // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0041   (0x0007)  MISSED
	class UPCGMetadata*                                MetaData;                                                   // 0x0048   (0x0008)  
	bool                                               bHasCachedLastSelector;                                     // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0051   (0x0007)  MISSED
	FPCGAttributePropertyInputSelector                 CachedLastSelector;                                         // 0x0058   (0x0028)  


	/// Functions
	// Function /Script/PCG.PCGSpatialData.UnionWith
	// class UPCGUnionData* UnionWith(class UPCGSpatialData* InOther);                                                       // [0xb13e810] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGSpatialData.ToPointDataWithContext
	// class UPCGPointData* ToPointDataWithContext(FPCGContext& Context);                                                    // [0xb13e744] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGSpatialData.ToPointData
	// class UPCGPointData* ToPointData();                                                                                   // [0xb13e700] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGSpatialData.Subtract
	// class UPCGDifferenceData* Subtract(class UPCGSpatialData* InOther);                                                   // [0xb13e66c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGSpatialData.SamplePoint
	// bool SamplePoint(FTransform& Transform, FBox& Bounds, FPCGPoint& OutPoint, class UPCGMetadata* OutMetadata);          // [0xb13dc70] Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGSpatialData.ProjectPoint
	// bool ProjectPoint(FTransform& InTransform, FBox& InBounds, FPCGProjectionParams& InParams, FPCGPoint& OutPoint, class UPCGMetadata* OutMetadata); // [0xb13d954] Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGSpatialData.ProjectOn
	// class UPCGSpatialData* ProjectOn(class UPCGSpatialData* InOther, FPCGProjectionParams& InParams);                     // [0xb13d860] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGSpatialData.MutableMetadata
	// class UPCGMetadata* MutableMetadata();                                                                                // [0x2a35604] Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGSpatialData.IntersectWith
	// class UPCGIntersectionData* IntersectWith(class UPCGSpatialData* InOther);                                            // [0xb13d7cc] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGSpatialData.InitializeFromData
	// void InitializeFromData(class UPCGSpatialData* InSource, class UPCGMetadata* InMetadataParentOverride, bool bInheritMetadata, bool bInheritAttributes); // [0xb13d67c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGSpatialData.HasNonTrivialTransform
	// bool HasNonTrivialTransform();                                                                                        // [0x6405614] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGSpatialData.GetStrictBounds
	// FBox GetStrictBounds();                                                                                               // [0xb13d2f8] Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGSpatialData.GetNormal
	// FVector GetNormal();                                                                                                  // [0xb13cac0] Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGSpatialData.GetDimension
	// int32_t GetDimension();                                                                                               // [0x63caf64] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGSpatialData.GetDensityAtPosition
	// float GetDensityAtPosition(FVector& InPosition);                                                                      // [0xb13c9e8] Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGSpatialData.GetBounds
	// FBox GetBounds();                                                                                                     // [0xb13c99c] Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGSpatialData.CreateEmptyMetadata
	// class UPCGMetadata* CreateEmptyMetadata();                                                                            // [0xb13c928] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGSpatialData.ConstMetadata
	// class UPCGMetadata* ConstMetadata();                                                                                  // [0x606416c] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PCG.PCGSpatialDataWithPointCache
/// Size: 0x0050 (0x000080 - 0x0000D0)
class UPCGSpatialDataWithPointCache : public UPCGSpatialData
{ 
public:
	class UPCGPointData*                               CachedPointData;                                            // 0x0080   (0x0008)  
	TArray<FBox>                                       CachedBoundedPointDataBoxes;                                // 0x0088   (0x0010)  
	TArray<class UPCGPointData*>                       CachedBoundedPointData;                                     // 0x0098   (0x0010)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x00A8   (0x0028)  MISSED
};

/// Class /Script/PCG.PCGCollisionShapeData
/// Size: 0x00F0 (0x0000D0 - 0x0001C0)
class UPCGCollisionShapeData : public UPCGSpatialDataWithPointCache
{ 
public:
	FTransform                                         Transform;                                                  // 0x00D0   (0x0060)  
	unsigned char                                      UnknownData00_5[0x18];                                      // 0x0130   (0x0018)  MISSED
	FBox                                               CachedBounds;                                               // 0x0148   (0x0038)  
	FBox                                               CachedStrictBounds;                                         // 0x0180   (0x0038)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x01B8   (0x0008)  MISSED
};

/// Class /Script/PCG.PCGConvexHull2DSettings
/// Size: 0x0000 (0x000150 - 0x000150)
class UPCGConvexHull2DSettings : public UPCGSettings
{ 
public:
};

/// Struct /Script/PCG.PCGPoint
/// Size: 0x00D0 (0x000000 - 0x0000D0)
struct FPCGPoint
{ 
	FTransform                                         Transform;                                                  // 0x0000   (0x0060)  
	float                                              Density;                                                    // 0x0060   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0064   (0x0004)  MISSED
	FVector                                            BoundsMin;                                                  // 0x0068   (0x0018)  
	FVector                                            BoundsMax;                                                  // 0x0080   (0x0018)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0098   (0x0008)  MISSED
	FVector4                                           Color;                                                      // 0x00A0   (0x0020)  
	float                                              Steepness;                                                  // 0x00C0   (0x0004)  
	int32_t                                            Seed;                                                       // 0x00C4   (0x0004)  
	int64_t                                            MetadataEntry;                                              // 0x00C8   (0x0008)  
};

/// Class /Script/PCG.PCGCreatePointsSettings
/// Size: 0x0018 (0x000150 - 0x000168)
class UPCGCreatePointsSettings : public UPCGSettings
{ 
public:
	TArray<FPCGPoint>                                  PointsToCreate;                                             // 0x0150   (0x0010)  
	EPCGLocalGridPivot                                 GridPivot;                                                  // 0x0160   (0x0001)  
	bool                                               bCullPointsOutsideVolume;                                   // 0x0161   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0162   (0x0006)  MISSED
};

/// Class /Script/PCG.PCGCreatePointsGridSettings
/// Size: 0x0038 (0x000150 - 0x000188)
class UPCGCreatePointsGridSettings : public UPCGSettings
{ 
public:
	FVector                                            GridExtents;                                                // 0x0150   (0x0018)  
	FVector                                            CellSize;                                                   // 0x0168   (0x0018)  
	EPCGGridPivot                                      GridPivot;                                                  // 0x0180   (0x0001)  
	bool                                               bSetPointsBounds;                                           // 0x0181   (0x0001)  
	bool                                               bCullPointsOutsideVolume;                                   // 0x0182   (0x0001)  
	EPCGPointPosition                                  PointPosition;                                              // 0x0183   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0184   (0x0004)  MISSED
};

/// Class /Script/PCG.PCGCullPointsOutsideActorBoundsSettings
/// Size: 0x0008 (0x000150 - 0x000158)
class UPCGCullPointsOutsideActorBoundsSettings : public UPCGSettings
{ 
public:
	float                                              BoundsExpansion;                                            // 0x0150   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0154   (0x0004)  MISSED
};

/// Class /Script/PCG.PCGExternalDataSettings
/// Size: 0x0050 (0x000150 - 0x0001A0)
class UPCGExternalDataSettings : public UPCGSettings
{ 
public:
	SDK_UNDEFINED(80,14445) /* TMap<FString, FPCGAttributePropertyInputSelector> */ __um(AttributeMapping);        // 0x0150   (0x0050)  
};

/// Class /Script/PCG.PCGLoadDataTableSettings
/// Size: 0x0028 (0x0001A0 - 0x0001C8)
class UPCGLoadDataTableSettings : public UPCGExternalDataSettings
{ 
public:
	SDK_UNDEFINED(32,14446) /* TWeakObjectPtr<UDataTable*> */ __um(DataTable);                                     // 0x01A0   (0x0020)  
	EPCGExclusiveDataType                              OutputType;                                                 // 0x01C0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x01C1   (0x0007)  MISSED
};

/// Class /Script/PCG.PCGDistanceSettings
/// Size: 0x0018 (0x000150 - 0x000168)
class UPCGDistanceSettings : public UPCGSettings
{ 
public:
	FName                                              AttributeName;                                              // 0x0150   (0x0004)  
	bool                                               bOutputDistanceVector;                                      // 0x0154   (0x0001)  
	bool                                               bSetDensity;                                                // 0x0155   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0156   (0x0002)  MISSED
	double                                             MaximumDistance;                                            // 0x0158   (0x0008)  
	PCGDistanceShape                                   SourceShape;                                                // 0x0160   (0x0004)  
	PCGDistanceShape                                   TargetShape;                                                // 0x0164   (0x0004)  
};

/// Class /Script/PCG.PCGBadOutputsNodeSettings
/// Size: 0x0000 (0x000150 - 0x000150)
class UPCGBadOutputsNodeSettings : public UPCGSettings
{ 
public:
};

/// Class /Script/PCG.PCGEngineSettings
/// Size: 0x0020 (0x000030 - 0x000050)
class UPCGEngineSettings : public UDeveloperSettingsBackedByCVars
{ 
public:
	FVector                                            VolumeScale;                                                // 0x0030   (0x0018)  
	bool                                               bGenerateOnDrop;                                            // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Class /Script/PCG.PCGGatherSettings
/// Size: 0x0000 (0x000150 - 0x000150)
class UPCGGatherSettings : public UPCGSettings
{ 
public:
};

/// Class /Script/PCG.PCGGenSourceBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UPCGGenSourceBase : public UInterface
{ 
public:
};

/// Class /Script/PCG.PCGGetBoundsSettings
/// Size: 0x0000 (0x000150 - 0x000150)
class UPCGGetBoundsSettings : public UPCGSettings
{ 
public:
};

/// Class /Script/PCG.PCGGraphAuthoringTestHelperSettings
/// Size: 0x0008 (0x000150 - 0x000158)
class UPCGGraphAuthoringTestHelperSettings : public UPCGSettings
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0150   (0x0008)  MISSED
};

/// Class /Script/PCG.PCGGraphParametersHelpers
/// Size: 0x0000 (0x000028 - 0x000028)
class UPCGGraphParametersHelpers : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PCG.PCGGraphParametersHelpers.SetVectorParameter
	// void SetVectorParameter(class UPCGGraphInterface* GraphInterface, FName Name, FVector& Value);                        // [0xb0b4684] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.SetVector4Parameter
	// void SetVector4Parameter(class UPCGGraphInterface* GraphInterface, FName Name, FVector4& Value);                      // [0xb0b4518] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.SetVector2DParameter
	// void SetVector2DParameter(class UPCGGraphInterface* GraphInterface, FName Name, FVector2D& Value);                    // [0xb0b43c0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.SetTransformParameter
	// void SetTransformParameter(class UPCGGraphInterface* GraphInterface, FName Name, FTransform& Value);                  // [0xb0b41fc] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.SetStringParameter
	// void SetStringParameter(class UPCGGraphInterface* GraphInterface, FName Name, FString Value);                         // [0xb0b3a88] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.SetSoftObjectPathParameter
	// void SetSoftObjectPathParameter(class UPCGGraphInterface* GraphInterface, FName Name, FSoftObjectPath& Value);        // [0xb0b3930] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.SetSoftObjectParameter
	// void SetSoftObjectParameter(class UPCGGraphInterface* GraphInterface, FName Name, TWeakObjectPtr<UObject*>& Value);   // [0xb0b37d4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.SetSoftClassParameter
	// void SetSoftClassParameter(class UPCGGraphInterface* GraphInterface, FName Name, TWeakObjectPtr<UClass*>& Value);     // [0xb0b37d4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.SetRotatorParameter
	// void SetRotatorParameter(class UPCGGraphInterface* GraphInterface, FName Name, FRotator& Value);                      // [0xb0b367c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.SetQuaternionParameter
	// void SetQuaternionParameter(class UPCGGraphInterface* GraphInterface, FName Name, FQuat& Value);                      // [0xb0b3524] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.SetNameParameter
	// void SetNameParameter(class UPCGGraphInterface* GraphInterface, FName Name, FName Value);                             // [0xb0b33f4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.SetInt64Parameter
	// void SetInt64Parameter(class UPCGGraphInterface* GraphInterface, FName Name, int64_t Value);                          // [0xb0b32c4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.SetInt32Parameter
	// void SetInt32Parameter(class UPCGGraphInterface* GraphInterface, FName Name, int32_t Value);                          // [0xb0b3194] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.SetFloatParameter
	// void SetFloatParameter(class UPCGGraphInterface* GraphInterface, FName Name, float Value);                            // [0xb0b3058] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.SetEnumParameter
	// void SetEnumParameter(class UPCGGraphInterface* GraphInterface, FName Name, char Value, class UEnum* Enum);           // [0xb0b2e80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.SetDoubleParameter
	// void SetDoubleParameter(class UPCGGraphInterface* GraphInterface, FName Name, double Value);                          // [0xb0b2d40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.SetByteParameter
	// void SetByteParameter(class UPCGGraphInterface* GraphInterface, FName Name, char Value);                              // [0xb0b2c10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.SetBoolParameter
	// void SetBoolParameter(class UPCGGraphInterface* GraphInterface, FName Name, bool bValue);                             // [0xb0b2adc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.IsOverridden
	// bool IsOverridden(class UPCGGraphInterface* GraphInterface, FName Name);                                              // [0xb0b2a08] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.GetVectorParameter
	// FVector GetVectorParameter(class UPCGGraphInterface* GraphInterface, FName Name);                                     // [0xb0b2888] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.GetVector4Parameter
	// FVector4 GetVector4Parameter(class UPCGGraphInterface* GraphInterface, FName Name);                                   // [0xb0b26e4] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.GetVector2DParameter
	// FVector2D GetVector2DParameter(class UPCGGraphInterface* GraphInterface, FName Name);                                 // [0xb0b258c] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.GetTransformParameter
	// FTransform GetTransformParameter(class UPCGGraphInterface* GraphInterface, FName Name);                               // [0xb0b2480] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.GetStringParameter
	// FString GetStringParameter(class UPCGGraphInterface* GraphInterface, FName Name);                                     // [0xb0b1d0c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.GetSoftObjectPathParameter
	// FSoftObjectPath GetSoftObjectPathParameter(class UPCGGraphInterface* GraphInterface, FName Name);                     // [0xb0b1ba8] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.GetSoftObjectParameter
	// TWeakObjectPtr<UObject*> GetSoftObjectParameter(class UPCGGraphInterface* GraphInterface, FName Name);                // [0xb0b19f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.GetSoftClassParameter
	// TWeakObjectPtr<UClass*> GetSoftClassParameter(class UPCGGraphInterface* GraphInterface, FName Name);                  // [0xb0b1838] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.GetRotatorParameter
	// FRotator GetRotatorParameter(class UPCGGraphInterface* GraphInterface, FName Name);                                   // [0xb0b16b8] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.GetQuaternionParameter
	// FQuat GetQuaternionParameter(class UPCGGraphInterface* GraphInterface, FName Name);                                   // [0xb0b1540] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.GetNameParameter
	// FName GetNameParameter(class UPCGGraphInterface* GraphInterface, FName Name);                                         // [0xb0b1414] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.GetInt64Parameter
	// int64_t GetInt64Parameter(class UPCGGraphInterface* GraphInterface, FName Name);                                      // [0xb0b1350] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.GetInt32Parameter
	// int32_t GetInt32Parameter(class UPCGGraphInterface* GraphInterface, FName Name);                                      // [0xb0b1290] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.GetFloatParameter
	// float GetFloatParameter(class UPCGGraphInterface* GraphInterface, FName Name);                                        // [0xb0b11cc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.GetEnumParameter
	// char GetEnumParameter(class UPCGGraphInterface* GraphInterface, FName Name);                                          // [0xb0b1004] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.GetDoubleParameter
	// double GetDoubleParameter(class UPCGGraphInterface* GraphInterface, FName Name);                                      // [0xb0b1108] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.GetByteParameter
	// char GetByteParameter(class UPCGGraphInterface* GraphInterface, FName Name);                                          // [0xb0b1004] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.GetBoolParameter
	// bool GetBoolParameter(class UPCGGraphInterface* GraphInterface, FName Name);                                          // [0xb0b0f00] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/PCG.PCGHiGenGridSizeSettings
/// Size: 0x0008 (0x000150 - 0x000158)
class UPCGHiGenGridSizeSettings : public UPCGSettings
{ 
public:
	EPCGHiGenGrid                                      HiGenGridSize;                                              // 0x0150   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0154   (0x0004)  MISSED
};

/// Class /Script/PCG.PCGMakeConcreteSettings
/// Size: 0x0000 (0x000150 - 0x000150)
class UPCGMakeConcreteSettings : public UPCGSettings
{ 
public:
};

/// Class /Script/PCG.PCGMergeAttributesSettings
/// Size: 0x0000 (0x000150 - 0x000150)
class UPCGMergeAttributesSettings : public UPCGSettings
{ 
public:
};

/// Struct /Script/PCG.PCGAttributePropertyOutputSelector
/// Size: 0x0000 (0x000028 - 0x000028)
struct FPCGAttributePropertyOutputSelector : FPCGAttributePropertySelector
{ 
};

/// Class /Script/PCG.PCGMetadataSettingsBase
/// Size: 0x0030 (0x000150 - 0x000180)
class UPCGMetadataSettingsBase : public UPCGSettings
{ 
public:
	FPCGAttributePropertyOutputSelector                OutputTarget;                                               // 0x0150   (0x0028)  
	FName                                              OutputDataFromPin;                                          // 0x0178   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x017C   (0x0004)  MISSED


	/// Functions
	// Function /Script/PCG.PCGMetadataSettingsBase.GetOutputDataFromPinOptions
	// TArray<FName> GetOutputDataFromPinOptions();                                                                          // [0xb13cafc] Final|Native|Protected|Const 
};

/// Class /Script/PCG.PCGMetadataMakeRotatorSettings
/// Size: 0x0080 (0x000180 - 0x000200)
class UPCGMetadataMakeRotatorSettings : public UPCGMetadataSettingsBase
{ 
public:
	FPCGAttributePropertyInputSelector                 InputSource1;                                               // 0x0180   (0x0028)  
	FPCGAttributePropertyInputSelector                 InputSource2;                                               // 0x01A8   (0x0028)  
	FPCGAttributePropertyInputSelector                 InputSource3;                                               // 0x01D0   (0x0028)  
	EPCGMetadataMakeRotatorOp                          Operation;                                                  // 0x01F8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x01F9   (0x0007)  MISSED
};

/// Class /Script/PCG.PCGMutateSeedSettings
/// Size: 0x0000 (0x000150 - 0x000150)
class UPCGMutateSeedSettings : public UPCGSettings
{ 
public:
};

/// Class /Script/PCG.PCGNormalToDensitySettings
/// Size: 0x0030 (0x000150 - 0x000180)
class UPCGNormalToDensitySettings : public UPCGSettings
{ 
public:
	FVector                                            Normal;                                                     // 0x0150   (0x0018)  
	double                                             Offset;                                                     // 0x0168   (0x0008)  
	double                                             Strength;                                                   // 0x0170   (0x0008)  
	PCGNormalToDensityMode                             DensityMode;                                                // 0x0178   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0179   (0x0007)  MISSED
};

/// Class /Script/PCG.PCGNumberOfElementsBaseSettings
/// Size: 0x0008 (0x000150 - 0x000158)
class UPCGNumberOfElementsBaseSettings : public UPCGSettings
{ 
public:
	FName                                              OutputAttributeName;                                        // 0x0150   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0154   (0x0004)  MISSED
};

/// Class /Script/PCG.PCGNumberOfPointsSettings
/// Size: 0x0000 (0x000158 - 0x000158)
class UPCGNumberOfPointsSettings : public UPCGNumberOfElementsBaseSettings
{ 
public:
};

/// Class /Script/PCG.PCGNumberOfEntriesSettings
/// Size: 0x0000 (0x000158 - 0x000158)
class UPCGNumberOfEntriesSettings : public UPCGNumberOfElementsBaseSettings
{ 
public:
};

/// Struct /Script/PCG.PCGPinProperties
/// Size: 0x000C (0x000000 - 0x00000C)
struct FPCGPinProperties
{ 
	FName                                              Label;                                                      // 0x0000   (0x0004)  
	EPCGDataType                                       AllowedTypes;                                               // 0x0004   (0x0004)  
	bool                                               bAllowMultipleData;                                         // 0x0008   (0x0001)  
	bool                                               bAdvancedPin;                                               // 0x0009   (0x0001)  
	bool                                               bAllowMultipleConnections;                                  // 0x000A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x000B   (0x0001)  MISSED
};

/// Class /Script/PCG.PCGSettingsWithDynamicInputs
/// Size: 0x0010 (0x000150 - 0x000160)
class UPCGSettingsWithDynamicInputs : public UPCGSettings
{ 
public:
	TArray<FPCGPinProperties>                          DynamicInputPinProperties;                                  // 0x0150   (0x0010)  
};

/// Class /Script/PCG.PCGOuterIntersectionSettings
/// Size: 0x0008 (0x000160 - 0x000168)
class UPCGOuterIntersectionSettings : public UPCGSettingsWithDynamicInputs
{ 
public:
	EPCGIntersectionDensityFunction                    DensityFunction;                                            // 0x0160   (0x0001)  
	bool                                               bIgnorePinsWithNoInput;                                     // 0x0161   (0x0001)  
	bool                                               bKeepZeroDensityPoints;                                     // 0x0162   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x0163   (0x0005)  MISSED
};

/// Class /Script/PCG.PCGRerouteSettings
/// Size: 0x0000 (0x000150 - 0x000150)
class UPCGRerouteSettings : public UPCGSettings
{ 
public:
};

/// Class /Script/PCG.PCGSanityCheckPointDataSettings
/// Size: 0x0008 (0x000150 - 0x000158)
class UPCGSanityCheckPointDataSettings : public UPCGSettings
{ 
public:
	int32_t                                            MinPointCount;                                              // 0x0150   (0x0004)  
	int32_t                                            MaxPointCount;                                              // 0x0154   (0x0004)  
};

/// Class /Script/PCG.PCGSchedulingPolicyBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UPCGSchedulingPolicyBase : public UObject
{ 
public:
};

/// Class /Script/PCG.PCGSortPointsSettings
/// Size: 0x0030 (0x000150 - 0x000180)
class UPCGSortPointsSettings : public UPCGSettings
{ 
public:
	FPCGAttributePropertyInputSelector                 InputSource;                                                // 0x0150   (0x0028)  
	EPCGSortMethod                                     SortMethod;                                                 // 0x0178   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0179   (0x0007)  MISSED
};

/// Class /Script/PCG.PCGUserParameterGetSettings
/// Size: 0x0018 (0x000150 - 0x000168)
class UPCGUserParameterGetSettings : public UPCGSettings
{ 
public:
	FGuid                                              PropertyGuid;                                               // 0x0150   (0x0010)  
	FName                                              PropertyName;                                               // 0x0160   (0x0004)  
	bool                                               bForceObjectAndStructExtraction;                            // 0x0164   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0165   (0x0003)  MISSED
};

/// Class /Script/PCG.PCGUserParametersData
/// Size: 0x0018 (0x000038 - 0x000050)
class UPCGUserParametersData : public UPCGData
{ 
public:
	class UPCGGraphInterface*                          OriginalGraph;                                              // 0x0038   (0x0008)  
	FInstancedStruct                                   UserParameters;                                             // 0x0040   (0x0010)  
};

/// Class /Script/PCG.PCGDifferenceData
/// Size: 0x0028 (0x0000D0 - 0x0000F8)
class UPCGDifferenceData : public UPCGSpatialDataWithPointCache
{ 
public:
	bool                                               bDiffMetadata;                                              // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00D1   (0x0007)  MISSED
	class UPCGSpatialData*                             Source;                                                     // 0x00D8   (0x0008)  
	class UPCGSpatialData*                             Difference;                                                 // 0x00E0   (0x0008)  
	class UPCGUnionData*                               DifferencesUnion;                                           // 0x00E8   (0x0008)  
	EPCGDifferenceDensityFunction                      DensityFunction;                                            // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00F1   (0x0007)  MISSED


	/// Functions
	// Function /Script/PCG.PCGDifferenceData.SetDensityFunction
	// void SetDensityFunction(EPCGDifferenceDensityFunction InDensityFunction);                                             // [0xb13df2c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGDifferenceData.Initialize
	// void Initialize(class UPCGSpatialData* InData);                                                                       // [0xb13d344] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGDifferenceData.AddDifference
	// void AddDifference(class UPCGSpatialData* InDifference);                                                              // [0xb13c7c4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PCG.PCGIntersectionData
/// Size: 0x0088 (0x0000D0 - 0x000158)
class UPCGIntersectionData : public UPCGSpatialDataWithPointCache
{ 
public:
	EPCGIntersectionDensityFunction                    DensityFunction;                                            // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00D1   (0x0007)  MISSED
	class UPCGSpatialData*                             A;                                                          // 0x00D8   (0x0008)  
	class UPCGSpatialData*                             B;                                                          // 0x00E0   (0x0008)  
	FBox                                               CachedBounds;                                               // 0x00E8   (0x0038)  
	FBox                                               CachedStrictBounds;                                         // 0x0120   (0x0038)  


	/// Functions
	// Function /Script/PCG.PCGIntersectionData.Initialize
	// void Initialize(class UPCGSpatialData* InA, class UPCGSpatialData* InB);                                              // [0xb13d3c4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PCG.PCGSurfaceData
/// Size: 0x0060 (0x0000D0 - 0x000130)
class UPCGSurfaceData : public UPCGSpatialDataWithPointCache
{ 
public:
	FTransform                                         Transform;                                                  // 0x00D0   (0x0060)  
};

/// Struct /Script/PCG.PCGLandscapeDataProps
/// Size: 0x0005 (0x000000 - 0x000005)
struct FPCGLandscapeDataProps
{ 
	bool                                               bGetHeightOnly;                                             // 0x0000   (0x0001)  
	bool                                               bGetLayerWeights;                                           // 0x0001   (0x0001)  
	bool                                               bGetActorReference;                                         // 0x0002   (0x0001)  
	bool                                               bGetPhysicalMaterial;                                       // 0x0003   (0x0001)  
	bool                                               bGetComponentCoordinates;                                   // 0x0004   (0x0001)  
};

/// Class /Script/PCG.PCGLandscapeData
/// Size: 0x0070 (0x000130 - 0x0001A0)
class UPCGLandscapeData : public UPCGSurfaceData
{ 
public:
	SDK_UNDEFINED(16,14447) /* TArray<TWeakObjectPtr<ALandscapeProxy*>> */ __um(Landscapes);                       // 0x0130   (0x0010)  
	FBox                                               Bounds;                                                     // 0x0140   (0x0038)  
	FPCGLandscapeDataProps                             DataProps;                                                  // 0x0178   (0x0005)  
	unsigned char                                      UnknownData00_6[0x23];                                      // 0x017D   (0x0023)  MISSED
};

/// Class /Script/PCG.PCGPolyLineData
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UPCGPolyLineData : public UPCGSpatialDataWithPointCache
{ 
public:
};

/// Class /Script/PCG.PCGLandscapeSplineData
/// Size: 0x0008 (0x0000D0 - 0x0000D8)
class UPCGLandscapeSplineData : public UPCGPolyLineData
{ 
public:
	SDK_UNDEFINED(8,14448) /* TWeakObjectPtr<ULandscapeSplinesComponent*> */ __um(Spline);                         // 0x00D0   (0x0008)  
};

/// Class /Script/PCG.PCGPointData
/// Size: 0x0130 (0x000080 - 0x0001B0)
class UPCGPointData : public UPCGSpatialData
{ 
public:
	TArray<FPCGPoint>                                  Points;                                                     // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_6[0x120];                                     // 0x0090   (0x0120)  MISSED


	/// Functions
	// Function /Script/PCG.PCGPointData.SetPoints
	// void SetPoints(TArray<FPCGPoint>& InPoints);                                                                          // [0xb13dfac] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGPointData.GetPointsCopy
	// TArray<FPCGPoint> GetPointsCopy();                                                                                    // [0xb13cc74] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/PCG.PCGPointData.GetPoints
	// TArray<FPCGPoint> GetPoints();                                                                                        // [0xb13cc58] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGPointData.GetPoint
	// FPCGPoint GetPoint(int32_t Index);                                                                                    // [0xb13cb3c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGPointData.CopyPointsFrom
	// void CopyPointsFrom(class UPCGPointData* InData, TArray<int32_t>& InDataIndices);                                     // [0xb13c844] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/PCG.PCGPrimitiveData
/// Size: 0x0090 (0x0000D0 - 0x000160)
class UPCGPrimitiveData : public UPCGSpatialDataWithPointCache
{ 
public:
	FVector                                            VoxelSize;                                                  // 0x00D0   (0x0018)  
	SDK_UNDEFINED(8,14449) /* TWeakObjectPtr<UPrimitiveComponent*> */ __um(Primitive);                             // 0x00E8   (0x0008)  
	FBox                                               CachedBounds;                                               // 0x00F0   (0x0038)  
	FBox                                               CachedStrictBounds;                                         // 0x0128   (0x0038)  
};

/// Struct /Script/PCG.PCGProjectionParams
/// Size: 0x0020 (0x000000 - 0x000020)
struct FPCGProjectionParams
{ 
	bool                                               bProjectPositions;                                          // 0x0000   (0x0001)  
	bool                                               bProjectRotations;                                          // 0x0001   (0x0001)  
	bool                                               bProjectScales;                                             // 0x0002   (0x0001)  
	EPCGProjectionColorBlendMode                       ColorBlendMode;                                             // 0x0003   (0x0001)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(16,14450) /* FString */              __um(AttributeList);                                        // 0x0008   (0x0010)  
	EPCGMetadataFilterMode                             AttributeMode;                                              // 0x0018   (0x0001)  
	EPCGMetadataOp                                     AttributeMergeOperation;                                    // 0x0019   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x001A   (0x0006)  MISSED
};

/// Class /Script/PCG.PCGProjectionData
/// Size: 0x00A0 (0x0000D0 - 0x000170)
class UPCGProjectionData : public UPCGSpatialDataWithPointCache
{ 
public:
	class UPCGSpatialData*                             Source;                                                     // 0x00D0   (0x0008)  
	class UPCGSpatialData*                             Target;                                                     // 0x00D8   (0x0008)  
	FBox                                               CachedBounds;                                               // 0x00E0   (0x0038)  
	FBox                                               CachedStrictBounds;                                         // 0x0118   (0x0038)  
	FPCGProjectionParams                               ProjectionParams;                                           // 0x0150   (0x0020)  
};

/// Class /Script/PCG.PCGBaseTextureData
/// Size: 0x00B0 (0x000130 - 0x0001E0)
class UPCGBaseTextureData : public UPCGSurfaceData
{ 
public:
	EPCGTextureDensityFunction                         DensityFunction;                                            // 0x0130   (0x0001)  
	EPCGTextureColorChannel                            ColorChannel;                                               // 0x0131   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0132   (0x0002)  MISSED
	float                                              TexelSize;                                                  // 0x0134   (0x0004)  
	bool                                               bUseAdvancedTiling;                                         // 0x0138   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0139   (0x0007)  MISSED
	FVector2D                                          Tiling;                                                     // 0x0140   (0x0010)  
	FVector2D                                          CenterOffset;                                               // 0x0150   (0x0010)  
	float                                              Rotation;                                                   // 0x0160   (0x0004)  
	bool                                               bUseTileBounds;                                             // 0x0164   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0165   (0x0003)  MISSED
	FBox2D                                             TileBounds;                                                 // 0x0168   (0x0028)  
	TArray<FLinearColor>                               ColorData;                                                  // 0x0190   (0x0010)  
	FBox                                               Bounds;                                                     // 0x01A0   (0x0038)  
	int32_t                                            Height;                                                     // 0x01D8   (0x0004)  
	int32_t                                            Width;                                                      // 0x01DC   (0x0004)  
};

/// Class /Script/PCG.PCGRenderTargetData
/// Size: 0x0010 (0x0001E0 - 0x0001F0)
class UPCGRenderTargetData : public UPCGBaseTextureData
{ 
public:
	class UTextureRenderTarget2D*                      RenderTarget;                                               // 0x01E0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x01E8   (0x0008)  MISSED


	/// Functions
	// Function /Script/PCG.PCGRenderTargetData.Initialize
	// void Initialize(class UTextureRenderTarget2D* InRenderTarget, FTransform& InTransform);                               // [0xb13d488] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Struct /Script/PCG.PCGSplineStruct
/// Size: 0x0160 (0x000000 - 0x000160)
struct FPCGSplineStruct
{ 
	FSplineCurves                                      SplineCurves;                                               // 0x0000   (0x0070)  
	FTransform                                         Transform;                                                  // 0x0070   (0x0060)  
	FVector                                            DefaultUpVector;                                            // 0x00D0   (0x0018)  
	int32_t                                            ReparamStepsPerSegment;                                     // 0x00E8   (0x0004)  
	bool                                               bClosedLoop;                                                // 0x00EC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00ED   (0x0003)  MISSED
	FBoxSphereBounds                                   LocalBounds;                                                // 0x00F0   (0x0038)  
	FBoxSphereBounds                                   Bounds;                                                     // 0x0128   (0x0038)  
};

/// Class /Script/PCG.PCGSplineData
/// Size: 0x01A0 (0x0000D0 - 0x000270)
class UPCGSplineData : public UPCGPolyLineData
{ 
public:
	FPCGSplineStruct                                   SplineStruct;                                               // 0x00D0   (0x0160)  
	FBox                                               CachedBounds;                                               // 0x0230   (0x0038)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0268   (0x0008)  MISSED
};

/// Class /Script/PCG.PCGSplineProjectionData
/// Size: 0x0018 (0x000170 - 0x000188)
class UPCGSplineProjectionData : public UPCGProjectionData
{ 
public:
	FInterpCurveVector2D                               ProjectedPosition;                                          // 0x0170   (0x0018)  
};

/// Class /Script/PCG.PCGTextureData
/// Size: 0x0010 (0x0001E0 - 0x0001F0)
class UPCGTextureData : public UPCGBaseTextureData
{ 
public:
	SDK_UNDEFINED(8,14451) /* TWeakObjectPtr<UTexture*> */ __um(Texture);                                          // 0x01E0   (0x0008)  
	int32_t                                            TextureIndex;                                               // 0x01E8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x01EC   (0x0004)  MISSED
};

/// Class /Script/PCG.PCGUnionData
/// Size: 0x0098 (0x0000D0 - 0x000168)
class UPCGUnionData : public UPCGSpatialDataWithPointCache
{ 
public:
	TArray<class UPCGSpatialData*>                     Data;                                                       // 0x00D0   (0x0010)  
	class UPCGSpatialData*                             FirstNonTrivialTransformData;                               // 0x00E0   (0x0008)  
	EPCGUnionType                                      UnionType;                                                  // 0x00E8   (0x0001)  
	EPCGUnionDensityFunction                           DensityFunction;                                            // 0x00E9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x00EA   (0x0006)  MISSED
	FBox                                               CachedBounds;                                               // 0x00F0   (0x0038)  
	FBox                                               CachedStrictBounds;                                         // 0x0128   (0x0038)  
	int32_t                                            CachedDimension;                                            // 0x0160   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0164   (0x0004)  MISSED


	/// Functions
	// Function /Script/PCG.PCGUnionData.Initialize
	// void Initialize(class UPCGSpatialData* InA, class UPCGSpatialData* InB);                                              // [0xb13d5b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGUnionData.AddData
	// void AddData(class UPCGSpatialData* InData);                                                                          // [0xb13c744] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PCG.PCGVolumeData
/// Size: 0x0090 (0x0000D0 - 0x000160)
class UPCGVolumeData : public UPCGSpatialDataWithPointCache
{ 
public:
	FVector                                            VoxelSize;                                                  // 0x00D0   (0x0018)  
	SDK_UNDEFINED(8,14452) /* TWeakObjectPtr<AVolume*> */ __um(Volume);                                            // 0x00E8   (0x0008)  
	FBox                                               Bounds;                                                     // 0x00F0   (0x0038)  
	FBox                                               StrictBounds;                                               // 0x0128   (0x0038)  
};

/// Struct /Script/PCG.PCGWorldCommonQueryParams
/// Size: 0x0070 (0x000000 - 0x000070)
struct FPCGWorldCommonQueryParams
{ 
	bool                                               bIgnorePCGHits;                                             // 0x0000   (0x0001)  
	bool                                               bIgnoreSelfHits;                                            // 0x0001   (0x0001)  
	SDK_UNDEFINED(1,14453) /* TEnumAsByte<ECollisionChannel> */ __um(CollisionChannel);                            // 0x0002   (0x0001)  
	bool                                               bTraceComplex;                                              // 0x0003   (0x0001)  
	EPCGWorldQueryFilterByTag                          ActorTagFilter;                                             // 0x0004   (0x0004)  
	SDK_UNDEFINED(16,14454) /* FString */              __um(ActorTagsList);                                        // 0x0008   (0x0010)  
	bool                                               bIgnoreLandscapeHits;                                       // 0x0018   (0x0001)  
	bool                                               bGetReferenceToActorHit;                                    // 0x0019   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x001A   (0x0006)  MISSED
	SDK_UNDEFINED(80,14455) /* TSet<FName> */          __um(ParsedActorTagsList);                                  // 0x0020   (0x0050)  
};

/// Struct /Script/PCG.PCGWorldVolumetricQueryParams
/// Size: 0x0008 (0x000070 - 0x000078)
struct FPCGWorldVolumetricQueryParams : FPCGWorldCommonQueryParams
{ 
	bool                                               bSearchForOverlap;                                          // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Class /Script/PCG.PCGWorldVolumetricData
/// Size: 0x0088 (0x000160 - 0x0001E8)
class UPCGWorldVolumetricData : public UPCGVolumeData
{ 
public:
	SDK_UNDEFINED(8,14456) /* TWeakObjectPtr<UWorld*> */ __um(World);                                              // 0x0160   (0x0008)  
	SDK_UNDEFINED(8,14457) /* TWeakObjectPtr<UPCGComponent*> */ __um(OriginatingComponent);                        // 0x0168   (0x0008)  
	FPCGWorldVolumetricQueryParams                     QueryParams;                                                // 0x0170   (0x0078)  
};

/// Struct /Script/PCG.PCGWorldRayHitQueryParams
/// Size: 0x0048 (0x000070 - 0x0000B8)
struct FPCGWorldRayHitQueryParams : FPCGWorldCommonQueryParams
{ 
	bool                                               bOverrideDefaultParams;                                     // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0071   (0x0007)  MISSED
	FVector                                            RayOrigin;                                                  // 0x0078   (0x0018)  
	FVector                                            RayDirection;                                               // 0x0090   (0x0018)  
	double                                             RayLength;                                                  // 0x00A8   (0x0008)  
	bool                                               bApplyMetadataFromLandscape;                                // 0x00B0   (0x0001)  
	bool                                               bGetReferenceToPhysicalMaterial;                            // 0x00B1   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x00B2   (0x0006)  MISSED
};

/// Class /Script/PCG.PCGWorldRayHitData
/// Size: 0x0100 (0x000130 - 0x000230)
class UPCGWorldRayHitData : public UPCGSurfaceData
{ 
public:
	SDK_UNDEFINED(8,14458) /* TWeakObjectPtr<UWorld*> */ __um(World);                                              // 0x0130   (0x0008)  
	SDK_UNDEFINED(8,14459) /* TWeakObjectPtr<UPCGComponent*> */ __um(OriginatingComponent);                        // 0x0138   (0x0008)  
	FBox                                               Bounds;                                                     // 0x0140   (0x0038)  
	FPCGWorldRayHitQueryParams                         QueryParams;                                                // 0x0178   (0x00B8)  
};

/// Class /Script/PCG.PCGMetadataBitwiseSettings
/// Size: 0x0058 (0x000180 - 0x0001D8)
class UPCGMetadataBitwiseSettings : public UPCGMetadataSettingsBase
{ 
public:
	EPCGMedadataBitwiseOperation                       Operation;                                                  // 0x0180   (0x0002)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0182   (0x0006)  MISSED
	FPCGAttributePropertyInputSelector                 InputSource1;                                               // 0x0188   (0x0028)  
	FPCGAttributePropertyInputSelector                 InputSource2;                                               // 0x01B0   (0x0028)  
};

/// Class /Script/PCG.PCGMetadataBooleanSettings
/// Size: 0x0058 (0x000180 - 0x0001D8)
class UPCGMetadataBooleanSettings : public UPCGMetadataSettingsBase
{ 
public:
	EPCGMedadataBooleanOperation                       Operation;                                                  // 0x0180   (0x0002)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0182   (0x0006)  MISSED
	FPCGAttributePropertyInputSelector                 InputSource1;                                               // 0x0188   (0x0028)  
	FPCGAttributePropertyInputSelector                 InputSource2;                                               // 0x01B0   (0x0028)  
};

/// Class /Script/PCG.PCGMetadataBreakTransformSettings
/// Size: 0x0028 (0x000180 - 0x0001A8)
class UPCGMetadataBreakTransformSettings : public UPCGMetadataSettingsBase
{ 
public:
	FPCGAttributePropertyInputSelector                 InputSource;                                                // 0x0180   (0x0028)  
};

/// Class /Script/PCG.PCGMetadataBreakVectorSettings
/// Size: 0x0028 (0x000180 - 0x0001A8)
class UPCGMetadataBreakVectorSettings : public UPCGMetadataSettingsBase
{ 
public:
	FPCGAttributePropertyInputSelector                 InputSource;                                                // 0x0180   (0x0028)  
};

/// Class /Script/PCG.PCGMetadataCompareSettings
/// Size: 0x0060 (0x000180 - 0x0001E0)
class UPCGMetadataCompareSettings : public UPCGMetadataSettingsBase
{ 
public:
	EPCGMedadataCompareOperation                       Operation;                                                  // 0x0180   (0x0002)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0182   (0x0006)  MISSED
	FPCGAttributePropertyInputSelector                 InputSource1;                                               // 0x0188   (0x0028)  
	FPCGAttributePropertyInputSelector                 InputSource2;                                               // 0x01B0   (0x0028)  
	double                                             Tolerance;                                                  // 0x01D8   (0x0008)  
};

/// Class /Script/PCG.PCGMetadataOperationSettings
/// Size: 0x0050 (0x000150 - 0x0001A0)
class UPCGMetadataOperationSettings : public UPCGSettings
{ 
public:
	FPCGAttributePropertyInputSelector                 InputSource;                                                // 0x0150   (0x0028)  
	FPCGAttributePropertyOutputSelector                OutputTarget;                                               // 0x0178   (0x0028)  
};

/// Class /Script/PCG.PCGMetadataMakeTransformSettings
/// Size: 0x0078 (0x000180 - 0x0001F8)
class UPCGMetadataMakeTransformSettings : public UPCGMetadataSettingsBase
{ 
public:
	FPCGAttributePropertyInputSelector                 InputSource1;                                               // 0x0180   (0x0028)  
	FPCGAttributePropertyInputSelector                 InputSource2;                                               // 0x01A8   (0x0028)  
	FPCGAttributePropertyInputSelector                 InputSource3;                                               // 0x01D0   (0x0028)  
};

/// Class /Script/PCG.PCGMetadataMakeVectorSettings
/// Size: 0x00A8 (0x000180 - 0x000228)
class UPCGMetadataMakeVectorSettings : public UPCGMetadataSettingsBase
{ 
public:
	FPCGAttributePropertyInputSelector                 InputSource1;                                               // 0x0180   (0x0028)  
	FPCGAttributePropertyInputSelector                 InputSource2;                                               // 0x01A8   (0x0028)  
	FPCGAttributePropertyInputSelector                 InputSource3;                                               // 0x01D0   (0x0028)  
	FPCGAttributePropertyInputSelector                 InputSource4;                                               // 0x01F8   (0x0028)  
	EPCGMetadataTypes                                  OutputType;                                                 // 0x0220   (0x0001)  
	EPCGMetadataMakeVector3                            MakeVector3Op;                                              // 0x0221   (0x0001)  
	EPCGMetadataMakeVector4                            MakeVector4Op;                                              // 0x0222   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x0223   (0x0005)  MISSED
};

/// Class /Script/PCG.PCGMetadataMathsSettings
/// Size: 0x0080 (0x000180 - 0x000200)
class UPCGMetadataMathsSettings : public UPCGMetadataSettingsBase
{ 
public:
	EPCGMedadataMathsOperation                         Operation;                                                  // 0x0180   (0x0002)  
	bool                                               bForceRoundingOpToInt;                                      // 0x0182   (0x0001)  
	bool                                               bForceOpToDouble;                                           // 0x0183   (0x0001)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0184   (0x0004)  MISSED
	FPCGAttributePropertyInputSelector                 InputSource1;                                               // 0x0188   (0x0028)  
	FPCGAttributePropertyInputSelector                 InputSource2;                                               // 0x01B0   (0x0028)  
	FPCGAttributePropertyInputSelector                 InputSource3;                                               // 0x01D8   (0x0028)  
};

/// Class /Script/PCG.PCGMetadataPartitionSettings
/// Size: 0x0028 (0x000150 - 0x000178)
class UPCGMetadataPartitionSettings : public UPCGSettings
{ 
public:
	FPCGAttributePropertyInputSelector                 PartitionAttributeSource;                                   // 0x0150   (0x0028)  
};

/// Class /Script/PCG.PCGMetadataRenameSettings
/// Size: 0x0008 (0x000150 - 0x000158)
class UPCGMetadataRenameSettings : public UPCGSettings
{ 
public:
	FName                                              AttributeToRename;                                          // 0x0150   (0x0004)  
	FName                                              NewAttributeName;                                           // 0x0154   (0x0004)  
};

/// Class /Script/PCG.PCGMetadataRotatorSettings
/// Size: 0x0080 (0x000180 - 0x000200)
class UPCGMetadataRotatorSettings : public UPCGMetadataSettingsBase
{ 
public:
	EPCGMedadataRotatorOperation                       Operation;                                                  // 0x0180   (0x0002)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0182   (0x0006)  MISSED
	FPCGAttributePropertyInputSelector                 InputSource1;                                               // 0x0188   (0x0028)  
	FPCGAttributePropertyInputSelector                 InputSource2;                                               // 0x01B0   (0x0028)  
	FPCGAttributePropertyInputSelector                 InputSource3;                                               // 0x01D8   (0x0028)  
};

/// Class /Script/PCG.PCGMetadataStringOpSettings
/// Size: 0x0058 (0x000180 - 0x0001D8)
class UPCGMetadataStringOpSettings : public UPCGMetadataSettingsBase
{ 
public:
	EPCGMetadataStringOperation                        Operation;                                                  // 0x0180   (0x0002)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0182   (0x0006)  MISSED
	FPCGAttributePropertyInputSelector                 InputSource1;                                               // 0x0188   (0x0028)  
	FPCGAttributePropertyInputSelector                 InputSource2;                                               // 0x01B0   (0x0028)  
};

/// Class /Script/PCG.PCGMetadataTransformSettings
/// Size: 0x0080 (0x000180 - 0x000200)
class UPCGMetadataTransformSettings : public UPCGMetadataSettingsBase
{ 
public:
	EPCGMedadataTransformOperation                     Operation;                                                  // 0x0180   (0x0002)  
	EPCGTransformLerpMode                              TransformLerpMode;                                          // 0x0182   (0x0002)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0184   (0x0004)  MISSED
	FPCGAttributePropertyInputSelector                 InputSource1;                                               // 0x0188   (0x0028)  
	FPCGAttributePropertyInputSelector                 InputSource2;                                               // 0x01B0   (0x0028)  
	FPCGAttributePropertyInputSelector                 InputSource3;                                               // 0x01D8   (0x0028)  
};

/// Class /Script/PCG.PCGMetadataTrigSettings
/// Size: 0x0058 (0x000180 - 0x0001D8)
class UPCGMetadataTrigSettings : public UPCGMetadataSettingsBase
{ 
public:
	EPCGMedadataTrigOperation                          Operation;                                                  // 0x0180   (0x0002)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0182   (0x0006)  MISSED
	FPCGAttributePropertyInputSelector                 InputSource1;                                               // 0x0188   (0x0028)  
	FPCGAttributePropertyInputSelector                 InputSource2;                                               // 0x01B0   (0x0028)  
};

/// Class /Script/PCG.PCGMetadataVectorSettings
/// Size: 0x0080 (0x000180 - 0x000200)
class UPCGMetadataVectorSettings : public UPCGMetadataSettingsBase
{ 
public:
	EPCGMedadataVectorOperation                        Operation;                                                  // 0x0180   (0x0002)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0182   (0x0006)  MISSED
	FPCGAttributePropertyInputSelector                 InputSource1;                                               // 0x0188   (0x0028)  
	FPCGAttributePropertyInputSelector                 InputSource2;                                               // 0x01B0   (0x0028)  
	FPCGAttributePropertyInputSelector                 InputSource3;                                               // 0x01D8   (0x0028)  
};

/// Class /Script/PCG.PCGAttributeGetFromIndexSettings
/// Size: 0x0008 (0x000150 - 0x000158)
class UPCGAttributeGetFromIndexSettings : public UPCGSettings
{ 
public:
	int32_t                                            Index;                                                      // 0x0150   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0154   (0x0004)  MISSED
};

/// Class /Script/PCG.PCGAttributeGetFromPointIndexSettings
/// Size: 0x0030 (0x000150 - 0x000180)
class UPCGAttributeGetFromPointIndexSettings : public UPCGSettings
{ 
public:
	FPCGAttributePropertyInputSelector                 InputSource;                                                // 0x0150   (0x0028)  
	int32_t                                            Index;                                                      // 0x0178   (0x0004)  
	FName                                              OutputAttributeName;                                        // 0x017C   (0x0004)  
};

/// Class /Script/PCG.PCGAttributeNoiseSettings
/// Size: 0x0060 (0x000150 - 0x0001B0)
class UPCGAttributeNoiseSettings : public UPCGSettings
{ 
public:
	FPCGAttributePropertyInputSelector                 InputSource;                                                // 0x0150   (0x0028)  
	FPCGAttributePropertyOutputSelector                OutputTarget;                                               // 0x0178   (0x0028)  
	EPCGAttributeNoiseMode                             Mode;                                                       // 0x01A0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x01A1   (0x0003)  MISSED
	float                                              NoiseMin;                                                   // 0x01A4   (0x0004)  
	float                                              NoiseMax;                                                   // 0x01A8   (0x0004)  
	bool                                               bInvertSource;                                              // 0x01AC   (0x0001)  
	bool                                               bClampResult;                                               // 0x01AD   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x01AE   (0x0002)  MISSED
};

/// Class /Script/PCG.PCGAttributeReduceSettings
/// Size: 0x0038 (0x000150 - 0x000188)
class UPCGAttributeReduceSettings : public UPCGSettings
{ 
public:
	FPCGAttributePropertyInputSelector                 InputSource;                                                // 0x0150   (0x0028)  
	FName                                              OutputAttributeName;                                        // 0x0178   (0x0004)  
	EPCGAttributeReduceOperation                       Operation;                                                  // 0x017C   (0x0004)  
	bool                                               bMergeOutputAttributes;                                     // 0x0180   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0181   (0x0007)  MISSED
};

/// Class /Script/PCG.PCGAttributeSelectSettings
/// Size: 0x0060 (0x000150 - 0x0001B0)
class UPCGAttributeSelectSettings : public UPCGSettings
{ 
public:
	FPCGAttributePropertyInputSelector                 InputSource;                                                // 0x0150   (0x0028)  
	FName                                              OutputAttributeName;                                        // 0x0178   (0x0004)  
	EPCGAttributeSelectOperation                       Operation;                                                  // 0x017C   (0x0004)  
	EPCGAttributeSelectAxis                            Axis;                                                       // 0x0180   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x0184   (0x000C)  MISSED
	FVector4                                           CustomAxis;                                                 // 0x0190   (0x0020)  
};

/// Class /Script/PCG.PCGAttributeTransferSettings
/// Size: 0x0050 (0x000150 - 0x0001A0)
class UPCGAttributeTransferSettings : public UPCGSettings
{ 
public:
	FPCGAttributePropertyInputSelector                 SourceAttributeProperty;                                    // 0x0150   (0x0028)  
	FPCGAttributePropertyOutputSelector                TargetAttributeProperty;                                    // 0x0178   (0x0028)  
};

/// Class /Script/PCG.PCGBoundsModifierSettings
/// Size: 0x0040 (0x000150 - 0x000190)
class UPCGBoundsModifierSettings : public UPCGSettings
{ 
public:
	EPCGBoundsModifierMode                             Mode;                                                       // 0x0150   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0151   (0x0007)  MISSED
	FVector                                            BoundsMin;                                                  // 0x0158   (0x0018)  
	FVector                                            BoundsMax;                                                  // 0x0170   (0x0018)  
	bool                                               bAffectSteepness;                                           // 0x0188   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0189   (0x0003)  MISSED
	float                                              Steepness;                                                  // 0x018C   (0x0004)  
};

/// Class /Script/PCG.PCGCollapseSettings
/// Size: 0x0000 (0x000150 - 0x000150)
class UPCGCollapseSettings : public UPCGSettings
{ 
public:
};

/// Class /Script/PCG.PCGCopyPointsSettings
/// Size: 0x0008 (0x000150 - 0x000158)
class UPCGCopyPointsSettings : public UPCGSettings
{ 
public:
	EPCGCopyPointsInheritanceMode                      RotationInheritance;                                        // 0x0150   (0x0001)  
	EPCGCopyPointsInheritanceMode                      ScaleInheritance;                                           // 0x0151   (0x0001)  
	EPCGCopyPointsInheritanceMode                      ColorInheritance;                                           // 0x0152   (0x0001)  
	EPCGCopyPointsInheritanceMode                      SeedInheritance;                                            // 0x0153   (0x0001)  
	EPCGCopyPointsMetadataInheritanceMode              AttributeInheritance;                                       // 0x0154   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0155   (0x0003)  MISSED
};

/// Class /Script/PCG.PCGCreateAttributeBaseSettings
/// Size: 0x0190 (0x000150 - 0x0002E0)
class UPCGCreateAttributeBaseSettings : public UPCGSettings
{ 
public:
	bool                                               bDisplayFromSourceParamSetting;                             // 0x0150   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0151   (0x0007)  MISSED
	FPCGAttributePropertyInputSelector                 InputSource;                                                // 0x0158   (0x0028)  
	FPCGMetadataTypesConstantStruct                    AttributeTypes;                                             // 0x0180   (0x0160)  
};

/// Class /Script/PCG.PCGAddAttributeSettings
/// Size: 0x0030 (0x0002E0 - 0x000310)
class UPCGAddAttributeSettings : public UPCGCreateAttributeBaseSettings
{ 
public:
	FPCGAttributePropertyOutputSelector                OutputTarget;                                               // 0x02E0   (0x0028)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0308   (0x0008)  MISSED
};

/// Struct /Script/PCG.PCGAttributePropertyOutputNoSourceSelector
/// Size: 0x0000 (0x000028 - 0x000028)
struct FPCGAttributePropertyOutputNoSourceSelector : FPCGAttributePropertySelector
{ 
};

/// Class /Script/PCG.PCGCreateAttributeSetSettings
/// Size: 0x0030 (0x0002E0 - 0x000310)
class UPCGCreateAttributeSetSettings : public UPCGCreateAttributeBaseSettings
{ 
public:
	FPCGAttributePropertyOutputNoSourceSelector        OutputTarget;                                               // 0x02E0   (0x0028)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0308   (0x0008)  MISSED
};

/// Class /Script/PCG.PCGCreateSplineSettings
/// Size: 0x0048 (0x000150 - 0x000198)
class UPCGCreateSplineSettings : public UPCGSettings
{ 
public:
	EPCGCreateSplineMode                               Mode;                                                       // 0x0150   (0x0001)  
	bool                                               bClosedLoop;                                                // 0x0151   (0x0001)  
	bool                                               bLinear;                                                    // 0x0152   (0x0001)  
	bool                                               bApplyCustomTangents;                                       // 0x0153   (0x0001)  
	FName                                              ArriveTangentAttribute;                                     // 0x0154   (0x0004)  
	FName                                              LeaveTangentAttribute;                                      // 0x0158   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x015C   (0x0004)  MISSED
	SDK_UNDEFINED(32,14460) /* TWeakObjectPtr<AActor*> */ __um(TargetActor);                                       // 0x0160   (0x0020)  
	EPCGAttachOptions                                  AttachOptions;                                              // 0x0180   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0184   (0x0004)  MISSED
	TArray<FName>                                      PostProcessFunctionNames;                                   // 0x0188   (0x0010)  
};

/// Struct /Script/PCG.PCGActorPropertyOverrideDescription
/// Size: 0x0038 (0x000000 - 0x000038)
struct FPCGActorPropertyOverrideDescription
{ 
	FPCGAttributePropertyInputSelector                 InputSource;                                                // 0x0000   (0x0028)  
	SDK_UNDEFINED(16,14461) /* FString */              __um(PropertyTarget);                                       // 0x0028   (0x0010)  
};

/// Class /Script/PCG.PCGCreateTargetActor
/// Size: 0x00D0 (0x000150 - 0x000220)
class UPCGCreateTargetActor : public UPCGSettings
{ 
public:
	class UClass*                                      TemplateActorClass;                                         // 0x0150   (0x0008)  
	class AActor*                                      TemplateActor;                                              // 0x0158   (0x0008)  
	bool                                               bAllowTemplateActorEditing;                                 // 0x0160   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0161   (0x0003)  MISSED
	EPCGAttachOptions                                  AttachOptions;                                              // 0x0164   (0x0004)  
	SDK_UNDEFINED(32,14462) /* TWeakObjectPtr<AActor*> */ __um(RootActor);                                         // 0x0168   (0x0020)  
	SDK_UNDEFINED(16,14463) /* FString */              __um(ActorLabel);                                           // 0x0188   (0x0010)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0198   (0x0008)  MISSED
	FTransform                                         ActorPivot;                                                 // 0x01A0   (0x0060)  
	TArray<FPCGActorPropertyOverrideDescription>       PropertyOverrideDescriptions;                               // 0x0200   (0x0010)  
	TArray<FName>                                      PostProcessFunctionNames;                                   // 0x0210   (0x0010)  
};

/// Struct /Script/PCG.PCGActorSelectorSettings
/// Size: 0x0020 (0x000000 - 0x000020)
struct FPCGActorSelectorSettings
{ 
	EPCGActorFilter                                    ActorFilter;                                                // 0x0000   (0x0001)  
	bool                                               bMustOverlapSelf;                                           // 0x0001   (0x0001)  
	bool                                               bIncludeChildren;                                           // 0x0002   (0x0001)  
	bool                                               bDisableFilter;                                             // 0x0003   (0x0001)  
	EPCGActorSelection                                 ActorSelection;                                             // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	FName                                              ActorSelectionTag;                                          // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	class UClass*                                      ActorSelectionClass;                                        // 0x0010   (0x0008)  
	bool                                               bSelectMultiple;                                            // 0x0018   (0x0001)  
	bool                                               bIgnoreSelfAndChildren;                                     // 0x0019   (0x0001)  
	bool                                               bShowActorFilter;                                           // 0x001A   (0x0001)  
	bool                                               bShowIncludeChildren;                                       // 0x001B   (0x0001)  
	bool                                               bShowActorSelection;                                        // 0x001C   (0x0001)  
	bool                                               bShowActorSelectionClass;                                   // 0x001D   (0x0001)  
	bool                                               bShowSelectMultiple;                                        // 0x001E   (0x0001)  
	unsigned char                                      UnknownData02_6[0x1];                                       // 0x001F   (0x0001)  MISSED
};

/// Class /Script/PCG.PCGDataFromActorSettings
/// Size: 0x0040 (0x000150 - 0x000190)
class UPCGDataFromActorSettings : public UPCGSettings
{ 
public:
	FPCGActorSelectorSettings                          ActorSelector;                                              // 0x0150   (0x0020)  
	EPCGGetDataFromActorMode                           Mode;                                                       // 0x0170   (0x0001)  
	bool                                               bAlsoOutputSinglePointData;                                 // 0x0171   (0x0001)  
	bool                                               bMergeSinglePointData;                                      // 0x0172   (0x0001)  
	bool                                               bDisplayModeSettings;                                       // 0x0173   (0x0001)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0174   (0x0004)  MISSED
	TArray<FName>                                      ExpectedPins;                                               // 0x0178   (0x0010)  
	FName                                              PropertyName;                                               // 0x0188   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x018C   (0x0004)  MISSED
};

/// Class /Script/PCG.PCGDataNumSettings
/// Size: 0x0008 (0x000150 - 0x000158)
class UPCGDataNumSettings : public UPCGSettings
{ 
public:
	FName                                              OutputAttributeName;                                        // 0x0150   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0154   (0x0004)  MISSED
};

/// Class /Script/PCG.PCGDataTableRowToParamDataSettings
/// Size: 0x0038 (0x000150 - 0x000188)
class UPCGDataTableRowToParamDataSettings : public UPCGSettings
{ 
public:
	FName                                              RowName;                                                    // 0x0150   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0154   (0x0004)  MISSED
	SDK_UNDEFINED(16,14464) /* FString */              __um(PathOverride);                                         // 0x0158   (0x0010)  
	SDK_UNDEFINED(32,14465) /* TWeakObjectPtr<UDataTable*> */ __um(DataTable);                                     // 0x0168   (0x0020)  
};

/// Class /Script/PCG.PCGDebugSettings
/// Size: 0x0020 (0x000150 - 0x000170)
class UPCGDebugSettings : public UPCGSettings
{ 
public:
	SDK_UNDEFINED(32,14466) /* TWeakObjectPtr<AActor*> */ __um(TargetActor);                                       // 0x0150   (0x0020)  
};

/// Class /Script/PCG.PCGDensityFilterSettings
/// Size: 0x0010 (0x000150 - 0x000160)
class UPCGDensityFilterSettings : public UPCGSettings
{ 
public:
	float                                              LowerBound;                                                 // 0x0150   (0x0004)  
	float                                              UpperBound;                                                 // 0x0154   (0x0004)  
	bool                                               bInvertFilter;                                              // 0x0158   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0159   (0x0007)  MISSED
};

/// Class /Script/PCG.PCGLinearDensityRemapSettings
/// Size: 0x0010 (0x000150 - 0x000160)
class UPCGLinearDensityRemapSettings : public UPCGSettings
{ 
public:
	float                                              RemapMin;                                                   // 0x0150   (0x0004)  
	float                                              RemapMax;                                                   // 0x0154   (0x0004)  
	bool                                               bMultiplyDensity;                                           // 0x0158   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0159   (0x0007)  MISSED
};

/// Class /Script/PCG.PCGDensityRemapSettings
/// Size: 0x0018 (0x000150 - 0x000168)
class UPCGDensityRemapSettings : public UPCGSettings
{ 
public:
	float                                              InRangeMin;                                                 // 0x0150   (0x0004)  
	float                                              InRangeMax;                                                 // 0x0154   (0x0004)  
	float                                              OutRangeMin;                                                // 0x0158   (0x0004)  
	float                                              OutRangeMax;                                                // 0x015C   (0x0004)  
	bool                                               bExcludeValuesOutsideInputRange;                            // 0x0160   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0161   (0x0007)  MISSED
};

/// Class /Script/PCG.PCGDifferenceSettings
/// Size: 0x0008 (0x000150 - 0x000158)
class UPCGDifferenceSettings : public UPCGSettings
{ 
public:
	EPCGDifferenceDensityFunction                      DensityFunction;                                            // 0x0150   (0x0001)  
	EPCGDifferenceMode                                 Mode;                                                       // 0x0151   (0x0001)  
	bool                                               bDiffMetadata;                                              // 0x0152   (0x0001)  
	bool                                               bKeepZeroDensityPoints;                                     // 0x0153   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0154   (0x0004)  MISSED
};

/// Class /Script/PCG.PCGBlueprintElement
/// Size: 0x0040 (0x000028 - 0x000068)
class UPCGBlueprintElement : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	bool                                               bIsCacheable;                                               // 0x0028   (0x0001)  
	bool                                               bComputeFullDataCrc;                                        // 0x0029   (0x0001)  
	bool                                               bRequiresGameThread;                                        // 0x002A   (0x0001)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x002B   (0x0005)  MISSED
	TArray<FPCGPinProperties>                          CustomInputPins;                                            // 0x0030   (0x0010)  
	TArray<FPCGPinProperties>                          CustomOutputPins;                                           // 0x0040   (0x0010)  
	bool                                               bHasDefaultInPin;                                           // 0x0050   (0x0001)  
	bool                                               bHasDefaultOutPin;                                          // 0x0051   (0x0001)  
	unsigned char                                      UnknownData02_6[0x16];                                      // 0x0052   (0x0016)  MISSED


	/// Functions
	// Function /Script/PCG.PCGBlueprintElement.VariableLoopBody
	// TArray<FPCGPoint> VariableLoopBody(FPCGContext& InContext, class UPCGPointData* InData, FPCGPoint& InPoint, class UPCGMetadata* OutMetadata); // [0x3d1d968] Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/PCG.PCGBlueprintElement.VariableLoop
	// void VariableLoop(FPCGContext& InContext, class UPCGPointData* InData, class UPCGPointData*& OutData, class UPCGPointData* OptionalOutData); // [0xb1b5134] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/PCG.PCGBlueprintElement.PointLoopBody
	// bool PointLoopBody(FPCGContext& InContext, class UPCGPointData* InData, FPCGPoint& InPoint, FPCGPoint& OutPoint, class UPCGMetadata* OutMetadata); // [0x3d1d968] Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/PCG.PCGBlueprintElement.PointLoop
	// void PointLoop(FPCGContext& InContext, class UPCGPointData* InData, class UPCGPointData*& OutData, class UPCGPointData* OptionalOutData); // [0xb1b4c6c] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/PCG.PCGBlueprintElement.NodeTypeOverride
	// EPCGSettingsType NodeTypeOverride();                                                                                  // [0x60f7298] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/PCG.PCGBlueprintElement.NodeTitleOverride
	// FName NodeTitleOverride();                                                                                            // [0xb1b4c3c] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/PCG.PCGBlueprintElement.NodeColorOverride
	// FLinearColor NodeColorOverride();                                                                                     // [0x63919d4] Native|Event|Public|HasDefaults|BlueprintEvent|Const 
	// Function /Script/PCG.PCGBlueprintElement.NestedLoopBody
	// bool NestedLoopBody(FPCGContext& InContext, class UPCGPointData* InOuterData, class UPCGPointData* InInnerData, FPCGPoint& InOuterPoint, FPCGPoint& InInnerPoint, FPCGPoint& OutPoint, class UPCGMetadata* OutMetadata); // [0x3d1d968] Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/PCG.PCGBlueprintElement.NestedLoop
	// void NestedLoop(FPCGContext& InContext, class UPCGPointData* InOuterData, class UPCGPointData* InInnerData, class UPCGPointData*& OutData, class UPCGPointData* OptionalOutData); // [0xb1b4874] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/PCG.PCGBlueprintElement.IterationLoopBody
	// bool IterationLoopBody(FPCGContext& InContext, int64_t Iteration, class UPCGSpatialData* InA, class UPCGSpatialData* InB, FPCGPoint& OutPoint, class UPCGMetadata* OutMetadata); // [0x3d1d968] Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/PCG.PCGBlueprintElement.IterationLoop
	// void IterationLoop(FPCGContext& InContext, int64_t NumIterations, class UPCGPointData*& OutData, class UPCGSpatialData* OptionalA, class UPCGSpatialData* OptionalB, class UPCGPointData* OptionalOutData); // [0xb1b43a8] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/PCG.PCGBlueprintElement.IsCacheableOverride
	// bool IsCacheableOverride();                                                                                           // [0x30babb0] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/PCG.PCGBlueprintElement.GetSeed
	// int32_t GetSeed(FPCGContext& InContext);                                                                              // [0xb1b4304] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGBlueprintElement.GetRandomStream
	// FRandomStream GetRandomStream(FPCGContext& InContext);                                                                // [0xb1b424c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/PCG.PCGBlueprintElement.GetOutputPins
	// TArray<FPCGPinProperties> GetOutputPins();                                                                            // [0xb1b420c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGBlueprintElement.GetOutputPinByLabel
	// bool GetOutputPinByLabel(FName InPinLabel, FPCGPinProperties& OutFoundPin);                                           // [0xb1b4128] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGBlueprintElement.GetInputPins
	// TArray<FPCGPinProperties> GetInputPins();                                                                             // [0xb1b40e8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGBlueprintElement.GetInputPinByLabel
	// bool GetInputPinByLabel(FName InPinLabel, FPCGPinProperties& OutFoundPin);                                            // [0xb1b4004] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGBlueprintElement.GetContext
	// FPCGContext GetContext();                                                                                             // [0xb1b3fac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGBlueprintElement.ExecuteWithContext
	// void ExecuteWithContext(FPCGContext& InContext, FPCGDataCollection& Input, FPCGDataCollection& Output);               // [0xb1b3dbc] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/PCG.PCGBlueprintElement.Execute
	// void Execute(FPCGDataCollection& Input, FPCGDataCollection& Output);                                                  // [0x3d1d968] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/PCG.PCGBlueprintElement.CustomOutputLabels
	// TSet<FName> CustomOutputLabels();                                                                                     // [0xb1b3c90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGBlueprintElement.CustomInputLabels
	// TSet<FName> CustomInputLabels();                                                                                      // [0xb1b3b64] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGBlueprintElement.ApplyPreconfiguredSettings
	// void ApplyPreconfiguredSettings(FPCGPreConfiguredSettingsInfo& InPreconfigureInfo);                                   // [0x3d1d968] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/PCG.PCGBlueprintSettings
/// Size: 0x0010 (0x000150 - 0x000160)
class UPCGBlueprintSettings : public UPCGSettings
{ 
public:
	class UClass*                                      BlueprintElementType;                                       // 0x0150   (0x0008)  
	class UPCGBlueprintElement*                        BlueprintElementInstance;                                   // 0x0158   (0x0008)  


	/// Functions
	// Function /Script/PCG.PCGBlueprintSettings.SetElementType
	// void SetElementType(class UClass* InElementType, class UPCGBlueprintElement*& ElementInstance);                       // [0xb1b4f34] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGBlueprintSettings.GetElementType
	// class UClass* GetElementType();                                                                                       // [0xb1b3fc8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PCG.PCGFilterByTagSettings
/// Size: 0x0018 (0x000150 - 0x000168)
class UPCGFilterByTagSettings : public UPCGSettings
{ 
public:
	EPCGFilterByTagOperation                           Operation;                                                  // 0x0150   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0154   (0x0004)  MISSED
	SDK_UNDEFINED(16,14467) /* FString */              __um(SelectedTags);                                         // 0x0158   (0x0010)  
};

/// Class /Script/PCG.PCGFilterByTypeSettings
/// Size: 0x0008 (0x000150 - 0x000158)
class UPCGFilterByTypeSettings : public UPCGSettings
{ 
public:
	EPCGDataType                                       TargetType;                                                 // 0x0150   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0154   (0x0004)  MISSED
};

/// Class /Script/PCG.PCGIndirectionSettings
/// Size: 0x0040 (0x000150 - 0x000190)
class UPCGIndirectionSettings : public UPCGSettings
{ 
public:
	EPCGProxyInterfaceMode                             ProxyInterfaceMode;                                         // 0x0150   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0151   (0x0007)  MISSED
	class UClass*                                      SettingsClass;                                              // 0x0158   (0x0008)  
	class UClass*                                      BlueprintElementClass;                                      // 0x0160   (0x0008)  
	SDK_UNDEFINED(32,14468) /* TWeakObjectPtr<UPCGSettings*> */ __um(Settings);                                    // 0x0168   (0x0020)  
	bool                                               bTagOutputsBasedOnOutputPins;                               // 0x0188   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0189   (0x0007)  MISSED
};

/// Class /Script/PCG.PCGInnerIntersectionSettings
/// Size: 0x0008 (0x000150 - 0x000158)
class UPCGInnerIntersectionSettings : public UPCGSettings
{ 
public:
	EPCGIntersectionDensityFunction                    DensityFunction;                                            // 0x0150   (0x0001)  
	bool                                               bKeepZeroDensityPoints;                                     // 0x0151   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0152   (0x0006)  MISSED
};

/// Class /Script/PCG.PCGBaseSubgraphSettings
/// Size: 0x0000 (0x000150 - 0x000150)
class UPCGBaseSubgraphSettings : public UPCGSettings
{ 
public:
};

/// Class /Script/PCG.PCGSubgraphSettings
/// Size: 0x0010 (0x000150 - 0x000160)
class UPCGSubgraphSettings : public UPCGBaseSubgraphSettings
{ 
public:
	class UPCGGraphInstance*                           SubgraphInstance;                                           // 0x0150   (0x0008)  
	class UPCGGraphInterface*                          SubgraphOverride;                                           // 0x0158   (0x0008)  
};

/// Class /Script/PCG.PCGLoopSettings
/// Size: 0x0010 (0x000160 - 0x000170)
class UPCGLoopSettings : public UPCGSubgraphSettings
{ 
public:
	SDK_UNDEFINED(16,14469) /* FString */              __um(LoopPins);                                             // 0x0160   (0x0010)  
};

/// Class /Script/PCG.PCGMatchAndSetAttributesSettings
/// Size: 0x0068 (0x000150 - 0x0001B8)
class UPCGMatchAndSetAttributesSettings : public UPCGSettings
{ 
public:
	bool                                               bMatchAttributes;                                           // 0x0150   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0151   (0x0007)  MISSED
	FPCGAttributePropertyInputSelector                 InputAttribute;                                             // 0x0158   (0x0028)  
	FName                                              MatchAttribute;                                             // 0x0180   (0x0004)  
	bool                                               bKeepUnmatched;                                             // 0x0184   (0x0001)  
	bool                                               bUseInputWeightAttribute;                                   // 0x0185   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0186   (0x0002)  MISSED
	FPCGAttributePropertyInputSelector                 InputWeightAttribute;                                       // 0x0188   (0x0028)  
	bool                                               bUseWeightAttribute;                                        // 0x01B0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x01B1   (0x0003)  MISSED
	FName                                              WeightAttribute;                                            // 0x01B4   (0x0004)  
};

/// Class /Script/PCG.PCGMergeSettings
/// Size: 0x0008 (0x000150 - 0x000158)
class UPCGMergeSettings : public UPCGSettings
{ 
public:
	bool                                               bMergeMetadata;                                             // 0x0150   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0151   (0x0007)  MISSED
};

/// Class /Script/PCG.PCGPointExtentsModifierSettings
/// Size: 0x0020 (0x000150 - 0x000170)
class UPCGPointExtentsModifierSettings : public UPCGSettings
{ 
public:
	FVector                                            Extents;                                                    // 0x0150   (0x0018)  
	EPCGPointExtentsModifierMode                       Mode;                                                       // 0x0168   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0169   (0x0007)  MISSED
};

/// Class /Script/PCG.PCGPointFromMeshSettings
/// Size: 0x0028 (0x000150 - 0x000178)
class UPCGPointFromMeshSettings : public UPCGSettings
{ 
public:
	SDK_UNDEFINED(32,14470) /* TWeakObjectPtr<UStaticMesh*> */ __um(StaticMesh);                                   // 0x0150   (0x0020)  
	FName                                              MeshPathAttributeName;                                      // 0x0170   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0174   (0x0004)  MISSED
};

/// Class /Script/PCG.PCGPointMatchAndSetSettings
/// Size: 0x0040 (0x000150 - 0x000190)
class UPCGPointMatchAndSetSettings : public UPCGSettings
{ 
public:
	class UClass*                                      MatchAndSetType;                                            // 0x0150   (0x0008)  
	class UPCGMatchAndSetBase*                         MatchAndSetInstance;                                        // 0x0158   (0x0008)  
	FPCGAttributePropertyOutputSelector                SetTarget;                                                  // 0x0160   (0x0028)  
	EPCGMetadataTypes                                  SetTargetType;                                              // 0x0188   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0189   (0x0003)  MISSED
	EPCGMetadataTypesConstantStructStringMode          SetTargetStringMode;                                        // 0x018C   (0x0004)  


	/// Functions
	// Function /Script/PCG.PCGPointMatchAndSetSettings.SetMatchAndSetType
	// void SetMatchAndSetType(class UClass* InMatchAndSetType);                                                             // [0xb1b502c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PCG.PCGProjectionSettings
/// Size: 0x0028 (0x000150 - 0x000178)
class UPCGProjectionSettings : public UPCGSettings
{ 
public:
	FPCGProjectionParams                               ProjectionParams;                                           // 0x0150   (0x0020)  
	bool                                               bKeepZeroDensityPoints;                                     // 0x0170   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0171   (0x0007)  MISSED
};

/// Class /Script/PCG.PCGPropertyToParamDataSettings
/// Size: 0x0058 (0x000150 - 0x0001A8)
class UPCGPropertyToParamDataSettings : public UPCGSettings
{ 
public:
	FPCGActorSelectorSettings                          ActorSelector;                                              // 0x0150   (0x0020)  
	bool                                               bSelectComponent;                                           // 0x0170   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0171   (0x0007)  MISSED
	class UClass*                                      ComponentClass;                                             // 0x0178   (0x0008)  
	FName                                              PropertyName;                                               // 0x0180   (0x0004)  
	bool                                               bForceObjectAndStructExtraction;                            // 0x0184   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0185   (0x0003)  MISSED
	FName                                              OutputAttributeName;                                        // 0x0188   (0x0004)  
	bool                                               bAlwaysRequeryActors;                                       // 0x018C   (0x0001)  
	EPCGActorSelection                                 ActorSelection;                                             // 0x018D   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x018E   (0x0002)  MISSED
	FName                                              ActorSelectionTag;                                          // 0x0190   (0x0004)  
	FName                                              ActorSelectionName;                                         // 0x0194   (0x0004)  
	class UClass*                                      ActorSelectionClass;                                        // 0x0198   (0x0008)  
	EPCGActorFilter                                    ActorFilter;                                                // 0x01A0   (0x0001)  
	bool                                               bIncludeChildren;                                           // 0x01A1   (0x0001)  
	unsigned char                                      UnknownData03_6[0x6];                                       // 0x01A2   (0x0006)  MISSED
};

/// Class /Script/PCG.PCGSelectPointsSettings
/// Size: 0x0008 (0x000150 - 0x000158)
class UPCGSelectPointsSettings : public UPCGSettings
{ 
public:
	float                                              Ratio;                                                      // 0x0150   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0154   (0x0004)  MISSED
};

/// Class /Script/PCG.PCGSelfPruningSettings
/// Size: 0x0010 (0x000150 - 0x000160)
class UPCGSelfPruningSettings : public UPCGSettings
{ 
public:
	EPCGSelfPruningType                                PruningType;                                                // 0x0150   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0151   (0x0003)  MISSED
	float                                              RadiusSimilarityFactor;                                     // 0x0154   (0x0004)  
	bool                                               bRandomizedPruning;                                         // 0x0158   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0159   (0x0007)  MISSED
};

/// Class /Script/PCG.PCGSpatialNoiseSettings
/// Size: 0x0110 (0x000150 - 0x000260)
class UPCGSpatialNoiseSettings : public UPCGSettings
{ 
public:
	PCGSpatialNoiseMode                                Mode;                                                       // 0x0150   (0x0004)  
	PCGSpatialNoiseMask2DMode                          EdgeMask2DMode;                                             // 0x0154   (0x0004)  
	int32_t                                            Iterations;                                                 // 0x0158   (0x0004)  
	bool                                               bTiling;                                                    // 0x015C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x015D   (0x0003)  MISSED
	float                                              Brightness;                                                 // 0x0160   (0x0004)  
	float                                              Contrast;                                                   // 0x0164   (0x0004)  
	FPCGAttributePropertyOutputNoSourceSelector        ValueTarget;                                                // 0x0168   (0x0028)  
	FVector                                            RandomOffset;                                               // 0x0190   (0x0018)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x01A8   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x01B0   (0x0060)  
	double                                             VoronoiCellRandomness;                                      // 0x0210   (0x0008)  
	FPCGAttributePropertyOutputNoSourceSelector        VoronoiCellIDTarget;                                        // 0x0218   (0x0028)  
	bool                                               bVoronoiOrientSamplesToCellEdge;                            // 0x0240   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0241   (0x0003)  MISSED
	int32_t                                            TiledVoronoiResolution;                                     // 0x0244   (0x0004)  
	int32_t                                            TiledVoronoiEdgeBlendCellCount;                             // 0x0248   (0x0004)  
	float                                              EdgeBlendDistance;                                          // 0x024C   (0x0004)  
	float                                              EdgeBlendCurveOffset;                                       // 0x0250   (0x0004)  
	float                                              EdgeBlendCurveIntensity;                                    // 0x0254   (0x0004)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0258   (0x0008)  MISSED
};

/// Class /Script/PCG.PCGSpawnActorSettings
/// Size: 0x0080 (0x000150 - 0x0001D0)
class UPCGSpawnActorSettings : public UPCGBaseSubgraphSettings
{ 
public:
	class UClass*                                      TemplateActorClass;                                         // 0x0150   (0x0008)  
	TArray<FName>                                      PostSpawnFunctionNames;                                     // 0x0158   (0x0010)  
	EPCGSpawnActorOption                               Option;                                                     // 0x0168   (0x0001)  
	bool                                               bForceDisableActorParsing;                                  // 0x0169   (0x0001)  
	EPCGSpawnActorGenerationTrigger                    GenerationTrigger;                                          // 0x016A   (0x0001)  
	bool                                               bInheritActorTags;                                          // 0x016B   (0x0001)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x016C   (0x0004)  MISSED
	TArray<FName>                                      TagsToAddOnActors;                                          // 0x0170   (0x0010)  
	bool                                               bAllowTemplateActorEditing;                                 // 0x0180   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0181   (0x0007)  MISSED
	class AActor*                                      TemplateActor;                                              // 0x0188   (0x0008)  
	TArray<FPCGActorPropertyOverrideDescription>       SpawnedActorPropertyOverrideDescriptions;                   // 0x0190   (0x0010)  
	SDK_UNDEFINED(32,14471) /* TWeakObjectPtr<AActor*> */ __um(RootActor);                                         // 0x01A0   (0x0020)  
	EPCGAttachOptions                                  AttachOptions;                                              // 0x01C0   (0x0004)  
	bool                                               bSpawnByAttribute;                                          // 0x01C4   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x01C5   (0x0003)  MISSED
	FName                                              SpawnAttribute;                                             // 0x01C8   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x01CC   (0x0004)  MISSED
};

/// Class /Script/PCG.PCGNode
/// Size: 0x0060 (0x000028 - 0x000088)
class UPCGNode : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FName                                              NodeTitle;                                                  // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	class UPCGSettingsInterface*                       SettingsInterface;                                          // 0x0030   (0x0008)  
	TArray<class UPCGNode*>                            OutboundNodes;                                              // 0x0038   (0x0010)  
	TArray<class UPCGEdge*>                            InboundEdges;                                               // 0x0048   (0x0010)  
	TArray<class UPCGEdge*>                            OutboundEdges;                                              // 0x0058   (0x0010)  
	TArray<class UPCGPin*>                             InputPins;                                                  // 0x0068   (0x0010)  
	TArray<class UPCGPin*>                             OutputPins;                                                 // 0x0078   (0x0010)  


	/// Functions
	// Function /Script/PCG.PCGNode.RemoveEdgeTo
	// bool RemoveEdgeTo(FName FromPinLable, class UPCGNode* To, FName ToPinLabel);                                          // [0xb2c76f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGNode.GetSettings
	// class UPCGSettings* GetSettings();                                                                                    // [0xb2c4f88] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGNode.GetGraph
	// class UPCGGraph* GetGraph();                                                                                          // [0xb2c39c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGNode.AddEdgeTo
	// class UPCGNode* AddEdgeTo(FName FromPinLabel, class UPCGNode* To, FName ToPinLabel);                                  // [0xb2c2ad8] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PCG.PCGBaseSubgraphNode
/// Size: 0x0000 (0x000088 - 0x000088)
class UPCGBaseSubgraphNode : public UPCGNode
{ 
public:
};

/// Class /Script/PCG.PCGSpawnActorNode
/// Size: 0x0000 (0x000088 - 0x000088)
class UPCGSpawnActorNode : public UPCGBaseSubgraphNode
{ 
public:
};

/// Struct /Script/PCG.PCGSplineSamplerParams
/// Size: 0x00C8 (0x000000 - 0x0000C8)
struct FPCGSplineSamplerParams
{ 
	EPCGSplineSamplingDimension                        Dimension;                                                  // 0x0000   (0x0001)  
	EPCGSplineSamplingMode                             Mode;                                                       // 0x0001   (0x0001)  
	EPCGSplineSamplingFill                             Fill;                                                       // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0003   (0x0001)  MISSED
	int32_t                                            SubdivisionsPerSegment;                                     // 0x0004   (0x0004)  
	float                                              DistanceIncrement;                                          // 0x0008   (0x0004)  
	int32_t                                            NumPlanarSubdivisions;                                      // 0x000C   (0x0004)  
	int32_t                                            NumHeightSubdivisions;                                      // 0x0010   (0x0004)  
	bool                                               bComputeDirectionDelta;                                     // 0x0014   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	FName                                              NextDirectionDeltaAttribute;                                // 0x0018   (0x0004)  
	bool                                               bComputeCurvature;                                          // 0x001C   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x001D   (0x0003)  MISSED
	FName                                              CurvatureAttribute;                                         // 0x0020   (0x0004)  
	bool                                               bUnbounded;                                                 // 0x0024   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0025   (0x0003)  MISSED
	float                                              InteriorSampleSpacing;                                      // 0x0028   (0x0004)  
	float                                              InteriorBorderSampleSpacing;                                // 0x002C   (0x0004)  
	bool                                               bTreatSplineAsPolyline;                                     // 0x0030   (0x0001)  
	EPCGSplineSamplingInteriorOrientation              InteriorOrientation;                                        // 0x0031   (0x0001)  
	bool                                               bProjectOntoSurface;                                        // 0x0032   (0x0001)  
	unsigned char                                      UnknownData04_5[0x5];                                       // 0x0033   (0x0005)  MISSED
	FRuntimeFloatCurve                                 InteriorDensityFalloffCurve;                                // 0x0038   (0x0088)  
	float                                              PointSteepness;                                             // 0x00C0   (0x0004)  
	bool                                               bSeedFromLocalPosition;                                     // 0x00C4   (0x0001)  
	bool                                               bSeedFrom2DPosition;                                        // 0x00C5   (0x0001)  
	unsigned char                                      UnknownData05_6[0x2];                                       // 0x00C6   (0x0002)  MISSED
};

/// Class /Script/PCG.PCGSplineSamplerSettings
/// Size: 0x00C8 (0x000150 - 0x000218)
class UPCGSplineSamplerSettings : public UPCGSettings
{ 
public:
	FPCGSplineSamplerParams                            SamplerParams;                                              // 0x0150   (0x00C8)  
};

/// Struct /Script/PCG.PCGStaticMeshSpawnerEntry
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPCGStaticMeshSpawnerEntry
{ 
	int32_t                                            Weight;                                                     // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(32,14472) /* TWeakObjectPtr<UStaticMesh*> */ __um(Mesh);                                         // 0x0008   (0x0020)  
	bool                                               bOverrideCollisionProfile;                                  // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	FCollisionProfileName                              CollisionProfile;                                           // 0x002C   (0x0004)  
};

/// Class /Script/PCG.PCGStaticMeshSpawnerSettings
/// Size: 0x0068 (0x000150 - 0x0001B8)
class UPCGStaticMeshSpawnerSettings : public UPCGSettings
{ 
public:
	class UClass*                                      MeshSelectorType;                                           // 0x0150   (0x0008)  
	class UPCGMeshSelectorBase*                        MeshSelectorParameters;                                     // 0x0158   (0x0008)  
	class UClass*                                      InstanceDataPackerType;                                     // 0x0160   (0x0008)  
	class UPCGInstanceDataPackerBase*                  InstanceDataPackerParameters;                               // 0x0168   (0x0008)  
	FName                                              OutAttributeName;                                           // 0x0170   (0x0004)  
	bool                                               bApplyMeshBoundsToPoints;                                   // 0x0174   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0175   (0x0003)  MISSED
	SDK_UNDEFINED(32,14473) /* TWeakObjectPtr<AActor*> */ __um(TargetActor);                                       // 0x0178   (0x0020)  
	TArray<FName>                                      PostProcessFunctionNames;                                   // 0x0198   (0x0010)  
	TArray<FPCGStaticMeshSpawnerEntry>                 Meshes;                                                     // 0x01A8   (0x0010)  


	/// Functions
	// Function /Script/PCG.PCGStaticMeshSpawnerSettings.SetMeshSelectorType
	// void SetMeshSelectorType(class UClass* InMeshSelectorType);                                                           // [0xb1e3218] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGStaticMeshSpawnerSettings.SetInstancePackerType
	// void SetInstancePackerType(class UClass* InInstancePackerType);                                                       // [0xb1e2fc4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PCG.PCGSurfaceSamplerSettings
/// Size: 0x0030 (0x000150 - 0x000180)
class UPCGSurfaceSamplerSettings : public UPCGSettings
{ 
public:
	float                                              PointsPerSquaredMeter;                                      // 0x0150   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0154   (0x0004)  MISSED
	FVector                                            PointExtents;                                               // 0x0158   (0x0018)  
	float                                              Looseness;                                                  // 0x0170   (0x0004)  
	bool                                               bUnbounded;                                                 // 0x0174   (0x0001)  
	bool                                               bApplyDensityToPoints;                                      // 0x0175   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0176   (0x0002)  MISSED
	float                                              PointSteepness;                                             // 0x0178   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x017C   (0x0004)  MISSED
};

/// Class /Script/PCG.PCGTextureSamplerSettings
/// Size: 0x00E0 (0x000150 - 0x000230)
class UPCGTextureSamplerSettings : public UPCGSettings
{ 
public:
	FTransform                                         Transform;                                                  // 0x0150   (0x0060)  
	bool                                               bUseAbsoluteTransform;                                      // 0x01B0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x01B1   (0x0007)  MISSED
	SDK_UNDEFINED(32,14474) /* TWeakObjectPtr<UTexture*> */ __um(Texture);                                         // 0x01B8   (0x0020)  
	int32_t                                            TextureArrayIndex;                                          // 0x01D8   (0x0004)  
	EPCGTextureDensityFunction                         DensityFunction;                                            // 0x01DC   (0x0001)  
	EPCGTextureColorChannel                            ColorChannel;                                               // 0x01DD   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x01DE   (0x0002)  MISSED
	float                                              TexelSize;                                                  // 0x01E0   (0x0004)  
	bool                                               bUseAdvancedTiling;                                         // 0x01E4   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x01E5   (0x0003)  MISSED
	FVector2D                                          Tiling;                                                     // 0x01E8   (0x0010)  
	FVector2D                                          CenterOffset;                                               // 0x01F8   (0x0010)  
	float                                              Rotation;                                                   // 0x0208   (0x0004)  
	bool                                               bUseTileBounds;                                             // 0x020C   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x020D   (0x0003)  MISSED
	FVector2D                                          TileBoundsMin;                                              // 0x0210   (0x0010)  
	FVector2D                                          TileBoundsMax;                                              // 0x0220   (0x0010)  
};

/// Class /Script/PCG.PCGTransformPointsSettings
/// Size: 0x00B0 (0x000150 - 0x000200)
class UPCGTransformPointsSettings : public UPCGSettings
{ 
public:
	bool                                               bApplyToAttribute;                                          // 0x0150   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0151   (0x0003)  MISSED
	FName                                              AttributeName;                                              // 0x0154   (0x0004)  
	FVector                                            OffsetMin;                                                  // 0x0158   (0x0018)  
	FVector                                            OffsetMax;                                                  // 0x0170   (0x0018)  
	bool                                               bAbsoluteOffset;                                            // 0x0188   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0189   (0x0007)  MISSED
	FRotator                                           RotationMin;                                                // 0x0190   (0x0018)  
	FRotator                                           RotationMax;                                                // 0x01A8   (0x0018)  
	bool                                               bAbsoluteRotation;                                          // 0x01C0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x01C1   (0x0007)  MISSED
	FVector                                            ScaleMin;                                                   // 0x01C8   (0x0018)  
	FVector                                            ScaleMax;                                                   // 0x01E0   (0x0018)  
	bool                                               bAbsoluteScale;                                             // 0x01F8   (0x0001)  
	bool                                               bUniformScale;                                              // 0x01F9   (0x0001)  
	bool                                               bRecomputeSeed;                                             // 0x01FA   (0x0001)  
	unsigned char                                      UnknownData03_6[0x5];                                       // 0x01FB   (0x0005)  MISSED
};

/// Class /Script/PCG.PCGGetLandscapeSettings
/// Size: 0x0008 (0x000190 - 0x000198)
class UPCGGetLandscapeSettings : public UPCGDataFromActorSettings
{ 
public:
	FPCGLandscapeDataProps                             SamplingProperties;                                         // 0x0190   (0x0005)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0195   (0x0003)  MISSED
};

/// Class /Script/PCG.PCGGetSplineSettings
/// Size: 0x0000 (0x000190 - 0x000190)
class UPCGGetSplineSettings : public UPCGDataFromActorSettings
{ 
public:
};

/// Class /Script/PCG.PCGGetVolumeSettings
/// Size: 0x0000 (0x000190 - 0x000190)
class UPCGGetVolumeSettings : public UPCGDataFromActorSettings
{ 
public:
};

/// Class /Script/PCG.PCGGetPrimitiveSettings
/// Size: 0x0000 (0x000190 - 0x000190)
class UPCGGetPrimitiveSettings : public UPCGDataFromActorSettings
{ 
public:
};

/// Class /Script/PCG.PCGUnionSettings
/// Size: 0x0008 (0x000150 - 0x000158)
class UPCGUnionSettings : public UPCGSettings
{ 
public:
	EPCGUnionType                                      Type;                                                       // 0x0150   (0x0001)  
	EPCGUnionDensityFunction                           DensityFunction;                                            // 0x0151   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0152   (0x0006)  MISSED
};

/// Class /Script/PCG.PCGVolumeSamplerSettings
/// Size: 0x0020 (0x000150 - 0x000170)
class UPCGVolumeSamplerSettings : public UPCGSettings
{ 
public:
	FVector                                            VoxelSize;                                                  // 0x0150   (0x0018)  
	bool                                               bUnbounded;                                                 // 0x0168   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0169   (0x0003)  MISSED
	float                                              PointSteepness;                                             // 0x016C   (0x0004)  
};

/// Class /Script/PCG.PCGWorldQuerySettings
/// Size: 0x0078 (0x000150 - 0x0001C8)
class UPCGWorldQuerySettings : public UPCGSettings
{ 
public:
	FPCGWorldVolumetricQueryParams                     QueryParams;                                                // 0x0150   (0x0078)  
};

/// Class /Script/PCG.PCGWorldRayHitSettings
/// Size: 0x00B8 (0x000150 - 0x000208)
class UPCGWorldRayHitSettings : public UPCGSettings
{ 
public:
	FPCGWorldRayHitQueryParams                         QueryParams;                                                // 0x0150   (0x00B8)  
};

/// Class /Script/PCG.PCGLandscapeCache
/// Size: 0x00B8 (0x000028 - 0x0000E0)
class UPCGLandscapeCache : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	EPCGLandscapeCacheSerializationMode                SerializationMode;                                          // 0x0028   (0x0001)  
	EPCGLandscapeCacheSerializationContents            CookedSerializedContents;                                   // 0x0029   (0x0001)  
	unsigned char                                      UnknownData01_5[0x56];                                      // 0x002A   (0x0056)  MISSED
	SDK_UNDEFINED(80,14475) /* TSet<FName> */          __um(CachedLayerNames);                                     // 0x0080   (0x0050)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x00D0   (0x0010)  MISSED


	/// Functions
	// Function /Script/PCG.PCGLandscapeCache.PrimeCache
	// void PrimeCache();                                                                                                    // [0x3097b14] Final|Native|Public  
	// Function /Script/PCG.PCGLandscapeCache.ClearCache
	// void ClearCache();                                                                                                    // [0xb1e18e4] Final|Native|Public  
};

/// Class /Script/PCG.PCGPartitionActor
/// Size: 0x0108 (0x000290 - 0x000398)
class APCGPartitionActor : public APartitionActor
{ 
public:
	FGuid                                              PCGGuid;                                                    // 0x0290   (0x0010)  
	unsigned char                                      UnknownData00_5[0x50];                                      // 0x02A0   (0x0050)  MISSED
	SDK_UNDEFINED(80,14476) /* TMap<UPCGComponent*, TWeakObjectPtr<UPCGComponent*>> */ __um(LocalToOriginal);      // 0x02F0   (0x0050)  
	SDK_UNDEFINED(80,14477) /* TMap<UPCGComponent*, TWeakObjectPtr<UPCGComponent*>> */ __um(LoadedPreviewComponents); // 0x0340   (0x0050)  
	uint32_t                                           PCGGridSize;                                                // 0x0390   (0x0004)  
	bool                                               bUse2DGrid;                                                 // 0x0394   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0395   (0x0003)  MISSED


	/// Functions
	// Function /Script/PCG.PCGPartitionActor.GetOriginalComponent
	// class UPCGComponent* GetOriginalComponent(class UPCGComponent* LocalComponent);                                       // [0xb1e226c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGPartitionActor.GetLocalComponent
	// class UPCGComponent* GetLocalComponent(class UPCGComponent* OriginalComponent);                                       // [0xb1e21dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PCG.PCGActorHelpers
/// Size: 0x0000 (0x000028 - 0x000028)
class UPCGActorHelpers : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/PCG.PCGBlueprintHelpers
/// Size: 0x0000 (0x000028 - 0x000028)
class UPCGBlueprintHelpers : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PCG.PCGBlueprintHelpers.SetSeedFromPosition
	// void SetSeedFromPosition(FPCGPoint& InPoint);                                                                         // [0xb1e32ac] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGBlueprintHelpers.SetLocalCenter
	// void SetLocalCenter(FPCGPoint& InPoint, FVector& InLocalCenter);                                                      // [0xb1e3058] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGBlueprintHelpers.SetExtents
	// void SetExtents(FPCGPoint& InPoint, FVector& InExtents);                                                              // [0xb1e2e04] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGBlueprintHelpers.GetTransformedBounds
	// FBox GetTransformedBounds(FPCGPoint& InPoint);                                                                        // [0xb1e2cf4] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGBlueprintHelpers.GetTaskId
	// int64_t GetTaskId(FPCGContext& Context);                                                                              // [0xb1e2c50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGBlueprintHelpers.GetTargetActor
	// class AActor* GetTargetActor(FPCGContext& Context, class UPCGSpatialData* SpatialData);                               // [0xb1e2aa4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGBlueprintHelpers.GetSettings
	// class UPCGSettings* GetSettings(FPCGContext& Context);                                                                // [0xb1e2a00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGBlueprintHelpers.GetRandomStreamFromTwoPoints
	// FRandomStream GetRandomStreamFromTwoPoints(FPCGPoint& InPointA, FPCGPoint& InPointB, class UPCGSettings* OptionalSettings, class UPCGComponent* OptionalComponent); // [0xb1e2668] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGBlueprintHelpers.GetRandomStreamFromPoint
	// FRandomStream GetRandomStreamFromPoint(FPCGPoint& InPoint, class UPCGSettings* OptionalSettings, class UPCGComponent* OptionalComponent); // [0xb1e23a0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGBlueprintHelpers.GetOriginalComponent
	// class UPCGComponent* GetOriginalComponent(FPCGContext& Context);                                                      // [0xb1e22fc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGBlueprintHelpers.GetLocalCenter
	// FVector GetLocalCenter(FPCGPoint& InPoint);                                                                           // [0xb1e20e0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGBlueprintHelpers.GetInterpolatedPCGLandscapeLayerWeights
	// TArray<FPCGLandscapeLayerWeight> GetInterpolatedPCGLandscapeLayerWeights(class UObject* WorldContextObject, FVector& Location); // [0xb1e1f9c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGBlueprintHelpers.GetInputData
	// class UPCGData* GetInputData(FPCGContext& Context);                                                                   // [0xb1e1edc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGBlueprintHelpers.GetExtents
	// FVector GetExtents(FPCGPoint& InPoint);                                                                               // [0xb1e1de0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGBlueprintHelpers.GetComponent
	// class UPCGComponent* GetComponent(FPCGContext& Context);                                                              // [0xb1e1d38] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGBlueprintHelpers.GetActorLocalBoundsPCG
	// FBox GetActorLocalBoundsPCG(class AActor* InActor, bool bIgnorePCGCreatedComponents);                                 // [0xb1e1c58] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGBlueprintHelpers.GetActorData
	// class UPCGData* GetActorData(FPCGContext& Context);                                                                   // [0xb1e1b98] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGBlueprintHelpers.GetActorBoundsPCG
	// FBox GetActorBoundsPCG(class AActor* InActor, bool bIgnorePCGCreatedComponents);                                      // [0xb1e1ab8] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGBlueprintHelpers.CreatePCGDataFromActor
	// class UPCGData* CreatePCGDataFromActor(class AActor* InActor, bool bParseActor);                                      // [0xb1e19f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGBlueprintHelpers.ComputeSeedFromPosition
	// int32_t ComputeSeedFromPosition(FVector& InPosition);                                                                 // [0xb1e18f8] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/PCG.PCGInstanceDataPackerBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UPCGInstanceDataPackerBase : public UObject
{ 
public:


	/// Functions
	// Function /Script/PCG.PCGInstanceDataPackerBase.PackInstances
	// void PackInstances(FPCGContext& Context, class UPCGSpatialData* InSpatialData, FPCGMeshInstanceList& InstanceList, FPCGPackedCustomData& OutPackedCustomData); // [0xb29f894] Native|Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/PCG.PCGInstanceDataPackerBase.PackCustomDataFromAttributes
	// void PackCustomDataFromAttributes(FPCGMeshInstanceList& InstanceList, class UPCGMetadata* MetaData, TArray<FName>& AttributeNames, FPCGPackedCustomData& OutPackedCustomData); // [0xb29f61c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGInstanceDataPackerBase.AddTypeToPacking
	// bool AddTypeToPacking(int32_t TypeId, FPCGPackedCustomData& OutPackedCustomData);                                     // [0xb295294] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PCG.PCGInstanceDataPackerByAttribute
/// Size: 0x0010 (0x000028 - 0x000038)
class UPCGInstanceDataPackerByAttribute : public UPCGInstanceDataPackerBase
{ 
public:
	TArray<FName>                                      AttributeNames;                                             // 0x0028   (0x0010)  
};

/// Class /Script/PCG.PCGInstanceDataPackerByRegex
/// Size: 0x0010 (0x000028 - 0x000038)
class UPCGInstanceDataPackerByRegex : public UPCGInstanceDataPackerBase
{ 
public:
	SDK_UNDEFINED(16,14478) /* TArray<FString> */      __um(RegexPatterns);                                        // 0x0028   (0x0010)  
};

/// Class /Script/PCG.PCGMatchAndSetBase
/// Size: 0x0008 (0x000028 - 0x000030)
class UPCGMatchAndSetBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	EPCGMetadataTypes                                  Type;                                                       // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	EPCGMetadataTypesConstantStructStringMode          StringMode;                                                 // 0x002C   (0x0004)  


	/// Functions
	// Function /Script/PCG.PCGMatchAndSetBase.ValidatePreconditions
	// bool ValidatePreconditions(class UPCGPointData* InPointData);                                                         // [0xb2a8fb4] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/PCG.PCGMatchAndSetBase.MatchAndSet
	// void MatchAndSet(FPCGContext& Context, class UPCGPointMatchAndSetSettings* InSettings, class UPCGPointData* InPointData, class UPCGPointData* OutPointData); // [0xb29ebe8] Native|Event|Public|HasOutParms|BlueprintEvent|Const 
};

/// Struct /Script/PCG.PCGMatchAndSetByAttributeEntry
/// Size: 0x02C0 (0x000000 - 0x0002C0)
struct FPCGMatchAndSetByAttributeEntry
{ 
	FPCGMetadataTypesConstantStruct                    ValueToMatch;                                               // 0x0000   (0x0160)  
	FPCGMetadataTypesConstantStruct                    Value;                                                      // 0x0160   (0x0160)  
};

/// Class /Script/PCG.PCGMatchAndSetByAttribute
/// Size: 0x0020 (0x000030 - 0x000050)
class UPCGMatchAndSetByAttribute : public UPCGMatchAndSetBase
{ 
public:
	FName                                              MatchSourceAttribute;                                       // 0x0030   (0x0004)  
	EPCGMetadataTypes                                  MatchSourceType;                                            // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0035   (0x0003)  MISSED
	EPCGMetadataTypesConstantStructStringMode          MatchSourceStringMode;                                      // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x003C   (0x0004)  MISSED
	TArray<FPCGMatchAndSetByAttributeEntry>            Entries;                                                    // 0x0040   (0x0010)  
};

/// Struct /Script/PCG.PCGMatchAndSetWeightedEntry
/// Size: 0x0170 (0x000000 - 0x000170)
struct FPCGMatchAndSetWeightedEntry
{ 
	FPCGMetadataTypesConstantStruct                    Value;                                                      // 0x0000   (0x0160)  
	int32_t                                            Weight;                                                     // 0x0160   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0164   (0x000C)  MISSED
};

/// Class /Script/PCG.PCGMatchAndSetWeighted
/// Size: 0x0018 (0x000030 - 0x000048)
class UPCGMatchAndSetWeighted : public UPCGMatchAndSetBase
{ 
public:
	TArray<FPCGMatchAndSetWeightedEntry>               Entries;                                                    // 0x0030   (0x0010)  
	bool                                               bShouldMutateSeed;                                          // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0041   (0x0007)  MISSED
};

/// Struct /Script/PCG.PCGMatchAndSetWeightedByCategoryEntryList
/// Size: 0x0180 (0x000000 - 0x000180)
struct FPCGMatchAndSetWeightedByCategoryEntryList
{ 
	FPCGMetadataTypesConstantStruct                    CategoryValue;                                              // 0x0000   (0x0160)  
	bool                                               bIsDefault;                                                 // 0x0160   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0161   (0x0007)  MISSED
	TArray<FPCGMatchAndSetWeightedEntry>               WeightedEntries;                                            // 0x0168   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0178   (0x0008)  MISSED
};

/// Class /Script/PCG.PCGMatchAndSetWeightedByCategory
/// Size: 0x0028 (0x000030 - 0x000058)
class UPCGMatchAndSetWeightedByCategory : public UPCGMatchAndSetBase
{ 
public:
	FName                                              CategoryAttribute;                                          // 0x0030   (0x0004)  
	EPCGMetadataTypes                                  CategoryType;                                               // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0035   (0x0003)  MISSED
	EPCGMetadataTypesConstantStructStringMode          CategoryStringMode;                                         // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x003C   (0x0004)  MISSED
	TArray<FPCGMatchAndSetWeightedByCategoryEntryList> Categories;                                                 // 0x0040   (0x0010)  
	bool                                               bShouldMutateSeed;                                          // 0x0050   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0051   (0x0007)  MISSED
};

/// Class /Script/PCG.PCGMeshSelectorBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UPCGMeshSelectorBase : public UObject
{ 
public:
};

/// Class /Script/PCG.PCGMeshSelectorByAttribute
/// Size: 0x0260 (0x000028 - 0x000288)
class UPCGMeshSelectorByAttribute : public UPCGMeshSelectorBase
{ 
public:
	FName                                              AttributeName;                                              // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	FSoftISMComponentDescriptor                        TemplateDescriptor;                                         // 0x0030   (0x0240)  
	bool                                               bUseAttributeMaterialOverrides;                             // 0x0270   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0271   (0x0007)  MISSED
	TArray<FName>                                      MaterialOverrideAttributes;                                 // 0x0278   (0x0010)  
};

/// Struct /Script/PCG.PCGMeshSelectorWeightedEntry
/// Size: 0x0248 (0x000000 - 0x000248)
struct FPCGMeshSelectorWeightedEntry
{ 
	FSoftISMComponentDescriptor                        Descriptor;                                                 // 0x0000   (0x0240)  
	int32_t                                            Weight;                                                     // 0x0240   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0244   (0x0004)  MISSED
};

/// Class /Script/PCG.PCGMeshSelectorWeighted
/// Size: 0x0028 (0x000028 - 0x000050)
class UPCGMeshSelectorWeighted : public UPCGMeshSelectorBase
{ 
public:
	TArray<FPCGMeshSelectorWeightedEntry>              MeshEntries;                                                // 0x0028   (0x0010)  
	bool                                               bUseAttributeMaterialOverrides;                             // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	TArray<FName>                                      MaterialOverrideAttributes;                                 // 0x0040   (0x0010)  
};

/// Struct /Script/PCG.PCGWeightedByCategoryEntryList
/// Size: 0x0028 (0x000000 - 0x000028)
struct FPCGWeightedByCategoryEntryList
{ 
	SDK_UNDEFINED(16,14479) /* FString */              __um(CategoryEntry);                                        // 0x0000   (0x0010)  
	bool                                               IsDefault;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0011   (0x0007)  MISSED
	TArray<FPCGMeshSelectorWeightedEntry>              WeightedMeshEntries;                                        // 0x0018   (0x0010)  
};

/// Class /Script/PCG.PCGMeshSelectorWeightedByCategory
/// Size: 0x0030 (0x000028 - 0x000058)
class UPCGMeshSelectorWeightedByCategory : public UPCGMeshSelectorBase
{ 
public:
	FName                                              CategoryAttribute;                                          // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	TArray<FPCGWeightedByCategoryEntryList>            Entries;                                                    // 0x0030   (0x0010)  
	bool                                               bUseAttributeMaterialOverrides;                             // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0041   (0x0007)  MISSED
	TArray<FName>                                      MaterialOverrideAttributes;                                 // 0x0048   (0x0010)  
};

/// Class /Script/PCG.PCGMetadata
/// Size: 0x00E0 (0x000028 - 0x000108)
class UPCGMetadata : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class UPCGMetadata*                                Parent;                                                     // 0x0028   (0x0008)  
	SDK_UNDEFINED(80,14480) /* TSet<TWeakObjectPtr<UPCGMetadata*>> */ __um(OtherParents);                          // 0x0030   (0x0050)  
	unsigned char                                      UnknownData01_6[0x88];                                      // 0x0080   (0x0088)  MISSED


	/// Functions
	// Function /Script/PCG.PCGMetadata.SetPointAttributes
	// void SetPointAttributes(FPCGPoint& Point, class UPCGMetadata* MetaData, FPCGPoint& OutPoint);                         // [0xb2a3014] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.SetAttributesByKey
	// void SetAttributesByKey(int64_t Key, class UPCGMetadata* InMetaData, int64_t TargetKey, int64_t& OutKey);             // [0xb2a031c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.ResetWeightedAttributesByKey
	// void ResetWeightedAttributesByKey(int64_t TargetKey, int64_t& OutKey);                                                // [0xb29fcb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.ResetPointWeightedAttributes
	// void ResetPointWeightedAttributes(FPCGPoint& OutPoint);                                                               // [0xb29fbec] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.RenameAttribute
	// bool RenameAttribute(FName AttributeToRename, FName NewAttributeName);                                                // [0xb29fb2c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.MergePointAttributes
	// void MergePointAttributes(FPCGPoint& PointA, class UPCGMetadata* MetadataA, FPCGPoint& PointB, class UPCGMetadata* MetadataB, FPCGPoint& TargetPoint, EPCGMetadataOp Op); // [0xb29f19c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.MergeAttributesByKey
	// void MergeAttributesByKey(int64_t KeyA, class UPCGMetadata* MetadataA, int64_t KeyB, class UPCGMetadata* MetadataB, int64_t TargetKey, EPCGMetadataOp Op, int64_t& OutKey); // [0xb29ef84] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.InitializeWithAttributeFilter
	// void InitializeWithAttributeFilter(class UPCGMetadata* InParent, TSet<FName>& InFilteredAttributes, EPCGMetadataFilterMode InFilterMode); // [0xb29e968] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.InitializeAsCopyWithAttributeFilter
	// void InitializeAsCopyWithAttributeFilter(class UPCGMetadata* InMetadataToCopy, TSet<FName>& InFilteredAttributes, EPCGMetadataFilterMode InFilterMode); // [0xb29dfc4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.InitializeAsCopy
	// void InitializeAsCopy(class UPCGMetadata* InMetadataToCopy);                                                          // [0xb29df44] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.Initialize
	// void Initialize(class UPCGMetadata* InParent);                                                                        // [0xb29dec4] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.HasCommonAttributes
	// bool HasCommonAttributes(class UPCGMetadata* InMetaData);                                                             // [0xb29dd58] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGMetadata.HasAttribute
	// bool HasAttribute(FName AttributeName);                                                                               // [0xb29d910] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGMetadata.GetAttributes
	// void GetAttributes(TArray<FName>& AttributeNames, TArray<EPCGMetadataTypes>& AttributeTypes);                         // [0xb29905c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGMetadata.Flatten
	// void Flatten();                                                                                                       // [0xb298fc8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.DeleteAttribute
	// void DeleteAttribute(FName AttributeName);                                                                            // [0xb298f48] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.CreateVectorAttribute
	// class UPCGMetadata* CreateVectorAttribute(FName AttributeName, FVector DefaultValue, bool bAllowsInterpolation, bool bOverrideParent); // [0xb298bc8] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.CreateVector4Attribute
	// class UPCGMetadata* CreateVector4Attribute(FName AttributeName, FVector4 DefaultValue, bool bAllowsInterpolation, bool bOverrideParent); // [0xb298838] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.CreateVector2Attribute
	// class UPCGMetadata* CreateVector2Attribute(FName AttributeName, FVector2D DefaultValue, bool bAllowsInterpolation, bool bOverrideParent); // [0xb2984c0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.CreateTransformAttribute
	// class UPCGMetadata* CreateTransformAttribute(FName AttributeName, FTransform DefaultValue, bool bAllowsInterpolation, bool bOverrideParent); // [0xb2980a4] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.CreateStringAttribute
	// class UPCGMetadata* CreateStringAttribute(FName AttributeName, FString DefaultValue, bool bAllowsInterpolation, bool bOverrideParent); // [0xb297938] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.CreateSoftObjectPathAttribute
	// class UPCGMetadata* CreateSoftObjectPathAttribute(FName AttributeName, FSoftObjectPath& DefaultValue, bool bAllowsInterpolation, bool bOverrideParent); // [0xb297668] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.CreateSoftClassPathAttribute
	// class UPCGMetadata* CreateSoftClassPathAttribute(FName AttributeName, FSoftClassPath& DefaultValue, bool bAllowsInterpolation, bool bOverrideParent); // [0xb296d78] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.CreateRotatorAttribute
	// class UPCGMetadata* CreateRotatorAttribute(FName AttributeName, FRotator DefaultValue, bool bAllowsInterpolation, bool bOverrideParent); // [0xb2969f8] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.CreateQuatAttribute
	// class UPCGMetadata* CreateQuatAttribute(FName AttributeName, FQuat DefaultValue, bool bAllowsInterpolation, bool bOverrideParent); // [0xb29667c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.CreateNameAttribute
	// class UPCGMetadata* CreateNameAttribute(FName AttributeName, FName DefaultValue, bool bAllowsInterpolation, bool bOverrideParent); // [0xb296530] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.CreateInteger64Attribute
	// class UPCGMetadata* CreateInteger64Attribute(FName AttributeName, int64_t DefaultValue, bool bAllowsInterpolation, bool bOverrideParent); // [0xb2963e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.CreateInteger32Attribute
	// class UPCGMetadata* CreateInteger32Attribute(FName AttributeName, int32_t DefaultValue, bool bAllowsInterpolation, bool bOverrideParent); // [0xb296290] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.CreateFloatAttribute
	// class UPCGMetadata* CreateFloatAttribute(FName AttributeName, float DefaultValue, bool bAllowsInterpolation, bool bOverrideParent); // [0xb296140] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.CreateDoubleAttribute
	// class UPCGMetadata* CreateDoubleAttribute(FName AttributeName, double DefaultValue, bool bAllowsInterpolation, bool bOverrideParent); // [0xb295fe8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.CreateBoolAttribute
	// class UPCGMetadata* CreateBoolAttribute(FName AttributeName, bool DefaultValue, bool bAllowsInterpolation, bool bOverrideParent); // [0xb295e90] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.CopyExistingAttribute
	// bool CopyExistingAttribute(FName AttributeToCopy, FName NewAttributeName, bool bKeepParent);                          // [0xb29596c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.CopyAttributes
	// void CopyAttributes(class UPCGMetadata* InOther);                                                                     // [0xb2957c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.CopyAttribute
	// void CopyAttribute(class UPCGMetadata* InOther, FName AttributeToCopy, FName NewAttributeName);                       // [0xb295640] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.ClearAttribute
	// void ClearAttribute(FName AttributeToClear);                                                                          // [0xb295530] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.AddEntry
	// int64_t AddEntry(int64_t ParentEntryKey);                                                                             // [0xb295124] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.AddAttributesFiltered
	// void AddAttributesFiltered(class UPCGMetadata* InOther, TSet<FName>& InFilteredAttributes, EPCGMetadataFilterMode InFilterMode); // [0xb294c80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.AddAttributes
	// void AddAttributes(class UPCGMetadata* InOther);                                                                      // [0xb294c00] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.AddAttribute
	// void AddAttribute(class UPCGMetadata* InOther, FName AttributeName);                                                  // [0xb294a54] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.AccumulateWeightedAttributesByKey
	// void AccumulateWeightedAttributesByKey(int64_t Key, class UPCGMetadata* MetaData, float Weight, bool bSetNonInterpolableAttributes, int64_t TargetKey, int64_t& OutKey); // [0xb2946c8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.AccumulatePointWeightedAttributes
	// void AccumulatePointWeightedAttributes(FPCGPoint& InPoint, class UPCGMetadata* InMetaData, float Weight, bool bSetNonInterpolableAttributes, FPCGPoint& OutPoint); // [0xb2940e8] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/PCG.PCGMetadataAccessorHelpers
/// Size: 0x0000 (0x000028 - 0x000028)
class UPCGMetadataAccessorHelpers : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetVectorAttributeByMetadataKey
	// void SetVectorAttributeByMetadataKey(int64_t& Key, class UPCGMetadata* MetaData, FName AttributeName, FVector& Value); // [0xb2a8c7c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetVectorAttribute
	// void SetVectorAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName, FVector& Value);         // [0xb2a88f0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetVector4AttributeByMetadataKey
	// void SetVector4AttributeByMetadataKey(int64_t& Key, class UPCGMetadata* MetaData, FName AttributeName, FVector4& Value); // [0xb2a8650] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetVector4Attribute
	// void SetVector4Attribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName, FVector4& Value);       // [0xb2a8370] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetVector2AttributeByMetadataKey
	// void SetVector2AttributeByMetadataKey(int64_t& Key, class UPCGMetadata* MetaData, FName AttributeName, FVector2D& Value); // [0xb2a80e4] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetVector2Attribute
	// void SetVector2Attribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName, FVector2D& Value);      // [0xb2a7e18] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetTransformAttributeByMetadataKey
	// void SetTransformAttributeByMetadataKey(int64_t& Key, class UPCGMetadata* MetaData, FName AttributeName, FTransform& Value); // [0xb2a7a6c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetTransformAttribute
	// void SetTransformAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName, FTransform& Value);   // [0xb2a769c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetStringAttributeByMetadataKey
	// void SetStringAttributeByMetadataKey(int64_t& Key, class UPCGMetadata* MetaData, FName AttributeName, FString Value); // [0xb2a6d08] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetStringAttribute
	// void SetStringAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName, FString Value);          // [0xb2a6320] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetSoftObjectPathAttributeByMetadataKey
	// void SetSoftObjectPathAttributeByMetadataKey(int64_t& Key, class UPCGMetadata* MetaData, FName AttributeName, FSoftObjectPath& Value); // [0xb2a5a58] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetSoftObjectPathAttribute
	// void SetSoftObjectPathAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName, FSoftObjectPath& Value); // [0xb2a514c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetSoftClassPathAttributeByMetadataKey
	// void SetSoftClassPathAttributeByMetadataKey(int64_t& Key, class UPCGMetadata* MetaData, FName AttributeName, FSoftClassPath& Value); // [0xb2a4884] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetSoftClassPathAttribute
	// void SetSoftClassPathAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName, FSoftClassPath& Value); // [0xb2a3f78] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetRotatorAttributeByMetadataKey
	// void SetRotatorAttributeByMetadataKey(int64_t& Key, class UPCGMetadata* MetaData, FName AttributeName, FRotator& Value); // [0xb2a3c68] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetRotatorAttribute
	// void SetRotatorAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName, FRotator& Value);       // [0xb2a3908] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetQuatAttributeByMetadataKey
	// void SetQuatAttributeByMetadataKey(int64_t& Key, class UPCGMetadata* MetaData, FName AttributeName, FQuat& Value);    // [0xb2a367c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetQuatAttribute
	// void SetQuatAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName, FQuat& Value);             // [0xb2a33b0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetNameAttribute
	// void SetNameAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName, FName& Value);             // [0xb2a2a70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetInteger64AttributeByMetadataKey
	// void SetInteger64AttributeByMetadataKey(int64_t& Key, class UPCGMetadata* MetaData, FName AttributeName, int64_t Value); // [0xb2a2704] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetInteger64Attribute
	// void SetInteger64Attribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName, int64_t Value);       // [0xb2a2344] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetInteger32AttributeByMetadataKey
	// void SetInteger32AttributeByMetadataKey(int64_t& Key, class UPCGMetadata* MetaData, FName AttributeName, int32_t Value); // [0xb2a1fdc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetInteger32Attribute
	// void SetInteger32Attribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName, int32_t Value);       // [0xb2a1c20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetFloatAttributeByMetadataKey
	// void SetFloatAttributeByMetadataKey(int64_t& Key, class UPCGMetadata* MetaData, FName AttributeName, float Value);    // [0xb2a18c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetFloatAttribute
	// void SetFloatAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName, float Value);             // [0xb2a150c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetDoubleAttributeByMetadataKey
	// void SetDoubleAttributeByMetadataKey(int64_t& Key, class UPCGMetadata* MetaData, FName AttributeName, double Value);  // [0xb2a10d4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetDoubleAttribute
	// void SetDoubleAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName, double Value);           // [0xb2a0d10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetBoolAttributeByMetadataKey
	// void SetBoolAttributeByMetadataKey(int64_t& Key, class UPCGMetadata* MetaData, FName AttributeName, bool Value);      // [0xb2a09a4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetBoolAttribute
	// void SetBoolAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName, bool Value);               // [0xb2a05e4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetAttributeFromPropertyByMetadataKey
	// bool SetAttributeFromPropertyByMetadataKey(int64_t& Key, class UPCGMetadata* MetaData, FName AttributeName, class UObject* Object, FName PropertyName); // [0xb29fd84] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.InitializeMetadata
	// void InitializeMetadata(FPCGPoint& Point, class UPCGMetadata* MetaData, FPCGPoint& ParentPoint, class UPCGMetadata* ParentMetadata); // [0xb29e464] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.HasAttributeSetByMetadataKey
	// bool HasAttributeSetByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, FName AttributeName);                    // [0xb29dc60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.HasAttributeSet
	// bool HasAttributeSet(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName);                            // [0xb29d99c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetVectorAttributeByMetadataKey
	// FVector GetVectorAttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, FName AttributeName);              // [0xb29d804] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetVectorAttribute
	// FVector GetVectorAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName);                      // [0xb29d528] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetVector4AttributeByMetadataKey
	// FVector4 GetVector4AttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, FName AttributeName);            // [0xb29d420] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetVector4Attribute
	// FVector4 GetVector4Attribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName);                    // [0xb29d148] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetVector2AttributeByMetadataKey
	// FVector2D GetVector2AttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, FName AttributeName);           // [0xb29d048] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetVector2Attribute
	// FVector2D GetVector2Attribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName);                   // [0xb29cd78] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetTransformAttributeByMetadataKey
	// FTransform GetTransformAttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, FName AttributeName);        // [0xb29cc2c] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetTransformAttribute
	// FTransform GetTransformAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName);                // [0xb29c934] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetStringAttributeByMetadataKey
	// FString GetStringAttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, FName AttributeName);              // [0xb29c824] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetStringAttribute
	// FString GetStringAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName);                      // [0xb29c548] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetSoftObjectPathAttributeByMetadataKey
	// FSoftObjectPath GetSoftObjectPathAttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, FName AttributeName); // [0xb29c428] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetSoftObjectPathAttribute
	// FSoftObjectPath GetSoftObjectPathAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName);      // [0xb29c14c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetSoftClassPathAttributeByMetadataKey
	// FSoftClassPath GetSoftClassPathAttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, FName AttributeName); // [0xb29c02c] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetSoftClassPathAttribute
	// FSoftClassPath GetSoftClassPathAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName);        // [0xb29bd50] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetRotatorAttributeByMetadataKey
	// FRotator GetRotatorAttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, FName AttributeName);            // [0xb29bc2c] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetRotatorAttribute
	// FRotator GetRotatorAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName);                    // [0xb29b950] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetQuatAttributeByMetadataKey
	// FQuat GetQuatAttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, FName AttributeName);                  // [0xb29b848] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetQuatAttribute
	// FQuat GetQuatAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName);                          // [0xb29b570] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetNameAttribute
	// FName GetNameAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName);                          // [0xb29b018] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetInteger64AttributeByMetadataKey
	// int64_t GetInteger64AttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, FName AttributeName);           // [0xb29af20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetInteger64Attribute
	// int64_t GetInteger64Attribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName);                   // [0xb29ac5c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetInteger32AttributeByMetadataKey
	// int32_t GetInteger32AttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, FName AttributeName);           // [0xb29ab64] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetInteger32Attribute
	// int32_t GetInteger32Attribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName);                   // [0xb29a8a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetFloatAttributeByMetadataKey
	// float GetFloatAttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, FName AttributeName);                 // [0xb29a78c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetFloatAttribute
	// float GetFloatAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName);                         // [0xb29a4c8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetDoubleAttributeByMetadataKey
	// double GetDoubleAttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, FName AttributeName);               // [0xb29a3b8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetDoubleAttribute
	// double GetDoubleAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName);                       // [0xb29a0f4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetBoolAttributeByMetadataKey
	// bool GetBoolAttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, FName AttributeName);                   // [0xb299ffc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetBoolAttribute
	// bool GetBoolAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName);                           // [0xb299d38] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.CopyPoint
	// void CopyPoint(FPCGPoint& InPoint, FPCGPoint& OutPoint, bool bCopyMetadata, class UPCGMetadata* InMetaData, class UPCGMetadata* OutMetadata); // [0xb295a74] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/PCG.PCGRuntimeGenerationRadii
/// Size: 0x0060 (0x000000 - 0x000060)
struct FPCGRuntimeGenerationRadii
{ 
	double                                             GenerationRadius;                                           // 0x0000   (0x0008)  
	double                                             GenerationRadius400;                                        // 0x0008   (0x0008)  
	double                                             GenerationRadius800;                                        // 0x0010   (0x0008)  
	double                                             GenerationRadius1600;                                       // 0x0018   (0x0008)  
	double                                             GenerationRadius3200;                                       // 0x0020   (0x0008)  
	double                                             GenerationRadius6400;                                       // 0x0028   (0x0008)  
	double                                             GenerationRadius12800;                                      // 0x0030   (0x0008)  
	double                                             GenerationRadius25600;                                      // 0x0038   (0x0008)  
	double                                             GenerationRadius51200;                                      // 0x0040   (0x0008)  
	double                                             GenerationRadius102400;                                     // 0x0048   (0x0008)  
	double                                             GenerationRadius204800;                                     // 0x0050   (0x0008)  
	double                                             CleanupRadiusMultiplier;                                    // 0x0058   (0x0008)  
};

/// Struct /Script/PCG.PCGTaggedData
/// Size: 0x0060 (0x000000 - 0x000060)
struct FPCGTaggedData
{ 
	class UPCGData*                                    Data;                                                       // 0x0000   (0x0008)  
	SDK_UNDEFINED(80,14481) /* TSet<FString> */        __um(Tags);                                                 // 0x0008   (0x0050)  
	FName                                              Pin;                                                        // 0x0058   (0x0004)  
	bool                                               bPinlessData;                                               // 0x005C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x005D   (0x0003)  MISSED
};

/// Struct /Script/PCG.PCGDataCollection
/// Size: 0x0020 (0x000000 - 0x000020)
struct FPCGDataCollection
{ 
	TArray<FPCGTaggedData>                             TaggedData;                                                 // 0x0000   (0x0010)  
	bool                                               bCancelExecutionOnEmpty;                                    // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0011   (0x000F)  MISSED
};

/// Class /Script/PCG.PCGComponent
/// Size: 0x01D0 (0x0000A0 - 0x000270)
class UPCGComponent : public UActorComponent
{ 
public:
	int32_t                                            Seed;                                                       // 0x00A0   (0x0004)  
	bool                                               bActivated;                                                 // 0x00A4   (0x0001)  
	bool                                               bIsComponentPartitioned;                                    // 0x00A5   (0x0001)  
	EPCGComponentGenerationTrigger                     GenerationTrigger;                                          // 0x00A6   (0x0001)  
	bool                                               bOverrideGenerationRadii;                                   // 0x00A7   (0x0001)  
	FPCGRuntimeGenerationRadii                         GenerationRadii;                                            // 0x00A8   (0x0060)  
	class UClass*                                      SchedulingPolicyClass;                                      // 0x0108   (0x0008)  
	class UPCGSchedulingPolicyBase*                    SchedulingPolicy;                                           // 0x0110   (0x0008)  
	bool                                               bGenerated;                                                 // 0x0118   (0x0001)  
	bool                                               bRuntimeGenerated;                                          // 0x0119   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x011A   (0x0006)  MISSED
	TArray<FName>                                      PostGenerateFunctionNames;                                  // 0x0120   (0x0010)  
	class UPCGGraphInstance*                           GraphInstance;                                              // 0x0130   (0x0008)  
	uint32_t                                           GenerationGridSize;                                         // 0x0138   (0x0004)  
	EPCGEditorDirtyMode                                CurrentEditingMode;                                         // 0x013C   (0x0001)  
	EPCGEditorDirtyMode                                SerializedEditingMode;                                      // 0x013D   (0x0001)  
	EPCGComponentInput                                 InputType;                                                  // 0x013E   (0x0001)  
	bool                                               bParseActorComponents;                                      // 0x013F   (0x0001)  
	class UPCGData*                                    CachedPCGData;                                              // 0x0140   (0x0008)  
	class UPCGData*                                    CachedInputData;                                            // 0x0148   (0x0008)  
	class UPCGData*                                    CachedActorData;                                            // 0x0150   (0x0008)  
	class UPCGData*                                    CachedLandscapeData;                                        // 0x0158   (0x0008)  
	class UPCGData*                                    CachedLandscapeHeightData;                                  // 0x0160   (0x0008)  
	TArray<class UPCGManagedResource*>                 GeneratedResources;                                         // 0x0168   (0x0010)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0178   (0x0008)  MISSED
	FBox                                               LastGeneratedBounds;                                        // 0x0180   (0x0038)  
	FPCGDataCollection                                 GeneratedGraphOutput;                                       // 0x01B8   (0x0020)  
	SDK_UNDEFINED(80,14482) /* TMap<FString, FPCGDataCollection> */ __um(PerPinGeneratedOutput);                   // 0x01D8   (0x0050)  
	unsigned char                                      UnknownData02_5[0x18];                                      // 0x0228   (0x0018)  MISSED
	bool                                               bIsComponentLocal;                                          // 0x0240   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2F];                                      // 0x0241   (0x002F)  MISSED


	/// Functions
	// Function /Script/PCG.PCGComponent.SetGraph
	// void SetGraph(class UPCGGraphInterface* InGraph);                                                                     // [0x80ff048] Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable 
	// Function /Script/PCG.PCGComponent.SetEditingMode
	// void SetEditingMode(EPCGEditorDirtyMode InEditingMode, EPCGEditorDirtyMode InSerializedEditingMode);                  // [0xb2a1444] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGComponent.NotifyPropertiesChangedFromBlueprint
	// void NotifyPropertiesChangedFromBlueprint();                                                                          // [0x3097b14] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGComponent.GetSerializedEditingMode
	// EPCGEditorDirtyMode GetSerializedEditingMode();                                                                       // [0xb29bd38] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGComponent.GetGeneratedGraphOutput
	// FPCGDataCollection GetGeneratedGraphOutput();                                                                         // [0xb29a884] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGComponent.GetEditingMode
	// EPCGEditorDirtyMode GetEditingMode();                                                                                 // [0xb29a4b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGComponent.GenerateLocal
	// void GenerateLocal(bool bForce);                                                                                      // [0xb298fdc] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGComponent.Generate
	// void Generate(bool bForce);                                                                                           // [0x6deb2e8] Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable 
	// Function /Script/PCG.PCGComponent.ClearPCGLink
	// class AActor* ClearPCGLink(class UClass* TemplateActor);                                                              // [0xb2955b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGComponent.CleanupLocal
	// void CleanupLocal(bool bRemoveComponents, bool bSave);                                                                // [0xb295474] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGComponent.Cleanup
	// void Cleanup(bool bRemoveComponents, bool bSave);                                                                     // [0xb2953ac] Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable 
	// Function /Script/PCG.PCGComponent.AddToManagedResources
	// void AddToManagedResources(class UPCGManagedResource* InResource);                                                    // [0xb2951b4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PCG.PCGDataFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UPCGDataFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PCG.PCGDataFunctionLibrary.GetTypedInputsByTag
	// TArray<UPCGData*> GetTypedInputsByTag(FPCGDataCollection& InCollection, FString InTag, TArray<FPCGTaggedData>& OutTaggedData, class UClass* InDataTypeClass); // [0xb2c6a3c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGDataFunctionLibrary.GetTypedInputsByPinLabel
	// TArray<UPCGData*> GetTypedInputsByPinLabel(FPCGDataCollection& InCollection, FName InPinLabel, TArray<FPCGTaggedData>& OutTaggedData, class UClass* InDataTypeClass); // [0xb2c6100] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGDataFunctionLibrary.GetTypedInputsByPin
	// TArray<UPCGData*> GetTypedInputsByPin(FPCGDataCollection& InCollection, FPCGPinProperties& InPin, TArray<FPCGTaggedData>& OutTaggedData, class UClass* InDataTypeClass); // [0xb2c583c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGDataFunctionLibrary.GetTypedInputs
	// TArray<UPCGData*> GetTypedInputs(FPCGDataCollection& InCollection, TArray<FPCGTaggedData>& OutTaggedData, class UClass* InDataTypeClass); // [0xb2c4fac] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGDataFunctionLibrary.GetParamsByTag
	// TArray<FPCGTaggedData> GetParamsByTag(FPCGDataCollection& InCollection, FString InTag);                               // [0xb2c4794] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGDataFunctionLibrary.GetParamsByPinLabel
	// TArray<FPCGTaggedData> GetParamsByPinLabel(FPCGDataCollection& InCollection, FName InPinLabel);                       // [0xb2c45a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGDataFunctionLibrary.GetParams
	// TArray<FPCGTaggedData> GetParams(FPCGDataCollection& InCollection);                                                   // [0xb2c44b8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGDataFunctionLibrary.GetInputsByTag
	// TArray<FPCGTaggedData> GetInputsByTag(FPCGDataCollection& InCollection, FString InTag);                               // [0xb2c3cc4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGDataFunctionLibrary.GetInputsByPinLabel
	// TArray<FPCGTaggedData> GetInputsByPinLabel(FPCGDataCollection& InCollection, FName InPinLabel);                       // [0xb2c3ad0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGDataFunctionLibrary.GetInputs
	// TArray<FPCGTaggedData> GetInputs(FPCGDataCollection& InCollection);                                                   // [0xb2c39e8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGDataFunctionLibrary.GetAllSettings
	// TArray<FPCGTaggedData> GetAllSettings(FPCGDataCollection& InCollection);                                              // [0xb2c38dc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGDataFunctionLibrary.AddToCollection
	// void AddToCollection(FPCGDataCollection& InCollection, class UPCGData* InData, FName InPinLabel, TArray<FString> InTags); // [0xb2c2f68] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/PCG.PCGEdge
/// Size: 0x0030 (0x000028 - 0x000058)
class UPCGEdge : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FName                                              InboundLabel;                                               // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	class UPCGNode*                                    InboundNode;                                                // 0x0030   (0x0008)  
	FName                                              OutboundLabel;                                              // 0x0038   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x003C   (0x0004)  MISSED
	class UPCGNode*                                    OutboundNode;                                               // 0x0040   (0x0008)  
	class UPCGPin*                                     InputPin;                                                   // 0x0048   (0x0008)  
	class UPCGPin*                                     OutputPin;                                                  // 0x0050   (0x0008)  
};

/// Class /Script/PCG.PCGGraphInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UPCGGraphInterface : public UObject
{ 
public:


	/// Functions
	// Function /Script/PCG.PCGGraphInterface.GetMutablePCGGraph
	// class UPCGGraph* GetMutablePCGGraph();                                                                                // [0x7ddeb78] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphInterface.GetConstPCGGraph
	// class UPCGGraph* GetConstPCGGraph();                                                                                  // [0x27ccc08] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PCG.PCGGraph
/// Size: 0x0100 (0x000028 - 0x000128)
class UPCGGraph : public UPCGGraphInterface
{ 
public:
	bool                                               bLandscapeUsesMetadata;                                     // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	TArray<class UPCGNode*>                            Nodes;                                                      // 0x0030   (0x0010)  
	class UPCGNode*                                    InputNode;                                                  // 0x0040   (0x0008)  
	class UPCGNode*                                    OutputNode;                                                 // 0x0048   (0x0008)  
	FInstancedPropertyBag                              UserParameters;                                             // 0x0050   (0x0010)  
	bool                                               bUseHierarchicalGeneration;                                 // 0x0060   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0061   (0x0003)  MISSED
	EPCGHiGenGrid                                      HiGenGridSize;                                              // 0x0064   (0x0004)  
	unsigned char                                      UnknownData02_5[0x58];                                      // 0x0068   (0x0058)  MISSED
	bool                                               bIsEditorOnly;                                              // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x00C1   (0x0007)  MISSED
	FPCGRuntimeGenerationRadii                         GenerationRadii;                                            // 0x00C8   (0x0060)  


	/// Functions
	// Function /Script/PCG.PCGGraph.RemoveNodes
	// void RemoveNodes(TArray<UPCGNode*>& InNodes);                                                                         // [0xb2c7898] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGGraph.RemoveNode
	// void RemoveNode(class UPCGNode* InNode);                                                                              // [0xb2c7818] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraph.RemoveEdge
	// bool RemoveEdge(class UPCGNode* From, FName& FromLabel, class UPCGNode* To, FName& ToLabel);                          // [0xb2c7594] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGGraph.GetOutputNode
	// class UPCGNode* GetOutputNode();                                                                                      // [0x9855910] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGGraph.GetInputNode
	// class UPCGNode* GetInputNode();                                                                                       // [0x5e4f978] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGGraph.AddNodeOfType
	// class UPCGNode* AddNodeOfType(class UClass* InSettingsClass, class UPCGSettings*& DefaultNodeSettings);               // [0xb2c2e14] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGGraph.AddNodeInstance
	// class UPCGNode* AddNodeInstance(class UPCGSettings* InSettings);                                                      // [0xb2c2d2c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraph.AddNodeCopy
	// class UPCGNode* AddNodeCopy(class UPCGSettings* InSettings, class UPCGSettings*& DefaultNodeSettings);                // [0xb2c2bf8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGGraph.AddEdge
	// class UPCGNode* AddEdge(class UPCGNode* From, FName& FromPinLabel, class UPCGNode* To, FName& ToPinLabel);            // [0xb2c2974] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/PCG.PCGOverrideInstancedPropertyBag
/// Size: 0x0060 (0x000000 - 0x000060)
struct FPCGOverrideInstancedPropertyBag
{ 
	FInstancedPropertyBag                              Parameters;                                                 // 0x0000   (0x0010)  
	SDK_UNDEFINED(80,14483) /* TSet<FGuid> */          __um(PropertiesIDsOverridden);                              // 0x0010   (0x0050)  
};

/// Class /Script/PCG.PCGGraphInstance
/// Size: 0x0068 (0x000028 - 0x000090)
class UPCGGraphInstance : public UPCGGraphInterface
{ 
public:
	class UPCGGraphInterface*                          Graph;                                                      // 0x0028   (0x0008)  
	FPCGOverrideInstancedPropertyBag                   ParametersOverrides;                                        // 0x0030   (0x0060)  
};

/// Class /Script/PCG.PCGGraphInputOutputSettings
/// Size: 0x00A8 (0x000150 - 0x0001F8)
class UPCGGraphInputOutputSettings : public UPCGSettings
{ 
public:
	SDK_UNDEFINED(80,14484) /* TSet<FName> */          __um(PinLabels);                                            // 0x0150   (0x0050)  
	TArray<FPCGPinProperties>                          CustomPins;                                                 // 0x01A0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x48];                                      // 0x01B0   (0x0048)  MISSED
};

/// Struct /Script/PCG.PCGCrc
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPCGCrc
{ 
	uint32_t                                           Value;                                                      // 0x0000   (0x0004)  
	bool                                               bValid;                                                     // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Class /Script/PCG.PCGManagedResource
/// Size: 0x0010 (0x000028 - 0x000038)
class UPCGManagedResource : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FPCGCrc                                            Crc;                                                        // 0x0028   (0x0008)  
	bool                                               bIsMarkedUnused;                                            // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Class /Script/PCG.PCGManagedActors
/// Size: 0x0050 (0x000038 - 0x000088)
class UPCGManagedActors : public UPCGManagedResource
{ 
public:
	SDK_UNDEFINED(80,14485) /* TSet<TWeakObjectPtr<AActor*>> */ __um(GeneratedActors);                             // 0x0038   (0x0050)  
};

/// Class /Script/PCG.PCGManagedComponent
/// Size: 0x0020 (0x000038 - 0x000058)
class UPCGManagedComponent : public UPCGManagedResource
{ 
public:
	SDK_UNDEFINED(32,14486) /* TWeakObjectPtr<UActorComponent*> */ __um(GeneratedComponent);                       // 0x0038   (0x0020)  
};

/// Class /Script/PCG.PCGManagedISMComponent
/// Size: 0x0248 (0x000058 - 0x0002A0)
class UPCGManagedISMComponent : public UPCGManagedComponent
{ 
public:
	bool                                               bHasDescriptor;                                             // 0x0058   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0059   (0x0007)  MISSED
	FISMComponentDescriptor                            Descriptor;                                                 // 0x0060   (0x0210)  
	bool                                               bHasRootLocation;                                           // 0x0270   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0271   (0x0007)  MISSED
	FVector                                            RootLocation;                                               // 0x0278   (0x0018)  
	uint64_t                                           SettingsUID;                                                // 0x0290   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0298   (0x0008)  MISSED
};

/// Class /Script/PCG.PCGParamData
/// Size: 0x0088 (0x000038 - 0x0000C0)
class UPCGParamData : public UPCGData
{ 
public:
	class UPCGMetadata*                                MetaData;                                                   // 0x0038   (0x0008)  
	SDK_UNDEFINED(80,14487) /* TMap<FName, int64_t> */ __um(NameMap);                                              // 0x0040   (0x0050)  
	bool                                               bHasCachedLastSelector;                                     // 0x0090   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0091   (0x0007)  MISSED
	FPCGAttributePropertyInputSelector                 CachedLastSelector;                                         // 0x0098   (0x0028)  


	/// Functions
	// Function /Script/PCG.PCGParamData.MutableMetadata
	// class UPCGMetadata* MutableMetadata();                                                                                // [0x2a35604] Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGParamData.FindOrAddMetadataKey
	// int64_t FindOrAddMetadataKey(FName& InName);                                                                          // [0xb2c3844] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGParamData.FindMetadataKey
	// int64_t FindMetadataKey(FName& InName);                                                                               // [0xb2c37ac] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGParamData.FilterParamsByName
	// class UPCGParamData* FilterParamsByName(FName& InName);                                                               // [0xb2c36d8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGParamData.FilterParamsByKey
	// class UPCGParamData* FilterParamsByKey(int64_t InKey);                                                                // [0xb2c3648] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGParamData.ConstMetadata
	// class UPCGMetadata* ConstMetadata();                                                                                  // [0x606416c] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PCG.PCGBlueprintPinHelpers
/// Size: 0x0000 (0x000028 - 0x000028)
class UPCGBlueprintPinHelpers : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PCG.PCGBlueprintPinHelpers.MakePinProperty
	// FPCGPinProperties MakePinProperty(FName Label, bool bAllowMultipleData, bool bAllowMultipleConnections, bool bAdvancedPin, EPCGExclusiveDataType AllowedType); // [0xb2c7390] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PCG.PCGBlueprintPinHelpers.BreakPinProperty
	// void BreakPinProperty(FPCGPinProperties& PinProperty, FName& Label, bool& bAllowMultipleData, bool& bAllowMultipleConnections, bool& bAdvancedPin, EPCGExclusiveDataType& AllowedType); // [0xb2c3414] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/PCG.PCGPin
/// Size: 0x0030 (0x000028 - 0x000058)
class UPCGPin : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class UPCGNode*                                    Node;                                                       // 0x0028   (0x0008)  
	FName                                              Label;                                                      // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	TArray<class UPCGEdge*>                            Edges;                                                      // 0x0038   (0x0010)  
	FPCGPinProperties                                  Properties;                                                 // 0x0048   (0x000C)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0054   (0x0004)  MISSED


	/// Functions
	// Function /Script/PCG.PCGPin.SetToolTip
	// void SetToolTip(FText& InTooltip);                                                                                    // [0x9549344] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGPin.GetTooltip
	// FText GetTooltip();                                                                                                   // [0x9f39a50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PCG.PCGSettingsInstance
/// Size: 0x0008 (0x000040 - 0x000048)
class UPCGSettingsInstance : public UPCGSettingsInterface
{ 
public:
	class UPCGSettings*                                Settings;                                                   // 0x0040   (0x0008)  
};

/// Class /Script/PCG.PCGTrivialSettings
/// Size: 0x0000 (0x000150 - 0x000150)
class UPCGTrivialSettings : public UPCGSettings
{ 
public:
};

/// Class /Script/PCG.PCGSubgraphNode
/// Size: 0x0000 (0x000088 - 0x000088)
class UPCGSubgraphNode : public UPCGBaseSubgraphNode
{ 
public:
};

/// Class /Script/PCG.PCGSubsystem
/// Size: 0x0670 (0x000040 - 0x0006B0)
class UPCGSubsystem : public UTickableWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x670];                                     // 0x0040   (0x0670)  MISSED
};

/// Class /Script/PCG.PCGVolume
/// Size: 0x0008 (0x0002C8 - 0x0002D0)
class APCGVolume : public AVolume
{ 
public:
	class UPCGComponent*                               PCGComponent;                                               // 0x02C8   (0x0008)  
};

/// Class /Script/PCG.PCGWorldActor
/// Size: 0x0070 (0x000290 - 0x000300)
class APCGWorldActor : public AActor
{ 
public:
	uint32_t                                           PartitionGridSize;                                          // 0x0290   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0294   (0x0004)  MISSED
	class UPCGLandscapeCache*                          LandscapeCacheObject;                                       // 0x0298   (0x0008)  
	bool                                               bUse2DGrid;                                                 // 0x02A0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x02A1   (0x0007)  MISSED
	SDK_UNDEFINED(80,14488) /* TMap<uint32_t, FGuid> */ __um(GridGuids);                                           // 0x02A8   (0x0050)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x02F8   (0x0008)  MISSED
};

/// Class /Script/PCG.PCGGenSourceComponent
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UPCGGenSourceComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A0   (0x0008)  MISSED
};

/// Class /Script/PCG.PCGGenSourceEditorCamera
/// Size: 0x0008 (0x000028 - 0x000030)
class UPCGGenSourceEditorCamera : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0000   (0x0030)  MISSED
};

/// Class /Script/PCG.PCGGenSourcePlayer
/// Size: 0x0010 (0x000028 - 0x000038)
class UPCGGenSourcePlayer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0000   (0x0038)  MISSED
};

/// Class /Script/PCG.PCGGenSourceWPStreamingSource
/// Size: 0x0010 (0x000028 - 0x000038)
class UPCGGenSourceWPStreamingSource : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0000   (0x0038)  MISSED
};

/// Class /Script/PCG.PCGSchedulingPolicyDistanceAndDirection
/// Size: 0x0010 (0x000028 - 0x000038)
class UPCGSchedulingPolicyDistanceAndDirection : public UPCGSchedulingPolicyBase
{ 
public:
	bool                                               bUseDistance;                                               // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	float                                              DistanceWeight;                                             // 0x002C   (0x0004)  
	bool                                               bUseDirection;                                              // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              DirectionWeight;                                            // 0x0034   (0x0004)  
};

/// Class /Script/PCG.PCGDeterminismTestBlueprintBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UPCGDeterminismTestBlueprintBase : public UObject
{ 
public:


	/// Functions
	// Function /Script/PCG.PCGDeterminismTestBlueprintBase.ExecuteTest
	// void ExecuteTest(class UPCGNode* InPCGNode, FDeterminismTestResult& InOutTestResult);                                 // [0xb2cda40] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
};

/// Class /Script/PCG.PCGDummyGetPropertyTest
/// Size: 0x0010 (0x000028 - 0x000038)
class UPCGDummyGetPropertyTest : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	int64_t                                            Int64Property;                                              // 0x0028   (0x0008)  
	double                                             DoubleProperty;                                             // 0x0030   (0x0008)  
};

/// Struct /Script/PCG.PCGDummyGetPropertyLevel2Struct
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPCGDummyGetPropertyLevel2Struct
{ 
	TArray<double>                                     DoubleArrayProperty;                                        // 0x0000   (0x0010)  
};

/// Struct /Script/PCG.PCGDummyGetPropertyStruct
/// Size: 0x0028 (0x000000 - 0x000028)
struct FPCGDummyGetPropertyStruct
{ 
	TArray<int32_t>                                    IntArrayProperty;                                           // 0x0000   (0x0010)  
	float                                              FloatProperty;                                              // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	FPCGDummyGetPropertyLevel2Struct                   Level2Struct;                                               // 0x0018   (0x0010)  
};

/// Class /Script/PCG.PCGUnitTestDummyActor
/// Size: 0x01D0 (0x000290 - 0x000460)
class APCGUnitTestDummyActor : public AActor
{ 
public:
	int32_t                                            IntProperty;                                                // 0x0290   (0x0004)  
	float                                              FloatProperty;                                              // 0x0294   (0x0004)  
	int64_t                                            Int64Property;                                              // 0x0298   (0x0008)  
	double                                             DoubleProperty;                                             // 0x02A0   (0x0008)  
	bool                                               BoolProperty;                                               // 0x02A8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x02A9   (0x0003)  MISSED
	FName                                              NameProperty;                                               // 0x02AC   (0x0004)  
	SDK_UNDEFINED(16,14489) /* FString */              __um(StringProperty);                                       // 0x02B0   (0x0010)  
	EPCGUnitTestDummyEnum                              EnumProperty;                                               // 0x02C0   (0x0008)  
	FVector                                            VectorProperty;                                             // 0x02C8   (0x0018)  
	FVector4                                           Vector4Property;                                            // 0x02E0   (0x0020)  
	FTransform                                         TransformProperty;                                          // 0x0300   (0x0060)  
	FRotator                                           RotatorProperty;                                            // 0x0360   (0x0018)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0378   (0x0008)  MISSED
	FQuat                                              QuatProperty;                                               // 0x0380   (0x0020)  
	FSoftObjectPath                                    SoftObjectPathProperty;                                     // 0x03A0   (0x0018)  
	FSoftClassPath                                     SoftClassPathProperty;                                      // 0x03B8   (0x0018)  
	class UClass*                                      ClassProperty;                                              // 0x03D0   (0x0008)  
	class UPCGDummyGetPropertyTest*                    ObjectProperty;                                             // 0x03D8   (0x0008)  
	FVector2D                                          Vector2Property;                                            // 0x03E0   (0x0010)  
	FColor                                             ColorProperty;                                              // 0x03F0   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x03F4   (0x0004)  MISSED
	TArray<int32_t>                                    ArrayOfIntsProperty;                                        // 0x03F8   (0x0010)  
	TArray<FVector>                                    ArrayOfVectorsProperty;                                     // 0x0408   (0x0010)  
	TArray<FColor>                                     ArrayOfStructsProperty;                                     // 0x0418   (0x0010)  
	TArray<class UPCGDummyGetPropertyTest*>            ArrayOfObjectsProperty;                                     // 0x0428   (0x0010)  
	FPCGDummyGetPropertyStruct                         DummyStruct;                                                // 0x0438   (0x0028)  
};

/// Class /Script/PCG.PCGUnitTestDummyComponent
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UPCGUnitTestDummyComponent : public UActorComponent
{ 
public:
	int32_t                                            IntProperty;                                                // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00A4   (0x0004)  MISSED
};

/// Struct /Script/PCG.PCGActorPropertyOverride
/// Size: 0x0038 (0x000000 - 0x000038)
struct FPCGActorPropertyOverride
{ 
	FPCGAttributePropertyInputSelector                 InputSource;                                                // 0x0000   (0x0028)  
	SDK_UNDEFINED(16,14490) /* FString */              __um(PropertyTarget);                                       // 0x0028   (0x0010)  
};

/// Struct /Script/PCG.PCGAttributeExtractorTestStructDepth2
/// Size: 0x0004 (0x000000 - 0x000004)
struct FPCGAttributeExtractorTestStructDepth2
{ 
	int32_t                                            IntValue;                                                   // 0x0000   (0x0004)  
};

/// Struct /Script/PCG.PCGAttributeExtractorTestStructDepth1
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPCGAttributeExtractorTestStructDepth1
{ 
	FPCGAttributeExtractorTestStructDepth2             Depth2Struct;                                               // 0x0000   (0x0004)  
	float                                              FloatValue;                                                 // 0x0004   (0x0004)  
};

/// Struct /Script/PCG.PCGAttributeExtractorTestStruct
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPCGAttributeExtractorTestStruct
{ 
	FPCGAttributeExtractorTestStructDepth1             DepthStruct;                                                // 0x0000   (0x0008)  
	class UPCGAttributeExtractorTestObject*            Object;                                                     // 0x0008   (0x0008)  
};

/// Struct /Script/PCG.PCGDataTableRowToParamDataTestStruct
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FPCGDataTableRowToParamDataTestStruct
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(16,14491) /* FString */              __um(String);                                               // 0x0008   (0x0010)  
	int32_t                                            I32;                                                        // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	int64_t                                            I64;                                                        // 0x0020   (0x0008)  
	float                                              F32;                                                        // 0x0028   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	double                                             F64;                                                        // 0x0030   (0x0008)  
	FVector2D                                          v2;                                                         // 0x0038   (0x0010)  
	FVector                                            V3;                                                         // 0x0048   (0x0018)  
	FVector4                                           V4;                                                         // 0x0060   (0x0020)  
	FSoftObjectPath                                    SoftPath;                                                   // 0x0080   (0x0018)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0098   (0x0008)  MISSED
};

/// Struct /Script/PCG.PCGDeterminismSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPCGDeterminismSettings
{ 
	bool                                               bNativeTests;                                               // 0x0000   (0x0001)  
	bool                                               bUseBlueprintDeterminismTest;                               // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0002   (0x0006)  MISSED
	class UClass*                                      DeterminismTestBlueprint;                                   // 0x0008   (0x0008)  
};

/// Struct /Script/PCG.PCGContext
/// Size: 0x00B0 (0x000000 - 0x0000B0)
struct FPCGContext
{ 
	unsigned char                                      UnknownData00_2[0xB0];                                      // 0x0000   (0x00B0)  MISSED
};

/// Struct /Script/PCG.PCGStaticMeshSpawnerContext
/// Size: 0x01F8 (0x0000B0 - 0x0002A8)
struct FPCGStaticMeshSpawnerContext : FPCGContext
{ 
	unsigned char                                      UnknownData00_1[0x1F8];                                     // 0x00B0   (0x01F8)  MISSED
};

/// Struct /Script/PCG.PCGStackFrame
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPCGStackFrame
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/PCG.PCGStack
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPCGStack
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/PCG.PCGLandscapeLayerWeight
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPCGLandscapeLayerWeight
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	float                                              Weight;                                                     // 0x0004   (0x0004)  
};

/// Struct /Script/PCG.PCGPackedCustomData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPCGPackedCustomData
{ 
	int32_t                                            NumCustomDataFloats;                                        // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<float>                                      CustomData;                                                 // 0x0008   (0x0010)  
};

/// Struct /Script/PCG.PCGMeshInstanceList
/// Size: 0x0260 (0x000000 - 0x000260)
struct FPCGMeshInstanceList
{ 
	FSoftISMComponentDescriptor                        Descriptor;                                                 // 0x0000   (0x0240)  
	TArray<FTransform>                                 Instances;                                                  // 0x0240   (0x0010)  
	TArray<int64_t>                                    InstancesMetadataEntry;                                     // 0x0250   (0x0010)  
};

/// Struct /Script/PCG.PCGComponentInstanceData
/// Size: 0x0018 (0x000068 - 0x000080)
struct FPCGComponentInstanceData : FActorComponentInstanceData
{ 
	TArray<class UPCGManagedResource*>                 GeneratedResources;                                         // 0x0068   (0x0010)  
	class UPCGComponent*                               SourceComponent;                                            // 0x0078   (0x0008)  
};

/// Struct /Script/PCG.PCGDebugVisualizationSettings
/// Size: 0x0050 (0x000000 - 0x000050)
struct FPCGDebugVisualizationSettings
{ 
	float                                              PointScale;                                                 // 0x0000   (0x0004)  
	EPCGDebugVisScaleMethod                            ScaleMethod;                                                // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	SDK_UNDEFINED(32,14492) /* TWeakObjectPtr<UStaticMesh*> */ __um(PointMesh);                                    // 0x0008   (0x0020)  
	SDK_UNDEFINED(32,14493) /* TWeakObjectPtr<UMaterialInterface*> */ __um(MaterialOverride);                      // 0x0028   (0x0020)  
	bool                                               bCheckForDuplicates;                                        // 0x0048   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Struct /Script/PCG.PCGPropertyAliases
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPCGPropertyAliases
{ 
	TArray<FName>                                      Aliases;                                                    // 0x0000   (0x0010)  
};

/// Struct /Script/PCG.PCGPreConfiguredSettingsInfo
/// Size: 0x0020 (0x000000 - 0x000020)
struct FPCGPreConfiguredSettingsInfo
{ 
	int32_t                                            PreconfiguredIndex;                                         // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(24,14494) /* FText */                __um(Label);                                                // 0x0008   (0x0018)  
};

/// Struct /Script/PCG.DeterminismTestResult
/// Size: 0x0088 (0x000000 - 0x000088)
struct FDeterminismTestResult
{ 
	FName                                              TestResultTitle;                                            // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(16,14495) /* FString */              __um(TestResultName);                                       // 0x0008   (0x0010)  
	int32_t                                            Seed;                                                       // 0x0018   (0x0004)  
	EPCGDataType                                       DataTypesTested;                                            // 0x001C   (0x0004)  
	SDK_UNDEFINED(80,14496) /* TMap<FName, EDeterminismLevel> */ __um(TestResults);                                // 0x0020   (0x0050)  
	SDK_UNDEFINED(16,14497) /* TArray<FString> */      __um(AdditionalDetails);                                    // 0x0070   (0x0010)  
	bool                                               bFlagRaised;                                                // 0x0080   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0081   (0x0007)  MISSED
};

