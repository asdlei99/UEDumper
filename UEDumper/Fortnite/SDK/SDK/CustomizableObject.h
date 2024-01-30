
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: ClothingSystemRuntimeCommon
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: MutableRuntime
/// dependency: StructUtils
/// dependency: UMG

/// Enum /Script/CustomizableObject.EUpdateResult
/// Size: 0x07
enum class EUpdateResult : uint8_t
{
	EUpdateResult__Success                                                           = 0,
	EUpdateResult__Error                                                             = 1,
	EUpdateResult__ErrorOptimized                                                    = 2,
	EUpdateResult__ErrorReplaced                                                     = 3,
	EUpdateResult__ErrorDiscarded                                                    = 4,
	EUpdateResult__Error16BitBoneIndex                                               = 5,
	EUpdateResult__EUpdateResult_MAX                                                 = 6
};

/// Enum /Script/CustomizableObject.EMutableParameterType
/// Size: 0x08
enum class EMutableParameterType : uint8_t
{
	EMutableParameterType__None                                                      = 0,
	EMutableParameterType__Bool                                                      = 1,
	EMutableParameterType__Int                                                       = 2,
	EMutableParameterType__Float                                                     = 3,
	EMutableParameterType__Color                                                     = 4,
	EMutableParameterType__Projector                                                 = 5,
	EMutableParameterType__Texture                                                   = 6,
	EMutableParameterType__EMutableParameterType_MAX                                 = 7
};

/// Enum /Script/CustomizableObject.ECustomizableObjectGroupType
/// Size: 0x05
enum class ECustomizableObjectGroupType : uint8_t
{
	ECustomizableObjectGroupType__COGT_TOGGLE                                        = 0,
	ECustomizableObjectGroupType__COGT_ALL                                           = 1,
	ECustomizableObjectGroupType__COGT_ONE                                           = 2,
	ECustomizableObjectGroupType__COGT_ONE_OR_NONE                                   = 3,
	ECustomizableObjectGroupType__COGT_MAX                                           = 4
};

/// Enum /Script/CustomizableObject.EMutableCompileMeshType
/// Size: 0x06
enum class EMutableCompileMeshType : uint8_t
{
	EMutableCompileMeshType__Full                                                    = 0,
	EMutableCompileMeshType__Local                                                   = 1,
	EMutableCompileMeshType__LocalAndChildren                                        = 2,
	EMutableCompileMeshType__AddWorkingSetNoChildren                                 = 3,
	EMutableCompileMeshType__AddWorkingSetAndChildren                                = 4,
	EMutableCompileMeshType__EMutableCompileMeshType_MAX                             = 5
};

/// Enum /Script/CustomizableObject.ECustomizableObjectProjectorType
/// Size: 0x04
enum class ECustomizableObjectProjectorType : uint8_t
{
	ECustomizableObjectProjectorType__Planar                                         = 0,
	ECustomizableObjectProjectorType__Cylindrical                                    = 1,
	ECustomizableObjectProjectorType__Wrapping                                       = 2,
	ECustomizableObjectProjectorType__ECustomizableObjectProjectorType_MAX           = 3
};

/// Enum /Script/CustomizableObject.ECOResourceDataType
/// Size: 0x03
enum class ECOResourceDataType : uint16_t
{
	ECOResourceDataType__None                                                        = 0,
	ECOResourceDataType__AssetUserData                                               = 1,
	ECOResourceDataType__ECOResourceDataType_MAX                                     = 2
};

/// Enum /Script/CustomizableObject.ECustomizableObjectRelevancy
/// Size: 0x03
enum class ECustomizableObjectRelevancy : uint8_t
{
	ECustomizableObjectRelevancy__All                                                = 0,
	ECustomizableObjectRelevancy__ClientOnly                                         = 1,
	ECustomizableObjectRelevancy__ECustomizableObjectRelevancy_MAX                   = 2
};

/// Enum /Script/CustomizableObject.ECustomizableObjectNumBoneInfluences
/// Size: 0x04
enum class ECustomizableObjectNumBoneInfluences : uint8_t
{
	ECustomizableObjectNumBoneInfluences__Four                                       = 4,
	ECustomizableObjectNumBoneInfluences__Eight                                      = 8,
	ECustomizableObjectNumBoneInfluences__Twelve                                     = 12,
	ECustomizableObjectNumBoneInfluences__ECustomizableObjectNumBoneInfluences_MAX   = 13
};

/// Enum /Script/CustomizableObject.ECustomizableObjectTextureCompression
/// Size: 0x04
enum class ECustomizableObjectTextureCompression : uint8_t
{
	ECustomizableObjectTextureCompression__None                                      = 0,
	ECustomizableObjectTextureCompression__Fast                                      = 1,
	ECustomizableObjectTextureCompression__HighQuality                               = 2,
	ECustomizableObjectTextureCompression__ECustomizableObjectTextureCompression_MAX = 3
};

/// Enum /Script/CustomizableObject.ECustomizableObjectCompilationState
/// Size: 0x05
enum class ECustomizableObjectCompilationState : uint8_t
{
	ECustomizableObjectCompilationState__None                                        = 0,
	ECustomizableObjectCompilationState__InProgress                                  = 1,
	ECustomizableObjectCompilationState__Completed                                   = 2,
	ECustomizableObjectCompilationState__Failed                                      = 3,
	ECustomizableObjectCompilationState__ECustomizableObjectCompilationState_MAX     = 4
};

/// Struct /Script/CustomizableObject.GeneratedTexture
/// Size: 0x0028 (0x000000 - 0x000028)
struct FGeneratedTexture
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
	SDK_UNDEFINED(16,1574) /* FString */               __um(Name);                                                 // 0x0010   (0x0010)  
	class UTexture*                                    Texture;                                                    // 0x0020   (0x0008)  
};

/// Struct /Script/CustomizableObject.GeneratedMaterial
/// Size: 0x0020 (0x000000 - 0x000020)
struct FGeneratedMaterial
{ 
	class UMaterialInterface*                          MaterialInterface;                                          // 0x0000   (0x0008)  
	TArray<FGeneratedTexture>                          Textures;                                                   // 0x0008   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0018   (0x0008)  MISSED
};

/// Struct /Script/CustomizableObject.ReferencedSkeletons
/// Size: 0x0028 (0x000000 - 0x000028)
struct FReferencedSkeletons
{ 
	class USkeleton*                                   Skeleton;                                                   // 0x0000   (0x0008)  
	TArray<uint16_t>                                   SkeletonIds;                                                // 0x0008   (0x0010)  
	TArray<class USkeleton*>                           SkeletonsToMerge;                                           // 0x0018   (0x0010)  
};

/// Struct /Script/CustomizableObject.ReferencedPhysicsAssets
/// Size: 0x0040 (0x000000 - 0x000040)
struct FReferencedPhysicsAssets
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
	TArray<class UPhysicsAsset*>                       PhysicsAssetsToMerge;                                       // 0x0010   (0x0010)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x0020   (0x0010)  MISSED
	TArray<class UPhysicsAsset*>                       AdditionalPhysicsAssets;                                    // 0x0030   (0x0010)  
};

/// Struct /Script/CustomizableObject.CustomizableInstanceComponentData
/// Size: 0x0148 (0x000000 - 0x000148)
struct FCustomizableInstanceComponentData
{ 
	SDK_UNDEFINED(80,1575) /* TMap<FName, TWeakObjectPtr<UClass*>> */ __um(AnimSlotToBP);                          // 0x0000   (0x0050)  
	SDK_UNDEFINED(80,1576) /* TSet<UAssetUserData*> */ __um(AssetUserDataArray);                                   // 0x0050   (0x0050)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x00A0   (0x0010)  MISSED
	FReferencedSkeletons                               Skeletons;                                                  // 0x00B0   (0x0028)  
	FReferencedPhysicsAssets                           PhysicsAssets;                                              // 0x00D8   (0x0040)  
	unsigned char                                      UnknownData01_5[0x20];                                      // 0x0118   (0x0020)  MISSED
	TArray<class UMaterialInterface*>                  OverrideMaterials;                                          // 0x0138   (0x0010)  
};

