// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: inflateGetHeader
// Entry Point: 00e2cb08
// Size: 92 bytes
// Signature: undefined inflateGetHeader(void)


undefined8 inflateGetHeader(long param_1,long param_2)

{
  long *plVar1;
  
  if ((((param_1 != 0) && (*(long *)(param_1 + 0x40) != 0)) && (*(long *)(param_1 + 0x48) != 0)) &&
     (((plVar1 = *(long **)(param_1 + 0x38), plVar1 != (long *)0x0 && (*plVar1 == param_1)) &&
      ((*(int *)(plVar1 + 1) - 0x3f34U < 0x20 && ((*(byte *)(plVar1 + 2) >> 1 & 1) != 0)))))) {
    plVar1[6] = param_2;
    *(undefined4 *)(param_2 + 0x48) = 0;
    return 0;
  }
  return 0xfffffffe;
}


