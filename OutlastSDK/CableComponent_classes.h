// Class CableComponent.CableActor
// Size: 0x250 (Inherited: 0x248)
struct ACableActor : AActor {
	struct UCableComponent* CableComponent; // 0x248(0x08)
};

// Class CableComponent.CableComponent
// Size: 0x560 (Inherited: 0x4c0)
struct UCableComponent : UMeshComponent {
	bool bAttachStart; // 0x4b8(0x01)
	bool bAttachEnd; // 0x4b9(0x01)
	bool bUseSkinning; // 0x4ba(0x01)
	bool bPreSimulateOnSave; // 0x4bb(0x01)
	struct FComponentReference AttachEndTo; // 0x4c0(0x28)
	struct FName AttachEndToSocketName; // 0x4e8(0x08)
	struct FVector EndLocation; // 0x4f0(0x0c)
	float CableLength; // 0x4fc(0x04)
	int32_t NumSegments; // 0x500(0x04)
	float SubstepTime; // 0x504(0x04)
	int32_t SolverIterations; // 0x508(0x04)
	bool bEnableStiffness; // 0x50c(0x01)
	bool bUseSubstepping; // 0x50d(0x01)
	bool bSkipCableUpdateWhenNotVisible; // 0x50e(0x01)
	bool bSkipCableUpdateWhenNotOwnerRecentlyRendered; // 0x50f(0x01)
	bool bEnableCollision; // 0x510(0x01)
	float CollisionFriction; // 0x514(0x04)
	struct FVector CableForce; // 0x518(0x0c)
	float CableGravityScale; // 0x524(0x04)
	float CableWidth; // 0x528(0x04)
	int32_t NumSides; // 0x52c(0x04)
	float TileMaterial; // 0x530(0x04)
	char pad_535[0x3]; // 0x535(0x03)
	struct TArray<struct FCableParticle> PreSimulatedParticles; // 0x538(0x10)
	char pad_548[0x18]; // 0x548(0x18)

	void SetAttachEndToComponent(struct USceneComponent* Component, struct FName SocketName); // Function CableComponent.CableComponent.SetAttachEndToComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x15eae90
	void SetAttachEndTo(struct AActor* Actor, struct FName ComponentProperty, struct FName SocketName); // Function CableComponent.CableComponent.SetAttachEndTo // (Final|Native|Public|BlueprintCallable) // @ game+0x15ead88
	void GetCableParticleLocations(struct TArray<struct FVector>& Locations); // Function CableComponent.CableComponent.GetCableParticleLocations // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x15eacf0
	struct USceneComponent* GetAttachedComponent(); // Function CableComponent.CableComponent.GetAttachedComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x15eac9c
	struct AActor* GetAttachedActor(); // Function CableComponent.CableComponent.GetAttachedActor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x15eac84
};

