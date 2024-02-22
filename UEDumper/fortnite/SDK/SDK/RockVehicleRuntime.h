
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AnimGraphRuntime
/// dependency: AudioMotorSim
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: ModularGameplay
/// dependency: Niagara
/// dependency: SrirachaRanch
/// dependency: VehicleAudioRuntime

/// Enum /Script/RockVehicleRuntime.ERockBoostLogic
/// Size: 0x04
enum class ERockBoostLogic : uint8_t
{
	ERockBoostLogic__Standard                                                        = 0,
	ERockBoostLogic__Recharge                                                        = 1,
	ERockBoostLogic__Infinite                                                        = 2,
	ERockBoostLogic__ERockBoostLogic_MAX                                             = 3
};

/// Class /Script/RockVehicleRuntime.RockVehicle_InteractionOverrideComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class URockVehicle_InteractionOverrideComponent : public UFortVehicleInteractionOverrideComponent
{ 
public:
};

/// Class /Script/RockVehicleRuntime.FortCheatManager_RockVehicle
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortCheatManager_RockVehicle : public UChildCheatManager
{ 
public:


	/// Functions
	// Function /Script/RockVehicleRuntime.FortCheatManager_RockVehicle.RockVehicleSetVelocity
	// void RockVehicleSetVelocity(float X, float Y, float Z);                                                               // [0x8c38d50] Final|Exec|Native|Public 
	// Function /Script/RockVehicleRuntime.FortCheatManager_RockVehicle.RockVehicleSetRotation
	// void RockVehicleSetRotation(float pitch, float Yaw, float Roll);                                                      // [0x8c38d50] Final|Exec|Native|Public 
	// Function /Script/RockVehicleRuntime.FortCheatManager_RockVehicle.RockVehicleSetLocation
	// void RockVehicleSetLocation(float X, float Y, float Z);                                                               // [0x8c38d50] Final|Exec|Native|Public 
	// Function /Script/RockVehicleRuntime.FortCheatManager_RockVehicle.RockVehicleSetBalboaVelocity
	// void RockVehicleSetBalboaVelocity(float X, float Y, float Z);                                                         // [0x8c38d50] Final|Exec|Native|Public 
};

/// Struct /Script/RockVehicleRuntime.RockRuntimeConfigOverrides
/// Size: 0x0004 (0x000000 - 0x000004)
struct FRockRuntimeConfigOverrides
{ 
	bool                                               bDamageFriendlyVehicles;                                    // 0x0000   (0x0001)  
	bool                                               bDamageOtherVehicles;                                       // 0x0001   (0x0001)  
	bool                                               bDamageOwnVehicle;                                          // 0x0002   (0x0001)  
	bool                                               bDamageAllowedFromOtherVehicle;                             // 0x0003   (0x0001)  
};

/// Class /Script/RockVehicleRuntime.RockVehicle
/// Size: 0x0240 (0x001F20 - 0x002160)
class ARockVehicle : public AFortAthenaSKVehicle
{ 
public:
	float                                              InputSwivelPitch;                                           // 0x1F18   (0x0004)  
	float                                              InputSwivelYaw;                                             // 0x1F1C   (0x0004)  
	bool                                               bInputReverseCamera : 1;                                    // 0x1F20:0 (0x0001)  
	bool                                               bHasDoubleJumped : 1;                                       // 0x1F20:1 (0x0001)  
	bool                                               bHasDodged : 1;                                             // 0x1F20:2 (0x0001)  
	bool                                               bFreeLookCamera;                                            // 0x1F21   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x1F22   (0x0006)  MISSED
	SDK_UNDEFINED(16,15262) /* FMulticastInlineDelegate */ __um(OnFreeCamToggled);                                 // 0x1F28   (0x0010)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x1F38   (0x0001)  MISSED
	FRockRuntimeConfigOverrides                        RockRuntimeConfigs;                                         // 0x1F39   (0x0004)  
	unsigned char                                      UnknownData02_5[0x1B];                                      // 0x1F3D   (0x001B)  MISSED
	SDK_UNDEFINED(16,15263) /* FMulticastInlineDelegate */ __um(OnSpringImpact);                                   // 0x1F58   (0x0010)  
	unsigned char                                      UnknownData03_5[0x78];                                      // 0x1F68   (0x0078)  MISSED
	class URockVehicleAnalyticsComponent*              RockAnalyticsComp;                                          // 0x1FE0   (0x0008)  
	TArray<class URockVehicleAbility*>                 VehicleAbilities;                                           // 0x1FE8   (0x0010)  
	SDK_UNDEFINED(16,15264) /* TArray<TWeakObjectPtr<UClass*>> */ __um(VehicleAbilityTickOrder);                   // 0x1FF8   (0x0010)  
	class AFortVehicleAudioController*                 CachedVehicleAudioController;                               // 0x2008   (0x0008)  
	class URockVehicleAbility_Supersonic*              SupersonicAbility;                                          // 0x2010   (0x0008)  
	class URockVehicleAnimInstance*                    RockAnimInstance;                                           // 0x2018   (0x0008)  
	FFortAthenaVehicleInputState                       PendingDriverInputState;                                    // 0x2020   (0x0040)  
	FFortAthenaVehicleInputState                       PrevDriverInputState;                                       // 0x2060   (0x0040)  
	FVector                                            EnterExitImpulse;                                           // 0x20A0   (0x0018)  
	unsigned char                                      UnknownData04_6[0xA8];                                      // 0x20B8   (0x00A8)  MISSED


