
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MRMesh

/// Class /Script/AugmentedReality.ARActor
/// Size: 0x0000 (0x000290 - 0x000290)
class AARActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:


	/// Functions
	// Function /Script/AugmentedReality.ARActor.AddARComponent
	// class UARComponent* AddARComponent(class UClass* InComponentClass, FGuid& NativeID);                                     // [0xc2f6fe8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/AugmentedReality.ARBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UARBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AugmentedReality.ARBlueprintLibrary.UnpinComponent
	// void UnpinComponent(class USceneComponent* ComponentToUnpin);                                                            // [0xc301cdc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.ToggleARCapture
	// bool ToggleARCapture(bool bOnOff, EARCaptureType CaptureType);                                                           // [0xc301c18] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.StopARSession
	// void StopARSession();                                                                                                    // [0xc301c04] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.StartARSession
	// void StartARSession(class UARSessionConfig* SessionConfig);                                                              // [0xc301920] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.SetEnabledXRCamera
	// void SetEnabledXRCamera(bool bOnOff);                                                                                    // [0xc300740] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.SetARWorldScale
	// void SetARWorldScale(float InWorldScale);                                                                                // [0xc2ffb70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.SetARWorldOriginLocationAndRotation
	// void SetARWorldOriginLocationAndRotation(FVector OriginLocation, FRotator OriginRotation, bool bIsTransformInWorldSpace, bool bMaintainUpDirection); // [0xc2ff768] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.SetAlignmentTransform
	// void SetAlignmentTransform(FTransform& InAlignmentTransform);                                                            // [0xc2ffc38] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.SaveARPinToLocalStore
	// bool SaveARPinToLocalStore(FName InSaveName, class UARPin* InPin);                                                       // [0xc2fe450] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.ResizeXRCamera
	// FIntPoint ResizeXRCamera(FIntPoint& InSize);                                                                             // [0xc2fe3c0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.RemovePin
	// void RemovePin(class UARPin* PinToRemove);                                                                               // [0xc2fe128] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.RemoveARPinFromLocalStore
	// void RemoveARPinFromLocalStore(FName InSaveName);                                                                        // [0xc2fdf3c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.RemoveAllARPinsFromLocalStore
	// void RemoveAllARPinsFromLocalStore();                                                                                    // [0xc2fdfac] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.PinComponentToTraceResult
	// class UARPin* PinComponentToTraceResult(class USceneComponent* ComponentToPin, FARTraceResult& TraceResult, FName DebugName); // [0xc2fdd40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.PinComponentToARPin
	// bool PinComponentToARPin(class USceneComponent* ComponentToPin, class UARPin* Pin);                                      // [0xc2fdc7c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.PinComponent
	// class UARPin* PinComponent(class USceneComponent* ComponentToPin, FTransform& PinToWorldTransform, class UARTrackedGeometry* TrackedGeometry, FName DebugName); // [0xc2fda40] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.PauseARSession
	// void PauseARSession();                                                                                                   // [0xc2fda2c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.LoadARPinsFromLocalStore
	// TMap<FName, UARPin*> LoadARPinsFromLocalStore();                                                                         // [0xc2fd988] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects3D
	// TArray<FARTraceResult> LineTraceTrackedObjects3D(FVector Start, FVector End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon); // [0xc2fce34] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects
	// TArray<FARTraceResult> LineTraceTrackedObjects(FVector2D ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon); // [0xc2fd460] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.IsSessionTypeSupported
	// bool IsSessionTypeSupported(EARSessionType SessionType);                                                                 // [0xc2fcd98] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.IsSessionTrackingFeatureSupported
	// bool IsSessionTrackingFeatureSupported(EARSessionType SessionType, EARSessionTrackingFeature SessionTrackingFeature);    // [0xc2fccd8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.IsSceneReconstructionSupported
	// bool IsSceneReconstructionSupported(EARSessionType SessionType, EARSceneReconstruction SceneReconstructionMethod);       // [0xc2fcc18] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.IsARSupported
	// bool IsARSupported();                                                                                                    // [0xc2fcbf4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreSupported
	// bool IsARPinLocalStoreSupported();                                                                                       // [0xc2fcbd0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreReady
	// bool IsARPinLocalStoreReady();                                                                                           // [0xc2fcbac] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetWorldMappingStatus
	// EARWorldMappingState GetWorldMappingStatus();                                                                            // [0xc2fc828] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetTrackingQualityReason
	// EARTrackingQualityReason GetTrackingQualityReason();                                                                     // [0xc2fc7d4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetTrackingQuality
	// EARTrackingQuality GetTrackingQuality();                                                                                 // [0xc2fc7b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetSupportedVideoFormats
	// TArray<FARVideoFormat> GetSupportedVideoFormats(EARSessionType SessionType);                                             // [0xc2fc554] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetSessionConfig
	// class UARSessionConfig* GetSessionConfig();                                                                              // [0xc2fc504] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetPointCloud
	// TArray<FVector> GetPointCloud();                                                                                         // [0xc2fc4c4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetObjectClassificationAtLocation
	// bool GetObjectClassificationAtLocation(FVector& InWorldLocation, EARObjectClassification& OutClassification, FVector& OutClassificationLocation, float MaxLocationDiff); // [0xc2fbe50] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetNumberOfTrackedFacesSupported
	// int32_t GetNumberOfTrackedFacesSupported();                                                                              // [0xc2fbe2c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetCurrentLightEstimate
	// class UARLightEstimate* GetCurrentLightEstimate();                                                                       // [0xc2fb554] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetCameraIntrinsics
	// bool GetCameraIntrinsics(FARCameraIntrinsics& OutCameraIntrinsics);                                                      // [0xc2fb3f4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetARWorldScale
	// float GetARWorldScale();                                                                                                 // [0xc2faeac] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetARTexture
	// class UARTexture* GetARTexture(EARTextureType TextureType);                                                              // [0xc2fae2c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetARSessionStatus
	// FARSessionStatus GetARSessionStatus();                                                                                   // [0xc2faddc] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllTracked2DPoses
	// TArray<FARPose2D> GetAllTracked2DPoses();                                                                                // [0xc2fb148] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllPins
	// TArray<UARPin*> GetAllPins();                                                                                            // [0xc2fb10c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllGeometriesByClass
	// TArray<UARTrackedGeometry*> GetAllGeometriesByClass(class UClass* GeometryClass);                                        // [0xc2faf6c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllGeometries
	// TArray<UARTrackedGeometry*> GetAllGeometries();                                                                          // [0xc2faf30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetAlignmentTransform
	// FTransform GetAlignmentTransform();                                                                                      // [0xc2faed4] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.FindTrackedPointsByName
	// TArray<UARTrackedPoint*> FindTrackedPointsByName(FString PointName);                                                     // [0xc2fa6f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.DebugDrawTrackedGeometry
	// void DebugDrawTrackedGeometry(class UARTrackedGeometry* TrackedGeometry, class UObject* WorldContextObject, FLinearColor Color, float OutlineThickness, float PersistForSeconds); // [0xc2fa334] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.DebugDrawPin
	// void DebugDrawPin(class UARPin* ARPin, class UObject* WorldContextObject, FLinearColor Color, float Scale, float PersistForSeconds); // [0xc2f9f78] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.CalculateClosestIntersection
	// void CalculateClosestIntersection(TArray<FVector>& StartPoints, TArray<FVector>& EndPoints, FVector& ClosestIntersection); // [0xc2f9504] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.CalculateAlignmentTransform
	// void CalculateAlignmentTransform(FTransform& TransformInFirstCoordinateSystem, FTransform& TransformInSecondCoordinateSystem, FTransform& AlignmentTransform); // [0xc2f92e0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.AddTrackedPointWithName
	// bool AddTrackedPointWithName(FTransform& WorldTransform, FString PointName, bool bDeletePointsWithSameName);             // [0xc2f8ac8] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.AddRuntimeCandidateImage
	// class UARCandidateImage* AddRuntimeCandidateImage(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, FString FriendlyName, float PhysicalWidth); // [0xc2f8360] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.AddManualEnvironmentCaptureProbe
	// bool AddManualEnvironmentCaptureProbe(FVector Location, FVector Extent);                                                 // [0xc2f8104] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/AugmentedReality.ARTraceResultLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UARTraceResultLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AugmentedReality.ARTraceResultLibrary.GetTrackedGeometry
	// class UARTrackedGeometry* GetTrackedGeometry(FARTraceResult& TraceResult);                                               // [0xc2fc6cc] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARTraceResultLibrary.GetTraceChannel
	// EARLineTraceChannels GetTraceChannel(FARTraceResult& TraceResult);                                                       // [0xc2fc608] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARTraceResultLibrary.GetLocalTransform
	// FTransform GetLocalTransform(FARTraceResult& TraceResult);                                                               // [0xc2fbd08] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARTraceResultLibrary.GetLocalToWorldTransform
	// FTransform GetLocalToWorldTransform(FARTraceResult& TraceResult);                                                        // [0xc2fbb9c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARTraceResultLibrary.GetLocalToTrackingTransform
	// FTransform GetLocalToTrackingTransform(FARTraceResult& TraceResult);                                                     // [0xc2fba30] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARTraceResultLibrary.GetDistanceFromCamera
	// float GetDistanceFromCamera(FARTraceResult& TraceResult);                                                                // [0xc2fb5d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AugmentedReality.ARBaseAsyncTaskBlueprintProxy
/// Size: 0x0020 (0x000030 - 0x000050)
class UARBaseAsyncTaskBlueprintProxy : public UBlueprintAsyncActionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy
/// Size: 0x0030 (0x000050 - 0x000080)
class UARSaveWorldAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FMulticastInlineDelegate)                  OnSuccess                                                   OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailed                                                    OFFSET(getStruct<T>, {0x60, 16, 0, 0})


	/// Functions
	// Function /Script/AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld
	// class UARSaveWorldAsyncTaskBlueprintProxy* ARSaveWorld(class UObject* WorldContextObject);                               // [0xc2f6f4c] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy
/// Size: 0x0060 (0x000050 - 0x0000B0)
class UARGetCandidateObjectAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FMulticastInlineDelegate)                  OnSuccess                                                   OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailed                                                    OFFSET(getStruct<T>, {0x60, 16, 0, 0})


	/// Functions
	// Function /Script/AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject
	// class UARGetCandidateObjectAsyncTaskBlueprintProxy* ARGetCandidateObject(class UObject* WorldContextObject, FVector Location, FVector Extent); // [0xc2f6cb8] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/AugmentedReality.ARComponent
/// Size: 0x0080 (0x000220 - 0x0002A0)
class UARComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	SMember(FGuid)                                     NativeID                                                    OFFSET(getStruct<T>, {0x220, 16, 0, 0})
	DMember(bool)                                      bUseDefaultReplication                                      OFFSET(get<bool>, {0x260, 1, 0, 0})
	CMember(class UMaterialInterface*)                 DefaultMeshMaterial                                         OFFSET(get<T>, {0x268, 8, 0, 0})
	CMember(class UMaterialInterface*)                 DefaultWireframeMeshMaterial                                OFFSET(get<T>, {0x270, 8, 0, 0})
	CMember(class UMRMeshComponent*)                   MRMeshComponent                                             OFFSET(get<T>, {0x278, 8, 0, 0})
	CMember(class UARTrackedGeometry*)                 MyTrackedGeometry                                           OFFSET(get<T>, {0x280, 8, 0, 0})


	/// Functions
	// Function /Script/AugmentedReality.ARComponent.UpdateVisualization
	// void UpdateVisualization();                                                                                              // [0x664c8dc] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/AugmentedReality.ARComponent.SetNativeID
	// void SetNativeID(FGuid NativeID);                                                                                        // [0xc301198] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AugmentedReality.ARComponent.ReceiveRemove
	// void ReceiveRemove();                                                                                                    // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/AugmentedReality.ARComponent.OnRep_Payload
	// void OnRep_Payload();                                                                                                    // [0x962b644] Native|Protected     
	// Function /Script/AugmentedReality.ARComponent.GetMRMesh
	// class UMRMeshComponent* GetMRMesh();                                                                                     // [0xc2fbdf8] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AugmentedReality.ARPlaneComponent
