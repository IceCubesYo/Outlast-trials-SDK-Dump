// WidgetBlueprintGeneratedClass SimpleActionTooltip.SimpleActionTooltip_C
// Size: 0x298 (Inherited: 0x260)
struct USimpleActionTooltip_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct URBMenuButton_C* SimplePrompt; // 0x268(0x08)
	struct FString DesiredAction; // 0x270(0x10)
	struct FText DesiredText; // 0x280(0x18)

	void PreConstruct(bool IsDesignTime); // Function SimpleActionTooltip.SimpleActionTooltip_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function SimpleActionTooltip.SimpleActionTooltip_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_SimpleActionTooltip(int32_t EntryPoint); // Function SimpleActionTooltip.SimpleActionTooltip_C.ExecuteUbergraph_SimpleActionTooltip // (Final|UbergraphFunction) // @ game+0x201e6d4
};

