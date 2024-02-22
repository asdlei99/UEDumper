
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
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
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x1BA0   (0x0008)  
	double                                             InteriorFOV;                                                // 0x1BA8   (0x0008)  
	double                                             CurrentFOV;                                                 // 0x1BB0   (0x0008)  
	double                                             ExteriorFOV;                                                // 0x1BB8   (0x0008)  
	double                                             InteriorCameraSpaceForwardDistance;                         // 0x1BC0   (0x0008)  
	double                                             ExteriorCameraSpaceForwardDistance;                         // 0x1BC8   (0x0008)  
	double                                             ExteriorCamZOffset;                                         // 0x1BD0   (0x0008)  
	double                                             InteriorCamZOffset;                                         // 0x1BD8   (0x0008)  
	bool                                               UseDebugWidget;                                             // 0x1BE0   (0x0001)  
	bool                                               DebugDraw;                                                  // 0x1BE1   (0x0001)  
	bool                                               VerticalProbeBlocked;                                       // 0x1BE2   (0x0001)  
	bool                                               bSpawnedDebugUI;                                            // 0x1BE3   (0x0001)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x1BE4   (0x0004)  MISSED
	double                                             FastVelocityThreshold;                                      // 0x1BE8   (0x0008)  
	double                                             MaxFOVAndDistanceInterpSpeed;                               // 0x1BF0   (0x0008)  
	bool                                               FrontaAngledlProbeBlocked;                                  // 0x1BF8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x1BF9   (0x0007)  MISSED
	double                                             MinFOVAndDistanceInterpSpeed;                               // 0x1C00   (0x0008)  
	float                                              VerticalHitDistance;                                        // 0x1C08   (0x0004)  
	float                                              ForwardAngledHitDistance;                                   // 0x1C0C   (0x0004)  
	double                                             VTVelocity;                                                 // 0x1C10   (0x0008)  
	class AActor*                                      View_Target;                                                // 0x1C18   (0x0008)  
	double                                             VelocityAddDistanceThreshold;                               // 0x1C20   (0x0008)  
	double                                             VelocityAddMaxDistance;                                     // 0x1C28   (0x0008)  
	double                                             VelocityAddMaxFOV;                                          // 0x1C30   (0x0008)  
	double                                             VelocityAddOffsetZ;                                         // 0x1C38   (0x0008)  
	int32_t                                            FrontalProbeCurTickNum;                                     // 0x1C40   (0x0004)  
	int32_t                                            VerticalProbeTickSkip;                                      // 0x1C44   (0x0004)  
	int32_t                                            VerticalProbeCurTickNum;                                    // 0x1C48   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x1C4C   (0x0004)  MISSED
	double                                             VerticalProbeLength;                                        // 0x1C50   (0x0008)  
	float                                              FrontalAngledProbeAngle;                                    // 0x1C58   (0x0004)  
	float                                              FrontalAngledProbeLength;                                   // 0x1C5C   (0x0004)  
	bool                                               PerformDropoffDetection;                                    // 0x1C60   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x1C61   (0x0003)  MISSED
	int32_t                                            FrontalProbeTickSkip;                                       // 0x1C64   (0x0004)  
	double                                             ForwardDepthProbeZOffset;                                   // 0x1C68   (0x0008)  
	float                                              ForwardDepthProbeXOffset;                                   // 0x1C70   (0x0004)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x1C74   (0x0004)  MISSED
	double                                             ForwardDepthProbeLength;                                    // 0x1C78   (0x0008)  
	double                                             ExteriorForwardErrorConstraint;                             // 0x1C80   (0x0008)  
	double                                             InteriorForwardErrorConstraint;                             // 0x1C88   (0x0008)  
	class UCameraDebugDisplay_C*                       DebugWidget;                                                // 0x1C90   (0x0008)  
	float                                              DropoffDepthDistance;                                       // 0x1C98   (0x0004)  
	unsigned char                                      UnknownData05_5[0x4];                                       // 0x1C9C   (0x0004)  MISSED
	SDK_UNDEFINED(16,12352) /* FString */              __um(FAProbeHitActor);                                      // 0x1CA0   (0x0010)  
	SDK_UNDEFINED(16,12353) /* FString */              __um(VertProbeHitActor);                                    // 0x1CB0   (0x0010)  
	double                                             VTVelocityDotWithCam;                                       // 0x1CC0   (0x0008)  
	FVector                                            VelocityDirection;                                          // 0x1CC8   (0x0018)  
	FName                                              Tag_IgnoredActors;                                          // 0x1CE0   (0x0004)  
	float                                              CameraPitch;                                                // 0x1CE4   (0x0004)  
	FFloatRange                                        PitchCameraForwardDistanceMultiplier;                       // 0x1CE8   (0x0010)  
	class UCurveFloat*                                 Curve_PitchDistanceMult;                                    // 0x1CF8   (0x0008)  
	double                                             GroundedZInterp;                                            // 0x1D00   (0x0008)  
	double                                             NonGroundedZInterp;                                         // 0x1D08   (0x0008)  
	double                                             CurGroundedBlendInterp;                                     // 0x1D10   (0x0008)  
	FVector                                            VTVelDir;                                                   // 0x1D18   (0x0018)  
	FVector                                            CurVelOffset;                                               // 0x1D30   (0x0018)  
	double                                             VelOffsetSpeed;                                             // 0x1D48   (0x0008)  
	double                                             MaxVelocityCamOffset;                                       // 0x1D50   (0x0008)  
	class UCurveFloat*                                 Curve_VelocityInterpSpeed;                                  // 0x1D58   (0x0008)  
	double                                             DotParallelThreshold;                                       // 0x1D60   (0x0008)  
	bool                                               IsTargetInConversation;                                     // 0x1D68   (0x0001)  
	unsigned char                                      UnknownData06_5[0x7];                                       // 0x1D69   (0x0007)  MISSED
	FVector                                            CurCamSpaceViewOffset;                                      // 0x1D70   (0x0018)  
	bool                                               IsTargetBuilding;                                           // 0x1D88   (0x0001)  
	unsigned char                                      UnknownData07_5[0x7];                                       // 0x1D89   (0x0007)  MISSED
	double                                             Building_Size_Max;                                          // 0x1D90   (0x0008)  
	double                                             BuildingPreviewSizeScalar;                                  // 0x1D98   (0x0008)  
	bool                                               UseVelocityViewTargetLeading;                               // 0x1DA0   (0x0001)  
	bool                                               IsTargetFalling;                                            // 0x1DA1   (0x0001)  
	bool                                               IsTargetAttackingMelee;                                     // 0x1DA2   (0x0001)  
	unsigned char                                      UnknownData08_5[0x5];                                       // 0x1DA3   (0x0005)  MISSED
	double                                             CurFollowBlendInterp;                                       // 0x1DA8   (0x0008)  
	double                                             NonAttackingFollowInterp;                                   // 0x1DB0   (0x0008)  
	double                                             AttackingFollowInterp;                                      // 0x1DB8   (0x0008)  
	FVector                                            ViewTargetBoxExtent;                                        // 0x1DC0   (0x0018)  
	FVector                                            ProbeCastOrigin;                                            // 0x1DD8   (0x0018)  
	double                                             NormalizedCameraPitch;                                      // 0x1DF0   (0x0008)  
	double                                             BuildingPreviewHeightAdditionalZoom;                        // 0x1DF8   (0x0008)  


	/// Functions
	// Function /Lime/Cameras/JunoCameraMode_OrbitCam.JunoCameraMode_OrbitCam_C.UpdateCameraBP
	// void UpdateCameraBP(class AActor* ViewTarget, float DeltaTime, FTViewTarget& OutVT);                                  // [0x3d1d968] Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Lime/Cameras/JunoCameraMode_OrbitCam.JunoCameraMode_OrbitCam_C.UpdateProbeChecks
	// void UpdateProbeChecks();                                                                                             // [0x3d1d968] Public|BlueprintCallable|BlueprintEvent 
	// Function /Lime/Cameras/JunoCameraMode_OrbitCam.JunoCameraMode_OrbitCam_C.UpdateViewTargetValues
	// void UpdateViewTargetValues(FTViewTarget& InViewTarget);                                                              // [0x3d1d968] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Lime/Cameras/JunoCameraMode_OrbitCam.JunoCameraMode_OrbitCam_C.CheckViewTargetTags
	// void CheckViewTargetTags();                                                                                           // [0x3d1d968] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Lime/Cameras/JunoCameraMode_OrbitCam.JunoCameraMode_OrbitCam_C.IsVTVelocityDotParallel
	// bool IsVTVelocityDotParallel();                                                                                       // [0x3d1d968] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Lime/Cameras/JunoCameraMode_OrbitCam.JunoCameraMode_OrbitCam_C.TryForwardAngleTrace
	// void TryForwardAngleTrace(FVector Start, FVector End);                                                                // [0x3d1d968] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Lime/Cameras/JunoCameraMode_OrbitCam.JunoCameraMode_OrbitCam_C.PerformLineTrace
	// void PerformLineTrace(FVector Start, FVector End, TArray<AActor*>& ActorsToIgnore, bool& SuccesfulHit, FHitResult& Result); // [0x3d1d968] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Lime/Cameras/JunoCameraMode_OrbitCam.JunoCameraMode_OrbitCam_C.TryVerticalTrace
	// void TryVerticalTrace(FVector Start, FVector End);                                                                    // [0x3d1d968] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Lime/Cameras/JunoCameraMode_OrbitCam.JunoCameraMode_OrbitCam_C.GetVelocityWeight
	// double GetVelocityWeight();                                                                                           // [0x3d1d968] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Lime/Cameras/JunoCameraMode_OrbitCam.JunoCameraMode_OrbitCam_C.GetVelocityDistanceAdd
	// void GetVelocityDistanceAdd(double& AdditionalDistanceToAdd);                                                         // [0x3d1d968] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Lime/Cameras/JunoCameraMode_OrbitCam.JunoCameraMode_OrbitCam_C.GetVerticalProbeWeight
	// void GetVerticalProbeWeight(double& Weight);                                                                          // [0x3d1d968] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Lime/Cameras/JunoCameraMode_OrbitCam.JunoCameraMode_OrbitCam_C.GetForwardAngledProbeWeight
	// void GetForwardAngledProbeWeight(double& Weight);                                                                     // [0x3d1d968] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Lime/Cameras/JunoCameraMode_OrbitCam.JunoCameraMode_OrbitCam_C.GetFOVAndDistanceInterpSpeed
	// void GetFOVAndDistanceInterpSpeed(double& InterpSpeed);                                                               // [0x3d1d968] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Lime/Cameras/JunoCameraMode_OrbitCam.JunoCameraMode_OrbitCam_C.GetDesiredForwardDistance
	// void GetDesiredForwardDistance(double& DesiredDistance);                                                              // [0x3d1d968] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Lime/Cameras/JunoCameraMode_OrbitCam.JunoCameraMode_OrbitCam_C.GetConfinedSpaceWeight
	// void GetConfinedSpaceWeight(double& Weight);                                                                          // [0x3d1d968] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Lime/Cameras/JunoCameraMode_OrbitCam.JunoCameraMode_OrbitCam_C.GetDesiredFOV
	// void GetDesiredFOV(double& DesiredFOV);                                                                               // [0x3d1d968] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Lime/Cameras/JunoCameraMode_OrbitCam.JunoCameraMode_OrbitCam_C.InitFromObject
	// void InitFromObject(class UObject* InitObject);                                                                       // [0x3d1d968] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Lime/Cameras/JunoCameraMode_OrbitCam.JunoCameraMode_OrbitCam_C.SpawnDebugWidget
	// void SpawnDebugWidget();                                                                                              // [0x3d1d968] BlueprintCallable|BlueprintEvent 
	// Function /Lime/Cameras/JunoCameraMode_OrbitCam.JunoCameraMode_OrbitCam_C.JunoCamDebug
	// void JunoCamDebug();                                                                                                  // [0x3d1d968] BlueprintCallable|BlueprintEvent 
	// Function /Lime/Cameras/JunoCameraMode_OrbitCam.JunoCameraMode_OrbitCam_C.OnBecomeActiveBP
	// void OnBecomeActiveBP(class AActor* ViewTarget);                                                                      // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Lime/Cameras/JunoCameraMode_OrbitCam.JunoCameraMode_OrbitCam_C.ExecuteUbergraph_JunoCameraMode_OrbitCam
	// void ExecuteUbergraph_JunoCameraMode_OrbitCam(int32_t EntryPoint);                                                    // [0x3d1d968] Final|HasDefaults    
};

