
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

/// Enum /Script/PhysicsControl.EResetToCachedTargetBehavior
/// Size: 0x03
enum class EResetToCachedTargetBehavior : uint8_t
{
	EResetToCachedTargetBehavior__ResetImmediately                                   = 0,
	EResetToCachedTargetBehavior__ResetDuringUpdateControls                          = 1,
	EResetToCachedTargetBehavior__EResetToCachedTargetBehavior_MAX                   = 2
};

/// Enum /Script/PhysicsControl.EPhysicsMovementType
/// Size: 0x04
enum class EPhysicsMovementType : uint8_t
{
	EPhysicsMovementType__Static                                                     = 0,
	EPhysicsMovementType__Kinematic                                                  = 1,
	EPhysicsMovementType__Simulated                                                  = 2,
	EPhysicsMovementType__EPhysicsMovementType_MAX                                   = 3
};

/// Enum /Script/PhysicsControl.EPhysicsControlType
/// Size: 0x03
enum class EPhysicsControlType : uint8_t
{
	EPhysicsControlType__WorldSpace                                                  = 0,
	EPhysicsControlType__ParentSpace                                                 = 1,
	EPhysicsControlType__EPhysicsControlType_MAX                                     = 2
};

/// Class /Script/PhysicsControl.PhysicsControlBPLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UPhysicsControlBPLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PhysicsControl.PhysicsControlBPLibrary.GetControlNamesInSet
	// TArray<FName> GetControlNamesInSet(FRigidBodyWithControlReference& RigidBodyWithControl, FName SetName);              // [0xb1253e4] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PhysicsControl.PhysicsControlBPLibrary.GetBodyModifierNamesInSet
	// TArray<FName> GetBodyModifierNamesInSet(FRigidBodyWithControlReference& RigidBodyWithControl, FName SetName);         // [0xb124458] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PhysicsControl.PhysicsControlBPLibrary.ConvertToRigidBodyWithControlPure
	// void ConvertToRigidBodyWithControlPure(FAnimNodeReference& Node, FRigidBodyWithControlReference& RigidBodyWithControl, bool& Result); // [0xb11ec6c] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PhysicsControl.PhysicsControlBPLibrary.ConvertToRigidBodyWithControl
	// FRigidBodyWithControlReference ConvertToRigidBodyWithControl(FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result); // [0xb11eb40] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlBPLibrary.BlendParameters
	// void BlendParameters(FPhysicsControlControlAndModifierParameters& InParametersA, FPhysicsControlControlAndModifierParameters& InParametersB, float InInterpolationWeight, FPhysicsControlControlAndModifierParameters& OutParameters); // [0xb11e8dc] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PhysicsControl.PhysicsControlBPLibrary.BlendModifierParametersThroughSet
	// void BlendModifierParametersThroughSet(FPhysicsControlControlAndModifierParameters& InParameters, FPhysicsControlNamedModifierParameters& InStartModifierParameters, FPhysicsControlNamedModifierParameters& InEndModifierParameters, TArray<FName>& ModifierNames, FPhysicsControlControlAndModifierParameters& OutParameters); // [0xb11e670] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PhysicsControl.PhysicsControlBPLibrary.BlendControlParametersThroughSet
	// void BlendControlParametersThroughSet(FPhysicsControlControlAndModifierParameters& InParameters, FPhysicsControlNamedControlParameters& InStartControlParameters, FPhysicsControlNamedControlParameters& InEndControlParameters, TArray<FName>& ControlNames, FPhysicsControlControlAndModifierParameters& OutParameters); // [0xb11e418] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PhysicsControl.PhysicsControlBPLibrary.AddMultipleModifierParameters
	// void AddMultipleModifierParameters(FPhysicsControlControlAndModifierParameters& InParameters, FPhysicsControlControlAndModifierParameters& OutParameters, TArray<FName>& Names, FPhysicsControlModifierSparseData& ModifierData); // [0xb11e21c] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PhysicsControl.PhysicsControlBPLibrary.AddMultipleControlParameters
	// void AddMultipleControlParameters(FPhysicsControlControlAndModifierParameters& InParameters, FPhysicsControlControlAndModifierParameters& OutParameters, TArray<FName>& Names, FPhysicsControlSparseData& ControlData); // [0xb11e024] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PhysicsControl.PhysicsControlBPLibrary.AddModifierParameters
	// void AddModifierParameters(FPhysicsControlControlAndModifierParameters& InParameters, FPhysicsControlControlAndModifierParameters& OutParameters, FName Name, FPhysicsControlModifierSparseData& ModifierData); // [0xb11dde4] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PhysicsControl.PhysicsControlBPLibrary.AddControlParameters
	// void AddControlParameters(FPhysicsControlControlAndModifierParameters& InParameters, FPhysicsControlControlAndModifierParameters& OutParameters, FName Name, FPhysicsControlSparseData& ControlData); // [0xb11d740] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/PhysicsControl.PhysicsControlComponent
/// Size: 0x0050 (0x000290 - 0x0002E0)
class UPhysicsControlComponent : public USceneComponent
{ 
public:
	float                                              TeleportDistanceThreshold;                                  // 0x0290   (0x0004)  
	float                                              TeleportRotationThreshold;                                  // 0x0294   (0x0004)  
	bool                                               bShowDebugVisualization;                                    // 0x0298   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0299   (0x0003)  MISSED
	float                                              VisualizationSizeScale;                                     // 0x029C   (0x0004)  
	bool                                               bShowDebugControlList;                                      // 0x02A0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x02A1   (0x0007)  MISSED
	SDK_UNDEFINED(16,12179) /* FString */              __um(DebugControlDetailFilter);                             // 0x02A8   (0x0010)  
	bool                                               bShowDebugBodyModifierList;                                 // 0x02B8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x02B9   (0x0007)  MISSED
	SDK_UNDEFINED(16,12180) /* FString */              __um(DebugBodyModifierDetailFilter);                        // 0x02C0   (0x0010)  
	float                                              VelocityPredictionTime;                                     // 0x02D0   (0x0004)  
	int32_t                                            MaxNumControlsOrModifiersPerName;                           // 0x02D4   (0x0004)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x02D8   (0x0008)  MISSED


