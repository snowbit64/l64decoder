// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createRaycastMesh
// Entry Point: 00ec5244
// Size: 92 bytes
// Signature: undefined __cdecl createRaycastMesh(uint param_1, float * param_2, uint param_3, uint * param_4)


/* VHACD::RaycastMesh::createRaycastMesh(unsigned int, float const*, unsigned int, unsigned int
   const*) */

MyRaycastMesh *
VHACD::RaycastMesh::createRaycastMesh(uint param_1,float *param_2,uint param_3,uint *param_4)

{
  MyRaycastMesh *this;
  
  this = (MyRaycastMesh *)operator_new(0x30);
  RAYCAST_MESH::MyRaycastMesh::MyRaycastMesh<float>(this,param_1,param_2,param_3,param_4);
  return this;
}


