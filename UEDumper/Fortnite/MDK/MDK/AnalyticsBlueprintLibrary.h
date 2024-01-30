
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAnalyticsBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.StartSessionWithAttributes
	// bool StartSessionWithAttributes(TArray<FAnalyticsEventAttr>& Attributes);                                                // [0x7dca130] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.StartSession
	// bool StartSession();                                                                                                     // [0x7dca0b8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetUserId
	// void SetUserId(FString UserId);                                                                                          // [0x7dc99d8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetSessionId
	// void SetSessionId(FString SessionId);                                                                                    // [0x7dc92f8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetLocation
	// void SetLocation(FString Location);                                                                                      // [0x7dc8c18] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetGender
	// void SetGender(FString Gender);                                                                                          // [0x7dc8538] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetBuildInfo
	// void SetBuildInfo(FString BuildInfo);                                                                                    // [0x7dc7e58] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetAge
	// void SetAge(int32_t Age);                                                                                                // [0x7dc7da8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleItemPurchaseWithAttributes
	// void RecordSimpleItemPurchaseWithAttributes(FString ItemId, int32_t ItemQuantity, TArray<FAnalyticsEventAttr>& Attributes); // [0x7dc7680] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleItemPurchase
	// void RecordSimpleItemPurchase(FString ItemId, int32_t ItemQuantity);                                                     // [0x7dc6fb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchaseWithAttributes
	// void RecordSimpleCurrencyPurchaseWithAttributes(FString GameCurrencyType, int32_t GameCurrencyAmount, TArray<FAnalyticsEventAttr>& Attributes); // [0x7dc6888] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchase
	// void RecordSimpleCurrencyPurchase(FString GameCurrencyType, int32_t GameCurrencyAmount);                                 // [0x7dc6168] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgressWithFullHierarchyAndAttributes
	// void RecordProgressWithFullHierarchyAndAttributes(FString ProgressType, TArray<FString>& ProgressNames, TArray<FAnalyticsEventAttr>& Attributes); // [0x7dc5a14] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgressWithAttributes
	// void RecordProgressWithAttributes(FString ProgressType, FString ProgressName, TArray<FAnalyticsEventAttr>& Attributes);  // [0x7dc52d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgress
	// void RecordProgress(FString ProgressType, FString ProgressName);                                                         // [0x7dc4b98] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordItemPurchase
	// void RecordItemPurchase(FString ItemId, FString Currency, int32_t PerItemCost, int32_t ItemQuantity);                    // [0x7dc4438] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEventWithAttributes
	// void RecordEventWithAttributes(FString EventName, TArray<FAnalyticsEventAttr>& Attributes);                              // [0x7dc3d48] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEventWithAttribute
	// void RecordEventWithAttribute(FString EventName, FString AttributeName, FString AttributeValue);                         // [0x7dc360c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEvent
	// void RecordEvent(FString EventName);                                                                                     // [0x7dc2f24] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordErrorWithAttributes
	// void RecordErrorWithAttributes(FString Error, TArray<FAnalyticsEventAttr>& Attributes);                                  // [0x7dc2834] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordError
	// void RecordError(FString Error);                                                                                         // [0x7dc2150] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyPurchase
	// void RecordCurrencyPurchase(FString GameCurrencyType, int32_t GameCurrencyAmount, FString RealCurrencyType, float RealMoneyCost, FString PaymentProvider); // [0x7dc19a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyGivenWithAttributes
	// void RecordCurrencyGivenWithAttributes(FString GameCurrencyType, int32_t GameCurrencyAmount, TArray<FAnalyticsEventAttr>& Attributes); // [0x7dc1278] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyGiven
	// void RecordCurrencyGiven(FString GameCurrencyType, int32_t GameCurrencyAmount);                                          // [0x7dc0b54] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.MakeEventAttribute
	// FAnalyticsEventAttr MakeEventAttribute(FString AttributeName, FString AttributeValue);                                   // [0x7dc0414] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.GetUserId
	// FString GetUserId();                                                                                                     // [0x7dbfd8c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.GetSessionId
	// FString GetSessionId();                                                                                                  // [0x7dbf704] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.FlushEvents
	// void FlushEvents();                                                                                                      // [0x7dbf6a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.EndSession
	// void EndSession();                                                                                                       // [0x7dbf63c] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/AnalyticsBlueprintLibrary.AnalyticsEventAttr
/// Size: 0x0020 (0x000000 - 0x000020)
class FAnalyticsEventAttr : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   Value                                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

