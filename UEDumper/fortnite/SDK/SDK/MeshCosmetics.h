
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: CustomizableObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameFeatures
/// dependency: GameplayTags
/// dependency: ItemizationCoreRuntime
/// dependency: McpProfileSys

/// Class /Script/MeshCosmetics.MeshCosmeticsOption_ApplyAssembledMeshSchema
/// Size: 0x0000 (0x000030 - 0x000030)
class UMeshCosmeticsOption_ApplyAssembledMeshSchema : public UFortCosmeticFlowOption
{ 
public:
};

/// Class /Script/MeshCosmetics.MeshCosmeticsOption_ApplyCustomizableObject
/// Size: 0x0000 (0x000030 - 0x000030)
class UMeshCosmeticsOption_ApplyCustomizableObject : public UFortCosmeticFlowOption
{ 
public:
};

/// Class /Script/MeshCosmetics.MeshCosmeticsStep_ChooseParameters
/// Size: 0x0000 (0x000058 - 0x000058)
class UMeshCosmeticsStep_ChooseParameters : public UFortCosmeticStep
{ 
public:
};

/// Class /Script/MeshCosmetics.MeshCosmeticsStep_CommitChosenParams
/// Size: 0x0000 (0x000058 - 0x000058)
class UMeshCosmeticsStep_CommitChosenParams : public UFortCosmeticStep
{ 
public:
};

/// Class /Script/MeshCosmetics.MeshCosmeticsStep_CompileCustomizableObjects
/// Size: 0x0000 (0x000058 - 0x000058)
class UMeshCosmeticsStep_CompileCustomizableObjects : public UFortCosmeticStep
{ 
public:
};

/// Class /Script/MeshCosmetics.MeshCosmeticsStep_ComponentRemoval
/// Size: 0x0000 (0x000058 - 0x000058)
class UMeshCosmeticsStep_ComponentRemoval : public UFortCosmeticStep
{ 
public:
};

/// Class /Script/MeshCosmetics.MeshCosmeticsAdditionalData_SpecifyMaterialOnlyParams
/// Size: 0x0010 (0x000028 - 0x000038)
class UMeshCosmeticsAdditionalData_SpecifyMaterialOnlyParams : public UFortCosmeticItemAdditionalData
{ 
public:
	TArray<FName>                                      MaterialOnlyParameterNames;                                 // 0x0028   (0x0010)  
};

/// Class /Script/MeshCosmetics.MeshCosmeticsStep_HandleGeneratedMesh
/// Size: 0x0000 (0x000058 - 0x000058)
class UMeshCosmeticsStep_HandleGeneratedMesh : public UFortCosmeticStep
{ 
public:
};

/// Class /Script/MeshCosmetics.MeshCosmeticsStep_PlaceComponent
/// Size: 0x0000 (0x000058 - 0x000058)
class UMeshCosmeticsStep_PlaceComponent : public UFortCosmeticStep
{ 
public:
};

/// Class /Script/MeshCosmetics.MeshCosmeticsStep_RemoveCustomizableSkeletalComponents
/// Size: 0x0000 (0x000058 - 0x000058)
class UMeshCosmeticsStep_RemoveCustomizableSkeletalComponents : public UFortCosmeticStep
{ 
public:
};

/// Class /Script/MeshCosmetics.MeshCosmeticsVariance_ApplyParameters
/// Size: 0x0000 (0x000058 - 0x000058)
class UMeshCosmeticsVariance_ApplyParameters : public UFortCosmeticStep
{ 
public:
};

/// Class /Script/MeshCosmetics.MeshCosmeticsVariance_CompileObjects
/// Size: 0x0000 (0x000058 - 0x000058)
class UMeshCosmeticsVariance_CompileObjects : public UFortCosmeticStep
{ 
public:
};

