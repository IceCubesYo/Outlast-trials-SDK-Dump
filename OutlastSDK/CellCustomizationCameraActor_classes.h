// BlueprintGeneratedClass CellCustomizationCameraActor.CellCustomizationCameraActor_C
// Size: 0x26a (Inherited: 0x248)
struct ACellCustomizationCameraActor_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UCameraComponent* Camera; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	struct AActor* FocusedActor; // 0x260(0x08)
	bool bShouldTick; // 0x268(0x01)
	bool bManualOverride; // 0x269(0x01)

	void DeactivateCamera(); // Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.DeactivateCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Activate Camera(); // Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.Activate Camera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateCameraRotation(float DeltaTime); // Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.UpdateCameraRotation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void FocusCameraTo(enum class ECustomizationMenuCategory customizationCategory); // Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.FocusCameraTo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ReceiveTick(float DeltaSeconds); // Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_CellCustomizationCameraActor(int32_t EntryPoint); // Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.ExecuteUbergraph_CellCustomizationCameraActor // (Final|UbergraphFunction) // @ game+0x201e6d4
};

