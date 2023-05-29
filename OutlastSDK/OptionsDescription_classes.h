// WidgetBlueprintGeneratedClass OptionsDescription.OptionsDescription_C
// Size: 0x290 (Inherited: 0x268)
struct UOptionsDescription_C : URBMenuOptionsDescription {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UImage* DescriptionImage; // 0x270(0x08)
	struct UScrollBox* DescriptionScrollBox; // 0x278(0x08)
	struct URichTextBlock* DescriptionText; // 0x280(0x08)
	struct UTextBlock* RestartText; // 0x288(0x08)

	void UpdateRestartRequired(struct FOptionData Data); // Function OptionsDescription.OptionsDescription_C.UpdateRestartRequired // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateDescription(struct FOptionData OptionData); // Function OptionsDescription.OptionsDescription_C.UpdateDescription // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function OptionsDescription.OptionsDescription_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_OptionsDescription(int32_t EntryPoint); // Function OptionsDescription.OptionsDescription_C.ExecuteUbergraph_OptionsDescription // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

