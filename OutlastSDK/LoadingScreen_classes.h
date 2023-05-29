// WidgetBlueprintGeneratedClass LoadingScreen.LoadingScreen_C
// Size: 0x30a (Inherited: 0x270)
struct ULoadingScreen_C : URBLoadingScreenWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UWidgetAnimation* HintFadeOut; // 0x278(0x08)
	struct UWidgetAnimation* HintFadeIn; // 0x280(0x08)
	struct UWidgetAnimation* FadeIn; // 0x288(0x08)
	struct UImage* Background; // 0x290(0x08)
	struct UImage* extendedBackground; // 0x298(0x08)
	struct URichTextBlock* HintText; // 0x2a0(0x08)
	struct UImage* RorchachOverlay; // 0x2a8(0x08)
	struct UImage* vignette; // 0x2b0(0x08)
	bool bIsLoadingScreen; // 0x2b8(0x01)
	char pad_2B9[0x7]; // 0x2b9(0x07)
	struct TArray<struct FText> HintEntries; // 0x2c0(0x10)
	struct TArray<struct FText> AvailableHintEntries; // 0x2d0(0x10)
	struct TArray<struct FText> MansionEscapeHintsEntries; // 0x2e0(0x10)
	struct UMaterialInstance* Rorschach_MatInst; // 0x2f0(0x08)
	struct UMaterial* MansionEscape_Mat; // 0x2f8(0x08)
	struct UBinkMediaPlayer* BinkMansionEscape_MP; // 0x300(0x08)
	bool bFailedInMansionEscape; // 0x308(0x01)
	bool bIsReagentReleaseTrial; // 0x309(0x01)

	void Event_StartLoadingScreen(bool skipIntro); // Function LoadingScreen.LoadingScreen_C.Event_StartLoadingScreen // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_StopLoadingScreen(bool skipOutro); // Function LoadingScreen.LoadingScreen_C.Event_StopLoadingScreen // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void FadeOutCompleted(); // Function LoadingScreen.LoadingScreen_C.FadeOutCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function LoadingScreen.LoadingScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OnHintFadeOutCompleted(); // Function LoadingScreen.LoadingScreen_C.OnHintFadeOutCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnHintFadeInCompleted(); // Function LoadingScreen.LoadingScreen_C.OnHintFadeInCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_LoadingScreen(int32_t EntryPoint); // Function LoadingScreen.LoadingScreen_C.ExecuteUbergraph_LoadingScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

