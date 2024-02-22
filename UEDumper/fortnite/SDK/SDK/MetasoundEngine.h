
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
	// FMetasoundFrontendLiteral CreateStringMetaSoundLiteral(FString Value);                                                // [0x7a542d0] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundFrontendLiteralBlueprintAccess.CreateStringArrayMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateStringArrayMetaSoundLiteral(TArray<FString>& Value);                                  // [0x7a53a9c] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundFrontendLiteralBlueprintAccess.CreateObjectMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateObjectMetaSoundLiteral(class UObject* Value);                                         // [0x7a52b30] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundFrontendLiteralBlueprintAccess.CreateObjectArrayMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateObjectArrayMetaSoundLiteral(TArray<UObject*>& Value);                                 // [0x7a52a38] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundFrontendLiteralBlueprintAccess.CreateMetaSoundLiteralFromParam
	// FMetasoundFrontendLiteral CreateMetaSoundLiteralFromParam(FAudioParameter& Param);                                    // [0x7a5296c] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundFrontendLiteralBlueprintAccess.CreateIntMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateIntMetaSoundLiteral(int32_t Value);                                                   // [0x7a52774] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundFrontendLiteralBlueprintAccess.CreateIntArrayMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateIntArrayMetaSoundLiteral(TArray<int32_t>& Value);                                     // [0x7a52550] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundFrontendLiteralBlueprintAccess.CreateFloatMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateFloatMetaSoundLiteral(float Value);                                                   // [0x7a52350] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundFrontendLiteralBlueprintAccess.CreateFloatArrayMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateFloatArrayMetaSoundLiteral(TArray<float>& Value);                                     // [0x7a52118] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundFrontendLiteralBlueprintAccess.CreateBoolMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateBoolMetaSoundLiteral(bool Value);                                                     // [0x7a51eac] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundFrontendLiteralBlueprintAccess.CreateBoolArrayMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateBoolArrayMetaSoundLiteral(TArray<bool>& Value);                                       // [0x7a51c84] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
};

/// Class /Script/MetasoundEngine.MetasoundGeneratorHandle
/// Size: 0x0070 (0x000028 - 0x000098)
class UMetasoundGeneratorHandle : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x98];                                      // 0x0000   (0x0098)  MISSED


	/// Functions
	// Function /Script/MetasoundEngine.MetasoundGeneratorHandle.WatchOutput
	// bool WatchOutput(FName OutputName, FDelegateProperty& OnOutputValueChanged, FName AnalyzerName, FName AnalyzerOutputName); // [0x7a58ad0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundGeneratorHandle.UpdateWatchers
	// void UpdateWatchers();                                                                                                // [0x7a58abc] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/MetasoundEngine.MetasoundGeneratorHandle.GetCPUCoreUtilization
	// double GetCPUCoreUtilization();                                                                                       // [0x7a56230] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetasoundGeneratorHandle.EnableRuntimeRenderTiming
	// void EnableRuntimeRenderTiming(bool Enable);                                                                          // [0x7a54e44] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/MetasoundEngine.MetasoundGeneratorHandle.CreateMetaSoundGeneratorHandle
	// class UMetasoundGeneratorHandle* CreateMetaSoundGeneratorHandle(class UAudioComponent* OnComponent);                  // [0x7a52848] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundGeneratorHandle.ApplyParameterPack
	// bool ApplyParameterPack(class UMetasoundParameterPack* pack);                                                         // [0x7a50dc0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MetasoundEngine.MetaSoundCacheSubsystem
/// Size: 0x0040 (0x000030 - 0x000070)
class UMetaSoundCacheSubsystem : public UAudioEngineSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0030   (0x0040)  MISSED


	/// Functions
	// Function /Script/MetasoundEngine.MetaSoundCacheSubsystem.TouchOrPrecacheMetaSound
	// void TouchOrPrecacheMetaSound(class UMetaSoundSource* InMetaSound, int32_t InNumInstances);                           // [0x7a58848] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundCacheSubsystem.RemoveCachedOperatorsForMetaSound
	// void RemoveCachedOperatorsForMetaSound(class UMetaSoundSource* InMetaSound);                                          // [0x7a57e08] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundCacheSubsystem.PrecacheMetaSound
	// void PrecacheMetaSound(class UMetaSoundSource* InMetaSound, int32_t InNumInstances);                                  // [0x2ec10cc] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MetasoundEngine.MetasoundOutputBlueprintAccess
