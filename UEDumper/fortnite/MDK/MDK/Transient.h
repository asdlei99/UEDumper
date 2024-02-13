
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

/// Struct /Engine/Transient.PropertyBag_b3eeafd33af5f2d5
/// Size: 0x0008 (0x000000 - 0x000008)
class FPropertyBag_b3eeafd33af5f2d5 : public MDKBase
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

/// Struct /Engine/Transient.PropertyBag_6b123fc8e6929574
/// Size: 0x0004 (0x000000 - 0x000004)
class FPropertyBag_6b123fc8e6929574 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     Font_Size                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_8c795b6fd3ba889f
/// Size: 0x0004 (0x000000 - 0x000004)
class FPropertyBag_8c795b6fd3ba889f : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FName)                                     Font_TypefaceFontName                                       OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_433d31b2ddb391ca
/// Size: 0x001C (0x000000 - 0x00001C)
class FPropertyBag_433d31b2ddb391ca : public MDKBase
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

/// Struct /Engine/Transient.PropertyBag_aeff4f34071a391a
/// Size: 0x0008 (0x000000 - 0x000008)
class FPropertyBag_aeff4f34071a391a : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     Font_Size                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Font_LetterSpacing                                          OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_322c5930208480a5
/// Size: 0x000C (0x000000 - 0x00000C)
class FPropertyBag_322c5930208480a5 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     Font_TypefaceFontName                                       OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(float)                                     Font_Size                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   Font_LetterSpacing                                          OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_2bbd73e4002ad442
/// Size: 0x0008 (0x000000 - 0x000008)
class FPropertyBag_2bbd73e4002ad442 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     Font_TypefaceFontName                                       OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Font_LetterSpacing                                          OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_e0db9ba3bd1b75ff
/// Size: 0x0009 (0x000000 - 0x000009)
class FPropertyBag_e0db9ba3bd1b75ff : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 9;

public:
	SMember(FName)                                     Font_TypefaceFontName                                       OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Font_LetterSpacing                                          OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	CMember(ETextTransformPolicy)                      TextTransformPolicy                                         OFFSET(get<T>, {0x8, 1, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_562b2644b28e968a
/// Size: 0x0004 (0x000000 - 0x000004)
class FPropertyBag_562b2644b28e968a : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     Font_Size                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_5a1da274fd8a53c6
/// Size: 0x0004 (0x000000 - 0x000004)
class FPropertyBag_5a1da274fd8a53c6 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     Font_Size                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_20a8c3a4a0de16d9
/// Size: 0x0014 (0x000000 - 0x000014)
class FPropertyBag_20a8c3a4a0de16d9 : public MDKBase
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

/// Struct /Engine/Transient.PropertyBag_6da6b5ae7f63d07b
/// Size: 0x0004 (0x000000 - 0x000004)
class FPropertyBag_6da6b5ae7f63d07b : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FName)                                     Font_TypefaceFontName                                       OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_571e02be1ed5800f
/// Size: 0x0008 (0x000000 - 0x000008)
class FPropertyBag_571e02be1ed5800f : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class UObject*)                            Font_FontMaterial                                           OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_10aa859c993ddc71
/// Size: 0x0064 (0x000000 - 0x000064)
class FPropertyBag_10aa859c993ddc71 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 100;

