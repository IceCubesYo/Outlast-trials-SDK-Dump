// WidgetBlueprintGeneratedClass CustomizationColorPalette.CustomizationColorPalette_C
// Size: 0x2e8 (Inherited: 0x260)
struct UCustomizationColorPalette_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UColorPastille_C* ColorButton; // 0x268(0x08)
	struct UColorPastille_C* ColorButton_82; // 0x270(0x08)
	struct UColorPastille_C* ColorButton_159; // 0x278(0x08)
	struct UColorPastille_C* ColorButton_234; // 0x280(0x08)
	struct UColorPastille_C* ColorButton_302; // 0x288(0x08)
	struct UHorizontalBox* ColorContainer; // 0x290(0x08)
	struct FRBHairColorOption CurrentHairColor; // 0x298(0x28)
	struct FMulticastInlineDelegate OnHairColorClicked; // 0x2c0(0x10)
	struct FMulticastInlineDelegate OnHairColorHovered; // 0x2d0(0x10)
	struct UColorPastille_C* CurrentSelectedPastille; // 0x2e0(0x08)

	void GetPastilleFromColor(struct FRBHairColorOption HairColor, struct UColorPastille_C*& ColorPastille); // Function CustomizationColorPalette.CustomizationColorPalette_C.GetPastilleFromColor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	void Init(struct FName InitialHairColorId); // Function CustomizationColorPalette.CustomizationColorPalette_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateSelectedPastille(struct UColorPastille_C* NewSelectedPastille); // Function CustomizationColorPalette.CustomizationColorPalette_C.UpdateSelectedPastille // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void RefreshColorList(); // Function CustomizationColorPalette.CustomizationColorPalette_C.RefreshColorList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function CustomizationColorPalette.CustomizationColorPalette_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OnPastilleClicked(struct UColorPastille_C* ClickedPastille); // Function CustomizationColorPalette.CustomizationColorPalette_C.OnPastilleClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnPastilleUnHovered(); // Function CustomizationColorPalette.CustomizationColorPalette_C.OnPastilleUnHovered // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnPastilleHovered(struct FRBHairColorOption HoveredColor); // Function CustomizationColorPalette.CustomizationColorPalette_C.OnPastilleHovered // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_CustomizationColorPalette(int32_t EntryPoint); // Function CustomizationColorPalette.CustomizationColorPalette_C.ExecuteUbergraph_CustomizationColorPalette // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
	void OnHairColorHovered__DelegateSignature(struct FRBHairColorOption HoveredHairColor); // Function CustomizationColorPalette.CustomizationColorPalette_C.OnHairColorHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnHairColorClicked__DelegateSignature(struct FRBHairColorOption newHairColor); // Function CustomizationColorPalette.CustomizationColorPalette_C.OnHairColorClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

