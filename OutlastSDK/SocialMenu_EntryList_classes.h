// WidgetBlueprintGeneratedClass SocialMenu_EntryList.SocialMenu_EntryList_C
// Size: 0x531 (Inherited: 0x368)
struct USocialMenu_EntryList_C : URBSocialMenuEntryListWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x368(0x08)
	struct UWidgetAnimation* HideEmpty; // 0x370(0x08)
	struct UWidgetAnimation* HideGrid; // 0x378(0x08)
	struct UWidgetAnimation* ShowEmpty; // 0x380(0x08)
	struct UWidgetAnimation* ShowGrid; // 0x388(0x08)
	struct UWidgetAnimation* HideLoading; // 0x390(0x08)
	struct UWidgetAnimation* ShowLoading; // 0x398(0x08)
	struct UBorder* EmptyBox; // 0x3a0(0x08)
	struct UUniformGridPanel* EntryGrid; // 0x3a8(0x08)
	struct URBMenuButton_C* GamepadLeftPageButton; // 0x3b0(0x08)
	struct USizeBox* GamepadPageNav; // 0x3b8(0x08)
	struct URBMenuButton_C* GamepadRightPageButton; // 0x3c0(0x08)
	struct ULoadingVideoWidget_C* LoadingVideoWidget; // 0x3c8(0x08)
	struct UButton* NextPageButton_2; // 0x3d0(0x08)
	struct USizeBox* NextPageButtonContainer; // 0x3d8(0x08)
	struct UTextBlock* PageNavText; // 0x3e0(0x08)
	struct UButton* PreviousPageButton_2; // 0x3e8(0x08)
	struct USizeBox* PreviousPageButtonContainer; // 0x3f0(0x08)
	struct USizeBox* SizeBox_469; // 0x3f8(0x08)
	struct UTextBlock* TextBlock_80; // 0x400(0x08)
	struct FSlateBrush TwoColumnBackgroundBrush; // 0x408(0x88)
	struct FSlateBrush SingleColumnBackgroundBrush; // 0x490(0x88)
	struct FText EmptyText; // 0x518(0x18)
	bool bShowPageNavigation; // 0x530(0x01)

	void UpdateGamepadPageNav(); // Function SocialMenu_EntryList.SocialMenu_EntryList_C.UpdateGamepadPageNav // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SlotHasFocus(int32_t column, int32_t row, bool& bHasFocus); // Function SocialMenu_EntryList.SocialMenu_EntryList_C.SlotHasFocus // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetupInitialFocus(); // Function SocialMenu_EntryList.SocialMenu_EntryList_C.SetupInitialFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function SocialMenu_EntryList.SocialMenu_EntryList_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	bool GetPreviousPageButtonEnabled(); // Function SocialMenu_EntryList.SocialMenu_EntryList_C.GetPreviousPageButtonEnabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	bool GetNextPageButtonEnabled(); // Function SocialMenu_EntryList.SocialMenu_EntryList_C.GetNextPageButtonEnabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	void SetSize(); // Function SocialMenu_EntryList.SocialMenu_EntryList_C.SetSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetupEditorPreview(); // Function SocialMenu_EntryList.SocialMenu_EntryList_C.SetupEditorPreview // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateEntry(struct UWidget* Entry, int32_t column, int32_t row); // Function SocialMenu_EntryList.SocialMenu_EntryList_C.UpdateEntry // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Setup(); // Function SocialMenu_EntryList.SocialMenu_EntryList_C.Setup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function SocialMenu_EntryList.SocialMenu_EntryList_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_RemoveEntry(struct URBUserWidget* Entry); // Function SocialMenu_EntryList.SocialMenu_EntryList_C.Event_RemoveEntry // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_UpdateEntry(struct URBUserWidget* Entry, int32_t column, int32_t row); // Function SocialMenu_EntryList.SocialMenu_EntryList_C.Event_UpdateEntry // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_Clear(); // Function SocialMenu_EntryList.SocialMenu_EntryList_C.Event_Clear // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function SocialMenu_EntryList.SocialMenu_EntryList_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnDataPending(bool bIsDataPending); // Function SocialMenu_EntryList.SocialMenu_EntryList_C.Event_OnDataPending // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnEmptyStateChanged(bool bIsEmpty); // Function SocialMenu_EntryList.SocialMenu_EntryList_C.Event_OnEmptyStateChanged // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__SocialMenu_EntryList_PreviousPageButton_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function SocialMenu_EntryList.SocialMenu_EntryList_C.BndEvt__SocialMenu_EntryList_PreviousPageButton_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__SocialMenu_EntryList_NextPageButton_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function SocialMenu_EntryList.SocialMenu_EntryList_C.BndEvt__SocialMenu_EntryList_NextPageButton_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void OnMenuInputSourceChanged(); // Function SocialMenu_EntryList.SocialMenu_EntryList_C.OnMenuInputSourceChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Destruct(); // Function SocialMenu_EntryList.SocialMenu_EntryList_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OnGamepadPageLeft(); // Function SocialMenu_EntryList.SocialMenu_EntryList_C.OnGamepadPageLeft // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnGamepadPageRight(); // Function SocialMenu_EntryList.SocialMenu_EntryList_C.OnGamepadPageRight // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_SocialMenu_EntryList(int32_t EntryPoint); // Function SocialMenu_EntryList.SocialMenu_EntryList_C.ExecuteUbergraph_SocialMenu_EntryList // (Final|UbergraphFunction) // @ game+0x201e6d4
};