/// Size: 0x0000 (0x000028 - 0x000028)
class UMetasoundOutputBlueprintAccess : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MetasoundEngine.MetasoundOutputBlueprintAccess.IsTime
	// bool IsTime(FMetaSoundOutput& Output);                                                                                // [0x7a578e4] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundOutputBlueprintAccess.IsString
	// bool IsString(FMetaSoundOutput& Output);                                                                              // [0x7a57848] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundOutputBlueprintAccess.IsInt32
	// bool IsInt32(FMetaSoundOutput& Output);                                                                               // [0x7a5770c] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundOutputBlueprintAccess.IsFloat
	// bool IsFloat(FMetaSoundOutput& Output);                                                                               // [0x7a57670] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundOutputBlueprintAccess.IsBool
	// bool IsBool(FMetaSoundOutput& Output);                                                                                // [0x7a575d4] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundOutputBlueprintAccess.GetTimeSeconds
	// float GetTimeSeconds(FMetaSoundOutput& Output, bool& Success);                                                        // [0x7a57448] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundOutputBlueprintAccess.GetString
	// FString GetString(FMetaSoundOutput& Output, bool& Success);                                                           // [0x7a56d10] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundOutputBlueprintAccess.GetInt32
	// int32_t GetInt32(FMetaSoundOutput& Output, bool& Success);                                                            // [0x7a56374] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundOutputBlueprintAccess.GetFloat
	// float GetFloat(FMetaSoundOutput& Output, bool& Success);                                                              // [0x7a5626c] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundOutputBlueprintAccess.GetBool
	// bool GetBool(FMetaSoundOutput& Output, bool& Success);                                                                // [0x14c9538] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
};

/// Class /Script/MetasoundEngine.MetaSoundOutputSubsystem
/// Size: 0x0010 (0x000040 - 0x000050)
class UMetaSoundOutputSubsystem : public UTickableWorldSubsystem
{ 
public:
	TArray<class UMetasoundGeneratorHandle*>           TrackedGenerators;                                          // 0x0040   (0x0010)  


	/// Functions
	// Function /Script/MetasoundEngine.MetaSoundOutputSubsystem.WatchOutput
	// bool WatchOutput(class UAudioComponent* AudioComponent, FName OutputName, FDelegateProperty& OnOutputValueChanged, FName AnalyzerName, FName AnalyzerOutputName); // [0x1b4fbc4] Final|Native|Public|HasOutParms|BlueprintCallable 
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
	// TArray<FName> GetQualityList();                                                                                       // [0x7a56c30] Final|Native|Static|Public 
};

/// Class /Script/MetasoundEngine.MetasoundEditorGraphBase
/// Size: 0x0000 (0x000060 - 0x000060)
class UMetasoundEditorGraphBase : public UEdGraph
{ 
public:
};

/// Class /Script/MetasoundEngine.MetaSoundPatch
/// Size: 0x02F8 (0x000028 - 0x000320)
class UMetaSoundPatch : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x58];                                      // 0x0000   (0x0058)  MISSED
	FMetasoundFrontendDocument                         RootMetaSoundDocument;                                      // 0x0058   (0x01C0)  
	SDK_UNDEFINED(80,2608) /* TSet<FString> */         __um(ReferencedAssetClassKeys);                             // 0x0218   (0x0050)  
	SDK_UNDEFINED(80,2609) /* TSet<UObject*> */        __um(ReferencedAssetClassObjects);                          // 0x0268   (0x0050)  
	SDK_UNDEFINED(80,2610) /* TSet<FSoftObjectPath> */ __um(ReferenceAssetClassCache);                             // 0x02B8   (0x0050)  
	FGuid                                              AssetClassID;                                               // 0x0308   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0318   (0x0008)  MISSED
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
	// void UnregisterAssetClassesInDirectories(TArray<FMetaSoundAssetDirectory>& Directories);                              // [0x7a5890c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundAssetSubsystem.RegisterAssetClassesInDirectories
	// void RegisterAssetClassesInDirectories(TArray<FMetaSoundAssetDirectory>& Directories);                                // [0x7a57c24] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/MetasoundEngine.MetaSoundBuilderBase
