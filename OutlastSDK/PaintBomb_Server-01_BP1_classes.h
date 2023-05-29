// BlueprintGeneratedClass PaintBomb_Server-01_BP1.PaintBomb_Server-01_BP1_C
// Size: 0x270 (Inherited: 0x248)
struct APaintBomb_Server-01_BP1_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USphereComponent* Collision; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	struct TArray<struct ARBPawn*> OverlappingPawns; // 0x260(0x10)

	void Cleanup(); // Function PaintBomb_Server-01_BP1.PaintBomb_Server-01_BP1_C.Cleanup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Boom(float duration, float Radius); // Function PaintBomb_Server-01_BP1.PaintBomb_Server-01_BP1_C.Boom // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function PaintBomb_Server-01_BP1.PaintBomb_Server-01_BP1_C.OnOverlap // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void EndOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function PaintBomb_Server-01_BP1.PaintBomb_Server-01_BP1_C.EndOverlap // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function PaintBomb_Server-01_BP1.PaintBomb_Server-01_BP1_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_PaintBomb_Server-01_BP1(int32_t EntryPoint); // Function PaintBomb_Server-01_BP1.PaintBomb_Server-01_BP1_C.ExecuteUbergraph_PaintBomb_Server-01_BP1 // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

