// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateLayerRegion
// Entry Point: 008eb5dc
// Size: 28 bytes
// Signature: undefined __thiscall updateLayerRegion(BaseTerrain * this, uint param_1, int param_2, int param_3, uint param_4, uint param_5, float * param_6)


/* BaseTerrain::updateLayerRegion(unsigned int, int, int, unsigned int, unsigned int, float const*)
    */

undefined8 __thiscall
BaseTerrain::updateLayerRegion
          (BaseTerrain *this,uint param_1,int param_2,int param_3,uint param_4,uint param_5,
          float *param_6)

{
  TerrainLodTexture::updateLayerRegion
            (*(TerrainLodTexture **)(this + 0xd8),param_1,param_2,param_3,param_4,param_5,param_6);
  return 1;
}


