
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: InputCore
/// dependency: SlateCore

/// Class /Script/ImGui.ImGuiInputHandler
/// Size: 0x0028 (0x000028 - 0x000050)
class UImGuiInputHandler : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/ImGui.ImGuiSettings
/// Size: 0x0108 (0x000028 - 0x000130)
class UImGuiSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FSoftClassPath)                            ImGuiInputHandlerClass                                      OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	DMember(bool)                                      bShareKeyboardInput                                         OFFSET(get<bool>, {0x40, 1, 0, 0})
	DMember(bool)                                      bShareGamepadInput                                          OFFSET(get<bool>, {0x41, 1, 0, 0})
	DMember(bool)                                      bShareMouseInput                                            OFFSET(get<bool>, {0x42, 1, 0, 0})
	DMember(bool)                                      bUseSoftwareCursor                                          OFFSET(get<bool>, {0x43, 1, 0, 0})
	SMember(FImGuiKeyInfo)                             ToggleInput                                                 OFFSET(getStruct<T>, {0x48, 32, 0, 0})
	SMember(FImGuiKeyInfo)                             ToggleInputController                                       OFFSET(getStruct<T>, {0x68, 32, 0, 0})
	SMember(FImGuiCanvasSizeInfo)                      CanvasSize                                                  OFFSET(getStruct<T>, {0x88, 16, 0, 0})
	SMember(FImGuiDPIScaleInfo)                        DPIScale                                                    OFFSET(getStruct<T>, {0x98, 152, 0, 0})
};

/// Struct /Script/ImGui.ImGuiKeyInfo
/// Size: 0x0020 (0x000000 - 0x000020)
class FImGuiKeyInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FKey)                                      Key                                                         OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	CMember(ECheckBoxState)                            Shift                                                       OFFSET(get<T>, {0x18, 1, 0, 0})
	CMember(ECheckBoxState)                            Ctrl                                                        OFFSET(get<T>, {0x19, 1, 0, 0})
	CMember(ECheckBoxState)                            Alt                                                         OFFSET(get<T>, {0x1A, 1, 0, 0})
	CMember(ECheckBoxState)                            Cmd                                                         OFFSET(get<T>, {0x1B, 1, 0, 0})
};

/// Struct /Script/ImGui.ImGuiCanvasSizeInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FImGuiCanvasSizeInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(EImGuiCanvasSizeType)                      SizeType                                                    OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   Width                                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   Height                                                      OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(bool)                                      bExtendToViewport                                           OFFSET(get<bool>, {0xC, 1, 0, 0})
};

/// Struct /Script/ImGui.ImGuiDPIScaleInfo
/// Size: 0x0098 (0x000000 - 0x000098)
class FImGuiDPIScaleInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(EImGuiDPIScaleMethod)                      ScalingMethod                                               OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FRuntimeFloatCurve)                        DPICurve                                                    OFFSET(getStruct<T>, {0x8, 136, 0, 0})
	DMember(bool)                                      bScaleWithCurve                                             OFFSET(get<bool>, {0x90, 1, 0, 0})
};

/// Enum /Script/ImGui.EImGuiCanvasSizeType
/// Size: 0x04
enum EImGuiCanvasSizeType : uint8_t
{
	EImGuiCanvasSizeType__Custom                                                     = 0,
	EImGuiCanvasSizeType__Desktop                                                    = 1,
	EImGuiCanvasSizeType__Viewport                                                   = 2,
	EImGuiCanvasSizeType__EImGuiCanvasSizeType_MAX                                   = 3
};

/// Enum /Script/ImGui.EImGuiDPIScaleMethod
/// Size: 0x03
enum EImGuiDPIScaleMethod : uint8_t
{
	EImGuiDPIScaleMethod__ImGui                                                      = 0,
	EImGuiDPIScaleMethod__Slate                                                      = 1,
	EImGuiDPIScaleMethod__EImGuiDPIScaleMethod_MAX                                   = 2
};

