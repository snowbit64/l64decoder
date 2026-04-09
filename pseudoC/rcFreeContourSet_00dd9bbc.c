// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rcFreeContourSet
// Entry Point: 00dd9bbc
// Size: 124 bytes
// Signature: undefined __cdecl rcFreeContourSet(rcContourSet * param_1)


/* rcFreeContourSet(rcContourSet*) */

void rcFreeContourSet(rcContourSet *param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1 != (rcContourSet *)0x0) {
    if (0 < *(int *)(param_1 + 8)) {
      lVar1 = 0;
      lVar2 = 0;
      do {
        rcFree(*(void **)(*(long *)param_1 + lVar1));
        rcFree(*(void **)(*(long *)param_1 + lVar1 + 0x10));
        lVar2 = lVar2 + 1;
        lVar1 = lVar1 + 0x20;
      } while (lVar2 < *(int *)(param_1 + 8));
    }
    rcFree(*(void **)param_1);
    rcFree(param_1);
    return;
  }
  return;
}