/// Size: 0x0040 (0x000028 - 0x000068)
class UMetaSoundBuilderBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FMetaSoundFrontendDocumentBuilder                  Builder;                                                    // 0x0028   (0x0038)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0060   (0x0008)  MISSED


	/// Functions
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.SetNodeInputDefault
	// void SetNodeInputDefault(FMetaSoundBuilderNodeInputHandle& NodeInputHandle, FMetasoundFrontendLiteral& Literal, EMetaSoundBuilderResult& OutResult); // [0x7a585bc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.SetGraphInputDefault
	// void SetGraphInputDefault(FName InputName, FMetasoundFrontendLiteral& Literal, EMetaSoundBuilderResult& OutResult);   // [0x7a58464] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.RemoveNodeInputDefault
	// void RemoveNodeInputDefault(FMetaSoundBuilderNodeInputHandle& InputHandle, EMetaSoundBuilderResult& OutResult);       // [0x7a58210] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.RemoveNode
	// void RemoveNode(FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult);                                // [0x7a58124] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.RemoveInterface
	// void RemoveInterface(FName InterfaceName, EMetaSoundBuilderResult& OutResult);                                        // [0x7a58054] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.RemoveGraphOutput
	// void RemoveGraphOutput(FName Name, EMetaSoundBuilderResult& OutResult);                                               // [0x7a57f88] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.RemoveGraphInput
	// void RemoveGraphInput(FName Name, EMetaSoundBuilderResult& OutResult);                                                // [0x7a57ebc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.NodesAreConnected
	// bool NodesAreConnected(FMetaSoundBuilderNodeOutputHandle& OutputHandle, FMetaSoundBuilderNodeInputHandle& InputHandle); // [0x7a57af0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.NodeOutputIsConnected
	// bool NodeOutputIsConnected(FMetaSoundBuilderNodeOutputHandle& OutputHandle);                                          // [0x7a57a28] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.NodeInputIsConnected
	// bool NodeInputIsConnected(FMetaSoundBuilderNodeInputHandle& InputHandle);                                             // [0x7a57980] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.IsPreset
	// bool IsPreset();                                                                                                      // [0x7a57824] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.InterfaceIsDeclared
	// bool InterfaceIsDeclared(FName InterfaceName);                                                                        // [0x7a57548] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.GetReferencedPresetAsset
	// class UObject* GetReferencedPresetAsset();                                                                            // [0x7a56cec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.GetNodeOutputIsConstructorPin
	// bool GetNodeOutputIsConstructorPin(FMetaSoundBuilderNodeOutputHandle& OutputHandle);                                  // [0x7a56b80] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.GetNodeOutputData
	// void GetNodeOutputData(FMetaSoundBuilderNodeOutputHandle& OutputHandle, FName& Name, FName& DataType, EMetaSoundBuilderResult& OutResult); // [0x7a569e8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.GetNodeInputIsConstructorPin
	// bool GetNodeInputIsConstructorPin(FMetaSoundBuilderNodeInputHandle& InputHandle);                                     // [0x7a56938] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.GetNodeInputDefault
	// FMetasoundFrontendLiteral GetNodeInputDefault(FMetaSoundBuilderNodeInputHandle& InputHandle, EMetaSoundBuilderResult& OutResult); // [0x7a567c8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.GetNodeInputData
	// void GetNodeInputData(FMetaSoundBuilderNodeInputHandle& InputHandle, FName& Name, FName& DataType, EMetaSoundBuilderResult& OutResult); // [0x7a56630] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.GetNodeInputClassDefault
	// FMetasoundFrontendLiteral GetNodeInputClassDefault(FMetaSoundBuilderNodeInputHandle& InputHandle, EMetaSoundBuilderResult& OutResult); // [0x7a564c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindNodeOutputsByDataType
	// TArray<FMetaSoundBuilderNodeOutputHandle> FindNodeOutputsByDataType(FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult, FName DataType); // [0x7a55ed4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindNodeOutputs
	// TArray<FMetaSoundBuilderNodeOutputHandle> FindNodeOutputs(FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult); // [0x7a55dc8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindNodeOutputParent
	// FMetaSoundNodeHandle FindNodeOutputParent(FMetaSoundBuilderNodeOutputHandle& OutputHandle, EMetaSoundBuilderResult& OutResult); // [0x7a557d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindNodeOutputByName
	// FMetaSoundBuilderNodeOutputHandle FindNodeOutputByName(FMetaSoundNodeHandle& NodeHandle, FName OutputName, EMetaSoundBuilderResult& OutResult); // [0x7a55bf4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindNodeInputsByDataType
	// TArray<FMetaSoundBuilderNodeInputHandle> FindNodeInputsByDataType(FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult, FName DataType); // [0x7a559f8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindNodeInputs
	// TArray<FMetaSoundBuilderNodeInputHandle> FindNodeInputs(FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult); // [0x7a558ec] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindNodeInputParent
	// FMetaSoundNodeHandle FindNodeInputParent(FMetaSoundBuilderNodeInputHandle& InputHandle, EMetaSoundBuilderResult& OutResult); // [0x7a557d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindNodeInputByName
	// FMetaSoundBuilderNodeInputHandle FindNodeInputByName(FMetaSoundNodeHandle& NodeHandle, FName InputName, EMetaSoundBuilderResult& OutResult); // [0x7a555fc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindNodeClassVersion
	// FMetasoundFrontendVersion FindNodeClassVersion(FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult); // [0x7a554ac] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindInterfaceOutputNodes
	// TArray<FMetaSoundNodeHandle> FindInterfaceOutputNodes(FName InterfaceName, EMetaSoundBuilderResult& OutResult);       // [0x7a553c4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindInterfaceInputNodes
	// TArray<FMetaSoundNodeHandle> FindInterfaceInputNodes(FName InterfaceName, EMetaSoundBuilderResult& OutResult);        // [0x7a552dc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindGraphOutputNode
	// FMetaSoundNodeHandle FindGraphOutputNode(FName OutputName, EMetaSoundBuilderResult& OutResult);                       // [0x7a55204] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindGraphInputNode
	// FMetaSoundNodeHandle FindGraphInputNode(FName InputName, EMetaSoundBuilderResult& OutResult);                         // [0x7a5512c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.DisconnectNodesByInterfaceBindings
	// void DisconnectNodesByInterfaceBindings(FMetaSoundNodeHandle& FromNodeHandle, FMetaSoundNodeHandle& ToNodeHandle, EMetaSoundBuilderResult& OutResult); // [0x7a54d00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.DisconnectNodes
	// void DisconnectNodes(FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, FMetaSoundBuilderNodeInputHandle& NodeInputHandle, EMetaSoundBuilderResult& OutResult); // [0x7a54bac] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.DisconnectNodeOutput
	// void DisconnectNodeOutput(FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, EMetaSoundBuilderResult& OutResult);   // [0x7a54aac] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.DisconnectNodeInput
	// void DisconnectNodeInput(FMetaSoundBuilderNodeInputHandle& NodeInputHandle, EMetaSoundBuilderResult& OutResult);      // [0x7a549c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.ConvertToPreset
	// void ConvertToPreset(TScriptInterface<Class>& ReferencedNodeClass, EMetaSoundBuilderResult& OutResult);               // [0x7a51a40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.ConvertFromPreset
	// void ConvertFromPreset(EMetaSoundBuilderResult& OutResult);                                                           // [0x7a519a8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.ContainsNodeOutput
	// bool ContainsNodeOutput(FMetaSoundBuilderNodeOutputHandle& Output);                                                   // [0x7a518f4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.ContainsNodeInput
	// bool ContainsNodeInput(FMetaSoundBuilderNodeInputHandle& Input);                                                      // [0x7a51840] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.ContainsNode
	// bool ContainsNode(FMetaSoundNodeHandle& Node);                                                                        // [0x7a517a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.ConnectNodesByInterfaceBindings
	// void ConnectNodesByInterfaceBindings(FMetaSoundNodeHandle& FromNodeHandle, FMetaSoundNodeHandle& ToNodeHandle, EMetaSoundBuilderResult& OutResult); // [0x7a5165c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.ConnectNodes
	// void ConnectNodes(FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, FMetaSoundBuilderNodeInputHandle& NodeInputHandle, EMetaSoundBuilderResult& OutResult); // [0x7a51508] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.ConnectNodeOutputToGraphOutput
	// void ConnectNodeOutputToGraphOutput(FName GraphOutputName, FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, EMetaSoundBuilderResult& OutResult); // [0x7a512d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.ConnectNodeOutputsToMatchingGraphInterfaceOutputs
	// TArray<FMetaSoundBuilderNodeInputHandle> ConnectNodeOutputsToMatchingGraphInterfaceOutputs(FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult); // [0x7a513fc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.ConnectNodeInputToGraphInput
	// void ConnectNodeInputToGraphInput(FName GraphInputName, FMetaSoundBuilderNodeInputHandle& NodeInputHandle, EMetaSoundBuilderResult& OutResult); // [0x7a51098] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.ConnectNodeInputsToMatchingGraphInterfaceInputs
	// TArray<FMetaSoundBuilderNodeOutputHandle> ConnectNodeInputsToMatchingGraphInterfaceInputs(FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult); // [0x7a511c4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.AddNodeByClassName
	// FMetaSoundNodeHandle AddNodeByClassName(FMetasoundFrontendClassName& ClassName, EMetaSoundBuilderResult& OutResult, int32_t MajorVersion); // [0x7a50bd0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.AddNode
	// FMetaSoundNodeHandle AddNode(TScriptInterface<Class>& NodeClass, EMetaSoundBuilderResult& OutResult);                 // [0x7a50ad8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.AddInterface
	// void AddInterface(FName InterfaceName, EMetaSoundBuilderResult& OutResult);                                           // [0x7a50a0c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.AddGraphOutputNode
	// FMetaSoundBuilderNodeInputHandle AddGraphOutputNode(FName Name, FName DataType, FMetasoundFrontendLiteral DefaultValue, EMetaSoundBuilderResult& OutResult, bool bIsConstructorOutput); // [0x7a50688] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.AddGraphInputNode
	// FMetaSoundBuilderNodeOutputHandle AddGraphInputNode(FName Name, FName DataType, FMetasoundFrontendLiteral DefaultValue, EMetaSoundBuilderResult& OutResult, bool bIsConstructorInput); // [0x7a50304] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/MetasoundEngine.MetaSoundPatchBuilder
