
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: SlateCore
/// dependency: UMG

/// Class /Script/AdvancedWidgets.RadialSlider
/// Size: 0x0628 (0x000178 - 0x0007A0)
class URadialSlider : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1952;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x178, 4, 0, 0})
	SMember(FDelegateProperty)                         ValueDelegate                                               OFFSET(getStruct<T>, {0x17C, 12, 0, 0})
	DMember(bool)                                      bUseCustomDefaultValue                                      OFFSET(get<bool>, {0x188, 1, 0, 0})
	DMember(float)                                     CustomDefaultValue                                          OFFSET(get<float>, {0x18C, 4, 0, 0})
	SMember(FRuntimeFloatCurve)                        SliderRange                                                 OFFSET(getStruct<T>, {0x190, 136, 0, 0})
	CMember(TArray<float>)                             ValueTags                                                   OFFSET(get<T>, {0x218, 16, 0, 0})
	DMember(float)                                     SliderHandleStartAngle                                      OFFSET(get<float>, {0x228, 4, 0, 0})
	DMember(float)                                     SliderHandleEndAngle                                        OFFSET(get<float>, {0x22C, 4, 0, 0})
	DMember(float)                                     AngularOffset                                               OFFSET(get<float>, {0x230, 4, 0, 0})
	SMember(FVector2D)                                 HandStartEndRatio                                           OFFSET(getStruct<T>, {0x238, 16, 0, 0})
	SMember(FSliderStyle)                              WidgetStyle                                                 OFFSET(getStruct<T>, {0x250, 1184, 0, 0})
	SMember(FLinearColor)                              SliderBarColor                                              OFFSET(getStruct<T>, {0x6F0, 16, 0, 0})
	SMember(FLinearColor)                              SliderProgressColor                                         OFFSET(getStruct<T>, {0x700, 16, 0, 0})
	SMember(FLinearColor)                              SliderHandleColor                                           OFFSET(getStruct<T>, {0x710, 16, 0, 0})
	SMember(FLinearColor)                              CenterBackgroundColor                                       OFFSET(getStruct<T>, {0x720, 16, 0, 0})
	DMember(bool)                                      Locked                                                      OFFSET(get<bool>, {0x730, 1, 0, 0})
	DMember(bool)                                      MouseUsesStep                                               OFFSET(get<bool>, {0x731, 1, 0, 0})
	DMember(bool)                                      RequiresControllerLock                                      OFFSET(get<bool>, {0x732, 1, 0, 0})
	DMember(float)                                     StepSize                                                    OFFSET(get<float>, {0x734, 4, 0, 0})
	DMember(bool)                                      IsFocusable                                                 OFFSET(get<bool>, {0x738, 1, 0, 0})
	DMember(bool)                                      UseVerticalDrag                                             OFFSET(get<bool>, {0x739, 1, 0, 0})
	DMember(bool)                                      ShowSliderHandle                                            OFFSET(get<bool>, {0x73A, 1, 0, 0})
	DMember(bool)                                      ShowSliderHand                                              OFFSET(get<bool>, {0x73B, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMouseCaptureBegin                                         OFFSET(getStruct<T>, {0x740, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMouseCaptureEnd                                           OFFSET(getStruct<T>, {0x750, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnControllerCaptureBegin                                    OFFSET(getStruct<T>, {0x760, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnControllerCaptureEnd                                      OFFSET(getStruct<T>, {0x770, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnValueChanged                                              OFFSET(getStruct<T>, {0x780, 16, 0, 0})


	/// Functions
	// Function /Script/AdvancedWidgets.RadialSlider.SetValueTags
	// void SetValueTags(TArray<float>& InValueTags);                                                                           // [0xad2a014] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetValue
	// void SetValue(float InValue);                                                                                            // [0xad29f94] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetUseVerticalDrag
	// void SetUseVerticalDrag(bool InUseVerticalDrag);                                                                         // [0xad29f0c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetStepSize
	// void SetStepSize(float InValue);                                                                                         // [0xad29e8c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetSliderRange
	// void SetSliderRange(FRuntimeFloatCurve& InSliderRange);                                                                  // [0xad29da0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetSliderProgressColor
	// void SetSliderProgressColor(FLinearColor InValue);                                                                       // [0xad29c5c] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetSliderHandleStartAngle
	// void SetSliderHandleStartAngle(float InValue);                                                                           // [0xad29bcc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetSliderHandleEndAngle
	// void SetSliderHandleEndAngle(float InValue);                                                                             // [0xad29b3c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetSliderHandleColor
	// void SetSliderHandleColor(FLinearColor InValue);                                                                         // [0xad299f8] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetSliderBarColor
	// void SetSliderBarColor(FLinearColor InValue);                                                                            // [0xad298b4] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetShowSliderHandle
	// void SetShowSliderHandle(bool InShowSliderHandle);                                                                       // [0xad2982c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetShowSliderHand
	// void SetShowSliderHand(bool InShowSliderHand);                                                                           // [0xad297a4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetLocked
	// void SetLocked(bool InValue);                                                                                            // [0xad296e8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetHandStartEndRatio
	// void SetHandStartEndRatio(FVector2D InValue);                                                                            // [0xad2959c] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetCustomDefaultValue
	// void SetCustomDefaultValue(float InValue);                                                                               // [0xad2951c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetCenterBackgroundColor
	// void SetCenterBackgroundColor(FLinearColor InValue);                                                                     // [0xad293d8] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetAngularOffset
	// void SetAngularOffset(float InValue);                                                                                    // [0xad2934c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.GetValue
	// float GetValue();                                                                                                        // [0xad29324] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AdvancedWidgets.RadialSlider.GetNormalizedSliderHandlePosition
	// float GetNormalizedSliderHandlePosition();                                                                               // [0xad292ec] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AdvancedWidgets.RadialSlider.GetCustomDefaultValue
	// float GetCustomDefaultValue();                                                                                           // [0xad292c4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

