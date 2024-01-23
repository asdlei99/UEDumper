
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
/// dependency: ModularGameplay

/// Class /Script/WeaponModsCodeRuntime.FortModStation_WeaponUICapture
/// Size: 0x0020 (0x000290 - 0x0002B0)
class AFortModStation_WeaponUICapture : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
	DMember(char)                                      PSOPrecachingCheckMaxRetries                                OFFSET(get<char>, {0x290, 1, 0, 0})
	CMember(TWeakObjectPtr<UMeshComponent*>)           MeshComponentPtr                                            OFFSET(get<T>, {0x294, 8, 0, 0})


	/// Functions
	// Function /Script/WeaponModsCodeRuntime.FortModStation_WeaponUICapture.RefreshCaptureWhenPSOPrecachingDone
	// void RefreshCaptureWhenPSOPrecachingDone(class UMeshComponent* PreviewMeshComponent);                                    // [0xa8c0960] Final|Native|Protected|BlueprintCallable 
	// Function /Script/WeaponModsCodeRuntime.FortModStation_WeaponUICapture.OnRefreshCapture
	// void OnRefreshCapture();                                                                                                 // [0x2177018] Event|Protected|BlueprintEvent 
};

/// Class /Script/WeaponModsCodeRuntime.FortWeaponModManagementComponent
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UFortWeaponModManagementComponent : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FMulticastInlineDelegate)                  OnWeaponModSlotsChanged                                     OFFSET(getStruct<T>, {0xA8, 16, 0, 0})


	/// Functions
	// Function /Script/WeaponModsCodeRuntime.FortWeaponModManagementComponent.WeaponModSlotsChangedDelegate__DelegateSignature
	// void WeaponModSlotsChangedDelegate__DelegateSignature(class AFortWeapon* Weapon);                                        // [0x2177018] MulticastDelegate|Public|Delegate 
	// Function /Script/WeaponModsCodeRuntime.FortWeaponModManagementComponent.ServerRequestRemoveModFromWeaponToInventory
	// void ServerRequestRemoveModFromWeaponToInventory(class UFortWeaponModItemDefinition* WeaponModDef, FGuid WeaponItemGuid); // [0xa8c1010] Final|Net|NetReliableNative|Event|Private|NetServer|HasDefaults 
	// Function /Script/WeaponModsCodeRuntime.FortWeaponModManagementComponent.ServerRequestAddModToWeaponFromInventory
	// void ServerRequestAddModToWeaponFromInventory(FGuid WeaponModItemGUID, FGuid WeaponItemGuid);                            // [0xa8c0dd8] Final|Net|NetReliableNative|Event|Private|NetServer|HasDefaults 
	// Function /Script/WeaponModsCodeRuntime.FortWeaponModManagementComponent.HandleWeaponUnequip
	// void HandleWeaponUnequip(class AFortWeapon* Weapon);                                                                     // [0xa8c06f4] Final|Native|Private 
};

/// Class /Script/WeaponModsCodeRuntime.FortWeaponModStationBase
/// Size: 0x00C0 (0x000BC8 - 0x000C88)
class AFortWeaponModStationBase : public ABuildingProp
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3208;

public:
	SMember(FMarkedActorDisplayInfo)                   MarkerDisplay                                               OFFSET(getStruct<T>, {0xBC8, 168, 0, 0})
	SMember(FVector)                                   MarkerPositionOffset                                        OFFSET(getStruct<T>, {0xC70, 24, 0, 0})
};

/// Class /Script/WeaponModsCodeRuntime.FortWeaponModStationSharedDataComponent
/// Size: 0x00F8 (0x0000A0 - 0x000198)
class UFortWeaponModStationSharedDataComponent : public UFortGameStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 408;

public:
	CMember(class UDataTable*)                         ModCostData                                                 OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(TMap<FGameplayTag, FFortModSlotPurchaseList>) ModSlotPurchaseLists                                     OFFSET(get<T>, {0xA8, 80, 0, 0})
	CMember(TMap<FPrimaryAssetId, FFortModStationDataRow>) ModCostMap                                              OFFSET(get<T>, {0xF8, 80, 0, 0})
};

