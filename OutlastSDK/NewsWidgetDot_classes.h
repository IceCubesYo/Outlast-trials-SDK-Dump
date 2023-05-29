// WidgetBlueprintGeneratedClass NewsWidgetDot.NewsWidgetDot_C
// Size: 0x394 (Inherited: 0x260)
struct UNewsWidgetDot_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_71; // 0x268(0x08)
	struct UImage* State; // 0x270(0x08)
	struct FSlateBrush ActiveBrush; // 0x278(0x88)
	struct FSlateBrush InactiveBrush; // 0x300(0x88)
	struct UNewsWidget_C* Parent; // 0x388(0x08)
	int32_t Index; // 0x390(0x04)

	void SetIndex(int32_t Index); // Function NewsWidgetDot.NewsWidgetDot_C.SetIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetParent(struct UNewsWidget_C* Parent); // Function NewsWidgetDot.NewsWidgetDot_C.SetParent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetActive(bool bActive); // Function NewsWidgetDot.NewsWidgetDot_C.SetActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__Button_70_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function NewsWidgetDot.NewsWidgetDot_C.BndEvt__Button_70_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_NewsWidgetDot(int32_t EntryPoint); // Function NewsWidgetDot.NewsWidgetDot_C.ExecuteUbergraph_NewsWidgetDot // (Final|UbergraphFunction) // @ game+0x201e6d4
};

