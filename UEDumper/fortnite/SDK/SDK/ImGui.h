
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: InputCore
/// dependency: SlateCore

/// Enum /Script/ImGui.EImGuiCanvasSizeType
/// Size: 0x04
enum class EImGuiCanvasSizeType : uint8_t
{
	EImGuiCanvasSizeType__Custom                                                     = 0,
	EImGuiCanvasSizeType__Desktop                                                    = 1,
	EImGuiCanvasSizeType__Viewport                                                   = 2,
	EImGuiCanvasSizeType__EImGuiCanvasSizeType_MAX                                   = 3
};

/// Enum /Script/ImGui.EImGuiDPIScaleMethod
/// Size: 0x03
enum class EImGuiDPIScaleMethod : uint8_t
{
	EImGuiDPIScaleMethod__ImGui                                                      = 0,
	EImGuiDPIScaleMethod__Slate                                                      = 1,
	EImGuiDPIScaleMethod__EImGuiDPIScaleMethod_MAX                                   = 2
};

/// Class /Script/ImGui.ImGuiInputHandler
/// Size: 0x0028 (0x000028 - 0x000050)
class UImGuiInputHandler : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0028   (0x0028)  MISSED
};

/// Struct /Script/ImGui.ImGuiKeyInfo
/// Size: 0x0020 (0x000000 - 0x000020)
struct FImGuiKeyInfo
{ 
	FKey                                               Key;                                                        // 0x0000   (0x0018)  
	ECheckBoxState                                     Shift;                                                      // 0x0018   (0x0001)  
	ECheckBoxState                                     Ctrl;                                                       // 0x0019   (0x0001)  
	ECheckBoxState                                     Alt;                                                        // 0x001A   (0x0001)  
	ECheckBoxState                                     Cmd;                                                        // 0x001B   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/ImGui.ImGuiCanvasSizeInfo
/// Size: 0x0010 (0x000000 - 0x000010)
struct FImGuiCanvasSizeInfo
{ 
	EImGuiCanvasSizeType                               SizeType;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            Width;                                                      // 0x0004   (0x0004)  
	int32_t                                            Height;                                                     // 0x0008   (0x0004)  
	bool                                               bExtendToViewport;                                          // 0x000C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/ImGui.ImGuiDPIScaleInfo
/// Size: 0x0098 (0x000000 - 0x000098)
struct FImGuiDPIScaleInfo
{ 
	EImGuiDPIScaleMethod                               ScalingMethod;                                              // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Scale;                                                      // 0x0004   (0x0004)  
	FRuntimeFloatCurve                                 DPICurve;                                                   // 0x0008   (0x0088)  
	bool                                               bScaleWithCurve;                                            // 0x0090   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0091   (0x0007)  MISSED
};

/// Class /Script/ImGui.ImGuiSettings
/// Size: 0x0108 (0x000028 - 0x000130)
class UImGuiSettings : public UObject
{ 
public:
	FSoftClassPath                                     ImGuiInputHandlerClass;                                     // 0x0028   (0x0018)  
	bool                                               bShareKeyboardInput;                                        // 0x0040   (0x0001)  
	bool                                               bShareGamepadInput;                                         // 0x0041   (0x0001)  
	bool                                               bShareMouseInput;                                           // 0x0042   (0x0001)  
	bool                                               bUseSoftwareCursor;                                         // 0x0043   (0x0001)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	FImGuiKeyInfo                                      ToggleInput;                                                // 0x0048   (0x0020)  
	FImGuiKeyInfo                                      ToggleInputController;                                      // 0x0068   (0x0020)  
	FImGuiCanvasSizeInfo                               CanvasSize;                                                 // 0x0088   (0x0010)  
	FImGuiDPIScaleInfo                                 DPIScale;                                                   // 0x0098   (0x0098)  
};

