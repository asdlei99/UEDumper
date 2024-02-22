
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayCameras
/// dependency: GameplayTags
/// dependency: Niagara
/// dependency: Water

/// Class /Script/MotorboatRuntime.FortMeatballVehicleAnimInstance
/// Size: 0x00E0 (0x000620 - 0x000700)
class UFortMeatballVehicleAnimInstance : public UFortVehicleAnimInstance
{ 
public:
	class AFortMeatballVehicle*                        Meatball;                                                   // 0x0618   (0x0008)  
	float                                              MeatballSpeed;                                              // 0x0620   (0x0004)  
	float                                              SteeringAngle;                                              // 0x0624   (0x0004)  
	float                                              BoostCharge;                                                // 0x0628   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x062C   (0x0004)  MISSED
	FVector                                            SeatOffset;                                                 // 0x0630   (0x0018)  
	FRotator                                           SeatRotation;                                               // 0x0648   (0x0018)  
	FRotator                                           CurrentDriveJiggle;                                         // 0x0660   (0x0018)  
	FRotator                                           SteeringRotator;                                            // 0x0678   (0x0018)  
	FRotator                                           SpeedGuageRotator;                                          // 0x0690   (0x0018)  
	FRotator                                           BoostPercentRotator;                                        // 0x06A8   (0x0018)  
	FRotator                                           RandomJiggleRotatorMotorTop;                                // 0x06C0   (0x0018)  
	FRotator                                           RandomJiggleRotatorMotorBase;                               // 0x06D8   (0x0018)  
	bool                                               bIsMovingForward;                                           // 0x06F0   (0x0001)  
	bool                                               bIsDrivingFast;                                             // 0x06F1   (0x0001)  
	bool                                               bIsBraking;                                                 // 0x06F2   (0x0001)  
	bool                                               bIsBoosting;                                                // 0x06F3   (0x0001)  
	bool                                               bIsBoostReady;                                              // 0x06F4   (0x0001)  
	bool                                               bIsBoostStarting;                                           // 0x06F5   (0x0001)  
	bool                                               bIsBoostEnding;                                             // 0x06F6   (0x0001)  
	bool                                               bIsRocketReady;                                             // 0x06F7   (0x0001)  
	bool                                               bIsRocketOnCooldown;                                        // 0x06F8   (0x0001)  
	bool                                               bIsSteeringLeft;                                            // 0x06F9   (0x0001)  
	bool                                               bIsSteeringRight;                                           // 0x06FA   (0x0001)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x06FB   (0x0005)  MISSED
};

/// Class /Script/MotorboatRuntime.FortMeatballPontoonsComponent
/// Size: 0x0000 (0x0002C0 - 0x0002C0)
class UFortMeatballPontoonsComponent : public UFortVehiclePontoonsComponent
{ 
public:
};

