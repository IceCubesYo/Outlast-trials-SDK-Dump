// WidgetBlueprintGeneratedClass ControllerMappingEntry.ControllerMappingEntry_C
// Size: 0x2a1 (Inherited: 0x260)
struct UControllerMappingEntry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* Caption; // 0x268(0x08)
	struct UVerticalBox* CaptionBox; // 0x270(0x08)
	struct UImage* Icon; // 0x278(0x08)
	struct UTexture2D* IconTexture; // 0x280(0x08)
	struct FText CaptionText; // 0x288(0x18)
	bool leftFacing; // 0x2a0(0x01)

	void PreConstruct(bool IsDesignTime); // Function ControllerMappingEntry.ControllerMappingEntry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_ControllerMappingEntry(int32_t EntryPoint); // Function ControllerMappingEntry.ControllerMappingEntry_C.ExecuteUbergraph_ControllerMappingEntry // (Final|UbergraphFunction) // @ game+0x201e6d4
};