/// Size: 0x0000 (0x000068 - 0x000068)
class UMetaSoundPatchBuilder : public UMetaSoundBuilderBase
{ 
public:


	/// Functions
	// Function /Script/MetasoundEngine.MetaSoundPatchBuilder.Build
	// TScriptInterface<Class> Build(class UObject* Parent, FMetaSoundBuilderOptions& Options);                              // [0x7a50fa0] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MetasoundEngine.MetaSoundSourceBuilder
/// Size: 0x0018 (0x000068 - 0x000080)
class UMetaSoundSourceBuilder : public UMetaSoundBuilderBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0068   (0x0018)  MISSED


	/// Functions
	// Function /Script/MetasoundEngine.MetaSoundSourceBuilder.SetSampleRateOverride
	// void SetSampleRateOverride(int32_t SampleRate);                                                                       // [0x7a587c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundSourceBuilder.SetQuality
	// void SetQuality(FName Quality);                                                                                       // [0x7a58748] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundSourceBuilder.SetFormat
	// void SetFormat(EMetaSoundOutputAudioFormat OutputFormat, EMetaSoundBuilderResult& OutResult);                         // [0x7a58394] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundSourceBuilder.SetBlockRateOverride
	// void SetBlockRateOverride(float BlockRate);                                                                           // [0x7a58310] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundSourceBuilder.GetLiveUpdatesEnabled
	// bool GetLiveUpdatesEnabled();                                                                                         // [0x7a56478] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundSourceBuilder.Build
	// TScriptInterface<Class> Build(class UObject* Parent, FMetaSoundBuilderOptions& Options);                              // [0x7a50fa0] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundSourceBuilder.Audition
	// void Audition(class UObject* Parent, class UAudioComponent* AudioComponent, FDelegateProperty OnCreateGenerator, bool bLiveUpdatesEnabled); // [0x7a50e50] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MetasoundEngine.MetaSoundBuilderSubsystem
/// Size: 0x00F8 (0x000030 - 0x000128)
class UMetaSoundBuilderSubsystem : public UEngineSubsystem
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0030   (0x0008)  MISSED
	SDK_UNDEFINED(80,2611) /* TMap<FName, UMetaSoundBuilderBase*> */ __um(NamedBuilders);                          // 0x0038   (0x0050)  
	SDK_UNDEFINED(80,2612) /* TMap<FMetasoundFrontendClassName, TWeakObjectPtr<UMetaSoundBuilderBase*>> */ __um(AssetBuilders); // 0x0088   (0x0050)  
	SDK_UNDEFINED(80,2613) /* TMap<FMetasoundFrontendClassName, TWeakObjectPtr<UMetaSoundBuilderBase*>> */ __um(TransientBuilders); // 0x00D8   (0x0050)  


