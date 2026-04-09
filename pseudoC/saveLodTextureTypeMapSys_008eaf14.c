// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveLodTextureTypeMapSys
// Entry Point: 008eaf14
// Size: 8 bytes
// Signature: undefined __thiscall saveLodTextureTypeMapSys(BaseTerrain * this, char * param_1)


/* BaseTerrain::saveLodTextureTypeMapSys(char const*) */

void __thiscall BaseTerrain::saveLodTextureTypeMapSys(BaseTerrain *this,char *param_1)

{
  TerrainLodTexture::saveLodTextureTypeMapSys(*(TerrainLodTexture **)(this + 0xd8),param_1);
  return;
}


