
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AnimGraphRuntime
/// dependency: AudioGameplay
/// dependency: AudioGameplayBehavior
/// dependency: AudioMotorSim
/// dependency: CoreUObject
/// dependency: CosmeticsFrameworkLoadouts
/// dependency: DelMarCore
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayTags
/// dependency: ModularGameplay
/// dependency: Niagara
/// dependency: PhysicsCore

/// Enum /Script/DelMarCosmetics.EDelMarWheelMirrorType
/// Size: 0x04
enum class EDelMarWheelMirrorType : uint8_t
{
	EDelMarWheelMirrorType__Scale                                                    = 0,
	EDelMarWheelMirrorType__Rotate                                                   = 1,
	EDelMarWheelMirrorType__None                                                     = 2,
	EDelMarWheelMirrorType__EDelMarWheelMirrorType_MAX                               = 3
};

/// Enum /Script/DelMarCosmetics.EDelMarPreviewCameraType
/// Size: 0x04
enum class EDelMarPreviewCameraType : uint8_t
{
	EDelMarPreviewCameraType__None                                                   = 0,
	EDelMarPreviewCameraType__ZoomIn                                                 = 1,
	EDelMarPreviewCameraType__ZoomOut                                                = 2,
	EDelMarPreviewCameraType__EDelMarPreviewCameraType_MAX                           = 3
};

/// Enum /Script/DelMarCosmetics.EDelMarWheelAttachPoint
/// Size: 0x04
enum class EDelMarWheelAttachPoint : uint8_t
{
	EDelMarWheelAttachPoint__Spin                                                    = 0,
	EDelMarWheelAttachPoint__Pivot                                                   = 1,
	EDelMarWheelAttachPoint__Contact                                                 = 2,
	EDelMarWheelAttachPoint__EDelMarWheelAttachPoint_MAX                             = 3
};

/// Class /Script/DelMarCosmetics.DelMarCosmeticsSettings
/// Size: 0x0018 (0x000030 - 0x000048)
class UDelMarCosmeticsSettings : public UPrimaryDataAsset
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0030   (0x0008)  MISSED
	TArray<FPrimaryAssetId>                            RandomCharacters;                                           // 0x0038   (0x0010)  
};

/// Struct /Script/DelMarCosmetics.DelMarPreviewConfigs
/// Size: 0x00F8 (0x000000 - 0x0000F8)
struct FDelMarPreviewConfigs
{ 
	bool                                               bAnyWheelsOnGround;                                         // 0x0000   (0x0001)  
	bool                                               bWheelsOnGround;                                            // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              ForwardSpeed;                                               // 0x0004   (0x0004)  
	float                                              SideSpeed;                                                  // 0x0008   (0x0004)  
	float                                              Acceleration;                                               // 0x000C   (0x0004)  
	float                                              Throttle;                                                   // 0x0010   (0x0004)  
	float                                              Steering;                                                   // 0x0014   (0x0004)  
	float                                              SteerAngle;                                                 // 0x0018   (0x0004)  
	float                                              TargetSpeed;                                                // 0x001C   (0x0004)  
	float                                              BaseTargetSpeed;                                            // 0x0020   (0x0004)  
	float                                              NormalizedForwardSpeed;                                     // 0x0024   (0x0004)  
	float                                              NormalizedBonusSpeed;                                       // 0x0028   (0x0004)  
	EDelMarVehicleForwardState                         VehicleForwardState;                                        // 0x002C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x002D   (0x0003)  MISSED
	float                                              BonusSpeed;                                                 // 0x0030   (0x0004)  
	float                                              WorldAppliedBonusSpeed;                                     // 0x0034   (0x0004)  
	FDelMarVehicleLandingData                          LandingData;                                                // 0x0038   (0x000C)  
	bool                                               bLanded;                                                    // 0x0044   (0x0001)  
	bool                                               bSkydiving;                                                 // 0x0045   (0x0001)  
	EDelMarVehicleDriftState                           DriftState;                                                 // 0x0046   (0x0001)  
	bool                                               bDriftControlled;                                           // 0x0047   (0x0001)  
	float                                              DriftAngle;                                                 // 0x0048   (0x0004)  
	float                                              DriftSlipAngleRatio;                                        // 0x004C   (0x0004)  
	float                                              DriftTargetSide;                                            // 0x0050   (0x0004)  
	float                                              DriftDuration;                                              // 0x0054   (0x0004)  
	bool                                               bDriftBoostInRange;                                         // 0x0058   (0x0001)  
	bool                                               bDriftBoostLosingAppliedBonusSpeed;                         // 0x0059   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x005A   (0x0002)  MISSED
	float                                              DriftBoostPotentialPercentage;                              // 0x005C   (0x0004)  
	float                                              DriftBoostAppliedBonusSpeed;                                // 0x0060   (0x0004)  
	float                                              DriftBoostQueuedBonusSpeed;                                 // 0x0064   (0x0004)  
	float                                              DraftingAppliedBonusSpeed;                                  // 0x0068   (0x0004)  
	float                                              DraftingMaxBonusSpeedPercentage;                            // 0x006C   (0x0004)  
	bool                                               bHasValidDraftingTarget;                                    // 0x0070   (0x0001)  
	EDelmarDraftingState                               DraftingState;                                              // 0x0071   (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x0072   (0x0002)  MISSED
	float                                              OversteerAccumulationPercentage;                            // 0x0074   (0x0004)  
	bool                                               bStartlineBoostActive;                                      // 0x0078   (0x0001)  
	bool                                               bFailedStartlineBoost;                                      // 0x0079   (0x0001)  
	unsigned char                                      UnknownData04_5[0x2];                                       // 0x007A   (0x0002)  MISSED
	float                                              PercentageMaxBonusSpeedEarned;                              // 0x007C   (0x0004)  
	float                                              StartlineBoostAppliedBonusSpeed;                            // 0x0080   (0x0004)  
	float                                              MaxEarnedBonusSpeed;                                        // 0x0084   (0x0004)  
	bool                                               bLeftStrafe;                                                // 0x0088   (0x0001)  
	bool                                               bStrafeActive;                                              // 0x0089   (0x0001)  
	bool                                               bStrafeDisabled;                                            // 0x008A   (0x0001)  
	bool                                               bCanStrafeBeActivated;                                      // 0x008B   (0x0001)  
	float                                              StrafeCooldownPercentage;                                   // 0x008C   (0x0004)  
	bool                                               bTurboActive;                                               // 0x0090   (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x0091   (0x0003)  MISSED
	float                                              NumCurrentCharges;                                          // 0x0094   (0x0004)  
	float                                              NumMaxCharges;                                              // 0x0098   (0x0004)  
	EDelMarTurboZoneState                              BonusZoneState;                                             // 0x009C   (0x0001)  
	unsigned char                                      UnknownData06_5[0x3];                                       // 0x009D   (0x0003)  MISSED
	float                                              PercentageTurboActiveTimeRemaining;                         // 0x00A0   (0x0004)  
	float                                              RemainingTurboActiveSeconds;                                // 0x00A4   (0x0004)  
	float                                              TurboAppliedBonusSpeed;                                     // 0x00A8   (0x0004)  
	float                                              TurboBonusZoneBonusSpeed;                                   // 0x00AC   (0x0004)  
	float                                              TurboAdditionalActiveSeconds;                               // 0x00B0   (0x0004)  
	bool                                               bKickflipActive;                                            // 0x00B4   (0x0001)  
	bool                                               bKickflipLeftSide;                                          // 0x00B5   (0x0001)  
	bool                                               bKickflipSuctionActive;                                     // 0x00B6   (0x0001)  
	unsigned char                                      UnknownData07_5[0x1];                                       // 0x00B7   (0x0001)  MISSED
	float                                              DistanceToSuctionSurface;                                   // 0x00B8   (0x0004)  
	float                                              KickflipDuration;                                           // 0x00BC   (0x0004)  
	int32_t                                            KickflipActivationCharges;                                  // 0x00C0   (0x0004)  
	bool                                               bReattachmentActive;                                        // 0x00C4   (0x0001)  
	unsigned char                                      UnknownData08_5[0x3];                                       // 0x00C5   (0x0003)  MISSED
	FVector                                            ReattachmentDirection;                                      // 0x00C8   (0x0018)  
	bool                                               bUnderthrustActive;                                         // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData09_5[0x3];                                       // 0x00E1   (0x0003)  MISSED
	float                                              UnderthrustPercentageTankRemaining;                         // 0x00E4   (0x0004)  
	float                                              UnderthrustActiveDuration;                                  // 0x00E8   (0x0004)  
	bool                                               bJumpActive;                                                // 0x00EC   (0x0001)  
	bool                                               bAirFreestyleActive;                                        // 0x00ED   (0x0001)  
	bool                                               bVehicleDemolished;                                         // 0x00EE   (0x0001)  
	unsigned char                                      UnknownData10_5[0x1];                                       // 0x00EF   (0x0001)  MISSED
	FGameplayTag                                       DemolishCausedByTag;                                        // 0x00F0   (0x0004)  
	bool                                               bInvulnerabilityActive;                                     // 0x00F4   (0x0001)  
	bool                                               bVehicleSpawnedThisFrame;                                   // 0x00F5   (0x0001)  
	bool                                               bFirstVehicleForPlayer;                                     // 0x00F6   (0x0001)  
	bool                                               bPreviousVehicleDemolished;                                 // 0x00F7   (0x0001)  
};

