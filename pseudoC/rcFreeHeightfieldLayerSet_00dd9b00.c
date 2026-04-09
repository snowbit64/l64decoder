// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rcFreeHeightfieldLayerSet
// Entry Point: 00dd9b00
// Size: 144 bytes
// Signature: undefined __cdecl rcFreeHeightfieldLayerSet(rcHeightfieldLayerSet * param_1)


/* rcFreeHeightfieldLayerSet(rcHeightfieldLayerSet*) */

void rcFreeHeightfieldLayerSet(rcHeightfieldLayerSet *param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1 != (rcHeightfieldLayerSet *)0x0) {
    if (0 < *(int *)(param_1 + 8)) {
      lVar1 = 0;
      lVar2 = 0;
      do {
        rcFree(*(void **)(*(long *)param_1 + lVar1 + 0x40));
        rcFree(*(void **)(*(long *)param_1 + lVar1 + 0x48));
        rcFree(*(void **)(*(long *)param_1 + lVar1 + 0x50));
        lVar2 = lVar2 + 1;
        lVar1 = lVar1 + 0x58;
      } while (lVar2 < *(int *)(param_1 + 8));
    }
    rcFree(*(void **)param_1);
    rcFree(param_1);
    return;
  }
  return;
}


