
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: SlateCore

/// Struct /Engine/Transient.ChaosDestructionEvent_SWC
/// Size: 0x0044 (0x000000 - 0x000044)
class FChaosDestructionEvent_SWC : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 68;

public:
	SMember(FVector3f)                                 Position                                                    OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FVector3f)                                 Normal                                                      OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	SMember(FVector3f)                                 Velocity                                                    OFFSET(getStruct<T>, {0x18, 12, 0, 0})
	SMember(FVector3f)                                 AngularVelocity                                             OFFSET(getStruct<T>, {0x24, 12, 0, 0})
	DMember(float)                                     ExtentMin                                                   OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     ExtentMax                                                   OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(int32_t)                                   ParticleID                                                  OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(float)                                     Time                                                        OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(int32_t)                                   Type                                                        OFFSET(get<int32_t>, {0x40, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_73c83f300aa939fa
/// Size: 0x0004 (0x000000 - 0x000004)
class FPropertyBag_73c83f300aa939fa : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     LineHeightPercentage                                        OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_862508c04c749853
/// Size: 0x0010 (0x000000 - 0x000010)
class FPropertyBag_862508c04c749853 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FMargin)                                   Margin                                                      OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_3ba6b772326dd435
/// Size: 0x0008 (0x000000 - 0x000008)
class FPropertyBag_3ba6b772326dd435 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     LineHeightPercentage                                        OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Font_Size                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_16760b1878cd5980
/// Size: 0x0014 (0x000000 - 0x000014)
class FPropertyBag_16760b1878cd5980 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FMargin)                                   Margin                                                      OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(float)                                     LineHeightPercentage                                        OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_82c781121f843240
/// Size: 0x0010 (0x000000 - 0x000010)
class FPropertyBag_82c781121f843240 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FMargin)                                   Margin                                                      OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_ecf5c755635a777d
/// Size: 0x0004 (0x000000 - 0x000004)
class FPropertyBag_ecf5c755635a777d : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     Font_Size                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_a46c1339c900084b
/// Size: 0x0004 (0x000000 - 0x000004)
class FPropertyBag_a46c1339c900084b : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FName)                                     Font_TypefaceFontName                                       OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_4681491f684a3575
/// Size: 0x001C (0x000000 - 0x00001C)
class FPropertyBag_4681491f684a3575 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	CMember(class UObject*)                            Font_FontObject                                             OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     Font_TypefaceFontName                                       OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   Font_LetterSpacing                                          OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	CMember(ETextTransformPolicy)                      TextTransformPolicy                                         OFFSET(get<T>, {0x10, 1, 0, 0})
	DMember(float)                                     LineHeightPercentage                                        OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     Font_SkewAmount                                             OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_59663f99456f1b4c
/// Size: 0x0008 (0x000000 - 0x000008)
class FPropertyBag_59663f99456f1b4c : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     Font_Size                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Font_LetterSpacing                                          OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_f000d945505d49ef
/// Size: 0x000C (0x000000 - 0x00000C)
class FPropertyBag_f000d945505d49ef : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     Font_TypefaceFontName                                       OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(float)                                     Font_Size                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   Font_LetterSpacing                                          OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_ba2e90b9d93c41a2
/// Size: 0x0008 (0x000000 - 0x000008)
class FPropertyBag_ba2e90b9d93c41a2 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     Font_TypefaceFontName                                       OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Font_LetterSpacing                                          OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_dac94b7ec6202da5
/// Size: 0x0009 (0x000000 - 0x000009)
class FPropertyBag_dac94b7ec6202da5 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 9;

