
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: CRD_ModalDialogRuntime
/// dependency: Engine
/// dependency: ModelViewViewModel
/// dependency: UMG

/// Enum /Script/CRD_ModalDialogUI.ECreativeModalDialogViewmodelResponse
/// Size: 0x08
enum class ECreativeModalDialogViewmodelResponse : uint8_t
{
	ECreativeModalDialogViewmodelResponse__None                                      = 0,
	ECreativeModalDialogViewmodelResponse__Button1                                   = 1,
	ECreativeModalDialogViewmodelResponse__Button2                                   = 2,
	ECreativeModalDialogViewmodelResponse__Button3                                   = 3,
	ECreativeModalDialogViewmodelResponse__Button4                                   = 4,
	ECreativeModalDialogViewmodelResponse__Button5                                   = 5,
	ECreativeModalDialogViewmodelResponse__Button6                                   = 6,
	ECreativeModalDialogViewmodelResponse__ECreativeModalDialogViewmodelResponse_MAX = 7
};

/// Class /Script/CRD_ModalDialogUI.CreativeModalDialogAllowedConversionFunction
/// Size: 0x0000 (0x000028 - 0x000028)
class UCreativeModalDialogAllowedConversionFunction : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogAllowedConversionFunction.GetResponseNone
	// ECreativeModalDialogViewmodelResponse GetResponseNone(FWidgetEventField Field);                                       // [0xb5d91bc] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogAllowedConversionFunction.GetResponseButton6
	// ECreativeModalDialogViewmodelResponse GetResponseButton6(FWidgetEventField Field);                                    // [0xb5d90bc] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogAllowedConversionFunction.GetResponseButton5
	// ECreativeModalDialogViewmodelResponse GetResponseButton5(FWidgetEventField Field);                                    // [0xb5d8fbc] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogAllowedConversionFunction.GetResponseButton4
	// ECreativeModalDialogViewmodelResponse GetResponseButton4(FWidgetEventField Field);                                    // [0xb5d8ebc] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogAllowedConversionFunction.GetResponseButton3
	// ECreativeModalDialogViewmodelResponse GetResponseButton3(FWidgetEventField Field);                                    // [0xb5d8dbc] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogAllowedConversionFunction.GetResponseButton2
	// ECreativeModalDialogViewmodelResponse GetResponseButton2(FWidgetEventField Field);                                    // [0xb5d8cbc] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogAllowedConversionFunction.GetResponseButton1
	// ECreativeModalDialogViewmodelResponse GetResponseButton1(FWidgetEventField Field);                                    // [0xb5d8bbc] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/CRD_ModalDialogUI.CreativeModalDialogConversionFunction
/// Size: 0x0000 (0x000028 - 0x000028)
class UCreativeModalDialogConversionFunction : public UCreativeModalDialogAllowedConversionFunction
{ 
public:


