// WidgetBlueprintGeneratedClass Client_InGameMenu.Client_InGameMenu_C
// Size: 0x404 (Inherited: 0x328)
struct UClient_InGameMenu_C : URBInGameMenuWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UImage* Background_2; // 0x330(0x08)
	struct UImage* bg; // 0x338(0x08)
	struct UInGameMenuOptionWidget_C* DebugBtn; // 0x340(0x08)
	struct URBMenuButton_C* ExitButton; // 0x348(0x08)
	struct URBCharacterSheetTabMenuButton_C* GroupButtom; // 0x350(0x08)
	struct UHUDObjectives_C* HUDObjectives; // 0x358(0x08)
	struct UInGameMenuVariatorEntry_C* InGameMenuVariatorEntry; // 0x360(0x08)
	struct UInGameMenuVariatorEntry_C* InGameMenuVariatorEntry_2; // 0x368(0x08)
	struct UInGameMenuVariatorEntry_C* InGameMenuVariatorEntry_3; // 0x370(0x08)
	struct UInGameMenuVariatorEntry_C* InGameMenuVariatorEntry_4; // 0x378(0x08)
	struct UInGameMenuVariatorEntry_C* InGameMenuVariatorEntry_5; // 0x380(0x08)
	struct UActionIconWidget_C* leftTabButton; // 0x388(0x08)
	struct ULocalPlayerInfo_v2_C* LocalPlayerInfo_v2; // 0x390(0x08)
	struct UInvalidationBox* MenuContent; // 0x398(0x08)
	struct UMenuFocusActionButtonContainer_C* MenuFocusActionButtonContainer; // 0x3a0(0x08)
	struct UVerticalBox* MenuOptionsBox; // 0x3a8(0x08)
	struct UInGameMenuOptionWidget_C* OptionsBtn; // 0x3b0(0x08)
	struct UTextBlock* pagetitle; // 0x3b8(0x08)
	struct USocialMenu_PartyWidget_C* PartyWidget; // 0x3c0(0x08)
	struct UInGameMenuOptionWidget_C* QuitBtn; // 0x3c8(0x08)
	struct UInGameMenuOptionWidget_C* ResumeBtn; // 0x3d0(0x08)
	struct UInGameMenuOptionWidget_C* ReturnToLobbyBtn; // 0x3d8(0x08)
	struct UActionIconWidget_C* rightTabButton; // 0x3e0(0x08)
	struct URBCharacterSheetTabMenuButton_C* SystemButtom; // 0x3e8(0x08)
	struct UHorizontalBox* VariatorHBox; // 0x3f0(0x08)
	struct UWorkInProgressOverlay_C* WorkInProgressOverlay; // 0x3f8(0x08)
	int32_t SelectedTabIndex; // 0x400(0x04)

	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function Client_InGameMenu.Client_InGameMenu_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetupVariators(); // Function Client_InGameMenu.Client_InGameMenu_C.SetupVariators // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ShowGroup(); // Function Client_InGameMenu.Client_InGameMenu_C.ShowGroup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ShowSystem(); // Function Client_InGameMenu.Client_InGameMenu_C.ShowSystem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	bool GetQuitFacilityButtonsEnabled(); // Function Client_InGameMenu.Client_InGameMenu_C.GetQuitFacilityButtonsEnabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	bool GetReturnToLobbyBtnIsEnabled(); // Function Client_InGameMenu.Client_InGameMenu_C.GetReturnToLobbyBtnIsEnabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	enum class ESlateVisibility GetReturnToLobbyBtnVisibility(); // Function Client_InGameMenu.Client_InGameMenu_C.GetReturnToLobbyBtnVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	enum class ESlateVisibility GetDevOptionsBtnVisibility(); // Function Client_InGameMenu.Client_InGameMenu_C.GetDevOptionsBtnVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	void BndEvt__ResumeBtn_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(); // Function Client_InGameMenu.Client_InGameMenu_C.BndEvt__ResumeBtn_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__DebugBtn_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature(); // Function Client_InGameMenu.Client_InGameMenu_C.BndEvt__DebugBtn_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__QuitBtn_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature(); // Function Client_InGameMenu.Client_InGameMenu_C.BndEvt__QuitBtn_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__AudioOptionsBtn_1_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature(); // Function Client_InGameMenu.Client_InGameMenu_C.BndEvt__AudioOptionsBtn_1_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__OptionsBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function Client_InGameMenu.Client_InGameMenu_C.BndEvt__OptionsBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function Client_InGameMenu.Client_InGameMenu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__Client_InGameMenu_ExitButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(struct URBMenuButton_C* Button); // Function Client_InGameMenu.Client_InGameMenu_C.BndEvt__Client_InGameMenu_ExitButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function Client_InGameMenu.Client_InGameMenu_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Destruct(); // Function Client_InGameMenu.Client_InGameMenu_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__Client_InGameMenu_SystemButtom_K2Node_ComponentBoundEvent_0_OnMenuTabButtonClicked__DelegateSignature(struct URBMenuTabButton* Button); // Function Client_InGameMenu.Client_InGameMenu_C.BndEvt__Client_InGameMenu_SystemButtom_K2Node_ComponentBoundEvent_0_OnMenuTabButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__Client_InGameMenu_GroupButtom_K2Node_ComponentBoundEvent_3_OnMenuTabButtonClicked__DelegateSignature(struct URBMenuTabButton* Button); // Function Client_InGameMenu.Client_InGameMenu_C.BndEvt__Client_InGameMenu_GroupButtom_K2Node_ComponentBoundEvent_3_OnMenuTabButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void Event_OnPush(); // Function Client_InGameMenu.Client_InGameMenu_C.Event_OnPush // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_MenuTabLeft_Released(); // Function Client_InGameMenu.Client_InGameMenu_C.Event_MenuTabLeft_Released // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_MenuTabRight_Released(); // Function Client_InGameMenu.Client_InGameMenu_C.Event_MenuTabRight_Released // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnMenuSettingsModified(); // Function Client_InGameMenu.Client_InGameMenu_C.Event_OnMenuSettingsModified // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_Client_InGameMenu(int32_t EntryPoint); // Function Client_InGameMenu.Client_InGameMenu_C.ExecuteUbergraph_Client_InGameMenu // (Final|UbergraphFunction) // @ game+0x201e6d4
};

