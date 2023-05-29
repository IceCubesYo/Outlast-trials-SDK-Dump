// WidgetBlueprintGeneratedClass IntermediateObjectiveTextWidget.IntermediateObjectiveTextWidget_C
// Size: 0x271 (Inherited: 0x260)
struct UIntermediateObjectiveTextWidget_C : UUserWidget {
	struct UImage* ObjectiveStatusIcon; // 0x260(0x08)
	struct URichTextBlock* objectiveText; // 0x268(0x08)
	bool ObjectiveStatus; // 0x270(0x01)

	void UpdateStatusAndText(bool status, struct FText Text); // Function IntermediateObjectiveTextWidget.IntermediateObjectiveTextWidget_C.UpdateStatusAndText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

