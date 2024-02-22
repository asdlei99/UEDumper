
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

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
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/CharacterDynamicsControlRuntime.CharacterDynamicsControlBPLibrary.UpdateRigidBodyWithControlNodeParameters
	// FRigidBodyWithControlReference UpdateRigidBodyWithControlNodeParameters(FAnimUpdateContext& UpdateContext, FRigidBodyWithControlReference& RigidBodyWithControl); // [0xb4b3544] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/CharacterDynamicsControlRuntime.CharacterDynamicsControlBPLibrary.SetProperty
	// void SetProperty(class UFortAnimInstance* InAnimInstance, FName InPropertyName, bool InValue);                           // [0xb4b32f0] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/CharacterDynamicsControlRuntime.CharacterDynamicsControlBPLibrary.GetProperty
	// bool GetProperty(class UFortAnimInstance* InAnimInstance, FName InPropertyName);                                         // [0xb4b30b0] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
	// Function /Script/CharacterDynamicsControlRuntime.CharacterDynamicsControlBPLibrary.GetCharacterState
	// FName GetCharacterState(class UFortAnimInstance* InAnimInstance);                                                        // [0xb4b2fc8] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
};

/// Class /Script/CharacterDynamicsControlRuntime.CharacterDynamicsControlGameFeatureData
/// Size: 0x0010 (0x000530 - 0x000540)
class UCharacterDynamicsControlGameFeatureData : public UFortGameFeatureData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1344;

public:
	CMember(class UFortCharacterDynamicsStateLogic*)   DefaultStateLogic                                           OFFSET(get<T>, {0x530, 8, 0, 0})
	CMember(class UFortCharacterDynamicsParameters*)   DefaultParameters                                           OFFSET(get<T>, {0x538, 8, 0, 0})
};

/// Class /Script/CharacterDynamicsControlRuntime.FortCharacterDynamicsParameters
/// Size: 0x0070 (0x000030 - 0x0000A0)
class UFortCharacterDynamicsParameters : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(TArray<FName>)                             StateNames                                                  OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FClothParameters>)                  ClothParameters                                             OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FWindGustParameters>)               WindGustParameters                                          OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<FPhysicsControlControlAndModifierParameters>) RBWCControlAndModifierParameters                  OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<FFortRigidBodyWithControlStateTransitionParameters>) RBWCTransitionParameters                   OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<FFortGravityOverrideParameters>)    GravityOverrideParameters                                   OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TArray<FFortRigidBodyAnimNodeParameters>)  RigidBodyAnimNodeParameters                                 OFFSET(get<T>, {0x90, 16, 0, 0})
};

/// Class /Script/CharacterDynamicsControlRuntime.FortCharacterDynamicsStateLogic
/// Size: 0x0030 (0x000030 - 0x000060)
class UFortCharacterDynamicsStateLogic : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<FName>)                             BlueprintCharacterPropertyNames                             OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FName>)                             ActivityStateNames                                          OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FBinaryDecisionTree)                       ActivityStateBinaryDecisionTree                             OFFSET(getStruct<T>, {0x50, 16, 0, 0})
};

/// Class /Script/CharacterDynamicsControlRuntime.FortCharacterDynamicsComponent
/// Size: 0x00E0 (0x0000A0 - 0x000180)
class UFortCharacterDynamicsComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	CMember(class UFortCharacterDynamicsStateLogic*)   StateLogic                                                  OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(class UFortCharacterDynamicsParameters*)   Parameters                                                  OFFSET(get<T>, {0xA8, 8, 0, 0})


	/// Functions
	// Function /Script/CharacterDynamicsControlRuntime.FortCharacterDynamicsComponent.StateName
	// FName StateName();                                                                                                       // [0xb4b3518] Final|Native|Public|BlueprintCallable 
	// Function /Script/CharacterDynamicsControlRuntime.FortCharacterDynamicsComponent.StateIndex
	// int32_t StateIndex();                                                                                                    // [0xb4b34e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CharacterDynamicsControlRuntime.FortCharacterDynamicsComponent.SetProperty
	// void SetProperty(FName PropertyName, bool PropertyValue);                                                                // [0xb4b341c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CharacterDynamicsControlRuntime.FortCharacterDynamicsComponent.PreviousStateName
	// FName PreviousStateName();                                                                                               // [0xb4b32c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CharacterDynamicsControlRuntime.FortCharacterDynamicsComponent.ParameterIndex
	// int32_t ParameterIndex();                                                                                                // [0xb4b3290] Final|Native|Public|BlueprintCallable 
	// Function /Script/CharacterDynamicsControlRuntime.FortCharacterDynamicsComponent.GetTransitionParameters
	// FPhysicsControlControlAndModifierParameters GetTransitionParameters();                                                   // [0xb4b3254] Final|Native|Public|BlueprintCallable 
	// Function /Script/CharacterDynamicsControlRuntime.FortCharacterDynamicsComponent.GetTimeInCurrentStateSeconds
	// float GetTimeInCurrentStateSeconds();                                                                                    // [0xb4b322c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CharacterDynamicsControlRuntime.FortCharacterDynamicsComponent.GetProperty
	// bool GetProperty(FName PropertyName);                                                                                    // [0xb4b31a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CharacterDynamicsControlRuntime.FortCharacterDynamicsComponent.GetGravityOverrideVector
	// FVector GetGravityOverrideVector();                                                                                      // [0xb4b3078] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/CharacterDynamicsControlRuntime.BinaryDecisionTreeElement
/// Size: 0x0018 (0x000000 - 0x000018)
class FBinaryDecisionTreeElement : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   Value                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int64_t)                                   BitMask                                                     OFFSET(get<int64_t>, {0x8, 8, 0, 0})
	DMember(int64_t)                                   BitSet                                                      OFFSET(get<int64_t>, {0x10, 8, 0, 0})
};

/// Struct /Script/CharacterDynamicsControlRuntime.BinaryDecisionTree
/// Size: 0x0010 (0x000000 - 0x000010)
class FBinaryDecisionTree : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FBinaryDecisionTreeElement>)        TreeStructure                                               OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/CharacterDynamicsControlRuntime.FortGravityOverrideParameters
/// Size: 0x0068 (0x000000 - 0x000068)
class FFortGravityOverrideParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FVector)                                   WindFrequency                                               OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   WindAmplitude                                               OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FVector)                                   WindOffset                                                  OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FVector)                                   GravityOverride                                             OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	SMember(FName)                                     JointName                                                   OFFSET(getStruct<T>, {0x60, 4, 0, 0})
};

/// Struct /Script/CharacterDynamicsControlRuntime.FortRigidBodyAnimNodeParameters
/// Size: 0x0090 (0x000000 - 0x000090)
class FFortRigidBodyAnimNodeParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FVector)                                   ComponentLinearAccScale                                     OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   ComponentLinearVelScale                                     OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FSimSpaceSettings)                         SimSpaceSettings                                            OFFSET(getStruct<T>, {0x30, 96, 0, 0})
};

/// Struct /Script/CharacterDynamicsControlRuntime.FortRigidBodyWithControlStateTransitionParameters
/// Size: 0x0028 (0x000000 - 0x000028)
class FFortRigidBodyWithControlStateTransitionParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FPhysicsControlControlAndModifierParameters) ControlAndModifierParameters                              OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	DMember(float)                                     TransitionTimeSeconds                                       OFFSET(get<float>, {0x20, 4, 0, 0})
};

