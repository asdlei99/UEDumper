
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: Niagara

/// Class /Script/HoagieRuntime.FortHoagieDriverAnimInstance
/// Size: 0x0080 (0x000830 - 0x0008B0)
class UFortHoagieDriverAnimInstance : public UFortVehicleOccupantAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2224;

public:
	SMember(FVector)                                   LeftHandIKPositionOffset                                    OFFSET(getStruct<T>, {0x830, 24, 0, 0})
	SMember(FVector)                                   RightHandIKPositionOffset                                   OFFSET(getStruct<T>, {0x848, 24, 0, 0})
	SMember(FRotator)                                  LeftHandIKRotationOffset                                    OFFSET(getStruct<T>, {0x860, 24, 0, 0})
	SMember(FRotator)                                  RightHandIKRotationOffset                                   OFFSET(getStruct<T>, {0x878, 24, 0, 0})
	CMember(EFortCardinalDirection)                    BoostCardinalDirection                                      OFFSET(get<T>, {0x890, 1, 0, 0})
	DMember(float)                                     NormalizedAcceleration                                      OFFSET(get<float>, {0x894, 4, 0, 0})
	DMember(float)                                     VehicleRoll                                                 OFFSET(get<float>, {0x898, 4, 0, 0})
	DMember(float)                                     VehicleYaw                                                  OFFSET(get<float>, {0x89C, 4, 0, 0})
	DMember(float)                                     ForwardSpeed                                                OFFSET(get<float>, {0x8A0, 4, 0, 0})
	DMember(bool)                                      bIsMovingAnyDirection                                       OFFSET(get<bool>, {0x8A4, 1, 0, 0})
	DMember(bool)                                      bIsMovingFastAnyDirection                                   OFFSET(get<bool>, {0x8A5, 1, 0, 0})
	DMember(bool)                                      bShouldReverse                                              OFFSET(get<bool>, {0x8A6, 1, 0, 0})
	DMember(bool)                                      bShouldGoBackToIdle                                         OFFSET(get<bool>, {0x8A7, 1, 0, 0})
	DMember(bool)                                      bTransition_Default_ReverseStart                            OFFSET(get<bool>, {0x8A8, 1, 0, 0})
	DMember(bool)                                      bTransition_BoostLoop_Reverse                               OFFSET(get<bool>, {0x8A9, 1, 0, 0})
};

/// Class /Script/HoagieRuntime.FortHoagieVehicleAnimInstance
/// Size: 0x01F0 (0x000620 - 0x000810)
class UFortHoagieVehicleAnimInstance : public UFortVehicleAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2064;

public:
	SMember(FRotator)                                  EngineRotation                                              OFFSET(getStruct<T>, {0x748, 24, 0, 0})
	SMember(FRotator)                                  MainRotorRotation                                           OFFSET(getStruct<T>, {0x760, 24, 0, 0})
	SMember(FRotator)                                  TailRotorRotaton                                            OFFSET(getStruct<T>, {0x778, 24, 0, 0})
	SMember(FRotator)                                  BoosterFanRotation                                          OFFSET(getStruct<T>, {0x790, 24, 0, 0})
	CMember(EFortCardinalDirection)                    BoostCardinalDirection                                      OFFSET(get<T>, {0x7A8, 1, 0, 0})
	DMember(float)                                     EngineRotationInterpSpeed                                   OFFSET(get<float>, {0x7C4, 4, 0, 0})
	DMember(float)                                     EngineRotationDuringBoostInterpSpeed                        OFFSET(get<float>, {0x7C8, 4, 0, 0})
	DMember(float)                                     EngineFlipSpeedThreshold                                    OFFSET(get<float>, {0x7CC, 4, 0, 0})
	DMember(float)                                     BoostDirectionDeadzone                                      OFFSET(get<float>, {0x7D0, 4, 0, 0})
	DMember(float)                                     EngineFlipDeadzone                                          OFFSET(get<float>, {0x7D4, 4, 0, 0})
	DMember(float)                                     DriverRoll                                                  OFFSET(get<float>, {0x7D8, 4, 0, 0})
	DMember(float)                                     DriverYaw                                                   OFFSET(get<float>, {0x7DC, 4, 0, 0})
	DMember(float)                                     VerticalSpeed                                               OFFSET(get<float>, {0x7E0, 4, 0, 0})
	DMember(float)                                     FwdSpeed                                                    OFFSET(get<float>, {0x7E4, 4, 0, 0})
	DMember(float)                                     LocalBoostDirection                                         OFFSET(get<float>, {0x7E8, 4, 0, 0})
	DMember(float)                                     YawBlendSpaceInput                                          OFFSET(get<float>, {0x7EC, 4, 0, 0})
	DMember(float)                                     NormalizedAcceleration                                      OFFSET(get<float>, {0x7F0, 4, 0, 0})
	DMember(bool)                                      bShouldHideBlades                                           OFFSET(get<bool>, {0x7F5, 1, 0, 0})
	DMember(bool)                                      bIsBoostOnCD                                                OFFSET(get<bool>, {0x7F6, 1, 0, 0})
	DMember(bool)                                      bIsBoostReady                                               OFFSET(get<bool>, {0x7F7, 1, 0, 0})
	DMember(bool)                                      bIsMovingForward                                            OFFSET(get<bool>, {0x7F8, 1, 0, 0})
	DMember(bool)                                      bIsReversing                                                OFFSET(get<bool>, {0x7F9, 1, 0, 0})
	DMember(bool)                                      bIsMovingAnyDirection                                       OFFSET(get<bool>, {0x7FA, 1, 0, 0})
	DMember(bool)                                      bIsBoosting                                                 OFFSET(get<bool>, {0x7FB, 1, 0, 0})
	DMember(bool)                                      bShouldReverse                                              OFFSET(get<bool>, {0x7FC, 1, 0, 0})
	DMember(bool)                                      bShouldGoBackToIdle                                         OFFSET(get<bool>, {0x7FD, 1, 0, 0})
	DMember(bool)                                      bShouldApplyBoostAdditive                                   OFFSET(get<bool>, {0x7FE, 1, 0, 0})
	DMember(bool)                                      bIsEngineShuttingOff                                        OFFSET(get<bool>, {0x7FF, 1, 0, 0})
	DMember(bool)                                      bTransition_Default_ReverseStart                            OFFSET(get<bool>, {0x800, 1, 0, 0})
	DMember(bool)                                      bTransition_BoostLoop_Reverse                               OFFSET(get<bool>, {0x801, 1, 0, 0})
};

