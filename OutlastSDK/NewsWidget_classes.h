// WidgetBlueprintGeneratedClass NewsWidget.NewsWidget_C
// Size: 0x363 (Inherited: 0x2e0)
struct UNewsWidget_C : URBNewsWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UImage* Background; // 0x2e8(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x2f0(0x08)
	struct UButton* CTA; // 0x2f8(0x08)
	struct UTextBlock* Description; // 0x300(0x08)
	struct UVerticalBox* DescriptionVerticalBox; // 0x308(0x08)
	struct UHorizontalBox* dots; // 0x310(0x08)
	struct UImage* Image_152; // 0x318(0x08)
	struct UImage* NewsImage; // 0x320(0x08)
	struct UNewsWidgetDot_C* NewsWidgetDot; // 0x328(0x08)
	struct UNewsWidgetDot_C* NewsWidgetDot_2; // 0x330(0x08)
	struct UNewsWidgetDot_C* NewsWidgetDot_3; // 0x338(0x08)
	struct UTextBlock* Title; // 0x340(0x08)
	struct UVerticalBox* TitleVerticalBox; // 0x348(0x08)
	struct FMargin DotPadding; // 0x350(0x10)
	enum class EHorizontalAlignment DotsHorizontalAlignment; // 0x360(0x01)
	enum class EHorizontalAlignment TextHorizontalAlignment; // 0x361(0x01)
	enum class EVerticalAlignment TextVerticalAlignment; // 0x362(0x01)

	void UpdateDots(); // Function NewsWidget.NewsWidget_C.UpdateDots // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function NewsWidget.NewsWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_NextItem(); // Function NewsWidget.NewsWidget_C.Event_NextItem // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_Refresh(); // Function NewsWidget.NewsWidget_C.Event_Refresh // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__Button_69_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function NewsWidget.NewsWidget_C.BndEvt__Button_69_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function NewsWidget.NewsWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__NewsWidget_CTA_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function NewsWidget.NewsWidget_C.BndEvt__NewsWidget_CTA_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__NewsWidget_CTA_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function NewsWidget.NewsWidget_C.BndEvt__NewsWidget_CTA_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_NewsWidget(int32_t EntryPoint); // Function NewsWidget.NewsWidget_C.ExecuteUbergraph_NewsWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

