// Class CustomMeshComponent.CustomMeshComponent
// Size: 0x4d0 (Inherited: 0x4c0)
struct UCustomMeshComponent : UMeshComponent {
	char pad_4C0[0x10]; // 0x4c0(0x10)

	bool SetCustomMeshTriangles(struct TArray<struct FCustomMeshTriangle>& Triangles); // Function CustomMeshComponent.CustomMeshComponent.SetCustomMeshTriangles // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x17ecae0
	void ClearCustomMeshTriangles(); // Function CustomMeshComponent.CustomMeshComponent.ClearCustomMeshTriangles // (Final|Native|Public|BlueprintCallable) // @ game+0x17eca94
	void AddCustomMeshTriangles(struct TArray<struct FCustomMeshTriangle>& Triangles); // Function CustomMeshComponent.CustomMeshComponent.AddCustomMeshTriangles // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x17ec9fc
};

