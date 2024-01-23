
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: Niagara

/// Enum /Script/HoagieRuntime.EHoagieBoostState
/// Size: 0x06
enum class EHoagieBoostState : uint8_t
{
	EHoagieBoostState__Unknown                                                       = 0,
	EHoagieBoostState__Ready                                                         = 1,
	EHoagieBoostState__Started                                                       = 2,
	EHoagieBoostState__Finished                                                      = 3,
	EHoagieBoostState__Failed                                                        = 4,
	EHoagieBoostState__EHoagieBoostState_MAX                                         = 5
};

/// Enum /Script/HoagieRuntime.EHoagieState
/// Size: 0x11
enum class EHoagieState : uint32_t
{
	EHoagieState__STARTUP                                                            = 0,
	EHoagieState__STARTUP_LIFT                                                       = 1,
	EHoagieState__FLIGHT                                                             = 2,
	EHoagieState__AUTO_LANDING                                                       = 3,
	EHoagieState__SPIN_CRASHING                                                      = 4,
	EHoagieState__CRASHING_NO_SPIN                                                   = 5,
	EHoagieState__CRASH_LANDED                                                       = 6,
	EHoagieState__LANDED                                                             = 7,
	EHoagieState__EXPLODING                                                          = 8,
	EHoagieState__NONE                                                               = 9,
	EHoagieState__EHoagieState_MAX                                                   = 10
};

/// Class /Script/HoagieRuntime.FortHoagieDriverAnimInstance
/// Size: 0x0080 (0x000830 - 0x0008B0)
class UFortHoagieDriverAnimInstance : public UFortVehicleOccupantAnimInstance
{ 
public:
	FVector                                            LeftHandIKPositionOffset;                                   // 0x0830   (0x0018)  
	FVector                                            RightHandIKPositionOffset;                                  // 0x0848   (0x0018)  
	FRotator                                           LeftHandIKRotationOffset;                                   // 0x0860   (0x0018)  
	FRotator                                           RightHandIKRotationOffset;                                  // 0x0878   (0x0018)  
	EFortCardinalDirection                             BoostCardinalDirection;                                     // 0x0890   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0891   (0x0003)  MISSED
	float                                              NormalizedAcceleration;                                     // 0x0894   (0x0004)  
	float                                              VehicleRoll;                                                // 0x0898   (0x0004)  
	float                                              VehicleYaw;                                                 // 0x089C   (0x0004)  
	float                                              ForwardSpeed;                                               // 0x08A0   (0x0004)  
	bool                                               bIsMovingAnyDirection;                                      // 0x08A4   (0x0001)  
	bool                                               bIsMovingFastAnyDirection;                                  // 0x08A5   (0x0001)  
	bool                                               bShouldReverse;                                             // 0x08A6   (0x0001)  
	bool                                               bShouldGoBackToIdle;                                        // 0x08A7   (0x0001)  
	bool                                               bTransition_Default_ReverseStart;                           // 0x08A8   (0x0001)  
	bool                                               bTransition_BoostLoop_Reverse;                              // 0x08A9   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x08AA   (0x0006)  MISSED
};

