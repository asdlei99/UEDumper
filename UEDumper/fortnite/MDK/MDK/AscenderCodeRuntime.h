
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteAI
/// dependency: FortniteGame
/// dependency: GameplayAbilities

/// Class /Script/AscenderCodeRuntime.FortCheatManager_AscenderZipline
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortCheatManager_AscenderZipline : public UChildCheatManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AscenderCodeRuntime.FortCheatManager_AscenderZipline.RemoveAscenders
	// void RemoveAscenders(bool bRemoveAscendersOn);                                                                           // [0x5d6b308] Final|Exec|Native|Public 
};

/// Class /Script/AscenderCodeRuntime.FortAscenderZipline
/// Size: 0x0358 (0x000C98 - 0x000FF0)
class AFortAscenderZipline : public AFortAthenaSplineZipline
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4080;

public:
	SMember(FMulticastInlineDelegate)                  OnAscenderSetupComplete                                     OFFSET(getStruct<T>, {0xC98, 16, 0, 0})
	SMember(FName)                                     SplineTopAttachPointName                                    OFFSET(getStruct<T>, {0xCA8, 4, 0, 0})
	DMember(bool)                                      bAutoFindSplineEndLocation                                  OFFSET(get<bool>, {0xCAC, 1, 0, 0})
	DMember(float)                                     SplineOffsetFromGround                                      OFFSET(get<float>, {0xCB0, 4, 0, 0})
	DMember(float)                                     CableOffsetFromSplineEnd                                    OFFSET(get<float>, {0xCB4, 4, 0, 0})
	DMember(float)                                     SplineLength                                                OFFSET(get<float>, {0xCB8, 4, 0, 0})
	CMember(class UStaticMesh*)                        SplineStaticMesh                                            OFFSET(get<T>, {0xCC0, 8, 0, 0})
	CMember(TEnumAsByte<ESplineMeshAxis>)              MeshForwardAxis                                             OFFSET(get<T>, {0xCC8, 1, 0, 0})
	DMember(bool)                                      bHandleReturning                                            OFFSET(get<bool>, {0xCC9, 1, 0, 0})
	DMember(float)                                     HandleReturnSpeed                                           OFFSET(get<float>, {0xCCC, 4, 0, 0})
	DMember(bool)                                      bCableDropping                                              OFFSET(get<bool>, {0xCD0, 1, 0, 0})
	DMember(float)                                     CableDropSpeed                                              OFFSET(get<float>, {0xCD4, 4, 0, 0})
	DMember(float)                                     YawRotationOffsetWhileUsingHandle                           OFFSET(get<float>, {0xCD8, 4, 0, 0})
	DMember(float)                                     YawRotationOffsetWhileSlidingDown                           OFFSET(get<float>, {0xCDC, 4, 0, 0})
	DMember(bool)                                      bUseComplexSplineCollision                                  OFFSET(get<bool>, {0xCE0, 1, 0, 0})
	DMember(float)                                     SimpleSplineCollisionRadius                                 OFFSET(get<float>, {0xCE4, 4, 0, 0})
	DMember(float)                                     SimpleSplineCollisionHeightExtension                        OFFSET(get<float>, {0xCE8, 4, 0, 0})
	SMember(FScalableFloat)                            DescendMinDistanceFromBottom                                OFFSET(getStruct<T>, {0xCF0, 40, 0, 0})
	SMember(FScalableFloat)                            AscendReachedEndHorizontalLaunchSpeed                       OFFSET(getStruct<T>, {0xD18, 40, 0, 0})
	SMember(FScalableFloat)                            AscendReachedEndVerticalLaunchSpeed                         OFFSET(getStruct<T>, {0xD40, 40, 0, 0})
	SMember(FScalableFloat)                            AscendJumpedOffHorizontalLaunchSpeed                        OFFSET(getStruct<T>, {0xD68, 40, 0, 0})
	SMember(FScalableFloat)                            AscendJumpedOffVerticalLaunchSpeed                          OFFSET(getStruct<T>, {0xD90, 40, 0, 0})
	SMember(FScalableFloat)                            DescendReachedEndHorizontalLaunchSpeed                      OFFSET(getStruct<T>, {0xDB8, 40, 0, 0})
	SMember(FScalableFloat)                            DescendReachedEndVerticalLaunchSpeed                        OFFSET(getStruct<T>, {0xDE0, 40, 0, 0})
	SMember(FScalableFloat)                            DescendJumpedOffHorizontalLaunchSpeed                       OFFSET(getStruct<T>, {0xE08, 40, 0, 0})
	SMember(FScalableFloat)                            DescendJumpedOffVerticalLaunchSpeed                         OFFSET(getStruct<T>, {0xE30, 40, 0, 0})
	SMember(FScalableFloat)                            HandleActorHitPlayerHorizontalLaunchSpeed                   OFFSET(getStruct<T>, {0xE58, 40, 0, 0})
	SMember(FScalableFloat)                            HandleActorHitPlayerVerticalLaunchSpeed                     OFFSET(getStruct<T>, {0xE80, 40, 0, 0})
	SMember(FVector)                                   HandleDestroyBuildingsOverlapExtents                        OFFSET(getStruct<T>, {0xEA8, 24, 0, 0})
	SMember(FVector)                                   PlayerDestroyBuildingsOverlapExtents                        OFFSET(getStruct<T>, {0xEC0, 24, 0, 0})
	SMember(FVector)                                   InitialSplineEndLocation                                    OFFSET(getStruct<T>, {0xED8, 24, 0, 0})
	SMember(FVector)                                   CurrentSplineEndLocation                                    OFFSET(getStruct<T>, {0xEF0, 24, 0, 0})
	SMember(FVector)                                   TargetSplineEndLocation                                     OFFSET(getStruct<T>, {0xF08, 24, 0, 0})
	SMember(FVector)                                   CurrentHandleLocation                                       OFFSET(getStruct<T>, {0xF20, 24, 0, 0})
	CMember(TWeakObjectPtr<UPrimitiveComponent*>)      CurrentInteractComponent                                    OFFSET(get<T>, {0xF38, 8, 0, 0})
	CMember(TWeakObjectPtr<AFortPlayerPawn*>)          PawnUsingHandle                                             OFFSET(get<T>, {0xF40, 8, 0, 0})
	CMember(TWeakObjectPtr<AFortPlayerPawn*>)          PreviousPawnUsingHandle                                     OFFSET(get<T>, {0xF48, 8, 0, 0})
	CMember(class USplineMeshComponent*)               SplineMesh                                                  OFFSET(get<T>, {0xF50, 8, 0, 0})
	CMember(class UCapsuleComponent*)                  SimpleSplineMeshCollision                                   OFFSET(get<T>, {0xF58, 8, 0, 0})
	CMember(TWeakObjectPtr<ABuildingActor*>)           FloorActor                                                  OFFSET(get<T>, {0xF60, 8, 0, 0})
	CMember(TArray<TWeakObjectPtr<AFortPlayerPawn*>>)  RotationLockedPawns                                         OFFSET(get<T>, {0xF68, 16, 0, 0})
	CMember(class UFortLinkToActorComponent*)          LinkToActorComponent                                        OFFSET(get<T>, {0xFE0, 8, 0, 0})
	CMember(class UFortZiplineLinkComponent*)          ZiplineLinkComponent                                        OFFSET(get<T>, {0xFE8, 8, 0, 0})


	/// Functions
	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.SetupAscender
	// void SetupAscender(bool bFromConstruction, bool bFromReplication);                                                       // [0x3998cb8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.OnRep_TargetSplineEndLocation
	// void OnRep_TargetSplineEndLocation();                                                                                    // [0x372df2c] Final|Native|Protected 
	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.OnRep_PawnUsingHandle
	// void OnRep_PawnUsingHandle();                                                                                            // [0xaa7f174] Final|Native|Protected 
	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.OnRep_InitialSplineEndLocation
	// void OnRep_InitialSplineEndLocation();                                                                                   // [0x2fbf134] Final|Native|Protected 
	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.HandlePawnUsingHandleDied
	// void HandlePawnUsingHandleDied(class AFortPawn* DeadPawn);                                                               // [0xaa7f0b4] Final|Native|Protected 
	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.HandleFloorActorHealthChanged
	// void HandleFloorActorHealthChanged();                                                                                    // [0xaa7f0a0] Final|Native|Protected 
	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.HandleFloorActorDestroyed
	// void HandleFloorActorDestroyed(class AActor* Actor);                                                                     // [0xaa7efe0] Final|Native|Protected 
	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.GetTopComponent
	// class UPrimitiveComponent* GetTopComponent();                                                                            // [0x130d900] Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.GetPawnUsingHandle
	// class AFortPlayerPawn* GetPawnUsingHandle();                                                                             // [0xaa7efb8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.GetInteractComponentOverride
	// class UPrimitiveComponent* GetInteractComponentOverride(class AFortPlayerPawn* InteractingPawn, class UPrimitiveComponent* InteractComponent); // [0xaa7ee60] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.GetHandleComponent
	// class UPrimitiveComponent* GetHandleComponent();                                                                         // [0x130d900] Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.BP_HandleUpdatedLoweringHandle
	// void BP_HandleUpdatedLoweringHandle();                                                                                   // [0x130d900] Event|Public|BlueprintEvent 
	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.BP_HandleUpdatedLoweringCable
	// void BP_HandleUpdatedLoweringCable();                                                                                    // [0x130d900] Event|Public|BlueprintEvent 
	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.BP_HandleStoppedLoweringHandle
	// void BP_HandleStoppedLoweringHandle();                                                                                   // [0x130d900] Event|Public|BlueprintEvent 
	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.BP_HandleStoppedLoweringCable
	// void BP_HandleStoppedLoweringCable();                                                                                    // [0x130d900] Event|Public|BlueprintEvent 
	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.BP_HandleStartedLoweringHandle
	// void BP_HandleStartedLoweringHandle();                                                                                   // [0x130d900] Event|Public|BlueprintEvent 
	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.BP_HandleStartedLoweringCable
	// void BP_HandleStartedLoweringCable();                                                                                    // [0x130d900] Event|Public|BlueprintEvent 
	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.BP_HandlePlayerStoppedUsingHandle
	// void BP_HandlePlayerStoppedUsingHandle(class AFortPlayerPawn* Player);                                                   // [0x130d900] Event|Public|BlueprintEvent 
	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.BP_HandlePlayerStartedUsingHandle
	// void BP_HandlePlayerStartedUsingHandle(class AFortPlayerPawn* Player);                                                   // [0x130d900] Event|Public|BlueprintEvent 
	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.ApplyStructureDamage
	// void ApplyStructureDamage(class ABuildingSMActor* BuildingActor, class AActor* DamageSource);                            // [0x130d900] Event|Public|BlueprintCallable|BlueprintEvent|Const 
};

