// Class MRMesh.MeshReconstructorBase
// Size: 0x28 (Inherited: 0x28)
struct UMeshReconstructorBase : UObject {

	void StopReconstruction(); // Function MRMesh.MeshReconstructorBase.StopReconstruction // (Native|Public|BlueprintCallable) // @ game+0x2672598
	void StartReconstruction(); // Function MRMesh.MeshReconstructorBase.StartReconstruction // (Native|Public|BlueprintCallable) // @ game+0x2672580
	void PauseReconstruction(); // Function MRMesh.MeshReconstructorBase.PauseReconstruction // (Native|Public|BlueprintCallable) // @ game+0x26723dc
	bool IsReconstructionStarted(); // Function MRMesh.MeshReconstructorBase.IsReconstructionStarted // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1dd6328
	bool IsReconstructionPaused(); // Function MRMesh.MeshReconstructorBase.IsReconstructionPaused // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1dd6300
	void DisconnectMRMesh(); // Function MRMesh.MeshReconstructorBase.DisconnectMRMesh // (Native|Public) // @ game+0x2672278
	void ConnectMRMesh(struct UMRMeshComponent* Mesh); // Function MRMesh.MeshReconstructorBase.ConnectMRMesh // (Native|Public) // @ game+0x16ad0b4
};

// Class MRMesh.MockDataMeshTrackerComponent
// Size: 0x290 (Inherited: 0x220)
struct UMockDataMeshTrackerComponent : USceneComponent {
	struct FMulticastInlineDelegate OnMeshTrackerUpdated; // 0x218(0x10)
	bool ScanWorld; // 0x228(0x01)
	bool RequestNormals; // 0x229(0x01)
	bool RequestVertexConfidence; // 0x22a(0x01)
	enum class EMeshTrackerVertexColorMode VertexColorMode; // 0x22b(0x01)
	struct TArray<struct FColor> BlockVertexColors; // 0x230(0x10)
	struct FLinearColor VertexColorFromConfidenceZero; // 0x240(0x10)
	struct FLinearColor VertexColorFromConfidenceOne; // 0x250(0x10)
	float UpdateInterval; // 0x260(0x04)
	struct UMRMeshComponent* MRMesh; // 0x268(0x08)
	char pad_270[0x20]; // 0x270(0x20)

	void OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, struct TArray<struct FVector>& Vertices, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<float>& Confidence); // DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x201e6d4
	void DisconnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x2672290
	void ConnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x2672178
};

// Class MRMesh.MRMeshComponent
// Size: 0x550 (Inherited: 0x490)
struct UMRMeshComponent : UPrimitiveComponent {
	char pad_490[0x10]; // 0x490(0x10)
	struct UMaterialInterface* Material; // 0x4a0(0x08)
	struct UMaterialInterface* WireframeMaterial; // 0x4a8(0x08)
	bool bCreateMeshProxySections; // 0x4b0(0x01)
	bool bUpdateNavMeshOnMeshUpdate; // 0x4b1(0x01)
	bool bNeverCreateCollisionMesh; // 0x4b2(0x01)
	char pad_4B3[0x5]; // 0x4b3(0x05)
	struct UBodySetup* CachedBodySetup; // 0x4b8(0x08)
	struct TArray<struct UBodySetup*> BodySetups; // 0x4c0(0x10)
	char pad_4D0[0x80]; // 0x4d0(0x80)

	void SetWireframeMaterial(struct UMaterialInterface* InMaterial); // Function MRMesh.MRMeshComponent.SetWireframeMaterial // (Native|Public|BlueprintCallable) // @ game+0x1d49080
	void SetWireframeColor(struct FLinearColor& InColor); // Function MRMesh.MRMeshComponent.SetWireframeColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x26724fc
	void SetUseWireframe(bool bUseWireframe); // Function MRMesh.MRMeshComponent.SetUseWireframe // (Final|Native|Public|BlueprintCallable) // @ game+0x2672474
	void SetEnableMeshOcclusion(bool bEnable); // Function MRMesh.MRMeshComponent.SetEnableMeshOcclusion // (Final|Native|Public|BlueprintCallable) // @ game+0x26723f4
	bool IsConnected(); // Function MRMesh.MRMeshComponent.IsConnected // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x26723b0
	struct FLinearColor GetWireframeColor(); // Function MRMesh.MRMeshComponent.GetWireframeColor // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x2672394
	bool GetUseWireframe(); // Function MRMesh.MRMeshComponent.GetUseWireframe // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x267237c
	bool GetEnableMeshOcclusion(); // Function MRMesh.MRMeshComponent.GetEnableMeshOcclusion // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2672364
	void ForceNavMeshUpdate(); // Function MRMesh.MRMeshComponent.ForceNavMeshUpdate // (Final|Native|Public|BlueprintCallable) // @ game+0x2672310
	void Clear(); // Function MRMesh.MRMeshComponent.Clear // (Final|Native|Public|BlueprintCallable) // @ game+0x267215c
};