/// Class /Script/MeshCosmetics.MeshCosmeticsVariance_ManageComponents
/// Size: 0x0000 (0x000058 - 0x000058)
class UMeshCosmeticsVariance_ManageComponents : public UFortCosmeticStep
{ 
public:
};

/// Class /Script/MeshCosmetics.MeshCosmeticsVariance_ProcessVariantAssets
/// Size: 0x0000 (0x000058 - 0x000058)
class UMeshCosmeticsVariance_ProcessVariantAssets : public UFortCosmeticStep
{ 
public:
};

/// Struct /Script/MeshCosmetics.CosmeticSlotSelector
/// Size: 0x0002 (0x000000 - 0x000002)
struct FCosmeticSlotSelector
{ 
	SDK_UNDEFINED(1,14673) /* TEnumAsByte<EFortCustomPartType> */ __um(LegacyPartType);                            // 0x0000   (0x0001)  
	EAthenaCustomizationCategory                       SourceCategory;                                             // 0x0001   (0x0001)  
};

/// Struct /Script/MeshCosmetics.ApparelCustomizableItemReference
/// Size: 0x0020 (0x000000 - 0x000020)
struct FApparelCustomizableItemReference
{ 
	SDK_UNDEFINED(16,14674) /* FString */              __um(GroupName);                                            // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,14675) /* FString */              __um(ValueName);                                            // 0x0010   (0x0010)  
};

/// Class /Script/MeshCosmetics.MeshCosmeticsApparelItemDefinition
/// Size: 0x0028 (0x000750 - 0x000778)
class UMeshCosmeticsApparelItemDefinition : public UFortApparelItemDefinition
{ 
public:
	FCosmeticSlotSelector                              SlotValidWithin;                                            // 0x0750   (0x0002)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0752   (0x0006)  MISSED
	FApparelCustomizableItemReference                  Parameter;                                                  // 0x0758   (0x0020)  
};

/// Struct /Script/MeshCosmetics.CustomizableObjectParamVariantBase
/// Size: 0x0020 (0x000000 - 0x000020)
struct FCustomizableObjectParamVariantBase
{ 
	SDK_UNDEFINED(32,14676) /* TWeakObjectPtr<UCustomizableObject*> */ __um(ObjectToModify);                       // 0x0000   (0x0020)  
};

