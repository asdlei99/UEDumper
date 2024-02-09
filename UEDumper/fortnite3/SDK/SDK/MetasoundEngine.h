
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AudioExtensions
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: MetasoundFrontend

/// Enum /Script/MetasoundEngine.EMetaSoundMessageLevel
/// Size: 0x04
enum class EMetaSoundMessageLevel : uint8_t
{
	EMetaSoundMessageLevel__Error                                                    = 0,
	EMetaSoundMessageLevel__Warning                                                  = 1,
	EMetaSoundMessageLevel__Info                                                     = 2,
	EMetaSoundMessageLevel__EMetaSoundMessageLevel_MAX                               = 3
};

/// Enum /Script/MetasoundEngine.EMetaSoundOutputAudioFormat
/// Size: 0x07
enum class EMetaSoundOutputAudioFormat : uint8_t
{
	EMetaSoundOutputAudioFormat__Mono                                                = 0,
	EMetaSoundOutputAudioFormat__Stereo                                              = 1,
	EMetaSoundOutputAudioFormat__Quad                                                = 2,
	EMetaSoundOutputAudioFormat__FiveDotOne                                          = 3,
	EMetaSoundOutputAudioFormat__SevenDotOne                                         = 4,
	EMetaSoundOutputAudioFormat__COUNT                                               = 5,
	EMetaSoundOutputAudioFormat__EMetaSoundOutputAudioFormat_MAX                     = 6
};

/// Enum /Script/MetasoundEngine.EMetaSoundBuilderResult
/// Size: 0x03
enum class EMetaSoundBuilderResult : uint8_t
{
	EMetaSoundBuilderResult__Succeeded                                               = 0,
	EMetaSoundBuilderResult__Failed                                                  = 1,
	EMetaSoundBuilderResult__EMetaSoundBuilderResult_MAX                             = 2
};

/// Class /Script/MetasoundEngine.MetasoundFrontendLiteralBlueprintAccess
/// Size: 0x0000 (0x000028 - 0x000028)
class UMetasoundFrontendLiteralBlueprintAccess : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MetasoundEngine.MetasoundFrontendLiteralBlueprintAccess.CreateStringMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateStringMetaSoundLiteral(FString Value);                                                // [0x79fec04] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundFrontendLiteralBlueprintAccess.CreateStringArrayMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateStringArrayMetaSoundLiteral(TArray<FString>& Value);                                  // [0x79fe394] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundFrontendLiteralBlueprintAccess.CreateObjectMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateObjectMetaSoundLiteral(class UObject* Value);                                         // [0x79fd304] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundFrontendLiteralBlueprintAccess.CreateObjectArrayMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateObjectArrayMetaSoundLiteral(TArray<UObject*>& Value);                                 // [0x79fd20c] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundFrontendLiteralBlueprintAccess.CreateMetaSoundLiteralFromParam
	// FMetasoundFrontendLiteral CreateMetaSoundLiteralFromParam(FAudioParameter& Param);                                    // [0x79fd140] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundFrontendLiteralBlueprintAccess.CreateIntMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateIntMetaSoundLiteral(int32_t Value);                                                   // [0x79fcec4] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundFrontendLiteralBlueprintAccess.CreateIntArrayMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateIntArrayMetaSoundLiteral(TArray<int32_t>& Value);                                     // [0x79fcc60] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundFrontendLiteralBlueprintAccess.CreateFloatMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateFloatMetaSoundLiteral(float Value);                                                   // [0x79fca1c] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundFrontendLiteralBlueprintAccess.CreateFloatArrayMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateFloatArrayMetaSoundLiteral(TArray<float>& Value);                                     // [0x79fc7a8] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundFrontendLiteralBlueprintAccess.CreateBoolMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateBoolMetaSoundLiteral(bool Value);                                                     // [0x79fc4fc] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundFrontendLiteralBlueprintAccess.CreateBoolArrayMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateBoolArrayMetaSoundLiteral(TArray<bool>& Value);                                       // [0x79fc294] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
};