public:
	SMember(FName)                                     Font_TypefaceFontName                                       OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Font_LetterSpacing                                          OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	CMember(ETextTransformPolicy)                      TextTransformPolicy                                         OFFSET(get<T>, {0x8, 1, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_d306bcd68f816b69
/// Size: 0x0004 (0x000000 - 0x000004)
class FPropertyBag_d306bcd68f816b69 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     Font_Size                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_14eaf7ece10bf3e8
/// Size: 0x0004 (0x000000 - 0x000004)
class FPropertyBag_14eaf7ece10bf3e8 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     Font_Size                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_1a9664da03bb03a2
/// Size: 0x0014 (0x000000 - 0x000014)
class FPropertyBag_1a9664da03bb03a2 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	CMember(class UObject*)                            Font_FontObject                                             OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     Font_TypefaceFontName                                       OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(float)                                     Font_Size                                                   OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Font_SkewAmount                                             OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_1fe8926875373c91
/// Size: 0x0004 (0x000000 - 0x000004)
class FPropertyBag_1fe8926875373c91 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FName)                                     Font_TypefaceFontName                                       OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_37bdbf30236ec933
/// Size: 0x0008 (0x000000 - 0x000008)
class FPropertyBag_37bdbf30236ec933 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class USoundBase*)                         MatchMakingSucceededSound                                   OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_ef784dd8262d89d2
/// Size: 0x0010 (0x000000 - 0x000010)
class FPropertyBag_ef784dd8262d89d2 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     SecondsPriorToTransSound                                    OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(class USoundBase*)                         TransitionSound                                             OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_793ae256b45e5624
/// Size: 0x0010 (0x000000 - 0x000010)
class FPropertyBag_793ae256b45e5624 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class USoundBase*)                         MTXOfferTileIntroWhoosh                                     OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class USoundBase*)                         ShopRowWhooshIn                                             OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_387af51fb0ee4dea
/// Size: 0x0008 (0x000000 - 0x000008)
class FPropertyBag_387af51fb0ee4dea : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class USoundBase*)                         ShopRowWhooshIn                                             OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_a771253926a1104e
/// Size: 0x0008 (0x000000 - 0x000008)
class FPropertyBag_a771253926a1104e : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class USoundBase*)                         LockerCategoryWhooshSound                                   OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_258a81de738c247f
/// Size: 0x0020 (0x000000 - 0x000020)
class FPropertyBag_258a81de738c247f : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(class USoundBase*)                         BannerAppearSound                                           OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class USoundBase*)                         BannerAwaySound                                             OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class USoundBase*)                         IntroSound                                                  OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class USoundBase*)                         OutroSound                                                  OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_e9500e50887a2dc9
/// Size: 0x0010 (0x000000 - 0x000010)
class FPropertyBag_e9500e50887a2dc9 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class USoundBase*)                         ShopIntroWhooshSound                                        OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class USoundBase*)                         ContentWhoosh_RetractSound                                  OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_8de32bd69c48641a
/// Size: 0x0010 (0x000000 - 0x000010)
class FPropertyBag_8de32bd69c48641a : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class USoundBase*)                         ErrorWindowAppearSound                                      OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class USoundBase*)                         ErrorWindowAwaySound                                        OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_1030d64e37ecd7a0
/// Size: 0x02AC (0x000000 - 0x0002AC)
class FPropertyBag_1030d64e37ecd7a0 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 684;

