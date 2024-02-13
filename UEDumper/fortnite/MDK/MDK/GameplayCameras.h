
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: TemplateSequence

/// Class /Script/GameplayCameras.LegacyCameraShake
/// Size: 0x0110 (0x0000E0 - 0x0001F0)
class ULegacyCameraShake : public UCameraShakeBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	DMember(float)                                     OscillationDuration                                         OFFSET(get<float>, {0xD8, 4, 0, 0})
	DMember(float)                                     OscillationBlendInTime                                      OFFSET(get<float>, {0xDC, 4, 0, 0})
	DMember(float)                                     OscillationBlendOutTime                                     OFFSET(get<float>, {0xE0, 4, 0, 0})
	SMember(FROscillator)                              RotOscillation                                              OFFSET(getStruct<T>, {0xE4, 36, 0, 0})
	SMember(FVOscillator)                              LocOscillation                                              OFFSET(getStruct<T>, {0x108, 36, 0, 0})
	SMember(FFOscillator)                              FOVOscillation                                              OFFSET(getStruct<T>, {0x12C, 12, 0, 0})
	DMember(float)                                     AnimPlayRate                                                OFFSET(get<float>, {0x138, 4, 0, 0})
	DMember(float)                                     AnimScale                                                   OFFSET(get<float>, {0x13C, 4, 0, 0})
	DMember(float)                                     AnimBlendInTime                                             OFFSET(get<float>, {0x140, 4, 0, 0})
	DMember(float)                                     AnimBlendOutTime                                            OFFSET(get<float>, {0x144, 4, 0, 0})
	DMember(float)                                     RandomAnimSegmentDuration                                   OFFSET(get<float>, {0x148, 4, 0, 0})
	CMember(class UCameraAnimationSequence*)           AnimSequence                                                OFFSET(get<T>, {0x150, 8, 0, 0})
	DMember(bool)                                      bRandomAnimSegment                                          OFFSET(get<bool>, {0x158, 1, 1, 0})
	DMember(float)                                     OscillatorTimeRemaining                                     OFFSET(get<float>, {0x15C, 4, 0, 0})
	CMember(class USequenceCameraShakePattern*)        SequenceShakePattern                                        OFFSET(get<T>, {0x1D8, 8, 0, 0})


	/// Functions
	// Function /Script/GameplayCameras.LegacyCameraShake.StartLegacyCameraShakeFromSource
	// class ULegacyCameraShake* StartLegacyCameraShakeFromSource(class APlayerCameraManager* PlayerCameraManager, class UClass* ShakeClass, class UCameraShakeSourceComponent* SourceComponent, float Scale, ECameraShakePlaySpace Playspace, FRotator UserPlaySpaceRot); // [0x789d72c] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameplayCameras.LegacyCameraShake.StartLegacyCameraShake
	// class ULegacyCameraShake* StartLegacyCameraShake(class APlayerCameraManager* PlayerCameraManager, class UClass* ShakeClass, float Scale, ECameraShakePlaySpace Playspace, FRotator UserPlaySpaceRot); // [0x789d3e8] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameplayCameras.LegacyCameraShake.ReceiveStopShake
	// void ReceiveStopShake(bool bImmediately);                                                                                // [0x130d900] Event|Public|BlueprintEvent 
	// Function /Script/GameplayCameras.LegacyCameraShake.ReceivePlayShake
	// void ReceivePlayShake(float Scale);                                                                                      // [0x130d900] Event|Public|BlueprintEvent 
	// Function /Script/GameplayCameras.LegacyCameraShake.ReceiveIsFinished
	// bool ReceiveIsFinished();                                                                                                // [0x2ef8cdc] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/GameplayCameras.LegacyCameraShake.BlueprintUpdateCameraShake
	// void BlueprintUpdateCameraShake(float DeltaTime, float Alpha, FMinimalViewInfo& POV, FMinimalViewInfo& ModifiedPOV);     // [0x130d900] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/GameplayCameras.LegacyCameraShakePattern