/// Struct /Script/DelMarCosmetics.DelMarBouncyChassisState
/// Size: 0x000C (0x000000 - 0x00000C)
struct FDelMarBouncyChassisState
{ 
	float                                              PitchDegrees;                                               // 0x0000   (0x0004)  
	float                                              RollDegrees;                                                // 0x0004   (0x0004)  
	float                                              TranslationZ;                                               // 0x0008   (0x0004)  
};

/// Class /Script/DelMarCosmetics.DelMarPreviewVehicle
/// Size: 0x0640 (0x001E60 - 0x0024A0)
class ADelMarPreviewVehicle : public AFortAthenaVehicle
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x1E60   (0x0008)  MISSED
	FCosmeticLoadout                                   PreviewLoadout;                                             // 0x1E68   (0x0010)  
	class UDelMarVehicleCosmeticComponent*             CosmeticComponent;                                          // 0x1E78   (0x0008)  
	FDelMarPreviewConfigs                              PreviewConfigs;                                             // 0x1E80   (0x00F8)  
	unsigned char                                      UnknownData01_5[0x88];                                      // 0x1F78   (0x0088)  MISSED
	TArray<float>                                      SpringTravelOffset;                                         // 0x2000   (0x0010)  
	FDelMarBouncyChassisState                          BouncyChassisConfig;                                        // 0x2010   (0x000C)  
	unsigned char                                      UnknownData02_5[0x54];                                      // 0x201C   (0x0054)  MISSED
	SDK_UNDEFINED(16,13028) /* FMulticastInlineDelegate */ __um(OnDelMarVehicleHitWall);                           // 0x2070   (0x0010)  
	SDK_UNDEFINED(16,13029) /* FMulticastInlineDelegate */ __um(OnDelMarVehicleHitVehicle);                        // 0x2080   (0x0010)  
	SDK_UNDEFINED(16,13030) /* FMulticastInlineDelegate */ __um(OnDelMarVehicleHitByVehicle);                      // 0x2090   (0x0010)  
	unsigned char                                      UnknownData03_5[0x388];                                     // 0x20A0   (0x0388)  MISSED
	SDK_UNDEFINED(16,13031) /* FMulticastInlineDelegate */ __um(OnHazardHit);                                      // 0x2428   (0x0010)  
	SDK_UNDEFINED(16,13032) /* FMulticastInlineDelegate */ __um(OnVehicleTeleportEntered);                         // 0x2438   (0x0010)  
	SDK_UNDEFINED(16,13033) /* FMulticastInlineDelegate */ __um(OnVehicleTeleportExit);                            // 0x2448   (0x0010)  
	SDK_UNDEFINED(16,13034) /* FMulticastInlineDelegate */ __um(OnVehicleAppliedTeleportRotation);                 // 0x2458   (0x0010)  
	unsigned char                                      UnknownData04_6[0x38];                                      // 0x2468   (0x0038)  MISSED


	/// Functions
	// Function /Script/DelMarCosmetics.DelMarPreviewVehicle.IsWheelOnGround
	// bool IsWheelOnGround(EDelMarVehicleWheelIndex WheelIndex);                                                            // [0xba8ff30] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCosmetics.DelMarPreviewVehicle.GetBouncyChassisConfig
	// FDelMarBouncyChassisState GetBouncyChassisConfig();                                                                   // [0xba8e6bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCosmetics.DelMarPreviewVehicle.BroadcastVehicleDemolished
	// void BroadcastVehicleDemolished(FGameplayTag DemolishCausedByTag);                                                    // [0xba8df60] Native|Public|BlueprintCallable 
};

/// Class /Script/DelMarCosmetics.DelMarGaragePreviewVehicle
/// Size: 0x0200 (0x0024A0 - 0x0026A0)
class ADelMarGaragePreviewVehicle : public ADelMarPreviewVehicle
{ 
public:
	SDK_UNDEFINED(16,13035) /* FMulticastInlineDelegate */ __um(OnActiveCameraUpdatedDelegate);                    // 0x24A0   (0x0010)  
	SDK_UNDEFINED(16,13036) /* FMulticastInlineDelegate */ __um(OnRotationTransitionStateChanged);                 // 0x24B0   (0x0010)  
	class USceneComponent*                             PreviewPivotComponent;                                      // 0x24C0   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x24C8   (0x0008)  MISSED
	class UCameraComponent*                            ActiveCameraComponent;                                      // 0x24D0   (0x0008)  
	class UCameraComponent*                            DefaultZoomInCameraComponent;                               // 0x24D8   (0x0008)  
	class UCameraComponent*                            DefaultZoomOutCameraComponent;                              // 0x24E0   (0x0008)  
	unsigned char                                      UnknownData01_5[0xA0];                                      // 0x24E8   (0x00A0)  MISSED
	SDK_UNDEFINED(80,13037) /* TMap<FGameplayTag, FRotator> */ __um(SlotPreviewRotations);                         // 0x2588   (0x0050)  
	SDK_UNDEFINED(80,13038) /* TMap<FGameplayTag, FDelMarPreviewConfigs> */ __um(SlotPreviewConfigs);              // 0x25D8   (0x0050)  
	float                                              ZoomLevel;                                                  // 0x2628   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x262C   (0x0004)  MISSED
	FRotator                                           UserRotationOffset;                                         // 0x2630   (0x0018)  
	FGameplayTag                                       PreviewSlot;                                                // 0x2648   (0x0004)  
	FGameplayTag                                       PreviewVehicleTag;                                          // 0x264C   (0x0004)  
	float                                              RotationTransitionTime;                                     // 0x2650   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4C];                                      // 0x2654   (0x004C)  MISSED


