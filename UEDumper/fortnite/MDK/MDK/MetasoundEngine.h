
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AudioExtensions
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: MetasoundFrontend

/// Class /Script/MetasoundEngine.MetasoundFrontendLiteralBlueprintAccess
/// Size: 0x0000 (0x000028 - 0x000028)
class UMetasoundFrontendLiteralBlueprintAccess : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/MetasoundEngine.MetasoundFrontendLiteralBlueprintAccess.CreateStringMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateStringMetaSoundLiteral(FString Value);                                                   // [0x7a331dc] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundFrontendLiteralBlueprintAccess.CreateStringArrayMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateStringArrayMetaSoundLiteral(TArray<FString>& Value);                                     // [0x7a3296c] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundFrontendLiteralBlueprintAccess.CreateObjectMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateObjectMetaSoundLiteral(class UObject* Value);                                            // [0x7a318dc] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundFrontendLiteralBlueprintAccess.CreateObjectArrayMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateObjectArrayMetaSoundLiteral(TArray<UObject*>& Value);                                    // [0x7a317e4] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundFrontendLiteralBlueprintAccess.CreateMetaSoundLiteralFromParam
	// FMetasoundFrontendLiteral CreateMetaSoundLiteralFromParam(FAudioParameter& Param);                                       // [0x7a31718] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundFrontendLiteralBlueprintAccess.CreateIntMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateIntMetaSoundLiteral(int32_t Value);                                                      // [0x7a3149c] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundFrontendLiteralBlueprintAccess.CreateIntArrayMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateIntArrayMetaSoundLiteral(TArray<int32_t>& Value);                                        // [0x7a31238] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundFrontendLiteralBlueprintAccess.CreateFloatMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateFloatMetaSoundLiteral(float Value);                                                      // [0x7a30ff4] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundFrontendLiteralBlueprintAccess.CreateFloatArrayMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateFloatArrayMetaSoundLiteral(TArray<float>& Value);                                        // [0x7a30d80] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundFrontendLiteralBlueprintAccess.CreateBoolMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateBoolMetaSoundLiteral(bool Value);                                                        // [0x7a30ad4] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundFrontendLiteralBlueprintAccess.CreateBoolArrayMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateBoolArrayMetaSoundLiteral(TArray<bool>& Value);                                          // [0x7a3086c] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
};

/// Class /Script/MetasoundEngine.MetasoundGeneratorHandle
/// Size: 0x0070 (0x000028 - 0x000098)
class UMetasoundGeneratorHandle : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:


	/// Functions
	// Function /Script/MetasoundEngine.MetasoundGeneratorHandle.WatchOutput
	// bool WatchOutput(FName OutputName, FDelegateProperty& OnOutputValueChanged, FName AnalyzerName, FName AnalyzerOutputName); // [0x7a37eec] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundGeneratorHandle.UpdateWatchers
	// void UpdateWatchers();                                                                                                   // [0x7a37ed8] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/MetasoundEngine.MetasoundGeneratorHandle.GetCPUCoreUtilization
	// double GetCPUCoreUtilization();                                                                                          // [0x7a35228] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetasoundGeneratorHandle.EnableRuntimeRenderTiming
	// void EnableRuntimeRenderTiming(bool Enable);                                                                             // [0x7a33d94] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/MetasoundEngine.MetasoundGeneratorHandle.CreateMetaSoundGeneratorHandle
	// class UMetasoundGeneratorHandle* CreateMetaSoundGeneratorHandle(class UAudioComponent* OnComponent);                     // [0x7a315b4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundGeneratorHandle.ApplyParameterPack
	// bool ApplyParameterPack(class UMetasoundParameterPack* pack);                                                            // [0x7a2f7c8] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MetasoundEngine.MetaSoundCacheSubsystem