/// Class /Script/HoagieRuntime.FortCameraMode_Hoagie
/// Size: 0x0070 (0x001BC0 - 0x001C30)
class UFortCameraMode_Hoagie : public UFortCameraMode_AthenaVehicle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7216;

public:
	DMember(float)                                     CurrentRollMultiplier                                       OFFSET(get<float>, {0x1BB8, 4, 0, 0})
	DMember(float)                                     CurrentPitchMultiplier                                      OFFSET(get<float>, {0x1BBC, 4, 0, 0})
	SMember(FVector)                                   LastOrigin                                                  OFFSET(getStruct<T>, {0x1BC0, 24, 0, 0})
	SMember(FVector)                                   CurrentInterpSpeed                                          OFFSET(getStruct<T>, {0x1BD8, 24, 0, 0})
	SMember(FVector)                                   BoostInterpSpeed                                            OFFSET(getStruct<T>, {0x1BF0, 24, 0, 0})
	DMember(float)                                     BaseRollMultiplier                                          OFFSET(get<float>, {0x1C08, 4, 0, 0})
	DMember(float)                                     BasePitchMultiplier                                         OFFSET(get<float>, {0x1C0C, 4, 0, 0})
	DMember(float)                                     BoostRollMultiplier                                         OFFSET(get<float>, {0x1C10, 4, 0, 0})
	DMember(float)                                     BoostPitchMultiplier                                        OFFSET(get<float>, {0x1C14, 4, 0, 0})
	DMember(float)                                     BoostRollDampFactor                                         OFFSET(get<float>, {0x1C18, 4, 0, 0})
	DMember(float)                                     BoostRollRecoveryDampFactor                                 OFFSET(get<float>, {0x1C1C, 4, 0, 0})
	DMember(float)                                     BoostRecoveryInterpSpeed                                    OFFSET(get<float>, {0x1C20, 4, 0, 0})
};

/// Class /Script/HoagieRuntime.FortHoagieAudioController
/// Size: 0x0068 (0x000290 - 0x0002F8)
class AFortHoagieAudioController : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	DMember(bool)                                      bHighQualityOverride                                        OFFSET(get<bool>, {0x290, 1, 0, 0})
	DMember(bool)                                      bLocalPlayerInHoagie                                        OFFSET(get<bool>, {0x291, 1, 0, 0})
	DMember(bool)                                      bCriticalDamageNative                                       OFFSET(get<bool>, {0x292, 1, 0, 0})
	DMember(bool)                                      bRotorHitNative                                             OFFSET(get<bool>, {0x293, 1, 0, 0})
	DMember(bool)                                      bIsRotorWashActiveNative                                    OFFSET(get<bool>, {0x294, 1, 0, 0})
	DMember(float)                                     RotorWashRelativeZOffset                                    OFFSET(get<float>, {0x298, 4, 0, 0})
	CMember(TWeakObjectPtr<AFortHoagieVehicle*>)       Vehicle                                                     OFFSET(get<T>, {0x29C, 8, 0, 0})
	CMember(class UFortLayeredAudioComponent*)         EngineAudio                                                 OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(class UFortLayeredAudioComponent*)         RotorAudio                                                  OFFSET(get<T>, {0x2B0, 8, 0, 0})


	/// Functions
	// Function /Script/HoagieRuntime.FortHoagieAudioController.Update
	// void Update();                                                                                                           // [0xab10970] Final|Native|Public|BlueprintCallable 
	// Function /Script/HoagieRuntime.FortHoagieAudioController.CacheHoagieVehicle
	// void CacheHoagieVehicle(class AFortHoagieVehicle* InVehicle);                                                            // [0xab10180] Final|Native|Public|BlueprintCallable 
	// Function /Script/HoagieRuntime.FortHoagieAudioController.CacheAudioComponents
	// void CacheAudioComponents(class UFortLayeredAudioComponent* InEngine, class UFortLayeredAudioComponent* InRotor);        // [0xab10004] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/HoagieRuntime.FortHoagieVehicle
/// Size: 0x0630 (0x001EF0 - 0x002520)
class AFortHoagieVehicle : public AFortAthenaSKVehicle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 9504;

