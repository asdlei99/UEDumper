
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AnimGraphRuntime
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/PhysicsControl.PhysicsControlBPLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UPhysicsControlBPLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/PhysicsControl.PhysicsControlBPLibrary.GetControlNamesInSet
	// TArray<FName> GetControlNamesInSet(FRigidBodyWithControlReference& RigidBodyWithControl, FName SetName);                 // [0xb107990] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PhysicsControl.PhysicsControlBPLibrary.GetBodyModifierNamesInSet
	// TArray<FName> GetBodyModifierNamesInSet(FRigidBodyWithControlReference& RigidBodyWithControl, FName SetName);            // [0xb106a04] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PhysicsControl.PhysicsControlBPLibrary.ConvertToRigidBodyWithControlPure
	// void ConvertToRigidBodyWithControlPure(FAnimNodeReference& Node, FRigidBodyWithControlReference& RigidBodyWithControl, bool& Result); // [0xb101218] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PhysicsControl.PhysicsControlBPLibrary.ConvertToRigidBodyWithControl
	// FRigidBodyWithControlReference ConvertToRigidBodyWithControl(FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result); // [0xb1010ec] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlBPLibrary.BlendParameters
	// void BlendParameters(FPhysicsControlControlAndModifierParameters& InParametersA, FPhysicsControlControlAndModifierParameters& InParametersB, float InInterpolationWeight, FPhysicsControlControlAndModifierParameters& OutParameters); // [0xb100e88] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PhysicsControl.PhysicsControlBPLibrary.BlendModifierParametersThroughSet
	// void BlendModifierParametersThroughSet(FPhysicsControlControlAndModifierParameters& InParameters, FPhysicsControlNamedModifierParameters& InStartModifierParameters, FPhysicsControlNamedModifierParameters& InEndModifierParameters, TArray<FName>& ModifierNames, FPhysicsControlControlAndModifierParameters& OutParameters); // [0xb100c1c] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PhysicsControl.PhysicsControlBPLibrary.BlendControlParametersThroughSet
	// void BlendControlParametersThroughSet(FPhysicsControlControlAndModifierParameters& InParameters, FPhysicsControlNamedControlParameters& InStartControlParameters, FPhysicsControlNamedControlParameters& InEndControlParameters, TArray<FName>& ControlNames, FPhysicsControlControlAndModifierParameters& OutParameters); // [0xb1009c4] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PhysicsControl.PhysicsControlBPLibrary.AddMultipleModifierParameters
	// void AddMultipleModifierParameters(FPhysicsControlControlAndModifierParameters& InParameters, FPhysicsControlControlAndModifierParameters& OutParameters, TArray<FName>& Names, FPhysicsControlModifierSparseData& ModifierData); // [0xb1007c8] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PhysicsControl.PhysicsControlBPLibrary.AddMultipleControlParameters
	// void AddMultipleControlParameters(FPhysicsControlControlAndModifierParameters& InParameters, FPhysicsControlControlAndModifierParameters& OutParameters, TArray<FName>& Names, FPhysicsControlSparseData& ControlData); // [0xb1005d0] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PhysicsControl.PhysicsControlBPLibrary.AddModifierParameters
	// void AddModifierParameters(FPhysicsControlControlAndModifierParameters& InParameters, FPhysicsControlControlAndModifierParameters& OutParameters, FName Name, FPhysicsControlModifierSparseData& ModifierData); // [0xb100390] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PhysicsControl.PhysicsControlBPLibrary.AddControlParameters
	// void AddControlParameters(FPhysicsControlControlAndModifierParameters& InParameters, FPhysicsControlControlAndModifierParameters& OutParameters, FName Name, FPhysicsControlSparseData& ControlData); // [0xb0ffcec] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/PhysicsControl.PhysicsControlComponent
