// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDistanceTextureDesc
// Entry Point: 00a74aec
// Size: 16 bytes
// Signature: undefined __thiscall getDistanceTextureDesc(TerrainLayerTransformGroup * this, uint param_1)


/* TerrainLayerTransformGroup::getDistanceTextureDesc(unsigned int) const */

long __thiscall
TerrainLayerTransformGroup::getDistanceTextureDesc(TerrainLayerTransformGroup *this,uint param_1)

{
  return *(long *)(this + 0x720) + (ulong)param_1 * 0x38;
}