/// Struct /Script/MeshCosmetics.CustomizableObjectValueBase
/// Size: 0x0018 (0x000000 - 0x000018)
struct FCustomizableObjectValueBase
{ 
	SDK_UNDEFINED(16,14677) /* FString */              __um(ParameterName);                                        // 0x0000   (0x0010)  
	int32_t                                            RangeIndex;                                                 // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/MeshCosmetics.CustomizableObjectIntValue
/// Size: 0x0018 (0x000018 - 0x000030)
struct FCustomizableObjectIntValue : FCustomizableObjectValueBase
{ 
	int32_t                                            NumericValue;                                               // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	SDK_UNDEFINED(16,14678) /* FString */              __um(NamedValue);                                           // 0x0020   (0x0010)  
};

/// Struct /Script/MeshCosmetics.CustomizableObjectIntParamVariant
/// Size: 0x0010 (0x000020 - 0x000030)
struct FCustomizableObjectIntParamVariant : FCustomizableObjectParamVariantBase
{ 
	TArray<FCustomizableObjectIntValue>                Parameters;                                                 // 0x0020   (0x0010)  
};

/// Struct /Script/MeshCosmetics.CustomizableObjectFloatValue
/// Size: 0x0008 (0x000018 - 0x000020)
struct FCustomizableObjectFloatValue : FCustomizableObjectValueBase
{ 
	float                                              Value;                                                      // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/MeshCosmetics.CustomizableObjectFloatParamVariant
/// Size: 0x0010 (0x000020 - 0x000030)
struct FCustomizableObjectFloatParamVariant : FCustomizableObjectParamVariantBase
{ 
	TArray<FCustomizableObjectFloatValue>              Parameters;                                                 // 0x0020   (0x0010)  
};

/// Struct /Script/MeshCosmetics.CustomizableObjectBoolValue
/// Size: 0x0008 (0x000018 - 0x000020)
struct FCustomizableObjectBoolValue : FCustomizableObjectValueBase
{ 
	bool                                               Value;                                                      // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/MeshCosmetics.CustomizableObjectBoolParamVariant
/// Size: 0x0010 (0x000020 - 0x000030)
struct FCustomizableObjectBoolParamVariant : FCustomizableObjectParamVariantBase
{ 
	TArray<FCustomizableObjectBoolValue>               Parameters;                                                 // 0x0020   (0x0010)  
};

/// Struct /Script/MeshCosmetics.CustomizableObjectVectorValue
/// Size: 0x0010 (0x000018 - 0x000028)
struct FCustomizableObjectVectorValue : FCustomizableObjectValueBase
{ 
	FLinearColor                                       Value;                                                      // 0x0018   (0x0010)  
};

/// Struct /Script/MeshCosmetics.CustomizableObjectVectorParamVariant
/// Size: 0x0010 (0x000020 - 0x000030)
struct FCustomizableObjectVectorParamVariant : FCustomizableObjectParamVariantBase
{ 
	TArray<FCustomizableObjectVectorValue>             Parameters;                                                 // 0x0020   (0x0010)  
};

/// Struct /Script/MeshCosmetics.CustomizableObjectTextureValue
/// Size: 0x0008 (0x000018 - 0x000020)
struct FCustomizableObjectTextureValue : FCustomizableObjectValueBase
{ 
	class UTexture2D*                                  Value;                                                      // 0x0018   (0x0008)  
};

/// Struct /Script/MeshCosmetics.CustomizableObjectTextureParamVariant
/// Size: 0x0010 (0x000020 - 0x000030)
struct FCustomizableObjectTextureParamVariant : FCustomizableObjectParamVariantBase
{ 
	TArray<FCustomizableObjectTextureValue>            Parameters;                                                 // 0x0020   (0x0010)  
};

/// Struct /Script/MeshCosmetics.CustomizableObjectProjectorValue
/// Size: 0x0068 (0x000018 - 0x000080)
struct FCustomizableObjectProjectorValue : FCustomizableObjectValueBase
{ 
	FVector                                            Position;                                                   // 0x0018   (0x0018)  
	FVector                                            Direction;                                                  // 0x0030   (0x0018)  
	FVector                                            UpDirection;                                                // 0x0048   (0x0018)  
	FVector                                            Scale;                                                      // 0x0060   (0x0018)  
	float                                              Angle;                                                      // 0x0078   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x007C   (0x0004)  MISSED
};

/// Struct /Script/MeshCosmetics.CustomizableObjectProjectorVariant
/// Size: 0x0010 (0x000020 - 0x000030)
struct FCustomizableObjectProjectorVariant : FCustomizableObjectParamVariantBase
{ 
	TArray<FCustomizableObjectProjectorValue>          Parameters;                                                 // 0x0020   (0x0010)  
};

/// Struct /Script/MeshCosmetics.CustomizableObjectMultilayerProjectorVariant
/// Size: 0x0050 (0x000020 - 0x000070)
struct FCustomizableObjectMultilayerProjectorVariant : FCustomizableObjectParamVariantBase
{ 
	SDK_UNDEFINED(80,14679) /* TMap<FName, FCustomizableObjectMultilayerProjectors> */ __um(MultilayerProjectors); // 0x0020   (0x0050)  
};

/// Struct /Script/MeshCosmetics.CustomizableObjectStateValue
/// Size: 0x0010 (0x000018 - 0x000028)
struct FCustomizableObjectStateValue : FCustomizableObjectValueBase
{ 
	SDK_UNDEFINED(16,14680) /* FString */              __um(NewState);                                             // 0x0018   (0x0010)  
};

/// Struct /Script/MeshCosmetics.CustomizableObjectStateVariant
/// Size: 0x0010 (0x000020 - 0x000030)
struct FCustomizableObjectStateVariant : FCustomizableObjectParamVariantBase
{ 
	TArray<FCustomizableObjectStateValue>              States;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/MeshCosmetics.CustomizableObjectParamsVariantDef
/// Size: 0x0080 (0x0000A0 - 0x000120)
struct FCustomizableObjectParamsVariantDef : FBaseVariantDef
{ 
	TArray<FCustomizableObjectIntParamVariant>         IntParams;                                                  // 0x00A0   (0x0010)  
	TArray<FCustomizableObjectFloatParamVariant>       FloatParams;                                                // 0x00B0   (0x0010)  
	TArray<FCustomizableObjectBoolParamVariant>        BoolParams;                                                 // 0x00C0   (0x0010)  
	TArray<FCustomizableObjectVectorParamVariant>      VectorParams;                                               // 0x00D0   (0x0010)  
	TArray<FCustomizableObjectTextureParamVariant>     TextureParams;                                              // 0x00E0   (0x0010)  
	TArray<FCustomizableObjectProjectorVariant>        ProjectorParams;                                            // 0x00F0   (0x0010)  
	TArray<FCustomizableObjectMultilayerProjectorVariant> MultilayerProjectorParams;                               // 0x0100   (0x0010)  
	TArray<FCustomizableObjectStateVariant>            StateVariants;                                              // 0x0110   (0x0010)  
};

/// Class /Script/MeshCosmetics.FortCustomizableObjectParameterVariant
/// Size: 0x0010 (0x000070 - 0x000080)
class UFortCustomizableObjectParameterVariant : public UFortCosmeticVariantBackedByArray
{ 
public:
	TArray<FCustomizableObjectParamsVariantDef>        ParameterOptions;                                           // 0x0070   (0x0010)  


