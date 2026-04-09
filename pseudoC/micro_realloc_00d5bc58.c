// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: micro_realloc
// Entry Point: 00d5bc58
// Size: 28 bytes
// Signature: undefined __thiscall micro_realloc(MyHeapManager * this, void * param_1, ulong param_2)


/* HACD::MyHeapManager::micro_realloc(void*, unsigned long) */

void __thiscall HACD::MyHeapManager::micro_realloc(MyHeapManager *this,void *param_1,ulong param_2)

{
  realloc(param_1,param_2);
  return;
}


