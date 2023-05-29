// WidgetBlueprintGeneratedClass CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C
// Size: 0x510 (Inherited: 0x280)
struct UCharacterSheetDocumentsTab_C : URBDocumentsWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UImage* BottomBorder; // 0x288(0x08)
	struct UImage* BottomBorder_2; // 0x290(0x08)
	struct UVerticalBox* ContentLines; // 0x298(0x08)
	struct UDocumentButton_C* DocumentButton; // 0x2a0(0x08)
	struct UDocumentButton_C* DocumentButton_2; // 0x2a8(0x08)
	struct UDocumentButton_C* DocumentButton_3; // 0x2b0(0x08)
	struct UDocumentButton_C* DocumentButton_4; // 0x2b8(0x08)
	struct UDocumentButton_C* DocumentButton_5; // 0x2c0(0x08)
	struct UDocumentButton_C* DocumentButton_6; // 0x2c8(0x08)
	struct UDocumentButton_C* DocumentButton_7; // 0x2d0(0x08)
	struct UDocumentButton_C* DocumentButton_8; // 0x2d8(0x08)
	struct UDocumentGroupButton_C* DocumentGroupButton; // 0x2e0(0x08)
	struct UDocumentGroupButton_C* DocumentGroupButton_2; // 0x2e8(0x08)
	struct UDocumentGroupButton_C* DocumentGroupButton_3; // 0x2f0(0x08)
	struct UDocumentGroupButton_C* DocumentGroupButton_4; // 0x2f8(0x08)
	struct UDocumentGroupButton_C* DocumentGroupButton_5; // 0x300(0x08)
	struct UHorizontalBox* DocumentGroupsContainer; // 0x308(0x08)
	struct USizeBox* DocumentGroupsGamepadPageNav; // 0x310(0x08)
	struct UCanvasPanel* DocumentGroupsMainContainer; // 0x318(0x08)
	struct UCanvasPanel* DocumentPanel; // 0x320(0x08)
	struct UVerticalBox* DocumentsBox; // 0x328(0x08)
	struct USizeBox* DocumentsGamepadPageNav; // 0x330(0x08)
	struct UUniformGridPanel* DocumentsGrid; // 0x338(0x08)
	struct UButton* ExitDocumentButton; // 0x340(0x08)
	struct URBMenuButton_C* GamepadLeftPageButton; // 0x348(0x08)
	struct URBMenuButton_C* GamepadLeftPageButton_2; // 0x350(0x08)
	struct URBMenuButton_C* GamepadRightPageButton; // 0x358(0x08)
	struct URBMenuButton_C* GamepadRightPageButton_2; // 0x360(0x08)
	struct UUniformGridPanel* GroupsPanel; // 0x368(0x08)
	struct UImage* MainBackground; // 0x370(0x08)
	struct UButton* NextDocumentGroupPageButton; // 0x378(0x08)
	struct UButton* NextDocumentPageButton; // 0x380(0x08)
	struct UTextBlock* PageNavText; // 0x388(0x08)
	struct UTextBlock* PageNavText_2; // 0x390(0x08)
	struct UButton* PreviousDocumentGroupPageButton; // 0x398(0x08)
	struct UButton* PreviousDocumentPageButton; // 0x3a0(0x08)
	struct UImage* Separator; // 0x3a8(0x08)
	struct UTextBlock* StorylineDescription; // 0x3b0(0x08)
	struct URichTextBlock* StorylineTitle; // 0x3b8(0x08)
	struct UImage* TopBorder; // 0x3c0(0x08)
	struct UImage* TopBorder_2; // 0x3c8(0x08)
	struct FName ActiveDocumentGroupId; // 0x3d0(0x08)
	int32_t DocumentGroupPageIndex; // 0x3d8(0x04)
	int32_t DocumentPageIndex; // 0x3dc(0x04)
	int32_t DocumentPageCount; // 0x3e0(0x04)
	int32_t DocumentsDisplayedCount; // 0x3e4(0x04)
	struct FRBCollectibleDocumentDefinitionRow ActiveDocument; // 0x3e8(0xe8)
	struct FVector2D DragOffset; // 0x4d0(0x08)
	bool bDragging; // 0x4d8(0x01)
	char pad_4D9[0x3]; // 0x4d9(0x03)
	int32_t LastFocusedGroupIndex; // 0x4dc(0x04)
	int32_t DocumentGroupsPerPage; // 0x4e0(0x04)
	int32_t DocumentGroupMaxPageIndex; // 0x4e4(0x04)
	int32_t DocumentMaxPageIndex; // 0x4e8(0x04)
	char pad_4EC[0x4]; // 0x4ec(0x04)
	struct TArray<struct FRBCollectibleDocumentGroupRow> DocumentGroups; // 0x4f0(0x10)
	struct FMulticastInlineDelegate OnDocumentSeenEvent; // 0x500(0x10)

	void SetPage(int32_t NewPageIndex); // Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.SetPage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateGamepadPageNav(); // Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.UpdateGamepadPageNav // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void NextPage(); // Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.NextPage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreviousPage(); // Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.PreviousPage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void GetGroupIndexFromId(struct FName ID, int32_t& Index); // Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.GetGroupIndexFromId // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	struct UWidget* GamepadNav_HandleGridNavigation(enum class EUINavigation Navigation); // Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.GamepadNav_HandleGridNavigation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void HandleFocusTransmission(); // Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.HandleFocusTransmission // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	struct FText GetPageTitle(); // Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.GetPageTitle // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x201e6d4
	bool IsReadyToClose(); // Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.IsReadyToClose // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	void OnDocumentSeen(); // Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.OnDocumentSeen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnDocumentSelected(struct FRBCollectibleDocumentDefinitionRow Document); // Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.OnDocumentSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnDocumentGroupSelected(struct FName documentGroupId); // Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.OnDocumentGroupSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetupDocumentGroupDetails(); // Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.SetupDocumentGroupDetails // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetupDocuments(); // Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.SetupDocuments // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetupDocumentGroups(); // Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.SetupDocumentGroups // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Refresh(); // Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnBackRequested(); // Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.OnBackRequested // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__CharacterSheetDocumentsTab_NextPageButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.BndEvt__CharacterSheetDocumentsTab_NextPageButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__CharacterSheetDocumentsTab_PreviousPageButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.BndEvt__CharacterSheetDocumentsTab_PreviousPageButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__CharacterSheetDocumentsTab_ExitDocumentButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.BndEvt__CharacterSheetDocumentsTab_ExitDocumentButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void Event_OnTabUnselected(); // Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.Event_OnTabUnselected // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__CharacterSheetDocumentsTab_PreviousDocumentGroupPageButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.BndEvt__CharacterSheetDocumentsTab_PreviousDocumentGroupPageButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__CharacterSheetDocumentsTab_NextDocumentGroupPageButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.BndEvt__CharacterSheetDocumentsTab_NextDocumentGroupPageButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void OnMenuInputSourceChanged(); // Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.OnMenuInputSourceChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnGamepadPageLeft(); // Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.OnGamepadPageLeft // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnGamepadPageRight(); // Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.OnGamepadPageRight // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Destruct(); // Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnTabSelected(); // Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.Event_OnTabSelected // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_CharacterSheetDocumentsTab(int32_t EntryPoint); // Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.ExecuteUbergraph_CharacterSheetDocumentsTab // (Final|UbergraphFunction) // @ game+0x201e6d4
	void OnDocumentSeenEvent__DelegateSignature(); // Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.OnDocumentSeenEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