	/// Functions
	// Function /Script/PhysicsControl.PhysicsControlComponent.UpdateTargetCaches
	// void UpdateTargetCaches(float DeltaTime);                                                                             // [0xb12dcb8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.UpdateControls
	// void UpdateControls(float DeltaTime);                                                                                 // [0xb12dc3c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlUseSkeletalAnimation
	// bool SetControlUseSkeletalAnimation(FName Name, bool bUseSkeletalAnimation, float SkeletalAnimationVelocityMultiplier); // [0xb12d478] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargetsInSet
	// void SetControlTargetsInSet(FName Set, FPhysicsControlTarget ControlTarget, bool bEnableControl);                     // [0xb12d1dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargets
	// void SetControlTargets(TArray<FName>& Names, FPhysicsControlTarget ControlTarget, bool bEnableControl);               // [0xb12cf10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargetPositionsInSet
	// void SetControlTargetPositionsInSet(FName SetName, FVector Position, float VelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // [0xb12cb04] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargetPositionsFromArray
	// bool SetControlTargetPositionsFromArray(TArray<FName>& Names, TArray<FVector>& Positions, float VelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // [0xb12c748] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargetPositionsAndOrientationsInSet
	// void SetControlTargetPositionsAndOrientationsInSet(FName SetName, FVector Position, FRotator orientation, float VelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // [0xb12c250] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargetPositionsAndOrientationsFromArray
	// bool SetControlTargetPositionsAndOrientationsFromArray(TArray<FName>& Names, TArray<FVector>& Positions, TArray<FRotator>& Orientations, float VelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // [0xb12be28] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargetPositionsAndOrientations
	// void SetControlTargetPositionsAndOrientations(TArray<FName>& Names, FVector Position, FRotator orientation, float VelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // [0xb12b8f0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargetPositions
	// void SetControlTargetPositions(TArray<FName>& Names, FVector Position, float VelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // [0xb12b4a8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargetPositionAndOrientation
	// bool SetControlTargetPositionAndOrientation(FName Name, FVector Position, FRotator orientation, float VelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // [0xb12af90] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargetPosition
	// bool SetControlTargetPosition(FName Name, FVector Position, float VelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // [0xb12ab6c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargetPoses
	// bool SetControlTargetPoses(FName Name, FVector ParentPosition, FRotator ParentOrientation, FVector ChildPosition, FRotator ChildOrientation, float VelocityDeltaTime, bool bEnableControl); // [0xb12a54c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargetOrientationsInSet
	// void SetControlTargetOrientationsInSet(FName SetName, FRotator orientation, float AngularVelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // [0xb12a140] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargetOrientationsFromArray
	// bool SetControlTargetOrientationsFromArray(TArray<FName>& Names, TArray<FRotator>& Orientations, float VelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // [0xb129d84] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargetOrientations
	// void SetControlTargetOrientations(TArray<FName>& Names, FRotator orientation, float AngularVelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // [0xb12993c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargetOrientation
	// bool SetControlTargetOrientation(FName Name, FRotator orientation, float AngularVelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // [0xb129518] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTarget
	// bool SetControlTarget(FName Name, FPhysicsControlTarget ControlTarget, bool bEnableControl);                          // [0xb129270] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlsUseSkeletalAnimation
	// void SetControlsUseSkeletalAnimation(TArray<FName>& Names, bool bUseSkeletalAnimation, float SkeletalAnimationVelocityMultiplier); // [0xb12da8c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlsInSetUseSkeletalAnimation
	// void SetControlsInSetUseSkeletalAnimation(FName Set, bool bUseSkeletalAnimation, float SkeletalAnimationVelocityMultiplier); // [0xb12d984] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlsInSetEnabled
	// void SetControlsInSetEnabled(FName Set, bool bEnable);                                                                // [0xb12d8b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlsInSetDisableCollision
	// void SetControlsInSetDisableCollision(FName Set, bool bDisableCollision);                                             // [0xb12d7ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlsEnabled
	// void SetControlsEnabled(TArray<FName>& Names, bool bEnable);                                                          // [0xb12d6b8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlsDisableCollision
	// void SetControlsDisableCollision(TArray<FName>& Names, bool bDisableCollision);                                       // [0xb12d584] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlPoint
	// bool SetControlPoint(FName Name, FVector Position);                                                                   // [0xb1290ec] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlParentsInSet
	// void SetControlParentsInSet(FName Set, class UMeshComponent* ParentMeshComponent, FName ParentBoneName);              // [0xb128fe4] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlParents
	// void SetControlParents(TArray<FName>& Names, class UMeshComponent* ParentMeshComponent, FName ParentBoneName);        // [0xb128e38] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlParent
	// bool SetControlParent(FName Name, class UMeshComponent* ParentMeshComponent, FName ParentBoneName);                   // [0xb128d40] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlMultipliersInSet
	// void SetControlMultipliersInSet(FName Set, FPhysicsControlMultiplier ControlMultiplier, bool bEnableControl);         // [0xb128aa4] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlMultipliers
	// void SetControlMultipliers(TArray<FName>& Names, FPhysicsControlMultiplier ControlMultiplier, bool bEnableControl);   // [0xb1287dc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlMultiplier
	// bool SetControlMultiplier(FName Name, FPhysicsControlMultiplier ControlMultiplier, bool bEnableControl);              // [0xb128534] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlLinearData
	// bool SetControlLinearData(FName Name, float Strength, float DampingRatio, float ExtraDamping, float MaxForce, bool bEnableControl); // [0xb128340] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlEnabled
	// bool SetControlEnabled(FName Name, bool bEnable);                                                                     // [0xb12827c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlDisableCollision
	// bool SetControlDisableCollision(FName Name, bool bDisableCollision);                                                  // [0xb1281b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlDatasInSet
	// void SetControlDatasInSet(FName Set, FPhysicsControlData ControlData);                                                // [0xb12801c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlDatas
	// void SetControlDatas(TArray<FName>& Names, FPhysicsControlData ControlData);                                          // [0xb127e54] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlData
	// bool SetControlData(FName Name, FPhysicsControlData ControlData);                                                     // [0xb127cb4] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlAngularData
	// bool SetControlAngularData(FName Name, float Strength, float DampingRatio, float ExtraDamping, float MaxTorque, bool bEnableControl); // [0xb127ac0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetCachedBoneData
	// bool SetCachedBoneData(class USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName, FTransform& TM, FVector Velocity, FVector AngularVelocity); // [0xb127748] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifierUseSkeletalAnimation
	// bool SetBodyModifierUseSkeletalAnimation(FName Name, bool bUseSkeletalAnimation);                                     // [0xb126a74] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifierUpdateKinematicFromSimulation
	// bool SetBodyModifierUpdateKinematicFromSimulation(FName Name, bool bUpdateKinematicFromSimulation);                   // [0xb1269b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifiersUseSkeletalAnimation
	// void SetBodyModifiersUseSkeletalAnimation(TArray<FName>& Names, bool bUseSkeletalAnimation);                          // [0xb127614] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifiersUpdateKinematicFromSimulation
	// void SetBodyModifiersUpdateKinematicFromSimulation(TArray<FName>& Names, bool bUpdateKinematicFromSimulation);        // [0xb1274e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifiersPhysicsBlendWeight
	// void SetBodyModifiersPhysicsBlendWeight(TArray<FName>& Names, float PhysicsBlendWeight);                              // [0xb1273b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifiersMovementType
	// void SetBodyModifiersMovementType(TArray<FName>& Names, EPhysicsMovementType MovementType);                           // [0xb127280] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifiersInSetUseSkeletalAnimation
	// void SetBodyModifiersInSetUseSkeletalAnimation(FName Set, bool bUseSkeletalAnimation);                                // [0xb1271b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifiersInSetUpdateKinematicFromSimulation
	// void SetBodyModifiersInSetUpdateKinematicFromSimulation(FName Set, bool bUpdateKinematicFromSimulation);              // [0xb1270e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifiersInSetPhysicsBlendWeight
	// void SetBodyModifiersInSetPhysicsBlendWeight(FName Set, float PhysicsBlendWeight);                                    // [0xb127010] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifiersInSetMovementType
	// void SetBodyModifiersInSetMovementType(FName Set, EPhysicsMovementType MovementType);                                 // [0xb126f40] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifiersInSetGravityMultiplier
	// void SetBodyModifiersInSetGravityMultiplier(FName Set, float GravityMultiplier);                                      // [0xb126e68] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifiersInSetCollisionType
	// void SetBodyModifiersInSetCollisionType(FName Set, TEnumAsByte<ECollisionEnabled> CollisionType);                     // [0xb126d98] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifiersGravityMultiplier
	// void SetBodyModifiersGravityMultiplier(TArray<FName>& Names, float GravityMultiplier);                                // [0xb126c68] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifiersCollisionType
	// void SetBodyModifiersCollisionType(TArray<FName>& Names, TEnumAsByte<ECollisionEnabled> CollisionType);               // [0xb126b38] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifierPhysicsBlendWeight
	// bool SetBodyModifierPhysicsBlendWeight(FName Name, float PhysicsBlendWeight);                                         // [0xb1268f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifierMovementType
	// bool SetBodyModifierMovementType(FName Name, EPhysicsMovementType MovementType);                                      // [0xb126830] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifierKinematicTarget
	// bool SetBodyModifierKinematicTarget(FName Name, FVector KinematicTargetPosition, FRotator KinematicTargetOrienation, bool bMakeKinematic); // [0xb1264e0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifierGravityMultiplier
	// bool SetBodyModifierGravityMultiplier(FName Name, float GravityMultiplier);                                           // [0xb126420] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifierCollisionType
	// bool SetBodyModifierCollisionType(FName Name, TEnumAsByte<ECollisionEnabled> CollisionType);                          // [0xb12635c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.ResetControlPoint
	// bool ResetControlPoint(FName Name);                                                                                   // [0xb1262bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.ResetBodyModifierToCachedBoneTransform
	// bool ResetBodyModifierToCachedBoneTransform(FName Name, EResetToCachedTargetBehavior Behavior);                       // [0xb125ffc] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.ResetBodyModifiersToCachedBoneTransforms
	// void ResetBodyModifiersToCachedBoneTransforms(TArray<FName>& Names, EResetToCachedTargetBehavior Behavior);           // [0xb12618c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.ResetBodyModifiersInSetToCachedBoneTransforms
	// void ResetBodyModifiersInSetToCachedBoneTransforms(FName SetName, EResetToCachedTargetBehavior Behavior);             // [0xb1260bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetSetsContainingControl
	// TArray<FName> GetSetsContainingControl(FName Control);                                                                // [0xb125f58] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetSetsContainingBodyModifier
	// TArray<FName> GetSetsContainingBodyModifier(FName Control);                                                           // [0xb125eb4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetLimbBonesFromSkeletalMesh
	// TMap<FName, FPhysicsControlLimbBones> GetLimbBonesFromSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent, TArray<FPhysicsControlLimbSetupData>& LimbSetupData); // [0xb12575c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetControlTarget
	// bool GetControlTarget(FName Name, FPhysicsControlTarget& ControlTarget);                                              // [0xb125610] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetControlNamesInSet
	// TArray<FName> GetControlNamesInSet(FName Set);                                                                        // [0xb12557c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetControlMultiplier
	// bool GetControlMultiplier(FName Name, FPhysicsControlMultiplier& ControlMultiplier);                                  // [0xb1252a4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetControlEnabled
	// bool GetControlEnabled(FName Name);                                                                                   // [0xb125208] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetControlData
	// bool GetControlData(FName Name, FPhysicsControlData& ControlData);                                                    // [0xb1250f8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetCachedBoneVelocity
	// FVector GetCachedBoneVelocity(class USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName);                   // [0xb124fe8] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetCachedBoneVelocities
	// TArray<FVector> GetCachedBoneVelocities(class USkeletalMeshComponent* SkeletalMeshComponent, TArray<FName>& BoneNames); // [0xb124ed8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetCachedBoneTransforms
	// TArray<FTransform> GetCachedBoneTransforms(class USkeletalMeshComponent* SkeletalMeshComponent, TArray<FName>& BoneNames); // [0xb124dc8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetCachedBoneTransform
	// FTransform GetCachedBoneTransform(class USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName);               // [0xb124ca8] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetCachedBonePositions
	// TArray<FVector> GetCachedBonePositions(class USkeletalMeshComponent* SkeletalMeshComponent, TArray<FName>& BoneNames); // [0xb124b98] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetCachedBonePosition
	// FVector GetCachedBonePosition(class USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName);                   // [0xb124a88] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetCachedBoneOrientations
	// TArray<FRotator> GetCachedBoneOrientations(class USkeletalMeshComponent* SkeletalMeshComponent, TArray<FName>& BoneNames); // [0xb124978] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetCachedBoneOrientation
	// FRotator GetCachedBoneOrientation(class USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName);               // [0xb1248a4] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetCachedBoneAngularVelocity
	// FVector GetCachedBoneAngularVelocity(class USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName);            // [0xb124794] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetCachedBoneAngularVelocities
	// TArray<FVector> GetCachedBoneAngularVelocities(class USkeletalMeshComponent* SkeletalMeshComponent, TArray<FName>& BoneNames); // [0xb124684] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetBodyModifierNamesInSet
	// TArray<FName> GetBodyModifierNamesInSet(FName Set);                                                                   // [0xb1245f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetAllControlNames
	// TArray<FName> GetAllControlNames();                                                                                   // [0xb124404] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetAllBodyModifierNames
	// TArray<FName> GetAllBodyModifierNames();                                                                              // [0xb1243b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysicsControl.PhysicsControlComponent.DestroyControlsInSet
	// void DestroyControlsInSet(FName Set);                                                                                 // [0xb1242d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.DestroyControls
	// void DestroyControls(TArray<FName>& Names);                                                                           // [0xb12423c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.DestroyControl
	// bool DestroyControl(FName Name);                                                                                      // [0xb1241ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.DestroyBodyModifiersInSet
	// void DestroyBodyModifiersInSet(FName Set);                                                                            // [0xb1240d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.DestroyBodyModifiers
	// void DestroyBodyModifiers(TArray<FName>& Names);                                                                      // [0xb124038] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.DestroyBodyModifier
	// bool DestroyBodyModifier(FName Name);                                                                                 // [0xb123fa8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.CreateNamedControl
	// bool CreateNamedControl(FName Name, class UMeshComponent* ParentMeshComponent, FName ParentBoneName, class UMeshComponent* ChildMeshComponent, FName ChildBoneName, FPhysicsControlData ControlData, FPhysicsControlTarget ControlTarget, FPhysicsControlSettings ControlSettings, FName Set); // [0xb123844] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.CreateNamedBodyModifier
	// bool CreateNamedBodyModifier(FName Name, class UMeshComponent* MeshComponent, FName BoneName, FName Set, EPhysicsMovementType MovementType, TEnumAsByte<ECollisionEnabled> CollisionType, float GravityMultiplier, float PhysicsBlendWeight, bool bUseSkeletalAnimation, bool bUpdateKinematicFromSimulation); // [0xb123554] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.CreateControlsFromSkeletalMeshBelow
	// TArray<FName> CreateControlsFromSkeletalMeshBelow(class USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName, bool bIncludeSelf, EPhysicsControlType ControlType, FPhysicsControlData ControlData, FPhysicsControlSettings ControlSettings, FName Set); // [0xb12302c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.CreateControlsFromSkeletalMeshAndConstraintProfileBelow
	// TArray<FName> CreateControlsFromSkeletalMeshAndConstraintProfileBelow(class USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName, bool bIncludeSelf, FName ConstraintProfile, FName Set, bool bEnabled); // [0xb122dbc] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.CreateControlsFromSkeletalMeshAndConstraintProfile
	// TArray<FName> CreateControlsFromSkeletalMeshAndConstraintProfile(class USkeletalMeshComponent* SkeletalMeshComponent, TArray<FName>& BoneNames, FName ConstraintProfile, FName Set, bool bEnabled); // [0xb122b18] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.CreateControlsFromSkeletalMesh
	// TArray<FName> CreateControlsFromSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent, TArray<FName>& BoneNames, EPhysicsControlType ControlType, FPhysicsControlData ControlData, FPhysicsControlSettings ControlSettings, FName Set); // [0xb12266c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.CreateControlsFromLimbBonesAndConstraintProfile
	// TMap<FName, FPhysicsControlNames> CreateControlsFromLimbBonesAndConstraintProfile(FPhysicsControlNames& AllControls, TMap<FName, FPhysicsControlLimbBones>& LimbBones, FName ConstraintProfile, bool bEnabled); // [0xb122324] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.CreateControlsFromLimbBones
	// TMap<FName, FPhysicsControlNames> CreateControlsFromLimbBones(FPhysicsControlNames& AllControls, TMap<FName, FPhysicsControlLimbBones>& LimbBones, EPhysicsControlType ControlType, FPhysicsControlData ControlData, FPhysicsControlSettings ControlSettings, class UMeshComponent* WorldComponent, FName WorldBoneName, FString NamePrefix); // [0xb121574] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.CreateControlsAndBodyModifiersFromLimbBones
	// void CreateControlsAndBodyModifiersFromLimbBones(FPhysicsControlNames& AllWorldSpaceControls, TMap<FName, FPhysicsControlNames>& LimbWorldSpaceControls, FPhysicsControlNames& AllParentSpaceControls, TMap<FName, FPhysicsControlNames>& LimbParentSpaceControls, FPhysicsControlNames& AllBodyModifiers, TMap<FName, FPhysicsControlNames>& LimbBodyModifiers, class USkeletalMeshComponent* SkeletalMeshComponent, TArray<FPhysicsControlLimbSetupData>& LimbSetupData, FPhysicsControlData WorldSpaceControlData, FPhysicsControlSettings WorldSpaceControlSettings, FPhysicsControlData ParentSpaceControlData, FPhysicsControlSettings ParentSpaceControlSettings, EPhysicsMovementType PhysicsMovementType, float GravityMultiplier, float PhysicsBlendWeight, class UMeshComponent* WorldComponent, FName WorldBoneName); // [0xb120194] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.CreateControl
	// FName CreateControl(class UMeshComponent* ParentMeshComponent, FName ParentBoneName, class UMeshComponent* ChildMeshComponent, FName ChildBoneName, FPhysicsControlData ControlData, FPhysicsControlTarget ControlTarget, FPhysicsControlSettings ControlSettings, FName Set, FString NamePrefix); // [0xb11fad4] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.CreateBodyModifiersFromSkeletalMeshBelow
	// TArray<FName> CreateBodyModifiersFromSkeletalMeshBelow(class USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName, bool bIncludeSelf, FName Set, EPhysicsMovementType MovementType, TEnumAsByte<ECollisionEnabled> CollisionType, float GravityMultiplier, float PhysicsBlendWeight, bool bUseSkeletalAnimation, bool bUpdateKinematicFromSimulation); // [0xb11f790] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.CreateBodyModifiersFromLimbBones
	// TMap<FName, FPhysicsControlNames> CreateBodyModifiersFromLimbBones(FPhysicsControlNames& AllBodyModifiers, TMap<FName, FPhysicsControlLimbBones>& LimbBones, EPhysicsMovementType MovementType, TEnumAsByte<ECollisionEnabled> CollisionType, float GravityMultiplier, float PhysicsBlendWeight, bool bUseSkeletalAnimation, bool bUpdateKinematicFromSimulation); // [0xb11f09c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.CreateBodyModifier
	// FName CreateBodyModifier(class UMeshComponent* MeshComponent, FName BoneName, FName Set, EPhysicsMovementType MovementType, TEnumAsByte<ECollisionEnabled> CollisionType, float GravityMultiplier, float PhysicsBlendWeight, bool bUseSkeletalAnimation, bool bUpdateKinematicFromSimulation); // [0xb11ede4] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.AddControlToSet
	// void AddControlToSet(FPhysicsControlNames& NewSet, FName Control, FName Set);                                         // [0xb11d980] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.AddControlsToSet
	// void AddControlsToSet(FPhysicsControlNames& NewSet, TArray<FName>& Controls, FName Set);                              // [0xb11dbec] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.AddBodyModifierToSet
	// void AddBodyModifierToSet(FPhysicsControlNames& NewSet, FName BodyModifier, FName Set);                               // [0xb11d2dc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.AddBodyModifiersToSet
	// void AddBodyModifiersToSet(FPhysicsControlNames& NewSet, TArray<FName>& BodyModifiers, FName Set);                    // [0xb11d548] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/PhysicsControl.PhysicsControlProfileAsset
/// Size: 0x0030 (0x000028 - 0x000058)
class UPhysicsControlProfileAsset : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	SDK_UNDEFINED(32,12181) /* TWeakObjectPtr<USkeletalMesh*> */ __um(PreviewSkeletalMesh);                        // 0x0030   (0x0020)  
	float                                              TestValue;                                                  // 0x0050   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0054   (0x0004)  MISSED


