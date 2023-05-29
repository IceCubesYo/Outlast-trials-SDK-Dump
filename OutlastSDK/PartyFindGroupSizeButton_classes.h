// WidgetBlueprintGeneratedClass PartyFindGroupSizeButton.PartyFindGroupSizeButton_C
// Size: 0x2c8 (Inherited: 0x260)
struct UPartyFindGroupSizeButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Hover; // 0x268(0x08)
	struct UBorder* Background; // 0x270(0x08)
	struct UTextBlock* ButtonText; // 0x278(0x08)
	struct USizeBox* CheckBoxContainer; // 0x280(0x08)
	struct UImage* Checkmark; // 0x288(0x08)
	struct UButton* SelectButton; // 0x290(0x08)
	bool bEnabled; // 0x298(0x01)
	bool bSelected; // 0x299(0x01)
	bool bHovered; // 0x29a(0x01)
	char pad_29B[0x5]; // 0x29b(0x05)
	struct FMulticastInlineDelegate OnClicked; // 0x2a0(0x10)
	struct FText ButtonTextValue; // 0x2b0(0x18)

	void SetEnabled(bool bInEnabled); // Function PartyFindGroupSizeButton.PartyFindGroupSizeButton_C.SetEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void GamepadNav_MenuConfirm_Release(); // Function PartyFindGroupSizeButton.PartyFindGroupSizeButton_C.GamepadNav_MenuConfirm_Release // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function PartyFindGroupSizeButton.PartyFindGroupSizeButton_C.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function PartyFindGroupSizeButton.PartyFindGroupSizeButton_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetHovered(bool Hovered); // Function PartyFindGroupSizeButton.PartyFindGroupSizeButton_C.SetHovered // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetButtonText(struct FText ButtonText); // Function PartyFindGroupSizeButton.PartyFindGroupSizeButton_C.SetButtonText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetSelected(bool bInSelected); // Function PartyFindGroupSizeButton.PartyFindGroupSizeButton_C.SetSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateState(); // Function PartyFindGroupSizeButton.PartyFindGroupSizeButton_C.UpdateState // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function PartyFindGroupSizeButton.PartyFindGroupSizeButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function PartyFindGroupSizeButton.PartyFindGroupSizeButton_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x201e6d4
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function PartyFindGroupSizeButton.PartyFindGroupSizeButton_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__SelectButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function PartyFindGroupSizeButton.PartyFindGroupSizeButton_C.BndEvt__SelectButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_PartyFindGroupSizeButton(int32_t EntryPoint); // Function PartyFindGroupSizeButton.PartyFindGroupSizeButton_C.ExecuteUbergraph_PartyFindGroupSizeButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
	void OnClicked__DelegateSignature(); // Function PartyFindGroupSizeButton.PartyFindGroupSizeButton_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