/// Size: 0x0050 (0x000290 - 0x0002E0)
class UPhysicsControlComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	DMember(float)                                     TeleportDistanceThreshold                                   OFFSET(get<float>, {0x290, 4, 0, 0})
	DMember(float)                                     TeleportRotationThreshold                                   OFFSET(get<float>, {0x294, 4, 0, 0})
	DMember(bool)                                      bShowDebugVisualization                                     OFFSET(get<bool>, {0x298, 1, 0, 0})
	DMember(float)                                     VisualizationSizeScale                                      OFFSET(get<float>, {0x29C, 4, 0, 0})
	DMember(bool)                                      bShowDebugControlList                                       OFFSET(get<bool>, {0x2A0, 1, 0, 0})
	SMember(FString)                                   DebugControlDetailFilter                                    OFFSET(getStruct<T>, {0x2A8, 16, 0, 0})
	DMember(bool)                                      bShowDebugBodyModifierList                                  OFFSET(get<bool>, {0x2B8, 1, 0, 0})
	SMember(FString)                                   DebugBodyModifierDetailFilter                               OFFSET(getStruct<T>, {0x2C0, 16, 0, 0})
	DMember(float)                                     VelocityPredictionTime                                      OFFSET(get<float>, {0x2D0, 4, 0, 0})
	DMember(int32_t)                                   MaxNumControlsOrModifiersPerName                            OFFSET(get<int32_t>, {0x2D4, 4, 0, 0})


	/// Functions
	// Function /Script/PhysicsControl.PhysicsControlComponent.UpdateTargetCaches
	// void UpdateTargetCaches(float DeltaTime);                                                                                // [0xb110264] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.UpdateControls
	// void UpdateControls(float DeltaTime);                                                                                    // [0xb1101e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlUseSkeletalAnimation
	// bool SetControlUseSkeletalAnimation(FName Name, bool bUseSkeletalAnimation, float SkeletalAnimationVelocityMultiplier);  // [0xb10fa24] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargetsInSet
	// void SetControlTargetsInSet(FName Set, FPhysicsControlTarget ControlTarget, bool bEnableControl);                        // [0xb10f788] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargets
	// void SetControlTargets(TArray<FName>& Names, FPhysicsControlTarget ControlTarget, bool bEnableControl);                  // [0xb10f4bc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargetPositionsInSet
	// void SetControlTargetPositionsInSet(FName SetName, FVector Position, float VelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // [0xb10f0b0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargetPositionsFromArray
	// bool SetControlTargetPositionsFromArray(TArray<FName>& Names, TArray<FVector>& Positions, float VelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // [0xb10ecf4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargetPositionsAndOrientationsInSet
	// void SetControlTargetPositionsAndOrientationsInSet(FName SetName, FVector Position, FRotator orientation, float VelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // [0xb10e7fc] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargetPositionsAndOrientationsFromArray
	// bool SetControlTargetPositionsAndOrientationsFromArray(TArray<FName>& Names, TArray<FVector>& Positions, TArray<FRotator>& Orientations, float VelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // [0xb10e3d4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargetPositionsAndOrientations
	// void SetControlTargetPositionsAndOrientations(TArray<FName>& Names, FVector Position, FRotator orientation, float VelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // [0xb10de9c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargetPositions
	// void SetControlTargetPositions(TArray<FName>& Names, FVector Position, float VelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // [0xb10da54] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargetPositionAndOrientation
	// bool SetControlTargetPositionAndOrientation(FName Name, FVector Position, FRotator orientation, float VelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // [0xb10d53c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargetPosition
	// bool SetControlTargetPosition(FName Name, FVector Position, float VelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // [0xb10d118] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargetPoses
	// bool SetControlTargetPoses(FName Name, FVector ParentPosition, FRotator ParentOrientation, FVector ChildPosition, FRotator ChildOrientation, float VelocityDeltaTime, bool bEnableControl); // [0xb10caf8] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargetOrientationsInSet
	// void SetControlTargetOrientationsInSet(FName SetName, FRotator orientation, float AngularVelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // [0xb10c6ec] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargetOrientationsFromArray
	// bool SetControlTargetOrientationsFromArray(TArray<FName>& Names, TArray<FRotator>& Orientations, float VelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // [0xb10c330] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargetOrientations
	// void SetControlTargetOrientations(TArray<FName>& Names, FRotator orientation, float AngularVelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // [0xb10bee8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargetOrientation
	// bool SetControlTargetOrientation(FName Name, FRotator orientation, float AngularVelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // [0xb10bac4] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTarget
	// bool SetControlTarget(FName Name, FPhysicsControlTarget ControlTarget, bool bEnableControl);                             // [0xb10b81c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlsUseSkeletalAnimation
	// void SetControlsUseSkeletalAnimation(TArray<FName>& Names, bool bUseSkeletalAnimation, float SkeletalAnimationVelocityMultiplier); // [0xb110038] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlsInSetUseSkeletalAnimation
	// void SetControlsInSetUseSkeletalAnimation(FName Set, bool bUseSkeletalAnimation, float SkeletalAnimationVelocityMultiplier); // [0xb10ff30] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlsInSetEnabled
	// void SetControlsInSetEnabled(FName Set, bool bEnable);                                                                   // [0xb10fe64] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlsInSetDisableCollision
	// void SetControlsInSetDisableCollision(FName Set, bool bDisableCollision);                                                // [0xb10fd98] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlsEnabled
	// void SetControlsEnabled(TArray<FName>& Names, bool bEnable);                                                             // [0xb10fc64] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlsDisableCollision
	// void SetControlsDisableCollision(TArray<FName>& Names, bool bDisableCollision);                                          // [0xb10fb30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlPoint
	// bool SetControlPoint(FName Name, FVector Position);                                                                      // [0xb10b698] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlParentsInSet
	// void SetControlParentsInSet(FName Set, class UMeshComponent* ParentMeshComponent, FName ParentBoneName);                 // [0xb10b590] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlParents
	// void SetControlParents(TArray<FName>& Names, class UMeshComponent* ParentMeshComponent, FName ParentBoneName);           // [0xb10b3e4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlParent
	// bool SetControlParent(FName Name, class UMeshComponent* ParentMeshComponent, FName ParentBoneName);                      // [0xb10b2ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlMultipliersInSet
	// void SetControlMultipliersInSet(FName Set, FPhysicsControlMultiplier ControlMultiplier, bool bEnableControl);            // [0xb10b050] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlMultipliers
	// void SetControlMultipliers(TArray<FName>& Names, FPhysicsControlMultiplier ControlMultiplier, bool bEnableControl);      // [0xb10ad88] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlMultiplier
	// bool SetControlMultiplier(FName Name, FPhysicsControlMultiplier ControlMultiplier, bool bEnableControl);                 // [0xb10aae0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlLinearData
	// bool SetControlLinearData(FName Name, float Strength, float DampingRatio, float ExtraDamping, float MaxForce, bool bEnableControl); // [0xb10a8ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlEnabled
	// bool SetControlEnabled(FName Name, bool bEnable);                                                                        // [0xb10a828] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlDisableCollision
	// bool SetControlDisableCollision(FName Name, bool bDisableCollision);                                                     // [0xb10a764] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlDatasInSet
	// void SetControlDatasInSet(FName Set, FPhysicsControlData ControlData);                                                   // [0xb10a5c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlDatas
	// void SetControlDatas(TArray<FName>& Names, FPhysicsControlData ControlData);                                             // [0xb10a400] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlData
	// bool SetControlData(FName Name, FPhysicsControlData ControlData);                                                        // [0xb10a260] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlAngularData
	// bool SetControlAngularData(FName Name, float Strength, float DampingRatio, float ExtraDamping, float MaxTorque, bool bEnableControl); // [0xb10a06c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetCachedBoneData
	// bool SetCachedBoneData(class USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName, FTransform& TM, FVector Velocity, FVector AngularVelocity); // [0xb109cf4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifierUseSkeletalAnimation
	// bool SetBodyModifierUseSkeletalAnimation(FName Name, bool bUseSkeletalAnimation);                                        // [0xb109020] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifierUpdateKinematicFromSimulation
	// bool SetBodyModifierUpdateKinematicFromSimulation(FName Name, bool bUpdateKinematicFromSimulation);                      // [0xb108f5c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifiersUseSkeletalAnimation
	// void SetBodyModifiersUseSkeletalAnimation(TArray<FName>& Names, bool bUseSkeletalAnimation);                             // [0xb109bc0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifiersUpdateKinematicFromSimulation
	// void SetBodyModifiersUpdateKinematicFromSimulation(TArray<FName>& Names, bool bUpdateKinematicFromSimulation);           // [0xb109a8c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifiersPhysicsBlendWeight
	// void SetBodyModifiersPhysicsBlendWeight(TArray<FName>& Names, float PhysicsBlendWeight);                                 // [0xb10995c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifiersMovementType
	// void SetBodyModifiersMovementType(TArray<FName>& Names, EPhysicsMovementType MovementType);                              // [0xb10982c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifiersInSetUseSkeletalAnimation
	// void SetBodyModifiersInSetUseSkeletalAnimation(FName Set, bool bUseSkeletalAnimation);                                   // [0xb109760] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifiersInSetUpdateKinematicFromSimulation
	// void SetBodyModifiersInSetUpdateKinematicFromSimulation(FName Set, bool bUpdateKinematicFromSimulation);                 // [0xb109694] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifiersInSetPhysicsBlendWeight
	// void SetBodyModifiersInSetPhysicsBlendWeight(FName Set, float PhysicsBlendWeight);                                       // [0xb1095bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifiersInSetMovementType
	// void SetBodyModifiersInSetMovementType(FName Set, EPhysicsMovementType MovementType);                                    // [0xb1094ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifiersInSetGravityMultiplier
	// void SetBodyModifiersInSetGravityMultiplier(FName Set, float GravityMultiplier);                                         // [0xb109414] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifiersInSetCollisionType
	// void SetBodyModifiersInSetCollisionType(FName Set, TEnumAsByte<ECollisionEnabled> CollisionType);                        // [0xb109344] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifiersGravityMultiplier
	// void SetBodyModifiersGravityMultiplier(TArray<FName>& Names, float GravityMultiplier);                                   // [0xb109214] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifiersCollisionType
	// void SetBodyModifiersCollisionType(TArray<FName>& Names, TEnumAsByte<ECollisionEnabled> CollisionType);                  // [0xb1090e4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifierPhysicsBlendWeight
	// bool SetBodyModifierPhysicsBlendWeight(FName Name, float PhysicsBlendWeight);                                            // [0xb108e9c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifierMovementType
	// bool SetBodyModifierMovementType(FName Name, EPhysicsMovementType MovementType);                                         // [0xb108ddc] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifierKinematicTarget
	// bool SetBodyModifierKinematicTarget(FName Name, FVector KinematicTargetPosition, FRotator KinematicTargetOrienation, bool bMakeKinematic); // [0xb108a8c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifierGravityMultiplier
	// bool SetBodyModifierGravityMultiplier(FName Name, float GravityMultiplier);                                              // [0xb1089cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifierCollisionType
	// bool SetBodyModifierCollisionType(FName Name, TEnumAsByte<ECollisionEnabled> CollisionType);                             // [0xb108908] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.ResetControlPoint
	// bool ResetControlPoint(FName Name);                                                                                      // [0xb108868] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.ResetBodyModifierToCachedBoneTransform
	// bool ResetBodyModifierToCachedBoneTransform(FName Name, EResetToCachedTargetBehavior Behavior);                          // [0xb1085a8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.ResetBodyModifiersToCachedBoneTransforms
	// void ResetBodyModifiersToCachedBoneTransforms(TArray<FName>& Names, EResetToCachedTargetBehavior Behavior);              // [0xb108738] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.ResetBodyModifiersInSetToCachedBoneTransforms
	// void ResetBodyModifiersInSetToCachedBoneTransforms(FName SetName, EResetToCachedTargetBehavior Behavior);                // [0xb108668] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetSetsContainingControl
	// TArray<FName> GetSetsContainingControl(FName Control);                                                                   // [0xb108504] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetSetsContainingBodyModifier
	// TArray<FName> GetSetsContainingBodyModifier(FName Control);                                                              // [0xb108460] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetLimbBonesFromSkeletalMesh
	// TMap<FName, FPhysicsControlLimbBones> GetLimbBonesFromSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent, TArray<FPhysicsControlLimbSetupData>& LimbSetupData); // [0xb107d08] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetControlTarget
	// bool GetControlTarget(FName Name, FPhysicsControlTarget& ControlTarget);                                                 // [0xb107bbc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetControlNamesInSet
	// TArray<FName> GetControlNamesInSet(FName Set);                                                                           // [0xb107b28] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetControlMultiplier
	// bool GetControlMultiplier(FName Name, FPhysicsControlMultiplier& ControlMultiplier);                                     // [0xb107850] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetControlEnabled
	// bool GetControlEnabled(FName Name);                                                                                      // [0xb1077b4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetControlData
	// bool GetControlData(FName Name, FPhysicsControlData& ControlData);                                                       // [0xb1076a4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetCachedBoneVelocity
	// FVector GetCachedBoneVelocity(class USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName);                      // [0xb107594] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetCachedBoneVelocities
	// TArray<FVector> GetCachedBoneVelocities(class USkeletalMeshComponent* SkeletalMeshComponent, TArray<FName>& BoneNames);  // [0xb107484] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetCachedBoneTransforms
	// TArray<FTransform> GetCachedBoneTransforms(class USkeletalMeshComponent* SkeletalMeshComponent, TArray<FName>& BoneNames); // [0xb107374] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetCachedBoneTransform
	// FTransform GetCachedBoneTransform(class USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName);                  // [0xb107254] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetCachedBonePositions
	// TArray<FVector> GetCachedBonePositions(class USkeletalMeshComponent* SkeletalMeshComponent, TArray<FName>& BoneNames);   // [0xb107144] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetCachedBonePosition
	// FVector GetCachedBonePosition(class USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName);                      // [0xb107034] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetCachedBoneOrientations
	// TArray<FRotator> GetCachedBoneOrientations(class USkeletalMeshComponent* SkeletalMeshComponent, TArray<FName>& BoneNames); // [0xb106f24] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetCachedBoneOrientation
	// FRotator GetCachedBoneOrientation(class USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName);                  // [0xb106e50] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetCachedBoneAngularVelocity
	// FVector GetCachedBoneAngularVelocity(class USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName);               // [0xb106d40] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetCachedBoneAngularVelocities
	// TArray<FVector> GetCachedBoneAngularVelocities(class USkeletalMeshComponent* SkeletalMeshComponent, TArray<FName>& BoneNames); // [0xb106c30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetBodyModifierNamesInSet
	// TArray<FName> GetBodyModifierNamesInSet(FName Set);                                                                      // [0xb106b9c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetAllControlNames
	// TArray<FName> GetAllControlNames();                                                                                      // [0xb1069b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetAllBodyModifierNames
	// TArray<FName> GetAllBodyModifierNames();                                                                                 // [0xb10695c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysicsControl.PhysicsControlComponent.DestroyControlsInSet
	// void DestroyControlsInSet(FName Set);                                                                                    // [0xb106884] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.DestroyControls
	// void DestroyControls(TArray<FName>& Names);                                                                              // [0xb1067e8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.DestroyControl
	// bool DestroyControl(FName Name);                                                                                         // [0xb106758] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.DestroyBodyModifiersInSet
	// void DestroyBodyModifiersInSet(FName Set);                                                                               // [0xb106680] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.DestroyBodyModifiers
	// void DestroyBodyModifiers(TArray<FName>& Names);                                                                         // [0xb1065e4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.DestroyBodyModifier
	// bool DestroyBodyModifier(FName Name);                                                                                    // [0xb106554] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.CreateNamedControl
	// bool CreateNamedControl(FName Name, class UMeshComponent* ParentMeshComponent, FName ParentBoneName, class UMeshComponent* ChildMeshComponent, FName ChildBoneName, FPhysicsControlData ControlData, FPhysicsControlTarget ControlTarget, FPhysicsControlSettings ControlSettings, FName Set); // [0xb105df0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.CreateNamedBodyModifier
	// bool CreateNamedBodyModifier(FName Name, class UMeshComponent* MeshComponent, FName BoneName, FName Set, EPhysicsMovementType MovementType, TEnumAsByte<ECollisionEnabled> CollisionType, float GravityMultiplier, float PhysicsBlendWeight, bool bUseSkeletalAnimation, bool bUpdateKinematicFromSimulation); // [0xb105b00] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.CreateControlsFromSkeletalMeshBelow
	// TArray<FName> CreateControlsFromSkeletalMeshBelow(class USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName, bool bIncludeSelf, EPhysicsControlType ControlType, FPhysicsControlData ControlData, FPhysicsControlSettings ControlSettings, FName Set); // [0xb1055d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.CreateControlsFromSkeletalMeshAndConstraintProfileBelow
	// TArray<FName> CreateControlsFromSkeletalMeshAndConstraintProfileBelow(class USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName, bool bIncludeSelf, FName ConstraintProfile, FName Set, bool bEnabled); // [0xb105368] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.CreateControlsFromSkeletalMeshAndConstraintProfile
	// TArray<FName> CreateControlsFromSkeletalMeshAndConstraintProfile(class USkeletalMeshComponent* SkeletalMeshComponent, TArray<FName>& BoneNames, FName ConstraintProfile, FName Set, bool bEnabled); // [0xb1050c4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.CreateControlsFromSkeletalMesh
	// TArray<FName> CreateControlsFromSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent, TArray<FName>& BoneNames, EPhysicsControlType ControlType, FPhysicsControlData ControlData, FPhysicsControlSettings ControlSettings, FName Set); // [0xb104c18] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.CreateControlsFromLimbBonesAndConstraintProfile
	// TMap<FName, FPhysicsControlNames> CreateControlsFromLimbBonesAndConstraintProfile(FPhysicsControlNames& AllControls, TMap<FName, FPhysicsControlLimbBones>& LimbBones, FName ConstraintProfile, bool bEnabled); // [0xb1048d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.CreateControlsFromLimbBones
	// TMap<FName, FPhysicsControlNames> CreateControlsFromLimbBones(FPhysicsControlNames& AllControls, TMap<FName, FPhysicsControlLimbBones>& LimbBones, EPhysicsControlType ControlType, FPhysicsControlData ControlData, FPhysicsControlSettings ControlSettings, class UMeshComponent* WorldComponent, FName WorldBoneName, FString NamePrefix); // [0xb103b20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.CreateControlsAndBodyModifiersFromLimbBones
	// void CreateControlsAndBodyModifiersFromLimbBones(FPhysicsControlNames& AllWorldSpaceControls, TMap<FName, FPhysicsControlNames>& LimbWorldSpaceControls, FPhysicsControlNames& AllParentSpaceControls, TMap<FName, FPhysicsControlNames>& LimbParentSpaceControls, FPhysicsControlNames& AllBodyModifiers, TMap<FName, FPhysicsControlNames>& LimbBodyModifiers, class USkeletalMeshComponent* SkeletalMeshComponent, TArray<FPhysicsControlLimbSetupData>& LimbSetupData, FPhysicsControlData WorldSpaceControlData, FPhysicsControlSettings WorldSpaceControlSettings, FPhysicsControlData ParentSpaceControlData, FPhysicsControlSettings ParentSpaceControlSettings, EPhysicsMovementType PhysicsMovementType, float GravityMultiplier, float PhysicsBlendWeight, class UMeshComponent* WorldComponent, FName WorldBoneName); // [0xb102740] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.CreateControl
	// FName CreateControl(class UMeshComponent* ParentMeshComponent, FName ParentBoneName, class UMeshComponent* ChildMeshComponent, FName ChildBoneName, FPhysicsControlData ControlData, FPhysicsControlTarget ControlTarget, FPhysicsControlSettings ControlSettings, FName Set, FString NamePrefix); // [0xb102080] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.CreateBodyModifiersFromSkeletalMeshBelow
	// TArray<FName> CreateBodyModifiersFromSkeletalMeshBelow(class USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName, bool bIncludeSelf, FName Set, EPhysicsMovementType MovementType, TEnumAsByte<ECollisionEnabled> CollisionType, float GravityMultiplier, float PhysicsBlendWeight, bool bUseSkeletalAnimation, bool bUpdateKinematicFromSimulation); // [0xb101d3c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.CreateBodyModifiersFromLimbBones
	// TMap<FName, FPhysicsControlNames> CreateBodyModifiersFromLimbBones(FPhysicsControlNames& AllBodyModifiers, TMap<FName, FPhysicsControlLimbBones>& LimbBones, EPhysicsMovementType MovementType, TEnumAsByte<ECollisionEnabled> CollisionType, float GravityMultiplier, float PhysicsBlendWeight, bool bUseSkeletalAnimation, bool bUpdateKinematicFromSimulation); // [0xb101648] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.CreateBodyModifier
	// FName CreateBodyModifier(class UMeshComponent* MeshComponent, FName BoneName, FName Set, EPhysicsMovementType MovementType, TEnumAsByte<ECollisionEnabled> CollisionType, float GravityMultiplier, float PhysicsBlendWeight, bool bUseSkeletalAnimation, bool bUpdateKinematicFromSimulation); // [0xb101390] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.AddControlToSet
	// void AddControlToSet(FPhysicsControlNames& NewSet, FName Control, FName Set);                                            // [0xb0fff2c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.AddControlsToSet
	// void AddControlsToSet(FPhysicsControlNames& NewSet, TArray<FName>& Controls, FName Set);                                 // [0xb100198] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.AddBodyModifierToSet
	// void AddBodyModifierToSet(FPhysicsControlNames& NewSet, FName BodyModifier, FName Set);                                  // [0xb0ff888] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.AddBodyModifiersToSet
	// void AddBodyModifiersToSet(FPhysicsControlNames& NewSet, TArray<FName>& BodyModifiers, FName Set);                       // [0xb0ffaf4] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/PhysicsControl.PhysicsControlProfileAsset