/// Class /Script/CustomizableObject.CustomizableInstancePrivateData
/// Size: 0x0238 (0x000028 - 0x000260)
class UCustomizableInstancePrivateData : public UObject
{ 
public:
	TArray<FGeneratedMaterial>                         GeneratedMaterials;                                         // 0x0028   (0x0010)  
	TArray<FGeneratedTexture>                          GeneratedTextures;                                          // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0048   (0x0010)  MISSED
	SDK_UNDEFINED(80,1577) /* TMap<FString, TWeakObjectPtr<UTexture2D*>> */ __um(TextureReuseCache);               // 0x0058   (0x0050)  
	unsigned char                                      UnknownData01_5[0x38];                                      // 0x00A8   (0x0038)  MISSED
	TArray<FCustomizableInstanceComponentData>         ComponentsData;                                             // 0x00E0   (0x0010)  
	TArray<class UMaterialInterface*>                  ReferencedMaterials;                                        // 0x00F0   (0x0010)  
	unsigned char                                      UnknownData02_5[0x60];                                      // 0x0100   (0x0060)  MISSED
	TArray<class UPhysicsAsset*>                       ClothingPhysicsAssets;                                      // 0x0160   (0x0010)  
	TArray<class UClass*>                              GatheredAnimBPs;                                            // 0x0170   (0x0010)  
	FGameplayTagContainer                              AnimBPGameplayTags;                                         // 0x0180   (0x0020)  
	SDK_UNDEFINED(80,1578) /* TMap<UClass*, FAnimBpGeneratedPhysicsAssets> */ __um(AnimBpPhysicsAssets);           // 0x01A0   (0x0050)  
	unsigned char                                      UnknownData03_5[0x10];                                      // 0x01F0   (0x0010)  MISSED
	TArray<class UTexture*>                            LoadedPassThroughTexturesPendingSetMaterial;                // 0x0200   (0x0010)  
	unsigned char                                      UnknownData04_6[0x50];                                      // 0x0210   (0x0050)  MISSED
};

/// Class /Script/CustomizableObject.CustomizableObjectExtension
/// Size: 0x0000 (0x000028 - 0x000028)
class UCustomizableObjectExtension : public UObject
{ 
public:
};

/// Class /Script/CustomizableObject.CustomizableObjectInstanceUsage
/// Size: 0x0040 (0x000028 - 0x000068)
class UCustomizableObjectInstanceUsage : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	float                                              SkippedLastRenderTime;                                      // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_5[0x14];                                      // 0x0034   (0x0014)  MISSED
	class UCustomizableSkeletalComponent*              CustomizableSkeletalComponent;                              // 0x0048   (0x0008)  
	SDK_UNDEFINED(8,1579) /* TWeakObjectPtr<USkeletalMeshComponent*> */ __um(UsedSkeletalMeshComponent);           // 0x0050   (0x0008)  
	class UCustomizableObjectInstance*                 UsedCustomizableObjectInstance;                             // 0x0058   (0x0008)  
	int32_t                                            UsedComponentIndex;                                         // 0x0060   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0064   (0x0004)  MISSED


	/// Functions
	// Function /Script/CustomizableObject.CustomizableObjectInstanceUsage.UpdateSkeletalMeshAsyncResult
	// void UpdateSkeletalMeshAsyncResult(FDelegateProperty Callback, bool bIgnoreCloseDist, bool bForceHighPriority);       // [0x7041dcc] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstanceUsage.UpdateSkeletalMeshAsync
	// void UpdateSkeletalMeshAsync(bool bNeverSkipUpdate);                                                                  // [0x7041bb8] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CustomizableObject.CustomizableObjectPrivate
/// Size: 0x0068 (0x000028 - 0x000090)
class UCustomizableObjectPrivate : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x68];                                      // 0x0028   (0x0068)  MISSED
};

/// Struct /Script/CustomizableObject.CustomizableObjectResourceData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FCustomizableObjectResourceData
{ 
	ECOResourceDataType                                Type;                                                       // 0x0000   (0x0002)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0002   (0x0006)  MISSED
	FInstancedStruct                                   Data;                                                       // 0x0008   (0x0010)  
};

/// Class /Script/CustomizableObject.CustomizableObjectResourceDataContainer
/// Size: 0x0018 (0x000028 - 0x000040)
class UCustomizableObjectResourceDataContainer : public UObject
{ 
public:
	FCustomizableObjectResourceData                    Data;                                                       // 0x0028   (0x0018)  
};

/// Class /Script/CustomizableObject.CustomizableSkeletalComponent
/// Size: 0x0030 (0x000290 - 0x0002C0)
class UCustomizableSkeletalComponent : public USceneComponent
{ 
public:
	class UCustomizableObjectInstance*                 CustomizableObjectInstance;                                 // 0x0290   (0x0008)  
	int32_t                                            ComponentIndex;                                             // 0x0298   (0x0004)  
	unsigned char                                      UnknownData00_5[0x14];                                      // 0x029C   (0x0014)  MISSED
	class UCustomizableObjectInstanceUsage*            CustomizableObjectInstanceUsage;                            // 0x02B0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x02B8   (0x0008)  MISSED


	/// Functions
	// Function /Script/CustomizableObject.CustomizableSkeletalComponent.UpdateSkeletalMeshAsyncResult
	// void UpdateSkeletalMeshAsyncResult(FDelegateProperty Callback, bool bIgnoreCloseDist, bool bForceHighPriority);       // [0x7041ecc] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableSkeletalComponent.UpdateSkeletalMeshAsync
	// void UpdateSkeletalMeshAsync(bool bNeverSkipUpdate);                                                                  // [0x7041c34] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CustomizableObject.CustomizableSystemImageProvider
/// Size: 0x0000 (0x000028 - 0x000028)
class UCustomizableSystemImageProvider : public UObject
{ 
public:
};

/// Class /Script/CustomizableObject.EditorImageProvider
/// Size: 0x0000 (0x000028 - 0x000028)
class UEditorImageProvider : public UCustomizableSystemImageProvider
{ 
public:
};

/// Class /Script/CustomizableObject.CustomizableInstanceLODManagementBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UCustomizableInstanceLODManagementBase : public UObject
{ 
public:
};

/// Class /Script/CustomizableObject.CustomizableInstanceLODManagement
/// Size: 0x0058 (0x000028 - 0x000080)
class UCustomizableInstanceLODManagement : public UCustomizableInstanceLODManagementBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0028   (0x0058)  MISSED
};

/// Class /Script/CustomizableObject.CustomizableObjectBulk
/// Size: 0x0010 (0x000028 - 0x000038)
class UCustomizableObjectBulk : public UObject
{ 
public:
	SDK_UNDEFINED(16,1580) /* TArray<FString> */       __um(BulkDataFileNames);                                    // 0x0028   (0x0010)  
};

/// Struct /Script/CustomizableObject.MutableRefLODInfo
/// Size: 0x000C (0x000000 - 0x00000C)
struct FMutableRefLODInfo
{ 
	float                                              ScreenSize;                                                 // 0x0000   (0x0004)  
	float                                              LODHysteresis;                                              // 0x0004   (0x0004)  
	bool                                               bSupportUniformlyDistributedSampling;                       // 0x0008   (0x0001)  
	bool                                               bAllowCPUAccess;                                            // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000A   (0x0002)  MISSED
};

/// Struct /Script/CustomizableObject.MutableRefLODRenderData
/// Size: 0x0002 (0x000000 - 0x000002)
struct FMutableRefLODRenderData
{ 
	bool                                               bIsLODOptional;                                             // 0x0000   (0x0001)  
	bool                                               bStreamedDataInlined;                                       // 0x0001   (0x0001)  
};

/// Struct /Script/CustomizableObject.MutableRefLODData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMutableRefLODData
{ 
	FMutableRefLODInfo                                 LODInfo;                                                    // 0x0000   (0x000C)  
	FMutableRefLODRenderData                           RenderData;                                                 // 0x000C   (0x0002)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000E   (0x0002)  MISSED
};

/// Struct /Script/CustomizableObject.MutableRefSocket
/// Size: 0x0058 (0x000000 - 0x000058)
struct FMutableRefSocket
{ 
	FName                                              SocketName;                                                 // 0x0000   (0x0004)  
	FName                                              BoneName;                                                   // 0x0004   (0x0004)  
	FVector                                            RelativeLocation;                                           // 0x0008   (0x0018)  
	FRotator                                           RelativeRotation;                                           // 0x0020   (0x0018)  
	FVector                                            RelativeScale;                                              // 0x0038   (0x0018)  
	bool                                               bForceAlwaysAnimated;                                       // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0051   (0x0003)  MISSED
	int32_t                                            Priority;                                                   // 0x0054   (0x0004)  
};

