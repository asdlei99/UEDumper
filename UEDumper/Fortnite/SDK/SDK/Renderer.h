
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/Renderer.ESparseVolumeTexturePreviewAttribute
/// Size: 0x09
enum class ESparseVolumeTexturePreviewAttribute : uint8_t
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

/// Class /Script/Renderer.SparseVolumeTextureViewerComponent
/// Size: 0x0040 (0x000570 - 0x0005B0)
class USparseVolumeTextureViewerComponent : public UPrimitiveComponent
{ 
public:
	class USparseVolumeTexture*                        SparseVolumeTexturePreview;                                 // 0x0570   (0x0008)  
	bool                                               bAnimate : 1;                                               // 0x0578:0 (0x0001)  
	bool                                               bReversePlayback : 1;                                       // 0x0578:1 (0x0001)  
	bool                                               bBlockingStreamingRequests : 1;                             // 0x0578:2 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0579   (0x0003)  MISSED
	float                                              AnimationFrame;                                             // 0x057C   (0x0004)  
	float                                              FrameRate;                                                  // 0x0580   (0x0004)  
	float                                              AnimationTime;                                              // 0x0584   (0x0004)  
	SDK_UNDEFINED(1,14945) /* TEnumAsByte<ESparseVolumeTexturePreviewAttribute> */ __um(PreviewAttribute);         // 0x0588   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0589   (0x0003)  MISSED
	int32_t                                            MipLevel;                                                   // 0x058C   (0x0004)  
	float                                              Extinction;                                                 // 0x0590   (0x0004)  
	unsigned char                                      UnknownData02_6[0x1C];                                      // 0x0594   (0x001C)  MISSED
};

/// Class /Script/Renderer.SparseVolumeTextureViewer
/// Size: 0x0008 (0x000290 - 0x000298)
class ASparseVolumeTextureViewer : public AInfo
{ 
public:
	class USparseVolumeTextureViewerComponent*         SparseVolumeTextureViewerComponent;                         // 0x0290   (0x0008)  
};

