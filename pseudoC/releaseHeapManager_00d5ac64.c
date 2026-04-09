// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: releaseHeapManager
// Entry Point: 00d5ac64
// Size: 140 bytes
// Signature: undefined __cdecl releaseHeapManager(HeapManager * param_1)


/* HACD::releaseHeapManager(HACD::HeapManager*) */

void HACD::releaseHeapManager(HeapManager *param_1)

{
  undefined8 *__ptr;
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  
  __ptr = (undefined8 *)0x0;
  if (param_1 != (HeapManager *)0x0) {
    __ptr = (undefined8 *)(param_1 + -8);
  }
  puVar2 = (undefined8 *)__ptr[2];
  lVar1 = puVar2[0x10b];
  plVar3 = (long *)puVar2[2];
  *__ptr = &PTR_micro_malloc_01012af8;
  __ptr[1] = &PTR_heap_malloc_01012b38;
  *puVar2 = &PTR_malloc_01012a20;
  puVar2[1] = &PTR_addMicroChunk_01012a60;
  if (lVar1 != 0) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  (**(code **)(*plVar3 + 8))(plVar3,puVar2);
  free(__ptr);
  return;
}