/// Class /Script/HoagieRuntime.FortHoagieVehicleAnimInstance
/// Size: 0x01F0 (0x000620 - 0x000810)
class UFortHoagieVehicleAnimInstance : public UFortVehicleAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_2[0x128];                                     // 0x0620   (0x0128)  MISSED
	FRotator                                           EngineRotation;                                             // 0x0748   (0x0018)  
	FRotator                                           MainRotorRotation;                                          // 0x0760   (0x0018)  
	FRotator                                           TailRotorRotaton;                                           // 0x0778   (0x0018)  
	FRotator                                           BoosterFanRotation;                                         // 0x0790   (0x0018)  
	EFortCardinalDirection                             BoostCardinalDirection;                                     // 0x07A8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1B];                                      // 0x07A9   (0x001B)  MISSED
	float                                              EngineRotationInterpSpeed;                                  // 0x07C4   (0x0004)  
	float                                              EngineRotationDuringBoostInterpSpeed;                       // 0x07C8   (0x0004)  
	float                                              EngineFlipSpeedThreshold;                                   // 0x07CC   (0x0004)  
	float                                              BoostDirectionDeadzone;                                     // 0x07D0   (0x0004)  
	float                                              EngineFlipDeadzone;                                         // 0x07D4   (0x0004)  
	float                                              DriverRoll;                                                 // 0x07D8   (0x0004)  
	float                                              DriverYaw;                                                  // 0x07DC   (0x0004)  
	float                                              VerticalSpeed;                                              // 0x07E0   (0x0004)  
	float                                              FwdSpeed;                                                   // 0x07E4   (0x0004)  
	float                                              LocalBoostDirection;                                        // 0x07E8   (0x0004)  
	float                                              YawBlendSpaceInput;                                         // 0x07EC   (0x0004)  
	float                                              NormalizedAcceleration;                                     // 0x07F0   (0x0004)  
	unsigned char                                      UnknownData02_5[0x1];                                       // 0x07F4   (0x0001)  MISSED
	bool                                               bShouldHideBlades;                                          // 0x07F5   (0x0001)  
	bool                                               bIsBoostOnCD;                                               // 0x07F6   (0x0001)  
	bool                                               bIsBoostReady;                                              // 0x07F7   (0x0001)  
	bool                                               bIsMovingForward;                                           // 0x07F8   (0x0001)  
	bool                                               bIsReversing;                                               // 0x07F9   (0x0001)  
	bool                                               bIsMovingAnyDirection;                                      // 0x07FA   (0x0001)  
	bool                                               bIsBoosting;                                                // 0x07FB   (0x0001)  
	bool                                               bShouldReverse;                                             // 0x07FC   (0x0001)  
	bool                                               bShouldGoBackToIdle;                                        // 0x07FD   (0x0001)  
	bool                                               bShouldApplyBoostAdditive;                                  // 0x07FE   (0x0001)  
	bool                                               bIsEngineShuttingOff;                                       // 0x07FF   (0x0001)  
	bool                                               bTransition_Default_ReverseStart;                           // 0x0800   (0x0001)  
	bool                                               bTransition_BoostLoop_Reverse;                              // 0x0801   (0x0001)  
	unsigned char                                      UnknownData03_6[0xE];                                       // 0x0802   (0x000E)  MISSED
};

/// Class /Script/HoagieRuntime.FortCameraMode_Hoagie
/// Size: 0x0070 (0x001BC0 - 0x001C30)
class UFortCameraMode_Hoagie : public UFortCameraMode_AthenaVehicle
{ 
public:
	float                                              CurrentRollMultiplier;                                      // 0x1BB8   (0x0004)  
	float                                              CurrentPitchMultiplier;                                     // 0x1BBC   (0x0004)  
	FVector                                            LastOrigin;                                                 // 0x1BC0   (0x0018)  
	FVector                                            CurrentInterpSpeed;                                         // 0x1BD8   (0x0018)  
	FVector                                            BoostInterpSpeed;                                           // 0x1BF0   (0x0018)  
	float                                              BaseRollMultiplier;                                         // 0x1C08   (0x0004)  
	float                                              BasePitchMultiplier;                                        // 0x1C0C   (0x0004)  
	float                                              BoostRollMultiplier;                                        // 0x1C10   (0x0004)  
	float                                              BoostPitchMultiplier;                                       // 0x1C14   (0x0004)  
	float                                              BoostRollDampFactor;                                        // 0x1C18   (0x0004)  
	float                                              BoostRollRecoveryDampFactor;                                // 0x1C1C   (0x0004)  
	float                                              BoostRecoveryInterpSpeed;                                   // 0x1C20   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x1C24   (0x000C)  MISSED
};

/// Class /Script/HoagieRuntime.FortHoagieAudioController
/// Size: 0x0068 (0x000290 - 0x0002F8)
class AFortHoagieAudioController : public AActor
{ 
public:
	bool                                               bHighQualityOverride;                                       // 0x0290   (0x0001)  
	bool                                               bLocalPlayerInHoagie;                                       // 0x0291   (0x0001)  
	bool                                               bCriticalDamageNative;                                      // 0x0292   (0x0001)  
	bool                                               bRotorHitNative;                                            // 0x0293   (0x0001)  
	bool                                               bIsRotorWashActiveNative;                                   // 0x0294   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0295   (0x0003)  MISSED
	float                                              RotorWashRelativeZOffset;                                   // 0x0298   (0x0004)  
	SDK_UNDEFINED(8,13857) /* TWeakObjectPtr<AFortHoagieVehicle*> */ __um(Vehicle);                                // 0x029C   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x02A4   (0x0004)  MISSED
	class UFortLayeredAudioComponent*                  EngineAudio;                                                // 0x02A8   (0x0008)  
	class UFortLayeredAudioComponent*                  RotorAudio;                                                 // 0x02B0   (0x0008)  
	unsigned char                                      UnknownData02_6[0x40];                                      // 0x02B8   (0x0040)  MISSED