public:
	SMember(FSlateColor)                               Color_Idle                                                  OFFSET(getStruct<T>, {0x0, 20, 0, 0})
	SMember(FSlateColor)                               Color_Hovered                                               OFFSET(getStruct<T>, {0x14, 20, 0, 0})
	SMember(FSlateColor)                               Color_Focused                                               OFFSET(getStruct<T>, {0x28, 20, 0, 0})
	SMember(FSlateColor)                               Color_Pressed                                               OFFSET(getStruct<T>, {0x3C, 20, 0, 0})
	SMember(FSlateColor)                               Color_Disabled                                              OFFSET(getStruct<T>, {0x50, 20, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_6919764150bc1872
/// Size: 0x0058 (0x000000 - 0x000058)
class FPropertyBag_6919764150bc1872 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FSlateFontInfo)                            Font                                                        OFFSET(getStruct<T>, {0x0, 88, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_407abd689823825a
/// Size: 0x02AC (0x000000 - 0x0002AC)
class FPropertyBag_407abd689823825a : public MDKBase
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

/// Struct /Engine/Transient.PropertyBag_2ebc451c7473caed
/// Size: 0x0058 (0x000000 - 0x000058)
class FPropertyBag_2ebc451c7473caed : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FSlateFontInfo)                            GamepadPromptFont                                           OFFSET(getStruct<T>, {0x0, 88, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_6f14d446672e2e48
/// Size: 0x0040 (0x000000 - 0x000040)
class FPropertyBag_6f14d446672e2e48 : public MDKBase
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

/// Struct /Engine/Transient.PropertyBag_b6a5921b42c4ec13
/// Size: 0x0040 (0x000000 - 0x000040)
class FPropertyBag_b6a5921b42c4ec13 : public MDKBase
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

/// Struct /Engine/Transient.PropertyBag_b7b9a69112491250
/// Size: 0x0078 (0x000000 - 0x000078)
class FPropertyBag_b7b9a69112491250 : public MDKBase
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

/// Struct /Engine/Transient.PropertyBag_6d3ef72550716f36
/// Size: 0x0008 (0x000000 - 0x000008)
class FPropertyBag_6d3ef72550716f36 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class USoundBase*)                         MatchMakingSucceededSound                                   OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_748fa4d1841e8602
/// Size: 0x0010 (0x000000 - 0x000010)
class FPropertyBag_748fa4d1841e8602 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     SecondsPriorToTransSound                                    OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(class USoundBase*)                         TransitionSound                                             OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_bb0e0e89af63b587
/// Size: 0x0010 (0x000000 - 0x000010)
class FPropertyBag_bb0e0e89af63b587 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class USoundBase*)                         MTXOfferTileIntroWhoosh                                     OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class USoundBase*)                         ShopRowWhooshIn                                             OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_71a677126445d644
/// Size: 0x0008 (0x000000 - 0x000008)
class FPropertyBag_71a677126445d644 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class USoundBase*)                         ShopRowWhooshIn                                             OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_aeb5ace3182d0cd0
/// Size: 0x0008 (0x000000 - 0x000008)
class FPropertyBag_aeb5ace3182d0cd0 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class USoundBase*)                         LockerCategoryWhooshSound                                   OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_97a52998bfd9ae4
/// Size: 0x0020 (0x000000 - 0x000020)
class FPropertyBag_97a52998bfd9ae4 : public MDKBase
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

/// Struct /Engine/Transient.PropertyBag_9c3db58c88e23cb2
/// Size: 0x0010 (0x000000 - 0x000010)
class FPropertyBag_9c3db58c88e23cb2 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class USoundBase*)                         ShopIntroWhooshSound                                        OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class USoundBase*)                         ContentWhoosh_RetractSound                                  OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_f8550cda7d5e4483
/// Size: 0x0010 (0x000000 - 0x000010)
class FPropertyBag_f8550cda7d5e4483 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class USoundBase*)                         ErrorWindowAppearSound                                      OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class USoundBase*)                         ErrorWindowAwaySound                                        OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_a0cd2fb05629fc99
/// Size: 0x0008 (0x000000 - 0x000008)
class FPropertyBag_a0cd2fb05629fc99 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class USoundBase*)                         PressedSound                                                OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_e4451b3c685c49ae
/// Size: 0x0028 (0x000000 - 0x000028)
class FPropertyBag_e4451b3c685c49ae : public MDKBase
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

/// Struct /Engine/Transient.PropertyBag_2f399fa730a7daf0
/// Size: 0x0030 (0x000000 - 0x000030)
class FPropertyBag_2f399fa730a7daf0 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FSlateSound)                               PressedSlateSoundOverride                                   OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FSlateSound)                               HoveredSlateSoundOverride                                   OFFSET(getStruct<T>, {0x18, 24, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_ce3edc2987799f16
/// Size: 0x0020 (0x000000 - 0x000020)
class FPropertyBag_ce3edc2987799f16 : public MDKBase
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

/// Struct /Engine/Transient.PropertyBag_152d0464b7012c8a
/// Size: 0x0018 (0x000000 - 0x000018)
class FPropertyBag_152d0464b7012c8a : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class USoundBase*)                         ContextButtonHoverSound                                     OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class USoundBase*)                         ContextButtonClickedSound                                   OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class USoundBase*)                         BlockOutlineHoverSound                                      OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_97fe032ab642cc29
/// Size: 0x0048 (0x000000 - 0x000048)
class FPropertyBag_97fe032ab642cc29 : public MDKBase
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

