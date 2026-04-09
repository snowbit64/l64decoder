// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: inflateCodesUsed
// Entry Point: 00e2d134
// Size: 88 bytes
// Signature: undefined inflateCodesUsed(void)


long inflateCodesUsed(long param_1)

{
  long *plVar1;
  
  if ((((param_1 != 0) && (*(long *)(param_1 + 0x40) != 0)) && (*(long *)(param_1 + 0x48) != 0)) &&
     (((plVar1 = *(long **)(param_1 + 0x38), plVar1 != (long *)0x0 && (*plVar1 == param_1)) &&
      (*(int *)(plVar1 + 1) - 0x3f34U < 0x20)))) {
    return (plVar1[0x12] - (long)plVar1) + -0x558 >> 2;
  }
  return -1;
}


