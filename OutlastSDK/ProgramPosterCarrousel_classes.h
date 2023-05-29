// WidgetBlueprintGeneratedClass ProgramPosterCarrousel.ProgramPosterCarrousel_C
// Size: 0x2f8 (Inherited: 0x260)
struct UProgramPosterCarrousel_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* FadeOut; // 0x268(0x08)
	struct UCanvasPanel* ContainerPanel; // 0x270(0x08)
	struct UImage* Image_77; // 0x278(0x08)
	struct UImage* Image_143; // 0x280(0x08)
	struct UButton* LeftCycle; // 0x288(0x08)
	struct UHorizontalBox* PosterBox; // 0x290(0x08)
	struct UButton* RightCycle; // 0x298(0x08)
	struct UScrollBox* ScrollBox_1; // 0x2a0(0x08)
	int32_t StartingIndex; // 0x2a8(0x04)
	char pad_2AC[0x4]; // 0x2ac(0x04)
	struct TArray<struct UProgramPosterCarrouselEntry_C*> Entries; // 0x2b0(0x10)
	struct FMulticastInlineDelegate OnPosterClicked; // 0x2c0(0x10)
	struct FMulticastInlineDelegate OnPosterHovered; // 0x2d0(0x10)
	struct FMulticastInlineDelegate OnPosterUnhovered; // 0x2e0(0x10)
	struct FName LastHoveredProgramId; // 0x2f0(0x08)

	enum class ESlateVisibility GetRightCycleVisibility(); // Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.GetRightCycleVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	enum class ESlateVisibility GetLeftCycleVisibility(); // Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.GetLeftCycleVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	void GetLastHoveredPoster(struct UProgramPosterCarrouselEntry_C*& outLastHoveredPoster); // Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.GetLastHoveredPoster // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void GetCurrentlySelectedPoster(struct UProgramPosterCarrouselEntry_C*& SelectedPoster); // Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.GetCurrentlySelectedPoster // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	void HandleLeftCycle(); // Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.HandleLeftCycle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void HandleRightCycle(); // Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.HandleRightCycle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void GetFirstAvailablePoster(struct UProgramPosterCarrouselEntry_C*& Poster); // Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.GetFirstAvailablePoster // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	void GetPosterForId(struct FName ProgramId, struct UProgramPosterCarrouselEntry_C*& Poster); // Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.GetPosterForId // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	struct UWidget* Cycle Posters(enum class EUINavigation Navigation); // Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.Cycle Posters // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ClearDelegates(); // Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.ClearDelegates // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void HandlePosterUnhover(struct FName ProgramId); // Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.HandlePosterUnhover // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void HandlePosterHover(struct FName ProgramId); // Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.HandlePosterHover // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void HandlePosterClick(struct FName ProgramId); // Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.HandlePosterClick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Refresh(); // Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Setup(); // Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.Setup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__TrialPosterCarrousel_V2_LeftCycle_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.BndEvt__TrialPosterCarrousel_V2_LeftCycle_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__TrialPosterCarrousel_V2_RightCycle_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.BndEvt__TrialPosterCarrousel_V2_RightCycle_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_ProgramPosterCarrousel(int32_t EntryPoint); // Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.ExecuteUbergraph_ProgramPosterCarrousel // (Final|UbergraphFunction) // @ game+0x201e6d4
	void OnPosterUnhovered__DelegateSignature(struct FName ProgramId); // Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.OnPosterUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnPosterHovered__DelegateSignature(struct FName ProgramId); // Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.OnPosterHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnPosterClicked__DelegateSignature(struct FName ProgramId); // Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.OnPosterClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

