// WidgetBlueprintGeneratedClass IntroRecapVideoMenuWidget.IntroRecapVideoMenuWidget_C
// Size: 0x361 (Inherited: 0x308)
struct UIntroRecapVideoMenuWidget_C : URBCutsceneMenu {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct UWidgetAnimation* FadeInSkipPrompt; // 0x310(0x08)
	struct UImage* Background; // 0x318(0x08)
	struct URBMenuButton_C* SkipPrompt; // 0x320(0x08)
	struct UImage* VideoImage; // 0x328(0x08)
	struct FMulticastInlineDelegate FinishedReading; // 0x330(0x10)
	struct UMediaSoundComponent* VideoSound; // 0x340(0x08)
	struct UBinkMediaPlayer* BinkMediaPlayer; // 0x348(0x08)
	float skipPressedTimeStamp; // 0x350(0x04)
	char pad_354[0x4]; // 0x354(0x04)
	struct FTimerHandle SkipTimerHandle; // 0x358(0x08)
	bool bIsShowingSkipPrompt; // 0x360(0x01)

	void SetSkipButton(); // Function IntroRecapVideoMenuWidget.IntroRecapVideoMenuWidget_C.SetSkipButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Finished_F6A9744E4EE11F3E963A7D8C071ED177(); // Function IntroRecapVideoMenuWidget.IntroRecapVideoMenuWidget_C.Finished_F6A9744E4EE11F3E963A7D8C071ED177 // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function IntroRecapVideoMenuWidget.IntroRecapVideoMenuWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OnMediaOpened(struct FString OpenedUrl); // Function IntroRecapVideoMenuWidget.IntroRecapVideoMenuWidget_C.OnMediaOpened // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void HideSkipPrompt(); // Function IntroRecapVideoMenuWidget.IntroRecapVideoMenuWidget_C.HideSkipPrompt // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnCutsceneEnded(); // Function IntroRecapVideoMenuWidget.IntroRecapVideoMenuWidget_C.OnCutsceneEnded // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_ShowSkipPrompt(bool bShouldStartHideTimer); // Function IntroRecapVideoMenuWidget.IntroRecapVideoMenuWidget_C.Event_ShowSkipPrompt // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_EndCutsceneRequested(); // Function IntroRecapVideoMenuWidget.IntroRecapVideoMenuWidget_C.Event_EndCutsceneRequested // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Destruct(); // Function IntroRecapVideoMenuWidget.IntroRecapVideoMenuWidget_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnPop(); // Function IntroRecapVideoMenuWidget.IntroRecapVideoMenuWidget_C.Event_OnPop // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_IntroRecapVideoMenuWidget(int32_t EntryPoint); // Function IntroRecapVideoMenuWidget.IntroRecapVideoMenuWidget_C.ExecuteUbergraph_IntroRecapVideoMenuWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
	void FinishedReading__DelegateSignature(); // Function IntroRecapVideoMenuWidget.IntroRecapVideoMenuWidget_C.FinishedReading__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

