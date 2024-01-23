
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
/// dependency: InterchangeCore

/// Enum /Script/InterchangeEngine.EInterchangePipelineConfigurationDialogResult
/// Size: 0x04
enum class EInterchangePipelineConfigurationDialogResult : uint8_t
{
	EInterchangePipelineConfigurationDialogResult__Cancel                            = 0,
	EInterchangePipelineConfigurationDialogResult__Import                            = 1,
	EInterchangePipelineConfigurationDialogResult__ImportAll                         = 2,
	EInterchangePipelineConfigurationDialogResult__EInterchangePipelineConfigurationDialogResult_MAX = 3
};

/// Class /Script/InterchangeEngine.InterchangeBlueprintPipelineBase
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UInterchangeBlueprintPipelineBase : public UBlueprint
{ 
public:
};

/// Class /Script/InterchangeEngine.InterchangeFilePickerBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UInterchangeFilePickerBase : public UObject
{ 
public:


	/// Functions
	// Function /Script/InterchangeEngine.InterchangeFilePickerBase.ScriptedFilePickerForTranslatorType
	// bool ScriptedFilePickerForTranslatorType(EInterchangeTranslatorType TranslatorType, FInterchangeFilePickerParameters& Parameters, TArray<FString>& OutFilenames); // [0xc48a35c] RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/InterchangeEngine.InterchangeFilePickerBase.ScriptedFilePickerForTranslatorAssetType
	// bool ScriptedFilePickerForTranslatorAssetType(EInterchangeTranslatorAssetType TranslatorAssetType, FInterchangeFilePickerParameters& Parameters, TArray<FString>& OutFilenames); // [0xc48a20c] RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/InterchangeEngine.InterchangePipelineConfigurationBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UInterchangePipelineConfigurationBase : public UObject
{ 
public:


	/// Functions
	// Function /Script/InterchangeEngine.InterchangePipelineConfigurationBase.ScriptedShowScenePipelineConfigurationDialog
	// EInterchangePipelineConfigurationDialogResult ScriptedShowScenePipelineConfigurationDialog(TArray<FInterchangeStackInfo>& PipelineStacks, TArray<UInterchangePipelineBase*>& OutPipelines, class UInterchangeSourceData* SourceData, class UInterchangeBaseNodeContainer* BaseNodeContainer); // [0xc48b67c] RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/InterchangeEngine.InterchangePipelineConfigurationBase.ScriptedShowReimportPipelineConfigurationDialog
	// EInterchangePipelineConfigurationDialogResult ScriptedShowReimportPipelineConfigurationDialog(TArray<FInterchangeStackInfo>& PipelineStacks, TArray<UInterchangePipelineBase*>& OutPipelines, class UInterchangeSourceData* SourceData, class UInterchangeBaseNodeContainer* BaseNodeContainer); // [0xc48ad94] RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/InterchangeEngine.InterchangePipelineConfigurationBase.ScriptedShowPipelineConfigurationDialog
	// EInterchangePipelineConfigurationDialogResult ScriptedShowPipelineConfigurationDialog(TArray<FInterchangeStackInfo>& PipelineStacks, TArray<UInterchangePipelineBase*>& OutPipelines, class UInterchangeSourceData* SourceData, class UInterchangeBaseNodeContainer* BaseNodeContainer); // [0xc48a4ac] RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Struct /Script/InterchangeEngine.InterchangeImportSettings
/// Size: 0x0080 (0x000000 - 0x000080)
struct FInterchangeImportSettings
{ 
	SDK_UNDEFINED(80,13936) /* TMap<FName, FInterchangePipelineStack> */ __um(PipelineStacks);                     // 0x0000   (0x0050)  
	FName                                              DefaultPipelineStack;                                       // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0054   (0x0004)  MISSED
	SDK_UNDEFINED(32,13937) /* TWeakObjectPtr<UClass*> */ __um(PipelineConfigurationDialogClass);                  // 0x0058   (0x0020)  
	bool                                               bShowPipelineStacksConfigurationDialog;                     // 0x0078   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0079   (0x0007)  MISSED
};

/// Struct /Script/InterchangeEngine.InterchangeContentImportSettings
/// Size: 0x00A0 (0x000080 - 0x000120)
struct FInterchangeContentImportSettings : FInterchangeImportSettings
{ 
	SDK_UNDEFINED(80,13938) /* TMap<EInterchangeTranslatorAssetType, FName> */ __um(DefaultPipelineStackOverride); // 0x0080   (0x0050)  
	SDK_UNDEFINED(80,13939) /* TMap<EInterchangeTranslatorAssetType, bool> */ __um(ShowPipelineStacksConfigurationDialogOverride); // 0x00D0   (0x0050)  
};

/// Class /Script/InterchangeEngine.InterchangeProjectSettings
/// Size: 0x01E8 (0x000030 - 0x000218)
class UInterchangeProjectSettings : public UDeveloperSettings
{ 
public:
	FInterchangeContentImportSettings                  ContentImportSettings;                                      // 0x0030   (0x0120)  
	FInterchangeImportSettings                         SceneImportSettings;                                        // 0x0150   (0x0080)  
	SDK_UNDEFINED(32,13940) /* TWeakObjectPtr<UClass*> */ __um(FilePickerClass);                                   // 0x01D0   (0x0020)  
	bool                                               bStaticMeshUseSmoothEdgesIfSmoothingInformationIsMissing;   // 0x01F0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x01F1   (0x0007)  MISSED
	SDK_UNDEFINED(32,13941) /* TWeakObjectPtr<UClass*> */ __um(GenericPipelineClass);                              // 0x01F8   (0x0020)  
};

/// Class /Script/InterchangeEngine.InterchangePythonPipelineBase
/// Size: 0x0000 (0x0000F8 - 0x0000F8)
class UInterchangePythonPipelineBase : public UInterchangePipelineBase
{ 
public:
};

/// Class /Script/InterchangeEngine.InterchangePythonPipelineAsset
/// Size: 0x0038 (0x000028 - 0x000060)
class UInterchangePythonPipelineAsset : public UObject
{ 
public:
	SDK_UNDEFINED(32,13942) /* TWeakObjectPtr<UClass*> */ __um(PythonClass);                                       // 0x0028   (0x0020)  
	class UInterchangePythonPipelineBase*              GeneratedPipeline;                                          // 0x0048   (0x0008)  
	SDK_UNDEFINED(16,13943) /* FString */              __um(JsonDefaultProperties);                                // 0x0050   (0x0010)  
};

/// Class /Script/InterchangeEngine.InterchangeSceneImportAsset
/// Size: 0x0008 (0x000028 - 0x000030)
class UInterchangeSceneImportAsset : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/InterchangeEngine.InterchangeAssetImportData
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UInterchangeAssetImportData : public UAssetImportData
{ 
public:
	FSoftObjectPath                                    SceneImportAsset;                                           // 0x0028   (0x0018)  
	SDK_UNDEFINED(16,13944) /* FString */              __um(NodeUniqueID);                                         // 0x0040   (0x0010)  
	class UInterchangeBaseNodeContainer*               NodeContainer;                                              // 0x0050   (0x0008)  
	TArray<class UObject*>                             Pipelines;                                                  // 0x0058   (0x0010)  
	class UInterchangeBaseNodeContainer*               TransientNodeContainer;                                     // 0x0068   (0x0008)  
	TArray<class UObject*>                             TransientPipelines;                                         // 0x0070   (0x0010)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0080   (0x0028)  MISSED


	/// Functions
	// Function /Script/InterchangeEngine.InterchangeAssetImportData.SetPipelines
	// void SetPipelines(TArray<UObject*>& InPipelines);                                                                     // [0xc48bfe4] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeEngine.InterchangeAssetImportData.SetNodeContainer
	// void SetNodeContainer(class UInterchangeBaseNodeContainer* InNodeContainer);                                          // [0xc48bf64] Final|RequiredAPI|Native|Public|BlueprintCallable|Const 
	// Function /Script/InterchangeEngine.InterchangeAssetImportData.ScriptGetFirstFilename
	// FString ScriptGetFirstFilename();                                                                                     // [0x6673df0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeEngine.InterchangeAssetImportData.ScriptExtractFilenames
	// TArray<FString> ScriptExtractFilenames();                                                                             // [0x634be30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeEngine.InterchangeAssetImportData.ScriptExtractDisplayLabels
	// TArray<FString> ScriptExtractDisplayLabels();                                                                         // [0x634be30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeEngine.InterchangeAssetImportData.GetStoredNode
	// class UInterchangeBaseNode* GetStoredNode(FString InNodeUniqueId);                                                    // [0xc488bf0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeEngine.InterchangeAssetImportData.GetStoredFactoryNode
	// class UInterchangeFactoryBaseNode* GetStoredFactoryNode(FString InNodeUniqueId);                                      // [0xc488524] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeEngine.InterchangeAssetImportData.GetPipelines
	// TArray<UObject*> GetPipelines();                                                                                      // [0xc488454] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeEngine.InterchangeAssetImportData.GetNumberOfPipelines
	// int32_t GetNumberOfPipelines();                                                                                       // [0xc488420] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeEngine.InterchangeAssetImportData.GetNodeContainer
	// class UInterchangeBaseNodeContainer* GetNodeContainer();                                                              // [0xc4883fc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeEngine.InterchangePipelineStackOverride
/// Size: 0x0010 (0x000028 - 0x000038)
class UInterchangePipelineStackOverride : public UObject
{ 
public:
	TArray<FSoftObjectPath>                            OverridePipelines;                                          // 0x0028   (0x0010)  


	/// Functions
	// Function /Script/InterchangeEngine.InterchangePipelineStackOverride.AddPythonPipeline
	// void AddPythonPipeline(class UInterchangePythonPipelineBase* PipelineBase);                                           // [0xc487c4c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeEngine.InterchangePipelineStackOverride.AddPipeline
	// void AddPipeline(class UInterchangePipelineBase* PipelineBase);                                                       // [0xc487c4c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeEngine.InterchangePipelineStackOverride.AddBlueprintPipeline
	// void AddBlueprintPipeline(class UInterchangeBlueprintPipelineBase* PipelineBase);                                     // [0xc487c4c] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/InterchangeEngine.InterchangeManager
/// Size: 0x0218 (0x000028 - 0x000240)
class UInterchangeManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0xB0];                                      // 0x0028   (0x00B0)  MISSED
	SDK_UNDEFINED(80,13945) /* TSet<UClass*> */        __um(RegisteredTranslatorsClass);                           // 0x00D8   (0x0050)  
	SDK_UNDEFINED(80,13946) /* TMap<UClass*, UClass*> */ __um(RegisteredFactoryClasses);                           // 0x0128   (0x0050)  
	SDK_UNDEFINED(80,13947) /* TMap<UClass*, UInterchangeWriterBase*> */ __um(RegisteredWriters);                  // 0x0178   (0x0050)  
	unsigned char                                      UnknownData01_6[0x78];                                      // 0x01C8   (0x0078)  MISSED


	/// Functions
	// Function /Script/InterchangeEngine.InterchangeManager.ImportScene
	// bool ImportScene(FString ContentPath, class UInterchangeSourceData* SourceData, FImportAssetParameters& ImportAssetParameters); // [0xc489a68] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeEngine.InterchangeManager.ImportAsset
	// bool ImportAsset(FString ContentPath, class UInterchangeSourceData* SourceData, FImportAssetParameters& ImportAssetParameters); // [0xc4892bc] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeEngine.InterchangeManager.GetRegisteredFactoryClass
	// class UClass* GetRegisteredFactoryClass(class UClass* ClassToMake);                                                   // [0xc488494] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeEngine.InterchangeManager.GetInterchangeManagerScripted
	// class UInterchangeManager* GetInterchangeManagerScripted();                                                           // [0xc4883d8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/InterchangeEngine.InterchangeManager.ExportScene
	// bool ExportScene(class UObject* World, bool bIsAutomated);                                                            // [0x9b768a8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeEngine.InterchangeManager.ExportAsset
	// bool ExportAsset(class UObject* Asset, bool bIsAutomated);                                                            // [0x9b768a8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeEngine.InterchangeManager.CreateSourceData
	// class UInterchangeSourceData* CreateSourceData(FString InFilename);                                                   // [0xc487d2c] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/InterchangeEngine.InterchangeMeshUtilities
/// Size: 0x0000 (0x000028 - 0x000028)
class UInterchangeMeshUtilities : public UObject
{ 
public:
};

/// Struct /Script/InterchangeEngine.InterchangeFilePickerParameters
/// Size: 0x0030 (0x000000 - 0x000030)
struct FInterchangeFilePickerParameters
{ 
	bool                                               bAllowMultipleFiles;                                        // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	SDK_UNDEFINED(24,13948) /* FText */                __um(Title);                                                // 0x0008   (0x0018)  
	SDK_UNDEFINED(16,13949) /* FString */              __um(DefaultPath);                                          // 0x0020   (0x0010)  
};

/// Struct /Script/InterchangeEngine.InterchangeStackInfo
/// Size: 0x0018 (0x000000 - 0x000018)
struct FInterchangeStackInfo
{ 
	FName                                              StackName;                                                  // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<class UInterchangePipelineBase*>            Pipelines;                                                  // 0x0008   (0x0010)  
};

/// Struct /Script/InterchangeEngine.InterchangeTranslatorPipelines
/// Size: 0x0030 (0x000000 - 0x000030)
struct FInterchangeTranslatorPipelines
{ 
	SDK_UNDEFINED(32,13950) /* TWeakObjectPtr<UClass*> */ __um(Translator);                                        // 0x0000   (0x0020)  
	TArray<FSoftObjectPath>                            Pipelines;                                                  // 0x0020   (0x0010)  
};

/// Struct /Script/InterchangeEngine.InterchangePipelineStack
/// Size: 0x0020 (0x000000 - 0x000020)
struct FInterchangePipelineStack
{ 
	TArray<FSoftObjectPath>                            Pipelines;                                                  // 0x0000   (0x0010)  
	TArray<FInterchangeTranslatorPipelines>            PerTranslatorPipelines;                                     // 0x0010   (0x0010)  
};

/// Struct /Script/InterchangeEngine.PropertyData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPropertyData
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/InterchangeEngine.ImportAssetParameters
/// Size: 0x00B8 (0x000000 - 0x0000B8)
struct FImportAssetParameters
{ 
	class UObject*                                     ReimportAsset;                                              // 0x0000   (0x0008)  
	int32_t                                            ReimportSourceIndex;                                        // 0x0008   (0x0004)  
	bool                                               bIsAutomated;                                               // 0x000C   (0x0001)  
	bool                                               bFollowRedirectors;                                         // 0x000D   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x000E   (0x0002)  MISSED
	TArray<FSoftObjectPath>                            OverridePipelines;                                          // 0x0010   (0x0010)  
	class ULevel*                                      ImportLevel;                                                // 0x0020   (0x0008)  
	SDK_UNDEFINED(16,13951) /* FString */              __um(DestinationName);                                      // 0x0028   (0x0010)  
	bool                                               bReplaceExisting;                                           // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	SDK_UNDEFINED(12,13952) /* FDelegateProperty */    __um(OnAssetDone);                                          // 0x003C   (0x000C)  
	unsigned char                                      UnknownData02_5[0x10];                                      // 0x0048   (0x0010)  MISSED
	SDK_UNDEFINED(12,13953) /* FDelegateProperty */    __um(OnAssetsImportDone);                                   // 0x0058   (0x000C)  
	unsigned char                                      UnknownData03_5[0x14];                                      // 0x0064   (0x0014)  MISSED
	SDK_UNDEFINED(12,13954) /* FDelegateProperty */    __um(OnSceneObjectDone);                                    // 0x0078   (0x000C)  
	unsigned char                                      UnknownData04_5[0x14];                                      // 0x0084   (0x0014)  MISSED
	SDK_UNDEFINED(12,13955) /* FDelegateProperty */    __um(OnSceneImportDone);                                    // 0x0098   (0x000C)  
	unsigned char                                      UnknownData05_6[0x14];                                      // 0x00A4   (0x0014)  MISSED
};

