
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
/// dependency: FortniteGame
/// dependency: GameFeatures
/// dependency: PhysicsControl

/// Class /Script/CharacterDynamicsControlRuntime.CharacterDynamicsControlBPLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UCharacterDynamicsControlBPLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/CharacterDynamicsControlRuntime.CharacterDynamicsControlBPLibrary.UpdateRigidBodyWithControlNodeParameters
	// FRigidBodyWithControlReference UpdateRigidBodyWithControlNodeParameters(FAnimUpdateContext& UpdateContext, FRigidBodyWithControlReference& RigidBodyWithControl); // [0xb4b3544] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/CharacterDynamicsControlRuntime.CharacterDynamicsControlBPLibrary.SetProperty
	// void SetProperty(class UFortAnimInstance* InAnimInstance, FName InPropertyName, bool InValue);                        // [0xb4b32f0] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/CharacterDynamicsControlRuntime.CharacterDynamicsControlBPLibrary.GetProperty
	// bool GetProperty(class UFortAnimInstance* InAnimInstance, FName InPropertyName);                                      // [0xb4b30b0] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
	// Function /Script/CharacterDynamicsControlRuntime.CharacterDynamicsControlBPLibrary.GetCharacterState
	// FName GetCharacterState(class UFortAnimInstance* InAnimInstance);                                                     // [0xb4b2fc8] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
};

/// Class /Script/CharacterDynamicsControlRuntime.CharacterDynamicsControlGameFeatureData
/// Size: 0x0010 (0x000530 - 0x000540)
class UCharacterDynamicsControlGameFeatureData : public UFortGameFeatureData
{ 
public:
	class UFortCharacterDynamicsStateLogic*            DefaultStateLogic;                                          // 0x0530   (0x0008)  
	class UFortCharacterDynamicsParameters*            DefaultParameters;                                          // 0x0538   (0x0008)  
};

/// Struct /Script/CharacterDynamicsControlRuntime.FortRigidBodyWithControlStateTransitionParameters
/// Size: 0x0028 (0x000000 - 0x000028)
struct FFortRigidBodyWithControlStateTransitionParameters
{ 
	FPhysicsControlControlAndModifierParameters        ControlAndModifierParameters;                               // 0x0000   (0x0020)  
	float                                              TransitionTimeSeconds;                                      // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/CharacterDynamicsControlRuntime.FortGravityOverrideParameters
/// Size: 0x0068 (0x000000 - 0x000068)
struct FFortGravityOverrideParameters
{ 
	FVector                                            WindFrequency;                                              // 0x0000   (0x0018)  
	FVector                                            WindAmplitude;                                              // 0x0018   (0x0018)  
	FVector                                            WindOffset;                                                 // 0x0030   (0x0018)  
	FVector                                            GravityOverride;                                            // 0x0048   (0x0018)  
	FName                                              JointName;                                                  // 0x0060   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0064   (0x0004)  MISSED
};

/// Struct /Script/CharacterDynamicsControlRuntime.FortRigidBodyAnimNodeParameters
/// Size: 0x0090 (0x000000 - 0x000090)
struct FFortRigidBodyAnimNodeParameters
{ 
	FVector                                            ComponentLinearAccScale;                                    // 0x0000   (0x0018)  
	FVector                                            ComponentLinearVelScale;                                    // 0x0018   (0x0018)  
	FSimSpaceSettings                                  SimSpaceSettings;                                           // 0x0030   (0x0060)  
};

/// Class /Script/CharacterDynamicsControlRuntime.FortCharacterDynamicsParameters
/// Size: 0x0070 (0x000030 - 0x0000A0)
class UFortCharacterDynamicsParameters : public UPrimaryDataAsset
{ 
public:
	TArray<FName>                                      StateNames;                                                 // 0x0030   (0x0010)  
	TArray<FClothParameters>                           ClothParameters;                                            // 0x0040   (0x0010)  
	TArray<FWindGustParameters>                        WindGustParameters;                                         // 0x0050   (0x0010)  
	TArray<FPhysicsControlControlAndModifierParameters> RBWCControlAndModifierParameters;                          // 0x0060   (0x0010)  
	TArray<FFortRigidBodyWithControlStateTransitionParameters> RBWCTransitionParameters;                           // 0x0070   (0x0010)  
	TArray<FFortGravityOverrideParameters>             GravityOverrideParameters;                                  // 0x0080   (0x0010)  
	TArray<FFortRigidBodyAnimNodeParameters>           RigidBodyAnimNodeParameters;                                // 0x0090   (0x0010)  
};

/// Struct /Script/CharacterDynamicsControlRuntime.BinaryDecisionTreeElement
/// Size: 0x0018 (0x000000 - 0x000018)
struct FBinaryDecisionTreeElement
{ 
	int32_t                                            Value;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	int64_t                                            BitMask;                                                    // 0x0008   (0x0008)  
	int64_t                                            BitSet;                                                     // 0x0010   (0x0008)  
};

/// Struct /Script/CharacterDynamicsControlRuntime.BinaryDecisionTree
/// Size: 0x0010 (0x000000 - 0x000010)
struct FBinaryDecisionTree
{ 
	TArray<FBinaryDecisionTreeElement>                 TreeStructure;                                              // 0x0000   (0x0010)  
};

/// Class /Script/CharacterDynamicsControlRuntime.FortCharacterDynamicsStateLogic
/// Size: 0x0030 (0x000030 - 0x000060)
class UFortCharacterDynamicsStateLogic : public UPrimaryDataAsset
{ 
public:
	TArray<FName>                                      BlueprintCharacterPropertyNames;                            // 0x0030   (0x0010)  
	TArray<FName>                                      ActivityStateNames;                                         // 0x0040   (0x0010)  
	FBinaryDecisionTree                                ActivityStateBinaryDecisionTree;                            // 0x0050   (0x0010)  
};

/// Class /Script/CharacterDynamicsControlRuntime.FortCharacterDynamicsComponent
/// Size: 0x00E0 (0x0000A0 - 0x000180)
class UFortCharacterDynamicsComponent : public UActorComponent
{ 
public:
	class UFortCharacterDynamicsStateLogic*            StateLogic;                                                 // 0x00A0   (0x0008)  
	class UFortCharacterDynamicsParameters*            Parameters;                                                 // 0x00A8   (0x0008)  
	unsigned char                                      UnknownData00_6[0xD0];                                      // 0x00B0   (0x00D0)  MISSED