public:
	SMember(FName)                                     PassengerCollision                                          OFFSET(getStruct<T>, {0x1EF0, 4, 0, 0})
	DMember(float)                                     CameraBoomDistance                                          OFFSET(get<float>, {0x1EF4, 4, 0, 0})
	DMember(float)                                     CameraBoomHeight                                            OFFSET(get<float>, {0x1EF8, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnBoostStateChanged                                         OFFSET(getStruct<T>, {0x1F00, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAltimeterTraceUpdated                                     OFFSET(getStruct<T>, {0x1F10, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCrashingStateEntered                                      OFFSET(getStruct<T>, {0x1F20, 16, 0, 0})
	DMember(bool)                                      bEngineAudioDisabled                                        OFFSET(get<bool>, {0x1F30, 1, 0, 0})
	DMember(float)                                     LiftRumbleTimer                                             OFFSET(get<float>, {0x1F34, 4, 0, 0})
	DMember(bool)                                      bLiftUp                                                     OFFSET(get<bool>, {0x1F38, 1, 0, 0})
	DMember(uint64_t)                                  LiftForceFeedbackHandle                                     OFFSET(get<uint64_t>, {0x1F40, 8, 0, 0})
	DMember(uint64_t)                                  PassiveForceFeedbackHandle                                  OFFSET(get<uint64_t>, {0x1F48, 8, 0, 0})
	DMember(float)                                     Theta_Native                                                OFFSET(get<float>, {0x1F50, 4, 0, 0})
	DMember(float)                                     WashAltAlpha_Native                                         OFFSET(get<float>, {0x1F54, 4, 0, 0})
	DMember(float)                                     RotorWashTickTimer                                          OFFSET(get<float>, {0x1F58, 4, 0, 0})
	CMember(TArray<FVector>)                           RotorTraceArray                                             OFFSET(get<T>, {0x1F60, 16, 0, 0})
	CMember(TArray<TEnumAsByte<EObjectTypeQuery>>)     RotorWashObjectsTypes                                       OFFSET(get<T>, {0x1F70, 16, 0, 0})
	CMember(class UFortHoagieVehicleConfigs*)          FortHoagieVehicleConfigs                                    OFFSET(get<T>, {0x1F80, 8, 0, 0})
	CMember(class UCurveFloat*)                        RumbleIntensity                                             OFFSET(get<T>, {0x1F88, 8, 0, 0})
	SMember(FFortHeliFlightModel)                      FlightModel                                                 OFFSET(getStruct<T>, {0x1F90, 488, 0, 0})
	DMember(bool)                                      bClearPitchInput                                            OFFSET(get<bool>, {0x2178, 1, 0, 0})
	DMember(float)                                     BoostTimeLeft                                               OFFSET(get<float>, {0x217C, 4, 0, 0})
	DMember(float)                                     BoostBrakingTimeLeft                                        OFFSET(get<float>, {0x2180, 4, 0, 0})
	DMember(float)                                     BoostCooldown                                               OFFSET(get<float>, {0x2184, 4, 0, 0})
	DMember(float)                                     ShutdownTimer                                               OFFSET(get<float>, {0x2188, 4, 0, 0})
	DMember(float)                                     FoliageDestructionTimer                                     OFFSET(get<float>, {0x218C, 4, 0, 0})
	DMember(float)                                     CrashingScrapingTimer                                       OFFSET(get<float>, {0x2190, 4, 0, 0})
	DMember(float)                                     CrashingNotMovingTimer                                      OFFSET(get<float>, {0x2194, 4, 0, 0})
	DMember(bool)                                      bCanSleep                                                   OFFSET(get<bool>, {0x2198, 1, 0, 0})
	DMember(bool)                                      bHasAppliedCrashDamage                                      OFFSET(get<bool>, {0x2199, 1, 0, 0})
	DMember(bool)                                      bOrientedForLanding                                         OFFSET(get<bool>, {0x219A, 1, 0, 0})
	DMember(bool)                                      bForceNegativeLift                                          OFFSET(get<bool>, {0x219B, 1, 0, 0})
	DMember(float)                                     AltimeterTraceTimer                                         OFFSET(get<float>, {0x219C, 4, 0, 0})
	DMember(float)                                     LastRotorImpulseTime                                        OFFSET(get<float>, {0x21A0, 4, 0, 0})
	DMember(float)                                     CriticalExplodeTimer                                        OFFSET(get<float>, {0x21A4, 4, 0, 0})
	DMember(bool)                                      bCriticalExplosionPlayed                                    OFFSET(get<bool>, {0x21A8, 1, 0, 0})
	DMember(float)                                     TimeWhileCritical                                           OFFSET(get<float>, {0x21AC, 4, 0, 0})
	DMember(float)                                     TimeWhileLanding                                            OFFSET(get<float>, {0x21B0, 4, 0, 0})
	DMember(float)                                     LiftFromOverrideButton                                      OFFSET(get<float>, {0x21B4, 4, 0, 0})
	SMember(FVector)                                   BoostDirection                                              OFFSET(getStruct<T>, {0x21B8, 24, 0, 0})
	SMember(FVector)                                   LastRotorSweepDirection                                     OFFSET(getStruct<T>, {0x21D0, 24, 0, 0})
	SMember(FHitResult)                                AltimeterTraceResult                                        OFFSET(getStruct<T>, {0x21E8, 232, 0, 0})
	DMember(int32_t)                                   HoagieStateRep                                              OFFSET(get<int32_t>, {0x22D0, 4, 0, 0})
	CMember(EHoagieState)                              CurrentHoagieState                                          OFFSET(get<T>, {0x22D4, 4, 0, 0})
	DMember(float)                                     CurrentRotorSpeed                                           OFFSET(get<float>, {0x22D8, 4, 0, 0})
	DMember(float)                                     CurrentRotorAngle                                           OFFSET(get<float>, {0x22DC, 4, 0, 0})
	DMember(float)                                     RotorImpactTraceAngle                                       OFFSET(get<float>, {0x22E0, 4, 0, 0})
	SMember(FVehicleGamepadLiftInputs)                 LiftInputs                                                  OFFSET(getStruct<T>, {0x22E4, 8, 0, 0})
	CMember(TArray<FRotorHit>)                         RotorHits                                                   OFFSET(get<T>, {0x22F0, 16, 0, 0})
	CMember(TArray<FCachedSeatCollision>)              CachedSeatCollision                                         OFFSET(get<T>, {0x2300, 16, 0, 0})
	SMember(FVector)                                   RotorHitLinearImpulse                                       OFFSET(getStruct<T>, {0x2310, 24, 0, 0})
	SMember(FVector)                                   RotorHitAngularImpulse                                      OFFSET(getStruct<T>, {0x2328, 24, 0, 0})
	CMember(class UNiagaraComponent*)                  HoagieIdleFX_Native                                         OFFSET(get<T>, {0x2340, 8, 0, 0})
	CMember(class UNiagaraComponent*)                  DamageFX_Native                                             OFFSET(get<T>, {0x2348, 8, 0, 0})
	CMember(class UNiagaraComponent*)                  RotorWashFX_Native                                          OFFSET(get<T>, {0x2350, 8, 0, 0})
	CMember(class UFortHoagieVehicleAnimInstance*)     HoagieAnimBP_Native                                         OFFSET(get<T>, {0x2358, 8, 0, 0})
	SMember(FName)                                     AltimeterTraceSocketName                                    OFFSET(getStruct<T>, {0x2360, 4, 0, 0})
	SMember(FName)                                     RotorDamageTraceSocketName                                  OFFSET(getStruct<T>, {0x2364, 4, 0, 0})
	SMember(FName)                                     MainRotorCritSocketName                                     OFFSET(getStruct<T>, {0x2368, 4, 0, 0})
	SMember(FName)                                     TailRotorCritSocketName                                     OFFSET(getStruct<T>, {0x236C, 4, 0, 0})
	CMember(class UAnimMontage*)                       SeatTransition_ToDriver                                     OFFSET(get<T>, {0x2370, 8, 0, 0})
	CMember(class UAnimMontage*)                       SeatTransition_ToPassenger                                  OFFSET(get<T>, {0x2378, 8, 0, 0})
	SMember(FName)                                     RotorTraceProfile                                           OFFSET(getStruct<T>, {0x2380, 4, 0, 0})
	SMember(FName)                                     FoliageOverlapsBoxTag                                       OFFSET(getStruct<T>, {0x2384, 4, 0, 0})
	SMember(FReplicatedHeliControlState)               ControlState                                                OFFSET(getStruct<T>, {0x2388, 48, 0, 0})
	DMember(float)                                     CurrentViewDistanceScale                                    OFFSET(get<float>, {0x23B8, 4, 0, 0})
	DMember(float)                                     CurrentHLODDistanceOverrideScale                            OFFSET(get<float>, {0x23BC, 4, 0, 0})
	DMember(float)                                     CurrentHLODMaxDrawDistanceScale                             OFFSET(get<float>, {0x23C0, 4, 0, 0})
	SMember(FHoagieDeathEffectInfo)                    CachedDeathEffectInfo                                       OFFSET(getStruct<T>, {0x23D0, 336, 0, 0})


	/// Functions
	// Function /Script/HoagieRuntime.FortHoagieVehicle.UpdateHoagieAnimBP
	// void UpdateHoagieAnimBP();                                                                                               // [0x843c454] Native|Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.UpdateDamageStateNative
	// void UpdateDamageStateNative(float Damage);                                                                              // [0xab109e4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.ShowCooldownCue
	// void ShowCooldownCue(class AFortPlayerPawn* Pawn, float duration);                                                       // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.SetTailRotorRotation
	// void SetTailRotorRotation(float Degrees);                                                                                // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.SetRotorWashActive
	// void SetRotorWashActive(bool bActive);                                                                                   // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.SetMainRotorRotation
	// void SetMainRotorRotation(float Degrees);                                                                                // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.ServerUpdateControlState
	// void ServerUpdateControlState(FReplicatedHeliControlState InControlState);                                               // [0xab10888] Final|Net|Native|Event|Private|NetServer 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnTickRotors
	// void OnTickRotors(float RotorAngleDegrees);                                                                              // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnStartupEnd
	// void OnStartupEnd();                                                                                                     // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnStartupBegin
	// void OnStartupBegin();                                                                                                   // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnRotorsStop
	// void OnRotorsStop();                                                                                                     // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnRotorDamagePlayer
	// void OnRotorDamagePlayer(FHitResult& Impact);                                                                            // [0x130d900] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnRotorDamageDealtOuter
	// void OnRotorDamageDealtOuter(FHitResult& Impact);                                                                        // [0x130d900] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnRotorDamageDealtInner
	// void OnRotorDamageDealtInner(FHitResult& Impact);                                                                        // [0x130d900] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnRotorDamageDealt
	// void OnRotorDamageDealt(FHitResult& Impact, bool bInner);                                                                // [0x130d900] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnRep_HoagieState
	// void OnRep_HoagieState();                                                                                                // [0xab10808] Final|Native|Protected 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnRep_ControlState
	// void OnRep_ControlState();                                                                                               // [0x3047908] Final|Native|Private 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnRefueledFromEmpty
	// void OnRefueledFromEmpty();                                                                                              // [0xab107f4] Final|Native|Protected 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnImpactWhileCritical
	// void OnImpactWhileCritical();                                                                                            // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnImpactOtherHoagie
	// void OnImpactOtherHoagie(FVector& HitLocation, FVector& NormalImpulse);                                                  // [0x130d900] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnCritRotor
	// void OnCritRotor(float Damage, FVector& ImpactLocation, class AController* DamageInstigator, class AActor* DamageCauser, bool bMainRotor); // [0x130d900] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnBoostStarted
	// void OnBoostStarted();                                                                                                   // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnBoostReady
	// void OnBoostReady();                                                                                                     // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnBoostFinished
	// void OnBoostFinished();                                                                                                  // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnBoostFailed
	// void OnBoostFailed();                                                                                                    // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.MulticastRotorImpulse
	// void MulticastRotorImpulse(FHitResult RotorHit);                                                                         // [0xab10720] Net|NetReliableNative|Event|NetMulticast|Protected|BlueprintCallable 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.IsStartingUp
	// bool IsStartingUp();                                                                                                     // [0xab10704] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.IsShuttingDown
	// bool IsShuttingDown();                                                                                                   // [0xab106e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.IsScrapingBottom
	// bool IsScrapingBottom();                                                                                                 // [0xab106c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.HoagieOnDisabledChanged
	// void HoagieOnDisabledChanged(bool bDisabled);                                                                            // [0xab105fc] Final|Native|Protected 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetVerticalSpeedKmh
	// float GetVerticalSpeedKmh();                                                                                             // [0xab105d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetThrustDirection
	// FVector GetThrustDirection(bool bWorldSpace);                                                                            // [0xab104f0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetStrafeAlpha
	// float GetStrafeAlpha();                                                                                                  // [0xab10370] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetSteerAlpha
	// float GetSteerAlpha();                                                                                                   // [0xab104c8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetShutdownTimeLeft
	// float GetShutdownTimeLeft();                                                                                             // [0xab104b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetRotorSpeedPercent
	// float GetRotorSpeedPercent();                                                                                            // [0xab10490] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetRotorSpeed
	// float GetRotorSpeed();                                                                                                   // [0xab10478] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetRotorCenterPosition
	// FVector GetRotorCenterPosition();                                                                                        // [0xab10440] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetRotorAngleDegrees
	// float GetRotorAngleDegrees();                                                                                            // [0xab10428] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetMaxBoostCooldown
	// float GetMaxBoostCooldown();                                                                                             // [0xab10408] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetMaxAltitude
	// float GetMaxAltitude();                                                                                                  // [0xab103e8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetLiftAlpha
	// float GetLiftAlpha();                                                                                                    // [0xab103c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetIsEngineOn
	// bool GetIsEngineOn();                                                                                                    // [0xab103a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetForwardAlpha
	// float GetForwardAlpha();                                                                                                 // [0xab10370] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetDistanceToGround
	// float GetDistanceToGround();                                                                                             // [0xab10358] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetBoostTimeLeft
	// float GetBoostTimeLeft();                                                                                                // [0xab10340] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetBoostDuration
	// float GetBoostDuration();                                                                                                // [0xab10320] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetBoostDirection
	// FVector GetBoostDirection();                                                                                             // [0xab102f8] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetBoostCooldown
	// float GetBoostCooldown();                                                                                                // [0xab102e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetAltitude
	// float GetAltitude();                                                                                                     // [0xab102c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/HoagieRuntime.FortHoagieVehicleConfigs
/// Size: 0x0238 (0x000950 - 0x000B88)
class UFortHoagieVehicleConfigs : public UFortPhysicsVehicleConfigs
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2952;

public:
	DMember(float)                                     StrafeForce                                                 OFFSET(get<float>, {0x950, 4, 0, 0})
	DMember(float)                                     StrafeForceMin                                              OFFSET(get<float>, {0x954, 4, 0, 0})
	DMember(float)                                     MaxStrafeSpeedKmh                                           OFFSET(get<float>, {0x958, 4, 0, 0})
	DMember(float)                                     StrafeTooFastBrakeForce                                     OFFSET(get<float>, {0x95C, 4, 0, 0})
	DMember(float)                                     LandedBrakeForce                                            OFFSET(get<float>, {0x960, 4, 0, 0})
	DMember(float)                                     LiftForce                                                   OFFSET(get<float>, {0x964, 4, 0, 0})
	DMember(float)                                     MaxLiftSpeedKmh                                             OFFSET(get<float>, {0x968, 4, 0, 0})
	DMember(float)                                     LiftTooFastBrakeForce                                       OFFSET(get<float>, {0x96C, 4, 0, 0})
	DMember(float)                                     LateralDragCoefficient                                      OFFSET(get<float>, {0x970, 4, 0, 0})
	DMember(float)                                     LateralDragCoefficient2                                     OFFSET(get<float>, {0x974, 4, 0, 0})
	DMember(float)                                     LiftDragCoefficient                                         OFFSET(get<float>, {0x978, 4, 0, 0})
	DMember(float)                                     LiftDragCoefficient2                                        OFFSET(get<float>, {0x97C, 4, 0, 0})
	DMember(float)                                     MaxPitchForCameraYaw                                        OFFSET(get<float>, {0x980, 4, 0, 0})
	DMember(float)                                     MaxCameraYawAngle                                           OFFSET(get<float>, {0x984, 4, 0, 0})
	DMember(float)                                     CameraYawStiff                                              OFFSET(get<float>, {0x988, 4, 0, 0})
	DMember(float)                                     CameraYawDamp                                               OFFSET(get<float>, {0x98C, 4, 0, 0})
	DMember(float)                                     CameraYawStrength                                           OFFSET(get<float>, {0x990, 4, 0, 0})
	DMember(float)                                     UprightStiff                                                OFFSET(get<float>, {0x994, 4, 0, 0})
	DMember(float)                                     UprightDamp                                                 OFFSET(get<float>, {0x998, 4, 0, 0})
	DMember(bool)                                      bUseVehiclePivotForCameraPitch                              OFFSET(get<bool>, {0x99C, 1, 0, 0})
	DMember(float)                                     ThrustTorqueAnglePercent                                    OFFSET(get<float>, {0x9A0, 4, 0, 0})
	DMember(float)                                     BoostThrustTorqueAnglePercent                               OFFSET(get<float>, {0x9A4, 4, 0, 0})
	DMember(float)                                     ThrustTorqueStiff                                           OFFSET(get<float>, {0x9A8, 4, 0, 0})
	DMember(float)                                     ThrustTorqueDamp                                            OFFSET(get<float>, {0x9AC, 4, 0, 0})
	DMember(float)                                     ThrustTorqueMaxAccel                                        OFFSET(get<float>, {0x9B0, 4, 0, 0})
	DMember(float)                                     ThrustTorque                                                OFFSET(get<float>, {0x9B4, 4, 0, 0})
	DMember(float)                                     YawTorque                                                   OFFSET(get<float>, {0x9B8, 4, 0, 0})
	DMember(float)                                     YawTorqueDampingSpeed                                       OFFSET(get<float>, {0x9BC, 4, 0, 0})
	DMember(float)                                     BoostForce                                                  OFFSET(get<float>, {0x9C0, 4, 0, 0})
	DMember(float)                                     BoostMaxSpeedKmh                                            OFFSET(get<float>, {0x9C4, 4, 0, 0})
	DMember(float)                                     BoostDuration                                               OFFSET(get<float>, {0x9C8, 4, 0, 0})
	DMember(float)                                     BoostCooldown                                               OFFSET(get<float>, {0x9CC, 4, 0, 0})
	DMember(float)                                     BoostTorqueStiff                                            OFFSET(get<float>, {0x9D0, 4, 0, 0})
	DMember(float)                                     BoostTorqueDamp                                             OFFSET(get<float>, {0x9D4, 4, 0, 0})
	DMember(float)                                     AfterBoostBrakingForce                                      OFFSET(get<float>, {0x9D8, 4, 0, 0})
	DMember(float)                                     AfterBoostBrakingDuration                                   OFFSET(get<float>, {0x9DC, 4, 0, 0})
	DMember(float)                                     AfterBoostBrakingMinSpeed                                   OFFSET(get<float>, {0x9E0, 4, 0, 0})
	DMember(float)                                     PitchAngleRequiredForFullThrust                             OFFSET(get<float>, {0x9E4, 4, 0, 0})
	DMember(float)                                     DistanceToGroundForLanding                                  OFFSET(get<float>, {0x9E8, 4, 0, 0})
	DMember(float)                                     StartupDelay                                                OFFSET(get<float>, {0x9EC, 4, 0, 0})
	DMember(float)                                     LandingSequenceDelay                                        OFFSET(get<float>, {0x9F0, 4, 0, 0})
	DMember(float)                                     RotorsRadius                                                OFFSET(get<float>, {0x9F4, 4, 0, 0})
	DMember(float)                                     RotorsRadiusInner                                           OFFSET(get<float>, {0x9F8, 4, 0, 0})
	DMember(float)                                     NoDriverBrakeForce                                          OFFSET(get<float>, {0x9FC, 4, 0, 0})
	DMember(float)                                     TimeBetweenRotorDamageTicks                                 OFFSET(get<float>, {0xA00, 4, 0, 0})
	DMember(float)                                     AutoLandingForce                                            OFFSET(get<float>, {0xA04, 4, 0, 0})
	DMember(float)                                     RotorDamageBoxSweepLength                                   OFFSET(get<float>, {0xA08, 4, 0, 0})
	DMember(float)                                     CriticalStateLiftForce                                      OFFSET(get<float>, {0xA0C, 4, 0, 0})
	DMember(float)                                     IdleRotationMultiplier                                      OFFSET(get<float>, {0xA10, 4, 0, 0})
	DMember(float)                                     LiftPitchDegrees                                            OFFSET(get<float>, {0xA14, 4, 0, 0})
	DMember(float)                                     MinAltitudeForIdleNoise                                     OFFSET(get<float>, {0xA18, 4, 0, 0})
	DMember(float)                                     DefaultLinearDamp                                           OFFSET(get<float>, {0xA1C, 4, 0, 0})
	DMember(float)                                     DefaultAngularDamp                                          OFFSET(get<float>, {0xA20, 4, 0, 0})
	DMember(float)                                     LandingLinearDamp                                           OFFSET(get<float>, {0xA24, 4, 0, 0})
	DMember(float)                                     LandingAngularDamp                                          OFFSET(get<float>, {0xA28, 4, 0, 0})
	DMember(float)                                     LandingLiftAlpha                                            OFFSET(get<float>, {0xA2C, 4, 0, 0})
	DMember(float)                                     CriticalStateThrustMultiplier                               OFFSET(get<float>, {0xA30, 4, 0, 0})
	DMember(float)                                     BodyUpDotThresholdForLanding                                OFFSET(get<float>, {0xA34, 4, 0, 0})
	DMember(int32_t)                                   CriticalHealthThreshold                                     OFFSET(get<int32_t>, {0xA38, 4, 0, 0})
	DMember(float)                                     DamagePerImpulseWhileCritical                               OFFSET(get<float>, {0xA3C, 4, 0, 0})
	DMember(float)                                     RotorImpulseLinear                                          OFFSET(get<float>, {0xA40, 4, 0, 0})
	DMember(float)                                     RotorImpulseAngular                                         OFFSET(get<float>, {0xA44, 4, 0, 0})
	DMember(float)                                     RotorImpulseCooldown                                        OFFSET(get<float>, {0xA48, 4, 0, 0})
	DMember(float)                                     StartupLift                                                 OFFSET(get<float>, {0xA4C, 4, 0, 0})
	DMember(float)                                     StartupLiftTime                                             OFFSET(get<float>, {0xA50, 4, 0, 0})
	DMember(float)                                     MaxAltitude                                                 OFFSET(get<float>, {0xA54, 4, 0, 0})
	DMember(float)                                     AltitudeForSpinning                                         OFFSET(get<float>, {0xA58, 4, 0, 0})
	DMember(float)                                     RotorMaxSpeed                                               OFFSET(get<float>, {0xA5C, 4, 0, 0})
	DMember(float)                                     RotorAccel                                                  OFFSET(get<float>, {0xA60, 4, 0, 0})
	DMember(float)                                     RotorDecel                                                  OFFSET(get<float>, {0xA64, 4, 0, 0})
	DMember(float)                                     ExplodeRotorDecel                                           OFFSET(get<float>, {0xA68, 4, 0, 0})
	DMember(float)                                     MinRotorSpeedForSkippingStartup                             OFFSET(get<float>, {0xA6C, 4, 0, 0})
	DMember(float)                                     RotorSpeedForStartupLift                                    OFFSET(get<float>, {0xA70, 4, 0, 0})
	DMember(float)                                     CriticalLiftForceDecay                                      OFFSET(get<float>, {0xA74, 4, 0, 0})
	DMember(float)                                     CriticalYawTorqueMin                                        OFFSET(get<float>, {0xA78, 4, 0, 0})
	DMember(float)                                     CriticalYawTorqueMax                                        OFFSET(get<float>, {0xA7C, 4, 0, 0})
	DMember(float)                                     CriticalYawTorqueRampDuration                               OFFSET(get<float>, {0xA80, 4, 0, 0})
	DMember(float)                                     RotorTraceRotationSpeed                                     OFFSET(get<float>, {0xA84, 4, 0, 0})
	DMember(float)                                     RotorTraceBoxSize                                           OFFSET(get<float>, {0xA88, 4, 0, 0})
	DMember(float)                                     RotorTraceBoxHeight                                         OFFSET(get<float>, {0xA8C, 4, 0, 0})
	DMember(float)                                     MaxCriticalFallForce                                        OFFSET(get<float>, {0xA90, 4, 0, 0})
	DMember(float)                                     BoostFOV                                                    OFFSET(get<float>, {0xA94, 4, 0, 0})
	DMember(float)                                     GentleCrashTimeToExplode                                    OFFSET(get<float>, {0xA98, 4, 0, 0})
	DMember(float)                                     CriticalTimeForGentleCrash                                  OFFSET(get<float>, {0xA9C, 4, 0, 0})
	DMember(float)                                     AutoLandingYawTorque                                        OFFSET(get<float>, {0xAA0, 4, 0, 0})
	DMember(float)                                     MinHeightForAutoLandingYawTorque                            OFFSET(get<float>, {0xAA4, 4, 0, 0})
	DMember(float)                                     MinSpeedForScrapingBottom                                   OFFSET(get<float>, {0xAA8, 4, 0, 0})
	DMember(float)                                     FallDamageHeightBuffer                                      OFFSET(get<float>, {0xAAC, 4, 0, 0})
	DMember(float)                                     TimeBetweenRotorPlayerDamage                                OFFSET(get<float>, {0xAB0, 4, 0, 0})
	DMember(float)                                     RotorMoveSpeedRequiredToUpdateTraceDirSqr                   OFFSET(get<float>, {0xAB4, 4, 0, 0})
	DMember(float)                                     FoliageTraceRate                                            OFFSET(get<float>, {0xAB8, 4, 0, 0})
	DMember(float)                                     RotorWashTicksPerFrame                                      OFFSET(get<float>, {0xABC, 4, 0, 0})
	DMember(float)                                     CriticalHitRadius                                           OFFSET(get<float>, {0xAC0, 4, 0, 0})
	DMember(float)                                     AngleNormalUpForLockMovement                                OFFSET(get<float>, {0xAC4, 4, 0, 0})
	DMember(float)                                     MaxAutoLandingTime                                          OFFSET(get<float>, {0xAC8, 4, 0, 0})
	DMember(float)                                     SpeedThresholdForCrashed                                    OFFSET(get<float>, {0xACC, 4, 0, 0})
	DMember(float)                                     CritMultiplier                                              OFFSET(get<float>, {0xAD0, 4, 0, 0})
	DMember(float)                                     AltitudeForSprings                                          OFFSET(get<float>, {0xAD4, 4, 0, 0})
	DMember(float)                                     MaxCrashingTime                                             OFFSET(get<float>, {0xAD8, 4, 0, 0})
	DMember(float)                                     MaxCrashingScrapingTime                                     OFFSET(get<float>, {0xADC, 4, 0, 0})
	DMember(float)                                     MaxCrashingTimeSpentNotMoving                               OFFSET(get<float>, {0xAE0, 4, 0, 0})
	DMember(float)                                     LandscapeRotorImpulseMag                                    OFFSET(get<float>, {0xAE4, 4, 0, 0})
	DMember(float)                                     HealthThresholdForLandscapeRotorImpulse                     OFFSET(get<float>, {0xAE8, 4, 0, 0})
	DMember(float)                                     MaxHeightBuffer                                             OFFSET(get<float>, {0xAEC, 4, 0, 0})
	DMember(bool)                                      bImpulseOnOuterRotorHitLandscape                            OFFSET(get<bool>, {0xAF0, 1, 0, 0})
	DMember(bool)                                      bSkipRotorImpulses                                          OFFSET(get<bool>, {0xAF1, 1, 0, 0})
	SMember(FVector)                                   FoliageTraceBoxSize                                         OFFSET(getStruct<T>, {0xAF8, 24, 0, 0})
	SMember(FVector)                                   WaterBoxSize                                                OFFSET(getStruct<T>, {0xB10, 24, 0, 0})
	SMember(FVector)                                   WaterBoxOffset                                              OFFSET(getStruct<T>, {0xB28, 24, 0, 0})
	SMember(FVector)                                   RotorOffsetFromActorLocationOnServer                        OFFSET(getStruct<T>, {0xB40, 24, 0, 0})
	DMember(bool)                                      bSkipContactRotations                                       OFFSET(get<bool>, {0xB58, 1, 0, 0})
	SMember(FScalableFloat)                            MaxAutoLandHeightWhenOutOfFuel                              OFFSET(getStruct<T>, {0xB60, 40, 0, 0})
};

/// Struct /Script/HoagieRuntime.FortHeliFlightModel
/// Size: 0x01E8 (0x000000 - 0x0001E8)
class FFortHeliFlightModel : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 488;

public:
	CMember(class UFortHoagieVehicleConfigs*)          Configs                                                     OFFSET(get<T>, {0x1E0, 8, 0, 0})
};

/// Struct /Script/HoagieRuntime.RotorHit
/// Size: 0x0028 (0x000000 - 0x000028)
class FRotorHit : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FActorInstanceHandle)                      HitObjectHandle                                             OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	DMember(float)                                     LastHitTimer                                                OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Struct /Script/HoagieRuntime.CachedSeatCollision
/// Size: 0x0008 (0x000000 - 0x000008)
class FCachedSeatCollision : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   SeatIndex                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(bool)                                      bOccupied                                                   OFFSET(get<bool>, {0x4, 1, 0, 0})
};

/// Struct /Script/HoagieRuntime.ReplicatedHeliControlState
/// Size: 0x0030 (0x000000 - 0x000030)
class FReplicatedHeliControlState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FVector_NetQuantizeNormal)                 Up                                                          OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector_NetQuantizeNormal)                 Forward                                                     OFFSET(getStruct<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/HoagieRuntime.HoagieCmd
/// Size: 0x0078 (0x000000 - 0x000078)
class FHoagieCmd : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Struct /Script/HoagieRuntime.HoagieInPersistent
/// Size: 0x0040 (0x0001A0 - 0x0001E0)
class FHoagieInPersistent : public FFortVehicleInPersistent
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	CMember(class UFortHoagieVehicleConfigs*)          FortHoagieVehicleConfigs                                    OFFSET(get<T>, {0x1A0, 8, 0, 0})
	CMember(EHoagieState)                              CurrentHoagieState                                          OFFSET(get<T>, {0x1A8, 4, 0, 0})
	DMember(float)                                     LastRotorImpulseTime                                        OFFSET(get<float>, {0x1AC, 4, 0, 0})
	SMember(FVector)                                   RotorHitLinearImpulse                                       OFFSET(getStruct<T>, {0x1B0, 24, 0, 0})
	SMember(FVector)                                   RotorHitAngularImpulse                                      OFFSET(getStruct<T>, {0x1C8, 24, 0, 0})
};

