// WidgetBlueprintGeneratedClass LoadoutRecap.LoadoutRecap_C
// Size: 0x2b0 (Inherited: 0x260)
struct ULoadoutRecap_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UCoreUpgradesButton_C* CoreUpgradesButton; // 0x268(0x08)
	struct UPerkSlotsButton_C* PerkSlotsButton; // 0x270(0x08)
	struct URigSlotButton_C* RigSlotButton; // 0x278(0x08)
	struct FMulticastInlineDelegate OnRigButtonClicked; // 0x280(0x10)
	struct FMulticastInlineDelegate OnPerkSlotsButtonClicked; // 0x290(0x10)
	struct FMulticastInlineDelegate OnCoreUpgradesButtonClicked; // 0x2a0(0x10)

	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function LoadoutRecap.LoadoutRecap_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Refresh(); // Function LoadoutRecap.LoadoutRecap_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Init(); // Function LoadoutRecap.LoadoutRecap_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__LoadoutRecap_RigSlotButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function LoadoutRecap.LoadoutRecap_C.BndEvt__LoadoutRecap_RigSlotButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__LoadoutRecap_PerkSlotsButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function LoadoutRecap.LoadoutRecap_C.BndEvt__LoadoutRecap_PerkSlotsButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__LoadoutRecap_CoreUpgradesButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(); // Function LoadoutRecap.LoadoutRecap_C.BndEvt__LoadoutRecap_CoreUpgradesButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_LoadoutRecap(int32_t EntryPoint); // Function LoadoutRecap.LoadoutRecap_C.ExecuteUbergraph_LoadoutRecap // (Final|UbergraphFunction) // @ game+0x201e6d4
	void OnCoreUpgradesButtonClicked__DelegateSignature(); // Function LoadoutRecap.LoadoutRecap_C.OnCoreUpgradesButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnPerkSlotsButtonClicked__DelegateSignature(); // Function LoadoutRecap.LoadoutRecap_C.OnPerkSlotsButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnRigButtonClicked__DelegateSignature(); // Function LoadoutRecap.LoadoutRecap_C.OnRigButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

