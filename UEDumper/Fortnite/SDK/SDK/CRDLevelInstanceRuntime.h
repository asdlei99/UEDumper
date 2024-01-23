
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: PlayspaceSystem

/// Class /Script/CRDLevelInstanceRuntime.FortAthenaMutator_LevelInstanceDevice
/// Size: 0x0008 (0x000338 - 0x000340)
class AFortAthenaMutator_LevelInstanceDevice : public AFortAthenaMutator
{ 
public:
	SDK_UNDEFINED(8,12370) /* TWeakObjectPtr<ALevelInstanceGameplayVolume*> */ __um(CachedGameplayVolume);         // 0x0338   (0x0008)  
};

/// Class /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume
/// Size: 0x01B8 (0x000330 - 0x0004E8)
class ALevelInstanceGameplayVolume : public AGameplayVolume
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0330   (0x0008)  MISSED
	SDK_UNDEFINED(16,12371) /* FMulticastInlineDelegate */ __um(OnLevelInstanceResolved);                          // 0x0338   (0x0010)  
	unsigned char                                      UnknownData01_5[0x30];                                      // 0x0348   (0x0030)  MISSED
	SDK_UNDEFINED(16,12372) /* FMulticastInlineDelegate */ __um(OnDisabledStateChanged);                           // 0x0378   (0x0010)  
	SDK_UNDEFINED(16,12373) /* FMulticastInlineDelegate */ __um(OnLevelInstanceGuidChanged);                       // 0x0388   (0x0010)  
	SDK_UNDEFINED(16,12374) /* FMulticastInlineDelegate */ __um(OnLevelInstanceNameChanged);                       // 0x0398   (0x0010)  
	SDK_UNDEFINED(16,12375) /* FMulticastInlineDelegate */ __um(OnLevelInstanceSizeChanged);                       // 0x03A8   (0x0010)  
	SDK_UNDEFINED(16,12376) /* FMulticastInlineDelegate */ __um(OnLevelInstanceContentCollectionChanged);          // 0x03B8   (0x0010)  
	unsigned char                                      UnknownData02_5[0x1];                                       // 0x03C8   (0x0001)  MISSED
	bool                                               bEditMode;                                                  // 0x03C9   (0x0001)  
	bool                                               bDisabled;                                                  // 0x03CA   (0x0001)  
	ESpatialLoadingState                               LoadingState;                                               // 0x03CB   (0x0001)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x03CC   (0x0004)  MISSED
	SDK_UNDEFINED(16,12377) /* FString */              __um(LevelInstanceName);                                    // 0x03D0   (0x0010)  
	bool                                               bInstanceLoaded;                                            // 0x03E0   (0x0001)  
	bool                                               bWantsLevelLoaded;                                          // 0x03E1   (0x0001)  
	unsigned char                                      UnknownData04_5[0x1];                                       // 0x03E2   (0x0001)  MISSED
	bool                                               bConvertStructuresToProps;                                  // 0x03E3   (0x0001)  
	unsigned char                                      UnknownData05_5[0x4];                                       // 0x03E4   (0x0004)  MISSED
	class AFortMinigame*                               CachedMinigame;                                             // 0x03E8   (0x0008)  
	class UFortMutatorListComponent*                   MutatorListComponent;                                       // 0x03F0   (0x0008)  
	class UFortClassTrackerComponent*                  ClassFilterComponent;                                       // 0x03F8   (0x0008)  
	TArray<class UClass*>                              BlacklistedClasses;                                         // 0x0400   (0x0010)  
	unsigned char                                      UnknownData06_5[0x50];                                      // 0x0410   (0x0050)  MISSED
	FGuid                                              LevelInstanceSaveActorGuid;                                 // 0x0460   (0x0010)  
	class AFortLevelInstanceSaveActor*                 LevelInstanceSaveActor;                                     // 0x0470   (0x0008)  
	unsigned char                                      UnknownData07_6[0x70];                                      // 0x0478   (0x0070)  MISSED


	/// Functions
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.SetWantsLevelLoaded
	// void SetWantsLevelLoaded(bool bInWantsLevelLoaded);                                                                   // [0xb5d2c80] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.SetReadyForInstantiation
	// void SetReadyForInstantiation(bool bReady);                                                                           // [0xb5d2c00] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.SetLevelInstanceName
	// void SetLevelInstanceName(FString InName);                                                                            // [0xb5d254c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.SetLevelInstanceContentCollection
	// void SetLevelInstanceContentCollection(TWeakObjectPtr<UFortCreativeActorCollection*> ContentCollection);              // [0xb5d2458] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.SetLevelInstanceActorGuid
	// void SetLevelInstanceActorGuid(FGuid InLevelInstanceActorGuid);                                                       // [0xb5d2318] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.SetEditMode
	// void SetEditMode(bool bInEditMode);                                                                                   // [0xb5d2260] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.RemoveActorWhenEndPlay
	// void RemoveActorWhenEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);                          // [0xb5d219c] Final|Native|Protected 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.RemoveActorWhenDied
	// void RemoveActorWhenDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0xb5d1bd4] Final|Native|Protected|HasDefaults 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.OnVolumeChanged
	// void OnVolumeChanged();                                                                                               // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.OnRep_IsDisabled
	// void OnRep_IsDisabled();                                                                                              // [0xb5d1bc0] Final|Native|Protected 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.OnRep_InstanceLoaded
	// void OnRep_InstanceLoaded();                                                                                          // [0xb5d1bc0] Final|Native|Protected 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.OnRep_EditMode
	// void OnRep_EditMode();                                                                                                // [0xb5d1bc0] Final|Native|Protected 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.OnMinigameStateChanged
	// void OnMinigameStateChanged(class AFortMinigame* Minigame, EFortMinigameState MinigameState);                         // [0xb5d1afc] Final|Native|Protected 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.LevelInstanceSizeChanged
	// void LevelInstanceSizeChanged(class AActor* InstigatorActor);                                                         // [0xb5d1a7c] Final|Native|Protected 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.LevelInstanceNameChanged
	// void LevelInstanceNameChanged(FString Name);                                                                          // [0xb5d13c8] Final|Native|Protected 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.LevelInstanceContentCollectionChanged
	// void LevelInstanceContentCollectionChanged(class AActor* InstigatorActor, TWeakObjectPtr<UFortCreativeActorCollection*> ContentCollection); // [0xb5d129c] Final|Native|Protected 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.LevelInstanceContentChanged
	// void LevelInstanceContentChanged(class AActor* InstigatorActor);                                                      // [0xb5d121c] Final|Native|Protected 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.LevelInstanceBeingDestroyed
	// void LevelInstanceBeingDestroyed();                                                                                   // [0xb5d1208] Final|Native|Protected 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.IsPreviewActor
	// bool IsPreviewActor();                                                                                                // [0xb5d11e4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.IsInEditMode
	// bool IsInEditMode();                                                                                                  // [0xb5d11cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.IsDisabled
	// bool IsDisabled();                                                                                                    // [0xb5d11b4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.InstantiateFromLevelInstanceSaveActor
	// void InstantiateFromLevelInstanceSaveActor();                                                                         // [0xb5d11a0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.HandleActorHealthChanged
	// void HandleActorHealthChanged(class AActor* Actor, float NewHealth);                                                  // [0xb5d10ec] Final|Native|Protected 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.GetLevelInstanceName
	// FString GetLevelInstanceName();                                                                                       // [0xb5d10d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.CreateLevelInstanceSaveActor
	// class AFortLevelInstanceSaveActor* CreateLevelInstanceSaveActor();                                                    // [0xb5d10ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.CheckForOverlappingVolumes
	// void CheckForOverlappingVolumes();                                                                                    // [0xb5d1098] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/CRDLevelInstanceRuntime.LevelInstanceItemListComponent
/// Size: 0x0000 (0x000128 - 0x000128)
class ULevelInstanceItemListComponent : public UFortMinigameItemContainerComponent
{ 
public:
};