	/// Functions
	// Function /Script/PhysicsControl.PhysicsControlProfileAsset.Log
	// void Log();                                                                                                           // [0xb149a14] Final|Native|Public  
};

/// Struct /Script/PhysicsControl.PhysicsControlLimbSetupData
/// Size: 0x000C (0x000000 - 0x00000C)
struct FPhysicsControlLimbSetupData
{ 
	FName                                              LimbName;                                                   // 0x0000   (0x0004)  
	FName                                              StartBone;                                                  // 0x0004   (0x0004)  
	bool                                               bIncludeParentBone : 1;                                     // 0x0008:0 (0x0001)  
	bool                                               bCreateWorldSpaceControls : 1;                              // 0x0008:1 (0x0001)  
	bool                                               bCreateParentSpaceControls : 1;                             // 0x0008:2 (0x0001)  
	bool                                               bCreateBodyModifiers : 1;                                   // 0x0008:3 (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/PhysicsControl.PhysicsControlData
/// Size: 0x002C (0x000000 - 0x00002C)
struct FPhysicsControlData
{ 
	float                                              LinearStrength;                                             // 0x0000   (0x0004)  
	float                                              LinearDampingRatio;                                         // 0x0004   (0x0004)  
	float                                              LinearExtraDamping;                                         // 0x0008   (0x0004)  
	float                                              MaxForce;                                                   // 0x000C   (0x0004)  
	float                                              AngularStrength;                                            // 0x0010   (0x0004)  
	float                                              AngularDampingRatio;                                        // 0x0014   (0x0004)  
	float                                              AngularExtraDamping;                                        // 0x0018   (0x0004)  
	float                                              MaxTorque;                                                  // 0x001C   (0x0004)  
	float                                              LinearTargetVelocityMultiplier;                             // 0x0020   (0x0004)  
	float                                              AngularTargetVelocityMultiplier;                            // 0x0024   (0x0004)  
	bool                                               bEnabled : 1;                                               // 0x0028:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0029   (0x0003)  MISSED
};

/// Struct /Script/PhysicsControl.PhysicsControlSettings
/// Size: 0x0028 (0x000000 - 0x000028)
struct FPhysicsControlSettings
{ 
	FVector                                            ControlPoint;                                               // 0x0000   (0x0018)  
	bool                                               bUseSkeletalAnimation;                                      // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0019   (0x0003)  MISSED
	float                                              SkeletalAnimationVelocityMultiplier;                        // 0x001C   (0x0004)  
	bool                                               bDisableCollision;                                          // 0x0020   (0x0001)  
	bool                                               bOnlyControlChildObject;                                    // 0x0021   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0022   (0x0006)  MISSED
};

/// Struct /Script/PhysicsControl.InitialCharacterControls
/// Size: 0x00D8 (0x000000 - 0x0000D8)
struct FInitialCharacterControls
{ 
	class AActor*                                      CharacterActor;                                             // 0x0000   (0x0008)  
	FName                                              SkeletalMeshComponentName;                                  // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FPhysicsControlLimbSetupData>               LimbSetupData;                                              // 0x0010   (0x0010)  
	FPhysicsControlData                                WorldSpaceControlData;                                      // 0x0020   (0x002C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	FPhysicsControlSettings                            WorldSpaceControlSettings;                                  // 0x0050   (0x0028)  
	FPhysicsControlData                                ParentSpaceControlData;                                     // 0x0078   (0x002C)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x00A4   (0x0004)  MISSED
	FPhysicsControlSettings                            ParentSpaceControlSettings;                                 // 0x00A8   (0x0028)  
	EPhysicsMovementType                               PhysicsMovementType;                                        // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x00D1   (0x0007)  MISSED
};

/// Class /Script/PhysicsControl.PhysicsControlInitializerComponent
/// Size: 0x0180 (0x000290 - 0x000410)
class UPhysicsControlInitializerComponent : public USceneComponent
{ 
public:
	FInitialCharacterControls                          InitialCharacterControls;                                   // 0x0290   (0x00D8)  
	SDK_UNDEFINED(80,12182) /* TMap<FName, FInitialPhysicsControl> */ __um(InitialControls);                       // 0x0368   (0x0050)  
	SDK_UNDEFINED(80,12183) /* TMap<FName, FInitialBodyModifier> */ __um(InitialBodyModifiers);                    // 0x03B8   (0x0050)  
	bool                                               bCreateControlsAtBeginPlay;                                 // 0x0408   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0409   (0x0007)  MISSED


