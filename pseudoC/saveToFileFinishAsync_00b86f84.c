// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveToFileFinishAsync
// Entry Point: 00b86f84
// Size: 68 bytes
// Signature: undefined __thiscall saveToFileFinishAsync(DensityMap * this, _func_void_void_ptr_bool * param_1, void * param_2)


/* DensityMap::saveToFileFinishAsync(void (*)(void*, bool), void*) */

void __thiscall
DensityMap::saveToFileFinishAsync(DensityMap *this,_func_void_void_ptr_bool *param_1,void *param_2)

{
  SaveHelperManager *this_00;
  
  this_00 = (SaveHelperManager *)SaveHelperManager::getInstance();
  SaveHelperManager::beginSave(this_00,*(SaveHelper **)(this + 0xf8),param_1,param_2);
  *(undefined8 *)(this + 0xf8) = 0;
  return;
}