/// Class /Script/WeaponModsCodeRuntime.FortWeaponModStationComponent
/// Size: 0x00E0 (0x0000A8 - 0x000188)
class UFortWeaponModStationComponent : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
	SMember(FMulticastInlineDelegate)                  OnLocalModPurchaseStarted                                   OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnStartInteractWithWorkbenchActor                           OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnStopInteractWithWorkbenchActor                            OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	CMember(class AFortWeaponModStationBase*)          CurrentInteractingWeaponModStation                          OFFSET(get<T>, {0xD8, 8, 0, 0})
	SMember(FScalableFloat)                            ModStationHotfixEnabled                                     OFFSET(getStruct<T>, {0xE0, 40, 0, 0})
	SMember(FScalableFloat)                            RemoveModCost                                               OFFSET(getStruct<T>, {0x108, 40, 0, 0})
	SMember(FScalableFloat)                            CancelInteractDistance                                      OFFSET(getStruct<T>, {0x130, 40, 0, 0})
	CMember(class UFortWeaponModItemDefinition*)       DefaultIronSightMod                                         OFFSET(get<T>, {0x158, 8, 0, 0})
	CMember(class UFortWeaponModItemDefinition*)       DefaultMagazineMod                                          OFFSET(get<T>, {0x160, 8, 0, 0})


	/// Functions
	// Function /Script/WeaponModsCodeRuntime.FortWeaponModStationComponent.StartInteractWithWorkbenchActor
	// void StartInteractWithWorkbenchActor(class AFortWeaponModStationBase* NewInteractingWeaponModStation);                   // [0xa8c1218] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/WeaponModsCodeRuntime.FortWeaponModStationComponent.ServerStopInteractWithWorkbenchActor
	// void ServerStopInteractWithWorkbenchActor(class AFortWeaponModStationBase* NewInteractingWeaponModStation);              // [0xa8c1194] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/WeaponModsCodeRuntime.FortWeaponModStationComponent.ServerPurchaseWeaponModForWeapon
	// void ServerPurchaseWeaponModForWeapon(class UFortWeaponModItemDefinition* WeaponMod, class AFortWeapon* Weapon);         // [0xa8c0d10] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/WeaponModsCodeRuntime.FortWeaponModStationComponent.ServerPurchaseRemoveMod
	// void ServerPurchaseRemoveMod(class UFortWeaponModItemDefinition* WeaponMod, class AFortWeapon* Weapon);                  // [0xa8c0c48] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/WeaponModsCodeRuntime.FortWeaponModStationComponent.OnStopInteractWithWorkbenchActorDelegate__DelegateSignature
	// void OnStopInteractWithWorkbenchActorDelegate__DelegateSignature(class AFortWeaponModStationBase* WeaponModStation);     // [0x2177018] MulticastDelegate|Public|Delegate 
	// Function /Script/WeaponModsCodeRuntime.FortWeaponModStationComponent.OnStartInteractWithWorkbenchActorDelegate__DelegateSignature
	// void OnStartInteractWithWorkbenchActorDelegate__DelegateSignature(class AFortWeaponModStationBase* NewInteractingWeaponModStation); // [0x2177018] MulticastDelegate|Public|Delegate 
	// Function /Script/WeaponModsCodeRuntime.FortWeaponModStationComponent.OnLocalModPurchaseStarted__DelegateSignature
	// void OnLocalModPurchaseStarted__DelegateSignature(FFortLocalModPurchaseEventParams& EventParams);                        // [0x2177018] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/WeaponModsCodeRuntime.FortWeaponModStationComponent.LocalPurchaseWeaponModForWeapon
	// void LocalPurchaseWeaponModForWeapon(class UFortWeaponModItemDefinition* WeaponMod, class AFortWeapon* Weapon);          // [0xa8c0898] RequiredAPI|Native|Event|Public|BlueprintEvent 
	// Function /Script/WeaponModsCodeRuntime.FortWeaponModStationComponent.LocalPurchaseRemoveMod
	// void LocalPurchaseRemoveMod(class UFortWeaponModItemDefinition* WeaponMod, class AFortWeapon* Weapon);                   // [0xa8c07d0] RequiredAPI|Native|Event|Public|BlueprintEvent 
	// Function /Script/WeaponModsCodeRuntime.FortWeaponModStationComponent.DoesCurrentWorkbenchHaveModsForWeapon
	// bool DoesCurrentWorkbenchHaveModsForWeapon(class AFortWeapon* Weapon);                                                   // [0xa8c0570] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/WeaponModsCodeRuntime.FortWeaponModStationComponent.ClientStartInteractWithWorkbenchActor
	// void ClientStartInteractWithWorkbenchActor(class AFortWeaponModStationBase* NewInteractingWeaponModStation);             // [0xa8c04ec] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/WeaponModsCodeRuntime.FortWeaponModStationComponent.ClientNotifyServerForcedInteractOver
	// void ClientNotifyServerForcedInteractOver();                                                                             // [0x81b738c] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/WeaponModsCodeRuntime.FortWeaponModStationComponent.CanPlayerAffordRemoveModFromWeapon
	// bool CanPlayerAffordRemoveModFromWeapon(class UFortWeaponModItemDefinition* WeaponMod, class AFortWeapon* Weapon, class AController* Controller); // [0xa8c03ec] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/WeaponModsCodeRuntime.FortWeaponModStationComponent.CanPlayerAffordModForWeapon
	// bool CanPlayerAffordModForWeapon(class UFortWeaponModItemDefinition* WeaponMod, class AFortWeapon* Weapon, class AController* Controller); // [0xa8c02ec] Native|Event|Public|BlueprintEvent|Const 
};

/// Class /Script/WeaponModsCodeRuntime.FortPickupInteractOverrideComponent_WeaponMods
/// Size: 0x0000 (0x0000C0 - 0x0000C0)
class UFortPickupInteractOverrideComponent_WeaponMods : public UFortPickupInteractOverrideComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:


	/// Functions
	// Function /Script/WeaponModsCodeRuntime.FortPickupInteractOverrideComponent_WeaponMods.ServerApplyWeaponModFromPickup
	// void ServerApplyWeaponModFromPickup(class AFortPickup* Pickup, class UFortWeaponModItemDefinition* WeaponModDef, class AFortWeapon* Weapon); // [0xa8c0b4c] Net|NetReliableNative|Event|Protected|NetServer 
};

/// Struct /Script/WeaponModsCodeRuntime.FortLocalModPurchaseEventParams
/// Size: 0x0010 (0x000000 - 0x000010)
class FFortLocalModPurchaseEventParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class AFortWeapon*)                        WeaponActor                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UFortWeaponModItemDefinition*)       WeaponMod                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/WeaponModsCodeRuntime.FortModStationDataRow
/// Size: 0x0010 (0x000008 - 0x000018)
class FFortModStationDataRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UFortWeaponModItemDefinition*)       WeaponMod                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(float)                                     GoldCost                                                    OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/WeaponModsCodeRuntime.FortModSlotPurchaseList
/// Size: 0x0010 (0x000000 - 0x000010)
class FFortModSlotPurchaseList : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FFortModStationDataRow>)            Mods                                                        OFFSET(get<T>, {0x0, 16, 0, 0})
};

