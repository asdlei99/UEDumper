
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: ModularGameplay
/// dependency: UMG

/// Class /Script/WeaponModsUI.AthenaEquippedItemInfoWeaponMods
/// Size: 0x0000 (0x0002C0 - 0x0002C0)
class UAthenaEquippedItemInfoWeaponMods : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:


	/// Functions
	// Function /Script/WeaponModsUI.AthenaEquippedItemInfoWeaponMods.SetItemSlotInfo
	// void SetItemSlotInfo(FFortWeaponModSlot& ModSlot);                                                                       // [0x211c0a0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/WeaponModsUI.AthenaEquippedItemInfoWeaponMods.ResetItemInfo
	// void ResetItemInfo();                                                                                                    // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModsUI.AthenaEquippedItemInfoWeaponMods.HandleWeaponFullyEquipped
	// void HandleWeaponFullyEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);                             // [0xb450bfc] Final|Native|Private 
};

/// Class /Script/WeaponModsUI.AthenaInventoryGroupWeaponMods
/// Size: 0x0000 (0x000350 - 0x000350)
class UAthenaInventoryGroupWeaponMods : public UAthenaInventoryGroupBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 848;

public:


	/// Functions
	// Function /Script/WeaponModsUI.AthenaInventoryGroupWeaponMods.HandleButtonClicked
	// void HandleButtonClicked(class UObject* Object);                                                                         // [0xb450838] Final|Native|Protected|BlueprintCallable 
	// Function /Script/WeaponModsUI.AthenaInventoryGroupWeaponMods.CanWeaponEquipMod
	// bool CanWeaponEquipMod(class AFortWeapon* Weapon, class UFortWeaponModItemDefinition* Mod);                              // [0xb450764] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/WeaponModsUI.AthenaInventoryItemInfoWeaponMods
/// Size: 0x0000 (0x0002C0 - 0x0002C0)
class UAthenaInventoryItemInfoWeaponMods : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:


	/// Functions
	// Function /Script/WeaponModsUI.AthenaInventoryItemInfoWeaponMods.UpdateItemMods
	// void UpdateItemMods();                                                                                                   // [0xb450938] Final|Native|Protected|BlueprintCallable 
	// Function /Script/WeaponModsUI.AthenaInventoryItemInfoWeaponMods.SetItemSlotInfo
	// void SetItemSlotInfo(FFortWeaponModSlot& ModSlot);                                                                       // [0x211c0a0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/WeaponModsUI.AthenaInventoryItemInfoWeaponMods.SetIsModifiableWeapon
	// void SetIsModifiableWeapon(bool bIsModifiable);                                                                          // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModsUI.AthenaInventoryItemInfoWeaponMods.ResetItemInfo
	// void ResetItemInfo();                                                                                                    // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModsUI.AthenaInventoryItemInfoWeaponMods.HandleWeaponModSlotsChanged
	// void HandleWeaponModSlotsChanged(class AFortWeapon* Weapon);                                                             // [0xb450d1c] Final|Native|Private 
	// Function /Script/WeaponModsUI.AthenaInventoryItemInfoWeaponMods.HandleInventoryPanelOpened
	// void HandleInventoryPanelOpened();                                                                                       // [0xb450938] Final|Native|Private 
	// Function /Script/WeaponModsUI.AthenaInventoryItemInfoWeaponMods.HandleInventoryItemSelected
	// void HandleInventoryItemSelected(class UFortItem* SelectedItem);                                                         // [0xb4508b8] Final|Native|Private 
};

/// Class /Script/WeaponModsUI.AthenaInventoryItemInfoWeaponModsConfigurator
/// Size: 0x0000 (0x0002C0 - 0x0002C0)
class UAthenaInventoryItemInfoWeaponModsConfigurator : public UAthenaInventoryItemInfoWeaponMods
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:


	/// Functions
	// Function /Script/WeaponModsUI.AthenaInventoryItemInfoWeaponModsConfigurator.RemoveMod
	// void RemoveMod(class UFortWeaponModItemDefinition* ModItemDef);                                                          // [0xb450ebc] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/WeaponModsUI.AthenaLastKillerWeaponModsInfo
/// Size: 0x0008 (0x000328 - 0x000330)
class UAthenaLastKillerWeaponModsInfo : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:


	/// Functions
	// Function /Script/WeaponModsUI.AthenaLastKillerWeaponModsInfo.SetKillerWeaponMods
	// void SetKillerWeaponMods(TArray<FFortWeaponModSlot>& ModSlots);                                                          // [0x211c0a0] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/WeaponModsUI.AthenaPickupIndicatorWeaponMods