/// Size: 0x0040 (0x000030 - 0x000070)
class UMetaSoundCacheSubsystem : public UAudioEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:


	/// Functions
	// Function /Script/MetasoundEngine.MetaSoundCacheSubsystem.TouchOrPrecacheMetaSound
	// void TouchOrPrecacheMetaSound(class UMetaSoundSource* InMetaSound, int32_t InNumInstances);                              // [0x7a37b6c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundCacheSubsystem.RemoveCachedOperatorsForMetaSound
	// void RemoveCachedOperatorsForMetaSound(class UMetaSoundSource* InMetaSound);                                             // [0x7a36f00] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundCacheSubsystem.PrecacheMetaSound
	// void PrecacheMetaSound(class UMetaSoundSource* InMetaSound, int32_t InNumInstances);                                     // [0x1faa84c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MetasoundEngine.MetasoundOutputBlueprintAccess
/// Size: 0x0000 (0x000028 - 0x000028)
class UMetasoundOutputBlueprintAccess : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/MetasoundEngine.MetasoundOutputBlueprintAccess.IsTime
	// bool IsTime(FMetaSoundOutput& Output);                                                                                   // [0x7a36964] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundOutputBlueprintAccess.IsString
	// bool IsString(FMetaSoundOutput& Output);                                                                                 // [0x7a368c8] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundOutputBlueprintAccess.IsInt32
	// bool IsInt32(FMetaSoundOutput& Output);                                                                                  // [0x7a36748] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundOutputBlueprintAccess.IsFloat
	// bool IsFloat(FMetaSoundOutput& Output);                                                                                  // [0x7a366ac] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundOutputBlueprintAccess.IsBool
	// bool IsBool(FMetaSoundOutput& Output);                                                                                   // [0x7a36610] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundOutputBlueprintAccess.GetTimeSeconds
	// float GetTimeSeconds(FMetaSoundOutput& Output, bool& Success);                                                           // [0x7a36440] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundOutputBlueprintAccess.GetString
	// FString GetString(FMetaSoundOutput& Output, bool& Success);                                                              // [0x7a35d08] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundOutputBlueprintAccess.GetInt32
	// int32_t GetInt32(FMetaSoundOutput& Output, bool& Success);                                                               // [0x7a3536c] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundOutputBlueprintAccess.GetFloat
	// float GetFloat(FMetaSoundOutput& Output, bool& Success);                                                                 // [0x7a35264] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundOutputBlueprintAccess.GetBool
	// bool GetBool(FMetaSoundOutput& Output, bool& Success);                                                                   // [0x23a482c] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
};

/// Class /Script/MetasoundEngine.MetaSoundOutputSubsystem
/// Size: 0x0010 (0x000040 - 0x000050)
class UMetaSoundOutputSubsystem : public UTickableWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<class UMetasoundGeneratorHandle*>)  TrackedGenerators                                           OFFSET(get<T>, {0x40, 16, 0, 0})


	/// Functions
	// Function /Script/MetasoundEngine.MetaSoundOutputSubsystem.WatchOutput
	// bool WatchOutput(class UAudioComponent* AudioComponent, FName OutputName, FDelegateProperty& OnOutputValueChanged, FName AnalyzerName, FName AnalyzerOutputName); // [0x1d3cdc4] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/MetasoundEngine.MetaSoundSettings
/// Size: 0x0058 (0x000030 - 0x000088)
class UMetaSoundSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	DMember(bool)                                      bAutoUpdateEnabled                                          OFFSET(get<bool>, {0x30, 1, 0, 0})
	CMember(TArray<FMetasoundFrontendClassName>)       AutoUpdateDenylist                                          OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FDefaultMetaSoundAssetAutoUpdateSettings>) AutoUpdateAssetDenylist                              OFFSET(get<T>, {0x48, 16, 0, 0})
	DMember(bool)                                      bAutoUpdateLogWarningOnDroppedConnection                    OFFSET(get<bool>, {0x58, 1, 0, 0})
	CMember(TArray<FDirectoryPath>)                    DirectoriesToRegister                                       OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<FMetaSoundQualitySettings>)         QualitySettings                                             OFFSET(get<T>, {0x70, 16, 0, 0})
	DMember(int32_t)                                   DenyListCacheChangeID                                       OFFSET(get<int32_t>, {0x80, 4, 0, 0})
};