	/// Functions
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogConversionFunction.TranslateResponse
	// ECreativeModalDialogViewmodelResponse TranslateResponse(FWidgetEventField Field, ECreativeModalDialogViewmodelResponse Response); // [0xb5d8264] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogConversionFunction.GetRowIndexForButtonFromContentAlignment
	// int32_t GetRowIndexForButtonFromContentAlignment(ECreativeModalDialogAlignmentOption AlignmentOption, int32_t ButtonIndex, int32_t WideMaxColumns, int32_t TallMaxColumns, int32_t DefaultMaxColumns); // [0xb5d92b4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogConversionFunction.GetMarginFromContentAlignment
	// FMargin GetMarginFromContentAlignment(ECreativeModalDialogAlignmentOption AlignmentOption, float TallMarginAmount, float WideMarginAmount, float CenteredFullMarginAmount, float DefaultMarginAmount); // [0xb5d8a30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogConversionFunction.GetFloatingValueFromContentAlignment
	// float GetFloatingValueFromContentAlignment(ECreativeModalDialogAlignmentOption AlignmentOption, float TallValue, float WideValue, float CenteredFullValue, float DefaultValue); // [0xb5d8818] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogConversionFunction.GetColumnIndexForButtonFromContentAlignment
	// int32_t GetColumnIndexForButtonFromContentAlignment(ECreativeModalDialogAlignmentOption AlignmentOption, int32_t ButtonIndex, int32_t WideMaxColumns, int32_t TallMaxColumns, int32_t DefaultMaxColumns); // [0xb5d8698] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogConversionFunction.AssignCreativeModalDialogViewmodelResponse
	// ECreativeModalDialogViewmodelResponse AssignCreativeModalDialogViewmodelResponse(FMVVMEventField Field, ECreativeModalDialogViewmodelResponse Response); // [0xb5d8264] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel
/// Size: 0x0190 (0x000068 - 0x0001F8)
class UCreativeModalDialogViewmodel : public UMVVMViewModelBase
{ 
public:
	SDK_UNDEFINED(24,12356) /* FText */                __um(Title);                                                // 0x0068   (0x0018)  
	SDK_UNDEFINED(24,12357) /* FText */                __um(Body);                                                 // 0x0080   (0x0018)  
	class UDataTable*                                  TextStyleSet;                                               // 0x0098   (0x0008)  
	SDK_UNDEFINED(24,12358) /* FText */                __um(Button01_MainText);                                    // 0x00A0   (0x0018)  
	SDK_UNDEFINED(24,12359) /* FText */                __um(Button02_MainText);                                    // 0x00B8   (0x0018)  
	SDK_UNDEFINED(24,12360) /* FText */                __um(Button03_MainText);                                    // 0x00D0   (0x0018)  
	SDK_UNDEFINED(24,12361) /* FText */                __um(Button04_MainText);                                    // 0x00E8   (0x0018)  
	SDK_UNDEFINED(24,12362) /* FText */                __um(Button05_MainText);                                    // 0x0100   (0x0018)  
	SDK_UNDEFINED(24,12363) /* FText */                __um(Button06_MainText);                                    // 0x0118   (0x0018)  
	SDK_UNDEFINED(24,12364) /* FText */                __um(Button01_SubText);                                     // 0x0130   (0x0018)  
	SDK_UNDEFINED(24,12365) /* FText */                __um(Button02_SubText);                                     // 0x0148   (0x0018)  
	SDK_UNDEFINED(24,12366) /* FText */                __um(Button03_SubText);                                     // 0x0160   (0x0018)  
	SDK_UNDEFINED(24,12367) /* FText */                __um(Button04_SubText);                                     // 0x0178   (0x0018)  
	SDK_UNDEFINED(24,12368) /* FText */                __um(Button05_SubText);                                     // 0x0190   (0x0018)  
	SDK_UNDEFINED(24,12369) /* FText */                __um(Button06_SubText);                                     // 0x01A8   (0x0018)  
	class UTexture2D*                                  Art01_Image;                                                // 0x01C0   (0x0008)  
	class UTexture2D*                                  Art02_Image;                                                // 0x01C8   (0x0008)  
	ECreativeModalDialogAlignmentOption                ContentAlignment;                                           // 0x01D0   (0x0001)  
	bool                                               bShowBackground;                                            // 0x01D1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x01D2   (0x0002)  MISSED
	float                                              DialogBackgroundAlpha;                                      // 0x01D4   (0x0004)  
	ECreativeModalDialogTimerOption                    TimerOption;                                                // 0x01D8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x01D9   (0x0003)  MISSED
	float                                              Timeout;                                                    // 0x01DC   (0x0004)  
	float                                              RemainingTimeForTimeout;                                    // 0x01E0   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x01E4   (0x0004)  MISSED
	int64_t                                            NumberOfButtons;                                            // 0x01E8   (0x0008)  
	ECreativeModalBackActionBoundButtonOption          BackActionBoundButton;                                      // 0x01F0   (0x0001)  
	ECreativeModalDialogViewmodelResponse              Response;                                                   // 0x01F1   (0x0001)  
	unsigned char                                      UnknownData03_6[0x6];                                       // 0x01F2   (0x0006)  MISSED