	/// Functions
	// Function /Script/RockVehicleRuntime.RockVehicle.ServerToggleFreeCam
	// void ServerToggleFreeCam();                                                                                           // [0xb6e7ec8] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/RockVehicleRuntime.RockVehicle.ServerSetLegacyDamageValues
	// void ServerSetLegacyDamageValues(bool bDamageFriendlyVehicles, bool bDamageOtherVehicles, bool bDamageOwnVehicle, bool bDamageAllowedFromOtherVehicle); // [0xb6e7d68] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/RockVehicleRuntime.RockVehicle.RockFreeCamToggledDelegate__DelegateSignature
	// void RockFreeCamToggledDelegate__DelegateSignature(bool bFreeCam);                                                    // [0x3d1d968] MulticastDelegate|Public|Delegate 
	// Function /Script/RockVehicleRuntime.RockVehicle.OnSpringImpact__DelegateSignature
	// void OnSpringImpact__DelegateSignature(FName Socket, float ImpactSpeed, FHitResult& OutHit);                          // [0x3d1d968] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/RockVehicleRuntime.RockVehicle.OnRep_FreeLookCamera
	// void OnRep_FreeLookCamera();                                                                                          // [0xb6e7af4] Final|Native|Public  
	// Function /Script/RockVehicleRuntime.RockVehicle.GetThrottleState
	// float GetThrottleState();                                                                                             // [0xb6e72bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RockVehicleRuntime.RockVehicle.GetDriverInput
	// FFortAthenaVehicleInputState GetDriverInput();                                                                        // [0xb6e7228] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RockVehicleRuntime.RockVehicle.GetCurrentRockRuntimeConfigOverrides
	// FRockRuntimeConfigOverrides GetCurrentRockRuntimeConfigOverrides();                                                   // [0xb6e7210] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/RockVehicleRuntime.RockVehicleAbility
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class URockVehicleAbility : public UActorComponent
{ 
public:
	class ARockVehicle*                                Vehicle;                                                    // 0x00A0   (0x0008)  
	float                                              ActiveSeconds;                                              // 0x00A8   (0x0004)  
	float                                              LastDeactivationTimeSeconds;                                // 0x00AC   (0x0004)  


	/// Functions
	// Function /Script/RockVehicleRuntime.RockVehicleAbility.GetVehicle
	// class ARockVehicle* GetVehicle();                                                                                     // [0x2f6b2fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RockVehicleRuntime.RockVehicleAbility.GetInactiveSeconds
	// float GetInactiveSeconds();                                                                                           // [0xb6e7274] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RockVehicleRuntime.RockVehicleAbility.GetActiveSeconds
	// float GetActiveSeconds();                                                                                             // [0x5e5023c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/RockVehicleRuntime.RockVehicleAbility_Physics
/// Size: 0x0058 (0x0000B0 - 0x000108)
class URockVehicleAbility_Physics : public URockVehicleAbility
{ 
public:
	bool                                               bShouldStayActive;                                          // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00B1   (0x0007)  MISSED
	FFortAthenaVehicleInputState                       InputState;                                                 // 0x00B8   (0x0040)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x00F8   (0x0010)  MISSED
};

/// Class /Script/RockVehicleRuntime.RockVehicleAbility_AirControl
/// Size: 0x0060 (0x000108 - 0x000168)
class URockVehicleAbility_AirControl : public URockVehicleAbility_Physics
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x0108   (0x0018)  MISSED
	FVector                                            TorqueAccel;                                                // 0x0120   (0x0018)  
	FVector                                            TorqueDamping;                                              // 0x0138   (0x0018)  
	float                                              DisableForDodgeTime;                                        // 0x0150   (0x0004)  
	bool                                               bAnyWheelsOnGround;                                         // 0x0154   (0x0001)  
	bool                                               bDodgeActive;                                               // 0x0155   (0x0001)  
	bool                                               bAutoUprightActive;                                         // 0x0156   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x0157   (0x0001)  MISSED
	class URockVehicleAbility_Dodge*                   DodgeAbility;                                               // 0x0158   (0x0008)  
	class URockVehicleAbility_AutoUpright*             AutoUprightAbility;                                         // 0x0160   (0x0008)  
};

/// Struct /Script/RockVehicleRuntime.RockScalableFloat
/// Size: 0x0008 (0x000028 - 0x000030)
struct FRockScalableFloat : FScalableFloat
{ 
	float                                              CachedValue;                                                // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Class /Script/RockVehicleRuntime.RockVehicleAbility_AutoUpright
/// Size: 0x0108 (0x000108 - 0x000210)
class URockVehicleAbility_AutoUpright : public URockVehicleAbility_Physics
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x0108   (0x0018)  MISSED
	FRockScalableFloat                                 RollTorque;                                                 // 0x0120   (0x0030)  
	FRockScalableFloat                                 PitchTorque;                                                // 0x0150   (0x0030)  
	FRockScalableFloat                                 PushForce;                                                  // 0x0180   (0x0030)  
	FRockScalableFloat                                 MinActiveSeconds;                                           // 0x01B0   (0x0030)  
	class URockVehicleAbility_Dodge*                   DodgeAbility;                                               // 0x01E0   (0x0008)  
	int32_t                                            LastWorldContactFrame;                                      // 0x01E8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x01EC   (0x0004)  MISSED
	FVector                                            LastContactNormal;                                          // 0x01F0   (0x0018)  
	bool                                               bWheelsOnGround;                                            // 0x0208   (0x0001)  
	bool                                               bAnyWheelsOnGround;                                         // 0x0209   (0x0001)  
	bool                                               bDodgeActive;                                               // 0x020A   (0x0001)  
	bool                                               bBodyContact;                                               // 0x020B   (0x0001)  
	float                                              TimeSinceLastBodyContact;                                   // 0x020C   (0x0004)  
};

/// Class /Script/RockVehicleRuntime.RockVehicleAbility_Boost
/// Size: 0x0068 (0x000108 - 0x000170)
class URockVehicleAbility_Boost : public URockVehicleAbility_Physics
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x0108   (0x0018)  MISSED
	FRockScalableFloat                                 BoostAccel;                                                 // 0x0120   (0x0030)  
	SDK_UNDEFINED(16,15265) /* FMulticastInlineDelegate */ __um(OnBoostFailed);                                    // 0x0150   (0x0010)  
	class URockVehicleBoostTank*                       BoostTank;                                                  // 0x0160   (0x0008)  
	bool                                               bHasBoost;                                                  // 0x0168   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0169   (0x0007)  MISSED
};

