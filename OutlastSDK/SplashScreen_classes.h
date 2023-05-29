// WidgetBlueprintGeneratedClass SplashScreen.SplashScreen_C
// Size: 0x3c8 (Inherited: 0x308)
struct USplashScreen_C : URBMenuWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct UWidgetAnimation* FadeInSkipButton; // 0x310(0x08)
	struct UWidgetAnimation* SkipSplashScreen; // 0x318(0x08)
	struct UWidgetAnimation* SplashScreenAnim; // 0x320(0x08)
	struct URichTextBlock* Prompt; // 0x328(0x08)
	struct UImage* promptBackground; // 0x330(0x08)
	struct UOverlay* PromptOverlay; // 0x338(0x08)
	struct UImage* RedBarrels; // 0x340(0x08)
	struct URBMenuButton_C* SkipButton; // 0x348(0x08)
	struct UCircularThrobber* spinner; // 0x350(0x08)
	struct UCanvasPanel* SplashScreen; // 0x358(0x08)
	struct UImage* ThirdParty1; // 0x360(0x08)
	struct UImage* ThirdParty2; // 0x368(0x08)
	struct UCanvasPanel* TitleScreen; // 0x370(0x08)
	struct UImage* TrialLogo; // 0x378(0x08)
	bool bIsConnecting; // 0x380(0x01)
	bool bConnected; // 0x381(0x01)
	char pad_382[0x6]; // 0x382(0x06)
	struct UMaterialInstanceDynamic* LogoMat; // 0x388(0x08)
	struct FMediaPlayerOptions SplashScreenMediaPlayerOptions; // 0x390(0x30)
	struct FTimerHandle SkipButtonFadeOutTimer; // 0x3c0(0x08)

	void Event_OnFocusMenu(); // Function SplashScreen.SplashScreen_C.Event_OnFocusMenu // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OnMainMenuStateChanged(enum class EMainMenuState mainMenuState); // Function SplashScreen.SplashScreen_C.OnMainMenuStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function SplashScreen.SplashScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_SplashScreen(int32_t EntryPoint); // Function SplashScreen.SplashScreen_C.ExecuteUbergraph_SplashScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