/// Class /Script/MotorboatRuntime.FortMeatballVehicle
/// Size: 0x02F0 (0x001F20 - 0x002210)
class AFortMeatballVehicle : public AFortAthenaSKVehicle
{ 
public:
	FFortRechargingActionTimer                         BoostAction;                                                // 0x1F18   (0x00D8)  
	float                                              FxNormalizationMaxSpeedKmh;                                 // 0x1FF0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x1FF4   (0x0004)  MISSED
	class UFortVehicleAudioVoice*                      CacheAudioEngineUp;                                         // 0x1FF8   (0x0008)  
	class UFortVehicleAudioVoice*                      CacheAudioEngineDown;                                       // 0x2000   (0x0008)  
	class UFortVehicleAudioVoice*                      CacheAudioWakeTurn;                                         // 0x2008   (0x0008)  
	class UFortVehicleAudioVoice*                      CacheAudioWakeSpeed;                                        // 0x2010   (0x0008)  
	class UFortVehicleAudioVoice*                      CacheAudioScrape;                                           // 0x2018   (0x0008)  
	class UFortVehicleAudioVoice*                      CacheAudioEngineOutOfFuel;                                  // 0x2020   (0x0008)  
	class UMaterialInstanceDynamic*                    BoostMID;                                                   // 0x2028   (0x0008)  
	class UNiagaraComponent*                           CachedGroundFXComponent;                                    // 0x2030   (0x0008)  
	class APlayerController*                           DrivingPlayerController;                                    // 0x2038   (0x0008)  
	class ULegacyCameraShake*                          LandCameraShake;                                            // 0x2040   (0x0008)  
	class UClass*                                      LandCameraShakeClass;                                       // 0x2048   (0x0008)  
	class ULegacyCameraShake*                          DriverCameraShake;                                          // 0x2050   (0x0008)  
	class UClass*                                      DriverCameraShakeClass;                                     // 0x2058   (0x0008)  
	float                                              LandRumbleIntensity;                                        // 0x2060   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x2064   (0x0004)  MISSED
	uint64_t                                           LandForceFeedbackHandle;                                    // 0x2068   (0x0008)  
	float                                              TurnRumbleIntensity;                                        // 0x2070   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x2074   (0x0004)  MISSED
	uint64_t                                           TurnForceFeedbackHandle;                                    // 0x2078   (0x0008)  
	float                                              CurrentSnowAltitude;                                        // 0x2080   (0x0004)  
	bool                                               bHasSnow;                                                   // 0x2084   (0x0001)  
	bool                                               bLargeRumble;                                               // 0x2085   (0x0001)  
	bool                                               bTurnRumbleActive;                                          // 0x2086   (0x0001)  
	bool                                               bWaterDropsOnScreen;                                        // 0x2087   (0x0001)  
	FGameplayTag                                       GCVehicleScreenDrips;                                       // 0x2088   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x208C   (0x0004)  MISSED
	FGameplayCueParameters                             GCParamsEmpty;                                              // 0x2090   (0x00D0)  
	class UClass*                                      BoostingCamera;                                             // 0x2160   (0x0008)  
	class UClass*                                      VehicleCameraNoWeaponOverride;                              // 0x2168   (0x0008)  
	unsigned char                                      UnknownData04_5[0x10];                                      // 0x2170   (0x0010)  MISSED
	class UFortMeatballVehicleConfigs*                 FortMeatballVehicleConfigs;                                 // 0x2180   (0x0008)  
	int32_t                                            WaterLineStartPontoonIndex;                                 // 0x2188   (0x0004)  
	int32_t                                            WaterLineEndPontoonIndex;                                   // 0x218C   (0x0004)  
	unsigned char                                      UnknownData05_5[0x40];                                      // 0x2190   (0x0040)  MISSED
	bool                                               bBoostFailed;                                               // 0x21D0   (0x0001)  
	unsigned char                                      UnknownData06_6[0x3F];                                      // 0x21D1   (0x003F)  MISSED


