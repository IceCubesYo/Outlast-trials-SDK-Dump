// WidgetBlueprintGeneratedClass HUDObjectives.HUDObjectives_C
// Size: 0x321 (Inherited: 0x2e8)
struct UHUDObjectives_C : URBHUDElementWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UWidgetAnimation* HudWidgetFadeIn; // 0x2f0(0x08)
	struct UInvalidationBox* InvalidationBox_HUDObjectives; // 0x2f8(0x08)
	struct UMainObjectivesContainer_C* MainObjectivesContainer; // 0x300(0x08)
	struct USecondaryObjectiveWidget_C* SecondaryObjectiveWidget; // 0x308(0x08)
	struct USecondaryObjectiveWidget_C* SecondaryObjectiveWidget_336; // 0x310(0x08)
	struct UVerticalBox* SubobjectivesBox; // 0x318(0x08)
	bool bPauseMenu; // 0x320(0x01)

	void RefreshObjectivesTexts(); // Function HUDObjectives.HUDObjectives_C.RefreshObjectivesTexts // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnObjectiveEnded(); // Function HUDObjectives.HUDObjectives_C.OnObjectiveEnded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	bool ShouldShow(); // Function HUDObjectives.HUDObjectives_C.ShouldShow // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x201e6d4
	void CanDisplayObjective(struct ARBBaseObjectiveCoordinator* coordinator, bool& canDisplay); // Function HUDObjectives.HUDObjectives_C.CanDisplayObjective // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnObjectiveStarted(struct ARBBaseObjectiveCoordinator* coordinator); // Function HUDObjectives.HUDObjectives_C.OnObjectiveStarted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function HUDObjectives.HUDObjectives_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void StateChanged(struct ARBBaseObjectiveCoordinator* coordinator, enum class EObjectiveCoordinatorState State); // Function HUDObjectives.HUDObjectives_C.StateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function HUDObjectives.HUDObjectives_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OnRequestDisplayObjectiveHUD(); // Function HUDObjectives.HUDObjectives_C.OnRequestDisplayObjectiveHUD // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnCompletionInProgressChanged(bool isProgressionInProgress, bool isCompletedByLocalPlayer); // Function HUDObjectives.HUDObjectives_C.OnCompletionInProgressChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnProgressChanged(float progressRatio, bool isPositiveProgress, struct FText& objectiveText); // Function HUDObjectives.HUDObjectives_C.OnProgressChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnSingleObjectiveCompleted(struct ARBBaseObjectiveCoordinator* coordinator, struct AActor* Player, struct AActor* objective); // Function HUDObjectives.HUDObjectives_C.OnSingleObjectiveCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnSingleCompletedObjectiveReverted(struct ARBBaseObjectiveCoordinator* coordinator, struct AActor* objective); // Function HUDObjectives.HUDObjectives_C.OnSingleCompletedObjectiveReverted // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_Show(); // Function HUDObjectives.HUDObjectives_C.Event_Show // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_Hide(); // Function HUDObjectives.HUDObjectives_C.Event_Hide // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_HUDObjectives(int32_t EntryPoint); // Function HUDObjectives.HUDObjectives_C.ExecuteUbergraph_HUDObjectives // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

