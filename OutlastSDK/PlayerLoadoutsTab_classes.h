// WidgetBlueprintGeneratedClass PlayerLoadoutsTab.PlayerLoadoutsTab_C
// Size: 0x308 (Inherited: 0x280)
struct UPlayerLoadoutsTab_C : URBCharacterSheetMenuTabWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UImage* BottomBorder; // 0x288(0x08)
	struct UCoreUpgradeList_C* CoreUpgradeList; // 0x290(0x08)
	struct UCoreUpgradeTierList_C* CoreUpgradeTierList; // 0x298(0x08)
	struct ULoadoutRecap_C* LoadoutRecap; // 0x2a0(0x08)
	struct UImage* MainBackground; // 0x2a8(0x08)
	struct UPerkList_C* PerkList; // 0x2b0(0x08)
	struct UPlayerLoadoutHoverInfo_C* PlayerLoadoutHoverInfo; // 0x2b8(0x08)
	struct URigList_C* RigList; // 0x2c0(0x08)
	struct URigUpgradeList_C* RigUpgradeList; // 0x2c8(0x08)
	struct UImage* TopBorder; // 0x2d0(0x08)
	enum class ELoadoutElementType CurrentCategory; // 0x2d8(0x01)
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct TArray<struct UUserWidget*> actionButtons; // 0x2e0(0x10)
	struct FMulticastInlineDelegate EventRequestTutorial; // 0x2f0(0x10)
	enum class EActiveSkillType SelectedActiveSkillType; // 0x300(0x01)
	char pad_301[0x3]; // 0x301(0x03)
	int32_t SelectedCoreUpgradeTier; // 0x304(0x04)

	void SetCategoryFocus(); // Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.SetCategoryFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnMenuRightClick(); // Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.OnMenuRightClick // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Refresh(); // Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	struct FText GetPageSubtitle(); // Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.GetPageSubtitle // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x201e6d4
	bool ShouldShowNavigation(); // Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.ShouldShowNavigation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x201e6d4
	struct FText GetPageTitle(); // Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.GetPageTitle // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x201e6d4
	bool IsReadyToClose(); // Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.IsReadyToClose // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	void GetPageSpecificButtons(struct TArray<struct UUserWidget*>& outButtons); // Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.GetPageSpecificButtons // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SaveLoadout(); // Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.SaveLoadout // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ChangeCategory(enum class ELoadoutElementType Category); // Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.ChangeCategory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnParentPopped(); // Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.Event_OnParentPopped // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__PlayerLoadoutsTab_RigList_K2Node_ComponentBoundEvent_1_OnRigClicked__DelegateSignature(struct FName ItemId, enum class EActiveSkillType ActiveSkillType); // Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.BndEvt__PlayerLoadoutsTab_RigList_K2Node_ComponentBoundEvent_1_OnRigClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void OnBackRequested(); // Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.OnBackRequested // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__PlayerLoadoutsTab_CoreUpgradeTierList_K2Node_ComponentBoundEvent_2_OnTierClicked__DelegateSignature(int32_t tier); // Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.BndEvt__PlayerLoadoutsTab_CoreUpgradeTierList_K2Node_ComponentBoundEvent_2_OnTierClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__PlayerLoadoutsTab_LoadoutRecap_K2Node_ComponentBoundEvent_0_OnRigButtonClicked__DelegateSignature(); // Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.BndEvt__PlayerLoadoutsTab_LoadoutRecap_K2Node_ComponentBoundEvent_0_OnRigButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__PlayerLoadoutsTab_LoadoutRecap_K2Node_ComponentBoundEvent_3_OnPerkSlotsButtonClicked__DelegateSignature(); // Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.BndEvt__PlayerLoadoutsTab_LoadoutRecap_K2Node_ComponentBoundEvent_3_OnPerkSlotsButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__PlayerLoadoutsTab_PerkList_K2Node_ComponentBoundEvent_4_OnUpgradeClicked__DelegateSignature(struct FName ItemId); // Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.BndEvt__PlayerLoadoutsTab_PerkList_K2Node_ComponentBoundEvent_4_OnUpgradeClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__PlayerLoadoutsTab_LoadoutRecap_K2Node_ComponentBoundEvent_5_OnCoreUpgradesButtonClicked__DelegateSignature(); // Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.BndEvt__PlayerLoadoutsTab_LoadoutRecap_K2Node_ComponentBoundEvent_5_OnCoreUpgradesButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__PlayerLoadoutsTab_RigList_K2Node_ComponentBoundEvent_6_OnRigHovered__DelegateSignature(struct FName ItemId, enum class EActiveSkillType ActiveSkillType); // Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.BndEvt__PlayerLoadoutsTab_RigList_K2Node_ComponentBoundEvent_6_OnRigHovered__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void Event_OnTabUnselected(); // Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.Event_OnTabUnselected // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_PlayerLoadoutsTab(int32_t EntryPoint); // Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.ExecuteUbergraph_PlayerLoadoutsTab // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
	void EventRequestTutorial__DelegateSignature(); // Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.EventRequestTutorial__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