public:
	SMember(FSlateFontInfo)                            LargePrimaryFont                                            OFFSET(getStruct<T>, {0x0, 88, 0, 0})
	SMember(FSlateFontInfo)                            LargeSecondaryFont                                          OFFSET(getStruct<T>, {0x58, 88, 0, 0})
	SMember(FSlateFontInfo)                            MediumPrimaryFont                                           OFFSET(getStruct<T>, {0xB0, 88, 0, 0})
	SMember(FSlateFontInfo)                            MeduimSecondaryFont                                         OFFSET(getStruct<T>, {0x108, 88, 0, 0})
	SMember(FSlateFontInfo)                            SmallPrimaryFont                                            OFFSET(getStruct<T>, {0x160, 88, 0, 0})
	SMember(FSlateFontInfo)                            SmallSecondaryFont                                          OFFSET(getStruct<T>, {0x1B8, 88, 0, 0})
	SMember(FMargin)                                   SingleTextLargePadding                                      OFFSET(getStruct<T>, {0x210, 16, 0, 0})
	SMember(FMargin)                                   SingleTextMediumPadding                                     OFFSET(getStruct<T>, {0x220, 16, 0, 0})
	SMember(FMargin)                                   SingleTextSmallPadding                                      OFFSET(getStruct<T>, {0x230, 16, 0, 0})
	SMember(FMargin)                                   DoubleTextLargePadding                                      OFFSET(getStruct<T>, {0x240, 16, 0, 0})
	SMember(FMargin)                                   DoubleTextMediumPadding                                     OFFSET(getStruct<T>, {0x250, 16, 0, 0})
	SMember(FMargin)                                   DoubleTextSmallPadding                                      OFFSET(getStruct<T>, {0x260, 16, 0, 0})
	SMember(FMargin)                                   DoubleTextSecondaryLargePadding                             OFFSET(getStruct<T>, {0x270, 16, 0, 0})
	SMember(FMargin)                                   DoubleTextSecondaryMediumPadding                            OFFSET(getStruct<T>, {0x280, 16, 0, 0})
	SMember(FMargin)                                   DoubleTextSecondarySmallPadding                             OFFSET(getStruct<T>, {0x290, 16, 0, 0})
	DMember(int32_t)                                   LargeHeight                                                 OFFSET(get<int32_t>, {0x2A0, 4, 0, 0})
	DMember(int32_t)                                   MediumHeight                                                OFFSET(get<int32_t>, {0x2A4, 4, 0, 0})
	DMember(int32_t)                                   SmallHeight                                                 OFFSET(get<int32_t>, {0x2A8, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_9b4aae3a683cc931
/// Size: 0x0040 (0x000000 - 0x000040)
class FPropertyBag_9b4aae3a683cc931 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class UObject*)                            LargePrimaryFont_FontMaterial                               OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UObject*)                            LargeSecondaryFont_FontMaterial                             OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class UObject*)                            MediumPrimaryFont_FontMaterial                              OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class UObject*)                            MeduimSecondaryFont_FontMaterial                            OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(class UObject*)                            SmallPrimaryFont_FontMaterial                               OFFSET(get<T>, {0x20, 8, 0, 0})
	CMember(class UObject*)                            SmallSecondaryFont_FontMaterial                             OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UMaterialInstance*)                  BackgroundMaterial                                          OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UMaterialInstance*)                  BorderMaterial                                              OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_43b96145e22382f1
/// Size: 0x0040 (0x000000 - 0x000040)
class FPropertyBag_43b96145e22382f1 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class UMaterialInstance*)                  RegularFontMaterial                                         OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UMaterialInstance*)                  RegularSecondaryFontMaterial                                OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class UMaterialInstance*)                  RegularBackgroundMaterial                                   OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class UMaterialInstance*)                  RegularOutlineMaterial                                      OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(class UMaterialInstance*)                  QuietFontMaterial                                           OFFSET(get<T>, {0x20, 8, 0, 0})
	CMember(class UMaterialInstance*)                  QuietSecondaryFontMaterial                                  OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UMaterialInstance*)                  QuietBackgroundMaterial                                     OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UMaterialInstance*)                  QuietOutlineMaterial                                        OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_f670d3026ebc627
