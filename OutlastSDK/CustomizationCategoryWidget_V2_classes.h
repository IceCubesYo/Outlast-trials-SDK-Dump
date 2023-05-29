// WidgetBlueprintGeneratedClass CustomizationCategoryWidget_V2.CustomizationCategoryWidget_V2_C
// Size: 0x28c (Inherited: 0x260)
struct UCustomizationCategoryWidget_V2_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UCategoryButtonWidget_C* CategoryButtonWidget; // 0x268(0x08)
	enum class ECustomizationMenuCategory customizationCategory; // 0x270(0x01)
	char pad_271[0x7]; // 0x271(0x07)
	struct FMulticastInlineDelegate Event_OnClicked; // 0x278(0x10)
	enum class ECategoryButtonState State; // 0x288(0x01)
	bool isCustomizingFemale; // 0x289(0x01)
	enum class EMetaNPCType ShopType; // 0x28a(0x01)
	bool isSelected; // 0x28b(0x01)

	struct UWidget* GetToolTipWidget_1(); // Function CustomizationCategoryWidget_V2.CustomizationCategoryWidget_V2_C.GetToolTipWidget_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	void UpdateNewStatus(); // Function CustomizationCategoryWidget_V2.CustomizationCategoryWidget_V2_C.UpdateNewStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetSelected(bool isSelected); // Function CustomizationCategoryWidget_V2.CustomizationCategoryWidget_V2_C.SetSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function CustomizationCategoryWidget_V2.CustomizationCategoryWidget_V2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_0_Event_OnClicked__DelegateSignature(); // Function CustomizationCategoryWidget_V2.CustomizationCategoryWidget_V2_C.BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_0_Event_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void OnButtonHovered(); // Function CustomizationCategoryWidget_V2.CustomizationCategoryWidget_V2_C.OnButtonHovered // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnButtonUnhovered(); // Function CustomizationCategoryWidget_V2.CustomizationCategoryWidget_V2_C.OnButtonUnhovered // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_CustomizationCategoryWidget_V2(int32_t EntryPoint); // Function CustomizationCategoryWidget_V2.CustomizationCategoryWidget_V2_C.ExecuteUbergraph_CustomizationCategoryWidget_V2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
	void Event_OnClicked__DelegateSignature(struct UCustomizationCategoryWidget_V2_C* buttonClicked); // Function CustomizationCategoryWidget_V2.CustomizationCategoryWidget_V2_C.Event_OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