/// Size: 0x0030 (0x000028 - 0x000058)
class UPhysicsControlProfileAsset : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TWeakObjectPtr<USkeletalMesh*>)            PreviewSkeletalMesh                                         OFFSET(get<T>, {0x30, 32, 0, 0})
	DMember(float)                                     TestValue                                                   OFFSET(get<float>, {0x50, 4, 0, 0})


	/// Functions
	// Function /Script/PhysicsControl.PhysicsControlProfileAsset.Log
	// void Log();                                                                                                              // [0xb12bfc0] Final|Native|Public  
};

/// Class /Script/PhysicsControl.PhysicsControlInitializerComponent
/// Size: 0x0180 (0x000290 - 0x000410)
class UPhysicsControlInitializerComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1040;

public:
	SMember(FInitialCharacterControls)                 InitialCharacterControls                                    OFFSET(getStruct<T>, {0x290, 216, 0, 0})
	CMember(TMap<FName, FInitialPhysicsControl>)       InitialControls                                             OFFSET(get<T>, {0x368, 80, 0, 0})
	CMember(TMap<FName, FInitialBodyModifier>)         InitialBodyModifiers                                        OFFSET(get<T>, {0x3B8, 80, 0, 0})
	DMember(bool)                                      bCreateControlsAtBeginPlay                                  OFFSET(get<bool>, {0x408, 1, 0, 0})


	/// Functions
	// Function /Script/PhysicsControl.PhysicsControlInitializerComponent.CreateControls
	// void CreateControls(class UPhysicsControlComponent* PhysicsControlComponent);                                            // [0xb12bf20] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PhysicsControl.PhysicsControlActor