/// Class /Script/RockVehicleRuntime.RockVehicleBoostTank
/// Size: 0x0088 (0x0000A0 - 0x000128)
class URockVehicleBoostTank : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,15266) /* FMulticastInlineDelegate */ __um(OnSecondsChanged);                                 // 0x00A0   (0x0010)  
	FRockScalableFloat                                 StartSeconds;                                               // 0x00B0   (0x0030)  
	FRockScalableFloat                                 MaxSeconds;                                                 // 0x00E0   (0x0030)  
	ERockBoostLogic                                    BoostLogic;                                                 // 0x0110   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0111   (0x0003)  MISSED
	float                                              BoostRechargeRate;                                          // 0x0114   (0x0004)  
	float                                              BoostRechargeDelay;                                         // 0x0118   (0x0004)  
	float                                              SecondsRemaining;                                           // 0x011C   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0120   (0x0008)  MISSED


	/// Functions
	// Function /Script/RockVehicleRuntime.RockVehicleBoostTank.OnRep_SecondsRemaining
	// void OnRep_SecondsRemaining(float PrevValue);                                                                         // [0xb6e7b28] Final|Native|Protected 
	// Function /Script/RockVehicleRuntime.RockVehicleBoostTank.IsBoostFull
	// bool IsBoostFull();                                                                                                   // [0xb6e7384] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RockVehicleRuntime.RockVehicleBoostTank.HasBoost
	// bool HasBoost();                                                                                                      // [0xb6e7364] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RockVehicleRuntime.RockVehicleBoostTank.GiveBoost
	// void GiveBoost(float Seconds);                                                                                        // [0xb6e72e4] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/RockVehicleRuntime.RockVehicleBoostTank.GetPercentRemaining
	// float GetPercentRemaining();                                                                                          // [0xb6e729c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RockVehicleRuntime.RockVehicleBoostTank.GetMaxBoostInSeconds
	// float GetMaxBoostInSeconds();                                                                                         // [0x6fc8834] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/RockVehicleRuntime.RockDodgeImpulse
/// Size: 0x0060 (0x000000 - 0x000060)
struct FRockDodgeImpulse
{ 
	FRockScalableFloat                                 VelocityChange;                                             // 0x0000   (0x0030)  
	FRockScalableFloat                                 MaxSpeedScale;                                              // 0x0030   (0x0030)  
};

/// Class /Script/RockVehicleRuntime.RockVehicleAbility_Dodge
/// Size: 0x0330 (0x000108 - 0x000438)
class URockVehicleAbility_Dodge : public URockVehicleAbility_Physics
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x0108   (0x0018)  MISSED
	FRockDodgeImpulse                                  ForwardImpulse;                                             // 0x0120   (0x0060)  
	FRockDodgeImpulse                                  BackwardImpulse;                                            // 0x0180   (0x0060)  
	FRockDodgeImpulse                                  SideImpulse;                                                // 0x01E0   (0x0060)  
	FRockScalableFloat                                 MinTimeAfterJump;                                           // 0x0240   (0x0030)  
	FRockScalableFloat                                 MinTorqueTime;                                              // 0x0270   (0x0030)  
	FRockScalableFloat                                 MaxTorqueTime;                                              // 0x02A0   (0x0030)  
	FRockScalableFloat                                 ForwardTorque;                                              // 0x02D0   (0x0030)  
	FRockScalableFloat                                 SideTorque;                                                 // 0x0300   (0x0030)  
	FRockScalableFloat                                 ZLiftTime;                                                  // 0x0330   (0x0030)  
	FRockScalableFloat                                 ZLiftAccel;                                                 // 0x0360   (0x0030)  
	FRockScalableFloat                                 ZDampingTime;                                               // 0x0390   (0x0030)  
	FRockScalableFloat                                 ZDamping;                                                   // 0x03C0   (0x0030)  
	FRockScalableFloat                                 InputThreshold;                                             // 0x03F0   (0x0030)  
	FVector2D                                          DodgeInput;                                                 // 0x0420   (0x0010)  
	bool                                               bWheelsOnGround;                                            // 0x0430   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0431   (0x0007)  MISSED
};

/// Class /Script/RockVehicleRuntime.RockVehicleAbility_DoubleJump
/// Size: 0x0050 (0x000108 - 0x000158)
class URockVehicleAbility_DoubleJump : public URockVehicleAbility_Physics
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x0108   (0x0018)  MISSED
	FRockScalableFloat                                 JumpVelocity;                                               // 0x0120   (0x0030)  
	class URockVehicleAbility_Jump*                    JumpAbility;                                                // 0x0150   (0x0008)  
};

/// Class /Script/RockVehicleRuntime.RockVehicleAbility_Flip
/// Size: 0x00E8 (0x000108 - 0x0001F0)
class URockVehicleAbility_Flip : public URockVehicleAbility_Physics
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x0108   (0x0018)  MISSED
	FRockScalableFloat                                 Impulse;                                                    // 0x0120   (0x0030)  
	FRockScalableFloat                                 Torque;                                                     // 0x0150   (0x0030)  
	FRockScalableFloat                                 duration;                                                   // 0x0180   (0x0030)  
	FRockScalableFloat                                 ContactNormalThresholdDegrees;                              // 0x01B0   (0x0030)  
	bool                                               bWheelsOnGround;                                            // 0x01E0   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x01E1   (0x000F)  MISSED
};

/// Struct /Script/RockVehicleRuntime.GroundTrailsData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FGroundTrailsData
{ 
	SDK_UNDEFINED(1,15267) /* TEnumAsByte<EPhysicalSurface> */ __um(SurfaceType);                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	class UNiagaraSystem*                              NiagaraFX;                                                  // 0x0008   (0x0008)  
};

/// Struct /Script/RockVehicleRuntime.GroundTrailsMap
/// Size: 0x0018 (0x000000 - 0x000018)
struct FGroundTrailsMap
{ 
	class UNiagaraSystem*                              DefaultTrails;                                              // 0x0000   (0x0008)  
	TArray<FGroundTrailsData>                          GroundTrails;                                               // 0x0008   (0x0010)  
};

