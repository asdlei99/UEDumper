
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AudioMixer
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/MediaAssets.MediaTextureOutputFormat
/// Size: 0x03
enum class MediaTextureOutputFormat : uint8_t
{
	MTOF_Default                                                                     = 0,
	MTOF_SRGB_LINOUT                                                                 = 1,
	MTOF_MAX                                                                         = 2
};

/// Enum /Script/MediaAssets.MediaTextureOrientation
/// Size: 0x05
enum class MediaTextureOrientation : uint8_t
{
	MTORI_Original                                                                   = 0,
	MTORI_CW90                                                                       = 1,
	MTORI_CW180                                                                      = 2,
	MTORI_CW270                                                                      = 3,
	MTORI_MAX                                                                        = 4
};

/// Enum /Script/MediaAssets.EMediaPlayerTrack
/// Size: 0x08
enum class EMediaPlayerTrack : uint8_t
{
	EMediaPlayerTrack__Audio                                                         = 0,
	EMediaPlayerTrack__Caption                                                       = 1,
	EMediaPlayerTrack__Metadata                                                      = 2,
	EMediaPlayerTrack__Script                                                        = 3,
	EMediaPlayerTrack__Subtitle                                                      = 4,
	EMediaPlayerTrack__Text                                                          = 5,
	EMediaPlayerTrack__Video                                                         = 6,
	EMediaPlayerTrack__EMediaPlayerTrack_MAX                                         = 7
};

/// Enum /Script/MediaAssets.EMediaSoundChannels
/// Size: 0x04
enum class EMediaSoundChannels : uint32_t
{
	EMediaSoundChannels__Mono                                                        = 0,
	EMediaSoundChannels__Stereo                                                      = 1,
	EMediaSoundChannels__Surround                                                    = 2,
	EMediaSoundChannels__EMediaSoundChannels_MAX                                     = 3
};

/// Enum /Script/MediaAssets.EMediaSoundComponentFFTSize
/// Size: 0x05
enum class EMediaSoundComponentFFTSize : uint8_t
{
	EMediaSoundComponentFFTSize__Min                                                 = 0,
	EMediaSoundComponentFFTSize__Small                                               = 1,
	EMediaSoundComponentFFTSize__Medium                                              = 2,
	EMediaSoundComponentFFTSize__Large                                               = 3,
	EMediaSoundComponentFFTSize__EMediaSoundComponentFFTSize_MAX                     = 4
};

/// Enum /Script/MediaAssets.EMediaTextureVisibleMipsTiles
/// Size: 0x04
enum class EMediaTextureVisibleMipsTiles : uint8_t
{
	EMediaTextureVisibleMipsTiles__None                                              = 0,
	EMediaTextureVisibleMipsTiles__Plane                                             = 1,
	EMediaTextureVisibleMipsTiles__Sphere                                            = 2,
	EMediaTextureVisibleMipsTiles__EMediaTextureVisibleMipsTiles_MAX                 = 3
};

/// Enum /Script/MediaAssets.EMediaAudioCaptureDeviceFilter
/// Size: 0x06
enum class EMediaAudioCaptureDeviceFilter : uint8_t
{
	EMediaAudioCaptureDeviceFilter__None                                             = 0,
	EMediaAudioCaptureDeviceFilter__Card                                             = 1,
	EMediaAudioCaptureDeviceFilter__Microphone                                       = 2,
	EMediaAudioCaptureDeviceFilter__Software                                         = 4,
	EMediaAudioCaptureDeviceFilter__Unknown                                          = 8,
	EMediaAudioCaptureDeviceFilter__EMediaAudioCaptureDeviceFilter_MAX               = 9
};

/// Enum /Script/MediaAssets.EMediaVideoCaptureDeviceFilter
/// Size: 0x06
enum class EMediaVideoCaptureDeviceFilter : uint8_t
{
	EMediaVideoCaptureDeviceFilter__None                                             = 0,
	EMediaVideoCaptureDeviceFilter__Card                                             = 1,
	EMediaVideoCaptureDeviceFilter__Software                                         = 2,
	EMediaVideoCaptureDeviceFilter__Unknown                                          = 4,
	EMediaVideoCaptureDeviceFilter__Webcam                                           = 8,
	EMediaVideoCaptureDeviceFilter__EMediaVideoCaptureDeviceFilter_MAX               = 9
};