/// Size: 0x0010 (0x000290 - 0x0002A0)
class APhysicsControlActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	CMember(class UPhysicsControlComponent*)           ControlComponent                                            OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(class UPhysicsControlInitializerComponent*) ControlInitializerComponent                                OFFSET(get<T>, {0x298, 8, 0, 0})
};

/// Struct /Script/PhysicsControl.RigidBodyWithControlReference
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigidBodyWithControlReference : public FAnimNodeReference
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/PhysicsControl.PhysicsControlSetUpdate
/// Size: 0x0018 (0x000000 - 0x000018)
class FPhysicsControlSetUpdate : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     SetName                                                     OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<FName>)                             Names                                                       OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/PhysicsControl.PhysicsControlSetUpdates
/// Size: 0x0020 (0x000000 - 0x000020)
class FPhysicsControlSetUpdates : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FPhysicsControlSetUpdate>)          ControlSetUpdates                                           OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FPhysicsControlSetUpdate>)          ModifierSetUpdates                                          OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/PhysicsControl.PhysicsControlModifierSparseData
/// Size: 0x000C (0x000000 - 0x00000C)
class FPhysicsControlModifierSparseData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(EPhysicsMovementType)                      MovementType                                                OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     GravityMultiplier                                           OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      bEnableMovementType                                         OFFSET(get<bool>, {0x8, 1, 1, 0})
	DMember(bool)                                      bEnableGravityMultiplier                                    OFFSET(get<bool>, {0x8, 1, 1, 1})
};