	/// Functions
	// Function /Script/HoagieRuntime.FortHoagieAudioController.Update
	// void Update();                                                                                                        // [0xa907598] Final|Native|Public|BlueprintCallable 
	// Function /Script/HoagieRuntime.FortHoagieAudioController.CacheHoagieVehicle
	// void CacheHoagieVehicle(class AFortHoagieVehicle* InVehicle);                                                         // [0xa906d94] Final|Native|Public|BlueprintCallable 
	// Function /Script/HoagieRuntime.FortHoagieAudioController.CacheAudioComponents
	// void CacheAudioComponents(class UFortLayeredAudioComponent* InEngine, class UFortLayeredAudioComponent* InRotor);     // [0xa906c98] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/HoagieRuntime.FortHeliFlightModel
/// Size: 0x01E8 (0x000000 - 0x0001E8)
struct FFortHeliFlightModel
{ 
	unsigned char                                      UnknownData00_2[0x1E0];                                     // 0x0000   (0x01E0)  MISSED
	class UFortHoagieVehicleConfigs*                   Configs;                                                    // 0x01E0   (0x0008)  
};

/// Struct /Script/HoagieRuntime.RotorHit
/// Size: 0x0028 (0x000000 - 0x000028)
struct FRotorHit
{ 
	FActorInstanceHandle                               HitObjectHandle;                                            // 0x0000   (0x0020)  
	float                                              LastHitTimer;                                               // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/HoagieRuntime.CachedSeatCollision
/// Size: 0x0008 (0x000000 - 0x000008)
struct FCachedSeatCollision
{ 
	int32_t                                            SeatIndex;                                                  // 0x0000   (0x0004)  
	bool                                               bOccupied;                                                  // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Struct /Script/HoagieRuntime.ReplicatedHeliControlState
/// Size: 0x0030 (0x000000 - 0x000030)
struct FReplicatedHeliControlState
{ 
	FVector_NetQuantizeNormal                          Up;                                                         // 0x0000   (0x0018)  
	FVector_NetQuantizeNormal                          Forward;                                                    // 0x0018   (0x0018)  
};

/// Struct /Script/HoagieRuntime.HoagieDeathEffectInfo
/// Size: 0x0150 (0x000000 - 0x000150)
struct FHoagieDeathEffectInfo
{ 
	float                                              Damage;                                                     // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FGameplayTagContainer                              DamageTags;                                                 // 0x0008   (0x0020)  
	FVector                                            Momentum;                                                   // 0x0028   (0x0018)  
	FHitResult                                         HitInfo;                                                    // 0x0040   (0x00E8)  
	class AFortPawn*                                   InstigatedBy;                                               // 0x0128   (0x0008)  
	class AActor*                                      DamageCauser;                                               // 0x0130   (0x0008)  
	FGameplayEffectContextHandle                       EffectContext;                                              // 0x0138   (0x0018)  
};

/// Class /Script/HoagieRuntime.FortHoagieVehicle
/// Size: 0x0630 (0x001E80 - 0x0024B0)
class AFortHoagieVehicle : public AFortAthenaSKVehicle
{ 
public:
	FName                                              PassengerCollision;                                         // 0x1E80   (0x0004)  
	float                                              CameraBoomDistance;                                         // 0x1E84   (0x0004)  
	float                                              CameraBoomHeight;                                           // 0x1E88   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x1E8C   (0x0004)  MISSED
	SDK_UNDEFINED(16,13858) /* FMulticastInlineDelegate */ __um(OnBoostStateChanged);                              // 0x1E90   (0x0010)  
	SDK_UNDEFINED(16,13859) /* FMulticastInlineDelegate */ __um(OnAltimeterTraceUpdated);                          // 0x1EA0   (0x0010)  
	SDK_UNDEFINED(16,13860) /* FMulticastInlineDelegate */ __um(OnCrashingStateEntered);                           // 0x1EB0   (0x0010)  
	bool                                               bEngineAudioDisabled;                                       // 0x1EC0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x1EC1   (0x0003)  MISSED
	float                                              LiftRumbleTimer;                                            // 0x1EC4   (0x0004)  
	bool                                               bLiftUp;                                                    // 0x1EC8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x1EC9   (0x0007)  MISSED
	uint64_t                                           LiftForceFeedbackHandle;                                    // 0x1ED0   (0x0008)  
	uint64_t                                           PassiveForceFeedbackHandle;                                 // 0x1ED8   (0x0008)  
	float                                              Theta_Native;                                               // 0x1EE0   (0x0004)  
	float                                              WashAltAlpha_Native;                                        // 0x1EE4   (0x0004)  
	float                                              RotorWashTickTimer;                                         // 0x1EE8   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x1EEC   (0x0004)  MISSED
	TArray<FVector>                                    RotorTraceArray;                                            // 0x1EF0   (0x0010)  
	SDK_UNDEFINED(16,13861) /* TArray<TEnumAsByte<EObjectTypeQuery>> */ __um(RotorWashObjectsTypes);               // 0x1F00   (0x0010)  
	class UFortHoagieVehicleConfigs*                   FortHoagieVehicleConfigs;                                   // 0x1F10   (0x0008)  
	class UCurveFloat*                                 RumbleIntensity;                                            // 0x1F18   (0x0008)  
	FFortHeliFlightModel                               FlightModel;                                                // 0x1F20   (0x01E8)  
	bool                                               bClearPitchInput;                                           // 0x2108   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x2109   (0x0003)  MISSED
	float                                              BoostTimeLeft;                                              // 0x210C   (0x0004)  
	float                                              BoostBrakingTimeLeft;                                       // 0x2110   (0x0004)  
	float                                              BoostCooldown;                                              // 0x2114   (0x0004)  
	float                                              ShutdownTimer;                                              // 0x2118   (0x0004)  
	float                                              FoliageDestructionTimer;                                    // 0x211C   (0x0004)  
	float                                              CrashingScrapingTimer;                                      // 0x2120   (0x0004)  
	float                                              CrashingNotMovingTimer;                                     // 0x2124   (0x0004)  
	bool                                               bCanSleep;                                                  // 0x2128   (0x0001)  
	bool                                               bHasAppliedCrashDamage;                                     // 0x2129   (0x0001)  
	bool                                               bOrientedForLanding;                                        // 0x212A   (0x0001)  
	bool                                               bForceNegativeLift;                                         // 0x212B   (0x0001)  
	float                                              AltimeterTraceTimer;                                        // 0x212C   (0x0004)  
	float                                              LastRotorImpulseTime;                                       // 0x2130   (0x0004)  
	float                                              CriticalExplodeTimer;                                       // 0x2134   (0x0004)  
	bool                                               bCriticalExplosionPlayed;                                   // 0x2138   (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x2139   (0x0003)  MISSED
	float                                              TimeWhileCritical;                                          // 0x213C   (0x0004)  
	float                                              TimeWhileLanding;                                           // 0x2140   (0x0004)  
	float                                              LiftFromOverrideButton;                                     // 0x2144   (0x0004)  
	FVector                                            BoostDirection;                                             // 0x2148   (0x0018)  
	FVector                                            LastRotorSweepDirection;                                    // 0x2160   (0x0018)  
	FHitResult                                         AltimeterTraceResult;                                       // 0x2178   (0x00E8)  
	int32_t                                            HoagieStateRep;                                             // 0x2260   (0x0004)  
	EHoagieState                                       CurrentHoagieState;                                         // 0x2264   (0x0004)  
	float                                              CurrentRotorSpeed;                                          // 0x2268   (0x0004)  
	float                                              CurrentRotorAngle;                                          // 0x226C   (0x0004)  
	float                                              RotorImpactTraceAngle;                                      // 0x2270   (0x0004)  
	FVehicleGamepadLiftInputs                          LiftInputs;                                                 // 0x2274   (0x0008)  
	unsigned char                                      UnknownData06_5[0x4];                                       // 0x227C   (0x0004)  MISSED
	TArray<FRotorHit>                                  RotorHits;                                                  // 0x2280   (0x0010)  
	TArray<FCachedSeatCollision>                       CachedSeatCollision;                                        // 0x2290   (0x0010)  
	FVector                                            RotorHitLinearImpulse;                                      // 0x22A0   (0x0018)  
	FVector                                            RotorHitAngularImpulse;                                     // 0x22B8   (0x0018)  
	class UNiagaraComponent*                           HoagieIdleFX_Native;                                        // 0x22D0   (0x0008)  
	class UNiagaraComponent*                           DamageFX_Native;                                            // 0x22D8   (0x0008)  
	class UNiagaraComponent*                           RotorWashFX_Native;                                         // 0x22E0   (0x0008)  
	class UFortHoagieVehicleAnimInstance*              HoagieAnimBP_Native;                                        // 0x22E8   (0x0008)  
	FName                                              AltimeterTraceSocketName;                                   // 0x22F0   (0x0004)  
	FName                                              RotorDamageTraceSocketName;                                 // 0x22F4   (0x0004)  
	FName                                              MainRotorCritSocketName;                                    // 0x22F8   (0x0004)  
	FName                                              TailRotorCritSocketName;                                    // 0x22FC   (0x0004)  
	class UAnimMontage*                                SeatTransition_ToDriver;                                    // 0x2300   (0x0008)  
	class UAnimMontage*                                SeatTransition_ToPassenger;                                 // 0x2308   (0x0008)  
	FName                                              RotorTraceProfile;                                          // 0x2310   (0x0004)  
	FName                                              FoliageOverlapsBoxTag;                                      // 0x2314   (0x0004)  
	FReplicatedHeliControlState                        ControlState;                                               // 0x2318   (0x0030)  
	float                                              CurrentViewDistanceScale;                                   // 0x2348   (0x0004)  
	float                                              CurrentHLODDistanceOverrideScale;                           // 0x234C   (0x0004)  
	float                                              CurrentHLODMaxDrawDistanceScale;                            // 0x2350   (0x0004)  
	unsigned char                                      UnknownData07_5[0xC];                                       // 0x2354   (0x000C)  MISSED
	FHoagieDeathEffectInfo                             CachedDeathEffectInfo;                                      // 0x2360   (0x0150)  