/// Class /Script/MetasoundEngine.MetaSoundQuality
/// Size: 0x0000 (0x000028 - 0x000028)
class UMetaSoundQuality : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/MetasoundEngine.MetaSoundQuality.GetQualityList
	// TArray<FName> GetQualityList();                                                                                          // [0x7a35c28] Final|Native|Static|Public 
};

/// Class /Script/MetasoundEngine.MetasoundEditorGraphBase
/// Size: 0x0000 (0x000060 - 0x000060)
class UMetasoundEditorGraphBase : public UEdGraph
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Script/MetasoundEngine.MetaSoundPatch
/// Size: 0x0308 (0x000028 - 0x000330)
class UMetaSoundPatch : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	SMember(FMetasoundFrontendDocument)                RootMetaSoundDocument                                       OFFSET(getStruct<T>, {0x68, 448, 0, 0})
	CMember(TSet<FString>)                             ReferencedAssetClassKeys                                    OFFSET(get<T>, {0x228, 80, 0, 0})
	CMember(TSet<UObject*>)                            ReferencedAssetClassObjects                                 OFFSET(get<T>, {0x278, 80, 0, 0})
	CMember(TSet<FSoftObjectPath>)                     ReferenceAssetClassCache                                    OFFSET(get<T>, {0x2C8, 80, 0, 0})
	SMember(FGuid)                                     AssetClassID                                                OFFSET(getStruct<T>, {0x318, 16, 0, 0})
};

/// Class /Script/MetasoundEngine.MetaSoundAssetSubsystem
/// Size: 0x01B0 (0x000030 - 0x0001E0)
class UMetaSoundAssetSubsystem : public UEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	CMember(TArray<FMetaSoundAsyncAssetDependencies>)  LoadingDependencies                                         OFFSET(get<T>, {0x38, 16, 0, 0})


	/// Functions
	// Function /Script/MetasoundEngine.MetaSoundAssetSubsystem.UnregisterAssetClassesInDirectories
	// void UnregisterAssetClassesInDirectories(TArray<FMetaSoundAssetDirectory>& Directories);                                 // [0x7a37ca8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundAssetSubsystem.RegisterAssetClassesInDirectories
	// void RegisterAssetClassesInDirectories(TArray<FMetaSoundAssetDirectory>& Directories);                                   // [0x7a36ca4] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/MetasoundEngine.MetaSoundBuilderBase
