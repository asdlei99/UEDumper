
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CommonUI
/// dependency: CommonUILegacy
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: GameFeatures
/// dependency: UMG

/// Class /Script/AnnualRefundTokenUI.FortPurchaseHistoryEntryBase
/// Size: 0x0040 (0x001530 - 0x001570)
class UFortPurchaseHistoryEntryBase : public UFortHoldableButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5488;

public:
	CMember(class UClass*)                             ItemCardClass                                               OFFSET(get<T>, {0x1530, 8, 0, 0})
	DMember(float)                                     CardWidthOverride                                           OFFSET(get<float>, {0x1538, 4, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_Name                                                   OFFSET(get<T>, {0x1540, 8, 0, 0})
	CMember(TArray<FString>)                           LootEntryItemTypesToExclude                                 OFFSET(get<T>, {0x1548, 16, 0, 0})
	CMember(TArray<FString>)                           LootEntryItemTypesToCombine                                 OFFSET(get<T>, {0x1558, 16, 0, 0})


	/// Functions
	// Function /Script/AnnualRefundTokenUI.FortPurchaseHistoryEntryBase.UpdateItemList
	// void UpdateItemList(TArray<UFortCosmeticItemCard*>& ItemCards);                                                          // [0x130d900] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/AnnualRefundTokenUI.FortPurchaseHistoryEntry
/// Size: 0x0000 (0x001570 - 0x001570)
class UFortPurchaseHistoryEntry : public UFortPurchaseHistoryEntryBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5488;

public:


	/// Functions
	// Function /Script/AnnualRefundTokenUI.FortPurchaseHistoryEntry.SetupItemCard
	// void SetupItemCard(class UFortCosmeticItemCard* ItemCard, class UFortItem* Item);                                        // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /Script/AnnualRefundTokenUI.FortPurchaseHistoryEntry.SetPurchaseText
	// void SetPurchaseText(FText& PurchaseDateText, FText& RefundDateText, bool bHasBeenRefunded, EFortPurchaseHistoryRefundType RefundType); // [0x130d900] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/AnnualRefundTokenUI.FortPurchaseHistoryEntry.OnSetHistory
	// void OnSetHistory(bool bHasBeenRefunded, bool bIsCancelPurchaseEligible, bool bIsTokenlessRefund, bool bPlayerHasTokens, bool bNonRefundable, bool IsPartOfABundle, bool IsNextRefundable, int32_t IndexInBundle, int32_t NumPurchasesInBundle); // [0x130d900] Event|Protected|BlueprintEvent 
};

/// Class /Script/AnnualRefundTokenUI.FortPurchaseHistoryBundleEntry
/// Size: 0x0000 (0x001570 - 0x001570)
class UFortPurchaseHistoryBundleEntry : public UFortPurchaseHistoryEntryBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5488;

public:
	DMember(bool)                                      bIsExpanded                                                 OFFSET(get<bool>, {0x1568, 1, 0, 0})


	/// Functions
	// Function /Script/AnnualRefundTokenUI.FortPurchaseHistoryBundleEntry.SetExpandButtonText
	// void SetExpandButtonText(int32_t NumPurchases);                                                                          // [0x130d900] Event|Public|BlueprintEvent 
};

/// Class /Script/AnnualRefundTokenUI.FortPurchaseHistoryListView
/// Size: 0x0120 (0x000298 - 0x0003B8)
class UFortPurchaseHistoryListView : public UListViewBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 952;

public:
};

/// Class /Script/AnnualRefundTokenUI.FortPurchaseHistoryTreeView
/// Size: 0x0038 (0x0003B8 - 0x0003F0)
class UFortPurchaseHistoryTreeView : public UFortPurchaseHistoryListView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1008;

public:
	CMember(class UClass*)                             HeaderEntryWidgetClass                                      OFFSET(get<T>, {0x3C8, 8, 0, 0})
};

