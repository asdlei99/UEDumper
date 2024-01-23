
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AnimGraphRuntime
/// dependency: AssembledMeshSystem
/// dependency: CoreUObject
/// dependency: CosmeticsFrameworkLoadouts
/// dependency: CustomizableObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: McpProfileSysCore
/// dependency: ModularGameplay

/// Class /Script/VehicleCosmeticsRuntime.FortItemVehiclePreviewActor
/// Size: 0x0080 (0x000520 - 0x0005A0)
class AFortItemVehiclePreviewActor : public AFortItemPreviewMultiAngleActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1440;

public:
	CMember(class UCameraComponent*)                   ZoomedOutVehicleCameraComponent                             OFFSET(get<T>, {0x528, 8, 0, 0})
	CMember(class UCameraComponent*)                   ZoomedInVehicleCameraComponent                              OFFSET(get<T>, {0x530, 8, 0, 0})
	CMember(class UCameraComponent*)                   ZoomedOutWheelCameraComponent                               OFFSET(get<T>, {0x538, 8, 0, 0})
	CMember(class UCameraComponent*)                   ZoomedInWheelCameraComponent                                OFFSET(get<T>, {0x540, 8, 0, 0})
	CMember(class UCameraComponent*)                   ZoomedOutBoostCameraComponent                               OFFSET(get<T>, {0x548, 8, 0, 0})
	CMember(class UCameraComponent*)                   ZoomedInBoostCameraComponent                                OFFSET(get<T>, {0x550, 8, 0, 0})
	CMember(class UCameraComponent*)                   ZoomedOutDriftTrailCameraComponent                          OFFSET(get<T>, {0x558, 8, 0, 0})
	CMember(class UCameraComponent*)                   ZoomedInDriftTrailCameraComponent                           OFFSET(get<T>, {0x560, 8, 0, 0})
	DMember(bool)                                      bUseSingleConfiguredCamera                                  OFFSET(get<bool>, {0x568, 1, 0, 0})
	DMember(float)                                     FrameSettingHeightOffset                                    OFFSET(get<float>, {0x56C, 4, 0, 0})
	DMember(float)                                     FrameSettingExpansionOffset                                 OFFSET(get<float>, {0x570, 4, 0, 0})
	CMember(EFortUICameraFrameTargetBoundingBehavior)  FrameSettingBoundingBehavior                                OFFSET(get<T>, {0x574, 1, 0, 0})
	DMember(float)                                     FrameSettingZoomInBoundsScale                               OFFSET(get<float>, {0x578, 4, 0, 0})
	CMember(class UChildActorComponent*)               PreviewVehicleActorComponent                                OFFSET(get<T>, {0x580, 8, 0, 0})
	CMember(class AVehicleCosmeticsPreviewVehicle*)    PreviewVehicleActor                                         OFFSET(get<T>, {0x588, 8, 0, 0})


	/// Functions
	// Function /Script/VehicleCosmeticsRuntime.FortItemVehiclePreviewActor.HandleVehicleCosmeticsReady
	// void HandleVehicleCosmeticsReady();                                                                                      // [0xa7e419c] Final|Native|Public  
	// Function /Script/VehicleCosmeticsRuntime.FortItemVehiclePreviewActor.HandleDriftTrailStarted
	// void HandleDriftTrailStarted();                                                                                          // [0xa7e3d18] Final|Native|Public  
	// Function /Script/VehicleCosmeticsRuntime.FortItemVehiclePreviewActor.HandleBoostStarted
	// void HandleBoostStarted();                                                                                               // [0xa7e3cc8] Final|Native|Public  
};