	/// Functions
	// Function /Script/DelMarCosmetics.DelMarGaragePreviewVehicle.UpdateActiveCamera
	// void UpdateActiveCamera();                                                                                            // [0xba91ffc] Native|Protected     
	// Function /Script/DelMarCosmetics.DelMarGaragePreviewVehicle.SetZoomLevel
	// void SetZoomLevel(float InZoomLevel);                                                                                 // [0xba91f14] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCosmetics.DelMarGaragePreviewVehicle.SetUserRotationOffset
	// void SetUserRotationOffset(FRotator& InRotationOffset);                                                               // [0xba91e44] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/DelMarCosmetics.DelMarGaragePreviewVehicle.SetPreviewSlot
	// void SetPreviewSlot(FGameplayTag& InSlot);                                                                            // [0xba916bc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DelMarCosmetics.DelMarGaragePreviewVehicle.ResetPreviewToCurrentLoadout
	// void ResetPreviewToCurrentLoadout();                                                                                  // [0x307d48c] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCosmetics.DelMarGaragePreviewVehicle.PreviewLoadout
	// void PreviewLoadout(FDelMarLoadout& Loadout);                                                                         // [0xba9089c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DelMarCosmetics.DelMarGaragePreviewVehicle.PreviewItem
	// void PreviewItem(class UDelMarCosmeticItemDefinition* Item);                                                          // [0xba907d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCosmetics.DelMarGaragePreviewVehicle.K2_OnActiveCameraUpdated
	// void K2_OnActiveCameraUpdated();                                                                                      // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCosmetics.DelMarGaragePreviewVehicle.IsRotationTransitioning
	// bool IsRotationTransitioning();                                                                                       // [0xba8ff18] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCosmetics.DelMarGaragePreviewVehicle.GetRotationOffset
	// FRotator GetRotationOffset();                                                                                         // [0xba8f220] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DelMarCosmetics.DelMarParamOverrideCosmeticActor
/// Size: 0x0050 (0x0002C8 - 0x000318)
class ADelMarParamOverrideCosmeticActor : public ADelMarCosmeticActor
{ 
public:
	SDK_UNDEFINED(80,13039) /* TMap<UClass*, FDelMarParameterOverrides> */ __um(CosmeticActorsParamterOverrides);  // 0x02C8   (0x0050)  
};

/// Class /Script/DelMarCosmetics.DelMarPreviewCameraComponent
/// Size: 0x0010 (0x0009B0 - 0x0009C0)
class UDelMarPreviewCameraComponent : public UCameraComponent
{ 
public:
	FGameplayTag                                       PreviewSlot;                                                // 0x09B0   (0x0004)  
	EDelMarPreviewCameraType                           PreviewType;                                                // 0x09B4   (0x0001)  
	unsigned char                                      UnknownData00_6[0xB];                                       // 0x09B5   (0x000B)  MISSED
};

/// Class /Script/DelMarCosmetics.DelMarPreviewPivot
/// Size: 0x0008 (0x000290 - 0x000298)
class ADelMarPreviewPivot : public AActor
{ 
public:
	class USceneComponent*                             SceneComponent;                                             // 0x0290   (0x0008)  
};

/// Struct /Script/DelMarCosmetics.DelMarVehicleBooster
/// Size: 0x0018 (0x000000 - 0x000018)
struct FDelMarVehicleBooster
{ 
	class UNiagaraSystem*                              BoosterSystem;                                              // 0x0000   (0x0008)  
	FName                                              BoosterSocket;                                              // 0x0008   (0x0004)  
	bool                                               bIsSideBooster;                                             // 0x000C   (0x0001)  
	bool                                               bIsDownBooster;                                             // 0x000D   (0x0001)  
	bool                                               bIsFrontBooster;                                            // 0x000E   (0x0001)  
	bool                                               bIsBackBooster;                                             // 0x000F   (0x0001)  
	class UNiagaraComponent*                           NiagaraComponent;                                           // 0x0010   (0x0008)  
};

/// Struct /Script/DelMarCosmetics.DelMarVehicleWheelSetup
/// Size: 0x0010 (0x000000 - 0x000010)
struct FDelMarVehicleWheelSetup
{ 
	FName                                              WheelSpinBone;                                              // 0x0000   (0x0004)  
	FName                                              WheelPivotBone;                                             // 0x0004   (0x0004)  
	FName                                              WheelContactBone;                                           // 0x0008   (0x0004)  
	bool                                               bEligibleForPhysMatContactFx;                               // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/DelMarCosmetics.DelMarVehicleCosmeticWheelInfo
/// Size: 0x0030 (0x000000 - 0x000030)
struct FDelMarVehicleCosmeticWheelInfo
{ 
	class UNiagaraComponent*                           ContactParticleComponent;                                   // 0x0000   (0x0008)  
	class UNiagaraSystem*                              ContactParticle;                                            // 0x0008   (0x0008)  
	class UPhysicalMaterial*                           ContactMaterial;                                            // 0x0010   (0x0008)  
	EDelMarVehicleWheelIndex                           WheelIndex;                                                 // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0019   (0x0003)  MISSED
	FDelMarVehicleWheelSetup                           Setup;                                                      // 0x001C   (0x0010)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Class /Script/DelMarCosmetics.DelMarUnifiedVehicleCosmeticActor
/// Size: 0x0220 (0x0002C8 - 0x0004E8)
class ADelMarUnifiedVehicleCosmeticActor : public ADelMarCosmeticActor
{ 
public:
	TArray<class UNiagaraComponent*>                   CachedSideBoosters;                                         // 0x02C8   (0x0010)  
	TArray<class UNiagaraComponent*>                   CachedDownBoosters;                                         // 0x02D8   (0x0010)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x02E8   (0x0004)  MISSED
	FName                                              SideBoosterParam_Scale;                                     // 0x02EC   (0x0004)  
	TArray<FDelMarVehicleBooster>                      LeftBoosters;                                               // 0x02F0   (0x0010)  
	TArray<FDelMarVehicleBooster>                      RightBoosters;                                              // 0x0300   (0x0010)  
	class USkeletalMeshComponent*                      BodySkeletalMeshComponent;                                  // 0x0310   (0x0008)  
	FAudioGameplayBehaviorInstance                     KickflipAudioBehavior;                                      // 0x0318   (0x0010)  
	FAudioGameplayBehaviorInstance                     JumpAudioBehavior;                                          // 0x0328   (0x0010)  
	class UNiagaraComponent*                           JumpFX;                                                     // 0x0338   (0x0008)  
	class UNiagaraComponent*                           SuperSonicFX;                                               // 0x0340   (0x0008)  
	class UMaterialInterface*                          SuperSonicRadialBlurMaterial;                               // 0x0348   (0x0008)  
	class UMaterialInstanceDynamic*                    SuperSonicRadialBlurMID;                                    // 0x0350   (0x0008)  
	float                                              SuperSonicBlurOffset;                                       // 0x0358   (0x0004)  
	float                                              SuperSonicForwardSpeedMin;                                  // 0x035C   (0x0004)  
	float                                              SuperSonicForwardSpeedMax;                                  // 0x0360   (0x0004)  
	FName                                              SuperSonicParam_Spawn;                                      // 0x0364   (0x0004)  
	FName                                              RadialBlurParam_Offset;                                     // 0x0368   (0x0004)  
	FName                                              RadialBlurParam_Transition;                                 // 0x036C   (0x0004)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0370   (0x0008)  MISSED
	FAudioGameplayBehaviorInstance                     DraftingAudioBehavior;                                      // 0x0378   (0x0010)  
	class UNiagaraComponent*                           DraftingFX;                                                 // 0x0388   (0x0008)  
	FName                                              DraftingParam_Spawn;                                        // 0x0390   (0x0004)  
	FName                                              DraftingParam_SpeedGain;                                    // 0x0394   (0x0004)  
	FName                                              DraftingParam_Amount;                                       // 0x0398   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x039C   (0x0004)  MISSED
	FAudioGameplayBehaviorInstance                     WorldBonusSpeedAudioBehavior;                               // 0x03A0   (0x0010)  
	FName                                              WBSGroupEvent_OnBonusSpeedActivated;                        // 0x03B0   (0x0004)  
	FName                                              WBSGroupEvent_OnBonusSpeedDeactivated;                      // 0x03B4   (0x0004)  
	FName                                              WBSGroupEvent_OnWorldBonusSpeedStackGained;                 // 0x03B8   (0x0004)  
	FGameplayTag                                       DemolishTag_RaceFinished;                                   // 0x03BC   (0x0004)  
	FAudioGameplayBehaviorInstance                     RespawnAudioBehavior;                                       // 0x03C0   (0x0010)  
	FAudioGameplayBehaviorInstance                     DespawnAudioBehavior;                                       // 0x03D0   (0x0010)  
	class UNiagaraComponent*                           TaillightTrailFX_Left;                                      // 0x03E0   (0x0008)  
	class UNiagaraComponent*                           TaillightTrailFX_Right;                                     // 0x03E8   (0x0008)  
	FName                                              TaillightTrailSocket_Left;                                  // 0x03F0   (0x0004)  
	FName                                              TaillightTrailSocket_Right;                                 // 0x03F4   (0x0004)  
	float                                              TaillightTrail_MinForwardSpeed;                             // 0x03F8   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x03FC   (0x0004)  MISSED
	FAudioGameplayBehaviorInstance                     UnderthrustAudioBehavior;                                   // 0x0400   (0x0010)  
	FAudioGameplayBehaviorInstance                     WheelsAudioBehavior;                                        // 0x0410   (0x0010)  
	FName                                              FrontLeftWheelContactBone;                                  // 0x0420   (0x0004)  
	FName                                              FrontRightWheelContactBone;                                 // 0x0424   (0x0004)  
	FName                                              BackRightWheelContactBone;                                  // 0x0428   (0x0004)  
	FName                                              BackLeftWheelContactBone;                                   // 0x042C   (0x0004)  
	TArray<FDelMarVehicleCosmeticWheelInfo>            WheelInfos;                                                 // 0x0430   (0x0010)  
	unsigned char                                      UnknownData04_5[0xA0];                                      // 0x0440   (0x00A0)  MISSED
	float                                              FxSideSpeedThreshold;                                       // 0x04E0   (0x0004)  
	float                                              FxForwardSpeedThreshold;                                    // 0x04E4   (0x0004)  