/// Size: 0x0038 (0x000028 - 0x000060)
class UMetaSoundBuilderBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FMetaSoundFrontendDocumentBuilder)         Builder                                                     OFFSET(getStruct<T>, {0x28, 56, 0, 0})


	/// Functions
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.SetNodeInputDefault
	// void SetNodeInputDefault(FMetaSoundBuilderNodeInputHandle& NodeInputHandle, FMetasoundFrontendLiteral& Literal, EMetaSoundBuilderResult& OutResult); // [0x7a37860] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.SetGraphInputDefault
	// void SetGraphInputDefault(FName InputName, FMetasoundFrontendLiteral& Literal, EMetaSoundBuilderResult& OutResult);      // [0x7a376d4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.RemoveNodeInputDefault
	// void RemoveNodeInputDefault(FMetaSoundBuilderNodeInputHandle& InputHandle, EMetaSoundBuilderResult& OutResult);          // [0x7a37404] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.RemoveNode
	// void RemoveNode(FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult);                                   // [0x7a37318] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.RemoveInterface
	// void RemoveInterface(FName InterfaceName, EMetaSoundBuilderResult& OutResult);                                           // [0x7a37210] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.RemoveGraphOutput
	// void RemoveGraphOutput(FName Name, EMetaSoundBuilderResult& OutResult);                                                  // [0x7a37104] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.RemoveGraphInput
	// void RemoveGraphInput(FName Name, EMetaSoundBuilderResult& OutResult);                                                   // [0x7a36ff8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.NodesAreConnected
	// bool NodesAreConnected(FMetaSoundBuilderNodeOutputHandle& OutputHandle, FMetaSoundBuilderNodeInputHandle& InputHandle);  // [0x7a36b70] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.NodeOutputIsConnected
	// bool NodeOutputIsConnected(FMetaSoundBuilderNodeOutputHandle& OutputHandle);                                             // [0x7a36aa8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.NodeInputIsConnected
	// bool NodeInputIsConnected(FMetaSoundBuilderNodeInputHandle& InputHandle);                                                // [0x7a36a00] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.IsPreset
	// bool IsPreset();                                                                                                         // [0x7a368a4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.InterfaceIsDeclared
	// bool InterfaceIsDeclared(FName InterfaceName);                                                                           // [0x7a36540] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.GetReferencedPresetAsset
	// class UObject* GetReferencedPresetAsset();                                                                               // [0x7a35ce4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.GetNodeOutputIsConstructorPin
	// bool GetNodeOutputIsConstructorPin(FMetaSoundBuilderNodeOutputHandle& OutputHandle);                                     // [0x7a35b78] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.GetNodeOutputData
	// void GetNodeOutputData(FMetaSoundBuilderNodeOutputHandle& OutputHandle, FName& Name, FName& DataType, EMetaSoundBuilderResult& OutResult); // [0x7a359e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.GetNodeInputIsConstructorPin
	// bool GetNodeInputIsConstructorPin(FMetaSoundBuilderNodeInputHandle& InputHandle);                                        // [0x7a35930] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.GetNodeInputDefault
	// FMetasoundFrontendLiteral GetNodeInputDefault(FMetaSoundBuilderNodeInputHandle& InputHandle, EMetaSoundBuilderResult& OutResult); // [0x7a357c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.GetNodeInputData
	// void GetNodeInputData(FMetaSoundBuilderNodeInputHandle& InputHandle, FName& Name, FName& DataType, EMetaSoundBuilderResult& OutResult); // [0x7a35628] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.GetNodeInputClassDefault
	// FMetasoundFrontendLiteral GetNodeInputClassDefault(FMetaSoundBuilderNodeInputHandle& InputHandle, EMetaSoundBuilderResult& OutResult); // [0x7a354b8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindNodeOutputsByDataType
	// TArray<FMetaSoundBuilderNodeOutputHandle> FindNodeOutputsByDataType(FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult, FName DataType); // [0x7a34e4c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindNodeOutputs
	// TArray<FMetaSoundBuilderNodeOutputHandle> FindNodeOutputs(FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult); // [0x7a34d40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindNodeOutputParent
	// FMetaSoundNodeHandle FindNodeOutputParent(FMetaSoundBuilderNodeOutputHandle& OutputHandle, EMetaSoundBuilderResult& OutResult); // [0x7a34748] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindNodeOutputByName
	// FMetaSoundBuilderNodeOutputHandle FindNodeOutputByName(FMetaSoundNodeHandle& NodeHandle, FName OutputName, EMetaSoundBuilderResult& OutResult); // [0x7a34b6c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindNodeInputsByDataType
	// TArray<FMetaSoundBuilderNodeInputHandle> FindNodeInputsByDataType(FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult, FName DataType); // [0x7a34970] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindNodeInputs
	// TArray<FMetaSoundBuilderNodeInputHandle> FindNodeInputs(FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult); // [0x7a34864] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindNodeInputParent
	// FMetaSoundNodeHandle FindNodeInputParent(FMetaSoundBuilderNodeInputHandle& InputHandle, EMetaSoundBuilderResult& OutResult); // [0x7a34748] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindNodeInputByName
	// FMetaSoundBuilderNodeInputHandle FindNodeInputByName(FMetaSoundNodeHandle& NodeHandle, FName InputName, EMetaSoundBuilderResult& OutResult); // [0x7a34574] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindNodeClassVersion
	// FMetasoundFrontendVersion FindNodeClassVersion(FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult);    // [0x7a34424] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindInterfaceOutputNodes
	// TArray<FMetaSoundNodeHandle> FindInterfaceOutputNodes(FName InterfaceName, EMetaSoundBuilderResult& OutResult);          // [0x7a342f4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindInterfaceInputNodes
	// TArray<FMetaSoundNodeHandle> FindInterfaceInputNodes(FName InterfaceName, EMetaSoundBuilderResult& OutResult);           // [0x7a341c4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindGraphOutputNode
	// FMetaSoundNodeHandle FindGraphOutputNode(FName OutputName, EMetaSoundBuilderResult& OutResult);                          // [0x7a340a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindGraphInputNode
	// FMetaSoundNodeHandle FindGraphInputNode(FName InputName, EMetaSoundBuilderResult& OutResult);                            // [0x7a33f7c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.DisconnectNodesByInterfaceBindings
	// void DisconnectNodesByInterfaceBindings(FMetaSoundNodeHandle& FromNodeHandle, FMetaSoundNodeHandle& ToNodeHandle, EMetaSoundBuilderResult& OutResult); // [0x7a33c50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.DisconnectNodes
	// void DisconnectNodes(FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, FMetaSoundBuilderNodeInputHandle& NodeInputHandle, EMetaSoundBuilderResult& OutResult); // [0x7a33afc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.DisconnectNodeOutput
	// void DisconnectNodeOutput(FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, EMetaSoundBuilderResult& OutResult);      // [0x7a339fc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.DisconnectNodeInput
	// void DisconnectNodeInput(FMetaSoundBuilderNodeInputHandle& NodeInputHandle, EMetaSoundBuilderResult& OutResult);         // [0x7a33910] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.ConvertToPreset
	// void ConvertToPreset(TScriptInterface<Class>& ReferencedNodeClass, EMetaSoundBuilderResult& OutResult);                  // [0x7a30628] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.ConvertFromPreset
	// void ConvertFromPreset(EMetaSoundBuilderResult& OutResult);                                                              // [0x7a30590] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.ContainsNodeOutput
	// bool ContainsNodeOutput(FMetaSoundBuilderNodeOutputHandle& Output);                                                      // [0x7a304dc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.ContainsNodeInput
	// bool ContainsNodeInput(FMetaSoundBuilderNodeInputHandle& Input);                                                         // [0x7a30428] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.ContainsNode
	// bool ContainsNode(FMetaSoundNodeHandle& Node);                                                                           // [0x7a30388] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.ConnectNodesByInterfaceBindings
	// void ConnectNodesByInterfaceBindings(FMetaSoundNodeHandle& FromNodeHandle, FMetaSoundNodeHandle& ToNodeHandle, EMetaSoundBuilderResult& OutResult); // [0x7a30244] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.ConnectNodes
	// void ConnectNodes(FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, FMetaSoundBuilderNodeInputHandle& NodeInputHandle, EMetaSoundBuilderResult& OutResult); // [0x7a300f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.ConnectNodeOutputToGraphOutput
	// void ConnectNodeOutputToGraphOutput(FName GraphOutputName, FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, EMetaSoundBuilderResult& OutResult); // [0x7a2fe88] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.ConnectNodeOutputsToMatchingGraphInterfaceOutputs
	// TArray<FMetaSoundBuilderNodeInputHandle> ConnectNodeOutputsToMatchingGraphInterfaceOutputs(FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult); // [0x7a2ffe4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.ConnectNodeInputToGraphInput
	// void ConnectNodeInputToGraphInput(FName GraphInputName, FMetaSoundBuilderNodeInputHandle& NodeInputHandle, EMetaSoundBuilderResult& OutResult); // [0x7a2fc20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.ConnectNodeInputsToMatchingGraphInterfaceInputs
	// TArray<FMetaSoundBuilderNodeOutputHandle> ConnectNodeInputsToMatchingGraphInterfaceInputs(FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult); // [0x7a2fd7c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.AddNodeByClassName
	// FMetaSoundNodeHandle AddNodeByClassName(FMetasoundFrontendClassName& ClassName, EMetaSoundBuilderResult& OutResult, int32_t MajorVersion); // [0x7a2f5d8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.AddNode
	// FMetaSoundNodeHandle AddNode(TScriptInterface<Class>& NodeClass, EMetaSoundBuilderResult& OutResult);                    // [0x7a2f4e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.AddInterface
	// void AddInterface(FName InterfaceName, EMetaSoundBuilderResult& OutResult);                                              // [0x7a2f3d4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.AddGraphOutputNode
	// FMetaSoundBuilderNodeInputHandle AddGraphOutputNode(FName Name, FName DataType, FMetasoundFrontendLiteral DefaultValue, EMetaSoundBuilderResult& OutResult, bool bIsConstructorOutput); // [0x7a2f048] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.AddGraphInputNode
	// FMetaSoundBuilderNodeOutputHandle AddGraphInputNode(FName Name, FName DataType, FMetasoundFrontendLiteral DefaultValue, EMetaSoundBuilderResult& OutResult, bool bIsConstructorInput); // [0x7a2ecbc] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/MetasoundEngine.MetaSoundPatchBuilder
