// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: baseInitialization
// Entry Point: 008e4f84
// Size: 108 bytes
// Signature: undefined __thiscall baseInitialization(BaseTerrain * this, bool param_1, bool param_2)


/* BaseTerrain::baseInitialization(bool, bool) */

uint __thiscall BaseTerrain::baseInitialization(BaseTerrain *this,bool param_1,bool param_2)

{
  uint uVar1;
  
  *(float *)(this + 0x94) = (float)(ulong)(*(int *)(this + 0x90) - 1) * 0.5;
  if (param_1) {
    if (!param_2) goto LAB_008e4fd4;
  }
  else {
    uVar1 = TerrainLodTexture::createLodTextureTypeMapSys
                      (*(TerrainLodTexture **)(this + 0xd8),this,
                       *(BaseTerrainSyncer **)(this + 0x170));
    if (((uVar1 & 1) == 0) || (param_2)) goto LAB_008e4fe0;
LAB_008e4fd4:
    createLodNormalMapSys();
  }
  uVar1 = 1;
LAB_008e4fe0:
  return uVar1 & 1;
}


