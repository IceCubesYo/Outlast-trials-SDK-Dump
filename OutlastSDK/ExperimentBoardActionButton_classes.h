// WidgetBlueprintGeneratedClass ExperimentBoardActionButton.ExperimentBoardActionButton_C
// Size: 0x3e9 (Inherited: 0x260)
struct UExperimentBoardActionButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Hovered; // 0x268(0x08)
	struct UActionIconWidget_C* ActionIconWidget; // 0x270(0x08)
	struct USizeBox* AssociatedInputActionContainer; // 0x278(0x08)
	struct USizeBox* AssociatedInputActionContainer_2; // 0x280(0x08)
	struct UImage* ButtonBg; // 0x288(0x08)
	struct UTextBlock* ButtonText; // 0x290(0x08)
	struct UActionIconWidget_C* FocusedActionWidget; // 0x298(0x08)
	struct UButton* SelectButton; // 0x2a0(0x08)
	struct USizeBox* SizeBox_1; // 0x2a8(0x08)
	bool bHovered; // 0x2b0(0x01)
	char pad_2B1[0x7]; // 0x2b1(0x07)
	struct FMulticastInlineDelegate OnClicked; // 0x2b8(0x10)
	bool bEnabled; // 0x2c8(0x01)
	bool bPlayDefaultClickSound; // 0x2c9(0x01)
	char pad_2CA[0x6]; // 0x2ca(0x06)
	struct FText ButtonTextValue; // 0x2d0(0x18)
	struct UTexture2D* ButtonTexture; // 0x2e8(0x08)
	struct FSlateColor NormalTextColor; // 0x2f0(0x28)
	struct FSlateColor HoveredTextColor; // 0x318(0x28)
	struct FSlateColor DisabledTextColor; // 0x340(0x28)
	struct FLinearColor NormalBackgroundColor; // 0x368(0x10)
	struct FLinearColor HoveredBackgroundColor; // 0x378(0x10)
	struct FLinearColor DisabledBackgroundColor; // 0x388(0x10)
	bool bEnableFocusAction; // 0x398(0x01)
	char pad_399[0x3]; // 0x399(0x03)
	struct FName FocusActionName; // 0x39c(0x08)
	char pad_3A4[0x4]; // 0x3a4(0x04)
	struct FText FocusActionText; // 0x3a8(0x18)
	float MinDesiredWidth; // 0x3c0(0x04)
	char pad_3C4[0x4]; // 0x3c4(0x04)
	struct FString AssociatedInputActionName; // 0x3c8(0x10)
	struct FMargin TextPadding; // 0x3d8(0x10)
	bool bEnableFocusActionButton; // 0x3e8(0x01)

	void Setup(); // Function ExperimentBoardActionButton.ExperimentBoardActionButton_C.Setup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnButtonClicked(); // Function ExperimentBoardActionButton.ExperimentBoardActionButton_C.OnButtonClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void GamepadNav_MenuConfirm_Release(); // Function ExperimentBoardActionButton.ExperimentBoardActionButton_C.GamepadNav_MenuConfirm_Release // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void GamepadNav_MenuConfirm(); // Function ExperimentBoardActionButton.ExperimentBoardActionButton_C.GamepadNav_MenuConfirm // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetHovered(bool Hovered); // Function ExperimentBoardActionButton.ExperimentBoardActionButton_C.SetHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function ExperimentBoardActionButton.ExperimentBoardActionButton_C.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function ExperimentBoardActionButton.ExperimentBoardActionButton_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetButtonText(struct FText ButtonText); // Function ExperimentBoardActionButton.ExperimentBoardActionButton_C.SetButtonText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetEnabled(bool bInEnabled); // Function ExperimentBoardActionButton.ExperimentBoardActionButton_C.SetEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateState(); // Function ExperimentBoardActionButton.ExperimentBoardActionButton_C.UpdateState // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function ExperimentBoardActionButton.ExperimentBoardActionButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function ExperimentBoardActionButton.ExperimentBoardActionButton_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x201e6d4
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function ExperimentBoardActionButton.ExperimentBoardActionButton_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__SelectButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function ExperimentBoardActionButton.ExperimentBoardActionButton_C.BndEvt__SelectButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function ExperimentBoardActionButton.ExperimentBoardActionButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_ExperimentBoardActionButton(int32_t EntryPoint); // Function ExperimentBoardActionButton.ExperimentBoardActionButton_C.ExecuteUbergraph_ExperimentBoardActionButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
	void OnClicked__DelegateSignature(); // Function ExperimentBoardActionButton.ExperimentBoardActionButton_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