/// Struct /Script/PhysicsControl.PhysicsControlModifierData
/// Size: 0x0008 (0x000000 - 0x000008)
class FPhysicsControlModifierData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(EPhysicsMovementType)                      MovementType                                                OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     GravityMultiplier                                           OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/PhysicsControl.PhysicsControlSparseData
/// Size: 0x002C (0x000000 - 0x00002C)
class FPhysicsControlSparseData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 44;

public:
	DMember(float)                                     LinearStrength                                              OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     LinearDampingRatio                                          OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     LinearExtraDamping                                          OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MaxForce                                                    OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     AngularStrength                                             OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     AngularDampingRatio                                         OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     AngularExtraDamping                                         OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     MaxTorque                                                   OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     LinearTargetVelocityMultiplier                              OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     AngularTargetVelocityMultiplier                             OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x28, 1, 1, 0})
	DMember(bool)                                      bEnableLinearStrength                                       OFFSET(get<bool>, {0x28, 1, 1, 1})
	DMember(bool)                                      bEnableLinearDampingRatio                                   OFFSET(get<bool>, {0x28, 1, 1, 2})
	DMember(bool)                                      bEnableLinearExtraDamping                                   OFFSET(get<bool>, {0x28, 1, 1, 3})
	DMember(bool)                                      bEnableMaxForce                                             OFFSET(get<bool>, {0x28, 1, 1, 4})
	DMember(bool)                                      bEnableAngularStrength                                      OFFSET(get<bool>, {0x28, 1, 1, 5})
	DMember(bool)                                      bEnableAngularDampingRatio                                  OFFSET(get<bool>, {0x28, 1, 1, 6})
	DMember(bool)                                      bEnableAngularExtraDamping                                  OFFSET(get<bool>, {0x28, 1, 1, 7})
	DMember(bool)                                      bEnableMaxTorque                                            OFFSET(get<bool>, {0x29, 1, 1, 0})
	DMember(bool)                                      bEnableLinearTargetVelocityMultiplier                       OFFSET(get<bool>, {0x29, 1, 1, 1})
	DMember(bool)                                      bEnableAngularTargetVelocityMultiplier                      OFFSET(get<bool>, {0x29, 1, 1, 2})
	DMember(bool)                                      bEnablebEnabled                                             OFFSET(get<bool>, {0x29, 1, 1, 3})
};

/// Struct /Script/PhysicsControl.PhysicsControlData
/// Size: 0x002C (0x000000 - 0x00002C)
class FPhysicsControlData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 44;