/// Size: 0x00D0 (0x0002A0 - 0x000370)
class UARPlaneComponent : public UARComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
	SMember(FARPlaneUpdatePayload)                     ReplicatedPayload                                           OFFSET(getStruct<T>, {0x2A0, 208, 0, 0})


	/// Functions
	// Function /Script/AugmentedReality.ARPlaneComponent.SetPlaneComponentDebugMode
	// void SetPlaneComponentDebugMode(EPlaneComponentDebugMode NewDebugMode);                                                  // [0xc3013b8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARPlaneComponent.SetObjectClassificationDebugColors
	// void SetObjectClassificationDebugColors(TMap<EARObjectClassification, FLinearColor>& InColors);                          // [0xc3012e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AugmentedReality.ARPlaneComponent.ServerUpdatePayload
	// void ServerUpdatePayload(FARPlaneUpdatePayload NewPayload);                                                              // [0xc2ff004] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARPlaneComponent.ReceiveUpdate
	// void ReceiveUpdate(FARPlaneUpdatePayload& Payload);                                                                      // [0x3d1d968] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.ARPlaneComponent.ReceiveAdd
	// void ReceiveAdd(FARPlaneUpdatePayload& Payload);                                                                         // [0x3d1d968] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.ARPlaneComponent.GetObjectClassificationDebugColors
	// TMap<EARObjectClassification, FLinearColor> GetObjectClassificationDebugColors();                                        // [0xc2fc46c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AugmentedReality.ARPointComponent
/// Size: 0x0010 (0x0002A0 - 0x0002B0)
class UARPointComponent : public UARComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
	SMember(FARPointUpdatePayload)                     ReplicatedPayload                                           OFFSET(getStruct<T>, {0x2A0, 1, 0, 0})


	/// Functions
	// Function /Script/AugmentedReality.ARPointComponent.ServerUpdatePayload
	// void ServerUpdatePayload(FARPointUpdatePayload NewPayload);                                                              // [0xc2ff1a0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARPointComponent.ReceiveUpdate
	// void ReceiveUpdate(FARPointUpdatePayload& Payload);                                                                      // [0x3d1d968] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.ARPointComponent.ReceiveAdd
	// void ReceiveAdd(FARPointUpdatePayload& Payload);                                                                         // [0x3d1d968] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/AugmentedReality.ARFaceComponent
/// Size: 0x0090 (0x0002A0 - 0x000330)
class UARFaceComponent : public UARComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	CMember(EARFaceTransformMixing)                    TransformSetting                                            OFFSET(get<T>, {0x2A0, 1, 0, 0})
	DMember(bool)                                      bUpdateVertexNormal                                         OFFSET(get<bool>, {0x2A1, 1, 0, 0})
	DMember(bool)                                      bFaceOutOfScreen                                            OFFSET(get<bool>, {0x2A2, 1, 0, 0})
	SMember(FARFaceUpdatePayload)                      ReplicatedPayload                                           OFFSET(getStruct<T>, {0x2A8, 96, 0, 0})


	/// Functions
	// Function /Script/AugmentedReality.ARFaceComponent.SetFaceComponentDebugMode
	// void SetFaceComponentDebugMode(EFaceComponentDebugMode NewDebugMode);                                                    // [0xc30088c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARFaceComponent.ServerUpdatePayload
	// void ServerUpdatePayload(FARFaceUpdatePayload NewPayload);                                                               // [0xc2fe98c] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARFaceComponent.ReceiveUpdate
	// void ReceiveUpdate(FARFaceUpdatePayload& Payload);                                                                       // [0x3d1d968] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.ARFaceComponent.ReceiveAdd
	// void ReceiveAdd(FARFaceUpdatePayload& Payload);                                                                          // [0x3d1d968] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/AugmentedReality.ARImageComponent
/// Size: 0x00A0 (0x0002A0 - 0x000340)
class UARImageComponent : public UARComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	SMember(FARImageUpdatePayload)                     ReplicatedPayload                                           OFFSET(getStruct<T>, {0x2A0, 160, 0, 0})


	/// Functions
	// Function /Script/AugmentedReality.ARImageComponent.SetImageComponentDebugMode
	// void SetImageComponentDebugMode(EImageComponentDebugMode NewDebugMode);                                                  // [0xc301120] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARImageComponent.ServerUpdatePayload
	// void ServerUpdatePayload(FARImageUpdatePayload NewPayload);                                                              // [0xc2fec94] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARImageComponent.ReceiveUpdate
	// void ReceiveUpdate(FARImageUpdatePayload& Payload);                                                                      // [0x3d1d968] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.ARImageComponent.ReceiveAdd
	// void ReceiveAdd(FARImageUpdatePayload& Payload);                                                                         // [0x3d1d968] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/AugmentedReality.ARQRCodeComponent
/// Size: 0x00B0 (0x0002A0 - 0x000350)
class UARQRCodeComponent : public UARComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 848;

public:
	SMember(FARQRCodeUpdatePayload)                    ReplicatedPayload                                           OFFSET(getStruct<T>, {0x2A0, 176, 0, 0})


	/// Functions
	// Function /Script/AugmentedReality.ARQRCodeComponent.SetQRCodeComponentDebugMode
	// void SetQRCodeComponentDebugMode(EQRCodeComponentDebugMode NewDebugMode);                                                // [0xc301598] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARQRCodeComponent.ServerUpdatePayload
	// void ServerUpdatePayload(FARQRCodeUpdatePayload NewPayload);                                                             // [0xc2ff4dc] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARQRCodeComponent.ReceiveUpdate
	// void ReceiveUpdate(FARQRCodeUpdatePayload& Payload);                                                                     // [0x3d1d968] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.ARQRCodeComponent.ReceiveAdd
	// void ReceiveAdd(FARQRCodeUpdatePayload& Payload);                                                                        // [0x3d1d968] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/AugmentedReality.ARPoseComponent
/// Size: 0x0070 (0x0002A0 - 0x000310)
class UARPoseComponent : public UARComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	SMember(FARPoseUpdatePayload)                      ReplicatedPayload                                           OFFSET(getStruct<T>, {0x2A0, 112, 0, 0})


	/// Functions
	// Function /Script/AugmentedReality.ARPoseComponent.SetPoseComponentDebugMode
	// void SetPoseComponentDebugMode(EPoseComponentDebugMode NewDebugMode);                                                    // [0xc301430] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARPoseComponent.ServerUpdatePayload
	// void ServerUpdatePayload(FARPoseUpdatePayload NewPayload);                                                               // [0xc2ff2f8] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARPoseComponent.ReceiveUpdate
	// void ReceiveUpdate(FARPoseUpdatePayload& Payload);                                                                       // [0x3d1d968] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.ARPoseComponent.ReceiveAdd
	// void ReceiveAdd(FARPoseUpdatePayload& Payload);                                                                          // [0x3d1d968] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/AugmentedReality.AREnvironmentProbeComponent
/// Size: 0x0060 (0x0002A0 - 0x000300)
class UAREnvironmentProbeComponent : public UARComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
	SMember(FAREnvironmentProbeUpdatePayload)          ReplicatedPayload                                           OFFSET(getStruct<T>, {0x2A0, 96, 0, 0})


	/// Functions
	// Function /Script/AugmentedReality.AREnvironmentProbeComponent.ServerUpdatePayload
	// void ServerUpdatePayload(FAREnvironmentProbeUpdatePayload NewPayload);                                                   // [0xc2fe7c4] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/AugmentedReality.AREnvironmentProbeComponent.ReceiveUpdate
	// void ReceiveUpdate(FAREnvironmentProbeUpdatePayload& Payload);                                                           // [0x3d1d968] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.AREnvironmentProbeComponent.ReceiveAdd
	// void ReceiveAdd(FAREnvironmentProbeUpdatePayload& Payload);                                                              // [0x3d1d968] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/AugmentedReality.ARObjectComponent
/// Size: 0x0060 (0x0002A0 - 0x000300)
class UARObjectComponent : public UARComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
	SMember(FARObjectUpdatePayload)                    ReplicatedPayload                                           OFFSET(getStruct<T>, {0x2A0, 96, 0, 0})


	/// Functions
	// Function /Script/AugmentedReality.ARObjectComponent.ServerUpdatePayload
	// void ServerUpdatePayload(FARObjectUpdatePayload NewPayload);                                                             // [0xc2fe7c4] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARObjectComponent.ReceiveUpdate
	// void ReceiveUpdate(FARObjectUpdatePayload& Payload);                                                                     // [0x3d1d968] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.ARObjectComponent.ReceiveAdd
	// void ReceiveAdd(FARObjectUpdatePayload& Payload);                                                                        // [0x3d1d968] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/AugmentedReality.ARMeshComponent
/// Size: 0x0090 (0x0002A0 - 0x000330)
class UARMeshComponent : public UARComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	SMember(FARMeshUpdatePayload)                      ReplicatedPayload                                           OFFSET(getStruct<T>, {0x2A0, 144, 0, 0})


	/// Functions
	// Function /Script/AugmentedReality.ARMeshComponent.ServerUpdatePayload
	// void ServerUpdatePayload(FARMeshUpdatePayload NewPayload);                                                               // [0xc2fee28] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARMeshComponent.ReceiveUpdate
	// void ReceiveUpdate(FARMeshUpdatePayload& Payload);                                                                       // [0x3d1d968] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.ARMeshComponent.ReceiveAdd
	// void ReceiveAdd(FARMeshUpdatePayload& Payload);                                                                          // [0x3d1d968] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/AugmentedReality.ARGeoAnchorComponent
/// Size: 0x00A0 (0x0002A0 - 0x000340)
class UARGeoAnchorComponent : public UARComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	SMember(FARGeoAnchorUpdatePayload)                 ReplicatedPayload                                           OFFSET(getStruct<T>, {0x2A0, 160, 0, 0})


	/// Functions
	// Function /Script/AugmentedReality.ARGeoAnchorComponent.SetGeoAnchorComponentDebugMode
	// void SetGeoAnchorComponentDebugMode(EGeoAnchorComponentDebugMode NewDebugMode);                                          // [0xc3010a8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARGeoAnchorComponent.ServerUpdatePayload
	// void ServerUpdatePayload(FARGeoAnchorUpdatePayload NewPayload);                                                          // [0xc2feaf8] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARGeoAnchorComponent.ReceiveUpdate
	// void ReceiveUpdate(FARGeoAnchorUpdatePayload& Payload);                                                                  // [0x3d1d968] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.ARGeoAnchorComponent.ReceiveAdd
	// void ReceiveAdd(FARGeoAnchorUpdatePayload& Payload);                                                                     // [0x3d1d968] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/AugmentedReality.ARDependencyHandler
/// Size: 0x0000 (0x000028 - 0x000028)
class UARDependencyHandler : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AugmentedReality.ARDependencyHandler.StartARSessionLatent
	// void StartARSessionLatent(class UObject* WorldContextObject, class UARSessionConfig* SessionConfig, FLatentActionInfo LatentInfo); // [0xc301a30] Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARDependencyHandler.RequestARSessionPermission
	// void RequestARSessionPermission(class UObject* WorldContextObject, class UARSessionConfig* SessionConfig, FLatentActionInfo LatentInfo, EARServicePermissionRequestResult& OutPermissionResult); // [0xc2fe198] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AugmentedReality.ARDependencyHandler.InstallARService
	// void InstallARService(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, EARServiceInstallRequestResult& OutInstallResult); // [0xc2fc9b8] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AugmentedReality.ARDependencyHandler.GetARDependencyHandler
	// class UARDependencyHandler* GetARDependencyHandler();                                                                    // [0xc2fadb8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARDependencyHandler.CheckARServiceAvailability
	// void CheckARServiceAvailability(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, EARServiceAvailability& OutAvailability); // [0xc2f970c] Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AugmentedReality.ARGeoTrackingSupport
