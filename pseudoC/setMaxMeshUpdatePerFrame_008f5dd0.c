// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setMaxMeshUpdatePerFrame
// Entry Point: 008f5dd0
// Size: 8 bytes
// Signature: undefined __thiscall setMaxMeshUpdatePerFrame(TerrainPatchOccluderManager * this, uint param_1)


/* TerrainPatchOccluderManager::setMaxMeshUpdatePerFrame(unsigned int) */

void __thiscall
TerrainPatchOccluderManager::setMaxMeshUpdatePerFrame
          (TerrainPatchOccluderManager *this,uint param_1)

{
  *(uint *)(this + 0xfc) = param_1;
  return;
}


