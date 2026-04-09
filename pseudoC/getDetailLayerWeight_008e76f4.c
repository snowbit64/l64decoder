// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDetailLayerWeight
// Entry Point: 008e76f4
// Size: 8 bytes
// Signature: undefined __thiscall getDetailLayerWeight(BaseTerrain * this, uint param_1, uint param_2, uint param_3)


/* BaseTerrain::getDetailLayerWeight(unsigned int, unsigned int, unsigned int) const */

void __thiscall
BaseTerrain::getDetailLayerWeight(BaseTerrain *this,uint param_1,uint param_2,uint param_3)

{
  TerrainLodTexture::getLayerWeight(*(TerrainLodTexture **)(this + 0xd8),param_1,param_2,param_3);
  return;
}