/// Size: 0x0000 (0x000028 - 0x000028)
class UARGeoTrackingSupport : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingSupport
	// class UARGeoTrackingSupport* GetGeoTrackingSupport();                                                                    // [0xc2fb8b4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingStateReason
	// EARGeoTrackingStateReason GetGeoTrackingStateReason();                                                                   // [0x610da68] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingState
	// EARGeoTrackingState GetGeoTrackingState();                                                                               // [0x3519bc8] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingAccuracy
	// EARGeoTrackingAccuracy GetGeoTrackingAccuracy();                                                                         // [0x617a350] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocationWithAltitude
	// bool AddGeoAnchorAtLocationWithAltitude(float Longitude, float Latitude, float AltitudeMeters, FString OptionalAnchorName); // [0xc2f79a0] Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocation
	// bool AddGeoAnchorAtLocation(float Longitude, float Latitude, FString OptionalAnchorName);                                // [0xc2f727c] Native|Public|BlueprintCallable 
};

/// Class /Script/AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy
/// Size: 0x0050 (0x000050 - 0x0000A0)
class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FMulticastInlineDelegate)                  OnSuccess                                                   OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailed                                                    OFFSET(getStruct<T>, {0x60, 16, 0, 0})


	/// Functions
	// Function /Script/AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.GeoTrackingAvailabilityDelegate__DelegateSignature
	// void GeoTrackingAvailabilityDelegate__DelegateSignature(bool bIsAvailable, FString Error);                               // [0x3d1d968] MulticastDelegate|Public|Delegate 
	// Function /Script/AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailabilityAtLocation
	// class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* CheckGeoTrackingAvailabilityAtLocation(class UObject* WorldContextObject, float Longitude, float Latitude); // [0xc2f999c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailability
	// class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* CheckGeoTrackingAvailability(class UObject* WorldContextObject); // [0xc2f9900] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy
/// Size: 0x0058 (0x000050 - 0x0000A8)
class UGetGeoLocationAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FMulticastInlineDelegate)                  OnSuccess                                                   OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailed                                                    OFFSET(getStruct<T>, {0x60, 16, 0, 0})


	/// Functions
	// Function /Script/AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationDelegate__DelegateSignature
	// void GetGeoLocationDelegate__DelegateSignature(float Longitude, float Latitude, float Altitude, FString Error);          // [0x3d1d968] MulticastDelegate|Public|Delegate 
	// Function /Script/AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationAtWorldPosition
	// class UGetGeoLocationAsyncTaskBlueprintProxy* GetGeoLocationAtWorldPosition(class UObject* WorldContextObject, FVector& WorldPosition); // [0xc2fb774] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/AugmentedReality.ARLifeCycleComponent
/// Size: 0x0030 (0x000220 - 0x000250)
class UARLifeCycleComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	SMember(FMulticastInlineDelegate)                  OnARActorSpawnedDelegate                                    OFFSET(getStruct<T>, {0x220, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnARActorToBeDestroyedDelegate                              OFFSET(getStruct<T>, {0x230, 16, 0, 0})


	/// Functions
	// Function /Script/AugmentedReality.ARLifeCycleComponent.ServerSpawnARActor
	// void ServerSpawnARActor(class UClass* ComponentClass, FGuid NativeID);                                                   // [0xc2fe5fc] Final|Net|NetReliableNative|Event|Private|NetServer|HasDefaults|NetValidate 
	// Function /Script/AugmentedReality.ARLifeCycleComponent.ServerDestroyARActor
	// void ServerDestroyARActor(class AARActor* Actor);                                                                        // [0xc2fe510] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARLifeCycleComponent.InstanceARActorToBeDestroyedDelegate__DelegateSignature
	// void InstanceARActorToBeDestroyedDelegate__DelegateSignature(class AARActor* Actor);                                     // [0x3d1d968] MulticastDelegate|Public|Delegate 
	// Function /Script/AugmentedReality.ARLifeCycleComponent.InstanceARActorSpawnedDelegate__DelegateSignature
	// void InstanceARActorSpawnedDelegate__DelegateSignature(class UClass* ComponentClass, FGuid NativeID, class AARActor* SpawnedActor); // [0x3d1d968] MulticastDelegate|Public|Delegate|HasDefaults 
};

/// Class /Script/AugmentedReality.ARLightEstimate
/// Size: 0x0000 (0x000028 - 0x000028)
class UARLightEstimate : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AugmentedReality.ARBasicLightEstimate
/// Size: 0x0018 (0x000028 - 0x000040)
class UARBasicLightEstimate : public UARLightEstimate
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     AmbientIntensityLumens                                      OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     AmbientColorTemperatureKelvin                               OFFSET(get<float>, {0x2C, 4, 0, 0})
	SMember(FLinearColor)                              AmbientColor                                                OFFSET(getStruct<T>, {0x30, 16, 0, 0})


	/// Functions
	// Function /Script/AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens
	// float GetAmbientIntensityLumens();                                                                                       // [0x67ed834] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin
	// float GetAmbientColorTemperatureKelvin();                                                                                // [0x67ed9bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARBasicLightEstimate.GetAmbientColor
	// FLinearColor GetAmbientColor();                                                                                          // [0xc2fb1e4] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AugmentedReality.AROriginActor
/// Size: 0x0000 (0x000290 - 0x000290)
class AAROriginActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
};

