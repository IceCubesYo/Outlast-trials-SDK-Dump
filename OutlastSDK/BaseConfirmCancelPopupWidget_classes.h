// WidgetBlueprintGeneratedClass BaseConfirmCancelPopupWidget.BaseConfirmCancelPopupWidget_C
// Size: 0x3f8 (Inherited: 0x338)
struct UBaseConfirmCancelPopupWidget_C : URBPopUpConfirmCancelWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct UImage* Background; // 0x340(0x08)
	struct URBMenuButton_C* CancelMenuButton; // 0x348(0x08)
	struct URBMenuButton_C* ConfirmMenuButton; // 0x350(0x08)
	struct UImage* Line; // 0x358(0x08)
	struct UImage* Line_2; // 0x360(0x08)
	struct UImage* PopUpIconImage; // 0x368(0x08)
	struct UTextBlock* PopupText; // 0x370(0x08)
	struct UTextBlock* TitleTxt; // 0x378(0x08)
	struct FSlateColor PopUpTint; // 0x380(0x28)
	struct UTexture2D* PopUpIcon; // 0x3a8(0x08)
	struct FText DefaultTitle; // 0x3b0(0x18)
	struct FText DefaultConfirmTxt; // 0x3c8(0x18)
	struct FText DefaultCancelTxt; // 0x3e0(0x18)

	struct FEventReply OnPreviewMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function BaseConfirmCancelPopupWidget.BaseConfirmCancelPopupWidget_C.OnPreviewMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetCancelSound(struct UAkAudioEvent* Sound); // Function BaseConfirmCancelPopupWidget.BaseConfirmCancelPopupWidget_C.SetCancelSound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetConfrmSound(struct UAkAudioEvent* Sound); // Function BaseConfirmCancelPopupWidget.BaseConfirmCancelPopupWidget_C.SetConfrmSound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_InitializePopup(struct FText& TitleText, struct FText& MainText, struct FText& ConfirmText, struct FText& CancelText); // Function BaseConfirmCancelPopupWidget.BaseConfirmCancelPopupWidget_C.Event_InitializePopup // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__ConfirmMenuButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(struct URBMenuButton_C* Button); // Function BaseConfirmCancelPopupWidget.BaseConfirmCancelPopupWidget_C.BndEvt__ConfirmMenuButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__CancelMenuButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(struct URBMenuButton_C* Button); // Function BaseConfirmCancelPopupWidget.BaseConfirmCancelPopupWidget_C.BndEvt__CancelMenuButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void Destruct(); // Function BaseConfirmCancelPopupWidget.BaseConfirmCancelPopupWidget_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OninputChanged(); // Function BaseConfirmCancelPopupWidget.BaseConfirmCancelPopupWidget_C.OninputChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function BaseConfirmCancelPopupWidget.BaseConfirmCancelPopupWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function BaseConfirmCancelPopupWidget.BaseConfirmCancelPopupWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_BaseConfirmCancelPopupWidget(int32_t EntryPoint); // Function BaseConfirmCancelPopupWidget.BaseConfirmCancelPopupWidget_C.ExecuteUbergraph_BaseConfirmCancelPopupWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