/// Struct /Engine/Transient.PropertyBag_7fcc48d5438313a1
/// Size: 0x0010 (0x000000 - 0x000010)
class FPropertyBag_7fcc48d5438313a1 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class USoundBase*)                         PressedSound                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class USoundBase*)                         HoveredSound                                                OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_438c69a7b3b929f6
/// Size: 0x0030 (0x000000 - 0x000030)
class FPropertyBag_438c69a7b3b929f6 : public MDKBase
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

/// Struct /Engine/Transient.PropertyBag_6d80688768f22fb6
/// Size: 0x0008 (0x000000 - 0x000008)
class FPropertyBag_6d80688768f22fb6 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class USoundBase*)                         ListEntryHoveredSound                                       OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_8804800ea8ce6c1c
/// Size: 0x0030 (0x000000 - 0x000030)
class FPropertyBag_8804800ea8ce6c1c : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FSlateSound)                               PressedSlateSoundOverride                                   OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FSlateSound)                               HoveredSlateSoundOverride                                   OFFSET(getStruct<T>, {0x18, 24, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_6d420abde0878cc6
/// Size: 0x0020 (0x000000 - 0x000020)
class FPropertyBag_6d420abde0878cc6 : public MDKBase
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

/// Struct /Engine/Transient.PropertyBag_8c1f452a33a0ff4f
/// Size: 0x0090 (0x000000 - 0x000090)
class FPropertyBag_8c1f452a33a0ff4f : public MDKBase
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

/// Struct /Engine/Transient.PropertyBag_ac23ee99e6c62cdc
/// Size: 0x0018 (0x000000 - 0x000018)
class FPropertyBag_ac23ee99e6c62cdc : public MDKBase
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

/// Struct /Engine/Transient.PropertyBag_ce0ce43b93140d14
/// Size: 0x0030 (0x000000 - 0x000030)
class FPropertyBag_ce0ce43b93140d14 : public MDKBase
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

/// Struct /Engine/Transient.PropertyBag_12c2a631879d825a
/// Size: 0x0018 (0x000000 - 0x000018)
class FPropertyBag_12c2a631879d825a : public MDKBase
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

/// Struct /Engine/Transient.PropertyBag_54dc103a182f11c5
/// Size: 0x0008 (0x000000 - 0x000008)
class FPropertyBag_54dc103a182f11c5 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class USoundBase*)                         BattlePassIntroWhooshSound                                  OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_db518fae0021237e
/// Size: 0x0030 (0x000000 - 0x000030)
class FPropertyBag_db518fae0021237e : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FSlateSound)                               PressedSlateSoundOverride                                   OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FSlateSound)                               HoveredSlateSoundOverride                                   OFFSET(getStruct<T>, {0x18, 24, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_a5018eaa9bb2f90
/// Size: 0x0038 (0x000000 - 0x000038)
class FPropertyBag_a5018eaa9bb2f90 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FSlateSound)                               PressedSlateSoundOverride                                   OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FSlateSound)                               HoveredSlateSoundOverride                                   OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	CMember(class USoundBase*)                         ClickedSound                                                OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_d811a7416dd3e995
/// Size: 0x0030 (0x000000 - 0x000030)
class FPropertyBag_d811a7416dd3e995 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FSlateSound)                               PressedSlateSoundOverride                                   OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FSlateSound)                               HoveredSlateSoundOverride                                   OFFSET(getStruct<T>, {0x18, 24, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_b0d07916d5c1c395
/// Size: 0x0030 (0x000000 - 0x000030)
class FPropertyBag_b0d07916d5c1c395 : public MDKBase
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