/// Class /Script/AugmentedReality.ARPin
/// Size: 0x0128 (0x000028 - 0x000150)
class UARPin : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	CMember(class UARTrackedGeometry*)                 TrackedGeometry                                             OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class USceneComponent*)                    PinnedComponent                                             OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FTransform)                                LocalToTrackingTransform                                    OFFSET(getStruct<T>, {0x40, 96, 0, 0})
	SMember(FTransform)                                LocalToAlignedTrackingTransform                             OFFSET(getStruct<T>, {0xA0, 96, 0, 0})
	CMember(EARTrackingState)                          TrackingState                                               OFFSET(get<T>, {0x100, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnARTrackingStateChanged                                    OFFSET(getStruct<T>, {0x120, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnARTransformUpdated                                        OFFSET(getStruct<T>, {0x130, 16, 0, 0})


	/// Functions
	// Function /Script/AugmentedReality.ARPin.GetTrackingState
	// EARTrackingState GetTrackingState();                                                                                     // [0xa87417c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPin.GetTrackedGeometry
	// class UARTrackedGeometry* GetTrackedGeometry();                                                                          // [0x7a78994] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPin.GetPinnedComponent
	// class USceneComponent* GetPinnedComponent();                                                                             // [0x625fab4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPin.GetLocalToWorldTransform
	// FTransform GetLocalToWorldTransform();                                                                                   // [0xc2fbb20] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPin.GetLocalToTrackingTransform
	// FTransform GetLocalToTrackingTransform();                                                                                // [0xc2fb9d8] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPin.GetDebugName
	// FName GetDebugName();                                                                                                    // [0xc2fb578] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPin.DebugDraw
	// void DebugDraw(class UWorld* World, FLinearColor& Color, float Scale, float PersistForSeconds);                          // [0xc2f9dac] Native|Public|HasOutParms|HasDefaults|Const 
};

/// Class /Script/AugmentedReality.ARSessionConfig
/// Size: 0x00E0 (0x000030 - 0x000110)
class UARSessionConfig : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	DMember(bool)                                      bGenerateMeshDataFromTrackedGeometry                        OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(bool)                                      bGenerateCollisionForMeshData                               OFFSET(get<bool>, {0x31, 1, 0, 0})
	DMember(bool)                                      bGenerateNavMeshForMeshData                                 OFFSET(get<bool>, {0x32, 1, 0, 0})
	DMember(bool)                                      bUseMeshDataForOcclusion                                    OFFSET(get<bool>, {0x33, 1, 0, 0})
	DMember(bool)                                      bRenderMeshDataInWireframe                                  OFFSET(get<bool>, {0x34, 1, 0, 0})
	DMember(bool)                                      bTrackSceneObjects                                          OFFSET(get<bool>, {0x35, 1, 0, 0})
	DMember(bool)                                      bUsePersonSegmentationForOcclusion                          OFFSET(get<bool>, {0x36, 1, 0, 0})
	DMember(bool)                                      bUseSceneDepthForOcclusion                                  OFFSET(get<bool>, {0x37, 1, 0, 0})
	DMember(bool)                                      bUseAutomaticImageScaleEstimation                           OFFSET(get<bool>, {0x38, 1, 0, 0})
	DMember(bool)                                      bUseStandardOnboardingUX                                    OFFSET(get<bool>, {0x39, 1, 0, 0})
	CMember(EARWorldAlignment)                         WorldAlignment                                              OFFSET(get<T>, {0x3A, 1, 0, 0})
	CMember(EARSessionType)                            SessionType                                                 OFFSET(get<T>, {0x3B, 1, 0, 0})
	CMember(EARPlaneDetectionMode)                     PlaneDetectionMode                                          OFFSET(get<T>, {0x3C, 1, 0, 0})
	DMember(bool)                                      bHorizontalPlaneDetection                                   OFFSET(get<bool>, {0x3D, 1, 0, 0})
	DMember(bool)                                      bVerticalPlaneDetection                                     OFFSET(get<bool>, {0x3E, 1, 0, 0})
	DMember(bool)                                      bEnableAutoFocus                                            OFFSET(get<bool>, {0x3F, 1, 0, 0})
	CMember(EARLightEstimationMode)                    LightEstimationMode                                         OFFSET(get<T>, {0x40, 1, 0, 0})
	CMember(EARFrameSyncMode)                          FrameSyncMode                                               OFFSET(get<T>, {0x41, 1, 0, 0})
	DMember(bool)                                      bEnableAutomaticCameraOverlay                               OFFSET(get<bool>, {0x42, 1, 0, 0})
	DMember(bool)                                      bEnableAutomaticCameraTracking                              OFFSET(get<bool>, {0x43, 1, 0, 0})
	DMember(bool)                                      bResetCameraTracking                                        OFFSET(get<bool>, {0x44, 1, 0, 0})
	DMember(bool)                                      bResetTrackedObjects                                        OFFSET(get<bool>, {0x45, 1, 0, 0})
	CMember(TArray<class UARCandidateImage*>)          CandidateImages                                             OFFSET(get<T>, {0x48, 16, 0, 0})
	DMember(int32_t)                                   MaxNumSimultaneousImagesTracked                             OFFSET(get<int32_t>, {0x58, 4, 0, 0})
	CMember(EAREnvironmentCaptureProbeType)            EnvironmentCaptureProbeType                                 OFFSET(get<T>, {0x5C, 1, 0, 0})
	CMember(TArray<char>)                              WorldMapData                                                OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<class UARCandidateObject*>)         CandidateObjects                                            OFFSET(get<T>, {0x70, 16, 0, 0})
	SMember(FARVideoFormat)                            DesiredVideoFormat                                          OFFSET(getStruct<T>, {0x80, 12, 0, 0})
	DMember(bool)                                      bUseOptimalVideoFormat                                      OFFSET(get<bool>, {0x8C, 1, 0, 0})
	CMember(EARFaceTrackingDirection)                  FaceTrackingDirection                                       OFFSET(get<T>, {0x8D, 1, 0, 0})
	CMember(EARFaceTrackingUpdate)                     FaceTrackingUpdate                                          OFFSET(get<T>, {0x8E, 1, 0, 0})
	DMember(int32_t)                                   MaxNumberOfTrackedFaces                                     OFFSET(get<int32_t>, {0x90, 4, 0, 0})
	CMember(TArray<char>)                              SerializedARCandidateImageDatabase                          OFFSET(get<T>, {0x98, 16, 0, 0})
	CMember(EARSessionTrackingFeature)                 EnabledSessionTrackingFeature                               OFFSET(get<T>, {0xA8, 1, 0, 0})
	CMember(EARSceneReconstruction)                    SceneReconstructionMethod                                   OFFSET(get<T>, {0xA9, 1, 0, 0})
	CMember(class UClass*)                             PlaneComponentClass                                         OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(class UClass*)                             PointComponentClass                                         OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(class UClass*)                             FaceComponentClass                                          OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(class UClass*)                             ImageComponentClass                                         OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(class UClass*)                             QRCodeComponentClass                                        OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(class UClass*)                             PoseComponentClass                                          OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(class UClass*)                             EnvironmentProbeComponentClass                              OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(class UClass*)                             ObjectComponentClass                                        OFFSET(get<T>, {0xE8, 8, 0, 0})
	CMember(class UClass*)                             MeshComponentClass                                          OFFSET(get<T>, {0xF0, 8, 0, 0})
	CMember(class UClass*)                             GeoAnchorComponentClass                                     OFFSET(get<T>, {0xF8, 8, 0, 0})
	CMember(class UMaterialInterface*)                 DefaultMeshMaterial                                         OFFSET(get<T>, {0x100, 8, 0, 0})
	CMember(class UMaterialInterface*)                 DefaultWireframeMeshMaterial                                OFFSET(get<T>, {0x108, 8, 0, 0})


	/// Functions
	// Function /Script/AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects
	// bool ShouldResetTrackedObjects();                                                                                        // [0xc30190c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.ShouldResetCameraTracking
	// bool ShouldResetCameraTracking();                                                                                        // [0xa9e412c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay
	// bool ShouldRenderCameraOverlay();                                                                                        // [0xbeb8b80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking
	// bool ShouldEnableCameraTracking();                                                                                       // [0xc3018f8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus
	// bool ShouldEnableAutoFocus();                                                                                            // [0xc3018e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.SetWorldMapData
	// void SetWorldMapData(TArray<char> WorldMapData);                                                                         // [0xc301800] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetSessionTrackingFeatureToEnable
	// void SetSessionTrackingFeatureToEnable(EARSessionTrackingFeature InSessionTrackingFeature);                              // [0xc301784] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetSceneReconstructionMethod
	// void SetSceneReconstructionMethod(EARSceneReconstruction InSceneReconstructionMethod);                                   // [0xc301708] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetResetTrackedObjects
	// void SetResetTrackedObjects(bool bNewValue);                                                                             // [0xc30168c] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetResetCameraTracking
	// void SetResetCameraTracking(bool bNewValue);                                                                             // [0xc301610] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate
	// void SetFaceTrackingUpdate(EARFaceTrackingUpdate InUpdate);                                                              // [0xc300980] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetFaceTrackingDirection
	// void SetFaceTrackingDirection(EARFaceTrackingDirection InDirection);                                                     // [0xc300904] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetEnableAutoFocus
	// void SetEnableAutoFocus(bool bNewValue);                                                                                 // [0xc3006c4] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetDesiredVideoFormat
	// void SetDesiredVideoFormat(FARVideoFormat NewFormat);                                                                    // [0xc300578] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetCandidateObjectList
	// void SetCandidateObjectList(TArray<UARCandidateObject*>& InCandidateObjects);                                            // [0xc2ffe70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.RemoveCandidateImageAtIndex
	// void RemoveCandidateImageAtIndex(int32_t Index);                                                                         // [0xc2fe060] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.RemoveCandidateImage
	// void RemoveCandidateImage(class UARCandidateImage* CandidateImage);                                                      // [0xc2fdfc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.GetWorldMapData
	// TArray<char> GetWorldMapData();                                                                                          // [0xc2fc80c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetWorldAlignment
	// EARWorldAlignment GetWorldAlignment();                                                                                   // [0xc2fc7f8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetSessionType
	// EARSessionType GetSessionType();                                                                                         // [0xc2fc528] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetSceneReconstructionMethod
	// EARSceneReconstruction GetSceneReconstructionMethod();                                                                   // [0xb2df8b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetPlaneDetectionMode
	// EARPlaneDetectionMode GetPlaneDetectionMode();                                                                           // [0xc2fc4a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked
	// int32_t GetMaxNumSimultaneousImagesTracked();                                                                            // [0x6404914] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetLightEstimationMode
	// EARLightEstimationMode GetLightEstimationMode();                                                                         // [0x8f31524] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetFrameSyncMode
	// EARFrameSyncMode GetFrameSyncMode();                                                                                     // [0xc2fb744] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate
	// EARFaceTrackingUpdate GetFaceTrackingUpdate();                                                                           // [0xc2fb72c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetFaceTrackingDirection
	// EARFaceTrackingDirection GetFaceTrackingDirection();                                                                     // [0xc2fb714] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType
	// EAREnvironmentCaptureProbeType GetEnvironmentCaptureProbeType();                                                         // [0xc2fb694] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetEnabledSessionTrackingFeature
	// EARSessionTrackingFeature GetEnabledSessionTrackingFeature();                                                            // [0xb2dfbe4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetDesiredVideoFormat
	// FARVideoFormat GetDesiredVideoFormat();                                                                                  // [0xc2fb5a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetCandidateObjectList
	// TArray<UARCandidateObject*> GetCandidateObjectList();                                                                    // [0xc2fb4b4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetCandidateImageList
	// TArray<UARCandidateImage*> GetCandidateImageList();                                                                      // [0xb6b2bbc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.ClearCandidateImages
	// void ClearCandidateImages();                                                                                             // [0xc2f9a94] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.AddCandidateObject
	// void AddCandidateObject(class UARCandidateObject* CandidateObject);                                                      // [0xc2f71c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.AddCandidateImage
	// void AddCandidateImage(class UARCandidateImage* NewCandidateImage);                                                      // [0xc2f7148] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AugmentedReality.ARSharedWorldGameMode
/// Size: 0x0068 (0x000378 - 0x0003E0)
class AARSharedWorldGameMode : public AGameMode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 992;

public:
	DMember(int32_t)                                   BufferSizePerChunk                                          OFFSET(get<int32_t>, {0x378, 4, 0, 0})


	/// Functions
	// Function /Script/AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData
	// void SetPreviewImageData(TArray<char> ImageData);                                                                        // [0xc3014a8] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady
	// void SetARWorldSharingIsReady();                                                                                         // [0xc2ffbe0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData
	// void SetARSharedWorldData(TArray<char> ARWorldData);                                                                     // [0xc2ff678] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState
	// class AARSharedWorldGameState* GetARSharedWorldGameState();                                                              // [0xa702950] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/AugmentedReality.ARSharedWorldGameState
/// Size: 0x0038 (0x000300 - 0x000338)
class AARSharedWorldGameState : public AGameState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	CMember(TArray<char>)                              PreviewImageData                                            OFFSET(get<T>, {0x300, 16, 0, 0})
	CMember(TArray<char>)                              ARWorldData                                                 OFFSET(get<T>, {0x310, 16, 0, 0})
	DMember(int32_t)                                   PreviewImageBytesTotal                                      OFFSET(get<int32_t>, {0x320, 4, 0, 0})
	DMember(int32_t)                                   ARWorldBytesTotal                                           OFFSET(get<int32_t>, {0x324, 4, 0, 0})
	DMember(int32_t)                                   PreviewImageBytesDelivered                                  OFFSET(get<int32_t>, {0x328, 4, 0, 0})
	DMember(int32_t)                                   ARWorldBytesDelivered                                       OFFSET(get<int32_t>, {0x32C, 4, 0, 0})


	/// Functions
	// Function /Script/AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady
	// void K2_OnARWorldMapIsReady();                                                                                           // [0x3d1d968] Event|Public|BlueprintEvent 
};

/// Class /Script/AugmentedReality.ARSharedWorldPlayerController
/// Size: 0x0008 (0x0006F8 - 0x000700)
class AARSharedWorldPlayerController : public APlayerController
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1792;

public:


	/// Functions
	// Function /Script/AugmentedReality.ARSharedWorldPlayerController.ServerMarkReadyForReceiving
	// void ServerMarkReadyForReceiving();                                                                                      // [0xc2fe5b0] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARSharedWorldPlayerController.ClientUpdatePreviewImageData
	// void ClientUpdatePreviewImageData(int32_t Offset, TArray<char> Buffer);                                                  // [0xc2f9cac] Net|NetReliableNative|Event|Public|NetClient|NetValidate 
	// Function /Script/AugmentedReality.ARSharedWorldPlayerController.ClientUpdateARWorldData
	// void ClientUpdateARWorldData(int32_t Offset, TArray<char> Buffer);                                                       // [0xc2f9bac] Net|NetReliableNative|Event|Public|NetClient|NetValidate 
	// Function /Script/AugmentedReality.ARSharedWorldPlayerController.ClientInitSharedWorld
	// void ClientInitSharedWorld(int32_t PreviewImageSize, int32_t ARWorldDataSize);                                           // [0xc2f9ac4] Net|NetReliableNative|Event|Public|NetClient|NetValidate 
};

/// Class /Script/AugmentedReality.ARSkyLight
/// Size: 0x0010 (0x0002A0 - 0x0002B0)
class AARSkyLight : public ASkyLight
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
	CMember(class UAREnvironmentCaptureProbe*)         CaptureProbe                                                OFFSET(get<T>, {0x2A0, 8, 0, 0})


	/// Functions
	// Function /Script/AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe
	// void SetEnvironmentCaptureProbe(class UAREnvironmentCaptureProbe* InCaptureProbe);                                       // [0xc3007b0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AugmentedReality.ARTexture
/// Size: 0x0020 (0x000130 - 0x000150)
class UARTexture : public UTexture
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	CMember(EARTextureType)                            TextureType                                                 OFFSET(get<T>, {0x130, 1, 0, 0})
	DMember(float)                                     Timestamp                                                   OFFSET(get<float>, {0x134, 4, 0, 0})
	SMember(FGuid)                                     ExternalTextureGuid                                         OFFSET(getStruct<T>, {0x138, 16, 0, 0})
	SMember(FVector2f)                                 Size                                                        OFFSET(getStruct<T>, {0x148, 8, 0, 0})
};

/// Class /Script/AugmentedReality.ARTextureCameraImage
/// Size: 0x0000 (0x000150 - 0x000150)
class UARTextureCameraImage : public UARTexture
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
};

/// Class /Script/AugmentedReality.ARTextureCameraDepth
/// Size: 0x0008 (0x000150 - 0x000158)
class UARTextureCameraDepth : public UARTexture
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	CMember(EARDepthQuality)                           DepthQuality                                                OFFSET(get<T>, {0x150, 1, 0, 0})
	CMember(EARDepthAccuracy)                          DepthAccuracy                                               OFFSET(get<T>, {0x151, 1, 0, 0})
	DMember(bool)                                      bIsTemporallySmoothed                                       OFFSET(get<bool>, {0x152, 1, 0, 0})
};

/// Class /Script/AugmentedReality.AREnvironmentCaptureProbeTexture
/// Size: 0x0020 (0x000138 - 0x000158)
class UAREnvironmentCaptureProbeTexture : public UTextureCube
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	CMember(EARTextureType)                            TextureType                                                 OFFSET(get<T>, {0x138, 1, 0, 0})
	DMember(float)                                     Timestamp                                                   OFFSET(get<float>, {0x13C, 4, 0, 0})
	SMember(FGuid)                                     ExternalTextureGuid                                         OFFSET(getStruct<T>, {0x140, 16, 0, 0})
	SMember(FVector2f)                                 Size                                                        OFFSET(getStruct<T>, {0x150, 8, 0, 0})
};

