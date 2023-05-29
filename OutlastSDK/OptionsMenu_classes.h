// WidgetBlueprintGeneratedClass OptionsMenu.OptionsMenu_C
// Size: 0x418 (Inherited: 0x368)
struct UOptionsMenu_C : URBMenuOptions {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x368(0x08)
	struct UWidgetAnimation* FadeOut; // 0x370(0x08)
	struct URBMenuButton_C* ApplyChangeBtn; // 0x378(0x08)
	struct UImage* bg; // 0x380(0x08)
	struct UBackgroundBlur* Blur; // 0x388(0x08)
	struct UActionIconWidget_C* CycleTabLeftBtn; // 0x390(0x08)
	struct UActionIconWidget_C* CycleTabRightBtn; // 0x398(0x08)
	struct UOptionsTab_C* ExempleTab; // 0x3a0(0x08)
	struct URBMenuButton_C* ExitBtn; // 0x3a8(0x08)
	struct UWidgetSwitcher* Pages; // 0x3b0(0x08)
	struct URBOptionsTabMenuButton_C* RBOptionsTabMenuButton; // 0x3b8(0x08)
	struct URBOptionsTabMenuButton_C* RBOptionsTabMenuButton_137; // 0x3c0(0x08)
	struct URBOptionsTabMenuButton_C* RBOptionsTabMenuButton_249; // 0x3c8(0x08)
	struct URBOptionsTabMenuButton_C* RBOptionsTabMenuButton_378; // 0x3d0(0x08)
	struct URBOptionsTabMenuButton_C* RBOptionsTabMenuButton_537; // 0x3d8(0x08)
	struct URBMenuButton_C* ResetDefaultsBtn; // 0x3e0(0x08)
	struct UUniformGridPanel* TabButtonsContainer; // 0x3e8(0x08)
	bool ApplyChanges; // 0x3f0(0x01)
	char pad_3F1[0x7]; // 0x3f1(0x07)
	struct TArray<struct UOptionsTab_C*> Tabs; // 0x3f8(0x10)
	struct TArray<struct URBOptionsTabMenuButton_C*> TabsButtons; // 0x408(0x10)

	void CreateOptionEntry(struct UOptionsTab_C* OptionTab, struct FOptionData& OptionData, struct URBMenuOptionsEntry*& Entry Created); // Function OptionsMenu.OptionsMenu_C.CreateOptionEntry // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void CreateOptionTabs(); // Function OptionsMenu.OptionsMenu_C.CreateOptionTabs // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ConditionalShowApplyDialog(struct FText Prompt, bool& Return); // Function OptionsMenu.OptionsMenu_C.ConditionalShowApplyDialog // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	enum class ESlateVisibility Get_ApplyChangeBtn_Visibility_1(); // Function OptionsMenu.OptionsMenu_C.Get_ApplyChangeBtn_Visibility_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	bool PreNavigationChangeAction(); // Function OptionsMenu.OptionsMenu_C.PreNavigationChangeAction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_UpdateNavigation(bool CanExitMenu); // Function OptionsMenu.OptionsMenu_C.Event_UpdateNavigation // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnSubButtonClicked(struct URBMenuOptionsEntry* Entry); // Function OptionsMenu.OptionsMenu_C.OnSubButtonClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteChangesDecision(); // Function OptionsMenu.OptionsMenu_C.ExecuteChangesDecision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ApplyChangesToCurrentTab(); // Function OptionsMenu.OptionsMenu_C.ApplyChangesToCurrentTab // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Finished_B30461B244A64F1C78C486945F767F0A(); // Function OptionsMenu.OptionsMenu_C.Finished_B30461B244A64F1C78C486945F767F0A // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function OptionsMenu.OptionsMenu_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function OptionsMenu.OptionsMenu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__RBMenuButton_83_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct URBMenuButton_C* Button); // Function OptionsMenu.OptionsMenu_C.BndEvt__RBMenuButton_83_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__RBMenuButton_177_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(struct URBMenuButton_C* Button); // Function OptionsMenu.OptionsMenu_C.BndEvt__RBMenuButton_177_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__RBMenuButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(struct URBMenuButton_C* Button); // Function OptionsMenu.OptionsMenu_C.BndEvt__RBMenuButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void Event_StartTransitionIn(); // Function OptionsMenu.OptionsMenu_C.Event_StartTransitionIn // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_StartTransitionOut(); // Function OptionsMenu.OptionsMenu_C.Event_StartTransitionOut // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OnReleasedApply(); // Function OptionsMenu.OptionsMenu_C.OnReleasedApply // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnReleasedReset(); // Function OptionsMenu.OptionsMenu_C.OnReleasedReset // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnFullscreenOrDesktopSettingsChanged(); // Function OptionsMenu.OptionsMenu_C.OnFullscreenOrDesktopSettingsChanged // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnMenuTabSwitched(int32_t previousIndex); // Function OptionsMenu.OptionsMenu_C.Event_OnMenuTabSwitched // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_InputSourceChanged(bool bIsGamepad); // Function OptionsMenu.OptionsMenu_C.Event_InputSourceChanged // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_RefreshAllEntries(); // Function OptionsMenu.OptionsMenu_C.Event_RefreshAllEntries // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_OptionsMenu(int32_t EntryPoint); // Function OptionsMenu.OptionsMenu_C.ExecuteUbergraph_OptionsMenu // (Final|UbergraphFunction) // @ game+0x201e6d4
};

