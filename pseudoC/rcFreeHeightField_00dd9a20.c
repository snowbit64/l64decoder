// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rcFreeHeightField
// Entry Point: 00dd9a20
// Size: 76 bytes
// Signature: undefined __cdecl rcFreeHeightField(rcHeightfield * param_1)


/* rcFreeHeightField(rcHeightfield*) */

void rcFreeHeightField(rcHeightfield *param_1)

{
  void **ppvVar1;
  void *pvVar2;
  
  if (param_1 == (rcHeightfield *)0x0) {
    return;
  }
  rcFree(*(void **)(param_1 + 0x28));
  ppvVar1 = (void **)*(void **)(param_1 + 0x30);
  while (ppvVar1 != (void **)0x0) {
    pvVar2 = *ppvVar1;
    rcFree(ppvVar1);
    *(void **)(param_1 + 0x30) = pvVar2;
    ppvVar1 = (void **)pvVar2;
  }
  rcFree(param_1);
  return;
}