/// Size: 0x0000 (0x000060 - 0x000060)
class UMetaSoundPatchBuilder : public UMetaSoundBuilderBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:


	/// Functions
	// Function /Script/MetasoundEngine.MetaSoundPatchBuilder.Build
	// TScriptInterface<Class> Build(class UObject* Parent, FMetaSoundBuilderOptions& Options);                                 // [0x7a2fae0] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MetasoundEngine.MetaSoundSourceBuilder
/// Size: 0x0018 (0x000060 - 0x000078)
class UMetaSoundSourceBuilder : public UMetaSoundBuilderBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:


	/// Functions
	// Function /Script/MetasoundEngine.MetaSoundSourceBuilder.SetSampleRateOverride
	// void SetSampleRateOverride(int32_t SampleRate);                                                                          // [0x7a37aac] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundSourceBuilder.SetQuality
	// void SetQuality(FName Quality);                                                                                          // [0x7a379ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundSourceBuilder.SetFormat
	// void SetFormat(EMetaSoundOutputAudioFormat OutputFormat, EMetaSoundBuilderResult& OutResult);                            // [0x7a375cc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundSourceBuilder.SetBlockRateOverride
	// void SetBlockRateOverride(float BlockRate);                                                                              // [0x7a37504] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundSourceBuilder.GetLiveUpdatesEnabled
	// bool GetLiveUpdatesEnabled();                                                                                            // [0x7a35470] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundSourceBuilder.Build
	// TScriptInterface<Class> Build(class UObject* Parent, FMetaSoundBuilderOptions& Options);                                 // [0x7a2fae0] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundSourceBuilder.Audition
	// void Audition(class UObject* Parent, class UAudioComponent* AudioComponent, FDelegateProperty OnCreateGenerator, bool bLiveUpdatesEnabled); // [0x7a2f898] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MetasoundEngine.MetaSoundBuilderSubsystem
