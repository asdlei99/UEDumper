
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

/// Class /Script/NevadaRuntime.FortNevadaVehicle
/// Size: 0x0600 (0x001E80 - 0x002480)
class AFortNevadaVehicle : public AFortAthenaSKVehicle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 9344;

public:
	SMember(FNevadaState)                              ServerReplicatedState                                       OFFSET(getStruct<T>, {0x1E80, 20, 0, 0})
	CMember(class UFortNevadaVehicleConfigs*)          FortNevadaVehicleConfigs                                    OFFSET(get<T>, {0x1E98, 8, 0, 0})
	CMember(class UClass*)                             FortNevadaAudioControllerClass                              OFFSET(get<T>, {0x1EA0, 8, 0, 0})
	CMember(class UChildActorComponent*)               AudioControllerActor                                        OFFSET(get<T>, {0x1EA8, 8, 0, 0})
	CMember(class AFortNevadaAudioController*)         FortNevadaAudioController                                   OFFSET(get<T>, {0x1EB0, 8, 0, 0})
	SMember(FVehicleGamepadLiftInputs)                 LiftInputs                                                  OFFSET(getStruct<T>, {0x1EB8, 8, 0, 0})
	DMember(float)                                     LastBatteryRegenTickTime                                    OFFSET(get<float>, {0x1EC0, 4, 0, 0})
	DMember(bool)                                      bBoostThrust                                                OFFSET(get<bool>, {0x1EC4, 1, 0, 0})
	DMember(bool)                                      bBoostDrag                                                  OFFSET(get<bool>, {0x1EC5, 1, 0, 0})
	DMember(bool)                                      bBoostInputReleased                                         OFFSET(get<bool>, {0x1EC6, 1, 0, 0})
	DMember(bool)                                      bUseTractorBeamUprightForce                                 OFFSET(get<bool>, {0x1EC7, 1, 0, 0})
	DMember(bool)                                      bDeadBattery                                                OFFSET(get<bool>, {0x1EC8, 1, 0, 0})
	DMember(float)                                     TractorBeamExtraLengthForExtents                            OFFSET(get<float>, {0x1ECC, 4, 0, 0})
	SMember(FVector)                                   CrashingDesiredUp                                           OFFSET(getStruct<T>, {0x1ED0, 24, 0, 0})
	DMember(float)                                     BoostStartTime                                              OFFSET(get<float>, {0x1EE8, 4, 0, 0})
	DMember(float)                                     BoostPitchAlpha                                             OFFSET(get<float>, {0x1EEC, 4, 0, 0})
	DMember(float)                                     BoostChargeProgress                                         OFFSET(get<float>, {0x1EF0, 4, 0, 0})
	DMember(int32_t)                                   BoostChargesAvailable                                       OFFSET(get<int32_t>, {0x1EF4, 4, 0, 0})
	SMember(FVector)                                   CachedBoostMoveDir                                          OFFSET(getStruct<T>, {0x1EF8, 24, 0, 0})
	DMember(float)                                     CurrentStateStartTime                                       OFFSET(get<float>, {0x1F10, 4, 0, 0})
	DMember(float)                                     HeightAtLandingTime                                         OFFSET(get<float>, {0x1F14, 4, 0, 0})
	DMember(float)                                     CrashingScrapingTime                                        OFFSET(get<float>, {0x1F18, 4, 0, 0})
	DMember(float)                                     CrashingNotMovingTimer                                      OFFSET(get<float>, {0x1F1C, 4, 0, 0})
	DMember(float)                                     AltimeterTraceHitDistance                                   OFFSET(get<float>, {0x1F20, 4, 0, 0})
	DMember(float)                                     TractorBeamAppliedForceMagnitude                            OFFSET(get<float>, {0x1F24, 4, 0, 0})
	DMember(float)                                     AnimParamDriverSeatLeftRight                                OFFSET(get<float>, {0x1F28, 4, 0, 0})
	DMember(float)                                     AnimParamDriverSeatForwardBack                              OFFSET(get<float>, {0x1F2C, 4, 0, 0})
	DMember(bool)                                      bForceNegativeLift                                          OFFSET(get<bool>, {0x1F30, 1, 0, 0})
	DMember(bool)                                      bForcePositiveLift                                          OFFSET(get<bool>, {0x1F31, 1, 0, 0})
	DMember(bool)                                      bInitialLift                                                OFFSET(get<bool>, {0x1F32, 1, 0, 0})
	CMember(ENevadaFlightStates)                       CurrentVehicleState                                         OFFSET(get<T>, {0x1F33, 1, 0, 0})
	CMember(TWeakObjectPtr<ALandscapeProxy*>)          CachedLandscapeProxy                                        OFFSET(get<T>, {0x1F80, 8, 0, 0})
	CMember(class UClass*)                             PassengerCameraModeClass                                    OFFSET(get<T>, {0x1F88, 8, 0, 0})
	DMember(bool)                                      bTractorBeamChargeStarted                                   OFFSET(get<bool>, {0x1F90, 1, 0, 0})
	SMember(FTowhookParams)                            TowhookParams                                               OFFSET(getStruct<T>, {0x1F98, 208, 0, 0})
	CMember(class UClass*)                             AttachedPawnHiddenVehicle                                   OFFSET(get<T>, {0x2068, 8, 0, 0})
	CMember(TWeakObjectPtr<UPrimitiveComponent*>)      TractorBeamAttachedPrimitive                                OFFSET(get<T>, {0x2070, 8, 0, 0})
	CMember(class AFortAthenaVehicle*)                 SpawnedTractorBeamVictimVehicle                             OFFSET(get<T>, {0x2078, 8, 0, 0})
	CMember(TWeakObjectPtr<UPrimitiveComponent*>)      PreviousTractorBeamAttachedPrimitive                        OFFSET(get<T>, {0x2080, 8, 0, 0})
	CMember(TArray<class AActor*>)                     TractorBeamTargetedActors                                   OFFSET(get<T>, {0x2088, 16, 0, 0})
	CMember(TArray<class AActor*>)                     PreviouslyTargetedActors                                    OFFSET(get<T>, {0x2098, 16, 0, 0})
	CMember(class AActor*)                             TractorBeamAttachedActor                                    OFFSET(get<T>, {0x20A8, 8, 0, 0})
	CMember(class AActor*)                             TractorBeamTargetedActor                                    OFFSET(get<T>, {0x20B0, 8, 0, 0})
	SMember(FVector)                                   TractorBeamTargetPosition                                   OFFSET(getStruct<T>, {0x20B8, 24, 0, 0})
	DMember(bool)                                      bBeamButtonReleased                                         OFFSET(get<bool>, {0x20D1, 1, 0, 0})
	CMember(TArray<TEnumAsByte<EObjectTypeQuery>>)     TractorBeamObjectsTypes                                     OFFSET(get<T>, {0x20D8, 16, 0, 0})
	SMember(FGameplayTagContainer)                     DisallowedBeamTags                                          OFFSET(getStruct<T>, {0x20E8, 32, 0, 0})
	SMember(FGameplayTagContainer)                     AlwaysAllowedBeamTags                                       OFFSET(getStruct<T>, {0x2108, 32, 0, 0})
	CMember(class UNiagaraSystem*)                     TractorBeamFX_Unattached                                    OFFSET(get<T>, {0x21C0, 8, 0, 0})
	CMember(class UNiagaraSystem*)                     TractorBeamFX_Attached                                      OFFSET(get<T>, {0x21C8, 8, 0, 0})
	CMember(class UNiagaraComponent*)                  BeamPSC                                                     OFFSET(get<T>, {0x21D0, 8, 0, 0})
	CMember(TEnumAsByte<ETractorBeamState>)            TractorBeamState                                            OFFSET(get<T>, {0x2228, 1, 0, 0})
	DMember(float)                                     TractorBeamDeactivationTimestamp                            OFFSET(get<float>, {0x2250, 4, 0, 0})
	DMember(float)                                     TractorBeamDisruptedTimestamp                               OFFSET(get<float>, {0x2254, 4, 0, 0})
	DMember(float)                                     CockpitHealth                                               OFFSET(get<float>, {0x22D8, 4, 0, 0})
	DMember(float)                                     Native_CockpitEnabled                                       OFFSET(get<float>, {0x22DC, 4, 0, 0})
	DMember(float)                                     LastCockpitHealthTickTime                                   OFFSET(get<float>, {0x22E0, 4, 0, 0})
	DMember(float)                                     LastCockpitDamageTime                                       OFFSET(get<float>, {0x22E4, 4, 0, 0})
	DMember(float)                                     CockpitDissolveStartTime                                    OFFSET(get<float>, {0x22E8, 4, 0, 0})
	SMember(FScalableFloat)                            CockpitMaxHealth                                            OFFSET(getStruct<T>, {0x22F0, 40, 0, 0})
	SMember(FScalableFloat)                            CockpitHealthTickRate                                       OFFSET(getStruct<T>, {0x2318, 40, 0, 0})
	SMember(FScalableFloat)                            CockpitHealthPerTick                                        OFFSET(getStruct<T>, {0x2340, 40, 0, 0})
	SMember(FScalableFloat)                            CockpitRegenDelay                                           OFFSET(getStruct<T>, {0x2368, 40, 0, 0})
	CMember(class UCurveFloat*)                        CockpitHitMaterialWobble                                    OFFSET(get<T>, {0x2390, 8, 0, 0})
	DMember(float)                                     LastDamageAlpha                                             OFFSET(get<float>, {0x2398, 4, 0, 0})
	DMember(bool)                                      bDissolvingCockpit                                          OFFSET(get<bool>, {0x239C, 1, 0, 0})
	DMember(bool)                                      bRestoringCockpit                                           OFFSET(get<bool>, {0x239D, 1, 0, 0})
	DMember(bool)                                      bCockpitWobble                                              OFFSET(get<bool>, {0x239E, 1, 0, 0})
	CMember(class UStaticMeshComponent*)               NativeComp_ShieldMesh                                       OFFSET(get<T>, {0x23A0, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           Native_CockpitMaterial                                      OFFSET(get<T>, {0x23A8, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           Native_EnergyRingMatInstance                                OFFSET(get<T>, {0x23B0, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           Native_EnergyFieldMatInstance                               OFFSET(get<T>, {0x23B8, 8, 0, 0})
	CMember(class UAudioComponent*)                    NativeComp_DamageStateLastLife                              OFFSET(get<T>, {0x23C0, 8, 0, 0})
	CMember(class UAudioComponent*)                    NativeComp_DamageState                                      OFFSET(get<T>, {0x23C8, 8, 0, 0})
	SMember(FVector)                                   Native_LastHitLocation                                      OFFSET(getStruct<T>, {0x23D0, 24, 0, 0})
	SMember(FVector)                                   Native_LastHitNormal                                        OFFSET(getStruct<T>, {0x23E8, 24, 0, 0})
	CMember(class UNiagaraComponent*)                  NativeComp_DamageStateFX                                    OFFSET(get<T>, {0x2400, 8, 0, 0})
	CMember(class UNiagaraComponent*)                  NativeComp_HologramScreen                                   OFFSET(get<T>, {0x2408, 8, 0, 0})
	CMember(class UNiagaraComponent*)                  NativeComp_SpeedLines                                       OFFSET(get<T>, {0x2410, 8, 0, 0})
	CMember(class UMaterialInterface*)                 Native_EnergyRingMat                                        OFFSET(get<T>, {0x2418, 8, 0, 0})
	CMember(class UMaterialInterface*)                 Native_EnergyFieldMat                                       OFFSET(get<T>, {0x2420, 8, 0, 0})
	CMember(class UNiagaraSystem*)                     NativeSys_DamageStateFX                                     OFFSET(get<T>, {0x2428, 8, 0, 0})
	CMember(class UNiagaraSystem*)                     NativeSys_CockpitDestroyed                                  OFFSET(get<T>, {0x2430, 8, 0, 0})
	CMember(class USoundBase*)                         CockpitDamagedSound                                         OFFSET(get<T>, {0x2438, 8, 0, 0})
	CMember(class USoundBase*)                         CockpitDestroyedSound                                       OFFSET(get<T>, {0x2440, 8, 0, 0})
	CMember(class USoundBase*)                         CockpitRespawnSound                                         OFFSET(get<T>, {0x2448, 8, 0, 0})
	CMember(class USoundBase*)                         Native_DamageStateSound                                     OFFSET(get<T>, {0x2450, 8, 0, 0})
	CMember(class USoundBase*)                         Native_DamageStateLastLifeSound                             OFFSET(get<T>, {0x2458, 8, 0, 0})
	CMember(class UForceFeedbackEffect*)               CockpitDeactivatedForceFeedback                             OFFSET(get<T>, {0x2460, 8, 0, 0})
	CMember(class UClass*)                             CockpitDestroyedCamShake                                    OFFSET(get<T>, {0x2468, 8, 0, 0})
	CMember(TArray<class UClass*>)                     TractorBeamDisallowedClasses                                OFFSET(get<T>, {0x2470, 16, 0, 0})


	/// Functions
	// Function /Script/NevadaRuntime.FortNevadaVehicle.SetTractorBeamInactive
	// void SetTractorBeamInactive();                                                                                           // [0xb5eca90] Final|Native|Protected|BlueprintCallable 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.SetTractorBeamEnabled
	// void SetTractorBeamEnabled(bool bEnabled);                                                                               // [0x5fe71f4] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.SetCannonEnabled
	// void SetCannonEnabled(bool bEnabled);                                                                                    // [0x5fe71f4] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.SetAttachedPawnAddedVelocity
	// void SetAttachedPawnAddedVelocity(FVector& AddedVelocity);                                                               // [0xb5ec9cc] Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnTractorBeamDetached
	// void OnTractorBeamDetached(class AActor* DetachedActor, FVector& LastBeamPosition);                                      // [0x2177018] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnTractorBeamDeactivated
	// void OnTractorBeamDeactivated(FVector& LastBeamPosition);                                                                // [0x2177018] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnTractorBeamChargeStarted
	// void OnTractorBeamChargeStarted();                                                                                       // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnTractorBeamAttached
	// void OnTractorBeamAttached();                                                                                            // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnTractorBeamActivated
	// void OnTractorBeamActivated();                                                                                           // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnTargetedActorChanged
	// void OnTargetedActorChanged(class AActor* NewTargetedActor);                                                             // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnStartDescend
	// void OnStartDescend();                                                                                                   // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnStartAscend
	// void OnStartAscend();                                                                                                    // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnRep_TractorBeamState
	// void OnRep_TractorBeamState(TEnumAsByte<ETractorBeamState> PreviousState);                                               // [0xb5ec940] Final|Native|Protected 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnRep_TractorBeamChargeStarted
	// void OnRep_TractorBeamChargeStarted();                                                                                   // [0xb5ec8e4] Final|Native|Public  
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnRep_TractorBeamAttached
	// void OnRep_TractorBeamAttached();                                                                                        // [0xb5ec8d0] Final|Native|Protected 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnRep_TargetedActorChanged
	// void OnRep_TargetedActorChanged();                                                                                       // [0xb5ec894] Final|Native|Public  
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnRep_ReplicatedTargetedActors
	// void OnRep_ReplicatedTargetedActors();                                                                                   // [0xb5ec810] Final|Native|Public  
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnRep_NevadaState
	// void OnRep_NevadaState(FNevadaState& PrevState);                                                                         // [0xb5ec770] Final|Native|Protected|HasOutParms 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnRebootStarted
	// void OnRebootStarted();                                                                                                  // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnRebootFinished
	// void OnRebootFinished();                                                                                                 // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnOutOfBattery
	// void OnOutOfBattery();                                                                                                   // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnNewVehicleState
	// void OnNewVehicleState(ENevadaFlightStates NewVehicleState);                                                             // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnCrashingStarted
	// void OnCrashingStarted();                                                                                                // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnCrashedImpact
	// void OnCrashedImpact();                                                                                                  // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnBoostStarted
	// void OnBoostStarted();                                                                                                   // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnBoostFinished
	// void OnBoostFinished();                                                                                                  // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnBoostChargeRefilled
	// void OnBoostChargeRefilled();                                                                                            // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnBatteryRegen
	// void OnBatteryRegen(float Newcharge);                                                                                    // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnAttachedActorDied
	// void OnAttachedActorDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0xb5ec30c] Final|Native|Public|HasDefaults 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnAttachedActorDestroyed
	// void OnAttachedActorDestroyed(class AActor* DestroyedActor);                                                             // [0xb5ec290] Final|Native|Public  
	// Function /Script/NevadaRuntime.FortNevadaVehicle.NativeToggleCockpit
	// void NativeToggleCockpit(bool bEnable);                                                                                  // [0xb5ec210] Final|Native|Public|BlueprintCallable 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.IsTractorBeamDisrupted
	// bool IsTractorBeamDisrupted();                                                                                           // [0xb5ec1a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.IsTractorBeamAttached
	// bool IsTractorBeamAttached();                                                                                            // [0xb5ec17c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.IsTractorBeamActive
	// bool IsTractorBeamActive();                                                                                              // [0xb5ec15c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.GetTractorBeamAttachLocation
	// FVector GetTractorBeamAttachLocation();                                                                                  // [0xb5ec0a4] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.GetNumRebootsAvailable
	// int32_t GetNumRebootsAvailable();                                                                                        // [0xb5ec08c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.GetEnergyCanonChargePercent
	// float GetEnergyCanonChargePercent();                                                                                     // [0xb5ec064] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.GetDriverSeatRotationAnimParams
	// void GetDriverSeatRotationAnimParams(float& OutLeftRight, float& OutForwardBack);                                        // [0xb5ebf88] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.GetCurrentVehicleState
	// ENevadaFlightStates GetCurrentVehicleState();                                                                            // [0xb5ebf70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.GetBoostChargeTimeRemaining
	// float GetBoostChargeTimeRemaining();                                                                                     // [0xb5ebf24] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.GetBoostChargesAvailable
	// int32_t GetBoostChargesAvailable();                                                                                      // [0xb5ebf58] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.GetBoostChargeProgress
	// float GetBoostChargeProgress();                                                                                          // [0xb5ebf04] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.GetBatteryCharge
	// float GetBatteryCharge();                                                                                                // [0xb5ebedc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.GetAudioController
	// class AFortNevadaAudioController* GetAudioController();                                                                  // [0xb5ebec4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.EnablePilotBubbleCollisionOnServer
	// void EnablePilotBubbleCollisionOnServer(bool bNewCollisionEnabled);                                                      // [0x5fe71f4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.DisruptTractorBeam
	// void DisruptTractorBeam();                                                                                               // [0xb5ebe70] Final|Native|Protected|BlueprintCallable 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.AddPhysicsImpulseToTractorBeamAttachedActor
	// void AddPhysicsImpulseToTractorBeamAttachedActor(FVector& Impulse, FName BoneName, bool bVelChange);                     // [0xb5ebbe8] Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/NevadaRuntime.FortNevadaVehicleAnimInstance
/// Size: 0x00E0 (0x000620 - 0x000700)
class UFortNevadaVehicleAnimInstance : public UFortVehicleAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1792;

public:
	CMember(class AFortNevadaVehicle*)                 NevadaVehicle                                               OFFSET(get<T>, {0x618, 8, 0, 0})
	DMember(bool)                                      bTractorBeam_IsAttached                                     OFFSET(get<bool>, {0x620, 1, 0, 0})
	DMember(bool)                                      bTractorBeam_IsCharging                                     OFFSET(get<bool>, {0x621, 1, 0, 0})
	DMember(bool)                                      bTractorBeam_IsActive                                       OFFSET(get<bool>, {0x622, 1, 0, 0})
	DMember(bool)                                      bTractorBeam_IsInactive                                     OFFSET(get<bool>, {0x623, 1, 0, 0})
	DMember(bool)                                      bTractorBeam_IsOn                                           OFFSET(get<bool>, {0x624, 1, 0, 0})
	DMember(bool)                                      bTractorBeam_HasTarget                                      OFFSET(get<bool>, {0x625, 1, 0, 0})
	DMember(bool)                                      bTractorBeam_ShouldApplyCustomAO                            OFFSET(get<bool>, {0x626, 1, 0, 0})
	DMember(float)                                     TractorBeam_LookAtPitch                                     OFFSET(get<float>, {0x628, 4, 0, 0})
	DMember(float)                                     TractorBeam_LookAtYaw                                       OFFSET(get<float>, {0x62C, 4, 0, 0})
	DMember(float)                                     LeanLeftRight                                               OFFSET(get<float>, {0x630, 4, 0, 0})
	DMember(float)                                     LeanForwardBackward                                         OFFSET(get<float>, {0x634, 4, 0, 0})
	DMember(float)                                     LeanValue                                                   OFFSET(get<float>, {0x638, 4, 0, 0})
	DMember(float)                                     PreviousLeanValue                                           OFFSET(get<float>, {0x63C, 4, 0, 0})
	DMember(float)                                     VelocityZValue                                              OFFSET(get<float>, {0x640, 4, 0, 0})
	DMember(float)                                     LeanDelta                                                   OFFSET(get<float>, {0x644, 4, 0, 0})
	DMember(bool)                                      bTurnAgain                                                  OFFSET(get<bool>, {0x648, 1, 0, 0})
	DMember(bool)                                      bHadDriver                                                  OFFSET(get<bool>, {0x649, 1, 0, 0})
	DMember(bool)                                      bJustGotDriver                                              OFFSET(get<bool>, {0x64A, 1, 0, 0})
	DMember(bool)                                      bJustLostDriver                                             OFFSET(get<bool>, {0x64B, 1, 0, 0})
	DMember(bool)                                      bWasBoosting                                                OFFSET(get<bool>, {0x64C, 1, 0, 0})
	DMember(bool)                                      bIsBoosting                                                 OFFSET(get<bool>, {0x64D, 1, 0, 0})
	DMember(int32_t)                                   PreviousBoostCount                                          OFFSET(get<int32_t>, {0x650, 4, 0, 0})
	DMember(int32_t)                                   BoostCount                                                  OFFSET(get<int32_t>, {0x654, 4, 0, 0})
	DMember(bool)                                      bIsBoostingAgain                                            OFFSET(get<bool>, {0x658, 1, 0, 0})
	DMember(bool)                                      bIsMoving                                                   OFFSET(get<bool>, {0x659, 1, 0, 0})
	DMember(float)                                     WingsPlayRate                                               OFFSET(get<float>, {0x65C, 4, 0, 0})
	DMember(float)                                     TractorBeamAlpha                                            OFFSET(get<float>, {0x660, 4, 0, 0})
	DMember(float)                                     AimPitch                                                    OFFSET(get<float>, {0x664, 4, 0, 0})
	DMember(float)                                     AimYaw                                                      OFFSET(get<float>, {0x668, 4, 0, 0})
	DMember(bool)                                      bIsFiringCannon                                             OFFSET(get<bool>, {0x66C, 1, 0, 0})
	DMember(float)                                     DistanceFromGround                                          OFFSET(get<float>, {0x670, 4, 0, 0})
	DMember(bool)                                      bIsLanding                                                  OFFSET(get<bool>, {0x674, 1, 0, 0})
	DMember(bool)                                      bHasLanded                                                  OFFSET(get<bool>, {0x675, 1, 0, 0})
	DMember(float)                                     LandingAlpha                                                OFFSET(get<float>, {0x678, 4, 0, 0})
	DMember(bool)                                      bNotLandingMode                                             OFFSET(get<bool>, {0x67C, 1, 0, 0})
	DMember(bool)                                      bHadBattery                                                 OFFSET(get<bool>, {0x67D, 1, 0, 0})
	DMember(bool)                                      bOutOfBattery                                               OFFSET(get<bool>, {0x67E, 1, 0, 0})
	DMember(bool)                                      bJustGotBattery                                             OFFSET(get<bool>, {0x67F, 1, 0, 0})
	DMember(bool)                                      bLaunchToDepart                                             OFFSET(get<bool>, {0x680, 1, 0, 0})
	DMember(bool)                                      bLaunchToIdle                                               OFFSET(get<bool>, {0x681, 1, 0, 0})
	DMember(bool)                                      bIsPartsLanding                                             OFFSET(get<bool>, {0x682, 1, 0, 0})
	SMember(FName)                                     TractorBeamSocketName                                       OFFSET(getStruct<T>, {0x684, 4, 0, 0})
	SMember(FName)                                     TractorBeamAimCurveName                                     OFFSET(getStruct<T>, {0x688, 4, 0, 0})
	SMember(FName)                                     NevadaVehicleInterruptName                                  OFFSET(getStruct<T>, {0x68C, 4, 0, 0})
	SMember(FName)                                     LandingTraceRightName                                       OFFSET(getStruct<T>, {0x690, 4, 0, 0})
	SMember(FName)                                     LandingTraceLeftName                                        OFFSET(getStruct<T>, {0x694, 4, 0, 0})
	DMember(float)                                     MaxLeanDeltaInterruptMagnitude                              OFFSET(get<float>, {0x698, 4, 0, 0})
	DMember(float)                                     MinForwardSpeedToBeMoving                                   OFFSET(get<float>, {0x69C, 4, 0, 0})
	DMember(float)                                     MinForwardSpeedToPlayWings                                  OFFSET(get<float>, {0x6A0, 4, 0, 0})
	DMember(float)                                     MinWingsPlayRate                                            OFFSET(get<float>, {0x6A4, 4, 0, 0})
	DMember(float)                                     MaxWingsPlayRate                                            OFFSET(get<float>, {0x6A8, 4, 0, 0})
	DMember(float)                                     WingsPlayRateInterpSpeed                                    OFFSET(get<float>, {0x6AC, 4, 0, 0})
	CMember(TWeakObjectPtr<UAnimMontage*>)             CannonFiringMontage                                         OFFSET(get<T>, {0x6B0, 32, 0, 0})
	DMember(float)                                     LandingGearTraceLength                                      OFFSET(get<float>, {0x6D0, 4, 0, 0})
};

/// Class /Script/NevadaRuntime.FortPlayerAnimInstance_NevadaDriver
/// Size: 0x0180 (0x001850 - 0x0019D0)
class UFortPlayerAnimInstance_NevadaDriver : public UFortPlayerAnimInstance_OctopusDriver
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6608;

public:
	CMember(class AFortNevadaVehicle*)                 NevadaVehicle                                               OFFSET(get<T>, {0x1850, 8, 0, 0})
	DMember(float)                                     AnimLeftRight                                               OFFSET(get<float>, {0x1858, 4, 0, 0})
	DMember(float)                                     AnimForwardBackward                                         OFFSET(get<float>, {0x185C, 4, 0, 0})
	SMember(FVector)                                   RootAttachmentLoc                                           OFFSET(getStruct<T>, {0x1860, 24, 0, 0})
	SMember(FRotator)                                  RootAttachmentRot                                           OFFSET(getStruct<T>, {0x1878, 24, 0, 0})
	DMember(int32_t)                                   BoostCount                                                  OFFSET(get<int32_t>, {0x1890, 4, 0, 0})
	DMember(int32_t)                                   PreviousBoostCount                                          OFFSET(get<int32_t>, {0x1894, 4, 0, 0})
	DMember(bool)                                      bIsBoostingAgain                                            OFFSET(get<bool>, {0x1898, 1, 0, 0})
	DMember(bool)                                      bIsMoving                                                   OFFSET(get<bool>, {0x1899, 1, 0, 0})
	DMember(float)                                     MinVehicleVelocityToBeMoving                                OFFSET(get<float>, {0x189C, 4, 0, 0})
	SMember(FName)                                     DriverSocketName                                            OFFSET(getStruct<T>, {0x18A0, 4, 0, 0})
	SMember(FName)                                     RightHandAttachmentSocketName                               OFFSET(getStruct<T>, {0x18A4, 4, 0, 0})
	SMember(FName)                                     LeftHandAttachmentSocketName                                OFFSET(getStruct<T>, {0x18A8, 4, 0, 0})
	SMember(FName)                                     RightFootAttachmentSocketName                               OFFSET(getStruct<T>, {0x18AC, 4, 0, 0})
	SMember(FName)                                     LeftFootAttachementSocketName                               OFFSET(getStruct<T>, {0x18B0, 4, 0, 0})
	SMember(FRotator)                                  RightHandRotationOffset                                     OFFSET(getStruct<T>, {0x18B8, 24, 0, 0})
	SMember(FRotator)                                  LeftHandRotationOffset                                      OFFSET(getStruct<T>, {0x18D0, 24, 0, 0})
	SMember(FRotator)                                  RightFootRotationOffset                                     OFFSET(getStruct<T>, {0x18E8, 24, 0, 0})
	SMember(FRotator)                                  LeftFootRotationOffset                                      OFFSET(getStruct<T>, {0x1900, 24, 0, 0})
	SMember(FVector)                                   RootAttachmentOffset                                        OFFSET(getStruct<T>, {0x1918, 24, 0, 0})
};

/// Class /Script/NevadaRuntime.FortCameraMode_Nevada
/// Size: 0x0070 (0x001BC0 - 0x001C30)
class UFortCameraMode_Nevada : public UFortCameraMode_AthenaVehicle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7216;

public:
	SMember(FVector)                                   TractorBeamCameraOffset                                     OFFSET(getStruct<T>, {0x1BE0, 24, 0, 0})
	DMember(float)                                     TractorBeamCameraLerpTime                                   OFFSET(get<float>, {0x1BF8, 4, 0, 0})
	DMember(float)                                     TractorBeamCameraExtraPitch                                 OFFSET(get<float>, {0x1BFC, 4, 0, 0})
	DMember(float)                                     TractorBeamInactiveCameraExtraPitch                         OFFSET(get<float>, {0x1C00, 4, 0, 0})
	DMember(float)                                     TractorBeamCameraPositionResetDelay                         OFFSET(get<float>, {0x1C04, 4, 0, 0})
	DMember(float)                                     MinPitchForOffset                                           OFFSET(get<float>, {0x1C08, 4, 0, 0})
	DMember(float)                                     MaxPitchForOffset                                           OFFSET(get<float>, {0x1C0C, 4, 0, 0})
	SMember(FVector)                                   ExtraOffset                                                 OFFSET(getStruct<T>, {0x1C10, 24, 0, 0})
};

/// Class /Script/NevadaRuntime.FortNevadaAudioController
/// Size: 0x00C8 (0x000290 - 0x000358)
class AFortNevadaAudioController : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 856;

public:
	SMember(FVector2D)                                 SpeedRangeMap                                               OFFSET(getStruct<T>, {0x290, 16, 0, 0})
	SMember(FVector2D)                                 TurningRangeMap                                             OFFSET(getStruct<T>, {0x2A0, 16, 0, 0})
	SMember(FVector2D)                                 AcceleratingRangeMap                                        OFFSET(getStruct<T>, {0x2B0, 16, 0, 0})
	SMember(FVector2D)                                 BrakingRangeMap                                             OFFSET(getStruct<T>, {0x2C0, 16, 0, 0})
	SMember(FVector2D)                                 PassByRangeMap                                              OFFSET(getStruct<T>, {0x2D0, 16, 0, 0})
	SMember(FVector2D)                                 LFORangeMap                                                 OFFSET(getStruct<T>, {0x2E0, 16, 0, 0})
	CMember(class AFortNevadaVehicle*)                 Vehicle                                                     OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UFortLayeredAudioComponent*)         LayeredAudioComponent                                       OFFSET(get<T>, {0x2F8, 8, 0, 0})
	DMember(float)                                     SpeedParamValue                                             OFFSET(get<float>, {0x300, 4, 0, 0})
	DMember(float)                                     SpeedParamValuePrev                                         OFFSET(get<float>, {0x304, 4, 0, 0})
	DMember(float)                                     AcceleratingParamValue                                      OFFSET(get<float>, {0x308, 4, 0, 0})
	DMember(float)                                     BrakingParamValue                                           OFFSET(get<float>, {0x30C, 4, 0, 0})
	SMember(FVector)                                   ForwardVector                                               OFFSET(getStruct<T>, {0x310, 24, 0, 0})
	SMember(FVector)                                   ForwardVectorPrev                                           OFFSET(getStruct<T>, {0x328, 24, 0, 0})
	DMember(float)                                     TurningParamValue                                           OFFSET(get<float>, {0x340, 4, 0, 0})
	DMember(float)                                     PassByParamValue                                            OFFSET(get<float>, {0x344, 4, 0, 0})
	DMember(float)                                     LocallyControlledParamValue                                 OFFSET(get<float>, {0x348, 4, 0, 0})
	DMember(float)                                     LFOParamValue                                               OFFSET(get<float>, {0x34C, 4, 0, 0})


	/// Functions
	// Function /Script/NevadaRuntime.FortNevadaAudioController.Update
	// void Update();                                                                                                           // [0xb5ecaa4] Final|Native|Public  
	// Function /Script/NevadaRuntime.FortNevadaAudioController.Init
	// void Init(class AFortNevadaVehicle* InVehicle);                                                                          // [0xb5ec0dc] Final|Native|Public  
	// Function /Script/NevadaRuntime.FortNevadaAudioController.GetVehicleActor
	// class AFortNevadaVehicle* GetVehicleActor();                                                                             // [0xa4f3c54] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NevadaRuntime.FortNevadaAudioController.CacheReferences
	// void CacheReferences(class UFortLayeredAudioComponent* InLayeredAudioComponent);                                         // [0xb5ebde4] Final|Native|Public|BlueprintCallable 
	// Function /Script/NevadaRuntime.FortNevadaAudioController.BP_Update
	// void BP_Update();                                                                                                        // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/NevadaRuntime.FortNevadaAudioController.BP_Init
	// void BP_Init();                                                                                                          // [0x2177018] Event|Public|BlueprintEvent 
};

/// Class /Script/NevadaRuntime.FortNevadaVehicleConfigs
/// Size: 0x04A8 (0x000950 - 0x000DF8)
class UFortNevadaVehicleConfigs : public UFortPhysicsVehicleConfigs
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3576;

public:
	SMember(FNevadaMoveModeConfig)                     BaseMovement                                                OFFSET(getStruct<T>, {0x950, 20, 0, 0})
	SMember(FNevadaMoveModeConfig)                     BoostMovement                                               OFFSET(getStruct<T>, {0x964, 20, 0, 0})
	SMember(FNevadaMoveModeConfig)                     ChargingMovement                                            OFFSET(getStruct<T>, {0x978, 20, 0, 0})
	SMember(FDampedSpringConfig)                       UprightSpringForce                                          OFFSET(getStruct<T>, {0x98C, 12, 0, 0})
	DMember(float)                                     DebaseLaunchspeed                                           OFFSET(get<float>, {0x998, 4, 0, 0})
	DMember(float)                                     MaxHeight                                                   OFFSET(get<float>, {0x99C, 4, 0, 0})
	DMember(float)                                     MinHeight                                                   OFFSET(get<float>, {0x9A0, 4, 0, 0})
	DMember(float)                                     OnEnterPitchAlpha                                           OFFSET(get<float>, {0x9A4, 4, 0, 0})
	DMember(float)                                     FallDamageHeightBuffer                                      OFFSET(get<float>, {0x9A8, 4, 0, 0})
	DMember(float)                                     TurningForce                                                OFFSET(get<float>, {0x9AC, 4, 0, 0})
	DMember(float)                                     ThrustRotationAlpha                                         OFFSET(get<float>, {0x9B0, 4, 0, 0})
	DMember(float)                                     PitchDrag                                                   OFFSET(get<float>, {0x9B4, 4, 0, 0})
	DMember(float)                                     YawDrag                                                     OFFSET(get<float>, {0x9B8, 4, 0, 0})
	DMember(float)                                     RollDrag                                                    OFFSET(get<float>, {0x9BC, 4, 0, 0})
	DMember(float)                                     BoostThrustDuration                                         OFFSET(get<float>, {0x9C0, 4, 0, 0})
	DMember(float)                                     BoostDragDuration                                           OFFSET(get<float>, {0x9C4, 4, 0, 0})
	DMember(int32_t)                                   NumBoostCharges                                             OFFSET(get<int32_t>, {0x9C8, 4, 0, 0})
	DMember(float)                                     BoostChargeDuration                                         OFFSET(get<float>, {0x9CC, 4, 0, 0})
	DMember(float)                                     BoostChargeDelay                                            OFFSET(get<float>, {0x9D0, 4, 0, 0})
	DMember(float)                                     BoostDragFinishSpeed                                        OFFSET(get<float>, {0x9D4, 4, 0, 0})
	DMember(float)                                     TractorBeamRadius                                           OFFSET(get<float>, {0x9D8, 4, 0, 0})
	DMember(float)                                     TractorBeamWithTargetRadius                                 OFFSET(get<float>, {0x9DC, 4, 0, 0})
	SMember(FScalableFloat)                            TractorBeamSweepLength                                      OFFSET(getStruct<T>, {0x9E0, 40, 0, 0})
	SMember(FScalableFloat)                            TractorBeamChargeTime                                       OFFSET(getStruct<T>, {0xA08, 40, 0, 0})
	SMember(FScalableFloat)                            TractorBeamDurationTime                                     OFFSET(getStruct<T>, {0xA30, 40, 0, 0})
	SMember(FScalableFloat)                            TractorBeamTossImpulseStrengthForward                       OFFSET(getStruct<T>, {0xA58, 40, 0, 0})
	SMember(FScalableFloat)                            TractorBeamTossImpulseStrengthUpward                        OFFSET(getStruct<T>, {0xA80, 40, 0, 0})
	DMember(float)                                     TractorBeamShutdownTime                                     OFFSET(get<float>, {0xAA8, 4, 0, 0})
	SMember(FScalableFloat)                            TractorBeamTurnOffDamage                                    OFFSET(getStruct<T>, {0xAB0, 40, 0, 0})
	SMember(FScalableFloat)                            AllowTractorBeamAIPawns                                     OFFSET(getStruct<T>, {0xAD8, 40, 0, 0})
	DMember(float)                                     TractorBeamBreakForceMagnitude                              OFFSET(get<float>, {0xB00, 4, 0, 0})
	SMember(FScalableFloat)                            TractorBeamActive                                           OFFSET(getStruct<T>, {0xB08, 40, 0, 0})
	SMember(FScalableFloat)                            TractorBeamCooldown                                         OFFSET(getStruct<T>, {0xB30, 40, 0, 0})
	SMember(FScalableFloat)                            TractorBeamDisruptionCooldown                               OFFSET(getStruct<T>, {0xB58, 40, 0, 0})
	SMember(FName)                                     TractorBeamSocket                                           OFFSET(getStruct<T>, {0xB80, 4, 0, 0})
	SMember(FVector)                                   TractorBeamAttachPositionOffset                             OFFSET(getStruct<T>, {0xB88, 24, 0, 0})
	SMember(FRigidBodyErrorCorrection)                 TractorBeamTargetOverridenErrorCorrection                   OFFSET(getStruct<T>, {0xBA0, 52, 0, 0})
	DMember(float)                                     VictimPitchDrag                                             OFFSET(get<float>, {0xBD4, 4, 0, 0})
	DMember(float)                                     VictimYawDrag                                               OFFSET(get<float>, {0xBD8, 4, 0, 0})
	DMember(float)                                     VictimRollDrag                                              OFFSET(get<float>, {0xBDC, 4, 0, 0})
	SMember(FDampedSpringConfig)                       TractorBeamVictimUprightForce                               OFFSET(getStruct<T>, {0xBE0, 12, 0, 0})
	DMember(int32_t)                                   NumReboots                                                  OFFSET(get<int32_t>, {0xBEC, 4, 0, 0})
	DMember(int32_t)                                   NumRebootsDefault                                           OFFSET(get<int32_t>, {0xBF0, 4, 0, 0})
	DMember(float)                                     MaxCrashingTime                                             OFFSET(get<float>, {0xBF4, 4, 0, 0})
	DMember(float)                                     MaxCrashingScrapingTime                                     OFFSET(get<float>, {0xBF8, 4, 0, 0})
	DMember(float)                                     MaxCrashingTimeSpentNotMoving                               OFFSET(get<float>, {0xBFC, 4, 0, 0})
	DMember(float)                                     SpeedThresholdForCrashed                                    OFFSET(get<float>, {0xC00, 4, 0, 0})
	SMember(FScalableFloat)                            RebootDuration                                              OFFSET(getStruct<T>, {0xC08, 40, 0, 0})
	SMember(FScalableFloat)                            RebootDelay                                                 OFFSET(getStruct<T>, {0xC30, 40, 0, 0})
	DMember(float)                                     LandingTraceRange                                           OFFSET(get<float>, {0xC58, 4, 0, 0})
	DMember(float)                                     DesiredLandingDistance                                      OFFSET(get<float>, {0xC5C, 4, 0, 0})
	DMember(float)                                     LandingDelay_Max                                            OFFSET(get<float>, {0xC60, 4, 0, 0})
	DMember(float)                                     LandingDelay_Min                                            OFFSET(get<float>, {0xC64, 4, 0, 0})
	DMember(float)                                     HeightForMinLandingDelay                                    OFFSET(get<float>, {0xC68, 4, 0, 0})
	DMember(float)                                     HeightForMaxLandingDelay                                    OFFSET(get<float>, {0xC6C, 4, 0, 0})
	DMember(float)                                     LandingPitchAlphaMax                                        OFFSET(get<float>, {0xC70, 4, 0, 0})
	DMember(float)                                     LandingPitchAlphaMin                                        OFFSET(get<float>, {0xC74, 4, 0, 0})
	DMember(float)                                     DriverSeatRotationAnimBlendSpeed                            OFFSET(get<float>, {0xC78, 4, 0, 0})
	DMember(float)                                     CrashingDesiredUpLerpFactor                                 OFFSET(get<float>, {0xC7C, 4, 0, 0})
	DMember(float)                                     CrashedLinearDrag                                           OFFSET(get<float>, {0xC80, 4, 0, 0})
	DMember(float)                                     LandedDragCoef                                              OFFSET(get<float>, {0xC84, 4, 0, 0})
	DMember(float)                                     LandedDragCoef2                                             OFFSET(get<float>, {0xC88, 4, 0, 0})
	DMember(float)                                     LandedMaxDragSpeed                                          OFFSET(get<float>, {0xC8C, 4, 0, 0})
	DMember(float)                                     CrashedAngularDragMultiplier                                OFFSET(get<float>, {0xC90, 4, 0, 0})
	DMember(float)                                     BoostFOV                                                    OFFSET(get<float>, {0xC94, 4, 0, 0})
	DMember(float)                                     ExtraTraceInteractRange                                     OFFSET(get<float>, {0xC98, 4, 0, 0})
	DMember(float)                                     AntiGravityMult                                             OFFSET(get<float>, {0xC9C, 4, 0, 0})
	DMember(float)                                     InitialLiftDuration                                         OFFSET(get<float>, {0xCA0, 4, 0, 0})
	SMember(FScalableFloat)                            BatteryCostDuringFlight                                     OFFSET(getStruct<T>, {0xCA8, 40, 0, 0})
	SMember(FScalableFloat)                            BatteryRegenDelay                                           OFFSET(getStruct<T>, {0xCD0, 40, 0, 0})
	SMember(FScalableFloat)                            BatteryRegenTickRate                                        OFFSET(getStruct<T>, {0xCF8, 40, 0, 0})
	SMember(FScalableFloat)                            BatteryRegenAmount                                          OFFSET(getStruct<T>, {0xD20, 40, 0, 0})
	SMember(FScalableFloat)                            MaxBattery                                                  OFFSET(getStruct<T>, {0xD48, 40, 0, 0})
	SMember(FScalableFloat)                            MinBatteryForFlight                                         OFFSET(getStruct<T>, {0xD70, 40, 0, 0})
	CMember(TArray<FName>)                             CockpitShapeNames                                           OFFSET(get<T>, {0xD98, 16, 0, 0})
	SMember(FScalableFloat)                            CockpitDamageMult                                           OFFSET(getStruct<T>, {0xDA8, 40, 0, 0})
	SMember(FScalableFloat)                            CockpitHealth                                               OFFSET(getStruct<T>, {0xDD0, 40, 0, 0})
};

