
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: MovieScene
/// dependency: NiagaraCore
/// dependency: NiagaraShader

/// Class /Script/Niagara.NDIRenderTargetVolumeSimCacheData
/// Size: 0x0018 (0x000028 - 0x000040)
class UNDIRenderTargetVolumeSimCacheData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FName)                                     CompressionType                                             OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	CMember(TArray<FNDIRenderTargetVolumeSimCacheFrame>) Frames                                                    OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraConvertInPlaceUtilityBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraConvertInPlaceUtilityBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Niagara.NiagaraDataChannelReader
/// Size: 0x0020 (0x000028 - 0x000048)
class UNiagaraDataChannelReader : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(class UNiagaraDataChannelHandler*)         Owner                                                       OFFSET(get<T>, {0x40, 8, 0, 0})


	/// Functions
	// Function /Script/Niagara.NiagaraDataChannelReader.ReadVector4
	// FVector4 ReadVector4(FName VarName, int32_t Index);                                                                      // [0x7058454] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraDataChannelReader.ReadVector2D
	// FVector2D ReadVector2D(FName VarName, int32_t Index);                                                                    // [0x70582a0] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraDataChannelReader.ReadVector
	// FVector ReadVector(FName VarName, int32_t Index);                                                                        // [0x70585d4] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraDataChannelReader.ReadQuat
	// FQuat ReadQuat(FName VarName, int32_t Index);                                                                            // [0x705811c] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraDataChannelReader.ReadPosition
	// FVector ReadPosition(FName VarName, int32_t Index);                                                                      // [0x7057f94] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraDataChannelReader.ReadLinearColor
	// FLinearColor ReadLinearColor(FName VarName, int32_t Index);                                                              // [0x7057de0] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraDataChannelReader.ReadInt
	// int32_t ReadInt(FName VarName, int32_t Index);                                                                           // [0x7057c54] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraDataChannelReader.ReadFloat
	// double ReadFloat(FName VarName, int32_t Index);                                                                          // [0x7057b04] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraDataChannelReader.ReadBool
	// bool ReadBool(FName VarName, int32_t Index);                                                                             // [0x7057978] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraDataChannelReader.Num
	// int32_t Num();                                                                                                           // [0x705792c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraDataChannelReader.InitAccess
	// bool InitAccess(FNiagaraDataChannelSearchParameters SearchParams, bool bReadPrevFrameData);                              // [0x70572f0] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataChannelWriter
/// Size: 0x0018 (0x000028 - 0x000040)
class UNiagaraDataChannelWriter : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class UNiagaraDataChannelHandler*)         Owner                                                       OFFSET(get<T>, {0x38, 8, 0, 0})


	/// Functions
	// Function /Script/Niagara.NiagaraDataChannelWriter.WriteVector4
	// void WriteVector4(FName VarName, int32_t Index, FVector4 InData);                                                        // [0x70597bc] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataChannelWriter.WriteVector2D
	// void WriteVector2D(FName VarName, int32_t Index, FVector2D InData);                                                      // [0x70595c8] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataChannelWriter.WriteVector
	// void WriteVector(FName VarName, int32_t Index, FVector InData);                                                          // [0x7059994] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataChannelWriter.WriteSpawnInfo
	// void WriteSpawnInfo(FName VarName, int32_t Index, FNiagaraSpawnInfo InData);                                             // [0x7059404] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataChannelWriter.WriteQuat
	// void WriteQuat(FName VarName, int32_t Index, FQuat InData);                                                              // [0x7059200] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataChannelWriter.WritePosition
	// void WritePosition(FName VarName, int32_t Index, FVector InData);                                                        // [0x7059038] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataChannelWriter.WriteLinearColor
	// void WriteLinearColor(FName VarName, int32_t Index, FLinearColor InData);                                                // [0x7058e44] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataChannelWriter.WriteInt
	// void WriteInt(FName VarName, int32_t Index, int32_t InData);                                                             // [0x7058c8c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataChannelWriter.WriteID
	// void WriteID(FName VarName, int32_t Index, FNiagaraID InData);                                                           // [0x7058ad0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataChannelWriter.WriteFloat
	// void WriteFloat(FName VarName, int32_t Index, double InData);                                                            // [0x7058914] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataChannelWriter.WriteBool
	// void WriteBool(FName VarName, int32_t Index, bool InData);                                                               // [0x705875c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataChannelWriter.Num
	// int32_t Num();                                                                                                           // [0x7057954] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraDataChannelWriter.InitWrite
	// bool InitWrite(FNiagaraDataChannelSearchParameters SearchParams, int32_t Count, bool bVisibleToGame, bool bVisibleToCPU, bool bVisibleToGPU); // [0x7057474] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataChannelHandler
/// Size: 0x0020 (0x000028 - 0x000048)
class UNiagaraDataChannelHandler : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TWeakObjectPtr<UNiagaraDataChannel*>)      DataChannel                                                 OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UNiagaraDataChannelWriter*)          Writer                                                      OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UNiagaraDataChannelReader*)          Reader                                                      OFFSET(get<T>, {0x38, 8, 0, 0})


	/// Functions
	// Function /Script/Niagara.NiagaraDataChannelHandler.GetDataChannelWriter
	// class UNiagaraDataChannelWriter* GetDataChannelWriter();                                                                 // [0x70572cc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataChannelHandler.GetDataChannelReader
	// class UNiagaraDataChannelReader* GetDataChannelReader();                                                                 // [0x70572a8] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataChannelAsset
