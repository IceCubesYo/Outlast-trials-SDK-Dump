// WidgetBlueprintGeneratedClass Document.Document_C
// Size: 0x370 (Inherited: 0x308)
struct UDocument_C : URBMenuWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct UImage* Background; // 0x310(0x08)
	struct UImage* BottomLine; // 0x318(0x08)
	struct UTextBlock* CategoryText; // 0x320(0x08)
	struct UTextBlock* ContentText; // 0x328(0x08)
	struct UTextBlock* DateText; // 0x330(0x08)
	struct UImage* DocumentImage; // 0x338(0x08)
	struct URBMenuButton_C* ExitButton; // 0x340(0x08)
	struct UScaleBox* ImageScaleBox; // 0x348(0x08)
	struct USizeBox* ImageSizeBox; // 0x350(0x08)
	struct URichTextBlock* TitleText; // 0x358(0x08)
	struct UImage* TopLine; // 0x360(0x08)
	struct UVerticalBox* VerticalBox_2; // 0x368(0x08)

	void Setup(struct FRBCollectibleDocumentDefinitionRow Document); // Function Document.Document_C.Setup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__Document_ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct URBMenuButton_C* Button); // Function Document.Document_C.BndEvt__Document_ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_Document(int32_t EntryPoint); // Function Document.Document_C.ExecuteUbergraph_Document // (Final|UbergraphFunction) // @ game+0x201e6d4
};

