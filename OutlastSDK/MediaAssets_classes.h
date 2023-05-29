// Class MediaAssets.MediaSource
// Size: 0x80 (Inherited: 0x28)
struct UMediaSource : UObject {
	char pad_28[0x58]; // 0x28(0x58)

	bool Validate(); // Function MediaAssets.MediaSource.Validate // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2e8f260
	void SetMediaOptionString(struct FName& Key, struct FString Value); // Function MediaAssets.MediaSource.SetMediaOptionString // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2e8e738
	void SetMediaOptionInt64(struct FName& Key, int64_t Value); // Function MediaAssets.MediaSource.SetMediaOptionInt64 // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2e8e670
	void SetMediaOptionFloat(struct FName& Key, float Value); // Function MediaAssets.MediaSource.SetMediaOptionFloat // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2e8e5a0
	void SetMediaOptionBool(struct FName& Key, bool Value); // Function MediaAssets.MediaSource.SetMediaOptionBool // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2e8e4b8
	struct FString GetUrl(); // Function MediaAssets.MediaSource.GetUrl // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2e8ce4c
};

// Class MediaAssets.BaseMediaSource
// Size: 0x88 (Inherited: 0x80)
struct UBaseMediaSource : UMediaSource {
	struct FName PlayerName; // 0x80(0x08)
};

// Class MediaAssets.FileMediaSource
// Size: 0xb0 (Inherited: 0x88)
struct UFileMediaSource : UBaseMediaSource {
	struct FString FilePath; // 0x88(0x10)
	bool PrecacheFile; // 0x98(0x01)
	char pad_99[0x17]; // 0x99(0x17)

	void SetFilePath(struct FString Path); // Function MediaAssets.FileMediaSource.SetFilePath // (Final|Native|Public|BlueprintCallable) // @ game+0x2e8e398
	struct FString GetMediaSourceFilePath(struct UMediaSource* MediaSource); // Function MediaAssets.FileMediaSource.GetMediaSourceFilePath // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2e8c370
};

// Class MediaAssets.MediaBlueprintFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMediaBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	void EnumerateWebcamCaptureDevices(struct TArray<struct FMediaCaptureDevice>& OutDevices, int32_t Filter); // Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateWebcamCaptureDevices // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x2e8bde0
	void EnumerateVideoCaptureDevices(struct TArray<struct FMediaCaptureDevice>& OutDevices, int32_t Filter); // Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateVideoCaptureDevices // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x2e8bd0c
	void EnumerateAudioCaptureDevices(struct TArray<struct FMediaCaptureDevice>& OutDevices, int32_t Filter); // Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateAudioCaptureDevices // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x2e8bc38
};

// Class MediaAssets.MediaComponent
// Size: 0xc8 (Inherited: 0xb8)
struct UMediaComponent : UActorComponent {
	struct UMediaTexture* MediaTexture; // 0xb8(0x08)
	struct UMediaPlayer* MediaPlayer; // 0xc0(0x08)

	struct UMediaTexture* GetMediaTexture(); // Function MediaAssets.MediaComponent.GetMediaTexture // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2690fe0
	struct UMediaPlayer* GetMediaPlayer(); // Function MediaAssets.MediaComponent.GetMediaPlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2e8c308
};

// Class MediaAssets.MediaTimeStampInfo
// Size: 0x38 (Inherited: 0x28)
struct UMediaTimeStampInfo : UObject {
	struct FTimespan Time; // 0x28(0x08)
	int64_t SequenceIndex; // 0x30(0x08)
};

