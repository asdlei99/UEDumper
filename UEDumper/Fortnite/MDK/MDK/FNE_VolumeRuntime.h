
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
/// Size: 0x00A0 (0x0002E0 - 0x000380)
class UFNE_VolumeComponent : public UChildActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	SMember(FMulticastInlineDelegate)                  OnPlayerStateBeginOverlap                                   OFFSET(getStruct<T>, {0x2E0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPlayerStateEndOverlap                                     OFFSET(getStruct<T>, {0x2F0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnOtherActorBeginOverlap                                    OFFSET(getStruct<T>, {0x300, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnOtherActorEndOverlap                                      OFFSET(getStruct<T>, {0x310, 16, 0, 0})
	DMember(bool)                                      bEnableOverlap                                              OFFSET(get<bool>, {0x320, 1, 0, 0})
	CMember(TMap<EFNEVolumeShapeTypeEnum, UStaticMesh*>) FNEVolumeShapeMap                                         OFFSET(get<T>, {0x328, 80, 0, 0})
	CMember(class USpatialGameplayActorTrackerComponent*) SpatialGameplayActorTracker                              OFFSET(get<T>, {0x378, 8, 0, 0})


	/// Functions
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.UpdateOverLapShape
	// void UpdateOverLapShape(EFNEVolumeShapeTypeEnum EShape, bool bUseCustomShape, class UStaticMesh* CustomShape);           // [0xb485c78] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.UnBindFromOnOtherActorEndOverlap
	// void UnBindFromOnOtherActorEndOverlap(FDelegateProperty& InEvent);                                                       // [0xb485b30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.UnBindFromOnOtherActorBeginOverlap
	// void UnBindFromOnOtherActorBeginOverlap(FDelegateProperty& InEvent);                                                     // [0xb4859e8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.SetStaticMeshForBoundsComponent
	// bool SetStaticMeshForBoundsComponent(class UStaticMesh* NewMesh);                                                        // [0xb4858c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.SetRelativeScale3DForBoundsComponent
	// void SetRelativeScale3DForBoundsComponent(FVector& Scale3D);                                                             // [0xb485740] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.SetEnableOverlap
	// void SetEnableOverlap(bool bEnable);                                                                                     // [0xb485640] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.HandleNotifyPlayerStateEndOverlap
	// void HandleNotifyPlayerStateEndOverlap(class APlayerState* TouchingPlayerState, class AGameplayVolume* Volume);          // [0xb48518c] Final|Native|Protected 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.HandleNotifyPlayerStateBeginOverlap
	// void HandleNotifyPlayerStateBeginOverlap(class APlayerState* TouchingPlayerState, class AGameplayVolume* Volume);        // [0xb4850c8] Final|Native|Protected 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.HandleNotifyActorEndOverlap
	// void HandleNotifyActorEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor);                               // [0xb485004] Final|Native|Private 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.HandleNotifyActorBeginOverlap
	// void HandleNotifyActorBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor);                             // [0xb484f40] Final|Native|Private 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.GetSpawnedVolumeBoundsComponent
	// class UOverlapComponent* GetSpawnedVolumeBoundsComponent();                                                              // [0xb484f1c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.GetSpawnedVolume
	// class AFNE_Volume* GetSpawnedVolume();                                                                                   // [0xb484ef8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.GetEnableOverlap
	// bool GetEnableOverlap();                                                                                                 // [0xb484ec8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.GetAllTrackedActors
	// TArray<AActor*> GetAllTrackedActors();                                                                                   // [0xb484e48] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.GetAllPlayerStates
	// TArray<APlayerState*> GetAllPlayerStates();                                                                              // [0xb484dc8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.GetAllPlayerPawns
	// TArray<APawn*> GetAllPlayerPawns();                                                                                      // [0xb484d50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.BindToOnOtherActorEndOverlap
	// bool BindToOnOtherActorEndOverlap(FDelegateProperty& InEvent);                                                           // [0xb484bf0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.BindToOnOtherActorBeginOverlap
	// bool BindToOnOtherActorBeginOverlap(FDelegateProperty& InEvent);                                                         // [0xb484a90] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent
/// Size: 0x0100 (0x000630 - 0x000730)
class UFNE_VolumeOverlapComponent : public UStaticMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
	SMember(FMulticastInlineDelegate)                  OnPlayerStateBeginOverlap                                   OFFSET(getStruct<T>, {0x630, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPlayerStateEndOverlap                                     OFFSET(getStruct<T>, {0x640, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnOtherActorBeginOverlap                                    OFFSET(getStruct<T>, {0x650, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnOtherActorEndOverlap                                      OFFSET(getStruct<T>, {0x660, 16, 0, 0})
	DMember(bool)                                      bEnableOverlap                                              OFFSET(get<bool>, {0x670, 1, 0, 0})
	CMember(TMap<EFNEVolumeShapeTypeEnum, UStaticMesh*>) FNEVolumeShapeMap                                         OFFSET(get<T>, {0x678, 80, 0, 0})
	CMember(EFNEVolumeShapeTypeEnum)                   SceneQueryShape                                             OFFSET(get<T>, {0x6C8, 1, 0, 0})
	CMember(TArray<TEnumAsByte<EObjectTypeQuery>>)     SceneQueryObjectTypes                                       OFFSET(get<T>, {0x6D0, 16, 0, 0})


	/// Functions
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.UpdateOverLapShape
	// void UpdateOverLapShape(EFNEVolumeShapeTypeEnum EShape, bool bUseCustomShape, class UStaticMesh* CustomShape);           // [0xb485d80] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.UnBindFromOnOtherActorEndOverlap
	// void UnBindFromOnOtherActorEndOverlap(FDelegateProperty& InEvent);                                                       // [0xb485bd4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.UnBindFromOnOtherActorBeginOverlap
	// void UnBindFromOnOtherActorBeginOverlap(FDelegateProperty& InEvent);                                                     // [0xb485a8c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.SetStaticMeshForBoundsComponent
	// bool SetStaticMeshForBoundsComponent(class UStaticMesh* NewMesh);                                                        // [0xb485958] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.SetRelativeScale3DForBoundsComponent
	// void SetRelativeScale3DForBoundsComponent(FVector& Scale3D);                                                             // [0xb485804] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.SetEnableOverlap
	// void SetEnableOverlap(bool bEnable);                                                                                     // [0xb4856c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.OnEndActorOverlap
	// void OnEndActorOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0xb485514] Final|Native|Private 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.OnBeginActorOverlap
	// void OnBeginActorOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0xb485314] Final|Native|Private|HasOutParms 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.HandleTrackedActorEndPlay
	// void HandleTrackedActorEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);                          // [0xb485250] Final|Native|Private 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.GetEnableOverlap
	// bool GetEnableOverlap();                                                                                                 // [0xb484ee0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.GetAllTrackedActors
	// TArray<AActor*> GetAllTrackedActors();                                                                                   // [0xb484e88] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.GetAllPlayerStates
	// TArray<APlayerState*> GetAllPlayerStates();                                                                              // [0xb484e08] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.GetAllPlayerPawns
	// TArray<APawn*> GetAllPlayerPawns();                                                                                      // [0xb484d8c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.BindToOnOtherActorEndOverlap
	// bool BindToOnOtherActorEndOverlap(FDelegateProperty& InEvent);                                                           // [0xb484ca0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.BindToOnOtherActorBeginOverlap
	// bool BindToOnOtherActorBeginOverlap(FDelegateProperty& InEvent);                                                         // [0xb484b40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.ActorExitVolume
	// void ActorExitVolume(class AActor* LeavingActor);                                                                        // [0xb484a10] Final|Native|Private 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.ActorEnteredVolume
	// void ActorEnteredVolume(class AActor* EnteringActor);                                                                    // [0xb484990] Final|Native|Private 
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