public:
	DMember(float)                                     LinearStrength                                              OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     LinearDampingRatio                                          OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     LinearExtraDamping                                          OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MaxForce                                                    OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     AngularStrength                                             OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     AngularDampingRatio                                         OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     AngularExtraDamping                                         OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     MaxTorque                                                   OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     LinearTargetVelocityMultiplier                              OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     AngularTargetVelocityMultiplier                             OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x28, 1, 1, 0})
};

/// Struct /Script/PhysicsControl.PhysicsControlMultiplier
/// Size: 0x0070 (0x000000 - 0x000070)
class FPhysicsControlMultiplier : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FVector)                                   LinearStrengthMultiplier                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   LinearDampingRatioMultiplier                                OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FVector)                                   LinearExtraDampingMultiplier                                OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FVector)                                   MaxForceMultiplier                                          OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	DMember(float)                                     AngularStrengthMultiplier                                   OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     AngularDampingRatioMultiplier                               OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     AngularExtraDampingMultiplier                               OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     MaxTorqueMultiplier                                         OFFSET(get<float>, {0x6C, 4, 0, 0})
};

/// Struct /Script/PhysicsControl.PhysicsControlTarget
/// Size: 0x0068 (0x000000 - 0x000068)
class FPhysicsControlTarget : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FVector)                                   TargetPosition                                              OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   TargetVelocity                                              OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FRotator)                                  TargetOrientation                                           OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FVector)                                   TargetAngularVelocity                                       OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	DMember(bool)                                      bApplyControlPointToTarget                                  OFFSET(get<bool>, {0x60, 1, 0, 0})
};

/// Struct /Script/PhysicsControl.PhysicsControlSettings
/// Size: 0x0028 (0x000000 - 0x000028)
class FPhysicsControlSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FVector)                                   ControlPoint                                                OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	DMember(bool)                                      bUseSkeletalAnimation                                       OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(float)                                     SkeletalAnimationVelocityMultiplier                         OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(bool)                                      bDisableCollision                                           OFFSET(get<bool>, {0x20, 1, 0, 0})
	DMember(bool)                                      bOnlyControlChildObject                                     OFFSET(get<bool>, {0x21, 1, 0, 0})
};

/// Struct /Script/PhysicsControl.PhysicsControl
/// Size: 0x0148 (0x000000 - 0x000148)
class FPhysicsControl : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	CMember(class UMeshComponent*)                     ParentMeshComponent                                         OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     ParentBoneName                                              OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	CMember(class UMeshComponent*)                     ChildMeshComponent                                          OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FName)                                     ChildBoneName                                               OFFSET(getStruct<T>, {0x18, 4, 0, 0})
	SMember(FPhysicsControlData)                       ControlData                                                 OFFSET(getStruct<T>, {0x1C, 44, 0, 0})
	SMember(FPhysicsControlMultiplier)                 ControlMultiplier                                           OFFSET(getStruct<T>, {0x48, 112, 0, 0})
	SMember(FPhysicsControlTarget)                     ControlTarget                                               OFFSET(getStruct<T>, {0xB8, 104, 0, 0})
	SMember(FPhysicsControlSettings)                   ControlSettings                                             OFFSET(getStruct<T>, {0x120, 40, 0, 0})
};

/// Struct /Script/PhysicsControl.PhysicsControlLimbSetupData
/// Size: 0x000C (0x000000 - 0x00000C)
class FPhysicsControlLimbSetupData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     LimbName                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     StartBone                                                   OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	DMember(bool)                                      bIncludeParentBone                                          OFFSET(get<bool>, {0x8, 1, 1, 0})
	DMember(bool)                                      bCreateWorldSpaceControls                                   OFFSET(get<bool>, {0x8, 1, 1, 1})
	DMember(bool)                                      bCreateParentSpaceControls                                  OFFSET(get<bool>, {0x8, 1, 1, 2})
	DMember(bool)                                      bCreateBodyModifiers                                        OFFSET(get<bool>, {0x8, 1, 1, 3})
};

/// Struct /Script/PhysicsControl.PhysicsControlLimbBones
/// Size: 0x0020 (0x000000 - 0x000020)
class FPhysicsControlLimbBones : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/PhysicsControl.PhysicsControlNames
/// Size: 0x0010 (0x000000 - 0x000010)
class FPhysicsControlNames : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FName>)                             Names                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/PhysicsControl.RigidBodySetupData
/// Size: 0x0070 (0x000000 - 0x000070)
class FRigidBodySetupData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TArray<FPhysicsControlLimbSetupData>)      LimbSetupData                                               OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FPhysicsControlData)                       DefaultWorldSpaceControlData                                OFFSET(getStruct<T>, {0x10, 44, 0, 0})
	SMember(FPhysicsControlData)                       DefaultParentSpaceControlData                               OFFSET(getStruct<T>, {0x3C, 44, 0, 0})
	SMember(FPhysicsControlModifierData)               DefaultBodyModifierData                                     OFFSET(getStruct<T>, {0x68, 8, 0, 0})
};

/// Struct /Script/PhysicsControl.RigidBodyControl
/// Size: 0x0034 (0x000000 - 0x000034)
class FRigidBodyControl : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 52;

public:
	SMember(FName)                                     ParentBoneName                                              OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     ChildBoneName                                               OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FPhysicsControlData)                       ControlData                                                 OFFSET(getStruct<T>, {0x8, 44, 0, 0})
};

/// Struct /Script/PhysicsControl.RigidBodyControlCreation
/// Size: 0x0048 (0x000000 - 0x000048)
class FRigidBodyControlCreation : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FRigidBodyControl)                         Control                                                     OFFSET(getStruct<T>, {0x0, 52, 0, 0})
	CMember(TArray<FName>)                             Sets                                                        OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/PhysicsControl.RigidBodyModifier
/// Size: 0x0020 (0x000000 - 0x000020)
class FRigidBodyModifier : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FName)                                     BoneName                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FPhysicsControlModifierData)               ModifierData                                                OFFSET(getStruct<T>, {0x4, 8, 0, 0})
	CMember(TArray<FName>)                             Sets                                                        OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/PhysicsControl.RigidBodyModifierCreation
