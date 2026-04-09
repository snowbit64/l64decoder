// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: heap_free
// Entry Point: 00d5af74
// Size: 8 bytes
// Signature: undefined __cdecl heap_free(HeapManager * param_1, void * param_2)


/* HACD::heap_free(HACD::HeapManager*, void*) */

void HACD::heap_free(HeapManager *param_1,void *param_2)

{
  MyHeapManager::inline_heap_free((MyHeapManager *)(param_1 + -8),param_2);
  return;
}


