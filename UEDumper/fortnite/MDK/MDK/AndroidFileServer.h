
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/AndroidFileServer.AndroidFileServerBPLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAndroidFileServerBPLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AndroidFileServer.AndroidFileServerBPLibrary.StopFileServer
	// bool StopFileServer(bool bUSB, bool bNetwork);                                                                           // [0xc90a518] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AndroidFileServer.AndroidFileServerBPLibrary.StartFileServer
	// bool StartFileServer(bool bUSB, bool bNetwork, int32_t Port);                                                            // [0xc90a42c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AndroidFileServer.AndroidFileServerBPLibrary.IsFileServerRunning
	// TEnumAsByte<EAFSActiveType> IsFileServerRunning();                                                                       // [0x2c9e4a0] Final|Native|Static|Public|BlueprintCallable 
};

/// Enum /Script/AndroidFileServer.EAFSActiveType
/// Size: 0x05
enum EAFSActiveType : uint8_t
{
	EAFSActiveType__None                                                             = 0,
	EAFSActiveType__USBOnly                                                          = 1,
	EAFSActiveType__NetworkOnly                                                      = 2,
	EAFSActiveType__Combined                                                         = 3,
	EAFSActiveType__EAFSActiveType_MAX                                               = 4
};

