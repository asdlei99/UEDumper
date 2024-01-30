
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

/// Struct /Engine/Transient.PropertyBag_3ba6b772326dd435
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPropertyBag_3ba6b772326dd435
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

/// Struct /Engine/Transient.PropertyBag_ecf5c755635a777d
/// Size: 0x0004 (0x000000 - 0x000004)
struct FPropertyBag_ecf5c755635a777d
{ 
	float                                              Font_Size;                                                  // 0x0000   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_a46c1339c900084b
/// Size: 0x0004 (0x000000 - 0x000004)
struct FPropertyBag_a46c1339c900084b
{ 
	FName                                              Font_TypefaceFontName;                                      // 0x0000   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_4681491f684a3575
/// Size: 0x001C (0x000000 - 0x00001C)
struct FPropertyBag_4681491f684a3575
{ 
	class UObject*                                     Font_FontObject;                                            // 0x0000   (0x0008)  
	FName                                              Font_TypefaceFontName;                                      // 0x0008   (0x0004)  
	int32_t                                            Font_LetterSpacing;                                         // 0x000C   (0x0004)  
	ETextTransformPolicy                               TextTransformPolicy;                                        // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              LineHeightPercentage;                                       // 0x0014   (0x0004)  
	float                                              Font_SkewAmount;                                            // 0x0018   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_59663f99456f1b4c
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPropertyBag_59663f99456f1b4c
{ 
	float                                              Font_Size;                                                  // 0x0000   (0x0004)  
	int32_t                                            Font_LetterSpacing;                                         // 0x0004   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_f000d945505d49ef
/// Size: 0x000C (0x000000 - 0x00000C)
struct FPropertyBag_f000d945505d49ef
{ 
	FName                                              Font_TypefaceFontName;                                      // 0x0000   (0x0004)  
	float                                              Font_Size;                                                  // 0x0004   (0x0004)  
	int32_t                                            Font_LetterSpacing;                                         // 0x0008   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_ba2e90b9d93c41a2
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPropertyBag_ba2e90b9d93c41a2
{ 
	FName                                              Font_TypefaceFontName;                                      // 0x0000   (0x0004)  
	int32_t                                            Font_LetterSpacing;                                         // 0x0004   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_dac94b7ec6202da5
/// Size: 0x0009 (0x000000 - 0x000009)
struct FPropertyBag_dac94b7ec6202da5
{ 
	FName                                              Font_TypefaceFontName;                                      // 0x0000   (0x0004)  
	int32_t                                            Font_LetterSpacing;                                         // 0x0004   (0x0004)  
	ETextTransformPolicy                               TextTransformPolicy;                                        // 0x0008   (0x0001)  
};

/// Struct /Engine/Transient.PropertyBag_d306bcd68f816b69
/// Size: 0x0004 (0x000000 - 0x000004)
struct FPropertyBag_d306bcd68f816b69
{ 
	float                                              Font_Size;                                                  // 0x0000   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_14eaf7ece10bf3e8
/// Size: 0x0004 (0x000000 - 0x000004)
struct FPropertyBag_14eaf7ece10bf3e8
{ 
	float                                              Font_Size;                                                  // 0x0000   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_1a9664da03bb03a2
/// Size: 0x0014 (0x000000 - 0x000014)
struct FPropertyBag_1a9664da03bb03a2
{ 
	class UObject*                                     Font_FontObject;                                            // 0x0000   (0x0008)  
	FName                                              Font_TypefaceFontName;                                      // 0x0008   (0x0004)  
	float                                              Font_Size;                                                  // 0x000C   (0x0004)  
	float                                              Font_SkewAmount;                                            // 0x0010   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_1fe8926875373c91
/// Size: 0x0004 (0x000000 - 0x000004)
struct FPropertyBag_1fe8926875373c91
{ 
	FName                                              Font_TypefaceFontName;                                      // 0x0000   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_37bdbf30236ec933
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPropertyBag_37bdbf30236ec933
{ 
	class USoundBase*                                  MatchMakingSucceededSound;                                  // 0x0000   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_ef784dd8262d89d2
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPropertyBag_ef784dd8262d89d2
{ 
	float                                              SecondsPriorToTransSound;                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	class USoundBase*                                  TransitionSound;                                            // 0x0008   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_793ae256b45e5624
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPropertyBag_793ae256b45e5624
{ 
	class USoundBase*                                  MTXOfferTileIntroWhoosh;                                    // 0x0000   (0x0008)  
	class USoundBase*                                  ShopRowWhooshIn;                                            // 0x0008   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_387af51fb0ee4dea
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPropertyBag_387af51fb0ee4dea
{ 
	class USoundBase*                                  ShopRowWhooshIn;                                            // 0x0000   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_a771253926a1104e
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPropertyBag_a771253926a1104e
{ 
	class USoundBase*                                  LockerCategoryWhooshSound;                                  // 0x0000   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_258a81de738c247f
/// Size: 0x0020 (0x000000 - 0x000020)
struct FPropertyBag_258a81de738c247f
{ 
	class USoundBase*                                  BannerAppearSound;                                          // 0x0000   (0x0008)  
	class USoundBase*                                  BannerAwaySound;                                            // 0x0008   (0x0008)  
	class USoundBase*                                  IntroSound;                                                 // 0x0010   (0x0008)  
	class USoundBase*                                  OutroSound;                                                 // 0x0018   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_e9500e50887a2dc9
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPropertyBag_e9500e50887a2dc9
{ 
	class USoundBase*                                  ShopIntroWhooshSound;                                       // 0x0000   (0x0008)  
	class USoundBase*                                  ContentWhoosh_RetractSound;                                 // 0x0008   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_8de32bd69c48641a
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPropertyBag_8de32bd69c48641a
{ 
	class USoundBase*                                  ErrorWindowAppearSound;                                     // 0x0000   (0x0008)  
	class USoundBase*                                  ErrorWindowAwaySound;                                       // 0x0008   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_1030d64e37ecd7a0
/// Size: 0x02AC (0x000000 - 0x0002AC)
struct FPropertyBag_1030d64e37ecd7a0
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

/// Struct /Engine/Transient.PropertyBag_9b4aae3a683cc931
/// Size: 0x0040 (0x000000 - 0x000040)
struct FPropertyBag_9b4aae3a683cc931
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

/// Struct /Engine/Transient.PropertyBag_43b96145e22382f1
/// Size: 0x0040 (0x000000 - 0x000040)
struct FPropertyBag_43b96145e22382f1
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

/// Struct /Engine/Transient.PropertyBag_f670d3026ebc627
/// Size: 0x0078 (0x000000 - 0x000078)
struct FPropertyBag_f670d3026ebc627
{ 
	class UObject*                                     SmallPrimaryFont_FontMaterial;                              // 0x0000   (0x0008)  
	class UObject*                                     SmallSecondaryFont_FontMaterial;                            // 0x0008   (0x0008)  
	class UMaterialInstance*                           BackgroundMaterial;                                         // 0x0010   (0x0008)  
	class UMaterialInstance*                           BorderMaterial;                                             // 0x0018   (0x0008)  
	FSlateFontInfo                                     GamepadPromptFont;                                          // 0x0020   (0x0058)  
};

/// Struct /Engine/Transient.PropertyBag_34f86d8ee4f971fd
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPropertyBag_34f86d8ee4f971fd
{ 
	class USoundBase*                                  PressedSound;                                               // 0x0000   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_842b26be7e4f4c6
/// Size: 0x0028 (0x000000 - 0x000028)
struct FPropertyBag_842b26be7e4f4c6
{ 
	class USoundBase*                                  HoveredSound;                                               // 0x0000   (0x0008)  
	class USoundBase*                                  HoldPressedSound;                                           // 0x0008   (0x0008)  
	class USoundBase*                                  HoldSound;                                                  // 0x0010   (0x0008)  
	class USoundBase*                                  HoldReleasedSound;                                          // 0x0018   (0x0008)  
	class USoundBase*                                  HoldCompletedSound;                                         // 0x0020   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_5e2e1e1b91841810
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPropertyBag_5e2e1e1b91841810
{ 
	FSlateSound                                        PressedSlateSoundOverride;                                  // 0x0000   (0x0018)  
	FSlateSound                                        HoveredSlateSoundOverride;                                  // 0x0018   (0x0018)  
};

/// Struct /Engine/Transient.PropertyBag_fd20b0c83fc0aee8
/// Size: 0x0020 (0x000000 - 0x000020)
struct FPropertyBag_fd20b0c83fc0aee8
{ 
	class USoundBase*                                  HoldPressedSound;                                           // 0x0000   (0x0008)  
	class USoundBase*                                  HoldSound;                                                  // 0x0008   (0x0008)  
	class USoundBase*                                  HoldReleasedSound;                                          // 0x0010   (0x0008)  
	class USoundBase*                                  HoldCompletedSound;                                         // 0x0018   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_a689741fbbdbc904
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPropertyBag_a689741fbbdbc904
{ 
	class USoundBase*                                  ContextButtonHoverSound;                                    // 0x0000   (0x0008)  
	class USoundBase*                                  ContextButtonClickedSound;                                  // 0x0008   (0x0008)  
	class USoundBase*                                  BlockOutlineHoverSound;                                     // 0x0010   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_d92c7320cc2d5bc0
/// Size: 0x0048 (0x000000 - 0x000048)
struct FPropertyBag_d92c7320cc2d5bc0
{ 
	class USoundBase*                                  PressedSound;                                               // 0x0000   (0x0008)  
	class USoundBase*                                  HoveredSound;                                               // 0x0008   (0x0008)  
	FSlateSound                                        PressedSlateSoundOverride;                                  // 0x0010   (0x0018)  
	FSlateSound                                        HoveredSlateSoundOverride;                                  // 0x0028   (0x0018)  
	class USoundBase*                                  ActivityBrowserTileHoverSound;                              // 0x0040   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_88a0dde3d183ff8d
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPropertyBag_88a0dde3d183ff8d
{ 
	class USoundBase*                                  PressedSound;                                               // 0x0000   (0x0008)  
	class USoundBase*                                  HoveredSound;                                               // 0x0008   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_43f1ef6b5fcc5bef
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPropertyBag_43f1ef6b5fcc5bef
{ 
	class USoundBase*                                  HoveredSound;                                               // 0x0000   (0x0008)  
	class USoundBase*                                  PressedSound;                                               // 0x0008   (0x0008)  
	class USoundBase*                                  HoldPressedSound;                                           // 0x0010   (0x0008)  
	class USoundBase*                                  HoldSound;                                                  // 0x0018   (0x0008)  
	class USoundBase*                                  HoldReleasedSound;                                          // 0x0020   (0x0008)  
	class USoundBase*                                  HoldCompletedSound;                                         // 0x0028   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_5e9c71013d0c1845
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPropertyBag_5e9c71013d0c1845
{ 
	class USoundBase*                                  ListEntryHoveredSound;                                      // 0x0000   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_ed83acae228913a6
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPropertyBag_ed83acae228913a6
{ 
	FSlateSound                                        PressedSlateSoundOverride;                                  // 0x0000   (0x0018)  
	FSlateSound                                        HoveredSlateSoundOverride;                                  // 0x0018   (0x0018)  
};

/// Struct /Engine/Transient.PropertyBag_9cc24cb83be9867a
/// Size: 0x0020 (0x000000 - 0x000020)
struct FPropertyBag_9cc24cb83be9867a
{ 
	class USoundBase*                                  Press_Sound;                                                // 0x0000   (0x0008)  
	class USoundBase*                                  HoldSound;                                                  // 0x0008   (0x0008)  
	class USoundBase*                                  ReleaseSound;                                               // 0x0010   (0x0008)  
	class USoundBase*                                  CompleteSound;                                              // 0x0018   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_ebca105dc384385e
/// Size: 0x0090 (0x000000 - 0x000090)
struct FPropertyBag_ebca105dc384385e
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

/// Struct /Engine/Transient.PropertyBag_bd486df911f09922
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPropertyBag_bd486df911f09922
{ 
	class UObject*                                     Font_FontObject;                                            // 0x0000   (0x0008)  
	FName                                              Font_TypefaceFontName;                                      // 0x0008   (0x0004)  
	float                                              Font_Size;                                                  // 0x000C   (0x0004)  
	int32_t                                            Font_LetterSpacing;                                         // 0x0010   (0x0004)  
	float                                              Font_SkewAmount;                                            // 0x0014   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_83cfe8b63b4e0dbb
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPropertyBag_83cfe8b63b4e0dbb
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

/// Struct /Engine/Transient.PropertyBag_b76f8e40dbfb67d3
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPropertyBag_b76f8e40dbfb67d3
{ 
	class UObject*                                     SmallPrimaryFont_FontObject;                                // 0x0000   (0x0008)  
	FName                                              SmallPrimaryFont_TypefaceFontName;                          // 0x0008   (0x0004)  
	float                                              SmallPrimaryFont_Size;                                      // 0x000C   (0x0004)  
	int32_t                                            SmallPrimaryFont_LetterSpacing;                             // 0x0010   (0x0004)  
	float                                              SmallPrimaryFont_SkewAmount;                                // 0x0014   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_b907c5fd75bb4347
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPropertyBag_b907c5fd75bb4347
{ 
	class USoundBase*                                  BattlePassIntroWhooshSound;                                 // 0x0000   (0x0008)  
};

