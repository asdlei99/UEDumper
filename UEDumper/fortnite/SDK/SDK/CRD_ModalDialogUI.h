
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
	// ECreativeModalDialogViewmodelResponse GetResponseNone(FWidgetEventField Field);                                       // [0xb8388a4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogAllowedConversionFunction.GetResponseButton6
	// ECreativeModalDialogViewmodelResponse GetResponseButton6(FWidgetEventField Field);                                    // [0xb8387f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogAllowedConversionFunction.GetResponseButton5
	// ECreativeModalDialogViewmodelResponse GetResponseButton5(FWidgetEventField Field);                                    // [0xb83873c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogAllowedConversionFunction.GetResponseButton4
	// ECreativeModalDialogViewmodelResponse GetResponseButton4(FWidgetEventField Field);                                    // [0xb838688] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogAllowedConversionFunction.GetResponseButton3
	// ECreativeModalDialogViewmodelResponse GetResponseButton3(FWidgetEventField Field);                                    // [0xb8385d4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogAllowedConversionFunction.GetResponseButton2
	// ECreativeModalDialogViewmodelResponse GetResponseButton2(FWidgetEventField Field);                                    // [0xb838520] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogAllowedConversionFunction.GetResponseButton1
	// ECreativeModalDialogViewmodelResponse GetResponseButton1(FWidgetEventField Field);                                    // [0xb83846c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/CRD_ModalDialogUI.CreativeModalDialogConversionFunction
/// Size: 0x0000 (0x000028 - 0x000028)
class UCreativeModalDialogConversionFunction : public UCreativeModalDialogAllowedConversionFunction
{ 
public:


	/// Functions
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogConversionFunction.TranslateResponse
	// ECreativeModalDialogViewmodelResponse TranslateResponse(FWidgetEventField Field, ECreativeModalDialogViewmodelResponse Response); // [0xb837844] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogConversionFunction.GetRowIndexForButtonFromContentAlignment
	// int32_t GetRowIndexForButtonFromContentAlignment(ECreativeModalDialogAlignmentOption AlignmentOption, int32_t ButtonIndex, int32_t WideMaxColumns, int32_t TallMaxColumns, int32_t DefaultMaxColumns); // [0xb83894c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogConversionFunction.GetMarginFromContentAlignment
	// FMargin GetMarginFromContentAlignment(ECreativeModalDialogAlignmentOption AlignmentOption, float TallMarginAmount, float WideMarginAmount, float CenteredFullMarginAmount, float DefaultMarginAmount); // [0xb8381a8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogConversionFunction.GetFloatingValueFromContentAlignment
	// float GetFloatingValueFromContentAlignment(ECreativeModalDialogAlignmentOption AlignmentOption, float TallValue, float WideValue, float CenteredFullValue, float DefaultValue); // [0xb837e5c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogConversionFunction.GetColumnIndexForButtonFromContentAlignment
	// int32_t GetColumnIndexForButtonFromContentAlignment(ECreativeModalDialogAlignmentOption AlignmentOption, int32_t ButtonIndex, int32_t WideMaxColumns, int32_t TallMaxColumns, int32_t DefaultMaxColumns); // [0xb837ba8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogConversionFunction.AssignCreativeModalDialogViewmodelResponse
	// ECreativeModalDialogViewmodelResponse AssignCreativeModalDialogViewmodelResponse(FMVVMEventField Field, ECreativeModalDialogViewmodelResponse Response); // [0xb837844] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel
/// Size: 0x0190 (0x000068 - 0x0001F8)
class UCreativeModalDialogViewmodel : public UMVVMViewModelBase
{ 
public:
	SDK_UNDEFINED(24,12462) /* FText */                __um(Title);                                                // 0x0068   (0x0018)  
	SDK_UNDEFINED(24,12463) /* FText */                __um(Body);                                                 // 0x0080   (0x0018)  
	class UDataTable*                                  TextStyleSet;                                               // 0x0098   (0x0008)  
	SDK_UNDEFINED(24,12464) /* FText */                __um(Button01_MainText);                                    // 0x00A0   (0x0018)  
	SDK_UNDEFINED(24,12465) /* FText */                __um(Button02_MainText);                                    // 0x00B8   (0x0018)  
	SDK_UNDEFINED(24,12466) /* FText */                __um(Button03_MainText);                                    // 0x00D0   (0x0018)  
	SDK_UNDEFINED(24,12467) /* FText */                __um(Button04_MainText);                                    // 0x00E8   (0x0018)  
	SDK_UNDEFINED(24,12468) /* FText */                __um(Button05_MainText);                                    // 0x0100   (0x0018)  
	SDK_UNDEFINED(24,12469) /* FText */                __um(Button06_MainText);                                    // 0x0118   (0x0018)  
	SDK_UNDEFINED(24,12470) /* FText */                __um(Button01_SubText);                                     // 0x0130   (0x0018)  
	SDK_UNDEFINED(24,12471) /* FText */                __um(Button02_SubText);                                     // 0x0148   (0x0018)  
	SDK_UNDEFINED(24,12472) /* FText */                __um(Button03_SubText);                                     // 0x0160   (0x0018)  
	SDK_UNDEFINED(24,12473) /* FText */                __um(Button04_SubText);                                     // 0x0178   (0x0018)  
	SDK_UNDEFINED(24,12474) /* FText */                __um(Button05_SubText);                                     // 0x0190   (0x0018)  
	SDK_UNDEFINED(24,12475) /* FText */                __um(Button06_SubText);                                     // 0x01A8   (0x0018)  
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
	// bool ShouldButton6UseFallbackDefaultInputAction();                                                                    // [0xb838e88] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.ShouldButton5UseFallbackDefaultInputAction
	// bool ShouldButton5UseFallbackDefaultInputAction();                                                                    // [0xb838e5c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.ShouldButton4UseFallbackDefaultInputAction
	// bool ShouldButton4UseFallbackDefaultInputAction();                                                                    // [0xb838e30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.ShouldButton3UseFallbackDefaultInputAction
	// bool ShouldButton3UseFallbackDefaultInputAction();                                                                    // [0xb838e04] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.ShouldButton2UseFallbackDefaultInputAction
	// bool ShouldButton2UseFallbackDefaultInputAction();                                                                    // [0xb838dd8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.ShouldButton1UseFallbackDefaultInputAction
	// bool ShouldButton1UseFallbackDefaultInputAction();                                                                    // [0xb838dac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.IsTimerVisible
	// bool IsTimerVisible();                                                                                                // [0xb838d7c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.IsButton6Visible
	// bool IsButton6Visible();                                                                                              // [0xb838d60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.IsButton5Visible
	// bool IsButton5Visible();                                                                                              // [0xb838d44] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.IsButton4Visible
	// bool IsButton4Visible();                                                                                              // [0xb838d28] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.IsButton3Visible
	// bool IsButton3Visible();                                                                                              // [0xb838d0c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.IsButton2Visible
	// bool IsButton2Visible();                                                                                              // [0xb838cf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.IsButton1Visible
	// bool IsButton1Visible();                                                                                              // [0xb838cd4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetVerticalAlignment
	// TEnumAsByte<EVerticalAlignment> GetVerticalAlignment();                                                               // [0xb838c5c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetTimerVisibility
	// ESlateVisibility GetTimerVisibility();                                                                                // [0xb838c24] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetTimeoutProgress
	// float GetTimeoutProgress();                                                                                           // [0xb838c00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetHorizontalAlignment
	// TEnumAsByte<EHorizontalAlignment> GetHorizontalAlignment();                                                           // [0xb838130] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton6Visibility
	// ESlateVisibility GetButton6Visibility();                                                                              // [0xb837b8c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton6TriggeringInputAction
	// FDataTableRowHandle GetButton6TriggeringInputAction();                                                                // [0xb837b50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton5Visibility
	// ESlateVisibility GetButton5Visibility();                                                                              // [0xb837b34] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton5TriggeringInputAction
	// FDataTableRowHandle GetButton5TriggeringInputAction();                                                                // [0xb837af8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton4Visibility
	// ESlateVisibility GetButton4Visibility();                                                                              // [0xb837adc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton4TriggeringInputAction
	// FDataTableRowHandle GetButton4TriggeringInputAction();                                                                // [0xb837aa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton3Visibility
	// ESlateVisibility GetButton3Visibility();                                                                              // [0xb837a84] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton3TriggeringInputAction
	// FDataTableRowHandle GetButton3TriggeringInputAction();                                                                // [0xb837a48] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton2Visibility
	// ESlateVisibility GetButton2Visibility();                                                                              // [0xb837a2c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton2TriggeringInputAction
	// FDataTableRowHandle GetButton2TriggeringInputAction();                                                                // [0xb8379f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton1Visibility
	// ESlateVisibility GetButton1Visibility();                                                                              // [0xb8379d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton1TriggeringInputAction
	// FDataTableRowHandle GetButton1TriggeringInputAction();                                                                // [0xb837998] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetBackgroundVisibility
	// ESlateVisibility GetBackgroundVisibility();                                                                           // [0xb837974] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CRD_ModalDialogUI.CreativeModalDialogWidget
/// Size: 0x0010 (0x000400 - 0x000410)
class UCreativeModalDialogWidget : public UCommonActivatableWidget
{ 
public:
	FDataTableRowHandle                                MainMenuInputRowHandle;                                     // 0x0400   (0x0010)  
};

