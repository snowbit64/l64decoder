// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveHeightMapToImageFinishAsync
// Entry Point: 008e6e54
// Size: 68 bytes
// Signature: undefined __thiscall saveHeightMapToImageFinishAsync(BaseTerrain * this, _func_void_void_ptr_bool * param_1, void * param_2)


/* BaseTerrain::saveHeightMapToImageFinishAsync(void (*)(void*, bool), void*) */

void __thiscall
BaseTerrain::saveHeightMapToImageFinishAsync
          (BaseTerrain *this,_func_void_void_ptr_bool *param_1,void *param_2)

{
  SaveHelperManager *this_00;
  
  this_00 = (SaveHelperManager *)SaveHelperManager::getInstance();
  SaveHelperManager::beginSave(this_00,*(SaveHelper **)(this + 0x168),param_1,param_2);
  *(undefined8 *)(this + 0x168) = 0;
  return;
}