/// Struct /Script/CustomizableObject.MutableRefSkeletalMeshSettings
/// Size: 0x0008 (0x000000 - 0x000008)
struct FMutableRefSkeletalMeshSettings
{ 
	bool                                               bEnablePerPolyCollision;                                    // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              DefaultUVChannelDensity;                                    // 0x0004   (0x0004)  
};

/// Struct /Script/CustomizableObject.MutableRefAssetUserData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FMutableRefAssetUserData
{ 
	class UAssetUserData*                              AssetUserData;                                              // 0x0000   (0x0008)  
};

/// Struct /Script/CustomizableObject.MutableRefSkeletalMeshData
/// Size: 0x0110 (0x000000 - 0x000110)
struct FMutableRefSkeletalMeshData
{ 
	class USkeletalMesh*                               SkeletalMesh;                                               // 0x0000   (0x0008)  
	FSoftObjectPath                                    SkeletalMeshAssetPath;                                      // 0x0008   (0x0018)  
	TArray<FMutableRefLODData>                         LODData;                                                    // 0x0020   (0x0010)  
	TArray<FMutableRefSocket>                          Sockets;                                                    // 0x0030   (0x0010)  
	FBoxSphereBounds                                   Bounds;                                                     // 0x0040   (0x0038)  
	FMutableRefSkeletalMeshSettings                    Settings;                                                   // 0x0078   (0x0008)  
	SDK_UNDEFINED(32,1581) /* TWeakObjectPtr<USkeleton*> */ __um(Skeleton);                                        // 0x0080   (0x0020)  
	SDK_UNDEFINED(32,1582) /* TWeakObjectPtr<UPhysicsAsset*> */ __um(PhysicsAsset);                                // 0x00A0   (0x0020)  
	SDK_UNDEFINED(32,1583) /* TWeakObjectPtr<UClass*> */ __um(PostProcessAnimInst);                                // 0x00C0   (0x0020)  
	SDK_UNDEFINED(32,1584) /* TWeakObjectPtr<UPhysicsAsset*> */ __um(ShadowPhysicsAsset);                          // 0x00E0   (0x0020)  
	TArray<FMutableRefAssetUserData>                   AssetUserData;                                              // 0x0100   (0x0010)  
};

/// Struct /Script/CustomizableObject.MutableLODSettings
/// Size: 0x0080 (0x000000 - 0x000080)
struct FMutableLODSettings
{ 
	FPerPlatformInt                                    MinLOD;                                                     // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FPerQualityLevelInt                                MinQualityLevelLOD;                                         // 0x0008   (0x0068)  
	int32_t                                            NumLODsInRoot;                                              // 0x0070   (0x0004)  
	int32_t                                            FirstLODAvailable;                                          // 0x0074   (0x0004)  
	bool                                               bLODStreamingEnabled;                                       // 0x0078   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0079   (0x0003)  MISSED
	uint32_t                                           NumLODsToStream;                                            // 0x007C   (0x0004)  
};

/// Struct /Script/CustomizableObject.MutableModelImageProperties
/// Size: 0x0020 (0x000000 - 0x000020)
struct FMutableModelImageProperties
{ 
	SDK_UNDEFINED(16,1585) /* FString */               __um(TextureParameterName);                                 // 0x0000   (0x0010)  
	SDK_UNDEFINED(1,1586) /* TEnumAsByte<TextureFilter> */ __um(Filter);                                           // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	bool                                               SRGB : 1;                                                   // 0x0014:0 (0x0001)  
	bool                                               FlipGreenChannel : 1;                                       // 0x0014:1 (0x0001)  
	bool                                               IsPassThrough : 1;                                          // 0x0014:2 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0015   (0x0003)  MISSED
	int32_t                                            LODBias;                                                    // 0x0018   (0x0004)  
	SDK_UNDEFINED(1,1587) /* TEnumAsByte<TextureGroup> */ __um(LODGroup);                                          // 0x001C   (0x0001)  
	SDK_UNDEFINED(1,1588) /* TEnumAsByte<TextureAddress> */ __um(AddressX);                                        // 0x001D   (0x0001)  
	SDK_UNDEFINED(1,1589) /* TEnumAsByte<TextureAddress> */ __um(AddressY);                                        // 0x001E   (0x0001)  
	unsigned char                                      UnknownData02_6[0x1];                                       // 0x001F   (0x0001)  MISSED
};

/// Struct /Script/CustomizableObject.MorphTargetInfo
/// Size: 0x0008 (0x000000 - 0x000008)
struct FMorphTargetInfo
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	int32_t                                            LodNum;                                                     // 0x0004   (0x0004)  
};

/// Struct /Script/CustomizableObject.MorphTargetVertexData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FMorphTargetVertexData
{ 
	FVector3f                                          PositionDelta;                                              // 0x0000   (0x000C)  
	FVector3f                                          TangentZDelta;                                              // 0x000C   (0x000C)  
	int32_t                                            MorphIndex;                                                 // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/CustomizableObject.CustomizableObjectClothConfigData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FCustomizableObjectClothConfigData
{ 
	SDK_UNDEFINED(16,1590) /* FString */               __um(ClassPath);                                            // 0x0000   (0x0010)  
	FName                                              ConfigName;                                                 // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	TArray<char>                                       ConfigBytes;                                                // 0x0018   (0x0010)  
};

/// Struct /Script/CustomizableObject.CustomizableObjectClothingAssetData
/// Size: 0x0080 (0x000000 - 0x000080)
struct FCustomizableObjectClothingAssetData
{ 
	TArray<FClothLODDataCommon>                        LODData;                                                    // 0x0000   (0x0010)  
	TArray<int32_t>                                    LodMap;                                                     // 0x0010   (0x0010)  
	TArray<FName>                                      UsedBoneNames;                                              // 0x0020   (0x0010)  
	TArray<int32_t>                                    UsedBoneIndices;                                            // 0x0030   (0x0010)  
	int32_t                                            ReferenceBoneIndex;                                         // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	TArray<FCustomizableObjectClothConfigData>         ConfigsData;                                                // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,1591) /* FString */               __um(PhysicsAssetPath);                                     // 0x0058   (0x0010)  
	FName                                              Name;                                                       // 0x0068   (0x0004)  
	FGuid                                              OriginalAssetGuid;                                          // 0x006C   (0x0010)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x007C   (0x0004)  MISSED
};

/// Struct /Script/CustomizableObject.CustomizableObjectMeshToMeshVertData
/// Size: 0x0040 (0x000000 - 0x000040)
struct FCustomizableObjectMeshToMeshVertData
{ 
	float                                              PositionBaryCoordsAndDist;                                  // 0x0000   (0x0010)  
	float                                              NormalBaryCoordsAndDist;                                    // 0x0010   (0x0010)  
	float                                              TangentBaryCoordsAndDist;                                   // 0x0020   (0x0010)  
	uint16_t                                           SourceMeshVertIndices;                                      // 0x0030   (0x0008)  
	float                                              Weight;                                                     // 0x0038   (0x0004)  
	int16_t                                            SourceAssetIndex;                                           // 0x003C   (0x0002)  
	int16_t                                            SourceAssetLodIndex;                                        // 0x003E   (0x0002)  
};

/// Struct /Script/CustomizableObject.MutableSkinWeightProfileInfo
/// Size: 0x0008 (0x000000 - 0x000008)
struct FMutableSkinWeightProfileInfo
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	bool                                               DefaultProfile;                                             // 0x0004   (0x0001)  
	int8_t                                             DefaultProfileFromLODIndex;                                 // 0x0005   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0006   (0x0002)  MISSED
};

/// Struct /Script/CustomizableObject.CustomizableObjectStreamedResourceData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FCustomizableObjectStreamedResourceData
{ 
	SDK_UNDEFINED(32,1592) /* TWeakObjectPtr<UCustomizableObjectResourceDataContainer*> */ __um(ContainerPath);    // 0x0000   (0x0020)  
	class UCustomizableObjectResourceDataContainer*    Container;                                                  // 0x0020   (0x0008)  
};

/// Struct /Script/CustomizableObject.MutableModelParameterValue
/// Size: 0x0018 (0x000000 - 0x000018)
struct FMutableModelParameterValue
{ 
	SDK_UNDEFINED(16,1593) /* FString */               __um(Name);                                                 // 0x0000   (0x0010)  
	int32_t                                            Value;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/CustomizableObject.MutableModelParameterProperties
/// Size: 0x0028 (0x000000 - 0x000028)
struct FMutableModelParameterProperties
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
	EMutableParameterType                              Type;                                                       // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0011   (0x0007)  MISSED
	TArray<FMutableModelParameterValue>                PossibleValues;                                             // 0x0018   (0x0010)  
};

