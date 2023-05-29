// WidgetBlueprintGeneratedClass ActiveEffectEntryWidget.ActiveEffectEntryWidget_C
// Size: 0x29c (Inherited: 0x260)
struct UActiveEffectEntryWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* FadeOut; // 0x268(0x08)
	struct UHorizontalBox* Container; // 0x270(0x08)
	struct UTextBlock* EffectName; // 0x278(0x08)
	struct UImage* Icon; // 0x280(0x08)
	struct FName EffectId; // 0x288(0x08)
	float UntilServerTime; // 0x290(0x04)
	bool bFadeOutPlayed; // 0x294(0x01)
	char pad_295[0x3]; // 0x295(0x03)
	float DisplayValue; // 0x298(0x04)

	void UpdateText(); // Function ActiveEffectEntryWidget.ActiveEffectEntryWidget_C.UpdateText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Setup(struct FName EffectId, float UntilServerTime, float DisplayValue); // Function ActiveEffectEntryWidget.ActiveEffectEntryWidget_C.Setup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function ActiveEffectEntryWidget.ActiveEffectEntryWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function ActiveEffectEntryWidget.ActiveEffectEntryWidget_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_ActiveEffectEntryWidget(int32_t EntryPoint); // Function ActiveEffectEntryWidget.ActiveEffectEntryWidget_C.ExecuteUbergraph_ActiveEffectEntryWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

