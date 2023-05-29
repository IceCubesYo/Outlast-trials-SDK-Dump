// WidgetBlueprintGeneratedClass Disclaimer.Disclaimer_C
// Size: 0x320 (Inherited: 0x308)
struct UDisclaimer_C : URBMenuWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct UActionIconWidget_C* buttonPrompt; // 0x310(0x08)
	struct UButton* disclaimerBtn; // 0x318(0x08)

	void Event_MenuConfirm_Released(); // Function Disclaimer.Disclaimer_C.Event_MenuConfirm_Released // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__Disclaimer_disclaimerBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function Disclaimer.Disclaimer_C.BndEvt__Disclaimer_disclaimerBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void Event_OnPop(); // Function Disclaimer.Disclaimer_C.Event_OnPop // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_Disclaimer(int32_t EntryPoint); // Function Disclaimer.Disclaimer_C.ExecuteUbergraph_Disclaimer // (Final|UbergraphFunction) // @ game+0x201e6d4
};

