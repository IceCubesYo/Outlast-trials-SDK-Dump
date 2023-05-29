// Class GeometryCache.GeometryCache
// Size: 0x70 (Inherited: 0x28)
struct UGeometryCache : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct TArray<struct UMaterialInterface*> Materials; // 0x30(0x10)
	struct TArray<struct UGeometryCacheTrack*> Tracks; // 0x40(0x10)
	char pad_50[0x10]; // 0x50(0x10)
	int32_t StartFrame; // 0x60(0x04)
	int32_t EndFrame; // 0x64(0x04)
	uint64_t Hash; // 0x68(0x08)
};

// Class GeometryCache.GeometryCacheActor
// Size: 0x250 (Inherited: 0x248)
struct AGeometryCacheActor : AActor {
	struct UGeometryCacheComponent* GeometryCacheComponent; // 0x248(0x08)

	struct UGeometryCacheComponent* GetGeometryCacheComponent(); // Function GeometryCache.GeometryCacheActor.GetGeometryCacheComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x163aba0
};

// Class GeometryCache.GeometryCacheCodecBase
// Size: 0x38 (Inherited: 0x28)
struct UGeometryCacheCodecBase : UObject {
	struct TArray<int32_t> TopologyRanges; // 0x28(0x10)
};

// Class GeometryCache.GeometryCacheCodecRaw
// Size: 0x40 (Inherited: 0x38)
struct UGeometryCacheCodecRaw : UGeometryCacheCodecBase {
	int32_t DummyProperty; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class GeometryCache.GeometryCacheCodecV1
// Size: 0x40 (Inherited: 0x38)
struct UGeometryCacheCodecV1 : UGeometryCacheCodecBase {
	char pad_38[0x8]; // 0x38(0x08)
};

// Class GeometryCache.GeometryCacheComponent
// Size: 0x520 (Inherited: 0x4c0)
struct UGeometryCacheComponent : UMeshComponent {
	struct UGeometryCache* GeometryCache; // 0x4b8(0x08)
	bool bRunning; // 0x4c0(0x01)
	bool bLooping; // 0x4c1(0x01)
	bool bExtrapolateFrames; // 0x4c2(0x01)
	float StartTimeOffset; // 0x4c4(0x04)
	float PlaybackSpeed; // 0x4c8(0x04)
	float MotionVectorScale; // 0x4cc(0x04)
	int32_t NumTracks; // 0x4d0(0x04)
	float ElapsedTime; // 0x4d4(0x04)
	char pad_4DF[0x2d]; // 0x4df(0x2d)
	float duration; // 0x50c(0x04)
	bool bManualTick; // 0x510(0x01)
	char pad_511[0xf]; // 0x511(0x0f)

