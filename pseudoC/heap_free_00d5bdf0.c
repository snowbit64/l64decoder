// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: heap_free
// Entry Point: 00d5bdf0
// Size: 88 bytes
// Signature: undefined __thiscall heap_free(MyHeapManager * this, void * param_1)


/* non-virtual thunk to HACD::MyHeapManager::heap_free(void*) */

void __thiscall HACD::MyHeapManager::heap_free(MyHeapManager *this,void *param_1)

{
  long lVar1;
  
  lVar1 = (**(code **)(**(long **)(this + 8) + 0x10))();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00d5be34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 8) + 8))(*(long **)(this + 8),param_1,lVar1);
    return;
  }
  free(param_1);
  return;
}