	/// Functions
	// Function /Script/DelMarCosmetics.DelMarUnifiedVehicleCosmeticActor.ShouldTriggerFX
	// bool ShouldTriggerFX();                                                                                               // [0xba91fd8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCosmetics.DelMarUnifiedVehicleCosmeticActor.SetRightBoostersEnabled
	// void SetRightBoostersEnabled(bool bSetFrontBoosters, bool bSetBackBoosters, bool bSetSideBoosters, bool bSetDownBoosters, bool bEnabled, bool bReset); // [0xba91ae4] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCosmetics.DelMarUnifiedVehicleCosmeticActor.SetLeftBoostersEnabled
	// void SetLeftBoostersEnabled(bool bSetFrontBoosters, bool bSetBackBoosters, bool bSetSideBoosters, bool bSetDownBoosters, bool bEnabled, bool bReset); // [0xba9135c] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCosmetics.DelMarUnifiedVehicleCosmeticActor.SetAllBoostersEnabled
	// void SetAllBoostersEnabled(bool bSetFrontBoosters, bool bSetBackBoosters, bool bSetSideBoosters, bool bSetDownBoosters, bool bEnabled, bool bReset); // [0xba90ca8] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCosmetics.DelMarUnifiedVehicleCosmeticActor.OnWorldBonusSpeedStackGained
	// void OnWorldBonusSpeedStackGained(FGameplayTag Source, int32_t Stacks);                                               // [0xba90678] Final|Native|Protected 
	// Function /Script/DelMarCosmetics.DelMarUnifiedVehicleCosmeticActor.OnVehicleLanded
	// void OnVehicleLanded(float LandingForce, bool bLandedKickflip);                                                       // [0xba90538] Final|Native|Protected 
	// Function /Script/DelMarCosmetics.DelMarUnifiedVehicleCosmeticActor.OnVehicleDemolished
	// void OnVehicleDemolished(FGameplayTag CausedByTag);                                                                   // [0xba90478] Final|Native|Protected 
	// Function /Script/DelMarCosmetics.DelMarUnifiedVehicleCosmeticActor.OnUnderthrustDeactivated
	// void OnUnderthrustDeactivated();                                                                                      // [0xba90464] Final|Native|Protected 
	// Function /Script/DelMarCosmetics.DelMarUnifiedVehicleCosmeticActor.OnUnderthrustActivated
	// void OnUnderthrustActivated();                                                                                        // [0xba90450] Final|Native|Protected 
	// Function /Script/DelMarCosmetics.DelMarUnifiedVehicleCosmeticActor.OnKickflipDeactivated
	// void OnKickflipDeactivated();                                                                                         // [0xba9043c] Final|Native|Protected 
	// Function /Script/DelMarCosmetics.DelMarUnifiedVehicleCosmeticActor.OnKickflipActivated
	// void OnKickflipActivated(bool bLeftSide);                                                                             // [0xba90378] Final|Native|Protected 
	// Function /Script/DelMarCosmetics.DelMarUnifiedVehicleCosmeticActor.OnJumpActivated
	// void OnJumpActivated();                                                                                               // [0xba90364] Final|Native|Protected 
	// Function /Script/DelMarCosmetics.DelMarUnifiedVehicleCosmeticActor.OnDriftKickDeactivated
	// void OnDriftKickDeactivated();                                                                                        // [0xba9014c] Final|Native|Protected 
	// Function /Script/DelMarCosmetics.DelMarUnifiedVehicleCosmeticActor.OnDriftKickActivated
	// void OnDriftKickActivated(float DriftDirection, EDelMarVehicleDriftState DriftState);                                 // [0xba90224] Final|Native|Protected 
	// Function /Script/DelMarCosmetics.DelMarUnifiedVehicleCosmeticActor.OnDriftDurationChanged
	// void OnDriftDurationChanged(float duration);                                                                          // [0xba90160] Final|Native|Protected 
	// Function /Script/DelMarCosmetics.DelMarUnifiedVehicleCosmeticActor.OnDriftDeactivated
	// void OnDriftDeactivated();                                                                                            // [0xba9014c] Final|Native|Protected 
	// Function /Script/DelMarCosmetics.DelMarUnifiedVehicleCosmeticActor.OnDraftStateChanged
	// void OnDraftStateChanged(EDelmarDraftingState CurrentState);                                                          // [0xba9008c] Final|Native|Protected 
	// Function /Script/DelMarCosmetics.DelMarUnifiedVehicleCosmeticActor.OnBonusSpeedDeactivated
	// void OnBonusSpeedDeactivated();                                                                                       // [0xba90078] Final|Native|Protected 
	// Function /Script/DelMarCosmetics.DelMarUnifiedVehicleCosmeticActor.OnBonusSpeedActivated
	// void OnBonusSpeedActivated();                                                                                         // [0xba90064] Final|Native|Protected 
	// Function /Script/DelMarCosmetics.DelMarUnifiedVehicleCosmeticActor.GetWheelContactBoneName
	// FName GetWheelContactBoneName(EDelMarVehicleWheelIndex WheelIndex);                                                   // [0xba8f290] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCosmetics.DelMarUnifiedVehicleCosmeticActor.GetRightBoosters
	// TArray<UNiagaraComponent*> GetRightBoosters(bool bFrontBoosters, bool bBackBoosters, bool bSideBoosters, bool bDownBoosters); // [0xba8ef5c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCosmetics.DelMarUnifiedVehicleCosmeticActor.GetLeftBoosters
	// TArray<UNiagaraComponent*> GetLeftBoosters(bool bFrontBoosters, bool bBackBoosters, bool bSideBoosters, bool bDownBoosters); // [0xba8e9e8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCosmetics.DelMarUnifiedVehicleCosmeticActor.GetAllBoosters
	// TArray<UNiagaraComponent*> GetAllBoosters(bool bFrontBoosters, bool bBackBoosters, bool bSideBoosters, bool bDownBoosters); // [0xba8e29c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/DelMarCosmetics.DelMarSpringSettings
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDelMarSpringSettings
{ 
	float                                              Strength;                                                   // 0x0000   (0x0004)  
	float                                              Damping;                                                    // 0x0004   (0x0004)  
};

/// Struct /Script/DelMarCosmetics.DelMarBouncyChassisSetup
/// Size: 0x0058 (0x000000 - 0x000058)
struct FDelMarBouncyChassisSetup
{ 
	FDelMarSpringSettings                              PitchSpring;                                                // 0x0000   (0x0008)  
	float                                              PitchMaxAngleDegrees;                                       // 0x0008   (0x0004)  
	FDelMarSpringSettings                              RollSpring;                                                 // 0x000C   (0x0008)  
	float                                              RollMaxAngleDegrees;                                        // 0x0014   (0x0004)  
	FDelMarSpringSettings                              ZSpring;                                                    // 0x0018   (0x0008)  
	float                                              ZMaxDrop;                                                   // 0x0020   (0x0004)  
	float                                              ZMaxRaise;                                                  // 0x0024   (0x0004)  
	FVector                                            MaxDisplacement;                                            // 0x0028   (0x0018)  
	FVector                                            MassOffset;                                                 // 0x0040   (0x0018)  
};

/// Struct /Script/DelMarCosmetics.DelMarVehicleAnimInfo
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDelMarVehicleAnimInfo
{ 
	float                                              SteerAngleDegrees;                                          // 0x0000   (0x0004)  
	float                                              VisualSteerAngleDegrees;                                    // 0x0004   (0x0004)  
};

/// Struct /Script/DelMarCosmetics.DelMarVehicleWheelAnimInfo
/// Size: 0x001C (0x000000 - 0x00001C)
struct FDelMarVehicleWheelAnimInfo
{ 
	float                                              SpringToWheelOffsetZ;                                       // 0x0000   (0x0004)  
	FFloatInterval                                     SpringTravelRange;                                          // 0x0004   (0x0008)  
	float                                              WheelRadius;                                                // 0x000C   (0x0004)  
	float                                              TravelDistance;                                             // 0x0010   (0x0004)  
	float                                              SpinSpeedDegrees;                                           // 0x0014   (0x0004)  
	float                                              SpinDegrees;                                                // 0x0018   (0x0004)  
};

/// Class /Script/DelMarCosmetics.DelMarVehicleAnimInstance
/// Size: 0x0240 (0x000460 - 0x0006A0)
class UDelMarVehicleAnimInstance : public UFortBaseAnimInstance
{ 
public:
	FDelMarBouncyChassisState                          BouncyChassis;                                              // 0x0458   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0464   (0x0004)  MISSED
	FDelMarBouncyChassisSetup                          BouncyChassisSetup;                                         // 0x0468   (0x0058)  
	float                                              BouncyChassisBlendRate;                                     // 0x04C0   (0x0004)  
	float                                              VisualSteerAngleInterpRate;                                 // 0x04C4   (0x0004)  
	float                                              WheelLerpSpeed;                                             // 0x04C8   (0x0004)  
	float                                              SuspensionInterpRate;                                       // 0x04CC   (0x0004)  
	float                                              AirSpinAccel;                                               // 0x04D0   (0x0004)  
	float                                              AirSpinBrake;                                               // 0x04D4   (0x0004)  
	float                                              AirSpinDecayRate;                                           // 0x04D8   (0x0004)  
	FDelMarVehicleAnimInfo                             VehicleInfo;                                                // 0x04DC   (0x0008)  
	bool                                               bThrottling;                                                // 0x04E4   (0x0001)  
	bool                                               bReversing;                                                 // 0x04E5   (0x0001)  
	bool                                               bAccelerating;                                              // 0x04E6   (0x0001)  
	bool                                               bBraking;                                                   // 0x04E7   (0x0001)  
	float                                              Throttle;                                                   // 0x04E8   (0x0004)  
	float                                              Steering;                                                   // 0x04EC   (0x0004)  
	float                                              SteeringAngle;                                              // 0x04F0   (0x0004)  
	bool                                               bWheelsOnGround;                                            // 0x04F4   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x04F5   (0x0003)  MISSED
	float                                              ForwardSpeed;                                               // 0x04F8   (0x0004)  
	bool                                               bDriftBoostActive;                                          // 0x04FC   (0x0001)  
	bool                                               bUnderthrustActive;                                         // 0x04FD   (0x0001)  
	bool                                               bDriftActive;                                               // 0x04FE   (0x0001)  
	bool                                               bKickflipActive;                                            // 0x04FF   (0x0001)  
	bool                                               bJumpActive;                                                // 0x0500   (0x0001)  
	bool                                               bTurboActive;                                               // 0x0501   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x0502   (0x0002)  MISSED
	FDelMarVehicleWheelAnimInfo                        WheelInfoFR;                                                // 0x0504   (0x001C)  
	FDelMarVehicleWheelAnimInfo                        WheelInfoFL;                                                // 0x0520   (0x001C)  
	FDelMarVehicleWheelAnimInfo                        WheelInfoBR;                                                // 0x053C   (0x001C)  
	FDelMarVehicleWheelAnimInfo                        WheelInfoBL;                                                // 0x0558   (0x001C)  
	unsigned char                                      UnknownData03_6[0x12C];                                     // 0x0574   (0x012C)  MISSED
};

/// Class /Script/DelMarCosmetics.DelMarWheelAnimInstance
/// Size: 0x0020 (0x000460 - 0x000480)
class UDelMarWheelAnimInstance : public UFortBaseAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_3[0x1C];                                      // 0x0458   (0x001C)  MISSED
	float                                              SpinDegrees;                                                // 0x0474   (0x0004)  
	class UDelMarVehicleAnimInstance*                  ParentAnimInstance;                                         // 0x0478   (0x0008)  
};

/// Struct /Script/DelMarCosmetics.DelMarDriverCosmeticData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FDelMarDriverCosmeticData
{ 
	class UAthenaCharacterItemDefinition*              CharacterDefinition;                                        // 0x0000   (0x0008)  
	TArray<FMcpVariantChannelInfo>                     CharacterVariantChannels;                                   // 0x0008   (0x0010)  
};

/// Class /Script/DelMarCosmetics.DelMarDriverCosmeticPlayerComponent
/// Size: 0x0060 (0x0000A0 - 0x000100)
class UDelMarDriverCosmeticPlayerComponent : public UPlayerStateComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x38];                                      // 0x00A0   (0x0038)  MISSED
	TArray<FName>                                      SequenceBindingTags;                                        // 0x00D8   (0x0010)  
	FDelMarDriverCosmeticData                          CosmeticData;                                               // 0x00E8   (0x0018)  


