// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveLodTextureTypeMapSysFinishAsync
// Entry Point: 008f2d9c
// Size: 68 bytes
// Signature: undefined __thiscall saveLodTextureTypeMapSysFinishAsync(TerrainLodTexture * this, _func_void_void_ptr_bool * param_1, void * param_2)


/* TerrainLodTexture::saveLodTextureTypeMapSysFinishAsync(void (*)(void*, bool), void*) */

void __thiscall
TerrainLodTexture::saveLodTextureTypeMapSysFinishAsync
          (TerrainLodTexture *this,_func_void_void_ptr_bool *param_1,void *param_2)

{
  SaveHelperManager *this_00;
  
  this_00 = (SaveHelperManager *)SaveHelperManager::getInstance();
  SaveHelperManager::beginSave(this_00,*(SaveHelper **)(this + 0x40),param_1,param_2);
  *(undefined8 *)(this + 0x40) = 0;
  return;
}


