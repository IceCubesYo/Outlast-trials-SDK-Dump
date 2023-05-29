// WidgetBlueprintGeneratedClass MainObjectivesContainer.MainObjectivesContainer_C
// Size: 0x322 (Inherited: 0x2e8)
struct UMainObjectivesContainer_C : URBHUDElementWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UWidgetAnimation* Show; // 0x2f0(0x08)
	struct UInvalidationBox* InvalidationBox_MainObjectivesContainer; // 0x2f8(0x08)
	struct UMainObjectiveWidget_C* MainObjectiveWidget; // 0x300(0x08)
	struct UMainObjectiveWidget_C* MainObjectiveWidget_178; // 0x308(0x08)
	struct UMainObjectiveWidget_C* MainObjectiveWidget_251; // 0x310(0x08)
	struct UVerticalBox* VerticalBox_21; // 0x318(0x08)
	bool IsCurrentObjectiveVisible; // 0x320(0x01)
	bool bPauseMenu; // 0x321(0x01)

	void RefreshObjectivesTexts(); // Function MainObjectivesContainer.MainObjectivesContainer_C.RefreshObjectivesTexts // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	bool ShouldShow(); // Function MainObjectivesContainer.MainObjectivesContainer_C.ShouldShow // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x201e6d4
	void MainObjectivesContainer_AutoGenFunc(bool IsVisible); // Function MainObjectivesContainer.MainObjectivesContainer_C.MainObjectivesContainer_AutoGenFunc // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Add Objective(struct ARBBaseObjectiveCoordinator* coordinator); // Function MainObjectivesContainer.MainObjectivesContainer_C.Add Objective // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function MainObjectivesContainer.MainObjectivesContainer_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_Show(); // Function MainObjectivesContainer.MainObjectivesContainer_C.Event_Show // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_Hide(); // Function MainObjectivesContainer.MainObjectivesContainer_C.Event_Hide // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_MainObjectivesContainer(int32_t EntryPoint); // Function MainObjectivesContainer.MainObjectivesContainer_C.ExecuteUbergraph_MainObjectivesContainer // (Final|UbergraphFunction) // @ game+0x201e6d4
};