/// Class /Script/RockVehicleRuntime.RockVehicleAbility_GroundTrails
/// Size: 0x0058 (0x0000B0 - 0x000108)
class URockVehicleAbility_GroundTrails : public URockVehicleAbility
{ 
public:
	FGroundTrailsMap                                   GroundTrailsMap;                                            // 0x00B0   (0x0018)  
	TArray<FName>                                      GroundTrailSockets;                                         // 0x00C8   (0x0010)  
	class UNiagaraSystem*                              HandbrakeSystem;                                            // 0x00D8   (0x0008)  
	TArray<class UNiagaraComponent*>                   GroundTrailComponents;                                      // 0x00E0   (0x0010)  
	TArray<class UNiagaraComponent*>                   HandbrakeComponents;                                        // 0x00F0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0100   (0x0008)  MISSED


	/// Functions
	// Function /Script/RockVehicleRuntime.RockVehicleAbility_GroundTrails.SetEnabled
	// void SetEnabled(bool bValue);                                                                                         // [0xb6e7f94] Final|Native|Public|BlueprintCallable 
	// Function /Script/RockVehicleRuntime.RockVehicleAbility_GroundTrails.OnSurfaceChanged
	// void OnSurfaceChanged(TEnumAsByte<EPhysicalSurface> NewSurface);                                                      // [0xb6e7ce8] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/RockVehicleRuntime.RockVehicleAbility_Jump
/// Size: 0x00D8 (0x000108 - 0x0001E0)
class URockVehicleAbility_Jump : public URockVehicleAbility_Physics
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x0108   (0x0018)  MISSED
	FRockScalableFloat                                 JumpVelocity;                                               // 0x0120   (0x0030)  
	FRockScalableFloat                                 JumpAccel;                                                  // 0x0150   (0x0030)  
	FRockScalableFloat                                 MinJumpSeconds;                                             // 0x0180   (0x0030)  
	FRockScalableFloat                                 MaxJumpSeconds;                                             // 0x01B0   (0x0030)  
};

/// Class /Script/RockVehicleRuntime.RockVehicleAbility_StickyWheels
/// Size: 0x0098 (0x000108 - 0x0001A0)
class URockVehicleAbility_StickyWheels : public URockVehicleAbility_Physics
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x0108   (0x0018)  MISSED
	FRockScalableFloat                                 StickyForceScaleGround;                                     // 0x0120   (0x0030)  
	FRockScalableFloat                                 StickyForceScaleWall;                                       // 0x0150   (0x0030)  
	FVector                                            ContactNormal;                                              // 0x0180   (0x0018)  
	float                                              Scale;                                                      // 0x0198   (0x0004)  
	bool                                               bAnyWheelsOnGround;                                         // 0x019C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x019D   (0x0003)  MISSED
};

/// Class /Script/RockVehicleRuntime.RockVehicleAbility_Supersonic
/// Size: 0x00C8 (0x0000B0 - 0x000178)
class URockVehicleAbility_Supersonic : public URockVehicleAbility
{ 
public:
	SDK_UNDEFINED(16,15268) /* FMulticastInlineDelegate */ __um(OnTrailsActivate);                                 // 0x00B0   (0x0010)  
	SDK_UNDEFINED(16,15269) /* FMulticastInlineDelegate */ __um(OnTrailsDeactivate);                               // 0x00C0   (0x0010)  
	FRockScalableFloat                                 TurnOffTime;                                                // 0x00D0   (0x0030)  
	FRockScalableFloat                                 TurnOnTime;                                                 // 0x0100   (0x0030)  
	bool                                               bUseTurnOnTimeRequirement;                                  // 0x0130   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0131   (0x0007)  MISSED
	FRockScalableFloat                                 TurnOffSpeedBuffer;                                         // 0x0138   (0x0030)  
	float                                              TimeBelowSupersonic;                                        // 0x0168   (0x0004)  
	float                                              WorldTimeSupersonicExceeded;                                // 0x016C   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0170   (0x0008)  MISSED
};

/// Struct /Script/RockVehicleRuntime.RockVehicleAnalyticsSession
/// Size: 0x0028 (0x000000 - 0x000028)
struct FRockVehicleAnalyticsSession
{ 
	class AFortPlayerController*                       DriverPC;                                                   // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0008   (0x0020)  MISSED
};

/// Class /Script/RockVehicleRuntime.RockVehicleAnalyticsComponent
/// Size: 0x0038 (0x0000A0 - 0x0000D8)
class URockVehicleAnalyticsComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00A0   (0x0008)  MISSED
	FRockVehicleAnalyticsSession                       CurrentSession;                                             // 0x00A8   (0x0028)  
	class ARockVehicle*                                Vehicle;                                                    // 0x00D0   (0x0008)  


	/// Functions
	// Function /Script/RockVehicleRuntime.RockVehicleAnalyticsComponent.OnSupersonicStart
	// void OnSupersonicStart(class UActorComponent* InComp, bool bInReset);                                                 // [0xb6e7c30] Final|Native|Private 
	// Function /Script/RockVehicleRuntime.RockVehicleAnalyticsComponent.OnSupersonicEnd
	// void OnSupersonicEnd(class UActorComponent* InComp);                                                                  // [0xb6e7bc0] Final|Native|Private 
	// Function /Script/RockVehicleRuntime.RockVehicleAnalyticsComponent.OnPawnExitedSeat
	// void OnPawnExitedSeat(TScriptInterface<Class>& InVehicle, class AFortPawn* InPlayerPawn, int32_t InSeatIndex);        // [0xb6e786c] Final|Native|Private|HasOutParms 
	// Function /Script/RockVehicleRuntime.RockVehicleAnalyticsComponent.OnPawnEnteredSeat
	// void OnPawnEnteredSeat(TScriptInterface<Class>& InVehicle, class AFortPawn* InPlayerPawn, int32_t InSeatIndex);       // [0xb6e75e4] Final|Native|Private|HasOutParms 
	// Function /Script/RockVehicleRuntime.RockVehicleAnalyticsComponent.OnJumped
	// void OnJumped(class UActorComponent* InComp, bool bInReset);                                                          // [0xb6e752c] Final|Native|Private 
	// Function /Script/RockVehicleRuntime.RockVehicleAnalyticsComponent.OnDoubleJumped
	// void OnDoubleJumped(class UActorComponent* InComp, bool bInReset);                                                    // [0xb6e7474] Final|Native|Private 
	// Function /Script/RockVehicleRuntime.RockVehicleAnalyticsComponent.OnDodged
	// void OnDodged(class UActorComponent* InComp, bool bInReset);                                                          // [0xb6e73bc] Final|Native|Private 
};