/// Enum /Script/MediaAssets.EMediaWebcamCaptureDeviceFilter
/// Size: 0x06
enum class EMediaWebcamCaptureDeviceFilter : uint8_t
{
	EMediaWebcamCaptureDeviceFilter__None                                            = 0,
	EMediaWebcamCaptureDeviceFilter__DepthSensor                                     = 1,
	EMediaWebcamCaptureDeviceFilter__Front                                           = 2,
	EMediaWebcamCaptureDeviceFilter__Rear                                            = 4,
	EMediaWebcamCaptureDeviceFilter__Unknown                                         = 8,
	EMediaWebcamCaptureDeviceFilter__EMediaWebcamCaptureDeviceFilter_MAX             = 9
};

/// Class /Script/MediaAssets.MediaSourceRendererInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UMediaSourceRendererInterface : public UInterface
{ 
public:
};

/// Class /Script/MediaAssets.MediaTexture
/// Size: 0x00E8 (0x000130 - 0x000218)
class UMediaTexture : public UTexture
{ 
public:
	SDK_UNDEFINED(1,1831) /* TEnumAsByte<TextureAddress> */ __um(AddressX);                                        // 0x0130   (0x0001)  
	SDK_UNDEFINED(1,1832) /* TEnumAsByte<TextureAddress> */ __um(AddressY);                                        // 0x0131   (0x0001)  
	bool                                               AutoClear;                                                  // 0x0132   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0133   (0x0001)  MISSED
	FLinearColor                                       ClearColor;                                                 // 0x0134   (0x0010)  
	bool                                               EnableGenMips;                                              // 0x0144   (0x0001)  
	char                                               NumMips;                                                    // 0x0145   (0x0001)  
	bool                                               NewStyleOutput;                                             // 0x0146   (0x0001)  
	SDK_UNDEFINED(1,1833) /* TEnumAsByte<MediaTextureOutputFormat> */ __um(OutputFormat);                          // 0x0147   (0x0001)  
	float                                              CurrentAspectRatio;                                         // 0x0148   (0x0004)  
	SDK_UNDEFINED(1,1834) /* TEnumAsByte<MediaTextureOrientation> */ __um(CurrentOrientation);                     // 0x014C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x014D   (0x0003)  MISSED
	class UMediaPlayer*                                MediaPlayer;                                                // 0x0150   (0x0008)  
	unsigned char                                      UnknownData02_6[0xC0];                                      // 0x0158   (0x00C0)  MISSED


	/// Functions
	// Function /Script/MediaAssets.MediaTexture.UpdateResource
	// void UpdateResource();                                                                                                // [0xfae078] Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaTexture.SetMediaPlayer
	// void SetMediaPlayer(class UMediaPlayer* NewMediaPlayer);                                                              // [0x605da94] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaTexture.GetWidth
	// int32_t GetWidth();                                                                                                   // [0x605a3a4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaTexture.GetTextureNumMips
	// int32_t GetTextureNumMips();                                                                                          // [0x60590f0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaTexture.GetMediaPlayer
	// class UMediaPlayer* GetMediaPlayer();                                                                                 // [0x60575f0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaTexture.GetHeight
	// int32_t GetHeight();                                                                                                  // [0x322a168] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaTexture.GetAspectRatio
	// float GetAspectRatio();                                                                                               // [0x6056f54] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MediaAssets.MediaSource
/// Size: 0x0058 (0x000028 - 0x000080)
class UMediaSource : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x80];                                      // 0x0000   (0x0080)  MISSED


	/// Functions
	// Function /Script/MediaAssets.MediaSource.Validate
	// bool Validate();                                                                                                      // [0x605e7ac] RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaSource.SetMediaOptionString
	// void SetMediaOptionString(FName& Key, FString Value);                                                                 // [0x605d174] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSource.SetMediaOptionInt64
	// void SetMediaOptionInt64(FName& Key, int64_t Value);                                                                  // [0x605d03c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSource.SetMediaOptionFloat
	// void SetMediaOptionFloat(FName& Key, float Value);                                                                    // [0x605cf2c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSource.SetMediaOptionBool
	// void SetMediaOptionBool(FName& Key, bool Value);                                                                      // [0x605ce1c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSource.GetUrl
	// FString GetUrl();                                                                                                     // [0x6059c4c] RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MediaAssets.BaseMediaSource