/// Size: 0x0008 (0x000028 - 0x000030)
class UNiagaraDataChannelAsset : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UNiagaraDataChannel*)                DataChannel                                                 OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataChannel
/// Size: 0x00F8 (0x000028 - 0x000120)
class UNiagaraDataChannel : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<FNiagaraVariable>)                  Variables                                                   OFFSET(get<T>, {0x28, 16, 0, 0})
	DMember(bool)                                      bKeepPreviousFrameData                                      OFFSET(get<bool>, {0x38, 1, 0, 0})
	DMember(bool)                                      bEnforceTickGroupReadWriteOrder                             OFFSET(get<bool>, {0x39, 1, 0, 0})
	CMember(TEnumAsByte<ETickingGroup>)                FinalWriteTickGroup                                         OFFSET(get<T>, {0x3A, 1, 0, 0})
	SMember(FNiagaraDataSetCompiledData)               CompiledData                                                OFFSET(getStruct<T>, {0x40, 64, 0, 0})
	SMember(FNiagaraDataSetCompiledData)               CompiledDataGPU                                             OFFSET(getStruct<T>, {0x80, 64, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataChannel_Global
/// Size: 0x0000 (0x000120 - 0x000120)
class UNiagaraDataChannel_Global : public UNiagaraDataChannel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
};

/// Class /Script/Niagara.NiagaraDataChannelHandler_Global
/// Size: 0x0010 (0x000048 - 0x000058)
class UNiagaraDataChannelHandler_Global : public UNiagaraDataChannelHandler
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/Niagara.NiagaraDataChannel_Islands
/// Size: 0x0078 (0x000120 - 0x000198)
class UNiagaraDataChannel_Islands : public UNiagaraDataChannel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 408;

public:
	CMember(ENiagraDataChannel_IslandMode)             Mode                                                        OFFSET(get<T>, {0x120, 1, 0, 0})
	SMember(FVector)                                   InitialExtents                                              OFFSET(getStruct<T>, {0x128, 24, 0, 0})
	SMember(FVector)                                   MaxExtents                                                  OFFSET(getStruct<T>, {0x140, 24, 0, 0})
	SMember(FVector)                                   PerElementExtents                                           OFFSET(getStruct<T>, {0x158, 24, 0, 0})
	CMember(TArray<TWeakObjectPtr<UNiagaraSystem*>>)   Systems                                                     OFFSET(get<T>, {0x170, 16, 0, 0})
	DMember(int32_t)                                   IslandPoolSize                                              OFFSET(get<int32_t>, {0x180, 4, 0, 0})
	SMember(FNDCIslandDebugDrawSettings)               DebugDrawSettings                                           OFFSET(getStruct<T>, {0x184, 4, 0, 0})
	CMember(TArray<class UNiagaraSystem*>)             SystemsInternal                                             OFFSET(get<T>, {0x188, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataChannelHandler_Islands
/// Size: 0x0030 (0x000048 - 0x000078)
class UNiagaraDataChannelHandler_Islands : public UNiagaraDataChannelHandler
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TArray<int32_t>)                           ActiveIslands                                               OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<int32_t>)                           FreeIslands                                                 OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<FNDCIsland>)                        IslandPool                                                  OFFSET(get<T>, {0x68, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterface
/// Size: 0x0010 (0x000028 - 0x000038)
class UNiagaraDataInterface : public UNiagaraDataInterfaceBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/Niagara.NiagaraDataInterfaceRWBase
/// Size: 0x0000 (0x000038 - 0x000038)
class UNiagaraDataInterfaceRWBase : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/Niagara.NiagaraDataInterfaceDataChannelRead
/// Size: 0x0078 (0x000038 - 0x0000B0)
class UNiagaraDataInterfaceDataChannelRead : public UNiagaraDataInterfaceRWBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(class UNiagaraDataChannelAsset*)           Channel                                                     OFFSET(get<T>, {0x38, 8, 0, 0})
	DMember(bool)                                      bReadCurrentFrame                                           OFFSET(get<bool>, {0x40, 1, 0, 0})
	DMember(bool)                                      bUpdateSourceDataEveryTick                                  OFFSET(get<bool>, {0x41, 1, 0, 0})
	DMember(bool)                                      bOverrideSpawnGroupToDataChannelIndex                       OFFSET(get<bool>, {0x42, 1, 0, 0})
	SMember(FNDIDataChannelCompiledData)               CompiledData                                                OFFSET(getStruct<T>, {0x48, 104, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceDataChannelWrite
/// Size: 0x00C0 (0x000038 - 0x0000F8)
class UNiagaraDataInterfaceDataChannelWrite : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(ENiagaraDataChannelAllocationMode)         AllocationMode                                              OFFSET(get<T>, {0x38, 1, 0, 0})
	DMember(uint32_t)                                  AllocationCount                                             OFFSET(get<uint32_t>, {0x3C, 4, 0, 0})
	DMember(bool)                                      bPublishToGame                                              OFFSET(get<bool>, {0x40, 1, 0, 0})
	DMember(bool)                                      bPublishToCPU                                               OFFSET(get<bool>, {0x41, 1, 0, 0})
	DMember(bool)                                      bPublishToGPU                                               OFFSET(get<bool>, {0x42, 1, 0, 0})
	DMember(bool)                                      bUpdateDestinationDataEveryTick                             OFFSET(get<bool>, {0x43, 1, 0, 0})
	CMember(class UNiagaraDataChannelAsset*)           Channel                                                     OFFSET(get<T>, {0x48, 8, 0, 0})
	SMember(FNDIDataChannelWriteCompiledData)          CompiledData                                                OFFSET(getStruct<T>, {0x50, 168, 0, 0})
};

/// Class /Script/Niagara.NiagaraMessageDataBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraMessageDataBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Niagara.NiagaraParameterDefinitionsBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraParameterDefinitionsBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Niagara.NiagaraRenderableMeshInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraRenderableMeshInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Niagara.NiagaraScriptSourceBase
/// Size: 0x0020 (0x000028 - 0x000048)
class UNiagaraScriptSourceBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/Niagara.NiagaraSettings
/// Size: 0x0100 (0x000030 - 0x000130)
class UNiagaraSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	DMember(bool)                                      bSystemsSupportLargeWorldCoordinates                        OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(bool)                                      bEnforceStrictStackTypes                                    OFFSET(get<bool>, {0x31, 1, 0, 0})
	DMember(bool)                                      bExperimentalVMEnabled                                      OFFSET(get<bool>, {0x32, 1, 0, 0})
	DMember(bool)                                      bLimitDeltaTime                                             OFFSET(get<bool>, {0x33, 1, 0, 0})
	DMember(float)                                     MaxDeltaTimePerTick                                         OFFSET(get<float>, {0x34, 4, 0, 0})
	SMember(FSoftObjectPath)                           DefaultEffectType                                           OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	SMember(FSoftObjectPath)                           RequiredEffectType                                          OFFSET(getStruct<T>, {0x50, 24, 0, 0})
	SMember(FLinearColor)                              PositionPinTypeColor                                        OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	CMember(ENiagaraStripScriptByteCodeOption)         ByteCodeStripOption                                         OFFSET(get<T>, {0x78, 1, 0, 0})
	CMember(TArray<FText>)                             QualityLevels                                               OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TMap<FString, FText>)                      ComponentRendererWarningsPerClass                           OFFSET(get<T>, {0x90, 80, 0, 0})
	CMember(TEnumAsByte<ETextureRenderTargetFormat>)   DefaultRenderTargetFormat                                   OFFSET(get<T>, {0xE0, 1, 0, 0})
	CMember(ENiagaraGpuBufferFormat)                   DefaultGridFormat                                           OFFSET(get<T>, {0xE1, 1, 0, 0})
	CMember(ENiagaraDefaultRendererMotionVectorSetting) DefaultRendererMotionVectorSetting                         OFFSET(get<T>, {0xE4, 4, 0, 0})
	CMember(ENiagaraDefaultRendererPixelCoverageMode)  DefaultPixelCoverageMode                                    OFFSET(get<T>, {0xE8, 1, 0, 0})
	CMember(ENiagaraDefaultSortPrecision)              DefaultSortPrecision                                        OFFSET(get<T>, {0xE9, 1, 0, 0})
	CMember(ENiagaraDefaultGpuTranslucentLatency)      DefaultGpuTranslucentLatency                                OFFSET(get<T>, {0xEA, 1, 0, 0})
	DMember(float)                                     DefaultLightInverseExposureBlend                            OFFSET(get<float>, {0xEC, 4, 0, 0})
	CMember(TEnumAsByte<ENDISkelMesh_GpuMaxInfluences>) NDISkelMesh_GpuMaxInfluences                               OFFSET(get<T>, {0xF0, 1, 0, 0})
	CMember(TEnumAsByte<ENDISkelMesh_GpuUniformSamplingFormat>) NDISkelMesh_GpuUniformSamplingFormat               OFFSET(get<T>, {0xF1, 1, 0, 0})
	CMember(TEnumAsByte<ENDISkelMesh_AdjacencyTriangleIndexFormat>) NDISkelMesh_AdjacencyTriangleIndexFormat       OFFSET(get<T>, {0xF2, 1, 0, 0})
	DMember(bool)                                      NDIStaticMesh_AllowDistanceFields                           OFFSET(get<bool>, {0xF3, 1, 0, 0})
	CMember(TArray<TEnumAsByte<ENDICollisionQuery_AsyncGpuTraceProvider>>) NDICollisionQuery_AsyncGpuTraceProviderOrder OFFSET(get<T>, {0xF8, 16, 0, 0})
	SMember(FString)                                   SimCacheAuxiliaryFileBasePath                               OFFSET(getStruct<T>, {0x108, 16, 0, 0})
	DMember(int64_t)                                   SimCacheMaxCPUMemoryVolumetrics                             OFFSET(get<int64_t>, {0x118, 8, 0, 0})
	CMember(TArray<FNiagaraPlatformSetRedirect>)       PlatformSetRedirects                                        OFFSET(get<T>, {0x120, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraSimCacheCustomStorageInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraSimCacheCustomStorageInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Niagara.NiagaraValidationRuleSet
/// Size: 0x0010 (0x000028 - 0x000038)
class UNiagaraValidationRuleSet : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<class UNiagaraValidationRule*>)     ValidationRules                                             OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceActorComponent
/// Size: 0x0040 (0x000038 - 0x000078)
class UNiagaraDataInterfaceActorComponent : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(ENDIActorComponentSourceMode)              SourceMode                                                  OFFSET(get<T>, {0x38, 1, 0, 0})
	DMember(int32_t)                                   LocalPlayerIndex                                            OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	CMember(TLazyObjectPtr<AActor*>)                   SourceActor                                                 OFFSET(get<T>, {0x40, 24, 0, 0})
	SMember(FNiagaraUserParameterBinding)              ActorOrComponentParameter                                   OFFSET(getStruct<T>, {0x58, 24, 0, 0})
	DMember(bool)                                      bRequireCurrentFrameData                                    OFFSET(get<bool>, {0x70, 1, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceAsyncGpuTrace
/// Size: 0x0010 (0x000038 - 0x000048)
class UNiagaraDataInterfaceAsyncGpuTrace : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(int32_t)                                   MaxTracesPerParticle                                        OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   MaxRetraces                                                 OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	CMember(TEnumAsByte<ENDICollisionQuery_AsyncGpuTraceProvider>) TraceProvider                                   OFFSET(get<T>, {0x40, 1, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceConsoleVariable
/// Size: 0x0000 (0x000038 - 0x000038)
class UNiagaraDataInterfaceConsoleVariable : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/Niagara.NiagaraDataInterfaceDebugDraw
/// Size: 0x0008 (0x000038 - 0x000040)
class UNiagaraDataInterfaceDebugDraw : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(uint32_t)                                  OverrideMaxLineInstances                                    OFFSET(get<uint32_t>, {0x38, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceDynamicMesh
/// Size: 0x0070 (0x000038 - 0x0000A8)
class UNiagaraDataInterfaceDynamicMesh : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TArray<FNiagaraDynamicMeshSection>)        Sections                                                    OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FNiagaraDynamicMeshMaterial>)       Materials                                                   OFFSET(get<T>, {0x50, 16, 0, 0})
	DMember(int32_t)                                   NumVertices                                                 OFFSET(get<int32_t>, {0x60, 4, 0, 0})
	DMember(int32_t)                                   NumTexCoords                                                OFFSET(get<int32_t>, {0x64, 4, 0, 0})
	DMember(bool)                                      bHasColors                                                  OFFSET(get<bool>, {0x68, 1, 0, 0})
	DMember(bool)                                      bHasTangentBasis                                            OFFSET(get<bool>, {0x69, 1, 0, 0})
	DMember(bool)                                      bClearTrianglesPerFrame                                     OFFSET(get<bool>, {0x6A, 1, 0, 0})
	SMember(FBox)                                      DefaultBounds                                               OFFSET(getStruct<T>, {0x70, 56, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceEmitterProperties
/// Size: 0x0008 (0x000038 - 0x000040)
class UNiagaraDataInterfaceEmitterProperties : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FNiagaraDataInterfaceEmitterBinding)       EmitterBinding                                              OFFSET(getStruct<T>, {0x38, 8, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceGBuffer
/// Size: 0x0000 (0x000038 - 0x000038)
class UNiagaraDataInterfaceGBuffer : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/Niagara.NiagaraDataInterfacePhysicsAsset
/// Size: 0x0060 (0x000038 - 0x000098)
class UNiagaraDataInterfacePhysicsAsset : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(class UPhysicsAsset*)                      DefaultSource                                               OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   SoftSourceActor                                             OFFSET(get<T>, {0x40, 32, 0, 0})
	SMember(FNiagaraUserParameterBinding)              MeshUserParameter                                           OFFSET(getStruct<T>, {0x60, 24, 0, 0})
};

/// Class /Script/Niagara.NiagaraPhysicsAssetDICollectorInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraPhysicsAssetDICollectorInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Niagara.NiagaraDataInterfaceSceneCapture2D
/// Size: 0x00E8 (0x000038 - 0x000120)
class UNiagaraDataInterfaceSceneCapture2D : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(ENDISceneCapture2DSourceMode)              SourceMode                                                  OFFSET(get<T>, {0x38, 1, 0, 0})
	SMember(FNiagaraUserParameterBinding)              SceneCaptureUserParameter                                   OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	DMember(bool)                                      bAutoMoveWithComponent                                      OFFSET(get<bool>, {0x58, 1, 0, 0})
	CMember(ENDISceneCapture2DOffsetMode)              AutoMoveOffsetLocationMode                                  OFFSET(get<T>, {0x59, 1, 0, 0})
	SMember(FVector)                                   AutoMoveOffsetLocation                                      OFFSET(getStruct<T>, {0x60, 24, 0, 0})
	CMember(ENDISceneCapture2DOffsetMode)              AutoMoveOffsetRotationMode                                  OFFSET(get<T>, {0x78, 1, 0, 0})
	SMember(FRotator)                                  AutoMoveOffsetRotation                                      OFFSET(getStruct<T>, {0x80, 24, 0, 0})
	CMember(TEnumAsByte<ESceneCaptureSource>)          ManagedCaptureSource                                        OFFSET(get<T>, {0x98, 1, 0, 0})
	SMember(FIntPoint)                                 ManagedTextureSize                                          OFFSET(getStruct<T>, {0x9C, 8, 0, 0})
	CMember(TEnumAsByte<ETextureRenderTargetFormat>)   ManagedTextureFormat                                        OFFSET(get<T>, {0xA4, 1, 0, 0})
	CMember(TEnumAsByte<ECameraProjectionMode>)        ManagedProjectionType                                       OFFSET(get<T>, {0xA5, 1, 0, 0})
	DMember(float)                                     ManagedFOVAngle                                             OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     ManagedOrthoWidth                                           OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(bool)                                      bManagedCaptureEveryFrame                                   OFFSET(get<bool>, {0xB0, 1, 0, 0})
	DMember(bool)                                      bManagedCaptureOnMovement                                   OFFSET(get<bool>, {0xB1, 1, 0, 0})
	CMember(TArray<class AActor*>)                     ManagedShowOnlyActors                                       OFFSET(get<T>, {0xB8, 16, 0, 0})
	CMember(TMap<uint64_t, USceneCaptureComponent2D*>) ManagedCaptureComponents                                    OFFSET(get<T>, {0xD0, 80, 0, 0})


	/// Functions
	// Function /Script/Niagara.NiagaraDataInterfaceSceneCapture2D.SetSceneCapture2DManagedShowOnlyActors
	// void SetSceneCapture2DManagedShowOnlyActors(class UNiagaraComponent* NiagaraSystem, FName ParameterName, TArray<AActor*> ShowOnlyActors); // [0x70bc4f0] Final|RequiredAPI|Native|Static|Protected|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataInterfaceSimCacheReader
/// Size: 0x0028 (0x000038 - 0x000060)
class UNiagaraDataInterfaceSimCacheReader : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FNiagaraUserParameterBinding)              SimCacheBinding                                             OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	CMember(class UNiagaraSimCache*)                   SimCache                                                    OFFSET(get<T>, {0x50, 8, 0, 0})
	SMember(FName)                                     EmitterBinding                                              OFFSET(getStruct<T>, {0x58, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceSimpleCounter
/// Size: 0x0008 (0x000038 - 0x000040)
class UNiagaraDataInterfaceSimpleCounter : public UNiagaraDataInterfaceRWBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(ENiagaraGpuSyncMode)                       GpuSyncMode                                                 OFFSET(get<T>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   InitialValue                                                OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceStaticMesh
/// Size: 0x00A0 (0x000038 - 0x0000D8)
class UNiagaraDataInterfaceStaticMesh : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(ENDIStaticMesh_SourceMode)                 SourceMode                                                  OFFSET(get<T>, {0x38, 1, 0, 0})
	CMember(class UStaticMesh*)                        DefaultMesh                                                 OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   SoftSourceActor                                             OFFSET(get<T>, {0x48, 32, 0, 0})
	CMember(class UStaticMeshComponent*)               SourceComponent                                             OFFSET(get<T>, {0x68, 8, 0, 0})
	SMember(FNDIStaticMeshSectionFilter)               SectionFilter                                               OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	DMember(bool)                                      bCaptureTransformsPerFrame                                  OFFSET(get<bool>, {0x80, 1, 0, 0})
	DMember(bool)                                      bUsePhysicsBodyVelocity                                     OFFSET(get<bool>, {0x81, 1, 0, 0})
	DMember(bool)                                      bAllowSamplingFromStreamingLODs                             OFFSET(get<bool>, {0x82, 1, 0, 0})
	DMember(int32_t)                                   LODIndex                                                    OFFSET(get<int32_t>, {0x84, 4, 0, 0})
	SMember(FNiagaraUserParameterBinding)              LODIndexUserParameter                                       OFFSET(getStruct<T>, {0x88, 24, 0, 0})
	SMember(FNiagaraUserParameterBinding)              MeshParameterBinding                                        OFFSET(getStruct<T>, {0xA0, 24, 0, 0})
	DMember(int32_t)                                   InstanceIndex                                               OFFSET(get<int32_t>, {0xB8, 4, 0, 0})
	CMember(TArray<FName>)                             FilteredSockets                                             OFFSET(get<T>, {0xC0, 16, 0, 0})


	/// Functions
	// Function /Script/Niagara.NiagaraDataInterfaceStaticMesh.SetNiagaraStaticMeshDIInstanceIndex
	// void SetNiagaraStaticMeshDIInstanceIndex(class UNiagaraComponent* NiagaraSystem, FName UserParameterName, int32_t NewInstanceIndex); // [0x70bc318] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceStaticMesh.OnSourceEndPlay
	// void OnSourceEndPlay(class AActor* InSource, TEnumAsByte<EEndPlayReason> Reason);                                        // [0x2e85924] Final|RequiredAPI|Native|Protected 
};

/// Class /Script/Niagara.NiagaraDataInterfaceUObjectPropertyReader
/// Size: 0x0060 (0x000038 - 0x000098)
class UNiagaraDataInterfaceUObjectPropertyReader : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(ENDIObjectPropertyReaderSourceMode)        SourceMode                                                  OFFSET(get<T>, {0x38, 1, 0, 0})
	SMember(FNiagaraUserParameterBinding)              UObjectParameterBinding                                     OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	CMember(TArray<FNiagaraUObjectPropertyReaderRemap>) PropertyRemap                                              OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   SourceActor                                                 OFFSET(get<T>, {0x68, 32, 0, 0})
	CMember(class UClass*)                             SourceActorComponentClass                                   OFFSET(get<T>, {0x88, 8, 0, 0})


	/// Functions
	// Function /Script/Niagara.NiagaraDataInterfaceUObjectPropertyReader.SetUObjectReaderPropertyRemap
	// void SetUObjectReaderPropertyRemap(class UNiagaraComponent* NiagaraComponent, FName UserParameterName, FName GraphName, FName RemapName); // [0x70bc780] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataInterfaceVirtualTexture
/// Size: 0x0020 (0x000038 - 0x000058)
class UNiagaraDataInterfaceVirtualTexture : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(class URuntimeVirtualTexture*)             Texture                                                     OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FNiagaraUserParameterBinding)              TextureUserParameter                                        OFFSET(getStruct<T>, {0x40, 24, 0, 0})
};

/// Class /Script/Niagara.MovieSceneNiagaraSystemSpawnSection
/// Size: 0x0010 (0x0000F0 - 0x000100)
class UMovieSceneNiagaraSystemSpawnSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	CMember(ENiagaraSystemSpawnSectionStartBehavior)   SectionStartBehavior                                        OFFSET(get<T>, {0xF0, 4, 0, 0})
	CMember(ENiagaraSystemSpawnSectionEvaluateBehavior) SectionEvaluateBehavior                                    OFFSET(get<T>, {0xF4, 4, 0, 0})
	CMember(ENiagaraSystemSpawnSectionEndBehavior)     SectionEndBehavior                                          OFFSET(get<T>, {0xF8, 4, 0, 0})
	CMember(ENiagaraAgeUpdateMode)                     AgeUpdateMode                                               OFFSET(get<T>, {0xFC, 1, 0, 0})
	DMember(bool)                                      bAllowScalability                                           OFFSET(get<bool>, {0xFD, 1, 0, 0})
};

/// Class /Script/Niagara.MovieSceneNiagaraTrack
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UMovieSceneNiagaraTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TArray<class UMovieSceneSection*>)         Sections                                                    OFFSET(get<T>, {0x98, 16, 0, 0})
};

/// Class /Script/Niagara.MovieSceneNiagaraSystemTrack
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UMovieSceneNiagaraSystemTrack : public UMovieSceneNiagaraTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/Niagara.MovieSceneNiagaraParameterTrack
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UMovieSceneNiagaraParameterTrack : public UMovieSceneNiagaraTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FNiagaraVariable)                          Parameter                                                   OFFSET(getStruct<T>, {0xA8, 24, 0, 0})
};

/// Class /Script/Niagara.MovieSceneNiagaraBoolParameterTrack
/// Size: 0x0008 (0x0000C0 - 0x0000C8)
class UMovieSceneNiagaraBoolParameterTrack : public UMovieSceneNiagaraParameterTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Class /Script/Niagara.MovieSceneNiagaraColorParameterTrack
/// Size: 0x0008 (0x0000C0 - 0x0000C8)
class UMovieSceneNiagaraColorParameterTrack : public UMovieSceneNiagaraParameterTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Class /Script/Niagara.MovieSceneNiagaraFloatParameterTrack
/// Size: 0x0008 (0x0000C0 - 0x0000C8)
class UMovieSceneNiagaraFloatParameterTrack : public UMovieSceneNiagaraParameterTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Class /Script/Niagara.MovieSceneNiagaraIntegerParameterTrack
/// Size: 0x0008 (0x0000C0 - 0x0000C8)
class UMovieSceneNiagaraIntegerParameterTrack : public UMovieSceneNiagaraParameterTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Class /Script/Niagara.MovieSceneNiagaraVectorParameterTrack
/// Size: 0x0010 (0x0000C0 - 0x0000D0)
class UMovieSceneNiagaraVectorParameterTrack : public UMovieSceneNiagaraParameterTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	DMember(int32_t)                                   ChannelsUsed                                                OFFSET(get<int32_t>, {0xC8, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraActor
/// Size: 0x0010 (0x000290 - 0x0002A0)
class ANiagaraActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	CMember(class UNiagaraComponent*)                  NiagaraComponent                                            OFFSET(get<T>, {0x290, 8, 0, 0})
	DMember(bool)                                      bDestroyOnSystemFinish                                      OFFSET(get<bool>, {0x298, 1, 1, 0})


	/// Functions
	// Function /Script/Niagara.NiagaraActor.SetDestroyOnSystemFinish
	// void SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish);                                                        // [0x70d75c0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraActor.OnNiagaraSystemFinished
	// void OnNiagaraSystemFinished(class UNiagaraComponent* FinishedComponent);                                                // [0x2ec59c8] Final|RequiredAPI|Native|Private 
	// Function /Script/Niagara.NiagaraActor.GetDestroyOnSystemFinish
	// bool GetDestroyOnSystemFinish();                                                                                         // [0x70d6e04] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Niagara.NiagaraBakerOutput
/// Size: 0x0010 (0x000028 - 0x000038)
class UNiagaraBakerOutput : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   OutputName                                                  OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraBakerOutputSimCache
/// Size: 0x0068 (0x000038 - 0x0000A0)
class UNiagaraBakerOutputSimCache : public UNiagaraBakerOutput
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FString)                                   SimCacheAssetPathFormat                                     OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FNiagaraSimCacheCreateParameters)          CreateParameters                                            OFFSET(getStruct<T>, {0x48, 88, 0, 0})
};

/// Class /Script/Niagara.NiagaraBakerOutputSparseVolumeTexture
/// Size: 0x0028 (0x000038 - 0x000060)
class UNiagaraBakerOutputSparseVolumeTexture : public UNiagaraBakerOutput
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FNiagaraBakerTextureSource)                SourceBinding                                               OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	SMember(FString)                                   SparseVolumeTextureAssetPathFormat                          OFFSET(getStruct<T>, {0x50, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraBakerOutputTexture2D
/// Size: 0x0068 (0x000038 - 0x0000A0)
class UNiagaraBakerOutputTexture2D : public UNiagaraBakerOutput
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FNiagaraBakerTextureSource)                SourceBinding                                               OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	DMember(bool)                                      bGenerateAtlas                                              OFFSET(get<bool>, {0x50, 1, 1, 0})
	DMember(bool)                                      bGenerateFrames                                             OFFSET(get<bool>, {0x50, 1, 1, 1})
	DMember(bool)                                      bExportFrames                                               OFFSET(get<bool>, {0x50, 1, 1, 2})
	DMember(bool)                                      bSetTextureAddressX                                         OFFSET(get<bool>, {0x50, 1, 1, 3})
	DMember(bool)                                      bSetTextureAddressY                                         OFFSET(get<bool>, {0x50, 1, 1, 4})
	SMember(FIntPoint)                                 FrameSize                                                   OFFSET(getStruct<T>, {0x54, 8, 0, 0})
	SMember(FIntPoint)                                 AtlasTextureSize                                            OFFSET(getStruct<T>, {0x5C, 8, 0, 0})
	CMember(TEnumAsByte<TextureAddress>)               TextureAddressX                                             OFFSET(get<T>, {0x6C, 1, 0, 0})
	CMember(TEnumAsByte<TextureAddress>)               TextureAddressY                                             OFFSET(get<T>, {0x6D, 1, 0, 0})
	SMember(FString)                                   AtlasAssetPathFormat                                        OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	SMember(FString)                                   FramesAssetPathFormat                                       OFFSET(getStruct<T>, {0x80, 16, 0, 0})
	SMember(FString)                                   FramesExportPathFormat                                      OFFSET(getStruct<T>, {0x90, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraBakerOutputVolumeTexture
/// Size: 0x0050 (0x000038 - 0x000088)
class UNiagaraBakerOutputVolumeTexture : public UNiagaraBakerOutput
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FNiagaraBakerTextureSource)                SourceBinding                                               OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	DMember(bool)                                      bGenerateAtlas                                              OFFSET(get<bool>, {0x50, 1, 1, 0})
	DMember(bool)                                      bGenerateFrames                                             OFFSET(get<bool>, {0x50, 1, 1, 1})
	DMember(bool)                                      bExportFrames                                               OFFSET(get<bool>, {0x50, 1, 1, 2})
	SMember(FString)                                   AtlasAssetPathFormat                                        OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	SMember(FString)                                   FramesAssetPathFormat                                       OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	SMember(FString)                                   FramesExportPathFormat                                      OFFSET(getStruct<T>, {0x78, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraBakerSettings
/// Size: 0x01C8 (0x000028 - 0x0001F0)
class UNiagaraBakerSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	DMember(float)                                     StartSeconds                                                OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     DurationSeconds                                             OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   FramesPerSecond                                             OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(bool)                                      bLockToSimulationFrameRate                                  OFFSET(get<bool>, {0x34, 1, 1, 0})
	DMember(bool)                                      bPreviewLooping                                             OFFSET(get<bool>, {0x34, 1, 1, 1})
	SMember(FIntPoint)                                 FramesPerDimension                                          OFFSET(getStruct<T>, {0x38, 8, 0, 0})
	CMember(TArray<class UNiagaraBakerOutput*>)        Outputs                                                     OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FNiagaraBakerCameraSettings>)       CameraSettings                                              OFFSET(get<T>, {0x50, 16, 0, 0})
	DMember(int32_t)                                   CurrentCameraIndex                                          OFFSET(get<int32_t>, {0x60, 4, 0, 0})
	SMember(FName)                                     BakeQualityLevel                                            OFFSET(getStruct<T>, {0x64, 4, 0, 0})
	DMember(bool)                                      bRenderComponentOnly                                        OFFSET(get<bool>, {0x68, 1, 1, 0})
	CMember(TArray<FNiagaraBakerTextureSettings>)      OutputTextures                                              OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(ENiagaraBakerViewMode)                     CameraViewportMode                                          OFFSET(get<T>, {0x80, 4, 0, 0})
	SMember(FVector)                                   CameraViewportLocation                                      OFFSET(getStruct<T>, {0x88, 168, 0, 0})
	SMember(FRotator)                                  CameraViewportRotation                                      OFFSET(getStruct<T>, {0x130, 168, 0, 0})
	DMember(float)                                     CameraOrbitDistance                                         OFFSET(get<float>, {0x1D8, 4, 0, 0})
	DMember(float)                                     CameraFOV                                                   OFFSET(get<float>, {0x1DC, 4, 0, 0})
	DMember(float)                                     CameraOrthoWidth                                            OFFSET(get<float>, {0x1E0, 4, 0, 0})
	DMember(bool)                                      bUseCameraAspectRatio                                       OFFSET(get<bool>, {0x1E4, 1, 1, 0})
	DMember(float)                                     CameraAspectRatio                                           OFFSET(get<float>, {0x1E8, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraComponent
/// Size: 0x0260 (0x000500 - 0x000760)
class UNiagaraComponent : public UFXSystemComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1888;

public:
	CMember(class UNiagaraSystem*)                     Asset                                                       OFFSET(get<T>, {0x500, 8, 0, 0})
	CMember(ENiagaraTickBehavior)                      TickBehavior                                                OFFSET(get<T>, {0x508, 1, 0, 0})
	DMember(int32_t)                                   RandomSeedOffset                                            OFFSET(get<int32_t>, {0x50C, 4, 0, 0})
	SMember(FNiagaraUserRedirectionParameterStore)     OverrideParameters                                          OFFSET(getStruct<T>, {0x510, 216, 0, 0})
	DMember(bool)                                      bForceSolo                                                  OFFSET(get<bool>, {0x5E8, 1, 1, 0})
	DMember(bool)                                      bEnableGpuComputeDebug                                      OFFSET(get<bool>, {0x5E8, 1, 1, 1})
	DMember(bool)                                      bOverrideWarmupSettings                                     OFFSET(get<bool>, {0x5E8, 1, 1, 2})
	DMember(int32_t)                                   WarmupTickCount                                             OFFSET(get<int32_t>, {0x5EC, 4, 0, 0})
	DMember(float)                                     WarmupTickDelta                                             OFFSET(get<float>, {0x5F0, 4, 0, 0})
	DMember(bool)                                      bAutoDestroy                                                OFFSET(get<bool>, {0x628, 1, 1, 0})
	DMember(bool)                                      bRenderingEnabled                                           OFFSET(get<bool>, {0x628, 1, 1, 1})
	DMember(bool)                                      bAutoManageAttachment                                       OFFSET(get<bool>, {0x628, 1, 1, 2})
	DMember(bool)                                      bAutoAttachWeldSimulatedBodies                              OFFSET(get<bool>, {0x628, 1, 1, 3})
	DMember(float)                                     MaxTimeBeforeForceUpdateTransform                           OFFSET(get<float>, {0x62C, 4, 0, 0})
	CMember(ENiagaraOcclusionQueryMode)                OcclusionQueryMode                                          OFFSET(get<T>, {0x631, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSystemFinished                                            OFFSET(getStruct<T>, {0x638, 16, 0, 0})
	CMember(TWeakObjectPtr<USceneComponent*>)          AutoAttachParent                                            OFFSET(get<T>, {0x648, 8, 0, 0})
	SMember(FName)                                     AutoAttachSocketName                                        OFFSET(getStruct<T>, {0x650, 4, 0, 0})
	CMember(EAttachmentRule)                           AutoAttachLocationRule                                      OFFSET(get<T>, {0x654, 1, 0, 0})
	CMember(EAttachmentRule)                           AutoAttachRotationRule                                      OFFSET(get<T>, {0x655, 1, 0, 0})
	CMember(EAttachmentRule)                           AutoAttachScaleRule                                         OFFSET(get<T>, {0x656, 1, 0, 0})
	DMember(bool)                                      bAllowScalability                                           OFFSET(get<bool>, {0x660, 1, 1, 4})
	CMember(class UNiagaraSimCache*)                   SimCache                                                    OFFSET(get<T>, {0x750, 8, 0, 0})
	CMember(class UNiagaraCullProxyComponent*)         CullProxy                                                   OFFSET(get<T>, {0x758, 8, 0, 0})


	/// Functions
	// Function /Script/Niagara.NiagaraComponent.SetVariableVec4
	// void SetVariableVec4(FName InVariableName, FVector4& InValue);                                                           // [0x70ddf10] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableVec3
	// void SetVariableVec3(FName InVariableName, FVector InValue);                                                             // [0x1d035cc] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableVec2
	// void SetVariableVec2(FName InVariableName, FVector2D InValue);                                                           // [0x70dddc0] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableTextureRenderTarget
	// void SetVariableTextureRenderTarget(FName InVariableName, class UTextureRenderTarget* TextureRenderTarget);              // [0x70ddc84] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableTexture
	// void SetVariableTexture(FName InVariableName, class UTexture* Texture);                                                  // [0x70ddb48] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableStaticMesh
	// void SetVariableStaticMesh(FName InVariableName, class UStaticMesh* InValue);                                            // [0x2faf9f8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableQuat
	// void SetVariableQuat(FName InVariableName, FQuat& InValue);                                                              // [0x70dda38] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariablePosition
	// void SetVariablePosition(FName InVariableName, FVector InValue);                                                         // [0x70dd8dc] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableObject
	// void SetVariableObject(FName InVariableName, class UObject* Object);                                                     // [0x2eb0bac] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableMatrix
	// void SetVariableMatrix(FName InVariableName, FMatrix& InValue);                                                          // [0x70dd7b0] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableMaterial
	// void SetVariableMaterial(FName InVariableName, class UMaterialInterface* Object);                                        // [0x2df45d0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableLinearColor
	// void SetVariableLinearColor(FName InVariableName, FLinearColor& InValue);                                                // [0x1819ff4] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableInt
	// void SetVariableInt(FName InVariableName, int32_t InValue);                                                              // [0x1d042a4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableFloat
	// void SetVariableFloat(FName InVariableName, float InValue);                                                              // [0x288b500] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableBool
	// void SetVariableBool(FName InVariableName, bool InValue);                                                                // [0x28936a0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableActor
	// void SetVariableActor(FName InVariableName, class AActor* Actor);                                                        // [0x70dd674] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetTickBehavior
	// void SetTickBehavior(ENiagaraTickBehavior NewTickBehavior);                                                              // [0x70dd5b4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetSystemFixedBounds
	// void SetSystemFixedBounds(FBox LocalBounds);                                                                             // [0x70dd4c0] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetSimCache
	// void SetSimCache(class UNiagaraSimCache* SimCache, bool bResetSystem);                                                   // [0x70dd380] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetSeekDelta
	// void SetSeekDelta(float InSeekDelta);                                                                                    // [0x70dd2bc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetRenderingEnabled
	// void SetRenderingEnabled(bool bInRenderingEnabled);                                                                      // [0x70dd1ec] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetRandomSeedOffset
	// void SetRandomSeedOffset(int32_t NewRandomSeedOffset);                                                                   // [0x70dd120] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetPreviewLODDistance
	// void SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance, float PreviewMaxDistance);          // [0x70dcf5c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetPaused
	// void SetPaused(bool bInPaused);                                                                                          // [0x70dce98] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetOcclusionQueryMode
	// void SetOcclusionQueryMode(ENiagaraOcclusionQueryMode Mode);                                                             // [0x70dcdc8] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableVec4
	// void SetNiagaraVariableVec4(FString InVariableName, FVector4& InValue);                                                  // [0x70dc68c] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableVec3
	// void SetNiagaraVariableVec3(FString InVariableName, FVector InValue);                                                    // [0x70dbeec] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableVec2
	// void SetNiagaraVariableVec2(FString InVariableName, FVector2D InValue);                                                  // [0x70db75c] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableQuat
	// void SetNiagaraVariableQuat(FString InVariableName, FQuat& InValue);                                                     // [0x70db010] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariablePosition
	// void SetNiagaraVariablePosition(FString InVariableName, FVector InValue);                                                // [0x70da870] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableObject
	// void SetNiagaraVariableObject(FString InVariableName, class UObject* Object);                                            // [0x2eb0cf4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableMatrix
	// void SetNiagaraVariableMatrix(FString InVariableName, FMatrix& InValue);                                                 // [0x70da100] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableLinearColor
	// void SetNiagaraVariableLinearColor(FString InVariableName, FLinearColor& InValue);                                       // [0x70d99b8] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableInt
	// void SetNiagaraVariableInt(FString InVariableName, int32_t InValue);                                                     // [0x70d923c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableFloat
	// void SetNiagaraVariableFloat(FString InVariableName, float InValue);                                                     // [0x70d8ae0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableBool
	// void SetNiagaraVariableBool(FString InVariableName, bool InValue);                                                       // [0x70d8360] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableActor
	// void SetNiagaraVariableActor(FString InVariableName, class AActor* Actor);                                               // [0x70d7be4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetMaxSimTime
	// void SetMaxSimTime(float InMaxTime);                                                                                     // [0x70d7b20] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetLockDesiredAgeDeltaTimeToSeekDelta
	// void SetLockDesiredAgeDeltaTimeToSeekDelta(bool bLock);                                                                  // [0x70d7a60] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetGpuComputeDebug
	// void SetGpuComputeDebug(bool bEnableDebug);                                                                              // [0x70d7984] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetForceSolo
	// void SetForceSolo(bool bInForceSolo);                                                                                    // [0x70d78c0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetForceLocalPlayerEffect
	// void SetForceLocalPlayerEffect(bool bIsPlayerEffect);                                                                    // [0x70d77fc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetEmitterFixedBounds
	// void SetEmitterFixedBounds(FName EmitterName, FBox LocalBounds);                                                         // [0x70d768c] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetDesiredAge
	// void SetDesiredAge(float InDesiredAge);                                                                                  // [0x70d7500] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetCustomTimeDilation
	// void SetCustomTimeDilation(float Dilation);                                                                              // [0x2e983f8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetCanRenderWhileSeeking
	// void SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking);                                                            // [0x70d7440] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetAutoDestroy
	// void SetAutoDestroy(bool bInAutoDestroy);                                                                                // [0x70d7380] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetAsset
	// void SetAsset(class UNiagaraSystem* InAsset, bool bResetExistingOverrideParameters);                                     // [0x295e498] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetAllowScalability
	// void SetAllowScalability(bool bAllow);                                                                                   // [0x70d72bc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetAgeUpdateMode
	// void SetAgeUpdateMode(ENiagaraAgeUpdateMode InAgeUpdateMode);                                                            // [0x70d71fc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SeekToDesiredAge
	// void SeekToDesiredAge(float InDesiredAge);                                                                               // [0x70d7134] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.ResetSystem
	// void ResetSystem();                                                                                                      // [0x70d7120] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.ReinitializeSystem
	// void ReinitializeSystem();                                                                                               // [0x70d710c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.IsPaused
	// bool IsPaused();                                                                                                         // [0x70d70f0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.InitForPerformanceBaseline
	// void InitForPerformanceBaseline();                                                                                       // [0x70d70b4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.GetTickBehavior
	// ENiagaraTickBehavior GetTickBehavior();                                                                                  // [0x70d709c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetSystemFixedBounds
	// FBox GetSystemFixedBounds();                                                                                             // [0x70d705c] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetSimCache
	// class UNiagaraSimCache* GetSimCache();                                                                                   // [0x70d7044] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetSeekDelta
	// float GetSeekDelta();                                                                                                    // [0x70d702c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetRandomSeedOffset
	// int32_t GetRandomSeedOffset();                                                                                           // [0x70d7014] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetPreviewLODDistanceEnabled
	// bool GetPreviewLODDistanceEnabled();                                                                                     // [0x70d6ff8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetPreviewLODDistance
	// float GetPreviewLODDistance();                                                                                           // [0x70d6fcc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetOcclusionQueryMode
	// ENiagaraOcclusionQueryMode GetOcclusionQueryMode();                                                                      // [0x70d6fb4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetMaxSimTime
	// float GetMaxSimTime();                                                                                                   // [0x70d6f9c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetLockDesiredAgeDeltaTimeToSeekDelta
	// bool GetLockDesiredAgeDeltaTimeToSeekDelta();                                                                            // [0x70d6f84] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetForceSolo
	// bool GetForceSolo();                                                                                                     // [0x70d6f68] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetForceLocalPlayerEffect
	// bool GetForceLocalPlayerEffect();                                                                                        // [0x70d6f4c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetEmitterFixedBounds
	// FBox GetEmitterFixedBounds(FName EmitterName);                                                                           // [0x70d6e20] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetDesiredAge
	// float GetDesiredAge();                                                                                                   // [0x70d6dec] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetDataInterface
	// class UNiagaraDataInterface* GetDataInterface(FString Name);                                                             // [0x70d66ec] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.GetCustomTimeDilation
	// float GetCustomTimeDilation();                                                                                           // [0x70d66d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetAsset
	// class UNiagaraSystem* GetAsset();                                                                                        // [0x2d73ddc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetAllowScalability
	// bool GetAllowScalability();                                                                                              // [0x70d66b8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetAgeUpdateMode
	// ENiagaraAgeUpdateMode GetAgeUpdateMode();                                                                                // [0x388d0fc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.ClearSystemFixedBounds
	// void ClearSystemFixedBounds();                                                                                           // [0x70d66a4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.ClearSimCache
	// void ClearSimCache(bool bResetSystem);                                                                                   // [0x70d65e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.ClearEmitterFixedBounds
	// void ClearEmitterFixedBounds(FName EmitterName);                                                                         // [0x70d6520] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.AdvanceSimulationByTime
	// void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds);                                                // [0x70d63e0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.AdvanceSimulation
	// void AdvanceSimulation(int32_t TickCount, float TickDeltaSeconds);                                                       // [0x70d62a4] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraComponentPool
/// Size: 0x0058 (0x000028 - 0x000080)
class UNiagaraComponentPool : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TMap<UNiagaraSystem*, FNCPool>)            WorldParticleSystemPools                                    OFFSET(get<T>, {0x28, 80, 0, 0})
};

/// Class /Script/Niagara.NiagaraRendererProperties
/// Size: 0x0088 (0x000028 - 0x0000B0)
class UNiagaraRendererProperties : public UNiagaraMergeable
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FNiagaraPlatformSet)                       Platforms                                                   OFFSET(getStruct<T>, {0x28, 48, 0, 0})
	DMember(int32_t)                                   SortOrderHint                                               OFFSET(get<int32_t>, {0x58, 4, 0, 0})
	CMember(ENiagaraRendererMotionVectorSetting)       MotionVectorSetting                                         OFFSET(get<T>, {0x5C, 4, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RendererEnabledBinding                                      OFFSET(getStruct<T>, {0x60, 40, 0, 0})
	DMember(bool)                                      bIsEnabled                                                  OFFSET(get<bool>, {0x88, 1, 0, 0})
	DMember(bool)                                      bAllowInCullProxies                                         OFFSET(get<bool>, {0x89, 1, 0, 0})
	SMember(FGuid)                                     OuterEmitterVersion                                         OFFSET(getStruct<T>, {0x8C, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraComponentRendererProperties
/// Size: 0x00D8 (0x0000B0 - 0x000188)
class UNiagaraComponentRendererProperties : public UNiagaraRendererProperties
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
	CMember(class UClass*)                             ComponentType                                               OFFSET(get<T>, {0xB0, 8, 0, 0})
	DMember(uint32_t)                                  ComponentCountLimit                                         OFFSET(get<uint32_t>, {0xB8, 4, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          EnabledBinding                                              OFFSET(getStruct<T>, {0xC0, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RendererVisibilityTagBinding                                OFFSET(getStruct<T>, {0xE8, 40, 0, 0})
	DMember(bool)                                      bAssignComponentsOnParticleID                               OFFSET(get<bool>, {0x110, 1, 0, 0})
	DMember(bool)                                      bCreateComponentFirstParticleFrame                          OFFSET(get<bool>, {0x111, 1, 0, 0})
	DMember(bool)                                      bOnlyActivateNewlyAquiredComponents                         OFFSET(get<bool>, {0x112, 1, 0, 0})
	DMember(int32_t)                                   RendererVisibility                                          OFFSET(get<int32_t>, {0x114, 4, 0, 0})
	CMember(class USceneComponent*)                    TemplateComponent                                           OFFSET(get<T>, {0x118, 8, 0, 0})
	CMember(TArray<FNiagaraComponentPropertyBinding>)  PropertyBindings                                            OFFSET(get<T>, {0x120, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraCullProxyComponent
/// Size: 0x0010 (0x000760 - 0x000770)
class UNiagaraCullProxyComponent : public UNiagaraComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1904;

public:
	CMember(TArray<FNiagaraCulledComponentInfo>)       Instances                                                   OFFSET(get<T>, {0x760, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataChannelLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraDataChannelLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Niagara.NiagaraDataChannelLibrary.WriteToNiagaraDataChannel
	// class UNiagaraDataChannelWriter* WriteToNiagaraDataChannel(class UObject* WorldContextObject, class UNiagaraDataChannelAsset* Channel, FNiagaraDataChannelSearchParameters SearchParams, int32_t Count, bool bVisibleToGame, bool bVisibleToCPU, bool bVisibleToGPU); // [0x711e614] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataChannelLibrary.ReadFromNiagaraDataChannel
	// class UNiagaraDataChannelReader* ReadFromNiagaraDataChannel(class UObject* WorldContextObject, class UNiagaraDataChannelAsset* Channel, FNiagaraDataChannelSearchParameters SearchParams, bool bReadPreviousFrame); // [0x711b114] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataChannelLibrary.GetNiagaraDataChannel
	// class UNiagaraDataChannelHandler* GetNiagaraDataChannel(class UObject* WorldContextObject, class UNiagaraDataChannelAsset* Channel); // [0x711afa4] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataInterface2DArrayTexture
/// Size: 0x0020 (0x000038 - 0x000058)
class UNiagaraDataInterface2DArrayTexture : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(class UTexture*)                           Texture                                                     OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FNiagaraUserParameterBinding)              TextureUserParameter                                        OFFSET(getStruct<T>, {0x40, 24, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceArray
/// Size: 0x0010 (0x000038 - 0x000048)
class UNiagaraDataInterfaceArray : public UNiagaraDataInterfaceRWBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(ENiagaraGpuSyncMode)                       GpuSyncMode                                                 OFFSET(get<T>, {0x40, 4, 0, 0})
	DMember(int32_t)                                   MaxElements                                                 OFFSET(get<int32_t>, {0x44, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFloat
/// Size: 0x0010 (0x000048 - 0x000058)
class UNiagaraDataInterfaceArrayFloat : public UNiagaraDataInterfaceArray
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<float>)                             FloatData                                                   OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFloat2
/// Size: 0x0010 (0x000048 - 0x000058)
class UNiagaraDataInterfaceArrayFloat2 : public UNiagaraDataInterfaceArray
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<FVector2f>)                         InternalFloatData                                           OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFloat3
/// Size: 0x0010 (0x000048 - 0x000058)
class UNiagaraDataInterfaceArrayFloat3 : public UNiagaraDataInterfaceArray
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<FVector3f>)                         InternalFloatData                                           OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayPosition
/// Size: 0x0010 (0x000048 - 0x000058)
class UNiagaraDataInterfaceArrayPosition : public UNiagaraDataInterfaceArray
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<FNiagaraPosition>)                  PositionData                                                OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFloat4
/// Size: 0x0010 (0x000048 - 0x000058)
class UNiagaraDataInterfaceArrayFloat4 : public UNiagaraDataInterfaceArray
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<FVector4f>)                         InternalFloatData                                           OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayColor
/// Size: 0x0010 (0x000048 - 0x000058)
class UNiagaraDataInterfaceArrayColor : public UNiagaraDataInterfaceArray
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<FLinearColor>)                      ColorData                                                   OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayQuat
/// Size: 0x0010 (0x000048 - 0x000058)
class UNiagaraDataInterfaceArrayQuat : public UNiagaraDataInterfaceArray
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<FQuat4f>)                           InternalQuatData                                            OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayMatrix
/// Size: 0x0010 (0x000048 - 0x000058)
class UNiagaraDataInterfaceArrayMatrix : public UNiagaraDataInterfaceArray
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<FMatrix44f>)                        InternalMatrixData                                          OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraDataInterfaceArrayFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVectorValue
	// void SetNiagaraArrayVectorValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, FVector& Value, bool bSizeToFit); // [0x711e34c] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4Value
	// void SetNiagaraArrayVector4Value(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, FVector4& Value, bool bSizeToFit); // [0x711df28] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4
	// void SetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FVector4>& ArrayData);    // [0x1503fb4] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2DValue
	// void SetNiagaraArrayVector2DValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, FVector2D& Value, bool bSizeToFit); // [0x711dca0] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2D
	// void SetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FVector2D>& ArrayData);  // [0x711daf0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector
	// void SetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FVector>& ArrayData);      // [0x711e1c4] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayUInt8Value
	// void SetNiagaraArrayUInt8Value(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, int32_t Value, bool bSizeToFit); // [0x711d82c] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayUInt8
	// void SetNiagaraArrayUInt8(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<int32_t>& ArrayData);       // [0x711d67c] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuatValue
	// void SetNiagaraArrayQuatValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, FQuat& Value, bool bSizeToFit); // [0x711d378] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuat
	// void SetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FQuat>& ArrayData);          // [0x711d1c8] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayPositionValue
	// void SetNiagaraArrayPositionValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, FVector& Value, bool bSizeToFit); // [0x711cf14] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayPosition
	// void SetNiagaraArrayPosition(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FVector>& ArrayData);    // [0x711cd8c] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayMatrixValue
	// void SetNiagaraArrayMatrixValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, FMatrix& Value, bool bSizeToFit, bool bApplyLWCRebase); // [0x711ca20] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayMatrix
	// void SetNiagaraArrayMatrix(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FMatrix>& ArrayData, bool bApplyLWCRebase); // [0x711c794] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32Value
	// void SetNiagaraArrayInt32Value(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, int32_t Value, bool bSizeToFit); // [0x711c4d0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32
	// void SetNiagaraArrayInt32(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<int32_t>& ArrayData);       // [0x711c348] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloatValue
	// void SetNiagaraArrayFloatValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, float Value, bool bSizeToFit); // [0x711c080] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloat
	// void SetNiagaraArrayFloat(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<float>& ArrayData);         // [0x711beac] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColorValue
	// void SetNiagaraArrayColorValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, FLinearColor& Value, bool bSizeToFit); // [0x711bc24] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColor
	// void SetNiagaraArrayColor(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FLinearColor>& ArrayData);  // [0x711ba74] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBoolValue
	// void SetNiagaraArrayBoolValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, bool& Value, bool bSizeToFit); // [0x711b7e8] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBool
	// void SetNiagaraArrayBool(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<bool>& ArrayData);           // [0x711b660] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVectorValue
	// FVector GetNiagaraArrayVectorValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index);           // [0x711adcc] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4Value
	// FVector4 GetNiagaraArrayVector4Value(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index);         // [0x711aa78] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4
	// TArray<FVector4> GetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                     // [0x711a904] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2DValue
	// FVector2D GetNiagaraArrayVector2DValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index);       // [0x711a738] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2D
	// TArray<FVector2D> GetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                   // [0x711a5c4] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector
	// TArray<FVector> GetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                       // [0x711ac58] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayUInt8Value
	// int32_t GetNiagaraArrayUInt8Value(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index);            // [0x711a39c] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayUInt8
	// TArray<int32_t> GetNiagaraArrayUInt8(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                        // [0x711a228] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuatValue
	// FQuat GetNiagaraArrayQuatValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index);               // [0x711a054] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuat
	// TArray<FQuat> GetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                           // [0x7119ee0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayPositionValue
	// FVector GetNiagaraArrayPositionValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index);         // [0x7119cd8] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayPosition
	// TArray<FVector> GetNiagaraArrayPosition(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                     // [0x7119b74] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayMatrixValue
	// FMatrix GetNiagaraArrayMatrixValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, bool bApplyLWCRebase); // [0x71198d0] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayMatrix
	// TArray<FMatrix> GetNiagaraArrayMatrix(class UNiagaraComponent* NiagaraSystem, FName OverrideName, bool bApplyLWCRebase); // [0x71196d0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32Value
	// int32_t GetNiagaraArrayInt32Value(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index);            // [0x7119518] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32
	// TArray<int32_t> GetNiagaraArrayInt32(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                        // [0x71193a4] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloatValue
	// float GetNiagaraArrayFloatValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index);              // [0x71191dc] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloat
	// TArray<float> GetNiagaraArrayFloat(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                          // [0x7119068] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColorValue
	// FLinearColor GetNiagaraArrayColorValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index);       // [0x7118e9c] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColor
	// TArray<FLinearColor> GetNiagaraArrayColor(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                   // [0x7118d28] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBoolValue
	// bool GetNiagaraArrayBoolValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index);                // [0x7118b70] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBool
	// TArray<bool> GetNiagaraArrayBool(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                            // [0x71189fc] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayInt32
/// Size: 0x0010 (0x000048 - 0x000058)
class UNiagaraDataInterfaceArrayInt32 : public UNiagaraDataInterfaceArray
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<int32_t>)                           IntData                                                     OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayUInt8
/// Size: 0x0010 (0x000048 - 0x000058)
class UNiagaraDataInterfaceArrayUInt8 : public UNiagaraDataInterfaceArray
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<char>)                              InternalIntData                                             OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayBool
/// Size: 0x0010 (0x000048 - 0x000058)
class UNiagaraDataInterfaceArrayBool : public UNiagaraDataInterfaceArray
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<bool>)                              BoolData                                                    OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayNiagaraID
/// Size: 0x0010 (0x000048 - 0x000058)
class UNiagaraDataInterfaceArrayNiagaraID : public UNiagaraDataInterfaceArray
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<FNiagaraID>)                        IntData                                                     OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioSubmix
/// Size: 0x0008 (0x000038 - 0x000040)
class UNiagaraDataInterfaceAudioSubmix : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class USoundSubmix*)                       Submix                                                      OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioOscilloscope
/// Size: 0x0010 (0x000038 - 0x000048)
class UNiagaraDataInterfaceAudioOscilloscope : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(class USoundSubmix*)                       Submix                                                      OFFSET(get<T>, {0x38, 8, 0, 0})
	DMember(int32_t)                                   Resolution                                                  OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(float)                                     ScopeInMilliseconds                                         OFFSET(get<float>, {0x44, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioPlayerSettings
/// Size: 0x03E8 (0x000028 - 0x000410)
class UNiagaraDataInterfaceAudioPlayerSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1040;

public:
	DMember(bool)                                      bOverrideConcurrency                                        OFFSET(get<bool>, {0x28, 1, 0, 0})
	CMember(class USoundConcurrency*)                  Concurrency                                                 OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(bool)                                      bOverrideAttenuationSettings                                OFFSET(get<bool>, {0x38, 1, 0, 0})
	SMember(FSoundAttenuationSettings)                 AttenuationSettings                                         OFFSET(getStruct<T>, {0x40, 976, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioPlayer
/// Size: 0x0050 (0x000038 - 0x000088)
class UNiagaraDataInterfaceAudioPlayer : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(class USoundBase*)                         SoundToPlay                                                 OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(class USoundAttenuation*)                  Attenuation                                                 OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(class USoundConcurrency*)                  Concurrency                                                 OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(TArray<FName>)                             ParameterNames                                              OFFSET(get<T>, {0x50, 16, 0, 0})
	SMember(FNiagaraUserParameterBinding)              ConfigurationUserParameter                                  OFFSET(getStruct<T>, {0x60, 24, 0, 0})
	DMember(bool)                                      bLimitPlaysPerTick                                          OFFSET(get<bool>, {0x78, 1, 0, 0})
	DMember(int32_t)                                   MaxPlaysPerTick                                             OFFSET(get<int32_t>, {0x7C, 4, 0, 0})
	DMember(bool)                                      bStopWhenComponentIsDestroyed                               OFFSET(get<bool>, {0x80, 1, 0, 0})
	DMember(bool)                                      bAllowLoopingOneShotSounds                                  OFFSET(get<bool>, {0x81, 1, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioSpectrum
/// Size: 0x0010 (0x000040 - 0x000050)
class UNiagaraDataInterfaceAudioSpectrum : public UNiagaraDataInterfaceAudioSubmix
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(int32_t)                                   Resolution                                                  OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(float)                                     MinimumFrequency                                            OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     MaximumFrequency                                            OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     NoiseFloorDb                                                OFFSET(get<float>, {0x4C, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceCamera
/// Size: 0x0008 (0x000038 - 0x000040)
class UNiagaraDataInterfaceCamera : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(int32_t)                                   PlayerControllerIndex                                       OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(bool)                                      bRequireCurrentFrameData                                    OFFSET(get<bool>, {0x3C, 1, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceCollisionQuery
/// Size: 0x0008 (0x000038 - 0x000040)
class UNiagaraDataInterfaceCollisionQuery : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/Niagara.NiagaraDataInterfaceCurveBase
/// Size: 0x0038 (0x000038 - 0x000070)
class UNiagaraDataInterfaceCurveBase : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TArray<float>)                             ShaderLUT                                                   OFFSET(get<T>, {0x38, 16, 0, 0})
	DMember(float)                                     LUTMinTime                                                  OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     LUTMaxTime                                                  OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     LUTInvTimeRange                                             OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     LUTNumSamplesMinusOne                                       OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(bool)                                      bUseLUT                                                     OFFSET(get<bool>, {0x5C, 1, 1, 0})
	DMember(bool)                                      bExposeCurve                                                OFFSET(get<bool>, {0x5C, 1, 1, 1})
	SMember(FName)                                     ExposedName                                                 OFFSET(getStruct<T>, {0x60, 4, 0, 0})
	CMember(class UTexture2D*)                         ExposedTexture                                              OFFSET(get<T>, {0x68, 8, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceColorCurve
/// Size: 0x0200 (0x000070 - 0x000270)
class UNiagaraDataInterfaceColorCurve : public UNiagaraDataInterfaceCurveBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
	SMember(FRichCurve)                                RedCurve                                                    OFFSET(getStruct<T>, {0x70, 128, 0, 0})
	SMember(FRichCurve)                                GreenCurve                                                  OFFSET(getStruct<T>, {0xF0, 128, 0, 0})
	SMember(FRichCurve)                                BlueCurve                                                   OFFSET(getStruct<T>, {0x170, 128, 0, 0})
	SMember(FRichCurve)                                AlphaCurve                                                  OFFSET(getStruct<T>, {0x1F0, 128, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceCubeTexture
/// Size: 0x0020 (0x000038 - 0x000058)
class UNiagaraDataInterfaceCubeTexture : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(class UTexture*)                           Texture                                                     OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FNiagaraUserParameterBinding)              TextureUserParameter                                        OFFSET(getStruct<T>, {0x40, 24, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceCurlNoise
/// Size: 0x0010 (0x000038 - 0x000048)
class UNiagaraDataInterfaceCurlNoise : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(uint32_t)                                  Seed                                                        OFFSET(get<uint32_t>, {0x38, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceCurve
/// Size: 0x0080 (0x000070 - 0x0000F0)
class UNiagaraDataInterfaceCurve : public UNiagaraDataInterfaceCurveBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FRichCurve)                                Curve                                                       OFFSET(getStruct<T>, {0x70, 128, 0, 0})
};

/// Class /Script/Niagara.NiagaraParticleCallbackHandler
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraParticleCallbackHandler : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Niagara.NiagaraParticleCallbackHandler.ReceiveParticleData
	// void ReceiveParticleData(TArray<FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem, FVector& SimulationPositionOffset); // [0x711b3e8] Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/Niagara.NiagaraDataInterfaceExport
/// Size: 0x0028 (0x000038 - 0x000060)
class UNiagaraDataInterfaceExport : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FNiagaraUserParameterBinding)              CallbackHandlerParameter                                    OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	CMember(ENDIExport_GPUAllocationMode)              GPUAllocationMode                                           OFFSET(get<T>, {0x50, 1, 0, 0})
	DMember(int32_t)                                   GPUAllocationFixedSize                                      OFFSET(get<int32_t>, {0x54, 4, 0, 0})
	DMember(float)                                     GPUAllocationPerParticleSize                                OFFSET(get<float>, {0x58, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid2D
/// Size: 0x0028 (0x000038 - 0x000060)
class UNiagaraDataInterfaceGrid2D : public UNiagaraDataInterfaceRWBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(bool)                                      ClearBeforeNonIterationStage                                OFFSET(get<bool>, {0x38, 1, 0, 0})
	DMember(int32_t)                                   NumCellsX                                                   OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(int32_t)                                   NumCellsY                                                   OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(int32_t)                                   NumCellsMaxAxis                                             OFFSET(get<int32_t>, {0x44, 4, 0, 0})
	DMember(int32_t)                                   NumAttributes                                               OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	DMember(bool)                                      SetGridFromMaxAxis                                          OFFSET(get<bool>, {0x4C, 1, 0, 0})
	SMember(FVector2D)                                 WorldBBoxSize                                               OFFSET(getStruct<T>, {0x50, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid2DCollection
/// Size: 0x00C0 (0x000060 - 0x000120)
class UNiagaraDataInterfaceGrid2DCollection : public UNiagaraDataInterfaceGrid2D
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FNiagaraUserParameterBinding)              RenderTargetUserParameter                                   OFFSET(getStruct<T>, {0x60, 24, 0, 0})
	CMember(ENiagaraGpuBufferFormat)                   OverrideBufferFormat                                        OFFSET(get<T>, {0x78, 1, 0, 0})
	DMember(bool)                                      bOverrideFormat                                             OFFSET(get<bool>, {0x79, 1, 1, 0})
	CMember(TMap<uint64_t, UTextureRenderTarget2DArray*>) ManagedRenderTargets                                     OFFSET(get<T>, {0xD0, 80, 0, 0})


	/// Functions
	// Function /Script/Niagara.NiagaraDataInterfaceGrid2DCollection.GetTextureSize
	// void GetTextureSize(class UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY);                                 // [0x71467b8] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid2DCollection.GetRawTextureSize
	// void GetRawTextureSize(class UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY);                              // [0x71464c4] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid2DCollection.FillTexture2D
	// bool FillTexture2D(class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int32_t AttributeIndex);      // [0x7146304] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid2DCollection.FillRawTexture2D
	// bool FillRawTexture2D(class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int32_t& TilesX, int32_t& TilesY); // [0x7145f08] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid2DCollectionReader
/// Size: 0x0020 (0x000120 - 0x000140)
class UNiagaraDataInterfaceGrid2DCollectionReader : public UNiagaraDataInterfaceGrid2DCollection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FString)                                   EmitterName                                                 OFFSET(getStruct<T>, {0x120, 16, 0, 0})
	SMember(FString)                                   DIName                                                      OFFSET(getStruct<T>, {0x130, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid3D
/// Size: 0x0038 (0x000038 - 0x000070)
class UNiagaraDataInterfaceGrid3D : public UNiagaraDataInterfaceRWBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(bool)                                      ClearBeforeNonIterationStage                                OFFSET(get<bool>, {0x38, 1, 0, 0})
	SMember(FIntVector)                                NumCells                                                    OFFSET(getStruct<T>, {0x3C, 12, 0, 0})
	DMember(float)                                     CellSize                                                    OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(int32_t)                                   NumCellsMaxAxis                                             OFFSET(get<int32_t>, {0x4C, 4, 0, 0})
	CMember(ESetResolutionMethod)                      SetResolutionMethod                                         OFFSET(get<T>, {0x50, 4, 0, 0})
	SMember(FVector)                                   WorldBBoxSize                                               OFFSET(getStruct<T>, {0x58, 24, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid3DCollection
/// Size: 0x0078 (0x000070 - 0x0000E8)
class UNiagaraDataInterfaceGrid3DCollection : public UNiagaraDataInterfaceGrid3D
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	DMember(int32_t)                                   NumAttributes                                               OFFSET(get<int32_t>, {0x70, 4, 0, 0})
	SMember(FNiagaraUserParameterBinding)              RenderTargetUserParameter                                   OFFSET(getStruct<T>, {0x78, 24, 0, 0})
	CMember(ENiagaraGpuBufferFormat)                   OverrideBufferFormat                                        OFFSET(get<T>, {0x90, 1, 0, 0})
	DMember(bool)                                      bOverrideFormat                                             OFFSET(get<bool>, {0x91, 1, 1, 0})


	/// Functions
	// Function /Script/Niagara.NiagaraDataInterfaceGrid3DCollection.GetTextureSize
	// void GetTextureSize(class UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY, int32_t& SizeZ);                 // [0x714690c] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid3DCollection.GetRawTextureSize
	// void GetRawTextureSize(class UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY, int32_t& SizeZ);              // [0x7146618] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid3DCollection.FillVolumeTexture
	// bool FillVolumeTexture(class UNiagaraComponent* Component, class UVolumeTexture* Dest, int32_t AttributeIndex);          // [0x7146304] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid3DCollection.FillRawVolumeTexture
	// bool FillRawVolumeTexture(class UNiagaraComponent* Component, class UVolumeTexture* Dest, int32_t& TilesX, int32_t& TilesY, int32_t& TileZ); // [0x71460e0] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid3DCollectionReader
/// Size: 0x0020 (0x0000E8 - 0x000108)
class UNiagaraDataInterfaceGrid3DCollectionReader : public UNiagaraDataInterfaceGrid3DCollection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FString)                                   EmitterName                                                 OFFSET(getStruct<T>, {0xE8, 16, 0, 0})
	SMember(FString)                                   DIName                                                      OFFSET(getStruct<T>, {0xF8, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceIntRenderTarget2D
/// Size: 0x0020 (0x000038 - 0x000058)
class UNiagaraDataInterfaceIntRenderTarget2D : public UNiagaraDataInterfaceRWBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FIntPoint)                                 Size                                                        OFFSET(getStruct<T>, {0x38, 8, 0, 0})
	SMember(FNiagaraUserParameterBinding)              RenderTargetUserParameter                                   OFFSET(getStruct<T>, {0x40, 24, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceLandscape
/// Size: 0x0028 (0x000038 - 0x000060)
class UNiagaraDataInterfaceLandscape : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(class AActor*)                             SourceLandscape                                             OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(ENDILandscape_SourceMode)                  SourceMode                                                  OFFSET(get<T>, {0x40, 1, 0, 0})
	CMember(TArray<class UPhysicalMaterial*>)          PhysicalMaterials                                           OFFSET(get<T>, {0x48, 16, 0, 0})
	DMember(bool)                                      bVirtualTexturesSupported                                   OFFSET(get<bool>, {0x58, 1, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceMeshRendererInfo
/// Size: 0x0018 (0x000038 - 0x000050)
class UNiagaraDataInterfaceMeshRendererInfo : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(class UNiagaraMeshRendererProperties*)     MeshRenderer                                                OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceNeighborGrid3D
/// Size: 0x0008 (0x000070 - 0x000078)
class UNiagaraDataInterfaceNeighborGrid3D : public UNiagaraDataInterfaceGrid3D
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(uint32_t)                                  MaxNeighborsPerCell                                         OFFSET(get<uint32_t>, {0x70, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceOcclusion
/// Size: 0x0000 (0x000038 - 0x000038)
class UNiagaraDataInterfaceOcclusion : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/Niagara.NiagaraDataInterfaceParticleRead
/// Size: 0x0008 (0x000038 - 0x000040)
class UNiagaraDataInterfaceParticleRead : public UNiagaraDataInterfaceRWBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FNiagaraDataInterfaceEmitterBinding)       EmitterBinding                                              OFFSET(getStruct<T>, {0x38, 8, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfacePlatformSet
/// Size: 0x0030 (0x000038 - 0x000068)
class UNiagaraDataInterfacePlatformSet : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FNiagaraPlatformSet)                       Platforms                                                   OFFSET(getStruct<T>, {0x38, 48, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceRasterizationGrid3D
/// Size: 0x0010 (0x000070 - 0x000080)
class UNiagaraDataInterfaceRasterizationGrid3D : public UNiagaraDataInterfaceGrid3D
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(int32_t)                                   NumAttributes                                               OFFSET(get<int32_t>, {0x70, 4, 0, 0})
	DMember(float)                                     Precision                                                   OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(int32_t)                                   ResetValue                                                  OFFSET(get<int32_t>, {0x78, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceRenderTarget2D
/// Size: 0x0078 (0x000038 - 0x0000B0)
class UNiagaraDataInterfaceRenderTarget2D : public UNiagaraDataInterfaceRWBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FIntPoint)                                 Size                                                        OFFSET(getStruct<T>, {0x38, 8, 0, 0})
	CMember(ENiagaraMipMapGeneration)                  MipMapGeneration                                            OFFSET(get<T>, {0x40, 1, 0, 0})
	CMember(ENiagaraMipMapGenerationType)              MipMapGenerationType                                        OFFSET(get<T>, {0x41, 1, 0, 0})
	CMember(TEnumAsByte<ETextureRenderTargetFormat>)   OverrideRenderTargetFormat                                  OFFSET(get<T>, {0x42, 1, 0, 0})
	CMember(TEnumAsByte<TextureFilter>)                OverrideRenderTargetFilter                                  OFFSET(get<T>, {0x43, 1, 0, 0})
	DMember(bool)                                      bInheritUserParameterSettings                               OFFSET(get<bool>, {0x44, 1, 1, 0})
	DMember(bool)                                      bOverrideFormat                                             OFFSET(get<bool>, {0x44, 1, 1, 1})
	SMember(FNiagaraUserParameterBinding)              RenderTargetUserParameter                                   OFFSET(getStruct<T>, {0x48, 24, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceRenderTarget2DArray
/// Size: 0x0028 (0x000038 - 0x000060)
class UNiagaraDataInterfaceRenderTarget2DArray : public UNiagaraDataInterfaceRWBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FIntVector)                                Size                                                        OFFSET(getStruct<T>, {0x38, 12, 0, 0})
	CMember(TEnumAsByte<ETextureRenderTargetFormat>)   OverrideRenderTargetFormat                                  OFFSET(get<T>, {0x44, 1, 0, 0})
	CMember(TEnumAsByte<TextureFilter>)                OverrideRenderTargetFilter                                  OFFSET(get<T>, {0x45, 1, 0, 0})
	DMember(bool)                                      bInheritUserParameterSettings                               OFFSET(get<bool>, {0x46, 1, 1, 0})
	DMember(bool)                                      bOverrideFormat                                             OFFSET(get<bool>, {0x46, 1, 1, 1})
	SMember(FNiagaraUserParameterBinding)              RenderTargetUserParameter                                   OFFSET(getStruct<T>, {0x48, 24, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceRenderTargetCube
/// Size: 0x0020 (0x000038 - 0x000058)
class UNiagaraDataInterfaceRenderTargetCube : public UNiagaraDataInterfaceRWBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(int32_t)                                   Size                                                        OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	CMember(TEnumAsByte<ETextureRenderTargetFormat>)   OverrideRenderTargetFormat                                  OFFSET(get<T>, {0x3C, 1, 0, 0})
	CMember(TEnumAsByte<TextureFilter>)                OverrideRenderTargetFilter                                  OFFSET(get<T>, {0x3D, 1, 0, 0})
	DMember(bool)                                      bInheritUserParameterSettings                               OFFSET(get<bool>, {0x3E, 1, 1, 0})
	DMember(bool)                                      bOverrideFormat                                             OFFSET(get<bool>, {0x3E, 1, 1, 1})
	SMember(FNiagaraUserParameterBinding)              RenderTargetUserParameter                                   OFFSET(getStruct<T>, {0x40, 24, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceRenderTargetVolume
/// Size: 0x0030 (0x000038 - 0x000068)
class UNiagaraDataInterfaceRenderTargetVolume : public UNiagaraDataInterfaceRWBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FIntVector)                                Size                                                        OFFSET(getStruct<T>, {0x40, 12, 0, 0})
	CMember(TEnumAsByte<ETextureRenderTargetFormat>)   OverrideRenderTargetFormat                                  OFFSET(get<T>, {0x4C, 1, 0, 0})
	CMember(TEnumAsByte<TextureFilter>)                OverrideRenderTargetFilter                                  OFFSET(get<T>, {0x4D, 1, 0, 0})
	DMember(bool)                                      bInheritUserParameterSettings                               OFFSET(get<bool>, {0x4E, 1, 1, 0})
	DMember(bool)                                      bOverrideFormat                                             OFFSET(get<bool>, {0x4E, 1, 1, 1})
	SMember(FNiagaraUserParameterBinding)              RenderTargetUserParameter                                   OFFSET(getStruct<T>, {0x50, 24, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceRigidMeshCollisionQuery
/// Size: 0x0040 (0x000038 - 0x000078)
class UNiagaraDataInterfaceRigidMeshCollisionQuery : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TArray<FName>)                             ActorTags                                                   OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FName>)                             ComponentTags                                               OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr<AActor*>>)           SourceActors                                                OFFSET(get<T>, {0x58, 16, 0, 0})
	DMember(bool)                                      OnlyUseMoveable                                             OFFSET(get<bool>, {0x68, 1, 0, 0})
	DMember(bool)                                      UseComplexCollisions                                        OFFSET(get<bool>, {0x69, 1, 0, 0})
	DMember(bool)                                      GlobalSearchAllowed                                         OFFSET(get<bool>, {0x6A, 1, 0, 0})
	DMember(bool)                                      GlobalSearchForced                                          OFFSET(get<bool>, {0x6B, 1, 0, 0})
	DMember(bool)                                      GlobalSearchFallback_Unscripted                             OFFSET(get<bool>, {0x6C, 1, 0, 0})
	DMember(int32_t)                                   MaxNumPrimitives                                            OFFSET(get<int32_t>, {0x70, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraDIRigidMeshCollisionFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraDIRigidMeshCollisionFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Niagara.NiagaraDIRigidMeshCollisionFunctionLibrary.SetSourceActors
	// void SetSourceActors(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<AActor*>& SourceActors);         // [0x7181d78] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataInterfaceSkeletalMesh
/// Size: 0x00B8 (0x000038 - 0x0000F0)
class UNiagaraDataInterfaceSkeletalMesh : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(ENDISkeletalMesh_SourceMode)               SourceMode                                                  OFFSET(get<T>, {0x38, 1, 0, 0})
	CMember(class USkeletalMesh*)                      DefaultMesh                                                 OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   SoftSourceActor                                             OFFSET(get<T>, {0x48, 32, 0, 0})
	CMember(TArray<FName>)                             ComponentTags                                               OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(class USkeletalMeshComponent*)             SourceComponent                                             OFFSET(get<T>, {0x78, 8, 0, 0})
	SMember(FNiagaraUserParameterBinding)              MeshUserParameter                                           OFFSET(getStruct<T>, {0x80, 24, 0, 0})
	CMember(ENDISkeletalMesh_SkinningMode)             SkinningMode                                                OFFSET(get<T>, {0x98, 1, 0, 0})
	CMember(TArray<FName>)                             SamplingRegions                                             OFFSET(get<T>, {0xA0, 16, 0, 0})
	DMember(int32_t)                                   WholeMeshLOD                                                OFFSET(get<int32_t>, {0xB0, 4, 0, 0})
	CMember(TArray<FName>)                             FilteredBones                                               OFFSET(get<T>, {0xB8, 16, 0, 0})
	CMember(TArray<FName>)                             FilteredSockets                                             OFFSET(get<T>, {0xC8, 16, 0, 0})
	SMember(FName)                                     ExcludeBoneName                                             OFFSET(getStruct<T>, {0xD8, 4, 0, 0})
	DMember(bool)                                      bExcludeBone                                                OFFSET(get<bool>, {0xDC, 1, 1, 0})
	DMember(int32_t)                                   UvSetIndex                                                  OFFSET(get<int32_t>, {0xE0, 4, 0, 0})
	DMember(bool)                                      bRequireCurrentFrameData                                    OFFSET(get<bool>, {0xE4, 1, 0, 0})


	/// Functions
	// Function /Script/Niagara.NiagaraDataInterfaceSkeletalMesh.OnSourceEndPlay
	// void OnSourceEndPlay(class AActor* InSource, TEnumAsByte<EEndPlayReason> Reason);                                        // [0x1d0500c] Final|RequiredAPI|Native|Protected 
};

/// Class /Script/Niagara.NiagaraDataInterfaceSparseVolumeTexture
/// Size: 0x0020 (0x000038 - 0x000058)
class UNiagaraDataInterfaceSparseVolumeTexture : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(class USparseVolumeTexture*)               SparseVolumeTexture                                         OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FNiagaraUserParameterBinding)              SparseVolumeTextureUserParameter                            OFFSET(getStruct<T>, {0x40, 24, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceSpline
/// Size: 0x0078 (0x000038 - 0x0000B0)
class UNiagaraDataInterfaceSpline : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(class AActor*)                             Source                                                      OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FNiagaraUserParameterBinding)              SplineUserParameter                                         OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	DMember(bool)                                      bUseLUT                                                     OFFSET(get<bool>, {0x58, 1, 0, 0})
	DMember(int32_t)                                   NumLUTSteps                                                 OFFSET(get<int32_t>, {0x5C, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceSpriteRendererInfo
/// Size: 0x0008 (0x000038 - 0x000040)
class UNiagaraDataInterfaceSpriteRendererInfo : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class UNiagaraSpriteRendererProperties*)   SpriteRenderer                                              OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceTexture
/// Size: 0x0020 (0x000038 - 0x000058)
class UNiagaraDataInterfaceTexture : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(class UTexture*)                           Texture                                                     OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FNiagaraUserParameterBinding)              TextureUserParameter                                        OFFSET(getStruct<T>, {0x40, 24, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceVector2DCurve
/// Size: 0x0100 (0x000070 - 0x000170)
class UNiagaraDataInterfaceVector2DCurve : public UNiagaraDataInterfaceCurveBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FRichCurve)                                XCurve                                                      OFFSET(getStruct<T>, {0x70, 128, 0, 0})
	SMember(FRichCurve)                                YCurve                                                      OFFSET(getStruct<T>, {0xF0, 128, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceVector4Curve
/// Size: 0x0200 (0x000070 - 0x000270)
class UNiagaraDataInterfaceVector4Curve : public UNiagaraDataInterfaceCurveBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
	SMember(FRichCurve)                                XCurve                                                      OFFSET(getStruct<T>, {0x70, 128, 0, 0})
	SMember(FRichCurve)                                YCurve                                                      OFFSET(getStruct<T>, {0xF0, 128, 0, 0})
	SMember(FRichCurve)                                ZCurve                                                      OFFSET(getStruct<T>, {0x170, 128, 0, 0})
	SMember(FRichCurve)                                WCurve                                                      OFFSET(getStruct<T>, {0x1F0, 128, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceVectorCurve
/// Size: 0x0180 (0x000070 - 0x0001F0)
class UNiagaraDataInterfaceVectorCurve : public UNiagaraDataInterfaceCurveBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	SMember(FRichCurve)                                XCurve                                                      OFFSET(getStruct<T>, {0x70, 128, 0, 0})
	SMember(FRichCurve)                                YCurve                                                      OFFSET(getStruct<T>, {0xF0, 128, 0, 0})
	SMember(FRichCurve)                                ZCurve                                                      OFFSET(getStruct<T>, {0x170, 128, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceVectorField
/// Size: 0x0010 (0x000038 - 0x000048)
class UNiagaraDataInterfaceVectorField : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(class UVectorField*)                       Field                                                       OFFSET(get<T>, {0x38, 8, 0, 0})
	DMember(bool)                                      bTileX                                                      OFFSET(get<bool>, {0x40, 1, 0, 0})
	DMember(bool)                                      bTileY                                                      OFFSET(get<bool>, {0x41, 1, 0, 0})
	DMember(bool)                                      bTileZ                                                      OFFSET(get<bool>, {0x42, 1, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceVolumeCache
/// Size: 0x0058 (0x000038 - 0x000090)
class UNiagaraDataInterfaceVolumeCache : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(class UVolumeCache*)                       VolumeCache                                                 OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceVolumeTexture
/// Size: 0x0020 (0x000038 - 0x000058)
class UNiagaraDataInterfaceVolumeTexture : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(class UTexture*)                           Texture                                                     OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FNiagaraUserParameterBinding)              TextureUserParameter                                        OFFSET(getStruct<T>, {0x40, 24, 0, 0})
};

/// Class /Script/Niagara.NiagaraDebugHUDSettings
/// Size: 0x0268 (0x000028 - 0x000290)
class UNiagaraDebugHUDSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
	SMember(FNiagaraDebugHUDSettingsData)              Data                                                        OFFSET(getStruct<T>, {0x48, 584, 0, 0})
};

/// Class /Script/Niagara.NiagaraDecalRendererProperties
/// Size: 0x01E8 (0x0000B0 - 0x000298)
class UNiagaraDecalRendererProperties : public UNiagaraRendererProperties
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(class UMaterialInterface*)                 Material                                                    OFFSET(get<T>, {0xB0, 8, 0, 0})
	SMember(FNiagaraParameterBinding)                  MaterialParameterBinding                                    OFFSET(getStruct<T>, {0xB8, 8, 0, 0})
	CMember(ENiagaraRendererSourceDataMode)            SourceMode                                                  OFFSET(get<T>, {0xC0, 1, 0, 0})
	DMember(int32_t)                                   RendererVisibility                                          OFFSET(get<int32_t>, {0xC4, 4, 0, 0})
	DMember(float)                                     DecalScreenSizeFade                                         OFFSET(get<float>, {0xC8, 4, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PositionBinding                                             OFFSET(getStruct<T>, {0xD0, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DecalOrientationBinding                                     OFFSET(getStruct<T>, {0xF8, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DecalSizeBinding                                            OFFSET(getStruct<T>, {0x120, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DecalFadeBinding                                            OFFSET(getStruct<T>, {0x148, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DecalSortOrderBinding                                       OFFSET(getStruct<T>, {0x170, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DecalColorBinding                                           OFFSET(getStruct<T>, {0x198, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DecalVisibleBinding                                         OFFSET(getStruct<T>, {0x1C0, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RendererVisibilityTagBinding                                OFFSET(getStruct<T>, {0x1E8, 40, 0, 0})
	SMember(FNiagaraRendererMaterialParameters)        MaterialParameters                                          OFFSET(getStruct<T>, {0x210, 80, 0, 0})
};

/// Class /Script/Niagara.NiagaraEditorDataBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraEditorDataBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Niagara.NiagaraEditorParametersAdapterBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraEditorParametersAdapterBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Niagara.NiagaraSignificanceHandler
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraSignificanceHandler : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Niagara.NiagaraSignificanceHandlerDistance
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraSignificanceHandlerDistance : public UNiagaraSignificanceHandler
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Niagara.NiagaraSignificanceHandlerAge
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraSignificanceHandlerAge : public UNiagaraSignificanceHandler
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Niagara.NiagaraEffectType
/// Size: 0x0078 (0x000028 - 0x0000A0)
class UNiagaraEffectType : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	DMember(bool)                                      bAllowCullingForLocalPlayers                                OFFSET(get<bool>, {0x28, 1, 0, 0})
	CMember(ENiagaraScalabilityUpdateFrequency)        UpdateFrequency                                             OFFSET(get<T>, {0x2C, 4, 0, 0})
	CMember(ENiagaraCullReaction)                      CullReaction                                                OFFSET(get<T>, {0x30, 4, 0, 0})
	CMember(class UNiagaraSignificanceHandler*)        SignificanceHandler                                         OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(TArray<FNiagaraSystemScalabilitySettings>) DetailLevelScalabilitySettings                              OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FNiagaraSystemScalabilitySettingsArray)    SystemScalabilitySettings                                   OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FNiagaraEmitterScalabilitySettingsArray)   EmitterScalabilitySettings                                  OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	CMember(class UNiagaraBaselineController*)         PerformanceBaselineController                               OFFSET(get<T>, {0x78, 8, 0, 0})
	SMember(FNiagaraPerfBaselineStats)                 PerfBaselineStats                                           OFFSET(getStruct<T>, {0x80, 16, 0, 0})
	SMember(FGuid)                                     PerfBaselineVersion                                         OFFSET(getStruct<T>, {0x90, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraEmitter
/// Size: 0x0048 (0x000028 - 0x000070)
class UNiagaraEmitter : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FGuid)                                     ExposedVersion                                              OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	DMember(bool)                                      bVersioningEnabled                                          OFFSET(get<bool>, {0x40, 1, 0, 0})
	CMember(TArray<FVersionedNiagaraEmitterData>)      VersionData                                                 OFFSET(get<T>, {0x48, 16, 0, 0})
	SMember(FString)                                   UniqueEmitterName                                           OFFSET(getStruct<T>, {0x60, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraEventReceiverEmitterAction
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraEventReceiverEmitterAction : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
/// Size: 0x0008 (0x000028 - 0x000030)
class UNiagaraEventReceiverEmitterAction_SpawnParticles : public UNiagaraEventReceiverEmitterAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(uint32_t)                                  NumParticles                                                OFFSET(get<uint32_t>, {0x28, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Niagara.NiagaraFunctionLibrary.SpawnSystemAttachedWithParams
	// class UNiagaraComponent* SpawnSystemAttachedWithParams(FFXSystemSpawnParameters& SpawnParams);                           // [0x71aa4f8] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.SpawnSystemAttached
	// class UNiagaraComponent* SpawnSystemAttached(class UNiagaraSystem* SystemTemplate, class USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck); // [0x18365b4] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocationWithParams
	// class UNiagaraComponent* SpawnSystemAtLocationWithParams(FFXSystemSpawnParameters& SpawnParams);                         // [0x71aa460] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocation
	// class UNiagaraComponent* SpawnSystemAtLocation(class UObject* WorldContextObject, class UNiagaraSystem* SystemTemplate, FVector Location, FRotator Rotation, FVector Scale, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck); // [0x1836bdc] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.SetVolumeTextureObject
	// void SetVolumeTextureObject(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UVolumeTexture* Texture); // [0x71a9c8c] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.SetTextureObject
	// void SetTextureObject(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UTexture* Texture);            // [0x71a9c8c] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.SetTexture2DArrayObject
	// void SetTexture2DArrayObject(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UTexture2DArray* Texture); // [0x71a9c8c] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceSamplingRegions
	// void SetSkeletalMeshDataInterfaceSamplingRegions(class UNiagaraComponent* NiagaraSystem, FString OverrideName, TArray<FName>& SamplingRegions); // [0x71a9344] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceFilteredSockets
	// void SetSkeletalMeshDataInterfaceFilteredSockets(class UNiagaraComponent* NiagaraSystem, FString OverrideName, TArray<FName>& FilteredSockets); // [0x71a89fc] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceFilteredBones
	// void SetSkeletalMeshDataInterfaceFilteredBones(class UNiagaraComponent* NiagaraSystem, FString OverrideName, TArray<FName>& FilteredBones); // [0x71a80b4] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.SetComponentNiagaraGPURayTracedCollisionGroup
	// void SetComponentNiagaraGPURayTracedCollisionGroup(class UObject* WorldContextObject, class UPrimitiveComponent* Primitive, int32_t CollisionGroup); // [0x71a7dc4] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.SetActorNiagaraGPURayTracedCollisionGroup
	// void SetActorNiagaraGPURayTracedCollisionGroup(class UObject* WorldContextObject, class AActor* Actor, int32_t CollisionGroup); // [0x71a7ba4] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.ReleaseNiagaraGPURayTracedCollisionGroup
	// void ReleaseNiagaraGPURayTracedCollisionGroup(class UObject* WorldContextObject, int32_t CollisionGroup);                // [0x71a7a18] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMeshComponent
	// void OverrideSystemUserVariableStaticMeshComponent(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UStaticMeshComponent* StaticMeshComponent); // [0x71a7244] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMesh
	// void OverrideSystemUserVariableStaticMesh(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UStaticMesh* StaticMesh); // [0x71a6a70] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableSkeletalMeshComponent
	// void OverrideSystemUserVariableSkeletalMeshComponent(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class USkeletalMeshComponent* SkeletalMeshComponent); // [0x1d04820] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.GetNiagaraParameterCollection
	// class UNiagaraParameterCollectionInstance* GetNiagaraParameterCollection(class UObject* WorldContextObject, class UNiagaraParameterCollection* Collection); // [0x71a6930] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.AcquireNiagaraGPURayTracedCollisionGroup
	// int32_t AcquireNiagaraGPURayTracedCollisionGroup(class UObject* WorldContextObject);                                     // [0x71a6870] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraLensEffectBase
/// Size: 0x0090 (0x0002A0 - 0x000330)
class ANiagaraLensEffectBase : public ANiagaraActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	SMember(FTransform)                                DesiredRelativeTransform                                    OFFSET(getStruct<T>, {0x2B0, 96, 0, 0})
	DMember(float)                                     BaseAuthoredFOV                                             OFFSET(get<float>, {0x310, 4, 0, 0})
	DMember(bool)                                      bAllowMultipleInstances                                     OFFSET(get<bool>, {0x314, 1, 1, 0})
	DMember(bool)                                      bResetWhenRetriggered                                       OFFSET(get<bool>, {0x314, 1, 1, 1})
	CMember(TArray<class UClass*>)                     EmittersToTreatAsSame                                       OFFSET(get<T>, {0x318, 16, 0, 0})
	CMember(class APlayerCameraManager*)               OwningCameraManager                                         OFFSET(get<T>, {0x328, 8, 0, 0})
};

/// Class /Script/Niagara.NiagaraLightRendererProperties
/// Size: 0x0170 (0x0000B0 - 0x000220)
class UNiagaraLightRendererProperties : public UNiagaraRendererProperties
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	CMember(ENiagaraRendererSourceDataMode)            SourceMode                                                  OFFSET(get<T>, {0xB0, 1, 0, 0})
	DMember(bool)                                      bUseInverseSquaredFalloff                                   OFFSET(get<bool>, {0xB4, 1, 1, 0})
	DMember(bool)                                      bAffectsTranslucency                                        OFFSET(get<bool>, {0xB4, 1, 1, 1})
	DMember(bool)                                      bAlphaScalesBrightness                                      OFFSET(get<bool>, {0xB4, 1, 1, 2})
	DMember(bool)                                      bOverrideInverseExposureBlend                               OFFSET(get<bool>, {0xB4, 1, 1, 3})
	DMember(float)                                     RadiusScale                                                 OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(float)                                     DefaultExponent                                             OFFSET(get<float>, {0xBC, 4, 0, 0})
	SMember(FVector3f)                                 ColorAdd                                                    OFFSET(getStruct<T>, {0xC0, 12, 0, 0})
	DMember(float)                                     InverseExposureBlend                                        OFFSET(get<float>, {0xCC, 4, 0, 0})
	DMember(int32_t)                                   RendererVisibility                                          OFFSET(get<int32_t>, {0xD0, 4, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          LightRenderingEnabledBinding                                OFFSET(getStruct<T>, {0xD8, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          LightExponentBinding                                        OFFSET(getStruct<T>, {0x100, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PositionBinding                                             OFFSET(getStruct<T>, {0x128, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          ColorBinding                                                OFFSET(getStruct<T>, {0x150, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RadiusBinding                                               OFFSET(getStruct<T>, {0x178, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          VolumetricScatteringBinding                                 OFFSET(getStruct<T>, {0x1A0, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RendererVisibilityTagBinding                                OFFSET(getStruct<T>, {0x1C8, 40, 0, 0})
};

/// Class /Script/Niagara.NiagaraMeshRendererProperties
/// Size: 0x0480 (0x0000B0 - 0x000530)
class UNiagaraMeshRendererProperties : public UNiagaraRendererProperties
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1328;

public:
	CMember(TArray<FNiagaraMeshRendererMeshProperties>) Meshes                                                     OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(ENiagaraRendererSourceDataMode)            SourceMode                                                  OFFSET(get<T>, {0xC0, 1, 0, 0})
	CMember(ENiagaraSortMode)                          SortMode                                                    OFFSET(get<T>, {0xC1, 1, 0, 0})
	CMember(ENiagaraRendererSortPrecision)             SortPrecision                                               OFFSET(get<T>, {0xC2, 1, 0, 0})
	CMember(ENiagaraRendererGpuTranslucentLatency)     GpuTranslucentLatency                                       OFFSET(get<T>, {0xC3, 1, 0, 0})
	DMember(bool)                                      bOverrideMaterials                                          OFFSET(get<bool>, {0xC4, 1, 1, 0})
	DMember(bool)                                      bUseHeterogeneousVolumes                                    OFFSET(get<bool>, {0xC4, 1, 1, 1})
	DMember(bool)                                      bSortOnlyWhenTranslucent                                    OFFSET(get<bool>, {0xC4, 1, 1, 2})
	DMember(bool)                                      bSubImageBlend                                              OFFSET(get<bool>, {0xC4, 1, 1, 3})
	DMember(bool)                                      bEnableFrustumCulling                                       OFFSET(get<bool>, {0xC4, 1, 1, 4})
	DMember(bool)                                      bEnableCameraDistanceCulling                                OFFSET(get<bool>, {0xC4, 1, 1, 5})
	DMember(bool)                                      bEnableMeshFlipbook                                         OFFSET(get<bool>, {0xC4, 1, 1, 6})
	DMember(bool)                                      bLockedAxisEnable                                           OFFSET(get<bool>, {0xC4, 1, 1, 7})
	DMember(bool)                                      bCastShadows                                                OFFSET(get<bool>, {0xC8, 1, 1, 0})
	CMember(TArray<FNiagaraMeshMaterialOverride>)      OverrideMaterials                                           OFFSET(get<T>, {0xD0, 16, 0, 0})
	CMember(TArray<FNiagaraMeshMICOverride>)           MICOverrideMaterials                                        OFFSET(get<T>, {0xE0, 16, 0, 0})
	SMember(FVector2D)                                 SubImageSize                                                OFFSET(getStruct<T>, {0xF0, 16, 0, 0})
	SMember(FVector)                                   LockedAxis                                                  OFFSET(getStruct<T>, {0x100, 24, 0, 0})
	SMember(FVector)                                   MeshBoundsScale                                             OFFSET(getStruct<T>, {0x118, 24, 0, 0})
	CMember(ENiagaraMeshFacingMode)                    FacingMode                                                  OFFSET(get<T>, {0x130, 1, 0, 0})
	CMember(ENiagaraMeshLockedAxisSpace)               LockedAxisSpace                                             OFFSET(get<T>, {0x131, 1, 0, 0})
	DMember(float)                                     MinCameraDistance                                           OFFSET(get<float>, {0x134, 4, 0, 0})
	DMember(float)                                     MaxCameraDistance                                           OFFSET(get<float>, {0x138, 4, 0, 0})
	DMember(uint32_t)                                  RendererVisibility                                          OFFSET(get<uint32_t>, {0x13C, 4, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PositionBinding                                             OFFSET(getStruct<T>, {0x140, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          ColorBinding                                                OFFSET(getStruct<T>, {0x168, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          VelocityBinding                                             OFFSET(getStruct<T>, {0x190, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          MeshOrientationBinding                                      OFFSET(getStruct<T>, {0x1B8, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          ScaleBinding                                                OFFSET(getStruct<T>, {0x1E0, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          SubImageIndexBinding                                        OFFSET(getStruct<T>, {0x208, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DynamicMaterialBinding                                      OFFSET(getStruct<T>, {0x230, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DynamicMaterial1Binding                                     OFFSET(getStruct<T>, {0x258, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DynamicMaterial2Binding                                     OFFSET(getStruct<T>, {0x280, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DynamicMaterial3Binding                                     OFFSET(getStruct<T>, {0x2A8, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          MaterialRandomBinding                                       OFFSET(getStruct<T>, {0x2D0, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          CustomSortingBinding                                        OFFSET(getStruct<T>, {0x2F8, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          NormalizedAgeBinding                                        OFFSET(getStruct<T>, {0x320, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          CameraOffsetBinding                                         OFFSET(getStruct<T>, {0x348, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RendererVisibilityTagBinding                                OFFSET(getStruct<T>, {0x370, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          MeshIndexBinding                                            OFFSET(getStruct<T>, {0x398, 40, 0, 0})
	SMember(FNiagaraRendererMaterialParameters)        MaterialParameters                                          OFFSET(getStruct<T>, {0x3C0, 80, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevPositionBinding                                         OFFSET(getStruct<T>, {0x410, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevScaleBinding                                            OFFSET(getStruct<T>, {0x438, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevMeshOrientationBinding                                  OFFSET(getStruct<T>, {0x460, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevCameraOffsetBinding                                     OFFSET(getStruct<T>, {0x488, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevVelocityBinding                                         OFFSET(getStruct<T>, {0x4B0, 40, 0, 0})
	DMember(uint32_t)                                  MaterialParamValidMask                                      OFFSET(get<uint32_t>, {0x4D8, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraParameterCollectionInstance
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UNiagaraParameterCollectionInstance : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(class UNiagaraParameterCollection*)        Collection                                                  OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TArray<FNiagaraVariable>)                  OverridenParameters                                         OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FNiagaraParameterStore)                    ParameterStorage                                            OFFSET(getStruct<T>, {0x40, 136, 0, 0})


	/// Functions
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetVectorParameter
	// void SetVectorParameter(FString InVariableName, FVector InValue);                                                        // [0x71c5f68] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter
	// void SetVector4Parameter(FString InVariableName, FVector4& InValue);                                                     // [0x71c582c] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter
	// void SetVector2DParameter(FString InVariableName, FVector2D InValue);                                                    // [0x71c50c4] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetQuatParameter
	// void SetQuatParameter(FString InVariableName, FQuat& InValue);                                                           // [0x71c4998] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetIntParameter
	// void SetIntParameter(FString InVariableName, int32_t InValue);                                                           // [0x71c4178] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetFloatParameter
	// void SetFloatParameter(FString InVariableName, float InValue);                                                           // [0x71c3a1c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetColorParameter
	// void SetColorParameter(FString InVariableName, FLinearColor InValue);                                                    // [0x71c32b4] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetBoolParameter
	// void SetBoolParameter(FString InVariableName, bool InValue);                                                             // [0x71c2b54] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetVectorParameter
	// FVector GetVectorParameter(FString InVariableName);                                                                      // [0x71c22c8] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter
	// FVector4 GetVector4Parameter(FString InVariableName);                                                                    // [0x71c1bd8] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter
	// FVector2D GetVector2DParameter(FString InVariableName);                                                                  // [0x71c14f8] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetQuatParameter
	// FQuat GetQuatParameter(FString InVariableName);                                                                          // [0x71c0e08] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetIntParameter
	// int32_t GetIntParameter(FString InVariableName);                                                                         // [0x71c0678] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetFloatParameter
	// float GetFloatParameter(FString InVariableName);                                                                         // [0x71bff84] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetColorParameter
	// FLinearColor GetColorParameter(FString InVariableName);                                                                  // [0x71bf8a4] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetBoolParameter
	// bool GetBoolParameter(FString InVariableName);                                                                           // [0x71bf1b0] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraParameterCollection
/// Size: 0x0038 (0x000028 - 0x000060)
class UNiagaraParameterCollection : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FName)                                     NameSpace                                                   OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	CMember(TArray<FNiagaraVariable>)                  Parameters                                                  OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(class UMaterialParameterCollection*)       SourceMaterialCollection                                    OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(class UNiagaraParameterCollectionInstance*) DefaultInstance                                            OFFSET(get<T>, {0x48, 8, 0, 0})
	SMember(FGuid)                                     CompileId                                                   OFFSET(getStruct<T>, {0x50, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraBaselineController
/// Size: 0x0038 (0x000028 - 0x000060)
class UNiagaraBaselineController : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(float)                                     TestDuration                                                OFFSET(get<float>, {0x28, 4, 0, 0})
	CMember(class UNiagaraEffectType*)                 EffectType                                                  OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class ANiagaraPerfBaselineActor*)          Owner                                                       OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(TWeakObjectPtr<UNiagaraSystem*>)           System                                                      OFFSET(get<T>, {0x40, 32, 0, 0})


	/// Functions
	// Function /Script/Niagara.NiagaraBaselineController.OnTickTest
	// bool OnTickTest();                                                                                                       // [0x24fa0e8] RequiredAPI|Native|Event|Public|BlueprintEvent 
	// Function /Script/Niagara.NiagaraBaselineController.OnOwnerTick
	// void OnOwnerTick(float DeltaTime);                                                                                       // [0x71c2a8c] RequiredAPI|Native|Event|Public|BlueprintEvent 
	// Function /Script/Niagara.NiagaraBaselineController.OnEndTest
	// void OnEndTest(FNiagaraPerfBaselineStats Stats);                                                                         // [0x71c29b8] RequiredAPI|Native|Event|Public|BlueprintEvent 
	// Function /Script/Niagara.NiagaraBaselineController.OnBeginTest
	// void OnBeginTest();                                                                                                      // [0x186c4f8] RequiredAPI|Native|Event|Public|BlueprintEvent 
	// Function /Script/Niagara.NiagaraBaselineController.GetSystem
	// class UNiagaraSystem* GetSystem();                                                                                       // [0x641f194] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraBaselineController_Basic
/// Size: 0x0018 (0x000060 - 0x000078)
class UNiagaraBaselineController_Basic : public UNiagaraBaselineController
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(int32_t)                                   NumInstances                                                OFFSET(get<int32_t>, {0x60, 4, 0, 0})
	CMember(TArray<class UNiagaraComponent*>)          SpawnedComponents                                           OFFSET(get<T>, {0x68, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraPerfBaselineActor
/// Size: 0x0010 (0x000290 - 0x0002A0)
class ANiagaraPerfBaselineActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	CMember(class UNiagaraBaselineController*)         Controller                                                  OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(class UTextRenderComponent*)               Label                                                       OFFSET(get<T>, {0x298, 8, 0, 0})
};

/// Class /Script/Niagara.NiagaraPrecompileContainer
/// Size: 0x0018 (0x000028 - 0x000040)
class UNiagaraPrecompileContainer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<class UNiagaraScript*>)             Scripts                                                     OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(class UNiagaraSystem*)                     System                                                      OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/Niagara.NiagaraPreviewBase
/// Size: 0x0000 (0x000290 - 0x000290)
class ANiagaraPreviewBase : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:


	/// Functions
	// Function /Script/Niagara.NiagaraPreviewBase.SetSystem
	// void SetSystem(class UNiagaraSystem* InSystem);                                                                          // [0x130d900] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/Niagara.NiagaraPreviewBase.SetLabelText
	// void SetLabelText(FText& InXAxisText, FText& InYAxisText);                                                               // [0x130d900] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/Niagara.NiagaraPreviewAxis
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraPreviewAxis : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Niagara.NiagaraPreviewAxis.Num
	// int32_t Num();                                                                                                           // [0x61009ac] Native|Event|Public|BlueprintEvent 
	// Function /Script/Niagara.NiagaraPreviewAxis.ApplyToPreview
	// void ApplyToPreview(class UNiagaraComponent* PreviewComponent, int32_t PreviewIndex, bool bIsXAxis, FString& OutLabelText); // [0x71be978] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamBase
/// Size: 0x0008 (0x000028 - 0x000030)
class UNiagaraPreviewAxis_InterpParamBase : public UNiagaraPreviewAxis
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     Param                                                       OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   Count                                                       OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamInt32
/// Size: 0x0008 (0x000030 - 0x000038)
class UNiagaraPreviewAxis_InterpParamInt32 : public UNiagaraPreviewAxis_InterpParamBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int32_t)                                   Min                                                         OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   Max                                                         OFFSET(get<int32_t>, {0x34, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamFloat
/// Size: 0x0008 (0x000030 - 0x000038)
class UNiagaraPreviewAxis_InterpParamFloat : public UNiagaraPreviewAxis_InterpParamBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(float)                                     Min                                                         OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     Max                                                         OFFSET(get<float>, {0x34, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamVector2D
/// Size: 0x0020 (0x000030 - 0x000050)
class UNiagaraPreviewAxis_InterpParamVector2D : public UNiagaraPreviewAxis_InterpParamBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FVector2D)                                 Min                                                         OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FVector2D)                                 Max                                                         OFFSET(getStruct<T>, {0x40, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamVector
/// Size: 0x0030 (0x000030 - 0x000060)
class UNiagaraPreviewAxis_InterpParamVector : public UNiagaraPreviewAxis_InterpParamBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FVector)                                   Min                                                         OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FVector)                                   Max                                                         OFFSET(getStruct<T>, {0x48, 24, 0, 0})
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamVector4
/// Size: 0x0040 (0x000030 - 0x000070)
class UNiagaraPreviewAxis_InterpParamVector4 : public UNiagaraPreviewAxis_InterpParamBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FVector4)                                  Min                                                         OFFSET(getStruct<T>, {0x30, 32, 0, 0})
	SMember(FVector4)                                  Max                                                         OFFSET(getStruct<T>, {0x50, 32, 0, 0})
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamLinearColor
/// Size: 0x0020 (0x000030 - 0x000050)
class UNiagaraPreviewAxis_InterpParamLinearColor : public UNiagaraPreviewAxis_InterpParamBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FLinearColor)                              Min                                                         OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FLinearColor)                              Max                                                         OFFSET(getStruct<T>, {0x40, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraPreviewGrid
/// Size: 0x0050 (0x000290 - 0x0002E0)
class ANiagaraPreviewGrid : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	CMember(class UNiagaraSystem*)                     System                                                      OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(ENiagaraPreviewGridResetMode)              ResetMode                                                   OFFSET(get<T>, {0x298, 1, 0, 0})
	CMember(class UNiagaraPreviewAxis*)                PreviewAxisX                                                OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(class UNiagaraPreviewAxis*)                PreviewAxisY                                                OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(class UClass*)                             PreviewClass                                                OFFSET(get<T>, {0x2B0, 8, 0, 0})
	DMember(float)                                     SpacingX                                                    OFFSET(get<float>, {0x2B8, 4, 0, 0})
	DMember(float)                                     SpacingY                                                    OFFSET(get<float>, {0x2BC, 4, 0, 0})
	DMember(int32_t)                                   NumX                                                        OFFSET(get<int32_t>, {0x2C0, 4, 0, 0})
	DMember(int32_t)                                   NumY                                                        OFFSET(get<int32_t>, {0x2C4, 4, 0, 0})
	CMember(TArray<class UChildActorComponent*>)       PreviewComponents                                           OFFSET(get<T>, {0x2C8, 16, 0, 0})


	/// Functions
	// Function /Script/Niagara.NiagaraPreviewGrid.SetPaused
	// void SetPaused(bool bPaused);                                                                                            // [0x71c48d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraPreviewGrid.GetPreviews
	// void GetPreviews(TArray<UNiagaraComponent*>& OutPreviews);                                                               // [0x71c0d6c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraPreviewGrid.DeactivatePreviews
	// void DeactivatePreviews();                                                                                               // [0x71bf19c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraPreviewGrid.ActivatePreviews
	// void ActivatePreviews(bool bReset);                                                                                      // [0x71be8bc] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraRibbonRendererProperties
/// Size: 0x0530 (0x0000B0 - 0x0005E0)
class UNiagaraRibbonRendererProperties : public UNiagaraRendererProperties
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1504;

public:
	CMember(class UMaterialInterface*)                 Material                                                    OFFSET(get<T>, {0xB0, 8, 0, 0})
	SMember(FNiagaraUserParameterBinding)              MaterialUserParamBinding                                    OFFSET(getStruct<T>, {0xB8, 24, 0, 0})
	SMember(FNiagaraRibbonUVSettings)                  UV0Settings                                                 OFFSET(getStruct<T>, {0xD0, 40, 0, 0})
	SMember(FNiagaraRibbonUVSettings)                  UV1Settings                                                 OFFSET(getStruct<T>, {0xF8, 40, 0, 0})
	CMember(ENiagaraRibbonFacingMode)                  FacingMode                                                  OFFSET(get<T>, {0x120, 1, 0, 0})
	DMember(int32_t)                                   MaxNumRibbons                                               OFFSET(get<int32_t>, {0x124, 4, 0, 0})
	CMember(ENiagaraRibbonDrawDirection)               DrawDirection                                               OFFSET(get<T>, {0x128, 1, 0, 0})
	CMember(ENiagaraRibbonShapeMode)                   Shape                                                       OFFSET(get<T>, {0x129, 1, 0, 0})
	DMember(bool)                                      bEnableAccurateGeometry                                     OFFSET(get<bool>, {0x12A, 1, 1, 0})
	DMember(bool)                                      bUseMaterialBackfaceCulling                                 OFFSET(get<bool>, {0x12A, 1, 1, 1})
	DMember(bool)                                      bUseGeometryNormals                                         OFFSET(get<bool>, {0x12A, 1, 1, 2})
	DMember(bool)                                      bUseGPUInit                                                 OFFSET(get<bool>, {0x12A, 1, 1, 3})
	DMember(bool)                                      bUseConstantFactor                                          OFFSET(get<bool>, {0x12A, 1, 1, 4})
	DMember(bool)                                      bScreenSpaceTessellation                                    OFFSET(get<bool>, {0x12A, 1, 1, 5})
	DMember(bool)                                      bLinkOrderUseUniqueID                                       OFFSET(get<bool>, {0x12A, 1, 1, 6})
	DMember(bool)                                      bCastShadows                                                OFFSET(get<bool>, {0x12A, 1, 1, 7})
	DMember(int32_t)                                   WidthSegmentationCount                                      OFFSET(get<int32_t>, {0x12C, 4, 0, 0})
	DMember(int32_t)                                   MultiPlaneCount                                             OFFSET(get<int32_t>, {0x130, 4, 0, 0})
	DMember(int32_t)                                   TubeSubdivisions                                            OFFSET(get<int32_t>, {0x134, 4, 0, 0})
	CMember(TArray<FNiagaraRibbonShapeCustomVertex>)   CustomVertices                                              OFFSET(get<T>, {0x138, 16, 0, 0})
	CMember(ENiagaraRibbonTessellationMode)            TessellationMode                                            OFFSET(get<T>, {0x148, 1, 0, 0})
	DMember(float)                                     CurveTension                                                OFFSET(get<float>, {0x14C, 4, 0, 0})
	DMember(int32_t)                                   TessellationFactor                                          OFFSET(get<int32_t>, {0x150, 4, 0, 0})
	DMember(float)                                     TessellationAngle                                           OFFSET(get<float>, {0x154, 4, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PositionBinding                                             OFFSET(getStruct<T>, {0x158, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          ColorBinding                                                OFFSET(getStruct<T>, {0x180, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          VelocityBinding                                             OFFSET(getStruct<T>, {0x1A8, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          NormalizedAgeBinding                                        OFFSET(getStruct<T>, {0x1D0, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RibbonTwistBinding                                          OFFSET(getStruct<T>, {0x1F8, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RibbonWidthBinding                                          OFFSET(getStruct<T>, {0x220, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RibbonFacingBinding                                         OFFSET(getStruct<T>, {0x248, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RibbonIdBinding                                             OFFSET(getStruct<T>, {0x270, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RibbonLinkOrderBinding                                      OFFSET(getStruct<T>, {0x298, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          MaterialRandomBinding                                       OFFSET(getStruct<T>, {0x2C0, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DynamicMaterialBinding                                      OFFSET(getStruct<T>, {0x2E8, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DynamicMaterial1Binding                                     OFFSET(getStruct<T>, {0x310, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DynamicMaterial2Binding                                     OFFSET(getStruct<T>, {0x338, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DynamicMaterial3Binding                                     OFFSET(getStruct<T>, {0x360, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RibbonUVDistance                                            OFFSET(getStruct<T>, {0x388, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          U0OverrideBinding                                           OFFSET(getStruct<T>, {0x3B0, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          V0RangeOverrideBinding                                      OFFSET(getStruct<T>, {0x3D8, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          U1OverrideBinding                                           OFFSET(getStruct<T>, {0x400, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          V1RangeOverrideBinding                                      OFFSET(getStruct<T>, {0x428, 40, 0, 0})
	SMember(FNiagaraRendererMaterialParameters)        MaterialParameters                                          OFFSET(getStruct<T>, {0x450, 80, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevPositionBinding                                         OFFSET(getStruct<T>, {0x4A0, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevRibbonWidthBinding                                      OFFSET(getStruct<T>, {0x4C8, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevRibbonFacingBinding                                     OFFSET(getStruct<T>, {0x4F0, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevRibbonTwistBinding                                      OFFSET(getStruct<T>, {0x518, 40, 0, 0})
	DMember(uint32_t)                                  MaterialParamValidMask                                      OFFSET(get<uint32_t>, {0x540, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraScratchPadContainer
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraScratchPadContainer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Niagara.NiagaraScript
/// Size: 0x03B8 (0x000028 - 0x0003E0)
class UNiagaraScript : public UNiagaraScriptBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 992;

public:
	CMember(ENiagaraScriptUsage)                       Usage                                                       OFFSET(get<T>, {0x30, 1, 0, 0})
	SMember(FGuid)                                     UsageId                                                     OFFSET(getStruct<T>, {0x34, 16, 0, 0})
	SMember(FNiagaraParameterStore)                    RapidIterationParameters                                    OFFSET(getStruct<T>, {0x48, 136, 0, 0})
	SMember(FNiagaraScriptExecutionParameterStore)     ScriptExecutionParamStore                                   OFFSET(getStruct<T>, {0xD0, 168, 0, 0})
	CMember(TArray<FNiagaraBoundParameter>)            ScriptExecutionBoundParameters                              OFFSET(get<T>, {0x178, 16, 0, 0})
	SMember(FNiagaraVMExecutableDataId)                CachedScriptVMId                                            OFFSET(getStruct<T>, {0x188, 88, 0, 0})
	SMember(FNiagaraVMExecutableData)                  CachedScriptVM                                              OFFSET(getStruct<T>, {0x1F8, 416, 0, 0})
	CMember(TArray<class UNiagaraParameterCollection*>) CachedParameterCollectionReferences                        OFFSET(get<T>, {0x398, 16, 0, 0})
	CMember(TArray<FNiagaraScriptResolvedDataInterfaceInfo>) ResolvedDataInterfaces                                OFFSET(get<T>, {0x3A8, 16, 0, 0})
	CMember(TArray<FNiagaraResolvedUserDataInterfaceBinding>) ResolvedUserDataInterfaceBindings                    OFFSET(get<T>, {0x3B8, 16, 0, 0})
	CMember(TArray<FNiagaraResolvedUObjectInfo>)       ResolvedUObjectInfos                                        OFFSET(get<T>, {0x3C8, 16, 0, 0})


	/// Functions
	// Function /Script/Niagara.NiagaraScript.RaiseOnGPUCompilationComplete
	// void RaiseOnGPUCompilationComplete();                                                                                    // [0x3047908] Final|Native|Public  
};

/// Class /Script/Niagara.NiagaraSimCache
/// Size: 0x01C0 (0x000028 - 0x0001E8)
class UNiagaraSimCache : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 488;

public:
	SMember(FGuid)                                     CacheGuid                                                   OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	CMember(TWeakObjectPtr<UNiagaraSystem*>)           SoftNiagaraSystem                                           OFFSET(get<T>, {0x38, 32, 0, 0})
	DMember(float)                                     StartSeconds                                                OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     DurationSeconds                                             OFFSET(get<float>, {0x5C, 4, 0, 0})
	SMember(FNiagaraSimCacheCreateParameters)          CreateParameters                                            OFFSET(getStruct<T>, {0x60, 88, 0, 0})
	DMember(bool)                                      bNeedsReadComponentMappingRecache                           OFFSET(get<bool>, {0xB8, 1, 0, 0})
	SMember(FNiagaraSimCacheLayout)                    CacheLayout                                                 OFFSET(getStruct<T>, {0xC0, 192, 0, 0})
	CMember(TArray<FNiagaraSimCacheFrame>)             CacheFrames                                                 OFFSET(get<T>, {0x180, 16, 0, 0})
	CMember(TMap<FNiagaraVariableBase, UObject*>)      DataInterfaceStorage                                        OFFSET(get<T>, {0x190, 80, 0, 0})


	/// Functions
	// Function /Script/Niagara.NiagaraSimCache.ReadVectorAttribute
	// void ReadVectorAttribute(TArray<FVector>& OutValues, FName AttributeName, FName EmitterName, int32_t FrameIndex);        // [0x71eb008] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.ReadVector4Attribute
	// void ReadVector4Attribute(TArray<FVector4>& OutValues, FName AttributeName, FName EmitterName, int32_t FrameIndex);      // [0x71eadd8] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.ReadVector2Attribute
	// void ReadVector2Attribute(TArray<FVector2D>& OutValues, FName AttributeName, FName EmitterName, int32_t FrameIndex);     // [0x71eaa48] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.ReadQuatAttributeWithRebase
	// void ReadQuatAttributeWithRebase(TArray<FQuat>& OutValues, FQuat Quat, FName AttributeName, FName EmitterName, int32_t FrameIndex); // [0x71ea5ac] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.ReadQuatAttribute
	// void ReadQuatAttribute(TArray<FQuat>& OutValues, FName AttributeName, FName EmitterName, bool bLocalSpaceToWorld, int32_t FrameIndex); // [0x71ea11c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.ReadPositionAttributeWithRebase
	// void ReadPositionAttributeWithRebase(TArray<FVector>& OutValues, FTransform Transform, FName AttributeName, FName EmitterName, int32_t FrameIndex); // [0x71e9be0] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.ReadPositionAttribute
	// void ReadPositionAttribute(TArray<FVector>& OutValues, FName AttributeName, FName EmitterName, bool bLocalSpaceToWorld, int32_t FrameIndex); // [0x71e9750] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.ReadIntAttribute
	// void ReadIntAttribute(TArray<int32_t>& OutValues, FName AttributeName, FName EmitterName, int32_t FrameIndex);           // [0x71e93c0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.ReadIDAttribute
	// void ReadIDAttribute(TArray<FNiagaraID>& OutValues, FName AttributeName, FName EmitterName, int32_t FrameIndex);         // [0x71e8a14] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.ReadFloatAttribute
	// void ReadFloatAttribute(TArray<float>& OutValues, FName AttributeName, FName EmitterName, int32_t FrameIndex);           // [0x71e8650] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.ReadColorAttribute
	// void ReadColorAttribute(TArray<FLinearColor>& OutValues, FName AttributeName, FName EmitterName, int32_t FrameIndex);    // [0x71e82c0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.IsEmpty
	// bool IsEmpty();                                                                                                          // [0x71e82a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.IsCacheValid
	// bool IsCacheValid();                                                                                                     // [0x71e8290] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.GetStartSeconds
	// float GetStartSeconds();                                                                                                 // [0x63a5160] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.GetNumFrames
	// int32_t GetNumFrames();                                                                                                  // [0x5fcfecc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.GetNumEmitters
	// int32_t GetNumEmitters();                                                                                                // [0x5ff90f8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.GetEmitterNames
	// TArray<FName> GetEmitterNames();                                                                                         // [0x71e8250] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.GetEmitterName
	// FName GetEmitterName(int32_t EmitterIndex);                                                                              // [0x71e8168] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.GetAttributeCaptureMode
	// ENiagaraSimCacheAttributeCaptureMode GetAttributeCaptureMode();                                                          // [0x612f980] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Niagara.AsyncNiagaraCaptureSimCache
/// Size: 0x0100 (0x000030 - 0x000130)
class UAsyncNiagaraCaptureSimCache : public UCancellableAsyncAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(class UNiagaraSimCache*)                   CaptureSimCache                                             OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UNiagaraComponent*)                  CaptureComponent                                            OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  CaptureComplete                                             OFFSET(getStruct<T>, {0x40, 16, 0, 0})


	/// Functions
	// Function /Script/Niagara.AsyncNiagaraCaptureSimCache.OnCaptureComplete__DelegateSignature
	// void OnCaptureComplete__DelegateSignature(bool bSuccess);                                                                // [0x130d900] MulticastDelegate|Public|Delegate 
	// Function /Script/Niagara.AsyncNiagaraCaptureSimCache.CaptureNiagaraSimCacheUntilComplete
	// class UAsyncNiagaraCaptureSimCache* CaptureNiagaraSimCacheUntilComplete(class UNiagaraSimCache* SimCache, FNiagaraSimCacheCreateParameters CreateParameters, class UNiagaraComponent* NiagaraComponent, class UNiagaraSimCache*& OutSimCache, int32_t CaptureRate, bool bAdvanceSimulation, float AdvanceDeltaTime); // [0x71e7b14] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.AsyncNiagaraCaptureSimCache.CaptureNiagaraSimCacheMultiFrame
	// class UAsyncNiagaraCaptureSimCache* CaptureNiagaraSimCacheMultiFrame(class UNiagaraSimCache* SimCache, FNiagaraSimCacheCreateParameters CreateParameters, class UNiagaraComponent* NiagaraComponent, class UNiagaraSimCache*& OutSimCache, int32_t NumFrames, int32_t CaptureRate, bool bAdvanceSimulation, float AdvanceDeltaTime); // [0x71e74ac] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.AsyncNiagaraCaptureSimCache.CaptureNiagaraSimCache
	// class UAsyncNiagaraCaptureSimCache* CaptureNiagaraSimCache(class UNiagaraSimCache* SimCache, FNiagaraSimCacheCreateParameters CreateParameters, class UNiagaraComponent* NiagaraComponent, FNiagaraSimCacheCaptureParameters CaptureParameters, class UNiagaraSimCache*& OutSimCache); // [0x71e6d08] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraSimCacheFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraSimCacheFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Niagara.NiagaraSimCacheFunctionLibrary.CreateNiagaraSimCache
	// class UNiagaraSimCache* CreateNiagaraSimCache(class UObject* WorldContextObject);                                        // [0x71e808c] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraSimCacheFunctionLibrary.CaptureNiagaraSimCacheImmediate
	// bool CaptureNiagaraSimCacheImmediate(class UNiagaraSimCache* SimCache, FNiagaraSimCacheCreateParameters CreateParameters, class UNiagaraComponent* NiagaraComponent, class UNiagaraSimCache*& OutSimCache, bool bAdvanceSimulation, float AdvanceDeltaTime); // [0x71e704c] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraSimulationStageBase
/// Size: 0x0010 (0x000028 - 0x000038)
class UNiagaraSimulationStageBase : public UNiagaraMergeable
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UNiagaraScript*)                     Script                                                      OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FName)                                     SimulationStageName                                         OFFSET(getStruct<T>, {0x30, 4, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x34, 1, 1, 0})
};

/// Class /Script/Niagara.NiagaraSimulationStageGeneric
/// Size: 0x0140 (0x000038 - 0x000178)
class UNiagaraSimulationStageGeneric : public UNiagaraSimulationStageBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
	SMember(FNiagaraVariableAttributeBinding)          EnabledBinding                                              OFFSET(getStruct<T>, {0x38, 40, 0, 0})
	CMember(ENiagaraIterationSource)                   IterationSource                                             OFFSET(get<T>, {0x60, 1, 0, 0})
	SMember(FNiagaraParameterBindingWithValue)         NumIterations                                               OFFSET(getStruct<T>, {0x68, 24, 0, 0})
	CMember(ENiagaraSimStageExecuteBehavior)           ExecuteBehavior                                             OFFSET(get<T>, {0x80, 1, 0, 0})
	DMember(bool)                                      bDisablePartialParticleUpdate                               OFFSET(get<bool>, {0x84, 1, 1, 0})
	SMember(FNiagaraVariableDataInterfaceBinding)      DataInterface                                               OFFSET(getStruct<T>, {0x88, 24, 0, 0})
	DMember(bool)                                      bParticleIterationStateEnabled                              OFFSET(get<bool>, {0xA0, 1, 1, 0})
	SMember(FNiagaraVariableAttributeBinding)          ParticleIterationStateBinding                               OFFSET(getStruct<T>, {0xA8, 40, 0, 0})
	SMember(FIntPoint)                                 ParticleIterationStateRange                                 OFFSET(getStruct<T>, {0xD0, 8, 0, 0})
	DMember(bool)                                      bGpuDispatchForceLinear                                     OFFSET(get<bool>, {0xD8, 1, 1, 0})
	DMember(bool)                                      bOverrideGpuDispatchNumThreads                              OFFSET(get<bool>, {0xD8, 1, 1, 1})
	SMember(FNiagaraParameterBindingWithValue)         OverrideGpuDispatchNumThreadsX                              OFFSET(getStruct<T>, {0xE0, 24, 0, 0})
	SMember(FNiagaraParameterBindingWithValue)         OverrideGpuDispatchNumThreadsY                              OFFSET(getStruct<T>, {0xF8, 24, 0, 0})
	SMember(FNiagaraParameterBindingWithValue)         OverrideGpuDispatchNumThreadsZ                              OFFSET(getStruct<T>, {0x110, 24, 0, 0})
	CMember(ENiagaraGpuDispatchType)                   DirectDispatchType                                          OFFSET(get<T>, {0x128, 1, 0, 0})
	CMember(ENiagaraDirectDispatchElementType)         DirectDispatchElementType                                   OFFSET(get<T>, {0x129, 1, 0, 0})
	SMember(FNiagaraParameterBindingWithValue)         ElementCountX                                               OFFSET(getStruct<T>, {0x130, 24, 0, 0})
	SMember(FNiagaraParameterBindingWithValue)         ElementCountY                                               OFFSET(getStruct<T>, {0x148, 24, 0, 0})
	SMember(FNiagaraParameterBindingWithValue)         ElementCountZ                                               OFFSET(getStruct<T>, {0x160, 24, 0, 0})
};

/// Class /Script/Niagara.NiagaraSpriteRendererProperties
/// Size: 0x0558 (0x0000B0 - 0x000608)
class UNiagaraSpriteRendererProperties : public UNiagaraRendererProperties
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1544;

public:
	CMember(class UMaterialInterface*)                 Material                                                    OFFSET(get<T>, {0xB0, 8, 0, 0})
	SMember(FNiagaraUserParameterBinding)              MaterialUserParamBinding                                    OFFSET(getStruct<T>, {0xB8, 24, 0, 0})
	CMember(ENiagaraRendererSourceDataMode)            SourceMode                                                  OFFSET(get<T>, {0xD0, 1, 0, 0})
	CMember(ENiagaraSpriteAlignment)                   Alignment                                                   OFFSET(get<T>, {0xD1, 1, 0, 0})
	CMember(ENiagaraSpriteFacingMode)                  FacingMode                                                  OFFSET(get<T>, {0xD2, 1, 0, 0})
	CMember(ENiagaraSortMode)                          SortMode                                                    OFFSET(get<T>, {0xD3, 1, 0, 0})
	DMember(float)                                     MacroUVRadius                                               OFFSET(get<float>, {0xD4, 4, 0, 0})
	SMember(FVector2D)                                 PivotInUVSpace                                              OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
	SMember(FVector2D)                                 SubImageSize                                                OFFSET(getStruct<T>, {0xE8, 16, 0, 0})
	DMember(bool)                                      bSubImageBlend                                              OFFSET(get<bool>, {0xF8, 1, 1, 0})
	DMember(bool)                                      bRemoveHMDRollInVR                                          OFFSET(get<bool>, {0xF8, 1, 1, 1})
	DMember(bool)                                      bSortOnlyWhenTranslucent                                    OFFSET(get<bool>, {0xF8, 1, 1, 2})
	DMember(bool)                                      bEnableCameraDistanceCulling                                OFFSET(get<bool>, {0xF8, 1, 1, 3})
	DMember(bool)                                      bCastShadows                                                OFFSET(get<bool>, {0xF8, 1, 1, 4})
	CMember(ENiagaraRendererSortPrecision)             SortPrecision                                               OFFSET(get<T>, {0xF9, 1, 0, 0})
	CMember(ENiagaraRendererGpuTranslucentLatency)     GpuTranslucentLatency                                       OFFSET(get<T>, {0xFA, 1, 0, 0})
	CMember(ENiagaraRendererPixelCoverageMode)         PixelCoverageMode                                           OFFSET(get<T>, {0xFB, 1, 0, 0})
	DMember(float)                                     PixelCoverageBlend                                          OFFSET(get<float>, {0xFC, 4, 0, 0})
	DMember(float)                                     MinFacingCameraBlendDistance                                OFFSET(get<float>, {0x100, 4, 0, 0})
	DMember(float)                                     MaxFacingCameraBlendDistance                                OFFSET(get<float>, {0x104, 4, 0, 0})
	DMember(float)                                     MinCameraDistance                                           OFFSET(get<float>, {0x108, 4, 0, 0})
	DMember(float)                                     MaxCameraDistance                                           OFFSET(get<float>, {0x10C, 4, 0, 0})
	DMember(uint32_t)                                  RendererVisibility                                          OFFSET(get<uint32_t>, {0x110, 4, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PositionBinding                                             OFFSET(getStruct<T>, {0x118, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          ColorBinding                                                OFFSET(getStruct<T>, {0x140, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          VelocityBinding                                             OFFSET(getStruct<T>, {0x168, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          SpriteRotationBinding                                       OFFSET(getStruct<T>, {0x190, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          SpriteSizeBinding                                           OFFSET(getStruct<T>, {0x1B8, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          SpriteFacingBinding                                         OFFSET(getStruct<T>, {0x1E0, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          SpriteAlignmentBinding                                      OFFSET(getStruct<T>, {0x208, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          SubImageIndexBinding                                        OFFSET(getStruct<T>, {0x230, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DynamicMaterialBinding                                      OFFSET(getStruct<T>, {0x258, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DynamicMaterial1Binding                                     OFFSET(getStruct<T>, {0x280, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DynamicMaterial2Binding                                     OFFSET(getStruct<T>, {0x2A8, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DynamicMaterial3Binding                                     OFFSET(getStruct<T>, {0x2D0, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          CameraOffsetBinding                                         OFFSET(getStruct<T>, {0x2F8, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          UVScaleBinding                                              OFFSET(getStruct<T>, {0x320, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PivotOffsetBinding                                          OFFSET(getStruct<T>, {0x348, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          MaterialRandomBinding                                       OFFSET(getStruct<T>, {0x370, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          CustomSortingBinding                                        OFFSET(getStruct<T>, {0x398, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          NormalizedAgeBinding                                        OFFSET(getStruct<T>, {0x3C0, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RendererVisibilityTagBinding                                OFFSET(getStruct<T>, {0x3E8, 40, 0, 0})
	SMember(FNiagaraRendererMaterialParameters)        MaterialParameters                                          OFFSET(getStruct<T>, {0x410, 80, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevPositionBinding                                         OFFSET(getStruct<T>, {0x460, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevVelocityBinding                                         OFFSET(getStruct<T>, {0x488, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevSpriteRotationBinding                                   OFFSET(getStruct<T>, {0x4B0, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevSpriteSizeBinding                                       OFFSET(getStruct<T>, {0x4D8, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevSpriteFacingBinding                                     OFFSET(getStruct<T>, {0x500, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevSpriteAlignmentBinding                                  OFFSET(getStruct<T>, {0x528, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevCameraOffsetBinding                                     OFFSET(getStruct<T>, {0x550, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevPivotOffsetBinding                                      OFFSET(getStruct<T>, {0x578, 40, 0, 0})
	DMember(uint32_t)                                  MaterialParamValidMask                                      OFFSET(get<uint32_t>, {0x5A0, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraSystem
/// Size: 0x04B8 (0x000048 - 0x000500)
class UNiagaraSystem : public UFXSystemAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1280;

public:
	DMember(bool)                                      bSupportLargeWorldCoordinates                               OFFSET(get<bool>, {0x48, 1, 1, 0})
	DMember(bool)                                      bOverrideCastShadow                                         OFFSET(get<bool>, {0x48, 1, 1, 1})
	DMember(bool)                                      bOverrideReceivesDecals                                     OFFSET(get<bool>, {0x48, 1, 1, 2})
	DMember(bool)                                      bOverrideRenderCustomDepth                                  OFFSET(get<bool>, {0x48, 1, 1, 3})
	DMember(bool)                                      bOverrideCustomDepthStencilValue                            OFFSET(get<bool>, {0x48, 1, 1, 4})
	DMember(bool)                                      bOverrideCustomDepthStencilWriteMask                        OFFSET(get<bool>, {0x48, 1, 1, 5})
	DMember(bool)                                      bOverrideTranslucencySortPriority                           OFFSET(get<bool>, {0x48, 1, 1, 6})
	DMember(bool)                                      bOverrideTranslucencySortDistanceOffset                     OFFSET(get<bool>, {0x48, 1, 1, 7})
	DMember(bool)                                      bCastShadow                                                 OFFSET(get<bool>, {0x49, 1, 1, 0})
	DMember(bool)                                      bReceivesDecals                                             OFFSET(get<bool>, {0x49, 1, 1, 1})
	DMember(bool)                                      bRenderCustomDepth                                          OFFSET(get<bool>, {0x49, 1, 1, 2})
	DMember(bool)                                      bDisableExperimentalVM                                      OFFSET(get<bool>, {0x49, 1, 1, 3})
	DMember(bool)                                      bInitialOwnerVelocityFromActor                              OFFSET(get<bool>, {0x49, 1, 1, 4})
	CMember(ERendererStencilMask)                      CustomDepthStencilWriteMask                                 OFFSET(get<T>, {0x4A, 1, 0, 0})
	DMember(int32_t)                                   CustomDepthStencilValue                                     OFFSET(get<int32_t>, {0x4C, 4, 0, 0})
	DMember(int32_t)                                   TranslucencySortPriority                                    OFFSET(get<int32_t>, {0x50, 4, 0, 0})
	DMember(float)                                     TranslucencySortDistanceOffset                              OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(bool)                                      bDumpDebugSystemInfo                                        OFFSET(get<bool>, {0x58, 1, 0, 0})
	DMember(bool)                                      bDumpDebugEmitterInfo                                       OFFSET(get<bool>, {0x59, 1, 0, 0})
	DMember(bool)                                      bRequireCurrentFrameData                                    OFFSET(get<bool>, {0x5B, 1, 0, 0})
	DMember(bool)                                      bFixedBounds                                                OFFSET(get<bool>, {0x5C, 1, 1, 0})
	CMember(class UNiagaraEffectType*)                 EffectType                                                  OFFSET(get<T>, {0x60, 8, 0, 0})
	DMember(bool)                                      bOverrideScalabilitySettings                                OFFSET(get<bool>, {0x68, 1, 0, 0})
	DMember(bool)                                      bOverrideAllowCullingForLocalPlayers                        OFFSET(get<bool>, {0x6C, 1, 1, 0})
	DMember(bool)                                      bAllowCullingForLocalPlayersOverride                        OFFSET(get<bool>, {0x6C, 1, 1, 1})
	SMember(FNiagaraSystemScalabilityOverrides)        SystemScalabilityOverrides                                  OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	SMember(FNiagaraPlatformSet)                       Platforms                                                   OFFSET(getStruct<T>, {0x80, 48, 0, 0})
	CMember(TArray<FNiagaraEmitterHandle>)             EmitterHandles                                              OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(TArray<class UNiagaraParameterCollectionInstance*>) ParameterCollectionOverrides                       OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(class UNiagaraScript*)                     SystemSpawnScript                                           OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(class UNiagaraScript*)                     SystemUpdateScript                                          OFFSET(get<T>, {0xD8, 8, 0, 0})
	SMember(FNiagaraSystemCompiledData)                SystemCompiledData                                          OFFSET(getStruct<T>, {0xF0, 552, 0, 0})
	SMember(FNiagaraUserRedirectionParameterStore)     ExposedParameters                                           OFFSET(getStruct<T>, {0x318, 216, 0, 0})
	SMember(FBox)                                      FixedBounds                                                 OFFSET(getStruct<T>, {0x3F0, 56, 0, 0})
	DMember(bool)                                      bDeterminism                                                OFFSET(get<bool>, {0x428, 1, 0, 0})
	DMember(int32_t)                                   RandomSeed                                                  OFFSET(get<int32_t>, {0x42C, 4, 0, 0})
	DMember(float)                                     WarmupTime                                                  OFFSET(get<float>, {0x430, 4, 0, 0})
	DMember(int32_t)                                   WarmupTickCount                                             OFFSET(get<int32_t>, {0x434, 4, 0, 0})
	DMember(float)                                     WarmupTickDelta                                             OFFSET(get<float>, {0x438, 4, 0, 0})
	DMember(bool)                                      bFixedTickDelta                                             OFFSET(get<bool>, {0x43C, 1, 0, 0})
	DMember(float)                                     FixedTickDeltaTime                                          OFFSET(get<float>, {0x440, 4, 0, 0})
	DMember(bool)                                      bNeedsGPUContextInitForDataInterfaces                       OFFSET(get<bool>, {0x444, 1, 0, 0})
};

/// Class /Script/Niagara.NiagaraValidationRule
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraValidationRule : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Niagara.NiagaraVolumeRendererProperties
/// Size: 0x0190 (0x0000B0 - 0x000240)
class UNiagaraVolumeRendererProperties : public UNiagaraRendererProperties
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	CMember(class UMaterialInterface*)                 Material                                                    OFFSET(get<T>, {0xB0, 8, 0, 0})
	SMember(FNiagaraParameterBinding)                  MaterialParameterBinding                                    OFFSET(getStruct<T>, {0xB8, 8, 0, 0})
	DMember(int32_t)                                   RendererVisibility                                          OFFSET(get<int32_t>, {0xC4, 4, 0, 0})
	DMember(float)                                     StepFactor                                                  OFFSET(get<float>, {0xC8, 4, 0, 0})
	DMember(float)                                     LightingDownsampleFactor                                    OFFSET(get<float>, {0xCC, 4, 0, 0})
	DMember(float)                                     ShadowStepFactor                                            OFFSET(get<float>, {0xD0, 4, 0, 0})
	DMember(float)                                     ShadowBiasFactor                                            OFFSET(get<float>, {0xD4, 4, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RendererVisibilityTagBinding                                OFFSET(getStruct<T>, {0x150, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          VolumeResolutionMaxAxisBinding                              OFFSET(getStruct<T>, {0x178, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          VolumeWorldSpaceSizeBinding                                 OFFSET(getStruct<T>, {0x1A0, 40, 0, 0})
	SMember(FNiagaraRendererMaterialParameters)        MaterialParameters                                          OFFSET(getStruct<T>, {0x1C8, 80, 0, 0})
};

/// Class /Script/Niagara.VolumeCache
/// Size: 0x0038 (0x000028 - 0x000060)
class UVolumeCache : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FString)                                   FilePath                                                    OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	CMember(EVolumeCacheType)                          CacheType                                                   OFFSET(get<T>, {0x38, 1, 0, 0})
	SMember(FIntVector)                                Resolution                                                  OFFSET(getStruct<T>, {0x3C, 12, 0, 0})
	DMember(int32_t)                                   FrameRangeStart                                             OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	DMember(int32_t)                                   FrameRangeEnd                                               OFFSET(get<int32_t>, {0x4C, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSimCacheCaptureParameters
/// Size: 0x001C (0x000000 - 0x00001C)
class FNiagaraSimCacheCaptureParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	DMember(bool)                                      bAppendToSimCache                                           OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(bool)                                      bCaptureFixedNumberOfFrames                                 OFFSET(get<bool>, {0x0, 1, 1, 1})
	DMember(int32_t)                                   NumFrames                                                   OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   CaptureRate                                                 OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(bool)                                      bUseTimeout                                                 OFFSET(get<bool>, {0xC, 1, 1, 0})
	DMember(int32_t)                                   TimeoutFrameCount                                           OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(bool)                                      bCaptureAllFramesImmediatly                                 OFFSET(get<bool>, {0x14, 1, 1, 0})
	DMember(float)                                     ImmediateCaptureDeltaTime                                   OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSimCacheCreateParameters
/// Size: 0x0058 (0x000000 - 0x000058)
class FNiagaraSimCacheCreateParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(ENiagaraSimCacheAttributeCaptureMode)      AttributeCaptureMode                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(bool)                                      bAllowRebasing                                              OFFSET(get<bool>, {0x4, 1, 1, 0})
	DMember(bool)                                      bAllowDataInterfaceCaching                                  OFFSET(get<bool>, {0x4, 1, 1, 1})
	DMember(bool)                                      bAllowInterpolation                                         OFFSET(get<bool>, {0x4, 1, 1, 2})
	DMember(bool)                                      bAllowVelocityExtrapolation                                 OFFSET(get<bool>, {0x4, 1, 1, 3})
	CMember(TArray<FName>)                             RebaseIncludeAttributes                                     OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FName>)                             RebaseExcludeAttributes                                     OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FName>)                             InterpolationIncludeAttributes                              OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FName>)                             InterpolationExcludeAttributes                              OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FName>)                             ExplicitCaptureAttributes                                   OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Struct /Script/Niagara.NDIRenderTargetVolumeSimCacheFrame
/// Size: 0x0048 (0x000000 - 0x000048)
class FNDIRenderTargetVolumeSimCacheFrame : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FIntVector)                                Size                                                        OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	CMember(TEnumAsByte<EPixelFormat>)                 Format                                                      OFFSET(get<T>, {0xC, 1, 0, 0})
	DMember(int32_t)                                   UncompressedSize                                            OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   CompressedSize                                              OFFSET(get<int32_t>, {0x14, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDataSetID
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraDataSetID : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(ENiagaraDataSetType)                       Type                                                        OFFSET(get<T>, {0x4, 1, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDataSetProperties
/// Size: 0x0018 (0x000000 - 0x000018)
class FNiagaraDataSetProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FNiagaraDataSetID)                         ID                                                          OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	CMember(TArray<FNiagaraVariableBase>)              Variables                                                   OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraVariableBase
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraVariableBase : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FNiagaraTypeDefinitionHandle)              TypeDefHandle                                               OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraTypeDefinitionHandle
/// Size: 0x0004 (0x000000 - 0x000004)
class FNiagaraTypeDefinitionHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   RegisteredTypeIndex                                         OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraScriptDataUsageInfo
/// Size: 0x0001 (0x000000 - 0x000001)
class FNiagaraScriptDataUsageInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bReadsAttributeData                                         OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/Niagara.NiagaraFunctionSignature
/// Size: 0x0090 (0x000000 - 0x000090)
class FNiagaraFunctionSignature : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<FNiagaraVariable>)                  Inputs                                                      OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FNiagaraVariable>)                  Outputs                                                     OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FName)                                     OwnerName                                                   OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	DMember(bool)                                      bRequiresContext                                            OFFSET(get<bool>, {0x2C, 1, 1, 0})
	DMember(bool)                                      bRequiresExecPin                                            OFFSET(get<bool>, {0x2C, 1, 1, 1})
	DMember(bool)                                      bMemberFunction                                             OFFSET(get<bool>, {0x2C, 1, 1, 2})
	DMember(bool)                                      bExperimental                                               OFFSET(get<bool>, {0x2C, 1, 1, 3})
	DMember(bool)                                      bSupportsCPU                                                OFFSET(get<bool>, {0x2C, 1, 1, 4})
	DMember(bool)                                      bSupportsGPU                                                OFFSET(get<bool>, {0x2C, 1, 1, 5})
	DMember(bool)                                      bWriteFunction                                              OFFSET(get<bool>, {0x2C, 1, 1, 6})
	DMember(bool)                                      bReadFunction                                               OFFSET(get<bool>, {0x2C, 1, 1, 7})
	DMember(bool)                                      bSoftDeprecatedFunction                                     OFFSET(get<bool>, {0x2D, 1, 1, 0})
	DMember(bool)                                      bIsCompileTagGenerator                                      OFFSET(get<bool>, {0x2D, 1, 1, 1})
	DMember(bool)                                      bHidden                                                     OFFSET(get<bool>, {0x2D, 1, 1, 2})
	DMember(int32_t)                                   ModuleUsageBitmask                                          OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(uint16_t)                                  MiscUsageBitMask                                            OFFSET(get<uint16_t>, {0x34, 2, 0, 0})
	DMember(int32_t)                                   ContextStageIndex                                           OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(int16_t)                                   RequiredInputs                                              OFFSET(get<int16_t>, {0x3C, 2, 0, 0})
	DMember(int16_t)                                   RequiredOutputs                                             OFFSET(get<int16_t>, {0x3E, 2, 0, 0})
	CMember(TMap<FName, FName>)                        FunctionSpecifiers                                          OFFSET(get<T>, {0x40, 80, 0, 0})
};

/// Struct /Script/Niagara.NiagaraVariable
/// Size: 0x0010 (0x000008 - 0x000018)
class FNiagaraVariable : public FNiagaraVariableBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<char>)                              VarData                                                     OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraScriptUObjectCompileInfo
/// Size: 0x0040 (0x000000 - 0x000040)
class FNiagaraScriptUObjectCompileInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FNiagaraVariableBase)                      Variable                                                    OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	CMember(class UObject*)                            Object                                                      OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FSoftObjectPath)                           ObjectPath                                                  OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	SMember(FName)                                     RegisteredParameterMapRead                                  OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	CMember(TArray<FName>)                             RegisteredParameterMapWrites                                OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraResolvedUObjectInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FNiagaraResolvedUObjectInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     ReadVariableName                                            OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FNiagaraVariableBase)                      ResolvedVariable                                            OFFSET(getStruct<T>, {0x4, 8, 0, 0})
	CMember(class UObject*)                            Object                                                      OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/Niagara.NiagaraExternalUObjectInfo
/// Size: 0x000C (0x000000 - 0x00000C)
class FNiagaraExternalUObjectInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FNiagaraVariableBase)                      Variable                                                    OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     ExternalName                                                OFFSET(getStruct<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraScriptDataInterfaceInfo
/// Size: 0x0040 (0x000000 - 0x000040)
class FNiagaraScriptDataInterfaceInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class UNiagaraDataInterface*)              DataInterface                                               OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FName)                                     CompileName                                                 OFFSET(getStruct<T>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   UserPtrIdx                                                  OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	SMember(FNiagaraTypeDefinition)                    Type                                                        OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FName)                                     RegisteredParameterMapRead                                  OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	SMember(FName)                                     RegisteredParameterMapWrite                                 OFFSET(getStruct<T>, {0x2C, 4, 0, 0})
	SMember(FString)                                   SourceEmitterName                                           OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraTypeDefinition
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraTypeDefinition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UObject*)                            ClassStructOrEnum                                           OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(uint16_t)                                  UnderlyingType                                              OFFSET(get<uint16_t>, {0x8, 2, 0, 0})
	DMember(char)                                      Flags                                                       OFFSET(get<char>, {0xA, 1, 0, 0})
};

/// Struct /Script/Niagara.NiagaraResolvedUserDataInterfaceBinding
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraResolvedUserDataInterfaceBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/Niagara.NiagaraScriptResolvedDataInterfaceInfo
/// Size: 0x0040 (0x000000 - 0x000040)
class FNiagaraScriptResolvedDataInterfaceInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     CompileName                                                 OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FString)                                   ResolvedSourceEmitterName                                   OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FNiagaraVariableBase)                      ResolvedVariable                                            OFFSET(getStruct<T>, {0x18, 8, 0, 0})
	SMember(FNiagaraVariableBase)                      ParameterStoreVariable                                      OFFSET(getStruct<T>, {0x20, 8, 0, 0})
	DMember(bool)                                      bIsInternal                                                 OFFSET(get<bool>, {0x28, 1, 0, 0})
	CMember(class UNiagaraDataInterface*)              ResolvedDataInterface                                       OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(int32_t)                                   UserPtrIdx                                                  OFFSET(get<int32_t>, {0x38, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraScriptDataInterfaceCompileInfo
/// Size: 0x0038 (0x000000 - 0x000038)
class FNiagaraScriptDataInterfaceCompileInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   UserPtrIdx                                                  OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	SMember(FNiagaraTypeDefinition)                    Type                                                        OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FName)                                     RegisteredParameterMapRead                                  OFFSET(getStruct<T>, {0x18, 4, 0, 0})
	SMember(FName)                                     RegisteredParameterMapWrite                                 OFFSET(getStruct<T>, {0x1C, 4, 0, 0})
	DMember(bool)                                      bIsPlaceholder                                              OFFSET(get<bool>, {0x20, 1, 0, 0})
	SMember(FString)                                   SourceEmitterName                                           OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraStatScope
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraStatScope : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     FullName                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     FriendlyName                                                OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/Niagara.VMFunctionSpecifier
/// Size: 0x0008 (0x000000 - 0x000008)
class FVMFunctionSpecifier : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     Key                                                         OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     Value                                                       OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/Niagara.VMExternalFunctionBindingInfo
/// Size: 0x0050 (0x000000 - 0x000050)
class FVMExternalFunctionBindingInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     OwnerName                                                   OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	CMember(TArray<bool>)                              InputParamLocations                                         OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   NumOutputs                                                  OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	CMember(TArray<FVMFunctionSpecifier>)              FunctionSpecifiers                                          OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FNiagaraVariableBase>)              VariadicInputs                                              OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FNiagaraVariableBase>)              VariadicOutputs                                             OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSystemUpdateContext
/// Size: 0x0088 (0x000000 - 0x000088)
class FNiagaraSystemUpdateContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TArray<class UNiagaraComponent*>)          ComponentsToReset                                           OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<class UNiagaraComponent*>)          ComponentsToReInit                                          OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<class UNiagaraComponent*>)          ComponentsToNotifySimDestroy                                OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<class UNiagaraComponent*>)          ComponentsToDestroyInstance                                 OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<class UNiagaraSystem*>)             SystemSimsToDestroy                                         OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<class UNiagaraSystem*>)             SystemSimsToRecache                                         OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraVariableInfo
/// Size: 0x0038 (0x000000 - 0x000038)
class FNiagaraVariableInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FNiagaraVariable)                          Variable                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FText)                                     Definition                                                  OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	CMember(class UNiagaraDataInterface*)              DataInterface                                               OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Struct /Script/Niagara.NiagaraVariableAttributeBinding
/// Size: 0x0028 (0x000000 - 0x000028)
class FNiagaraVariableAttributeBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FNiagaraVariable)                          RootVariable                                                OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FNiagaraVariableBase)                      ParamMapVariable                                            OFFSET(getStruct<T>, {0x18, 8, 0, 0})
	SMember(FName)                                     DataSetName                                                 OFFSET(getStruct<T>, {0x20, 4, 0, 0})
	CMember(TEnumAsByte<ENiagaraBindingSource>)        BindingSourceMode                                           OFFSET(get<T>, {0x24, 1, 0, 0})
	DMember(bool)                                      bBindingExistsOnSource                                      OFFSET(get<bool>, {0x25, 1, 1, 0})
	DMember(bool)                                      bIsCachedParticleValue                                      OFFSET(get<bool>, {0x25, 1, 1, 1})
};

/// Struct /Script/Niagara.NiagaraMaterialAttributeBinding
/// Size: 0x001C (0x000000 - 0x00001C)
class FNiagaraMaterialAttributeBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	SMember(FName)                                     MaterialParameterName                                       OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FNiagaraVariableBase)                      NiagaraVariable                                             OFFSET(getStruct<T>, {0x4, 8, 0, 0})
	SMember(FNiagaraVariableBase)                      ResolvedNiagaraVariable                                     OFFSET(getStruct<T>, {0xC, 8, 0, 0})
	SMember(FNiagaraVariableBase)                      NiagaraChildVariable                                        OFFSET(getStruct<T>, {0x14, 8, 0, 0})
};

/// Struct /Script/Niagara.NiagaraVariableDataInterfaceBinding
/// Size: 0x0018 (0x000000 - 0x000018)
class FNiagaraVariableDataInterfaceBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FNiagaraVariable)                          BoundVariable                                               OFFSET(getStruct<T>, {0x0, 24, 0, 0})
};

/// Struct /Script/Niagara.NiagaraScriptVariableBinding
/// Size: 0x0004 (0x000000 - 0x000004)
class FNiagaraScriptVariableBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraUserParameterBinding
/// Size: 0x0018 (0x000000 - 0x000018)
class FNiagaraUserParameterBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FNiagaraVariable)                          Parameter                                                   OFFSET(getStruct<T>, {0x0, 24, 0, 0})
};

/// Struct /Script/Niagara.NiagaraCompileDependency
/// Size: 0x0050 (0x000000 - 0x000050)
class FNiagaraCompileDependency : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FString)                                   LinkerErrorMessage                                          OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FGuid)                                     NodeGUID                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FGuid)                                     PinGuid                                                     OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	CMember(TArray<FGuid>)                             StackGuids                                                  OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FNiagaraVariableBase)                      DependentVariable                                           OFFSET(getStruct<T>, {0x40, 8, 0, 0})
	DMember(bool)                                      bDependentVariableFromCustomIterationNamespace              OFFSET(get<bool>, {0x48, 1, 0, 0})
};

/// Struct /Script/Niagara.NiagaraScriptAsyncCompileData
/// Size: 0x0100 (0x000000 - 0x000100)
class FNiagaraScriptAsyncCompileData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	CMember(TArray<FNiagaraVariable>)                  RapidIterationParameters                                    OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TMap<FName, UNiagaraDataInterface*>)       NamedDataInterfaces                                         OFFSET(get<T>, {0xB0, 80, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSystemAsyncCompileResults
/// Size: 0x0088 (0x000000 - 0x000088)
class FNiagaraSystemAsyncCompileResults : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TArray<class UObject*>)                    RootObjects                                                 OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FNiagaraVariable>)                  ExposedVariables                                            OFFSET(get<T>, {0x68, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraCompileHashVisitorDebugInfo
/// Size: 0x0030 (0x000000 - 0x000030)
class FNiagaraCompileHashVisitorDebugInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   Object                                                      OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TArray<FString>)                           PropertyKeys                                                OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FString>)                           PropertyValues                                              OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDataChannelSearchParameters
/// Size: 0x0028 (0x000000 - 0x000028)
class FNiagaraDataChannelSearchParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class USceneComponent*)                    OwningComponent                                             OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	DMember(bool)                                      bOverrideLocation                                           OFFSET(get<bool>, {0x20, 1, 1, 0})
};

/// Struct /Script/Niagara.NiagaraDataChannelGameDataLayout
/// Size: 0x0060 (0x000000 - 0x000060)
class FNiagaraDataChannelGameDataLayout : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TMap<FNiagaraVariableBase, int32_t>)       VariableIndices                                             OFFSET(get<T>, {0x0, 80, 0, 0})
	CMember(TArray<FNiagaraLwcStructConverter>)        LwcConverters                                               OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraLwcStructConverter
/// Size: 0x0018 (0x000000 - 0x000018)
class FNiagaraLwcStructConverter : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   LWCSize                                                     OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   SWCSize                                                     OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	CMember(TArray<FNiagaraStructConversionStep>)      ConversionSteps                                             OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraStructConversionStep
/// Size: 0x0014 (0x000000 - 0x000014)
class FNiagaraStructConversionStep : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(int32_t)                                   LWCBytes                                                    OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   LWCOffset                                                   OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   SimulationBytes                                             OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   SimulationOffset                                            OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	CMember(ENiagaraStructConversionType)              ConversionType                                              OFFSET(get<T>, {0x10, 1, 0, 0})
};

/// Struct /Script/Niagara.NDCIsland
/// Size: 0x0070 (0x000000 - 0x000070)
class FNDCIsland : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(class UNiagaraDataChannelHandler_Islands*) Owner                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FBoxSphereBounds)                          Bounds                                                      OFFSET(getStruct<T>, {0x8, 56, 0, 0})
	CMember(TArray<class UNiagaraComponent*>)          NiagaraSystems                                              OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/Niagara.NDCIslandDebugDrawSettings
/// Size: 0x0004 (0x000000 - 0x000004)
class FNDCIslandDebugDrawSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(bool)                                      bShowIslandBounds                                           OFFSET(get<bool>, {0x0, 1, 1, 1})
};

/// Struct /Script/Niagara.NDIDataChannelFunctionInfo
/// Size: 0x0028 (0x000000 - 0x000028)
class FNDIDataChannelFunctionInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     FunctionName                                                OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<FNiagaraVariableBase>)              Inputs                                                      OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FNiagaraVariableBase>)              Outputs                                                     OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/Niagara.NDIDataChannel_GPUScriptParameterAccessInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FNDIDataChannel_GPUScriptParameterAccessInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FNiagaraVariableBase>)              SortedParameters                                            OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Niagara.NDIDataChannelCompiledData
/// Size: 0x0068 (0x000000 - 0x000068)
class FNDIDataChannelCompiledData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TArray<FNDIDataChannelFunctionInfo>)       FunctionInfo                                                OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TMap<FNiagaraCompileHash, FNDIDataChannel_GPUScriptParameterAccessInfo>) GPUScriptParameterInfos       OFFSET(get<T>, {0x10, 80, 0, 0})
	DMember(uint32_t)                                  TotalParams                                                 OFFSET(get<uint32_t>, {0x60, 4, 0, 0})
	DMember(bool)                                      bUsedByCPU                                                  OFFSET(get<bool>, {0x64, 1, 0, 0})
	DMember(bool)                                      bUsedByGPU                                                  OFFSET(get<bool>, {0x65, 1, 0, 0})
};

/// Struct /Script/Niagara.NDIDataChannelWriteCompiledData
/// Size: 0x0040 (0x000068 - 0x0000A8)
class FNDIDataChannelWriteCompiledData : public FNDIDataChannelCompiledData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FNiagaraDataSetCompiledData)               DataLayout                                                  OFFSET(getStruct<T>, {0x68, 64, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDataSetCompiledData
/// Size: 0x0040 (0x000000 - 0x000040)
class FNiagaraDataSetCompiledData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FNiagaraVariableBase>)              Variables                                                   OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FNiagaraVariableLayoutInfo>)        VariableLayouts                                             OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FNiagaraDataSetID)                         ID                                                          OFFSET(getStruct<T>, {0x20, 8, 0, 0})
	DMember(uint32_t)                                  TotalFloatComponents                                        OFFSET(get<uint32_t>, {0x28, 4, 0, 0})
	DMember(uint32_t)                                  TotalInt32Components                                        OFFSET(get<uint32_t>, {0x2C, 4, 0, 0})
	DMember(uint32_t)                                  TotalHalfComponents                                         OFFSET(get<uint32_t>, {0x30, 4, 0, 0})
	DMember(bool)                                      bRequiresPersistentIDs                                      OFFSET(get<bool>, {0x34, 1, 1, 0})
	CMember(ENiagaraSimTarget)                         SimTarget                                                   OFFSET(get<T>, {0x38, 1, 0, 0})
};

/// Struct /Script/Niagara.NiagaraVariableLayoutInfo
/// Size: 0x0020 (0x000000 - 0x000020)
class FNiagaraVariableLayoutInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(uint16_t)                                  FloatComponentStart                                         OFFSET(get<uint16_t>, {0x0, 2, 0, 0})
	DMember(uint16_t)                                  Int32ComponentStart                                         OFFSET(get<uint16_t>, {0x2, 2, 0, 0})
	DMember(uint16_t)                                  HalfComponentStart                                          OFFSET(get<uint16_t>, {0x4, 2, 0, 0})
	SMember(FNiagaraTypeLayoutInfo)                    LayoutInfo                                                  OFFSET(getStruct<T>, {0x8, 24, 0, 0})
};

/// Struct /Script/Niagara.NiagaraTypeLayoutInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FNiagaraTypeLayoutInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(uint16_t)                                  NumFloatComponents                                          OFFSET(get<uint16_t>, {0x0, 2, 0, 0})
	DMember(uint16_t)                                  NumInt32Components                                          OFFSET(get<uint16_t>, {0x2, 2, 0, 0})
	DMember(uint16_t)                                  NumHalfComponents                                           OFFSET(get<uint16_t>, {0x4, 2, 0, 0})
	CMember(TArray<uint32_t>)                          ComponentsOffsets                                           OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraMessageStore
/// Size: 0x0001 (0x000000 - 0x000001)
class FNiagaraMessageStore : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/Niagara.NiagaraParameterBinding
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraParameterBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FNiagaraVariableBase)                      ResolvedParameter                                           OFFSET(getStruct<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/Niagara.NiagaraParameterBindingWithValue
/// Size: 0x0010 (0x000008 - 0x000018)
class FNiagaraParameterBindingWithValue : public FNiagaraParameterBinding
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<char>)                              DefaultValue                                                OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraScalabilityState
/// Size: 0x000C (0x000000 - 0x00000C)
class FNiagaraScalabilityState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     Significance                                                OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     LastVisibleTime                                             OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      bNewlyRegistered                                            OFFSET(get<bool>, {0xA, 1, 1, 0})
	DMember(bool)                                      bNewlyRegisteredDirty                                       OFFSET(get<bool>, {0xA, 1, 1, 1})
	DMember(bool)                                      bCulled                                                     OFFSET(get<bool>, {0xA, 1, 1, 2})
	DMember(bool)                                      bPreviousCulled                                             OFFSET(get<bool>, {0xA, 1, 1, 3})
	DMember(bool)                                      bCulledByDistance                                           OFFSET(get<bool>, {0xA, 1, 1, 4})
	DMember(bool)                                      bCulledByInstanceCount                                      OFFSET(get<bool>, {0xA, 1, 1, 5})
	DMember(bool)                                      bCulledByVisibility                                         OFFSET(get<bool>, {0xA, 1, 1, 6})
	DMember(bool)                                      bCulledByGlobalBudget                                       OFFSET(get<bool>, {0xA, 1, 1, 7})
};

/// Struct /Script/Niagara.NiagaraStackSection
/// Size: 0x0050 (0x000000 - 0x000050)
class FNiagaraStackSection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FName)                                     SectionIdentifier                                           OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FText)                                     SectionDisplayName                                          OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	CMember(TArray<FText>)                             Categories                                                  OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FText)                                     ToolTip                                                     OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x48, 1, 0, 0})
};

/// Struct /Script/Niagara.NiagaraInputConditionMetadata
/// Size: 0x0018 (0x000000 - 0x000018)
class FNiagaraInputConditionMetadata : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     InputName                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<FString>)                           TargetValues                                                OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraEnumParameterMetaData
/// Size: 0x0028 (0x000000 - 0x000028)
class FNiagaraEnumParameterMetaData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     OverrideName                                                OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(class UTexture2D*)                         IconOverride                                                OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bUseColorOverride                                           OFFSET(get<bool>, {0x10, 1, 0, 0})
	SMember(FLinearColor)                              ColorOverride                                               OFFSET(getStruct<T>, {0x14, 16, 0, 0})
};

/// Struct /Script/Niagara.WidgetNamedInputValue
/// Size: 0x0038 (0x000000 - 0x000038)
class FWidgetNamedInputValue : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FText)                                     ToolTip                                                     OFFSET(getStruct<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/Niagara.WidgetSegmentValueOverride
/// Size: 0x0028 (0x000000 - 0x000028)
class FWidgetSegmentValueOverride : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   EnumIndexToOverride                                         OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(bool)                                      bOverrideDisplayName                                        OFFSET(get<bool>, {0x4, 1, 0, 0})
	SMember(FText)                                     DisplayNameOverride                                         OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	CMember(class UTexture2D*)                         DisplayIcon                                                 OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/Niagara.NiagaraWidgetNamedIntegerInputValue
/// Size: 0x0030 (0x000000 - 0x000030)
class FNiagaraWidgetNamedIntegerInputValue : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FText)                                     ToolTip                                                     OFFSET(getStruct<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/Niagara.NiagaraInputParameterCustomization
/// Size: 0x0058 (0x000000 - 0x000058)
class FNiagaraInputParameterCustomization : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(ENiagaraInputWidgetType)                   WidgetType                                                  OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(bool)                                      bHasMinValue                                                OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(float)                                     MinValue                                                    OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      bHasMaxValue                                                OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(float)                                     MaxValue                                                    OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      bHasStepWidth                                               OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(float)                                     StepWidth                                                   OFFSET(get<float>, {0x14, 4, 0, 0})
	CMember(TArray<FWidgetNamedInputValue>)            InputDropdownValues                                         OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FNiagaraWidgetNamedIntegerInputValue>) EnumStyleDropdownValues                                  OFFSET(get<T>, {0x28, 16, 0, 0})
	DMember(int32_t)                                   MaxSegmentsPerRow                                           OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	CMember(TArray<FWidgetSegmentValueOverride>)       SegmentValueOverrides                                       OFFSET(get<T>, {0x40, 16, 0, 0})
	DMember(bool)                                      bBroadcastValueChangesOnCommitOnly                          OFFSET(get<bool>, {0x50, 1, 0, 0})
};

/// Struct /Script/Niagara.NiagaraBoolParameterMetaData
/// Size: 0x0020 (0x000000 - 0x000020)
class FNiagaraBoolParameterMetaData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(ENiagaraBoolDisplayMode)                   DisplayMode                                                 OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FName)                                     OverrideNameTrue                                            OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FName)                                     OverrideNameFalse                                           OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	CMember(class UTexture2D*)                         IconOverrideTrue                                            OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class UTexture2D*)                         IconOverrideFalse                                           OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/Niagara.NiagaraVariableMetaData
/// Size: 0x0198 (0x000000 - 0x000198)
class FNiagaraVariableMetaData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 408;

public:
	SMember(FText)                                     Description                                                 OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FText)                                     CategoryName                                                OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	CMember(EUnit)                                     DisplayUnit                                                 OFFSET(get<T>, {0x30, 1, 0, 0})
	DMember(bool)                                      bAdvancedDisplay                                            OFFSET(get<bool>, {0x31, 1, 0, 0})
	DMember(bool)                                      bDisplayInOverviewStack                                     OFFSET(get<bool>, {0x32, 1, 0, 0})
	DMember(int32_t)                                   InlineParameterSortPriority                                 OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	DMember(bool)                                      bOverrideColor                                              OFFSET(get<bool>, {0x38, 1, 0, 0})
	SMember(FLinearColor)                              InlineParameterColorOverride                                OFFSET(getStruct<T>, {0x3C, 16, 0, 0})
	CMember(TArray<FNiagaraEnumParameterMetaData>)     InlineParameterEnumOverrides                                OFFSET(get<T>, {0x50, 16, 0, 0})
	DMember(bool)                                      bEnableBoolOverride                                         OFFSET(get<bool>, {0x60, 1, 0, 0})
	SMember(FNiagaraBoolParameterMetaData)             InlineParameterBoolOverride                                 OFFSET(getStruct<T>, {0x68, 32, 0, 0})
	DMember(int32_t)                                   EditorSortPriority                                          OFFSET(get<int32_t>, {0x88, 4, 0, 0})
	DMember(bool)                                      bInlineEditConditionToggle                                  OFFSET(get<bool>, {0x8C, 1, 0, 0})
	SMember(FNiagaraInputConditionMetadata)            EditCondition                                               OFFSET(getStruct<T>, {0x90, 24, 0, 0})
	SMember(FNiagaraInputConditionMetadata)            VisibleCondition                                            OFFSET(getStruct<T>, {0xA8, 24, 0, 0})
	CMember(TMap<FName, FString>)                      PropertyMetaData                                            OFFSET(get<T>, {0xC0, 80, 0, 0})
	SMember(FName)                                     ParentAttribute                                             OFFSET(getStruct<T>, {0x110, 4, 0, 0})
	CMember(TArray<FName>)                             AlternateAliases                                            OFFSET(get<T>, {0x118, 16, 0, 0})
	SMember(FNiagaraInputParameterCustomization)       WidgetCustomization                                         OFFSET(getStruct<T>, {0x128, 88, 0, 0})
	SMember(FGuid)                                     VariableGuid                                                OFFSET(getStruct<T>, {0x180, 16, 0, 0})
	DMember(bool)                                      bIsStaticSwitch                                             OFFSET(get<bool>, {0x190, 1, 0, 0})
	DMember(int32_t)                                   StaticSwitchDefaultValue                                    OFFSET(get<int32_t>, {0x194, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDynamicMeshSection
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraDynamicMeshSection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   NumTriangles                                                OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   MaterialIndex                                               OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDynamicMeshMaterial
/// Size: 0x0020 (0x000000 - 0x000020)
class FNiagaraDynamicMeshMaterial : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(class UMaterialInterface*)                 Material                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FNiagaraUserParameterBinding)              MaterialUserParamBinding                                    OFFSET(getStruct<T>, {0x8, 24, 0, 0})
};

/// Struct /Script/Niagara.NDIStaticMeshSectionFilter
/// Size: 0x0010 (0x000000 - 0x000010)
class FNDIStaticMeshSectionFilter : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<int32_t>)                           AllowedMaterialSlots                                        OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraUObjectPropertyReaderRemap
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraUObjectPropertyReaderRemap : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     GraphName                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     RemapName                                                   OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/Niagara.MovieSceneNiagaraSystemTrackTemplate
/// Size: 0x0000 (0x000020 - 0x000020)
class FMovieSceneNiagaraSystemTrackTemplate : public FMovieSceneEvalTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/Niagara.MovieSceneNiagaraSystemTrackImplementation
/// Size: 0x0018 (0x000010 - 0x000028)
class FMovieSceneNiagaraSystemTrackImplementation : public FMovieSceneTrackImplementation
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FFrameNumber)                              SpawnSectionStartFrame                                      OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	SMember(FFrameNumber)                              SpawnSectionEndFrame                                        OFFSET(getStruct<T>, {0x14, 4, 0, 0})
	CMember(ENiagaraSystemSpawnSectionStartBehavior)   SpawnSectionStartBehavior                                   OFFSET(get<T>, {0x18, 4, 0, 0})
	CMember(ENiagaraSystemSpawnSectionEvaluateBehavior) SpawnSectionEvaluateBehavior                               OFFSET(get<T>, {0x1C, 4, 0, 0})
	CMember(ENiagaraSystemSpawnSectionEndBehavior)     SpawnSectionEndBehavior                                     OFFSET(get<T>, {0x20, 4, 0, 0})
	CMember(ENiagaraAgeUpdateMode)                     AgeUpdateMode                                               OFFSET(get<T>, {0x24, 1, 0, 0})
	DMember(bool)                                      bAllowScalability                                           OFFSET(get<bool>, {0x25, 1, 0, 0})
};

/// Struct /Script/Niagara.MovieSceneNiagaraParameterSectionTemplate
/// Size: 0x0018 (0x000020 - 0x000038)
class FMovieSceneNiagaraParameterSectionTemplate : public FMovieSceneEvalTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FNiagaraVariable)                          Parameter                                                   OFFSET(getStruct<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/Niagara.MovieSceneNiagaraBoolParameterSectionTemplate
/// Size: 0x0108 (0x000038 - 0x000140)
class FMovieSceneNiagaraBoolParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FMovieSceneBoolChannel)                    BoolChannel                                                 OFFSET(getStruct<T>, {0x38, 264, 0, 0})
};

/// Struct /Script/Niagara.MovieSceneNiagaraColorParameterSectionTemplate
/// Size: 0x0440 (0x000038 - 0x000478)
class FMovieSceneNiagaraColorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1144;

public:
	SMember(FMovieSceneFloatChannel)                   RedChannel                                                  OFFSET(getStruct<T>, {0x38, 272, 0, 0})
	SMember(FMovieSceneFloatChannel)                   GreenChannel                                                OFFSET(getStruct<T>, {0x148, 272, 0, 0})
	SMember(FMovieSceneFloatChannel)                   BlueChannel                                                 OFFSET(getStruct<T>, {0x258, 272, 0, 0})
	SMember(FMovieSceneFloatChannel)                   AlphaChannel                                                OFFSET(getStruct<T>, {0x368, 272, 0, 0})
};

/// Struct /Script/Niagara.MovieSceneNiagaraFloatParameterSectionTemplate
/// Size: 0x0110 (0x000038 - 0x000148)
class FMovieSceneNiagaraFloatParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	SMember(FMovieSceneFloatChannel)                   FloatChannel                                                OFFSET(getStruct<T>, {0x38, 272, 0, 0})
};

/// Struct /Script/Niagara.MovieSceneNiagaraIntegerParameterSectionTemplate
/// Size: 0x0108 (0x000038 - 0x000140)
class FMovieSceneNiagaraIntegerParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FMovieSceneIntegerChannel)                 IntegerChannel                                              OFFSET(getStruct<T>, {0x38, 264, 0, 0})
};

/// Struct /Script/Niagara.MovieSceneNiagaraVectorParameterSectionTemplate
/// Size: 0x0448 (0x000038 - 0x000480)
class FMovieSceneNiagaraVectorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1152;

public:
	SMember(FMovieSceneFloatChannel)                   VectorChannels                                              OFFSET(getStruct<T>, {0x38, 1088, 0, 0})
	DMember(int32_t)                                   ChannelsUsed                                                OFFSET(get<int32_t>, {0x478, 4, 0, 0})
};

/// Struct /Script/Niagara.EmitterCompiledScriptPair
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FEmitterCompiledScriptPair : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Struct /Script/Niagara.NiagaraBakerTextureSource
/// Size: 0x0018 (0x000000 - 0x000018)
class FNiagaraBakerTextureSource : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   DisplayString                                               OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FName)                                     SourceName                                                  OFFSET(getStruct<T>, {0x10, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraBakerCameraSettings
/// Size: 0x0050 (0x000000 - 0x000050)
class FNiagaraBakerCameraSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(ENiagaraBakerViewMode)                     ViewMode                                                    OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FVector)                                   ViewportLocation                                            OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FRotator)                                  ViewportRotation                                            OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	DMember(float)                                     OrbitDistance                                               OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     FOV                                                         OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     OrthoWidth                                                  OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(bool)                                      bUseAspectRatio                                             OFFSET(get<bool>, {0x44, 1, 0, 0})
	DMember(float)                                     AspectRatio                                                 OFFSET(get<float>, {0x48, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraBakerTextureSettings
/// Size: 0x0040 (0x000000 - 0x000040)
class FNiagaraBakerTextureSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FName)                                     OutputName                                                  OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FNiagaraBakerTextureSource)                SourceBinding                                               OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	DMember(bool)                                      bUseFrameSize                                               OFFSET(get<bool>, {0x20, 1, 1, 0})
	SMember(FIntPoint)                                 FrameSize                                                   OFFSET(getStruct<T>, {0x24, 8, 0, 0})
	SMember(FIntPoint)                                 TextureSize                                                 OFFSET(getStruct<T>, {0x2C, 8, 0, 0})
	CMember(class UTexture2D*)                         GeneratedTexture                                            OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Struct /Script/Niagara.NCPoolElement
/// Size: 0x0010 (0x000000 - 0x000010)
class FNCPoolElement : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UNiagaraComponent*)                  Component                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/Niagara.NCPool
/// Size: 0x0010 (0x000000 - 0x000010)
class FNCPool : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FNCPoolElement>)                    FreeElements                                                OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraComponentPropertyBinding
/// Size: 0x0098 (0x000000 - 0x000098)
class FNiagaraComponentPropertyBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FNiagaraVariableAttributeBinding)          AttributeBinding                                            OFFSET(getStruct<T>, {0x0, 40, 0, 0})
	SMember(FName)                                     PropertyName                                                OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	SMember(FNiagaraTypeDefinition)                    PropertyType                                                OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FName)                                     MetadataSetterName                                          OFFSET(getStruct<T>, {0x40, 4, 0, 0})
	CMember(TMap<FString, FString>)                    PropertySetterParameterDefaults                             OFFSET(get<T>, {0x48, 80, 0, 0})
};

/// Struct /Script/Niagara.NiagaraCulledComponentInfo
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraCulledComponentInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/Niagara.NiagaraDataInterfaceEmitterBinding
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraDataInterfaceEmitterBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(ENiagaraDataInterfaceEmitterBindingMode)   BindingMode                                                 OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     EmitterName                                                 OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/Niagara.BasicParticleData
/// Size: 0x0038 (0x000000 - 0x000038)
class FBasicParticleData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector)                                   Position                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	DMember(float)                                     Size                                                        OFFSET(get<float>, {0x18, 4, 0, 0})
	SMember(FVector)                                   Velocity                                                    OFFSET(getStruct<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/Niagara.MeshTriCoordinate
/// Size: 0x0010 (0x000000 - 0x000010)
class FMeshTriCoordinate : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   Tri                                                         OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FVector3f)                                 BaryCoord                                                   OFFSET(getStruct<T>, {0x4, 12, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDataInterfaceSplineLUT
/// Size: 0x0040 (0x000000 - 0x000040)
class FNiagaraDataInterfaceSplineLUT : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FVector>)                           Positions                                                   OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FVector>)                           Scales                                                      OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FQuat>)                             Rotations                                                   OFFSET(get<T>, {0x20, 16, 0, 0})
	DMember(float)                                     SplineLength                                                OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     SplineDistanceStep                                          OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     InvSplineDistanceStep                                       OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   MaxIndex                                                    OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraOutlinerTimingData
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraOutlinerTimingData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     GameThread                                                  OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     RenderThread                                                OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraOutlinerEmitterInstanceData
/// Size: 0x0020 (0x000000 - 0x000020)
class FNiagaraOutlinerEmitterInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   EmitterName                                                 OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(ENiagaraSimTarget)                         SimTarget                                                   OFFSET(get<T>, {0x10, 1, 0, 0})
	CMember(ENiagaraExecutionState)                    ExecState                                                   OFFSET(get<T>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   NumParticles                                                OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(bool)                                      bRequiresPersistentIDs                                      OFFSET(get<bool>, {0x1C, 1, 1, 0})
};

/// Struct /Script/Niagara.NiagaraOutlinerSystemInstanceData
/// Size: 0x0068 (0x000000 - 0x000068)
class FNiagaraOutlinerSystemInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FString)                                   ComponentName                                               OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FVector3f)                                 LWCTile                                                     OFFSET(getStruct<T>, {0x10, 12, 0, 0})
	CMember(TArray<FNiagaraOutlinerEmitterInstanceData>) Emitters                                                  OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(ENiagaraExecutionState)                    ActualExecutionState                                        OFFSET(get<T>, {0x30, 4, 0, 0})
	CMember(ENiagaraExecutionState)                    RequestedExecutionState                                     OFFSET(get<T>, {0x34, 4, 0, 0})
	SMember(FNiagaraScalabilityState)                  ScalabilityState                                            OFFSET(getStruct<T>, {0x38, 12, 0, 0})
	DMember(bool)                                      bPendingKill                                                OFFSET(get<bool>, {0x44, 1, 1, 0})
	DMember(bool)                                      bUsingCullProxy                                             OFFSET(get<bool>, {0x44, 1, 1, 1})
	CMember(ENCPoolMethod)                             PoolMethod                                                  OFFSET(get<T>, {0x48, 1, 0, 0})
	SMember(FNiagaraOutlinerTimingData)                AverageTime                                                 OFFSET(getStruct<T>, {0x4C, 8, 0, 0})
	SMember(FNiagaraOutlinerTimingData)                MaxTime                                                     OFFSET(getStruct<T>, {0x54, 8, 0, 0})
	CMember(TEnumAsByte<ETickingGroup>)                TickGroup                                                   OFFSET(get<T>, {0x5C, 1, 0, 0})
	CMember(TEnumAsByte<ENiagaraGpuComputeTickStage>)  GpuTickStage                                                OFFSET(get<T>, {0x5D, 1, 0, 0})
	DMember(bool)                                      bIsSolo                                                     OFFSET(get<bool>, {0x60, 1, 1, 0})
	DMember(bool)                                      bRequiresDistanceFieldData                                  OFFSET(get<bool>, {0x60, 1, 1, 1})
	DMember(bool)                                      bRequiresDepthBuffer                                        OFFSET(get<bool>, {0x60, 1, 1, 2})
	DMember(bool)                                      bRequiresEarlyViewData                                      OFFSET(get<bool>, {0x60, 1, 1, 3})
	DMember(bool)                                      bRequiresViewUniformBuffer                                  OFFSET(get<bool>, {0x60, 1, 1, 4})
	DMember(bool)                                      bRequiresRayTracingScene                                    OFFSET(get<bool>, {0x60, 1, 1, 5})
};

/// Struct /Script/Niagara.NiagaraOutlinerSystemData
/// Size: 0x0030 (0x000000 - 0x000030)
class FNiagaraOutlinerSystemData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FNiagaraOutlinerSystemInstanceData>) SystemInstances                                            OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FNiagaraOutlinerTimingData)                AveragePerFrameTime                                         OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	SMember(FNiagaraOutlinerTimingData)                MaxPerFrameTime                                             OFFSET(getStruct<T>, {0x18, 8, 0, 0})
	SMember(FNiagaraOutlinerTimingData)                AveragePerInstanceTime                                      OFFSET(getStruct<T>, {0x20, 8, 0, 0})
	SMember(FNiagaraOutlinerTimingData)                MaxPerInstanceTime                                          OFFSET(getStruct<T>, {0x28, 8, 0, 0})
};

/// Struct /Script/Niagara.NiagaraOutlinerWorldData
/// Size: 0x0068 (0x000000 - 0x000068)
class FNiagaraOutlinerWorldData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TMap<FString, FNiagaraOutlinerSystemData>) Systems                                                     OFFSET(get<T>, {0x0, 80, 0, 0})
	DMember(bool)                                      bHasBegunPlay                                               OFFSET(get<bool>, {0x50, 1, 0, 0})
	DMember(char)                                      WorldType                                                   OFFSET(get<char>, {0x51, 1, 0, 0})
	DMember(char)                                      NetMode                                                     OFFSET(get<char>, {0x52, 1, 0, 0})
	SMember(FNiagaraOutlinerTimingData)                AveragePerFrameTime                                         OFFSET(getStruct<T>, {0x54, 8, 0, 0})
	SMember(FNiagaraOutlinerTimingData)                MaxPerFrameTime                                             OFFSET(getStruct<T>, {0x5C, 8, 0, 0})
};

/// Struct /Script/Niagara.NiagaraOutlinerData
/// Size: 0x0050 (0x000000 - 0x000050)
class FNiagaraOutlinerData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FString, FNiagaraOutlinerWorldData>)  WorldData                                                   OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDebuggerRequestConnection
/// Size: 0x0020 (0x000000 - 0x000020)
class FNiagaraDebuggerRequestConnection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FGuid)                                     SessionId                                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FGuid)                                     InstanceID                                                  OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDebuggerAcceptConnection
/// Size: 0x0020 (0x000000 - 0x000020)
class FNiagaraDebuggerAcceptConnection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FGuid)                                     SessionId                                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FGuid)                                     InstanceID                                                  OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDebuggerConnectionClosed
/// Size: 0x0020 (0x000000 - 0x000020)
class FNiagaraDebuggerConnectionClosed : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FGuid)                                     SessionId                                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FGuid)                                     InstanceID                                                  OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDebuggerExecuteConsoleCommand
/// Size: 0x0018 (0x000000 - 0x000018)
class FNiagaraDebuggerExecuteConsoleCommand : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   Command                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bRequiresWorld                                              OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDebuggerOutlinerUpdate
/// Size: 0x0050 (0x000000 - 0x000050)
class FNiagaraDebuggerOutlinerUpdate : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FNiagaraOutlinerData)                      OutlinerData                                                OFFSET(getStruct<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDebugHudTextOptions
/// Size: 0x0018 (0x000000 - 0x000018)
class FNiagaraDebugHudTextOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(ENiagaraDebugHudFont)                      Font                                                        OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(ENiagaraDebugHudHAlign)                    HorizontalAlignment                                         OFFSET(get<T>, {0x4, 1, 0, 0})
	CMember(ENiagaraDebugHudVAlign)                    VerticalAlignment                                           OFFSET(get<T>, {0x5, 1, 0, 0})
	SMember(FVector2D)                                 ScreenOffset                                                OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDebugHUDVariable
/// Size: 0x0018 (0x000000 - 0x000018)
class FNiagaraDebugHUDVariable : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDebugHUDSettingsData
/// Size: 0x0248 (0x000000 - 0x000248)
class FNiagaraDebugHUDSettingsData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 584;

public:
	DMember(bool)                                      bHudEnabled                                                 OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bHudRenderingEnabled                                        OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bValidateSystemSimulationDataBuffers                        OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(bool)                                      bValidateParticleDataBuffers                                OFFSET(get<bool>, {0x3, 1, 0, 0})
	DMember(bool)                                      bValidationLogErrors                                        OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(int32_t)                                   ValidationAttributeDisplayTruncate                          OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(bool)                                      bOverviewEnabled                                            OFFSET(get<bool>, {0xC, 1, 0, 0})
	DMember(bool)                                      bIncludeCascade                                             OFFSET(get<bool>, {0xD, 1, 0, 0})
	CMember(ENiagaraDebugHUDOverviewMode)              OverviewMode                                                OFFSET(get<T>, {0x10, 4, 0, 0})
	CMember(ENiagaraDebugHUDDOverviewSort)             OverviewSortMode                                            OFFSET(get<T>, {0x14, 4, 0, 0})
	CMember(ENiagaraDebugHudFont)                      OverviewFont                                                OFFSET(get<T>, {0x18, 4, 0, 0})
	SMember(FVector2D)                                 OverviewLocation                                            OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	DMember(bool)                                      bShowRegisteredComponents                                   OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(bool)                                      bOverviewShowFilteredSystemOnly                             OFFSET(get<bool>, {0x31, 1, 0, 0})
	SMember(FString)                                   ActorFilter                                                 OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	DMember(bool)                                      bComponentFilterEnabled                                     OFFSET(get<bool>, {0x48, 1, 0, 0})
	SMember(FString)                                   ComponentFilter                                             OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	DMember(bool)                                      bSystemFilterEnabled                                        OFFSET(get<bool>, {0x60, 1, 0, 0})
	SMember(FString)                                   SystemFilter                                                OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	DMember(bool)                                      bEmitterFilterEnabled                                       OFFSET(get<bool>, {0x78, 1, 0, 0})
	SMember(FString)                                   EmitterFilter                                               OFFSET(getStruct<T>, {0x80, 16, 0, 0})
	DMember(bool)                                      bActorFilterEnabled                                         OFFSET(get<bool>, {0x90, 1, 0, 0})
	CMember(ENiagaraDebugHudVerbosity)                 SystemDebugVerbosity                                        OFFSET(get<T>, {0x94, 4, 0, 0})
	CMember(ENiagaraDebugHudVerbosity)                 SystemEmitterVerbosity                                      OFFSET(get<T>, {0x98, 4, 0, 0})
	CMember(ENiagaraDebugHudVerbosity)                 DataInterfaceVerbosity                                      OFFSET(get<T>, {0x9C, 4, 0, 0})
	DMember(bool)                                      bSystemShowBounds                                           OFFSET(get<bool>, {0xA0, 1, 0, 0})
	DMember(float)                                     SystemBoundsSolidBoxAlpha                                   OFFSET(get<float>, {0xA4, 4, 0, 0})
	DMember(bool)                                      bSystemShowActiveOnlyInWorld                                OFFSET(get<bool>, {0xA8, 1, 0, 0})
	DMember(bool)                                      bShowSystemVariables                                        OFFSET(get<bool>, {0xA9, 1, 0, 0})
	CMember(TArray<FNiagaraDebugHUDVariable>)          SystemVariables                                             OFFSET(get<T>, {0xB0, 16, 0, 0})
	SMember(FNiagaraDebugHudTextOptions)               SystemTextOptions                                           OFFSET(getStruct<T>, {0xC0, 24, 0, 0})
	DMember(bool)                                      bShowParticleVariables                                      OFFSET(get<bool>, {0xD8, 1, 0, 0})
	DMember(bool)                                      bEnableGpuParticleReadback                                  OFFSET(get<bool>, {0xD9, 1, 0, 0})
	DMember(bool)                                      bShowParticleIndex                                          OFFSET(get<bool>, {0xDA, 1, 0, 0})
	CMember(TArray<FNiagaraDebugHUDVariable>)          ParticlesVariables                                          OFFSET(get<T>, {0xE0, 16, 0, 0})
	SMember(FNiagaraDebugHudTextOptions)               ParticleTextOptions                                         OFFSET(getStruct<T>, {0xF0, 24, 0, 0})
	DMember(bool)                                      bShowParticlesVariablesWithSystem                           OFFSET(get<bool>, {0x108, 1, 0, 0})
	DMember(bool)                                      bShowParticleVariablesVertical                              OFFSET(get<bool>, {0x109, 1, 0, 0})
	DMember(bool)                                      bUseMaxParticlesToDisplay                                   OFFSET(get<bool>, {0x10A, 1, 0, 0})
	DMember(bool)                                      bUseParticleDisplayClip                                     OFFSET(get<bool>, {0x10B, 1, 0, 0})
	SMember(FVector2D)                                 ParticleDisplayClip                                         OFFSET(getStruct<T>, {0x110, 16, 0, 0})
	DMember(bool)                                      bUseParticleDisplayCenterRadius                             OFFSET(get<bool>, {0x120, 1, 0, 0})
	DMember(float)                                     ParticleDisplayCenterRadius                                 OFFSET(get<float>, {0x124, 4, 0, 0})
	DMember(int32_t)                                   MaxParticlesToDisplay                                       OFFSET(get<int32_t>, {0x128, 4, 0, 0})
	DMember(int32_t)                                   PerfReportFrames                                            OFFSET(get<int32_t>, {0x12C, 4, 0, 0})
	CMember(ENiagaraDebugHUDPerfSampleMode)            PerfSampleMode                                              OFFSET(get<T>, {0x130, 4, 0, 0})
	CMember(ENiagaraDebugHUDPerfGraphMode)             PerfGraphMode                                               OFFSET(get<T>, {0x134, 4, 0, 0})
	DMember(int32_t)                                   PerfHistoryFrames                                           OFFSET(get<int32_t>, {0x138, 4, 0, 0})
	DMember(float)                                     PerfGraphTimeRange                                          OFFSET(get<float>, {0x13C, 4, 0, 0})
	SMember(FVector2D)                                 PerfGraphSize                                               OFFSET(getStruct<T>, {0x140, 16, 0, 0})
	SMember(FLinearColor)                              PerfGraphAxisColor                                          OFFSET(getStruct<T>, {0x150, 16, 0, 0})
	DMember(bool)                                      bEnableSmoothing                                            OFFSET(get<bool>, {0x160, 1, 0, 0})
	DMember(int32_t)                                   SmoothingWidth                                              OFFSET(get<int32_t>, {0x164, 4, 0, 0})
	SMember(FLinearColor)                              DefaultBackgroundColor                                      OFFSET(getStruct<T>, {0x168, 16, 0, 0})
	SMember(FLinearColor)                              OverviewHeadingColor                                        OFFSET(getStruct<T>, {0x178, 16, 0, 0})
	SMember(FLinearColor)                              OverviewDetailColor                                         OFFSET(getStruct<T>, {0x188, 16, 0, 0})
	SMember(FLinearColor)                              OverviewDetailHighlightColor                                OFFSET(getStruct<T>, {0x198, 16, 0, 0})
	SMember(FLinearColor)                              InWorldErrorTextColor                                       OFFSET(getStruct<T>, {0x1A8, 16, 0, 0})
	SMember(FLinearColor)                              InWorldTextColor                                            OFFSET(getStruct<T>, {0x1B8, 16, 0, 0})
	SMember(FLinearColor)                              MessageInfoTextColor                                        OFFSET(getStruct<T>, {0x1C8, 16, 0, 0})
	SMember(FLinearColor)                              MessageWarningTextColor                                     OFFSET(getStruct<T>, {0x1D8, 16, 0, 0})
	SMember(FLinearColor)                              MessageErrorTextColor                                       OFFSET(getStruct<T>, {0x1E8, 16, 0, 0})
	DMember(float)                                     SystemColorTableOpacity                                     OFFSET(get<float>, {0x1F8, 4, 0, 0})
	DMember(uint32_t)                                  SystemColorSeed                                             OFFSET(get<uint32_t>, {0x1FC, 4, 0, 0})
	SMember(FVector)                                   SystemColorHSVMin                                           OFFSET(getStruct<T>, {0x200, 24, 0, 0})
	SMember(FVector)                                   SystemColorHSVMax                                           OFFSET(getStruct<T>, {0x218, 24, 0, 0})
	CMember(ENiagaraDebugPlaybackMode)                 PlaybackMode                                                OFFSET(get<T>, {0x230, 1, 0, 0})
	DMember(bool)                                      bPlaybackRateEnabled                                        OFFSET(get<bool>, {0x231, 1, 0, 0})
	DMember(float)                                     PlaybackRate                                                OFFSET(get<float>, {0x234, 4, 0, 0})
	DMember(bool)                                      bLoopTimeEnabled                                            OFFSET(get<bool>, {0x238, 1, 0, 0})
	DMember(float)                                     LoopTime                                                    OFFSET(get<float>, {0x23C, 4, 0, 0})
	DMember(bool)                                      bShowGlobalBudgetInfo                                       OFFSET(get<bool>, {0x240, 1, 0, 0})
};

/// Struct /Script/Niagara.NiagaraRequestSimpleClientInfoMessage
/// Size: 0x0001 (0x000000 - 0x000001)
class FNiagaraRequestSimpleClientInfoMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/Niagara.NiagaraOutlinerCaptureSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraOutlinerCaptureSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      bTriggerCapture                                             OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(uint32_t)                                  CaptureDelayFrames                                          OFFSET(get<uint32_t>, {0x4, 4, 0, 0})
	DMember(bool)                                      bGatherPerfData                                             OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(uint32_t)                                  SimCacheCaptureFrames                                       OFFSET(get<uint32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSimpleClientInfo
/// Size: 0x0040 (0x000000 - 0x000040)
class FNiagaraSimpleClientInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FString>)                           Systems                                                     OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FString>)                           Actors                                                      OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FString>)                           Components                                                  OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FString>)                           Emitters                                                    OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSystemSimCacheCaptureRequest
/// Size: 0x000C (0x000000 - 0x00000C)
class FNiagaraSystemSimCacheCaptureRequest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     ComponentName                                               OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(uint32_t)                                  CaptureDelayFrames                                          OFFSET(get<uint32_t>, {0x4, 4, 0, 0})
	DMember(uint32_t)                                  CaptureFrames                                               OFFSET(get<uint32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSystemSimCacheCaptureReply
/// Size: 0x0018 (0x000000 - 0x000018)
class FNiagaraSystemSimCacheCaptureReply : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     ComponentName                                               OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<char>)                              SimCacheData                                                OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraGraphViewSettings
/// Size: 0x0018 (0x000000 - 0x000018)
class FNiagaraGraphViewSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FVector2D)                                 Location                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(float)                                     Zoom                                                        OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      bIsValid                                                    OFFSET(get<bool>, {0x14, 1, 0, 0})
};

/// Struct /Script/Niagara.NiagaraLinearRamp
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraLinearRamp : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     StartX                                                      OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     StartY                                                      OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     EndX                                                        OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     EndY                                                        OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraGlobalBudgetScaling
/// Size: 0x0038 (0x000000 - 0x000038)
class FNiagaraGlobalBudgetScaling : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(bool)                                      bCullByGlobalBudget                                         OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(bool)                                      bScaleMaxDistanceByGlobalBudgetUse                          OFFSET(get<bool>, {0x0, 1, 1, 1})
	DMember(bool)                                      bScaleMaxInstanceCountByGlobalBudgetUse                     OFFSET(get<bool>, {0x0, 1, 1, 2})
	DMember(bool)                                      bScaleSystemInstanceCountByGlobalBudgetUse                  OFFSET(get<bool>, {0x0, 1, 1, 3})
	DMember(float)                                     MaxGlobalBudgetUsage                                        OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FNiagaraLinearRamp)                        MaxDistanceScaleByGlobalBudgetUse                           OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FNiagaraLinearRamp)                        MaxInstanceCountScaleByGlobalBudgetUse                      OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FNiagaraLinearRamp)                        MaxSystemInstanceCountScaleByGlobalBudgetUse                OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSystemVisibilityCullingSettings
/// Size: 0x000C (0x000000 - 0x00000C)
class FNiagaraSystemVisibilityCullingSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(bool)                                      bCullWhenNotRendered                                        OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(bool)                                      bCullByViewFrustum                                          OFFSET(get<bool>, {0x0, 1, 1, 1})
	DMember(bool)                                      bAllowPreCullingByViewFrustum                               OFFSET(get<bool>, {0x0, 1, 1, 2})
	DMember(float)                                     MaxTimeOutsideViewFrustum                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MaxTimeWithoutRender                                        OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSystemScalabilitySettings
/// Size: 0x0098 (0x000000 - 0x000098)
class FNiagaraSystemScalabilitySettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FNiagaraPlatformSet)                       Platforms                                                   OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	DMember(bool)                                      bCullByDistance                                             OFFSET(get<bool>, {0x30, 1, 1, 0})
	DMember(bool)                                      bCullMaxInstanceCount                                       OFFSET(get<bool>, {0x30, 1, 1, 1})
	DMember(bool)                                      bCullPerSystemMaxInstanceCount                              OFFSET(get<bool>, {0x30, 1, 1, 2})
	DMember(float)                                     MaxDistance                                                 OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(bool)                                      bCullByMaxTimeWithoutRender                                 OFFSET(get<bool>, {0x38, 1, 1, 0})
	DMember(int32_t)                                   MaxInstances                                                OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(int32_t)                                   MaxSystemInstances                                          OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(float)                                     MaxTimeWithoutRender                                        OFFSET(get<float>, {0x44, 4, 0, 0})
	CMember(ENiagaraCullProxyMode)                     CullProxyMode                                               OFFSET(get<T>, {0x48, 4, 0, 0})
	DMember(int32_t)                                   MaxSystemProxies                                            OFFSET(get<int32_t>, {0x4C, 4, 0, 0})
	SMember(FNiagaraSystemVisibilityCullingSettings)   VisibilityCulling                                           OFFSET(getStruct<T>, {0x50, 12, 0, 0})
	SMember(FNiagaraGlobalBudgetScaling)               BudgetScaling                                               OFFSET(getStruct<T>, {0x5C, 56, 0, 0})
};

/// Struct /Script/Niagara.NiagaraPlatformSet
/// Size: 0x0030 (0x000000 - 0x000030)
class FNiagaraPlatformSet : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FNiagaraDeviceProfileStateEntry>)   DeviceProfileStates                                         OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FNiagaraPlatformSetCVarCondition>)  CVarConditions                                              OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(int32_t)                                   QualityLevelMask                                            OFFSET(get<int32_t>, {0x20, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraPlatformSetCVarCondition
/// Size: 0x0030 (0x000000 - 0x000030)
class FNiagaraPlatformSetCVarCondition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     CVarName                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(ENiagaraCVarConditionResponse)             PassResponse                                                OFFSET(get<T>, {0x4, 1, 0, 0})
	CMember(ENiagaraCVarConditionResponse)             FailResponse                                                OFFSET(get<T>, {0x5, 1, 0, 0})
	DMember(bool)                                      Value                                                       OFFSET(get<bool>, {0x6, 1, 0, 0})
	DMember(int32_t)                                   MinInt                                                      OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   MaxInt                                                      OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(float)                                     MinFloat                                                    OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     MaxFloat                                                    OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(bool)                                      bUseMinInt                                                  OFFSET(get<bool>, {0x18, 1, 1, 0})
	DMember(bool)                                      bUseMaxInt                                                  OFFSET(get<bool>, {0x18, 1, 1, 1})
	DMember(bool)                                      bUseMinFloat                                                OFFSET(get<bool>, {0x18, 1, 1, 2})
	DMember(bool)                                      bUseMaxFloat                                                OFFSET(get<bool>, {0x18, 1, 1, 3})
};

/// Struct /Script/Niagara.NiagaraDeviceProfileStateEntry
/// Size: 0x000C (0x000000 - 0x00000C)
class FNiagaraDeviceProfileStateEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     ProfileName                                                 OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(uint32_t)                                  QualityLevelMask                                            OFFSET(get<uint32_t>, {0x4, 4, 0, 0})
	DMember(uint32_t)                                  SetQualityLevelMask                                         OFFSET(get<uint32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSystemScalabilitySettingsArray
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraSystemScalabilitySettingsArray : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FNiagaraSystemScalabilitySettings>) Settings                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSystemScalabilityOverride
/// Size: 0x0008 (0x000098 - 0x0000A0)
class FNiagaraSystemScalabilityOverride : public FNiagaraSystemScalabilitySettings
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	DMember(bool)                                      bOverrideDistanceSettings                                   OFFSET(get<bool>, {0x98, 1, 1, 0})
	DMember(bool)                                      bOverrideInstanceCountSettings                              OFFSET(get<bool>, {0x98, 1, 1, 1})
	DMember(bool)                                      bOverridePerSystemInstanceCountSettings                     OFFSET(get<bool>, {0x98, 1, 1, 2})
	DMember(bool)                                      bOverrideVisibilitySettings                                 OFFSET(get<bool>, {0x98, 1, 1, 3})
	DMember(bool)                                      bOverrideGlobalBudgetScalingSettings                        OFFSET(get<bool>, {0x98, 1, 1, 4})
	DMember(bool)                                      bOverrideCullProxySettings                                  OFFSET(get<bool>, {0x98, 1, 1, 5})
};

/// Struct /Script/Niagara.NiagaraEmitterScalabilitySettings
/// Size: 0x0038 (0x000000 - 0x000038)
class FNiagaraEmitterScalabilitySettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FNiagaraPlatformSet)                       Platforms                                                   OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	DMember(bool)                                      bScaleSpawnCount                                            OFFSET(get<bool>, {0x30, 1, 1, 0})
	DMember(float)                                     SpawnCountScale                                             OFFSET(get<float>, {0x34, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraEmitterScalabilitySettingsArray
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraEmitterScalabilitySettingsArray : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FNiagaraEmitterScalabilitySettings>) Settings                                                   OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraEmitterScalabilityOverride
/// Size: 0x0008 (0x000038 - 0x000040)
class FNiagaraEmitterScalabilityOverride : public FNiagaraEmitterScalabilitySettings
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bOverrideSpawnCountScale                                    OFFSET(get<bool>, {0x38, 1, 1, 0})
};

/// Struct /Script/Niagara.NiagaraEmitterScalabilityOverrides
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraEmitterScalabilityOverrides : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FNiagaraEmitterScalabilityOverride>) Overrides                                                  OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraEventReceiverProperties
/// Size: 0x000C (0x000000 - 0x00000C)
class FNiagaraEventReceiverProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     SourceEventGenerator                                        OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FName)                                     SourceEmitter                                               OFFSET(getStruct<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraEventGeneratorProperties
/// Size: 0x0048 (0x000000 - 0x000048)
class FNiagaraEventGeneratorProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(int32_t)                                   MaxEventsPerFrame                                           OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FName)                                     ID                                                          OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FNiagaraDataSetCompiledData)               DataSetCompiledData                                         OFFSET(getStruct<T>, {0x8, 64, 0, 0})
};

/// Struct /Script/Niagara.NiagaraEmitterScriptProperties
/// Size: 0x0028 (0x000000 - 0x000028)
class FNiagaraEmitterScriptProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class UNiagaraScript*)                     Script                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<FNiagaraEventReceiverProperties>)   EventReceivers                                              OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FNiagaraEventGeneratorProperties>)  EventGenerators                                             OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraEventScriptProperties
/// Size: 0x0030 (0x000028 - 0x000058)
class FNiagaraEventScriptProperties : public FNiagaraEmitterScriptProperties
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(EScriptExecutionMode)                      ExecutionMode                                               OFFSET(get<T>, {0x28, 1, 0, 0})
	DMember(uint32_t)                                  SpawnNumber                                                 OFFSET(get<uint32_t>, {0x2C, 4, 0, 0})
	DMember(uint32_t)                                  MaxEventsPerFrame                                           OFFSET(get<uint32_t>, {0x30, 4, 0, 0})
	SMember(FGuid)                                     SourceEmitterID                                             OFFSET(getStruct<T>, {0x34, 16, 0, 0})
	SMember(FName)                                     SourceEventName                                             OFFSET(getStruct<T>, {0x44, 4, 0, 0})
	DMember(bool)                                      bRandomSpawnNumber                                          OFFSET(get<bool>, {0x48, 1, 0, 0})
	DMember(uint32_t)                                  MinSpawnNumber                                              OFFSET(get<uint32_t>, {0x4C, 4, 0, 0})
	DMember(bool)                                      UpdateAttributeInitialValues                                OFFSET(get<bool>, {0x50, 1, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDetailsLevelScaleOverrides
/// Size: 0x0014 (0x000000 - 0x000014)
class FNiagaraDetailsLevelScaleOverrides : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(float)                                     Low                                                         OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Medium                                                      OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     High                                                        OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Epic                                                        OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Cine                                                        OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/Niagara.VersionedNiagaraEmitterData
/// Size: 0x0340 (0x000000 - 0x000340)
class FVersionedNiagaraEmitterData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	SMember(FNiagaraAssetVersion)                      Version                                                     OFFSET(getStruct<T>, {0x0, 28, 0, 0})
	DMember(bool)                                      bDeprecated                                                 OFFSET(get<bool>, {0x1C, 1, 0, 0})
	SMember(FText)                                     DeprecationMessage                                          OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	DMember(bool)                                      bLocalspace                                                 OFFSET(get<bool>, {0x38, 1, 0, 0})
	DMember(bool)                                      bDeterminism                                                OFFSET(get<bool>, {0x39, 1, 0, 0})
	DMember(int32_t)                                   RandomSeed                                                  OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(bool)                                      bInterpolatedSpawning                                       OFFSET(get<bool>, {0x40, 1, 1, 0})
	CMember(ENiagaraSimTarget)                         SimTarget                                                   OFFSET(get<T>, {0x44, 1, 0, 0})
	CMember(ENiagaraEmitterCalculateBoundMode)         CalculateBoundsMode                                         OFFSET(get<T>, {0x45, 1, 0, 0})
	SMember(FBox)                                      FixedBounds                                                 OFFSET(getStruct<T>, {0x48, 56, 0, 0})
	DMember(bool)                                      bRequiresPersistentIDs                                      OFFSET(get<bool>, {0x80, 1, 1, 0})
	CMember(TArray<FNiagaraEventScriptProperties>)     EventHandlerScriptProps                                     OFFSET(get<T>, {0x88, 16, 0, 0})
	SMember(FNiagaraPlatformSet)                       Platforms                                                   OFFSET(getStruct<T>, {0x98, 48, 0, 0})
	SMember(FNiagaraEmitterScalabilityOverrides)       ScalabilityOverrides                                        OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	DMember(int32_t)                                   MaxGPUParticlesSpawnPerFrame                                OFFSET(get<int32_t>, {0xD8, 4, 0, 0})
	CMember(EParticleAllocationMode)                   AllocationMode                                              OFFSET(get<T>, {0xDC, 1, 0, 0})
	DMember(int32_t)                                   PreAllocationCount                                          OFFSET(get<int32_t>, {0xE0, 4, 0, 0})
	SMember(FNiagaraEmitterScriptProperties)           UpdateScriptProps                                           OFFSET(getStruct<T>, {0xE8, 40, 0, 0})
	SMember(FNiagaraEmitterScriptProperties)           SpawnScriptProps                                            OFFSET(getStruct<T>, {0x110, 40, 0, 0})
	SMember(FNiagaraParameterStore)                    RendererBindings                                            OFFSET(getStruct<T>, {0x138, 136, 0, 0})
	CMember(TArray<FNiagaraExternalUObjectInfo>)       RendererBindingsExternalObjects                             OFFSET(get<T>, {0x1C0, 16, 0, 0})
	CMember(TMap<FNiagaraVariableBase, FNiagaraVariableBase>) ResolvedDIBindings                                   OFFSET(get<T>, {0x1D0, 80, 0, 0})
	CMember(TArray<class UNiagaraRendererProperties*>) RendererProperties                                          OFFSET(get<T>, {0x220, 16, 0, 0})
	CMember(TArray<class UNiagaraSimulationStageBase*>) SimulationStages                                           OFFSET(get<T>, {0x230, 16, 0, 0})
	CMember(class UNiagaraScript*)                     GPUComputeScript                                            OFFSET(get<T>, {0x240, 8, 0, 0})
	CMember(TArray<FName>)                             SharedEventGeneratorIds                                     OFFSET(get<T>, {0x248, 16, 0, 0})
	SMember(FNiagaraEmitterScalabilitySettings)        CurrentScalabilitySettings                                  OFFSET(getStruct<T>, {0x258, 56, 0, 0})
};

/// Struct /Script/Niagara.NiagaraParameterStore
/// Size: 0x0088 (0x000000 - 0x000088)
class FNiagaraParameterStore : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TWeakObjectPtr<UObject*>)                  Owner                                                       OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TArray<FNiagaraVariableWithOffset>)        SortedParameterOffsets                                      OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<char>)                              ParameterData                                               OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<class UNiagaraDataInterface*>)      DataInterfaces                                              OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<class UObject*>)                    UObjects                                                    OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FNiagaraPositionSource>)            OriginalPositionData                                        OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraPositionSource
/// Size: 0x0020 (0x000000 - 0x000020)
class FNiagaraPositionSource : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FVector)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 24, 0, 0})
};

/// Struct /Script/Niagara.NiagaraVariableWithOffset
/// Size: 0x0020 (0x000008 - 0x000028)
class FNiagaraVariableWithOffset : public FNiagaraVariableBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   Offset                                                      OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	SMember(FNiagaraLwcStructConverter)                StructConverter                                             OFFSET(getStruct<T>, {0x10, 24, 0, 0})
};

/// Struct /Script/Niagara.NiagaraAssetVersion
/// Size: 0x001C (0x000000 - 0x00001C)
class FNiagaraAssetVersion : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	DMember(int32_t)                                   MajorVersion                                                OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   MinorVersion                                                OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	SMember(FGuid)                                     VersionGuid                                                 OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	DMember(bool)                                      bIsVisibleInVersionSelector                                 OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/Niagara.NiagaraEmitterHandle
/// Size: 0x0038 (0x000000 - 0x000038)
class FNiagaraEmitterHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FGuid)                                     ID                                                          OFFSET(getStruct<T>, {0x4, 16, 0, 0})
	SMember(FName)                                     IdName                                                      OFFSET(getStruct<T>, {0x14, 4, 0, 0})
	DMember(bool)                                      bIsEnabled                                                  OFFSET(get<bool>, {0x18, 1, 0, 0})
	SMember(FVersionedNiagaraEmitter)                  VersionedInstance                                           OFFSET(getStruct<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/Niagara.VersionedNiagaraEmitter
/// Size: 0x0018 (0x000000 - 0x000018)
class FVersionedNiagaraEmitter : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UNiagaraEmitter*)                    Emitter                                                     OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FGuid)                                     Version                                                     OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraCollisionEventPayload
/// Size: 0x0050 (0x000000 - 0x000050)
class FNiagaraCollisionEventPayload : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FVector)                                   CollisionPos                                                OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   CollisionNormal                                             OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FVector)                                   CollisionVelocity                                           OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	DMember(int32_t)                                   ParticleIndex                                               OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	DMember(int32_t)                                   PhysicalMaterialIndex                                       OFFSET(get<int32_t>, {0x4C, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraMeshMICOverride
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraMeshMICOverride : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UMaterialInterface*)                 OriginalMaterial                                            OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UMaterialInstanceConstant*)          ReplacementMaterial                                         OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/Niagara.NiagaraMeshMaterialOverride
/// Size: 0x0020 (0x000000 - 0x000020)
class FNiagaraMeshMaterialOverride : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(class UMaterialInterface*)                 ExplicitMat                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FNiagaraUserParameterBinding)              UserParamBinding                                            OFFSET(getStruct<T>, {0x8, 24, 0, 0})
};

/// Struct /Script/Niagara.NiagaraMeshRendererMeshProperties
/// Size: 0x0080 (0x000000 - 0x000080)
class FNiagaraMeshRendererMeshProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(class UStaticMesh*)                        Mesh                                                        OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FNiagaraParameterBinding)                  MeshParameterBinding                                        OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	CMember(ENiagaraMeshLODMode)                       LODMode                                                     OFFSET(get<T>, {0x10, 1, 0, 0})
	DMember(int32_t)                                   LODLevel                                                    OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   LODBias                                                     OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(float)                                     LODDistanceFactor                                           OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(bool)                                      bUseLODRange                                                OFFSET(get<bool>, {0x20, 1, 0, 0})
	SMember(FIntVector2)                               LODRange                                                    OFFSET(getStruct<T>, {0x24, 8, 0, 0})
	SMember(FVector)                                   Scale                                                       OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FRotator)                                  Rotation                                                    OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	SMember(FVector)                                   PivotOffset                                                 OFFSET(getStruct<T>, {0x60, 24, 0, 0})
	CMember(ENiagaraMeshPivotOffsetSpace)              PivotOffsetSpace                                            OFFSET(get<T>, {0x78, 1, 0, 0})
};

/// Struct /Script/Niagara.ParameterDefinitionsSubscription
/// Size: 0x0001 (0x000000 - 0x000001)
class FParameterDefinitionsSubscription : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/Niagara.NiagaraParameters
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FNiagaraVariable>)                  Parameters                                                  OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraBoundParameter
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraBoundParameter : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FNiagaraVariableBase)                      Parameter                                                   OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   SrcOffset                                                   OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   DestOffset                                                  OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraPerfBaselineStats
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraPerfBaselineStats : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     PerInstanceAvg_GT                                           OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     PerInstanceAvg_RT                                           OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     PerInstanceMax_GT                                           OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     PerInstanceMax_RT                                           OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraPlatformSetConflictEntry
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraPlatformSetConflictEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     ProfileName                                                 OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   QualityLevelMask                                            OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraPlatformSetConflictInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FNiagaraPlatformSetConflictInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   SetAIndex                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   SetBIndex                                                   OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	CMember(TArray<FNiagaraPlatformSetConflictEntry>)  Conflicts                                                   OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraPlatformSetRedirect
/// Size: 0x0078 (0x000000 - 0x000078)
class FNiagaraPlatformSetRedirect : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TArray<FName>)                             ProfileNames                                                OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(ENiagaraDeviceProfileRedirectMode)         Mode                                                        OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FName)                                     RedirectProfileName                                         OFFSET(getStruct<T>, {0x14, 4, 0, 0})
	SMember(FNiagaraPlatformSetCVarCondition)          CVarConditionEnabled                                        OFFSET(getStruct<T>, {0x18, 48, 0, 0})
	SMember(FNiagaraPlatformSetCVarCondition)          CVarConditionDisabled                                       OFFSET(getStruct<T>, {0x48, 48, 0, 0})
};

/// Struct /Script/Niagara.NiagaraRendererMaterialScalarParameter
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraRendererMaterialScalarParameter : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     MaterialParameterName                                       OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraRendererMaterialVectorParameter
/// Size: 0x0014 (0x000000 - 0x000014)
class FNiagaraRendererMaterialVectorParameter : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FName)                                     MaterialParameterName                                       OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FLinearColor)                              Value                                                       OFFSET(getStruct<T>, {0x4, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraRendererMaterialTextureParameter
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraRendererMaterialTextureParameter : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     MaterialParameterName                                       OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(class UTexture*)                           Texture                                                     OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/Niagara.NiagaraRendererMaterialStaticBoolParameter
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraRendererMaterialStaticBoolParameter : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     MaterialParameterName                                       OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     StaticVariableName                                          OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraRendererMaterialParameters
/// Size: 0x0050 (0x000000 - 0x000050)
class FNiagaraRendererMaterialParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<FNiagaraMaterialAttributeBinding>)  AttributeBindings                                           OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FNiagaraRendererMaterialScalarParameter>) ScalarParameters                                      OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FNiagaraRendererMaterialVectorParameter>) VectorParameters                                      OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FNiagaraRendererMaterialTextureParameter>) TextureParameters                                    OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FNiagaraRendererMaterialStaticBoolParameter>) StaticBoolParameters                              OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraRibbonShapeCustomVertex
/// Size: 0x0014 (0x000000 - 0x000014)
class FNiagaraRibbonShapeCustomVertex : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FVector2f)                                 Position                                                    OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FVector2f)                                 Normal                                                      OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	DMember(float)                                     TextureV                                                    OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraRibbonUVSettings
/// Size: 0x0028 (0x000000 - 0x000028)
class FNiagaraRibbonUVSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(ENiagaraRibbonUVDistributionMode)          DistributionMode                                            OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(ENiagaraRibbonUVEdgeMode)                  LeadingEdgeMode                                             OFFSET(get<T>, {0x1, 1, 0, 0})
	CMember(ENiagaraRibbonUVEdgeMode)                  TrailingEdgeMode                                            OFFSET(get<T>, {0x2, 1, 0, 0})
	DMember(bool)                                      bEnablePerParticleUOverride                                 OFFSET(get<bool>, {0x3, 1, 1, 0})
	DMember(bool)                                      bEnablePerParticleVRangeOverride                            OFFSET(get<bool>, {0x3, 1, 1, 1})
	DMember(float)                                     TilingLength                                                OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FVector2D)                                 Offset                                                      OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FVector2D)                                 Scale                                                       OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraScalabilityManager
/// Size: 0x00E0 (0x000000 - 0x0000E0)
class FNiagaraScalabilityManager : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(class UNiagaraEffectType*)                 EffectType                                                  OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<class UNiagaraComponent*>)          ManagedComponents                                           OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraModuleDependency
/// Size: 0x0060 (0x000000 - 0x000060)
class FNiagaraModuleDependency : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FName)                                     ID                                                          OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(ENiagaraModuleDependencyType)              Type                                                        OFFSET(get<T>, {0x4, 1, 0, 0})
	CMember(ENiagaraModuleDependencyScriptConstraint)  ScriptConstraint                                            OFFSET(get<T>, {0x5, 1, 0, 0})
	SMember(FString)                                   RequiredVersion                                             OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   OnlyEvaluateInScriptUsage                                   OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	SMember(FText)                                     Description                                                 OFFSET(getStruct<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/Niagara.NiagaraCompilerTag
/// Size: 0x0028 (0x000000 - 0x000028)
class FNiagaraCompilerTag : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FNiagaraVariable)                          Variable                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FString)                                   StringValue                                                 OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraVMExecutableDataId
/// Size: 0x0058 (0x000000 - 0x000058)
class FNiagaraVMExecutableDataId : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FGuid)                                     CompilerVersionID                                           OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(ENiagaraScriptUsage)                       ScriptUsageType                                             OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FGuid)                                     ScriptUsageTypeID                                           OFFSET(getStruct<T>, {0x14, 16, 0, 0})
	DMember(bool)                                      bUsesRapidIterationParams                                   OFFSET(get<bool>, {0x24, 1, 1, 0})
	DMember(bool)                                      bDisableDebugSwitches                                       OFFSET(get<bool>, {0x24, 1, 1, 1})
	DMember(bool)                                      bInterpolatedSpawn                                          OFFSET(get<bool>, {0x24, 1, 1, 2})
	DMember(bool)                                      bRequiresPersistentIDs                                      OFFSET(get<bool>, {0x24, 1, 1, 3})
	SMember(FGuid)                                     BaseScriptID                                                OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FNiagaraCompileHash)                       BaseScriptCompileHash                                       OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FGuid)                                     ScriptVersionID                                             OFFSET(getStruct<T>, {0x48, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraVMExecutableByteCode
/// Size: 0x0018 (0x000000 - 0x000018)
class FNiagaraVMExecutableByteCode : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<char>)                              Data                                                        OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   UncompressedSize                                            OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraVMExecutableData
/// Size: 0x01A0 (0x000000 - 0x0001A0)
class FNiagaraVMExecutableData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	SMember(FNiagaraVMExecutableByteCode)              ByteCode                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FNiagaraVMExecutableByteCode)              OptimizedByteCode                                           OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	DMember(int32_t)                                   NumTempRegisters                                            OFFSET(get<int32_t>, {0x68, 4, 0, 0})
	DMember(int32_t)                                   NumUserPtrs                                                 OFFSET(get<int32_t>, {0x6C, 4, 0, 0})
	CMember(TArray<FNiagaraCompilerTag>)               CompileTags                                                 OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<char>)                              ScriptLiterals                                              OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TArray<FNiagaraVariableBase>)              Attributes                                                  OFFSET(get<T>, {0x90, 16, 0, 0})
	SMember(FNiagaraScriptDataUsageInfo)               DataUsage                                                   OFFSET(getStruct<T>, {0xA0, 1, 0, 0})
	CMember(TArray<FNiagaraScriptUObjectCompileInfo>)  UObjectInfos                                                OFFSET(get<T>, {0xA8, 16, 0, 0})
	CMember(TArray<FNiagaraScriptDataInterfaceCompileInfo>) DataInterfaceInfo                                      OFFSET(get<T>, {0xB8, 16, 0, 0})
	CMember(TArray<FVMExternalFunctionBindingInfo>)    CalledVMExternalFunctions                                   OFFSET(get<T>, {0xC8, 16, 0, 0})
	CMember(TArray<FNiagaraDataSetID>)                 ReadDataSets                                                OFFSET(get<T>, {0xE8, 16, 0, 0})
	CMember(TArray<FNiagaraDataSetProperties>)         WriteDataSets                                               OFFSET(get<T>, {0xF8, 16, 0, 0})
	CMember(TArray<FNiagaraStatScope>)                 StatScopes                                                  OFFSET(get<T>, {0x108, 16, 0, 0})
	SMember(FNiagaraShaderScriptParametersMetadata)    ShaderScriptParametersMetadata                              OFFSET(getStruct<T>, {0x118, 88, 0, 0})
	CMember(ENiagaraScriptCompileStatus)               LastCompileStatus                                           OFFSET(get<T>, {0x170, 1, 0, 0})
	CMember(TArray<FSimulationStageMetaData>)          SimulationStageMetaData                                     OFFSET(get<T>, {0x178, 16, 0, 0})
	CMember(TArray<char>)                              ExperimentalContextData                                     OFFSET(get<T>, {0x188, 16, 0, 0})
	DMember(bool)                                      bReadsSignificanceIndex                                     OFFSET(get<bool>, {0x198, 1, 1, 0})
	DMember(bool)                                      bNeedsGPUContextInit                                        OFFSET(get<bool>, {0x198, 1, 1, 1})
};

/// Struct /Script/Niagara.NiagaraInlineDynamicInputFormatToken
/// Size: 0x0001 (0x000000 - 0x000001)
class FNiagaraInlineDynamicInputFormatToken : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/Niagara.VersionedNiagaraScriptData
/// Size: 0x0001 (0x000000 - 0x000001)
class FVersionedNiagaraScriptData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/Niagara.NiagaraScriptExecutionPaddingInfo
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraScriptExecutionPaddingInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(uint16_t)                                  SrcOffset                                                   OFFSET(get<uint16_t>, {0x0, 2, 0, 0})
	DMember(uint16_t)                                  DestOffset                                                  OFFSET(get<uint16_t>, {0x2, 2, 0, 0})
	DMember(uint16_t)                                  SrcSize                                                     OFFSET(get<uint16_t>, {0x4, 2, 0, 0})
	DMember(uint16_t)                                  DestSize                                                    OFFSET(get<uint16_t>, {0x6, 2, 0, 0})
};

/// Struct /Script/Niagara.NiagaraScriptExecutionParameterStore
/// Size: 0x0020 (0x000088 - 0x0000A8)
class FNiagaraScriptExecutionParameterStore : public FNiagaraParameterStore
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	DMember(int32_t)                                   ParameterSize                                               OFFSET(get<int32_t>, {0x88, 4, 0, 0})
	DMember(uint32_t)                                  PaddedParameterSize                                         OFFSET(get<uint32_t>, {0x8C, 4, 0, 0})
	CMember(TArray<FNiagaraScriptExecutionPaddingInfo>) PaddingInfo                                                OFFSET(get<T>, {0x90, 16, 0, 0})
	DMember(bool)                                      bInitialized                                                OFFSET(get<bool>, {0xA0, 1, 1, 0})
};

/// Struct /Script/Niagara.NiagaraScriptInstanceParameterStore
/// Size: 0x0010 (0x000088 - 0x000098)
class FNiagaraScriptInstanceParameterStore : public FNiagaraParameterStore
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
};

/// Struct /Script/Niagara.NiagaraScriptHighlight
/// Size: 0x0028 (0x000000 - 0x000028)
class FNiagaraScriptHighlight : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x10, 24, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSimCacheDataBuffers
/// Size: 0x0060 (0x000000 - 0x000060)
class FNiagaraSimCacheDataBuffers : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(uint32_t)                                  NumInstances                                                OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
	CMember(TArray<char>)                              FloatData                                                   OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<char>)                              HalfData                                                    OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<char>)                              Int32Data                                                   OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<int32_t>)                           IDToIndexTable                                              OFFSET(get<T>, {0x38, 16, 0, 0})
	DMember(uint32_t)                                  IDAcquireTag                                                OFFSET(get<uint32_t>, {0x48, 4, 0, 0})
	CMember(TArray<uint32_t>)                          InterpMapping                                               OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSimCacheEmitterFrame
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FNiagaraSimCacheEmitterFrame : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FBox)                                      LocalBounds                                                 OFFSET(getStruct<T>, {0x0, 56, 0, 0})
	DMember(int32_t)                                   TotalSpawnedParticles                                       OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	SMember(FNiagaraSimCacheDataBuffers)               ParticleDataBuffers                                         OFFSET(getStruct<T>, {0x40, 96, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSimCacheSystemFrame
/// Size: 0x0098 (0x000000 - 0x000098)
class FNiagaraSimCacheSystemFrame : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FBox)                                      LocalBounds                                                 OFFSET(getStruct<T>, {0x0, 56, 0, 0})
	SMember(FNiagaraSimCacheDataBuffers)               SystemDataBuffers                                           OFFSET(getStruct<T>, {0x38, 96, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSimCacheFrame
/// Size: 0x0120 (0x000000 - 0x000120)
class FNiagaraSimCacheFrame : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FTransform)                                LocalToWorld                                                OFFSET(getStruct<T>, {0x0, 96, 0, 0})
	SMember(FVector3f)                                 LWCTile                                                     OFFSET(getStruct<T>, {0x60, 12, 0, 0})
	DMember(float)                                     SimulationAge                                               OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(int32_t)                                   SimulationTickCount                                         OFFSET(get<int32_t>, {0x70, 4, 0, 0})
	SMember(FNiagaraSimCacheSystemFrame)               SystemData                                                  OFFSET(getStruct<T>, {0x78, 152, 0, 0})
	CMember(TArray<FNiagaraSimCacheEmitterFrame>)      EmitterData                                                 OFFSET(get<T>, {0x110, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSimCacheVariable
/// Size: 0x0014 (0x000000 - 0x000014)
class FNiagaraSimCacheVariable : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FNiagaraVariableBase)                      Variable                                                    OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(uint16_t)                                  FloatOffset                                                 OFFSET(get<uint16_t>, {0x8, 2, 0, 0})
	DMember(uint16_t)                                  FloatCount                                                  OFFSET(get<uint16_t>, {0xA, 2, 0, 0})
	DMember(uint16_t)                                  HalfOffset                                                  OFFSET(get<uint16_t>, {0xC, 2, 0, 0})
	DMember(uint16_t)                                  HalfCount                                                   OFFSET(get<uint16_t>, {0xE, 2, 0, 0})
	DMember(uint16_t)                                  Int32Offset                                                 OFFSET(get<uint16_t>, {0x10, 2, 0, 0})
	DMember(uint16_t)                                  Int32Count                                                  OFFSET(get<uint16_t>, {0x12, 2, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSimCacheDataBuffersLayout
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FNiagaraSimCacheDataBuffersLayout : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FName)                                     LayoutName                                                  OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(ENiagaraSimTarget)                         SimTarget                                                   OFFSET(get<T>, {0x4, 1, 0, 0})
	CMember(TArray<FNiagaraSimCacheVariable>)          Variables                                                   OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(uint16_t)                                  FloatCount                                                  OFFSET(get<uint16_t>, {0x18, 2, 0, 0})
	DMember(uint16_t)                                  HalfCount                                                   OFFSET(get<uint16_t>, {0x1A, 2, 0, 0})
	DMember(uint16_t)                                  Int32Count                                                  OFFSET(get<uint16_t>, {0x1C, 2, 0, 0})
	DMember(bool)                                      bLocalspace                                                 OFFSET(get<bool>, {0x1E, 1, 0, 0})
	DMember(bool)                                      bAllowInterpolation                                         OFFSET(get<bool>, {0x1F, 1, 0, 0})
	DMember(bool)                                      bAllowVelocityExtrapolation                                 OFFSET(get<bool>, {0x20, 1, 0, 0})
	CMember(TArray<FName>)                             RebaseVariableNames                                         OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FName>)                             InterpVariableNames                                         OFFSET(get<T>, {0x38, 16, 0, 0})
	DMember(uint16_t)                                  ComponentVelocity                                           OFFSET(get<uint16_t>, {0x48, 2, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSimCacheLayout
/// Size: 0x00C0 (0x000000 - 0x0000C0)
class FNiagaraSimCacheLayout : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FNiagaraSimCacheDataBuffersLayout)         SystemLayout                                                OFFSET(getStruct<T>, {0x0, 176, 0, 0})
	CMember(TArray<FNiagaraSimCacheDataBuffersLayout>) EmitterLayouts                                              OFFSET(get<T>, {0xB0, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraEmitterCompiledData
/// Size: 0x00F8 (0x000000 - 0x0000F8)
class FNiagaraEmitterCompiledData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(TArray<FName>)                             SpawnAttributes                                             OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FNiagaraVariable)                          EmitterSpawnIntervalVar                                     OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	SMember(FNiagaraVariable)                          EmitterInterpSpawnStartDTVar                                OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	SMember(FNiagaraVariable)                          EmitterSpawnGroupVar                                        OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	SMember(FNiagaraVariable)                          EmitterAgeVar                                               OFFSET(getStruct<T>, {0x58, 24, 0, 0})
	SMember(FNiagaraVariable)                          EmitterRandomSeedVar                                        OFFSET(getStruct<T>, {0x70, 24, 0, 0})
	SMember(FNiagaraVariable)                          EmitterInstanceSeedVar                                      OFFSET(getStruct<T>, {0x88, 24, 0, 0})
	SMember(FNiagaraVariable)                          EmitterTotalSpawnedParticlesVar                             OFFSET(getStruct<T>, {0xA0, 24, 0, 0})
	SMember(FNiagaraDataSetCompiledData)               DataSetCompiledData                                         OFFSET(getStruct<T>, {0xB8, 64, 0, 0})
};

/// Struct /Script/Niagara.NiagaraParameterDataSetBinding
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraParameterDataSetBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   ParameterOffset                                             OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   DataSetComponentOffset                                      OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraParameterDataSetBindingCollection
/// Size: 0x0020 (0x000000 - 0x000020)
class FNiagaraParameterDataSetBindingCollection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FNiagaraParameterDataSetBinding>)   FloatOffsets                                                OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FNiagaraParameterDataSetBinding>)   Int32Offsets                                                OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSystemCompiledData
/// Size: 0x0228 (0x000000 - 0x000228)
class FNiagaraSystemCompiledData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 552;

public:
	SMember(FNiagaraParameterStore)                    InstanceParamStore                                          OFFSET(getStruct<T>, {0x0, 136, 0, 0})
	SMember(FNiagaraDataSetCompiledData)               DataSetCompiledData                                         OFFSET(getStruct<T>, {0x88, 64, 0, 0})
	SMember(FNiagaraDataSetCompiledData)               SpawnInstanceParamsDataSetCompiledData                      OFFSET(getStruct<T>, {0xC8, 64, 0, 0})
	SMember(FNiagaraDataSetCompiledData)               UpdateInstanceParamsDataSetCompiledData                     OFFSET(getStruct<T>, {0x108, 64, 0, 0})
	SMember(FNiagaraParameterDataSetBindingCollection) SpawnInstanceGlobalBinding                                  OFFSET(getStruct<T>, {0x148, 32, 0, 0})
	SMember(FNiagaraParameterDataSetBindingCollection) SpawnInstanceSystemBinding                                  OFFSET(getStruct<T>, {0x168, 32, 0, 0})
	SMember(FNiagaraParameterDataSetBindingCollection) SpawnInstanceOwnerBinding                                   OFFSET(getStruct<T>, {0x188, 32, 0, 0})
	CMember(TArray<FNiagaraParameterDataSetBindingCollection>) SpawnInstanceEmitterBindings                        OFFSET(get<T>, {0x1A8, 16, 0, 0})
	SMember(FNiagaraParameterDataSetBindingCollection) UpdateInstanceGlobalBinding                                 OFFSET(getStruct<T>, {0x1B8, 32, 0, 0})
	SMember(FNiagaraParameterDataSetBindingCollection) UpdateInstanceSystemBinding                                 OFFSET(getStruct<T>, {0x1D8, 32, 0, 0})
	SMember(FNiagaraParameterDataSetBindingCollection) UpdateInstanceOwnerBinding                                  OFFSET(getStruct<T>, {0x1F8, 32, 0, 0})
	CMember(TArray<FNiagaraParameterDataSetBindingCollection>) UpdateInstanceEmitterBindings                       OFFSET(get<T>, {0x218, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSystemScalabilityOverrides
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraSystemScalabilityOverrides : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FNiagaraSystemScalabilityOverride>) Overrides                                                   OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraWildcard
/// Size: 0x0001 (0x000000 - 0x000001)
class FNiagaraWildcard : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/Niagara.NiagaraFloat
/// Size: 0x0004 (0x000000 - 0x000004)
class FNiagaraFloat : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraInt32
/// Size: 0x0004 (0x000000 - 0x000004)
class FNiagaraInt32 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   Value                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraBool
/// Size: 0x0004 (0x000000 - 0x000004)
class FNiagaraBool : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   Value                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraPosition
/// Size: 0x0000 (0x00000C - 0x00000C)
class FNiagaraPosition : public FVector3f
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
};

/// Struct /Script/Niagara.NiagaraHalf
/// Size: 0x0002 (0x000000 - 0x000002)
class FNiagaraHalf : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(uint16_t)                                  Value                                                       OFFSET(get<uint16_t>, {0x0, 2, 0, 0})
};

/// Struct /Script/Niagara.NiagaraHalfVector2
/// Size: 0x0004 (0x000000 - 0x000004)
class FNiagaraHalfVector2 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(uint16_t)                                  X                                                           OFFSET(get<uint16_t>, {0x0, 2, 0, 0})
	DMember(uint16_t)                                  Y                                                           OFFSET(get<uint16_t>, {0x2, 2, 0, 0})
};

/// Struct /Script/Niagara.NiagaraHalfVector3
/// Size: 0x0006 (0x000000 - 0x000006)
class FNiagaraHalfVector3 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 6;

public:
	DMember(uint16_t)                                  X                                                           OFFSET(get<uint16_t>, {0x0, 2, 0, 0})
	DMember(uint16_t)                                  Y                                                           OFFSET(get<uint16_t>, {0x2, 2, 0, 0})
	DMember(uint16_t)                                  Z                                                           OFFSET(get<uint16_t>, {0x4, 2, 0, 0})
};

/// Struct /Script/Niagara.NiagaraHalfVector4
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraHalfVector4 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(uint16_t)                                  X                                                           OFFSET(get<uint16_t>, {0x0, 2, 0, 0})
	DMember(uint16_t)                                  Y                                                           OFFSET(get<uint16_t>, {0x2, 2, 0, 0})
	DMember(uint16_t)                                  Z                                                           OFFSET(get<uint16_t>, {0x4, 2, 0, 0})
	DMember(uint16_t)                                  W                                                           OFFSET(get<uint16_t>, {0x6, 2, 0, 0})
};

/// Struct /Script/Niagara.NiagaraNumeric
/// Size: 0x0001 (0x000000 - 0x000001)
class FNiagaraNumeric : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/Niagara.NiagaraParameterMap
/// Size: 0x0001 (0x000000 - 0x000001)
class FNiagaraParameterMap : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/Niagara.NiagaraDouble
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraDouble : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(double)                                    Value                                                       OFFSET(get<double>, {0x0, 8, 0, 0})
};

/// Struct /Script/Niagara.NiagaraMatrix
/// Size: 0x0040 (0x000000 - 0x000040)
class FNiagaraMatrix : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector4f)                                 Row0                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FVector4f)                                 Row1                                                        OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FVector4f)                                 Row2                                                        OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FVector4f)                                 Row3                                                        OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraEmitterID
/// Size: 0x0004 (0x000000 - 0x000004)
class FNiagaraEmitterID : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   ID                                                          OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSpawnInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraSpawnInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   Count                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     InterpStartDt                                               OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     IntervalDt                                                  OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   SpawnGroup                                                  OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraID
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraID : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   AcquireTag                                                  OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraRandInfo
/// Size: 0x000C (0x000000 - 0x00000C)
class FNiagaraRandInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(int32_t)                                   Seed1                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Seed2                                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   Seed3                                                       OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraUserRedirectionParameterStore
/// Size: 0x0050 (0x000088 - 0x0000D8)
class FNiagaraUserRedirectionParameterStore : public FNiagaraParameterStore
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(TMap<FNiagaraVariable, FNiagaraVariable>)  UserParameterRedirects                                      OFFSET(get<T>, {0x88, 80, 0, 0})
};

/// Struct /Script/Niagara.NiagaraVariant
/// Size: 0x0028 (0x000000 - 0x000028)
class FNiagaraVariant : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class UObject*)                            Object                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UNiagaraDataInterface*)              DataInterface                                               OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TArray<char>)                              Bytes                                                       OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(ENiagaraVariantMode)                       CurrentMode                                                 OFFSET(get<T>, {0x20, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraWorldManagerTickFunction
/// Size: 0x0008 (0x000028 - 0x000030)
class FNiagaraWorldManagerTickFunction : public FTickFunction
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Enum /Script/Niagara.ENiagaraSimCacheAttributeCaptureMode
/// Size: 0x04
enum ENiagaraSimCacheAttributeCaptureMode : uint8_t
{
	ENiagaraSimCacheAttributeCaptureMode__All                                        = 0,
	ENiagaraSimCacheAttributeCaptureMode__RenderingOnly                              = 1,
	ENiagaraSimCacheAttributeCaptureMode__ExplicitAttributes                         = 2,
	ENiagaraSimCacheAttributeCaptureMode__ENiagaraSimCacheAttributeCaptureMode_MAX   = 3
};

/// Enum /Script/Niagara.ENiagaraCollisionMode
/// Size: 0x05
enum ENiagaraCollisionMode : uint8_t
{
	ENiagaraCollisionMode__None                                                      = 0,
	ENiagaraCollisionMode__SceneGeometry                                             = 1,
	ENiagaraCollisionMode__DepthBuffer                                               = 2,
	ENiagaraCollisionMode__DistanceField                                             = 3,
	ENiagaraCollisionMode__ENiagaraCollisionMode_MAX                                 = 4
};

/// Enum /Script/Niagara.ENiagaraBaseTypes
/// Size: 0x05
enum ENiagaraBaseTypes : uint8_t
{
	ENiagaraBaseTypes__Half                                                          = 0,
	ENiagaraBaseTypes__Float                                                         = 1,
	ENiagaraBaseTypes__Int32                                                         = 2,
	ENiagaraBaseTypes__Bool                                                          = 3,
	ENiagaraBaseTypes__Max                                                           = 4
};

/// Enum /Script/Niagara.ENiagaraGpuBufferFormat
/// Size: 0x04
enum ENiagaraGpuBufferFormat : uint8_t
{
	ENiagaraGpuBufferFormat__Float                                                   = 0,
	ENiagaraGpuBufferFormat__HalfFloat                                               = 1,
	ENiagaraGpuBufferFormat__UnsignedNormalizedByte                                  = 2,
	ENiagaraGpuBufferFormat__Max                                                     = 3
};

/// Enum /Script/Niagara.ENiagaraGpuSyncMode
/// Size: 0x05
enum ENiagaraGpuSyncMode : uint32_t
{
	ENiagaraGpuSyncMode__None                                                        = 0,
	ENiagaraGpuSyncMode__SyncCpuToGpu                                                = 1,
	ENiagaraGpuSyncMode__SyncGpuToCpu                                                = 2,
	ENiagaraGpuSyncMode__SyncBoth                                                    = 3,
	ENiagaraGpuSyncMode__ENiagaraGpuSyncMode_MAX                                     = 4
};

/// Enum /Script/Niagara.ENiagaraMipMapGeneration
/// Size: 0x04
enum ENiagaraMipMapGeneration : uint8_t
{
	ENiagaraMipMapGeneration__Disabled                                               = 0,
	ENiagaraMipMapGeneration__PostStage                                              = 1,
	ENiagaraMipMapGeneration__PostSimulate                                           = 2,
	ENiagaraMipMapGeneration__ENiagaraMipMapGeneration_MAX                           = 3
};

/// Enum /Script/Niagara.ENiagaraDefaultMode
/// Size: 0x05
enum ENiagaraDefaultMode : uint8_t
{
	ENiagaraDefaultMode__Value                                                       = 0,
	ENiagaraDefaultMode__Binding                                                     = 1,
	ENiagaraDefaultMode__Custom                                                      = 2,
	ENiagaraDefaultMode__FailIfPreviouslyNotSet                                      = 3,
	ENiagaraDefaultMode__ENiagaraDefaultMode_MAX                                     = 4
};

/// Enum /Script/Niagara.ENiagaraDefaultRendererMotionVectorSetting
/// Size: 0x03
enum ENiagaraDefaultRendererMotionVectorSetting : uint32_t
{
	ENiagaraDefaultRendererMotionVectorSetting__Precise                              = 0,
	ENiagaraDefaultRendererMotionVectorSetting__Approximate                          = 1,
	ENiagaraDefaultRendererMotionVectorSetting__ENiagaraDefaultRendererMotionVectorSetting_MAX = 2
};

/// Enum /Script/Niagara.ENiagaraRendererMotionVectorSetting
/// Size: 0x05
enum ENiagaraRendererMotionVectorSetting : uint32_t
{
	ENiagaraRendererMotionVectorSetting__AutoDetect                                  = 0,
	ENiagaraRendererMotionVectorSetting__Precise                                     = 1,
	ENiagaraRendererMotionVectorSetting__Approximate                                 = 2,
	ENiagaraRendererMotionVectorSetting__Disable                                     = 3,
	ENiagaraRendererMotionVectorSetting__ENiagaraRendererMotionVectorSetting_MAX     = 4
};

/// Enum /Script/Niagara.ENiagaraSimTarget
/// Size: 0x03
enum ENiagaraSimTarget : uint8_t
{
	ENiagaraSimTarget__CPUSim                                                        = 0,
	ENiagaraSimTarget__GPUComputeSim                                                 = 1,
	ENiagaraSimTarget__ENiagaraSimTarget_MAX                                         = 2
};

/// Enum /Script/Niagara.ENiagaraAgeUpdateMode
/// Size: 0x04
enum ENiagaraAgeUpdateMode : uint8_t
{
	ENiagaraAgeUpdateMode__TickDeltaTime                                             = 0,
	ENiagaraAgeUpdateMode__DesiredAge                                                = 1,
	ENiagaraAgeUpdateMode__DesiredAgeNoSeek                                          = 2,
	ENiagaraAgeUpdateMode__ENiagaraAgeUpdateMode_MAX                                 = 3
};

/// Enum /Script/Niagara.ENiagaraStatEvaluationType
/// Size: 0x03
enum ENiagaraStatEvaluationType : uint8_t
{
	ENiagaraStatEvaluationType__Average                                              = 0,
	ENiagaraStatEvaluationType__Maximum                                              = 1,
	ENiagaraStatEvaluationType__ENiagaraStatEvaluationType_MAX                       = 2
};

/// Enum /Script/Niagara.ENiagaraStatDisplayMode
/// Size: 0x03
enum ENiagaraStatDisplayMode : uint8_t
{
	ENiagaraStatDisplayMode__Percent                                                 = 0,
	ENiagaraStatDisplayMode__Absolute                                                = 1,
	ENiagaraStatDisplayMode__ENiagaraStatDisplayMode_MAX                             = 2
};

/// Enum /Script/Niagara.ENiagaraDataSetType
/// Size: 0x04
enum ENiagaraDataSetType : uint8_t
{
	ENiagaraDataSetType__ParticleData                                                = 0,
	ENiagaraDataSetType__Shared                                                      = 1,
	ENiagaraDataSetType__Event                                                       = 2,
	ENiagaraDataSetType__ENiagaraDataSetType_MAX                                     = 3
};

/// Enum /Script/Niagara.ENiagaraInputNodeUsage
/// Size: 0x07
enum ENiagaraInputNodeUsage : uint8_t
{
	ENiagaraInputNodeUsage__Undefined                                                = 0,
	ENiagaraInputNodeUsage__Parameter                                                = 1,
	ENiagaraInputNodeUsage__Attribute                                                = 2,
	ENiagaraInputNodeUsage__SystemConstant                                           = 3,
	ENiagaraInputNodeUsage__TranslatorConstant                                       = 4,
	ENiagaraInputNodeUsage__RapidIterationParameter                                  = 5,
	ENiagaraInputNodeUsage__ENiagaraInputNodeUsage_MAX                               = 6
};

/// Enum /Script/Niagara.ENiagaraScriptCompileStatus
/// Size: 0x08
enum ENiagaraScriptCompileStatus : uint8_t
{
	ENiagaraScriptCompileStatus__NCS_Unknown                                         = 0,
	ENiagaraScriptCompileStatus__NCS_Dirty                                           = 1,
	ENiagaraScriptCompileStatus__NCS_Error                                           = 2,
	ENiagaraScriptCompileStatus__NCS_UpToDate                                        = 3,
	ENiagaraScriptCompileStatus__NCS_BeingCreated                                    = 4,
	ENiagaraScriptCompileStatus__NCS_UpToDateWithWarnings                            = 5,
	ENiagaraScriptCompileStatus__NCS_ComputeUpToDateWithWarnings                     = 6,
	ENiagaraScriptCompileStatus__NCS_MAX                                             = 7
};

/// Enum /Script/Niagara.ENiagaraScriptUsage
/// Size: 0x14
enum ENiagaraScriptUsage : uint8_t
{
	ENiagaraScriptUsage__Function                                                    = 0,
	ENiagaraScriptUsage__Module                                                      = 1,
	ENiagaraScriptUsage__DynamicInput                                                = 2,
	ENiagaraScriptUsage__ParticleSpawnScript                                         = 3,
	ENiagaraScriptUsage__ParticleSpawnScriptInterpolated                             = 4,
	ENiagaraScriptUsage__ParticleUpdateScript                                        = 5,
	ENiagaraScriptUsage__ParticleEventScript                                         = 6,
	ENiagaraScriptUsage__ParticleSimulationStageScript                               = 7,
	ENiagaraScriptUsage__ParticleGPUComputeScript                                    = 8,
	ENiagaraScriptUsage__EmitterSpawnScript                                          = 9,
	ENiagaraScriptUsage__EmitterUpdateScript                                         = 10,
	ENiagaraScriptUsage__SystemSpawnScript                                           = 11,
	ENiagaraScriptUsage__SystemUpdateScript                                          = 12,
	ENiagaraScriptUsage__ENiagaraScriptUsage_MAX                                     = 13
};

/// Enum /Script/Niagara.ENiagaraCompileUsageStaticSwitch
/// Size: 0x06
enum ENiagaraCompileUsageStaticSwitch : uint8_t
{
	ENiagaraCompileUsageStaticSwitch__Spawn                                          = 0,
	ENiagaraCompileUsageStaticSwitch__Update                                         = 1,
	ENiagaraCompileUsageStaticSwitch__Event                                          = 2,
	ENiagaraCompileUsageStaticSwitch__SimulationStage                                = 3,
	ENiagaraCompileUsageStaticSwitch__Default                                        = 4,
	ENiagaraCompileUsageStaticSwitch__ENiagaraCompileUsageStaticSwitch_MAX           = 5
};

/// Enum /Script/Niagara.ENiagaraScriptContextStaticSwitch
/// Size: 0x04
enum ENiagaraScriptContextStaticSwitch : uint8_t
{
	ENiagaraScriptContextStaticSwitch__System                                        = 0,
	ENiagaraScriptContextStaticSwitch__Emitter                                       = 1,
	ENiagaraScriptContextStaticSwitch__Particle                                      = 2,
	ENiagaraScriptContextStaticSwitch__ENiagaraScriptContextStaticSwitch_MAX         = 3
};

/// Enum /Script/Niagara.ENiagaraScriptGroup
/// Size: 0x04
enum ENiagaraScriptGroup : uint8_t
{
	ENiagaraScriptGroup__Particle                                                    = 0,
	ENiagaraScriptGroup__Emitter                                                     = 1,
	ENiagaraScriptGroup__System                                                      = 2,
	ENiagaraScriptGroup__Max                                                         = 3
};

/// Enum /Script/Niagara.ENiagaraBindingSource
/// Size: 0x07
enum ENiagaraBindingSource : uint8_t
{
	ImplicitFromSource                                                               = 0,
	ExplicitParticles                                                                = 1,
	ExplicitEmitter                                                                  = 2,
	ExplicitSystem                                                                   = 3,
	ExplicitUser                                                                     = 4,
	MaxBindingSource                                                                 = 5,
	ENiagaraBindingSource_MAX                                                        = 6
};

/// Enum /Script/Niagara.ENiagaraRendererSourceDataMode
/// Size: 0x03
enum ENiagaraRendererSourceDataMode : uint8_t
{
	ENiagaraRendererSourceDataMode__Particles                                        = 0,
	ENiagaraRendererSourceDataMode__Emitter                                          = 1,
	ENiagaraRendererSourceDataMode__ENiagaraRendererSourceDataMode_MAX               = 2
};

/// Enum /Script/Niagara.ENiagaraLegacyTrailWidthMode
/// Size: 0x04
enum ENiagaraLegacyTrailWidthMode : uint8_t
{
	ENiagaraLegacyTrailWidthMode__FromCentre                                         = 0,
	ENiagaraLegacyTrailWidthMode__FromFirst                                          = 1,
	ENiagaraLegacyTrailWidthMode__FromSecond                                         = 2,
	ENiagaraLegacyTrailWidthMode__ENiagaraLegacyTrailWidthMode_MAX                   = 3
};

/// Enum /Script/Niagara.ENiagaraSystemInstanceState
/// Size: 0x08
enum ENiagaraSystemInstanceState : uint8_t
{
	ENiagaraSystemInstanceState__None                                                = 0,
	ENiagaraSystemInstanceState__PendingSpawn                                        = 1,
	ENiagaraSystemInstanceState__PendingSpawnPaused                                  = 2,
	ENiagaraSystemInstanceState__Spawning                                            = 3,
	ENiagaraSystemInstanceState__Running                                             = 4,
	ENiagaraSystemInstanceState__Paused                                              = 5,
	ENiagaraSystemInstanceState__Num                                                 = 6,
	ENiagaraSystemInstanceState__ENiagaraSystemInstanceState_MAX                     = 7
};

/// Enum /Script/Niagara.ENiagaraFunctionDebugState
/// Size: 0x03
enum ENiagaraFunctionDebugState : uint8_t
{
	ENiagaraFunctionDebugState__NoDebug                                              = 0,
	ENiagaraFunctionDebugState__Basic                                                = 1,
	ENiagaraFunctionDebugState__ENiagaraFunctionDebugState_MAX                       = 2
};

/// Enum /Script/Niagara.ENiagaraGpuComputeTickStage
/// Size: 0x06
enum ENiagaraGpuComputeTickStage : uint8_t
{
	ENiagaraGpuComputeTickStage__PreInitViews                                        = 0,
	ENiagaraGpuComputeTickStage__PostInitViews                                       = 1,
	ENiagaraGpuComputeTickStage__PostOpaqueRender                                    = 2,
	ENiagaraGpuComputeTickStage__Max                                                 = 3,
	ENiagaraGpuComputeTickStage__First                                               = 0,
	ENiagaraGpuComputeTickStage__Last                                                = 2
};

/// Enum /Script/Niagara.ENiagaraConditionalOperator
/// Size: 0x07
enum ENiagaraConditionalOperator : uint8_t
{
	ENiagaraConditionalOperator__Equals                                              = 0,
	ENiagaraConditionalOperator__NotEqual                                            = 1,
	ENiagaraConditionalOperator__LessThan                                            = 2,
	ENiagaraConditionalOperator__LessThanOrEqual                                     = 3,
	ENiagaraConditionalOperator__GreaterThan                                         = 4,
	ENiagaraConditionalOperator__GreaterThanOrEqual                                  = 5,
	ENiagaraConditionalOperator__Max                                                 = 6
};

/// Enum /Script/Niagara.ENCPoolMethod
/// Size: 0x06
enum ENCPoolMethod : uint8_t
{
	ENCPoolMethod__None                                                              = 0,
	ENCPoolMethod__AutoRelease                                                       = 1,
	ENCPoolMethod__ManualRelease                                                     = 2,
	ENCPoolMethod__ManualRelease_OnComplete                                          = 3,
	ENCPoolMethod__FreeInPool                                                        = 4,
	ENCPoolMethod__ENCPoolMethod_MAX                                                 = 5
};

/// Enum /Script/Niagara.ENiagraDataChannel_IslandMode
/// Size: 0x03
enum ENiagraDataChannel_IslandMode : uint8_t
{
	ENiagraDataChannel_IslandMode__AlignedStatic                                     = 0,
	ENiagraDataChannel_IslandMode__Dynamic                                           = 1,
	ENiagraDataChannel_IslandMode__ENiagraDataChannel_MAX                            = 2
};

/// Enum /Script/Niagara.ENiagaraDataChannelAllocationMode
/// Size: 0x02
enum ENiagaraDataChannelAllocationMode : uint8_t
{
	ENiagaraDataChannelAllocationMode__Static                                        = 0,
	ENiagaraDataChannelAllocationMode__ENiagaraDataChannelAllocationMode_MAX         = 1
};

/// Enum /Script/Niagara.ENDIDataChannelSpawnMode
/// Size: 0x04
enum ENDIDataChannelSpawnMode : uint8_t
{
	ENDIDataChannelSpawnMode__Override                                               = 0,
	ENDIDataChannelSpawnMode__Accumulate                                             = 1,
	ENDIDataChannelSpawnMode__None                                                   = 2,
	ENDIDataChannelSpawnMode__Max                                                    = 3
};

/// Enum /Script/Niagara.ENiagaraSortMode
/// Size: 0x06
enum ENiagaraSortMode : uint8_t
{
	ENiagaraSortMode__None                                                           = 0,
	ENiagaraSortMode__ViewDepth                                                      = 1,
	ENiagaraSortMode__ViewDistance                                                   = 2,
	ENiagaraSortMode__CustomAscending                                                = 3,
	ENiagaraSortMode__CustomDecending                                                = 4,
	ENiagaraSortMode__ENiagaraSortMode_MAX                                           = 5
};

/// Enum /Script/Niagara.ENDISkelMesh_GpuMaxInfluences
/// Size: 0x04
enum ENDISkelMesh_GpuMaxInfluences : uint8_t
{
	ENDISkelMesh_GpuMaxInfluences__AllowMax4                                         = 0,
	ENDISkelMesh_GpuMaxInfluences__AllowMax8                                         = 1,
	ENDISkelMesh_GpuMaxInfluences__Unlimited                                         = 2,
	ENDISkelMesh_GpuMaxInfluences__ENDISkelMesh_MAX                                  = 3
};

/// Enum /Script/Niagara.ENDISkelMesh_GpuUniformSamplingFormat
/// Size: 0x04
enum ENDISkelMesh_GpuUniformSamplingFormat : uint8_t
{
	ENDISkelMesh_GpuUniformSamplingFormat__Full                                      = 0,
	ENDISkelMesh_GpuUniformSamplingFormat__Limited_24                                = 1,
	ENDISkelMesh_GpuUniformSamplingFormat__Limited_23                                = 2,
	ENDISkelMesh_GpuUniformSamplingFormat__ENDISkelMesh_MAX                          = 3
};

/// Enum /Script/Niagara.ENDISkelMesh_AdjacencyTriangleIndexFormat
/// Size: 0x03
enum ENDISkelMesh_AdjacencyTriangleIndexFormat : uint8_t
{
	ENDISkelMesh_AdjacencyTriangleIndexFormat__Full                                  = 0,
	ENDISkelMesh_AdjacencyTriangleIndexFormat__Half                                  = 1,
	ENDISkelMesh_AdjacencyTriangleIndexFormat__ENDISkelMesh_MAX                      = 2
};

/// Enum /Script/Niagara.ENiagaraDefaultRendererPixelCoverageMode
/// Size: 0x03
enum ENiagaraDefaultRendererPixelCoverageMode : uint8_t
{
	ENiagaraDefaultRendererPixelCoverageMode__Enabled                                = 0,
	ENiagaraDefaultRendererPixelCoverageMode__Disabled                               = 1,
	ENiagaraDefaultRendererPixelCoverageMode__ENiagaraDefaultRendererPixelCoverageMode_MAX = 2
};

/// Enum /Script/Niagara.ENiagaraDefaultSortPrecision
/// Size: 0x03
enum ENiagaraDefaultSortPrecision : uint8_t
{
	ENiagaraDefaultSortPrecision__Low                                                = 0,
	ENiagaraDefaultSortPrecision__High                                               = 1,
	ENiagaraDefaultSortPrecision__ENiagaraDefaultSortPrecision_MAX                   = 2
};

/// Enum /Script/Niagara.ENiagaraDefaultGpuTranslucentLatency
/// Size: 0x03
enum ENiagaraDefaultGpuTranslucentLatency : uint8_t
{
	ENiagaraDefaultGpuTranslucentLatency__Immediate                                  = 0,
	ENiagaraDefaultGpuTranslucentLatency__Latent                                     = 1,
	ENiagaraDefaultGpuTranslucentLatency__ENiagaraDefaultGpuTranslucentLatency_MAX   = 2
};

/// Enum /Script/Niagara.ENDICollisionQuery_AsyncGpuTraceProvider
/// Size: 0x05
enum ENDICollisionQuery_AsyncGpuTraceProvider : uint8_t
{
	ENDICollisionQuery_AsyncGpuTraceProvider__Default                                = 0,
	ENDICollisionQuery_AsyncGpuTraceProvider__HWRT                                   = 1,
	ENDICollisionQuery_AsyncGpuTraceProvider__GSDF                                   = 2,
	ENDICollisionQuery_AsyncGpuTraceProvider__None                                   = 3,
	ENDICollisionQuery_AsyncGpuTraceProvider__ENDICollisionQuery_MAX                 = 4
};

/// Enum /Script/Niagara.ENiagaraStripScriptByteCodeOption
/// Size: 0x04
enum ENiagaraStripScriptByteCodeOption : uint8_t
{
	ENiagaraStripScriptByteCodeOption__Default                                       = 0,
	ENiagaraStripScriptByteCodeOption__Strip_Original                                = 1,
	ENiagaraStripScriptByteCodeOption__Strip_Experimental                            = 2,
	ENiagaraStripScriptByteCodeOption__ENiagaraStripScriptByteCodeOption_MAX         = 3
};

/// Enum /Script/Niagara.ENiagaraTickBehavior
/// Size: 0x05
enum ENiagaraTickBehavior : uint8_t
{
	ENiagaraTickBehavior__UsePrereqs                                                 = 0,
	ENiagaraTickBehavior__UseComponentTickGroup                                      = 1,
	ENiagaraTickBehavior__ForceTickFirst                                             = 2,
	ENiagaraTickBehavior__ForceTickLast                                              = 3,
	ENiagaraTickBehavior__ENiagaraTickBehavior_MAX                                   = 4
};

/// Enum /Script/Niagara.ENiagaraInputWidgetType
/// Size: 0x07
enum ENiagaraInputWidgetType : uint8_t
{
	ENiagaraInputWidgetType__Default                                                 = 0,
	ENiagaraInputWidgetType__Slider                                                  = 1,
	ENiagaraInputWidgetType__Volume                                                  = 2,
	ENiagaraInputWidgetType__NumericDropdown                                         = 3,
	ENiagaraInputWidgetType__EnumStyle                                               = 4,
	ENiagaraInputWidgetType__SegmentedButtons                                        = 5,
	ENiagaraInputWidgetType__ENiagaraInputWidgetType_MAX                             = 6
};

/// Enum /Script/Niagara.ENiagaraBoolDisplayMode
/// Size: 0x04
enum ENiagaraBoolDisplayMode : uint8_t
{
	ENiagaraBoolDisplayMode__DisplayAlways                                           = 0,
	ENiagaraBoolDisplayMode__DisplayIfTrue                                           = 1,
	ENiagaraBoolDisplayMode__DisplayIfFalse                                          = 2,
	ENiagaraBoolDisplayMode__ENiagaraBoolDisplayMode_MAX                             = 3
};

/// Enum /Script/Niagara.ENDIActorComponentSourceMode
/// Size: 0x04
enum ENDIActorComponentSourceMode : uint8_t
{
	ENDIActorComponentSourceMode__Default                                            = 0,
	ENDIActorComponentSourceMode__AttachParent                                       = 1,
	ENDIActorComponentSourceMode__LocalPlayer                                        = 2,
	ENDIActorComponentSourceMode__ENDIActorComponentSourceMode_MAX                   = 3
};

/// Enum /Script/Niagara.ENDISceneCapture2DSourceMode
/// Size: 0x05
enum ENDISceneCapture2DSourceMode : uint8_t
{
	ENDISceneCapture2DSourceMode__UserParameterThenAttachParent                      = 0,
	ENDISceneCapture2DSourceMode__UserParameterOnly                                  = 1,
	ENDISceneCapture2DSourceMode__AttachParentOnly                                   = 2,
	ENDISceneCapture2DSourceMode__Managed                                            = 3,
	ENDISceneCapture2DSourceMode__ENDISceneCapture2DSourceMode_MAX                   = 4
};

/// Enum /Script/Niagara.ENDISceneCapture2DOffsetMode
/// Size: 0x05
enum ENDISceneCapture2DOffsetMode : uint8_t
{
	ENDISceneCapture2DOffsetMode__Disabled                                           = 0,
	ENDISceneCapture2DOffsetMode__RelativeLocal                                      = 1,
	ENDISceneCapture2DOffsetMode__RelativeWorld                                      = 2,
	ENDISceneCapture2DOffsetMode__AbsoluteWorld                                      = 3,
	ENDISceneCapture2DOffsetMode__ENDISceneCapture2DOffsetMode_MAX                   = 4
};

/// Enum /Script/Niagara.ENDIStaticMesh_SourceMode
/// Size: 0x06
enum ENDIStaticMesh_SourceMode : uint8_t
{
	ENDIStaticMesh_SourceMode__Default                                               = 0,
	ENDIStaticMesh_SourceMode__Source                                                = 1,
	ENDIStaticMesh_SourceMode__AttachParent                                          = 2,
	ENDIStaticMesh_SourceMode__DefaultMeshOnly                                       = 3,
	ENDIStaticMesh_SourceMode__MeshParameterBinding                                  = 4,
	ENDIStaticMesh_SourceMode__ENDIStaticMesh_MAX                                    = 5
};

/// Enum /Script/Niagara.ENDIObjectPropertyReaderSourceMode
/// Size: 0x04
enum ENDIObjectPropertyReaderSourceMode : uint8_t
{
	ENDIObjectPropertyReaderSourceMode__Binding                                      = 0,
	ENDIObjectPropertyReaderSourceMode__AttachParentActor                            = 1,
	ENDIObjectPropertyReaderSourceMode__BindingThenAttachParentActor                 = 2,
	ENDIObjectPropertyReaderSourceMode__ENDIObjectPropertyReaderSourceMode_MAX       = 3
};

/// Enum /Script/Niagara.ENiagaraSystemSpawnSectionStartBehavior
/// Size: 0x02
enum ENiagaraSystemSpawnSectionStartBehavior : uint32_t
{
	ENiagaraSystemSpawnSectionStartBehavior__Activate                                = 0,
	ENiagaraSystemSpawnSectionStartBehavior__ENiagaraSystemSpawnSectionStartBehavior_MAX = 1
};

/// Enum /Script/Niagara.ENiagaraSystemSpawnSectionEvaluateBehavior
/// Size: 0x03
enum ENiagaraSystemSpawnSectionEvaluateBehavior : uint32_t
{
	ENiagaraSystemSpawnSectionEvaluateBehavior__ActivateIfInactive                   = 0,
	ENiagaraSystemSpawnSectionEvaluateBehavior__None                                 = 1,
	ENiagaraSystemSpawnSectionEvaluateBehavior__ENiagaraSystemSpawnSectionEvaluateBehavior_MAX = 2
};

/// Enum /Script/Niagara.ENiagaraSystemSpawnSectionEndBehavior
/// Size: 0x04
enum ENiagaraSystemSpawnSectionEndBehavior : uint32_t
{
	ENiagaraSystemSpawnSectionEndBehavior__SetSystemInactive                         = 0,
	ENiagaraSystemSpawnSectionEndBehavior__Deactivate                                = 1,
	ENiagaraSystemSpawnSectionEndBehavior__None                                      = 2,
	ENiagaraSystemSpawnSectionEndBehavior__ENiagaraSystemSpawnSectionEndBehavior_MAX = 3
};

/// Enum /Script/Niagara.ENiagaraCompilationState
/// Size: 0x10
enum ENiagaraCompilationState : uint8_t
{
	ENiagaraCompilationState__CheckDDC                                               = 0,
	ENiagaraCompilationState__Precompile                                             = 1,
	ENiagaraCompilationState__StartCompileJob                                        = 2,
	ENiagaraCompilationState__AwaitResult                                            = 3,
	ENiagaraCompilationState__OptimizeByteCode                                       = 4,
	ENiagaraCompilationState__ProcessResult                                          = 5,
	ENiagaraCompilationState__PutToDDC                                               = 6,
	ENiagaraCompilationState__Finished                                               = 7,
	ENiagaraCompilationState__Aborted                                                = 8,
	ENiagaraCompilationState__ENiagaraCompilationState_MAX                           = 9
};

/// Enum /Script/Niagara.ENiagaraBakerViewMode
/// Size: 0x09
enum ENiagaraBakerViewMode : uint32_t
{
	ENiagaraBakerViewMode__Perspective                                               = 0,
	ENiagaraBakerViewMode__OrthoFront                                                = 1,
	ENiagaraBakerViewMode__OrthoBack                                                 = 2,
	ENiagaraBakerViewMode__OrthoLeft                                                 = 3,
	ENiagaraBakerViewMode__OrthoRight                                                = 4,
	ENiagaraBakerViewMode__OrthoTop                                                  = 5,
	ENiagaraBakerViewMode__OrthoBottom                                               = 6,
	ENiagaraBakerViewMode__Num                                                       = 7,
	ENiagaraBakerViewMode__ENiagaraBakerViewMode_MAX                                 = 8
};

/// Enum /Script/Niagara.ENiagaraOcclusionQueryMode
/// Size: 0x04
enum ENiagaraOcclusionQueryMode : uint8_t
{
	ENiagaraOcclusionQueryMode__Default                                              = 0,
	ENiagaraOcclusionQueryMode__AlwaysEnabled                                        = 1,
	ENiagaraOcclusionQueryMode__AlwaysDisabled                                       = 2,
	ENiagaraOcclusionQueryMode__ENiagaraOcclusionQueryMode_MAX                       = 3
};

/// Enum /Script/Niagara.ENiagaraDataInterfaceEmitterBindingMode
/// Size: 0x03
enum ENiagaraDataInterfaceEmitterBindingMode : uint32_t
{
	ENiagaraDataInterfaceEmitterBindingMode__Self                                    = 0,
	ENiagaraDataInterfaceEmitterBindingMode__Other                                   = 1,
	ENiagaraDataInterfaceEmitterBindingMode__ENiagaraDataInterfaceEmitterBindingMode_MAX = 2
};

/// Enum /Script/Niagara.ENDIExport_GPUAllocationMode
/// Size: 0x03
enum ENDIExport_GPUAllocationMode : uint8_t
{
	ENDIExport_GPUAllocationMode__FixedSize                                          = 0,
	ENDIExport_GPUAllocationMode__PerParticle                                        = 1,
	ENDIExport_GPUAllocationMode__ENDIExport_MAX                                     = 2
};

/// Enum /Script/Niagara.ENDILandscape_SourceMode
/// Size: 0x04
enum ENDILandscape_SourceMode : uint8_t
{
	ENDILandscape_SourceMode__Default                                                = 0,
	ENDILandscape_SourceMode__Source                                                 = 1,
	ENDILandscape_SourceMode__AttachParent                                           = 2,
	ENDILandscape_SourceMode__ENDILandscape_MAX                                      = 3
};

/// Enum /Script/Niagara.ESetResolutionMethod
/// Size: 0x04
enum ESetResolutionMethod : uint32_t
{
	ESetResolutionMethod__Independent                                                = 0,
	ESetResolutionMethod__MaxAxis                                                    = 1,
	ESetResolutionMethod__CellSize                                                   = 2,
	ESetResolutionMethod__ESetResolutionMethod_MAX                                   = 3
};

/// Enum /Script/Niagara.ENDISkeletalMesh_SourceMode
/// Size: 0x05
enum ENDISkeletalMesh_SourceMode : uint8_t
{
	ENDISkeletalMesh_SourceMode__Default                                             = 0,
	ENDISkeletalMesh_SourceMode__Source                                              = 1,
	ENDISkeletalMesh_SourceMode__AttachParent                                        = 2,
	ENDISkeletalMesh_SourceMode__DefaultMeshOnly                                     = 3,
	ENDISkeletalMesh_SourceMode__ENDISkeletalMesh_MAX                                = 4
};

/// Enum /Script/Niagara.ENDISkeletalMesh_SkinningMode
/// Size: 0x05
enum ENDISkeletalMesh_SkinningMode : uint8_t
{
	ENDISkeletalMesh_SkinningMode__Invalid                                           = 255,
	ENDISkeletalMesh_SkinningMode__None                                              = 0,
	ENDISkeletalMesh_SkinningMode__SkinOnTheFly                                      = 1,
	ENDISkeletalMesh_SkinningMode__PreSkin                                           = 2,
	ENDISkeletalMesh_SkinningMode__ENDISkeletalMesh_MAX                              = 256
};

/// Enum /Script/Niagara.ENiagaraDebugPlaybackMode
/// Size: 0x05
enum ENiagaraDebugPlaybackMode : uint8_t
{
	ENiagaraDebugPlaybackMode__Play                                                  = 0,
	ENiagaraDebugPlaybackMode__Loop                                                  = 1,
	ENiagaraDebugPlaybackMode__Paused                                                = 2,
	ENiagaraDebugPlaybackMode__Step                                                  = 3,
	ENiagaraDebugPlaybackMode__ENiagaraDebugPlaybackMode_MAX                         = 4
};

/// Enum /Script/Niagara.ENiagaraDebugHudHAlign
/// Size: 0x04
enum ENiagaraDebugHudHAlign : uint8_t
{
	ENiagaraDebugHudHAlign__Left                                                     = 0,
	ENiagaraDebugHudHAlign__Center                                                   = 1,
	ENiagaraDebugHudHAlign__Right                                                    = 2,
	ENiagaraDebugHudHAlign__ENiagaraDebugHudHAlign_MAX                               = 3
};

/// Enum /Script/Niagara.ENiagaraDebugHudVAlign
/// Size: 0x04
enum ENiagaraDebugHudVAlign : uint8_t
{
	ENiagaraDebugHudVAlign__Top                                                      = 0,
	ENiagaraDebugHudVAlign__Center                                                   = 1,
	ENiagaraDebugHudVAlign__Bottom                                                   = 2,
	ENiagaraDebugHudVAlign__ENiagaraDebugHudVAlign_MAX                               = 3
};

/// Enum /Script/Niagara.ENiagaraDebugHudFont
/// Size: 0x03
enum ENiagaraDebugHudFont : uint32_t
{
	ENiagaraDebugHudFont__Small                                                      = 0,
	ENiagaraDebugHudFont__Normal                                                     = 1,
	ENiagaraDebugHudFont__ENiagaraDebugHudFont_MAX                                   = 2
};

/// Enum /Script/Niagara.ENiagaraDebugHudVerbosity
/// Size: 0x04
enum ENiagaraDebugHudVerbosity : uint32_t
{
	ENiagaraDebugHudVerbosity__None                                                  = 0,
	ENiagaraDebugHudVerbosity__Basic                                                 = 1,
	ENiagaraDebugHudVerbosity__Verbose                                               = 2,
	ENiagaraDebugHudVerbosity__ENiagaraDebugHudVerbosity_MAX                         = 3
};

/// Enum /Script/Niagara.ENiagaraDebugHUDOverviewMode
/// Size: 0x06
enum ENiagaraDebugHUDOverviewMode : uint32_t
{
	ENiagaraDebugHUDOverviewMode__Overview                                           = 0,
	ENiagaraDebugHUDOverviewMode__Scalability                                        = 1,
	ENiagaraDebugHUDOverviewMode__Performance                                        = 2,
	ENiagaraDebugHUDOverviewMode__PerformanceGraph                                   = 3,
	ENiagaraDebugHUDOverviewMode__GpuComputePerformance                              = 4,
	ENiagaraDebugHUDOverviewMode__ENiagaraDebugHUDOverviewMode_MAX                   = 5
};

/// Enum /Script/Niagara.ENiagaraDebugHUDPerfGraphMode
/// Size: 0x04
enum ENiagaraDebugHUDPerfGraphMode : uint32_t
{
	ENiagaraDebugHUDPerfGraphMode__GameThread                                        = 0,
	ENiagaraDebugHUDPerfGraphMode__RenderThread                                      = 1,
	ENiagaraDebugHUDPerfGraphMode__GPU                                               = 2,
	ENiagaraDebugHUDPerfGraphMode__ENiagaraDebugHUDPerfGraphMode_MAX                 = 3
};

/// Enum /Script/Niagara.ENiagaraDebugHUDPerfSampleMode
/// Size: 0x03
enum ENiagaraDebugHUDPerfSampleMode : uint32_t
{
	ENiagaraDebugHUDPerfSampleMode__FrameTotal                                       = 0,
	ENiagaraDebugHUDPerfSampleMode__PerInstanceAverage                               = 1,
	ENiagaraDebugHUDPerfSampleMode__ENiagaraDebugHUDPerfSampleMode_MAX               = 2
};

/// Enum /Script/Niagara.ENiagaraDebugHUDDOverviewSort
/// Size: 0x07
enum ENiagaraDebugHUDDOverviewSort : uint32_t
{
	ENiagaraDebugHUDDOverviewSort__Name                                              = 0,
	ENiagaraDebugHUDDOverviewSort__NumberRegistered                                  = 1,
	ENiagaraDebugHUDDOverviewSort__NumberActive                                      = 2,
	ENiagaraDebugHUDDOverviewSort__NumberScalability                                 = 3,
	ENiagaraDebugHUDDOverviewSort__MemoryUsage                                       = 4,
	ENiagaraDebugHUDDOverviewSort__RecentlyVisibilty                                 = 5,
	ENiagaraDebugHUDDOverviewSort__ENiagaraDebugHUDDOverviewSort_MAX                 = 6
};

/// Enum /Script/Niagara.ENiagaraCullReaction
/// Size: 0x06
enum ENiagaraCullReaction : uint32_t
{
	ENiagaraCullReaction__Deactivate                                                 = 0,
	ENiagaraCullReaction__DeactivateImmediate                                        = 1,
	ENiagaraCullReaction__DeactivateResume                                           = 2,
	ENiagaraCullReaction__DeactivateImmediateResume                                  = 3,
	ENiagaraCullReaction__PauseResume                                                = 4,
	ENiagaraCullReaction__ENiagaraCullReaction_MAX                                   = 5
};

/// Enum /Script/Niagara.ENiagaraScalabilityUpdateFrequency
/// Size: 0x06
enum ENiagaraScalabilityUpdateFrequency : uint32_t
{
	ENiagaraScalabilityUpdateFrequency__SpawnOnly                                    = 0,
	ENiagaraScalabilityUpdateFrequency__Low                                          = 1,
	ENiagaraScalabilityUpdateFrequency__Medium                                       = 2,
	ENiagaraScalabilityUpdateFrequency__High                                         = 3,
	ENiagaraScalabilityUpdateFrequency__Continuous                                   = 4,
	ENiagaraScalabilityUpdateFrequency__ENiagaraScalabilityUpdateFrequency_MAX       = 5
};

/// Enum /Script/Niagara.ENiagaraCullProxyMode
/// Size: 0x03
enum ENiagaraCullProxyMode : uint32_t
{
	ENiagaraCullProxyMode__None                                                      = 0,
	ENiagaraCullProxyMode__Instanced_Rendered                                        = 1,
	ENiagaraCullProxyMode__ENiagaraCullProxyMode_MAX                                 = 2
};

/// Enum /Script/Niagara.EScriptExecutionMode
/// Size: 0x04
enum EScriptExecutionMode : uint8_t
{
	EScriptExecutionMode__EveryParticle                                              = 0,
	EScriptExecutionMode__SpawnedParticles                                           = 1,
	EScriptExecutionMode__SingleParticle                                             = 2,
	EScriptExecutionMode__EScriptExecutionMode_MAX                                   = 3
};

/// Enum /Script/Niagara.EParticleAllocationMode
/// Size: 0x04
enum EParticleAllocationMode : uint8_t
{
	EParticleAllocationMode__AutomaticEstimate                                       = 0,
	EParticleAllocationMode__ManualEstimate                                          = 1,
	EParticleAllocationMode__FixedCount                                              = 2,
	EParticleAllocationMode__EParticleAllocationMode_MAX                             = 3
};

/// Enum /Script/Niagara.ENiagaraEmitterCalculateBoundMode
/// Size: 0x04
enum ENiagaraEmitterCalculateBoundMode : uint8_t
{
	ENiagaraEmitterCalculateBoundMode__Dynamic                                       = 0,
	ENiagaraEmitterCalculateBoundMode__Fixed                                         = 1,
	ENiagaraEmitterCalculateBoundMode__Programmable                                  = 2,
	ENiagaraEmitterCalculateBoundMode__ENiagaraEmitterCalculateBoundMode_MAX         = 3
};

/// Enum /Script/Niagara.ENiagaraMeshFacingMode
/// Size: 0x05
enum ENiagaraMeshFacingMode : uint8_t
{
	ENiagaraMeshFacingMode__Default                                                  = 0,
	ENiagaraMeshFacingMode__Velocity                                                 = 1,
	ENiagaraMeshFacingMode__CameraPosition                                           = 2,
	ENiagaraMeshFacingMode__CameraPlane                                              = 3,
	ENiagaraMeshFacingMode__ENiagaraMeshFacingMode_MAX                               = 4
};

/// Enum /Script/Niagara.ENiagaraMeshPivotOffsetSpace
/// Size: 0x05
enum ENiagaraMeshPivotOffsetSpace : uint8_t
{
	ENiagaraMeshPivotOffsetSpace__Mesh                                               = 0,
	ENiagaraMeshPivotOffsetSpace__Simulation                                         = 1,
	ENiagaraMeshPivotOffsetSpace__World                                              = 2,
	ENiagaraMeshPivotOffsetSpace__Local                                              = 3,
	ENiagaraMeshPivotOffsetSpace__ENiagaraMeshPivotOffsetSpace_MAX                   = 4
};

/// Enum /Script/Niagara.ENiagaraMeshLockedAxisSpace
/// Size: 0x04
enum ENiagaraMeshLockedAxisSpace : uint8_t
{
	ENiagaraMeshLockedAxisSpace__Simulation                                          = 0,
	ENiagaraMeshLockedAxisSpace__World                                               = 1,
	ENiagaraMeshLockedAxisSpace__Local                                               = 2,
	ENiagaraMeshLockedAxisSpace__ENiagaraMeshLockedAxisSpace_MAX                     = 3
};

/// Enum /Script/Niagara.ENiagaraMeshLODMode
/// Size: 0x05
enum ENiagaraMeshLODMode : uint8_t
{
	ENiagaraMeshLODMode__LODLevel                                                    = 0,
	ENiagaraMeshLODMode__LODBias                                                     = 1,
	ENiagaraMeshLODMode__ByComponentBounds                                           = 2,
	ENiagaraMeshLODMode__PerParticle                                                 = 3,
	ENiagaraMeshLODMode__ENiagaraMeshLODMode_MAX                                     = 4
};

/// Enum /Script/Niagara.ENiagaraPlatformSelectionState
/// Size: 0x04
enum ENiagaraPlatformSelectionState : uint8_t
{
	ENiagaraPlatformSelectionState__Default                                          = 0,
	ENiagaraPlatformSelectionState__Enabled                                          = 1,
	ENiagaraPlatformSelectionState__Disabled                                         = 2,
	ENiagaraPlatformSelectionState__ENiagaraPlatformSelectionState_MAX               = 3
};

/// Enum /Script/Niagara.ENiagaraPlatformSetState
/// Size: 0x05
enum ENiagaraPlatformSetState : uint8_t
{
	ENiagaraPlatformSetState__Disabled                                               = 0,
	ENiagaraPlatformSetState__Enabled                                                = 1,
	ENiagaraPlatformSetState__Active                                                 = 2,
	ENiagaraPlatformSetState__Unknown                                                = 3,
	ENiagaraPlatformSetState__ENiagaraPlatformSetState_MAX                           = 4
};

/// Enum /Script/Niagara.ENiagaraCVarConditionResponse
/// Size: 0x04
enum ENiagaraCVarConditionResponse : uint8_t
{
	ENiagaraCVarConditionResponse__None                                              = 0,
	ENiagaraCVarConditionResponse__Enable                                            = 1,
	ENiagaraCVarConditionResponse__Disable                                           = 2,
	ENiagaraCVarConditionResponse__ENiagaraCVarConditionResponse_MAX                 = 3
};

/// Enum /Script/Niagara.ENiagaraDeviceProfileRedirectMode
/// Size: 0x03
enum ENiagaraDeviceProfileRedirectMode : uint8_t
{
	ENiagaraDeviceProfileRedirectMode__CVar                                          = 0,
	ENiagaraDeviceProfileRedirectMode__DeviceProfile                                 = 1,
	ENiagaraDeviceProfileRedirectMode__ENiagaraDeviceProfileRedirectMode_MAX         = 2
};

/// Enum /Script/Niagara.ENiagaraPreviewGridResetMode
/// Size: 0x04
enum ENiagaraPreviewGridResetMode : uint8_t
{
	ENiagaraPreviewGridResetMode__Never                                              = 0,
	ENiagaraPreviewGridResetMode__Individual                                         = 1,
	ENiagaraPreviewGridResetMode__All                                                = 2,
	ENiagaraPreviewGridResetMode__ENiagaraPreviewGridResetMode_MAX                   = 3
};

/// Enum /Script/Niagara.ENiagaraRendererSortPrecision
/// Size: 0x04
enum ENiagaraRendererSortPrecision : uint8_t
{
	ENiagaraRendererSortPrecision__Default                                           = 0,
	ENiagaraRendererSortPrecision__Low                                               = 1,
	ENiagaraRendererSortPrecision__High                                              = 2,
	ENiagaraRendererSortPrecision__ENiagaraRendererSortPrecision_MAX                 = 3
};

/// Enum /Script/Niagara.ENiagaraRendererGpuTranslucentLatency
/// Size: 0x04
enum ENiagaraRendererGpuTranslucentLatency : uint8_t
{
	ENiagaraRendererGpuTranslucentLatency__ProjectDefault                            = 0,
	ENiagaraRendererGpuTranslucentLatency__Immediate                                 = 1,
	ENiagaraRendererGpuTranslucentLatency__Latent                                    = 2,
	ENiagaraRendererGpuTranslucentLatency__ENiagaraRendererGpuTranslucentLatency_MAX = 3
};

/// Enum /Script/Niagara.ENiagaraRibbonFacingMode
/// Size: 0x04
enum ENiagaraRibbonFacingMode : uint8_t
{
	ENiagaraRibbonFacingMode__Screen                                                 = 0,
	ENiagaraRibbonFacingMode__Custom                                                 = 1,
	ENiagaraRibbonFacingMode__CustomSideVector                                       = 2,
	ENiagaraRibbonFacingMode__ENiagaraRibbonFacingMode_MAX                           = 3
};

/// Enum /Script/Niagara.ENiagaraRibbonAgeOffsetMode
/// Size: 0x03
enum ENiagaraRibbonAgeOffsetMode : uint8_t
{
	ENiagaraRibbonAgeOffsetMode__Scale                                               = 0,
	ENiagaraRibbonAgeOffsetMode__Clip                                                = 1,
	ENiagaraRibbonAgeOffsetMode__ENiagaraRibbonAgeOffsetMode_MAX                     = 2
};

/// Enum /Script/Niagara.ENiagaraRibbonDrawDirection
/// Size: 0x03
enum ENiagaraRibbonDrawDirection : uint8_t
{
	ENiagaraRibbonDrawDirection__FrontToBack                                         = 0,
	ENiagaraRibbonDrawDirection__BackToFront                                         = 1,
	ENiagaraRibbonDrawDirection__ENiagaraRibbonDrawDirection_MAX                     = 2
};

/// Enum /Script/Niagara.ENiagaraRibbonShapeMode
/// Size: 0x05
enum ENiagaraRibbonShapeMode : uint8_t
{
	ENiagaraRibbonShapeMode__Plane                                                   = 0,
	ENiagaraRibbonShapeMode__MultiPlane                                              = 1,
	ENiagaraRibbonShapeMode__Tube                                                    = 2,
	ENiagaraRibbonShapeMode__Custom                                                  = 3,
	ENiagaraRibbonShapeMode__ENiagaraRibbonShapeMode_MAX                             = 4
};

/// Enum /Script/Niagara.ENiagaraRibbonTessellationMode
/// Size: 0x04
enum ENiagaraRibbonTessellationMode : uint8_t
{
	ENiagaraRibbonTessellationMode__Automatic                                        = 0,
	ENiagaraRibbonTessellationMode__Custom                                           = 1,
	ENiagaraRibbonTessellationMode__Disabled                                         = 2,
	ENiagaraRibbonTessellationMode__ENiagaraRibbonTessellationMode_MAX               = 3
};

/// Enum /Script/Niagara.ENiagaraRibbonUVEdgeMode
/// Size: 0x03
enum ENiagaraRibbonUVEdgeMode : uint8_t
{
	ENiagaraRibbonUVEdgeMode__SmoothTransition                                       = 0,
	ENiagaraRibbonUVEdgeMode__Locked                                                 = 1,
	ENiagaraRibbonUVEdgeMode__ENiagaraRibbonUVEdgeMode_MAX                           = 2
};

/// Enum /Script/Niagara.ENiagaraRibbonUVDistributionMode
/// Size: 0x05
enum ENiagaraRibbonUVDistributionMode : uint8_t
{
	ENiagaraRibbonUVDistributionMode__ScaledUniformly                                = 0,
	ENiagaraRibbonUVDistributionMode__ScaledUsingRibbonSegmentLength                 = 1,
	ENiagaraRibbonUVDistributionMode__TiledOverRibbonLength                          = 2,
	ENiagaraRibbonUVDistributionMode__TiledFromStartOverRibbonLength                 = 3,
	ENiagaraRibbonUVDistributionMode__ENiagaraRibbonUVDistributionMode_MAX           = 4
};

/// Enum /Script/Niagara.EUnusedAttributeBehaviour
/// Size: 0x06
enum EUnusedAttributeBehaviour : uint8_t
{
	EUnusedAttributeBehaviour__Copy                                                  = 0,
	EUnusedAttributeBehaviour__Zero                                                  = 1,
	EUnusedAttributeBehaviour__None                                                  = 2,
	EUnusedAttributeBehaviour__MarkInvalid                                           = 3,
	EUnusedAttributeBehaviour__PassThrough                                           = 4,
	EUnusedAttributeBehaviour__EUnusedAttributeBehaviour_MAX                         = 5
};

/// Enum /Script/Niagara.ENiagaraModuleDependencyType
/// Size: 0x03
enum ENiagaraModuleDependencyType : uint8_t
{
	ENiagaraModuleDependencyType__PreDependency                                      = 0,
	ENiagaraModuleDependencyType__PostDependency                                     = 1,
	ENiagaraModuleDependencyType__ENiagaraModuleDependencyType_MAX                   = 2
};

/// Enum /Script/Niagara.ENiagaraModuleDependencyScriptConstraint
/// Size: 0x03
enum ENiagaraModuleDependencyScriptConstraint : uint8_t
{
	ENiagaraModuleDependencyScriptConstraint__SameScript                             = 0,
	ENiagaraModuleDependencyScriptConstraint__AllScripts                             = 1,
	ENiagaraModuleDependencyScriptConstraint__ENiagaraModuleDependencyScriptConstraint_MAX = 2
};

/// Enum /Script/Niagara.ENiagaraScriptLibraryVisibility
/// Size: 0x05
enum ENiagaraScriptLibraryVisibility : uint8_t
{
	ENiagaraScriptLibraryVisibility__Invalid                                         = 0,
	ENiagaraScriptLibraryVisibility__Unexposed                                       = 1,
	ENiagaraScriptLibraryVisibility__Library                                         = 2,
	ENiagaraScriptLibraryVisibility__Hidden                                          = 3,
	ENiagaraScriptLibraryVisibility__ENiagaraScriptLibraryVisibility_MAX             = 4
};

/// Enum /Script/Niagara.ENiagaraScriptTemplateSpecification
/// Size: 0x04
enum ENiagaraScriptTemplateSpecification : uint8_t
{
	ENiagaraScriptTemplateSpecification__None                                        = 0,
	ENiagaraScriptTemplateSpecification__Template                                    = 1,
	ENiagaraScriptTemplateSpecification__Behavior                                    = 2,
	ENiagaraScriptTemplateSpecification__ENiagaraScriptTemplateSpecification_MAX     = 3
};

/// Enum /Script/Niagara.ENiagaraEmitterDefaultSummaryState
/// Size: 0x03
enum ENiagaraEmitterDefaultSummaryState : uint8_t
{
	ENiagaraEmitterDefaultSummaryState__Default                                      = 0,
	ENiagaraEmitterDefaultSummaryState__Summary                                      = 1,
	ENiagaraEmitterDefaultSummaryState__ENiagaraEmitterDefaultSummaryState_MAX       = 2
};

/// Enum /Script/Niagara.ENiagaraModuleDependencyUsage
/// Size: 0x06
enum ENiagaraModuleDependencyUsage : uint8_t
{
	ENiagaraModuleDependencyUsage__None                                              = 0,
	ENiagaraModuleDependencyUsage__Spawn                                             = 1,
	ENiagaraModuleDependencyUsage__Update                                            = 2,
	ENiagaraModuleDependencyUsage__Event                                             = 3,
	ENiagaraModuleDependencyUsage__SimulationStage                                   = 4,
	ENiagaraModuleDependencyUsage__ENiagaraModuleDependencyUsage_MAX                 = 5
};

/// Enum /Script/Niagara.ENiagaraInlineDynamicInputFormatTokenUsage
/// Size: 0x04
enum ENiagaraInlineDynamicInputFormatTokenUsage : uint8_t
{
	ENiagaraInlineDynamicInputFormatTokenUsage__Input                                = 0,
	ENiagaraInlineDynamicInputFormatTokenUsage__Decorator                            = 1,
	ENiagaraInlineDynamicInputFormatTokenUsage__LineBreak                            = 2,
	ENiagaraInlineDynamicInputFormatTokenUsage__ENiagaraInlineDynamicInputFormatTokenUsage_MAX = 3
};

/// Enum /Script/Niagara.ENiagaraSpriteAlignment
/// Size: 0x05
enum ENiagaraSpriteAlignment : uint8_t
{
	ENiagaraSpriteAlignment__Unaligned                                               = 0,
	ENiagaraSpriteAlignment__VelocityAligned                                         = 1,
	ENiagaraSpriteAlignment__CustomAlignment                                         = 2,
	ENiagaraSpriteAlignment__Automatic                                               = 3,
	ENiagaraSpriteAlignment__ENiagaraSpriteAlignment_MAX                             = 4
};

/// Enum /Script/Niagara.ENiagaraSpriteFacingMode
/// Size: 0x07
enum ENiagaraSpriteFacingMode : uint8_t
{
	ENiagaraSpriteFacingMode__FaceCamera                                             = 0,
	ENiagaraSpriteFacingMode__FaceCameraPlane                                        = 1,
	ENiagaraSpriteFacingMode__CustomFacingVector                                     = 2,
	ENiagaraSpriteFacingMode__FaceCameraPosition                                     = 3,
	ENiagaraSpriteFacingMode__FaceCameraDistanceBlend                                = 4,
	ENiagaraSpriteFacingMode__Automatic                                              = 5,
	ENiagaraSpriteFacingMode__ENiagaraSpriteFacingMode_MAX                           = 6
};

/// Enum /Script/Niagara.ENiagaraRendererPixelCoverageMode
/// Size: 0x07
enum ENiagaraRendererPixelCoverageMode : uint8_t
{
	ENiagaraRendererPixelCoverageMode__Automatic                                     = 0,
	ENiagaraRendererPixelCoverageMode__Disabled                                      = 1,
	ENiagaraRendererPixelCoverageMode__Enabled                                       = 2,
	ENiagaraRendererPixelCoverageMode__Enabled_RGBA                                  = 3,
	ENiagaraRendererPixelCoverageMode__Enabled_RGB                                   = 4,
	ENiagaraRendererPixelCoverageMode__Enabled_A                                     = 5,
	ENiagaraRendererPixelCoverageMode__ENiagaraRendererPixelCoverageMode_MAX         = 6
};

/// Enum /Script/Niagara.ENiagaraStructConversionType
/// Size: 0x07
enum ENiagaraStructConversionType : uint8_t
{
	ENiagaraStructConversionType__CopyOnly                                           = 0,
	ENiagaraStructConversionType__DoubleToFloat                                      = 1,
	ENiagaraStructConversionType__Vector2                                            = 2,
	ENiagaraStructConversionType__Vector3                                            = 3,
	ENiagaraStructConversionType__Vector4                                            = 4,
	ENiagaraStructConversionType__Quat                                               = 5,
	ENiagaraStructConversionType__ENiagaraStructConversionType_MAX                   = 6
};

/// Enum /Script/Niagara.ENiagaraNumericOutputTypeSelectionMode
/// Size: 0x06
enum ENiagaraNumericOutputTypeSelectionMode : uint8_t
{
	ENiagaraNumericOutputTypeSelectionMode__None                                     = 0,
	ENiagaraNumericOutputTypeSelectionMode__Largest                                  = 1,
	ENiagaraNumericOutputTypeSelectionMode__Smallest                                 = 2,
	ENiagaraNumericOutputTypeSelectionMode__Scalar                                   = 3,
	ENiagaraNumericOutputTypeSelectionMode__Custom                                   = 4,
	ENiagaraNumericOutputTypeSelectionMode__ENiagaraNumericOutputTypeSelectionMode_MAX = 5
};

/// Enum /Script/Niagara.ENiagaraExecutionStateSource
/// Size: 0x05
enum ENiagaraExecutionStateSource : uint8_t
{
	ENiagaraExecutionStateSource__Scalability                                        = 0,
	ENiagaraExecutionStateSource__Internal                                           = 1,
	ENiagaraExecutionStateSource__Owner                                              = 2,
	ENiagaraExecutionStateSource__InternalCompletion                                 = 3,
	ENiagaraExecutionStateSource__ENiagaraExecutionStateSource_MAX                   = 4
};

/// Enum /Script/Niagara.ENiagaraExecutionState
/// Size: 0x07
enum ENiagaraExecutionState : uint32_t
{
	ENiagaraExecutionState__Active                                                   = 0,
	ENiagaraExecutionState__Inactive                                                 = 1,
	ENiagaraExecutionState__InactiveClear                                            = 2,
	ENiagaraExecutionState__Complete                                                 = 3,
	ENiagaraExecutionState__Disabled                                                 = 4,
	ENiagaraExecutionState__Num                                                      = 5,
	ENiagaraExecutionState__ENiagaraExecutionState_MAX                               = 6
};

/// Enum /Script/Niagara.ENiagaraCoordinateSpace
/// Size: 0x04
enum ENiagaraCoordinateSpace : uint8_t
{
	ENiagaraCoordinateSpace__Simulation                                              = 0,
	ENiagaraCoordinateSpace__World                                                   = 1,
	ENiagaraCoordinateSpace__Local                                                   = 2,
	ENiagaraCoordinateSpace__ENiagaraCoordinateSpace_MAX                             = 3
};

/// Enum /Script/Niagara.ENiagaraPythonUpdateScriptReference
/// Size: 0x04
enum ENiagaraPythonUpdateScriptReference : uint8_t
{
	ENiagaraPythonUpdateScriptReference__None                                        = 0,
	ENiagaraPythonUpdateScriptReference__ScriptAsset                                 = 1,
	ENiagaraPythonUpdateScriptReference__DirectTextEntry                             = 2,
	ENiagaraPythonUpdateScriptReference__ENiagaraPythonUpdateScriptReference_MAX     = 3
};

/// Enum /Script/Niagara.ENiagaraOrientationAxis
/// Size: 0x04
enum ENiagaraOrientationAxis : uint8_t
{
	ENiagaraOrientationAxis__XAxis                                                   = 0,
	ENiagaraOrientationAxis__YAxis                                                   = 1,
	ENiagaraOrientationAxis__ZAxis                                                   = 2,
	ENiagaraOrientationAxis__ENiagaraOrientationAxis_MAX                             = 3
};

/// Enum /Script/Niagara.ENiagaraValidationSeverity
/// Size: 0x04
enum ENiagaraValidationSeverity : uint8_t
{
	ENiagaraValidationSeverity__Info                                                 = 0,
	ENiagaraValidationSeverity__Warning                                              = 1,
	ENiagaraValidationSeverity__Error                                                = 2,
	ENiagaraValidationSeverity__ENiagaraValidationSeverity_MAX                       = 3
};

/// Enum /Script/Niagara.ENiagaraVariantMode
/// Size: 0x05
enum ENiagaraVariantMode : uint32_t
{
	ENiagaraVariantMode__None                                                        = 0,
	ENiagaraVariantMode__Object                                                      = 1,
	ENiagaraVariantMode__DataInterface                                               = 2,
	ENiagaraVariantMode__Bytes                                                       = 3,
	ENiagaraVariantMode__ENiagaraVariantMode_MAX                                     = 4
};

/// Enum /Script/Niagara.EVolumeCacheType
/// Size: 0x02
enum EVolumeCacheType : uint8_t
{
	EVolumeCacheType__OpenVDB                                                        = 0,
	EVolumeCacheType__EVolumeCacheType_MAX                                           = 1
};

