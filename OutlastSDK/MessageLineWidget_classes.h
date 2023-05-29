// WidgetBlueprintGeneratedClass MessageLineWidget.MessageLineWidget_C
// Size: 0x288 (Inherited: 0x268)
struct UMessageLineWidget_C : URBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UImage* Image_56; // 0x270(0x08)
	struct UInvalidationBox* InvalidationBox_MessageLineWidget; // 0x278(0x08)
	struct URichTextBlock* Message; // 0x280(0x08)

	void SetDefaultColor(struct FLinearColor DefaultColor); // Function MessageLineWidget.MessageLineWidget_C.SetDefaultColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetMessage(struct FText messageText); // Function MessageLineWidget.MessageLineWidget_C.SetMessage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SendTemporaryText(struct FText messageText); // Function MessageLineWidget.MessageLineWidget_C.SendTemporaryText // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_MessageLineWidget(int32_t EntryPoint); // Function MessageLineWidget.MessageLineWidget_C.ExecuteUbergraph_MessageLineWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