	/// Functions
	// Function /Script/MeshCosmetics.FortCustomizableObjectParameterVariant.ApplyVariants
	// void ApplyVariants(class AActor* Actor, FFortAthenaLoadout& Loadout);                                                 // [0x9ed6414] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
};

/// Struct /Script/MeshCosmetics.CustomizableObjectSprayVariantFixedProperties
/// Size: 0x0068 (0x000000 - 0x000068)
struct FCustomizableObjectSprayVariantFixedProperties
{ 
	FVector                                            Position;                                                   // 0x0000   (0x0018)  
	FVector                                            Direction;                                                  // 0x0018   (0x0018)  
	FVector                                            UpDirection;                                                // 0x0030   (0x0018)  
	FVector                                            BaseScale;                                                  // 0x0048   (0x0018)  
	float                                              BaseRotation;                                               // 0x0060   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0064   (0x0004)  MISSED
};

/// Struct /Script/MeshCosmetics.CustomizableObjectSprayVariantSelectablePayload
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
struct FCustomizableObjectSprayVariantSelectablePayload : FBaseVariantDef
{ 
	FPrimaryAssetId                                    TextureSource;                                              // 0x00A0   (0x0008)  
	float                                              Saturation;                                                 // 0x00A8   (0x0004)  
	float                                              Wear;                                                       // 0x00AC   (0x0004)  
	float                                              Scale;                                                      // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00B4   (0x0004)  MISSED
};

/// Struct /Script/MeshCosmetics.CustomizableObjectSprayVariantPayloadClamps
/// Size: 0x0030 (0x000000 - 0x000030)
struct FCustomizableObjectSprayVariantPayloadClamps
{ 
	FFloatRange                                        Saturation;                                                 // 0x0000   (0x0010)  
	FFloatRange                                        Wear;                                                       // 0x0010   (0x0010)  
	FFloatRange                                        Scale;                                                      // 0x0020   (0x0010)  
};

/// Struct /Script/MeshCosmetics.CustomizableObjectSprayVariantSlotImageProperties
/// Size: 0x0040 (0x000000 - 0x000040)
struct FCustomizableObjectSprayVariantSlotImageProperties
{ 
	SDK_UNDEFINED(32,14681) /* TWeakObjectPtr<UTexture2D*> */ __um(SprayNotAssignedImage);                         // 0x0000   (0x0020)  
	SDK_UNDEFINED(32,14682) /* TWeakObjectPtr<UTexture2D*> */ __um(SprayAssignedImage);                            // 0x0020   (0x0020)  
};

/// Class /Script/MeshCosmetics.FortCustomizableObjectSprayVariant
/// Size: 0x0258 (0x000070 - 0x0002C8)
class UFortCustomizableObjectSprayVariant : public UFortCosmeticVariant
{ 
public:
	FGameplayTag                                       ActiveSelectionTag;                                         // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0074   (0x0004)  MISSED
	SDK_UNDEFINED(16,14683) /* FString */              __um(EnabledParamName);                                     // 0x0078   (0x0010)  
	SDK_UNDEFINED(16,14684) /* FString */              __um(ProjectorParamName);                                   // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,14685) /* FString */              __um(TextureParamName);                                     // 0x0098   (0x0010)  
	SDK_UNDEFINED(16,14686) /* FString */              __um(SaturationParamName);                                  // 0x00A8   (0x0010)  
	SDK_UNDEFINED(16,14687) /* FString */              __um(WearParamName);                                        // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,14688) /* FString */              __um(ScaleParamName);                                       // 0x00C8   (0x0010)  
	FGameplayTagQuery                                  TagQueryForShouldOverrideCODefaultsWithFixedLocationParameters; // 0x00D8   (0x0048)  
	FCustomizableObjectSprayVariantFixedProperties     FixedSprayLocation;                                         // 0x0120   (0x0068)  
	FCustomizableObjectSprayVariantSelectablePayload   DefaultSprayCustomization;                                  // 0x0188   (0x00B8)  
	FCustomizableObjectSprayVariantPayloadClamps       SprayNumericConstraints;                                    // 0x0240   (0x0030)  
	float                                              TextureBaseScale;                                           // 0x0270   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0274   (0x0004)  MISSED
	FCustomizableObjectSprayVariantSlotImageProperties SpraySlotImageProperties;                                   // 0x0278   (0x0040)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x02B8   (0x0010)  MISSED
};

/// Class /Script/MeshCosmetics.GameFeatureAction_MeshCosmeticsCompileSchemaDepenencies
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameFeatureAction_MeshCosmeticsCompileSchemaDepenencies : public UGameFeatureAction
{ 
public:
};

/// Class /Script/MeshCosmetics.MeshCosmeticTagInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UMeshCosmeticTagInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/MeshCosmetics.MeshCosmeticTagInterface.OnPostCustomizationAnimGameplayTags_BP
	// void OnPostCustomizationAnimGameplayTags_BP(FGameplayTagContainer& GameplayTags);                                     // [0x130d900] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/MeshCosmetics.FortCustomizableInstanceLODManagement
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortCustomizableInstanceLODManagement : public UCustomizableInstanceLODManagementBase
{ 
public:
};

/// Class /Script/MeshCosmetics.MeshCosmeticsLayoutSchema
/// Size: 0x00A0 (0x000338 - 0x0003D8)
class UMeshCosmeticsLayoutSchema : public UFortApparelLayoutItemDefinition
{ 
public:
	SDK_UNDEFINED(80,14689) /* TMap<FCosmeticSlotSelector, FCosmeticsLayoutSlot> */ __um(SlotDataConfig);          // 0x0338   (0x0050)  
	SDK_UNDEFINED(80,14690) /* TMap<FCosmeticSlotSelector, TWeakObjectPtr<UCustomizableObject*>> */ __um(SlottedCustomizableObjects); // 0x0388   (0x0050)  
};

/// Class /Script/MeshCosmetics.MeshCosmeticsAppliedSchemaData
/// Size: 0x0020 (0x000028 - 0x000048)
class UMeshCosmeticsAppliedSchemaData : public UFortCosmeticItemAdditionalData
{ 
public:
	SDK_UNDEFINED(32,14691) /* TWeakObjectPtr<UMeshCosmeticsLayoutSchema*> */ __um(SchemaAsset);                   // 0x0028   (0x0020)  
};

/// Class /Script/MeshCosmetics.MeshCosmeticsSupportedSchemaData
/// Size: 0x0010 (0x000028 - 0x000038)
class UMeshCosmeticsSupportedSchemaData : public UFortCosmeticItemAdditionalData
{ 
public:
	SDK_UNDEFINED(16,14692) /* TArray<TWeakObjectPtr<UMeshCosmeticsLayoutSchema*>> */ __um(SupportedSchemas);      // 0x0028   (0x0010)  
};

/// Struct /Script/MeshCosmetics.PartHandleControllers
/// Size: 0x0020 (0x000000 - 0x000020)
struct FPartHandleControllers
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Struct /Script/MeshCosmetics.CustomizableObjectSprayVariantMCPPayload
/// Size: 0x0010 (0x000000 - 0x000010)
struct FCustomizableObjectSprayVariantMCPPayload
{ 
	FPrimaryAssetId                                    TextureAssetID;                                             // 0x0000   (0x0008)  
	uint16_t                                           CompactSaturation;                                          // 0x0008   (0x0002)  
	uint16_t                                           CompactWear;                                                // 0x000A   (0x0002)  
	uint16_t                                           CompactScale;                                               // 0x000C   (0x0002)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000E   (0x0002)  MISSED
};

/// Struct /Script/MeshCosmetics.CustomizableObjectMultilayerProjectsVirtualLayer
/// Size: 0x0090 (0x000000 - 0x000090)
struct FCustomizableObjectMultilayerProjectsVirtualLayer
{ 
	bool                                               bModifyEnabled;                                             // 0x0000   (0x0001)  
	bool                                               bEnabled;                                                   // 0x0001   (0x0001)  
	bool                                               bModifyProjection;                                          // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x0003   (0x0005)  MISSED
	FVector                                            Position;                                                   // 0x0008   (0x0018)  
	FVector                                            Direction;                                                  // 0x0020   (0x0018)  
	FVector                                            UpDirection;                                                // 0x0038   (0x0018)  
	FVector                                            Scale;                                                      // 0x0050   (0x0018)  
	float                                              Angle;                                                      // 0x0068   (0x0004)  
	bool                                               bModifyImage;                                               // 0x006C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x006D   (0x0003)  MISSED
	SDK_UNDEFINED(16,14693) /* FString */              __um(Image);                                                // 0x0070   (0x0010)  
	bool                                               bModifyOpacity;                                             // 0x0080   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0081   (0x0003)  MISSED
	float                                              Opacity;                                                    // 0x0084   (0x0004)  
	bool                                               bModifyOrder;                                               // 0x0088   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0089   (0x0003)  MISSED
	int32_t                                            Order;                                                      // 0x008C   (0x0004)  
};

/// Struct /Script/MeshCosmetics.CustomizableObjectMultilayerProjectors
/// Size: 0x0050 (0x000000 - 0x000050)
struct FCustomizableObjectMultilayerProjectors
{ 
	SDK_UNDEFINED(80,14694) /* TMap<FName, FCustomizableObjectMultilayerProjectsVirtualLayer> */ __um(VirtualLayers); // 0x0000   (0x0050)  
};

/// Struct /Script/MeshCosmetics.MeshCosmeticsCustomizationPerSlotData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FMeshCosmeticsCustomizationPerSlotData
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/MeshCosmetics.MeshCosmeticsCustomizableObjectEntry
/// Size: 0x02A0 (0x000000 - 0x0002A0)
struct FMeshCosmeticsCustomizableObjectEntry
{ 
	unsigned char                                      UnknownData00_2[0x2A0];                                     // 0x0000   (0x02A0)  MISSED
};

/// Struct /Script/MeshCosmetics.MeshCosmeticsCustomizationCCV2Data
/// Size: 0x0020 (0x000000 - 0x000020)
struct FMeshCosmeticsCustomizationCCV2Data
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Struct /Script/MeshCosmetics.MeshCosmeticsImageProviderWrapper
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMeshCosmeticsImageProviderWrapper
{ 
	class UDefaultImageProvider*                       ImageProvider;                                              // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0008   (0x0008)  MISSED
};

/// Struct /Script/MeshCosmetics.PendingCustomizationComponentsList
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPendingCustomizationComponentsList
{ 
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0000   (0x0030)  MISSED
};

/// Struct /Script/MeshCosmetics.LoadedAthenaCosmeticAssets
/// Size: 0x0020 (0x000000 - 0x000020)
struct FLoadedAthenaCosmeticAssets
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Struct /Script/MeshCosmetics.PendingVariantAssetsToLoad
/// Size: 0x0058 (0x000000 - 0x000058)
struct FPendingVariantAssetsToLoad
{ 
	unsigned char                                      UnknownData00_2[0x58];                                      // 0x0000   (0x0058)  MISSED
};

/// Struct /Script/MeshCosmetics.SkeletalComponentData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FSkeletalComponentData
{ 
	class UMeshCosmeticsLayoutSchema*                  LayoutSchema;                                               // 0x0000   (0x0008)  
	FCosmeticSlotSelector                              Slot;                                                       // 0x0008   (0x0002)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x000A   (0x0006)  MISSED
	class UCustomizableObject*                         CustomizableObject;                                         // 0x0010   (0x0008)  
};

/// Struct /Script/MeshCosmetics.MeshCosmeticsPassDataCommon
/// Size: 0x0110 (0x000000 - 0x000110)
struct FMeshCosmeticsPassDataCommon
{ 
	SDK_UNDEFINED(80,14695) /* TMap<FCosmeticSlotSelector, FCosmeticsLayoutSlot> */ __um(AllSlotDataConfigs);      // 0x0000   (0x0050)  
	SDK_UNDEFINED(80,14696) /* TMap<FCosmeticSlotSelector, UMeshCosmeticsLayoutSchema*> */ __um(ProvidedSlotsToSchemaData); // 0x0050   (0x0050)  
	TArray<class UAthenaCosmeticItemDefinition*>       MeshCosmeticsItemDefs;                                      // 0x00A0   (0x0010)  
	TArray<class UObject*>                             KeepLoadedObjects;                                          // 0x00B0   (0x0010)  
	SDK_UNDEFINED(80,14697) /* TMap<UCustomizableSkeletalComponent*, FSkeletalComponentData> */ __um(SkeletalComponentData); // 0x00C0   (0x0050)  
};

/// Struct /Script/MeshCosmetics.CosmeticsLayoutSlot
/// Size: 0x0098 (0x000000 - 0x000098)
struct FCosmeticsLayoutSlot
{ 
	SDK_UNDEFINED(32,14698) /* TWeakObjectPtr<UCustomizableObject*> */ __um(SlottedObject);                        // 0x0000   (0x0020)  
	int32_t                                            ComponentIndex;                                             // 0x0020   (0x0004)  
	FCosmeticSlotSelector                              RequiredCosmeticPart;                                       // 0x0024   (0x0002)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0026   (0x0002)  MISSED
	SDK_UNDEFINED(32,14699) /* TWeakObjectPtr<UClass*> */ __um(ProportionalLayerAnimBP);                           // 0x0028   (0x0020)  
	SDK_UNDEFINED(80,14700) /* TMap<int32_t, FName> */ __um(LinkedAnimGraphTag);                                   // 0x0048   (0x0050)  
};