/// Class /Script/AnnualRefundTokenUI.FortAnnualRefundTicket
/// Size: 0x0008 (0x0002C0 - 0x0002C8)
class UFortAnnualRefundTicket : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 712;

public:
	CMember(class UCommonTextBlock*)                   Text_AvailableDate                                          OFFSET(get<T>, {0x2C0, 8, 0, 0})


	/// Functions
	// Function /Script/AnnualRefundTokenUI.FortAnnualRefundTicket.OnUpdatePendingState
	// void OnUpdatePendingState(bool bIsPending);                                                                              // [0x130d900] Event|Public|BlueprintEvent 
	// Function /Script/AnnualRefundTokenUI.FortAnnualRefundTicket.OnUpdateAvailableState
	// void OnUpdateAvailableState(bool bIsAvailable);                                                                          // [0x130d900] Event|Public|BlueprintEvent 
	// Function /Script/AnnualRefundTokenUI.FortAnnualRefundTicket.OnPlayLockingAnimation
	// void OnPlayLockingAnimation();                                                                                           // [0x130d900] Event|Public|BlueprintEvent 
};

/// Class /Script/AnnualRefundTokenUI.FortAnnualRefundTokenData
/// Size: 0x0020 (0x000530 - 0x000550)
class UFortAnnualRefundTokenData : public UFortGameFeatureData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1360;

public:
	CMember(TWeakObjectPtr<UClass*>)                   PurchaseHistoryScreenClass                                  OFFSET(get<T>, {0x530, 32, 0, 0})
};