/// Struct /Script/RockVehicleRuntime.BouncyChassisState
/// Size: 0x000C (0x000000 - 0x00000C)
struct FBouncyChassisState
{ 
	float                                              PitchDegrees;                                               // 0x0000   (0x0004)  
	float                                              RollDegrees;                                                // 0x0004   (0x0004)  
	float                                              TranslationZ;                                               // 0x0008   (0x0004)  
};

/// Struct /Script/RockVehicleRuntime.RockVehicleWheelAnimInfo
/// Size: 0x0014 (0x000000 - 0x000014)
struct FRockVehicleWheelAnimInfo
{ 
	float                                              SpringToWheelOffsetZ;                                       // 0x0000   (0x0004)  
	FFloatInterval                                     SpringTravelRange;                                          // 0x0004   (0x0008)  
	float                                              WheelRadius;                                                // 0x000C   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0010   (0x0004)  MISSED
};

/// Class /Script/RockVehicleRuntime.RockVehicleAnimInstance
/// Size: 0x0180 (0x000620 - 0x0007A0)
class URockVehicleAnimInstance : public UFortVehicleAnimInstance
{ 
public:
	FBouncyChassisState                                BouncyChassis;                                              // 0x0618   (0x000C)  
	FRockVehicleWheelAnimInfo                          WheelInfoFR;                                                // 0x0624   (0x0014)  
	FRockVehicleWheelAnimInfo                          WheelInfoFL;                                                // 0x0638   (0x0014)  
	FRockVehicleWheelAnimInfo                          WheelInfoBR;                                                // 0x064C   (0x0014)  
	FRockVehicleWheelAnimInfo                          WheelInfoBL;                                                // 0x0660   (0x0014)  
	float                                              WheelLerpSpeed;                                             // 0x0674   (0x0004)  
	unsigned char                                      UnknownData00_6[0x128];                                     // 0x0678   (0x0128)  MISSED
};

/// Class /Script/RockVehicleRuntime.RockVehicleAudioController
/// Size: 0x00F0 (0x000300 - 0x0003F0)
class ARockVehicleAudioController : public AFortVehicleAudioController
{ 
public:
	FRuntimeFloatCurve                                 SideSpeedToSkidVolume;                                      // 0x0300   (0x0088)  
	float                                              SurfaceTypeInterpSpeed;                                     // 0x0388   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x038C   (0x0004)  MISSED
	class UAudioComponent*                             TireSurfaceComponent;                                       // 0x0390   (0x0008)  
	class UAudioComponent*                             AirLoopComponent;                                           // 0x0398   (0x0008)  
	class UAudioComponent*                             SuperSonicComponent;                                        // 0x03A0   (0x0008)  
	bool                                               bInWater;                                                   // 0x03A8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x03A9   (0x0007)  MISSED
	class UAudioMotorModelComponent*                   MotorModel;                                                 // 0x03B0   (0x0008)  
	class ARockVehicle*                                CachedVehicle;                                              // 0x03B8   (0x0008)  
	unsigned char                                      UnknownData02_6[0x30];                                      // 0x03C0   (0x0030)  MISSED