/// Class /Script/MetasoundEngine.MetasoundGeneratorHandle
/// Size: 0x0070 (0x000028 - 0x000098)
class UMetasoundGeneratorHandle : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x98];                                      // 0x0000   (0x0098)  MISSED


	/// Functions
	// Function /Script/MetasoundEngine.MetasoundGeneratorHandle.WatchOutput
	// bool WatchOutput(FName OutputName, FDelegateProperty& OnOutputValueChanged, FName AnalyzerName, FName AnalyzerOutputName); // [0x7a03914] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundGeneratorHandle.UpdateWatchers
	// void UpdateWatchers();                                                                                                // [0x7a03900] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/MetasoundEngine.MetasoundGeneratorHandle.GetCPUCoreUtilization
	// double GetCPUCoreUtilization();                                                                                       // [0x7a00c50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetasoundGeneratorHandle.EnableRuntimeRenderTiming
	// void EnableRuntimeRenderTiming(bool Enable);                                                                          // [0x79ff7bc] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/MetasoundEngine.MetasoundGeneratorHandle.CreateMetaSoundGeneratorHandle
	// class UMetasoundGeneratorHandle* CreateMetaSoundGeneratorHandle(class UAudioComponent* OnComponent);                  // [0x79fcfdc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundGeneratorHandle.ApplyParameterPack
	// bool ApplyParameterPack(class UMetasoundParameterPack* pack);                                                         // [0x79fb1f0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MetasoundEngine.MetaSoundCacheSubsystem
/// Size: 0x0040 (0x000030 - 0x000070)
class UMetaSoundCacheSubsystem : public UAudioEngineSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0030   (0x0040)  MISSED


	/// Functions
	// Function /Script/MetasoundEngine.MetaSoundCacheSubsystem.TouchOrPrecacheMetaSound
	// void TouchOrPrecacheMetaSound(class UMetaSoundSource* InMetaSound, int32_t InNumInstances);                           // [0x7a03594] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundCacheSubsystem.RemoveCachedOperatorsForMetaSound
	// void RemoveCachedOperatorsForMetaSound(class UMetaSoundSource* InMetaSound);                                          // [0x7a02928] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundCacheSubsystem.PrecacheMetaSound
	// void PrecacheMetaSound(class UMetaSoundSource* InMetaSound, int32_t InNumInstances);                                  // [0x3633368] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MetasoundEngine.MetasoundOutputBlueprintAccess
/// Size: 0x0000 (0x000028 - 0x000028)
class UMetasoundOutputBlueprintAccess : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MetasoundEngine.MetasoundOutputBlueprintAccess.IsTime
	// bool IsTime(FMetaSoundOutput& Output);                                                                                // [0x7a0238c] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundOutputBlueprintAccess.IsString
	// bool IsString(FMetaSoundOutput& Output);                                                                              // [0x7a022f0] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundOutputBlueprintAccess.IsInt32
	// bool IsInt32(FMetaSoundOutput& Output);                                                                               // [0x7a02170] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundOutputBlueprintAccess.IsFloat
	// bool IsFloat(FMetaSoundOutput& Output);                                                                               // [0x7a020d4] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundOutputBlueprintAccess.IsBool
	// bool IsBool(FMetaSoundOutput& Output);                                                                                // [0x7a02038] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundOutputBlueprintAccess.GetTimeSeconds
	// float GetTimeSeconds(FMetaSoundOutput& Output, bool& Success);                                                        // [0x7a01e68] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundOutputBlueprintAccess.GetString
	// FString GetString(FMetaSoundOutput& Output, bool& Success);                                                           // [0x7a01730] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundOutputBlueprintAccess.GetInt32
	// int32_t GetInt32(FMetaSoundOutput& Output, bool& Success);                                                            // [0x7a00d94] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundOutputBlueprintAccess.GetFloat
	// float GetFloat(FMetaSoundOutput& Output, bool& Success);                                                              // [0x7a00c8c] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundOutputBlueprintAccess.GetBool
	// bool GetBool(FMetaSoundOutput& Output, bool& Success);                                                                // [0x227b714] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
};

/// Class /Script/MetasoundEngine.MetaSoundOutputSubsystem
/// Size: 0x0010 (0x000040 - 0x000050)
class UMetaSoundOutputSubsystem : public UTickableWorldSubsystem
{ 
public:
	TArray<class UMetasoundGeneratorHandle*>           TrackedGenerators;                                          // 0x0040   (0x0010)  