	void TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping); // Function GeometryCache.GeometryCacheComponent.TickAtThisTime // (Final|Native|Public|BlueprintCallable) // @ game+0x163b24c
	void Stop(); // Function GeometryCache.GeometryCacheComponent.Stop // (Final|Native|Public|BlueprintCallable) // @ game+0x163b234
	void SetStartTimeOffset(float NewStartTimeOffset); // Function GeometryCache.GeometryCacheComponent.SetStartTimeOffset // (Final|Native|Public|BlueprintCallable) // @ game+0x163b18c
	void SetPlaybackSpeed(float NewPlaybackSpeed); // Function GeometryCache.GeometryCacheComponent.SetPlaybackSpeed // (Final|Native|Public|BlueprintCallable) // @ game+0x163b0f0
	void SetMotionVectorScale(float NewMotionVectorScale); // Function GeometryCache.GeometryCacheComponent.SetMotionVectorScale // (Final|Native|Public|BlueprintCallable) // @ game+0x163b054
	void SetLooping(bool bNewLooping); // Function GeometryCache.GeometryCacheComponent.SetLooping // (Final|Native|Public|BlueprintCallable) // @ game+0x163af20
	bool SetGeometryCache(struct UGeometryCache* NewGeomCache); // Function GeometryCache.GeometryCacheComponent.SetGeometryCache // (Final|Native|Public|BlueprintCallable) // @ game+0x163ae90
	void SetExtrapolateFrames(bool bNewExtrapolating); // Function GeometryCache.GeometryCacheComponent.SetExtrapolateFrames // (Final|Native|Public|BlueprintCallable) // @ game+0x163ae10
	void PlayReversedFromEnd(); // Function GeometryCache.GeometryCacheComponent.PlayReversedFromEnd // (Final|Native|Public|BlueprintCallable) // @ game+0x163adc0
	void PlayReversed(); // Function GeometryCache.GeometryCacheComponent.PlayReversed // (Final|Native|Public|BlueprintCallable) // @ game+0x163ad7c
	void PlayFromStart(); // Function GeometryCache.GeometryCacheComponent.PlayFromStart // (Final|Native|Public|BlueprintCallable) // @ game+0x163ad34
	void Play(); // Function GeometryCache.GeometryCacheComponent.Play // (Final|Native|Public|BlueprintCallable) // @ game+0x163acf0
	void Pause(); // Function GeometryCache.GeometryCacheComponent.Pause // (Final|Native|Public|BlueprintCallable) // @ game+0x163acd0
	bool IsPlayingReversed(); // Function GeometryCache.GeometryCacheComponent.IsPlayingReversed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x163ac9c
	bool IsPlaying(); // Function GeometryCache.GeometryCacheComponent.IsPlaying // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x163ac84
	bool IsLooping(); // Function GeometryCache.GeometryCacheComponent.IsLooping // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x163ac6c
	bool IsExtrapolatingFrames(); // Function GeometryCache.GeometryCacheComponent.IsExtrapolatingFrames // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x163ac54
	float GetStartTimeOffset(); // Function GeometryCache.GeometryCacheComponent.GetStartTimeOffset // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x163ac3c
	float GetPlaybackSpeed(); // Function GeometryCache.GeometryCacheComponent.GetPlaybackSpeed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x163ac1c
	float GetPlaybackDirection(); // Function GeometryCache.GeometryCacheComponent.GetPlaybackDirection // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x163ac04
	int32_t GetNumberOfFrames(); // Function GeometryCache.GeometryCacheComponent.GetNumberOfFrames // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x163abd8
	float GetMotionVectorScale(); // Function GeometryCache.GeometryCacheComponent.GetMotionVectorScale // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x163abb8
	float GetDuration(); // Function GeometryCache.GeometryCacheComponent.GetDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x163ab88
	float GetAnimationTime(); // Function GeometryCache.GeometryCacheComponent.GetAnimationTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x163ab68
};

// Class GeometryCache.GeometryCacheTrack
// Size: 0x58 (Inherited: 0x28)
struct UGeometryCacheTrack : UObject {
	float duration; // 0x28(0x04)
	char pad_2C[0x2c]; // 0x2c(0x2c)
};

// Class GeometryCache.GeometryCacheTrack_FlipbookAnimation
// Size: 0x80 (Inherited: 0x58)
struct UGeometryCacheTrack_FlipbookAnimation : UGeometryCacheTrack {
	uint32_t NumMeshSamples; // 0x58(0x04)
	char pad_5C[0x24]; // 0x5c(0x24)

	void AddMeshSample(struct FGeometryCacheMeshData& MeshData, float SampleTime); // Function GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample // (Final|Native|Public|HasOutParms) // @ game+0x163aa68
};

// Class GeometryCache.GeometryCacheTrackStreamable
// Size: 0xd8 (Inherited: 0x58)
struct UGeometryCacheTrackStreamable : UGeometryCacheTrack {
	struct UGeometryCacheCodecBase* Codec; // 0x58(0x08)
	char pad_60[0x68]; // 0x60(0x68)
	float StartSampleTime; // 0xc8(0x04)
	char pad_CC[0xc]; // 0xcc(0x0c)
};

// Class GeometryCache.GeometryCacheTrack_TransformAnimation
// Size: 0x108 (Inherited: 0x58)
struct UGeometryCacheTrack_TransformAnimation : UGeometryCacheTrack {
	char pad_58[0xb0]; // 0x58(0xb0)

	void SetMesh(struct FGeometryCacheMeshData& NewMeshData); // Function GeometryCache.GeometryCacheTrack_TransformAnimation.SetMesh // (Final|Native|Public|HasOutParms) // @ game+0x163afa0
};

// Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation
// Size: 0x108 (Inherited: 0x58)
struct UGeometryCacheTrack_TransformGroupAnimation : UGeometryCacheTrack {
	char pad_58[0xb0]; // 0x58(0xb0)

	void SetMesh(struct FGeometryCacheMeshData& NewMeshData); // Function GeometryCache.GeometryCacheTrack_TransformGroupAnimation.SetMesh // (Final|Native|Public|HasOutParms) // @ game+0x163afa0
};

