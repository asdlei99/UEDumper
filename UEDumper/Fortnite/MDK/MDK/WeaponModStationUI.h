
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: BlueprintContext
/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: GameplayTags
/// dependency: UMG

/// Class /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchContext
/// Size: 0x00B8 (0x000030 - 0x0000E8)
class UAthenaWeaponModsWorkbenchContext : public UBlueprintContextBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FMulticastInlineDelegate)                  OnWeaponModsWorkbenchRequestClose                           OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnWeaponModsWorkbenchSelectedModChanged                     OFFSET(getStruct<T>, {0x78, 16, 0, 0})


	/// Functions
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchContext.RequestCloseUI
	// void RequestCloseUI();                                                                                                   // [0xb44f47c] Final|Native|Public|BlueprintCallable 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchContext.OnWeaponModsWorkbenchSelectedModChanged__DelegateSignature
	// void OnWeaponModsWorkbenchSelectedModChanged__DelegateSignature(class UFortWeaponModItemDefinition* CurrentlySelectedMod); // [0x211c0a0] MulticastDelegate|Public|Delegate 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchContext.OnWeaponModsWorkbenchRequestClose__DelegateSignature
	// void OnWeaponModsWorkbenchRequestClose__DelegateSignature();                                                             // [0x211c0a0] MulticastDelegate|Public|Delegate 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchContext.GetCurrentModCategory
	// FGameplayTag GetCurrentModCategory();                                                                                    // [0x69af3f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchWidgetBase
/// Size: 0x0000 (0x0002E8 - 0x0002E8)
class UAthenaWeaponModsWorkbenchWidgetBase : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:


	/// Functions
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchWidgetBase.OnWorkbenchOpened
	// void OnWorkbenchOpened();                                                                                                // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchWidgetBase.OnWorkbenchClosed
	// void OnWorkbenchClosed();                                                                                                // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchWidgetBase.OnWeaponModCategoryChanged
	// void OnWeaponModCategoryChanged(FGameplayTag ModTypeTag);                                                                // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchWidgetBase.HandleWeaponEquipped
	// void HandleWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);                                  // [0xb44f068] Native|Protected     
};

/// Class /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchEquippedModDetails
/// Size: 0x0000 (0x0002E8 - 0x0002E8)
class UAthenaWeaponModsWorkbenchEquippedModDetails : public UAthenaWeaponModsWorkbenchWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:


	/// Functions
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchEquippedModDetails.OnSetEquippedModInfo
	// void OnSetEquippedModInfo(class UFortWeaponModItemDefinition* ModItemDefinition, bool bIsDefaultMod, bool bSlotHasDefaultMod, bool bCanRemoveMod); // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchEquippedModDetails.OnSetCurrentlySelectedModInfo
	// void OnSetCurrentlySelectedModInfo(class UFortWeaponModItemDefinition* ModItemDefinition, bool bIsSameCategory, bool bIsEquippedMod); // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchEquippedModDetails.OnRemoveModClicked
	// void OnRemoveModClicked();                                                                                               // [0xb44f440] Final|Native|Protected|BlueprintCallable 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchEquippedModDetails.HandleSetEquippedModInfo
	// void HandleSetEquippedModInfo(class UFortWeaponModItemDefinition* WeaponMod);                                            // [0xb44ee04] Final|Native|Private 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchEquippedModDetails.HandleCurrentlySelectedModChanged
	// void HandleCurrentlySelectedModChanged(class UFortWeaponModItemDefinition* NewSelectedMod);                              // [0xb44ed04] Final|Native|Private 
};

/// Class /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModal
/// Size: 0x0038 (0x000400 - 0x000438)
class UAthenaWeaponModsWorkbenchModal : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1080;

public:
	CMember(TArray<FName>)                             BlockedInputActions                                         OFFSET(get<T>, {0x408, 16, 0, 0})
	SMember(FPrimaryContentSetup)                      PrimaryContentSetup                                         OFFSET(getStruct<T>, {0x418, 3, 0, 0})
	CMember(class UInputComponent*)                    WorkbenchModalInputComp                                     OFFSET(get<T>, {0x420, 8, 0, 0})


	/// Functions
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModal.OnWeaponEquipped
	// void OnWeaponEquipped(bool bIsModdable);                                                                                 // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModal.OnInputTypeChanged
	// void OnInputTypeChanged(ECommonInputType NewInputType);                                                                  // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModal.HandleWeaponEquipped
	// void HandleWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);                                  // [0xb44efa4] Final|Native|Private 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModal.HandleModStationComponentForceStop
	// void HandleModStationComponentForceStop(class AFortWeaponModStationBase* WeaponModStation);                              // [0xb44ed84] Final|Native|Private 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModal.HandleCloseUI
	// void HandleCloseUI();                                                                                                    // [0x37a15e4] Final|Native|Private 
};