	/// Functions
	// Function /Script/MetasoundEngine.MetaSoundOutputSubsystem.WatchOutput
	// bool WatchOutput(class UAudioComponent* AudioComponent, FName OutputName, FDelegateProperty& OnOutputValueChanged, FName AnalyzerName, FName AnalyzerOutputName); // [0x22781a8] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/MetasoundEngine.DefaultMetaSoundAssetAutoUpdateSettings
/// Size: 0x0018 (0x000000 - 0x000018)
struct FDefaultMetaSoundAssetAutoUpdateSettings
{ 
	FSoftObjectPath                                    Metasound;                                                  // 0x0000   (0x0018)  
};

/// Struct /Script/MetasoundEngine.MetaSoundQualitySettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FMetaSoundQualitySettings
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	FPerPlatformInt                                    SampleRate;                                                 // 0x0004   (0x0004)  
	FPerPlatformFloat                                  BlockRate;                                                  // 0x0008   (0x0004)  
};

/// Class /Script/MetasoundEngine.MetaSoundSettings
/// Size: 0x0058 (0x000030 - 0x000088)
class UMetaSoundSettings : public UDeveloperSettings
{ 
public:
	bool                                               bAutoUpdateEnabled;                                         // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0031   (0x0007)  MISSED
	TArray<FMetasoundFrontendClassName>                AutoUpdateDenylist;                                         // 0x0038   (0x0010)  
	TArray<FDefaultMetaSoundAssetAutoUpdateSettings>   AutoUpdateAssetDenylist;                                    // 0x0048   (0x0010)  
	bool                                               bAutoUpdateLogWarningOnDroppedConnection;                   // 0x0058   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0059   (0x0007)  MISSED
	TArray<FDirectoryPath>                             DirectoriesToRegister;                                      // 0x0060   (0x0010)  
	TArray<FMetaSoundQualitySettings>                  QualitySettings;                                            // 0x0070   (0x0010)  
	int32_t                                            DenyListCacheChangeID;                                      // 0x0080   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0084   (0x0004)  MISSED
};

/// Class /Script/MetasoundEngine.MetaSoundQuality
/// Size: 0x0000 (0x000028 - 0x000028)
class UMetaSoundQuality : public UObject
{ 
public:


	/// Functions
	// Function /Script/MetasoundEngine.MetaSoundQuality.GetQualityList
	// TArray<FName> GetQualityList();                                                                                       // [0x7a01650] Final|Native|Static|Public 
};

/// Class /Script/MetasoundEngine.MetasoundEditorGraphBase
/// Size: 0x0000 (0x000060 - 0x000060)
class UMetasoundEditorGraphBase : public UEdGraph
{ 
public:
};

/// Class /Script/MetasoundEngine.MetaSoundPatch
/// Size: 0x0308 (0x000028 - 0x000330)
class UMetaSoundPatch : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x68];                                      // 0x0000   (0x0068)  MISSED
	FMetasoundFrontendDocument                         RootMetaSoundDocument;                                      // 0x0068   (0x01C0)  
	SDK_UNDEFINED(80,2599) /* TSet<FString> */         __um(ReferencedAssetClassKeys);                             // 0x0228   (0x0050)  
	SDK_UNDEFINED(80,2600) /* TSet<UObject*> */        __um(ReferencedAssetClassObjects);                          // 0x0278   (0x0050)  
	SDK_UNDEFINED(80,2601) /* TSet<FSoftObjectPath> */ __um(ReferenceAssetClassCache);                             // 0x02C8   (0x0050)  
	FGuid                                              AssetClassID;                                               // 0x0318   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0328   (0x0008)  MISSED
};

/// Struct /Script/MetasoundEngine.MetaSoundAsyncAssetDependencies
/// Size: 0x0030 (0x000000 - 0x000030)
struct FMetaSoundAsyncAssetDependencies
{ 
	class UObject*                                     Metasound;                                                  // 0x0008   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0010   (0x0020)  MISSED
};