	/// Functions
	// Function /Script/HoagieRuntime.FortHoagieVehicle.UpdateHoagieAnimBP
	// void UpdateHoagieAnimBP();                                                                                            // [0x843a118] Native|Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.UpdateDamageStateNative
	// void UpdateDamageStateNative(float Damage);                                                                           // [0xa90760c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.ShowCooldownCue
	// void ShowCooldownCue(class AFortPlayerPawn* Pawn, float duration);                                                    // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.SetTailRotorRotation
	// void SetTailRotorRotation(float Degrees);                                                                             // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.SetRotorWashActive
	// void SetRotorWashActive(bool bActive);                                                                                // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.SetMainRotorRotation
	// void SetMainRotorRotation(float Degrees);                                                                             // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.ServerUpdateControlState
	// void ServerUpdateControlState(FReplicatedHeliControlState InControlState);                                            // [0xa907444] Final|Net|Native|Event|Private|NetServer 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnTickRotors
	// void OnTickRotors(float RotorAngleDegrees);                                                                           // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnStartupEnd
	// void OnStartupEnd();                                                                                                  // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnStartupBegin
	// void OnStartupBegin();                                                                                                // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnRotorsStop
	// void OnRotorsStop();                                                                                                  // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnRotorDamagePlayer
	// void OnRotorDamagePlayer(FHitResult& Impact);                                                                         // [0x2177018] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnRotorDamageDealtOuter
	// void OnRotorDamageDealtOuter(FHitResult& Impact);                                                                     // [0x2177018] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnRotorDamageDealtInner
	// void OnRotorDamageDealtInner(FHitResult& Impact);                                                                     // [0x2177018] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnRotorDamageDealt
	// void OnRotorDamageDealt(FHitResult& Impact, bool bInner);                                                             // [0x2177018] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnRep_HoagieState
	// void OnRep_HoagieState();                                                                                             // [0xa9073c4] Final|Native|Protected 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnRep_ControlState
	// void OnRep_ControlState();                                                                                            // [0x32e6c74] Final|Native|Private 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnRefueledFromEmpty
	// void OnRefueledFromEmpty();                                                                                           // [0xa9073b0] Final|Native|Protected 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnImpactWhileCritical
	// void OnImpactWhileCritical();                                                                                         // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnImpactOtherHoagie
	// void OnImpactOtherHoagie(FVector& HitLocation, FVector& NormalImpulse);                                               // [0x2177018] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnCritRotor
	// void OnCritRotor(float Damage, FVector& ImpactLocation, class AController* DamageInstigator, class AActor* DamageCauser, bool bMainRotor); // [0x2177018] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnBoostStarted
	// void OnBoostStarted();                                                                                                // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnBoostReady
	// void OnBoostReady();                                                                                                  // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnBoostFinished
	// void OnBoostFinished();                                                                                               // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnBoostFailed
	// void OnBoostFailed();                                                                                                 // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.MulticastRotorImpulse
	// void MulticastRotorImpulse(FHitResult RotorHit);                                                                      // [0xa907270] Net|NetReliableNative|Event|NetMulticast|Protected|BlueprintCallable 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.IsStartingUp
	// bool IsStartingUp();                                                                                                  // [0xa907254] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.IsShuttingDown
	// bool IsShuttingDown();                                                                                                // [0xa907234] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.IsScrapingBottom
	// bool IsScrapingBottom();                                                                                              // [0xa907210] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.HoagieOnDisabledChanged
	// void HoagieOnDisabledChanged(bool bDisabled);                                                                         // [0xa907190] Final|Native|Protected 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetVerticalSpeedKmh
	// float GetVerticalSpeedKmh();                                                                                          // [0xa907168] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetThrustDirection
	// FVector GetThrustDirection(bool bWorldSpace);                                                                         // [0xa9070c4] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetStrafeAlpha
	// float GetStrafeAlpha();                                                                                               // [0xa906f44] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetSteerAlpha
	// float GetSteerAlpha();                                                                                                // [0xa90709c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetShutdownTimeLeft
	// float GetShutdownTimeLeft();                                                                                          // [0xa907084] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetRotorSpeedPercent
	// float GetRotorSpeedPercent();                                                                                         // [0xa907064] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetRotorSpeed
	// float GetRotorSpeed();                                                                                                // [0xa90704c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetRotorCenterPosition
	// FVector GetRotorCenterPosition();                                                                                     // [0xa907014] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetRotorAngleDegrees
	// float GetRotorAngleDegrees();                                                                                         // [0xa906ffc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetMaxBoostCooldown
	// float GetMaxBoostCooldown();                                                                                          // [0xa906fdc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetMaxAltitude
	// float GetMaxAltitude();                                                                                               // [0xa906fbc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetLiftAlpha
	// float GetLiftAlpha();                                                                                                 // [0xa906f94] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetIsEngineOn
	// bool GetIsEngineOn();                                                                                                 // [0xa906f74] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetForwardAlpha
	// float GetForwardAlpha();                                                                                              // [0xa906f44] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetDistanceToGround
	// float GetDistanceToGround();                                                                                          // [0xa906f2c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetBoostTimeLeft
	// float GetBoostTimeLeft();                                                                                             // [0xa906f14] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetBoostDuration
	// float GetBoostDuration();                                                                                             // [0xa906ef4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetBoostDirection
	// FVector GetBoostDirection();                                                                                          // [0xa906ecc] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetBoostCooldown
	// float GetBoostCooldown();                                                                                             // [0xa906eb4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetAltitude
	// float GetAltitude();                                                                                                  // [0xa906e94] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/HoagieRuntime.FortHoagieVehicleConfigs
/// Size: 0x0238 (0x000950 - 0x000B88)
class UFortHoagieVehicleConfigs : public UFortPhysicsVehicleConfigs
{ 
public:
	float                                              StrafeForce;                                                // 0x0950   (0x0004)  
	float                                              StrafeForceMin;                                             // 0x0954   (0x0004)  
	float                                              MaxStrafeSpeedKmh;                                          // 0x0958   (0x0004)  
	float                                              StrafeTooFastBrakeForce;                                    // 0x095C   (0x0004)  
	float                                              LandedBrakeForce;                                           // 0x0960   (0x0004)  
	float                                              LiftForce;                                                  // 0x0964   (0x0004)  
	float                                              MaxLiftSpeedKmh;                                            // 0x0968   (0x0004)  
	float                                              LiftTooFastBrakeForce;                                      // 0x096C   (0x0004)  
	float                                              LateralDragCoefficient;                                     // 0x0970   (0x0004)  
	float                                              LateralDragCoefficient2;                                    // 0x0974   (0x0004)  
	float                                              LiftDragCoefficient;                                        // 0x0978   (0x0004)  
	float                                              LiftDragCoefficient2;                                       // 0x097C   (0x0004)  
	float                                              MaxPitchForCameraYaw;                                       // 0x0980   (0x0004)  
	float                                              MaxCameraYawAngle;                                          // 0x0984   (0x0004)  
	float                                              CameraYawStiff;                                             // 0x0988   (0x0004)  
	float                                              CameraYawDamp;                                              // 0x098C   (0x0004)  
	float                                              CameraYawStrength;                                          // 0x0990   (0x0004)  
	float                                              UprightStiff;                                               // 0x0994   (0x0004)  
	float                                              UprightDamp;                                                // 0x0998   (0x0004)  
	bool                                               bUseVehiclePivotForCameraPitch;                             // 0x099C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x099D   (0x0003)  MISSED
	float                                              ThrustTorqueAnglePercent;                                   // 0x09A0   (0x0004)  
	float                                              BoostThrustTorqueAnglePercent;                              // 0x09A4   (0x0004)  
	float                                              ThrustTorqueStiff;                                          // 0x09A8   (0x0004)  
	float                                              ThrustTorqueDamp;                                           // 0x09AC   (0x0004)  
	float                                              ThrustTorqueMaxAccel;                                       // 0x09B0   (0x0004)  
	float                                              ThrustTorque;                                               // 0x09B4   (0x0004)  
	float                                              YawTorque;                                                  // 0x09B8   (0x0004)  
	float                                              YawTorqueDampingSpeed;                                      // 0x09BC   (0x0004)  
	float                                              BoostForce;                                                 // 0x09C0   (0x0004)  
	float                                              BoostMaxSpeedKmh;                                           // 0x09C4   (0x0004)  
	float                                              BoostDuration;                                              // 0x09C8   (0x0004)  
	float                                              BoostCooldown;                                              // 0x09CC   (0x0004)  
	float                                              BoostTorqueStiff;                                           // 0x09D0   (0x0004)  
	float                                              BoostTorqueDamp;                                            // 0x09D4   (0x0004)  
	float                                              AfterBoostBrakingForce;                                     // 0x09D8   (0x0004)  
	float                                              AfterBoostBrakingDuration;                                  // 0x09DC   (0x0004)  
	float                                              AfterBoostBrakingMinSpeed;                                  // 0x09E0   (0x0004)  
	float                                              PitchAngleRequiredForFullThrust;                            // 0x09E4   (0x0004)  
	float                                              DistanceToGroundForLanding;                                 // 0x09E8   (0x0004)  
	float                                              StartupDelay;                                               // 0x09EC   (0x0004)  
	float                                              LandingSequenceDelay;                                       // 0x09F0   (0x0004)  
	float                                              RotorsRadius;                                               // 0x09F4   (0x0004)  
	float                                              RotorsRadiusInner;                                          // 0x09F8   (0x0004)  
	float                                              NoDriverBrakeForce;                                         // 0x09FC   (0x0004)  
	float                                              TimeBetweenRotorDamageTicks;                                // 0x0A00   (0x0004)  
	float                                              AutoLandingForce;                                           // 0x0A04   (0x0004)  
	float                                              RotorDamageBoxSweepLength;                                  // 0x0A08   (0x0004)  
	float                                              CriticalStateLiftForce;                                     // 0x0A0C   (0x0004)  
	float                                              IdleRotationMultiplier;                                     // 0x0A10   (0x0004)  
	float                                              LiftPitchDegrees;                                           // 0x0A14   (0x0004)  
	float                                              MinAltitudeForIdleNoise;                                    // 0x0A18   (0x0004)  
	float                                              DefaultLinearDamp;                                          // 0x0A1C   (0x0004)  
	float                                              DefaultAngularDamp;                                         // 0x0A20   (0x0004)  
	float                                              LandingLinearDamp;                                          // 0x0A24   (0x0004)  
	float                                              LandingAngularDamp;                                         // 0x0A28   (0x0004)  
	float                                              LandingLiftAlpha;                                           // 0x0A2C   (0x0004)  
	float                                              CriticalStateThrustMultiplier;                              // 0x0A30   (0x0004)  
	float                                              BodyUpDotThresholdForLanding;                               // 0x0A34   (0x0004)  
	int32_t                                            CriticalHealthThreshold;                                    // 0x0A38   (0x0004)  
	float                                              DamagePerImpulseWhileCritical;                              // 0x0A3C   (0x0004)  
	float                                              RotorImpulseLinear;                                         // 0x0A40   (0x0004)  
	float                                              RotorImpulseAngular;                                        // 0x0A44   (0x0004)  
	float                                              RotorImpulseCooldown;                                       // 0x0A48   (0x0004)  
	float                                              StartupLift;                                                // 0x0A4C   (0x0004)  
	float                                              StartupLiftTime;                                            // 0x0A50   (0x0004)  
	float                                              MaxAltitude;                                                // 0x0A54   (0x0004)  
	float                                              AltitudeForSpinning;                                        // 0x0A58   (0x0004)  
	float                                              RotorMaxSpeed;                                              // 0x0A5C   (0x0004)  
	float                                              RotorAccel;                                                 // 0x0A60   (0x0004)  
	float                                              RotorDecel;                                                 // 0x0A64   (0x0004)  
	float                                              ExplodeRotorDecel;                                          // 0x0A68   (0x0004)  
	float                                              MinRotorSpeedForSkippingStartup;                            // 0x0A6C   (0x0004)  
	float                                              RotorSpeedForStartupLift;                                   // 0x0A70   (0x0004)  
	float                                              CriticalLiftForceDecay;                                     // 0x0A74   (0x0004)  
	float                                              CriticalYawTorqueMin;                                       // 0x0A78   (0x0004)  
	float                                              CriticalYawTorqueMax;                                       // 0x0A7C   (0x0004)  
	float                                              CriticalYawTorqueRampDuration;                              // 0x0A80   (0x0004)  
	float                                              RotorTraceRotationSpeed;                                    // 0x0A84   (0x0004)  
	float                                              RotorTraceBoxSize;                                          // 0x0A88   (0x0004)  
	float                                              RotorTraceBoxHeight;                                        // 0x0A8C   (0x0004)  
	float                                              MaxCriticalFallForce;                                       // 0x0A90   (0x0004)  
	float                                              BoostFOV;                                                   // 0x0A94   (0x0004)  
	float                                              GentleCrashTimeToExplode;                                   // 0x0A98   (0x0004)  
	float                                              CriticalTimeForGentleCrash;                                 // 0x0A9C   (0x0004)  
	float                                              AutoLandingYawTorque;                                       // 0x0AA0   (0x0004)  
	float                                              MinHeightForAutoLandingYawTorque;                           // 0x0AA4   (0x0004)  
	float                                              MinSpeedForScrapingBottom;                                  // 0x0AA8   (0x0004)  
	float                                              FallDamageHeightBuffer;                                     // 0x0AAC   (0x0004)  
	float                                              TimeBetweenRotorPlayerDamage;                               // 0x0AB0   (0x0004)  
	float                                              RotorMoveSpeedRequiredToUpdateTraceDirSqr;                  // 0x0AB4   (0x0004)  
	float                                              FoliageTraceRate;                                           // 0x0AB8   (0x0004)  
	float                                              RotorWashTicksPerFrame;                                     // 0x0ABC   (0x0004)  
	float                                              CriticalHitRadius;                                          // 0x0AC0   (0x0004)  
	float                                              AngleNormalUpForLockMovement;                               // 0x0AC4   (0x0004)  
	float                                              MaxAutoLandingTime;                                         // 0x0AC8   (0x0004)  
	float                                              SpeedThresholdForCrashed;                                   // 0x0ACC   (0x0004)  
	float                                              CritMultiplier;                                             // 0x0AD0   (0x0004)  
	float                                              AltitudeForSprings;                                         // 0x0AD4   (0x0004)  
	float                                              MaxCrashingTime;                                            // 0x0AD8   (0x0004)  
	float                                              MaxCrashingScrapingTime;                                    // 0x0ADC   (0x0004)  
	float                                              MaxCrashingTimeSpentNotMoving;                              // 0x0AE0   (0x0004)  
	float                                              LandscapeRotorImpulseMag;                                   // 0x0AE4   (0x0004)  
	float                                              HealthThresholdForLandscapeRotorImpulse;                    // 0x0AE8   (0x0004)  
	float                                              MaxHeightBuffer;                                            // 0x0AEC   (0x0004)  
	bool                                               bImpulseOnOuterRotorHitLandscape;                           // 0x0AF0   (0x0001)  
	bool                                               bSkipRotorImpulses;                                         // 0x0AF1   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x0AF2   (0x0006)  MISSED
	FVector                                            FoliageTraceBoxSize;                                        // 0x0AF8   (0x0018)  
	FVector                                            WaterBoxSize;                                               // 0x0B10   (0x0018)  
	FVector                                            WaterBoxOffset;                                             // 0x0B28   (0x0018)  
	FVector                                            RotorOffsetFromActorLocationOnServer;                       // 0x0B40   (0x0018)  
	bool                                               bSkipContactRotations;                                      // 0x0B58   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0B59   (0x0007)  MISSED
	FScalableFloat                                     MaxAutoLandHeightWhenOutOfFuel;                             // 0x0B60   (0x0028)  
};

/// Struct /Script/HoagieRuntime.HoagieCmd
/// Size: 0x0078 (0x000000 - 0x000078)
struct FHoagieCmd
{ 
	unsigned char                                      UnknownData00_1[0x78];                                      // 0x0000   (0x0078)  MISSED
};

/// Struct /Script/HoagieRuntime.HoagieInPersistent
/// Size: 0x0040 (0x0001A0 - 0x0001E0)
struct FHoagieInPersistent : FFortVehicleInPersistent
{ 
	class UFortHoagieVehicleConfigs*                   FortHoagieVehicleConfigs;                                   // 0x01A0   (0x0008)  
	EHoagieState                                       CurrentHoagieState;                                         // 0x01A8   (0x0004)  
	float                                              LastRotorImpulseTime;                                       // 0x01AC   (0x0004)  
	FVector                                            RotorHitLinearImpulse;                                      // 0x01B0   (0x0018)  
	FVector                                            RotorHitAngularImpulse;                                     // 0x01C8   (0x0018)  
};

/// Struct /Script/HoagieRuntime.HoagieInternal
/// Size: 0x01F0 (0x0000E0 - 0x0002D0)
struct FHoagieInternal : FFortVehicleInternalPersistent
{ 
	FFortHeliFlightModel                               FlightModel;                                                // 0x00E0   (0x01E8)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x02C8   (0x0008)  MISSED
};

/// Struct /Script/HoagieRuntime.HoagieOutContinuous
/// Size: 0x0000 (0x000050 - 0x000050)
struct FHoagieOutContinuous : FFortVehicleOutContinuous
{ 
};

/// Struct /Script/HoagieRuntime.HoagieOutPersistent
/// Size: 0x0000 (0x000028 - 0x000028)
struct FHoagieOutPersistent : FFortVehicleOutPersistent
{ 
};