/// Size: 0x0078 (0x000000 - 0x000078)
class FPropertyBag_f670d3026ebc627 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(class UObject*)                            SmallPrimaryFont_FontMaterial                               OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UObject*)                            SmallSecondaryFont_FontMaterial                             OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class UMaterialInstance*)                  BackgroundMaterial                                          OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class UMaterialInstance*)                  BorderMaterial                                              OFFSET(get<T>, {0x18, 8, 0, 0})
	SMember(FSlateFontInfo)                            GamepadPromptFont                                           OFFSET(getStruct<T>, {0x20, 88, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_34f86d8ee4f971fd
/// Size: 0x0008 (0x000000 - 0x000008)
class FPropertyBag_34f86d8ee4f971fd : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class USoundBase*)                         PressedSound                                                OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_842b26be7e4f4c6
/// Size: 0x0028 (0x000000 - 0x000028)
class FPropertyBag_842b26be7e4f4c6 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class USoundBase*)                         HoveredSound                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class USoundBase*)                         HoldPressedSound                                            OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class USoundBase*)                         HoldSound                                                   OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class USoundBase*)                         HoldReleasedSound                                           OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(class USoundBase*)                         HoldCompletedSound                                          OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_5e2e1e1b91841810
/// Size: 0x0030 (0x000000 - 0x000030)
class FPropertyBag_5e2e1e1b91841810 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FSlateSound)                               PressedSlateSoundOverride                                   OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FSlateSound)                               HoveredSlateSoundOverride                                   OFFSET(getStruct<T>, {0x18, 24, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_fd20b0c83fc0aee8
/// Size: 0x0020 (0x000000 - 0x000020)
class FPropertyBag_fd20b0c83fc0aee8 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(class USoundBase*)                         HoldPressedSound                                            OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class USoundBase*)                         HoldSound                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class USoundBase*)                         HoldReleasedSound                                           OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class USoundBase*)                         HoldCompletedSound                                          OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_a689741fbbdbc904
/// Size: 0x0018 (0x000000 - 0x000018)
class FPropertyBag_a689741fbbdbc904 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class USoundBase*)                         ContextButtonHoverSound                                     OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class USoundBase*)                         ContextButtonClickedSound                                   OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class USoundBase*)                         BlockOutlineHoverSound                                      OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_d92c7320cc2d5bc0
/// Size: 0x0048 (0x000000 - 0x000048)
class FPropertyBag_d92c7320cc2d5bc0 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(class USoundBase*)                         PressedSound                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class USoundBase*)                         HoveredSound                                                OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FSlateSound)                               PressedSlateSoundOverride                                   OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	SMember(FSlateSound)                               HoveredSlateSoundOverride                                   OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	CMember(class USoundBase*)                         ActivityBrowserTileHoverSound                               OFFSET(get<T>, {0x40, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_88a0dde3d183ff8d
/// Size: 0x0010 (0x000000 - 0x000010)
class FPropertyBag_88a0dde3d183ff8d : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class USoundBase*)                         PressedSound                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class USoundBase*)                         HoveredSound                                                OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_43f1ef6b5fcc5bef
/// Size: 0x0030 (0x000000 - 0x000030)
class FPropertyBag_43f1ef6b5fcc5bef : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class USoundBase*)                         HoveredSound                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class USoundBase*)                         PressedSound                                                OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class USoundBase*)                         HoldPressedSound                                            OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class USoundBase*)                         HoldSound                                                   OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(class USoundBase*)                         HoldReleasedSound                                           OFFSET(get<T>, {0x20, 8, 0, 0})
	CMember(class USoundBase*)                         HoldCompletedSound                                          OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_5e9c71013d0c1845
