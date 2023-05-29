// BlueprintGeneratedClass tvChannel_BP.tvChannel_BP_C
// Size: 0x471 (Inherited: 0x2e0)
struct AtvChannel_BP_C : ARBNarrativeScreenChannel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UStaticMeshComponent* TVScreenTest; // 0x2e8(0x08)
	struct UBillboardComponent* Billboard; // 0x2f0(0x08)
	struct USceneComponent* Scene; // 0x2f8(0x08)
	float animTime; // 0x300(0x04)
	int32_t CurrentText; // 0x304(0x04)
	struct UMaterialInterface* ScreenMaterial; // 0x308(0x08)
	struct UTexture* DefaultImage; // 0x310(0x08)
	struct UTexture* StandByImage; // 0x318(0x08)
	struct FText StandByText; // 0x320(0x18)
	float StandByTextColor; // 0x338(0x04)
	float StandByFontScale; // 0x33c(0x04)
	struct FVector2D RenderTextureSize; // 0x340(0x08)
	struct FVector2D ScaleFactor; // 0x348(0x08)
	struct FVector2D ImageUVSize; // 0x350(0x08)
	enum class EPixelFormat Pixel Format; // 0x358(0x01)
	char pad_359[0x7]; // 0x359(0x07)
	struct FTextBox TextBox; // 0x360(0x90)
	struct UCanvasRenderTarget2D* RenterTexture; // 0x3f0(0x08)
	bool IsMovie; // 0x3f8(0x01)
	char pad_3F9[0x3]; // 0x3f9(0x03)
	int32_t LastRow; // 0x3fc(0x04)
	struct UBinkMediaPlayer* BinkMediaPlayer-01; // 0x400(0x08)
	struct UTexture* tvMovieTexture; // 0x408(0x08)
	bool HasCreatedTexture; // 0x410(0x01)
	char pad_411[0x3]; // 0x411(0x03)
	struct FVector2D BaseRenderTextureSize; // 0x414(0x08)
	float ScreenRefreshLuminosity; // 0x41c(0x04)
	float ScreenChromaticAberation; // 0x420(0x04)
	float ScreenNoiseDeform; // 0x424(0x04)
	float ScreenDeform; // 0x428(0x04)
	float ScreenInterlace; // 0x42c(0x04)
	struct UMaterialInstanceDynamic* ScreenMaterialDynamic; // 0x430(0x08)
	struct FName group; // 0x438(0x08)
	struct TArray<struct FTextAnim_Struc> Countdown; // 0x440(0x10)
	bool IsSilent; // 0x450(0x01)
	char pad_451[0x7]; // 0x451(0x07)
	struct UAkAudioEvent* IdleSoundStart; // 0x458(0x08)
	struct UAkAudioEvent* IdleSoundStop; // 0x460(0x08)
	bool IsLoopingIdleSoundPlaying; // 0x468(0x01)
	bool UseMovieAsFlash; // 0x469(0x01)
	bool IsManuallyMuted; // 0x46a(0x01)
	bool DebugShowTvScreen; // 0x46b(0x01)
	int32_t LastIndex; // 0x46c(0x04)
	bool IsPlayingMovie; // 0x470(0x01)

	void GetElapsedAnimTime(float& Time); // Function tvChannel_BP.tvChannel_BP_C.GetElapsedAnimTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	void Set Material Dynamic Parameter(float Height, float ChromaticAberation, float NoiseDeform, float RefreshJumpLuminosity, float Interlace, struct UTexture* TVmovie); // Function tvChannel_BP.tvChannel_BP_C.Set Material Dynamic Parameter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PlaySoundFromTV(struct UAkAudioEvent* Sound, bool PlayOnNarrator); // Function tvChannel_BP.tvChannel_BP_C.PlaySoundFromTV // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PlayRandomAnim(struct UDataTable* Data Table, bool LoopSingleAnimation, bool OnlySingleRow); // Function tvChannel_BP.tvChannel_BP_C.PlayRandomAnim // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ShouldLoopAnim(bool& Value); // Function tvChannel_BP.tvChannel_BP_C.ShouldLoopAnim // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	void ValidateTexture(); // Function tvChannel_BP.tvChannel_BP_C.ValidateTexture // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void GetRandomDataTableRow(struct UDataTable* Data Table, struct FName& RowName); // Function tvChannel_BP.tvChannel_BP_C.GetRandomDataTableRow // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	void Create Dynamic Texture(); // Function tvChannel_BP.tvChannel_BP_C.Create Dynamic Texture // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Set Test Screen Mat(struct UMaterialInterface* Material); // Function tvChannel_BP.tvChannel_BP_C.Set Test Screen Mat // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UserConstructionScript(); // Function tvChannel_BP.tvChannel_BP_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ReceiveBeginPlay(); // Function tvChannel_BP.tvChannel_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x201e6d4
	void UpdateText(struct FString string, struct FText Text, float [ 0] Font Scale); // Function tvChannel_BP.tvChannel_BP_C.UpdateText // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void startMovie(struct TArray<struct FTextAnim_Struc>& TextAnim, struct UMediaSource* Movie, struct UAkAudioEvent* MovieSound); // Function tvChannel_BP.tvChannel_BP_C.startMovie // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void StartTextAnimation(struct TArray<struct FTextAnim_Struc>& TargetArray); // Function tvChannel_BP.tvChannel_BP_C.StartTextAnimation // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void EndMovie(); // Function tvChannel_BP.tvChannel_BP_C.EndMovie // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PlayCurrentAnim(); // Function tvChannel_BP.tvChannel_BP_C.PlayCurrentAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void CreateTextTexture(); // Function tvChannel_BP.tvChannel_BP_C.CreateTextTexture // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateMaterialParameter(float TextColor, struct UTexture* Texture, bool Noise, bool Rorschard, bool MovieFlash); // Function tvChannel_BP.tvChannel_BP_C.UpdateMaterialParameter // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void DrawRenderTarget(); // Function tvChannel_BP.tvChannel_BP_C.DrawRenderTarget // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnCurrentlyPlayingDataChanged(); // Function tvChannel_BP.tvChannel_BP_C.Event_OnCurrentlyPlayingDataChanged // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OnAnimationFinihsed(); // Function tvChannel_BP.tvChannel_BP_C.OnAnimationFinihsed // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PlayCountdown(int32_t Countdown); // Function tvChannel_BP.tvChannel_BP_C.PlayCountdown // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void stopMovie(); // Function tvChannel_BP.tvChannel_BP_C.stopMovie // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void loopAnim(); // Function tvChannel_BP.tvChannel_BP_C.loopAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void StopAnim(); // Function tvChannel_BP.tvChannel_BP_C.StopAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function tvChannel_BP.tvChannel_BP_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_tvChannel_BP(int32_t EntryPoint); // Function tvChannel_BP.tvChannel_BP_C.ExecuteUbergraph_tvChannel_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