/// Class /Script/VehicleCosmeticsRuntime.VehicleCosmeticsAIControllerInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UVehicleCosmeticsAIControllerInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/VehicleCosmeticsRuntime.VehicleCosmeticsPreviewConfigs
/// Size: 0x00A0 (0x000030 - 0x0000D0)
class UVehicleCosmeticsPreviewConfigs : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TWeakObjectPtr<UClass*>)                   VehiclePreviewActorClass                                    OFFSET(get<T>, {0x30, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   DefaultBoostPreviewActorClass                               OFFSET(get<T>, {0x50, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   DefaultTrailPreviewActorClass                               OFFSET(get<T>, {0x70, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   VehiclePreviewPrefabAssetClass                              OFFSET(get<T>, {0x90, 32, 0, 0})
	CMember(TWeakObjectPtr<UFortVehicleCosmeticsItemDefinition_Body*>) VehiclePreviewDefaultPreviewBody            OFFSET(get<T>, {0xB0, 32, 0, 0})
};

/// Class /Script/VehicleCosmeticsRuntime.VehicleCosmeticsPreviewVehicle
/// Size: 0x0050 (0x001E80 - 0x001ED0)
class AVehicleCosmeticsPreviewVehicle : public AFortAthenaSKVehicle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7888;

public:


	/// Functions
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsPreviewVehicle.HandleOnVehicleCosmeticsFinished
	// void HandleOnVehicleCosmeticsFinished();                                                                                 // [0xa7e4088] Final|Native|Public  
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsPreviewVehicle.HandleOnDriftTrailApplied
	// void HandleOnDriftTrailApplied();                                                                                        // [0xa7e3fb0] Final|Native|Public  
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsPreviewVehicle.HandleOnBoostApplied
	// void HandleOnBoostApplied();                                                                                             // [0xa7e3f9c] Final|Native|Public  
};

/// Class /Script/VehicleCosmeticsRuntime.VehicleCosmeticsBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UVehicleCosmeticsBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsBlueprintLibrary.GetMaxSignificanceLOD_RearWheelDriftFX
	// int32_t GetMaxSignificanceLOD_RearWheelDriftFX();                                                                        // [0xa7e3c30] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsBlueprintLibrary.GetMaxSignificanceLOD_Generic
	// int32_t GetMaxSignificanceLOD_Generic();                                                                                 // [0xa7e3c18] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsBlueprintLibrary.GetMaxSignificanceLOD_FrontWheelDriftFX
	// int32_t GetMaxSignificanceLOD_FrontWheelDriftFX();                                                                       // [0xa7e3c00] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsBlueprintLibrary.GetMaxSignificanceLOD_BoostFX
	// int32_t GetMaxSignificanceLOD_BoostFX();                                                                                 // [0xa7e3be8] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/VehicleCosmeticsRuntime.VehicleCosmeticsAnimInstance
/// Size: 0x0000 (0x000620 - 0x000620)
class UVehicleCosmeticsAnimInstance : public UFortVehicleAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1568;

public:
};

/// Class /Script/VehicleCosmeticsRuntime.BouncyChassisVehicleAnimInstance
/// Size: 0x0250 (0x000620 - 0x000870)
class UBouncyChassisVehicleAnimInstance : public UVehicleCosmeticsAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2160;

public:
	SMember(FBouncyChassisVehicleState)                BouncyChassis                                               OFFSET(getStruct<T>, {0x620, 12, 0, 0})
	SMember(FBouncyChassisVehicleSetup)                BouncyChassisSetup                                          OFFSET(getStruct<T>, {0x630, 72, 0, 0})
	DMember(float)                                     BouncyChassisBlendRate                                      OFFSET(get<float>, {0x678, 4, 0, 0})
	DMember(float)                                     VisualSteerAngleInterpRate                                  OFFSET(get<float>, {0x67C, 4, 0, 0})
	DMember(float)                                     WheelLerpSpeed                                              OFFSET(get<float>, {0x680, 4, 0, 0})
	DMember(bool)                                      bThrottling                                                 OFFSET(get<bool>, {0x684, 1, 0, 0})
	DMember(bool)                                      bReversing                                                  OFFSET(get<bool>, {0x685, 1, 0, 0})
	DMember(bool)                                      bAccelerating                                               OFFSET(get<bool>, {0x686, 1, 0, 0})
	DMember(bool)                                      bBraking                                                    OFFSET(get<bool>, {0x687, 1, 0, 0})
	DMember(float)                                     Throttle                                                    OFFSET(get<float>, {0x688, 4, 0, 0})
	DMember(float)                                     Steering                                                    OFFSET(get<float>, {0x68C, 4, 0, 0})
	DMember(float)                                     SteeringAngle                                               OFFSET(get<float>, {0x690, 4, 0, 0})
	DMember(bool)                                      bWheelsOnGround                                             OFFSET(get<bool>, {0x694, 1, 0, 0})
	DMember(float)                                     ForwardSpeed                                                OFFSET(get<float>, {0x698, 4, 0, 0})
	DMember(bool)                                      bDriftBoostActive                                           OFFSET(get<bool>, {0x69C, 1, 0, 0})
	DMember(bool)                                      bUnderthrustActive                                          OFFSET(get<bool>, {0x69D, 1, 0, 0})
	DMember(bool)                                      bDriftActive                                                OFFSET(get<bool>, {0x69E, 1, 0, 0})
	DMember(bool)                                      bKickflipActive                                             OFFSET(get<bool>, {0x69F, 1, 0, 0})
	DMember(bool)                                      bJumpActive                                                 OFFSET(get<bool>, {0x6A0, 1, 0, 0})
	DMember(bool)                                      bTurboActive                                                OFFSET(get<bool>, {0x6A1, 1, 0, 0})
	DMember(bool)                                      bStartlineBoostActive                                       OFFSET(get<bool>, {0x6A2, 1, 0, 0})
	DMember(bool)                                      bDraftingActive                                             OFFSET(get<bool>, {0x6A3, 1, 0, 0})
	SMember(FBouncyChassisVehicleWheelAnimInfo)        WheelInfoFR                                                 OFFSET(getStruct<T>, {0x6A4, 44, 0, 0})
	SMember(FBouncyChassisVehicleWheelAnimInfo)        WheelInfoFL                                                 OFFSET(getStruct<T>, {0x6D0, 44, 0, 0})
	SMember(FBouncyChassisVehicleWheelAnimInfo)        WheelInfoBR                                                 OFFSET(getStruct<T>, {0x6FC, 44, 0, 0})
	SMember(FBouncyChassisVehicleWheelAnimInfo)        WheelInfoBL                                                 OFFSET(getStruct<T>, {0x728, 44, 0, 0})
	DMember(bool)                                      bHasTireMod                                                 OFFSET(get<bool>, {0x754, 1, 0, 0})
	DMember(bool)                                      bShouldWheelSpinForPreview                                  OFFSET(get<bool>, {0x755, 1, 0, 0})
	DMember(float)                                     PreviewWheelSpinVelocity                                    OFFSET(get<float>, {0x758, 4, 0, 0})
	DMember(float)                                     PreviewWheelSpin                                            OFFSET(get<float>, {0x75C, 4, 0, 0})
};

/// Class /Script/VehicleCosmeticsRuntime.FortVehicleCosmeticsItemDefinition
/// Size: 0x00A0 (0x000790 - 0x000830)
class UFortVehicleCosmeticsItemDefinition : public UAthenaCosmeticItemDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2096;

public:
	CMember(TWeakObjectPtr<UVehicleCosmeticsItemDefinition*>) VehicleCosmeticsItemDef                              OFFSET(get<T>, {0x7B8, 32, 0, 0})
	SMember(FGameplayTag)                              ItemTypeTag                                                 OFFSET(getStruct<T>, {0x7D8, 4, 0, 0})
	CMember(TWeakObjectPtr<UVehicleCosmeticsPreviewConfigs*>) PreviewConfig                                        OFFSET(get<T>, {0x7E0, 32, 0, 0})
	CMember(TArray<FVehicleCosmeticsRestrictionDefinition>) RestrictionDefinitions                                 OFFSET(get<T>, {0x800, 16, 0, 0})
	CMember(TWeakObjectPtr<UFortVehicleCosmeticsItemDefinition*>) ItemPreviewVehicleBody                           OFFSET(get<T>, {0x810, 32, 0, 0})
};

/// Class /Script/VehicleCosmeticsRuntime.FortVehicleCosmeticsItemDefinition_Body
/// Size: 0x0000 (0x000830 - 0x000830)
class UFortVehicleCosmeticsItemDefinition_Body : public UFortVehicleCosmeticsItemDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2096;

public:
};

/// Class /Script/VehicleCosmeticsRuntime.FortVehicleCosmeticsItemDefinition_Booster
/// Size: 0x0000 (0x000830 - 0x000830)
class UFortVehicleCosmeticsItemDefinition_Booster : public UFortVehicleCosmeticsItemDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2096;

public:
};

/// Class /Script/VehicleCosmeticsRuntime.FortVehicleCosmeticsItemDefinition_DriftTrail
/// Size: 0x0000 (0x000830 - 0x000830)
class UFortVehicleCosmeticsItemDefinition_DriftTrail : public UFortVehicleCosmeticsItemDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2096;

public:
};

/// Class /Script/VehicleCosmeticsRuntime.FortVehicleCosmeticsItemDefinition_EngineAudio
/// Size: 0x0000 (0x000830 - 0x000830)
class UFortVehicleCosmeticsItemDefinition_EngineAudio : public UFortVehicleCosmeticsItemDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2096;