/// Class /Lime/Cameras/CameraDebugDisplay.CameraDebugDisplay_C
/// Size: 0x0058 (0x0002C0 - 0x000318)
class UCameraDebugDisplay_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	class UCommonTextBlock*                            CamForwardText;                                             // 0x02C8   (0x0008)  
	class UCommonTextBlock*                            ConfinedSpaceText;                                          // 0x02D0   (0x0008)  
	class UCommonTextBlock*                            FAActor;                                                    // 0x02D8   (0x0008)  
	class UCommonTextBlock*                            FAText;                                                     // 0x02E0   (0x0008)  
	class UCommonTextBlock*                            FOVText;                                                    // 0x02E8   (0x0008)  
	class UCommonTextBlock*                            InteriorCheckText;                                          // 0x02F0   (0x0008)  
	class UCommonTextBlock*                            VActor;                                                     // 0x02F8   (0x0008)  
	class UCommonTextBlock*                            VertProbeText;                                              // 0x0300   (0x0008)  
	class UCommonTextBlock*                            ZOffsetText;                                                // 0x0308   (0x0008)  
	class UJunoCameraMode_OrbitCam_C*                  As_Juno_Camera_Mode_Orbit_Cam;                              // 0x0310   (0x0008)  


	/// Functions
	// Function /Lime/Cameras/CameraDebugDisplay.CameraDebugDisplay_C.InitFromObject
	// void InitFromObject(class UObject* InitObject);                                                                       // [0x3d1d968] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Lime/Cameras/CameraDebugDisplay.CameraDebugDisplay_C.Tick
	// void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                   // [0x3d1d968] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Lime/Cameras/CameraDebugDisplay.CameraDebugDisplay_C.ExecuteUbergraph_CameraDebugDisplay
	// void ExecuteUbergraph_CameraDebugDisplay(int32_t EntryPoint);                                                         // [0x3d1d968] Final|HasDefaults    
};

/// Class /Lime/Cameras/JunoCameraMode_Sprint.JunoCameraMode_Sprint_C
/// Size: 0x0000 (0x001E00 - 0x001E00)
class UJunoCameraMode_Sprint_C : public UJunoCameraMode_OrbitCam_C
{ 
public:
};