	/// Functions
	// Function /Script/DelMarCosmetics.DelMarDriverCosmeticPlayerComponent.On_RepCosmeticData
	// void On_RepCosmeticData();                                                                                            // [0xba907b4] Final|Native|Protected 
	// Function /Script/DelMarCosmetics.DelMarDriverCosmeticPlayerComponent.HandlePlayerControllerLoadoutChanged
	// void HandlePlayerControllerLoadoutChanged(FCosmeticLoadout& Loadout);                                                 // [0xba8fca0] Final|Native|Protected|HasOutParms 
	// Function /Script/DelMarCosmetics.DelMarDriverCosmeticPlayerComponent.HandleBotControllerLoadoutChanged
	// void HandleBotControllerLoadoutChanged(class ADelMarAIController* AIController, FFortAthenaLoadout& Loadout);         // [0xba8fb5c] Final|Native|Protected|HasOutParms 
};

/// Class /Script/DelMarCosmetics.DelMarBodyCosmeticActor
/// Size: 0x0098 (0x0002C8 - 0x000360)
class ADelMarBodyCosmeticActor : public ADelMarCosmeticActor
{ 
public:
	TArray<FDelMarVehicleWheelSetup>                   FrontLeftWheelsBoneNames;                                   // 0x02C8   (0x0010)  
	TArray<FDelMarVehicleWheelSetup>                   FrontRightWheelsBoneNames;                                  // 0x02D8   (0x0010)  
	TArray<FDelMarVehicleWheelSetup>                   BackRightWheelsBoneNames;                                   // 0x02E8   (0x0010)  
	TArray<FDelMarVehicleWheelSetup>                   BackLeftWheelsBoneNames;                                    // 0x02F8   (0x0010)  
	TArray<FDelMarVehicleBooster>                      LeftBoostersInfo;                                           // 0x0308   (0x0010)  
	TArray<FDelMarVehicleBooster>                      RightBoostersInfo;                                          // 0x0318   (0x0010)  
	class USkeletalMesh*                               SkeletalMesh;                                               // 0x0328   (0x0008)  
	class UPhysicsAsset*                               PhysicsAsset;                                               // 0x0330   (0x0008)  
	class UClass*                                      AnimInstanceClass;                                          // 0x0338   (0x0008)  
	class UDelMarVehicleBodySetup*                     BodySetup;                                                  // 0x0340   (0x0008)  
	FVector                                            WheelContactFxOffset;                                       // 0x0348   (0x0018)  