/// Struct /Script/HoagieRuntime.HoagieInternal
/// Size: 0x01F0 (0x0000E0 - 0x0002D0)
class FHoagieInternal : public FFortVehicleInternalPersistent
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	SMember(FFortHeliFlightModel)                      FlightModel                                                 OFFSET(getStruct<T>, {0xE0, 488, 0, 0})
};

/// Struct /Script/HoagieRuntime.HoagieOutContinuous
/// Size: 0x0000 (0x000050 - 0x000050)
class FHoagieOutContinuous : public FFortVehicleOutContinuous
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/HoagieRuntime.HoagieOutPersistent
/// Size: 0x0000 (0x000028 - 0x000028)
class FHoagieOutPersistent : public FFortVehicleOutPersistent
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/HoagieRuntime.HoagieDeathEffectInfo
/// Size: 0x0150 (0x000000 - 0x000150)
class FHoagieDeathEffectInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	DMember(float)                                     Damage                                                      OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FGameplayTagContainer)                     DamageTags                                                  OFFSET(getStruct<T>, {0x8, 32, 0, 0})
	SMember(FVector)                                   Momentum                                                    OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	SMember(FHitResult)                                HitInfo                                                     OFFSET(getStruct<T>, {0x40, 232, 0, 0})
	CMember(class AFortPawn*)                          InstigatedBy                                                OFFSET(get<T>, {0x128, 8, 0, 0})
	CMember(class AActor*)                             DamageCauser                                                OFFSET(get<T>, {0x130, 8, 0, 0})
	SMember(FGameplayEffectContextHandle)              EffectContext                                               OFFSET(getStruct<T>, {0x138, 24, 0, 0})
};

/// Enum /Script/HoagieRuntime.EHoagieBoostState
/// Size: 0x06
enum EHoagieBoostState : uint8_t
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
enum EHoagieState : uint32_t
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