/// Class /Script/AnnualRefundTokenUI.FortPurchaseHistoryScreen
/// Size: 0x0100 (0x000570 - 0x000670)
class UFortPurchaseHistoryScreen : public UFortActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
	SMember(FDataTableRowHandle)                       BackAction                                                  OFFSET(getStruct<T>, {0x570, 16, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   RefundConfirmationClass                                     OFFSET(get<T>, {0x598, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   DirectPurchaseInfoModalClass                                OFFSET(get<T>, {0x5B8, 32, 0, 0})
	CMember(class UCommonAnimatedSwitcher*)            Switcher_MainContent                                        OFFSET(get<T>, {0x5D8, 8, 0, 0})
	CMember(class UFortPurchaseHistoryTreeView*)       TreeView_Purchases                                          OFFSET(get<T>, {0x5E0, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_CloseTouch                                           OFFSET(get<T>, {0x5E8, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_PostApproval                                         OFFSET(get<T>, {0x5F0, 8, 0, 0})
	CMember(class UScrollBox*)                         ScrollBox_ReturnTypeInfo                                    OFFSET(get<T>, {0x5F8, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_Desc                                                   OFFSET(get<T>, {0x600, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_RefundCount                                            OFFSET(get<T>, {0x608, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_ResultHeader                                           OFFSET(get<T>, {0x610, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_ResultTitle                                            OFFSET(get<T>, {0x618, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_ResultDesc                                             OFFSET(get<T>, {0x620, 8, 0, 0})
	CMember(class UFortAnnualRefundTicket*)            RefundTicket_Left                                           OFFSET(get<T>, {0x628, 8, 0, 0})
	CMember(class UFortAnnualRefundTicket*)            RefundTicket_Center                                         OFFSET(get<T>, {0x630, 8, 0, 0})
	CMember(class UFortAnnualRefundTicket*)            RefundTicket_Right                                          OFFSET(get<T>, {0x638, 8, 0, 0})
	CMember(class UWidget*)                            Widget_CancelPurchaseInfo                                   OFFSET(get<T>, {0x640, 8, 0, 0})
	CMember(class UWidget*)                            Widget_ReturnTicketInfo                                     OFFSET(get<T>, {0x648, 8, 0, 0})
	CMember(class UWidget*)                            Widget_TokenlessRefundInfo                                  OFFSET(get<T>, {0x650, 8, 0, 0})
	CMember(class UWidget*)                            Widget_NonRefundableInfo                                    OFFSET(get<T>, {0x658, 8, 0, 0})
	CMember(class UWidget*)                            Widget_BundledPurchaseInfo                                  OFFSET(get<T>, {0x660, 8, 0, 0})
	CMember(class UWidget*)                            Widget_BundledPurchaseTokenlessRefundInfo                   OFFSET(get<T>, {0x668, 8, 0, 0})


	/// Functions
	// Function /Script/AnnualRefundTokenUI.FortPurchaseHistoryScreen.OnPopulateView
	// void OnPopulateView();                                                                                                   // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /Script/AnnualRefundTokenUI.FortPurchaseHistoryScreen.OnNoPurchasesAvailable
	// void OnNoPurchasesAvailable();                                                                                           // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /Script/AnnualRefundTokenUI.FortPurchaseHistoryScreen.OnEndRefundSubmission
	// void OnEndRefundSubmission();                                                                                            // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /Script/AnnualRefundTokenUI.FortPurchaseHistoryScreen.OnBeginRefundSubmission
	// void OnBeginRefundSubmission();                                                                                          // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /Script/AnnualRefundTokenUI.FortPurchaseHistoryScreen.BP_IsShowingPurchases
	// bool BP_IsShowingPurchases();                                                                                            // [0x130d900] Event|Protected|BlueprintEvent 
};

/// Class /Script/AnnualRefundTokenUI.FortRefundConfirmation
/// Size: 0x0058 (0x000570 - 0x0005C8)
class UFortRefundConfirmation : public UFortActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1480;

public:
	CMember(class UCommonTextBlock*)                   Text_RefundsRemaining                                       OFFSET(get<T>, {0x580, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_RefundCount                                            OFFSET(get<T>, {0x588, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_AreYouSure                                             OFFSET(get<T>, {0x590, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Yes                                                  OFFSET(get<T>, {0x598, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_No                                                   OFFSET(get<T>, {0x5A0, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_CloseTouch                                           OFFSET(get<T>, {0x5A8, 8, 0, 0})
	CMember(class UFortAnnualRefundTicket*)            RefundTicket_Left                                           OFFSET(get<T>, {0x5B0, 8, 0, 0})
	CMember(class UFortAnnualRefundTicket*)            RefundTicket_Center                                         OFFSET(get<T>, {0x5B8, 8, 0, 0})
	CMember(class UFortAnnualRefundTicket*)            RefundTicket_Right                                          OFFSET(get<T>, {0x5C0, 8, 0, 0})


	/// Functions
	// Function /Script/AnnualRefundTokenUI.FortRefundConfirmation.BP_UpdateRefundType
	// void BP_UpdateRefundType(EFortPurchaseHistoryRefundType RefundType, bool bBundledRefund);                                // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /Script/AnnualRefundTokenUI.FortRefundConfirmation.BP_UpdateItemsList
	// void BP_UpdateItemsList(TArray<UFortItemDefinition*>& SelectedItemDefs, int32_t TotalMtxPaid);                           // [0x130d900] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Struct /Script/AnnualRefundTokenUI.PurchaseHistoryBundleEntry
/// Size: 0x0020 (0x000000 - 0x000020)
class FPurchaseHistoryBundleEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   ID                                                          OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Enum /Script/AnnualRefundTokenUI.EFortPurchaseHistoryRefundType
/// Size: 0x05
enum EFortPurchaseHistoryRefundType : uint8_t
{
	EFortPurchaseHistoryRefundType__CancelPurchase                                   = 0,
	EFortPurchaseHistoryRefundType__ReturnTicket                                     = 1,
	EFortPurchaseHistoryRefundType__TokenlessRefund                                  = 2,
	EFortPurchaseHistoryRefundType__NonRefundable                                    = 3,
	EFortPurchaseHistoryRefundType__EFortPurchaseHistoryRefundType_MAX               = 4
};