/// Struct /Script/CustomizableObject.AnimBpOverridePhysicsAssetsInfo
/// Size: 0x0048 (0x000000 - 0x000048)
struct FAnimBpOverridePhysicsAssetsInfo
{ 
	SDK_UNDEFINED(32,1594) /* TWeakObjectPtr<UClass*> */ __um(AnimInstanceClass);                                  // 0x0000   (0x0020)  
	SDK_UNDEFINED(32,1595) /* TWeakObjectPtr<UPhysicsAsset*> */ __um(SourceAsset);                                 // 0x0020   (0x0020)  
	int32_t                                            PropertyIndex;                                              // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Class /Script/CustomizableObject.CustomizableObject
/// Size: 0x0440 (0x000028 - 0x000468)
class UCustomizableObject : public UObject
{ 
public:
	TArray<FMutableRefSkeletalMeshData>                ReferenceSkeletalMeshesData;                                // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,1596) /* TArray<TWeakObjectPtr<UMaterialInterface*>> */ __um(ReferencedMaterials);            // 0x0038   (0x0010)  
	TArray<FName>                                      ReferencedMaterialSlotNames;                                // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,1597) /* TArray<TWeakObjectPtr<USkeleton*>> */ __um(ReferencedSkeletons);                     // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,1598) /* TArray<TWeakObjectPtr<UTexture*>> */ __um(ReferencedPassThroughTextures);            // 0x0068   (0x0010)  
	FMutableLODSettings                                LODSettings;                                                // 0x0078   (0x0080)  
	TArray<FMutableModelImageProperties>               ImageProperties;                                            // 0x00F8   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0108   (0x0008)  MISSED
	TArray<FMorphTargetInfo>                           ContributingMorphTargetsInfo;                               // 0x0110   (0x0010)  
	TArray<FMorphTargetVertexData>                     MorphTargetReconstructionData;                              // 0x0120   (0x0010)  
	TArray<FCustomizableObjectClothConfigData>         ClothSharedConfigsData;                                     // 0x0130   (0x0010)  
	TArray<FCustomizableObjectClothingAssetData>       ContributingClothingAssetsData;                             // 0x0140   (0x0010)  
	TArray<FCustomizableObjectMeshToMeshVertData>      ClothMeshToMeshVertData;                                    // 0x0150   (0x0010)  
	TArray<FMutableSkinWeightProfileInfo>              SkinWeightProfilesInfo;                                     // 0x0160   (0x0010)  
	TArray<FCustomizableObjectResourceData>            AlwaysLoadedExtensionData;                                  // 0x0170   (0x0010)  
	TArray<FCustomizableObjectStreamedResourceData>    StreamedExtensionData;                                      // 0x0180   (0x0010)  
	TArray<FCustomizableObjectStreamedResourceData>    StreamedResourceData;                                       // 0x0190   (0x0010)  
	bool                                               bEnableUseRefSkeletalMeshAsPlaceholder;                     // 0x01A0   (0x0001)  
	bool                                               bPreserveUserLODsOnFirstGeneration;                         // 0x01A1   (0x0001)  
	bool                                               bEnableMeshCache;                                           // 0x01A2   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x01A3   (0x0001)  MISSED
	int32_t                                            NumMeshComponentsInRoot;                                    // 0x01A4   (0x0004)  
	TArray<FMutableModelParameterProperties>           ParameterProperties;                                        // 0x01A8   (0x0010)  
	unsigned char                                      UnknownData02_5[0x50];                                      // 0x01B8   (0x0050)  MISSED
	SDK_UNDEFINED(80,1599) /* TMap<FString, FParameterUIData> */ __um(ParameterUIDataMap);                         // 0x0208   (0x0050)  
	TArray<FName>                                      LowPriorityTextures;                                        // 0x0258   (0x0010)  
	SDK_UNDEFINED(80,1600) /* TMap<FString, FParameterUIData> */ __um(StateUIDataMap);                             // 0x0268   (0x0050)  
	SDK_UNDEFINED(80,1601) /* TMap<FString, TWeakObjectPtr<UPhysicsAsset*>> */ __um(PhysicsAssetsMap);             // 0x02B8   (0x0050)  
	SDK_UNDEFINED(80,1602) /* TMap<FString, TWeakObjectPtr<UClass*>> */ __um(AnimBPAssetsMap);                     // 0x0308   (0x0050)  
	TArray<FAnimBpOverridePhysicsAssetsInfo>           AnimBpOverridePhysiscAssetsInfo;                            // 0x0358   (0x0010)  
	TArray<FMutableRefSocket>                          SocketArray;                                                // 0x0368   (0x0010)  
	SDK_UNDEFINED(80,1603) /* TMap<uint64_t, FMutableStreamableBlock> */ __um(HashToStreamableBlock);              // 0x0378   (0x0050)  
	SDK_UNDEFINED(16,1604) /* TArray<FString> */       __um(CustomizableObjectClassTags);                          // 0x03C8   (0x0010)  
	SDK_UNDEFINED(16,1605) /* TArray<FString> */       __um(PopulationClassTags);                                  // 0x03D8   (0x0010)  
	SDK_UNDEFINED(80,1606) /* TMap<FString, FParameterTags> */ __um(CustomizableObjectParametersTags);             // 0x03E8   (0x0050)  
	TArray<FName>                                      BoneNames;                                                  // 0x0438   (0x0010)  
	unsigned char                                      UnknownData03_5[0x10];                                      // 0x0448   (0x0010)  MISSED
	class UCustomizableObjectBulk*                     BulkData;                                                   // 0x0458   (0x0008)  
	class UCustomizableObjectPrivate*                  Private;                                                    // 0x0460   (0x0008)  


	/// Functions
	// Function /Script/CustomizableObject.CustomizableObject.IsParameterMultidimensional
	// bool IsParameterMultidimensional(FString InParameterName);                                                            // [0x7037cbc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.IsCompiled
	// bool IsCompiled();                                                                                                    // [0x70375e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetStateUIMetadataFromIndex
	// FParameterUIData GetStateUIMetadataFromIndex(int32_t StateIndex);                                                     // [0x70366c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetStateUIMetadata
	// FParameterUIData GetStateUIMetadata(FString StateName);                                                               // [0x7035fd8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetStateParameterName
	// FString GetStateParameterName(FString StateName, int32_t ParameterIndex);                                             // [0x7035898] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetStateParameterCount
	// int32_t GetStateParameterCount(FString StateName);                                                                    // [0x70351b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetStateName
	// FString GetStateName(int32_t StateIndex);                                                                             // [0x703510c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetStateCount
	// int32_t GetStateCount();                                                                                              // [0x70350ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetProjectorParameterDefaultValue
	// void GetProjectorParameterDefaultValue(FString InParameterName, FVector3f& OutPos, FVector3f& OutDirection, FVector3f& OutUp, FVector3f& OutScale, float& OutAngle, ECustomizableObjectProjectorType& OutType); // [0x7031ab4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetParameterUIMetadataFromIndex
	// FParameterUIData GetParameterUIMetadataFromIndex(int32_t ParamIndex);                                                 // [0x7030c18] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetParameterUIMetadata
	// FParameterUIData GetParameterUIMetadata(FString ParamName);                                                           // [0x7030530] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetParameterTypeByName
	// EMutableParameterType GetParameterTypeByName(FString Name);                                                           // [0x702fe80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetParameterType
	// EMutableParameterType GetParameterType(int32_t ParamIndex);                                                           // [0x702fdf4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetParameterName
	// FString GetParameterName(int32_t ParamIndex);                                                                         // [0x702fd60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetParameterDescriptionCount
	// int32_t GetParameterDescriptionCount(FString ParamName);                                                              // [0x702f6c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetParameterCount
	// int32_t GetParameterCount();                                                                                          // [0x702efe4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetIntParameterNumOptions
	// int32_t GetIntParameterNumOptions(int32_t ParamIndex);                                                                // [0x702e064] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetIntParameterDefaultValue
	// int32_t GetIntParameterDefaultValue(FString InParameterName);                                                         // [0x702d9b4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetIntParameterAvailableOption
	// FString GetIntParameterAvailableOption(int32_t ParamIndex, int32_t K);                                                // [0x702d8ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetFloatParameterDefaultValue
	// float GetFloatParameterDefaultValue(FString InParameterName);                                                         // [0x702c46c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetComponentCount
	// int32_t GetComponentCount();                                                                                          // [0x702c3f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetColorParameterDefaultValue
	// FLinearColor GetColorParameterDefaultValue(FString InParameterName);                                                  // [0x702b6b4] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetBoolParameterDefaultValue
	// bool GetBoolParameterDefaultValue(FString InParameterName);                                                           // [0x702a8e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.FindParameter
	// int32_t FindParameter(FString Name);                                                                                  // [0x70292e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.CreateInstance
	// class UCustomizableObjectInstance* CreateInstance();                                                                  // [0x7027df0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CustomizableObject.DGGUI
/// Size: 0x0000 (0x0002C0 - 0x0002C0)
class UDGGUI : public UUserWidget
{ 
public:


