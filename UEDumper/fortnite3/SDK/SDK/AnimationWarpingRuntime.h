
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AnimGraphRuntime
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/AnimationWarpingRuntime.EFootPlacementLockType
/// Size: 0x05
enum class EFootPlacementLockType : uint8_t
{
	EFootPlacementLockType__Unlocked                                                 = 0,
	EFootPlacementLockType__PivotAroundBall                                          = 1,
	EFootPlacementLockType__PivotAroundAnkle                                         = 2,
	EFootPlacementLockType__LockRotation                                             = 3,
	EFootPlacementLockType__EFootPlacementLockType_MAX                               = 4
};

/// Enum /Script/AnimationWarpingRuntime.EPelvisHeightMode
/// Size: 0x04
enum class EPelvisHeightMode : uint8_t
{
	EPelvisHeightMode__AllLegs                                                       = 0,
	EPelvisHeightMode__AllPlantedFeet                                                = 1,
	EPelvisHeightMode__FrontPlantedFeetUphill_FrontFeetDownhill                      = 2,
	EPelvisHeightMode__EPelvisHeightMode_MAX                                         = 3
};

/// Enum /Script/AnimationWarpingRuntime.EActorMovementCompensationMode
/// Size: 0x04
enum class EActorMovementCompensationMode : uint8_t
{
	EActorMovementCompensationMode__ComponentSpace                                   = 0,
	EActorMovementCompensationMode__WorldSpace                                       = 1,
	EActorMovementCompensationMode__SuddenMotionOnly                                 = 2,
	EActorMovementCompensationMode__EActorMovementCompensationMode_MAX               = 3
};

/// Enum /Script/AnimationWarpingRuntime.EOffsetRootBoneMode
/// Size: 0x05
enum class EOffsetRootBoneMode : uint8_t
{
	EOffsetRootBoneMode__Accumulate                                                  = 0,
	EOffsetRootBoneMode__Interpolate                                                 = 1,
	EOffsetRootBoneMode__Hold                                                        = 2,
	EOffsetRootBoneMode__Release                                                     = 3,
	EOffsetRootBoneMode__EOffsetRootBoneMode_MAX                                     = 4
};

/// Struct /Script/AnimationWarpingRuntime.FootPlacementInterpolationSettings
/// Size: 0x0024 (0x000000 - 0x000024)
struct FFootPlacementInterpolationSettings
{ 
	float                                              UnplantLinearStiffness;                                     // 0x0000   (0x0004)  
	float                                              UnplantLinearDamping;                                       // 0x0004   (0x0004)  
	float                                              UnplantAngularStiffness;                                    // 0x0008   (0x0004)  
	float                                              UnplantAngularDamping;                                      // 0x000C   (0x0004)  
	float                                              FloorLinearStiffness;                                       // 0x0010   (0x0004)  
	float                                              FloorLinearDamping;                                         // 0x0014   (0x0004)  
	float                                              FloorAngularStiffness;                                      // 0x0018   (0x0004)  
	float                                              FloorAngularDamping;                                        // 0x001C   (0x0004)  
	bool                                               bEnableFloorInterpolation;                                  // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0021   (0x0003)  MISSED
};

/// Struct /Script/AnimationWarpingRuntime.FootPlacementTraceSettings
/// Size: 0x001C (0x000000 - 0x00001C)
struct FFootPlacementTraceSettings
{ 
	float                                              StartOffset;                                                // 0x0000   (0x0004)  
	float                                              EndOffset;                                                  // 0x0004   (0x0004)  
	float                                              SweepRadius;                                                // 0x0008   (0x0004)  
	SDK_UNDEFINED(1,9352) /* TEnumAsByte<ETraceTypeQuery> */ __um(ComplexTraceChannel);                            // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	float                                              MaxGroundPenetration;                                       // 0x0010   (0x0004)  
	float                                              SimpleCollisionInfluence;                                   // 0x0014   (0x0004)  
	SDK_UNDEFINED(1,9353) /* TEnumAsByte<ETraceTypeQuery> */ __um(SimpleTraceChannel);                             // 0x0018   (0x0001)  
	bool                                               bEnabled;                                                   // 0x0019   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x001A   (0x0002)  MISSED
};

/// Struct /Script/AnimationWarpingRuntime.FootPlacementRootDefinition
/// Size: 0x0018 (0x000000 - 0x000018)
struct FFootPlacementRootDefinition
{ 
	FBoneReference                                     PelvisBone;                                                 // 0x0000   (0x000C)  
	FBoneReference                                     IKRootBone;                                                 // 0x000C   (0x000C)  
};

