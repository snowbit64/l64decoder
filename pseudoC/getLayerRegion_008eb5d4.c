// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getLayerRegion
// Entry Point: 008eb5d4
// Size: 8 bytes
// Signature: undefined __thiscall getLayerRegion(BaseTerrain * this, uint param_1, int param_2, int param_3, uint param_4, uint param_5, float * param_6)


/* BaseTerrain::getLayerRegion(unsigned int, int, int, unsigned int, unsigned int, float*) */

void __thiscall
BaseTerrain::getLayerRegion
          (BaseTerrain *this,uint param_1,int param_2,int param_3,uint param_4,uint param_5,
          float *param_6)

{
  TerrainLodTexture::getLayerRegion
            (*(TerrainLodTexture **)(this + 0xd8),param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}