public:
};

/// Class /Script/VehicleCosmeticsRuntime.FortVehicleCosmeticsItemDefinition_Skin
/// Size: 0x0000 (0x000830 - 0x000830)
class UFortVehicleCosmeticsItemDefinition_Skin : public UFortVehicleCosmeticsItemDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2096;

public:
};

/// Class /Script/VehicleCosmeticsRuntime.FortVehicleCosmeticsItemDefinition_Wheel
/// Size: 0x0000 (0x000830 - 0x000830)
class UFortVehicleCosmeticsItemDefinition_Wheel : public UFortVehicleCosmeticsItemDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2096;

public:
};

/// Class /Script/VehicleCosmeticsRuntime.FortVehicleCosmeticsVariantTokenType
/// Size: 0x0000 (0x000448 - 0x000448)
class UFortVehicleCosmeticsVariantTokenType : public UFortVariantTokenType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1096;

public:
};

/// Class /Script/VehicleCosmeticsRuntime.PlayerCustomizableObjectCacheComponent
/// Size: 0x0050 (0x0000A0 - 0x0000F0)
class UPlayerCustomizableObjectCacheComponent : public UPlayerStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(TMap<UClass*, UCustomizableObjectInstance*>) CachedInstanceMap                                         OFFSET(get<T>, {0xA0, 80, 0, 0})


	/// Functions
	// Function /Script/VehicleCosmeticsRuntime.PlayerCustomizableObjectCacheComponent.OnSeamlessTravelStart
	// void OnSeamlessTravelStart(class UWorld* CurrentWorld, FString LevelName);                                               // [0xa7e4338] Final|Native|Protected 
	// Function /Script/VehicleCosmeticsRuntime.PlayerCustomizableObjectCacheComponent.OnPlayerDisconnected
	// void OnPlayerDisconnected(class AFortPlayerStateAthena* PlayerState, bool bIsDisconnected);                              // [0xa7e4270] Final|Native|Protected 
};

/// Class /Script/VehicleCosmeticsRuntime.VehicleCosmeticsActorSpawnLogic
/// Size: 0x0000 (0x000028 - 0x000028)
class UVehicleCosmeticsActorSpawnLogic : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/VehicleCosmeticsRuntime.VehicleCosmeticsActorSpawnLogic_AttachTo
/// Size: 0x0008 (0x000028 - 0x000030)
class UVehicleCosmeticsActorSpawnLogic_AttachTo : public UVehicleCosmeticsActorSpawnLogic
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     AttachSocket                                                OFFSET(getStruct<T>, {0x28, 4, 0, 0})
};

/// Class /Script/VehicleCosmeticsRuntime.VehicleCosmeticsActorSpawnLogic_AttachToEach
/// Size: 0x0010 (0x000028 - 0x000038)
class UVehicleCosmeticsActorSpawnLogic_AttachToEach : public UVehicleCosmeticsActorSpawnLogic
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FName>)                             AttachSockets                                               OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/VehicleCosmeticsRuntime.VehicleCosmeticsActorSpawnLogic_Booster
/// Size: 0x0000 (0x000028 - 0x000028)
class UVehicleCosmeticsActorSpawnLogic_Booster : public UVehicleCosmeticsActorSpawnLogic
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/VehicleCosmeticsRuntime.VehicleCosmeticsActor
/// Size: 0x0040 (0x000290 - 0x0002D0)
class AVehicleCosmeticsActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	CMember(class UVehicleCosmeticsActorSpawnLogic*)   SpawnLogic                                                  OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(TArray<class UClass*>)                     CosmeticDependencies                                        OFFSET(get<T>, {0x298, 16, 0, 0})
	CMember(TScriptInterface<Class>)                   VehicleInterface                                            OFFSET(get<T>, {0x2A8, 16, 0, 0})
	CMember(TScriptInterface<Class>)                   VehicleCosmeticsInterface                                   OFFSET(get<T>, {0x2B8, 16, 0, 0})
	CMember(class UActorComponent*)                    VehicleCosmeticComponent                                    OFFSET(get<T>, {0x2C8, 8, 0, 0})


	/// Functions
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsActor.GetBodyMeshComponent
	// class USkeletalMeshComponent* GetBodyMeshComponent();                                                                    // [0xa7e3ac8] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsActor.DriftStarted
	// void DriftStarted();                                                                                                     // [0xa7e3aa0] Final|Native|Public  
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsActor.DriftFinished
	// void DriftFinished();                                                                                                    // [0xa7e3a8c] Final|Native|Public  
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsActor.ColorReady
	// void ColorReady(FName InColor, FVehicleCosmeticsAdditionalParameterInfos& InInfo);                                       // [0xa7e2e9c] Final|Native|Public|HasOutParms 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsActor.BP_OnVehicleWheelsLeftGround
	// void BP_OnVehicleWheelsLeftGround();                                                                                     // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsActor.BP_OnVehicleLanded
	// void BP_OnVehicleLanded(float LandingForced, bool bLandedKickflip);                                                      // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsActor.BP_OnDriftStarted
	// void BP_OnDriftStarted();                                                                                                // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsActor.BP_OnDriftFinished
	// void BP_OnDriftFinished();                                                                                               // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsActor.BP_OnDeactivated
	// void BP_OnDeactivated();                                                                                                 // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsActor.BP_OnCosmeticApplied
	// void BP_OnCosmeticApplied();                                                                                             // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsActor.BP_OnColorReady
	// void BP_OnColorReady(FName Color, FVehicleCosmeticsAdditionalParameterInfos AdditionalInfo);                             // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsActor.BP_OnBoostStarted
	// void BP_OnBoostStarted();                                                                                                // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsActor.BP_OnBoostFinished
	// void BP_OnBoostFinished();                                                                                               // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsActor.BoostStarted
	// void BoostStarted();                                                                                                     // [0xa7e2e88] Final|Native|Public  
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsActor.BoostFinished
	// void BoostFinished();                                                                                                    // [0xa7e2e74] Final|Native|Public  
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsActor.ApplyCosmetic
	// void ApplyCosmetic();                                                                                                    // [0x1b779b8] Native|Public        
};

/// Class /Script/VehicleCosmeticsRuntime.VehicleCosmeticsAssembledMeshUserComponent
/// Size: 0x0588 (0x0000D8 - 0x000660)
class UVehicleCosmeticsAssembledMeshUserComponent : public UAssembledMeshUserComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1632;