/// Struct /Script/AnimationWarpingRuntime.FootPlacementPelvisSettings
/// Size: 0x001C (0x000000 - 0x00001C)
struct FFootPlacementPelvisSettings
{ 
	float                                              MaxOffset;                                                  // 0x0000   (0x0004)  
	float                                              LinearStiffness;                                            // 0x0004   (0x0004)  
	float                                              LinearDamping;                                              // 0x0008   (0x0004)  
	float                                              HorizontalRebalancingWeight;                                // 0x000C   (0x0004)  
	float                                              MaxOffsetHorizontal;                                        // 0x0010   (0x0004)  
	float                                              HeelLiftRatio;                                              // 0x0014   (0x0004)  
	EPelvisHeightMode                                  PelvisHeightMode;                                           // 0x0018   (0x0001)  
	EActorMovementCompensationMode                     ActorMovementCompensationMode;                              // 0x0019   (0x0001)  
	bool                                               bEnableInterpolation;                                       // 0x001A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x001B   (0x0001)  MISSED
};

/// Struct /Script/AnimationWarpingRuntime.FootPlacemenLegDefinition
/// Size: 0x0030 (0x000000 - 0x000030)
struct FFootPlacemenLegDefinition
{ 
	FBoneReference                                     FKFootBone;                                                 // 0x0000   (0x000C)  
	FBoneReference                                     IKFootBone;                                                 // 0x000C   (0x000C)  
	FBoneReference                                     BallBone;                                                   // 0x0018   (0x000C)  
	int32_t                                            NumBonesInLimb;                                             // 0x0024   (0x0004)  
	FName                                              SpeedCurveName;                                             // 0x0028   (0x0004)  
	FName                                              DisableLockCurveName;                                       // 0x002C   (0x0004)  
};

/// Struct /Script/AnimationWarpingRuntime.FootPlacementPlantSettings
/// Size: 0x0034 (0x000000 - 0x000034)
struct FFootPlacementPlantSettings
{ 
	float                                              SpeedThreshold;                                             // 0x0000   (0x0004)  
	float                                              DistanceToGround;                                           // 0x0004   (0x0004)  
	EFootPlacementLockType                             LockType;                                                   // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              UnplantRadius;                                              // 0x000C   (0x0004)  
	float                                              ReplantRadiusRatio;                                         // 0x0010   (0x0004)  
	float                                              UnplantAngle;                                               // 0x0014   (0x0004)  
	float                                              ReplantAngleRatio;                                          // 0x0018   (0x0004)  
	float                                              MaxExtensionRatio;                                          // 0x001C   (0x0004)  
	float                                              MinExtensionRatio;                                          // 0x0020   (0x0004)  
	float                                              SeparatingDistance;                                         // 0x0024   (0x0004)  
	float                                              UnalignmentSpeedThreshold;                                  // 0x0028   (0x0004)  
	float                                              AnkleTwistReduction;                                        // 0x002C   (0x0004)  
	bool                                               bAdjustHeelBeforePlanting;                                  // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0031   (0x0003)  MISSED
};

/// Struct /Script/AnimationWarpingRuntime.AnimNode_FootPlacement
/// Size: 0x0338 (0x0000C8 - 0x000400)
struct FAnimNode_FootPlacement : FAnimNode_SkeletalControlBase
{ 
	EWarpingEvaluationMode                             PlantSpeedMode;                                             // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00C9   (0x0003)  MISSED
	FBoneReference                                     IKFootRootBone;                                             // 0x00CC   (0x000C)  
	FBoneReference                                     PelvisBone;                                                 // 0x00D8   (0x000C)  
	FFootPlacementPelvisSettings                       PelvisSettings;                                             // 0x00E4   (0x001C)  
	TArray<FFootPlacemenLegDefinition>                 LegDefinitions;                                             // 0x0100   (0x0010)  
	FFootPlacementPlantSettings                        PlantSettings;                                              // 0x0110   (0x0034)  
	FFootPlacementInterpolationSettings                InterpolationSettings;                                      // 0x0144   (0x0024)  
	FFootPlacementTraceSettings                        TraceSettings;                                              // 0x0168   (0x001C)  
	unsigned char                                      UnknownData01_6[0x27C];                                     // 0x0184   (0x027C)  MISSED
};

