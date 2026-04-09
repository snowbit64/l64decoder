// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveLodTextureTypeMapSysFinishAsync
// Entry Point: 008eaf24
// Size: 8 bytes
// Signature: undefined __thiscall saveLodTextureTypeMapSysFinishAsync(BaseTerrain * this, _func_void_void_ptr_bool * param_1, void * param_2)


/* BaseTerrain::saveLodTextureTypeMapSysFinishAsync(void (*)(void*, bool), void*) */

void __thiscall
BaseTerrain::saveLodTextureTypeMapSysFinishAsync
          (BaseTerrain *this,_func_void_void_ptr_bool *param_1,void *param_2)

{
  TerrainLodTexture::saveLodTextureTypeMapSysFinishAsync
            (*(TerrainLodTexture **)(this + 0xd8),param_1,param_2);
  return;
}