/// Size: 0x00A8 (0x000030 - 0x0000D8)
class UMetaSoundBuilderSubsystem : public UEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(TMap<FName, UMetaSoundBuilderBase*>)       NamedBuilders                                               OFFSET(get<T>, {0x38, 80, 0, 0})
	CMember(TMap<FName, TWeakObjectPtr<UMetaSoundBuilderBase*>>) AssetBuilders                                     OFFSET(get<T>, {0x88, 80, 0, 0})


	/// Functions
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.UnregisterSourceBuilder
	// bool UnregisterSourceBuilder(FName BuilderName);                                                                         // [0x7a37e0c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.UnregisterPatchBuilder
	// bool UnregisterPatchBuilder(FName BuilderName);                                                                          // [0x7a37d40] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.UnregisterBuilder
	// bool UnregisterBuilder(FName BuilderName);                                                                               // [0x7a37d40] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.RegisterSourceBuilder
	// void RegisterSourceBuilder(FName BuilderName, class UMetaSoundSourceBuilder* Builder);                                   // [0x7a36d3c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.RegisterPatchBuilder
	// void RegisterPatchBuilder(FName BuilderName, class UMetaSoundPatchBuilder* Builder);                                     // [0x7a36d3c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.RegisterBuilder
	// void RegisterBuilder(FName BuilderName, class UMetaSoundBuilderBase* Builder);                                           // [0x7a36d3c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.IsInterfaceRegistered
	// bool IsInterfaceRegistered(FName InInterfaceName);                                                                       // [0x7a367e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.FindSourceBuilder
	// class UMetaSoundSourceBuilder* FindSourceBuilder(FName BuilderName);                                                     // [0x7a35138] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.FindPatchBuilder
	// class UMetaSoundPatchBuilder* FindPatchBuilder(FName BuilderName);                                                       // [0x7a35048] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.FindBuilder
	// class UMetaSoundBuilderBase* FindBuilder(FName BuilderName);                                                             // [0x7a33eac] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateStringMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateStringMetaSoundLiteral(FString Value, FName& DataType);                                  // [0x7a32a5c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateStringArrayMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateStringArrayMetaSoundLiteral(TArray<FString>& Value, FName& DataType);                    // [0x7a32818] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateSourcePresetBuilder
	// class UMetaSoundSourceBuilder* CreateSourcePresetBuilder(FName BuilderName, TScriptInterface<Class>& ReferencedSourceClass, EMetaSoundBuilderResult& OutResult); // [0x7a3269c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateSourceBuilder
	// class UMetaSoundSourceBuilder* CreateSourceBuilder(FName BuilderName, FMetaSoundBuilderNodeOutputHandle& OnPlayNodeOutput, FMetaSoundBuilderNodeInputHandle& OnFinishedNodeInput, TArray<FMetaSoundBuilderNodeInputHandle>& AudioOutNodeInputs, EMetaSoundBuilderResult& OutResult, EMetaSoundOutputAudioFormat OutputFormat, bool bIsOneShot); // [0x7a31c7c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreatePatchPresetBuilder
	// class UMetaSoundPatchBuilder* CreatePatchPresetBuilder(FName BuilderName, TScriptInterface<Class>& ReferencedPatchClass, EMetaSoundBuilderResult& OutResult); // [0x7a31b0c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreatePatchBuilder
	// class UMetaSoundPatchBuilder* CreatePatchBuilder(FName BuilderName, EMetaSoundBuilderResult& OutResult);                 // [0x7a319f4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateObjectMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateObjectMetaSoundLiteral(class UObject* Value);                                            // [0x7a318dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateObjectArrayMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateObjectArrayMetaSoundLiteral(TArray<UObject*>& Value);                                    // [0x7a317e4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateMetaSoundLiteralFromParam
	// FMetasoundFrontendLiteral CreateMetaSoundLiteralFromParam(FAudioParameter& Param);                                       // [0x7a31718] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateIntMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateIntMetaSoundLiteral(int32_t Value, FName& DataType);                                     // [0x7a31330] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateIntArrayMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateIntArrayMetaSoundLiteral(TArray<int32_t>& Value, FName& DataType);                       // [0x7a310e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateFloatMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateFloatMetaSoundLiteral(float Value, FName& DataType);                                     // [0x7a30eb4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateFloatArrayMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateFloatArrayMetaSoundLiteral(TArray<float>& Value, FName& DataType);                       // [0x7a30bec] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateBoolMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateBoolMetaSoundLiteral(bool Value, FName& DataType);                                       // [0x7a30964] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateBoolArrayMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateBoolArrayMetaSoundLiteral(TArray<bool>& Value, FName& DataType);                         // [0x7a30714] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/MetasoundEngine.MetaSoundSource
