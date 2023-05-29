// WidgetBlueprintGeneratedClass ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C
// Size: 0x31b (Inherited: 0x260)
struct UProgramPosterCarrouselEntry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* HighlightPoster; // 0x268(0x08)
	struct UOverlay* ComingSoonStamp; // 0x270(0x08)
	struct UVerticalBox* DetailsVBox; // 0x278(0x08)
	struct UImage* HoverBrackets; // 0x280(0x08)
	struct UButton* HoveringDetector; // 0x288(0x08)
	struct UTextBlock* LockReasonText; // 0x290(0x08)
	struct UImage* NewIcon; // 0x298(0x08)
	struct UImage* PosterImage; // 0x2a0(0x08)
	struct UTextBlock* ProgramName; // 0x2a8(0x08)
	struct UTextBlock* ProgramSecondaryName; // 0x2b0(0x08)
	struct USizeBox* SizeBox_2; // 0x2b8(0x08)
	struct UImage* StatusIcon; // 0x2c0(0x08)
	bool bIsProgramAvailable; // 0x2c8(0x01)
	char pad_2C9[0x3]; // 0x2c9(0x03)
	struct FName ProgramId; // 0x2cc(0x08)
	char pad_2D4[0x4]; // 0x2d4(0x04)
	struct FMulticastInlineDelegate OnProgramClicked; // 0x2d8(0x10)
	bool SlidingOut; // 0x2e8(0x01)
	char pad_2E9[0x7]; // 0x2e9(0x07)
	struct FMulticastInlineDelegate OnProgramHovered; // 0x2f0(0x10)
	struct FMulticastInlineDelegate OnProgramUnhovered; // 0x300(0x10)
	bool bCurrentlySelected; // 0x310(0x01)
	bool bHovered; // 0x311(0x01)
	char pad_312[0x2]; // 0x312(0x02)
	float DesiredHeight; // 0x314(0x04)
	bool bLocked; // 0x318(0x01)
	bool bComingSoon; // 0x319(0x01)
	bool Inaccessible Until Unlocked; // 0x31a(0x01)

	void UpdateTooltip(); // Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.UpdateTooltip // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	struct UWidget* GetToolTipWidget(); // Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.GetToolTipWidget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	void SetSelected(bool bSelected); // Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.SetSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Refresh(); // Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void GamepadNav_MenuConfirm_Release(); // Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.GamepadNav_MenuConfirm_Release // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Setup(struct FRBProgramInfoRow programInfo, bool bLocked); // Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.Setup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__TrialPosterCarrouselEntry_V2_Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.BndEvt__TrialPosterCarrouselEntry_V2_Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__TrialPosterCarrouselEntry_V2_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.BndEvt__TrialPosterCarrouselEntry_V2_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__TrialPosterCarrouselEntry_V2_HoveringDetector_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.BndEvt__TrialPosterCarrouselEntry_V2_HoveringDetector_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void On Hovered(); // Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.On Hovered // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void On Unhovered(); // Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.On Unhovered // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void On Clicked(); // Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.On Clicked // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_ProgramPosterCarrouselEntry(int32_t EntryPoint); // Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.ExecuteUbergraph_ProgramPosterCarrouselEntry // (Final|UbergraphFunction) // @ game+0x201e6d4
	void OnProgramUnhovered__DelegateSignature(struct FName TrialId); // Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.OnProgramUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnProgramHovered__DelegateSignature(struct FName TrialId); // Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.OnProgramHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnProgramClicked__DelegateSignature(struct FName TrialId); // Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.OnProgramClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

