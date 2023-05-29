// WidgetBlueprintGeneratedClass LoadingVideoWidget.LoadingVideoWidget_C
// Size: 0x2f4 (Inherited: 0x298)
struct ULoadingVideoWidget_C : URBMenuTransition {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UWidgetAnimation* HideAnim; // 0x2a0(0x08)
	struct UWidgetAnimation* ShowAnim; // 0x2a8(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x2b0(0x08)
	struct UScaleBox* ScaleBox_1; // 0x2b8(0x08)
	struct UImage* videoTransition; // 0x2c0(0x08)
	struct UMaterialInstanceDynamic* Material; // 0x2c8(0x08)
	float Fade; // 0x2d0(0x04)
	bool isClosing; // 0x2d4(0x01)
	char pad_2D5[0x3]; // 0x2d5(0x03)
	float CurrentFade; // 0x2d8(0x04)
	float TargetFade; // 0x2dc(0x04)
	bool isFading; // 0x2e0(0x01)
	char pad_2E1[0x3]; // 0x2e1(0x03)
	struct FLinearColor Color; // 0x2e4(0x10)

	void UpdateFade(float Value); // Function LoadingVideoWidget.LoadingVideoWidget_C.UpdateFade // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Hide(bool withAnim); // Function LoadingVideoWidget.LoadingVideoWidget_C.Hide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Show(); // Function LoadingVideoWidget.LoadingVideoWidget_C.Show // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function LoadingVideoWidget.LoadingVideoWidget_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Close(); // Function LoadingVideoWidget.LoadingVideoWidget_C.Close // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateSize(); // Function LoadingVideoWidget.LoadingVideoWidget_C.UpdateSize // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function LoadingVideoWidget.LoadingVideoWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function LoadingVideoWidget.LoadingVideoWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_LoadingVideoWidget(int32_t EntryPoint); // Function LoadingVideoWidget.LoadingVideoWidget_C.ExecuteUbergraph_LoadingVideoWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

