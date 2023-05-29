// WidgetBlueprintGeneratedClass SocialMenu_EntryList_PartyInvite.SocialMenu_EntryList_PartyInvite_C
// Size: 0x440 (Inherited: 0x368)
struct USocialMenu_EntryList_PartyInvite_C : URBSocialMenuEntryListWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x368(0x08)
	struct UWidgetAnimation* HideEmpty; // 0x370(0x08)
	struct UWidgetAnimation* HideGrid; // 0x378(0x08)
	struct UWidgetAnimation* ShowEmpty; // 0x380(0x08)
	struct UWidgetAnimation* ShowGrid; // 0x388(0x08)
	struct UWidgetAnimation* HideLoading; // 0x390(0x08)
	struct UWidgetAnimation* ShowLoading; // 0x398(0x08)
	struct UBorder* EmptyBox; // 0x3a0(0x08)
	struct URBMenuButton_C* GamepadLeftPageButton; // 0x3a8(0x08)
	struct USizeBox* GamepadPageNav; // 0x3b0(0x08)
	struct URBMenuButton_C* GamepadRightPageButton; // 0x3b8(0x08)
	struct UGridPanel* Grid; // 0x3c0(0x08)
	struct ULoadingVideoWidget_C* LoadingVideoWidget; // 0x3c8(0x08)
	struct UButton* NextPageButton; // 0x3d0(0x08)
	struct UTextBlock* PageNavText; // 0x3d8(0x08)
	struct UButton* PreviousPageButton; // 0x3e0(0x08)
	struct USizeBox* SizeBox_469; // 0x3e8(0x08)
	struct UTextBlock* TextBlock_80; // 0x3f0(0x08)
	struct UTextBlock* Title; // 0x3f8(0x08)
	struct FText HeaderText; // 0x400(0x18)
	struct FText EmptyText; // 0x418(0x18)
	struct FMulticastInlineDelegate OnNoFocusPossible; // 0x430(0x10)

	void UpdateGamepadPageNav(); // Function SocialMenu_EntryList_PartyInvite.SocialMenu_EntryList_PartyInvite_C.UpdateGamepadPageNav // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SlotHasFocus(int32_t column, int32_t row, bool& bHasFocus); // Function SocialMenu_EntryList_PartyInvite.SocialMenu_EntryList_PartyInvite_C.SlotHasFocus // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetupInitialFocus(); // Function SocialMenu_EntryList_PartyInvite.SocialMenu_EntryList_PartyInvite_C.SetupInitialFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function SocialMenu_EntryList_PartyInvite.SocialMenu_EntryList_PartyInvite_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	bool GetPreviousPageButtonEnabled(); // Function SocialMenu_EntryList_PartyInvite.SocialMenu_EntryList_PartyInvite_C.GetPreviousPageButtonEnabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	bool GetNextPageButtonEnabled(); // Function SocialMenu_EntryList_PartyInvite.SocialMenu_EntryList_PartyInvite_C.GetNextPageButtonEnabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	void SetupEditorPreview(); // Function SocialMenu_EntryList_PartyInvite.SocialMenu_EntryList_PartyInvite_C.SetupEditorPreview // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateEntry(struct UWidget* Entry, int32_t column, int32_t row); // Function SocialMenu_EntryList_PartyInvite.SocialMenu_EntryList_PartyInvite_C.UpdateEntry // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Setup(); // Function SocialMenu_EntryList_PartyInvite.SocialMenu_EntryList_PartyInvite_C.Setup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function SocialMenu_EntryList_PartyInvite.SocialMenu_EntryList_PartyInvite_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_RemoveEntry(struct URBUserWidget* Entry); // Function SocialMenu_EntryList_PartyInvite.SocialMenu_EntryList_PartyInvite_C.Event_RemoveEntry // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_UpdateEntry(struct URBUserWidget* Entry, int32_t column, int32_t row); // Function SocialMenu_EntryList_PartyInvite.SocialMenu_EntryList_PartyInvite_C.Event_UpdateEntry // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_Clear(); // Function SocialMenu_EntryList_PartyInvite.SocialMenu_EntryList_PartyInvite_C.Event_Clear // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function SocialMenu_EntryList_PartyInvite.SocialMenu_EntryList_PartyInvite_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__PreviousPageButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function SocialMenu_EntryList_PartyInvite.SocialMenu_EntryList_PartyInvite_C.BndEvt__PreviousPageButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__NextPageButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function SocialMenu_EntryList_PartyInvite.SocialMenu_EntryList_PartyInvite_C.BndEvt__NextPageButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void Event_OnDataPending(bool bIsDataPending); // Function SocialMenu_EntryList_PartyInvite.SocialMenu_EntryList_PartyInvite_C.Event_OnDataPending // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnEmptyStateChanged(bool bIsEmpty); // Function SocialMenu_EntryList_PartyInvite.SocialMenu_EntryList_PartyInvite_C.Event_OnEmptyStateChanged // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OnMenuInputSourceChanged(); // Function SocialMenu_EntryList_PartyInvite.SocialMenu_EntryList_PartyInvite_C.OnMenuInputSourceChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Destruct(); // Function SocialMenu_EntryList_PartyInvite.SocialMenu_EntryList_PartyInvite_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OnGamepadPageLeft(); // Function SocialMenu_EntryList_PartyInvite.SocialMenu_EntryList_PartyInvite_C.OnGamepadPageLeft // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnGamepadPageRight(); // Function SocialMenu_EntryList_PartyInvite.SocialMenu_EntryList_PartyInvite_C.OnGamepadPageRight // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_SocialMenu_EntryList_PartyInvite(int32_t EntryPoint); // Function SocialMenu_EntryList_PartyInvite.SocialMenu_EntryList_PartyInvite_C.ExecuteUbergraph_SocialMenu_EntryList_PartyInvite // (Final|UbergraphFunction) // @ game+0x201e6d4
	void OnNoFocusPossible__DelegateSignature(); // Function SocialMenu_EntryList_PartyInvite.SocialMenu_EntryList_PartyInvite_C.OnNoFocusPossible__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

