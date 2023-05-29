// WidgetBlueprintGeneratedClass ObjectiveWidgetBase.ObjectiveWidgetBase_C
// Size: 0x322 (Inherited: 0x300)
struct UObjectiveWidgetBase_C : URBObjectiveWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	bool IsCompleted; // 0x308(0x01)
	char pad_309[0x7]; // 0x309(0x07)
	struct FMulticastInlineDelegate VisibilityEventDispatcher; // 0x310(0x10)
	bool hasContinuousProgress; // 0x320(0x01)
	bool bPauseMenu; // 0x321(0x01)

	bool ShouldShow(); // Function ObjectiveWidgetBase.ObjectiveWidgetBase_C.ShouldShow // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x201e6d4
	bool IsInValidStateForExtraInfo(); // Function ObjectiveWidgetBase.ObjectiveWidgetBase_C.IsInValidStateForExtraInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x201e6d4
	void ClearBindings(); // Function ObjectiveWidgetBase.ObjectiveWidgetBase_C.ClearBindings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void GetFadeInAnimation(struct UWidgetAnimation*& FadeInAnimation); // Function ObjectiveWidgetBase.ObjectiveWidgetBase_C.GetFadeInAnimation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateProgress(float progress, bool isPositiveProgress, struct FText objectiveText); // Function ObjectiveWidgetBase.ObjectiveWidgetBase_C.UpdateProgress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetCompleted(); // Function ObjectiveWidgetBase.ObjectiveWidgetBase_C.SetCompleted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Initialize(struct ARBBaseObjectiveCoordinator* coordinator); // Function ObjectiveWidgetBase.ObjectiveWidgetBase_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_Show(); // Function ObjectiveWidgetBase.ObjectiveWidgetBase_C.Event_Show // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_Hide(); // Function ObjectiveWidgetBase.ObjectiveWidgetBase_C.Event_Hide // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void CustomEvent_1(); // Function ObjectiveWidgetBase.ObjectiveWidgetBase_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_Completed(); // Function ObjectiveWidgetBase.ObjectiveWidgetBase_C.Event_Completed // (Event|Protected|BlueprintEvent) // @ game+0x201e6d4
	void Remove(); // Function ObjectiveWidgetBase.ObjectiveWidgetBase_C.Remove // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_ObjectiveWidgetBase(int32_t EntryPoint); // Function ObjectiveWidgetBase.ObjectiveWidgetBase_C.ExecuteUbergraph_ObjectiveWidgetBase // (Final|UbergraphFunction) // @ game+0x201e6d4
	void VisibilityEventDispatcher__DelegateSignature(bool IsVisible); // Function ObjectiveWidgetBase.ObjectiveWidgetBase_C.VisibilityEventDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

