
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: SlateCore

/// Struct /Engine/Transient.ChaosDestructionEvent_SWC
/// Size: 0x0044 (0x000000 - 0x000044)
struct FChaosDestructionEvent_SWC
{ 
	FVector3f                                          Position;                                                   // 0x0000   (0x000C)  
	FVector3f                                          Normal;                                                     // 0x000C   (0x000C)  
	FVector3f                                          Velocity;                                                   // 0x0018   (0x000C)  
	FVector3f                                          AngularVelocity;                                            // 0x0024   (0x000C)  
	float                                              ExtentMin;                                                  // 0x0030   (0x0004)  
	float                                              ExtentMax;                                                  // 0x0034   (0x0004)  
	int32_t                                            ParticleID;                                                 // 0x0038   (0x0004)  
	float                                              Time;                                                       // 0x003C   (0x0004)  
	int32_t                                            Type;                                                       // 0x0040   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_73c83f300aa939fa
/// Size: 0x0004 (0x000000 - 0x000004)
struct FPropertyBag_73c83f300aa939fa
{ 
	float                                              LineHeightPercentage;                                       // 0x0000   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_862508c04c749853
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPropertyBag_862508c04c749853
{ 
	FMargin                                            Margin;                                                     // 0x0000   (0x0010)  
};

/// Struct /Engine/Transient.PropertyBag_64a74a7b360fdbb7
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPropertyBag_64a74a7b360fdbb7
{ 
	float                                              LineHeightPercentage;                                       // 0x0000   (0x0004)  
	float                                              Font_Size;                                                  // 0x0004   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_16760b1878cd5980
/// Size: 0x0014 (0x000000 - 0x000014)
struct FPropertyBag_16760b1878cd5980
{ 
	FMargin                                            Margin;                                                     // 0x0000   (0x0010)  
	float                                              LineHeightPercentage;                                       // 0x0010   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_82c781121f843240
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPropertyBag_82c781121f843240
{ 
	FMargin                                            Margin;                                                     // 0x0000   (0x0010)  
};

/// Struct /Engine/Transient.PropertyBag_9052cd0803aafdea
/// Size: 0x0004 (0x000000 - 0x000004)
struct FPropertyBag_9052cd0803aafdea
{ 
	float                                              Font_Size;                                                  // 0x0000   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_9785c684a51bc7ff
/// Size: 0x0004 (0x000000 - 0x000004)
struct FPropertyBag_9785c684a51bc7ff
{ 
	FName                                              Font_TypefaceFontName;                                      // 0x0000   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_4872b79d526d6434
/// Size: 0x001C (0x000000 - 0x00001C)
struct FPropertyBag_4872b79d526d6434
{ 
	class UObject*                                     Font_FontObject;                                            // 0x0000   (0x0008)  
	FName                                              Font_TypefaceFontName;                                      // 0x0008   (0x0004)  
	int32_t                                            Font_LetterSpacing;                                         // 0x000C   (0x0004)  
	ETextTransformPolicy                               TextTransformPolicy;                                        // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              LineHeightPercentage;                                       // 0x0014   (0x0004)  
	float                                              Font_SkewAmount;                                            // 0x0018   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_a7958e7396c6f880
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPropertyBag_a7958e7396c6f880
{ 
	float                                              Font_Size;                                                  // 0x0000   (0x0004)  
	int32_t                                            Font_LetterSpacing;                                         // 0x0004   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_b5cc0598c18b1620
/// Size: 0x000C (0x000000 - 0x00000C)
struct FPropertyBag_b5cc0598c18b1620
{ 
	FName                                              Font_TypefaceFontName;                                      // 0x0000   (0x0004)  
	float                                              Font_Size;                                                  // 0x0004   (0x0004)  
	int32_t                                            Font_LetterSpacing;                                         // 0x0008   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_7169f8311d5daafa
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPropertyBag_7169f8311d5daafa
{ 
	FName                                              Font_TypefaceFontName;                                      // 0x0000   (0x0004)  
	int32_t                                            Font_LetterSpacing;                                         // 0x0004   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_2333ef8889c9940c
/// Size: 0x0009 (0x000000 - 0x000009)
struct FPropertyBag_2333ef8889c9940c
{ 
	FName                                              Font_TypefaceFontName;                                      // 0x0000   (0x0004)  
	int32_t                                            Font_LetterSpacing;                                         // 0x0004   (0x0004)  
	ETextTransformPolicy                               TextTransformPolicy;                                        // 0x0008   (0x0001)  
};

/// Struct /Engine/Transient.PropertyBag_168be549f448f00f
/// Size: 0x0004 (0x000000 - 0x000004)
struct FPropertyBag_168be549f448f00f
{ 
	float                                              Font_Size;                                                  // 0x0000   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_d0c4da79a7f25340
/// Size: 0x0004 (0x000000 - 0x000004)
struct FPropertyBag_d0c4da79a7f25340
{ 
	float                                              Font_Size;                                                  // 0x0000   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_e7657ded7ddcd645
/// Size: 0x0014 (0x000000 - 0x000014)
struct FPropertyBag_e7657ded7ddcd645
{ 
	class UObject*                                     Font_FontObject;                                            // 0x0000   (0x0008)  
	FName                                              Font_TypefaceFontName;                                      // 0x0008   (0x0004)  
	float                                              Font_Size;                                                  // 0x000C   (0x0004)  
	float                                              Font_SkewAmount;                                            // 0x0010   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_672e29496908d0ce
/// Size: 0x0004 (0x000000 - 0x000004)
struct FPropertyBag_672e29496908d0ce
{ 
	FName                                              Font_TypefaceFontName;                                      // 0x0000   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_4fa33aec45bb6a5c
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPropertyBag_4fa33aec45bb6a5c
{ 
	class UObject*                                     Font_FontMaterial;                                          // 0x0000   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_11c88de5d33791ad
/// Size: 0x0064 (0x000000 - 0x000064)
struct FPropertyBag_11c88de5d33791ad
{ 
	FSlateColor                                        Color_Idle;                                                 // 0x0000   (0x0014)  
	FSlateColor                                        Color_Hovered;                                              // 0x0014   (0x0014)  
	FSlateColor                                        Color_Focused;                                              // 0x0028   (0x0014)  
	FSlateColor                                        Color_Pressed;                                              // 0x003C   (0x0014)  
	FSlateColor                                        Color_Disabled;                                             // 0x0050   (0x0014)  
};

/// Struct /Engine/Transient.PropertyBag_6919764150bc1872
/// Size: 0x0058 (0x000000 - 0x000058)
struct FPropertyBag_6919764150bc1872
{ 
	FSlateFontInfo                                     Font;                                                       // 0x0000   (0x0058)  
};

/// Struct /Engine/Transient.PropertyBag_a7e2748614b0ee47
/// Size: 0x02AC (0x000000 - 0x0002AC)
struct FPropertyBag_a7e2748614b0ee47
{ 
	FSlateFontInfo                                     LargePrimaryFont;                                           // 0x0000   (0x0058)  
	FSlateFontInfo                                     LargeSecondaryFont;                                         // 0x0058   (0x0058)  
	FSlateFontInfo                                     MediumPrimaryFont;                                          // 0x00B0   (0x0058)  
	FSlateFontInfo                                     MeduimSecondaryFont;                                        // 0x0108   (0x0058)  
	FSlateFontInfo                                     SmallPrimaryFont;                                           // 0x0160   (0x0058)  
	FSlateFontInfo                                     SmallSecondaryFont;                                         // 0x01B8   (0x0058)  
	FMargin                                            SingleTextLargePadding;                                     // 0x0210   (0x0010)  
	FMargin                                            SingleTextMediumPadding;                                    // 0x0220   (0x0010)  
	FMargin                                            SingleTextSmallPadding;                                     // 0x0230   (0x0010)  
	FMargin                                            DoubleTextLargePadding;                                     // 0x0240   (0x0010)  
	FMargin                                            DoubleTextMediumPadding;                                    // 0x0250   (0x0010)  
	FMargin                                            DoubleTextSmallPadding;                                     // 0x0260   (0x0010)  
	FMargin                                            DoubleTextSecondaryLargePadding;                            // 0x0270   (0x0010)  
	FMargin                                            DoubleTextSecondaryMediumPadding;                           // 0x0280   (0x0010)  
	FMargin                                            DoubleTextSecondarySmallPadding;                            // 0x0290   (0x0010)  
	int32_t                                            LargeHeight;                                                // 0x02A0   (0x0004)  
	int32_t                                            MediumHeight;                                               // 0x02A4   (0x0004)  
	int32_t                                            SmallHeight;                                                // 0x02A8   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_af04d233aa9a59a
/// Size: 0x0058 (0x000000 - 0x000058)
struct FPropertyBag_af04d233aa9a59a
{ 
	FSlateFontInfo                                     GamepadPromptFont;                                          // 0x0000   (0x0058)  
};

/// Struct /Engine/Transient.PropertyBag_a6273038b911ea64
/// Size: 0x0040 (0x000000 - 0x000040)
struct FPropertyBag_a6273038b911ea64
{ 
	class UObject*                                     LargePrimaryFont_FontMaterial;                              // 0x0000   (0x0008)  
	class UObject*                                     LargeSecondaryFont_FontMaterial;                            // 0x0008   (0x0008)  
	class UObject*                                     MediumPrimaryFont_FontMaterial;                             // 0x0010   (0x0008)  
	class UObject*                                     MeduimSecondaryFont_FontMaterial;                           // 0x0018   (0x0008)  
	class UObject*                                     SmallPrimaryFont_FontMaterial;                              // 0x0020   (0x0008)  
	class UObject*                                     SmallSecondaryFont_FontMaterial;                            // 0x0028   (0x0008)  
	class UMaterialInstance*                           BackgroundMaterial;                                         // 0x0030   (0x0008)  
	class UMaterialInstance*                           BorderMaterial;                                             // 0x0038   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_48c6b66b4970f05e
/// Size: 0x0040 (0x000000 - 0x000040)
struct FPropertyBag_48c6b66b4970f05e
{ 
	class UMaterialInstance*                           RegularFontMaterial;                                        // 0x0000   (0x0008)  
	class UMaterialInstance*                           RegularSecondaryFontMaterial;                               // 0x0008   (0x0008)  
	class UMaterialInstance*                           RegularBackgroundMaterial;                                  // 0x0010   (0x0008)  
	class UMaterialInstance*                           RegularOutlineMaterial;                                     // 0x0018   (0x0008)  
	class UMaterialInstance*                           QuietFontMaterial;                                          // 0x0020   (0x0008)  
	class UMaterialInstance*                           QuietSecondaryFontMaterial;                                 // 0x0028   (0x0008)  
	class UMaterialInstance*                           QuietBackgroundMaterial;                                    // 0x0030   (0x0008)  
	class UMaterialInstance*                           QuietOutlineMaterial;                                       // 0x0038   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_a68330de32951565
/// Size: 0x0078 (0x000000 - 0x000078)
struct FPropertyBag_a68330de32951565
{ 
	class UObject*                                     SmallPrimaryFont_FontMaterial;                              // 0x0000   (0x0008)  
	class UObject*                                     SmallSecondaryFont_FontMaterial;                            // 0x0008   (0x0008)  
	class UMaterialInstance*                           BackgroundMaterial;                                         // 0x0010   (0x0008)  
	class UMaterialInstance*                           BorderMaterial;                                             // 0x0018   (0x0008)  
	FSlateFontInfo                                     GamepadPromptFont;                                          // 0x0020   (0x0058)  
};

/// Struct /Engine/Transient.PropertyBag_679308d7b0340d99
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPropertyBag_679308d7b0340d99
{ 
	class USoundBase*                                  MatchMakingSucceededSound;                                  // 0x0000   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_cbd64d49b005d873
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPropertyBag_cbd64d49b005d873
{ 
	float                                              SecondsPriorToTransSound;                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	class USoundBase*                                  TransitionSound;                                            // 0x0008   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_27666618d6edb451
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPropertyBag_27666618d6edb451
{ 
	class USoundBase*                                  MTXOfferTileIntroWhoosh;                                    // 0x0000   (0x0008)  
	class USoundBase*                                  ShopRowWhooshIn;                                            // 0x0008   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_ef5ace8eb34ce27f
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPropertyBag_ef5ace8eb34ce27f
{ 
	class USoundBase*                                  ShopRowWhooshIn;                                            // 0x0000   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_b43f8eefce8b0ed
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPropertyBag_b43f8eefce8b0ed
{ 
	class USoundBase*                                  LockerCategoryWhooshSound;                                  // 0x0000   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_8bea2837acdb47b7
/// Size: 0x0020 (0x000000 - 0x000020)
struct FPropertyBag_8bea2837acdb47b7
{ 
	class USoundBase*                                  BannerAppearSound;                                          // 0x0000   (0x0008)  
	class USoundBase*                                  BannerAwaySound;                                            // 0x0008   (0x0008)  
	class USoundBase*                                  IntroSound;                                                 // 0x0010   (0x0008)  
	class USoundBase*                                  OutroSound;                                                 // 0x0018   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_a8ef8bf33481dc33
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPropertyBag_a8ef8bf33481dc33
{ 
	class USoundBase*                                  ShopIntroWhooshSound;                                       // 0x0000   (0x0008)  
	class USoundBase*                                  ContentWhoosh_RetractSound;                                 // 0x0008   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_604ded2ec076587c
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPropertyBag_604ded2ec076587c
{ 
	class USoundBase*                                  ErrorWindowAppearSound;                                     // 0x0000   (0x0008)  
	class USoundBase*                                  ErrorWindowAwaySound;                                       // 0x0008   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_f3260e26641788fc
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPropertyBag_f3260e26641788fc
{ 
	class USoundBase*                                  PressedSound;                                               // 0x0000   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_1fde7678eec48b79
/// Size: 0x0028 (0x000000 - 0x000028)
struct FPropertyBag_1fde7678eec48b79
{ 
	class USoundBase*                                  HoveredSound;                                               // 0x0000   (0x0008)  
	class USoundBase*                                  HoldPressedSound;                                           // 0x0008   (0x0008)  
	class USoundBase*                                  HoldSound;                                                  // 0x0010   (0x0008)  
	class USoundBase*                                  HoldReleasedSound;                                          // 0x0018   (0x0008)  
	class USoundBase*                                  HoldCompletedSound;                                         // 0x0020   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_a9a1e59fa0c626f2
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPropertyBag_a9a1e59fa0c626f2
{ 
	FSlateSound                                        PressedSlateSoundOverride;                                  // 0x0000   (0x0018)  
	FSlateSound                                        HoveredSlateSoundOverride;                                  // 0x0018   (0x0018)  
};

/// Struct /Engine/Transient.PropertyBag_89bf41bb0777afc
/// Size: 0x0020 (0x000000 - 0x000020)
struct FPropertyBag_89bf41bb0777afc
{ 
	class USoundBase*                                  HoldPressedSound;                                           // 0x0000   (0x0008)  
	class USoundBase*                                  HoldSound;                                                  // 0x0008   (0x0008)  
	class USoundBase*                                  HoldReleasedSound;                                          // 0x0010   (0x0008)  
	class USoundBase*                                  HoldCompletedSound;                                         // 0x0018   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_6b5b929c93ba22f9
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPropertyBag_6b5b929c93ba22f9
{ 
	class USoundBase*                                  ContextButtonHoverSound;                                    // 0x0000   (0x0008)  
	class USoundBase*                                  ContextButtonClickedSound;                                  // 0x0008   (0x0008)  
	class USoundBase*                                  BlockOutlineHoverSound;                                     // 0x0010   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_f70694e1dfd3149e
/// Size: 0x0048 (0x000000 - 0x000048)
struct FPropertyBag_f70694e1dfd3149e
{ 
	class USoundBase*                                  PressedSound;                                               // 0x0000   (0x0008)  
	class USoundBase*                                  HoveredSound;                                               // 0x0008   (0x0008)  
	FSlateSound                                        PressedSlateSoundOverride;                                  // 0x0010   (0x0018)  
	FSlateSound                                        HoveredSlateSoundOverride;                                  // 0x0028   (0x0018)  
	class USoundBase*                                  ActivityBrowserTileHoverSound;                              // 0x0040   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_eace1fc875380ce9
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPropertyBag_eace1fc875380ce9
{ 
	class USoundBase*                                  PressedSound;                                               // 0x0000   (0x0008)  
	class USoundBase*                                  HoveredSound;                                               // 0x0008   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_67ed8aef6ed3cfac
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPropertyBag_67ed8aef6ed3cfac
{ 
	class USoundBase*                                  HoveredSound;                                               // 0x0000   (0x0008)  
	class USoundBase*                                  PressedSound;                                               // 0x0008   (0x0008)  
	class USoundBase*                                  HoldPressedSound;                                           // 0x0010   (0x0008)  
	class USoundBase*                                  HoldSound;                                                  // 0x0018   (0x0008)  
	class USoundBase*                                  HoldReleasedSound;                                          // 0x0020   (0x0008)  
	class USoundBase*                                  HoldCompletedSound;                                         // 0x0028   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_c596a55462943d08
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPropertyBag_c596a55462943d08
{ 
	class USoundBase*                                  ListEntryHoveredSound;                                      // 0x0000   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_2e02765e342186ff
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPropertyBag_2e02765e342186ff
{ 
	FSlateSound                                        PressedSlateSoundOverride;                                  // 0x0000   (0x0018)  
	FSlateSound                                        HoveredSlateSoundOverride;                                  // 0x0018   (0x0018)  
};

/// Struct /Engine/Transient.PropertyBag_f3fd581e4852f9d5
/// Size: 0x0020 (0x000000 - 0x000020)
struct FPropertyBag_f3fd581e4852f9d5
{ 
	class USoundBase*                                  Press_Sound;                                                // 0x0000   (0x0008)  
	class USoundBase*                                  HoldSound;                                                  // 0x0008   (0x0008)  
	class USoundBase*                                  ReleaseSound;                                               // 0x0010   (0x0008)  
	class USoundBase*                                  CompleteSound;                                              // 0x0018   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_8b7385282373e68c
/// Size: 0x0090 (0x000000 - 0x000090)
struct FPropertyBag_8b7385282373e68c
{ 
	class UObject*                                     LargePrimaryFont_FontObject;                                // 0x0000   (0x0008)  
	FName                                              LargePrimaryFont_TypefaceFontName;                          // 0x0008   (0x0004)  
	float                                              LargePrimaryFont_Size;                                      // 0x000C   (0x0004)  
	int32_t                                            LargePrimaryFont_LetterSpacing;                             // 0x0010   (0x0004)  
	float                                              LargePrimaryFont_SkewAmount;                                // 0x0014   (0x0004)  
	class UObject*                                     MediumPrimaryFont_FontObject;                               // 0x0018   (0x0008)  
	FName                                              MediumPrimaryFont_TypefaceFontName;                         // 0x0020   (0x0004)  
	float                                              MediumPrimaryFont_Size;                                     // 0x0024   (0x0004)  
	int32_t                                            MediumPrimaryFont_LetterSpacing;                            // 0x0028   (0x0004)  
	float                                              MediumPrimaryFont_SkewAmount;                               // 0x002C   (0x0004)  
	class UObject*                                     SmallPrimaryFont_FontObject;                                // 0x0030   (0x0008)  
	FName                                              SmallPrimaryFont_TypefaceFontName;                          // 0x0038   (0x0004)  
	float                                              SmallPrimaryFont_Size;                                      // 0x003C   (0x0004)  
	int32_t                                            SmallPrimaryFont_LetterSpacing;                             // 0x0040   (0x0004)  
	float                                              SmallPrimaryFont_SkewAmount;                                // 0x0044   (0x0004)  
	class UObject*                                     LargeSecondaryFont_FontObject;                              // 0x0048   (0x0008)  
	FName                                              LargeSecondaryFont_TypefaceFontName;                        // 0x0050   (0x0004)  
	float                                              LargeSecondaryFont_Size;                                    // 0x0054   (0x0004)  
	int32_t                                            LargeSecondaryFont_LetterSpacing;                           // 0x0058   (0x0004)  
	float                                              LargeSecondaryFont_SkewAmount;                              // 0x005C   (0x0004)  
	class UObject*                                     MeduimSecondaryFont_FontObject;                             // 0x0060   (0x0008)  
	FName                                              MeduimSecondaryFont_TypefaceFontName;                       // 0x0068   (0x0004)  
	float                                              MeduimSecondaryFont_Size;                                   // 0x006C   (0x0004)  
	int32_t                                            MeduimSecondaryFont_LetterSpacing;                          // 0x0070   (0x0004)  
	float                                              MeduimSecondaryFont_SkewAmount;                             // 0x0074   (0x0004)  
	class UObject*                                     SmallSecondaryFont_FontObject;                              // 0x0078   (0x0008)  
	FName                                              SmallSecondaryFont_TypefaceFontName;                        // 0x0080   (0x0004)  
	float                                              SmallSecondaryFont_Size;                                    // 0x0084   (0x0004)  
	int32_t                                            SmallSecondaryFont_LetterSpacing;                           // 0x0088   (0x0004)  
	float                                              SmallSecondaryFont_SkewAmount;                              // 0x008C   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_a826acb71474925a
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPropertyBag_a826acb71474925a
{ 
	class UObject*                                     Font_FontObject;                                            // 0x0000   (0x0008)  
	FName                                              Font_TypefaceFontName;                                      // 0x0008   (0x0004)  
	float                                              Font_Size;                                                  // 0x000C   (0x0004)  
	int32_t                                            Font_LetterSpacing;                                         // 0x0010   (0x0004)  
	float                                              Font_SkewAmount;                                            // 0x0014   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_a322f74e1265fbb8
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPropertyBag_a322f74e1265fbb8
{ 
	class UObject*                                     Font_FontObject;                                            // 0x0000   (0x0008)  
	FName                                              Font_TypefaceFontName;                                      // 0x0008   (0x0004)  
	float                                              Font_Size;                                                  // 0x000C   (0x0004)  
	int32_t                                            Font_LetterSpacing;                                         // 0x0010   (0x0004)  
	float                                              Font_SkewAmount;                                            // 0x0014   (0x0004)  
	class UObject*                                     TabFont_FontObject;                                         // 0x0018   (0x0008)  
	FName                                              TabFont_TypefaceFontName;                                   // 0x0020   (0x0004)  
	float                                              TabFont_Size;                                               // 0x0024   (0x0004)  
	int32_t                                            TabFont_LetterSpacing;                                      // 0x0028   (0x0004)  
	float                                              TabFont_SkewAmount;                                         // 0x002C   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_2971f17bf917f01e
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPropertyBag_2971f17bf917f01e
{ 
	class UObject*                                     SmallPrimaryFont_FontObject;                                // 0x0000   (0x0008)  
	FName                                              SmallPrimaryFont_TypefaceFontName;                          // 0x0008   (0x0004)  
	float                                              SmallPrimaryFont_Size;                                      // 0x000C   (0x0004)  
	int32_t                                            SmallPrimaryFont_LetterSpacing;                             // 0x0010   (0x0004)  
	float                                              SmallPrimaryFont_SkewAmount;                                // 0x0014   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_d682bdb3818e7fd1
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPropertyBag_d682bdb3818e7fd1
{ 
	class USoundBase*                                  BattlePassIntroWhooshSound;                                 // 0x0000   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_3c06fb5047832472
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPropertyBag_3c06fb5047832472
{ 
	FSlateSound                                        PressedSlateSoundOverride;                                  // 0x0000   (0x0018)  
	FSlateSound                                        HoveredSlateSoundOverride;                                  // 0x0018   (0x0018)  
};

/// Struct /Engine/Transient.PropertyBag_c4dec7f2cc7c0215
/// Size: 0x0038 (0x000000 - 0x000038)
struct FPropertyBag_c4dec7f2cc7c0215
{ 
	FSlateSound                                        PressedSlateSoundOverride;                                  // 0x0000   (0x0018)  
	FSlateSound                                        HoveredSlateSoundOverride;                                  // 0x0018   (0x0018)  
	class USoundBase*                                  ClickedSound;                                               // 0x0030   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_c9c91a001e98c630
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPropertyBag_c9c91a001e98c630
{ 
	FSlateSound                                        PressedSlateSoundOverride;                                  // 0x0000   (0x0018)  
	FSlateSound                                        HoveredSlateSoundOverride;                                  // 0x0018   (0x0018)  
};

/// Struct /Engine/Transient.PropertyBag_3c34ad4b5791550a
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPropertyBag_3c34ad4b5791550a
{ 
	class USoundBase*                                  HoveredSound;                                               // 0x0000   (0x0008)  
	class USoundBase*                                  PressedSound;                                               // 0x0008   (0x0008)  
	class USoundBase*                                  HoldPressedSound;                                           // 0x0010   (0x0008)  
	class USoundBase*                                  HoldSound;                                                  // 0x0018   (0x0008)  
	class USoundBase*                                  HoldReleasedSound;                                          // 0x0020   (0x0008)  
	class USoundBase*                                  HoldCompletedSound;                                         // 0x0028   (0x0008)  
};