/// Size: 0x0000 (0x0002C0 - 0x0002C0)
class UAthenaPickupIndicatorWeaponMods : public UFortInteractContextInfoWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:


	/// Functions
	// Function /Script/WeaponModsUI.AthenaPickupIndicatorWeaponMods.SetItemSlotInfo
	// void SetItemSlotInfo(FFortWeaponModSlot& ModSlot);                                                                       // [0x211c0a0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/WeaponModsUI.AthenaPickupIndicatorWeaponMods.SetItemModifiedWeaponName
	// void SetItemModifiedWeaponName(FText& ModifiedWeaponName);                                                               // [0x211c0a0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/WeaponModsUI.AthenaPickupIndicatorWeaponMods.SetEquippedWeaponItemSlotInfo
	// void SetEquippedWeaponItemSlotInfo(FFortWeaponModSlot& ModSlot);                                                         // [0x211c0a0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/WeaponModsUI.AthenaPickupIndicatorWeaponMods.SetEquippedWeaponItemInfo
	// void SetEquippedWeaponItemInfo(class UFortItemDefinition* ItemDef);                                                      // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModsUI.AthenaPickupIndicatorWeaponMods.ResetItemInfo
	// void ResetItemInfo();                                                                                                    // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModsUI.AthenaPickupIndicatorWeaponMods.IsInspectViewCollapsedBySettings
	// bool IsInspectViewCollapsedBySettings();                                                                                 // [0xb450e74] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/WeaponModsUI.AthenaPickupIndicatorWeaponMods.HandleWeaponEquipped
	// void HandleWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);                                  // [0xb450a90] Final|Native|Protected 
	// Function /Script/WeaponModsUI.AthenaPickupIndicatorWeaponMods.HandlePickupHovered
	// void HandlePickupHovered(class AFortPickup* Pickup);                                                                     // [0xb45094c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/WeaponModsUI.AthenaQuickBarSlotWeaponModsIndicator
/// Size: 0x0018 (0x0002F0 - 0x000308)
class UAthenaQuickBarSlotWeaponModsIndicator : public UAthenaQuickBarSlotExtensionWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:


	/// Functions
	// Function /Script/WeaponModsUI.AthenaQuickBarSlotWeaponModsIndicator.SetItemSlotsInfo
	// void SetItemSlotsInfo(TArray<FFortWeaponModSlot>& ModSlots);                                                             // [0x211c0a0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/WeaponModsUI.AthenaQuickBarSlotWeaponModsIndicator.SetItemSlotSelected
	// void SetItemSlotSelected(bool bIsSelected);                                                                              // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModsUI.AthenaQuickBarSlotWeaponModsIndicator.SetItemSlotInfo
	// void SetItemSlotInfo(FFortWeaponModSlot& ModSlot);                                                                       // [0x211c0a0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/WeaponModsUI.AthenaQuickBarSlotWeaponModsIndicator.ResetItemInfo
	// void ResetItemInfo();                                                                                                    // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModsUI.AthenaQuickBarSlotWeaponModsIndicator.HandleWeaponModSlotsChanged
	// void HandleWeaponModSlotsChanged(class AFortWeapon* Weapon);                                                             // [0xb450d9c] Final|Native|Private 
	// Function /Script/WeaponModsUI.AthenaQuickBarSlotWeaponModsIndicator.HandleWeaponFullyEquipped
	// void HandleWeaponFullyEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);                             // [0x1a00c58] Final|Native|Private 
	// Function /Script/WeaponModsUI.AthenaQuickBarSlotWeaponModsIndicator.HandleQuickBarSlotFocusChanged
	// void HandleQuickBarSlotFocusChanged(EFortQuickBars QuickBarType, int32_t QuickBarSlot);                                  // [0xb4509cc] Final|Native|Private 
};

/// Class /Script/WeaponModsUI.FortGameSettingRegistryExtension_WeaponModsUI
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortGameSettingRegistryExtension_WeaponModsUI : public UFortGameSettingRegistryExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/WeaponModsUI.FortPickupInteractOverrideComponent_ModdableWeapons
/// Size: 0x0010 (0x0000C0 - 0x0000D0)
class UFortPickupInteractOverrideComponent_ModdableWeapons : public UFortPickupInteractOverrideComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FMulticastInlineDelegate)                  OnAttemptSecondInteractDelegate                             OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
};