public:
	CMember(class UCustomizableObjectInstance*)        TempCustomizableObjectInstance                              OFFSET(get<T>, {0x108, 8, 0, 0})
	SMember(FCosmeticLoadout)                          OwningCosmeticsLoadout                                      OFFSET(getStruct<T>, {0x130, 16, 0, 0})
	CMember(TArray<FVehicleCosmeticsDefaultLoadoutInfo>) DefaultLoadoutInfos                                       OFFSET(get<T>, {0x150, 16, 0, 0})
	CMember(TArray<class AVehicleCosmeticsActor*>)     SpawnedCosmeticActors_Body                                  OFFSET(get<T>, {0x168, 16, 0, 0})
	CMember(TArray<class AVehicleCosmeticsActor*>)     SpawnedCosmeticActors_Wheel                                 OFFSET(get<T>, {0x178, 16, 0, 0})
	CMember(TArray<class AVehicleCosmeticsActor*>)     SpawnedCosmeticActors_Booster                               OFFSET(get<T>, {0x188, 16, 0, 0})
	CMember(TArray<class AVehicleCosmeticsActor*>)     SpawnedCosmeticActors_DriftTrail                            OFFSET(get<T>, {0x198, 16, 0, 0})
	CMember(TMap<FName, bool>)                         HasBeenCustomizedMap                                        OFFSET(get<T>, {0x1A8, 80, 0, 0})
	CMember(TMap<int32_t, UAssembledMeshSchema*>)      MeshPartDataMap                                             OFFSET(get<T>, {0x1F8, 80, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCosmeticActorSpawned                                      OFFSET(getStruct<T>, {0x580, 16, 0, 0})
	SMember(FScalableFloat)                            CustomizationEnabled                                        OFFSET(getStruct<T>, {0x590, 40, 0, 0})
	SMember(FScalableFloat)                            CosmeticsLoadoutFXLoopTime                                  OFFSET(getStruct<T>, {0x5B8, 40, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEngineAudioUpdated                                        OFFSET(getStruct<T>, {0x5E0, 16, 0, 0})


	/// Functions
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsAssembledMeshUserComponent.VehicleCosmeticsOnCosmeticItemSpawned__DelegateSignature
	// void VehicleCosmeticsOnCosmeticItemSpawned__DelegateSignature(class AVehicleCosmeticsActor* CosmeticActor);              // [0x2177018] MulticastDelegate|Public|Delegate 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsAssembledMeshUserComponent.OnRep_OwningCosmeticsLoadout
	// void OnRep_OwningCosmeticsLoadout();                                                                                     // [0x360dcd8] Final|Native|Protected 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsAssembledMeshUserComponent.HandleTireRepaired
	// void HandleTireRepaired(int32_t TireIndex);                                                                              // [0xa7e411c] Final|Native|Protected 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsAssembledMeshUserComponent.HandleTirePopped
	// void HandleTirePopped(int32_t TireIndex);                                                                                // [0xa7e409c] Final|Native|Protected 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsAssembledMeshUserComponent.HandleOnExplode
	// void HandleOnExplode(class AController* LastDamageInstigator, class AFortAthenaVehicle* Vehicle);                        // [0xa7e3fc4] Final|Native|Protected 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsAssembledMeshUserComponent.HandleModApplied
	// void HandleModApplied(class AFortAthenaVehicle* Vehicle, FGameplayTag& ModTag);                                          // [0xa7e3dc0] Final|Native|Protected|HasOutParms 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsAssembledMeshUserComponent.HandleForceApplyVehicleCosmetics
	// void HandleForceApplyVehicleCosmetics(FSpawnerInfoForcedCosmetics& ForcedCosmetics);                                     // [0xa7e3d2c] Final|Native|Protected|HasOutParms 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsAssembledMeshUserComponent.HandleDriftStarted
	// void HandleDriftStarted();                                                                                               // [0xa7e3d04] Final|Native|Private 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsAssembledMeshUserComponent.HandleDriftFinished
	// void HandleDriftFinished();                                                                                              // [0xa7e3cf0] Final|Native|Private 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsAssembledMeshUserComponent.HandleBoostStarted
	// void HandleBoostStarted();                                                                                               // [0xa7e3cdc] Final|Native|Private 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsAssembledMeshUserComponent.HandleBoostFinished
	// void HandleBoostFinished();                                                                                              // [0xa7e3cb4] Final|Native|Private 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsAssembledMeshUserComponent.HandleBodyPhysicsChanges
	// void HandleBodyPhysicsChanges();                                                                                         // [0xa7e3ca0] Final|Native|Protected 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsAssembledMeshUserComponent.HandleBeginVehicleCosmetics
	// void HandleBeginVehicleCosmetics();                                                                                      // [0x2e65e04] Final|Native|Private 
};

/// Class /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCheatManager
/// Size: 0x0000 (0x000028 - 0x000028)
class UVehicleCosmeticsCheatManager : public UChildCheatManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCheatManager.VehicleCosmeticsDriftEnabled
	// void VehicleCosmeticsDriftEnabled(bool bNewValue);                                                                       // [0xa7e4a10] Final|Exec|Native|Public 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCheatManager.SetVehicleCosmeticsLoadout_WheelPainted
	// void SetVehicleCosmeticsLoadout_WheelPainted(FString PaintName);                                                         // [0x8bef450] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCheatManager.SetVehicleCosmeticsLoadout_Wheel
	// void SetVehicleCosmeticsLoadout_Wheel(FString WheelName);                                                                // [0x8bef450] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCheatManager.SetVehicleCosmeticsLoadout_SkinPainted
	// void SetVehicleCosmeticsLoadout_SkinPainted(FString PaintName);                                                          // [0x8bef450] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCheatManager.SetVehicleCosmeticsLoadout_SkinColor
	// void SetVehicleCosmeticsLoadout_SkinColor(FString SkinColor);                                                            // [0x8bef450] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCheatManager.SetVehicleCosmeticsLoadout_Skin
	// void SetVehicleCosmeticsLoadout_Skin(FString SkinName);                                                                  // [0x8bef450] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCheatManager.SetVehicleCosmeticsLoadout_DriftTrailPainted
	// void SetVehicleCosmeticsLoadout_DriftTrailPainted(FString PaintName);                                                    // [0x8bef450] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCheatManager.SetVehicleCosmeticsLoadout_DriftTrail
	// void SetVehicleCosmeticsLoadout_DriftTrail(FString DriftSmokeName);                                                      // [0x8bef450] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCheatManager.SetVehicleCosmeticsLoadout_BoosterPainted
	// void SetVehicleCosmeticsLoadout_BoosterPainted(FString PaintName);                                                       // [0x8bef450] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCheatManager.SetVehicleCosmeticsLoadout_Booster
	// void SetVehicleCosmeticsLoadout_Booster(FString BoosterName);                                                            // [0x8bef450] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCheatManager.SetVehicleCosmeticsLoadout_BodyPainted
	// void SetVehicleCosmeticsLoadout_BodyPainted(FString PaintName);                                                          // [0x8bef450] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCheatManager.SetVehicleCosmeticsLoadout_BodyColor
	// void SetVehicleCosmeticsLoadout_BodyColor(FString BodyColor);                                                            // [0x8bef450] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCheatManager.SetVehicleCosmeticsLoadout_Body
	// void SetVehicleCosmeticsLoadout_Body(FString BodyName);                                                                  // [0x8bef450] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCheatManager.SetVehicleCosmeticsLoadout
	// void SetVehicleCosmeticsLoadout(FString BodyName, FString WheelName, FString SkinName, FString BoosterName, FString DriftTrailName, FString BodyPainted, FString WheelPainted, FString BodyColor, FString SkinColor, FString SkinPainted, FString BoosterPainted, FString DriftTrailPainted); // [0xa7e2fb0] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCheatManager.SetVehicleCosmetics_DriftTrailPainted
	// void SetVehicleCosmetics_DriftTrailPainted(FString PaintName);                                                           // [0x8bef450] Final|Exec|Native|Public 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCheatManager.SetVehicleCosmetics_BoosterPainted
	// void SetVehicleCosmetics_BoosterPainted(FString PaintName);                                                              // [0x8bef450] Final|Exec|Native|Public 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCheatManager.GrantVehicleCosmeticsLoadedAssets
	// void GrantVehicleCosmeticsLoadedAssets();                                                                                // [0x32e6c74] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCheatManager.DumpVehicleCosmeticsPhysicsShapeCollision
	// void DumpVehicleCosmeticsPhysicsShapeCollision();                                                                        // [0xa7e3ab4] Final|Exec|Native|Public 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCheatManager.DumpVehicleCosmeticsLoadedAssetVariantTokenTypes
	// void DumpVehicleCosmeticsLoadedAssetVariantTokenTypes();                                                                 // [0x32e6c74] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCheatManager.DumpVehicleCosmeticsLoadedAssetTemplateIds
	// void DumpVehicleCosmeticsLoadedAssetTemplateIds();                                                                       // [0x32e6c74] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCheatManager.DumpVehicleCosmeticsLoadedAssetSkeletalMeshes
	// void DumpVehicleCosmeticsLoadedAssetSkeletalMeshes();                                                                    // [0x32e6c74] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCheatManager.CustomizeVehicle
	// void CustomizeVehicle(FString BodyName, FString WheelName, FString SkinName, FString BoosterName, FString DriftTrailName, FString BodyPainted, FString WheelPainted, FString BodyColor, FString SkinColor, FString SkinPainted, FString BoosterPainted, FString DriftTrailPainted); // [0xa7e2fb0] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCheatManager.CustomizeAllVehicles
	// void CustomizeAllVehicles(FString BodyName, FString WheelName, FString SkinName, FString BoosterName, FString DriftTrailName, FString BodyPainted, FString WheelPainted, FString BodyColor, FString SkinColor, FString SkinPainted, FString BoosterPainted, FString DriftTrailPainted); // [0xa7e2fb0] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCheatManager.ClearVehicleCosmeticsLoadout
	// void ClearVehicleCosmeticsLoadout();                                                                                     // [0x32e6c74] Final|BlueprintAuthorityOnly|Exec|Native|Public 
};

/// Class /Script/VehicleCosmeticsRuntime.VehicleCosmeticsInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UVehicleCosmeticsInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsInterface.ShouldWheelSpinForPreview
	// bool ShouldWheelSpinForPreview();                                                                                        // [0x80f565c] RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsInterface.IsUnderthrustActive
	// bool IsUnderthrustActive();                                                                                              // [0x39da4b4] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsInterface.IsTurboActive
	// bool IsTurboActive();                                                                                                    // [0xa7e4248] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsInterface.IsStartlineBoostActive
	// bool IsStartlineBoostActive();                                                                                           // [0xa7e4220] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsInterface.IsKickflipActive
	// bool IsKickflipActive();                                                                                                 // [0x8ec66ec] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsInterface.IsJumpAbilityActive
	// bool IsJumpAbilityActive();                                                                                              // [0xa7e41f8] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsInterface.IsDrifting
	// bool IsDrifting();                                                                                                       // [0xa7e41d4] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsInterface.IsDriftBoostActive
	// bool IsDriftBoostActive();                                                                                               // [0xa7e41b0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsInterface.GetWheelItemName
	// FName GetWheelItemName();                                                                                                // [0xa7e3c74] RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsInterface.GetTurboItemName
	// FName GetTurboItemName();                                                                                                // [0xa7e3c48] RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsInterface.GetDriftTrailItemName
	// FName GetDriftTrailItemName();                                                                                           // [0x860a228] RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsInterface.GetDraftingAppliedBonusSpeed
	// float GetDraftingAppliedBonusSpeed();                                                                                    // [0xa7e3b10] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsInterface.GetBodyItemName
	// FName GetBodyItemName();                                                                                                 // [0x27d976c] RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/VehicleCosmeticsRuntime.VehicleCosmeticsItemDefinition
/// Size: 0x0030 (0x0001C0 - 0x0001F0)
class UVehicleCosmeticsItemDefinition : public UAssembledMeshSchema
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	CMember(TArray<TWeakObjectPtr<UClass*>>)           CosmeticAttachments                                         OFFSET(get<T>, {0x1C0, 16, 0, 0})
	CMember(TArray<FString>)                           CheatNames                                                  OFFSET(get<T>, {0x1D0, 16, 0, 0})
	SMember(FString)                                   CheatLoadoutSlotName                                        OFFSET(getStruct<T>, {0x1E0, 16, 0, 0})
};

/// Class /Script/VehicleCosmeticsRuntime.VehicleCosmeticsItemDefinition_Body
/// Size: 0x0178 (0x0001F0 - 0x000368)
class UVehicleCosmeticsItemDefinition_Body : public UVehicleCosmeticsItemDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 872;

public:
	SMember(FVehicleCosmeticsCustomizableObjectIntInfo) BodyGroup                                                  OFFSET(getStruct<T>, {0x1F8, 8, 0, 0})
	SMember(FName)                                     SkinDataTableParameterName                                  OFFSET(getStruct<T>, {0x200, 4, 0, 0})
	SMember(FName)                                     BodyColorParameterName                                      OFFSET(getStruct<T>, {0x204, 4, 0, 0})
	SMember(FName)                                     SkinColorParameterName                                      OFFSET(getStruct<T>, {0x208, 4, 0, 0})
	SMember(FName)                                     PaintedDataTableParameterName                               OFFSET(getStruct<T>, {0x20C, 4, 0, 0})
	CMember(TMap<FGameplayTag, FVehicleCosmeticsAdditionalParameterInfos>) AdditionalVariantInfos                  OFFSET(get<T>, {0x210, 80, 0, 0})
	CMember(TArray<FVehicleCosmeticsBodyPhysicsQueryInfo>) PhysicsQueryInfos                                       OFFSET(get<T>, {0x260, 16, 0, 0})
	CMember(TArray<FVehicleCosmeticsAnimInfo>)         AnimInfos                                                   OFFSET(get<T>, {0x270, 16, 0, 0})
	CMember(TWeakObjectPtr<USkeleton*>)                WheelAttachSkeletonReference                                OFFSET(get<T>, {0x280, 32, 0, 0})
	CMember(TArray<FWheelAttachInfo>)                  WheelAttachInfos                                            OFFSET(get<T>, {0x2A0, 16, 0, 0})
	CMember(TArray<FBoosterAttachInfo>)                BoosterAttachInfos                                          OFFSET(get<T>, {0x2B0, 16, 0, 0})
	CMember(TWeakObjectPtr<UVehicleCosmeticsItemDefinition_Wheel*>) DefaultWheelItemDef                            OFFSET(get<T>, {0x2C0, 32, 0, 0})
	SMember(FDataTableRowHandle)                       DefaultSkinRow                                              OFFSET(getStruct<T>, {0x2E0, 16, 0, 0})
	CMember(TWeakObjectPtr<UVehicleCosmeticsItemDefinition_EngineAudio*>) AudioData                                OFFSET(get<T>, {0x2F0, 32, 0, 0})
	SMember(FGameplayTagQuery)                         BodyTypeTagQuery                                            OFFSET(getStruct<T>, {0x310, 72, 0, 0})
	CMember(TArray<FVehicleCosmeticsBodyWindowQueryInfo>) WindowQueryInfos                                         OFFSET(get<T>, {0x358, 16, 0, 0})
};