/// Struct /Script/NevadaRuntime.NevadaAudioUpdateContext
/// Size: 0x0001 (0x000000 - 0x000001)
class FNevadaAudioUpdateContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/NevadaRuntime.NevadaOutContinuous
/// Size: 0x0008 (0x000050 - 0x000058)
class FNevadaOutContinuous : public FFortVehicleOutContinuous
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(float)                                     AltimeterTraceHitDistance                                   OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     TractorBeamAppliedForceMagnitude                            OFFSET(get<float>, {0x54, 4, 0, 0})
};

/// Struct /Script/NevadaRuntime.NevadaOutPersistent
/// Size: 0x0428 (0x000028 - 0x000450)
class FNevadaOutPersistent : public FFortVehicleOutPersistent
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1104;

public:
};

/// Struct /Script/NevadaRuntime.NevadaState
/// Size: 0x0014 (0x000000 - 0x000014)
class FNevadaState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	CMember(ENevadaFlightStates)                       CurrentStatus                                               OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   LivesRemaining                                              OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(bool)                                      bHijackingActive                                            OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      bPilotBubbleCollisionEnabled                                OFFSET(get<bool>, {0x9, 1, 0, 0})
	DMember(float)                                     CurrentBatteryCharge                                        OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      bCannonEnabled                                              OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(bool)                                      bTractorBeamEnabled                                         OFFSET(get<bool>, {0x11, 1, 0, 0})
};