/// Size: 0x0008 (0x000080 - 0x000088)
class UBaseMediaSource : public UMediaSource
{ 
public:
	FName                                              PlayerName;                                                 // 0x0080   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0084   (0x0004)  MISSED
};

/// Class /Script/MediaAssets.FileMediaSource
/// Size: 0x0028 (0x000088 - 0x0000B0)
class UFileMediaSource : public UBaseMediaSource
{ 
public:
	SDK_UNDEFINED(16,1835) /* FString */               __um(FilePath);                                             // 0x0088   (0x0010)  
	bool                                               PrecacheFile;                                               // 0x0098   (0x0001)  
	unsigned char                                      UnknownData00_6[0x17];                                      // 0x0099   (0x0017)  MISSED


	/// Functions
	// Function /Script/MediaAssets.FileMediaSource.SetFilePath
	// void SetFilePath(FString Path);                                                                                       // [0x605c654] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/MediaAssets.MediaComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UMediaComponent : public UActorComponent
{ 
public:
	class UMediaTexture*                               MediaTexture;                                               // 0x00A0   (0x0008)  
	class UMediaPlayer*                                MediaPlayer;                                                // 0x00A8   (0x0008)  


	/// Functions
	// Function /Script/MediaAssets.MediaComponent.GetMediaTexture
	// class UMediaTexture* GetMediaTexture();                                                                               // [0x2ed94dc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaComponent.GetMediaPlayer
	// class UMediaPlayer* GetMediaPlayer();                                                                                 // [0x60575d8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MediaAssets.MediaTimeStampInfo
/// Size: 0x0010 (0x000028 - 0x000038)
class UMediaTimeStampInfo : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FTimespan                                          Time;                                                       // 0x0028   (0x0008)  
	int64_t                                            SequenceIndex;                                              // 0x0030   (0x0008)  
};

/// Class /Script/MediaAssets.MediaPlayer
/// Size: 0x0140 (0x000028 - 0x000168)
class UMediaPlayer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	SDK_UNDEFINED(16,1836) /* FMulticastInlineDelegate */ __um(OnEndReached);                                      // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,1837) /* FMulticastInlineDelegate */ __um(OnMediaClosed);                                     // 0x0040   (0x0010)  
	SDK_UNDEFINED(16,1838) /* FMulticastInlineDelegate */ __um(OnMediaOpened);                                     // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,1839) /* FMulticastInlineDelegate */ __um(OnMediaOpenFailed);                                 // 0x0060   (0x0010)  
	SDK_UNDEFINED(16,1840) /* FMulticastInlineDelegate */ __um(OnPlaybackResumed);                                 // 0x0070   (0x0010)  
	SDK_UNDEFINED(16,1841) /* FMulticastInlineDelegate */ __um(OnPlaybackSuspended);                               // 0x0080   (0x0010)  
	SDK_UNDEFINED(16,1842) /* FMulticastInlineDelegate */ __um(OnSeekCompleted);                                   // 0x0090   (0x0010)  
	SDK_UNDEFINED(16,1843) /* FMulticastInlineDelegate */ __um(OnTracksChanged);                                   // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1844) /* FMulticastInlineDelegate */ __um(OnMetadataChanged);                                 // 0x00B0   (0x0010)  
	FTimespan                                          CacheAhead;                                                 // 0x00C0   (0x0008)  
	FTimespan                                          CacheBehind;                                                // 0x00C8   (0x0008)  
	FTimespan                                          CacheBehindGame;                                            // 0x00D0   (0x0008)  
	bool                                               NativeAudioOut;                                             // 0x00D8   (0x0001)  
	bool                                               PlayOnOpen;                                                 // 0x00D9   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x00DA   (0x0002)  MISSED
	bool                                               Shuffle : 1;                                                // 0x00DC:0 (0x0001)  
	bool                                               Loop : 1;                                                   // 0x00DC:1 (0x0001)  
	unsigned char                                      UnknownData02_4[0x3];                                       // 0x00DD   (0x0003)  MISSED
	class UMediaPlaylist*                              Playlist;                                                   // 0x00E0   (0x0008)  
	int32_t                                            PlaylistIndex;                                              // 0x00E8   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x00EC   (0x0004)  MISSED
	FTimespan                                          TimeDelay;                                                  // 0x00F0   (0x0008)  
	float                                              HorizontalFieldOfView;                                      // 0x00F8   (0x0004)  
	float                                              VerticalFieldOfView;                                        // 0x00FC   (0x0004)  
	FRotator                                           ViewRotation;                                               // 0x0100   (0x0018)  
	unsigned char                                      UnknownData04_5[0x28];                                      // 0x0118   (0x0028)  MISSED
	FGuid                                              PlayerGuid;                                                 // 0x0140   (0x0010)  
	unsigned char                                      UnknownData05_6[0x18];                                      // 0x0150   (0x0018)  MISSED