	/// Functions
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.UnregisterSourceBuilder
	// bool UnregisterSourceBuilder(FName BuilderName);                                                                      // [0x7a58a30] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.UnregisterPatchBuilder
	// bool UnregisterPatchBuilder(FName BuilderName);                                                                       // [0x7a589a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.UnregisterBuilder
	// bool UnregisterBuilder(FName BuilderName);                                                                            // [0x7a589a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.RegisterSourceBuilder
	// void RegisterSourceBuilder(FName BuilderName, class UMetaSoundSourceBuilder* Builder);                                // [0x7a57cbc] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.RegisterPatchBuilder
	// void RegisterPatchBuilder(FName BuilderName, class UMetaSoundPatchBuilder* Builder);                                  // [0x7a57cbc] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.RegisterBuilder
	// void RegisterBuilder(FName BuilderName, class UMetaSoundBuilderBase* Builder);                                        // [0x7a57cbc] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.IsInterfaceRegistered
	// bool IsInterfaceRegistered(FName InInterfaceName);                                                                    // [0x7a577a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.FindSourceBuilder
	// class UMetaSoundSourceBuilder* FindSourceBuilder(FName BuilderName);                                                  // [0x7a56180] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.FindPatchBuilder
	// class UMetaSoundPatchBuilder* FindPatchBuilder(FName BuilderName);                                                    // [0x7a560d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.FindBuilderOfDocument
	// class UMetaSoundBuilderBase* FindBuilderOfDocument(TScriptInterface<Class> InMetaSound);                              // [0x7a54fa4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.FindBuilder
	// class UMetaSoundBuilderBase* FindBuilder(FName BuilderName);                                                          // [0x7a54f18] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateStringMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateStringMetaSoundLiteral(FString Value, FName& DataType);                               // [0x7a53b8c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateStringArrayMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateStringArrayMetaSoundLiteral(TArray<FString>& Value, FName& DataType);                 // [0x7a53948] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateSourcePresetBuilder
	// class UMetaSoundSourceBuilder* CreateSourcePresetBuilder(FName BuilderName, TScriptInterface<Class>& ReferencedSourceClass, EMetaSoundBuilderResult& OutResult); // [0x7a53800] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateSourceBuilder
	// class UMetaSoundSourceBuilder* CreateSourceBuilder(FName BuilderName, FMetaSoundBuilderNodeOutputHandle& OnPlayNodeOutput, FMetaSoundBuilderNodeInputHandle& OnFinishedNodeInput, TArray<FMetaSoundBuilderNodeInputHandle>& AudioOutNodeInputs, EMetaSoundBuilderResult& OutResult, EMetaSoundOutputAudioFormat OutputFormat, bool bIsOneShot); // [0x7a52e20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreatePatchPresetBuilder
	// class UMetaSoundPatchBuilder* CreatePatchPresetBuilder(FName BuilderName, TScriptInterface<Class>& ReferencedPatchClass, EMetaSoundBuilderResult& OutResult); // [0x7a52ce4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreatePatchBuilder
	// class UMetaSoundPatchBuilder* CreatePatchBuilder(FName BuilderName, EMetaSoundBuilderResult& OutResult);              // [0x7a52c08] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateObjectMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateObjectMetaSoundLiteral(class UObject* Value);                                         // [0x7a52b30] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateObjectArrayMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateObjectArrayMetaSoundLiteral(TArray<UObject*>& Value);                                 // [0x7a52a38] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateMetaSoundLiteralFromParam
	// FMetasoundFrontendLiteral CreateMetaSoundLiteralFromParam(FAudioParameter& Param);                                    // [0x7a5296c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateIntMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateIntMetaSoundLiteral(int32_t Value, FName& DataType);                                  // [0x7a52648] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateIntArrayMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateIntArrayMetaSoundLiteral(TArray<int32_t>& Value, FName& DataType);                    // [0x7a523f8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateFloatMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateFloatMetaSoundLiteral(float Value, FName& DataType);                                  // [0x7a5224c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateFloatArrayMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateFloatArrayMetaSoundLiteral(TArray<float>& Value, FName& DataType);                    // [0x7a51f84] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateBoolMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateBoolMetaSoundLiteral(bool Value, FName& DataType);                                    // [0x7a51d7c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateBoolArrayMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateBoolArrayMetaSoundLiteral(TArray<bool>& Value, FName& DataType);                      // [0x7a51b2c] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/MetasoundEngine.MetaSoundSource
/// Size: 0x0400 (0x000470 - 0x000870)
class UMetaSoundSource : public USoundWaveProcedural
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0470   (0x0030)  MISSED
	FMetasoundFrontendDocument                         RootMetaSoundDocument;                                      // 0x04A0   (0x01C0)  
	SDK_UNDEFINED(80,2614) /* TSet<FString> */         __um(ReferencedAssetClassKeys);                             // 0x0660   (0x0050)  
	SDK_UNDEFINED(80,2615) /* TSet<UObject*> */        __um(ReferencedAssetClassObjects);                          // 0x06B0   (0x0050)  
	SDK_UNDEFINED(80,2616) /* TSet<FSoftObjectPath> */ __um(ReferenceAssetClassCache);                             // 0x0700   (0x0050)  
	EMetaSoundOutputAudioFormat                        OutputFormat;                                               // 0x0750   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0751   (0x0003)  MISSED
	FName                                              QualitySetting;                                             // 0x0754   (0x0004)  
	FPerPlatformFloat                                  BlockRateOverride;                                          // 0x0758   (0x0004)  
	FPerPlatformInt                                    SampleRateOverride;                                         // 0x075C   (0x0004)  
	FGuid                                              AssetClassID;                                               // 0x0760   (0x0010)  
	unsigned char                                      UnknownData02_6[0x100];                                     // 0x0770   (0x0100)  MISSED
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
	SDK_UNDEFINED(16,2617) /* TScriptInterface<Class> */ __um(ExistingMetaSound);                                  // 0x0008   (0x0010)  
};