/// Class /Script/AugmentedReality.ARTraceResultDummy
/// Size: 0x0000 (0x000028 - 0x000028)
class UARTraceResultDummy : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AugmentedReality.ARTrackedGeometry
/// Size: 0x0138 (0x000028 - 0x000160)
class UARTrackedGeometry : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FGuid)                                     UniqueID                                                    OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FTransform)                                LocalToTrackingTransform                                    OFFSET(getStruct<T>, {0x40, 96, 0, 0})
	SMember(FTransform)                                LocalToAlignedTrackingTransform                             OFFSET(getStruct<T>, {0xA0, 96, 0, 0})
	CMember(EARTrackingState)                          TrackingState                                               OFFSET(get<T>, {0x100, 1, 0, 0})
	CMember(class UMRMeshComponent*)                   UnderlyingMesh                                              OFFSET(get<T>, {0x110, 8, 0, 0})
	CMember(EARObjectClassification)                   ObjectClassification                                        OFFSET(get<T>, {0x118, 1, 0, 0})
	CMember(EARSpatialMeshUsageFlags)                  SpatialMeshUsageFlags                                       OFFSET(get<T>, {0x119, 1, 0, 0})
	DMember(int32_t)                                   LastUpdateFrameNumber                                       OFFSET(get<int32_t>, {0x130, 4, 0, 0})
	SMember(FName)                                     DebugName                                                   OFFSET(getStruct<T>, {0x140, 4, 0, 0})


	/// Functions
	// Function /Script/AugmentedReality.ARTrackedGeometry.IsTracked
	// bool IsTracked();                                                                                                        // [0xc2fce18] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARTrackedGeometry.HasSpatialMeshUsageFlag
	// bool HasSpatialMeshUsageFlag(EARSpatialMeshUsageFlags InFlag);                                                           // [0xc2fc928] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh
	// class UMRMeshComponent* GetUnderlyingMesh();                                                                             // [0xaf29998] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetTrackingState
	// EARTrackingState GetTrackingState();                                                                                     // [0xa87417c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetObjectClassification
	// EARObjectClassification GetObjectClassification();                                                                       // [0x5fb8e28] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetName
	// FString GetName();                                                                                                       // [0xc2fbe10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform
	// FTransform GetLocalToWorldTransform();                                                                                   // [0xc2fbc8c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform
	// FTransform GetLocalToTrackingTransform();                                                                                // [0xc2fb9d8] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp
	// float GetLastUpdateTimestamp();                                                                                          // [0xc2fb8d8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber
	// int32_t GetLastUpdateFrameNumber();                                                                                      // [0x9600160] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetDebugName
	// FName GetDebugName();                                                                                                    // [0xc2fb590] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AugmentedReality.ARPlaneGeometry
/// Size: 0x0050 (0x000160 - 0x0001B0)
class UARPlaneGeometry : public UARTrackedGeometry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	CMember(EARPlaneOrientation)                       orientation                                                 OFFSET(get<T>, {0x158, 1, 0, 0})
	SMember(FVector)                                   Center                                                      OFFSET(getStruct<T>, {0x160, 24, 0, 0})
	SMember(FVector)                                   Extent                                                      OFFSET(getStruct<T>, {0x178, 24, 0, 0})
	CMember(TArray<FVector>)                           BoundaryPolygon                                             OFFSET(get<T>, {0x190, 16, 0, 0})
	CMember(class UARPlaneGeometry*)                   SubsumedBy                                                  OFFSET(get<T>, {0x1A0, 8, 0, 0})


	/// Functions
	// Function /Script/AugmentedReality.ARPlaneGeometry.GetSubsumedBy
	// class UARPlaneGeometry* GetSubsumedBy();                                                                                 // [0xc2fc53c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPlaneGeometry.GetOrientation
	// EARPlaneOrientation GetOrientation();                                                                                    // [0xc2fc488] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPlaneGeometry.GetExtent
	// FVector GetExtent();                                                                                                     // [0xc2fb6ec] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPlaneGeometry.GetCenter
	// FVector GetCenter();                                                                                                     // [0xc2fb52c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace
	// TArray<FVector> GetBoundaryPolygonInLocalSpace();                                                                        // [0xc2fb328] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AugmentedReality.ARTrackedPoint
/// Size: 0x0000 (0x000160 - 0x000160)
class UARTrackedPoint : public UARTrackedGeometry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
};

/// Class /Script/AugmentedReality.ARTrackedImage
/// Size: 0x0010 (0x000160 - 0x000170)
class UARTrackedImage : public UARTrackedGeometry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	CMember(class UARCandidateImage*)                  DetectedImage                                               OFFSET(get<T>, {0x158, 8, 0, 0})
	SMember(FVector2D)                                 EstimatedSize                                               OFFSET(getStruct<T>, {0x160, 16, 0, 0})


	/// Functions
	// Function /Script/AugmentedReality.ARTrackedImage.GetEstimateSize
	// FVector2D GetEstimateSize();                                                                                             // [0xc2fb6a8] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARTrackedImage.GetDetectedImage
	// class UARCandidateImage* GetDetectedImage();                                                                             // [0x339b298] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AugmentedReality.ARTrackedQRCode
/// Size: 0x0020 (0x000170 - 0x000190)
class UARTrackedQRCode : public UARTrackedImage
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FString)                                   QRCode                                                      OFFSET(getStruct<T>, {0x170, 16, 0, 0})
	DMember(int32_t)                                   Version                                                     OFFSET(get<int32_t>, {0x180, 4, 0, 0})
};

/// Class /Script/AugmentedReality.ARFaceGeometry
/// Size: 0x0160 (0x000160 - 0x0002C0)
class UARFaceGeometry : public UARTrackedGeometry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	SMember(FVector)                                   LookAtTarget                                                OFFSET(getStruct<T>, {0x158, 24, 0, 0})
	DMember(bool)                                      bIsTracked                                                  OFFSET(get<bool>, {0x170, 1, 0, 0})
	CMember(TMap<EARFaceBlendShape, float>)            BlendShapes                                                 OFFSET(get<T>, {0x178, 80, 0, 0})
	SMember(FTransform)                                LeftEyeTransform                                            OFFSET(getStruct<T>, {0x200, 96, 0, 0})
	SMember(FTransform)                                RightEyeTransform                                           OFFSET(getStruct<T>, {0x260, 96, 0, 0})


	/// Functions
	// Function /Script/AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform
	// FTransform GetWorldSpaceEyeTransform(EAREye Eye);                                                                        // [0xc2fc84c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform
	// FTransform GetLocalSpaceEyeTransform(EAREye Eye);                                                                        // [0xc2fb910] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARFaceGeometry.GetBlendShapeValue
	// float GetBlendShapeValue(EARFaceBlendShape BlendShape);                                                                  // [0xc2fb1fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARFaceGeometry.GetBlendShapes
	// TMap<EARFaceBlendShape, float> GetBlendShapes();                                                                         // [0xc2fb28c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AugmentedReality.AREnvironmentCaptureProbe
/// Size: 0x0020 (0x000160 - 0x000180)
class UAREnvironmentCaptureProbe : public UARTrackedGeometry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	SMember(FVector)                                   Extent                                                      OFFSET(getStruct<T>, {0x158, 24, 0, 0})
	CMember(class UAREnvironmentCaptureProbeTexture*)  EnvironmentCaptureTexture                                   OFFSET(get<T>, {0x170, 8, 0, 0})


	/// Functions
	// Function /Script/AugmentedReality.AREnvironmentCaptureProbe.GetExtent
	// FVector GetExtent();                                                                                                     // [0xc2fb6c4] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture
	// class UAREnvironmentCaptureProbeTexture* GetEnvironmentCaptureTexture();                                                 // [0x915ad40] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AugmentedReality.ARTrackedObject
/// Size: 0x0000 (0x000160 - 0x000160)
class UARTrackedObject : public UARTrackedGeometry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	CMember(class UARCandidateObject*)                 DetectedObject                                              OFFSET(get<T>, {0x158, 8, 0, 0})


	/// Functions
	// Function /Script/AugmentedReality.ARTrackedObject.GetDetectedObject
	// class UARCandidateObject* GetDetectedObject();                                                                           // [0x339b298] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AugmentedReality.ARTrackedPose
/// Size: 0x0050 (0x000160 - 0x0001B0)
class UARTrackedPose : public UARTrackedGeometry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	SMember(FARPose3D)                                 TrackedPose                                                 OFFSET(getStruct<T>, {0x158, 80, 0, 0})


	/// Functions
	// Function /Script/AugmentedReality.ARTrackedPose.GetTrackedPoseData
	// FARPose3D GetTrackedPoseData();                                                                                          // [0xc2fc794] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AugmentedReality.ARMeshGeometry
/// Size: 0x0000 (0x000160 - 0x000160)
class UARMeshGeometry : public UARTrackedGeometry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:


	/// Functions
	// Function /Script/AugmentedReality.ARMeshGeometry.GetObjectClassificationAtLocation
	// bool GetObjectClassificationAtLocation(FVector& InWorldLocation, EARObjectClassification& OutClassification, FVector& OutClassificationLocation, float MaxLocationDiff); // [0xc2fc154] Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/AugmentedReality.ARGeoAnchor
/// Size: 0x0010 (0x000160 - 0x000170)
class UARGeoAnchor : public UARTrackedGeometry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:


	/// Functions
	// Function /Script/AugmentedReality.ARGeoAnchor.GetLongitude
	// float GetLongitude();                                                                                                    // [0x61ebdd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARGeoAnchor.GetLatitude
	// float GetLatitude();                                                                                                     // [0xc2fb8f8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARGeoAnchor.GetAltitudeSource
	// EARAltitudeSource GetAltitudeSource();                                                                                   // [0xb55d42c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARGeoAnchor.GetAltitudeMeters
	// float GetAltitudeMeters();                                                                                               // [0x98c537c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AugmentedReality.ARTrackableNotifyComponent