/// Class /Script/VehicleCosmeticsRuntime.VehicleCosmeticsItemDefinition_Booster
/// Size: 0x0050 (0x0001F0 - 0x000240)
class UVehicleCosmeticsItemDefinition_Booster : public UVehicleCosmeticsItemDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	CMember(TMap<FGameplayTag, FVehicleCosmeticsAdditionalParameterInfos>) AdditionalVariantInfos                  OFFSET(get<T>, {0x1F0, 80, 0, 0})
};

/// Class /Script/VehicleCosmeticsRuntime.VehicleCosmeticsItemDefinition_DriftTrail
/// Size: 0x0050 (0x0001F0 - 0x000240)
class UVehicleCosmeticsItemDefinition_DriftTrail : public UVehicleCosmeticsItemDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	CMember(TMap<FGameplayTag, FVehicleCosmeticsAdditionalParameterInfos>) AdditionalVariantInfos                  OFFSET(get<T>, {0x1F0, 80, 0, 0})
};

/// Class /Script/VehicleCosmeticsRuntime.VehicleAudioCosmeticData
/// Size: 0x0060 (0x000030 - 0x000090)
class UVehicleAudioCosmeticData : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(TWeakObjectPtr<USoundBase*>)               EngineSound                                                 OFFSET(get<T>, {0x30, 32, 0, 0})
	CMember(TWeakObjectPtr<USoundBase*>)               EngineSound_LowSpec                                         OFFSET(get<T>, {0x50, 32, 0, 0})
	CMember(class USoundBase*)                         EngineIgnitionSound                                         OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(class USoundBase*)                         EngineOffSound                                              OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(class USoundBase*)                         HornSound                                                   OFFSET(get<T>, {0x80, 8, 0, 0})
	DMember(bool)                                      bIsIP                                                       OFFSET(get<bool>, {0x88, 1, 0, 0})
	DMember(bool)                                      bCanIgnoreLoadManagement                                    OFFSET(get<bool>, {0x89, 1, 0, 0})


	/// Functions
	// Function /Script/VehicleCosmeticsRuntime.VehicleAudioCosmeticData.GetEngineSound
	// TWeakObjectPtr<USoundBase*> GetEngineSound(bool bHighSpec);                                                              // [0xa7e3b38] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/VehicleCosmeticsRuntime.VehicleCosmeticsItemDefinition_EngineAudio