	/// Functions
	// Function /Script/DelMarCosmetics.DelMarBodyCosmeticActor.GetWheelSetups
	// TArray<FDelMarVehicleWheelSetup> GetWheelSetups(EDelMarVehicleWheelIndex WheelIndex);                                 // [0xba8f420] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCosmetics.DelMarBodyCosmeticActor.GetWheelCosmeticActorOffset
	// FVector GetWheelCosmeticActorOffset();                                                                                // [0x2b0e3b0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCosmetics.DelMarBodyCosmeticActor.GetSkeletalMesh
	// class USkeletalMesh* GetSkeletalMesh();                                                                               // [0x9208694] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCosmetics.DelMarBodyCosmeticActor.GetRightBoostersInfo
	// TArray<FDelMarVehicleBooster> GetRightBoostersInfo();                                                                 // [0xba8f1e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCosmetics.DelMarBodyCosmeticActor.GetPhysicsAsset
	// class UPhysicsAsset* GetPhysicsAsset();                                                                               // [0x71d6688] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCosmetics.DelMarBodyCosmeticActor.GetLeftBoostersInfo
	// TArray<FDelMarVehicleBooster> GetLeftBoostersInfo();                                                                  // [0xba8ec70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCosmetics.DelMarBodyCosmeticActor.GetFrontRightWheelsBoneNames
	// TArray<FDelMarVehicleWheelSetup> GetFrontRightWheelsBoneNames();                                                      // [0xba8e720] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCosmetics.DelMarBodyCosmeticActor.GetFrontLeftWheelsBoneNames
	// TArray<FDelMarVehicleWheelSetup> GetFrontLeftWheelsBoneNames();                                                       // [0xba8e6e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCosmetics.DelMarBodyCosmeticActor.GetBoosterBySocketName
	// class UNiagaraComponent* GetBoosterBySocketName(FName& SocketName);                                                   // [0xba8e5c8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCosmetics.DelMarBodyCosmeticActor.GetBodySetup
	// class UDelMarVehicleBodySetup* GetBodySetup();                                                                        // [0x65ac020] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCosmetics.DelMarBodyCosmeticActor.GetBackRightWheelsBoneNames
	// TArray<FDelMarVehicleWheelSetup> GetBackRightWheelsBoneNames();                                                       // [0xba8e58c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCosmetics.DelMarBodyCosmeticActor.GetBackLeftWheelsBoneNames
	// TArray<FDelMarVehicleWheelSetup> GetBackLeftWheelsBoneNames();                                                        // [0xba8e550] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCosmetics.DelMarBodyCosmeticActor.GetAnimInstanceClass
	// class UClass* GetAnimInstanceClass();                                                                                 // [0xba8e514] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DelMarCosmetics.DelMarBoosterCosmeticActor
/// Size: 0x0030 (0x0002C8 - 0x0002F8)
class ADelMarBoosterCosmeticActor : public ADelMarCosmeticActor
{ 
public:
	class UNiagaraSystem*                              BoosterFx;                                                  // 0x02C8   (0x0008)  
	TArray<FDelMarVehicleBooster>                      LeftBoosters;                                               // 0x02D0   (0x0010)  
	TArray<FDelMarVehicleBooster>                      RightBoosters;                                              // 0x02E0   (0x0010)  
	class USkeletalMeshComponent*                      BodySkeletalMeshComponent;                                  // 0x02F0   (0x0008)  


	/// Functions
	// Function /Script/DelMarCosmetics.DelMarBoosterCosmeticActor.SetRightBoostersEnabled
	// void SetRightBoostersEnabled(bool bSetFrontBoosters, bool bSetBackBoosters, bool bSetSideBoosters, bool bSetDownBoosters, bool bEnabled, bool bReset); // [0xba91784] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCosmetics.DelMarBoosterCosmeticActor.SetLeftBoostersEnabled
	// void SetLeftBoostersEnabled(bool bSetFrontBoosters, bool bSetBackBoosters, bool bSetSideBoosters, bool bSetDownBoosters, bool bEnabled, bool bReset); // [0xba90ffc] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCosmetics.DelMarBoosterCosmeticActor.SetAllBoostersEnabled
	// void SetAllBoostersEnabled(bool bSetFrontBoosters, bool bSetBackBoosters, bool bSetSideBoosters, bool bSetDownBoosters, bool bEnabled, bool bReset); // [0xba90954] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCosmetics.DelMarBoosterCosmeticActor.GetRightBoosters
	// TArray<UNiagaraComponent*> GetRightBoosters(bool bFrontBoosters, bool bBackBoosters, bool bSideBoosters, bool bDownBoosters); // [0xba8ecd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCosmetics.DelMarBoosterCosmeticActor.GetLeftBoosters
	// TArray<UNiagaraComponent*> GetLeftBoosters(bool bFrontBoosters, bool bBackBoosters, bool bSideBoosters, bool bDownBoosters); // [0xba8e75c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCosmetics.DelMarBoosterCosmeticActor.GetAllBoosters
	// TArray<UNiagaraComponent*> GetAllBoosters(bool bFrontBoosters, bool bBackBoosters, bool bSideBoosters, bool bDownBoosters); // [0xba8e024] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DelMarCosmetics.DelMarEngineAudioCosmeticActor
/// Size: 0x0048 (0x0002C8 - 0x000310)
class ADelMarEngineAudioCosmeticActor : public ADelMarCosmeticActor
{ 
public:
	FAudioGameplayBehaviorInstance                     EngineAudio;                                                // 0x02C8   (0x0010)  
	float                                              NonLocalVelocityInterpSpeed;                                // 0x02D8   (0x0004)  
	bool                                               bDisabled;                                                  // 0x02DC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x02DD   (0x0003)  MISSED
	class UAudioComponentGroup*                        ComponentGroup;                                             // 0x02E0   (0x0008)  
	class UAudioMotorModelComponent*                   MotorModel;                                                 // 0x02E8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x02F0   (0x0020)  MISSED