	/// Functions
	// Function /Script/MediaAssets.MediaPlayer.SupportsSeeking
	// bool SupportsSeeking();                                                                                               // [0x605e788] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.SupportsScrubbing
	// bool SupportsScrubbing();                                                                                             // [0x605e710] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.SupportsRate
	// bool SupportsRate(float Rate, bool Unthinned);                                                                        // [0x605e5b8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.SetViewRotation
	// bool SetViewRotation(FRotator& Rotation, bool Absolute);                                                              // [0x605e49c] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetViewField
	// bool SetViewField(float Horizontal, float Vertical, bool Absolute);                                                   // [0x605e2dc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetVideoTrackFrameRate
	// bool SetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex, float FrameRate);                                // [0x605e120] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetTrackFormat
	// bool SetTrackFormat(EMediaPlayerTrack TrackType, int32_t TrackIndex, int32_t FormatIndex);                            // [0x605df64] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetTimeDelay
	// void SetTimeDelay(FTimespan TimeDelay);                                                                               // [0x605dea4] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetRate
	// bool SetRate(float Rate);                                                                                             // [0x605dc40] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetNativeVolume
	// bool SetNativeVolume(float Volume);                                                                                   // [0x605db54] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetMediaOptions
	// void SetMediaOptions(class UMediaSource* Options);                                                                    // [0x605d8d4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetLooping
	// bool SetLooping(bool Looping);                                                                                        // [0x605cd4c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetDesiredPlayerName
	// void SetDesiredPlayerName(FName PlayerName);                                                                          // [0x605c23c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetBlockOnTime
	// void SetBlockOnTime(FTimespan& Time);                                                                                 // [0x605c1b0] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SelectTrack
	// bool SelectTrack(EMediaPlayerTrack TrackType, int32_t TrackIndex);                                                    // [0x605c060] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.Seek
	// bool Seek(FTimespan& Time);                                                                                           // [0x605bfc8] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.Rewind
	// bool Rewind();                                                                                                        // [0x605bf38] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.Reopen
	// bool Reopen();                                                                                                        // [0x605bda0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.Previous
	// bool Previous();                                                                                                      // [0x605bb8c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.PlayAndSeek
	// void PlayAndSeek();                                                                                                   // [0x605bb78] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.Play
	// bool Play();                                                                                                          // [0x605bb54] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.Pause
	// bool Pause();                                                                                                         // [0x605bb30] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.OpenUrl
	// bool OpenUrl(FString URL);                                                                                            // [0x605b43c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.OpenSourceWithOptions
	// bool OpenSourceWithOptions(class UMediaSource* MediaSource, FMediaPlayerOptions& Options);                            // [0x605b318] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.OpenSourceLatent
	// void OpenSourceLatent(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class UMediaSource* MediaSource, FMediaPlayerOptions& Options, bool& bSuccess); // [0x605b0a0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.OpenSource
	// bool OpenSource(class UMediaSource* MediaSource);                                                                     // [0x605afcc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.OpenPlaylistIndex
	// bool OpenPlaylistIndex(class UMediaPlaylist* InPlaylist, int32_t Index);                                              // [0x605ae7c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.OpenPlaylist
	// bool OpenPlaylist(class UMediaPlaylist* InPlaylist);                                                                  // [0x605ada8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.OpenFile
	// bool OpenFile(FString FilePath);                                                                                      // [0x605a6b4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.Next
	// bool Next();                                                                                                          // [0x605a67c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.IsReady
	// bool IsReady();                                                                                                       // [0x605a658] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.IsPreparing
	// bool IsPreparing();                                                                                                   // [0x605a62c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.IsPlaying
	// bool IsPlaying();                                                                                                     // [0x39276b4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.IsPaused
	// bool IsPaused();                                                                                                      // [0x605a608] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.IsLooping
	// bool IsLooping();                                                                                                     // [0x605a5e4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.IsConnecting
	// bool IsConnecting();                                                                                                  // [0x605a56c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.IsClosed
	// bool IsClosed();                                                                                                      // [0x605a548] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.IsBuffering
	// bool IsBuffering();                                                                                                   // [0x605a524] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.HasError
	// bool HasError();                                                                                                      // [0x605a3bc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetViewRotation
	// FRotator GetViewRotation();                                                                                           // [0x605a36c] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetVideoTrackType
	// FString GetVideoTrackType(int32_t TrackIndex, int32_t FormatIndex);                                                   // [0x605a204] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetVideoTrackFrameRates
	// FFloatRange GetVideoTrackFrameRates(int32_t TrackIndex, int32_t FormatIndex);                                         // [0x605a0a8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetVideoTrackFrameRate
	// float GetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex);                                                // [0x6059f54] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetVideoTrackDimensions
	// FIntPoint GetVideoTrackDimensions(int32_t TrackIndex, int32_t FormatIndex);                                           // [0x6059e0c] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetVideoTrackAspectRatio
	// float GetVideoTrackAspectRatio(int32_t TrackIndex, int32_t FormatIndex);                                              // [0x6059cb8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetVerticalFieldOfView
	// float GetVerticalFieldOfView();                                                                                       // [0x6059c90] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetUrl
	// FString GetUrl();                                                                                                     // [0x6059c28] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetTrackLanguage
	// FString GetTrackLanguage(EMediaPlayerTrack TrackType, int32_t TrackIndex);                                            // [0x6059480] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetTrackFormat
	// int32_t GetTrackFormat(EMediaPlayerTrack TrackType, int32_t TrackIndex);                                              // [0x605932c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetTrackDisplayName
	// FText GetTrackDisplayName(EMediaPlayerTrack TrackType, int32_t TrackIndex);                                           // [0x60591bc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetTimeStamp
	// class UMediaTimeStampInfo* GetTimeStamp();                                                                            // [0x6059150] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetTimeDelay
	// FTimespan GetTimeDelay();                                                                                             // [0x6059134] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetTime
	// FTimespan GetTime();                                                                                                  // [0x6059108] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetSupportedRates
	// void GetSupportedRates(TArray<FFloatRange>& OutRates, bool Unthinned);                                                // [0x6058930] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetSelectedTrack
	// int32_t GetSelectedTrack(EMediaPlayerTrack TrackType);                                                                // [0x60581c8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetRate
	// float GetRate();                                                                                                      // [0x605819c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetPlaylistIndex
	// int32_t GetPlaylistIndex();                                                                                           // [0x6058054] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetPlaylist
	// class UMediaPlaylist* GetPlaylist();                                                                                  // [0x605801c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetPlayerName
	// FName GetPlayerName();                                                                                                // [0x6057ff0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetNumTracks
	// int32_t GetNumTracks(EMediaPlayerTrack TrackType);                                                                    // [0x6057ed8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetNumTrackFormats
	// int32_t GetNumTrackFormats(EMediaPlayerTrack TrackType, int32_t TrackIndex);                                          // [0x6057d40] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetMediaName
	// FText GetMediaName();                                                                                                 // [0x6057590] RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetMediaMetadataItems
	// TMap<FString, FMediaMetadataItemsBPT> GetMediaMetadataItems();                                                        // [0x60574ec] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetHorizontalFieldOfView
	// float GetHorizontalFieldOfView();                                                                                     // [0x60574c4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetDuration
	// FTimespan GetDuration();                                                                                              // [0x605746c] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetDisplayTimeStamp
	// class UMediaTimeStampInfo* GetDisplayTimeStamp();                                                                     // [0x6057400] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetDisplayTime
	// FTimespan GetDisplayTime();                                                                                           // [0x60573b0] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetDesiredPlayerName
	// FName GetDesiredPlayerName();                                                                                         // [0x6057394] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetAudioTrackType
	// FString GetAudioTrackType(int32_t TrackIndex, int32_t FormatIndex);                                                   // [0x605722c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetAudioTrackSampleRate
	// int32_t GetAudioTrackSampleRate(int32_t TrackIndex, int32_t FormatIndex);                                             // [0x60570dc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetAudioTrackChannels
	// int32_t GetAudioTrackChannels(int32_t TrackIndex, int32_t FormatIndex);                                               // [0x6056f8c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.Close
	// void Close();                                                                                                         // [0x605699c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.CanPlayUrl
	// bool CanPlayUrl(FString URL);                                                                                         // [0x605622c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.CanPlaySource
	// bool CanPlaySource(class UMediaSource* MediaSource);                                                                  // [0x605608c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.CanPause
	// bool CanPause();                                                                                                      // [0x6056014] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MediaAssets.MediaPlayerProxyInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UMediaPlayerProxyInterface : public UInterface
{ 
public:
};

/// Class /Script/MediaAssets.MediaPlaylist
/// Size: 0x0010 (0x000028 - 0x000038)
class UMediaPlaylist : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	TArray<class UMediaSource*>                        Items;                                                      // 0x0028   (0x0010)  


