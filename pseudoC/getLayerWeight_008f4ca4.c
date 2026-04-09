// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getLayerWeight
// Entry Point: 008f4ca4
// Size: 40 bytes
// Signature: undefined __thiscall getLayerWeight(TerrainLodTexture * this, uint param_1, uint param_2, uint param_3)


/* TerrainLodTexture::getLayerWeight(unsigned int, unsigned int, unsigned int) const */

undefined4 __thiscall
TerrainLodTexture::getLayerWeight(TerrainLodTexture *this,uint param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0x3f800000;
  if (*(byte *)(*(long *)(this + 0x18) + (ulong)(param_2 + *(int *)(this + 8) * param_3) * 2) !=
      param_1) {
    uVar1 = 0;
  }
  return uVar1;
}


