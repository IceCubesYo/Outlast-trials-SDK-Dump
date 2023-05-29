// WidgetBlueprintGeneratedClass CompleteStamp.CompleteStamp_C
// Size: 0x280 (Inherited: 0x260)
struct UCompleteStamp_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Stamp; // 0x268(0x08)
	struct UImage* Border; // 0x270(0x08)
	struct UTextBlock* Text; // 0x278(0x08)

	void PlayStampAnim(); // Function CompleteStamp.CompleteStamp_C.PlayStampAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_CompleteStamp(int32_t EntryPoint); // Function CompleteStamp.CompleteStamp_C.ExecuteUbergraph_CompleteStamp // (Final|UbergraphFunction) // @ game+0x201e6d4
};

