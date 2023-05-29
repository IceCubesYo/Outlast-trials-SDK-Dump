// WidgetBlueprintGeneratedClass Error_ConfirmPopup.Error_ConfirmPopup_C
// Size: 0x3b0 (Inherited: 0x350)
struct UError_ConfirmPopup_C : URBErrorConfirmPopUpWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x08)
	struct UImage* Background; // 0x358(0x08)
	struct URBMenuButton_C* ConfirmMenuButton; // 0x360(0x08)
	struct UTextBlock* ErrorCodeText; // 0x368(0x08)
	struct UImage* Image_174; // 0x370(0x08)
	struct UImage* Line; // 0x378(0x08)
	struct UImage* Line_2; // 0x380(0x08)
	struct UImage* PopUpIconImage; // 0x388(0x08)
	struct UTextBlock* PopupSecondaryText; // 0x390(0x08)
	struct UTextBlock* PopupText; // 0x398(0x08)
	struct USizeBox* SecondaryTextSizeBox; // 0x3a0(0x08)
	struct UTextBlock* TitleTxt; // 0x3a8(0x08)

	void Event_InitializePopup(struct FText& TitleText, struct FText& MainText, struct FText& ConfirmText); // Function Error_ConfirmPopup.Error_ConfirmPopup_C.Event_InitializePopup // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__ConfirmMenuButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct URBMenuButton_C* Button); // Function Error_ConfirmPopup.Error_ConfirmPopup_C.BndEvt__ConfirmMenuButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void Event_OnFocusMenu(); // Function Error_ConfirmPopup.Error_ConfirmPopup_C.Event_OnFocusMenu // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnUnfocusMenu(bool bShouldHide); // Function Error_ConfirmPopup.Error_ConfirmPopup_C.Event_OnUnfocusMenu // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_Error_ConfirmPopup(int32_t EntryPoint); // Function Error_ConfirmPopup.Error_ConfirmPopup_C.ExecuteUbergraph_Error_ConfirmPopup // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

