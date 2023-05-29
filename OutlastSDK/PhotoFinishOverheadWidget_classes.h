// WidgetBlueprintGeneratedClass PhotoFinishOverheadWidget.PhotoFinishOverheadWidget_C
// Size: 0x478 (Inherited: 0x460)
struct UPhotoFinishOverheadWidget_C : URBSocialMenuEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x460(0x08)
	struct UTextBlock* Name_2; // 0x468(0x08)
	struct UVoiceChatOverheadWidget_C* VoiceChatOverheadWidget; // 0x470(0x08)

	void SetName(); // Function PhotoFinishOverheadWidget.PhotoFinishOverheadWidget_C.SetName // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_Refresh(); // Function PhotoFinishOverheadWidget.PhotoFinishOverheadWidget_C.Event_Refresh // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_PhotoFinishOverheadWidget(int32_t EntryPoint); // Function PhotoFinishOverheadWidget.PhotoFinishOverheadWidget_C.ExecuteUbergraph_PhotoFinishOverheadWidget // (Final|UbergraphFunction) // @ game+0x201e6d4
};

