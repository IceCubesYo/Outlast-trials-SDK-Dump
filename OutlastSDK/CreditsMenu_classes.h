// WidgetBlueprintGeneratedClass CreditsMenu.CreditsMenu_C
// Size: 0x379 (Inherited: 0x308)
struct UCreditsMenu_C : URBCutsceneMenu {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct UWidgetAnimation* FadeInSkipPrompt; // 0x310(0x08)
	struct UWidgetAnimation* BackButtonFadeIn; // 0x318(0x08)
	struct UImage* bg; // 0x320(0x08)
	struct UScrollBox* CreditsScroll; // 0x328(0x08)
	struct USpacer* FinalSpacer; // 0x330(0x08)
	struct UImage* Image_62; // 0x338(0x08)
	struct USpacer* InitialSpacer; // 0x340(0x08)
	struct URBMenuButton_C* SkipPrompt; // 0x348(0x08)
	struct UImage* vignette; // 0x350(0x08)
	float ScrollTarget; // 0x358(0x04)
	char pad_35C[0x4]; // 0x35c(0x04)
	struct UBinkMediaPlayer* BinkBackgroundVideoPlayer; // 0x360(0x08)
	float scroll speed; // 0x368(0x04)
	char pad_36C[0x4]; // 0x36c(0x04)
	struct FTimerHandle SkipTimerHandle; // 0x370(0x08)
	bool bIsShowingSkipPrompt; // 0x378(0x01)

	void Finished_0560D27B4148CBD98B8758ADF411BFC7(); // Function CreditsMenu.CreditsMenu_C.Finished_0560D27B4148CBD98B8758ADF411BFC7 // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function CreditsMenu.CreditsMenu_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function CreditsMenu.CreditsMenu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function CreditsMenu.CreditsMenu_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnPop(); // Function CreditsMenu.CreditsMenu_C.Event_OnPop // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnFocusMenu(); // Function CreditsMenu.CreditsMenu_C.Event_OnFocusMenu // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void CustomEvent_1(); // Function CreditsMenu.CreditsMenu_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void CustomEvent_2(); // Function CreditsMenu.CreditsMenu_C.CustomEvent_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__CreditsMenu_SkipPrompt_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(struct URBMenuButton_C* Button); // Function CreditsMenu.CreditsMenu_C.BndEvt__CreditsMenu_SkipPrompt_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__CreditsMenu_SkipPrompt_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature(); // Function CreditsMenu.CreditsMenu_C.BndEvt__CreditsMenu_SkipPrompt_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__CreditsMenu_SkipPrompt_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature(); // Function CreditsMenu.CreditsMenu_C.BndEvt__CreditsMenu_SkipPrompt_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void Event_EndCutsceneRequested(); // Function CreditsMenu.CreditsMenu_C.Event_EndCutsceneRequested // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void HideSkipPrompt(); // Function CreditsMenu.CreditsMenu_C.HideSkipPrompt // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_ShowSkipPrompt(bool bShouldStartHideTimer); // Function CreditsMenu.CreditsMenu_C.Event_ShowSkipPrompt // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_CreditsMenu(int32_t EntryPoint); // Function CreditsMenu.CreditsMenu_C.ExecuteUbergraph_CreditsMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

