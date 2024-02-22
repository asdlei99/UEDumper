
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

/// Class /Script/CRDLevelInstanceRuntime.FortAthenaMutator_LevelInstanceDevice
/// Size: 0x0008 (0x000338 - 0x000340)
class AFortAthenaMutator_LevelInstanceDevice : public AFortAthenaMutator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	CMember(TWeakObjectPtr<ALevelInstanceGameplayVolume*>) CachedGameplayVolume                                    OFFSET(get<T>, {0x338, 8, 0, 0})
};

/// Class /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume
/// Size: 0x01B8 (0x000330 - 0x0004E8)
class ALevelInstanceGameplayVolume : public AGameplayVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1256;

public:
	SMember(FMulticastInlineDelegate)                  OnLevelInstanceResolved                                     OFFSET(getStruct<T>, {0x338, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnDisabledStateChanged                                      OFFSET(getStruct<T>, {0x378, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLevelInstanceGuidChanged                                  OFFSET(getStruct<T>, {0x388, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLevelInstanceNameChanged                                  OFFSET(getStruct<T>, {0x398, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLevelInstanceSizeChanged                                  OFFSET(getStruct<T>, {0x3A8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLevelInstanceContentCollectionChanged                     OFFSET(getStruct<T>, {0x3B8, 16, 0, 0})
	DMember(bool)                                      bEditMode                                                   OFFSET(get<bool>, {0x3C9, 1, 0, 0})
	DMember(bool)                                      bDisabled                                                   OFFSET(get<bool>, {0x3CA, 1, 0, 0})
	CMember(ESpatialLoadingState)                      LoadingState                                                OFFSET(get<T>, {0x3CB, 1, 0, 0})
	SMember(FString)                                   LevelInstanceName                                           OFFSET(getStruct<T>, {0x3D0, 16, 0, 0})
	DMember(bool)                                      bInstanceLoaded                                             OFFSET(get<bool>, {0x3E0, 1, 0, 0})
	DMember(bool)                                      bWantsLevelLoaded                                           OFFSET(get<bool>, {0x3E1, 1, 0, 0})
	DMember(bool)                                      bConvertStructuresToProps                                   OFFSET(get<bool>, {0x3E3, 1, 0, 0})
	CMember(class AFortMinigame*)                      CachedMinigame                                              OFFSET(get<T>, {0x3E8, 8, 0, 0})
	CMember(class UFortMutatorListComponent*)          MutatorListComponent                                        OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(class UFortClassTrackerComponent*)         ClassFilterComponent                                        OFFSET(get<T>, {0x3F8, 8, 0, 0})
	CMember(TArray<class UClass*>)                     BlacklistedClasses                                          OFFSET(get<T>, {0x400, 16, 0, 0})
	SMember(FGuid)                                     LevelInstanceSaveActorGuid                                  OFFSET(getStruct<T>, {0x460, 16, 0, 0})
	CMember(class AFortLevelInstanceSaveActor*)        LevelInstanceSaveActor                                      OFFSET(get<T>, {0x470, 8, 0, 0})


	/// Functions
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.SetWantsLevelLoaded
	// void SetWantsLevelLoaded(bool bInWantsLevelLoaded);                                                                      // [0xb942f34] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.SetReadyForInstantiation
	// void SetReadyForInstantiation(bool bReady);                                                                              // [0xb942eb4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.SetLevelInstanceName
	// void SetLevelInstanceName(FString InName);                                                                               // [0xb942800] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.SetLevelInstanceContentCollection
	// void SetLevelInstanceContentCollection(TWeakObjectPtr<UFortCreativeActorCollection*> ContentCollection);                 // [0xb94270c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.SetLevelInstanceActorGuid
	// void SetLevelInstanceActorGuid(FGuid InLevelInstanceActorGuid);                                                          // [0xb9425b4] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.SetEditMode
	// void SetEditMode(bool bInEditMode);                                                                                      // [0xb9424fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.RemoveActorWhenEndPlay
	// void RemoveActorWhenEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);                             // [0xb942438] Final|Native|Protected 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.RemoveActorWhenDied
	// void RemoveActorWhenDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0xb941e44] Final|Native|Protected|HasDefaults 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.OnVolumeChanged
	// void OnVolumeChanged();                                                                                                  // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.OnRep_IsDisabled
	// void OnRep_IsDisabled();                                                                                                 // [0xb941e30] Final|Native|Protected 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.OnRep_InstanceLoaded
	// void OnRep_InstanceLoaded();                                                                                             // [0xb941e30] Final|Native|Protected 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.OnRep_EditMode
	// void OnRep_EditMode();                                                                                                   // [0xb941e30] Final|Native|Protected 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.OnMinigameStateChanged
	// void OnMinigameStateChanged(class AFortMinigame* Minigame, EFortMinigameState MinigameState);                            // [0xb941d6c] Final|Native|Protected 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.LevelInstanceSizeChanged
	// void LevelInstanceSizeChanged(class AActor* InstigatorActor);                                                            // [0xb941cec] Final|Native|Protected 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.LevelInstanceNameChanged
	// void LevelInstanceNameChanged(FString Name);                                                                             // [0xb941638] Final|Native|Protected 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.LevelInstanceContentCollectionChanged
	// void LevelInstanceContentCollectionChanged(class AActor* InstigatorActor, TWeakObjectPtr<UFortCreativeActorCollection*> ContentCollection); // [0xb94150c] Final|Native|Protected 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.LevelInstanceContentChanged
	// void LevelInstanceContentChanged(class AActor* InstigatorActor);                                                         // [0xb94148c] Final|Native|Protected 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.LevelInstanceBeingDestroyed
	// void LevelInstanceBeingDestroyed();                                                                                      // [0xb941478] Final|Native|Protected 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.IsPreviewActor
	// bool IsPreviewActor();                                                                                                   // [0xb941454] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.IsInEditMode
	// bool IsInEditMode();                                                                                                     // [0xb94143c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.IsDisabled
	// bool IsDisabled();                                                                                                       // [0xb941424] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.InstantiateFromLevelInstanceSaveActor
	// void InstantiateFromLevelInstanceSaveActor();                                                                            // [0xb941410] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.HandleActorHealthChanged
	// void HandleActorHealthChanged(class AActor* Actor, float NewHealth);                                                     // [0xb94135c] Final|Native|Protected 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.GetLevelInstanceName
	// FString GetLevelInstanceName();                                                                                          // [0xb941340] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.CreateLevelInstanceSaveActor
	// class AFortLevelInstanceSaveActor* CreateLevelInstanceSaveActor();                                                       // [0xb94131c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.CheckForOverlappingVolumes
	// void CheckForOverlappingVolumes();                                                                                       // [0xb941308] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/CRDLevelInstanceRuntime.LevelInstanceItemListComponent
/// Size: 0x0000 (0x000128 - 0x000128)
class ULevelInstanceItemListComponent : public UFortMinigameItemContainerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