/// Size: 0x0020 (0x0001F0 - 0x000210)
class UVehicleCosmeticsItemDefinition_EngineAudio : public UVehicleCosmeticsItemDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	CMember(TWeakObjectPtr<UVehicleAudioCosmeticData*>) Data                                                       OFFSET(get<T>, {0x1F0, 32, 0, 0})
};

/// Class /Script/VehicleCosmeticsRuntime.VehicleCosmeticsItemDefinition_Skin
/// Size: 0x0040 (0x0001F0 - 0x000230)
class UVehicleCosmeticsItemDefinition_Skin : public UVehicleCosmeticsItemDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	DMember(bool)                                      bLockColor                                                  OFFSET(get<bool>, {0x1F0, 1, 0, 0})
	SMember(FLinearColor)                              LockedBodyColor                                             OFFSET(getStruct<T>, {0x1F4, 16, 0, 0})
	SMember(FLinearColor)                              LockedSkinColor                                             OFFSET(getStruct<T>, {0x204, 16, 0, 0})
	SMember(FName)                                     PaintedDataTableParameterName                               OFFSET(getStruct<T>, {0x214, 4, 0, 0})
	SMember(FName)                                     PaintedEnumParameterName                                    OFFSET(getStruct<T>, {0x218, 4, 0, 0})
	CMember(TArray<FVehicleCosmeticsAdditionalParameterInfos>) AdditionalSkinInfos                                 OFFSET(get<T>, {0x220, 16, 0, 0})
};

/// Class /Script/VehicleCosmeticsRuntime.VehicleCosmeticsItemDefinition_Wheel
/// Size: 0x0098 (0x0001F0 - 0x000288)
class UVehicleCosmeticsItemDefinition_Wheel : public UVehicleCosmeticsItemDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 648;

