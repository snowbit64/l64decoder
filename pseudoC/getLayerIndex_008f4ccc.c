// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getLayerIndex
// Entry Point: 008f4ccc
// Size: 24 bytes
// Signature: undefined __thiscall getLayerIndex(TerrainLodTexture * this, uint param_1, uint param_2)


/* TerrainLodTexture::getLayerIndex(unsigned int, unsigned int) const */

undefined __thiscall
TerrainLodTexture::getLayerIndex(TerrainLodTexture *this,uint param_1,uint param_2)

{
  return *(undefined *)
          (*(long *)(this + 0x18) + (ulong)(param_1 + *(int *)(this + 8) * param_2) * 2);
}


