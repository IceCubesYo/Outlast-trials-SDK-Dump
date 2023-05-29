// WidgetBlueprintGeneratedClass MateHealthBarElement.MateHealthBarElement_C
// Size: 0x2b8 (Inherited: 0x260)
struct UMateHealthBarElement_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Bracket; // 0x268(0x08)
	struct UMaterialInstanceDynamic* BracketMaterial; // 0x270(0x08)
	bool TweenInProgress; // 0x278(0x01)
	char pad_279[0x3]; // 0x279(0x03)
	float TargetValue; // 0x27c(0x04)
	float OriginalValue; // 0x280(0x04)
	char pad_284[0x4]; // 0x284(0x04)
	struct FMulticastInlineDelegate TweenCompleted; // 0x288(0x10)
	bool Increasing; // 0x298(0x01)
	char pad_299[0x7]; // 0x299(0x07)
	struct FMulticastInlineDelegate BleedoutCompleted; // 0x2a0(0x10)
	float BarHeight; // 0x2b0(0x04)
	float DelayedHealthEvent; // 0x2b4(0x04)

	void ForceValue(float NewValue); // Function MateHealthBarElement.MateHealthBarElement_C.ForceValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetEntireBar(bool Empty); // Function MateHealthBarElement.MateHealthBarElement_C.SetEntireBar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetBarHeight(float DesiredSize_Y); // Function MateHealthBarElement.MateHealthBarElement_C.SetBarHeight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateTints(bool IsInBleedout); // Function MateHealthBarElement.MateHealthBarElement_C.UpdateTints // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateTween(); // Function MateHealthBarElement.MateHealthBarElement_C.UpdateTween // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Start New Tween(float NewValue, bool StartsOutsideBracket); // Function MateHealthBarElement.MateHealthBarElement_C.Start New Tween // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function MateHealthBarElement.MateHealthBarElement_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function MateHealthBarElement.MateHealthBarElement_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function MateHealthBarElement.MateHealthBarElement_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_MateHealthBarElement(int32_t EntryPoint); // Function MateHealthBarElement.MateHealthBarElement_C.ExecuteUbergraph_MateHealthBarElement // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
	void BleedoutCompleted__DelegateSignature(); // Function MateHealthBarElement.MateHealthBarElement_C.BleedoutCompleted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void TweenCompleted__DelegateSignature(); // Function MateHealthBarElement.MateHealthBarElement_C.TweenCompleted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

