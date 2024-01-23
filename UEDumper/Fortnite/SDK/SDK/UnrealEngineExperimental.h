
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: LocalizableMessage
/// dependency: ModularGameplay

/// Enum /Script/UnrealEngineExperimental.EScriptDiagnosticMessageType
/// Size: 0x06
enum class EScriptDiagnosticMessageType : uint8_t
{
	EScriptDiagnosticMessageType__Debug                                              = 0,
	EScriptDiagnosticMessageType__Verbose                                            = 1,
	EScriptDiagnosticMessageType__Normal                                             = 2,
	EScriptDiagnosticMessageType__Warning                                            = 3,
	EScriptDiagnosticMessageType__Error                                              = 4,
	EScriptDiagnosticMessageType__EScriptDiagnosticMessageType_MAX                   = 5
};

/// Struct /Script/UnrealEngineExperimental.PersistentLineBatcher
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPersistentLineBatcher
{ 
	class ULineBatchComponent*                         PersistentLineBatcher;                                      // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0008   (0x0008)  MISSED
};

/// Class /Script/UnrealEngineExperimental.ControllerComponentDebugDraw
/// Size: 0x0068 (0x0000A0 - 0x000108)
class UControllerComponentDebugDraw : public UControllerComponent
{ 
public:
	TArray<FPersistentLineBatcher>                     PersistentLineBatchers;                                     // 0x00A0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x58];                                      // 0x00B0   (0x0058)  MISSED


	/// Functions
	// Function /Script/UnrealEngineExperimental.ControllerComponentDebugDraw.SetDebugDrawEnabled
	// void SetDebugDrawEnabled(bool bEnabled, uint32_t ChannelId);                                                          // [0x70eb4f0] RequiredAPI|Net|NetReliableNative|Event|NetMulticast|Public 
	// Function /Script/UnrealEngineExperimental.ControllerComponentDebugDraw.Reset
	// void Reset(uint32_t ChannelId);                                                                                       // [0x70eb3bc] RequiredAPI|Net|NetReliableNative|Event|Public|NetClient|Const 
	// Function /Script/UnrealEngineExperimental.ControllerComponentDebugDraw.DrawDebugSphereInternal
	// void DrawDebugSphereInternal(FVector Center, float Radius, int32_t Segments, FColor Color, bool bPersistentLines, float Lifetime, float Thickness, uint32_t ChannelId, uint32_t InstanceID); // [0x70eabc4] Net|NetReliableNative|Event|Protected|HasDefaults|NetClient 
	// Function /Script/UnrealEngineExperimental.ControllerComponentDebugDraw.DrawDebugPointInternal
	// void DrawDebugPointInternal(FVector Position, float Size, FColor Color, bool bPersistentLines, float Lifetime, uint32_t ChannelId, uint32_t InstanceID); // [0x70ea584] Net|NetReliableNative|Event|Protected|HasDefaults|NetClient 
	// Function /Script/UnrealEngineExperimental.ControllerComponentDebugDraw.DrawDebugLineInternal
	// void DrawDebugLineInternal(FVector LineStart, FVector LineEnd, FColor Color, bool bPersistentLines, float Lifetime, float Thickness, uint32_t ChannelId, uint32_t InstanceID); // [0x70e9e68] Net|NetReliableNative|Event|Protected|HasDefaults|NetClient 
	// Function /Script/UnrealEngineExperimental.ControllerComponentDebugDraw.DrawDebugDirectionalArrowInternal
	// void DrawDebugDirectionalArrowInternal(FVector LineStart, FVector LineEnd, float ArrowSize, FColor Color, bool bPersistentLines, float Lifetime, float Thickness, uint32_t ChannelId, uint32_t InstanceID); // [0x70e9670] Net|NetReliableNative|Event|Protected|HasDefaults|NetClient 
	// Function /Script/UnrealEngineExperimental.ControllerComponentDebugDraw.DrawDebugCylinderInternal
	// void DrawDebugCylinderInternal(FVector Start, FVector End, float Radius, int32_t Segments, FColor Color, bool bPersistentLines, float Lifetime, float Thickness, uint32_t ChannelId, uint32_t InstanceID); // [0x70e8da4] Net|NetReliableNative|Event|Protected|HasDefaults|NetClient 
	// Function /Script/UnrealEngineExperimental.ControllerComponentDebugDraw.DrawDebugConeInternal
	// void DrawDebugConeInternal(FVector Origin, FVector Direction, float Length, float AngleWidth, float AngleHeight, int32_t NumSides, FColor Color, bool bPersistentLines, float Lifetime, float Thickness, uint32_t ChannelId, uint32_t InstanceID); // [0x70e8324] Net|NetReliableNative|Event|Protected|HasDefaults|NetClient 
	// Function /Script/UnrealEngineExperimental.ControllerComponentDebugDraw.DrawDebugCapsuleInternal
	// void DrawDebugCapsuleInternal(FVector Center, float HalfHeight, float Radius, FQuat Rotation, FColor Color, bool bPersistentLines, float Lifetime, float Thickness, uint32_t ChannelId, uint32_t InstanceID); // [0x70e7a54] Net|NetReliableNative|Event|Protected|HasDefaults|NetClient 
	// Function /Script/UnrealEngineExperimental.ControllerComponentDebugDraw.DrawDebugBoxInternal
	// void DrawDebugBoxInternal(FVector Center, FVector Extent, FQuat Rotation, FColor Color, bool bPersistentLines, float Lifetime, float Thickness, uint32_t ChannelId, uint32_t InstanceID); // [0x70e7260] Net|NetReliableNative|Event|Protected|HasDefaults|NetClient 
	// Function /Script/UnrealEngineExperimental.ControllerComponentDebugDraw.ClearChannel
	// void ClearChannel(uint32_t ChannelId);                                                                                // [0x70e712c] RequiredAPI|Net|NetReliableNative|Event|Public|NetClient|Const 
	// Function /Script/UnrealEngineExperimental.ControllerComponentDebugDraw.Clear
	// void Clear(uint32_t ChannelId, uint32_t InstanceID);                                                                  // [0x70e6f1c] RequiredAPI|Net|NetReliableNative|Event|Public|NetClient|Const 
};

