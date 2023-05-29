// WidgetBlueprintGeneratedClass TrialBoardOverheadWidget.TrialBoardOverheadWidget_C
// Size: 0x4a0 (Inherited: 0x460)
struct UTrialBoardOverheadWidget_C : URBSocialMenuEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x460(0x08)
	struct UActiveSkillButton_C* ActiveSkillButton; // 0x468(0x08)
	struct UTextBlock* Name_2; // 0x470(0x08)
	struct UImage* PartyLeaderIcon; // 0x478(0x08)
	struct UBorder* PlayerLevelBorderBox; // 0x480(0x08)
	struct USizeBox* PlayerLevelSizeBox; // 0x488(0x08)
	struct UTextBlock* PlayerLevelText; // 0x490(0x08)
	struct UVoiceChatOverheadWidget_C* VoiceChatOverheadWidget; // 0x498(0x08)

	void SetupPlayerLevel(); // Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.SetupPlayerLevel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetupPartyLeaderIcon(); // Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.SetupPartyLeaderIcon // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetupActiveSkill(); // Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.SetupActiveSkill // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetName(); // Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.SetName // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_Refresh(); // Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.Event_Refresh // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__TrialBoardOverheadWidget_ActiveSkillButton_K2Node_ComponentBoundEvent_0_OnClickedEvent__DelegateSignature(struct UActiveSkillButton_C* Button); // Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.BndEvt__TrialBoardOverheadWidget_ActiveSkillButton_K2Node_ComponentBoundEvent_0_OnClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_TrialBoardOverheadWidget(int32_t EntryPoint); // Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.ExecuteUbergraph_TrialBoardOverheadWidget // (Final|UbergraphFunction) // @ game+0x201e6d4
};

