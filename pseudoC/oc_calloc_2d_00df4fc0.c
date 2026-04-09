// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: oc_calloc_2d
// Entry Point: 00df4fc0
// Size: 88 bytes
// Signature: undefined oc_calloc_2d(void)


void oc_calloc_2d(long param_1,long param_2,long param_3)

{
  void **ppvVar1;
  void *pvVar2;
  
  ppvVar1 = (void **)calloc(param_1 * 8 + param_3 * param_2 * param_1,1);
  if ((ppvVar1 != (void **)0x0) && (param_1 != 0)) {
    pvVar2 = ppvVar1 + param_1;
    do {
      *ppvVar1 = pvVar2;
      param_1 = param_1 + -1;
      pvVar2 = (void *)((long)pvVar2 + param_3 * param_2);
      ppvVar1 = ppvVar1 + 1;
    } while (param_1 != 0);
  }
  return;
}


