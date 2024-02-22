
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/PurchaseFlow.PurchaseFlowJSBridge
/// Size: 0x0010 (0x000028 - 0x000038)
class UPurchaseFlowJSBridge : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0000   (0x0038)  MISSED


	/// Functions
	// Function /Script/PurchaseFlow.PurchaseFlowJSBridge.RequestClose
	// void RequestClose(FString CloseInfo);                                                                                 // [0x7e92a94] Final|Native|Public  
	// Function /Script/PurchaseFlow.PurchaseFlowJSBridge.Receipt
	// void Receipt(FPurchaseFlowReceiptParam Receipt);                                                                      // [0x7e9291c] Final|Native|Public  
	// Function /Script/PurchaseFlow.PurchaseFlowJSBridge.LaunchValidatedExternalBrowserUrl
	// bool LaunchValidatedExternalBrowserUrl(FString AllowedBrowserID, FString URL);                                        // [0x7e92214] Final|Native|Public  
	// Function /Script/PurchaseFlow.PurchaseFlowJSBridge.LaunchExternalBrowserUrl
	// bool LaunchExternalBrowserUrl(FString URL);                                                                           // [0x7e91b38] Final|Native|Public  
	// Function /Script/PurchaseFlow.PurchaseFlowJSBridge.GetExternalBrowserPath
	// FString GetExternalBrowserPath(FString BrowserId);                                                                    // [0x7e9146c] Final|Native|Public  
	// Function /Script/PurchaseFlow.PurchaseFlowJSBridge.GetExternalBrowserName
	// FString GetExternalBrowserName(FString BrowserId);                                                                    // [0x7e90da0] Final|Native|Public  
	// Function /Script/PurchaseFlow.PurchaseFlowJSBridge.GetDefaultExternalBrowserID
	// FString GetDefaultExternalBrowserID(FString URL);                                                                     // [0x7e906e8] Final|Native|Public  
};

/// Struct /Script/PurchaseFlow.PurchaseFlowItem
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPurchaseFlowItem
{ 
	SDK_UNDEFINED(16,15225) /* FString */              __um(ItemId);                                               // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,15226) /* FString */              __um(EntitlementId);                                        // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,15227) /* FString */              __um(ValidationInfo);                                       // 0x0020   (0x0010)  
};

/// Struct /Script/PurchaseFlow.PurchaseFlowOffer
/// Size: 0x0038 (0x000000 - 0x000038)
struct FPurchaseFlowOffer
{ 
	SDK_UNDEFINED(16,15228) /* FString */              __um(OfferNamespace);                                       // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,15229) /* FString */              __um(OfferId);                                              // 0x0010   (0x0010)  
	int32_t                                            Quantity;                                                   // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	TArray<FPurchaseFlowItem>                          Items;                                                      // 0x0028   (0x0010)  
};

/// Struct /Script/PurchaseFlow.PurchaseFlowReceiptParam
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPurchaseFlowReceiptParam
{ 
	SDK_UNDEFINED(16,15230) /* FString */              __um(TransactionId);                                        // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,15231) /* FString */              __um(TransactionState);                                     // 0x0010   (0x0010)  
	TArray<FPurchaseFlowOffer>                         Offers;                                                     // 0x0020   (0x0010)  
};

