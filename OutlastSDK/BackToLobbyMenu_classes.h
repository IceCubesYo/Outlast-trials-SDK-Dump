// WidgetBlueprintGeneratedClass BackToLobbyMenu.BackToLobbyMenu_C
// Size: 0x3b8 (Inherited: 0x350)
struct UBackToLobbyMenu_C : URBBackToLobbyMenu {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x08)
	struct UWidgetAnimation* ShowWithParty; // 0x358(0x08)
	struct URBMenuButton_C* BackBtn; // 0x360(0x08)
	struct UImage* Background; // 0x368(0x08)
	struct UImage* Background_2; // 0x370(0x08)
	struct UHorizontalBox* ControlsHorizontalBox; // 0x378(0x08)
	struct ULeaveWithPartyButton_C* LeaveWithPartyButton; // 0x380(0x08)
	struct UImage* Line; // 0x388(0x08)
	struct UImage* Line_2; // 0x390(0x08)
	struct UBorder* LoadingContainer; // 0x398(0x08)
	struct ULoadingVideoWidget_C* LoadingVideoWidget; // 0x3a0(0x08)
	struct URBMenuButton_C* ReturnBtn; // 0x3a8(0x08)
	struct UTextBlock* warningText; // 0x3b0(0x08)

	struct FEventReply OnPreviewMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function BackToLobbyMenu.BackToLobbyMenu_C.OnPreviewMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateWarningText(); // Function BackToLobbyMenu.BackToLobbyMenu_C.UpdateWarningText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateLoadingWidgetVisibility(); // Function BackToLobbyMenu.BackToLobbyMenu_C.UpdateLoadingWidgetVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateShowWithPartyVisibility(); // Function BackToLobbyMenu.BackToLobbyMenu_C.UpdateShowWithPartyVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateControlVisibility(); // Function BackToLobbyMenu.BackToLobbyMenu_C.UpdateControlVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void GetWarningText(struct FText& Text); // Function BackToLobbyMenu.BackToLobbyMenu_C.GetWarningText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	bool IsLeaveWithPartyEnabled(); // Function BackToLobbyMenu.BackToLobbyMenu_C.IsLeaveWithPartyEnabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	bool AreButtonsEnabled(); // Function BackToLobbyMenu.BackToLobbyMenu_C.AreButtonsEnabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	void BndEvt__RBMenuButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct URBMenuButton_C* Button); // Function BackToLobbyMenu.BackToLobbyMenu_C.BndEvt__RBMenuButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__ReturnAloneBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(struct URBMenuButton_C* Button); // Function BackToLobbyMenu.BackToLobbyMenu_C.BndEvt__ReturnAloneBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void Event_Refresh(); // Function BackToLobbyMenu.BackToLobbyMenu_C.Event_Refresh // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__LeaveWithPartyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function BackToLobbyMenu.BackToLobbyMenu_C.BndEvt__LeaveWithPartyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void Event_MenuConfirm_Released(); // Function BackToLobbyMenu.BackToLobbyMenu_C.Event_MenuConfirm_Released // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_BackToLobbyMenu(int32_t EntryPoint); // Function BackToLobbyMenu.BackToLobbyMenu_C.ExecuteUbergraph_BackToLobbyMenu // (Final|UbergraphFunction) // @ game+0x201e6d4
};