/// Struct /Script/AnimationWarpingRuntime.AnimNode_OffsetRootBone
/// Size: 0x00C8 (0x0000C8 - 0x000190)
struct FAnimNode_OffsetRootBone : FAnimNode_SkeletalControlBase
{ 
	unsigned char                                      UnknownData00_1[0xC8];                                      // 0x00C8   (0x00C8)  MISSED
};

/// Struct /Script/AnimationWarpingRuntime.AnimNode_OrientationWarping
/// Size: 0x00D8 (0x0000C8 - 0x0001A0)
struct FAnimNode_OrientationWarping : FAnimNode_SkeletalControlBase
{ 
	EWarpingEvaluationMode                             Mode;                                                       // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00C9   (0x0003)  MISSED
	float                                              OrientationAngle;                                           // 0x00CC   (0x0004)  
	float                                              LocomotionAngle;                                            // 0x00D0   (0x0004)  
	float                                              MinRootMotionSpeedThreshold;                                // 0x00D4   (0x0004)  
	float                                              LocomotionAngleDeltaThreshold;                              // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00DC   (0x0004)  MISSED
	TArray<FBoneReference>                             SpineBones;                                                 // 0x00E0   (0x0010)  
	FBoneReference                                     IKFootRootBone;                                             // 0x00F0   (0x000C)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x00FC   (0x0004)  MISSED
	TArray<FBoneReference>                             IKFootBones;                                                // 0x0100   (0x0010)  
	SDK_UNDEFINED(1,9354) /* TEnumAsByte<EAxis> */     __um(RotationAxis);                                         // 0x0110   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0111   (0x0003)  MISSED
	float                                              DistributedBoneOrientationAlpha;                            // 0x0114   (0x0004)  
	float                                              RotationInterpSpeed;                                        // 0x0118   (0x0004)  
	float                                              MaxCorrectionDegrees;                                       // 0x011C   (0x0004)  
	float                                              MaxRootMotionDeltaToCompensateDegrees;                      // 0x0120   (0x0004)  
	bool                                               bCounterCompenstateInterpolationByRootMotion;               // 0x0124   (0x0001)  
	bool                                               bScaleByGlobalBlendWeight;                                  // 0x0125   (0x0001)  
	bool                                               bUseManualRootMotionVelocity;                               // 0x0126   (0x0001)  
	unsigned char                                      UnknownData04_5[0x1];                                       // 0x0127   (0x0001)  MISSED
	FVector                                            ManualRootMotionVelocity;                                   // 0x0128   (0x0018)  
	unsigned char                                      UnknownData05_6[0x60];                                      // 0x0140   (0x0060)  MISSED
};

/// Struct /Script/AnimationWarpingRuntime.SlopeWarpingFootDefinition
/// Size: 0x0020 (0x000000 - 0x000020)
struct FSlopeWarpingFootDefinition
{ 
	FBoneReference                                     IKFootBone;                                                 // 0x0000   (0x000C)  
	FBoneReference                                     FKFootBone;                                                 // 0x000C   (0x000C)  
	int32_t                                            NumBonesInLimb;                                             // 0x0018   (0x0004)  
	float                                              FootSize;                                                   // 0x001C   (0x0004)  
};

/// Struct /Script/AnimationWarpingRuntime.SlopeWarpingFootData
/// Size: 0x00B0 (0x000000 - 0x0000B0)
struct FSlopeWarpingFootData
{ 
	unsigned char                                      UnknownData00_2[0xB0];                                      // 0x0000   (0x00B0)  MISSED
};

