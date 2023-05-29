// WidgetBlueprintGeneratedClass PolicyDocumentMenuWidget.PolicyDocumentMenuWidget_C
// Size: 0x344 (Inherited: 0x318)
struct UPolicyDocumentMenuWidget_C : URBPolicyDocumentMenuWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct URBMenuButton_C* AcceptBtn; // 0x320(0x08)
	struct UTextBlock* ContentTextBlock; // 0x328(0x08)
	struct UScrollBox* DocumentScrollBox; // 0x330(0x08)
	bool bCanClose; // 0x338(0x01)
	char pad_339[0x3]; // 0x339(0x03)
	float BaseMultiplier; // 0x33c(0x04)
	float SpeedAccumulator; // 0x340(0x04)

	struct FEventReply OnAnalogValueChanged(struct FGeometry MyGeometry, struct FAnalogInputEvent InAnalogInputEvent); // Function PolicyDocumentMenuWidget.PolicyDocumentMenuWidget_C.OnAnalogValueChanged // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function PolicyDocumentMenuWidget.PolicyDocumentMenuWidget_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_Setup(struct FString Content); // Function PolicyDocumentMenuWidget.PolicyDocumentMenuWidget_C.Event_Setup // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__PolicyDocumentMenuWidget_AcceptBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct URBMenuButton_C* Button); // Function PolicyDocumentMenuWidget.PolicyDocumentMenuWidget_C.BndEvt__PolicyDocumentMenuWidget_AcceptBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function PolicyDocumentMenuWidget.PolicyDocumentMenuWidget_C.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnPush(); // Function PolicyDocumentMenuWidget.PolicyDocumentMenuWidget_C.Event_OnPush // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_MenuConfirm_Released(); // Function PolicyDocumentMenuWidget.PolicyDocumentMenuWidget_C.Event_MenuConfirm_Released // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_PolicyDocumentMenuWidget(int32_t EntryPoint); // Function PolicyDocumentMenuWidget.PolicyDocumentMenuWidget_C.ExecuteUbergraph_PolicyDocumentMenuWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

