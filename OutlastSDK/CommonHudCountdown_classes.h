// WidgetBlueprintGeneratedClass CommonHudCountdown.CommonHudCountdown_C
// Size: 0x2b0 (Inherited: 0x268)
struct UCommonHudCountdown_C : URBUserWidget {
	struct UWidgetAnimation* ShowPoints; // 0x268(0x08)
	struct UWidgetAnimation* AddPoints; // 0x270(0x08)
	struct UImage* Background; // 0x278(0x08)
	struct UOverlay* CountdownOverlay; // 0x280(0x08)
	struct UTextBlock* countdownText; // 0x288(0x08)
	struct UInvalidationBox* InvalidationBox_CommonHudCountdown; // 0x290(0x08)
	struct UScaleBox* LoadingVideoContainer; // 0x298(0x08)
	struct ULoadingVideoWidget_C* LoadingVideoWidget; // 0x2a0(0x08)
	struct UTextBlock* Message; // 0x2a8(0x08)

	void ShowSpinner(bool bShow); // Function CommonHudCountdown.CommonHudCountdown_C.ShowSpinner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetIsRightAligned(bool isRightAligned); // Function CommonHudCountdown.CommonHudCountdown_C.SetIsRightAligned // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ShowCountdownText(bool Show); // Function CommonHudCountdown.CommonHudCountdown_C.ShowCountdownText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetCountdownValueInSeconds(float Seconds); // Function CommonHudCountdown.CommonHudCountdown_C.SetCountdownValueInSeconds // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetMessage(struct FText Text); // Function CommonHudCountdown.CommonHudCountdown_C.SetMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

