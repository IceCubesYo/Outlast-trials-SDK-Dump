// WidgetBlueprintGeneratedClass SpectatorInfoHudWidget.SpectatorInfoHudWidget_C
// Size: 0x328 (Inherited: 0x2e8)
struct USpectatorInfoHudWidget_C : URBHUDSpectatorInfo {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UWidgetAnimation* FadeIn; // 0x2f0(0x08)
	struct UActionIconWidget_C* ActionIconWidget; // 0x2f8(0x08)
	struct UActionIconWidget_C* ActionIconWidget_154; // 0x300(0x08)
	struct UHorizontalBox* CyclePrompts; // 0x308(0x08)
	struct UInvalidationBox* InvalidationBox_SpectatorInfoHudWidget; // 0x310(0x08)
	struct UTextBlock* SpectatedPlayerName; // 0x318(0x08)
	struct UGroupStatusWidget_C* SpectatorSelfWidget; // 0x320(0x08)

	void Event_Show(); // Function SpectatorInfoHudWidget.SpectatorInfoHudWidget_C.Event_Show // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_Hide(); // Function SpectatorInfoHudWidget.SpectatorInfoHudWidget_C.Event_Hide // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function SpectatorInfoHudWidget.SpectatorInfoHudWidget_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnSpectatedPlayerChanged(struct ARBPlayer* newSpectatedlPlayer); // Function SpectatorInfoHudWidget.SpectatorInfoHudWidget_C.Event_OnSpectatedPlayerChanged // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function SpectatorInfoHudWidget.SpectatorInfoHudWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function SpectatorInfoHudWidget.SpectatorInfoHudWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_SpectatorInfoHudWidget(int32_t EntryPoint); // Function SpectatorInfoHudWidget.SpectatorInfoHudWidget_C.ExecuteUbergraph_SpectatorInfoHudWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

