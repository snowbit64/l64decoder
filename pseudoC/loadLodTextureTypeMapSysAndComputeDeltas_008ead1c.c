// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadLodTextureTypeMapSysAndComputeDeltas
// Entry Point: 008ead1c
// Size: 16 bytes
// Signature: undefined __thiscall loadLodTextureTypeMapSysAndComputeDeltas(BaseTerrain * this, char * param_1, char * param_2, bool param_3)


/* BaseTerrain::loadLodTextureTypeMapSysAndComputeDeltas(char const*, char const*, bool) */

void __thiscall
BaseTerrain::loadLodTextureTypeMapSysAndComputeDeltas
          (BaseTerrain *this,char *param_1,char *param_2,bool param_3)

{
  TerrainLodTexture::loadLodTextureTypeMapSysAndComputeDeltas
            (*(TerrainLodTexture **)(this + 0xd8),param_1,param_2,param_3,
             *(BaseTerrainSyncer **)(this + 0x170));
  return;
}