	/// Functions
	// Function /Script/RockVehicleRuntime.RockVehicleAudioController.SetSurfaceTypeParam
	// void SetSurfaceTypeParam(float NewSurfaceParam);                                                                      // [0xb6e8014] Final|Native|Public|BlueprintCallable 
	// Function /Script/RockVehicleRuntime.RockVehicleAudioController.SetBoosting
	// void SetBoosting(bool bNewBoosting);                                                                                  // [0xb6e7f14] Final|Native|Public|BlueprintCallable 
	// Function /Script/RockVehicleRuntime.RockVehicleAudioController.OnInAirUpdated
	// void OnInAirUpdated(bool bNewInAir);                                                                                  // [0x3d1d968] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/RockVehicleRuntime.RockVehicleAudioController.GetMotorSimComponent
	// class UAudioMotorModelComponent* GetMotorSimComponent();                                                              // [0x85864d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/RockVehicleRuntime.RockCameraSettings
/// Size: 0x001C (0x000000 - 0x00001C)
struct FRockCameraSettings
{ 
	float                                              FOV;                                                        // 0x0000   (0x0004)  
	float                                              Height;                                                     // 0x0004   (0x0004)  
	float                                              pitch;                                                      // 0x0008   (0x0004)  
	float                                              Distance;                                                   // 0x000C   (0x0004)  
	float                                              Stiffness;                                                  // 0x0010   (0x0004)  
	float                                              SwivelSpeed;                                                // 0x0014   (0x0004)  
	float                                              TransitionSpeed;                                            // 0x0018   (0x0004)  
};

/// Class /Script/RockVehicleRuntime.RockVehicleCameraMode
/// Size: 0x0200 (0x001BC0 - 0x001DC0)
class URockVehicleCameraMode : public UFortCameraMode_AthenaVehicle
{ 
public:
	float                                              SwivelPitchMax;                                             // 0x1BB8   (0x0004)  
	float                                              SwivelYawMax;                                               // 0x1BBC   (0x0004)  
	float                                              GroundNormalInterpRate;                                     // 0x1BC0   (0x0004)  
	float                                              GroundNormalAirInterpRate;                                  // 0x1BC4   (0x0004)  
	float                                              GroundYawRate;                                              // 0x1BC8   (0x0004)  
	float                                              WallYawRate;                                                // 0x1BCC   (0x0004)  
	float                                              InterpToGroundTime;                                         // 0x1BD0   (0x0004)  
	float                                              InterpToAirTime;                                            // 0x1BD4   (0x0004)  
	float                                              AverageVelocityInterpRate;                                  // 0x1BD8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x1BDC   (0x0004)  MISSED
	FRuntimeFloatCurve                                 AirRotationInterpRateForSpeed;                              // 0x1BE0   (0x0088)  
	float                                              FocusOffsetInterpRate;                                      // 0x1C68   (0x0004)  
	float                                              DistanceSpeedScale;                                         // 0x1C6C   (0x0004)  
	float                                              DistanceOffsetMin;                                          // 0x1C70   (0x0004)  
	float                                              DistanceOffsetMax;                                          // 0x1C74   (0x0004)  
	float                                              DistanceInterpRate;                                         // 0x1C78   (0x0004)  
	float                                              MaxSpeedFOVOffset;                                          // 0x1C7C   (0x0004)  
	float                                              SupersonicFOVOffset;                                        // 0x1C80   (0x0004)  
	float                                              FOVInterpRate;                                              // 0x1C84   (0x0004)  
	FRockCameraSettings                                CameraSettings;                                             // 0x1C88   (0x001C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x1CA4   (0x0004)  MISSED
	class ARockVehicle*                                VehicleTarget;                                              // 0x1CA8   (0x0008)  
	class URockVehicleAbility_Jump*                    JumpAbility;                                                // 0x1CB0   (0x0008)  
	unsigned char                                      UnknownData02_6[0x108];                                     // 0x1CB8   (0x0108)  MISSED
};

/// Struct /Script/RockVehicleRuntime.RockVehicleSuspensionConfig
/// Size: 0x0020 (0x000000 - 0x000020)
struct FRockVehicleSuspensionConfig
{ 
	float                                              MaxRaise;                                                   // 0x0000   (0x0004)  
	float                                              MaxDrop;                                                    // 0x0004   (0x0004)  
	float                                              Stiffness;                                                  // 0x0008   (0x0004)  
	float                                              DampingCompression;                                         // 0x000C   (0x0004)  
	float                                              DampingRelaxation;                                          // 0x0010   (0x0004)  
	float                                              Strength;                                                   // 0x0014   (0x0004)  
	float                                              RockDampingCompression;                                     // 0x0018   (0x0004)  
	float                                              RockDampingRelaxation;                                      // 0x001C   (0x0004)  
};

/// Struct /Script/RockVehicleRuntime.RockVehicleAxleConfig
/// Size: 0x0034 (0x000000 - 0x000034)
struct FRockVehicleAxleConfig
{ 
	float                                              TranslateX;                                                 // 0x0000   (0x0004)  
	float                                              TranslateY;                                                 // 0x0004   (0x0004)  
	float                                              TranslateZ;                                                 // 0x0008   (0x0004)  
	float                                              WheelRadius;                                                // 0x000C   (0x0004)  
	float                                              RestDistanceZ;                                              // 0x0010   (0x0004)  
	FRockVehicleSuspensionConfig                       Suspension;                                                 // 0x0014   (0x0020)  
};

/// Struct /Script/RockVehicleRuntime.RockThrottledValue
/// Size: 0x0008 (0x000000 - 0x000008)
struct FRockThrottledValue
{ 
	float                                              RiseRate;                                                   // 0x0000   (0x0004)  
	float                                              FallRate;                                                   // 0x0004   (0x0004)  
};

/// Struct /Script/RockVehicleRuntime.RockVehicleDriveConfig
/// Size: 0x0510 (0x000000 - 0x000510)
struct FRockVehicleDriveConfig
{ 
	FRockScalableFloat                                 DriveAccel;                                                 // 0x0000   (0x0030)  
	FRockScalableFloat                                 DriveTopSpeed;                                              // 0x0030   (0x0030)  
	FRockScalableFloat                                 BrakeAccel;                                                 // 0x0060   (0x0030)  
	FRockScalableFloat                                 StopSpeed;                                                  // 0x0090   (0x0030)  
	float                                              IdleBrakeFactor;                                            // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00C4   (0x0004)  MISSED
	FRuntimeFloatCurve                                 DriveAccelCurve;                                            // 0x00C8   (0x0088)  
	FRuntimeFloatCurve                                 SteerAngleCurve;                                            // 0x0150   (0x0088)  
	FRuntimeFloatCurve                                 LatFrictionCurve;                                           // 0x01D8   (0x0088)  
	FRuntimeFloatCurve                                 LongFrictionCurve;                                          // 0x0260   (0x0088)  
	FRuntimeFloatCurve                                 WallFrictionCurve;                                          // 0x02E8   (0x0088)  
	FRuntimeFloatCurve                                 HandbrakeSteerAngleCurve;                                   // 0x0370   (0x0088)  
	FRuntimeFloatCurve                                 HandbrakeLatFrictionCurve;                                  // 0x03F8   (0x0088)  
	FRuntimeFloatCurve                                 HandbrakeLongFrictionCurve;                                 // 0x0480   (0x0088)  
	FRockThrottledValue                                HandbrakeRate;                                              // 0x0508   (0x0008)  
};

/// Struct /Script/RockVehicleRuntime.RockVehicleDemoConfig
/// Size: 0x0028 (0x000000 - 0x000028)
struct FRockVehicleDemoConfig
{ 
	FGameplayTagContainer                              VehiclesThatCanBeDemolished;                                // 0x0000   (0x0020)  
	float                                              DemolishAngleYaw;                                           // 0x0020   (0x0004)  
	float                                              DemolishAnglePitch;                                         // 0x0024   (0x0004)  
};

/// Class /Script/RockVehicleRuntime.RockVehicleConfigs
/// Size: 0x0608 (0x000948 - 0x000F50)
class URockVehicleConfigs : public UFortPhysicsVehicleConfigs
{ 
public:
	FRockVehicleAxleConfig                             FrontAxle;                                                  // 0x0948   (0x0034)  
	FRockVehicleAxleConfig                             BackAxle;                                                   // 0x097C   (0x0034)  
	FRockVehicleDriveConfig                            Drive;                                                      // 0x09B0   (0x0510)  
	FRockVehicleDemoConfig                             DemolitionConfiguration;                                    // 0x0EC0   (0x0028)  
	FRockScalableFloat                                 MaxLinearSpeed;                                             // 0x0EE8   (0x0030)  
	FRockScalableFloat                                 SupersonicSpeed;                                            // 0x0F18   (0x0030)  
	float                                              MaxAngularSpeed;                                            // 0x0F48   (0x0004)  
	float                                              SafeBuildingLandingDegrees;                                 // 0x0F4C   (0x0004)  
};

/// Class /Script/RockVehicleRuntime.RockVehicleManager
/// Size: 0x0020 (0x000290 - 0x0002B0)
class ARockVehicleManager : public AActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0290   (0x0010)  MISSED
	TArray<class ARockVehicle*>                        RockVehicles;                                               // 0x02A0   (0x0010)  
};

