
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/FortImGuiCore.DebuggableObject
/// Size: 0x0000 (0x000028 - 0x000028)
class UDebuggableObject : public UInterface
{ 
public:
};

/// Class /Script/FortImGuiCore.ImGuiDebugMenuBase
/// Size: 0x0230 (0x000290 - 0x0004C0)
class AImGuiDebugMenuBase : public AActor
{ 
public:
	unsigned char                                      UnknownData00_3[0xA0];                                      // 0x0290   (0x00A0)  MISSED
	class APlayerController*                           PrivateLocalPlayerController;                               // 0x0330   (0x0008)  
	unsigned char                                      UnknownData01_6[0x188];                                     // 0x0338   (0x0188)  MISSED


	/// Functions
	// Function /Script/FortImGuiCore.ImGuiDebugMenuBase.ToggleInputLock
	// void ToggleInputLock();                                                                                               // [0x307d48c] Final|Native|Protected 
};

/// Class /Script/FortImGuiCore.ObjectDebuggerMenu
/// Size: 0x0130 (0x0004C0 - 0x0005F0)
class AObjectDebuggerMenu : public AImGuiDebugMenuBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x130];                                     // 0x04C0   (0x0130)  MISSED
};