// Class MediaAssets.MediaPlayer
// Size: 0x138 (Inherited: 0x28)
struct UMediaPlayer : UObject {
	struct FMulticastInlineDelegate OnEndReached; // 0x28(0x10)
	struct FMulticastInlineDelegate OnMediaClosed; // 0x38(0x10)
	struct FMulticastInlineDelegate OnMediaOpened; // 0x48(0x10)
	struct FMulticastInlineDelegate OnMediaOpenFailed; // 0x58(0x10)
	struct FMulticastInlineDelegate OnPlaybackResumed; // 0x68(0x10)
	struct FMulticastInlineDelegate OnPlaybackSuspended; // 0x78(0x10)
	struct FMulticastInlineDelegate OnSeekCompleted; // 0x88(0x10)
	struct FMulticastInlineDelegate OnTracksChanged; // 0x98(0x10)
	struct FTimespan CacheAhead; // 0xa8(0x08)
	struct FTimespan CacheBehind; // 0xb0(0x08)
	struct FTimespan CacheBehindGame; // 0xb8(0x08)
	bool NativeAudioOut; // 0xc0(0x01)
	bool PlayOnOpen; // 0xc1(0x01)
	char pad_C2[0x2]; // 0xc2(0x02)
	char Shuffle : 1; // 0xc4(0x01)
	char Loop : 1; // 0xc4(0x01)
	char pad_C4_2 : 6; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
	struct UMediaPlaylist* Playlist; // 0xc8(0x08)
	int32_t PlaylistIndex; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct FTimespan TimeDelay; // 0xd8(0x08)
	float HorizontalFieldOfView; // 0xe0(0x04)
	float VerticalFieldOfView; // 0xe4(0x04)
	struct FRotator viewRotation; // 0xe8(0x0c)
	char pad_F4[0x2c]; // 0xf4(0x2c)
	struct FGuid PlayerGuid; // 0x120(0x10)
	char pad_130[0x8]; // 0x130(0x08)

