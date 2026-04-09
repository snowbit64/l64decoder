// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getLayersRegion
// Entry Point: 008eb608
// Size: 8 bytes
// Signature: undefined __thiscall getLayersRegion(BaseTerrain * this, int param_1, int param_2, uint param_3, uint param_4, uchar * param_5)


/* BaseTerrain::getLayersRegion(int, int, unsigned int, unsigned int, unsigned char*) */

void __thiscall
BaseTerrain::getLayersRegion
          (BaseTerrain *this,int param_1,int param_2,uint param_3,uint param_4,uchar *param_5)

{
  TerrainLodTexture::getLayersRegion
            (*(TerrainLodTexture **)(this + 0xd8),param_1,param_2,param_3,param_4,param_5);
  return;
}