public:
	SMember(FVehicleCosmeticsCustomizableObjectIntInfo) WheelGroup                                                 OFFSET(getStruct<T>, {0x1F0, 8, 0, 0})
	SMember(FName)                                     PaintedDataTableParameterName                               OFFSET(getStruct<T>, {0x1F8, 4, 0, 0})
	SMember(FTirePopInfo)                              WheelTirePoppedInfo                                         OFFSET(getStruct<T>, {0x200, 24, 0, 0})
	CMember(TMap<FGameplayTag, FVehicleCosmeticsAdditionalParameterInfos>) AdditionalVariantInfos                  OFFSET(get<T>, {0x218, 80, 0, 0})
	CMember(TArray<FVehicleCosmeticsAnimInfo>)         AnimInfos                                                   OFFSET(get<T>, {0x268, 16, 0, 0})
	CMember(TArray<FWheelSetupInfo>)                   WheelSetupInfos                                             OFFSET(get<T>, {0x278, 16, 0, 0})
};

/// Class /Script/VehicleCosmeticsRuntime.VehicleCosmeticsWheelAnimInstance
/// Size: 0x0040 (0x000620 - 0x000660)
class UVehicleCosmeticsWheelAnimInstance : public UVehicleCosmeticsAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1632;

public:
	SMember(FRotator)                                  SpinnerSpin                                                 OFFSET(getStruct<T>, {0x620, 24, 0, 0})
};

/// Struct /Script/VehicleCosmeticsRuntime.VehicleCosmeticsDefaultLoadoutInfo
/// Size: 0x0058 (0x000000 - 0x000058)
class FVehicleCosmeticsDefaultLoadoutInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FGameplayTagQuery)                         VehicleTagQuery                                             OFFSET(getStruct<T>, {0x0, 72, 0, 0})
	SMember(FCosmeticLoadout)                          DefaultLoadout                                              OFFSET(getStruct<T>, {0x48, 16, 0, 0})
};

/// Struct /Script/VehicleCosmeticsRuntime.BouncyChassisVehicleBoxSpringSetup
/// Size: 0x0050 (0x000000 - 0x000050)
class FBouncyChassisVehicleBoxSpringSetup : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FVector)                                   Strength                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   Damping                                                     OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FVector)                                   MaxDisplacement                                             OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	DMember(float)                                     MaxSpeed                                                    OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     Mass                                                        OFFSET(get<float>, {0x4C, 4, 0, 0})
};

/// Struct /Script/VehicleCosmeticsRuntime.BouncyChassisVehicleBoxSpring
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FBouncyChassisVehicleBoxSpring : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FBouncyChassisVehicleBoxSpringSetup)       Setup                                                       OFFSET(getStruct<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/VehicleCosmeticsRuntime.BouncyChassisVehicleSpringSettings
/// Size: 0x0008 (0x000000 - 0x000008)
class FBouncyChassisVehicleSpringSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     Strength                                                    OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Damping                                                     OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/VehicleCosmeticsRuntime.BouncyChassisVehicleSetup
/// Size: 0x0048 (0x000000 - 0x000048)
class FBouncyChassisVehicleSetup : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FBouncyChassisVehicleSpringSettings)       PitchSpring                                                 OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(float)                                     PitchMaxAngleDegrees                                        OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FBouncyChassisVehicleSpringSettings)       RollSpring                                                  OFFSET(getStruct<T>, {0xC, 8, 0, 0})
	DMember(float)                                     RollMaxAngleDegrees                                         OFFSET(get<float>, {0x14, 4, 0, 0})
	SMember(FBouncyChassisVehicleSpringSettings)       ZSpring                                                     OFFSET(getStruct<T>, {0x18, 8, 0, 0})
	DMember(float)                                     ZMaxDrop                                                    OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     ZMaxRaise                                                   OFFSET(get<float>, {0x24, 4, 0, 0})
	SMember(FVector)                                   MaxDisplacement                                             OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	DMember(float)                                     DisplacementZOffset                                         OFFSET(get<float>, {0x40, 4, 0, 0})
};

/// Struct /Script/VehicleCosmeticsRuntime.BouncyChassisVehicleState
/// Size: 0x000C (0x000000 - 0x00000C)
class FBouncyChassisVehicleState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     PitchDegrees                                                OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     RollDegrees                                                 OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     TranslationZ                                                OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/VehicleCosmeticsRuntime.BouncyChassisVehicleInstance
/// Size: 0x0108 (0x000000 - 0x000108)
class FBouncyChassisVehicleInstance : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FBouncyChassisVehicleBoxSpring)            Spring                                                      OFFSET(getStruct<T>, {0x0, 176, 0, 0})
};

/// Struct /Script/VehicleCosmeticsRuntime.BouncyChassisSpringTravel
/// Size: 0x0020 (0x000000 - 0x000020)
class FBouncyChassisSpringTravel : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FFloatInterval)                            Default                                                     OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FFloatInterval)                            Popped                                                      OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FFloatInterval)                            TireModded                                                  OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	SMember(FFloatInterval)                            TireModPopped                                               OFFSET(getStruct<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/VehicleCosmeticsRuntime.BouncyChassisVehicleWheelAnimInfo
/// Size: 0x002C (0x000000 - 0x00002C)
class FBouncyChassisVehicleWheelAnimInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 44;

public:
	DMember(float)                                     SpringToWheelOffsetZ                                        OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FBouncyChassisSpringTravel)                SpringTravelRange                                           OFFSET(getStruct<T>, {0x4, 32, 0, 0})
	DMember(float)                                     WheelRadius                                                 OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     TravelDistance                                              OFFSET(get<float>, {0x28, 4, 0, 0})
};

/// Struct /Script/VehicleCosmeticsRuntime.VehicleCosmeticsRestrictionDefinition
/// Size: 0x0060 (0x000000 - 0x000060)
class FVehicleCosmeticsRestrictionDefinition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FGameplayTagQuery)                         RequiredTagQuery                                            OFFSET(getStruct<T>, {0x0, 72, 0, 0})
	SMember(FText)                                     ItemLockerRestrictedText                                    OFFSET(getStruct<T>, {0x48, 24, 0, 0})
};

/// Struct /Script/VehicleCosmeticsRuntime.WheelAttachInfo
/// Size: 0x0090 (0x000000 - 0x000090)
class FWheelAttachInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(EVehicleWheelLocations)                    WheelLocation                                               OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FBoneSocketTarget)                         WheelSocket                                                 OFFSET(getStruct<T>, {0x10, 128, 0, 0})
};