/// Struct /Script/AnimationWarpingRuntime.AnimNode_SlopeWarping
/// Size: 0x0210 (0x0000C8 - 0x0002D8)
struct FAnimNode_SlopeWarping : FAnimNode_SkeletalControlBase
{ 
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x00C8   (0x0018)  MISSED
	FBoneReference                                     IKFootRootBone;                                             // 0x00E0   (0x000C)  
	FBoneReference                                     PelvisBone;                                                 // 0x00EC   (0x000C)  
	TArray<FSlopeWarpingFootDefinition>                FeetDefinitions;                                            // 0x00F8   (0x0010)  
	TArray<FSlopeWarpingFootData>                      FeetData;                                                   // 0x0108   (0x0010)  
	FVectorRK4SpringInterpolator                       PelvisOffsetInterpolator;                                   // 0x0118   (0x0008)  
	unsigned char                                      UnknownData01_5[0x58];                                      // 0x0120   (0x0058)  MISSED
	FVector                                            GravityDir;                                                 // 0x0178   (0x0018)  
	FVector                                            CustomFloorOffset;                                          // 0x0190   (0x0018)  
	float                                              CachedDeltaTime;                                            // 0x01A8   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x01AC   (0x0004)  MISSED
	FVector                                            TargetFloorNormalWorldSpace;                                // 0x01B0   (0x0018)  
	FVectorRK4SpringInterpolator                       FloorNormalInterpolator;                                    // 0x01C8   (0x0008)  
	unsigned char                                      UnknownData03_5[0x58];                                      // 0x01D0   (0x0058)  MISSED
	FVector                                            TargetFloorOffsetLocalSpace;                                // 0x0228   (0x0018)  
	FVectorRK4SpringInterpolator                       FloorOffsetInterpolator;                                    // 0x0240   (0x0008)  
	unsigned char                                      UnknownData04_5[0x58];                                      // 0x0248   (0x0058)  MISSED
	float                                              MaxStepHeight;                                              // 0x02A0   (0x0004)  
	bool                                               bKeepMeshInsideOfCapsule : 1;                               // 0x02A4:0 (0x0001)  
	bool                                               bPullPelvisDown : 1;                                        // 0x02A4:1 (0x0001)  
	bool                                               bUseCustomFloorOffset : 1;                                  // 0x02A4:2 (0x0001)  
	bool                                               bWasOnGround : 1;                                           // 0x02A4:3 (0x0001)  
	bool                                               bShowDebug : 1;                                             // 0x02A4:4 (0x0001)  
	bool                                               bFloorSmoothingInitialized : 1;                             // 0x02A4:5 (0x0001)  
	unsigned char                                      UnknownData05_4[0x3];                                       // 0x02A5   (0x0003)  MISSED
	FVector                                            ActorLocation;                                              // 0x02A8   (0x0018)  
	FVector                                            GravityDirCompSpace;                                        // 0x02C0   (0x0018)  
};

/// Struct /Script/AnimationWarpingRuntime.StrideWarpingFootDefinition
/// Size: 0x0024 (0x000000 - 0x000024)
struct FStrideWarpingFootDefinition
{ 
	FBoneReference                                     IKFootBone;                                                 // 0x0000   (0x000C)  
	FBoneReference                                     FKFootBone;                                                 // 0x000C   (0x000C)  
	FBoneReference                                     ThighBone;                                                  // 0x0018   (0x000C)  
};

/// Struct /Script/AnimationWarpingRuntime.AnimNode_StrideWarping
/// Size: 0x0178 (0x0000C8 - 0x000240)
struct FAnimNode_StrideWarping : FAnimNode_SkeletalControlBase
{ 
	EWarpingEvaluationMode                             Mode;                                                       // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00C9   (0x0007)  MISSED
	FVector                                            StrideDirection;                                            // 0x00D0   (0x0018)  
	float                                              StrideScale;                                                // 0x00E8   (0x0004)  
	float                                              LocomotionSpeed;                                            // 0x00EC   (0x0004)  
	float                                              MinRootMotionSpeedThreshold;                                // 0x00F0   (0x0004)  
	FBoneReference                                     PelvisBone;                                                 // 0x00F4   (0x000C)  
	FBoneReference                                     IKFootRootBone;                                             // 0x0100   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x010C   (0x0004)  MISSED
	TArray<FStrideWarpingFootDefinition>               FootDefinitions;                                            // 0x0110   (0x0010)  
	FInputClampConstants                               StrideScaleModifier;                                        // 0x0120   (0x0014)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0134   (0x0004)  MISSED
	FWarpingVectorValue                                FloorNormalDirection;                                       // 0x0138   (0x0020)  
	FWarpingVectorValue                                GravityDirection;                                           // 0x0158   (0x0020)  
	FIKFootPelvisPullDownSolver                        PelvisIKFootSolver;                                         // 0x0178   (0x0080)  
	bool                                               bOrientStrideDirectionUsingFloorNormal;                     // 0x01F8   (0x0001)  
	bool                                               bCompensateIKUsingFKThighRotation;                          // 0x01F9   (0x0001)  
	bool                                               bClampIKUsingFKLimits;                                      // 0x01FA   (0x0001)  
	bool                                               bDisableIfMissingRootMotion;                                // 0x01FB   (0x0001)  
	unsigned char                                      UnknownData03_6[0x44];                                      // 0x01FC   (0x0044)  MISSED
};

