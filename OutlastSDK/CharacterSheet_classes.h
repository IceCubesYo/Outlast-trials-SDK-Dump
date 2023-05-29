// WidgetBlueprintGeneratedClass CharacterSheet.CharacterSheet_C
// Size: 0x402 (Inherited: 0x348)
struct UCharacterSheet_C : URBMenuWithTabsWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct UHorizontalBox* actionButtonContainer; // 0x350(0x08)
	struct UCanvasPanel* CanvasPanel_2; // 0x358(0x08)
	struct UCharacterSheetDocumentsTab_C* CharacterSheetDocumentsTab; // 0x360(0x08)
	struct UCharacterSheetStatsTab_C* CharacterSheetStatsTab; // 0x368(0x08)
	struct UCharacterSheetTabs_C* CharacterSheetTabs; // 0x370(0x08)
	struct URBMenuButton_C* ExitButton; // 0x378(0x08)
	struct UImage* fullScreenFocusAnchor; // 0x380(0x08)
	struct UImage* fullScreenPopupAnchor; // 0x388(0x08)
	struct ULocalPlayerInfo_v2_C* LocalPlayerInfo; // 0x390(0x08)
	struct UMenuFocusActionButtonContainer_C* MenuFocusActionButtonContainer; // 0x398(0x08)
	struct UHorizontalBox* NavigationBox; // 0x3a0(0x08)
	struct UHorizontalBox* pageSpecificButtonContainer; // 0x3a8(0x08)
	struct UTextBlock* PageSubTitle; // 0x3b0(0x08)
	struct UTextBlock* PageSubTitleSeparator; // 0x3b8(0x08)
	struct UTextBlock* pagetitle; // 0x3c0(0x08)
	struct UPlayerLoadoutsTab_C* PlayerLoadoutsTab; // 0x3c8(0x08)
	struct UReplayMenuTutorialButton_C* ReplayMenuTutorialButton; // 0x3d0(0x08)
	struct URBMenuButton_C* SocialMenuButton; // 0x3d8(0x08)
	struct UWidgetSwitcher* TabSwitch; // 0x3e0(0x08)
	struct UImage* trialBoardFocusAnchor01; // 0x3e8(0x08)
	struct UImage* trialBoardPopupAnchor01; // 0x3f0(0x08)
	struct UTrialBoardTab_C* TrialBoardTab; // 0x3f8(0x08)
	bool canShowTutorial; // 0x400(0x01)
	bool bPendingTutorialRequest; // 0x401(0x01)

	void SetupNewDocumentsState(); // Function CharacterSheet.CharacterSheet_C.SetupNewDocumentsState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void TryShowStatsTutorial(bool& isShowingTutorial); // Function CharacterSheet.CharacterSheet_C.TryShowStatsTutorial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Refresh(); // Function CharacterSheet.CharacterSheet_C.Refresh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateTrialBoardTutorialAnchors(); // Function CharacterSheet.CharacterSheet_C.UpdateTrialBoardTutorialAnchors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void GetSelfOverheadPosition(float& Left, float& Top); // Function CharacterSheet.CharacterSheet_C.GetSelfOverheadPosition // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void TryShowTrialBoardTutorial(bool& isShowingTutorial); // Function CharacterSheet.CharacterSheet_C.TryShowTrialBoardTutorial // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void TryShowEvidenceTutorial(bool& isShowingTutorial); // Function CharacterSheet.CharacterSheet_C.TryShowEvidenceTutorial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void RefreshCurrentTab(); // Function CharacterSheet.CharacterSheet_C.RefreshCurrentTab // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ChangeActiveSkill(); // Function CharacterSheet.CharacterSheet_C.ChangeActiveSkill // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function CharacterSheet.CharacterSheet_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void TryShowLoadoutTutorial(bool& isShowingTutorial); // Function CharacterSheet.CharacterSheet_C.TryShowLoadoutTutorial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void TryStartNextMenuTutorial(); // Function CharacterSheet.CharacterSheet_C.TryStartNextMenuTutorial // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnMenuTabSwitched(int32_t previousIndex); // Function CharacterSheet.CharacterSheet_C.Event_OnMenuTabSwitched // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_UpdateNavigation(bool CanExitMenu); // Function CharacterSheet.CharacterSheet_C.Event_UpdateNavigation // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__ExitButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(struct URBMenuButton_C* Button); // Function CharacterSheet.CharacterSheet_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void Event_OnPush(); // Function CharacterSheet.CharacterSheet_C.Event_OnPush // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnMenuTutorialSeen(); // Function CharacterSheet.CharacterSheet_C.Event_OnMenuTutorialSeen // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void EventRequestTutorial_Event_1(); // Function CharacterSheet.CharacterSheet_C.EventRequestTutorial_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_StartTransitionOut(); // Function CharacterSheet.CharacterSheet_C.Event_StartTransitionOut // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__ReplayMenuTutorialButton_K2Node_ComponentBoundEvent_0_Event_OnClicked__DelegateSignature(); // Function CharacterSheet.CharacterSheet_C.BndEvt__ReplayMenuTutorialButton_K2Node_ComponentBoundEvent_0_Event_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function CharacterSheet.CharacterSheet_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnFocusMenu(); // Function CharacterSheet.CharacterSheet_C.Event_OnFocusMenu // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ShowSocialMenu(); // Function CharacterSheet.CharacterSheet_C.ShowSocialMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Destruct(); // Function CharacterSheet.CharacterSheet_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__CharacterSheet_SocialMenuButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(struct URBMenuButton_C* Button); // Function CharacterSheet.CharacterSheet_C.BndEvt__CharacterSheet_SocialMenuButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function CharacterSheet.CharacterSheet_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_MenuTabRight_Released(); // Function CharacterSheet.CharacterSheet_C.Event_MenuTabRight_Released // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_MenuTabLeft_Released(); // Function CharacterSheet.CharacterSheet_C.Event_MenuTabLeft_Released // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__CharacterSheet_CharacterSheetDocumentsTab_K2Node_ComponentBoundEvent_3_OnDocumentSeenEvent__DelegateSignature(); // Function CharacterSheet.CharacterSheet_C.BndEvt__CharacterSheet_CharacterSheetDocumentsTab_K2Node_ComponentBoundEvent_3_OnDocumentSeenEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_CharacterSheet(int32_t EntryPoint); // Function CharacterSheet.CharacterSheet_C.ExecuteUbergraph_CharacterSheet // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

