// WidgetBlueprintGeneratedClass SelfDeadBodyIndicator.SelfDeadBodyIndicator_C
// Size: 0x370 (Inherited: 0x350)
struct USelfDeadBodyIndicator_C : URBHUDSelfDeadBodyIconWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x08)
	struct UWidgetAnimation* FadeIn; // 0x358(0x08)
	struct UImage* Image_43; // 0x360(0x08)
	struct UImage* Image_128; // 0x368(0x08)

	bool ShouldShow(); // Function SelfDeadBodyIndicator.SelfDeadBodyIndicator_C.ShouldShow // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x201e6d4
	void UpdateDisplay(); // Function SelfDeadBodyIndicator.SelfDeadBodyIndicator_C.UpdateDisplay // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_Hide(); // Function SelfDeadBodyIndicator.SelfDeadBodyIndicator_C.Event_Hide // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_SelfDeadBodyIndicator(int32_t EntryPoint); // Function SelfDeadBodyIndicator.SelfDeadBodyIndicator_C.ExecuteUbergraph_SelfDeadBodyIndicator // (Final|UbergraphFunction) // @ game+0x201e6d4
};