	/// Functions
	// Function /Script/PhysicsControl.PhysicsControlInitializerComponent.CreateControls
	// void CreateControls(class UPhysicsControlComponent* PhysicsControlComponent);                                         // [0xb149974] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PhysicsControl.PhysicsControlActor
/// Size: 0x0010 (0x000290 - 0x0002A0)
class APhysicsControlActor : public AActor
{ 
public:
	class UPhysicsControlComponent*                    ControlComponent;                                           // 0x0290   (0x0008)  
	class UPhysicsControlInitializerComponent*         ControlInitializerComponent;                                // 0x0298   (0x0008)  
};

/// Struct /Script/PhysicsControl.RigidBodyWithControlReference
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigidBodyWithControlReference : FAnimNodeReference
{ 
};

/// Struct /Script/PhysicsControl.PhysicsControlSetUpdate
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPhysicsControlSetUpdate
{ 
	FName                                              SetName;                                                    // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FName>                                      Names;                                                      // 0x0008   (0x0010)  
};

/// Struct /Script/PhysicsControl.PhysicsControlSetUpdates
/// Size: 0x0020 (0x000000 - 0x000020)
struct FPhysicsControlSetUpdates
{ 
	TArray<FPhysicsControlSetUpdate>                   ControlSetUpdates;                                          // 0x0000   (0x0010)  
	TArray<FPhysicsControlSetUpdate>                   ModifierSetUpdates;                                         // 0x0010   (0x0010)  
};

/// Struct /Script/PhysicsControl.PhysicsControlModifierSparseData
/// Size: 0x000C (0x000000 - 0x00000C)
struct FPhysicsControlModifierSparseData
{ 
	EPhysicsMovementType                               MovementType;                                               // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              GravityMultiplier;                                          // 0x0004   (0x0004)  
	bool                                               bEnableMovementType : 1;                                    // 0x0008:0 (0x0001)  
	bool                                               bEnableGravityMultiplier : 1;                               // 0x0008:1 (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/PhysicsControl.PhysicsControlModifierData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPhysicsControlModifierData
{ 
	EPhysicsMovementType                               MovementType;                                               // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              GravityMultiplier;                                          // 0x0004   (0x0004)  
};

/// Struct /Script/PhysicsControl.PhysicsControlSparseData
/// Size: 0x002C (0x000000 - 0x00002C)
struct FPhysicsControlSparseData
{ 
	float                                              LinearStrength;                                             // 0x0000   (0x0004)  
	float                                              LinearDampingRatio;                                         // 0x0004   (0x0004)  
	float                                              LinearExtraDamping;                                         // 0x0008   (0x0004)  
	float                                              MaxForce;                                                   // 0x000C   (0x0004)  
	float                                              AngularStrength;                                            // 0x0010   (0x0004)  
	float                                              AngularDampingRatio;                                        // 0x0014   (0x0004)  
	float                                              AngularExtraDamping;                                        // 0x0018   (0x0004)  
	float                                              MaxTorque;                                                  // 0x001C   (0x0004)  
	float                                              LinearTargetVelocityMultiplier;                             // 0x0020   (0x0004)  
	float                                              AngularTargetVelocityMultiplier;                            // 0x0024   (0x0004)  
	bool                                               bEnabled : 1;                                               // 0x0028:0 (0x0001)  
	bool                                               bEnableLinearStrength : 1;                                  // 0x0028:1 (0x0001)  
	bool                                               bEnableLinearDampingRatio : 1;                              // 0x0028:2 (0x0001)  
	bool                                               bEnableLinearExtraDamping : 1;                              // 0x0028:3 (0x0001)  
	bool                                               bEnableMaxForce : 1;                                        // 0x0028:4 (0x0001)  
	bool                                               bEnableAngularStrength : 1;                                 // 0x0028:5 (0x0001)  
	bool                                               bEnableAngularDampingRatio : 1;                             // 0x0028:6 (0x0001)  
	bool                                               bEnableAngularExtraDamping : 1;                             // 0x0028:7 (0x0001)  
	bool                                               bEnableMaxTorque : 1;                                       // 0x0029:0 (0x0001)  
	bool                                               bEnableLinearTargetVelocityMultiplier : 1;                  // 0x0029:1 (0x0001)  
	bool                                               bEnableAngularTargetVelocityMultiplier : 1;                 // 0x0029:2 (0x0001)  
	bool                                               bEnablebEnabled : 1;                                        // 0x0029:3 (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x002A   (0x0002)  MISSED
};

/// Struct /Script/PhysicsControl.PhysicsControlMultiplier
/// Size: 0x0070 (0x000000 - 0x000070)
struct FPhysicsControlMultiplier
{ 
	FVector                                            LinearStrengthMultiplier;                                   // 0x0000   (0x0018)  
	FVector                                            LinearDampingRatioMultiplier;                               // 0x0018   (0x0018)  
	FVector                                            LinearExtraDampingMultiplier;                               // 0x0030   (0x0018)  
	FVector                                            MaxForceMultiplier;                                         // 0x0048   (0x0018)  
	float                                              AngularStrengthMultiplier;                                  // 0x0060   (0x0004)  
	float                                              AngularDampingRatioMultiplier;                              // 0x0064   (0x0004)  
	float                                              AngularExtraDampingMultiplier;                              // 0x0068   (0x0004)  
	float                                              MaxTorqueMultiplier;                                        // 0x006C   (0x0004)  
};

/// Struct /Script/PhysicsControl.PhysicsControlTarget
/// Size: 0x0068 (0x000000 - 0x000068)
struct FPhysicsControlTarget
{ 
	FVector                                            TargetPosition;                                             // 0x0000   (0x0018)  
	FVector                                            TargetVelocity;                                             // 0x0018   (0x0018)  
	FRotator                                           TargetOrientation;                                          // 0x0030   (0x0018)  
	FVector                                            TargetAngularVelocity;                                      // 0x0048   (0x0018)  
	bool                                               bApplyControlPointToTarget;                                 // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0061   (0x0007)  MISSED
};

/// Struct /Script/PhysicsControl.PhysicsControl
/// Size: 0x0148 (0x000000 - 0x000148)
struct FPhysicsControl
{ 
	class UMeshComponent*                              ParentMeshComponent;                                        // 0x0000   (0x0008)  
	FName                                              ParentBoneName;                                             // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	class UMeshComponent*                              ChildMeshComponent;                                         // 0x0010   (0x0008)  
	FName                                              ChildBoneName;                                              // 0x0018   (0x0004)  
	FPhysicsControlData                                ControlData;                                                // 0x001C   (0x002C)  
	FPhysicsControlMultiplier                          ControlMultiplier;                                          // 0x0048   (0x0070)  
	FPhysicsControlTarget                              ControlTarget;                                              // 0x00B8   (0x0068)  
	FPhysicsControlSettings                            ControlSettings;                                            // 0x0120   (0x0028)  
};

/// Struct /Script/PhysicsControl.PhysicsControlLimbBones
/// Size: 0x0020 (0x000000 - 0x000020)
struct FPhysicsControlLimbBones
{ 
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Struct /Script/PhysicsControl.PhysicsControlNames
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPhysicsControlNames
{ 
	TArray<FName>                                      Names;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/PhysicsControl.RigidBodySetupData
/// Size: 0x0070 (0x000000 - 0x000070)
struct FRigidBodySetupData
{ 
	TArray<FPhysicsControlLimbSetupData>               LimbSetupData;                                              // 0x0000   (0x0010)  
	FPhysicsControlData                                DefaultWorldSpaceControlData;                               // 0x0010   (0x002C)  
	FPhysicsControlData                                DefaultParentSpaceControlData;                              // 0x003C   (0x002C)  
	FPhysicsControlModifierData                        DefaultBodyModifierData;                                    // 0x0068   (0x0008)  
};

/// Struct /Script/PhysicsControl.RigidBodyControl
/// Size: 0x0034 (0x000000 - 0x000034)
struct FRigidBodyControl
{ 
	FName                                              ParentBoneName;                                             // 0x0000   (0x0004)  
	FName                                              ChildBoneName;                                              // 0x0004   (0x0004)  
	FPhysicsControlData                                ControlData;                                                // 0x0008   (0x002C)  
};

/// Struct /Script/PhysicsControl.RigidBodyControlCreation
/// Size: 0x0048 (0x000000 - 0x000048)
struct FRigidBodyControlCreation
{ 
	FRigidBodyControl                                  Control;                                                    // 0x0000   (0x0034)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	TArray<FName>                                      Sets;                                                       // 0x0038   (0x0010)  
};

/// Struct /Script/PhysicsControl.RigidBodyModifier
/// Size: 0x0020 (0x000000 - 0x000020)
struct FRigidBodyModifier
{ 
	FName                                              BoneName;                                                   // 0x0000   (0x0004)  
	FPhysicsControlModifierData                        ModifierData;                                               // 0x0004   (0x0008)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FName>                                      Sets;                                                       // 0x0010   (0x0010)  
};

/// Struct /Script/PhysicsControl.RigidBodyModifierCreation
/// Size: 0x0030 (0x000000 - 0x000030)
struct FRigidBodyModifierCreation
{ 
	FRigidBodyModifier                                 Modifier;                                                   // 0x0000   (0x0020)  
	TArray<FName>                                      Sets;                                                       // 0x0020   (0x0010)  
};

/// Struct /Script/PhysicsControl.RigidBodyControlAndBodyModifierCreations
/// Size: 0x0020 (0x000000 - 0x000020)
struct FRigidBodyControlAndBodyModifierCreations
{ 
	TArray<FRigidBodyControlCreation>                  Controls;                                                   // 0x0000   (0x0010)  
	TArray<FRigidBodyModifierCreation>                 Modifiers;                                                  // 0x0010   (0x0010)  
};

/// Struct /Script/PhysicsControl.PhysicsControlNamedControlParameters
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPhysicsControlNamedControlParameters
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	FPhysicsControlSparseData                          Data;                                                       // 0x0004   (0x002C)  
};

/// Struct /Script/PhysicsControl.PhysicsControlNamedModifierParameters
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPhysicsControlNamedModifierParameters
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	FPhysicsControlModifierSparseData                  Data;                                                       // 0x0004   (0x000C)  
};

/// Struct /Script/PhysicsControl.PhysicsControlControlAndModifierParameters
/// Size: 0x0020 (0x000000 - 0x000020)
struct FPhysicsControlControlAndModifierParameters
{ 
	TArray<FPhysicsControlNamedControlParameters>      ControlParameters;                                          // 0x0000   (0x0010)  
	TArray<FPhysicsControlNamedModifierParameters>     ModifierParameters;                                         // 0x0010   (0x0010)  
};

/// Struct /Script/PhysicsControl.PhysicsControlControlAndModifierUpdates
/// Size: 0x0020 (0x000000 - 0x000020)
struct FPhysicsControlControlAndModifierUpdates
{ 
	TArray<FPhysicsControlNamedControlParameters>      ControlParameters;                                          // 0x0000   (0x0010)  
	TArray<FPhysicsControlNamedModifierParameters>     ModifierParameters;                                         // 0x0010   (0x0010)  
};

/// Struct /Script/PhysicsControl.RigidBodyControlTarget
/// Size: 0x0050 (0x000000 - 0x000050)
struct FRigidBodyControlTarget
{ 
	FVector                                            TargetPosition;                                             // 0x0000   (0x0018)  
	FRotator                                           TargetOrientation;                                          // 0x0018   (0x0018)  
	FVector                                            TargetPoint;                                                // 0x0030   (0x0018)  
	bool                                               bUseSkeletalAnimation : 1;                                  // 0x0048:0 (0x0001)  
	bool                                               bUseTargetPoint : 1;                                        // 0x0048:1 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Struct /Script/PhysicsControl.RigidBodyControlTargets
/// Size: 0x0050 (0x000000 - 0x000050)
struct FRigidBodyControlTargets
{ 
	SDK_UNDEFINED(80,12184) /* TMap<FName, FRigidBodyControlTarget> */ __um(Targets);                              // 0x0000   (0x0050)  
};

/// Struct /Script/PhysicsControl.RigidBodyKinematicTarget
/// Size: 0x0038 (0x000000 - 0x000038)
struct FRigidBodyKinematicTarget
{ 
	FVector                                            TargetPosition;                                             // 0x0000   (0x0018)  
	FRotator                                           TargetOrientation;                                          // 0x0018   (0x0018)  
	bool                                               bUseSkeletalAnimation : 1;                                  // 0x0030:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/PhysicsControl.RigidBodyKinematicTargets
/// Size: 0x0050 (0x000000 - 0x000050)
struct FRigidBodyKinematicTargets
{ 
	SDK_UNDEFINED(80,12185) /* TMap<FName, FRigidBodyKinematicTarget> */ __um(Targets);                            // 0x0000   (0x0050)  
};

/// Struct /Script/PhysicsControl.AnimNode_RigidBodyWithControl
/// Size: 0x0CC8 (0x0000C8 - 0x000D90)
struct FAnimNode_RigidBodyWithControl : FAnimNode_SkeletalControlBase
{ 
	class UPhysicsAsset*                               OverridePhysicsAsset;                                       // 0x00C8   (0x0008)  
	unsigned char                                      UnknownData00_5[0x128];                                     // 0x00D0   (0x0128)  MISSED
	FVector                                            OverrideWorldGravity;                                       // 0x01F8   (0x0018)  
	FVector                                            ExternalForce;                                              // 0x0210   (0x0018)  
	FVector                                            ComponentLinearAccScale;                                    // 0x0228   (0x0018)  
	FVector                                            ComponentLinearVelScale;                                    // 0x0240   (0x0018)  
	FVector                                            ComponentAppliedLinearAccClamp;                             // 0x0258   (0x0018)  
	FSimSpaceSettings                                  SimSpaceSettings;                                           // 0x0270   (0x0060)  
	float                                              CachedBoundsScale;                                          // 0x02D0   (0x0004)  
	bool                                               UpdateCacheEveryFrame;                                      // 0x02D4   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x02D5   (0x0003)  MISSED
	FBoneReference                                     BaseBoneRef;                                                // 0x02D8   (0x000C)  
	SDK_UNDEFINED(1,12186) /* TEnumAsByte<ECollisionChannel> */ __um(OverlapChannel);                              // 0x02E4   (0x0001)  
	ESimulationSpace                                   SimulationSpace;                                            // 0x02E5   (0x0001)  
	bool                                               bForceDisableCollisionBetweenConstraintBodies;              // 0x02E6   (0x0001)  
	bool                                               bUseExternalClothCollision;                                 // 0x02E7   (0x0001)  
	unsigned char                                      UnknownData02_5[0x1];                                       // 0x02E8   (0x0001)  MISSED
	bool                                               bEnableWorldGeometry : 1;                                   // 0x02E9:0 (0x0001)  
	bool                                               bOverrideWorldGravity : 1;                                  // 0x02E9:1 (0x0001)  
	bool                                               bTransferBoneVelocities : 1;                                // 0x02E9:2 (0x0001)  
	bool                                               bFreezeIncomingPoseOnStart : 1;                             // 0x02E9:3 (0x0001)  
	bool                                               bModifyConstraintTransformsToMatchSkeleton : 1;             // 0x02E9:4 (0x0001)  
	unsigned char                                      UnknownData03_4[0x2];                                       // 0x02EA   (0x0002)  MISSED
	float                                              WorldSpaceMinimumScale;                                     // 0x02EC   (0x0004)  
	float                                              EvaluationResetTime;                                        // 0x02F0   (0x0004)  
	bool                                               bEnableControls;                                            // 0x02F4   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x02F5   (0x0003)  MISSED
	SDK_UNDEFINED(80,12187) /* TMap<FName, FName> */   __um(BoneToBodyNameMap);                                    // 0x02F8   (0x0050)  
	FRigidBodySetupData                                SetupData;                                                  // 0x0348   (0x0070)  
	FRigidBodyControlAndBodyModifierCreations          AdditionalControlsAndBodyModifiers;                         // 0x03B8   (0x0020)  
	FPhysicsControlSetUpdates                          AdditionalSets;                                             // 0x03D8   (0x0020)  
	FPhysicsControlControlAndModifierParameters        InitialControlAndBodyModifierUpdates;                       // 0x03F8   (0x0020)  
	FPhysicsControlControlAndModifierParameters        ControlAndModifierParameters;                               // 0x0418   (0x0020)  
	FPhysicsControlControlAndModifierUpdates           ControlAndModifierUpdates;                                  // 0x0438   (0x0020)  
	FRigidBodyControlTargets                           ControlTargets;                                             // 0x0458   (0x0050)  
	FRigidBodyKinematicTargets                         KinematicTargets;                                           // 0x04A8   (0x0050)  
	class USkeletalMesh*                               PhysicsAssetAuthoredSkeletalMesh;                           // 0x04F8   (0x0008)  
	FName                                              ConstraintProfile;                                          // 0x0500   (0x0004)  
	unsigned char                                      UnknownData05_5[0x5C];                                      // 0x0504   (0x005C)  MISSED
	ESimulationTiming                                  SimulationTiming;                                           // 0x0560   (0x0001)  
	unsigned char                                      UnknownData06_6[0x82F];                                     // 0x0561   (0x082F)  MISSED
};

/// Struct /Script/PhysicsControl.InitialPhysicsControl
/// Size: 0x0150 (0x000000 - 0x000150)
struct FInitialPhysicsControl
{ 
	class AActor*                                      ParentActor;                                                // 0x0000   (0x0008)  
	FName                                              ParentMeshComponentName;                                    // 0x0008   (0x0004)  
	FName                                              ParentBoneName;                                             // 0x000C   (0x0004)  
	class AActor*                                      ChildActor;                                                 // 0x0010   (0x0008)  
	FName                                              ChildMeshComponentName;                                     // 0x0018   (0x0004)  
	FName                                              ChildBoneName;                                              // 0x001C   (0x0004)  
	FPhysicsControlData                                ControlData;                                                // 0x0020   (0x002C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	FPhysicsControlMultiplier                          ControlMultiplier;                                          // 0x0050   (0x0070)  
	FPhysicsControlTarget                              ControlTarget;                                              // 0x00C0   (0x0068)  
	FPhysicsControlSettings                            ControlSettings;                                            // 0x0128   (0x0028)  
};

/// Struct /Script/PhysicsControl.InitialBodyModifier
/// Size: 0x0070 (0x000000 - 0x000070)
struct FInitialBodyModifier
{ 
	class AActor*                                      Actor;                                                      // 0x0000   (0x0008)  
	FName                                              MeshComponentName;                                          // 0x0008   (0x0004)  
	FName                                              BoneName;                                                   // 0x000C   (0x0004)  
	EPhysicsMovementType                               MovementType;                                               // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0011   (0x0007)  MISSED
	float                                              GravityMultiplier;                                          // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	FVector                                            KinematicTargetPosition;                                    // 0x0020   (0x0018)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0038   (0x0008)  MISSED
	FQuat                                              KinematicTargetOrientation;                                 // 0x0040   (0x0020)  
	bool                                               bUseSkeletalAnimation;                                      // 0x0060   (0x0001)  
	unsigned char                                      UnknownData03_6[0xF];                                       // 0x0061   (0x000F)  MISSED
};

