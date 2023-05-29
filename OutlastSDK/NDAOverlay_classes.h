// WidgetBlueprintGeneratedClass NDAOverlay.NDAOverlay_C
// Size: 0x2e0 (Inherited: 0x2a8)
struct UNDAOverlay_C : URBNDAOverlayWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a8(0x08)
	struct UVerticalBox* Box2; // 0x2b0(0x08)
	struct UTextBlock* PingText; // 0x2b8(0x08)
	struct UTextBlock* RegionNameText; // 0x2c0(0x08)
	struct FText Text; // 0x2c8(0x18)

	void UpdateRegionAndPing(); // Function NDAOverlay.NDAOverlay_C.UpdateRegionAndPing // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function NDAOverlay.NDAOverlay_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function NDAOverlay.NDAOverlay_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_Setup(); // Function NDAOverlay.NDAOverlay_C.Event_Setup // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_NDAOverlay(int32_t EntryPoint); // Function NDAOverlay.NDAOverlay_C.ExecuteUbergraph_NDAOverlay // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

