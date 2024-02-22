
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: OnlineSubsystemUtils

/// Class /Script/SocketSubsystemEOS.NetConnectionEOS
/// Size: 0x0008 (0x001E90 - 0x001E98)
class UNetConnectionEOS : public UIpConnection
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x1E90   (0x0008)  MISSED
};

/// Class /Script/SocketSubsystemEOS.NetDriverEOSBase
/// Size: 0x0008 (0x000888 - 0x000890)
class UNetDriverEOSBase : public UIpNetDriver
{ 
public:
	bool                                               bIsPassthrough;                                             // 0x0888   (0x0001)  
	bool                                               bIsUsingP2PSockets;                                         // 0x0889   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x088A   (0x0006)  MISSED
};