/// Size: 0x0410 (0x000470 - 0x000880)
class UMetaSoundSource : public USoundWaveProcedural
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2176;

public:
	SMember(FMetasoundFrontendDocument)                RootMetaSoundDocument                                       OFFSET(getStruct<T>, {0x4B0, 448, 0, 0})
	CMember(TSet<FString>)                             ReferencedAssetClassKeys                                    OFFSET(get<T>, {0x670, 80, 0, 0})
	CMember(TSet<UObject*>)                            ReferencedAssetClassObjects                                 OFFSET(get<T>, {0x6C0, 80, 0, 0})
	CMember(TSet<FSoftObjectPath>)                     ReferenceAssetClassCache                                    OFFSET(get<T>, {0x710, 80, 0, 0})
	CMember(EMetaSoundOutputAudioFormat)               OutputFormat                                                OFFSET(get<T>, {0x760, 1, 0, 0})
	SMember(FName)                                     QualitySetting                                              OFFSET(getStruct<T>, {0x764, 4, 0, 0})
	SMember(FPerPlatformFloat)                         BlockRateOverride                                           OFFSET(getStruct<T>, {0x768, 4, 0, 0})
	SMember(FPerPlatformInt)                           SampleRateOverride                                          OFFSET(getStruct<T>, {0x76C, 4, 0, 0})
	SMember(FGuid)                                     AssetClassID                                                OFFSET(getStruct<T>, {0x770, 16, 0, 0})
};

