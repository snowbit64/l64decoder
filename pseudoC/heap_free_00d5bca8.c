// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: heap_free
// Entry Point: 00d5bca8
// Size: 88 bytes
// Signature: undefined __thiscall heap_free(MyHeapManager * this, void * param_1)


/* HACD::MyHeapManager::heap_free(void*) */

void __thiscall HACD::MyHeapManager::heap_free(MyHeapManager *this,void *param_1)

{
  long lVar1;
  
  lVar1 = (**(code **)(**(long **)(this + 0x10) + 0x10))();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00d5bcec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x10) + 8))(*(long **)(this + 0x10),param_1,lVar1);
    return;
  }
  free(param_1);
  return;
}


