// WidgetBlueprintGeneratedClass MainObjectiveWidget.MainObjectiveWidget_C
// Size: 0x3d4 (Inherited: 0x322)
struct UMainObjectiveWidget_C : UObjectiveWidgetBase_C {
	char pad_322[0x6]; // 0x322(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* RemoveAnimation; // 0x330(0x08)
	struct UWidgetAnimation* FadeIn; // 0x338(0x08)
	struct UWidgetAnimation* completed; // 0x340(0x08)
	struct UImage* Checkmark; // 0x348(0x08)
	struct UProgressBar* CrossOut; // 0x350(0x08)
	struct UVerticalBox* IntermediateObjectivesContainer; // 0x358(0x08)
	struct UIntermediateObjectiveTextWidget_C* IntermediateObjectiveWidget; // 0x360(0x08)
	struct UIntermediateObjectiveTextWidget_C* IntermediateObjectiveWidget_99; // 0x368(0x08)
	struct UIntermediateObjectiveTextWidget_C* IntermediateObjectiveWidget_181; // 0x370(0x08)
	struct UInvalidationBox* InvalidationBox_MainObjectiveWidget; // 0x378(0x08)
	struct UImage* ObjectiveIcon; // 0x380(0x08)
	struct URichTextBlock* objectiveTextRich; // 0x388(0x08)
	struct UProgressBar* ProgressBar; // 0x390(0x08)
	struct UOverlay* ProgressBarContainer; // 0x398(0x08)
	struct UImage* progressGlow; // 0x3a0(0x08)
	struct USizeBox* progressSizeBox; // 0x3a8(0x08)
	bool isMakingPositiveProgress; // 0x3b0(0x01)
	char pad_3B1[0x3]; // 0x3b1(0x03)
	float progressBarWidth; // 0x3b4(0x04)
	float targetProgress; // 0x3b8(0x04)
	char pad_3BC[0x4]; // 0x3bc(0x04)
	struct UMaterialInstanceDynamic* ObjectiveIconMaterial; // 0x3c0(0x08)
	struct FTimerHandle PositiveProgressTimerHandle; // 0x3c8(0x08)
	float LastPositiveProgressTimestamp; // 0x3d0(0x04)

	void UpdateIntermediateObjectives(); // Function MainObjectiveWidget.MainObjectiveWidget_C.UpdateIntermediateObjectives // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Initialize(struct ARBBaseObjectiveCoordinator* coordinator); // Function MainObjectiveWidget.MainObjectiveWidget_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetProgressRatio(float ratio); // Function MainObjectiveWidget.MainObjectiveWidget_C.SetProgressRatio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetIsMakingPositiveProgress(bool isMakingPositiveProgress); // Function MainObjectiveWidget.MainObjectiveWidget_C.SetIsMakingPositiveProgress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void GetFadeInAnimation(struct UWidgetAnimation*& FadeInAnimation); // Function MainObjectiveWidget.MainObjectiveWidget_C.GetFadeInAnimation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Finished_8A3EC16D4EBA343192A93F85CA6E35E3(); // Function MainObjectiveWidget.MainObjectiveWidget_C.Finished_8A3EC16D4EBA343192A93F85CA6E35E3 // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function MainObjectiveWidget.MainObjectiveWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function MainObjectiveWidget.MainObjectiveWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_IsMakingPositiveProgress(bool isMakingPositiveProgress); // Function MainObjectiveWidget.MainObjectiveWidget_C.Event_IsMakingPositiveProgress // (Event|Protected|BlueprintEvent) // @ game+0x201e6d4
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function MainObjectiveWidget.MainObjectiveWidget_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_Completed(); // Function MainObjectiveWidget.MainObjectiveWidget_C.Event_Completed // (Event|Protected|BlueprintEvent) // @ game+0x201e6d4
	void Event_ProgressChanged(float progress, bool isPositiveProgress, struct FText& objectiveText); // Function MainObjectiveWidget.MainObjectiveWidget_C.Event_ProgressChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_MainObjectiveWidget(int32_t EntryPoint); // Function MainObjectiveWidget.MainObjectiveWidget_C.ExecuteUbergraph_MainObjectiveWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