/// Size: 0x0030 (0x000000 - 0x000030)
class FRigidBodyModifierCreation : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FRigidBodyModifier)                        Modifier                                                    OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	CMember(TArray<FName>)                             Sets                                                        OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/PhysicsControl.RigidBodyControlAndBodyModifierCreations
/// Size: 0x0020 (0x000000 - 0x000020)
class FRigidBodyControlAndBodyModifierCreations : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FRigidBodyControlCreation>)         Controls                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FRigidBodyModifierCreation>)        Modifiers                                                   OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/PhysicsControl.PhysicsControlNamedControlParameters
/// Size: 0x0030 (0x000000 - 0x000030)
class FPhysicsControlNamedControlParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FPhysicsControlSparseData)                 Data                                                        OFFSET(getStruct<T>, {0x4, 44, 0, 0})
};

/// Struct /Script/PhysicsControl.PhysicsControlNamedModifierParameters
/// Size: 0x0010 (0x000000 - 0x000010)
class FPhysicsControlNamedModifierParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FPhysicsControlModifierSparseData)         Data                                                        OFFSET(getStruct<T>, {0x4, 12, 0, 0})
};

/// Struct /Script/PhysicsControl.PhysicsControlControlAndModifierParameters
/// Size: 0x0020 (0x000000 - 0x000020)
class FPhysicsControlControlAndModifierParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FPhysicsControlNamedControlParameters>) ControlParameters                                       OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FPhysicsControlNamedModifierParameters>) ModifierParameters                                     OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/PhysicsControl.PhysicsControlControlAndModifierUpdates
/// Size: 0x0020 (0x000000 - 0x000020)
class FPhysicsControlControlAndModifierUpdates : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FPhysicsControlNamedControlParameters>) ControlParameters                                       OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FPhysicsControlNamedModifierParameters>) ModifierParameters                                     OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/PhysicsControl.RigidBodyControlTarget
/// Size: 0x0050 (0x000000 - 0x000050)
class FRigidBodyControlTarget : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FVector)                                   TargetPosition                                              OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FRotator)                                  TargetOrientation                                           OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FVector)                                   TargetPoint                                                 OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	DMember(bool)                                      bUseSkeletalAnimation                                       OFFSET(get<bool>, {0x48, 1, 1, 0})
	DMember(bool)                                      bUseTargetPoint                                             OFFSET(get<bool>, {0x48, 1, 1, 1})
};

/// Struct /Script/PhysicsControl.RigidBodyControlTargets
/// Size: 0x0050 (0x000000 - 0x000050)
class FRigidBodyControlTargets : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FName, FRigidBodyControlTarget>)      Targets                                                     OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/PhysicsControl.RigidBodyKinematicTarget
/// Size: 0x0038 (0x000000 - 0x000038)
class FRigidBodyKinematicTarget : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector)                                   TargetPosition                                              OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FRotator)                                  TargetOrientation                                           OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	DMember(bool)                                      bUseSkeletalAnimation                                       OFFSET(get<bool>, {0x30, 1, 1, 0})
};

/// Struct /Script/PhysicsControl.RigidBodyKinematicTargets
/// Size: 0x0050 (0x000000 - 0x000050)
class FRigidBodyKinematicTargets : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FName, FRigidBodyKinematicTarget>)    Targets                                                     OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/PhysicsControl.AnimNode_RigidBodyWithControl
/// Size: 0x0CC8 (0x0000C8 - 0x000D90)
class FAnimNode_RigidBodyWithControl : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 3472;