/// Class /Script/MetasoundEngine.MetaSoundAssetSubsystem
/// Size: 0x01B0 (0x000030 - 0x0001E0)
class UMetaSoundAssetSubsystem : public UEngineSubsystem
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0030   (0x0008)  MISSED
	TArray<FMetaSoundAsyncAssetDependencies>           LoadingDependencies;                                        // 0x0038   (0x0010)  
	unsigned char                                      UnknownData01_6[0x198];                                     // 0x0048   (0x0198)  MISSED


	/// Functions
	// Function /Script/MetasoundEngine.MetaSoundAssetSubsystem.UnregisterAssetClassesInDirectories
	// void UnregisterAssetClassesInDirectories(TArray<FMetaSoundAssetDirectory>& Directories);                              // [0x7a036d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundAssetSubsystem.RegisterAssetClassesInDirectories
	// void RegisterAssetClassesInDirectories(TArray<FMetaSoundAssetDirectory>& Directories);                                // [0x7a026cc] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/MetasoundEngine.MetaSoundBuilderBase
/// Size: 0x0038 (0x000028 - 0x000060)
class UMetaSoundBuilderBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FMetaSoundFrontendDocumentBuilder                  Builder;                                                    // 0x0028   (0x0038)  


	/// Functions
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.SetNodeInputDefault
	// void SetNodeInputDefault(FMetaSoundBuilderNodeInputHandle& NodeInputHandle, FMetasoundFrontendLiteral& Literal, EMetaSoundBuilderResult& OutResult); // [0x7a03288] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.SetGraphInputDefault
	// void SetGraphInputDefault(FName InputName, FMetasoundFrontendLiteral& Literal, EMetaSoundBuilderResult& OutResult);   // [0x7a030fc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.RemoveNodeInputDefault
	// void RemoveNodeInputDefault(FMetaSoundBuilderNodeInputHandle& InputHandle, EMetaSoundBuilderResult& OutResult);       // [0x7a02e2c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.RemoveNode
	// void RemoveNode(FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult);                                // [0x7a02d40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.RemoveInterface
	// void RemoveInterface(FName InterfaceName, EMetaSoundBuilderResult& OutResult);                                        // [0x7a02c38] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.RemoveGraphOutput
	// void RemoveGraphOutput(FName Name, EMetaSoundBuilderResult& OutResult);                                               // [0x7a02b2c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.RemoveGraphInput
	// void RemoveGraphInput(FName Name, EMetaSoundBuilderResult& OutResult);                                                // [0x7a02a20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.NodesAreConnected
	// bool NodesAreConnected(FMetaSoundBuilderNodeOutputHandle& OutputHandle, FMetaSoundBuilderNodeInputHandle& InputHandle); // [0x7a02598] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.NodeOutputIsConnected
	// bool NodeOutputIsConnected(FMetaSoundBuilderNodeOutputHandle& OutputHandle);                                          // [0x7a024d0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.NodeInputIsConnected
	// bool NodeInputIsConnected(FMetaSoundBuilderNodeInputHandle& InputHandle);                                             // [0x7a02428] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.IsPreset
	// bool IsPreset();                                                                                                      // [0x7a022cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.InterfaceIsDeclared
	// bool InterfaceIsDeclared(FName InterfaceName);                                                                        // [0x7a01f68] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.GetReferencedPresetAsset
	// class UObject* GetReferencedPresetAsset();                                                                            // [0x7a0170c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.GetNodeOutputIsConstructorPin
	// bool GetNodeOutputIsConstructorPin(FMetaSoundBuilderNodeOutputHandle& OutputHandle);                                  // [0x7a015a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.GetNodeOutputData
	// void GetNodeOutputData(FMetaSoundBuilderNodeOutputHandle& OutputHandle, FName& Name, FName& DataType, EMetaSoundBuilderResult& OutResult); // [0x7a01408] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.GetNodeInputIsConstructorPin
	// bool GetNodeInputIsConstructorPin(FMetaSoundBuilderNodeInputHandle& InputHandle);                                     // [0x7a01358] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.GetNodeInputDefault
	// FMetasoundFrontendLiteral GetNodeInputDefault(FMetaSoundBuilderNodeInputHandle& InputHandle, EMetaSoundBuilderResult& OutResult); // [0x7a011e8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.GetNodeInputData
	// void GetNodeInputData(FMetaSoundBuilderNodeInputHandle& InputHandle, FName& Name, FName& DataType, EMetaSoundBuilderResult& OutResult); // [0x7a01050] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.GetNodeInputClassDefault
	// FMetasoundFrontendLiteral GetNodeInputClassDefault(FMetaSoundBuilderNodeInputHandle& InputHandle, EMetaSoundBuilderResult& OutResult); // [0x7a00ee0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindNodeOutputsByDataType
	// TArray<FMetaSoundBuilderNodeOutputHandle> FindNodeOutputsByDataType(FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult, FName DataType); // [0x7a00874] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindNodeOutputs
	// TArray<FMetaSoundBuilderNodeOutputHandle> FindNodeOutputs(FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult); // [0x7a00768] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindNodeOutputParent
	// FMetaSoundNodeHandle FindNodeOutputParent(FMetaSoundBuilderNodeOutputHandle& OutputHandle, EMetaSoundBuilderResult& OutResult); // [0x7a00170] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindNodeOutputByName
	// FMetaSoundBuilderNodeOutputHandle FindNodeOutputByName(FMetaSoundNodeHandle& NodeHandle, FName OutputName, EMetaSoundBuilderResult& OutResult); // [0x7a00594] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindNodeInputsByDataType
	// TArray<FMetaSoundBuilderNodeInputHandle> FindNodeInputsByDataType(FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult, FName DataType); // [0x7a00398] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindNodeInputs
	// TArray<FMetaSoundBuilderNodeInputHandle> FindNodeInputs(FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult); // [0x7a0028c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindNodeInputParent
	// FMetaSoundNodeHandle FindNodeInputParent(FMetaSoundBuilderNodeInputHandle& InputHandle, EMetaSoundBuilderResult& OutResult); // [0x7a00170] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindNodeInputByName
	// FMetaSoundBuilderNodeInputHandle FindNodeInputByName(FMetaSoundNodeHandle& NodeHandle, FName InputName, EMetaSoundBuilderResult& OutResult); // [0x79fff9c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindNodeClassVersion
	// FMetasoundFrontendVersion FindNodeClassVersion(FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult); // [0x79ffe4c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindInterfaceOutputNodes
	// TArray<FMetaSoundNodeHandle> FindInterfaceOutputNodes(FName InterfaceName, EMetaSoundBuilderResult& OutResult);       // [0x79ffd1c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindInterfaceInputNodes
	// TArray<FMetaSoundNodeHandle> FindInterfaceInputNodes(FName InterfaceName, EMetaSoundBuilderResult& OutResult);        // [0x79ffbec] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindGraphOutputNode
	// FMetaSoundNodeHandle FindGraphOutputNode(FName OutputName, EMetaSoundBuilderResult& OutResult);                       // [0x79ffac8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindGraphInputNode
	// FMetaSoundNodeHandle FindGraphInputNode(FName InputName, EMetaSoundBuilderResult& OutResult);                         // [0x79ff9a4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.DisconnectNodesByInterfaceBindings
	// void DisconnectNodesByInterfaceBindings(FMetaSoundNodeHandle& FromNodeHandle, FMetaSoundNodeHandle& ToNodeHandle, EMetaSoundBuilderResult& OutResult); // [0x79ff678] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.DisconnectNodes
	// void DisconnectNodes(FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, FMetaSoundBuilderNodeInputHandle& NodeInputHandle, EMetaSoundBuilderResult& OutResult); // [0x79ff524] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.DisconnectNodeOutput
	// void DisconnectNodeOutput(FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, EMetaSoundBuilderResult& OutResult);   // [0x79ff424] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.DisconnectNodeInput
	// void DisconnectNodeInput(FMetaSoundBuilderNodeInputHandle& NodeInputHandle, EMetaSoundBuilderResult& OutResult);      // [0x79ff338] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.ConvertToPreset
	// void ConvertToPreset(TScriptInterface<Class>& ReferencedNodeClass, EMetaSoundBuilderResult& OutResult);               // [0x79fc050] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.ConvertFromPreset
	// void ConvertFromPreset(EMetaSoundBuilderResult& OutResult);                                                           // [0x79fbfb8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.ContainsNodeOutput
	// bool ContainsNodeOutput(FMetaSoundBuilderNodeOutputHandle& Output);                                                   // [0x79fbf04] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.ContainsNodeInput
	// bool ContainsNodeInput(FMetaSoundBuilderNodeInputHandle& Input);                                                      // [0x79fbe50] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.ContainsNode
	// bool ContainsNode(FMetaSoundNodeHandle& Node);                                                                        // [0x79fbdb0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.ConnectNodesByInterfaceBindings
	// void ConnectNodesByInterfaceBindings(FMetaSoundNodeHandle& FromNodeHandle, FMetaSoundNodeHandle& ToNodeHandle, EMetaSoundBuilderResult& OutResult); // [0x79fbc6c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.ConnectNodes
	// void ConnectNodes(FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, FMetaSoundBuilderNodeInputHandle& NodeInputHandle, EMetaSoundBuilderResult& OutResult); // [0x79fbb18] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.ConnectNodeOutputToGraphOutput
	// void ConnectNodeOutputToGraphOutput(FName GraphOutputName, FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, EMetaSoundBuilderResult& OutResult); // [0x79fb8b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.ConnectNodeOutputsToMatchingGraphInterfaceOutputs
	// TArray<FMetaSoundBuilderNodeInputHandle> ConnectNodeOutputsToMatchingGraphInterfaceOutputs(FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult); // [0x79fba0c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.ConnectNodeInputToGraphInput
	// void ConnectNodeInputToGraphInput(FName GraphInputName, FMetaSoundBuilderNodeInputHandle& NodeInputHandle, EMetaSoundBuilderResult& OutResult); // [0x79fb648] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.ConnectNodeInputsToMatchingGraphInterfaceInputs
	// TArray<FMetaSoundBuilderNodeOutputHandle> ConnectNodeInputsToMatchingGraphInterfaceInputs(FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult); // [0x79fb7a4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.AddNodeByClassName
	// FMetaSoundNodeHandle AddNodeByClassName(FMetasoundFrontendClassName& ClassName, EMetaSoundBuilderResult& OutResult, int32_t MajorVersion); // [0x79fb000] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.AddNode
	// FMetaSoundNodeHandle AddNode(TScriptInterface<Class>& NodeClass, EMetaSoundBuilderResult& OutResult);                 // [0x79faf08] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.AddInterface
	// void AddInterface(FName InterfaceName, EMetaSoundBuilderResult& OutResult);                                           // [0x79fadfc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.AddGraphOutputNode
	// FMetaSoundBuilderNodeInputHandle AddGraphOutputNode(FName Name, FName DataType, FMetasoundFrontendLiteral DefaultValue, EMetaSoundBuilderResult& OutResult, bool bIsConstructorOutput); // [0x79faa70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.AddGraphInputNode
	// FMetaSoundBuilderNodeOutputHandle AddGraphInputNode(FName Name, FName DataType, FMetasoundFrontendLiteral DefaultValue, EMetaSoundBuilderResult& OutResult, bool bIsConstructorInput); // [0x79fa6e4] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/MetasoundEngine.MetaSoundPatchBuilder
