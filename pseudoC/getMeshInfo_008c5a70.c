// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMeshInfo
// Entry Point: 008c5a70
// Size: 24 bytes
// Signature: undefined __thiscall getMeshInfo(InstancedGeometryManager * this, MeshData * param_1, MeshInfo * param_2)


/* InstancedGeometryManager::getMeshInfo(InstancedGeometryManager::MeshData*,
   InstancedGeometryManager::MeshInfo&) */

void __thiscall
InstancedGeometryManager::getMeshInfo
          (InstancedGeometryManager *this,MeshData *param_1,MeshInfo *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_rev64(*(undefined8 *)(param_1 + 8),4);
  *(undefined8 *)param_2 = uVar1;
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0x20);
  return;
}