	/// Functions
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.ShouldButton6UseFallbackDefaultInputAction
	// bool ShouldButton6UseFallbackDefaultInputAction();                                                                    // [0xb5d96bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.ShouldButton5UseFallbackDefaultInputAction
	// bool ShouldButton5UseFallbackDefaultInputAction();                                                                    // [0xb5d9690] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.ShouldButton4UseFallbackDefaultInputAction
	// bool ShouldButton4UseFallbackDefaultInputAction();                                                                    // [0xb5d9664] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.ShouldButton3UseFallbackDefaultInputAction
	// bool ShouldButton3UseFallbackDefaultInputAction();                                                                    // [0xb5d9638] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.ShouldButton2UseFallbackDefaultInputAction
	// bool ShouldButton2UseFallbackDefaultInputAction();                                                                    // [0xb5d960c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.ShouldButton1UseFallbackDefaultInputAction
	// bool ShouldButton1UseFallbackDefaultInputAction();                                                                    // [0xb5d95e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.IsTimerVisible
	// bool IsTimerVisible();                                                                                                // [0xb5d95b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.IsButton6Visible
	// bool IsButton6Visible();                                                                                              // [0xb5d9594] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.IsButton5Visible
	// bool IsButton5Visible();                                                                                              // [0xb5d9578] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.IsButton4Visible
	// bool IsButton4Visible();                                                                                              // [0xb5d955c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.IsButton3Visible
	// bool IsButton3Visible();                                                                                              // [0xb5d9540] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.IsButton2Visible
	// bool IsButton2Visible();                                                                                              // [0xb5d9524] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.IsButton1Visible
	// bool IsButton1Visible();                                                                                              // [0xb5d9508] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetVerticalAlignment
	// TEnumAsByte<EVerticalAlignment> GetVerticalAlignment();                                                               // [0xb5d9490] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetTimerVisibility
	// ESlateVisibility GetTimerVisibility();                                                                                // [0xb5d9458] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetTimeoutProgress
	// float GetTimeoutProgress();                                                                                           // [0xb5d9434] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetHorizontalAlignment
	// TEnumAsByte<EHorizontalAlignment> GetHorizontalAlignment();                                                           // [0xb5d89b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton6Visibility
	// ESlateVisibility GetButton6Visibility();                                                                              // [0xb5d867c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton6TriggeringInputAction
	// FDataTableRowHandle GetButton6TriggeringInputAction();                                                                // [0xb5d8640] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton5Visibility
	// ESlateVisibility GetButton5Visibility();                                                                              // [0xb5d8624] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton5TriggeringInputAction
	// FDataTableRowHandle GetButton5TriggeringInputAction();                                                                // [0xb5d85e8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton4Visibility
	// ESlateVisibility GetButton4Visibility();                                                                              // [0xb5d85cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton4TriggeringInputAction
	// FDataTableRowHandle GetButton4TriggeringInputAction();                                                                // [0xb5d8590] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton3Visibility
	// ESlateVisibility GetButton3Visibility();                                                                              // [0xb5d8574] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton3TriggeringInputAction
	// FDataTableRowHandle GetButton3TriggeringInputAction();                                                                // [0xb5d8538] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton2Visibility
	// ESlateVisibility GetButton2Visibility();                                                                              // [0xb5d851c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton2TriggeringInputAction
	// FDataTableRowHandle GetButton2TriggeringInputAction();                                                                // [0xb5d84e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton1Visibility
	// ESlateVisibility GetButton1Visibility();                                                                              // [0xb5d84c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton1TriggeringInputAction
	// FDataTableRowHandle GetButton1TriggeringInputAction();                                                                // [0xb5d8488] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetBackgroundVisibility
	// ESlateVisibility GetBackgroundVisibility();                                                                           // [0xb5d8464] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CRD_ModalDialogUI.CreativeModalDialogWidget
/// Size: 0x0010 (0x000400 - 0x000410)
class UCreativeModalDialogWidget : public UCommonActivatableWidget
{ 
public:
	FDataTableRowHandle                                MainMenuInputRowHandle;                                     // 0x0400   (0x0010)  
};