public:
	CMember(class UPhysicsAsset*)                      OverridePhysicsAsset                                        OFFSET(get<T>, {0xC8, 8, 0, 0})
	SMember(FVector)                                   OverrideWorldGravity                                        OFFSET(getStruct<T>, {0x1F8, 24, 0, 0})
	SMember(FVector)                                   ExternalForce                                               OFFSET(getStruct<T>, {0x210, 24, 0, 0})
	SMember(FVector)                                   ComponentLinearAccScale                                     OFFSET(getStruct<T>, {0x228, 24, 0, 0})
	SMember(FVector)                                   ComponentLinearVelScale                                     OFFSET(getStruct<T>, {0x240, 24, 0, 0})
	SMember(FVector)                                   ComponentAppliedLinearAccClamp                              OFFSET(getStruct<T>, {0x258, 24, 0, 0})
	SMember(FSimSpaceSettings)                         SimSpaceSettings                                            OFFSET(getStruct<T>, {0x270, 96, 0, 0})
	DMember(float)                                     CachedBoundsScale                                           OFFSET(get<float>, {0x2D0, 4, 0, 0})
	DMember(bool)                                      UpdateCacheEveryFrame                                       OFFSET(get<bool>, {0x2D4, 1, 0, 0})
	SMember(FBoneReference)                            BaseBoneRef                                                 OFFSET(getStruct<T>, {0x2D8, 12, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            OverlapChannel                                              OFFSET(get<T>, {0x2E4, 1, 0, 0})
	CMember(ESimulationSpace)                          SimulationSpace                                             OFFSET(get<T>, {0x2E5, 1, 0, 0})
	DMember(bool)                                      bForceDisableCollisionBetweenConstraintBodies               OFFSET(get<bool>, {0x2E6, 1, 0, 0})
	DMember(bool)                                      bUseExternalClothCollision                                  OFFSET(get<bool>, {0x2E7, 1, 0, 0})
	DMember(bool)                                      bEnableWorldGeometry                                        OFFSET(get<bool>, {0x2E9, 1, 1, 0})
	DMember(bool)                                      bOverrideWorldGravity                                       OFFSET(get<bool>, {0x2E9, 1, 1, 1})
	DMember(bool)                                      bTransferBoneVelocities                                     OFFSET(get<bool>, {0x2E9, 1, 1, 2})
	DMember(bool)                                      bFreezeIncomingPoseOnStart                                  OFFSET(get<bool>, {0x2E9, 1, 1, 3})
	DMember(bool)                                      bModifyConstraintTransformsToMatchSkeleton                  OFFSET(get<bool>, {0x2E9, 1, 1, 4})
	DMember(float)                                     WorldSpaceMinimumScale                                      OFFSET(get<float>, {0x2EC, 4, 0, 0})
	DMember(float)                                     EvaluationResetTime                                         OFFSET(get<float>, {0x2F0, 4, 0, 0})
	DMember(bool)                                      bEnableControls                                             OFFSET(get<bool>, {0x2F4, 1, 0, 0})
	CMember(TMap<FName, FName>)                        BoneToBodyNameMap                                           OFFSET(get<T>, {0x2F8, 80, 0, 0})
	SMember(FRigidBodySetupData)                       SetupData                                                   OFFSET(getStruct<T>, {0x348, 112, 0, 0})
	SMember(FRigidBodyControlAndBodyModifierCreations) AdditionalControlsAndBodyModifiers                          OFFSET(getStruct<T>, {0x3B8, 32, 0, 0})
	SMember(FPhysicsControlSetUpdates)                 AdditionalSets                                              OFFSET(getStruct<T>, {0x3D8, 32, 0, 0})
	SMember(FPhysicsControlControlAndModifierParameters) InitialControlAndBodyModifierUpdates                      OFFSET(getStruct<T>, {0x3F8, 32, 0, 0})
	SMember(FPhysicsControlControlAndModifierParameters) ControlAndModifierParameters                              OFFSET(getStruct<T>, {0x418, 32, 0, 0})
	SMember(FPhysicsControlControlAndModifierUpdates)  ControlAndModifierUpdates                                   OFFSET(getStruct<T>, {0x438, 32, 0, 0})
	SMember(FRigidBodyControlTargets)                  ControlTargets                                              OFFSET(getStruct<T>, {0x458, 80, 0, 0})
	SMember(FRigidBodyKinematicTargets)                KinematicTargets                                            OFFSET(getStruct<T>, {0x4A8, 80, 0, 0})
	CMember(class USkeletalMesh*)                      PhysicsAssetAuthoredSkeletalMesh                            OFFSET(get<T>, {0x4F8, 8, 0, 0})
	SMember(FName)                                     ConstraintProfile                                           OFFSET(getStruct<T>, {0x500, 4, 0, 0})
	CMember(ESimulationTiming)                         SimulationTiming                                            OFFSET(get<T>, {0x560, 1, 0, 0})
};

/// Struct /Script/PhysicsControl.InitialPhysicsControl
/// Size: 0x0150 (0x000000 - 0x000150)
class FInitialPhysicsControl : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	CMember(class AActor*)                             ParentActor                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     ParentMeshComponentName                                     OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FName)                                     ParentBoneName                                              OFFSET(getStruct<T>, {0xC, 4, 0, 0})
	CMember(class AActor*)                             ChildActor                                                  OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FName)                                     ChildMeshComponentName                                      OFFSET(getStruct<T>, {0x18, 4, 0, 0})
	SMember(FName)                                     ChildBoneName                                               OFFSET(getStruct<T>, {0x1C, 4, 0, 0})
	SMember(FPhysicsControlData)                       ControlData                                                 OFFSET(getStruct<T>, {0x20, 44, 0, 0})
	SMember(FPhysicsControlMultiplier)                 ControlMultiplier                                           OFFSET(getStruct<T>, {0x50, 112, 0, 0})
	SMember(FPhysicsControlTarget)                     ControlTarget                                               OFFSET(getStruct<T>, {0xC0, 104, 0, 0})
	SMember(FPhysicsControlSettings)                   ControlSettings                                             OFFSET(getStruct<T>, {0x128, 40, 0, 0})
};

/// Struct /Script/PhysicsControl.InitialBodyModifier
/// Size: 0x0070 (0x000000 - 0x000070)
class FInitialBodyModifier : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(class AActor*)                             Actor                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     MeshComponentName                                           OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FName)                                     BoneName                                                    OFFSET(getStruct<T>, {0xC, 4, 0, 0})
	CMember(EPhysicsMovementType)                      MovementType                                                OFFSET(get<T>, {0x10, 1, 0, 0})
	DMember(float)                                     GravityMultiplier                                           OFFSET(get<float>, {0x18, 4, 0, 0})
	SMember(FVector)                                   KinematicTargetPosition                                     OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FQuat)                                     KinematicTargetOrientation                                  OFFSET(getStruct<T>, {0x40, 32, 0, 0})
	DMember(bool)                                      bUseSkeletalAnimation                                       OFFSET(get<bool>, {0x60, 1, 0, 0})
};

/// Struct /Script/PhysicsControl.InitialCharacterControls
/// Size: 0x00D8 (0x000000 - 0x0000D8)
class FInitialCharacterControls : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(class AActor*)                             CharacterActor                                              OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     SkeletalMeshComponentName                                   OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	CMember(TArray<FPhysicsControlLimbSetupData>)      LimbSetupData                                               OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FPhysicsControlData)                       WorldSpaceControlData                                       OFFSET(getStruct<T>, {0x20, 44, 0, 0})
	SMember(FPhysicsControlSettings)                   WorldSpaceControlSettings                                   OFFSET(getStruct<T>, {0x50, 40, 0, 0})
	SMember(FPhysicsControlData)                       ParentSpaceControlData                                      OFFSET(getStruct<T>, {0x78, 44, 0, 0})
	SMember(FPhysicsControlSettings)                   ParentSpaceControlSettings                                  OFFSET(getStruct<T>, {0xA8, 40, 0, 0})
	CMember(EPhysicsMovementType)                      PhysicsMovementType                                         OFFSET(get<T>, {0xD0, 1, 0, 0})
};

/// Enum /Script/PhysicsControl.EResetToCachedTargetBehavior
/// Size: 0x03
enum EResetToCachedTargetBehavior : uint8_t
{
	EResetToCachedTargetBehavior__ResetImmediately                                   = 0,
	EResetToCachedTargetBehavior__ResetDuringUpdateControls                          = 1,
	EResetToCachedTargetBehavior__EResetToCachedTargetBehavior_MAX                   = 2
};

/// Enum /Script/PhysicsControl.EPhysicsMovementType
/// Size: 0x04
enum EPhysicsMovementType : uint8_t
{
	EPhysicsMovementType__Static                                                     = 0,
	EPhysicsMovementType__Kinematic                                                  = 1,
	EPhysicsMovementType__Simulated                                                  = 2,
	EPhysicsMovementType__EPhysicsMovementType_MAX                                   = 3
};

/// Enum /Script/PhysicsControl.EPhysicsControlType
/// Size: 0x03
enum EPhysicsControlType : uint8_t
{
	EPhysicsControlType__WorldSpace                                                  = 0,
	EPhysicsControlType__ParentSpace                                                 = 1,
	EPhysicsControlType__EPhysicsControlType_MAX                                     = 2
};