/// Size: 0x0150 (0x0000A0 - 0x0001F0)
class UARTrackableNotifyComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	SMember(FMulticastInlineDelegate)                  OnAddTrackedGeometry                                        OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnUpdateTrackedGeometry                                     OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnRemoveTrackedGeometry                                     OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAddTrackedPlane                                           OFFSET(getStruct<T>, {0xD0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnUpdateTrackedPlane                                        OFFSET(getStruct<T>, {0xE0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnRemoveTrackedPlane                                        OFFSET(getStruct<T>, {0xF0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAddTrackedPoint                                           OFFSET(getStruct<T>, {0x100, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnUpdateTrackedPoint                                        OFFSET(getStruct<T>, {0x110, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnRemoveTrackedPoint                                        OFFSET(getStruct<T>, {0x120, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAddTrackedImage                                           OFFSET(getStruct<T>, {0x130, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnUpdateTrackedImage                                        OFFSET(getStruct<T>, {0x140, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnRemoveTrackedImage                                        OFFSET(getStruct<T>, {0x150, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAddTrackedFace                                            OFFSET(getStruct<T>, {0x160, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnUpdateTrackedFace                                         OFFSET(getStruct<T>, {0x170, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnRemoveTrackedFace                                         OFFSET(getStruct<T>, {0x180, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAddTrackedEnvProbe                                        OFFSET(getStruct<T>, {0x190, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnUpdateTrackedEnvProbe                                     OFFSET(getStruct<T>, {0x1A0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnRemoveTrackedEnvProbe                                     OFFSET(getStruct<T>, {0x1B0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAddTrackedObject                                          OFFSET(getStruct<T>, {0x1C0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnUpdateTrackedObject                                       OFFSET(getStruct<T>, {0x1D0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnRemoveTrackedObject                                       OFFSET(getStruct<T>, {0x1E0, 16, 0, 0})
};

/// Class /Script/AugmentedReality.ARTypesDummyClass
/// Size: 0x0000 (0x000028 - 0x000028)
class UARTypesDummyClass : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AugmentedReality.ARCandidateImage
/// Size: 0x0028 (0x000030 - 0x000058)
class UARCandidateImage : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(class UTexture2D*)                         CandidateTexture                                            OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FString)                                   FriendlyName                                                OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	DMember(float)                                     Width                                                       OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     Height                                                      OFFSET(get<float>, {0x4C, 4, 0, 0})
	CMember(EARCandidateImageOrientation)              orientation                                                 OFFSET(get<T>, {0x50, 1, 0, 0})


	/// Functions
	// Function /Script/AugmentedReality.ARCandidateImage.GetPhysicalWidth
	// float GetPhysicalWidth();                                                                                                // [0x38e62d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARCandidateImage.GetPhysicalHeight
	// float GetPhysicalHeight();                                                                                               // [0x38e6004] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARCandidateImage.GetOrientation
	// EARCandidateImageOrientation GetOrientation();                                                                           // [0x60d5610] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARCandidateImage.GetFriendlyName
	// FString GetFriendlyName();                                                                                               // [0xa1422ac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARCandidateImage.GetCandidateTexture
	// class UTexture2D* GetCandidateTexture();                                                                                 // [0x625fab4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AugmentedReality.ARCandidateObject
/// Size: 0x0058 (0x000030 - 0x000088)
class UARCandidateObject : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TArray<char>)                              CandidateObjectData                                         OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   FriendlyName                                                OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FBox)                                      BoundingBox                                                 OFFSET(getStruct<T>, {0x50, 56, 0, 0})


	/// Functions
	// Function /Script/AugmentedReality.ARCandidateObject.SetFriendlyName
	// void SetFriendlyName(FString NewName);                                                                                   // [0xc3009fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARCandidateObject.SetCandidateObjectData
	// void SetCandidateObjectData(TArray<char>& InCandidateObject);                                                            // [0xc2ffdd0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AugmentedReality.ARCandidateObject.SetBoundingBox
	// void SetBoundingBox(FBox& InBoundingBox);                                                                                // [0xc2ffd28] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AugmentedReality.ARCandidateObject.GetFriendlyName
	// FString GetFriendlyName();                                                                                               // [0xc2fb758] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARCandidateObject.GetCandidateObjectData
	// TArray<char> GetCandidateObjectData();                                                                                   // [0xc2fb498] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARCandidateObject.GetBoundingBox
	// FBox GetBoundingBox();                                                                                                   // [0xc2fb3bc] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/AugmentedReality.TrackedGeometryGroup
/// Size: 0x0018 (0x000000 - 0x000018)
class FTrackedGeometryGroup : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class AARActor*)                           ARActor                                                     OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UARComponent*)                       ARComponent                                                 OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class UARTrackedGeometry*)                 TrackedGeometry                                             OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/AugmentedReality.ARSessionPayload
/// Size: 0x0018 (0x000000 - 0x000018)
class FARSessionPayload : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   ConfigFlags                                                 OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(class UMaterialInterface*)                 DefaultMeshMaterial                                         OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class UMaterialInterface*)                 DefaultWireframeMeshMaterial                                OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/AugmentedReality.ARPlaneUpdatePayload
/// Size: 0x00D0 (0x000000 - 0x0000D0)
class FARPlaneUpdatePayload : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FARSessionPayload)                         SessionPayload                                              OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FTransform)                                WorldTransform                                              OFFSET(getStruct<T>, {0x20, 96, 0, 0})
	SMember(FVector)                                   Center                                                      OFFSET(getStruct<T>, {0x80, 24, 0, 0})
	SMember(FVector)                                   Extents                                                     OFFSET(getStruct<T>, {0x98, 24, 0, 0})
	CMember(TArray<FVector>)                           BoundaryVertices                                            OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(EARObjectClassification)                   ObjectClassification                                        OFFSET(get<T>, {0xC0, 1, 0, 0})
};

/// Struct /Script/AugmentedReality.ARPointUpdatePayload
/// Size: 0x0001 (0x000000 - 0x000001)
class FARPointUpdatePayload : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/AugmentedReality.ARFaceUpdatePayload
/// Size: 0x0060 (0x000000 - 0x000060)
class FARFaceUpdatePayload : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FARSessionPayload)                         SessionPayload                                              OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   LeftEyePosition                                             OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FVector)                                   RightEyePosition                                            OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FVector)                                   LookAtTarget                                                OFFSET(getStruct<T>, {0x48, 24, 0, 0})
};

/// Struct /Script/AugmentedReality.ARImageUpdatePayload
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FARImageUpdatePayload : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FARSessionPayload)                         SessionPayload                                              OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FTransform)                                WorldTransform                                              OFFSET(getStruct<T>, {0x20, 96, 0, 0})
	CMember(class UARCandidateImage*)                  DetectedImage                                               OFFSET(get<T>, {0x80, 8, 0, 0})
	SMember(FVector2D)                                 EstimatedSize                                               OFFSET(getStruct<T>, {0x88, 16, 0, 0})
};

/// Struct /Script/AugmentedReality.ARQRCodeUpdatePayload
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FARQRCodeUpdatePayload : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FARSessionPayload)                         SessionPayload                                              OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FTransform)                                WorldTransform                                              OFFSET(getStruct<T>, {0x20, 96, 0, 0})
	SMember(FVector)                                   Extents                                                     OFFSET(getStruct<T>, {0x80, 24, 0, 0})
	SMember(FString)                                   QRCode                                                      OFFSET(getStruct<T>, {0x98, 16, 0, 0})
};

/// Struct /Script/AugmentedReality.ARPoseUpdatePayload
/// Size: 0x0070 (0x000000 - 0x000070)
class FARPoseUpdatePayload : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FTransform)                                WorldTransform                                              OFFSET(getStruct<T>, {0x0, 96, 0, 0})
	CMember(TArray<FTransform>)                        JointTransforms                                             OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Struct /Script/AugmentedReality.AREnvironmentProbeUpdatePayload
/// Size: 0x0060 (0x000000 - 0x000060)
class FAREnvironmentProbeUpdatePayload : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FTransform)                                WorldTransform                                              OFFSET(getStruct<T>, {0x0, 96, 0, 0})
};

/// Struct /Script/AugmentedReality.ARObjectUpdatePayload
/// Size: 0x0060 (0x000000 - 0x000060)
class FARObjectUpdatePayload : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FTransform)                                WorldTransform                                              OFFSET(getStruct<T>, {0x0, 96, 0, 0})
};

/// Struct /Script/AugmentedReality.ARMeshUpdatePayload
/// Size: 0x0090 (0x000000 - 0x000090)
class FARMeshUpdatePayload : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FARSessionPayload)                         SessionPayload                                              OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FTransform)                                WorldTransform                                              OFFSET(getStruct<T>, {0x20, 96, 0, 0})
	CMember(EARObjectClassification)                   ObjectClassification                                        OFFSET(get<T>, {0x80, 1, 0, 0})
};

/// Struct /Script/AugmentedReality.ARGeoAnchorUpdatePayload
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FARGeoAnchorUpdatePayload : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FARSessionPayload)                         SessionPayload                                              OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FTransform)                                WorldTransform                                              OFFSET(getStruct<T>, {0x20, 96, 0, 0})
	DMember(float)                                     Longitude                                                   OFFSET(get<float>, {0x80, 4, 0, 0})
	DMember(float)                                     Latitude                                                    OFFSET(get<float>, {0x84, 4, 0, 0})
	DMember(float)                                     AltitudeMeters                                              OFFSET(get<float>, {0x88, 4, 0, 0})
	CMember(EARAltitudeSource)                         AltitudeSource                                              OFFSET(get<T>, {0x8C, 1, 0, 0})
	SMember(FString)                                   AnchorName                                                  OFFSET(getStruct<T>, {0x90, 16, 0, 0})
};

/// Struct /Script/AugmentedReality.ARSharedWorldReplicationState
/// Size: 0x0008 (0x000000 - 0x000008)
class FARSharedWorldReplicationState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   PreviewImageOffset                                          OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   ARWorldOffset                                               OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/AugmentedReality.ARTraceResult
/// Size: 0x0090 (0x000000 - 0x000090)
class FARTraceResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	DMember(float)                                     DistanceFromCamera                                          OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(EARLineTraceChannels)                      TraceChannel                                                OFFSET(get<T>, {0x4, 1, 0, 0})
	SMember(FTransform)                                LocalTransform                                              OFFSET(getStruct<T>, {0x10, 96, 0, 0})
	CMember(class UARTrackedGeometry*)                 TrackedGeometry                                             OFFSET(get<T>, {0x70, 8, 0, 0})
};

/// Struct /Script/AugmentedReality.ARSessionStatus
/// Size: 0x0018 (0x000000 - 0x000018)
class FARSessionStatus : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   AdditionalInfo                                              OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(EARSessionStatus)                          Status                                                      OFFSET(get<T>, {0x10, 1, 0, 0})
};

/// Struct /Script/AugmentedReality.ARVideoFormat
/// Size: 0x000C (0x000000 - 0x00000C)
class FARVideoFormat : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(int32_t)                                   FPS                                                         OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Width                                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   Height                                                      OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/AugmentedReality.ARSkeletonDefinition
/// Size: 0x0028 (0x000000 - 0x000028)
class FARSkeletonDefinition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   NumJoints                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(TArray<FName>)                             JointNames                                                  OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<int32_t>)                           ParentIndices                                               OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/AugmentedReality.ARPose2D
/// Size: 0x0048 (0x000000 - 0x000048)
class FARPose2D : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FARSkeletonDefinition)                     SkeletonDefinition                                          OFFSET(getStruct<T>, {0x0, 40, 0, 0})
	CMember(TArray<FVector2D>)                         JointLocations                                              OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<bool>)                              IsJointTracked                                              OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/AugmentedReality.ARPose3D
/// Size: 0x0050 (0x000000 - 0x000050)
class FARPose3D : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FARSkeletonDefinition)                     SkeletonDefinition                                          OFFSET(getStruct<T>, {0x0, 40, 0, 0})
	CMember(TArray<FTransform>)                        JointTransforms                                             OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<bool>)                              IsJointTracked                                              OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(EARJointTransformSpace)                    JointTransformSpace                                         OFFSET(get<T>, {0x48, 1, 0, 0})
};

/// Struct /Script/AugmentedReality.ARCameraIntrinsics
/// Size: 0x0028 (0x000000 - 0x000028)
class FARCameraIntrinsics : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FIntPoint)                                 ImageResolution                                             OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FVector2D)                                 FocalLength                                                 OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FVector2D)                                 PrincipalPoint                                              OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Enum /Script/AugmentedReality.EARTrackingState
/// Size: 0x05
enum EARTrackingState : uint8_t
{
	EARTrackingState__Unknown                                                        = 0,
	EARTrackingState__Tracking                                                       = 1,
	EARTrackingState__NotTracking                                                    = 2,
	EARTrackingState__StoppedTracking                                                = 3,
	EARTrackingState__EARTrackingState_MAX                                           = 4
};

/// Enum /Script/AugmentedReality.EARSessionConfigFlags
/// Size: 0x07
enum EARSessionConfigFlags : uint8_t
{
	EARSessionConfigFlags__None                                                      = 0,
	EARSessionConfigFlags__GenerateMeshData                                          = 1,
	EARSessionConfigFlags__RenderMeshDataInWireframe                                 = 2,
	EARSessionConfigFlags__GenerateCollisionForMeshData                              = 4,
	EARSessionConfigFlags__GenerateNavMeshForMeshData                                = 8,
	EARSessionConfigFlags__UseMeshDataForOcclusion                                   = 16,
	EARSessionConfigFlags__EARSessionConfigFlags_MAX                                 = 17
};

/// Enum /Script/AugmentedReality.EPlaneComponentDebugMode
/// Size: 0x04
enum EPlaneComponentDebugMode : uint8_t
{
	EPlaneComponentDebugMode__None                                                   = 0,
	EPlaneComponentDebugMode__ShowNetworkRole                                        = 1,
	EPlaneComponentDebugMode__ShowClassification                                     = 2,
	EPlaneComponentDebugMode__EPlaneComponentDebugMode_MAX                           = 3
};

