// WidgetBlueprintGeneratedClass LocalPlayerCurrencyHorizontal.LocalPlayerCurrencyHorizontal_C
// Size: 0x29b (Inherited: 0x260)
struct ULocalPlayerCurrencyHorizontal_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* PreShopAnim; // 0x268(0x08)
	struct UImage* Icon; // 0x270(0x08)
	struct UImage* Image_121; // 0x278(0x08)
	struct UTextBlock* NewValue; // 0x280(0x08)
	struct UImage* Stamp; // 0x288(0x08)
	struct UTextBlock* Value; // 0x290(0x08)
	enum class ECurrencyType currencyType; // 0x298(0x01)
	bool showPickedUpCurrency; // 0x299(0x01)
	bool IsPreviewing; // 0x29a(0x01)

	void StopPreviewing(); // Function LocalPlayerCurrencyHorizontal.LocalPlayerCurrencyHorizontal_C.StopPreviewing // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreviewCost(int32_t Cost); // Function LocalPlayerCurrencyHorizontal.LocalPlayerCurrencyHorizontal_C.PreviewCost // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	struct UWidget* Get_icon_ToolTipWidget_1(); // Function LocalPlayerCurrencyHorizontal.LocalPlayerCurrencyHorizontal_C.Get_icon_ToolTipWidget_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	void SetColor(struct FLinearColor Color); // Function LocalPlayerCurrencyHorizontal.LocalPlayerCurrencyHorizontal_C.SetColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void RefreshIcon(); // Function LocalPlayerCurrencyHorizontal.LocalPlayerCurrencyHorizontal_C.RefreshIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetCurrencyType(enum class ECurrencyType Type); // Function LocalPlayerCurrencyHorizontal.LocalPlayerCurrencyHorizontal_C.SetCurrencyType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void RefreshValue(); // Function LocalPlayerCurrencyHorizontal.LocalPlayerCurrencyHorizontal_C.RefreshValue // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function LocalPlayerCurrencyHorizontal.LocalPlayerCurrencyHorizontal_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function LocalPlayerCurrencyHorizontal.LocalPlayerCurrencyHorizontal_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OnCurrenciesChanged_Event_1(); // Function LocalPlayerCurrencyHorizontal.LocalPlayerCurrencyHorizontal_C.OnCurrenciesChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_LocalPlayerCurrencyHorizontal(int32_t EntryPoint); // Function LocalPlayerCurrencyHorizontal.LocalPlayerCurrencyHorizontal_C.ExecuteUbergraph_LocalPlayerCurrencyHorizontal // (Final|UbergraphFunction) // @ game+0x201e6d4
};