	/// Functions
	// Function /Script/CharacterDynamicsControlRuntime.FortCharacterDynamicsComponent.StateName
	// FName StateName();                                                                                                    // [0xb4b3518] Final|Native|Public|BlueprintCallable 
	// Function /Script/CharacterDynamicsControlRuntime.FortCharacterDynamicsComponent.StateIndex
	// int32_t StateIndex();                                                                                                 // [0xb4b34e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CharacterDynamicsControlRuntime.FortCharacterDynamicsComponent.SetProperty
	// void SetProperty(FName PropertyName, bool PropertyValue);                                                             // [0xb4b341c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CharacterDynamicsControlRuntime.FortCharacterDynamicsComponent.PreviousStateName
	// FName PreviousStateName();                                                                                            // [0xb4b32c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CharacterDynamicsControlRuntime.FortCharacterDynamicsComponent.ParameterIndex
	// int32_t ParameterIndex();                                                                                             // [0xb4b3290] Final|Native|Public|BlueprintCallable 
	// Function /Script/CharacterDynamicsControlRuntime.FortCharacterDynamicsComponent.GetTransitionParameters
	// FPhysicsControlControlAndModifierParameters GetTransitionParameters();                                                // [0xb4b3254] Final|Native|Public|BlueprintCallable 
	// Function /Script/CharacterDynamicsControlRuntime.FortCharacterDynamicsComponent.GetTimeInCurrentStateSeconds
	// float GetTimeInCurrentStateSeconds();                                                                                 // [0xb4b322c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CharacterDynamicsControlRuntime.FortCharacterDynamicsComponent.GetProperty
	// bool GetProperty(FName PropertyName);                                                                                 // [0xb4b31a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CharacterDynamicsControlRuntime.FortCharacterDynamicsComponent.GetGravityOverrideVector
	// FVector GetGravityOverrideVector();                                                                                   // [0xb4b3078] Final|Native|Public|HasDefaults|BlueprintCallable 
};