/// Struct /Script/NevadaRuntime.NevadaMoveModeConfig
/// Size: 0x0014 (0x000000 - 0x000014)
class FNevadaMoveModeConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(float)                                     ThrustForce                                                 OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     LiftForce                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MaxHorizontalSpeed                                          OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MaxVerticalSpeed                                            OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     DragForceMultiplier                                         OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/NevadaRuntime.DampedSpringConfig
/// Size: 0x000C (0x000000 - 0x00000C)
class FDampedSpringConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     Stiffness                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Damping                                                     OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MaxAccel                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/NevadaRuntime.NevadaInPersistent
/// Size: 0x0110 (0x0001A0 - 0x0002B0)
class FNevadaInPersistent : public FFortVehicleInPersistent
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
	CMember(class UFortNevadaVehicleConfigs*)          FortNevadaVehicleConfigs                                    OFFSET(get<T>, {0x1A0, 8, 0, 0})
	DMember(bool)                                      bBoostThrust                                                OFFSET(get<bool>, {0x1A8, 1, 0, 0})
	DMember(bool)                                      bBoostDrag                                                  OFFSET(get<bool>, {0x1A9, 1, 0, 0})
	DMember(float)                                     TractorBeamExtraLengthForExtents                            OFFSET(get<float>, {0x1AC, 4, 0, 0})
	DMember(bool)                                      bUseTractorBeamUprightForce                                 OFFSET(get<bool>, {0x1B0, 1, 0, 0})
	SMember(FVector)                                   CrashingDesiredUp                                           OFFSET(getStruct<T>, {0x1B8, 24, 0, 0})
	CMember(ENevadaFlightStates)                       CurrentVehicleState                                         OFFSET(get<T>, {0x1D0, 1, 0, 0})
};

/// Enum /Script/NevadaRuntime.ETractorBeamState
/// Size: 0x04
enum ETractorBeamState : uint8_t
{
	TBS_Inactive                                                                     = 0,
	TBS_Charging                                                                     = 1,
	TBS_Active                                                                       = 2,
	TBS_MAX                                                                          = 3
};

/// Enum /Script/NevadaRuntime.ENevadaFlightStates
/// Size: 0x09
enum ENevadaFlightStates : uint8_t
{
	ENevadaFlightStates__FLIGHT                                                      = 0,
	ENevadaFlightStates__CRASHING                                                    = 1,
	ENevadaFlightStates__CRASHED                                                     = 2,
	ENevadaFlightStates__REBOOTING                                                   = 3,
	ENevadaFlightStates__LANDING                                                     = 4,
	ENevadaFlightStates__LANDED                                                      = 5,
	ENevadaFlightStates__IDLE                                                        = 6,
	ENevadaFlightStates__NONE                                                        = 7,
	ENevadaFlightStates__ENevadaFlightStates_MAX                                     = 8
};

