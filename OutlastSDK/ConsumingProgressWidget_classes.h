// WidgetBlueprintGeneratedClass ConsumingProgressWidget.ConsumingProgressWidget_C
// Size: 0x31a (Inherited: 0x2e8)
struct UConsumingProgressWidget_C : URBHUDElementWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UInvalidationBox* InvalidationBox_ConsumingProgressWidget; // 0x2f0(0x08)
	struct UImage* progress; // 0x2f8(0x08)
	float progressRatio; // 0x300(0x04)
	char pad_304[0x4]; // 0x304(0x04)
	struct UMaterialInstanceDynamic* DynamicMaterial_Circle; // 0x308(0x08)
	struct UMaterialInstanceDynamic* DynamicMaterial_Status; // 0x310(0x08)
	enum class PlayerActionStatus CurrentStatus; // 0x318(0x01)
	bool bNeedVisibilityUpdate; // 0x319(0x01)

	void UpdateTextures(); // Function ConsumingProgressWidget.ConsumingProgressWidget_C.UpdateTextures // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	bool ShouldShow(); // Function ConsumingProgressWidget.ConsumingProgressWidget_C.ShouldShow // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x201e6d4
	void UpdateProgress(float progress); // Function ConsumingProgressWidget.ConsumingProgressWidget_C.UpdateProgress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function ConsumingProgressWidget.ConsumingProgressWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OnProgressChanged(float newProgress); // Function ConsumingProgressWidget.ConsumingProgressWidget_C.OnProgressChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_Hide(); // Function ConsumingProgressWidget.ConsumingProgressWidget_C.Event_Hide // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OnStatusChanged(enum class PlayerActionStatus status); // Function ConsumingProgressWidget.ConsumingProgressWidget_C.OnStatusChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_ConsumingProgressWidget(int32_t EntryPoint); // Function ConsumingProgressWidget.ConsumingProgressWidget_C.ExecuteUbergraph_ConsumingProgressWidget // (Final|UbergraphFunction) // @ game+0x201e6d4
};