	/// Functions
	// Function /Script/CustomizableObject.DGGUI.SetCustomizableObjectInstanceUsage
	// void SetCustomizableObjectInstanceUsage(class UCustomizableObjectInstanceUsage* CustomizableObjectInstanceUsage);     // [0x211c0a0] Event|Public|BlueprintEvent 
	// Function /Script/CustomizableObject.DGGUI.GetCustomizableObjectInstanceUsage
	// class UCustomizableObjectInstanceUsage* GetCustomizableObjectInstanceUsage();                                         // [0x211c0a0] Event|Public|BlueprintEvent 
};

/// Struct /Script/CustomizableObject.CustomizableObjectBoolParameterValue
/// Size: 0x0028 (0x000000 - 0x000028)
struct FCustomizableObjectBoolParameterValue
{ 
	SDK_UNDEFINED(16,1607) /* FString */               __um(ParameterName);                                        // 0x0000   (0x0010)  
	bool                                               ParameterValue;                                             // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0011   (0x0007)  MISSED
	SDK_UNDEFINED(16,1608) /* FString */               __um(UID);                                                  // 0x0018   (0x0010)  
};

/// Struct /Script/CustomizableObject.CustomizableObjectIntParameterValue
/// Size: 0x0040 (0x000000 - 0x000040)
struct FCustomizableObjectIntParameterValue
{ 
	SDK_UNDEFINED(16,1609) /* FString */               __um(ParameterName);                                        // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,1610) /* FString */               __um(ParameterValueName);                                   // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,1611) /* FString */               __um(UID);                                                  // 0x0020   (0x0010)  
	SDK_UNDEFINED(16,1612) /* TArray<FString> */       __um(ParameterRangeValueNames);                             // 0x0030   (0x0010)  
};

/// Struct /Script/CustomizableObject.CustomizableObjectFloatParameterValue
/// Size: 0x0038 (0x000000 - 0x000038)
struct FCustomizableObjectFloatParameterValue
{ 
	SDK_UNDEFINED(16,1613) /* FString */               __um(ParameterName);                                        // 0x0000   (0x0010)  
	float                                              ParameterValue;                                             // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	SDK_UNDEFINED(16,1614) /* FString */               __um(UID);                                                  // 0x0018   (0x0010)  
	TArray<float>                                      ParameterRangeValues;                                       // 0x0028   (0x0010)  
};

/// Struct /Script/CustomizableObject.CustomizableObjectTextureParameterValue
/// Size: 0x0038 (0x000000 - 0x000038)
struct FCustomizableObjectTextureParameterValue
{ 
	SDK_UNDEFINED(16,1615) /* FString */               __um(ParameterName);                                        // 0x0000   (0x0010)  
	FName                                              ParameterValue;                                             // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	SDK_UNDEFINED(16,1616) /* FString */               __um(UID);                                                  // 0x0018   (0x0010)  
	TArray<FName>                                      ParameterRangeValues;                                       // 0x0028   (0x0010)  
};

/// Struct /Script/CustomizableObject.CustomizableObjectVectorParameterValue
/// Size: 0x0030 (0x000000 - 0x000030)
struct FCustomizableObjectVectorParameterValue
{ 
	SDK_UNDEFINED(16,1617) /* FString */               __um(ParameterName);                                        // 0x0000   (0x0010)  
	FLinearColor                                       ParameterValue;                                             // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,1618) /* FString */               __um(UID);                                                  // 0x0020   (0x0010)  
};

/// Struct /Script/CustomizableObject.CustomizableObjectProjector
/// Size: 0x0038 (0x000000 - 0x000038)
struct FCustomizableObjectProjector
{ 
	FVector3f                                          Position;                                                   // 0x0000   (0x000C)  
	FVector3f                                          Direction;                                                  // 0x000C   (0x000C)  
	FVector3f                                          Up;                                                         // 0x0018   (0x000C)  
	FVector3f                                          Scale;                                                      // 0x0024   (0x000C)  
	ECustomizableObjectProjectorType                   ProjectionType;                                             // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              Angle;                                                      // 0x0034   (0x0004)  
};

/// Struct /Script/CustomizableObject.CustomizableObjectProjectorParameterValue
/// Size: 0x0068 (0x000000 - 0x000068)
struct FCustomizableObjectProjectorParameterValue
{ 
	SDK_UNDEFINED(16,1619) /* FString */               __um(ParameterName);                                        // 0x0000   (0x0010)  
	FCustomizableObjectProjector                       Value;                                                      // 0x0010   (0x0038)  
	SDK_UNDEFINED(16,1620) /* FString */               __um(UID);                                                  // 0x0048   (0x0010)  
	TArray<FCustomizableObjectProjector>               RangeValues;                                                // 0x0058   (0x0010)  
};

/// Struct /Script/CustomizableObject.CustomizableObjectInstanceDescriptor
/// Size: 0x0128 (0x000000 - 0x000128)
struct FCustomizableObjectInstanceDescriptor
{ 
	class UCustomizableObject*                         CustomizableObject;                                         // 0x0000   (0x0008)  
	TArray<FCustomizableObjectBoolParameterValue>      BoolParameters;                                             // 0x0008   (0x0010)  
	TArray<FCustomizableObjectIntParameterValue>       IntParameters;                                              // 0x0018   (0x0010)  
	TArray<FCustomizableObjectFloatParameterValue>     FloatParameters;                                            // 0x0028   (0x0010)  
	TArray<FCustomizableObjectTextureParameterValue>   TextureParameters;                                          // 0x0038   (0x0010)  
	TArray<FCustomizableObjectVectorParameterValue>    VectorParameters;                                           // 0x0048   (0x0010)  
	TArray<FCustomizableObjectProjectorParameterValue> ProjectorParameters;                                        // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_5[0x70];                                      // 0x0068   (0x0070)  MISSED
	SDK_UNDEFINED(80,1621) /* TMap<FName, FMultilayerProjector> */ __um(MultilayerProjectors);                     // 0x00D8   (0x0050)  
};

/// Class /Script/CustomizableObject.CustomizableObjectInstance
/// Size: 0x02C0 (0x000028 - 0x0002E8)
class UCustomizableObjectInstance : public UObject
{ 
public:
	SDK_UNDEFINED(16,1622) /* FMulticastInlineDelegate */ __um(UpdatedDelegate);                                   // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_5[0x18];                                      // 0x0038   (0x0018)  MISSED
	SDK_UNDEFINED(16,1623) /* FMulticastInlineDelegate */ __um(BeginDestroyDelegate);                              // 0x0050   (0x0010)  
	unsigned char                                      UnknownData01_5[0x68];                                      // 0x0060   (0x0068)  MISSED
	TArray<class USkeletalMesh*>                       SkeletalMeshes;                                             // 0x00C8   (0x0010)  
	unsigned char                                      UnknownData02_5[0x18];                                      // 0x00D8   (0x0018)  MISSED
	FCustomizableObjectInstanceDescriptor              Descriptor;                                                 // 0x00F0   (0x0128)  
	class UCustomizableInstancePrivateData*            PrivateData;                                                // 0x0218   (0x0008)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x0220   (0x0008)  MISSED
	class UCustomizableObject*                         CustomizableObject;                                         // 0x0228   (0x0008)  
	TArray<FCustomizableObjectBoolParameterValue>      BoolParameters;                                             // 0x0230   (0x0010)  
	TArray<FCustomizableObjectIntParameterValue>       IntParameters;                                              // 0x0240   (0x0010)  
	TArray<FCustomizableObjectFloatParameterValue>     FloatParameters;                                            // 0x0250   (0x0010)  
	TArray<FCustomizableObjectTextureParameterValue>   TextureParameters;                                          // 0x0260   (0x0010)  
	TArray<FCustomizableObjectVectorParameterValue>    VectorParameters;                                           // 0x0270   (0x0010)  
	TArray<FCustomizableObjectProjectorParameterValue> ProjectorParameters;                                        // 0x0280   (0x0010)  
	SDK_UNDEFINED(80,1624) /* TMap<FName, FMultilayerProjector> */ __um(MultilayerProjectors);                     // 0x0290   (0x0050)  
	unsigned char                                      UnknownData04_6[0x8];                                       // 0x02E0   (0x0008)  MISSED