/// Size: 0x0000 (0x000028 - 0x000028)
class ULegacyCameraShakePattern : public UCameraShakePattern
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/GameplayCameras.LegacyCameraShakeFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class ULegacyCameraShakeFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameplayCameras.LegacyCameraShakeFunctionLibrary.Conv_LegacyCameraShake
	// class ULegacyCameraShake* Conv_LegacyCameraShake(class UCameraShakeBase* CameraShake);                                   // [0x2e3c084] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/GameplayCameras.CameraAnimationCameraModifier
/// Size: 0x0018 (0x000048 - 0x000060)
class UCameraAnimationCameraModifier : public UCameraModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<FActiveCameraAnimationInfo>)        ActiveAnimations                                            OFFSET(get<T>, {0x48, 16, 0, 0})
	DMember(uint16_t)                                  NextInstanceSerialNumber                                    OFFSET(get<uint16_t>, {0x58, 2, 0, 0})


	/// Functions
	// Function /Script/GameplayCameras.CameraAnimationCameraModifier.StopCameraAnimation
	// void StopCameraAnimation(FCameraAnimationHandle& Handle, bool bImmediate);                                               // [0x789e030] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayCameras.CameraAnimationCameraModifier.StopAllCameraAnimationsOf
	// void StopAllCameraAnimationsOf(class UCameraAnimationSequence* Sequence, bool bImmediate);                               // [0x789dd14] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayCameras.CameraAnimationCameraModifier.StopAllCameraAnimations
	// void StopAllCameraAnimations(bool bImmediate);                                                                           // [0x789daec] Native|Public|BlueprintCallable 
	// Function /Script/GameplayCameras.CameraAnimationCameraModifier.PlayCameraAnimation
	// FCameraAnimationHandle PlayCameraAnimation(class UCameraAnimationSequence* Sequence, FCameraAnimationParams Params);     // [0x789ce98] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayCameras.CameraAnimationCameraModifier.IsCameraAnimationActive
	// bool IsCameraAnimationActive(FCameraAnimationHandle& Handle);                                                            // [0x789ccd8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromPlayerController
	// class UCameraAnimationCameraModifier* GetCameraAnimationCameraModifierFromPlayerController(class APlayerController* PlayerController); // [0x789cc18] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromID
	// class UCameraAnimationCameraModifier* GetCameraAnimationCameraModifierFromID(class UObject* WorldContextObject, int32_t ControllerId); // [0x789cad0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifier
	// class UCameraAnimationCameraModifier* GetCameraAnimationCameraModifier(class UObject* WorldContextObject, int32_t PlayerIndex); // [0x789c988] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/GameplayCameras.GameplayCamerasFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameplayCamerasFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameplayCameras.GameplayCamerasFunctionLibrary.Conv_CameraShakePlaySpace
	// ECameraShakePlaySpace Conv_CameraShakePlaySpace(ECameraAnimationPlaySpace CameraAnimationPlaySpace);                     // [0x789c8bc] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayCameras.GameplayCamerasFunctionLibrary.Conv_CameraAnimationPlaySpace
	// ECameraAnimationPlaySpace Conv_CameraAnimationPlaySpace(ECameraShakePlaySpace CameraShakePlaySpace);                     // [0x789c8bc] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayCameras.GameplayCamerasFunctionLibrary.Conv_CameraAnimationCameraModifier
	// class UCameraAnimationCameraModifier* Conv_CameraAnimationCameraModifier(class APlayerCameraManager* PlayerCameraManager); // [0x789c7a4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/GameplayCameras.CompositeCameraShakePattern