/// Struct /Script/MetasoundEngine.MetaSoundOutput
/// Size: 0x000C (0x000004 - 0x000010)
class FMetaSoundOutput : public FSoundGeneratorOutput
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/MetasoundEngine.DefaultMetaSoundAssetAutoUpdateSettings
/// Size: 0x0018 (0x000000 - 0x000018)
class FDefaultMetaSoundAssetAutoUpdateSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FSoftObjectPath)                           Metasound                                                   OFFSET(getStruct<T>, {0x0, 24, 0, 0})
};

/// Struct /Script/MetasoundEngine.MetaSoundQualitySettings
/// Size: 0x000C (0x000000 - 0x00000C)
class FMetaSoundQualitySettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FPerPlatformInt)                           SampleRate                                                  OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FPerPlatformFloat)                         BlockRate                                                   OFFSET(getStruct<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/MetasoundEngine.MetaSoundAssetDirectory
/// Size: 0x0010 (0x000000 - 0x000010)
class FMetaSoundAssetDirectory : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FDirectoryPath)                            Directory                                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/MetasoundEngine.MetaSoundAsyncAssetDependencies
/// Size: 0x0030 (0x000000 - 0x000030)
class FMetaSoundAsyncAssetDependencies : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UObject*)                            Metasound                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/MetasoundEngine.MetaSoundBuilderNodeInputHandle
/// Size: 0x0000 (0x000020 - 0x000020)
class FMetaSoundBuilderNodeInputHandle : public FMetasoundFrontendVertexHandle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/MetasoundEngine.MetaSoundBuilderNodeOutputHandle
/// Size: 0x0000 (0x000020 - 0x000020)
class FMetaSoundBuilderNodeOutputHandle : public FMetasoundFrontendVertexHandle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/MetasoundEngine.MetaSoundNodeHandle
/// Size: 0x0010 (0x000000 - 0x000010)
class FMetaSoundNodeHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGuid)                                     NodeId                                                      OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/MetasoundEngine.MetaSoundBuilderOptions
/// Size: 0x0018 (0x000000 - 0x000018)
class FMetaSoundBuilderOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(bool)                                      bForceUniqueClassName                                       OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(bool)                                      bAddToRegistry                                              OFFSET(get<bool>, {0x5, 1, 0, 0})
	CMember(TScriptInterface<Class>)                   ExistingMetaSound                                           OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Enum /Script/MetasoundEngine.EMetaSoundMessageLevel
/// Size: 0x04
enum EMetaSoundMessageLevel : uint8_t
{
	EMetaSoundMessageLevel__Error                                                    = 0,
	EMetaSoundMessageLevel__Warning                                                  = 1,
	EMetaSoundMessageLevel__Info                                                     = 2,
	EMetaSoundMessageLevel__EMetaSoundMessageLevel_MAX                               = 3
};

/// Enum /Script/MetasoundEngine.EMetaSoundOutputAudioFormat
/// Size: 0x07
enum EMetaSoundOutputAudioFormat : uint8_t
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
enum EMetaSoundBuilderResult : uint8_t
{
	EMetaSoundBuilderResult__Succeeded                                               = 0,
	EMetaSoundBuilderResult__Failed                                                  = 1,
	EMetaSoundBuilderResult__EMetaSoundBuilderResult_MAX                             = 2
};