	/// Functions
	// Function /Script/MediaAssets.MediaPlaylist.Replace
	// bool Replace(int32_t Index, class UMediaSource* Replacement);                                                         // [0x605bdc4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.RemoveAt
	// bool RemoveAt(int32_t Index);                                                                                         // [0x605bc98] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.Remove
	// bool Remove(class UMediaSource* MediaSource);                                                                         // [0x605bbb0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.Num
	// int32_t Num();                                                                                                        // [0x605a6a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.Insert
	// void Insert(class UMediaSource* MediaSource, int32_t Index);                                                          // [0x605a3e8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.GetRandom
	// class UMediaSource* GetRandom(int32_t& OutIndex);                                                                     // [0x6058104] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.GetPrevious
	// class UMediaSource* GetPrevious(int32_t& InOutIndex);                                                                 // [0x605806c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.GetNext
	// class UMediaSource* GetNext(int32_t& InOutIndex);                                                                     // [0x6057614] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.Get
	// class UMediaSource* Get(int32_t Index);                                                                               // [0x6056e84] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.AddUrl
	// bool AddUrl(FString URL);                                                                                             // [0x60557dc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.AddFile
	// bool AddFile(FString FilePath);                                                                                       // [0x6055070] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.Add
	// bool Add(class UMediaSource* MediaSource);                                                                            // [0x6054f6c] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/MediaAssets.MediaSoundComponent
/// Size: 0x00E0 (0x000880 - 0x000960)
class UMediaSoundComponent : public USynthComponent
{ 
public:
	EMediaSoundChannels                                Channels;                                                   // 0x0880   (0x0004)  
	bool                                               DynamicRateAdjustment;                                      // 0x0884   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0885   (0x0003)  MISSED
	float                                              RateAdjustmentFactor;                                       // 0x0888   (0x0004)  
	FFloatRange                                        RateAdjustmentRange;                                        // 0x088C   (0x0010)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x089C   (0x0004)  MISSED
	class UMediaPlayer*                                MediaPlayer;                                                // 0x08A0   (0x0008)  
	unsigned char                                      UnknownData02_6[0xB8];                                      // 0x08A8   (0x00B8)  MISSED