/// Size: 0x0010 (0x000028 - 0x000038)
class UCompositeCameraShakePattern : public UCameraShakePattern
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<class UCameraShakePattern*>)        ChildPatterns                                               OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/GameplayCameras.DefaultCameraShakeBase
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UDefaultCameraShakeBase : public UCameraShakeBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/GameplayCameras.GameplayCamerasSubsystem
/// Size: 0x0000 (0x000030 - 0x000030)
class UGameplayCamerasSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Script/GameplayCameras.GameplayCamerasSubsystem.StopCameraAnimation
	// void StopCameraAnimation(class APlayerController* PlayerController, FCameraAnimationHandle& Handle, bool bImmediate);    // [0x789e1c8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayCameras.GameplayCamerasSubsystem.StopAllCameraAnimationsOf
	// void StopAllCameraAnimationsOf(class APlayerController* PlayerController, class UCameraAnimationSequence* Sequence, bool bImmediate); // [0x789de54] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayCameras.GameplayCamerasSubsystem.StopAllCameraAnimations
	// void StopAllCameraAnimations(class APlayerController* PlayerController, bool bImmediate);                                // [0x789dbb4] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayCameras.GameplayCamerasSubsystem.PlayCameraAnimation
	// FCameraAnimationHandle PlayCameraAnimation(class APlayerController* PlayerController, class UCameraAnimationSequence* Sequence, FCameraAnimationParams Params); // [0x789d1e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayCameras.GameplayCamerasSubsystem.IsCameraAnimationActive
	// bool IsCameraAnimationActive(class APlayerController* PlayerController, FCameraAnimationHandle& Handle);                 // [0x789cd74] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/GameplayCameras.SimpleCameraShakePattern
/// Size: 0x0030 (0x000028 - 0x000058)
class USimpleCameraShakePattern : public UCameraShakePattern
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(float)                                     duration                                                    OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     BlendInTime                                                 OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     BlendOutTime                                                OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Class /Script/GameplayCameras.PerlinNoiseCameraShakePattern
/// Size: 0x0080 (0x000058 - 0x0000D8)
class UPerlinNoiseCameraShakePattern : public USimpleCameraShakePattern
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	DMember(float)                                     LocationAmplitudeMultiplier                                 OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     LocationFrequencyMultiplier                                 OFFSET(get<float>, {0x5C, 4, 0, 0})
	SMember(FPerlinNoiseShaker)                        X                                                           OFFSET(getStruct<T>, {0x60, 8, 0, 0})
	SMember(FPerlinNoiseShaker)                        Y                                                           OFFSET(getStruct<T>, {0x68, 8, 0, 0})
	SMember(FPerlinNoiseShaker)                        Z                                                           OFFSET(getStruct<T>, {0x70, 8, 0, 0})
	DMember(float)                                     RotationAmplitudeMultiplier                                 OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(float)                                     RotationFrequencyMultiplier                                 OFFSET(get<float>, {0x7C, 4, 0, 0})
	SMember(FPerlinNoiseShaker)                        pitch                                                       OFFSET(getStruct<T>, {0x80, 8, 0, 0})
	SMember(FPerlinNoiseShaker)                        Yaw                                                         OFFSET(getStruct<T>, {0x88, 8, 0, 0})
	SMember(FPerlinNoiseShaker)                        Roll                                                        OFFSET(getStruct<T>, {0x90, 8, 0, 0})
	SMember(FPerlinNoiseShaker)                        FOV                                                         OFFSET(getStruct<T>, {0x98, 8, 0, 0})
};

/// Class /Script/GameplayCameras.TestCameraShake
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UTestCameraShake : public UCameraShakeBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/GameplayCameras.ConstantCameraShakePattern
/// Size: 0x0030 (0x000058 - 0x000088)
class UConstantCameraShakePattern : public USimpleCameraShakePattern
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FVector)                                   LocationOffset                                              OFFSET(getStruct<T>, {0x58, 24, 0, 0})
	SMember(FRotator)                                  RotationOffset                                              OFFSET(getStruct<T>, {0x70, 24, 0, 0})
};