/// Class /Script/RockVehicleRuntime.RockVehicleWorldSubsystem
/// Size: 0x0008 (0x000030 - 0x000038)
class URockVehicleWorldSubsystem : public UWorldSubsystem
{ 
public:
	class ARockVehicleManager*                         VehicleManager;                                             // 0x0030   (0x0008)  
};

/// Class /Script/RockVehicleRuntime.StreamingRadioPlayerComponent_Rock
/// Size: 0x0000 (0x000478 - 0x000478)
class UStreamingRadioPlayerComponent_Rock : public UStreamingRadioPlayerComponent
{ 
public:


	/// Functions
	// Function /Script/RockVehicleRuntime.StreamingRadioPlayerComponent_Rock.VehicleExploded
	// void VehicleExploded(class AController* LastDamageInstigator, class AFortAthenaVehicle* Vehicle);                     // [0xb6e8094] Final|Native|Protected 
};

/// Struct /Script/RockVehicleRuntime.RockVehicleState
/// Size: 0x00E0 (0x000000 - 0x0000E0)
struct FRockVehicleState
{ 
	FReplicatedPhysicsPawnState                        RigidBodyState;                                             // 0x0000   (0x0080)  
	FFortAthenaVehicleInputState                       PrevDriverInput;                                            // 0x0080   (0x0040)  
	bool                                               bWheelsOnGround;                                            // 0x00C0   (0x0001)  
	bool                                               bAnyWheelsOnGround;                                         // 0x00C1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x00C2   (0x0006)  MISSED
	FVector                                            AverageSpringNormal;                                        // 0x00C8   (0x0018)  
};

/// Struct /Script/RockVehicleRuntime.AnimNode_RockVehicleController
/// Size: 0x0018 (0x0000C8 - 0x0000E0)
struct FAnimNode_RockVehicleController : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     ChassisBone;                                                // 0x00C8   (0x000C)  
	FBouncyChassisState                                BouncyChassis;                                              // 0x00D4   (0x000C)  
};

/// Struct /Script/RockVehicleRuntime.RockBoxSpringSetup
/// Size: 0x0050 (0x000000 - 0x000050)
struct FRockBoxSpringSetup
{ 
	FVector                                            Strength;                                                   // 0x0000   (0x0018)  
	FVector                                            Damping;                                                    // 0x0018   (0x0018)  
	FVector                                            MaxDisplacement;                                            // 0x0030   (0x0018)  
	float                                              MaxSpeed;                                                   // 0x0048   (0x0004)  
	float                                              Mass;                                                       // 0x004C   (0x0004)  
};

/// Struct /Script/RockVehicleRuntime.RockBoxSpring
/// Size: 0x00B0 (0x000000 - 0x0000B0)
struct FRockBoxSpring
{ 
	FRockBoxSpringSetup                                Setup;                                                      // 0x0000   (0x0050)  
	unsigned char                                      UnknownData00_6[0x60];                                      // 0x0050   (0x0060)  MISSED
};

/// Struct /Script/RockVehicleRuntime.SpringSettings
/// Size: 0x0008 (0x000000 - 0x000008)
struct FSpringSettings
{ 
	float                                              Strength;                                                   // 0x0000   (0x0004)  
	float                                              Damping;                                                    // 0x0004   (0x0004)  
};

/// Struct /Script/RockVehicleRuntime.BouncyChassisSetup
/// Size: 0x0058 (0x000000 - 0x000058)
struct FBouncyChassisSetup
{ 
	FSpringSettings                                    PitchSpring;                                                // 0x0000   (0x0008)  
	float                                              PitchMaxAngleDegrees;                                       // 0x0008   (0x0004)  
	FSpringSettings                                    RollSpring;                                                 // 0x000C   (0x0008)  
	float                                              RollMaxAngleDegrees;                                        // 0x0014   (0x0004)  
	FSpringSettings                                    ZSpring;                                                    // 0x0018   (0x0008)  
	float                                              ZMaxDrop;                                                   // 0x0020   (0x0004)  
	float                                              ZMaxRaise;                                                  // 0x0024   (0x0004)  
	FVector                                            MaxDisplacement;                                            // 0x0028   (0x0018)  
	FVector                                            MassOffset;                                                 // 0x0040   (0x0018)  
};

/// Struct /Script/RockVehicleRuntime.BouncyChassisInstance
/// Size: 0x0118 (0x000000 - 0x000118)
struct FBouncyChassisInstance
{ 
	FRockBoxSpring                                     Spring;                                                     // 0x0000   (0x00B0)  
	unsigned char                                      UnknownData00_6[0x68];                                      // 0x00B0   (0x0068)  MISSED
};

