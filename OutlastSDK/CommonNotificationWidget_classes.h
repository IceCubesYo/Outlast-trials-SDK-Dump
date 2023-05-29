// WidgetBlueprintGeneratedClass CommonNotificationWidget.CommonNotificationWidget_C
// Size: 0x368 (Inherited: 0x268)
struct UCommonNotificationWidget_C : URBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct URBMenuButton_C* AcceptButton; // 0x270(0x08)
	struct UImage* Background; // 0x278(0x08)
	struct UImage* barLimit; // 0x280(0x08)
	struct URBMenuButton_C* BlockButton; // 0x288(0x08)
	struct UImage* Border; // 0x290(0x08)
	struct UImage* BottomBorder; // 0x298(0x08)
	struct UVerticalBox* ContentVerticalBox; // 0x2a0(0x08)
	struct URBMenuButton_C* DeclineButton; // 0x2a8(0x08)
	struct UInvalidationBox* InvalidationBox_CommonNotificationWidget; // 0x2b0(0x08)
	struct UTextBlock* Message; // 0x2b8(0x08)
	struct UProgressBar* ProgressBar_26; // 0x2c0(0x08)
	float progressBarSize; // 0x2c8(0x04)
	bool bEnableAcceptButton; // 0x2cc(0x01)
	bool bEnableRefuseButton; // 0x2cd(0x01)
	bool bEnableBlockButton; // 0x2ce(0x01)
	char pad_2CF[0x1]; // 0x2cf(0x01)
	struct FText ModeText; // 0x2d0(0x18)
	bool bShowHeaderBackground; // 0x2e8(0x01)
	char pad_2E9[0x7]; // 0x2e9(0x07)
	struct FMulticastInlineDelegate OnAcceptedButtonClicked; // 0x2f0(0x10)
	struct FMulticastInlineDelegate OnDeclinedButtonClicked; // 0x300(0x10)
	struct FText AcceptButtonText; // 0x310(0x18)
	struct FText RefuseButtonText; // 0x328(0x18)
	struct FText BlockButtonText; // 0x340(0x18)
	struct FMulticastInlineDelegate OnBlockButtonClicked; // 0x358(0x10)

	void EnableBlockButton(bool bEnable); // Function CommonNotificationWidget.CommonNotificationWidget_C.EnableBlockButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetMessage(struct FText Message); // Function CommonNotificationWidget.CommonNotificationWidget_C.SetMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateProgress(float progress); // Function CommonNotificationWidget.CommonNotificationWidget_C.UpdateProgress // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function CommonNotificationWidget.CommonNotificationWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void InputSourceChanged(); // Function CommonNotificationWidget.CommonNotificationWidget_C.InputSourceChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__CommonNotificationWidget_AcceptButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(struct URBMenuButton_C* Button); // Function CommonNotificationWidget.CommonNotificationWidget_C.BndEvt__CommonNotificationWidget_AcceptButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__CommonNotificationWidget_DeclineButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(struct URBMenuButton_C* Button); // Function CommonNotificationWidget.CommonNotificationWidget_C.BndEvt__CommonNotificationWidget_DeclineButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__CommonNotificationWidget_BlockButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct URBMenuButton_C* Button); // Function CommonNotificationWidget.CommonNotificationWidget_C.BndEvt__CommonNotificationWidget_BlockButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_CommonNotificationWidget(int32_t EntryPoint); // Function CommonNotificationWidget.CommonNotificationWidget_C.ExecuteUbergraph_CommonNotificationWidget // (Final|UbergraphFunction) // @ game+0x201e6d4
	void OnBlockButtonClicked__DelegateSignature(); // Function CommonNotificationWidget.CommonNotificationWidget_C.OnBlockButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnDeclinedButtonClicked__DelegateSignature(); // Function CommonNotificationWidget.CommonNotificationWidget_C.OnDeclinedButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnAcceptedButtonClicked__DelegateSignature(); // Function CommonNotificationWidget.CommonNotificationWidget_C.OnAcceptedButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