/// Class /Script/GameplayCameras.WaveOscillatorCameraShakePattern
/// Size: 0x00A0 (0x000058 - 0x0000F8)
class UWaveOscillatorCameraShakePattern : public USimpleCameraShakePattern
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	DMember(float)                                     LocationAmplitudeMultiplier                                 OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     LocationFrequencyMultiplier                                 OFFSET(get<float>, {0x5C, 4, 0, 0})
	SMember(FWaveOscillator)                           X                                                           OFFSET(getStruct<T>, {0x60, 12, 0, 0})
	SMember(FWaveOscillator)                           Y                                                           OFFSET(getStruct<T>, {0x6C, 12, 0, 0})
	SMember(FWaveOscillator)                           Z                                                           OFFSET(getStruct<T>, {0x78, 12, 0, 0})
	DMember(float)                                     RotationAmplitudeMultiplier                                 OFFSET(get<float>, {0x84, 4, 0, 0})
	DMember(float)                                     RotationFrequencyMultiplier                                 OFFSET(get<float>, {0x88, 4, 0, 0})
	SMember(FWaveOscillator)                           pitch                                                       OFFSET(getStruct<T>, {0x8C, 12, 0, 0})
	SMember(FWaveOscillator)                           Yaw                                                         OFFSET(getStruct<T>, {0x98, 12, 0, 0})
	SMember(FWaveOscillator)                           Roll                                                        OFFSET(getStruct<T>, {0xA4, 12, 0, 0})
	SMember(FWaveOscillator)                           FOV                                                         OFFSET(getStruct<T>, {0xB0, 12, 0, 0})
};

/// Struct /Script/GameplayCameras.FOscillator
/// Size: 0x000C (0x000000 - 0x00000C)
class FFOscillator : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     Amplitude                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Frequency                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(TEnumAsByte<EInitialOscillatorOffset>)     InitialOffset                                               OFFSET(get<T>, {0x8, 1, 0, 0})
	CMember(EOscillatorWaveform)                       Waveform                                                    OFFSET(get<T>, {0x9, 1, 0, 0})
};

/// Struct /Script/GameplayCameras.ROscillator
/// Size: 0x0024 (0x000000 - 0x000024)
class FROscillator : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	SMember(FFOscillator)                              pitch                                                       OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FFOscillator)                              Yaw                                                         OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	SMember(FFOscillator)                              Roll                                                        OFFSET(getStruct<T>, {0x18, 12, 0, 0})
};

/// Struct /Script/GameplayCameras.VOscillator
/// Size: 0x0024 (0x000000 - 0x000024)
class FVOscillator : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	SMember(FFOscillator)                              X                                                           OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FFOscillator)                              Y                                                           OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	SMember(FFOscillator)                              Z                                                           OFFSET(getStruct<T>, {0x18, 12, 0, 0})
};

/// Struct /Script/GameplayCameras.CameraAnimationParams
/// Size: 0x0048 (0x000000 - 0x000048)
class FCameraAnimationParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(float)                                     PlayRate                                                    OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(ECameraAnimationEasingType)                EaseInType                                                  OFFSET(get<T>, {0x8, 1, 0, 0})
	DMember(float)                                     EaseInDuration                                              OFFSET(get<float>, {0xC, 4, 0, 0})
	CMember(ECameraAnimationEasingType)                EaseOutType                                                 OFFSET(get<T>, {0x10, 1, 0, 0})
	DMember(float)                                     EaseOutDuration                                             OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(bool)                                      bLoop                                                       OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(int32_t)                                   StartOffset                                                 OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	DMember(bool)                                      bRandomStartTime                                            OFFSET(get<bool>, {0x20, 1, 0, 0})
	DMember(float)                                     DurationOverride                                            OFFSET(get<float>, {0x24, 4, 0, 0})
	CMember(ECameraAnimationPlaySpace)                 Playspace                                                   OFFSET(get<T>, {0x28, 1, 0, 0})
	SMember(FRotator)                                  UserPlaySpaceRot                                            OFFSET(getStruct<T>, {0x30, 24, 0, 0})
};

/// Struct /Script/GameplayCameras.CameraAnimationHandle
/// Size: 0x0004 (0x000000 - 0x000004)
class FCameraAnimationHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
};