/// Class /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModListEntry
/// Size: 0x0010 (0x001490 - 0x0014A0)
class UAthenaWeaponModsWorkbenchModListEntry : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5280;

public:


	/// Functions
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModListEntry.OnRefreshStatus
	// void OnRefreshStatus();                                                                                                  // [0x211c0a0] Event|Public|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModListEntry.OnListItemSet
	// void OnListItemSet(class UFortItemDefinition* Item);                                                                     // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModListEntry.IsEquippedMod
	// bool IsEquippedMod();                                                                                                    // [0xb44f220] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModListEntry.IsEquippableMod
	// bool IsEquippableMod();                                                                                                  // [0xb44f1b0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection
/// Size: 0x0040 (0x0002E8 - 0x000328)
class UAthenaWeaponModsWorkbenchModSelection : public UAthenaWeaponModsWorkbenchWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
	CMember(class UFortWorldItemDefinition*)           PurchasingCurrency                                          OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class UCommonListView*)                    ListView_ModChoices                                         OFFSET(get<T>, {0x2F8, 8, 0, 0})
	SMember(FDataTableRowHandle)                       PreviousListEntryInputAction                                OFFSET(getStruct<T>, {0x308, 16, 0, 0})
	SMember(FDataTableRowHandle)                       NextListEntryInputAction                                    OFFSET(getStruct<T>, {0x318, 16, 0, 0})


	/// Functions
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection.SetCanRemoveMod
	// void SetCanRemoveMod(bool bCanRemoveMod);                                                                                // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection.RequestRemoveMod
	// void RequestRemoveMod();                                                                                                 // [0xb44f468] Final|Native|Private 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection.RequestBuyAndEquip
	// void RequestBuyAndEquip();                                                                                               // [0xb44f2d4] Final|Native|Private 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection.OnSetSelectedRemoveModCostAndOwnedCurrency
	// void OnSetSelectedRemoveModCostAndOwnedCurrency(int32_t ModCost, int32_t OwnedCurrency);                                 // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection.OnSetSelectedModInfo
	// void OnSetSelectedModInfo(class UFortWeaponModItemDefinition* ModItemDef);                                               // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection.OnSetSelectedModCostAndOwnedCurrency
	// void OnSetSelectedModCostAndOwnedCurrency(int32_t ModCost, int32_t OwnedCurrency);                                       // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection.OnRemoveModClicked
	// void OnRemoveModClicked();                                                                                               // [0xb44f468] Final|Native|Protected|BlueprintCallable 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection.OnRefreshModType
	// void OnRefreshModType(FGameplayTag ModCategoryTag);                                                                      // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection.OnRefreshMods
	// void OnRefreshMods(TArray<UFortWeaponModItemDefinition*>& WeaponModItemDefinitions);                                     // [0x211c0a0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection.OnModRemovedCallback
	// void OnModRemovedCallback();                                                                                             // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection.OnModPurchaseFailed
	// void OnModPurchaseFailed();                                                                                              // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection.OnModPurchasedSuccessfully
	// void OnModPurchasedSuccessfully();                                                                                       // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection.OnExitUIClicked
	// void OnExitUIClicked();                                                                                                  // [0xb44f2e8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection.OnBuyAndEquipClicked
	// void OnBuyAndEquipClicked();                                                                                             // [0xb44f2d4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection.IsSelectedModEquippedOnWeapon
	// bool IsSelectedModEquippedOnWeapon();                                                                                    // [0xb44f2b0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection.GetSelectedRemoveModCostAndOwnedCurrency
	// void GetSelectedRemoveModCostAndOwnedCurrency(int32_t& RemoveModCost, int32_t& OwnedCurrency);                           // [0xb44ec2c] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection.GetSelectedModCostAndOwnedCurrency
	// void GetSelectedModCostAndOwnedCurrency(int32_t& ModCost, int32_t& OwnedCurrency);                                       // [0xb44eb54] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection.DoesEquippedWeaponHaveDefaultModForSlot
	// bool DoesEquippedWeaponHaveDefaultModForSlot();                                                                          // [0xb44eb18] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection.CanRemoveSelectedModFromWeapon
	// bool CanRemoveSelectedModFromWeapon();                                                                                   // [0x3213b4c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection.CanApplySelectedModToEquippedWeapon
	// bool CanApplySelectedModToEquippedWeapon();                                                                              // [0xb44eaa8] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModTypeButton
/// Size: 0x0010 (0x001490 - 0x0014A0)
class UAthenaWeaponModsWorkbenchModTypeButton : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5280;

public:
	SMember(FGameplayTag)                              ModTypeTag                                                  OFFSET(getStruct<T>, {0x1490, 4, 0, 0})
	CMember(class UFortWeaponModItemDefinition*)       DefaultModItemDef                                           OFFSET(get<T>, {0x1498, 8, 0, 0})


	/// Functions
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModTypeButton.SetEquippedOrDefaultMod
	// void SetEquippedOrDefaultMod(class UFortWeaponModItemDefinition* ItemDefinition, bool bIsAvailableCategory);             // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModTypeButton.OnWorkbenchOpened
	// void OnWorkbenchOpened();                                                                                                // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModTypeButton.OnWorkbenchClosed
	// void OnWorkbenchClosed();                                                                                                // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModTypeButton.HandleWeaponEquipped
	// void HandleWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);                                  // [0xb44ee84] Final|Native|Private 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModTypeButton.GetModTypeTag
	// FGameplayTag GetModTypeTag();                                                                                            // [0xb44eb3c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModTypeTabs
/// Size: 0x0028 (0x0002E8 - 0x000310)
class UAthenaWeaponModsWorkbenchModTypeTabs : public UAthenaWeaponModsWorkbenchWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	SMember(FDataTableRowHandle)                       PreviousTabInputAction                                      OFFSET(getStruct<T>, {0x2F0, 16, 0, 0})
	SMember(FDataTableRowHandle)                       NextTabInputAction                                          OFFSET(getStruct<T>, {0x300, 16, 0, 0})


	/// Functions
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModTypeTabs.SetItemSlotInfo
	// void SetItemSlotInfo(TArray<FFortWeaponModSlot>& ModSlots);                                                              // [0x211c0a0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModTypeTabs.OnModTypeTabClicked
	// void OnModTypeTabClicked(FGameplayTag ModTypeTag);                                                                       // [0xb44f310] Final|Native|Protected|BlueprintCallable 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModTypeTabs.GetTabButtons
	// TArray<UAthenaWeaponModsWorkbenchModTypeButton*> GetTabButtons();                                                        // [0x211c0a0] Event|Protected|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchWeaponDetails
/// Size: 0x0008 (0x0002E8 - 0x0002F0)
class UAthenaWeaponModsWorkbenchWeaponDetails : public UAthenaWeaponModsWorkbenchWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:


	/// Functions
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchWeaponDetails.SetWeaponType
	// void SetWeaponType(FText& WeaponTypeText, class UTexture2D* WeaponTypeTexture);                                          // [0x211c0a0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchWeaponDetails.OnWeaponEquipped
	// void OnWeaponEquipped(class UFortItemDefinition* ItemDefinition, FText& DisplayName);                                    // [0x211c0a0] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchWeaponRenderContainer
/// Size: 0x0000 (0x0002E8 - 0x0002E8)
class UAthenaWeaponModsWorkbenchWeaponRenderContainer : public UAthenaWeaponModsWorkbenchWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:


	/// Functions
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchWeaponRenderContainer.OnWeaponModSlotsChanged
	// void OnWeaponModSlotsChanged(class AFortWeapon* Weapon);                                                                 // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchWeaponRenderContainer.OnWeaponModSlotPreview
	// void OnWeaponModSlotPreview(class AFortWeapon* Weapon, class UFortWeaponModItemDefinition* PreviewingModItemDefinition); // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchWeaponRenderContainer.HandleWeaponModSlotPreview
	// void HandleWeaponModSlotPreview(class UFortWeaponModItemDefinition* PreviewingModItemDefinition);                        // [0xb44f130] Final|Native|Private 
};

