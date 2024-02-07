
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/Renderer.SparseVolumeTextureViewerComponent
/// Size: 0x0040 (0x000500 - 0x000540)
class USparseVolumeTextureViewerComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1344;

public:
	CMember(class USparseVolumeTexture*)               SparseVolumeTexturePreview                                  OFFSET(get<T>, {0x500, 8, 0, 0})
	DMember(bool)                                      bAnimate                                                    OFFSET(get<bool>, {0x508, 1, 1, 0})
	DMember(bool)                                      bReversePlayback                                            OFFSET(get<bool>, {0x508, 1, 1, 1})
	DMember(bool)                                      bBlockingStreamingRequests                                  OFFSET(get<bool>, {0x508, 1, 1, 2})
	DMember(float)                                     AnimationFrame                                              OFFSET(get<float>, {0x50C, 4, 0, 0})
	DMember(float)                                     FrameRate                                                   OFFSET(get<float>, {0x510, 4, 0, 0})
	DMember(float)                                     AnimationTime                                               OFFSET(get<float>, {0x514, 4, 0, 0})
	CMember(TEnumAsByte<ESparseVolumeTexturePreviewAttribute>) PreviewAttribute                                    OFFSET(get<T>, {0x518, 1, 0, 0})
	DMember(int32_t)                                   MipLevel                                                    OFFSET(get<int32_t>, {0x51C, 4, 0, 0})
	DMember(float)                                     Extinction                                                  OFFSET(get<float>, {0x520, 4, 0, 0})
};

/// Class /Script/Renderer.SparseVolumeTextureViewer
/// Size: 0x0008 (0x000290 - 0x000298)
class ASparseVolumeTextureViewer : public AInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(class USparseVolumeTextureViewerComponent*) SparseVolumeTextureViewerComponent                         OFFSET(get<T>, {0x290, 8, 0, 0})
};

/// Enum /Script/Renderer.ESparseVolumeTexturePreviewAttribute
/// Size: 0x09
enum ESparseVolumeTexturePreviewAttribute : uint8_t
{
	ESVTPA_AttributesA_R                                                             = 0,
	ESVTPA_AttributesA_G                                                             = 1,
	ESVTPA_AttributesA_B                                                             = 2,
	ESVTPA_AttributesA_A                                                             = 3,
	ESVTPA_AttributesB_R                                                             = 4,
	ESVTPA_AttributesB_G                                                             = 5,
	ESVTPA_AttributesB_B                                                             = 6,
	ESVTPA_AttributesB_A                                                             = 7,
	ESVTPA_MAX                                                                       = 8
};

