// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveSplitShapesToFileFinishAsync
// Entry Point: 0098005c
// Size: 68 bytes
// Signature: undefined __thiscall saveSplitShapesToFileFinishAsync(MeshSplitManager * this, _func_void_void_ptr_bool * param_1, void * param_2)


/* MeshSplitManager::saveSplitShapesToFileFinishAsync(void (*)(void*, bool), void*) */

void __thiscall
MeshSplitManager::saveSplitShapesToFileFinishAsync
          (MeshSplitManager *this,_func_void_void_ptr_bool *param_1,void *param_2)

{
  SaveHelperManager *this_00;
  
  this_00 = (SaveHelperManager *)SaveHelperManager::getInstance();
  SaveHelperManager::beginSave(this_00,*(SaveHelper **)(this + 0x80),param_1,param_2);
  *(undefined8 *)(this + 0x80) = 0;
  return;
}