/// Size: 0x0008 (0x000000 - 0x000008)
class FPropertyBag_5e9c71013d0c1845 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class USoundBase*)                         ListEntryHoveredSound                                       OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_ed83acae228913a6
/// Size: 0x0030 (0x000000 - 0x000030)
class FPropertyBag_ed83acae228913a6 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FSlateSound)                               PressedSlateSoundOverride                                   OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FSlateSound)                               HoveredSlateSoundOverride                                   OFFSET(getStruct<T>, {0x18, 24, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_9cc24cb83be9867a
/// Size: 0x0020 (0x000000 - 0x000020)
class FPropertyBag_9cc24cb83be9867a : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(class USoundBase*)                         Press_Sound                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class USoundBase*)                         HoldSound                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class USoundBase*)                         ReleaseSound                                                OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class USoundBase*)                         CompleteSound                                               OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_ebca105dc384385e
/// Size: 0x0090 (0x000000 - 0x000090)
class FPropertyBag_ebca105dc384385e : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(class UObject*)                            LargePrimaryFont_FontObject                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     LargePrimaryFont_TypefaceFontName                           OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(float)                                     LargePrimaryFont_Size                                       OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   LargePrimaryFont_LetterSpacing                              OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(float)                                     LargePrimaryFont_SkewAmount                                 OFFSET(get<float>, {0x14, 4, 0, 0})
	CMember(class UObject*)                            MediumPrimaryFont_FontObject                                OFFSET(get<T>, {0x18, 8, 0, 0})
	SMember(FName)                                     MediumPrimaryFont_TypefaceFontName                          OFFSET(getStruct<T>, {0x20, 4, 0, 0})
	DMember(float)                                     MediumPrimaryFont_Size                                      OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(int32_t)                                   MediumPrimaryFont_LetterSpacing                             OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(float)                                     MediumPrimaryFont_SkewAmount                                OFFSET(get<float>, {0x2C, 4, 0, 0})
	CMember(class UObject*)                            SmallPrimaryFont_FontObject                                 OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FName)                                     SmallPrimaryFont_TypefaceFontName                           OFFSET(getStruct<T>, {0x38, 4, 0, 0})
	DMember(float)                                     SmallPrimaryFont_Size                                       OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(int32_t)                                   SmallPrimaryFont_LetterSpacing                              OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(float)                                     SmallPrimaryFont_SkewAmount                                 OFFSET(get<float>, {0x44, 4, 0, 0})
	CMember(class UObject*)                            LargeSecondaryFont_FontObject                               OFFSET(get<T>, {0x48, 8, 0, 0})
	SMember(FName)                                     LargeSecondaryFont_TypefaceFontName                         OFFSET(getStruct<T>, {0x50, 4, 0, 0})
	DMember(float)                                     LargeSecondaryFont_Size                                     OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(int32_t)                                   LargeSecondaryFont_LetterSpacing                            OFFSET(get<int32_t>, {0x58, 4, 0, 0})
	DMember(float)                                     LargeSecondaryFont_SkewAmount                               OFFSET(get<float>, {0x5C, 4, 0, 0})
	CMember(class UObject*)                            MeduimSecondaryFont_FontObject                              OFFSET(get<T>, {0x60, 8, 0, 0})
	SMember(FName)                                     MeduimSecondaryFont_TypefaceFontName                        OFFSET(getStruct<T>, {0x68, 4, 0, 0})
	DMember(float)                                     MeduimSecondaryFont_Size                                    OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(int32_t)                                   MeduimSecondaryFont_LetterSpacing                           OFFSET(get<int32_t>, {0x70, 4, 0, 0})
	DMember(float)                                     MeduimSecondaryFont_SkewAmount                              OFFSET(get<float>, {0x74, 4, 0, 0})
	CMember(class UObject*)                            SmallSecondaryFont_FontObject                               OFFSET(get<T>, {0x78, 8, 0, 0})
	SMember(FName)                                     SmallSecondaryFont_TypefaceFontName                         OFFSET(getStruct<T>, {0x80, 4, 0, 0})
	DMember(float)                                     SmallSecondaryFont_Size                                     OFFSET(get<float>, {0x84, 4, 0, 0})
	DMember(int32_t)                                   SmallSecondaryFont_LetterSpacing                            OFFSET(get<int32_t>, {0x88, 4, 0, 0})
	DMember(float)                                     SmallSecondaryFont_SkewAmount                               OFFSET(get<float>, {0x8C, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_bd486df911f09922
/// Size: 0x0018 (0x000000 - 0x000018)
class FPropertyBag_bd486df911f09922 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UObject*)                            Font_FontObject                                             OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     Font_TypefaceFontName                                       OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(float)                                     Font_Size                                                   OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   Font_LetterSpacing                                          OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(float)                                     Font_SkewAmount                                             OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_83cfe8b63b4e0dbb
/// Size: 0x0030 (0x000000 - 0x000030)
class FPropertyBag_83cfe8b63b4e0dbb : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UObject*)                            Font_FontObject                                             OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     Font_TypefaceFontName                                       OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(float)                                     Font_Size                                                   OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   Font_LetterSpacing                                          OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(float)                                     Font_SkewAmount                                             OFFSET(get<float>, {0x14, 4, 0, 0})
	CMember(class UObject*)                            TabFont_FontObject                                          OFFSET(get<T>, {0x18, 8, 0, 0})
	SMember(FName)                                     TabFont_TypefaceFontName                                    OFFSET(getStruct<T>, {0x20, 4, 0, 0})
	DMember(float)                                     TabFont_Size                                                OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(int32_t)                                   TabFont_LetterSpacing                                       OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(float)                                     TabFont_SkewAmount                                          OFFSET(get<float>, {0x2C, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_b76f8e40dbfb67d3
/// Size: 0x0018 (0x000000 - 0x000018)
class FPropertyBag_b76f8e40dbfb67d3 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UObject*)                            SmallPrimaryFont_FontObject                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     SmallPrimaryFont_TypefaceFontName                           OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(float)                                     SmallPrimaryFont_Size                                       OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   SmallPrimaryFont_LetterSpacing                              OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(float)                                     SmallPrimaryFont_SkewAmount                                 OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_b907c5fd75bb4347
/// Size: 0x0008 (0x000000 - 0x000008)
class FPropertyBag_b907c5fd75bb4347 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class USoundBase*)                         BattlePassIntroWhooshSound                                  OFFSET(get<T>, {0x0, 8, 0, 0})
};

