// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: micro_free
// Entry Point: 00d5bc50
// Size: 8 bytes
// Signature: undefined __thiscall micro_free(MyHeapManager * this, void * param_1)


/* HACD::MyHeapManager::micro_free(void*) */

void __thiscall HACD::MyHeapManager::micro_free(MyHeapManager *this,void *param_1)

{
  free(param_1);
  return;
}