	bool SupportsSeeking(); // Function MediaAssets.MediaPlayer.SupportsSeeking // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2e8f23c
	bool SupportsScrubbing(); // Function MediaAssets.MediaPlayer.SupportsScrubbing // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2e8f1c4
	bool SupportsRate(float Rate, bool Unthinned); // Function MediaAssets.MediaPlayer.SupportsRate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2e8f0f4
	bool SetViewRotation(struct FRotator& Rotation, bool Absolute); // Function MediaAssets.MediaPlayer.SetViewRotation // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x2e8f01c
	bool SetViewField(float Horizontal, float Vertical, bool Absolute); // Function MediaAssets.MediaPlayer.SetViewField // (Final|Native|Public|BlueprintCallable) // @ game+0x2e8ef1c
	bool SetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex, float FrameRate); // Function MediaAssets.MediaPlayer.SetVideoTrackFrameRate // (Final|Native|Public|BlueprintCallable) // @ game+0x2e8ee20
	bool SetTrackFormat(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.SetTrackFormat // (Final|Native|Public|BlueprintCallable) // @ game+0x2e8ed28
	void SetTimeDelay(struct FTimespan TimeDelay); // Function MediaAssets.MediaPlayer.SetTimeDelay // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x2e8ecac
	bool SetRate(float Rate); // Function MediaAssets.MediaPlayer.SetRate // (Final|Native|Public|BlueprintCallable) // @ game+0x2e8eacc
	bool SetNativeVolume(float Volume); // Function MediaAssets.MediaPlayer.SetNativeVolume // (Final|Native|Public|BlueprintCallable) // @ game+0x2e8ea20
	void SetMediaOptions(struct UMediaSource* Options); // Function MediaAssets.MediaPlayer.SetMediaOptions // (Final|Native|Public|BlueprintCallable) // @ game+0x2e8e84c
	bool SetLooping(bool Looping); // Function MediaAssets.MediaPlayer.SetLooping // (Final|Native|Public|BlueprintCallable) // @ game+0x2e8e428
	void SetDesiredPlayerName(struct FName PlayerName); // Function MediaAssets.MediaPlayer.SetDesiredPlayerName // (Final|Native|Public|BlueprintCallable) // @ game+0x2e8e11c
	void SetBlockOnTime(struct FTimespan& Time); // Function MediaAssets.MediaPlayer.SetBlockOnTime // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x2e8e098
	bool SelectTrack(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.SelectTrack // (Final|Native|Public|BlueprintCallable) // @ game+0x2e8dfd8
	bool Seek(struct FTimespan& Time); // Function MediaAssets.MediaPlayer.Seek // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x2e8df48
	bool Rewind(); // Function MediaAssets.MediaPlayer.Rewind // (Final|Native|Public|BlueprintCallable) // @ game+0x2e8df24
	bool Reopen(); // Function MediaAssets.MediaPlayer.Reopen // (Final|Native|Public|BlueprintCallable) // @ game+0x2e8de28
	bool Previous(); // Function MediaAssets.MediaPlayer.Previous // (Final|Native|Public|BlueprintCallable) // @ game+0x2e8dca0
	void PlayAndSeek(); // Function MediaAssets.MediaPlayer.PlayAndSeek // (Final|Native|Public|BlueprintCallable) // @ game+0x2e8dc8c
	bool Play(); // Function MediaAssets.MediaPlayer.Play // (Final|Native|Public|BlueprintCallable) // @ game+0x2e8dc68
	bool Pause(); // Function MediaAssets.MediaPlayer.Pause // (Final|Native|Public|BlueprintCallable) // @ game+0x2e8dc44
	bool OpenUrl(struct FString URL); // Function MediaAssets.MediaPlayer.OpenUrl // (Final|Native|Public|BlueprintCallable) // @ game+0x2e8dba8
	bool OpenSourceWithOptions(struct UMediaSource* MediaSource, struct FMediaPlayerOptions& Options); // Function MediaAssets.MediaPlayer.OpenSourceWithOptions // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2e8dac8
	void OpenSourceLatent(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, struct UMediaSource* MediaSource, struct FMediaPlayerOptions& Options, bool& bSuccess); // Function MediaAssets.MediaPlayer.OpenSourceLatent // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2e8d8fc
	bool OpenSource(struct UMediaSource* MediaSource); // Function MediaAssets.MediaPlayer.OpenSource // (Final|Native|Public|BlueprintCallable) // @ game+0x2e8d86c
	bool OpenPlaylistIndex(struct UMediaPlaylist* InPlaylist, int32_t Index); // Function MediaAssets.MediaPlayer.OpenPlaylistIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x2e8d7a8
	bool OpenPlaylist(struct UMediaPlaylist* InPlaylist); // Function MediaAssets.MediaPlayer.OpenPlaylist // (Final|Native|Public|BlueprintCallable) // @ game+0x2e8d718
	bool OpenFile(struct FString FilePath); // Function MediaAssets.MediaPlayer.OpenFile // (Final|Native|Public|BlueprintCallable) // @ game+0x2e8d67c
	bool Next(); // Function MediaAssets.MediaPlayer.Next // (Final|Native|Public|BlueprintCallable) // @ game+0x2e8d658
	bool IsReady(); // Function MediaAssets.MediaPlayer.IsReady // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2e8d634
	bool IsPreparing(); // Function MediaAssets.MediaPlayer.IsPreparing // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2e8d608
	bool IsPlaying(); // Function MediaAssets.MediaPlayer.IsPlaying // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2e8d5dc
	bool IsPaused(); // Function MediaAssets.MediaPlayer.IsPaused // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2e8d5b8
	bool IsLooping(); // Function MediaAssets.MediaPlayer.IsLooping // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2e8d594
	bool IsConnecting(); // Function MediaAssets.MediaPlayer.IsConnecting // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2e8d51c
	bool IsClosed(); // Function MediaAssets.MediaPlayer.IsClosed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2e8d4f8
	bool IsBuffering(); // Function MediaAssets.MediaPlayer.IsBuffering // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2e8d484
	bool HasError(); // Function MediaAssets.MediaPlayer.HasError // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2e8d34c
	struct FRotator GetViewRotation(); // Function MediaAssets.MediaPlayer.GetViewRotation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x2e8d300
	struct FString GetVideoTrackType(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2e8d220
	struct FFloatRange GetVideoTrackFrameRates(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackFrameRates // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2e8d150
	float GetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackFrameRate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2e8d088
	struct FIntPoint GetVideoTrackDimensions(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackDimensions // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x2e8cf7c
	float GetVideoTrackAspectRatio(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackAspectRatio // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2e8ceb4
	float GetVerticalFieldOfView(); // Function MediaAssets.MediaPlayer.GetVerticalFieldOfView // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2e8ce8c
	struct FString GetUrl(); // Function MediaAssets.MediaPlayer.GetUrl // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2e8ce28
	struct FString GetTrackLanguage(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetTrackLanguage // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2e8ccf0
	int32_t GetTrackFormat(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetTrackFormat // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2e8cc28
	struct FText GetTrackDisplayName(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetTrackDisplayName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2e8cb4c
	struct UMediaTimeStampInfo* GetTimeStamp(); // Function MediaAssets.MediaPlayer.GetTimeStamp // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2e8cab8
	struct FTimespan GetTimeDelay(); // Function MediaAssets.MediaPlayer.GetTimeDelay // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x2e8ca9c
	struct FTimespan GetTime(); // Function MediaAssets.MediaPlayer.GetTime // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x2e8ca70
	void GetSupportedRates(struct TArray<struct FFloatRange>& OutRates, bool Unthinned); // Function MediaAssets.MediaPlayer.GetSupportedRates // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2e8c96c
	int32_t GetSelectedTrack(enum class EMediaPlayerTrack TrackType); // Function MediaAssets.MediaPlayer.GetSelectedTrack // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2e8c89c
	float GetRate(); // Function MediaAssets.MediaPlayer.GetRate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2e8c870
	int32_t GetPlaylistIndex(); // Function MediaAssets.MediaPlayer.GetPlaylistIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x26960b8
	struct UMediaPlaylist* GetPlaylist(); // Function MediaAssets.MediaPlayer.GetPlaylist // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2e8c730
	struct FName GetPlayerName(); // Function MediaAssets.MediaPlayer.GetPlayerName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2e8c6f8
	int32_t GetNumTracks(enum class EMediaPlayerTrack TrackType); // Function MediaAssets.MediaPlayer.GetNumTracks // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2e8c624
	int32_t GetNumTrackFormats(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetNumTrackFormats // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2e8c508
	struct FText GetMediaName(); // Function MediaAssets.MediaPlayer.GetMediaName // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2e8c2c8
	float GetHorizontalFieldOfView(); // Function MediaAssets.MediaPlayer.GetHorizontalFieldOfView // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2e8c2a0
	struct FTimespan GetDuration(); // Function MediaAssets.MediaPlayer.GetDuration // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x2e8c244
	struct FName GetDesiredPlayerName(); // Function MediaAssets.MediaPlayer.GetDesiredPlayerName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2e8c228
	struct FString GetAudioTrackType(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetAudioTrackType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2e8c148
	int32_t GetAudioTrackSampleRate(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetAudioTrackSampleRate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2e8c060
	int32_t GetAudioTrackChannels(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetAudioTrackChannels // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2e8bf78
	void Close(); // Function MediaAssets.MediaPlayer.Close // (Final|Native|Public|BlueprintCallable) // @ game+0x2e8bc24
	bool CanPlayUrl(struct FString URL); // Function MediaAssets.MediaPlayer.CanPlayUrl // (Final|Native|Public|BlueprintCallable) // @ game+0x2e8bae4
	bool CanPlaySource(struct UMediaSource* MediaSource); // Function MediaAssets.MediaPlayer.CanPlaySource // (Final|Native|Public|BlueprintCallable) // @ game+0x2e8b978
	bool CanPause(); // Function MediaAssets.MediaPlayer.CanPause // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2e8b900
};

// Class MediaAssets.MediaPlaylist
// Size: 0x38 (Inherited: 0x28)
struct UMediaPlaylist : UObject {
	struct TArray<struct UMediaSource*> Items; // 0x28(0x10)

	bool Replace(int32_t Index, struct UMediaSource* Replacement); // Function MediaAssets.MediaPlaylist.Replace // (Final|Native|Public|BlueprintCallable) // @ game+0x2e8de4c
	bool RemoveAt(int32_t Index); // Function MediaAssets.MediaPlaylist.RemoveAt // (Final|Native|Public|BlueprintCallable) // @ game+0x2e8dd54
	bool Remove(struct UMediaSource* MediaSource); // Function MediaAssets.MediaPlaylist.Remove // (Final|Native|Public|BlueprintCallable) // @ game+0x2e8dcc4
	int32_t Num(); // Function MediaAssets.MediaPlaylist.Num // (Final|Native|Public|BlueprintCallable) // @ game+0x170b0ac
	void Insert(struct UMediaSource* MediaSource, int32_t Index); // Function MediaAssets.MediaPlaylist.Insert // (Final|Native|Public|BlueprintCallable) // @ game+0x2e8d378
	struct UMediaSource* GetRandom(int32_t& OutIndex); // Function MediaAssets.MediaPlaylist.GetRandom // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2e8c7dc
	struct UMediaSource* GetPrevious(int32_t& InOutIndex); // Function MediaAssets.MediaPlaylist.GetPrevious // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2e8c748
	struct UMediaSource* GetNext(int32_t& InOutIndex); // Function MediaAssets.MediaPlaylist.GetNext // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2e8c438
	struct UMediaSource* Get(int32_t Index); // Function MediaAssets.MediaPlaylist.Get // (Final|Native|Public|BlueprintCallable) // @ game+0x2e8beb4
	bool AddUrl(struct FString URL); // Function MediaAssets.MediaPlaylist.AddUrl // (Final|Native|Public|BlueprintCallable) // @ game+0x2e8b688
	bool AddFile(struct FString FilePath); // Function MediaAssets.MediaPlaylist.AddFile // (Final|Native|Public|BlueprintCallable) // @ game+0x2e8b50c
	bool Add(struct UMediaSource* MediaSource); // Function MediaAssets.MediaPlaylist.Add // (Final|Native|Public|BlueprintCallable) // @ game+0x2e8b460
};

// Class MediaAssets.MediaSoundComponent
// Size: 0x840 (Inherited: 0x6e0)
struct UMediaSoundComponent : USynthComponent {
	enum class EMediaSoundChannels Channels; // 0x6e0(0x04)
	bool DynamicRateAdjustment; // 0x6e4(0x01)
	char pad_6E5[0x3]; // 0x6e5(0x03)
	float RateAdjustmentFactor; // 0x6e8(0x04)
	struct FFloatRange RateAdjustmentRange; // 0x6ec(0x10)
	char pad_6FC[0x4]; // 0x6fc(0x04)
	struct UMediaPlayer* MediaPlayer; // 0x700(0x08)
	char pad_708[0x138]; // 0x708(0x138)

	void SetSpectralAnalysisSettings(struct TArray<float> InFrequenciesToAnalyze, enum class EMediaSoundComponentFFTSize InFFTSize); // Function MediaAssets.MediaSoundComponent.SetSpectralAnalysisSettings // (Final|Native|Public|BlueprintCallable) // @ game+0x2e8eb60
	void SetMediaPlayer(struct UMediaPlayer* NewMediaPlayer); // Function MediaAssets.MediaSoundComponent.SetMediaPlayer // (Final|Native|Public|BlueprintCallable) // @ game+0x2e8e91c
	void SetEnvelopeFollowingsettings(int32_t AttackTimeMsec, int32_t ReleaseTimeMsec); // Function MediaAssets.MediaSoundComponent.SetEnvelopeFollowingsettings // (Final|Native|Public|BlueprintCallable) // @ game+0x2e8e2c0
	void SetEnableSpectralAnalysis(bool bInSpectralAnalysisEnabled); // Function MediaAssets.MediaSoundComponent.SetEnableSpectralAnalysis // (Final|Native|Public|BlueprintCallable) // @ game+0x2e8e240
	void SetEnableEnvelopeFollowing(bool bInEnvelopeFollowing); // Function MediaAssets.MediaSoundComponent.SetEnableEnvelopeFollowing // (Final|Native|Public|BlueprintCallable) // @ game+0x2e8e19c
	struct TArray<struct FMediaSoundComponentSpectralData> GetSpectralData(); // Function MediaAssets.MediaSoundComponent.GetSpectralData // (Final|Native|Public|BlueprintCallable) // @ game+0x2e8c930
	struct TArray<struct FMediaSoundComponentSpectralData> GetNormalizedSpectralData(); // Function MediaAssets.MediaSoundComponent.GetNormalizedSpectralData // (Final|Native|Public|BlueprintCallable) // @ game+0x2e8c4cc
	struct UMediaPlayer* GetMediaPlayer(); // Function MediaAssets.MediaSoundComponent.GetMediaPlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2e8c320
	float GetEnvelopeValue(); // Function MediaAssets.MediaSoundComponent.GetEnvelopeValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2e8c270
	bool BP_GetAttenuationSettingsToApply(struct FSoundAttenuationSettings& OutAttenuationSettings); // Function MediaAssets.MediaSoundComponent.BP_GetAttenuationSettingsToApply // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2e8b814
};

// Class MediaAssets.MediaTexture
// Size: 0x250 (Inherited: 0x170)
struct UMediaTexture : UTexture {
	enum class TextureAddress AddressX; // 0x170(0x01)
	enum class TextureAddress AddressY; // 0x171(0x01)
	bool AutoClear; // 0x172(0x01)
	char pad_173[0x1]; // 0x173(0x01)
	struct FLinearColor ClearColor; // 0x174(0x10)
	bool EnableGenMips; // 0x184(0x01)
	char NumMips; // 0x185(0x01)
	bool NewStyleOutput; // 0x186(0x01)
	enum class MediaTextureOutputFormat OutputFormat; // 0x187(0x01)
	float CurrentAspectRatio; // 0x188(0x04)
	enum class MediaTextureOrientation CurrentOrientation; // 0x18c(0x01)
	char pad_18D[0x3]; // 0x18d(0x03)
	struct UMediaPlayer* MediaPlayer; // 0x190(0x08)
	char pad_198[0xb8]; // 0x198(0xb8)

	void SetMediaPlayer(struct UMediaPlayer* NewMediaPlayer); // Function MediaAssets.MediaTexture.SetMediaPlayer // (Final|Native|Public|BlueprintCallable) // @ game+0x2e8e9a0
	int32_t GetWidth(); // Function MediaAssets.MediaTexture.GetWidth // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2e8d334
	int32_t GetTextureNumMips(); // Function MediaAssets.MediaTexture.GetTextureNumMips // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2e8ca58
	struct UMediaPlayer* GetMediaPlayer(); // Function MediaAssets.MediaTexture.GetMediaPlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2e8c348
	int32_t GetHeight(); // Function MediaAssets.MediaTexture.GetHeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2e8c288
	float GetAspectRatio(); // Function MediaAssets.MediaTexture.GetAspectRatio // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2e8bf40
};

// Class MediaAssets.PlatformMediaSource
// Size: 0x88 (Inherited: 0x80)
struct UPlatformMediaSource : UMediaSource {
	struct UMediaSource* MediaSource; // 0x80(0x08)
};

// Class MediaAssets.StreamMediaSource
// Size: 0x98 (Inherited: 0x88)
struct UStreamMediaSource : UBaseMediaSource {
	struct FString StreamUrl; // 0x88(0x10)
};

// Class MediaAssets.TimeSynchronizableMediaSource
// Size: 0x98 (Inherited: 0x88)
struct UTimeSynchronizableMediaSource : UBaseMediaSource {
	bool bUseTimeSynchronization; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	int32_t FrameDelay; // 0x8c(0x04)
	double TimeDelay; // 0x90(0x08)
};