/// Size: 0x0000 (0x000060 - 0x000060)
class UMetaSoundPatchBuilder : public UMetaSoundBuilderBase
{ 
public:


	/// Functions
	// Function /Script/MetasoundEngine.MetaSoundPatchBuilder.Build
	// TScriptInterface<Class> Build(class UObject* Parent, FMetaSoundBuilderOptions& Options);                              // [0x79fb508] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MetasoundEngine.MetaSoundSourceBuilder
/// Size: 0x0018 (0x000060 - 0x000078)
class UMetaSoundSourceBuilder : public UMetaSoundBuilderBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0060   (0x0018)  MISSED


	/// Functions
	// Function /Script/MetasoundEngine.MetaSoundSourceBuilder.SetSampleRateOverride
	// void SetSampleRateOverride(int32_t SampleRate);                                                                       // [0x7a034d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundSourceBuilder.SetQuality
	// void SetQuality(FName Quality);                                                                                       // [0x7a03414] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundSourceBuilder.SetFormat
	// void SetFormat(EMetaSoundOutputAudioFormat OutputFormat, EMetaSoundBuilderResult& OutResult);                         // [0x7a02ff4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundSourceBuilder.SetBlockRateOverride
	// void SetBlockRateOverride(float BlockRate);                                                                           // [0x7a02f2c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundSourceBuilder.GetLiveUpdatesEnabled
	// bool GetLiveUpdatesEnabled();                                                                                         // [0x7a00e98] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundSourceBuilder.Build
	// TScriptInterface<Class> Build(class UObject* Parent, FMetaSoundBuilderOptions& Options);                              // [0x79fb508] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundSourceBuilder.Audition
	// void Audition(class UObject* Parent, class UAudioComponent* AudioComponent, FDelegateProperty OnCreateGenerator, bool bLiveUpdatesEnabled); // [0x79fb2c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MetasoundEngine.MetaSoundBuilderSubsystem
/// Size: 0x00A8 (0x000030 - 0x0000D8)
class UMetaSoundBuilderSubsystem : public UEngineSubsystem
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0030   (0x0008)  MISSED
	SDK_UNDEFINED(80,2602) /* TMap<FName, UMetaSoundBuilderBase*> */ __um(NamedBuilders);                          // 0x0038   (0x0050)  
	SDK_UNDEFINED(80,2603) /* TMap<FName, TWeakObjectPtr<UMetaSoundBuilderBase*>> */ __um(AssetBuilders);          // 0x0088   (0x0050)  


