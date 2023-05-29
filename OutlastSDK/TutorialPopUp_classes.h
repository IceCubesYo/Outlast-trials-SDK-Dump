// WidgetBlueprintGeneratedClass TutorialPopUp.TutorialPopUp_C
// Size: 0x290 (Inherited: 0x260)
struct UTutorialPopUp_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Background; // 0x268(0x08)
	struct URBMenuButton_C* RBMenuButton; // 0x270(0x08)
	struct URichTextBlock* Text; // 0x278(0x08)
	struct FMulticastInlineDelegate EventOnClicked; // 0x280(0x10)

	void Initialize(struct FText Text); // Function TutorialPopUp.TutorialPopUp_C.Initialize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function TutorialPopUp.TutorialPopUp_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__RBMenuButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct URBMenuButton_C* Button); // Function TutorialPopUp.TutorialPopUp_C.BndEvt__RBMenuButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_TutorialPopUp(int32_t EntryPoint); // Function TutorialPopUp.TutorialPopUp_C.ExecuteUbergraph_TutorialPopUp // (Final|UbergraphFunction) // @ game+0x201e6d4
	void EventOnClicked__DelegateSignature(); // Function TutorialPopUp.TutorialPopUp_C.EventOnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