	/// Functions
	// Function /Script/MotorboatRuntime.FortMeatballVehicle.UpdateSnowAndDirtParams
	// void UpdateSnowAndDirtParams(float NormalizedForwardSpeed);                                                           // [0xae14a40] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MotorboatRuntime.FortMeatballVehicle.StopTurnRumble
	// void StopTurnRumble();                                                                                                // [0xae14a2c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MotorboatRuntime.FortMeatballVehicle.StopLandRumble
	// void StopLandRumble();                                                                                                // [0xae14a18] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MotorboatRuntime.FortMeatballVehicle.StopDriverCameraShake
	// void StopDriverCameraShake();                                                                                         // [0xae14a04] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MotorboatRuntime.FortMeatballVehicle.SmashedThroughBuildingPiece
	// void SmashedThroughBuildingPiece(FVector& ImpactPoint, FVector& ImpactNormal, class ABuildingActor* BuildingHitActor); // [0x3d1d968] Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/MotorboatRuntime.FortMeatballVehicle.ShowCooldownCue
	// void ShowCooldownCue(class AFortPlayerPawn* Pawn, float duration);                                                    // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/MotorboatRuntime.FortMeatballVehicle.OnBoostStarted
	// void OnBoostStarted();                                                                                                // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/MotorboatRuntime.FortMeatballVehicle.OnBoostReady
	// void OnBoostReady();                                                                                                  // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/MotorboatRuntime.FortMeatballVehicle.OnBoostFinished
	// void OnBoostFinished();                                                                                               // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/MotorboatRuntime.FortMeatballVehicle.OnBoostFailed
	// void OnBoostFailed();                                                                                                 // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/MotorboatRuntime.FortMeatballVehicle.LandShakeEnd
	// void LandShakeEnd();                                                                                                  // [0xae149f0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MotorboatRuntime.FortMeatballVehicle.GetSeatRotation
	// FQuat GetSeatRotation();                                                                                              // [0xae149c8] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MotorboatRuntime.FortMeatballVehicle.GetSeatOffset
	// FVector GetSeatOffset();                                                                                              // [0xae149a0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MotorboatRuntime.FortMeatballVehicle.GetBoostCharge
	// float GetBoostCharge();                                                                                               // [0xae14978] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MotorboatRuntime.FortMeatballVehicle.CacheGroundFXComponent
	// void CacheGroundFXComponent(class UNiagaraComponent* InGroundFXComponent);                                            // [0xae148ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/MotorboatRuntime.FortMeatballVehicle.CacheAudioPointers
	// void CacheAudioPointers(class UFortVehicleAudioVoice* InAudioEngineUp, class UFortVehicleAudioVoice* InAudioEngineDown, class UFortVehicleAudioVoice* InAudioWakeTurn, class UFortVehicleAudioVoice* InAudioWakeSpeed, class UFortVehicleAudioVoice* InAudioScrape, class UFortVehicleAudioVoice* InAudioEngineOutOfFuel); // [0xae14670] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MotorboatRuntime.FortMeatballVehicleConfigs
/// Size: 0x00D0 (0x000948 - 0x000A18)
class UFortMeatballVehicleConfigs : public UFortPhysicsVehicleConfigs
{ 
public:
	float                                              WaterSteerRollFactor;                                       // 0x0948   (0x0004)  
	float                                              InnerTurnPontoonOffsetMultiplier;                           // 0x094C   (0x0004)  
	float                                              OuterTurnPontoonOffsetMultiplier;                           // 0x0950   (0x0004)  
	float                                              MinForwardSpeedToBankOnTurn;                                // 0x0954   (0x0004)  
	float                                              BoostMinPushForce;                                          // 0x0958   (0x0004)  
	float                                              BoostTopSpeedForceMultiplier;                               // 0x095C   (0x0004)  
	float                                              BoostTopSpeedMultiplier;                                    // 0x0960   (0x0004)  
	float                                              MaxPontoonOffsetPerSecond;                                  // 0x0964   (0x0004)  
	float                                              LandTopSpeedMultiplier;                                     // 0x0968   (0x0004)  
	float                                              LandPushForceMultiplier;                                    // 0x096C   (0x0004)  
	int32_t                                            MinPushPontoonsForWaterDriving;                             // 0x0970   (0x0004)  
	float                                              MaxWaterPitchAngle;                                         // 0x0974   (0x0004)  
	float                                              MinForwardSpeedToPitch;                                     // 0x0978   (0x0004)  
	float                                              MinForwardSpeedForMaxPitch;                                 // 0x097C   (0x0004)  
	float                                              MaxForwardSpeedForMaxPitch;                                 // 0x0980   (0x0004)  
	float                                              MaxFowrardSpeedPitchFactor;                                 // 0x0984   (0x0004)  
	float                                              BoostMaxForwardSpeedPitchFactor;                            // 0x0988   (0x0004)  
	float                                              FrontLateralFrictionFactor;                                 // 0x098C   (0x0004)  
	float                                              RearLateralFrictionFactor;                                  // 0x0990   (0x0004)  
	float                                              LandFrontLateralFrictionFactor;                             // 0x0994   (0x0004)  
	float                                              LandRearLateralFrictionFactor;                              // 0x0998   (0x0004)  
	float                                              LateralFrictionModStartSpeedKmh;                            // 0x099C   (0x0004)  
	float                                              RearLateralFrictionModPerSpeedKmh;                          // 0x09A0   (0x0004)  
	float                                              FrontLateralFrictionModPerSpeedKmh;                         // 0x09A4   (0x0004)  
	float                                              SeatOffsetScaleX;                                           // 0x09A8   (0x0004)  
	float                                              SeatOffsetScaleY;                                           // 0x09AC   (0x0004)  
	float                                              SeatYawAngleMax;                                            // 0x09B0   (0x0004)  
	float                                              SeatPitchAngleMax;                                          // 0x09B4   (0x0004)  
	float                                              BoostSteeringMultiplier;                                    // 0x09B8   (0x0004)  
	float                                              BoostSteeringMultiplierRampTime;                            // 0x09BC   (0x0004)  
	float                                              LandSteeringMultiplier;                                     // 0x09C0   (0x0004)  
	float                                              LandMinSpeedSteeringAngle;                                  // 0x09C4   (0x0004)  
	float                                              LandMaxSpeedSteeringAngle;                                  // 0x09C8   (0x0004)  
	float                                              DragCoefficientNoAccel;                                     // 0x09CC   (0x0004)  
	float                                              DragCoefficient2NoAccel;                                    // 0x09D0   (0x0004)  
	float                                              DragCoefficientMultiplierRoad;                              // 0x09D4   (0x0004)  
	float                                              DragCoefficientMultiplierGrass;                             // 0x09D8   (0x0004)  
	float                                              DragCoefficientMultiplierDirt;                              // 0x09DC   (0x0004)  
	float                                              DragCoefficientMultiplierSnow;                              // 0x09E0   (0x0004)  
	float                                              DragCoefficientMultiplierIce;                               // 0x09E4   (0x0004)  
	float                                              DragCoefficientMultiplierMud;                               // 0x09E8   (0x0004)  
	float                                              MinSteerAlphaForWaterFriction;                              // 0x09EC   (0x0004)  
	float                                              TurnInPlaceYawStiff;                                        // 0x09F0   (0x0004)  
	float                                              TurnInPlaceYawDamp;                                         // 0x09F4   (0x0004)  
	float                                              MaxSteerRollAngle;                                          // 0x09F8   (0x0004)  
	float                                              MaxTurnInPlaceYawAngle;                                     // 0x09FC   (0x0004)  
	float                                              UprightSpringSteerStrength;                                 // 0x0A00   (0x0004)  
	float                                              TurnInPlaceYawStrength;                                     // 0x0A04   (0x0004)  
	float                                              MaxSpeedForTurnInPlaceKmH;                                  // 0x0A08   (0x0004)  
	float                                              BlendOutExtraSpeedTurnInPlaceKmH;                           // 0x0A0C   (0x0004)  
	float                                              MaxPitchForCameraInPlaceSteer;                              // 0x0A10   (0x0004)  
	float                                              SpringLengthMutliplierWater;                                // 0x0A14   (0x0004)  
};

/// Struct /Script/MotorboatRuntime.MeatballInPersistent
/// Size: 0x0028 (0x0001A0 - 0x0001C8)
struct FMeatballInPersistent : FFortVehicleInPersistent
{ 
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x01A0   (0x0018)  MISSED
	class UFortMeatballVehicleConfigs*                 FortMeatballVehicleConfigs;                                 // 0x01B8   (0x0008)  
	float                                              PushForceCurrentMultiplier;                                 // 0x01C0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x01C4   (0x0004)  MISSED
};