/// Struct /Script/GameplayCameras.ActiveCameraAnimationInfo
/// Size: 0x0078 (0x000000 - 0x000078)
class FActiveCameraAnimationInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(class UCameraAnimationSequence*)           Sequence                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FCameraAnimationParams)                    Params                                                      OFFSET(getStruct<T>, {0x8, 72, 0, 0})
	SMember(FCameraAnimationHandle)                    Handle                                                      OFFSET(getStruct<T>, {0x50, 4, 0, 0})
	CMember(class UCameraAnimationSequencePlayer*)     Player                                                      OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(class UCameraAnimationSequenceCameraStandIn*) CameraStandIn                                            OFFSET(get<T>, {0x60, 8, 0, 0})
	DMember(float)                                     EaseInCurrentTime                                           OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     EaseOutCurrentTime                                          OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(bool)                                      bIsEasingIn                                                 OFFSET(get<bool>, {0x70, 1, 0, 0})
	DMember(bool)                                      bIsEasingOut                                                OFFSET(get<bool>, {0x71, 1, 0, 0})
};

/// Struct /Script/GameplayCameras.PerlinNoiseShaker
/// Size: 0x0008 (0x000000 - 0x000008)
class FPerlinNoiseShaker : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     Amplitude                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Frequency                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/GameplayCameras.WaveOscillator
/// Size: 0x000C (0x000000 - 0x00000C)
class FWaveOscillator : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     Amplitude                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Frequency                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(EInitialWaveOscillatorOffsetType)          InitialOffsetType                                           OFFSET(get<T>, {0x8, 1, 0, 0})
};

/// Enum /Script/GameplayCameras.EOscillatorWaveform
/// Size: 0x03
enum EOscillatorWaveform : uint8_t
{
	EOscillatorWaveform__SineWave                                                    = 0,
	EOscillatorWaveform__PerlinNoise                                                 = 1,
	EOscillatorWaveform__EOscillatorWaveform_MAX                                     = 2
};

/// Enum /Script/GameplayCameras.EInitialOscillatorOffset
/// Size: 0x03
enum EInitialOscillatorOffset : uint8_t
{
	EOO_OffsetRandom                                                                 = 0,
	EOO_OffsetZero                                                                   = 1,
	EOO_MAX                                                                          = 2
};

/// Enum /Script/GameplayCameras.ECameraAnimationPlaySpace
/// Size: 0x04
enum ECameraAnimationPlaySpace : uint8_t
{
	ECameraAnimationPlaySpace__CameraLocal                                           = 0,
	ECameraAnimationPlaySpace__World                                                 = 1,
	ECameraAnimationPlaySpace__UserDefined                                           = 2,
	ECameraAnimationPlaySpace__ECameraAnimationPlaySpace_MAX                         = 3
};

/// Enum /Script/GameplayCameras.ECameraAnimationEasingType
/// Size: 0x09
enum ECameraAnimationEasingType : uint8_t
{
	ECameraAnimationEasingType__Linear                                               = 0,
	ECameraAnimationEasingType__Sinusoidal                                           = 1,
	ECameraAnimationEasingType__Quadratic                                            = 2,
	ECameraAnimationEasingType__Cubic                                                = 3,
	ECameraAnimationEasingType__Quartic                                              = 4,
	ECameraAnimationEasingType__Quintic                                              = 5,
	ECameraAnimationEasingType__Exponential                                          = 6,
	ECameraAnimationEasingType__Circular                                             = 7,
	ECameraAnimationEasingType__ECameraAnimationEasingType_MAX                       = 8
};

/// Enum /Script/GameplayCameras.EInitialWaveOscillatorOffsetType
/// Size: 0x03
enum EInitialWaveOscillatorOffsetType : uint8_t
{
	EInitialWaveOscillatorOffsetType__Random                                         = 0,
	EInitialWaveOscillatorOffsetType__Zero                                           = 1,
	EInitialWaveOscillatorOffsetType__EInitialWaveOscillatorOffsetType_MAX           = 2
};

