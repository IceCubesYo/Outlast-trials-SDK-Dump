// WidgetBlueprintGeneratedClass LeaveWithPartyButton.LeaveWithPartyButton_C
// Size: 0x310 (Inherited: 0x260)
struct ULeaveWithPartyButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* ButtonText; // 0x268(0x08)
	struct UImage* Checkmark; // 0x270(0x08)
	struct UButton* SelectButton; // 0x278(0x08)
	bool bSelected; // 0x280(0x01)
	bool bHovered; // 0x281(0x01)
	char pad_282[0x6]; // 0x282(0x06)
	struct FMulticastInlineDelegate OnClicked; // 0x288(0x10)
	bool bEnabled; // 0x298(0x01)
	char pad_299[0x7]; // 0x299(0x07)
	struct FText ButtonTextValue; // 0x2a0(0x18)
	struct FSlateFontInfo ButtonTextFont; // 0x2b8(0x58)

	void SetButtonText(struct FText ButtonText); // Function LeaveWithPartyButton.LeaveWithPartyButton_C.SetButtonText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetEnabled(bool bInEnabled); // Function LeaveWithPartyButton.LeaveWithPartyButton_C.SetEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetSelected(bool bInSelected); // Function LeaveWithPartyButton.LeaveWithPartyButton_C.SetSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateState(); // Function LeaveWithPartyButton.LeaveWithPartyButton_C.UpdateState // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function LeaveWithPartyButton.LeaveWithPartyButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function LeaveWithPartyButton.LeaveWithPartyButton_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x201e6d4
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function LeaveWithPartyButton.LeaveWithPartyButton_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__SelectButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function LeaveWithPartyButton.LeaveWithPartyButton_C.BndEvt__SelectButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_LeaveWithPartyButton(int32_t EntryPoint); // Function LeaveWithPartyButton.LeaveWithPartyButton_C.ExecuteUbergraph_LeaveWithPartyButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
	void OnClicked__DelegateSignature(); // Function LeaveWithPartyButton.LeaveWithPartyButton_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

