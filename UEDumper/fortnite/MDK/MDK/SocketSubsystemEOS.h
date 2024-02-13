
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: OnlineSubsystemUtils

/// Class /Script/SocketSubsystemEOS.NetConnectionEOS
/// Size: 0x0008 (0x001E90 - 0x001E98)
class UNetConnectionEOS : public UIpConnection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7832;

public:
};

/// Class /Script/SocketSubsystemEOS.NetDriverEOSBase
/// Size: 0x0008 (0x000880 - 0x000888)
class UNetDriverEOSBase : public UIpNetDriver
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2184;

public:
	DMember(bool)                                      bIsPassthrough                                              OFFSET(get<bool>, {0x880, 1, 0, 0})
	DMember(bool)                                      bIsUsingP2PSockets                                          OFFSET(get<bool>, {0x881, 1, 0, 0})
};