	/// Functions
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.UnregisterSourceBuilder
	// bool UnregisterSourceBuilder(FName BuilderName);                                                                      // [0x7a03834] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.UnregisterPatchBuilder
	// bool UnregisterPatchBuilder(FName BuilderName);                                                                       // [0x7a03768] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.UnregisterBuilder
	// bool UnregisterBuilder(FName BuilderName);                                                                            // [0x7a03768] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.RegisterSourceBuilder
	// void RegisterSourceBuilder(FName BuilderName, class UMetaSoundSourceBuilder* Builder);                                // [0x7a02764] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.RegisterPatchBuilder
	// void RegisterPatchBuilder(FName BuilderName, class UMetaSoundPatchBuilder* Builder);                                  // [0x7a02764] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.RegisterBuilder
	// void RegisterBuilder(FName BuilderName, class UMetaSoundBuilderBase* Builder);                                        // [0x7a02764] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.IsInterfaceRegistered
	// bool IsInterfaceRegistered(FName InInterfaceName);                                                                    // [0x7a0220c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.FindSourceBuilder
	// class UMetaSoundSourceBuilder* FindSourceBuilder(FName BuilderName);                                                  // [0x7a00b60] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.FindPatchBuilder
	// class UMetaSoundPatchBuilder* FindPatchBuilder(FName BuilderName);                                                    // [0x7a00a70] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.FindBuilder
	// class UMetaSoundBuilderBase* FindBuilder(FName BuilderName);                                                          // [0x79ff8d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateStringMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateStringMetaSoundLiteral(FString Value, FName& DataType);                               // [0x79fe484] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateStringArrayMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateStringArrayMetaSoundLiteral(TArray<FString>& Value, FName& DataType);                 // [0x79fe240] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateSourcePresetBuilder
	// class UMetaSoundSourceBuilder* CreateSourcePresetBuilder(FName BuilderName, TScriptInterface<Class>& ReferencedSourceClass, EMetaSoundBuilderResult& OutResult); // [0x79fe0c4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateSourceBuilder
	// class UMetaSoundSourceBuilder* CreateSourceBuilder(FName BuilderName, FMetaSoundBuilderNodeOutputHandle& OnPlayNodeOutput, FMetaSoundBuilderNodeInputHandle& OnFinishedNodeInput, TArray<FMetaSoundBuilderNodeInputHandle>& AudioOutNodeInputs, EMetaSoundBuilderResult& OutResult, EMetaSoundOutputAudioFormat OutputFormat, bool bIsOneShot); // [0x79fd6a4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreatePatchPresetBuilder
	// class UMetaSoundPatchBuilder* CreatePatchPresetBuilder(FName BuilderName, TScriptInterface<Class>& ReferencedPatchClass, EMetaSoundBuilderResult& OutResult); // [0x79fd534] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreatePatchBuilder
	// class UMetaSoundPatchBuilder* CreatePatchBuilder(FName BuilderName, EMetaSoundBuilderResult& OutResult);              // [0x79fd41c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateObjectMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateObjectMetaSoundLiteral(class UObject* Value);                                         // [0x79fd304] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateObjectArrayMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateObjectArrayMetaSoundLiteral(TArray<UObject*>& Value);                                 // [0x79fd20c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateMetaSoundLiteralFromParam
	// FMetasoundFrontendLiteral CreateMetaSoundLiteralFromParam(FAudioParameter& Param);                                    // [0x79fd140] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateIntMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateIntMetaSoundLiteral(int32_t Value, FName& DataType);                                  // [0x79fcd58] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateIntArrayMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateIntArrayMetaSoundLiteral(TArray<int32_t>& Value, FName& DataType);                    // [0x79fcb08] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateFloatMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateFloatMetaSoundLiteral(float Value, FName& DataType);                                  // [0x79fc8dc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateFloatArrayMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateFloatArrayMetaSoundLiteral(TArray<float>& Value, FName& DataType);                    // [0x79fc614] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateBoolMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateBoolMetaSoundLiteral(bool Value, FName& DataType);                                    // [0x79fc38c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateBoolArrayMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateBoolArrayMetaSoundLiteral(TArray<bool>& Value, FName& DataType);                      // [0x79fc13c] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/MetasoundEngine.MetaSoundSource
/// Size: 0x0410 (0x000470 - 0x000880)
class UMetaSoundSource : public USoundWaveProcedural
{ 
public:
	unsigned char                                      UnknownData00_3[0x40];                                      // 0x0470   (0x0040)  MISSED
	FMetasoundFrontendDocument                         RootMetaSoundDocument;                                      // 0x04B0   (0x01C0)  
	SDK_UNDEFINED(80,2604) /* TSet<FString> */         __um(ReferencedAssetClassKeys);                             // 0x0670   (0x0050)  
	SDK_UNDEFINED(80,2605) /* TSet<UObject*> */        __um(ReferencedAssetClassObjects);                          // 0x06C0   (0x0050)  
	SDK_UNDEFINED(80,2606) /* TSet<FSoftObjectPath> */ __um(ReferenceAssetClassCache);                             // 0x0710   (0x0050)  
	EMetaSoundOutputAudioFormat                        OutputFormat;                                               // 0x0760   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0761   (0x0003)  MISSED
	FName                                              QualitySetting;                                             // 0x0764   (0x0004)  
	FPerPlatformFloat                                  BlockRateOverride;                                          // 0x0768   (0x0004)  
	FPerPlatformInt                                    SampleRateOverride;                                         // 0x076C   (0x0004)  
	FGuid                                              AssetClassID;                                               // 0x0770   (0x0010)  
	unsigned char                                      UnknownData02_6[0x100];                                     // 0x0780   (0x0100)  MISSED
};

/// Struct /Script/MetasoundEngine.MetaSoundOutput
/// Size: 0x000C (0x000004 - 0x000010)
struct FMetaSoundOutput : FSoundGeneratorOutput
{ 
	unsigned char                                      UnknownData00_1[0xC];                                       // 0x0004   (0x000C)  MISSED
};

/// Struct /Script/MetasoundEngine.MetaSoundAssetDirectory
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMetaSoundAssetDirectory
{ 
	FDirectoryPath                                     Directory;                                                  // 0x0000   (0x0010)  
};

/// Struct /Script/MetasoundEngine.MetaSoundBuilderNodeInputHandle
/// Size: 0x0000 (0x000020 - 0x000020)
struct FMetaSoundBuilderNodeInputHandle : FMetasoundFrontendVertexHandle
{ 
};

/// Struct /Script/MetasoundEngine.MetaSoundBuilderNodeOutputHandle
/// Size: 0x0000 (0x000020 - 0x000020)
struct FMetaSoundBuilderNodeOutputHandle : FMetasoundFrontendVertexHandle
{ 
};

/// Struct /Script/MetasoundEngine.MetaSoundNodeHandle
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMetaSoundNodeHandle
{ 
	FGuid                                              NodeId;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/MetasoundEngine.MetaSoundBuilderOptions
/// Size: 0x0018 (0x000000 - 0x000018)
struct FMetaSoundBuilderOptions
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	bool                                               bForceUniqueClassName;                                      // 0x0004   (0x0001)  
	bool                                               bAddToRegistry;                                             // 0x0005   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0006   (0x0002)  MISSED
	SDK_UNDEFINED(16,2607) /* TScriptInterface<Class> */ __um(ExistingMetaSound);                                  // 0x0008   (0x0010)  
};