/// Enum /Script/AugmentedReality.EFaceComponentDebugMode
/// Size: 0x04
enum EFaceComponentDebugMode : uint8_t
{
	EFaceComponentDebugMode__None                                                    = 0,
	EFaceComponentDebugMode__ShowEyeVectors                                          = 1,
	EFaceComponentDebugMode__ShowFaceMesh                                            = 2,
	EFaceComponentDebugMode__EFaceComponentDebugMode_MAX                             = 3
};

/// Enum /Script/AugmentedReality.EARFaceTransformMixing
/// Size: 0x05
enum EARFaceTransformMixing : uint8_t
{
	EARFaceTransformMixing__ComponentOnly                                            = 0,
	EARFaceTransformMixing__ComponentLocationTrackedRotation                         = 1,
	EARFaceTransformMixing__ComponentWithTracked                                     = 2,
	EARFaceTransformMixing__TrackingOnly                                             = 3,
	EARFaceTransformMixing__EARFaceTransformMixing_MAX                               = 4
};

/// Enum /Script/AugmentedReality.EImageComponentDebugMode
/// Size: 0x03
enum EImageComponentDebugMode : uint8_t
{
	EImageComponentDebugMode__None                                                   = 0,
	EImageComponentDebugMode__ShowDetectedImage                                      = 1,
	EImageComponentDebugMode__EImageComponentDebugMode_MAX                           = 2
};

/// Enum /Script/AugmentedReality.EQRCodeComponentDebugMode
/// Size: 0x03
enum EQRCodeComponentDebugMode : uint8_t
{
	EQRCodeComponentDebugMode__None                                                  = 0,
	EQRCodeComponentDebugMode__ShowQRCode                                            = 1,
	EQRCodeComponentDebugMode__EQRCodeComponentDebugMode_MAX                         = 2
};

/// Enum /Script/AugmentedReality.EPoseComponentDebugMode
/// Size: 0x03
enum EPoseComponentDebugMode : uint8_t
{
	EPoseComponentDebugMode__None                                                    = 0,
	EPoseComponentDebugMode__ShowSkeleton                                            = 1,
	EPoseComponentDebugMode__EPoseComponentDebugMode_MAX                             = 2
};

/// Enum /Script/AugmentedReality.EGeoAnchorComponentDebugMode
/// Size: 0x03
enum EGeoAnchorComponentDebugMode : uint8_t
{
	EGeoAnchorComponentDebugMode__None                                               = 0,
	EGeoAnchorComponentDebugMode__ShowGeoData                                        = 1,
	EGeoAnchorComponentDebugMode__EGeoAnchorComponentDebugMode_MAX                   = 2
};

/// Enum /Script/AugmentedReality.EARServiceAvailability
/// Size: 0x08
enum EARServiceAvailability : uint8_t
{
	EARServiceAvailability__UnknownError                                             = 0,
	EARServiceAvailability__UnknownChecking                                          = 1,
	EARServiceAvailability__UnknownTimedOut                                          = 2,
	EARServiceAvailability__UnsupportedDeviceNotCapable                              = 3,
	EARServiceAvailability__SupportedNotInstalled                                    = 4,
	EARServiceAvailability__SupportedVersionTooOld                                   = 5,
	EARServiceAvailability__SupportedInstalled                                       = 6,
	EARServiceAvailability__EARServiceAvailability_MAX                               = 7
};

/// Enum /Script/AugmentedReality.EARServiceInstallRequestResult
/// Size: 0x05
enum EARServiceInstallRequestResult : uint8_t
{
	EARServiceInstallRequestResult__Installed                                        = 0,
	EARServiceInstallRequestResult__DeviceNotCompatible                              = 1,
	EARServiceInstallRequestResult__UserDeclinedInstallation                         = 2,
	EARServiceInstallRequestResult__FatalError                                       = 3,
	EARServiceInstallRequestResult__EARServiceInstallRequestResult_MAX               = 4
};

/// Enum /Script/AugmentedReality.EARServicePermissionRequestResult
/// Size: 0x03
enum EARServicePermissionRequestResult : uint8_t
{
	EARServicePermissionRequestResult__Granted                                       = 0,
	EARServicePermissionRequestResult__Denied                                        = 1,
	EARServicePermissionRequestResult__EARServicePermissionRequestResult_MAX         = 2
};

/// Enum /Script/AugmentedReality.EARGeoTrackingState
/// Size: 0x05
enum EARGeoTrackingState : uint8_t
{
	EARGeoTrackingState__Initializing                                                = 0,
	EARGeoTrackingState__Localized                                                   = 1,
	EARGeoTrackingState__Localizing                                                  = 2,
	EARGeoTrackingState__NotAvailable                                                = 3,
	EARGeoTrackingState__EARGeoTrackingState_MAX                                     = 4
};

/// Enum /Script/AugmentedReality.EARGeoTrackingStateReason
/// Size: 0x10
enum EARGeoTrackingStateReason : uint8_t
{
	EARGeoTrackingStateReason__None                                                  = 0,
	EARGeoTrackingStateReason__NotAvailableAtLocation                                = 1,
	EARGeoTrackingStateReason__NeedLocationPermissions                               = 2,
	EARGeoTrackingStateReason__DevicePointedTooLow                                   = 3,
	EARGeoTrackingStateReason__WorldTrackingUnstable                                 = 4,
	EARGeoTrackingStateReason__WaitingForLocation                                    = 5,
	EARGeoTrackingStateReason__GeoDataNotLoaded                                      = 6,
	EARGeoTrackingStateReason__VisualLocalizationFailed                              = 7,
	EARGeoTrackingStateReason__WaitingForAvailabilityCheck                           = 8,
	EARGeoTrackingStateReason__EARGeoTrackingStateReason_MAX                         = 9
};

/// Enum /Script/AugmentedReality.EARGeoTrackingAccuracy
/// Size: 0x05
enum EARGeoTrackingAccuracy : uint8_t
{
	EARGeoTrackingAccuracy__Undetermined                                             = 0,
	EARGeoTrackingAccuracy__Low                                                      = 1,
	EARGeoTrackingAccuracy__Medium                                                   = 2,
	EARGeoTrackingAccuracy__High                                                     = 3,
	EARGeoTrackingAccuracy__EARGeoTrackingAccuracy_MAX                               = 4
};

/// Enum /Script/AugmentedReality.EARWorldAlignment
/// Size: 0x04
enum EARWorldAlignment : uint8_t
{
	EARWorldAlignment__Gravity                                                       = 0,
	EARWorldAlignment__GravityAndHeading                                             = 1,
	EARWorldAlignment__Camera                                                        = 2,
	EARWorldAlignment__EARWorldAlignment_MAX                                         = 3
};

/// Enum /Script/AugmentedReality.EARSessionType
/// Size: 0x09
enum EARSessionType : uint8_t
{
	EARSessionType__None                                                             = 0,
	EARSessionType__Orientation                                                      = 1,
	EARSessionType__World                                                            = 2,
	EARSessionType__Face                                                             = 3,
	EARSessionType__Image                                                            = 4,
	EARSessionType__ObjectScanning                                                   = 5,
	EARSessionType__PoseTracking                                                     = 6,
	EARSessionType__GeoTracking                                                      = 7,
	EARSessionType__EARSessionType_MAX                                               = 8
};

/// Enum /Script/AugmentedReality.EARPlaneDetectionMode
/// Size: 0x04
enum EARPlaneDetectionMode : uint8_t
{
	EARPlaneDetectionMode__None                                                      = 0,
	EARPlaneDetectionMode__HorizontalPlaneDetection                                  = 1,
	EARPlaneDetectionMode__VerticalPlaneDetection                                    = 2,
	EARPlaneDetectionMode__EARPlaneDetectionMode_MAX                                 = 3
};

/// Enum /Script/AugmentedReality.EARLightEstimationMode
/// Size: 0x04
enum EARLightEstimationMode : uint8_t
{
	EARLightEstimationMode__None                                                     = 0,
	EARLightEstimationMode__AmbientLightEstimate                                     = 1,
	EARLightEstimationMode__DirectionalLightEstimate                                 = 2,
	EARLightEstimationMode__EARLightEstimationMode_MAX                               = 3
};

/// Enum /Script/AugmentedReality.EARFrameSyncMode
/// Size: 0x03
enum EARFrameSyncMode : uint8_t
{
	EARFrameSyncMode__SyncTickWithCameraImage                                        = 0,
	EARFrameSyncMode__SyncTickWithoutCameraImage                                     = 1,
	EARFrameSyncMode__EARFrameSyncMode_MAX                                           = 2
};

/// Enum /Script/AugmentedReality.EAREnvironmentCaptureProbeType
/// Size: 0x04
enum EAREnvironmentCaptureProbeType : uint8_t
{
	EAREnvironmentCaptureProbeType__None                                             = 0,
	EAREnvironmentCaptureProbeType__Manual                                           = 1,
	EAREnvironmentCaptureProbeType__Automatic                                        = 2,
	EAREnvironmentCaptureProbeType__EAREnvironmentCaptureProbeType_MAX               = 3
};

/// Enum /Script/AugmentedReality.EARFaceTrackingUpdate
/// Size: 0x03
enum EARFaceTrackingUpdate : uint8_t
{
	EARFaceTrackingUpdate__CurvesAndGeo                                              = 0,
	EARFaceTrackingUpdate__CurvesOnly                                                = 1,
	EARFaceTrackingUpdate__EARFaceTrackingUpdate_MAX                                 = 2
};

/// Enum /Script/AugmentedReality.EARSessionTrackingFeature
/// Size: 0x07
enum EARSessionTrackingFeature : uint8_t
{
	EARSessionTrackingFeature__None                                                  = 0,
	EARSessionTrackingFeature__PoseDetection2D                                       = 1,
	EARSessionTrackingFeature__PersonSegmentation                                    = 2,
	EARSessionTrackingFeature__PersonSegmentationWithDepth                           = 3,
	EARSessionTrackingFeature__SceneDepth                                            = 4,
	EARSessionTrackingFeature__SmoothedSceneDepth                                    = 5,
	EARSessionTrackingFeature__EARSessionTrackingFeature_MAX                         = 6
};

/// Enum /Script/AugmentedReality.EARSceneReconstruction
/// Size: 0x04
enum EARSceneReconstruction : uint8_t
{
	EARSceneReconstruction__None                                                     = 0,
	EARSceneReconstruction__MeshOnly                                                 = 1,
	EARSceneReconstruction__MeshWithClassification                                   = 2,
	EARSceneReconstruction__EARSceneReconstruction_MAX                               = 3
};

/// Enum /Script/AugmentedReality.EARTextureType
/// Size: 0x09
enum EARTextureType : uint8_t
{
	EARTextureType__Unknown                                                          = 0,
	EARTextureType__CameraImage                                                      = 1,
	EARTextureType__CameraDepth                                                      = 2,
	EARTextureType__EnvironmentCapture                                               = 3,
	EARTextureType__PersonSegmentationImage                                          = 4,
	EARTextureType__PersonSegmentationDepth                                          = 5,
	EARTextureType__SceneDepthMap                                                    = 6,
	EARTextureType__SceneDepthConfidenceMap                                          = 7,
	EARTextureType__EARTextureType_MAX                                               = 8
};

/// Enum /Script/AugmentedReality.EARDepthQuality
/// Size: 0x04
enum EARDepthQuality : uint8_t
{
	EARDepthQuality__Unkown                                                          = 0,
	EARDepthQuality__Low                                                             = 1,
	EARDepthQuality__High                                                            = 2,
	EARDepthQuality__EARDepthQuality_MAX                                             = 3
};