/// Struct /Script/RockVehicleRuntime.RockVehicleAbilityInPersistent
/// Size: 0x0008 (0x000000 - 0x000008)
struct FRockVehicleAbilityInPersistent
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/RockVehicleRuntime.RockVehicleAbilityInPersistent_AirControl
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRockVehicleAbilityInPersistent_AirControl : FRockVehicleAbilityInPersistent
{ 
	FVector                                            TorqueAccel;                                                // 0x0008   (0x0018)  
	FVector                                            TorqueDamping;                                              // 0x0020   (0x0018)  
	float                                              DisableForDodgeTime;                                        // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/RockVehicleRuntime.RockVehicleAbilityInContinuous
/// Size: 0x0040 (0x000000 - 0x000040)
struct FRockVehicleAbilityInContinuous
{ 
	FFortAthenaVehicleInputState                       InputState;                                                 // 0x0000   (0x0040)  
};

/// Struct /Script/RockVehicleRuntime.RockVehicleAbilityInContinuous_AirControl
/// Size: 0x0008 (0x000040 - 0x000048)
struct FRockVehicleAbilityInContinuous_AirControl : FRockVehicleAbilityInContinuous
{ 
	bool                                               bAnyWheelsOnGround;                                         // 0x0040   (0x0001)  
	bool                                               bDodgeActive;                                               // 0x0041   (0x0001)  
	bool                                               bAutoUprightActive;                                         // 0x0042   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x0043   (0x0005)  MISSED
};

/// Struct /Script/RockVehicleRuntime.RockVehicleAbilityInPersistent_AutoUpright
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRockVehicleAbilityInPersistent_AutoUpright : FRockVehicleAbilityInPersistent
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0008   (0x0010)  MISSED
};

/// Struct /Script/RockVehicleRuntime.RockVehicleAbilityInContinuous_AutoUpright
/// Size: 0x0010 (0x000040 - 0x000050)
struct FRockVehicleAbilityInContinuous_AutoUpright : FRockVehicleAbilityInContinuous
{ 
	int32_t                                            LastWorldContactFrame;                                      // 0x0040   (0x0004)  
	bool                                               bWheelsOnGround;                                            // 0x0044   (0x0001)  
	bool                                               bAnyWheelsOnGround;                                         // 0x0045   (0x0001)  
	bool                                               bDodgeActive;                                               // 0x0046   (0x0001)  
	bool                                               bBodyContact;                                               // 0x0047   (0x0001)  
	float                                              TimeSinceLastBodyContact;                                   // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/RockVehicleRuntime.RockVehicleAbilityInPersistent_Boost
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRockVehicleAbilityInPersistent_Boost : FRockVehicleAbilityInPersistent
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0008   (0x0008)  MISSED
};

/// Struct /Script/RockVehicleRuntime.RockVehicleAbilityInContinuous_Boost
/// Size: 0x0008 (0x000040 - 0x000048)
struct FRockVehicleAbilityInContinuous_Boost : FRockVehicleAbilityInContinuous
{ 
	bool                                               bHasBoost;                                                  // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0041   (0x0007)  MISSED
};

/// Struct /Script/RockVehicleRuntime.RockDodgeImpulse_PhysicsThread
/// Size: 0x0008 (0x000000 - 0x000008)
struct FRockDodgeImpulse_PhysicsThread
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/RockVehicleRuntime.RockVehicleAbilityInPersistent_Dodge
/// Size: 0x0040 (0x000008 - 0x000048)
struct FRockVehicleAbilityInPersistent_Dodge : FRockVehicleAbilityInPersistent
{ 
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0008   (0x0040)  MISSED
};

/// Struct /Script/RockVehicleRuntime.RockVehicleAbilityInContinuous_Dodge
/// Size: 0x0008 (0x000040 - 0x000048)
struct FRockVehicleAbilityInContinuous_Dodge : FRockVehicleAbilityInContinuous
{ 
	bool                                               bWheelsOnGround;                                            // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0041   (0x0007)  MISSED
};

/// Struct /Script/RockVehicleRuntime.RockVehicleAbilityInPersistent_DoubleJump
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRockVehicleAbilityInPersistent_DoubleJump : FRockVehicleAbilityInPersistent
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0008   (0x0008)  MISSED
};

/// Struct /Script/RockVehicleRuntime.RockVehicleAbilityInPersistent_Flip
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRockVehicleAbilityInPersistent_Flip : FRockVehicleAbilityInPersistent
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0008   (0x0010)  MISSED
};

/// Struct /Script/RockVehicleRuntime.RockVehicleAbilityInContinuous_Flip
/// Size: 0x0008 (0x000040 - 0x000048)
struct FRockVehicleAbilityInContinuous_Flip : FRockVehicleAbilityInContinuous
{ 
	bool                                               bWheelsOnGround;                                            // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0041   (0x0007)  MISSED
};

/// Struct /Script/RockVehicleRuntime.RockVehicleAbilityInPersistent_Jump
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRockVehicleAbilityInPersistent_Jump : FRockVehicleAbilityInPersistent
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0008   (0x0010)  MISSED
};

/// Struct /Script/RockVehicleRuntime.RockVehicleAbilityOutContinuous
/// Size: 0x0001 (0x000000 - 0x000001)
struct FRockVehicleAbilityOutContinuous
{ 
	bool                                               bShouldStayActive;                                          // 0x0000   (0x0001)  
};

/// Struct /Script/RockVehicleRuntime.RockVehicleAbilityOutPersistent
/// Size: 0x0004 (0x000000 - 0x000004)
struct FRockVehicleAbilityOutPersistent
{ 
	float                                              ActiveSeconds;                                              // 0x0000   (0x0004)  
};

/// Struct /Script/RockVehicleRuntime.RockVehileAbilityInContinous_StickyWheels
/// Size: 0x0020 (0x000040 - 0x000060)
struct FRockVehileAbilityInContinous_StickyWheels : FRockVehicleAbilityInContinuous
{ 
	FVector                                            ContactNormal;                                              // 0x0040   (0x0018)  
	float                                              Scale;                                                      // 0x0058   (0x0004)  
	bool                                               bAnyWheelsOnGround;                                         // 0x005C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x005D   (0x0003)  MISSED
};

