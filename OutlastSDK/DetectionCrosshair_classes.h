// WidgetBlueprintGeneratedClass DetectionCrosshair.DetectionCrosshair_C
// Size: 0x399 (Inherited: 0x2e8)
struct UDetectionCrosshair_C : URBHUDElementWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UWidgetAnimation* CrosshairFadeIn; // 0x2f0(0x08)
	struct UWidgetAnimation* FadeIn; // 0x2f8(0x08)
	struct UImage* DarknessDetectionImage; // 0x300(0x08)
	struct UInvalidationBox* InvalidationBox_DetectionCrosshair; // 0x308(0x08)
	struct UImage* NPCAwareImage; // 0x310(0x08)
	struct UImage* NPCAwareImage2; // 0x318(0x08)
	struct UProgressBar* SoundFeedback_First; // 0x320(0x08)
	struct UProgressBar* SoundFeedback_Second; // 0x328(0x08)
	struct UProgressBar* SoundFeedback_Third; // 0x330(0x08)
	struct UOverlay* SoundFeedbackGauges; // 0x338(0x08)
	struct UImage* VisualDetectionImage; // 0x340(0x08)
	float IsInDarknessValue; // 0x348(0x04)
	float CrosshairValue; // 0x34c(0x04)
	struct FLinearColor NPCHearingColor; // 0x350(0x10)
	struct FLinearColor NormalColor; // 0x360(0x10)
	struct TArray<struct UTexture2D*> VisualDetectionImages; // 0x370(0x10)
	struct TArray<struct UTexture2D*> DarknessDetectionImages; // 0x380(0x10)
	float NPCVisualDetectionSmoothed; // 0x390(0x04)
	float DarknessDetectionSmoothed; // 0x394(0x04)
	bool DetectedDisplay; // 0x398(0x01)

	void UpdateCrosshairV3(bool ShouldAnimate); // Function DetectionCrosshair.DetectionCrosshair_C.UpdateCrosshairV3 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	bool ShouldShow(); // Function DetectionCrosshair.DetectionCrosshair_C.ShouldShow // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x201e6d4
	void UpdateVisualDetection(); // Function DetectionCrosshair.DetectionCrosshair_C.UpdateVisualDetection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateFeedbackProgressBar(struct UProgressBar* FeedbackProgressBar, bool Increasing, float DeltaTime); // Function DetectionCrosshair.DetectionCrosshair_C.UpdateFeedbackProgressBar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Update CrosshairV2(float DeltaTime); // Function DetectionCrosshair.DetectionCrosshair_C.Update CrosshairV2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateSoundFeedback(float DeltaTime); // Function DetectionCrosshair.DetectionCrosshair_C.UpdateSoundFeedback // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Update Crosshair(float DeltaTime); // Function DetectionCrosshair.DetectionCrosshair_C.Update Crosshair // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function DetectionCrosshair.DetectionCrosshair_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function DetectionCrosshair.DetectionCrosshair_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function DetectionCrosshair.DetectionCrosshair_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_Hide(); // Function DetectionCrosshair.DetectionCrosshair_C.Event_Hide // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_Show(); // Function DetectionCrosshair.DetectionCrosshair_C.Event_Show // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnWatchedPlayerChanged(struct ARBPlayer* oldPlayer, struct ARBPlayer* NewPlayer); // Function DetectionCrosshair.DetectionCrosshair_C.Event_OnWatchedPlayerChanged // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OnIsAimingThowableChanged(bool newAimingState); // Function DetectionCrosshair.DetectionCrosshair_C.OnIsAimingThowableChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Destruct(); // Function DetectionCrosshair.DetectionCrosshair_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_DetectionCrosshair(int32_t EntryPoint); // Function DetectionCrosshair.DetectionCrosshair_C.ExecuteUbergraph_DetectionCrosshair // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

