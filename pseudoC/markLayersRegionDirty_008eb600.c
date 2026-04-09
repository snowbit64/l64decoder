// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: markLayersRegionDirty
// Entry Point: 008eb600
// Size: 8 bytes
// Signature: undefined __thiscall markLayersRegionDirty(BaseTerrain * this, int param_1, int param_2, uint param_3, uint param_4)


/* BaseTerrain::markLayersRegionDirty(int, int, unsigned int, unsigned int) */

void __thiscall
BaseTerrain::markLayersRegionDirty
          (BaseTerrain *this,int param_1,int param_2,uint param_3,uint param_4)

{
  BaseTerrainSyncer::markTextureRegionDirty
            (*(BaseTerrainSyncer **)(this + 0x170),param_1,param_2,param_3,param_4);
  return;
}