/// Enum /Script/AugmentedReality.EARDepthAccuracy
/// Size: 0x04
enum EARDepthAccuracy : uint8_t
{
	EARDepthAccuracy__Unkown                                                         = 0,
	EARDepthAccuracy__Approximate                                                    = 1,
	EARDepthAccuracy__Accurate                                                       = 2,
	EARDepthAccuracy__EARDepthAccuracy_MAX                                           = 3
};

/// Enum /Script/AugmentedReality.EARFaceTrackingDirection
/// Size: 0x03
enum EARFaceTrackingDirection : uint8_t
{
	EARFaceTrackingDirection__FaceRelative                                           = 0,
	EARFaceTrackingDirection__FaceMirrored                                           = 1,
	EARFaceTrackingDirection__EARFaceTrackingDirection_MAX                           = 2
};

/// Enum /Script/AugmentedReality.EARFaceBlendShape
/// Size: 0x62
enum EARFaceBlendShape : uint8_t
{
	EARFaceBlendShape__EyeBlinkLeft                                                  = 0,
	EARFaceBlendShape__EyeLookDownLeft                                               = 1,
	EARFaceBlendShape__EyeLookInLeft                                                 = 2,
	EARFaceBlendShape__EyeLookOutLeft                                                = 3,
	EARFaceBlendShape__EyeLookUpLeft                                                 = 4,
	EARFaceBlendShape__EyeSquintLeft                                                 = 5,
	EARFaceBlendShape__EyeWideLeft                                                   = 6,
	EARFaceBlendShape__EyeBlinkRight                                                 = 7,
	EARFaceBlendShape__EyeLookDownRight                                              = 8,
	EARFaceBlendShape__EyeLookInRight                                                = 9,
	EARFaceBlendShape__EyeLookOutRight                                               = 10,
	EARFaceBlendShape__EyeLookUpRight                                                = 11,
	EARFaceBlendShape__EyeSquintRight                                                = 12,
	EARFaceBlendShape__EyeWideRight                                                  = 13,
	EARFaceBlendShape__JawForward                                                    = 14,
	EARFaceBlendShape__JawLeft                                                       = 15,
	EARFaceBlendShape__JawRight                                                      = 16,
	EARFaceBlendShape__JawOpen                                                       = 17,
	EARFaceBlendShape__MouthClose                                                    = 18,
	EARFaceBlendShape__MouthFunnel                                                   = 19,
	EARFaceBlendShape__MouthPucker                                                   = 20,
	EARFaceBlendShape__MouthLeft                                                     = 21,
	EARFaceBlendShape__MouthRight                                                    = 22,
	EARFaceBlendShape__MouthSmileLeft                                                = 23,
	EARFaceBlendShape__MouthSmileRight                                               = 24,
	EARFaceBlendShape__MouthFrownLeft                                                = 25,
	EARFaceBlendShape__MouthFrownRight                                               = 26,
	EARFaceBlendShape__MouthDimpleLeft                                               = 27,
	EARFaceBlendShape__MouthDimpleRight                                              = 28,
	EARFaceBlendShape__MouthStretchLeft                                              = 29,
	EARFaceBlendShape__MouthStretchRight                                             = 30,
	EARFaceBlendShape__MouthRollLower                                                = 31,
	EARFaceBlendShape__MouthRollUpper                                                = 32,
	EARFaceBlendShape__MouthShrugLower                                               = 33,
	EARFaceBlendShape__MouthShrugUpper                                               = 34,
	EARFaceBlendShape__MouthPressLeft                                                = 35,
	EARFaceBlendShape__MouthPressRight                                               = 36,
	EARFaceBlendShape__MouthLowerDownLeft                                            = 37,
	EARFaceBlendShape__MouthLowerDownRight                                           = 38,
	EARFaceBlendShape__MouthUpperUpLeft                                              = 39,
	EARFaceBlendShape__MouthUpperUpRight                                             = 40,
	EARFaceBlendShape__BrowDownLeft                                                  = 41,
	EARFaceBlendShape__BrowDownRight                                                 = 42,
	EARFaceBlendShape__BrowInnerUp                                                   = 43,
	EARFaceBlendShape__BrowOuterUpLeft                                               = 44,
	EARFaceBlendShape__BrowOuterUpRight                                              = 45,
	EARFaceBlendShape__CheekPuff                                                     = 46,
	EARFaceBlendShape__CheekSquintLeft                                               = 47,
	EARFaceBlendShape__CheekSquintRight                                              = 48,
	EARFaceBlendShape__NoseSneerLeft                                                 = 49,
	EARFaceBlendShape__NoseSneerRight                                                = 50,
	EARFaceBlendShape__TongueOut                                                     = 51,
	EARFaceBlendShape__HeadYaw                                                       = 52,
	EARFaceBlendShape__HeadPitch                                                     = 53,
	EARFaceBlendShape__HeadRoll                                                      = 54,
	EARFaceBlendShape__LeftEyeYaw                                                    = 55,
	EARFaceBlendShape__LeftEyePitch                                                  = 56,
	EARFaceBlendShape__LeftEyeRoll                                                   = 57,
	EARFaceBlendShape__RightEyeYaw                                                   = 58,
	EARFaceBlendShape__RightEyePitch                                                 = 59,
	EARFaceBlendShape__RightEyeRoll                                                  = 60,
	EARFaceBlendShape__MAX                                                           = 61
};

/// Enum /Script/AugmentedReality.EAREye
/// Size: 0x03
enum EAREye : uint8_t
{
	EAREye__LeftEye                                                                  = 0,
	EAREye__RightEye                                                                 = 1,
	EAREye__EAREye_MAX                                                               = 2
};

/// Enum /Script/AugmentedReality.EARCaptureType
/// Size: 0x06
enum EARCaptureType : uint8_t
{
	EARCaptureType__Camera                                                           = 0,
	EARCaptureType__QRCode                                                           = 1,
	EARCaptureType__SpatialMapping                                                   = 2,
	EARCaptureType__SceneUnderstanding                                               = 3,
	EARCaptureType__HandMesh                                                         = 4,
	EARCaptureType__EARCaptureType_MAX                                               = 5
};

/// Enum /Script/AugmentedReality.EARLineTraceChannels
/// Size: 0x06
enum EARLineTraceChannels : uint8_t
{
	EARLineTraceChannels__None                                                       = 0,
	EARLineTraceChannels__FeaturePoint                                               = 1,
	EARLineTraceChannels__GroundPlane                                                = 2,
	EARLineTraceChannels__PlaneUsingExtent                                           = 4,
	EARLineTraceChannels__PlaneUsingBoundaryPolygon                                  = 8,
	EARLineTraceChannels__EARLineTraceChannels_MAX                                   = 9
};

/// Enum /Script/AugmentedReality.EARTrackingQuality
/// Size: 0x04
enum EARTrackingQuality : uint8_t
{
	EARTrackingQuality__NotTracking                                                  = 0,
	EARTrackingQuality__OrientationOnly                                              = 1,
	EARTrackingQuality__OrientationAndPosition                                       = 2,
	EARTrackingQuality__EARTrackingQuality_MAX                                       = 3
};

/// Enum /Script/AugmentedReality.EARTrackingQualityReason
/// Size: 0x08
enum EARTrackingQualityReason : uint8_t
{
	EARTrackingQualityReason__None                                                   = 0,
	EARTrackingQualityReason__Initializing                                           = 1,
	EARTrackingQualityReason__Relocalizing                                           = 2,
	EARTrackingQualityReason__ExcessiveMotion                                        = 3,
	EARTrackingQualityReason__InsufficientFeatures                                   = 4,
	EARTrackingQualityReason__InsufficientLight                                      = 5,
	EARTrackingQualityReason__BadState                                               = 6,
	EARTrackingQualityReason__EARTrackingQualityReason_MAX                           = 7
};

/// Enum /Script/AugmentedReality.EARSessionStatus
/// Size: 0x08
enum EARSessionStatus : uint8_t
{
	EARSessionStatus__NotStarted                                                     = 0,
	EARSessionStatus__Running                                                        = 1,
	EARSessionStatus__NotSupported                                                   = 2,
	EARSessionStatus__FatalError                                                     = 3,
	EARSessionStatus__PermissionNotGranted                                           = 4,
	EARSessionStatus__UnsupportedConfiguration                                       = 5,
	EARSessionStatus__Other                                                          = 6,
	EARSessionStatus__EARSessionStatus_MAX                                           = 7
};

/// Enum /Script/AugmentedReality.EARWorldMappingState
/// Size: 0x05
enum EARWorldMappingState : uint8_t
{
	EARWorldMappingState__NotAvailable                                               = 0,
	EARWorldMappingState__StillMappingNotRelocalizable                               = 1,
	EARWorldMappingState__StillMappingRelocalizable                                  = 2,
	EARWorldMappingState__Mapped                                                     = 3,
	EARWorldMappingState__EARWorldMappingState_MAX                                   = 4
};

/// Enum /Script/AugmentedReality.EARPlaneOrientation
/// Size: 0x04
enum EARPlaneOrientation : uint8_t
{
	EARPlaneOrientation__Horizontal                                                  = 0,
	EARPlaneOrientation__Vertical                                                    = 1,
	EARPlaneOrientation__Diagonal                                                    = 2,
	EARPlaneOrientation__EARPlaneOrientation_MAX                                     = 3
};

/// Enum /Script/AugmentedReality.EARObjectClassification
/// Size: 0x15
enum EARObjectClassification : uint8_t
{
	EARObjectClassification__NotApplicable                                           = 0,
	EARObjectClassification__Unknown                                                 = 1,
	EARObjectClassification__Wall                                                    = 2,
	EARObjectClassification__Ceiling                                                 = 3,
	EARObjectClassification__Floor                                                   = 4,
	EARObjectClassification__Table                                                   = 5,
	EARObjectClassification__Seat                                                    = 6,
	EARObjectClassification__Face                                                    = 7,
	EARObjectClassification__Image                                                   = 8,
	EARObjectClassification__World                                                   = 9,
	EARObjectClassification__SceneObject                                             = 10,
	EARObjectClassification__HandMesh                                                = 11,
	EARObjectClassification__Door                                                    = 12,
	EARObjectClassification__Window                                                  = 13,
	EARObjectClassification__EARObjectClassification_MAX                             = 14
};

/// Enum /Script/AugmentedReality.EARSpatialMeshUsageFlags
/// Size: 0x04
enum EARSpatialMeshUsageFlags : uint8_t
{
	EARSpatialMeshUsageFlags__NotApplicable                                          = 0,
	EARSpatialMeshUsageFlags__Visible                                                = 1,
	EARSpatialMeshUsageFlags__Collision                                              = 2,
	EARSpatialMeshUsageFlags__EARSpatialMeshUsageFlags_MAX                           = 3
};

/// Enum /Script/AugmentedReality.EARJointTransformSpace
/// Size: 0x03
enum EARJointTransformSpace : uint8_t
{
	EARJointTransformSpace__Model                                                    = 0,
	EARJointTransformSpace__ParentJoint                                              = 1,
	EARJointTransformSpace__EARJointTransformSpace_MAX                               = 2
};

/// Enum /Script/AugmentedReality.EARAltitudeSource
/// Size: 0x05
enum EARAltitudeSource : uint8_t
{
	EARAltitudeSource__Precise                                                       = 0,
	EARAltitudeSource__Coarse                                                        = 1,
	EARAltitudeSource__UserDefined                                                   = 2,
	EARAltitudeSource__Unknown                                                       = 3,
	EARAltitudeSource__EARAltitudeSource_MAX                                         = 4
};

/// Enum /Script/AugmentedReality.EARCandidateImageOrientation
/// Size: 0x03
enum EARCandidateImageOrientation : uint8_t
{
	EARCandidateImageOrientation__Landscape                                          = 0,
	EARCandidateImageOrientation__Portrait                                           = 1,
	EARCandidateImageOrientation__EARCandidateImageOrientation_MAX                   = 2
};