	/// Functions
	// Function /Script/DelMarCosmetics.DelMarEngineAudioCosmeticActor.GetComponentGroup
	// class UAudioComponentGroup* GetComponentGroup();                                                                      // [0x2f945b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DelMarCosmetics.DelMarWheelContactFxCosmeticActor
/// Size: 0x00E0 (0x0002C8 - 0x0003A8)
class ADelMarWheelContactFxCosmeticActor : public ADelMarCosmeticActor
{ 
public:
	FAudioGameplayBehaviorInstance                     WheelSounds;                                                // 0x02C8   (0x0010)  
	float                                              FxSideSpeedThreshold;                                       // 0x02D8   (0x0004)  
	float                                              FxForwardSpeedThreshold;                                    // 0x02DC   (0x0004)  
	class UPhysicalMaterial*                           ContactMaterial;                                            // 0x02E0   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x02E8   (0x0008)  MISSED
	TArray<FDelMarVehicleCosmeticWheelInfo>            WheelInfos;                                                 // 0x02F0   (0x0010)  
	FName                                              FrontLeftWheelContactBone;                                  // 0x0300   (0x0004)  
	FName                                              FrontRightWheelContactBone;                                 // 0x0304   (0x0004)  
	FName                                              BackRightWheelContactBone;                                  // 0x0308   (0x0004)  
	FName                                              BackLeftWheelContactBone;                                   // 0x030C   (0x0004)  
	unsigned char                                      UnknownData01_6[0x98];                                      // 0x0310   (0x0098)  MISSED


	/// Functions
	// Function /Script/DelMarCosmetics.DelMarWheelContactFxCosmeticActor.HandleVehicleLanded
	// void HandleVehicleLanded(float LandingForce, bool bLandedKickflip);                                                   // [0xba8fd60] Final|Native|Protected 
	// Function /Script/DelMarCosmetics.DelMarWheelContactFxCosmeticActor.GetWheelContactBoneName
	// FName GetWheelContactBoneName(EDelMarVehicleWheelIndex WheelIndex);                                                   // [0xba8f358] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCosmetics.DelMarWheelContactFxCosmeticActor.GetAudioBehavior
	// class UAudioGameplayBehavior* GetAudioBehavior();                                                                     // [0x38a9184] Final|BlueprintCosmetic|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCosmetics.DelMarWheelContactFxCosmeticActor.BP_UpdateWheelContactFx
	// void BP_UpdateWheelContactFx(FDelMarVehicleCosmeticWheelInfo WheelInfo, bool bActive, float AbsForwardSpeed, float AbsSideSpeed); // [0x2047e54] Event|Protected|BlueprintEvent 
};

/// Class /Script/DelMarCosmetics.DelMarCosmeticActorSpawnLogic_Wheel
/// Size: 0x0008 (0x000028 - 0x000030)
class UDelMarCosmeticActorSpawnLogic_Wheel : public UDelMarCosmeticActorSpawnLogic
{ 
public:
	bool                                               bFrontWheel;                                                // 0x0028   (0x0001)  
	bool                                               bBackWheel;                                                 // 0x0029   (0x0001)  
	EDelMarWheelAttachPoint                            AttachPoint;                                                // 0x002A   (0x0001)  
	EDelMarWheelMirrorType                             MirrorType;                                                 // 0x002B   (0x0001)  
	bool                                               bOnlyFxEligibleWheels;                                      // 0x002C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x002D   (0x0003)  MISSED
};

/// Class /Script/DelMarCosmetics.DelMarWheelsCosmeticActor
/// Size: 0x0008 (0x0002C8 - 0x0002D0)
class ADelMarWheelsCosmeticActor : public ADelMarCosmeticActor
{ 
public:
	EDelMarVehicleWheelIndex                           WheelIndex;                                                 // 0x02C8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x02C9   (0x0007)  MISSED


	/// Functions
	// Function /Script/DelMarCosmetics.DelMarWheelsCosmeticActor.IsWheelOnGround
	// bool IsWheelOnGround();                                                                                               // [0xba90008] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCosmetics.DelMarWheelsCosmeticActor.IsRightWheel
	// bool IsRightWheel();                                                                                                  // [0xba8fef8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCosmetics.DelMarWheelsCosmeticActor.IsMirrored
	// bool IsMirrored();                                                                                                    // [0xba8fedc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCosmetics.DelMarWheelsCosmeticActor.IsLeftWheel
	// bool IsLeftWheel();                                                                                                   // [0xba8fedc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCosmetics.DelMarWheelsCosmeticActor.IsFrontWheel
	// bool IsFrontWheel();                                                                                                  // [0xba8fec0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCosmetics.DelMarWheelsCosmeticActor.IsBackWheel
	// bool IsBackWheel();                                                                                                   // [0xba8fea0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCosmetics.DelMarWheelsCosmeticActor.GetMirrorType
	// EDelMarWheelMirrorType GetMirrorType();                                                                               // [0xba8ecac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DelMarCosmetics.DelMarWheelSKCosmeticActor
/// Size: 0x0008 (0x0002D0 - 0x0002D8)
class ADelMarWheelSKCosmeticActor : public ADelMarWheelsCosmeticActor
{ 
public:
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                      // 0x02D0   (0x0008)  
};

/// Struct /Script/DelMarCosmetics.DelMarOverrideParameter_Bool
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDelMarOverrideParameter_Bool
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	bool                                               Value;                                                      // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Struct /Script/DelMarCosmetics.DelMarOverrideParameter_Int
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDelMarOverrideParameter_Int
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	int32_t                                            Value;                                                      // 0x0004   (0x0004)  
};

/// Struct /Script/DelMarCosmetics.DelMarOverrideParameter_Float
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDelMarOverrideParameter_Float
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	float                                              Value;                                                      // 0x0004   (0x0004)  
};

/// Struct /Script/DelMarCosmetics.DelMarOverrideParameter_Vector
/// Size: 0x0020 (0x000000 - 0x000020)
struct FDelMarOverrideParameter_Vector
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
};

/// Struct /Script/DelMarCosmetics.DelMarOverrideParameter_Color
/// Size: 0x0014 (0x000000 - 0x000014)
struct FDelMarOverrideParameter_Color
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	FLinearColor                                       Value;                                                      // 0x0004   (0x0010)  
};

/// Struct /Script/DelMarCosmetics.DelMarOverrideParameter_Texture
/// Size: 0x0010 (0x000000 - 0x000010)
struct FDelMarOverrideParameter_Texture
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UTexture*                                    Value;                                                      // 0x0008   (0x0008)  
};

/// Struct /Script/DelMarCosmetics.DelMarOverrideParameter_StaticMesh
/// Size: 0x0010 (0x000000 - 0x000010)
struct FDelMarOverrideParameter_StaticMesh
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UStaticMesh*                                 Value;                                                      // 0x0008   (0x0008)  
};

