// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setLayersRegion
// Entry Point: 008eb5f8
// Size: 8 bytes
// Signature: undefined __thiscall setLayersRegion(BaseTerrain * this, int param_1, int param_2, uint param_3, uint param_4, uchar * param_5)


/* BaseTerrain::setLayersRegion(int, int, unsigned int, unsigned int, unsigned char const*) */

void __thiscall
BaseTerrain::setLayersRegion
          (BaseTerrain *this,int param_1,int param_2,uint param_3,uint param_4,uchar *param_5)

{
  TerrainLodTexture::setLayersRegion
            (*(TerrainLodTexture **)(this + 0xd8),param_1,param_2,param_3,param_4,param_5);
  return;
}


