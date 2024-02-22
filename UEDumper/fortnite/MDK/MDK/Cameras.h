
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: LimeNative
/// dependency: UMG

/// Class /Lime/Cameras/JunoCameraMode_OrbitCam.JunoCameraMode_OrbitCam_C
/// Size: 0x0260 (0x001BA0 - 0x001E00)
class UJunoCameraMode_OrbitCam_C : public ULimeCameraMode_OrbitCam
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7680;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x1BA0, 8, 0, 0})
	DMember(double)                                    InteriorFOV                                                 OFFSET(get<double>, {0x1BA8, 8, 0, 0})
	DMember(double)                                    CurrentFOV                                                  OFFSET(get<double>, {0x1BB0, 8, 0, 0})
	DMember(double)                                    ExteriorFOV                                                 OFFSET(get<double>, {0x1BB8, 8, 0, 0})
	DMember(double)                                    InteriorCameraSpaceForwardDistance                          OFFSET(get<double>, {0x1BC0, 8, 0, 0})
	DMember(double)                                    ExteriorCameraSpaceForwardDistance                          OFFSET(get<double>, {0x1BC8, 8, 0, 0})
	DMember(double)                                    ExteriorCamZOffset                                          OFFSET(get<double>, {0x1BD0, 8, 0, 0})
	DMember(double)                                    InteriorCamZOffset                                          OFFSET(get<double>, {0x1BD8, 8, 0, 0})
	DMember(bool)                                      UseDebugWidget                                              OFFSET(get<bool>, {0x1BE0, 1, 0, 0})
	DMember(bool)                                      DebugDraw                                                   OFFSET(get<bool>, {0x1BE1, 1, 0, 0})
	DMember(bool)                                      VerticalProbeBlocked                                        OFFSET(get<bool>, {0x1BE2, 1, 0, 0})
	DMember(bool)                                      bSpawnedDebugUI                                             OFFSET(get<bool>, {0x1BE3, 1, 0, 0})
	DMember(double)                                    FastVelocityThreshold                                       OFFSET(get<double>, {0x1BE8, 8, 0, 0})
	DMember(double)                                    MaxFOVAndDistanceInterpSpeed                                OFFSET(get<double>, {0x1BF0, 8, 0, 0})
	DMember(bool)                                      FrontaAngledlProbeBlocked                                   OFFSET(get<bool>, {0x1BF8, 1, 0, 0})
	DMember(double)                                    MinFOVAndDistanceInterpSpeed                                OFFSET(get<double>, {0x1C00, 8, 0, 0})
	DMember(float)                                     VerticalHitDistance                                         OFFSET(get<float>, {0x1C08, 4, 0, 0})
	DMember(float)                                     ForwardAngledHitDistance                                    OFFSET(get<float>, {0x1C0C, 4, 0, 0})
	DMember(double)                                    VTVelocity                                                  OFFSET(get<double>, {0x1C10, 8, 0, 0})
	CMember(class AActor*)                             View_Target                                                 OFFSET(get<T>, {0x1C18, 8, 0, 0})
	DMember(double)                                    VelocityAddDistanceThreshold                                OFFSET(get<double>, {0x1C20, 8, 0, 0})
	DMember(double)                                    VelocityAddMaxDistance                                      OFFSET(get<double>, {0x1C28, 8, 0, 0})
	DMember(double)                                    VelocityAddMaxFOV                                           OFFSET(get<double>, {0x1C30, 8, 0, 0})
	DMember(double)                                    VelocityAddOffsetZ                                          OFFSET(get<double>, {0x1C38, 8, 0, 0})
	DMember(int32_t)                                   FrontalProbeCurTickNum                                      OFFSET(get<int32_t>, {0x1C40, 4, 0, 0})
	DMember(int32_t)                                   VerticalProbeTickSkip                                       OFFSET(get<int32_t>, {0x1C44, 4, 0, 0})
	DMember(int32_t)                                   VerticalProbeCurTickNum                                     OFFSET(get<int32_t>, {0x1C48, 4, 0, 0})
	DMember(double)                                    VerticalProbeLength                                         OFFSET(get<double>, {0x1C50, 8, 0, 0})
	DMember(float)                                     FrontalAngledProbeAngle                                     OFFSET(get<float>, {0x1C58, 4, 0, 0})
	DMember(float)                                     FrontalAngledProbeLength                                    OFFSET(get<float>, {0x1C5C, 4, 0, 0})
	DMember(bool)                                      PerformDropoffDetection                                     OFFSET(get<bool>, {0x1C60, 1, 0, 0})
	DMember(int32_t)                                   FrontalProbeTickSkip                                        OFFSET(get<int32_t>, {0x1C64, 4, 0, 0})
	DMember(double)                                    ForwardDepthProbeZOffset                                    OFFSET(get<double>, {0x1C68, 8, 0, 0})
	DMember(float)                                     ForwardDepthProbeXOffset                                    OFFSET(get<float>, {0x1C70, 4, 0, 0})
	DMember(double)                                    ForwardDepthProbeLength                                     OFFSET(get<double>, {0x1C78, 8, 0, 0})
	DMember(double)                                    ExteriorForwardErrorConstraint                              OFFSET(get<double>, {0x1C80, 8, 0, 0})
	DMember(double)                                    InteriorForwardErrorConstraint                              OFFSET(get<double>, {0x1C88, 8, 0, 0})
	CMember(class UCameraDebugDisplay_C*)              DebugWidget                                                 OFFSET(get<T>, {0x1C90, 8, 0, 0})
	DMember(float)                                     DropoffDepthDistance                                        OFFSET(get<float>, {0x1C98, 4, 0, 0})
	SMember(FString)                                   FAProbeHitActor                                             OFFSET(getStruct<T>, {0x1CA0, 16, 0, 0})
	SMember(FString)                                   VertProbeHitActor                                           OFFSET(getStruct<T>, {0x1CB0, 16, 0, 0})
	DMember(double)                                    VTVelocityDotWithCam                                        OFFSET(get<double>, {0x1CC0, 8, 0, 0})
	SMember(FVector)                                   VelocityDirection                                           OFFSET(getStruct<T>, {0x1CC8, 24, 0, 0})
	SMember(FName)                                     Tag_IgnoredActors                                           OFFSET(getStruct<T>, {0x1CE0, 4, 0, 0})
	DMember(float)                                     CameraPitch                                                 OFFSET(get<float>, {0x1CE4, 4, 0, 0})
	SMember(FFloatRange)                               PitchCameraForwardDistanceMultiplier                        OFFSET(getStruct<T>, {0x1CE8, 16, 0, 0})
	CMember(class UCurveFloat*)                        Curve_PitchDistanceMult                                     OFFSET(get<T>, {0x1CF8, 8, 0, 0})
	DMember(double)                                    GroundedZInterp                                             OFFSET(get<double>, {0x1D00, 8, 0, 0})
	DMember(double)                                    NonGroundedZInterp                                          OFFSET(get<double>, {0x1D08, 8, 0, 0})
	DMember(double)                                    CurGroundedBlendInterp                                      OFFSET(get<double>, {0x1D10, 8, 0, 0})
	SMember(FVector)                                   VTVelDir                                                    OFFSET(getStruct<T>, {0x1D18, 24, 0, 0})
	SMember(FVector)                                   CurVelOffset                                                OFFSET(getStruct<T>, {0x1D30, 24, 0, 0})
	DMember(double)                                    VelOffsetSpeed                                              OFFSET(get<double>, {0x1D48, 8, 0, 0})
	DMember(double)                                    MaxVelocityCamOffset                                        OFFSET(get<double>, {0x1D50, 8, 0, 0})
	CMember(class UCurveFloat*)                        Curve_VelocityInterpSpeed                                   OFFSET(get<T>, {0x1D58, 8, 0, 0})
	DMember(double)                                    DotParallelThreshold                                        OFFSET(get<double>, {0x1D60, 8, 0, 0})
	DMember(bool)                                      IsTargetInConversation                                      OFFSET(get<bool>, {0x1D68, 1, 0, 0})
	SMember(FVector)                                   CurCamSpaceViewOffset                                       OFFSET(getStruct<T>, {0x1D70, 24, 0, 0})
	DMember(bool)                                      IsTargetBuilding                                            OFFSET(get<bool>, {0x1D88, 1, 0, 0})
	DMember(double)                                    Building_Size_Max                                           OFFSET(get<double>, {0x1D90, 8, 0, 0})
	DMember(double)                                    BuildingPreviewSizeScalar                                   OFFSET(get<double>, {0x1D98, 8, 0, 0})
	DMember(bool)                                      UseVelocityViewTargetLeading                                OFFSET(get<bool>, {0x1DA0, 1, 0, 0})
	DMember(bool)                                      IsTargetFalling                                             OFFSET(get<bool>, {0x1DA1, 1, 0, 0})
	DMember(bool)                                      IsTargetAttackingMelee                                      OFFSET(get<bool>, {0x1DA2, 1, 0, 0})
	DMember(double)                                    CurFollowBlendInterp                                        OFFSET(get<double>, {0x1DA8, 8, 0, 0})
	DMember(double)                                    NonAttackingFollowInterp                                    OFFSET(get<double>, {0x1DB0, 8, 0, 0})
	DMember(double)                                    AttackingFollowInterp                                       OFFSET(get<double>, {0x1DB8, 8, 0, 0})
	SMember(FVector)                                   ViewTargetBoxExtent                                         OFFSET(getStruct<T>, {0x1DC0, 24, 0, 0})
	SMember(FVector)                                   ProbeCastOrigin                                             OFFSET(getStruct<T>, {0x1DD8, 24, 0, 0})
	DMember(double)                                    NormalizedCameraPitch                                       OFFSET(get<double>, {0x1DF0, 8, 0, 0})
	DMember(double)                                    BuildingPreviewHeightAdditionalZoom                         OFFSET(get<double>, {0x1DF8, 8, 0, 0})


	/// Functions
	// Function /Lime/Cameras/JunoCameraMode_OrbitCam.JunoCameraMode_OrbitCam_C.UpdateCameraBP
	// void UpdateCameraBP(class AActor* ViewTarget, float DeltaTime, FTViewTarget& OutVT);                                     // [0x3d1d968] Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Lime/Cameras/JunoCameraMode_OrbitCam.JunoCameraMode_OrbitCam_C.UpdateProbeChecks
	// void UpdateProbeChecks();                                                                                                // [0x3d1d968] Public|BlueprintCallable|BlueprintEvent 
	// Function /Lime/Cameras/JunoCameraMode_OrbitCam.JunoCameraMode_OrbitCam_C.UpdateViewTargetValues
	// void UpdateViewTargetValues(FTViewTarget& InViewTarget);                                                                 // [0x3d1d968] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Lime/Cameras/JunoCameraMode_OrbitCam.JunoCameraMode_OrbitCam_C.CheckViewTargetTags
	// void CheckViewTargetTags();                                                                                              // [0x3d1d968] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Lime/Cameras/JunoCameraMode_OrbitCam.JunoCameraMode_OrbitCam_C.IsVTVelocityDotParallel
	// bool IsVTVelocityDotParallel();                                                                                          // [0x3d1d968] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Lime/Cameras/JunoCameraMode_OrbitCam.JunoCameraMode_OrbitCam_C.TryForwardAngleTrace
	// void TryForwardAngleTrace(FVector Start, FVector End);                                                                   // [0x3d1d968] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Lime/Cameras/JunoCameraMode_OrbitCam.JunoCameraMode_OrbitCam_C.PerformLineTrace
	// void PerformLineTrace(FVector Start, FVector End, TArray<AActor*>& ActorsToIgnore, bool& SuccesfulHit, FHitResult& Result); // [0x3d1d968] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Lime/Cameras/JunoCameraMode_OrbitCam.JunoCameraMode_OrbitCam_C.TryVerticalTrace
	// void TryVerticalTrace(FVector Start, FVector End);                                                                       // [0x3d1d968] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Lime/Cameras/JunoCameraMode_OrbitCam.JunoCameraMode_OrbitCam_C.GetVelocityWeight
	// double GetVelocityWeight();                                                                                              // [0x3d1d968] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Lime/Cameras/JunoCameraMode_OrbitCam.JunoCameraMode_OrbitCam_C.GetVelocityDistanceAdd
	// void GetVelocityDistanceAdd(double& AdditionalDistanceToAdd);                                                            // [0x3d1d968] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Lime/Cameras/JunoCameraMode_OrbitCam.JunoCameraMode_OrbitCam_C.GetVerticalProbeWeight
	// void GetVerticalProbeWeight(double& Weight);                                                                             // [0x3d1d968] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Lime/Cameras/JunoCameraMode_OrbitCam.JunoCameraMode_OrbitCam_C.GetForwardAngledProbeWeight
	// void GetForwardAngledProbeWeight(double& Weight);                                                                        // [0x3d1d968] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Lime/Cameras/JunoCameraMode_OrbitCam.JunoCameraMode_OrbitCam_C.GetFOVAndDistanceInterpSpeed
	// void GetFOVAndDistanceInterpSpeed(double& InterpSpeed);                                                                  // [0x3d1d968] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Lime/Cameras/JunoCameraMode_OrbitCam.JunoCameraMode_OrbitCam_C.GetDesiredForwardDistance
	// void GetDesiredForwardDistance(double& DesiredDistance);                                                                 // [0x3d1d968] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Lime/Cameras/JunoCameraMode_OrbitCam.JunoCameraMode_OrbitCam_C.GetConfinedSpaceWeight
	// void GetConfinedSpaceWeight(double& Weight);                                                                             // [0x3d1d968] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Lime/Cameras/JunoCameraMode_OrbitCam.JunoCameraMode_OrbitCam_C.GetDesiredFOV
	// void GetDesiredFOV(double& DesiredFOV);                                                                                  // [0x3d1d968] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Lime/Cameras/JunoCameraMode_OrbitCam.JunoCameraMode_OrbitCam_C.InitFromObject
	// void InitFromObject(class UObject* InitObject);                                                                          // [0x3d1d968] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Lime/Cameras/JunoCameraMode_OrbitCam.JunoCameraMode_OrbitCam_C.SpawnDebugWidget
	// void SpawnDebugWidget();                                                                                                 // [0x3d1d968] BlueprintCallable|BlueprintEvent 
	// Function /Lime/Cameras/JunoCameraMode_OrbitCam.JunoCameraMode_OrbitCam_C.JunoCamDebug
	// void JunoCamDebug();                                                                                                     // [0x3d1d968] BlueprintCallable|BlueprintEvent 
	// Function /Lime/Cameras/JunoCameraMode_OrbitCam.JunoCameraMode_OrbitCam_C.OnBecomeActiveBP
	// void OnBecomeActiveBP(class AActor* ViewTarget);                                                                         // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Lime/Cameras/JunoCameraMode_OrbitCam.JunoCameraMode_OrbitCam_C.ExecuteUbergraph_JunoCameraMode_OrbitCam
	// void ExecuteUbergraph_JunoCameraMode_OrbitCam(int32_t EntryPoint);                                                       // [0x3d1d968] Final|HasDefaults    
};

