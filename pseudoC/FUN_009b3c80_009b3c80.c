// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_009b3c80
// Entry Point: 009b3c80
// Size: 80 bytes
// Signature: undefined FUN_009b3c80(void)


void FUN_009b3c80(void **param_1)

{
  void *pvVar1;
  
  pvVar1 = *param_1;
  *param_1 = (void *)0x0;
  if (pvVar1 != (void *)0x0) {
    if (((*(char *)(param_1 + 2) != '\0') && (*(void **)((long)pvVar1 + 0x40) != (void *)0x0)) &&
       (*(char *)((long)pvVar1 + 0x48) != '\0')) {
                    /* try { // try from 009b3cb0 to 009b3cb3 has its CatchHandler @ 009b3cd0 */
      btAlignedFreeInternal(*(void **)((long)pvVar1 + 0x40));
    }
    operator_delete(pvVar1);
    return;
  }
  return;
}


