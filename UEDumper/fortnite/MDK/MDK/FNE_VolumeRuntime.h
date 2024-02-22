
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: PlayspaceSystem

/// Class /Script/FNE_VolumeRuntime.FNE_Volume
/// Size: 0x0000 (0x000330 - 0x000330)
class AFNE_Volume : public AGameplayVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
};

/// Class /Script/FNE_VolumeRuntime.FNE_VolumeComponent
/// Size: 0x00A0 (0x000270 - 0x000310)
class UFNE_VolumeComponent : public UChildActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	SMember(FMulticastInlineDelegate)                  OnPlayerStateBeginOverlap                                   OFFSET(getStruct<T>, {0x270, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPlayerStateEndOverlap                                     OFFSET(getStruct<T>, {0x280, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnOtherActorBeginOverlap                                    OFFSET(getStruct<T>, {0x290, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnOtherActorEndOverlap                                      OFFSET(getStruct<T>, {0x2A0, 16, 0, 0})
	DMember(bool)                                      bEnableOverlap                                              OFFSET(get<bool>, {0x2B0, 1, 0, 0})
	CMember(TMap<EFNEVolumeShapeTypeEnum, UStaticMesh*>) FNEVolumeShapeMap                                         OFFSET(get<T>, {0x2B8, 80, 0, 0})
	CMember(class USpatialGameplayActorTrackerComponent*) SpatialGameplayActorTracker                              OFFSET(get<T>, {0x308, 8, 0, 0})


	/// Functions
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.UpdateOverLapShape
	// void UpdateOverLapShape(EFNEVolumeShapeTypeEnum EShape, bool bUseCustomShape, class UStaticMesh* CustomShape);           // [0xb81de78] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.UnBindFromOnOtherActorEndOverlap
	// void UnBindFromOnOtherActorEndOverlap(FDelegateProperty& InEvent);                                                       // [0xb81dd30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.UnBindFromOnOtherActorBeginOverlap
	// void UnBindFromOnOtherActorBeginOverlap(FDelegateProperty& InEvent);                                                     // [0xb81dbe8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.SetStaticMeshForBoundsComponent
	// bool SetStaticMeshForBoundsComponent(class UStaticMesh* NewMesh);                                                        // [0xb81d908] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.SetRelativeScale3DForBoundsComponent
	// void SetRelativeScale3DForBoundsComponent(FVector& Scale3D);                                                             // [0xb81d780] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.SetEnableOverlap
	// void SetEnableOverlap(bool bEnable);                                                                                     // [0xb81d680] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.HandleNotifyPlayerStateEndOverlap
	// void HandleNotifyPlayerStateEndOverlap(class APlayerState* TouchingPlayerState, class AGameplayVolume* Volume);          // [0xb81d0a4] Final|Native|Protected 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.HandleNotifyPlayerStateBeginOverlap
	// void HandleNotifyPlayerStateBeginOverlap(class APlayerState* TouchingPlayerState, class AGameplayVolume* Volume);        // [0xb81cfe0] Final|Native|Protected 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.HandleNotifyActorEndOverlap
	// void HandleNotifyActorEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor);                               // [0xb81cf1c] Final|Native|Private 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.HandleNotifyActorBeginOverlap
	// void HandleNotifyActorBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor);                             // [0xb81ce58] Final|Native|Private 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.GetSpawnedVolumeBoundsComponent
	// class UOverlapComponent* GetSpawnedVolumeBoundsComponent();                                                              // [0xb81ce34] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.GetSpawnedVolume
	// class AFNE_Volume* GetSpawnedVolume();                                                                                   // [0xb81ce10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.GetEnableOverlap
	// bool GetEnableOverlap();                                                                                                 // [0xb81cde0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.GetAllTrackedActors
	// TArray<AActor*> GetAllTrackedActors();                                                                                   // [0xb81cd60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.GetAllPlayerStates
	// TArray<APlayerState*> GetAllPlayerStates();                                                                              // [0xb81cce0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.GetAllPlayerPawns
	// TArray<APawn*> GetAllPlayerPawns();                                                                                      // [0xb81cc68] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.BindToOnOtherActorEndOverlap
	// bool BindToOnOtherActorEndOverlap(FDelegateProperty& InEvent);                                                           // [0xb81caf4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.BindToOnOtherActorBeginOverlap
	// bool BindToOnOtherActorBeginOverlap(FDelegateProperty& InEvent);                                                         // [0xb81c994] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent
/// Size: 0x0130 (0x0005C0 - 0x0006F0)
class UFNE_VolumeOverlapComponent : public UStaticMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1776;

public:
	SMember(FMulticastInlineDelegate)                  OnPlayerStateBeginOverlap                                   OFFSET(getStruct<T>, {0x5C0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPlayerStateEndOverlap                                     OFFSET(getStruct<T>, {0x5D0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnOtherActorBeginOverlap                                    OFFSET(getStruct<T>, {0x5E0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnOtherActorEndOverlap                                      OFFSET(getStruct<T>, {0x5F0, 16, 0, 0})
	DMember(bool)                                      bEnableOverlap                                              OFFSET(get<bool>, {0x600, 1, 0, 0})
	CMember(TMap<EFNEVolumeShapeTypeEnum, UStaticMesh*>) FNEVolumeShapeMap                                         OFFSET(get<T>, {0x608, 80, 0, 0})
	CMember(EFNEVolumeShapeTypeEnum)                   SceneQueryShape                                             OFFSET(get<T>, {0x658, 1, 0, 0})
	CMember(TArray<TEnumAsByte<EObjectTypeQuery>>)     SceneQueryObjectTypes                                       OFFSET(get<T>, {0x660, 16, 0, 0})
	CMember(TWeakObjectPtr<AFortMinigame*>)            CachedMinigame                                              OFFSET(get<T>, {0x690, 8, 0, 0})


	/// Functions
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.UpdateOverLapShape
	// void UpdateOverLapShape(EFNEVolumeShapeTypeEnum EShape, bool bUseCustomShape, class UStaticMesh* CustomShape);           // [0xb81df80] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.UnBindFromOnOtherActorEndOverlap
	// void UnBindFromOnOtherActorEndOverlap(FDelegateProperty& InEvent);                                                       // [0xb81ddd4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.UnBindFromOnOtherActorBeginOverlap
	// void UnBindFromOnOtherActorBeginOverlap(FDelegateProperty& InEvent);                                                     // [0xb81dc8c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.ShouldAllowOverlapEventToFire
	// bool ShouldAllowOverlapEventToFire(class AActor* OverlapActor);                                                          // [0xb81db54] Native|Event|Public|BlueprintEvent 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.SetVolumeMaterial
	// void SetVolumeMaterial(TWeakObjectPtr<UMaterialInterface*> MaterialToLoad, int32_t ElementIndex);                        // [0xb81da28] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.SetStaticMeshForBoundsComponent
	// bool SetStaticMeshForBoundsComponent(class UStaticMesh* NewMesh);                                                        // [0xb81d998] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.SetRelativeScale3DForBoundsComponent
	// void SetRelativeScale3DForBoundsComponent(FVector& Scale3D);                                                             // [0xb81d844] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.SetEnableOverlap
	// void SetEnableOverlap(bool bEnable);                                                                                     // [0xb81d700] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.OnMinigameStarted
	// void OnMinigameStarted();                                                                                                // [0xb81d66c] Final|Native|Protected 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.OnMinigameRoundEnded
	// void OnMinigameRoundEnded(class AFortPlayerController* Instigator, EFortMinigameEnd EndMethod, EFortMinigameState NextState); // [0xb81d574] Final|Native|Protected 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.OnMinigameEnded
	// void OnMinigameEnded();                                                                                                  // [0xb81d560] Final|Native|Protected 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.OnEndActorOverlap
	// void OnEndActorOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0xb81d434] Final|Native|Private 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.OnBeginActorOverlap
	// void OnBeginActorOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0xb81d22c] Final|Native|Private|HasOutParms 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.HandleTrackedActorEndPlay
	// void HandleTrackedActorEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);                          // [0xb81d168] Final|Native|Private 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.GetEnableOverlap
	// bool GetEnableOverlap();                                                                                                 // [0xb81cdf8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.GetAllTrackedActors
	// TArray<AActor*> GetAllTrackedActors();                                                                                   // [0xb81cda0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.GetAllPlayerStates
	// TArray<APlayerState*> GetAllPlayerStates();                                                                              // [0xb81cd20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.GetAllPlayerPawns
	// TArray<APawn*> GetAllPlayerPawns();                                                                                      // [0xb81cca4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.CheckCollidingActorsSceneQuery
	// void CheckCollidingActorsSceneQuery();                                                                                   // [0xb81cc54] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.BindToOnOtherActorEndOverlap
	// bool BindToOnOtherActorEndOverlap(FDelegateProperty& InEvent);                                                           // [0xb81cba4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.BindToOnOtherActorBeginOverlap
	// bool BindToOnOtherActorBeginOverlap(FDelegateProperty& InEvent);                                                         // [0xb81ca44] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.ActorExitVolume
	// void ActorExitVolume(class AActor* LeavingActor);                                                                        // [0xb81c914] Final|Native|Private 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.ActorEnteredVolume
	// void ActorEnteredVolume(class AActor* EnteringActor);                                                                    // [0xb81c894] Final|Native|Private 
};

/// Enum /Script/FNE_VolumeRuntime.EFNEVolumeShapeTypeEnum
/// Size: 0x05
enum EFNEVolumeShapeTypeEnum : uint8_t
{
	EFNEVolumeShapeTypeEnum__BoxVolume                                               = 0,
	EFNEVolumeShapeTypeEnum__CylinderVolume                                          = 1,
	EFNEVolumeShapeTypeEnum__SphereVolume                                            = 2,
	EFNEVolumeShapeTypeEnum__CustomVolume                                            = 3,
	EFNEVolumeShapeTypeEnum__EFNEVolumeShapeTypeEnum_MAX                             = 4
};