	/// Functions
	// Function /Script/MediaAssets.MediaSoundComponent.SetSpectralAnalysisSettings
	// void SetSpectralAnalysisSettings(TArray<float> InFrequenciesToAnalyze, EMediaSoundComponentFFTSize InFFTSize);        // [0x605dd10] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSoundComponent.SetMediaPlayer
	// void SetMediaPlayer(class UMediaPlayer* NewMediaPlayer);                                                              // [0x605d9d4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSoundComponent.SetEnvelopeFollowingsettings
	// void SetEnvelopeFollowingsettings(int32_t AttackTimeMsec, int32_t ReleaseTimeMsec);                                   // [0x605c4e4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSoundComponent.SetEnableSpectralAnalysis
	// void SetEnableSpectralAnalysis(bool bInSpectralAnalysisEnabled);                                                      // [0x605c3f4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSoundComponent.SetEnableEnvelopeFollowing
	// void SetEnableEnvelopeFollowing(bool bInEnvelopeFollowing);                                                           // [0x605c2fc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSoundComponent.GetSpectralData
	// TArray<FMediaSoundComponentSpectralData> GetSpectralData();                                                           // [0x605829c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSoundComponent.GetNormalizedSpectralData
	// TArray<FMediaSoundComponentSpectralData> GetNormalizedSpectralData();                                                 // [0x60576ac] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSoundComponent.GetMediaPlayer
	// class UMediaPlayer* GetMediaPlayer();                                                                                 // [0x3887194] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaSoundComponent.GetEnvelopeValue
	// float GetEnvelopeValue();                                                                                             // [0x6057498] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaSoundComponent.BP_GetAttenuationSettingsToApply
	// bool BP_GetAttenuationSettingsToApply(FSoundAttenuationSettings& OutAttenuationSettings);                             // [0x6055f24] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/MediaAssets.PlatformMediaSource
/// Size: 0x0008 (0x000080 - 0x000088)
class UPlatformMediaSource : public UMediaSource
{ 
public:
	class UMediaSource*                                MediaSource;                                                // 0x0080   (0x0008)  
};

/// Class /Script/MediaAssets.StreamMediaSource
/// Size: 0x0010 (0x000088 - 0x000098)
class UStreamMediaSource : public UBaseMediaSource
{ 
public:
	SDK_UNDEFINED(16,1845) /* FString */               __um(StreamUrl);                                            // 0x0088   (0x0010)  
};

/// Class /Script/MediaAssets.TimeSynchronizableMediaSource
/// Size: 0x0018 (0x000088 - 0x0000A0)
class UTimeSynchronizableMediaSource : public UBaseMediaSource
{ 
public:
	bool                                               bUseTimeSynchronization;                                    // 0x0088   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0089   (0x0003)  MISSED
	int32_t                                            FrameDelay;                                                 // 0x008C   (0x0004)  
	double                                             TimeDelay;                                                  // 0x0090   (0x0008)  
	bool                                               bAutoDetectInput;                                           // 0x0098   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0099   (0x0007)  MISSED
};

/// Class /Script/MediaAssets.MediaBlueprintFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UMediaBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MediaAssets.MediaBlueprintFunctionLibrary.EnumerateWebcamCaptureDevices
	// void EnumerateWebcamCaptureDevices(TArray<FMediaCaptureDevice>& OutDevices, int32_t Filter);                          // [0x6056ce8] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaBlueprintFunctionLibrary.EnumerateVideoCaptureDevices
	// void EnumerateVideoCaptureDevices(TArray<FMediaCaptureDevice>& OutDevices, int32_t Filter);                           // [0x6056b4c] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaBlueprintFunctionLibrary.EnumerateAudioCaptureDevices
	// void EnumerateAudioCaptureDevices(TArray<FMediaCaptureDevice>& OutDevices, int32_t Filter);                           // [0x60569b0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/MediaAssets.MediaMetadataItemBPT
/// Size: 0x0040 (0x000000 - 0x000040)
struct FMediaMetadataItemBPT
{ 
	SDK_UNDEFINED(16,1846) /* FString */               __um(LanguageCode);                                         // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,1847) /* FString */               __um(MimeType);                                             // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,1848) /* FString */               __um(StringData);                                           // 0x0020   (0x0010)  
	TArray<char>                                       BinaryData;                                                 // 0x0030   (0x0010)  
};

/// Struct /Script/MediaAssets.MediaMetadataItemsBPT
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMediaMetadataItemsBPT
{ 
	TArray<FMediaMetadataItemBPT>                      Items;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/MediaAssets.MediaSoundComponentSpectralData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FMediaSoundComponentSpectralData
{ 
	float                                              FrequencyHz;                                                // 0x0000   (0x0004)  
	float                                              Magnitude;                                                  // 0x0004   (0x0004)  
};

/// Struct /Script/MediaAssets.MediaSourceCacheSettings
/// Size: 0x0008 (0x000000 - 0x000008)
struct FMediaSourceCacheSettings
{ 
	bool                                               bOverride;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              TimeToLookAhead;                                            // 0x0004   (0x0004)  
};

/// Struct /Script/MediaAssets.MediaCaptureDevice
/// Size: 0x0028 (0x000000 - 0x000028)
struct FMediaCaptureDevice
{ 
	SDK_UNDEFINED(24,1849) /* FText */                 __um(DisplayName);                                          // 0x0000   (0x0018)  
	SDK_UNDEFINED(16,1850) /* FString */               __um(URL);                                                  // 0x0018   (0x0010)  
};

