// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveToFileFinishAsync
// Entry Point: 0088f834
// Size: 8 bytes
// Signature: undefined __thiscall saveToFileFinishAsync(DensityMapEntity * this, _func_void_void_ptr_bool * param_1, void * param_2)


/* DensityMapEntity::saveToFileFinishAsync(void (*)(void*, bool), void*) */

void __thiscall
DensityMapEntity::saveToFileFinishAsync
          (DensityMapEntity *this,_func_void_void_ptr_bool *param_1,void *param_2)

{
  DensityMap::saveToFileFinishAsync(*(DensityMap **)(this + 0x20),param_1,param_2);
  return;
}


