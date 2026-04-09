// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPatchData
// Entry Point: 008f6f00
// Size: 24 bytes
// Signature: undefined __thiscall getPatchData(TerrainPatchOccluderManager * this, uint param_1, uint param_2)


/* TerrainPatchOccluderManager::getPatchData(unsigned int, unsigned int) */

long __thiscall
TerrainPatchOccluderManager::getPatchData
          (TerrainPatchOccluderManager *this,uint param_1,uint param_2)

{
  return *(long *)(this + 0x118) + (ulong)(param_1 + *(int *)(this + 0xf8) * param_2) * 0x380;
}