/// Struct /Script/UnrealEngineExperimental.ScriptDiagnosticSourceLocation
/// Size: 0x0020 (0x000000 - 0x000020)
struct FScriptDiagnosticSourceLocation
{ 
	SDK_UNDEFINED(16,15289) /* FString */              __um(FilePath);                                             // 0x0000   (0x0010)  
	FIntPoint                                          RowSpan;                                                    // 0x0010   (0x0008)  
	FIntPoint                                          ColSpan;                                                    // 0x0018   (0x0008)  
};

/// Struct /Script/UnrealEngineExperimental.ScriptDiagnosticMessage
/// Size: 0x0058 (0x000000 - 0x000058)
struct FScriptDiagnosticMessage
{ 
	SDK_UNDEFINED(1,15290) /* TEnumAsByte<EScriptDiagnosticMessageType> */ __um(MessageType);                      // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FDateTime                                          Timestamp;                                                  // 0x0008   (0x0008)  
	SDK_UNDEFINED(16,15291) /* FString */              __um(Channel);                                              // 0x0010   (0x0010)  
	SDK_UNDEFINED(24,15292) /* FText */                __um(MessageStr);                                           // 0x0020   (0x0018)  
	FScriptDiagnosticSourceLocation                    SourceLocation;                                             // 0x0038   (0x0020)  
};

/// Struct /Script/UnrealEngineExperimental.ScriptScreenLogMessage
/// Size: 0x0008 (0x000058 - 0x000060)
struct FScriptScreenLogMessage : FScriptDiagnosticMessage
{ 
	FColor                                             ScreenColor;                                                // 0x0058   (0x0004)  
	float                                              DisplayDuration;                                            // 0x005C   (0x0004)  
};

/// Struct /Script/UnrealEngineExperimental.ScriptScreenLogMessageWithLocalization
/// Size: 0x0050 (0x000000 - 0x000050)
struct FScriptScreenLogMessageWithLocalization
{ 
	FDateTime                                          Timestamp;                                                  // 0x0000   (0x0008)  
	FLocalizableMessage                                Message;                                                    // 0x0008   (0x0030)  
	SDK_UNDEFINED(16,15293) /* FString */              __um(Prefix);                                               // 0x0038   (0x0010)  
	FColor                                             ScreenColor;                                                // 0x0048   (0x0004)  
	float                                              DisplayDuration;                                            // 0x004C   (0x0004)  
};

