
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FabricRuntime
/// dependency: FortniteGame
/// dependency: GameplayEventRouter

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCable
/// Size: 0x01D8 (0x000718 - 0x0008F0)
class AFMDeviceCable : public ABuildingActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2288;

public:
	CMember(class USplineComponent*)                   SplineComponent                                             OFFSET(get<T>, {0x730, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               DeviceCableHead                                             OFFSET(get<T>, {0x738, 8, 0, 0})
	CMember(class UClass*)                             SplineMeshComponentClass                                    OFFSET(get<T>, {0x740, 8, 0, 0})
	CMember(TWeakObjectPtr<UStaticMesh*>)              ScalarStaticMesh                                            OFFSET(get<T>, {0x748, 32, 0, 0})
	CMember(TWeakObjectPtr<UStaticMesh*>)              AudioStaticMesh                                             OFFSET(get<T>, {0x768, 32, 0, 0})
	CMember(TWeakObjectPtr<UStaticMesh*>)              NoteStaticMesh                                              OFFSET(get<T>, {0x788, 32, 0, 0})
	CMember(TWeakObjectPtr<UStaticMesh*>)              TextureStaticMesh                                           OFFSET(get<T>, {0x7A8, 32, 0, 0})
	CMember(TWeakObjectPtr<UStaticMesh*>)              MeshStaticMesh                                              OFFSET(get<T>, {0x7C8, 32, 0, 0})
	SMember(FName)                                     SplineLengthParam                                           OFFSET(getStruct<T>, {0x7E8, 4, 0, 0})
	SMember(FName)                                     SplineStartParam                                            OFFSET(getStruct<T>, {0x7EC, 4, 0, 0})
	SMember(FName)                                     SplineEndParam                                              OFFSET(getStruct<T>, {0x7F0, 4, 0, 0})
	SMember(FName)                                     PortTypeParam                                               OFFSET(getStruct<T>, {0x7F4, 4, 0, 0})
	DMember(float)                                     CableStubLength                                             OFFSET(get<float>, {0x7F8, 4, 0, 0})
	DMember(float)                                     CableDistanceFromPortB                                      OFFSET(get<float>, {0x7FC, 4, 0, 0})
	DMember(float)                                     CableMinTangent                                             OFFSET(get<float>, {0x800, 4, 0, 0})
	DMember(float)                                     CableMaxTangent                                             OFFSET(get<float>, {0x804, 4, 0, 0})
	DMember(float)                                     CableSectionLengthAtCableCenter                             OFFSET(get<float>, {0x808, 4, 0, 0})
	DMember(float)                                     CableSectionLengthAtCableHeads                              OFFSET(get<float>, {0x80C, 4, 0, 0})
	DMember(int32_t)                                   CableSectionCountAtCableHeads                               OFFSET(get<int32_t>, {0x810, 4, 0, 0})
	DMember(int32_t)                                   CableCenterSectionsMaxCount                                 OFFSET(get<int32_t>, {0x814, 4, 0, 0})
	DMember(float)                                     ExtremeMinDotProduct                                        OFFSET(get<float>, {0x818, 4, 0, 0})
	DMember(float)                                     MaxExtremeCableBendSize                                     OFFSET(get<float>, {0x81C, 4, 0, 0})
	DMember(float)                                     ExtremeAngleTangentScale                                    OFFSET(get<float>, {0x820, 4, 0, 0})
	CMember(TArray<class USplineMeshComponent*>)       CableSplineMeshArray                                        OFFSET(get<T>, {0x828, 16, 0, 0})
	CMember(TWeakObjectPtr<UFMDeviceCableAnimatorBase*>) DeviceCableAnimator                                       OFFSET(get<T>, {0x838, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           DeviceCableMaterial                                         OFFSET(get<T>, {0x840, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           DeviceCableHeadMaterial                                     OFFSET(get<T>, {0x848, 8, 0, 0})
	CMember(class UFMDeviceCablePortComponent*)        ConstantPort                                                OFFSET(get<T>, {0x860, 8, 0, 0})
	CMember(class UFMDeviceCablePortComponent*)        PortA                                                       OFFSET(get<T>, {0x868, 8, 0, 0})
	CMember(class UFMDeviceCablePortComponent*)        ServerPortA                                                 OFFSET(get<T>, {0x870, 8, 0, 0})
	CMember(class UFMDeviceCablePortComponent*)        PortB                                                       OFFSET(get<T>, {0x878, 8, 0, 0})
	CMember(class UFMDeviceCablePortComponent*)        ServerPortB                                                 OFFSET(get<T>, {0x880, 8, 0, 0})


	/// Functions
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.UpdateVisualParameters
	// void UpdateVisualParameters();                                                                                           // [0xb5503c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.UpdateDeviceCableAnimator
	// void UpdateDeviceCableAnimator();                                                                                        // [0xb5503ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.SetFocusedVisuals
	// void SetFocusedVisuals(bool bIsFocused);                                                                                 // [0xb550220] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.OnSplineUpdated
	// void OnSplineUpdated(bool bCollisionEnabled);                                                                            // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.OnScalesUpdated
	// void OnScalesUpdated(FVector StartScale, FVector EndScale);                                                              // [0x211c0a0] Event|Protected|HasDefaults|BlueprintEvent 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.OnRep_ServerPortB
	// void OnRep_ServerPortB();                                                                                                // [0xb54f79c] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.OnRep_ServerPortA
	// void OnRep_ServerPortA();                                                                                                // [0xb54f774] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.OnCableReturned
	// void OnCableReturned();                                                                                                  // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.OnCableGrabbed
	// void OnCableGrabbed(bool bThroughReplication);                                                                           // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.OnCableDisconnected
	// void OnCableDisconnected(bool bThroughReplication);                                                                      // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.OnCableConnected
	// void OnCableConnected(bool bThroughReplication);                                                                         // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.GetPortB
	// class UFMDeviceCablePortComponent* GetPortB();                                                                           // [0xb54f0e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.GetPortA
	// class UFMDeviceCablePortComponent* GetPortA();                                                                           // [0xb54f0cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.GetDeviceCableHead
	// class UStaticMeshComponent* GetDeviceCableHead();                                                                        // [0xb54f0b4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.GetConstantPort
	// class UFMDeviceCablePortComponent* GetConstantPort();                                                                    // [0xb54f09c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.GetCableSpline
	// class USplineComponent* GetCableSpline();                                                                                // [0xb54f084] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.GetCableDataType
	// EDeviceCablePortDataType GetCableDataType();                                                                             // [0xb54f04c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.Disconnect
	// void Disconnect();                                                                                                       // [0xb54f024] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.ConnectPort
	// void ConnectPort(class UFMDeviceCablePortComponent* Port);                                                               // [0xb54ee48] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.ConnectConstantPort
	// void ConnectConstantPort(class UFMDeviceCablePortComponent* Port);                                                       // [0xb54edc8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.BuildMeshOnSpline
	// void BuildMeshOnSpline(bool bCollisionEnabled);                                                                          // [0xb54ed48] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorTickSubsystem
/// Size: 0x0050 (0x0000D0 - 0x000120)
class UFMDeviceCableAnimatorTickSubsystem : public UFortManagedTickSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorBase
/// Size: 0x00C0 (0x000028 - 0x0000E8)
class UFMDeviceCableAnimatorBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	CMember(TWeakObjectPtr<UFMDeviceCablePortComponent*>) OwnerPort                                                OFFSET(get<T>, {0x78, 8, 0, 0})


	/// Functions
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorBase.SetOwnerPort
	// void SetOwnerPort(class UFMDeviceCablePortComponent* OwnerPort);                                                         // [0xb55032c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorBase.RemoveMaterialInstance
	// void RemoveMaterialInstance(class UMaterialInstanceDynamic* InMaterialInstance);                                         // [0xb54f8ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorBase.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorBase.OnPortArtifactUpdated
	// void OnPortArtifactUpdated();                                                                                            // [0x6497ffc] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorBase.OnConnectionStarted
	// void OnConnectionStarted(class UFMDeviceCableConnectionBase* NewConnection);                                             // [0x7057120] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorBase.OnConnectionEnded
	// void OnConnectionEnded(class UFMDeviceCableConnectionBase* EndedConnection);                                             // [0x70571a4] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorBase.AddMaterialInstance
	// void AddMaterialInstance(class UMaterialInstanceDynamic* InMaterialInstance);                                            // [0xb54ecc8] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorMidiEvent
/// Size: 0x00A8 (0x0000E8 - 0x000190)
class UFMDeviceCableAnimatorMidiEvent : public UFMDeviceCableAnimatorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FName)                                     NoteTextureParam                                            OFFSET(getStruct<T>, {0xE8, 4, 0, 0})
	CMember(class UCurveFloat*)                        NoteShapeCurve                                              OFFSET(get<T>, {0xF0, 8, 0, 0})
	DMember(float)                                     NotePercentOfTexture                                        OFFSET(get<float>, {0xF8, 4, 0, 0})
	DMember(float)                                     NoteTravelBeats                                             OFFSET(get<float>, {0xFC, 4, 0, 0})
	DMember(float)                                     NoteStartDelayBeats                                         OFFSET(get<float>, {0x100, 4, 0, 0})
	CMember(class UTexture2D*)                         NoteTexture                                                 OFFSET(get<T>, {0x118, 8, 0, 0})
	CMember(class UFabricMetaSoundPatchWrapper*)       PatchWrapper                                                OFFSET(get<T>, {0x120, 8, 0, 0})


	/// Functions
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorMidiEvent.OnMetaSoundOutputIntChangedBatch
	// void OnMetaSoundOutputIntChangedBatch(FName& OutputName, TArray<int32_t>& Output);                                       // [0xb54f650] Final|Native|Private|HasOutParms 
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorFloatProvider
/// Size: 0x0010 (0x0000E8 - 0x0000F8)
class UFMDeviceCableAnimatorFloatProvider : public UFMDeviceCableAnimatorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	SMember(FName)                                     CableDataParam                                              OFFSET(getStruct<T>, {0xE8, 4, 0, 0})
	SMember(FName)                                     FloatProviderTypeParam                                      OFFSET(getStruct<T>, {0xEC, 4, 0, 0})
	CMember(class UFabricFloatProviderBase*)           FloatProvider                                               OFFSET(get<T>, {0xF0, 8, 0, 0})


	/// Functions
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorFloatProvider.SetFloatProvider
	// void SetFloatProvider(class UFabricFloatProviderBase* InFloatProvider);                                                  // [0xb5501a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorFloatProvider.OnFloatChanged
	// void OnFloatChanged(float CurrentFloat);                                                                                 // [0xb54f22c] Final|Native|Protected 
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorTextureProvider
/// Size: 0x0010 (0x0000E8 - 0x0000F8)
class UFMDeviceCableAnimatorTextureProvider : public UFMDeviceCableAnimatorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	SMember(FName)                                     CableDataParam                                              OFFSET(getStruct<T>, {0xE8, 4, 0, 0})
	DMember(float)                                     DecayRate                                                   OFFSET(get<float>, {0xEC, 4, 0, 0})
	CMember(class UFabricTextureProviderBase*)         TextureProvider                                             OFFSET(get<T>, {0xF0, 8, 0, 0})


	/// Functions
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorTextureProvider.SetTextureProvider
	// void SetTextureProvider(class UFabricTextureProviderBase* InTextureProvider);                                            // [0xb5502a0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorMeshProvider
/// Size: 0x0010 (0x0000E8 - 0x0000F8)
class UFMDeviceCableAnimatorMeshProvider : public UFMDeviceCableAnimatorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	SMember(FName)                                     CableDataParam                                              OFFSET(getStruct<T>, {0xE8, 4, 0, 0})
	DMember(float)                                     DecayRate                                                   OFFSET(get<float>, {0xEC, 4, 0, 0})
	CMember(class UFabricMeshProviderBase*)            MeshProvider                                                OFFSET(get<T>, {0xF0, 8, 0, 0})


	/// Functions
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorMeshProvider.SetMeshProvider
	// void SetMeshProvider(class UFabricMeshProviderBase* InMeshProvider);                                                     // [0xb5502a0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorAudioAnalyzer
/// Size: 0x0080 (0x0000E8 - 0x000168)
class UFMDeviceCableAnimatorAudioAnalyzer : public UFMDeviceCableAnimatorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	SMember(FName)                                     FftTextureParam                                             OFFSET(getStruct<T>, {0xE8, 4, 0, 0})
	SMember(FName)                                     WaveformTextureParam                                        OFFSET(getStruct<T>, {0xEC, 4, 0, 0})
	SMember(FName)                                     AmplitudeTextureParam                                       OFFSET(getStruct<T>, {0xF0, 4, 0, 0})
	SMember(FName)                                     AmplitudeDataParam                                          OFFSET(getStruct<T>, {0xF4, 4, 0, 0})
	SMember(FName)                                     CableQualityParam                                           OFFSET(getStruct<T>, {0xF8, 4, 0, 0})
	SMember(FName)                                     CableReactivityParam                                        OFFSET(getStruct<T>, {0xFC, 4, 0, 0})
	DMember(int32_t)                                   WaveformNumSamplesHeld                                      OFFSET(get<int32_t>, {0x100, 4, 0, 0})
	DMember(int32_t)                                   WaveformSmoothingDistance                                   OFFSET(get<int32_t>, {0x104, 4, 0, 0})
	DMember(float)                                     WaveformSmoothingFactor                                     OFFSET(get<float>, {0x108, 4, 0, 0})
	DMember(float)                                     WaveformDecayPerSecond                                      OFFSET(get<float>, {0x10C, 4, 0, 0})
	CMember(class UTexture2D*)                         WaveformTexture                                             OFFSET(get<T>, {0x110, 8, 0, 0})
	CMember(class UTexture2D*)                         AmplitudeTexture                                            OFFSET(get<T>, {0x118, 8, 0, 0})
	CMember(class UFabricMetaSoundPatchWrapper*)       PatchWrapper                                                OFFSET(get<T>, {0x120, 8, 0, 0})


	/// Functions
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorAudioAnalyzer.SetAnalyzerName
	// void SetAnalyzerName(FName AnalyzerName);                                                                                // [0xb550124] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorAudioAnalyzer.OnMetaSoundOutputFloatChangedBatch
	// void OnMetaSoundOutputFloatChangedBatch(FName& OutputName, TArray<float>& Output, FFabricMetaSoundPatchWrapperPeakTamer& PeakTamer, float DeltaSeconds); // [0xb54f3ec] Final|Native|Private|HasOutParms 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorAudioAnalyzer.GetLastAnalyzerValue
	// float GetLastAnalyzerValue();                                                                                            // [0x976bf00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableConnectionBase
/// Size: 0x00A8 (0x000028 - 0x0000D0)
class UFMDeviceCableConnectionBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	DMember(bool)                                      bConnectionActive                                           OFFSET(get<bool>, {0x80, 1, 0, 0})
	CMember(TArray<TWeakObjectPtr<UFMDeviceCablePortComponent*>>) BuildingCompositeArtifactFromPorts               OFFSET(get<T>, {0x88, 16, 0, 0})
	SMember(FFMDeviceCableConnectedDevicesInfo)        ConnectedDevicesInfo                                        OFFSET(getStruct<T>, {0x98, 48, 0, 0})
	SMember(FFMDeviceCableDefaultOutputs)              DefaultOutputs                                              OFFSET(getStruct<T>, {0xC8, 8, 0, 0})


	/// Functions
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableConnectionBase.StartConnectionBP
	// void StartConnectionBP();                                                                                                // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableConnectionBase.RebuildDirtyConnectionBP
	// void RebuildDirtyConnectionBP();                                                                                         // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableConnectionBase.EndConnectionBP
	// void EndConnectionBP();                                                                                                  // [0x211c0a0] Event|Protected|BlueprintEvent 
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableMetaSoundConnection
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UFMDeviceCableMetaSoundConnection : public UFMDeviceCableConnectionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableNoteConnection
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UFMDeviceCableNoteConnection : public UFMDeviceCableMetaSoundConnection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableAudioConnection
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UFMDeviceCableAudioConnection : public UFMDeviceCableMetaSoundConnection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableFloatConnection
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UFMDeviceCableFloatConnection : public UFMDeviceCableConnectionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableTextureConnection
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UFMDeviceCableTextureConnection : public UFMDeviceCableConnectionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableMeshConnection
/// Size: 0x0008 (0x0000D0 - 0x0000D8)
class UFMDeviceCableMeshConnection : public UFMDeviceCableConnectionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	DMember(uint32_t)                                  PreviousMeshInstanceHash                                    OFFSET(get<uint32_t>, {0xD0, 4, 0, 0})
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent
/// Size: 0x0060 (0x0000A0 - 0x000100)
class UFMDeviceCableControllerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FMulticastInlineDelegate)                  OnControllerCableConnected                                  OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnControllerCableDisconnected                               OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	CMember(class UClass*)                             ControllerCablePort                                         OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(class UClass*)                             DeviceCableManagerClass                                     OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(class AFortPlayerControllerAthena*)        PlayerController                                            OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(class UFMDeviceCablePortComponent*)        LocalControllerPort                                         OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(class UFMDeviceCablePortComponent*)        ServerControllerPort                                        OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   LocalControllerPortActor                                    OFFSET(get<T>, {0xE8, 8, 0, 0})
	CMember(class UFMDeviceCableManagerComponent*)     LocalDeviceCableManager                                     OFFSET(get<T>, {0xF0, 8, 0, 0})
	CMember(class UFMDeviceCableManagerComponent*)     ServerDeviceCableManager                                    OFFSET(get<T>, {0xF8, 8, 0, 0})


	/// Functions
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.SetControllerTargetForControllerPortBP
	// void SetControllerTargetForControllerPortBP(class AActor* ControllerPortActor, class APlayerController* Controller);     // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.ServerVolumeChanged
	// void ServerVolumeChanged();                                                                                              // [0x212f478] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.ServerSelectPort
	// void ServerSelectPort(class UFMDeviceCablePortComponent* SelectedPort);                                                  // [0x7aaec38] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.ServerPortsUpdated
	// void ServerPortsUpdated(TArray<FPortUpdateInfo> PortChangeInfos);                                                        // [0xb54fa74] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.ServerPortActivatedStateChanged
	// void ServerPortActivatedStateChanged(class UFMDeviceCablePortComponent* Port, EDeviceCableActivatedState ActivatedState); // [0xb54f9ac] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.ServerDisconnectController
	// void ServerDisconnectController();                                                                                       // [0x219df9c] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.SelectPort
	// void SelectPort(class UFMDeviceCablePortComponent* SelectedPort);                                                        // [0xb54f92c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.OnWeaponEquipped
	// void OnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);                                      // [0xb54f7c4] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.OnRep_ServerDeviceCableManager
	// void OnRep_ServerDeviceCableManager();                                                                                   // [0xb54f760] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.OnRep_ServerControllerPort
	// void OnRep_ServerControllerPort();                                                                                       // [0xb54f74c] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.OnNoFabricInteractablesHit
	// void OnNoFabricInteractablesHit();                                                                                       // [0xb54f038] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.OnFortPawnChanged
	// void OnFortPawnChanged(class AFortPawn* Pawn);                                                                           // [0xb54f2ac] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.OnCreativePlotLinkedVolumeChanged
	// void OnCreativePlotLinkedVolumeChanged(class AFortVolume* FortVolume);                                                   // [0xb54f1ac] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.OnControllerCableDisconnected__DelegateSignature
	// void OnControllerCableDisconnected__DelegateSignature();                                                                 // [0x211c0a0] MulticastDelegate|Public|Delegate 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.OnControllerCableConnected__DelegateSignature
	// void OnControllerCableConnected__DelegateSignature(TArray<UFMDeviceCablePortComponent*>& ConnectedPorts);                // [0x211c0a0] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.IsHoldingCable
	// bool IsHoldingCable();                                                                                                   // [0xb54f18c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.IsCableConnectionValid
	// bool IsCableConnectionValid(class UFMDeviceCablePortComponent* OtherPort);                                               // [0xb54f0fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.DropCable
	// void DropCable();                                                                                                        // [0xb54f038] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableManagerComponent
/// Size: 0x0268 (0x0000A0 - 0x000308)
class UFMDeviceCableManagerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:
	CMember(class UClass*)                             DeviceCableClass                                            OFFSET(get<T>, {0xA0, 8, 0, 0})
	DMember(int32_t)                                   StartingCablePoolSize                                       OFFSET(get<int32_t>, {0xA8, 4, 0, 0})
	CMember(EDeviceCableInteractionType)               CableInteractionType                                        OFFSET(get<T>, {0xAC, 1, 0, 0})
	CMember(TMap<EDeviceCablePortDataType, UClass*>)   ConnectionClasses                                           OFFSET(get<T>, {0xB0, 80, 0, 0})
	CMember(class USoundSourceBus*)                    DefaultSourceBus                                            OFFSET(get<T>, {0x100, 8, 0, 0})
	SMember(FGameplayEventListenerBackwardCompatibleHandle) PlayerEnteredHandle                                    OFFSET(getStruct<T>, {0x108, 72, 0, 0})
	CMember(TArray<class AFMDeviceCable*>)             FreeDeviceCables                                            OFFSET(get<T>, {0x150, 16, 0, 0})
	CMember(TArray<class UFMDeviceCableConnectionBase*>) CableConnections                                          OFFSET(get<T>, {0x160, 16, 0, 0})
	CMember(TMap<FGuid, TWeakObjectPtr<UFMDeviceCablePortComponent*>>) PortsInVolume                               OFFSET(get<T>, {0x170, 80, 0, 0})
	CMember(TMap<FGuid, FGuid>)                        OriginalGuidToDuplicatedGuidThisFrame                       OFFSET(get<T>, {0x1C0, 80, 0, 0})
	CMember(TMap<TWeakObjectPtr<UObject*>, TWeakObjectPtr<UObject*>>) SourceObjectToDuplicatedObjectThisFrame      OFFSET(get<T>, {0x210, 80, 0, 0})
	SMember(FFMDeviceCableDefaultOutputs)              DefaultConnectionOutputs                                    OFFSET(getStruct<T>, {0x300, 8, 0, 0})


	/// Functions
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableManagerComponent.GetCableInteractionType
	// EDeviceCableInteractionType GetCableInteractionType();                                                                   // [0xb54f06c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent
/// Size: 0x0300 (0x000630 - 0x000930)
class UFMDeviceCablePortComponent : public UStaticMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2352;

public:
	SMember(FMulticastInlineDelegate)                  OnCablePortSizeUpdated                                      OFFSET(getStruct<T>, {0x668, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAnimatorCreated                                           OFFSET(getStruct<T>, {0x678, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnConnected                                                 OFFSET(getStruct<T>, {0x688, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnDisconnected                                              OFFSET(getStruct<T>, {0x6B8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnConnectionStarted                                         OFFSET(getStruct<T>, {0x6C8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnConnectionEnded                                           OFFSET(getStruct<T>, {0x6D8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPortArtifactUpdated                                       OFFSET(getStruct<T>, {0x6E8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnReceiveFloatProviders                                     OFFSET(getStruct<T>, {0x6F8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnDisconnectFloatProvider                                   OFFSET(getStruct<T>, {0x708, 16, 0, 0})
	CMember(class UClass*)                             DeviceCableManagerClass                                     OFFSET(get<T>, {0x718, 8, 0, 0})
	CMember(TWeakObjectPtr<UStaticMesh*>)              OutputStaticMesh                                            OFFSET(get<T>, {0x720, 32, 0, 0})
	CMember(TWeakObjectPtr<UStaticMesh*>)              AudioInStaticMesh                                           OFFSET(get<T>, {0x740, 32, 0, 0})
	CMember(TWeakObjectPtr<UStaticMesh*>)              NoteInStaticMesh                                            OFFSET(get<T>, {0x760, 32, 0, 0})
	CMember(TWeakObjectPtr<UStaticMesh*>)              TextureInStaticMesh                                         OFFSET(get<T>, {0x780, 32, 0, 0})
	CMember(TWeakObjectPtr<UStaticMesh*>)              MeshInStaticMesh                                            OFFSET(get<T>, {0x7A0, 32, 0, 0})
	CMember(TWeakObjectPtr<UStaticMesh*>)              ScalarInStaticMesh                                          OFFSET(get<T>, {0x7C0, 32, 0, 0})
	CMember(TMap<EDeviceCablePortDataType, UClass*>)   CableAnimatorClasses                                        OFFSET(get<T>, {0x7E0, 80, 0, 0})
	CMember(EDeviceCablePortFlowType)                  PortFlowType                                                OFFSET(get<T>, {0x830, 1, 0, 0})
	CMember(EDeviceCablePortDataType)                  PortDataType                                                OFFSET(get<T>, {0x831, 1, 0, 0})
	CMember(EDeviceCableLoadableState)                 PortLoadableState                                           OFFSET(get<T>, {0x832, 1, 0, 0})
	CMember(EDeviceCablePortAnimationSyncType)         AnimationSyncType                                           OFFSET(get<T>, {0x833, 1, 0, 0})
	DMember(bool)                                      bAllowMultipleConnections                                   OFFSET(get<bool>, {0x834, 1, 0, 0})
	DMember(bool)                                      bAllowSiblingConnections                                    OFFSET(get<bool>, {0x835, 1, 0, 0})
	CMember(EFMDeviceCablePortComponentAllowMultipleConnections) OverrideAllowMultipleConnections                  OFFSET(get<T>, {0x838, 4, 0, 0})
	CMember(EFMDeviceCablePortComponentAllowMultipleConnections) OverrideAllowSiblingConnections                   OFFSET(get<T>, {0x83C, 4, 0, 0})
	DMember(bool)                                      bHideWhenNotRelevant                                        OFFSET(get<bool>, {0x840, 1, 0, 0})
	DMember(bool)                                      bIsPlayerPort                                               OFFSET(get<bool>, {0x841, 1, 0, 0})
	DMember(bool)                                      bIsOnPreviewBuildingActor                                   OFFSET(get<bool>, {0x842, 1, 0, 0})
	SMember(FName)                                     EnterVolumeTag                                              OFFSET(getStruct<T>, {0x844, 4, 0, 0})
	SMember(FName)                                     ExitVolumeTag                                               OFFSET(getStruct<T>, {0x848, 4, 0, 0})
	CMember(TArray<class UFMDeviceCablePortComponent*>) ConnectedPorts                                             OFFSET(get<T>, {0x850, 16, 0, 0})
	CMember(TArray<class UFMDeviceCablePortComponent*>) ServerConnectedPorts                                       OFFSET(get<T>, {0x860, 16, 0, 0})
	CMember(TArray<class UFMDeviceCableConnectionBase*>) CurrentConnections                                        OFFSET(get<T>, {0x870, 16, 0, 0})
	CMember(class AFMDeviceCable*)                     ConstantCable                                               OFFSET(get<T>, {0x880, 8, 0, 0})
	CMember(class UFMDeviceCableManagerComponent*)     DeviceCableManager                                          OFFSET(get<T>, {0x888, 8, 0, 0})
	CMember(TArray<class UFMDeviceCablePortComponent*>) OtherPortsOnActor                                          OFFSET(get<T>, {0x890, 16, 0, 0})
	CMember(EDeviceCableActivatedState)                PortActivatedState                                          OFFSET(get<T>, {0x8A0, 1, 0, 0})
	CMember(EDeviceCableActivatedState)                ServerPortActivatedState                                    OFFSET(get<T>, {0x8A1, 1, 0, 0})
	CMember(EDeviceCablePortSelectableState)           PortSelectableState                                         OFFSET(get<T>, {0x8A2, 1, 0, 0})
	CMember(class UFMDeviceCableAnimatorBase*)         DeviceCableAnimator                                         OFFSET(get<T>, {0x8A8, 8, 0, 0})
	SMember(FGuid)                                     ConnectionGuid                                              OFFSET(getStruct<T>, {0x8B0, 16, 0, 0})
	CMember(TArray<FGuid>)                             ConnectedGuids                                              OFFSET(get<T>, {0x8C0, 16, 0, 0})
	SMember(FFMDeviceCableArtifact)                    CachedArtifact                                              OFFSET(getStruct<T>, {0x8D0, 32, 0, 0})
	CMember(TArray<class UFMDeviceCablePortComponent*>) PendingConnectionBroadcasts                                OFFSET(get<T>, {0x900, 16, 0, 0})
	SMember(FGuid)                                     SaveGuid                                                    OFFSET(getStruct<T>, {0x910, 16, 0, 0})


	/// Functions
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.UpdateStaticMesh
	// void UpdateStaticMesh();                                                                                                 // [0xb5541b8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.SetPortVisibility
	// void SetPortVisibility(bool bPortVisible);                                                                               // [0xb554138] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.SetPortSelectableState
	// void SetPortSelectableState(EDeviceCablePortSelectableState NewSelectableState);                                         // [0xb5540b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.SetPortConnectionsDirty
	// void SetPortConnectionsDirty();                                                                                          // [0xb5540a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.SetPortActivatedState
	// void SetPortActivatedState(EDeviceCableActivatedState NewActivatedState);                                                // [0xb554020] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.SetDeviceCableAnimator
	// void SetDeviceCableAnimator(class UFMDeviceCableAnimatorBase* InAnimator);                                               // [0x604b150] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.SetCachedArtifact
	// void SetCachedArtifact(FFMDeviceCableArtifact& InCachedArtifact);                                                        // [0xb553c1c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.SelectWithStaticOutputInteraction
	// EPortSelectStatus SelectWithStaticOutputInteraction(class UFMDeviceCablePortComponent* PlayerSelectionPort, TArray<FPortUpdateInfo>& OutPortUpdates); // [0xb55353c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.Select
	// EPortSelectStatus Select(class UFMDeviceCablePortComponent* PlayerSelectionPort, TArray<FPortUpdateInfo>& OutPortUpdates); // [0xb552e58] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OpenConnectionToPort
	// void OpenConnectionToPort(class UFMDeviceCablePortComponent* OtherPort);                                                 // [0xb552dd8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OnRep_ServerPortActivatedState
	// void OnRep_ServerPortActivatedState();                                                                                   // [0xb552d94] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OnRep_ServerConnectedPorts
	// void OnRep_ServerConnectedPorts();                                                                                       // [0xb552d80] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OnRep_DeviceCableManager
	// void OnRep_DeviceCableManager();                                                                                         // [0xb552d28] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OnRep_ConstantCable
	// void OnRep_ConstantCable();                                                                                              // [0xb552cdc] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OnReceiveFloatProviders__DelegateSignature
	// void OnReceiveFloatProviders__DelegateSignature(TArray<UFabricFloatProviderBase*>& FloatProviders);                      // [0x211c0a0] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OnPortArtifactUpdated__DelegateSignature
	// void OnPortArtifactUpdated__DelegateSignature();                                                                         // [0x211c0a0] MulticastDelegate|Public|Delegate 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OnPlayerControllerPortDisconnected
	// void OnPlayerControllerPortDisconnected();                                                                               // [0xb552cc8] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OnPlayerControllerPortConnected
	// void OnPlayerControllerPortConnected(TArray<UFMDeviceCablePortComponent*>& ControllerPorts);                             // [0xb552608] Final|Native|Private|HasOutParms 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OnDisconnectFloatProvider__DelegateSignature
	// void OnDisconnectFloatProvider__DelegateSignature(class UFabricFloatProviderBase* FloatProvider);                        // [0x211c0a0] MulticastDelegate|Public|Delegate 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OnDisconnected__DelegateSignature
	// void OnDisconnected__DelegateSignature(class UFMDeviceCablePortComponent* DisconnectedPort);                             // [0x211c0a0] MulticastDelegate|Public|Delegate 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OnConnectionStarted__DelegateSignature
	// void OnConnectionStarted__DelegateSignature(class UFMDeviceCableConnectionBase* NewConnection);                          // [0x211c0a0] MulticastDelegate|Public|Delegate 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OnConnectionEnded__DelegateSignature
	// void OnConnectionEnded__DelegateSignature(class UFMDeviceCableConnectionBase* EndedConnection);                          // [0x211c0a0] MulticastDelegate|Public|Delegate 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OnConnectedWithSourcePort__DelegateSignature
	// void OnConnectedWithSourcePort__DelegateSignature(class UFMDeviceCablePortComponent* SourcePort, class UFMDeviceCablePortComponent* OtherPort); // [0x211c0a0] MulticastDelegate|Public|Delegate 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OnConnected__DelegateSignature
	// void OnConnected__DelegateSignature(class UFMDeviceCablePortComponent* ConnectedPort);                                   // [0x211c0a0] MulticastDelegate|Public|Delegate 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OnAnimatorCreated__DelegateSignature
	// void OnAnimatorCreated__DelegateSignature(class UFMDeviceCableAnimatorBase* Animator);                                   // [0x211c0a0] MulticastDelegate|Public|Delegate 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.MatchesPortConnectionType
	// bool MatchesPortConnectionType(class UFMDeviceCablePortComponent* OtherPort);                                            // [0xb552128] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.IsConnectedToPort
	// bool IsConnectedToPort(class UFMDeviceCablePortComponent* Port);                                                         // [0xb551fac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.IsConnected
	// bool IsConnected();                                                                                                      // [0xb551f90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetPreviousPortsInConnections
	// TArray<UFMDeviceCablePortComponent*> GetPreviousPortsInConnections();                                                    // [0xb551f54] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetPortSelectableState
	// EDeviceCablePortSelectableState GetPortSelectableState();                                                                // [0xb551f3c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetPortFlowType
	// EDeviceCablePortFlowType GetPortFlowType();                                                                              // [0x9edbedc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetPortDataType
	// EDeviceCablePortDataType GetPortDataType();                                                                              // [0xb551f24] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetPortActivatedState
	// EDeviceCableActivatedState GetPortActivatedState();                                                                      // [0xb551f0c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetOtherPortsOnActor
	// TArray<UFMDeviceCablePortComponent*> GetOtherPortsOnActor();                                                             // [0xb551ef0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetNextPortsInConnections
	// TArray<UFMDeviceCablePortComponent*> GetNextPortsInConnections();                                                        // [0xb551eb4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetIsTerminalPort
	// bool GetIsTerminalPort(EDeviceCablePortFlowType FlowType);                                                               // [0xb551e28] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetIsPlayerPort
	// bool GetIsPlayerPort();                                                                                                  // [0xb551e10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetGuid
	// FGuid GetGuid();                                                                                                         // [0xb551de0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetDeviceCableAnimator
	// class UFMDeviceCableAnimatorBase* GetDeviceCableAnimator();                                                              // [0xb551dc8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetConstantCable
	// class AFMDeviceCable* GetConstantCable();                                                                                // [0xb551db0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetConnections
	// TArray<UFMDeviceCableConnectionBase*> GetConnections();                                                                  // [0xb551d94] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetConnectedPorts
	// TArray<UFMDeviceCablePortComponent*> GetConnectedPorts();                                                                // [0xb551d78] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetCachedArtifact
	// FFMDeviceCableArtifact GetCachedArtifact();                                                                              // [0xb551d50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetAnimationSyncType
	// EDeviceCablePortAnimationSyncType GetAnimationSyncType();                                                                // [0xb551d38] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.FabricCablePortSizeUpdated__DelegateSignature
	// void FabricCablePortSizeUpdated__DelegateSignature(float Size);                                                          // [0x211c0a0] MulticastDelegate|Public|Delegate 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.EndConnectionWithPort
	// void EndConnectionWithPort(class UFMDeviceCablePortComponent* OtherPort);                                                // [0xb551cb8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.ActorHasValidControllerBP
	// bool ActorHasValidControllerBP(class AActor* Actor, class AFortPlayerPawn*& OutFortPlayerPawn, class APlayerController*& OutPlayerController); // [0x211c0a0] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableModulatorPortComponent
/// Size: 0x0020 (0x000930 - 0x000950)
class UFMDeviceCableModulatorPortComponent : public UFMDeviceCablePortComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2384;

public:
	SMember(FString)                                   AssociatedProperty                                          OFFSET(getStruct<T>, {0x930, 16, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  AssociatedObject                                            OFFSET(get<T>, {0x940, 8, 0, 0})


	/// Functions
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableModulatorPortComponent.SetDeviceCableManager
	// void SetDeviceCableManager(class UFMDeviceCableManagerComponent* InDeviceCableManager);                                  // [0xb553ca4] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCablesFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UFMDeviceCablesFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablesFunctionLibrary.MakeSoundSourceBusSendInfo
	// FSoundSourceBusSendInfo MakeSoundSourceBusSendInfo(class USoundSourceBus* SoundSourceBus);                               // [0xb552048] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablesFunctionLibrary.DeepCopySoundSourceBus
	// class USoundSourceBus* DeepCopySoundSourceBus(class UObject* Context, class UObject* Outer, class USoundSourceBus* Source); // [0xb551768] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardOrderingComponent
/// Size: 0x04D0 (0x0000A0 - 0x000570)
class UFMDeviceCableWildcardOrderingComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1392;

public:
	SMember(FFMDeviceCableOrderingMovementState)       InputsShowHideMovement                                      OFFSET(getStruct<T>, {0xA0, 160, 0, 0})
	SMember(FFMDeviceCableOrderingMovementStateIndividual) OutputsShowHideMovement                                 OFFSET(getStruct<T>, {0x140, 320, 0, 0})
	SMember(FFMDeviceCableOrderingMovementStateSlot)   OutputsCollapseExpandMovement                               OFFSET(getStruct<T>, {0x280, 160, 0, 0})
	SMember(FFMDeviceCableOrderingMovementStateIndividual) OutputListShiftMovement                                 OFFSET(getStruct<T>, {0x320, 320, 0, 0})
	SMember(FName)                                     ClosedMeshTag                                               OFFSET(getStruct<T>, {0x460, 4, 0, 0})
	SMember(FName)                                     TopMeshTag                                                  OFFSET(getStruct<T>, {0x464, 4, 0, 0})
	SMember(FName)                                     MiddleMeshTag                                               OFFSET(getStruct<T>, {0x468, 4, 0, 0})
	SMember(FName)                                     BottomMeshTag                                               OFFSET(getStruct<T>, {0x46C, 4, 0, 0})
	CMember(class UStaticMeshComponent*)               ClosedMesh                                                  OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               TopMesh                                                     OFFSET(get<T>, {0x478, 8, 0, 0})
	CMember(TArray<class UStaticMeshComponent*>)       MiddleMeshes                                                OFFSET(get<T>, {0x480, 16, 0, 0})
	CMember(class UStaticMeshComponent*)               BottomMesh                                                  OFFSET(get<T>, {0x490, 8, 0, 0})
	CMember(TArray<class UFMDeviceCableWildcardPortComponent*>) InputWildcardPorts                                 OFFSET(get<T>, {0x4A8, 16, 0, 0})
	CMember(TArray<class UFMDeviceCableWildcardPortComponent*>) OutputWildcardPorts                                OFFSET(get<T>, {0x4B8, 16, 0, 0})
	CMember(TArray<class UFMDeviceCableWildcardPortComponent*>) PortsWithPendingDisconnects                        OFFSET(get<T>, {0x4F8, 16, 0, 0})
	CMember(TArray<FFMDeviceCableOrderingPortState>)   ServerPortStates                                            OFFSET(get<T>, {0x558, 16, 0, 0})


	/// Functions
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardOrderingComponent.SetOutputRoot
	// void SetOutputRoot(FVector RootLocation);                                                                                // [0xb553ee8] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardOrderingComponent.SetOutputPortsExpanded
	// void SetOutputPortsExpanded(bool bExpanded);                                                                             // [0xb553e5c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardOrderingComponent.SetInputRoot
	// void SetInputRoot(FVector RootLocation);                                                                                 // [0xb553d24] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardOrderingComponent.OnRep_ServerPortStates
	// void OnRep_ServerPortStates();                                                                                           // [0xb552dc4] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardOrderingComponent.OnOutputPortSlotSetFromSave
	// void OnOutputPortSlotSetFromSave(class UFMDeviceCableWildcardPortComponent* WildcardPort, bool bHasConnections);         // [0xb552540] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardOrderingComponent.OnOutputPortDisconnected
	// void OnOutputPortDisconnected(class UFMDeviceCablePortComponent* SourcePort, class UFMDeviceCablePortComponent* DisconnectedPort); // [0xb55247c] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardOrderingComponent.OnOutputPortConnected
	// void OnOutputPortConnected(class UFMDeviceCablePortComponent* SourcePort, class UFMDeviceCablePortComponent* ConnectedPort); // [0xb5523b8] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardOrderingComponent.OnInputPortDisconnected
	// void OnInputPortDisconnected(class UFMDeviceCablePortComponent* DisconnectedPort);                                       // [0xb552338] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardOrderingComponent.OnInputPortDataTypeChanged
	// void OnInputPortDataTypeChanged(class UFMDeviceCableWildcardPortComponent* WildcardPort, EDeviceCablePortDataType DataType); // [0xb552270] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardOrderingComponent.OnInputPortConnected
	// void OnInputPortConnected(class UFMDeviceCablePortComponent* ConnectedPort);                                             // [0xb5521ec] Final|Native|Private 
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardPortComponent
/// Size: 0x0030 (0x000930 - 0x000960)
class UFMDeviceCableWildcardPortComponent : public UFMDeviceCablePortComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2400;

public:
	SMember(FMulticastInlineDelegate)                  OnWildcardDataTypeChanged                                   OFFSET(getStruct<T>, {0x928, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnWildcardPortSlotSetFromSave                               OFFSET(getStruct<T>, {0x938, 16, 0, 0})
	DMember(int32_t)                                   SlotIndex                                                   OFFSET(get<int32_t>, {0x948, 4, 0, 0})
	DMember(int32_t)                                   SavedSlotIndex                                              OFFSET(get<int32_t>, {0x94C, 4, 0, 0})


	/// Functions
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardPortComponent.OnWildcardPortSlotSetFromSave__DelegateSignature
	// void OnWildcardPortSlotSetFromSave__DelegateSignature(class UFMDeviceCableWildcardPortComponent* WildcardPort, bool bHasConnections); // [0x211c0a0] MulticastDelegate|Public|Delegate 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardPortComponent.OnWildcardDataTypeChanged__DelegateSignature
	// void OnWildcardDataTypeChanged__DelegateSignature(class UFMDeviceCableWildcardPortComponent* WildcardPort, EDeviceCablePortDataType DataType); // [0x211c0a0] MulticastDelegate|Public|Delegate 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardPortComponent.OnRep_SavedSlotIndex
	// void OnRep_SavedSlotIndex();                                                                                             // [0xb576888] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardPortComponent.OnPlayerControllerPortDisconnectedWildcard
	// void OnPlayerControllerPortDisconnectedWildcard();                                                                       // [0xb576874] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardPortComponent.OnPlayerControllerPortConnectedWildcard
	// void OnPlayerControllerPortConnectedWildcard(TArray<UFMDeviceCablePortComponent*>& ControllerPorts);                     // [0xb5761b4] Final|Native|Private|HasOutParms 
};

/// Struct /Script/FMDeviceCablesRuntime.PortUpdateInfo
/// Size: 0x0020 (0x000000 - 0x000020)
class FPortUpdateInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(EPortSelectStatus)                         PortSelectStatus                                            OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(class UFMDeviceCablePortComponent*)        ConstantPort                                                OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class UFMDeviceCablePortComponent*)        ConnectedPort                                               OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class UFMDeviceCablePortComponent*)        DisconnectedPort                                            OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/FMDeviceCablesRuntime.FMDeviceCableArtifact
/// Size: 0x0020 (0x000000 - 0x000020)
class FFMDeviceCableArtifact : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(class UFabricMeshTreeNode*)                MeshTreeNode                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UFabricMetaSoundTreeNode*)           MetaSoundTreeNode                                           OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class UFabricTextureTreeNode*)             TextureTreeNode                                             OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class UFabricModulationNode*)              ModulationNode                                              OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/FMDeviceCablesRuntime.FMDeviceCableTerminalDeviceInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FFMDeviceCableTerminalDeviceInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TWeakObjectPtr<UFMDeviceCablePortComponent*>) TerminalPort                                             OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   TerminalActor                                               OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/FMDeviceCablesRuntime.FMDeviceCablePassthroughDeviceInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FFMDeviceCablePassthroughDeviceInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TWeakObjectPtr<UFMDeviceCablePortComponent*>) InputPort                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TWeakObjectPtr<UFMDeviceCablePortComponent*>) OutputPort                                               OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   PassthroughActor                                            OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/FMDeviceCablesRuntime.FMDeviceCableConnectedDevicesInfo
/// Size: 0x0030 (0x000000 - 0x000030)
class FFMDeviceCableConnectedDevicesInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FFMDeviceCableTerminalDeviceInfo)          SourceDeviceInfo                                            OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FFMDeviceCableTerminalDeviceInfo)          DestinationDeviceInfo                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(TArray<FFMDeviceCablePassthroughDeviceInfo>) PassthroughDeviceInfos                                    OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/FMDeviceCablesRuntime.FMDeviceCableDefaultOutputs
/// Size: 0x0008 (0x000000 - 0x000008)
class FFMDeviceCableDefaultOutputs : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class USoundSourceBus*)                    SourceBus                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/FMDeviceCablesRuntime.FMDeviceCableTopologyNode
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FFMDeviceCableTopologyNode : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TWeakObjectPtr<UFMDeviceCablePortComponent*>) Port                                                     OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/FMDeviceCablesRuntime.FMDeviceCableActiveConnectionsList
/// Size: 0x0010 (0x000000 - 0x000010)
class FFMDeviceCableActiveConnectionsList : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<class UFMDeviceCableConnectionBase*>) ActiveConnections                                         OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/FMDeviceCablesRuntime.ModulatorPortSaveData
/// Size: 0x0020 (0x000000 - 0x000020)
class FModulatorPortSaveData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FGuid)                                     ConnectionGuid                                              OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TArray<FGuid>)                             ConnectedGuids                                              OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/FMDeviceCablesRuntime.FMDeviceCableOrderingPortState
/// Size: 0x0018 (0x000000 - 0x000018)
class FFMDeviceCableOrderingPortState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UFMDeviceCableWildcardPortComponent*) WildcardPort                                               OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(EFMDeviceCableWildcardOrderingState)       VisualState                                                 OFFSET(get<T>, {0x8, 4, 0, 0})
	CMember(EFMDeviceCableWildcardOrderingState)       State                                                       OFFSET(get<T>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   Slot                                                        OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/FMDeviceCablesRuntime.FMDeviceCableOrderingMovementState
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FFMDeviceCableOrderingMovementState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(class UCurveFloat*)                        Curve                                                       OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FVector)                                   Vector                                                      OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	DMember(float)                                     MovementTimeSeconds                                         OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(bool)                                      bMovementActive                                             OFFSET(get<bool>, {0x2C, 1, 0, 0})
	DMember(bool)                                      bInvertVector                                               OFFSET(get<bool>, {0x2D, 1, 0, 0})
	DMember(bool)                                      bMovementState                                              OFFSET(get<bool>, {0x2E, 1, 0, 0})
	DMember(float)                                     RunningMovementTimeSeconds                                  OFFSET(get<float>, {0x30, 4, 0, 0})
	CMember(TArray<class UFMDeviceCableWildcardPortComponent*>) RelevantPorts                                      OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/FMDeviceCablesRuntime.FMDeviceCableOrderingMovementStateSlot
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class FFMDeviceCableOrderingMovementStateSlot : public FFMDeviceCableOrderingMovementState
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Struct /Script/FMDeviceCablesRuntime.FMDeviceCableOrderingMovementStateIndividual
/// Size: 0x00A0 (0x0000A0 - 0x000140)
class FFMDeviceCableOrderingMovementStateIndividual : public FFMDeviceCableOrderingMovementState
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
};

/// Enum /Script/FMDeviceCablesRuntime.EDeviceCableActivatedState
/// Size: 0x03
enum EDeviceCableActivatedState : uint8_t
{
	EDeviceCableActivatedState__Active                                               = 0,
	EDeviceCableActivatedState__Dormant                                              = 1,
	EDeviceCableActivatedState__EDeviceCableActivatedState_MAX                       = 2
};

/// Enum /Script/FMDeviceCablesRuntime.EPortSelectStatus
/// Size: 0x15
enum EPortSelectStatus : uint8_t
{
	EPortSelectStatus__Error                                                         = 0,
	EPortSelectStatus__ControllerCableUsed                                           = 1,
	EPortSelectStatus__GaveControllerCable                                           = 2,
	EPortSelectStatus__CableSwap                                                     = 3,
	EPortSelectStatus__NewCableUsed                                                  = 4,
	EPortSelectStatus__ConstantCableUsed                                             = 5,
	EPortSelectStatus__ConnectionEnded                                               = 6,
	EPortSelectStatus__NoCableAvailable                                              = 7,
	EPortSelectStatus__TypeMismatch                                                  = 8,
	EPortSelectStatus__AttemptedMultiConnect                                         = 9,
	EPortSelectStatus__SelfSelect                                                    = 10,
	EPortSelectStatus__InvalidConnection                                             = 11,
	EPortSelectStatus__WouldCreateLoop                                               = 12,
	EPortSelectStatus__Unselectable                                                  = 13,
	EPortSelectStatus__EPortSelectStatus_MAX                                         = 14
};

/// Enum /Script/FMDeviceCablesRuntime.EDeviceCablePortAnimationSyncType
/// Size: 0x04
enum EDeviceCablePortAnimationSyncType : uint8_t
{
	EDeviceCablePortAnimationSyncType__Follower                                      = 0,
	EDeviceCablePortAnimationSyncType__Authority                                     = 1,
	EDeviceCablePortAnimationSyncType__Independent                                   = 2,
	EDeviceCablePortAnimationSyncType__EDeviceCablePortAnimationSyncType_MAX         = 3
};

/// Enum /Script/FMDeviceCablesRuntime.EDeviceCablePortFlowType
/// Size: 0x04
enum EDeviceCablePortFlowType : uint8_t
{
	EDeviceCablePortFlowType__Input                                                  = 0,
	EDeviceCablePortFlowType__Output                                                 = 1,
	EDeviceCablePortFlowType__Any                                                    = 2,
	EDeviceCablePortFlowType__EDeviceCablePortFlowType_MAX                           = 3
};

/// Enum /Script/FMDeviceCablesRuntime.EDeviceCablePortDataType
/// Size: 0x07
enum EDeviceCablePortDataType : uint8_t
{
	EDeviceCablePortDataType__Scalar                                                 = 0,
	EDeviceCablePortDataType__Note                                                   = 1,
	EDeviceCablePortDataType__Audio                                                  = 2,
	EDeviceCablePortDataType__Texture                                                = 3,
	EDeviceCablePortDataType__Mesh                                                   = 4,
	EDeviceCablePortDataType__Any                                                    = 5,
	EDeviceCablePortDataType__EDeviceCablePortDataType_MAX                           = 6
};

/// Enum /Script/FMDeviceCablesRuntime.EDeviceCablePortSelectableState
/// Size: 0x03
enum EDeviceCablePortSelectableState : uint8_t
{
	EDeviceCablePortSelectableState__Selectable                                      = 0,
	EDeviceCablePortSelectableState__Unselectable                                    = 1,
	EDeviceCablePortSelectableState__EDeviceCablePortSelectableState_MAX             = 2
};

/// Enum /Script/FMDeviceCablesRuntime.EFMDeviceCablePortComponentAllowMultipleConnections
/// Size: 0x04
enum EFMDeviceCablePortComponentAllowMultipleConnections : uint32_t
{
	EFMDeviceCablePortComponentAllowMultipleConnections__NoPreference                = 0,
	EFMDeviceCablePortComponentAllowMultipleConnections__ForceMultiple               = 1,
	EFMDeviceCablePortComponentAllowMultipleConnections__ForceSingle                 = 2,
	EFMDeviceCablePortComponentAllowMultipleConnections__EFMDeviceCablePortComponentAllowMultipleConnections_MAX = 3
};

/// Enum /Script/FMDeviceCablesRuntime.EDeviceCableLoadableState
/// Size: 0x03
enum EDeviceCableLoadableState : uint8_t
{
	EDeviceCableLoadableState__Loadable                                              = 0,
	EDeviceCableLoadableState__NotLoadable                                           = 1,
	EDeviceCableLoadableState__EDeviceCableLoadableState_MAX                         = 2
};

/// Enum /Script/FMDeviceCablesRuntime.EFMDeviceCableAnimationQuality
/// Size: 0x04
enum EFMDeviceCableAnimationQuality : uint8_t
{
	EFMDeviceCableAnimationQuality__High                                             = 0,
	EFMDeviceCableAnimationQuality__Med                                              = 1,
	EFMDeviceCableAnimationQuality__Low                                              = 2,
	EFMDeviceCableAnimationQuality__EFMDeviceCableAnimationQuality_MAX               = 3
};

/// Enum /Script/FMDeviceCablesRuntime.EDeviceCableInteractionType
/// Size: 0x03
enum EDeviceCableInteractionType : uint8_t
{
	EDeviceCableInteractionType__Free                                                = 0,
	EDeviceCableInteractionType__StaticOutput                                        = 1,
	EDeviceCableInteractionType__EDeviceCableInteractionType_MAX                     = 2
};

/// Enum /Script/FMDeviceCablesRuntime.EFMDeviceCableWildcardOrderingState
/// Size: 0x04
enum EFMDeviceCableWildcardOrderingState : uint32_t
{
	EFMDeviceCableWildcardOrderingState__Inactive                                    = 0,
	EFMDeviceCableWildcardOrderingState__Pending                                     = 1,
	EFMDeviceCableWildcardOrderingState__Active                                      = 2,
	EFMDeviceCableWildcardOrderingState__EFMDeviceCableWildcardOrderingState_MAX     = 3
};