/// Struct /Script/DelMarCosmetics.DelMarOverrideParameter_Actor
/// Size: 0x0010 (0x000000 - 0x000010)
struct FDelMarOverrideParameter_Actor
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	class AActor*                                      Value;                                                      // 0x0008   (0x0008)  
};

/// Struct /Script/DelMarCosmetics.DelMarOverrideParameter_Material
/// Size: 0x0010 (0x000000 - 0x000010)
struct FDelMarOverrideParameter_Material
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UMaterialInterface*                          Value;                                                      // 0x0008   (0x0008)  
};

/// Struct /Script/DelMarCosmetics.DelMarMaterialParameterCollection
/// Size: 0x0030 (0x000000 - 0x000030)
struct FDelMarMaterialParameterCollection
{ 
	TArray<FDelMarOverrideParameter_Float>             OverrideFloatParameters;                                    // 0x0000   (0x0010)  
	TArray<FDelMarOverrideParameter_Vector>            OverrideVectorParameters;                                   // 0x0010   (0x0010)  
	TArray<FDelMarOverrideParameter_Texture>           OverrideTextureParameters;                                  // 0x0020   (0x0010)  
};

/// Struct /Script/DelMarCosmetics.DelMarNiagaraParameterCollection
/// Size: 0x0098 (0x000000 - 0x000098)
struct FDelMarNiagaraParameterCollection
{ 
	class UNiagaraSystem*                              OverrideNiagaraSystem;                                      // 0x0000   (0x0008)  
	TArray<FDelMarOverrideParameter_Bool>              OverrideBoolParameters;                                     // 0x0008   (0x0010)  
	TArray<FDelMarOverrideParameter_Int>               OverrideIntParameters;                                      // 0x0018   (0x0010)  
	TArray<FDelMarOverrideParameter_Float>             OverrideFloatParameters;                                    // 0x0028   (0x0010)  
	TArray<FDelMarOverrideParameter_Vector>            OverrideVectorParameters;                                   // 0x0038   (0x0010)  
	TArray<FDelMarOverrideParameter_Color>             OverrideColorParameters;                                    // 0x0048   (0x0010)  
	TArray<FDelMarOverrideParameter_Texture>           OverrideTextureParameters;                                  // 0x0058   (0x0010)  
	TArray<FDelMarOverrideParameter_Material>          OverrideMaterialsParameters;                                // 0x0068   (0x0010)  
	TArray<FDelMarOverrideParameter_StaticMesh>        OverrideStaticMeshParameters;                               // 0x0078   (0x0010)  
	TArray<FDelMarOverrideParameter_Actor>             OverrideActorParameters;                                    // 0x0088   (0x0010)  
};

/// Struct /Script/DelMarCosmetics.DelMarMaterialOverrides
/// Size: 0x0040 (0x000000 - 0x000040)
struct FDelMarMaterialOverrides
{ 
	int32_t                                            MaterialInstanceDynamicIndex;                               // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UMaterialInterface*                          MaterialInterface;                                          // 0x0008   (0x0008)  
	FDelMarMaterialParameterCollection                 ParameterOverrides;                                         // 0x0010   (0x0030)  
};

/// Struct /Script/DelMarCosmetics.DelMarNiagaraOverrides
/// Size: 0x0098 (0x000000 - 0x000098)
struct FDelMarNiagaraOverrides
{ 
	FDelMarNiagaraParameterCollection                  ParameterOverrides;                                         // 0x0000   (0x0098)  
};

/// Struct /Script/DelMarCosmetics.DelMarParameterOverrides
/// Size: 0x0020 (0x000000 - 0x000020)
struct FDelMarParameterOverrides
{ 
	TArray<FDelMarMaterialOverrides>                   MaterialOverrides;                                          // 0x0000   (0x0010)  
	TArray<FDelMarNiagaraOverrides>                    NiagaraOverrides;                                           // 0x0010   (0x0010)  
};

/// Struct /Script/DelMarCosmetics.DelMarVehicleController_WheelData
/// Size: 0x0024 (0x000000 - 0x000024)
struct FDelMarVehicleController_WheelData
{ 
	FBoneReference                                     SuspensionBone;                                             // 0x0000   (0x000C)  
	FBoneReference                                     SteeringBone;                                               // 0x000C   (0x000C)  
	FBoneReference                                     RollBone;                                                   // 0x0018   (0x000C)  
};

/// Struct /Script/DelMarCosmetics.DelMarAnimNode_VehicleController
/// Size: 0x0120 (0x0000C8 - 0x0001E8)
struct FDelMarAnimNode_VehicleController : FAnimNode_SkeletalControlBase
{ 
	FDelMarBouncyChassisState                          BouncyChassis;                                              // 0x00C8   (0x000C)  
	FDelMarVehicleController_WheelData                 FrontLeftWheel;                                             // 0x00D4   (0x0024)  
	FDelMarVehicleController_WheelData                 FrontRightWheel;                                            // 0x00F8   (0x0024)  
	FDelMarVehicleController_WheelData                 BackLeftWheel;                                              // 0x011C   (0x0024)  
	FDelMarVehicleController_WheelData                 BackRightWheel;                                             // 0x0140   (0x0024)  
	FBoneReference                                     ChassisBone;                                                // 0x0164   (0x000C)  
	FDelMarVehicleAnimInfo                             VehicleInfo;                                                // 0x0170   (0x0008)  
	FDelMarVehicleWheelAnimInfo                        WheelInfoFR;                                                // 0x0178   (0x001C)  
	FDelMarVehicleWheelAnimInfo                        WheelInfoFL;                                                // 0x0194   (0x001C)  
	FDelMarVehicleWheelAnimInfo                        WheelInfoBR;                                                // 0x01B0   (0x001C)  
	FDelMarVehicleWheelAnimInfo                        WheelInfoBL;                                                // 0x01CC   (0x001C)  
};

/// Struct /Script/DelMarCosmetics.DelMarBoxSpringSetup
/// Size: 0x0050 (0x000000 - 0x000050)
struct FDelMarBoxSpringSetup
{ 
	FVector                                            Strength;                                                   // 0x0000   (0x0018)  
	FVector                                            Damping;                                                    // 0x0018   (0x0018)  
	FVector                                            MaxDisplacement;                                            // 0x0030   (0x0018)  
	float                                              MaxSpeed;                                                   // 0x0048   (0x0004)  
	float                                              Mass;                                                       // 0x004C   (0x0004)  
};

/// Struct /Script/DelMarCosmetics.DelMarBoxSpring
/// Size: 0x00B0 (0x000000 - 0x0000B0)
struct FDelMarBoxSpring
{ 
	FDelMarBoxSpringSetup                              Setup;                                                      // 0x0000   (0x0050)  
	unsigned char                                      UnknownData00_6[0x60];                                      // 0x0050   (0x0060)  MISSED
};

/// Struct /Script/DelMarCosmetics.DelMarBouncyChassisInstance
/// Size: 0x0118 (0x000000 - 0x000118)
struct FDelMarBouncyChassisInstance
{ 
	FDelMarBoxSpring                                   Spring;                                                     // 0x0000   (0x00B0)  
	unsigned char                                      UnknownData00_6[0x68];                                      // 0x00B0   (0x0068)  MISSED
};

/// Struct /Script/DelMarCosmetics.DelMarPreviousPreviewConfigs
/// Size: 0x0038 (0x000000 - 0x000038)
struct FDelMarPreviousPreviewConfigs
{ 
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x0000   (0x0038)  MISSED
};

