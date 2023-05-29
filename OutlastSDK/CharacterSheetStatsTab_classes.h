// WidgetBlueprintGeneratedClass CharacterSheetStatsTab.CharacterSheetStatsTab_C
// Size: 0x410 (Inherited: 0x2a8)
struct UCharacterSheetStatsTab_C : URBPlayerStatsTabWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a8(0x08)
	struct UVerticalBox* BadgeDescriptionContainer; // 0x2b0(0x08)
	struct UTextBlock* BadgeDescriptionText; // 0x2b8(0x08)
	struct UUniformGridPanel* BadgeGrid; // 0x2c0(0x08)
	struct UTextBlock* BadgeNameText; // 0x2c8(0x08)
	struct UTextBlock* BadgePageCounterText; // 0x2d0(0x08)
	struct UTextBlock* BadgeProgressText; // 0x2d8(0x08)
	struct UBadgeSashEntry_C* BadgeSashEntry_2; // 0x2e0(0x08)
	struct UBadgeSashEntry_C* BadgeSashEntry_3; // 0x2e8(0x08)
	struct UBadgeSashEntry_C* BadgeSashEntry_4; // 0x2f0(0x08)
	struct UBadgeSashEntry_C* BadgeSashEntry_5; // 0x2f8(0x08)
	struct UBadgeSashEntry_C* BadgeSashEntry_6; // 0x300(0x08)
	struct UBadgeSashEntry_C* BadgeSashEntry_7; // 0x308(0x08)
	struct UBadgeSashEntry_C* BadgeSashEntry_8; // 0x310(0x08)
	struct UBadgeSashEntry_C* BadgeSashEntry_9; // 0x318(0x08)
	struct UBadgeSashEntry_C* BadgeSashEntry_10; // 0x320(0x08)
	struct UImage* BottomBorder; // 0x328(0x08)
	struct URBMenuButton_C* GamepadLeftPageButton; // 0x330(0x08)
	struct USizeBox* GamepadPageNav; // 0x338(0x08)
	struct URBMenuButton_C* GamepadRightPageButton; // 0x340(0x08)
	struct UImage* Image_3; // 0x348(0x08)
	struct UImage* Image_4; // 0x350(0x08)
	struct UImage* Image_5; // 0x358(0x08)
	struct ULevelIndicatorWidget_C* LevelIndicatorWidget; // 0x360(0x08)
	struct UImage* MainBackground; // 0x368(0x08)
	struct UVerticalBox* NextLevelRewardBox; // 0x370(0x08)
	struct UHorizontalBox* NextLevelRewardList; // 0x378(0x08)
	struct UNextLevelRewardWidget_C* NextLevelRewardWidget; // 0x380(0x08)
	struct UNextLevelRewardWidget_C* NextLevelRewardWidget_125; // 0x388(0x08)
	struct UButton* NextPageButton_2; // 0x390(0x08)
	struct UTextBlock* PageNavText; // 0x398(0x08)
	struct UHorizontalBox* PCPageNav; // 0x3a0(0x08)
	struct UPlayerStatEntry_C* PlayerStatEntry; // 0x3a8(0x08)
	struct UPlayerStatEntry_C* PlayerStatEntry_2; // 0x3b0(0x08)
	struct UPlayerStatEntry_C* PlayerStatEntry_3; // 0x3b8(0x08)
	struct UPlayerStatEntry_C* PlayerStatEntry_4; // 0x3c0(0x08)
	struct UButton* PreviousPageButton_2; // 0x3c8(0x08)
	struct UTextBlock* RequiredXpText; // 0x3d0(0x08)
	struct UHorizontalBox* StatList; // 0x3d8(0x08)
	struct UImage* TopBorder; // 0x3e0(0x08)
	struct UXPProgressBar_C* XPProgressBar; // 0x3e8(0x08)
	int32_t CurrentPageIndex; // 0x3f0(0x04)
	int32_t NumPages; // 0x3f4(0x04)
	struct TArray<enum class EPlayerStat> DisplayedStats; // 0x3f8(0x10)
	struct FName CurrentBadgeId; // 0x408(0x08)

	void SetPage(int32_t NewPageIndex); // Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.SetPage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void NextPage(); // Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.NextPage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreviousPage(); // Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.PreviousPage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateGamepadPageNav(); // Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.UpdateGamepadPageNav // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnBadgeUnhovered(struct FRBPlayerBadgeRow badgeSettings); // Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.OnBadgeUnhovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnBadgeHovered(struct FRBPlayerBadgeRow badgeSettings); // Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.OnBadgeHovered // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	struct FText GetPageTitle(); // Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.GetPageTitle // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x201e6d4
	void Refresh(); // Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void RefreshLevel(); // Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.RefreshLevel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void RefreshBadgePages(); // Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.RefreshBadgePages // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void RefreshBadges(); // Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.RefreshBadges // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void RefreshStats(); // Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.RefreshStats // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_Refresh(); // Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.Event_Refresh // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__PreviousPageButton_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.BndEvt__PreviousPageButton_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__NextPageButton_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.BndEvt__NextPageButton_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OnMenuInputSourceChanged(); // Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.OnMenuInputSourceChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Destruct(); // Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OnGamepadPageLeft(); // Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.OnGamepadPageLeft // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnGamepadPageRight(); // Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.OnGamepadPageRight // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnTabSelected(); // Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.Event_OnTabSelected // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnTabUnselected(); // Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.Event_OnTabUnselected // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_CharacterSheetStatsTab(int32_t EntryPoint); // Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.ExecuteUbergraph_CharacterSheetStatsTab // (Final|UbergraphFunction) // @ game+0x201e6d4
};