/// Class /Lime/Cameras/CameraDebugDisplay.CameraDebugDisplay_C
/// Size: 0x0058 (0x0002C0 - 0x000318)
class UCameraDebugDisplay_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2C0, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   CamForwardText                                              OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   ConfinedSpaceText                                           OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   FAActor                                                     OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   FAText                                                      OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   FOVText                                                     OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   InteriorCheckText                                           OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   VActor                                                      OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   VertProbeText                                               OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   ZOffsetText                                                 OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(class UJunoCameraMode_OrbitCam_C*)         As_Juno_Camera_Mode_Orbit_Cam                               OFFSET(get<T>, {0x310, 8, 0, 0})


	/// Functions
	// Function /Lime/Cameras/CameraDebugDisplay.CameraDebugDisplay_C.InitFromObject
	// void InitFromObject(class UObject* InitObject);                                                                          // [0x3d1d968] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Lime/Cameras/CameraDebugDisplay.CameraDebugDisplay_C.Tick
	// void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                      // [0x3d1d968] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Lime/Cameras/CameraDebugDisplay.CameraDebugDisplay_C.ExecuteUbergraph_CameraDebugDisplay
	// void ExecuteUbergraph_CameraDebugDisplay(int32_t EntryPoint);                                                            // [0x3d1d968] Final|HasDefaults    
};

/// Class /Lime/Cameras/JunoCameraMode_Sprint.JunoCameraMode_Sprint_C
/// Size: 0x0000 (0x001E00 - 0x001E00)
class UJunoCameraMode_Sprint_C : public UJunoCameraMode_OrbitCam_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7680;

public:
};

