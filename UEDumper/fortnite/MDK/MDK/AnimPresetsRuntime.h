
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameFeatures

/// Class /Script/AnimPresetsRuntime.AnimPreset
/// Size: 0x0000 (0x000028 - 0x000028)
class UAnimPreset : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AnimPresetsRuntime.AnimPreset_BasicLocomotion
/// Size: 0x0050 (0x000028 - 0x000078)
class UAnimPreset_BasicLocomotion : public UAnimPreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FAnimPreset_SingleAnimationData)           Idle                                                        OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FAnimPreset_SingleAnimationData)           MoveForward                                                 OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FAnimPreset_SingleAnimationData)           MoveBackward                                                OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	SMember(FAnimPreset_SingleAnimationData)           MoveLeft                                                    OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	SMember(FAnimPreset_SingleAnimationData)           MoveRight                                                   OFFSET(getStruct<T>, {0x68, 16, 0, 0})
};

/// Class /Script/AnimPresetsRuntime.GameFeatureAction_AnimPreset
/// Size: 0x0060 (0x000028 - 0x000088)
class UGameFeatureAction_AnimPreset : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TWeakObjectPtr<UClass*>)                   AnimBP_Preset_BasicLocomotion                               OFFSET(get<T>, {0x28, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   AnimBP_CopyPoseFromMesh                                     OFFSET(get<T>, {0x48, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   AnimBP_RetargetPoseFromMesh                                 OFFSET(get<T>, {0x68, 32, 0, 0})
};

/// Struct /Script/AnimPresetsRuntime.AnimPresetRetargetData
/// Size: 0x0040 (0x000000 - 0x000040)
class FAnimPresetRetargetData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TWeakObjectPtr<UIKRetargeter*>)            IKRetargeter                                                OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(TWeakObjectPtr<USkeletalMesh*>)            SourceSkeletalMesh                                          OFFSET(get<T>, {0x20, 32, 0, 0})
};

/// Struct /Script/AnimPresetsRuntime.AnimPreset_SingleAnimationData
/// Size: 0x0010 (0x000000 - 0x000010)
class FAnimPreset_SingleAnimationData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UAnimSequence*)                      Animation                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     PlayRate                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
};