	/// Functions
	// Function /Script/CustomizableObject.CustomizableObjectInstance.UpdateSkeletalMeshAsyncResult
	// void UpdateSkeletalMeshAsyncResult(FDelegateProperty Callback, bool bIgnoreCloseDist, bool bForceHighPriority);       // [0x7041cb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.UpdateSkeletalMeshAsync
	// void UpdateSkeletalMeshAsync(bool bIgnoreCloseDist, bool bForceHighPriority);                                         // [0x7041af4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetVectorParameterSelectedOption
	// void SetVectorParameterSelectedOption(FString VectorParamName, FLinearColor& VectorValue);                            // [0x7041418] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetTextureParameterSelectedOption
	// void SetTextureParameterSelectedOption(FString TextureParamName, FString TextureValue, int32_t RangeIndex);           // [0x7040cf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetReplacePhysicsAssets
	// void SetReplacePhysicsAssets(bool bReplaceEnabled);                                                                   // [0x7040c70] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetRandomValuesFromStream
	// void SetRandomValuesFromStream(FRandomStream& Stream);                                                                // [0x7040be0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetRandomValues
	// void SetRandomValues();                                                                                               // [0x7040ba8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetProjectorValue
	// void SetProjectorValue(FString ProjectorParamName, FVector& OutPos, FVector& OutDirection, FVector& OutUp, FVector& OutScale, float OutAngle, int32_t RangeIndex); // [0x70401fc] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetProjectorUp
	// void SetProjectorUp(FString ProjectorParamName, FVector& Up, int32_t RangeIndex);                                     // [0x703fa60] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetProjectorScale
	// void SetProjectorScale(FString ProjectorParamName, FVector& Scale, int32_t RangeIndex);                               // [0x703f2c4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetProjectorPosition
	// void SetProjectorPosition(FString ProjectorParamName, FVector3f& Pos, int32_t RangeIndex);                            // [0x703eaf0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetProjectorDirection
	// void SetProjectorDirection(FString ProjectorParamName, FVector& Direction, int32_t RangeIndex);                       // [0x703e354] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetProjectorAngle
	// void SetProjectorAngle(FString ProjectorParamName, float Angle, int32_t RangeIndex);                                  // [0x703dc48] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetObject
	// void SetObject(class UCustomizableObject* InObject);                                                                  // [0x703dbc8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetIntParameterSelectedOption
	// void SetIntParameterSelectedOption(FString ParamName, FString SelectedOptionName, int32_t RangeIndex);                // [0x703d4a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetFloatParameterSelectedOption
	// void SetFloatParameterSelectedOption(FString FloatParamName, float FloatValue, int32_t RangeIndex);                   // [0x703cd94] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetCurrentState
	// void SetCurrentState(FString StateName);                                                                              // [0x703c6e4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetColorParameterSelectedOption
	// void SetColorParameterSelectedOption(FString ColorParamName, FLinearColor& ColorValue);                               // [0x703bff4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetBuildParameterRelevancy
	// void SetBuildParameterRelevancy(bool Value);                                                                          // [0x703bf74] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetBuildParameterDecorations
	// void SetBuildParameterDecorations(bool Value);                                                                        // [0x60325ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetBoolParameterSelectedOption
	// void SetBoolParameterSelectedOption(FString BoolParamName, bool BoolValue);                                           // [0x703b89c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.RemoveValueFromProjectorRange
	// int32_t RemoveValueFromProjectorRange(FString ParamName);                                                             // [0x703b1b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.RemoveValueFromIntRange
	// int32_t RemoveValueFromIntRange(FString ParamName);                                                                   // [0x703aaf8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.RemoveValueFromFloatRange
	// int32_t RemoveValueFromFloatRange(FString ParamName);                                                                 // [0x703a3ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.RemoveMultilayerProjector
	// void RemoveMultilayerProjector(FName& ProjectorParamName);                                                            // [0x703a35c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorUpdateVirtualLayer
	// void MultilayerProjectorUpdateVirtualLayer(FName& ProjectorParamName, FName& ID, FMultilayerProjectorVirtualLayer& Layer); // [0x7039c0c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorUpdateLayer
	// void MultilayerProjectorUpdateLayer(FName& ProjectorParamName, int32_t Index, FMultilayerProjectorLayer& Layer);      // [0x70394ac] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorRemoveVirtualLayer
	// void MultilayerProjectorRemoveVirtualLayer(FName& ProjectorParamName, FName& ID);                                     // [0x7039380] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorRemoveLayerAt
	// void MultilayerProjectorRemoveLayerAt(FName& ProjectorParamName, int32_t Index);                                      // [0x7039220] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorNumLayers
	// int32_t MultilayerProjectorNumLayers(FName& ProjectorParamName);                                                      // [0x7039140] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorGetVirtualLayers
	// TArray<FName> MultilayerProjectorGetVirtualLayers(FName& ProjectorParamName);                                         // [0x703903c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorGetVirtualLayer
	// FMultilayerProjectorVirtualLayer MultilayerProjectorGetVirtualLayer(FName& ProjectorParamName, FName& ID);            // [0x7038f1c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorGetLayer
	// FMultilayerProjectorLayer MultilayerProjectorGetLayer(FName& ProjectorParamName, int32_t Index);                      // [0x7038dc8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorFindOrCreateVirtualLayer
	// FMultilayerProjectorVirtualLayer MultilayerProjectorFindOrCreateVirtualLayer(FName& ProjectorParamName, FName& ID);   // [0x7038ca8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorCreateVirtualLayer
	// void MultilayerProjectorCreateVirtualLayer(FName& ProjectorParamName, FName& ID);                                     // [0x7038b7c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorCreateLayer
	// void MultilayerProjectorCreateLayer(FName& ProjectorParamName, int32_t Index);                                        // [0x7038a1c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.IsParamMultidimensional
	// bool IsParamMultidimensional(FString ParamName);                                                                      // [0x7037600] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.IsParameterRelevant
	// bool IsParameterRelevant(FString ParamName);                                                                          // [0x703836c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.HasAnySkeletalMesh
	// bool HasAnySkeletalMesh();                                                                                            // [0x70375bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.HasAnyParameters
	// bool HasAnyParameters();                                                                                              // [0x703756c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetVectorParameters
	// TArray<FCustomizableObjectVectorParameterValue> GetVectorParameters();                                                // [0x7037550] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetTextureValueRange
	// int32_t GetTextureValueRange(FString ParamName);                                                                      // [0x7036e7c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetTextureParameterSelectedOption
	// FName GetTextureParameterSelectedOption(FString TextureParamName, int32_t RangeIndex);                                // [0x7036780] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetTextureParameters
	// TArray<FCustomizableObjectTextureParameterValue> GetTextureParameters();                                              // [0x7036e60] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetSkeletalMesh
	// class USkeletalMesh* GetSkeletalMesh(int32_t ComponentIndex);                                                         // [0x7035060] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetProjectorValueRange
	// int32_t GetProjectorValueRange(FString ParamName);                                                                    // [0x703498c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetProjectorValue
	// void GetProjectorValue(FString ProjectorParamName, FVector& OutPos, FVector& OutDirection, FVector& OutUp, FVector& OutScale, float& OutAngle, ECustomizableObjectProjectorType& OutType, int32_t RangeIndex); // [0x7033f44] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetProjectorUp
	// FVector GetProjectorUp(FString ParamName, int32_t RangeIndex);                                                        // [0x7033850] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetProjectorScale
	// FVector GetProjectorScale(FString ParamName, int32_t RangeIndex);                                                     // [0x703315c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetProjectorPosition
	// FVector GetProjectorPosition(FString ParamName, int32_t RangeIndex);                                                  // [0x7032a68] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetProjectorParameterType
	// ECustomizableObjectProjectorType GetProjectorParameterType(FString ParamName, int32_t RangeIndex);                    // [0x7032374] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetProjectorParameters
	// TArray<FCustomizableObjectProjectorParameterValue> GetProjectorParameters();                                          // [0x7032a4c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetProjectorDirection
	// FVector GetProjectorDirection(FString ParamName, int32_t RangeIndex);                                                 // [0x70313c0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetProjectorAngle
	// float GetProjectorAngle(FString ParamName, int32_t RangeIndex);                                                       // [0x7030ce4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetParameterDescription
	// class UTexture2D* GetParameterDescription(FString ParamName, int32_t DescIndex);                                      // [0x702effc] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetNumComponents
	// int32_t GetNumComponents();                                                                                           // [0x702efc4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetMergedAssetUserData
	// TSet<UAssetUserData*> GetMergedAssetUserData(int32_t ComponentIndex);                                                 // [0x702eec0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetIntValueRange
	// int32_t GetIntValueRange(FString ParamName);                                                                          // [0x702e7ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetIntParameterSelectedOption
	// FString GetIntParameterSelectedOption(FString ParamName, int32_t RangeIndex);                                         // [0x702e0f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetIntParameters
	// TArray<FCustomizableObjectIntParameterValue> GetIntParameters();                                                      // [0x702e7d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetFloatValueRange
	// int32_t GetFloatValueRange(FString ParamName);                                                                        // [0x702d218] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetFloatParameterSelectedOption
	// float GetFloatParameterSelectedOption(FString FloatParamName, int32_t RangeIndex);                                    // [0x702cb20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetFloatParameters
	// TArray<FCustomizableObjectFloatParameterValue> GetFloatParameters();                                                  // [0x702d1fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetCustomizableObject
	// class UCustomizableObject* GetCustomizableObject();                                                                   // [0x702c454] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetCurrentState
	// FString GetCurrentState();                                                                                            // [0x702c414] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetColorParameterSelectedOption
	// FLinearColor GetColorParameterSelectedOption(FString ColorParamName);                                                 // [0x702bd54] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetBuildParameterRelevancy
	// bool GetBuildParameterRelevancy();                                                                                    // [0x702b69c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetBuildParameterDecorations
	// bool GetBuildParameterDecorations();                                                                                  // [0x2f1d290] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetBoolParameterSelectedOption
	// bool GetBoolParameterSelectedOption(FString BoolParamName);                                                           // [0x702af94] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetBoolParameters
	// TArray<FCustomizableObjectBoolParameterValue> GetBoolParameters();                                                    // [0x702b680] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetAnimBP
	// class UClass* GetAnimBP(int32_t ComponentIndex, FName& Slot);                                                         // [0x702a7e4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetAnimationGameplayTags
	// FGameplayTagContainer GetAnimationGameplayTags();                                                                     // [0x702a8c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.ForEachAnimInstance
	// void ForEachAnimInstance(int32_t ComponentIndex, FDelegateProperty Delegate);                                         // [0x702a70c] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.FindVectorParameterNameIndex
	// int32_t FindVectorParameterNameIndex(FString ParamName);                                                              // [0x702a050] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.FindProjectorParameterNameIndex
	// int32_t FindProjectorParameterNameIndex(FString ParamName);                                                           // [0x7029994] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.FindIntParameterNameIndex
	// int32_t FindIntParameterNameIndex(FString ParamName);                                                                 // [0x7028c28] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.FindFloatParameterNameIndex
	// int32_t FindFloatParameterNameIndex(FString ParamName);                                                               // [0x702856c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.FindBoolParameterNameIndex
	// int32_t FindBoolParameterNameIndex(FString ParamName);                                                                // [0x7027eb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.CreateMultiLayerProjector
	// bool CreateMultiLayerProjector(FName& ProjectorParamName);                                                            // [0x7027e14] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.CloneStatic
	// class UCustomizableObjectInstance* CloneStatic(class UObject* Outer);                                                 // [0x7027d4c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.Clone
	// class UCustomizableObjectInstance* Clone();                                                                           // [0x7027cf8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.AddValueToProjectorRange
	// int32_t AddValueToProjectorRange(FString ParamName);                                                                  // [0x702763c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.AddValueToIntRange
	// int32_t AddValueToIntRange(FString ParamName);                                                                        // [0x7026f80] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.AddValueToFloatRange
	// int32_t AddValueToFloatRange(FString ParamName);                                                                      // [0x7026888] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CustomizableObject.MutableTextureMipDataProviderFactory
/// Size: 0x0028 (0x000028 - 0x000050)
class UMutableTextureMipDataProviderFactory : public UTextureMipDataProviderFactory
{ 
public:
	class UCustomizableObjectInstance*                 CustomizableObjectInstance;                                 // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0030   (0x0020)  MISSED
};

/// Struct /Script/CustomizableObject.PendingReleaseSkeletalMeshInfo
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPendingReleaseSkeletalMeshInfo
{ 
	class USkeletalMesh*                               SkeletalMesh;                                               // 0x0000   (0x0008)  
	double                                             Timestamp;                                                  // 0x0008   (0x0008)  
};

/// Struct /Script/CustomizableObject.PendingReleaseMaterialsInfo
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPendingReleaseMaterialsInfo
{ 
	TArray<class UMaterialInterface*>                  Materials;                                                  // 0x0000   (0x0010)  
	int32_t                                            TicksUntilRelease;                                          // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Class /Script/CustomizableObject.CustomizableObjectSystem
/// Size: 0x0138 (0x000028 - 0x000160)
class UCustomizableObjectSystem : public UObject
{ 
public:
	TArray<FPendingReleaseSkeletalMeshInfo>            PendingReleaseSkeletalMesh;                                 // 0x0028   (0x0010)  
	TArray<FPendingReleaseMaterialsInfo>               PendingReleaseMaterials;                                    // 0x0038   (0x0010)  
	class UCustomizableInstanceLODManagementBase*      DefaultInstanceLODManagement;                               // 0x0048   (0x0008)  
	class UCustomizableInstanceLODManagementBase*      CurrentInstanceLODManagement;                               // 0x0050   (0x0008)  
	TArray<class UTexture2D*>                          ProtectedCachedTextures;                                    // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0xF8];                                      // 0x0068   (0x00F8)  MISSED


	/// Functions
	// Function /Script/CustomizableObject.CustomizableObjectSystem.SetReleaseMutableTexturesImmediately
	// void SetReleaseMutableTexturesImmediately(bool bReleaseTextures);                                                     // [0x70534c4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectSystem.IsUpdating
	// bool IsUpdating(class UCustomizableObjectInstance* Instance);                                                         // [0x7053380] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectSystem.GetTotalInstances
	// int32_t GetTotalInstances();                                                                                          // [0x705335c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectSystem.GetTextureMemoryUsed
	// int32_t GetTextureMemoryUsed();                                                                                       // [0x7053348] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectSystem.GetPluginVersion
	// FString GetPluginVersion();                                                                                           // [0x70532fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectSystem.GetNumPendingInstances
	// int32_t GetNumPendingInstances();                                                                                     // [0x70532bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectSystem.GetNumInstances
	// int32_t GetNumInstances();                                                                                            // [0x7053268] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectSystem.GetInstanceChecked
	// class UCustomizableObjectSystem* GetInstanceChecked();                                                                // [0x7053244] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CustomizableObject.CustomizableObjectSystem.GetInstance
	// class UCustomizableObjectSystem* GetInstance();                                                                       // [0x7053244] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CustomizableObject.CustomizableObjectSystem.GetAverageBuildTime
	// int32_t GetAverageBuildTime();                                                                                        // [0x70531e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CustomizableObject.CustomizableSkeletalMeshActor
/// Size: 0x0028 (0x000310 - 0x000338)
class ACustomizableSkeletalMeshActor : public ASkeletalMeshActor
{ 
public:
	TArray<class UCustomizableSkeletalComponent*>      CustomizableSkeletalComponents;                             // 0x0310   (0x0010)  
	TArray<class USkeletalMeshComponent*>              SkeletalMeshComponents;                                     // 0x0320   (0x0010)  
	class UCustomizableSkeletalComponent*              CustomizableSkeletalComponent;                              // 0x0330   (0x0008)  
};

/// Class /Script/CustomizableObject.DefaultImageProvider
/// Size: 0x0050 (0x000028 - 0x000078)
class UDefaultImageProvider : public UCustomizableSystemImageProvider
{ 
public:
	SDK_UNDEFINED(80,1625) /* TMap<FName, UTexture2D*> */ __um(Textures);                                          // 0x0028   (0x0050)  
};

/// Struct /Script/CustomizableObject.UpdateContext
/// Size: 0x0001 (0x000000 - 0x000001)
struct FUpdateContext
{ 
	EUpdateResult                                      UpdateResult;                                               // 0x0000   (0x0001)  
};

/// Struct /Script/CustomizableObject.AnimInstanceOverridePhysicsAsset
/// Size: 0x0010 (0x000000 - 0x000010)
struct FAnimInstanceOverridePhysicsAsset
{ 
	int32_t                                            PropertyIndex;                                              // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UPhysicsAsset*                               PhysicsAsset;                                               // 0x0008   (0x0008)  
};

/// Struct /Script/CustomizableObject.AnimBpGeneratedPhysicsAssets
/// Size: 0x0010 (0x000000 - 0x000010)
struct FAnimBpGeneratedPhysicsAssets
{ 
	TArray<FAnimInstanceOverridePhysicsAsset>          AnimInstancePropertyIndexAndPhysicsAssets;                  // 0x0000   (0x0010)  
};

/// Struct /Script/CustomizableObject.CustomizableObjectAssetUserData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FCustomizableObjectAssetUserData
{ 
	class UAssetUserData*                              AssetUserData;                                              // 0x0000   (0x0008)  
};

/// Struct /Script/CustomizableObject.MutableParamUIMetadata
/// Size: 0x00F0 (0x000000 - 0x0000F0)
struct FMutableParamUIMetadata
{ 
	SDK_UNDEFINED(16,1626) /* FString */               __um(ObjectFriendlyName);                                   // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,1627) /* FString */               __um(UISectionName);                                        // 0x0010   (0x0010)  
	int32_t                                            UIOrder;                                                    // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	SDK_UNDEFINED(32,1628) /* TWeakObjectPtr<UTexture2D*> */ __um(UIThumbnail);                                    // 0x0028   (0x0020)  
	SDK_UNDEFINED(80,1629) /* TMap<FString, FString> */ __um(ExtraInformation);                                    // 0x0048   (0x0050)  
	SDK_UNDEFINED(80,1630) /* TMap<FString, TWeakObjectPtr<UObject*>> */ __um(ExtraAssets);                        // 0x0098   (0x0050)  
	float                                              MinimumValue;                                               // 0x00E8   (0x0004)  
	float                                              MaximumValue;                                               // 0x00EC   (0x0004)  
};

/// Struct /Script/CustomizableObject.IntegerParameterUIData
/// Size: 0x0100 (0x000000 - 0x000100)
struct FIntegerParameterUIData
{ 
	SDK_UNDEFINED(16,1631) /* FString */               __um(Name);                                                 // 0x0000   (0x0010)  
	FMutableParamUIMetadata                            ParamUIMetadata;                                            // 0x0010   (0x00F0)  
};

/// Struct /Script/CustomizableObject.ParameterUIData
/// Size: 0x0170 (0x000000 - 0x000170)
struct FParameterUIData
{ 
	SDK_UNDEFINED(16,1632) /* FString */               __um(Name);                                                 // 0x0000   (0x0010)  
	FMutableParamUIMetadata                            ParamUIMetadata;                                            // 0x0010   (0x00F0)  
	EMutableParameterType                              Type;                                                       // 0x0100   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0101   (0x0007)  MISSED
	TArray<FIntegerParameterUIData>                    ArrayIntegerParameterOption;                                // 0x0108   (0x0010)  
	ECustomizableObjectGroupType                       IntegerParameterGroupType;                                  // 0x0118   (0x0001)  
	ETextureCompressionStrategy                        TextureCompressionStrategy;                                 // 0x0119   (0x0001)  
	bool                                               bDisableTextureStreaming;                                   // 0x011A   (0x0001)  
	bool                                               bLiveUpdateMode;                                            // 0x011B   (0x0001)  
	bool                                               bReuseInstanceTextures;                                     // 0x011C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x011D   (0x0003)  MISSED
	SDK_UNDEFINED(80,1633) /* TMap<FString, FString> */ __um(ForcedParameterValues);                               // 0x0120   (0x0050)  
};

/// Struct /Script/CustomizableObject.FParameterOptionsTags
/// Size: 0x0010 (0x000000 - 0x000010)
struct FFParameterOptionsTags
{ 
	SDK_UNDEFINED(16,1634) /* TArray<FString> */       __um(Tags);                                                 // 0x0000   (0x0010)  
};

/// Struct /Script/CustomizableObject.ParameterTags
/// Size: 0x0060 (0x000000 - 0x000060)
struct FParameterTags
{ 
	SDK_UNDEFINED(16,1635) /* TArray<FString> */       __um(Tags);                                                 // 0x0000   (0x0010)  
	SDK_UNDEFINED(80,1636) /* TMap<FString, FFParameterOptionsTags> */ __um(ParameterOptions);                     // 0x0010   (0x0050)  
};

/// Struct /Script/CustomizableObject.ProfileParameterDat
/// Size: 0x0070 (0x000000 - 0x000070)
struct FProfileParameterDat
{ 
	SDK_UNDEFINED(16,1637) /* FString */               __um(ProfileName);                                          // 0x0000   (0x0010)  
	TArray<FCustomizableObjectBoolParameterValue>      BoolParameters;                                             // 0x0010   (0x0010)  
	TArray<FCustomizableObjectIntParameterValue>       IntParameters;                                              // 0x0020   (0x0010)  
	TArray<FCustomizableObjectFloatParameterValue>     FloatParameters;                                            // 0x0030   (0x0010)  
	TArray<FCustomizableObjectTextureParameterValue>   TextureParameters;                                          // 0x0040   (0x0010)  
	TArray<FCustomizableObjectVectorParameterValue>    VectorParameters;                                           // 0x0050   (0x0010)  
	TArray<FCustomizableObjectProjectorParameterValue> ProjectorParameters;                                        // 0x0060   (0x0010)  
};

/// Struct /Script/CustomizableObject.CompilationOptions
/// Size: 0x0030 (0x000000 - 0x000030)
struct FCompilationOptions
{ 
	ECustomizableObjectTextureCompression              TextureCompression;                                         // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            OptimizationLevel;                                          // 0x0004   (0x0004)  
	bool                                               bUseDiskCompilation;                                        // 0x0008   (0x0001)  
	unsigned char                                      UnknownData01_6[0x27];                                      // 0x0009   (0x0027)  MISSED
};

/// Struct /Script/CustomizableObject.MutableStreamableBlock
/// Size: 0x0018 (0x000000 - 0x000018)
struct FMutableStreamableBlock
{ 
	uint16_t                                           FileIndex;                                                  // 0x0000   (0x0002)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0002   (0x0006)  MISSED
	uint64_t                                           Offset;                                                     // 0x0008   (0x0008)  
	uint32_t                                           Size;                                                       // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/CustomizableObject.CustomizableObjectIdPair
/// Size: 0x0020 (0x000000 - 0x000020)
struct FCustomizableObjectIdPair
{ 
	SDK_UNDEFINED(16,1638) /* FString */               __um(CustomizableObjectGroupName);                          // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,1639) /* FString */               __um(CustomizableObjectName);                               // 0x0010   (0x0010)  
};

/// Struct /Script/CustomizableObject.CustomizableObjectIdentifier
/// Size: 0x0030 (0x000000 - 0x000030)
struct FCustomizableObjectIdentifier
{ 
	SDK_UNDEFINED(16,1640) /* FString */               __um(CustomizableObjectGroupName);                          // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,1641) /* FString */               __um(CustomizableObjectName);                               // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,1642) /* FString */               __um(Guid);                                                 // 0x0020   (0x0010)  
};

/// Struct /Script/CustomizableObject.MultilayerProjector
/// Size: 0x00F8 (0x000000 - 0x0000F8)
struct FMultilayerProjector
{ 
	FName                                              ParamName;                                                  // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(80,1643) /* TMap<FName, int32_t> */  __um(VirtualLayersMapping);                                 // 0x0008   (0x0050)  
	SDK_UNDEFINED(80,1644) /* TMap<FName, int32_t> */  __um(VirtualLayersOrder);                                   // 0x0058   (0x0050)  
	SDK_UNDEFINED(80,1645) /* TMap<FName, FMultilayerProjectorLayer> */ __um(DisableVirtualLayers);                // 0x00A8   (0x0050)  
};

/// Struct /Script/CustomizableObject.MultilayerProjectorLayer
/// Size: 0x0080 (0x000000 - 0x000080)
struct FMultilayerProjectorLayer
{ 
	unsigned char                                      UnknownData00_1[0x80];                                      // 0x0000   (0x0080)  MISSED
};

/// Struct /Script/CustomizableObject.MultilayerProjectorVirtualLayer
/// Size: 0x0008 (0x000080 - 0x000088)
struct FMultilayerProjectorVirtualLayer : FMultilayerProjectorLayer
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0080   (0x0008)  MISSED
};