/// Struct /Script/VehicleCosmeticsRuntime.SpinnerWheelInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FSpinnerWheelInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      bShouldSpin                                                 OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     SpinAccelRate                                               OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     SpinDecelRate                                               OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     SpinMaxSpeed                                                OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/VehicleCosmeticsRuntime.MaterialSlotWithParameterInfo
/// Size: 0x000C (0x000000 - 0x00000C)
class FMaterialSlotWithParameterInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     MaterialSlotName                                            OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     MaterialParameterName                                       OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	DMember(float)                                     MaterialParameterValue                                      OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/VehicleCosmeticsRuntime.WheelSetupInfo
/// Size: 0x0080 (0x000000 - 0x000080)
class FWheelSetupInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(EVehicleWheelLocations)                    WheelLocation                                               OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FVector)                                   WheelOffset                                                 OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FRotator)                                  WheelRotation                                               OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   WheelScale                                                  OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	CMember(TArray<FMaterialSlotWithParameterInfo>)    WheelMaterialSlotInfos                                      OFFSET(get<T>, {0x50, 16, 0, 0})
	SMember(FSpinnerWheelInfo)                         SpinnerWheelInfo                                            OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	SMember(FVehicleWheelFXInfo)                       WheelFXInfo                                                 OFFSET(getStruct<T>, {0x70, 16, 0, 0})
};

/// Struct /Script/VehicleCosmeticsRuntime.BoosterAttachInfo
/// Size: 0x0080 (0x000000 - 0x000080)
class FBoosterAttachInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FBoneSocketTarget)                         BoosterSocket                                               OFFSET(getStruct<T>, {0x0, 128, 0, 0})
};

/// Struct /Script/VehicleCosmeticsRuntime.TirePopInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FTirePopInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FName>)                             WheelMaterialSlotNames                                      OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FName)                                     WheelMaterialParameterName                                  OFFSET(getStruct<T>, {0x10, 4, 0, 0})
};

/// Struct /Script/VehicleCosmeticsRuntime.WheelInfo
/// Size: 0x0088 (0x000000 - 0x000088)
class FWheelInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Struct /Script/VehicleCosmeticsRuntime.VehicleCosmeticsBodyPhysicsInfo
/// Size: 0x0038 (0x000000 - 0x000038)
class FVehicleCosmeticsBodyPhysicsInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector)                                   CenterOfMass                                                OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	CMember(TWeakObjectPtr<UPhysicsAsset*>)            PhysicsAssetOverride                                        OFFSET(get<T>, {0x18, 32, 0, 0})
};

/// Struct /Script/VehicleCosmeticsRuntime.VehicleCosmeticsBodyPhysicsQueryInfo
/// Size: 0x0080 (0x000000 - 0x000080)
class FVehicleCosmeticsBodyPhysicsQueryInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FGameplayTagQuery)                         VehicleTagQuery                                             OFFSET(getStruct<T>, {0x0, 72, 0, 0})
	SMember(FVehicleCosmeticsBodyPhysicsInfo)          PhysicsInfo                                                 OFFSET(getStruct<T>, {0x48, 56, 0, 0})
};

/// Struct /Script/VehicleCosmeticsRuntime.VehicleCosmeticsAnimInfo
/// Size: 0x0068 (0x000000 - 0x000068)
class FVehicleCosmeticsAnimInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FGameplayTagQuery)                         VehicleTagQuery                                             OFFSET(getStruct<T>, {0x0, 72, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   AnimClass                                                   OFFSET(get<T>, {0x48, 32, 0, 0})
};

/// Struct /Script/VehicleCosmeticsRuntime.VehicleCosmeticsBodyWindowInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FVehicleCosmeticsBodyWindowInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     WindowDataTableParameterName                                OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FDataTableRowHandle)                       WindowRow                                                   OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/VehicleCosmeticsRuntime.VehicleCosmeticsBodyWindowQueryInfo
/// Size: 0x0060 (0x000000 - 0x000060)
class FVehicleCosmeticsBodyWindowQueryInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FGameplayTagQuery)                         VehicleTagQuery                                             OFFSET(getStruct<T>, {0x0, 72, 0, 0})
	SMember(FVehicleCosmeticsBodyWindowInfo)           WindowInfo                                                  OFFSET(getStruct<T>, {0x48, 24, 0, 0})
};

/// Struct /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCustomizableObjectFloatInfo
/// Size: 0x0008 (0x000000 - 0x000008)
class FVehicleCosmeticsCustomizableObjectFloatInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     ParameterName                                               OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(float)                                     ParameterValue                                              OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCustomizableObjectIntInfo
/// Size: 0x0008 (0x000000 - 0x000008)
class FVehicleCosmeticsCustomizableObjectIntInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     ParameterName                                               OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     ParameterValue                                              OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCustomizableObjectColorInfo
/// Size: 0x0014 (0x000000 - 0x000014)
class FVehicleCosmeticsCustomizableObjectColorInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FName)                                     ParameterName                                               OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FLinearColor)                              ParameterValue                                              OFFSET(getStruct<T>, {0x4, 16, 0, 0})
};

/// Struct /Script/VehicleCosmeticsRuntime.VehicleCosmeticsAdditionalParameterInfos
/// Size: 0x0030 (0x000000 - 0x000030)
class FVehicleCosmeticsAdditionalParameterInfos : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FVehicleCosmeticsCustomizableObjectFloatInfo>) FloatParameters                                  OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FVehicleCosmeticsCustomizableObjectIntInfo>) IntParameters                                      OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FVehicleCosmeticsCustomizableObjectColorInfo>) ColorParameters                                  OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/VehicleCosmeticsRuntime.AnimNode_BouncyChassisVehicleController
/// Size: 0x0018 (0x0000C8 - 0x0000E0)
class FAnimNode_BouncyChassisVehicleController : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FBoneReference)                            ChassisBone                                                 OFFSET(getStruct<T>, {0xC8, 12, 0, 0})
	SMember(FBouncyChassisVehicleState)                BouncyChassis                                               OFFSET(getStruct<T>, {0xD4, 12, 0, 0})
};

/// Enum /Script/VehicleCosmeticsRuntime.EVehicleWheelIndex
/// Size: 0x06
enum EVehicleWheelIndex : uint8_t
{
	EVehicleWheelIndex__FrontLeft                                                    = 0,
	EVehicleWheelIndex__FrontRight                                                   = 1,
	EVehicleWheelIndex__BackLeft                                                     = 2,
	EVehicleWheelIndex__BackRight                                                    = 3,
	EVehicleWheelIndex__Num                                                          = 4,
	EVehicleWheelIndex__EVehicleWheelIndex_MAX                                       = 5
};

