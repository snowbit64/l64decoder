// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ov_comment
// Entry Point: 00e200cc
// Size: 88 bytes
// Signature: undefined ov_comment(void)


long ov_comment(long param_1,uint param_2)

{
  long lVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    lVar1 = *(long *)(param_1 + 0x70);
  }
  else {
    if (-1 < (int)param_2) {
      if ((int)param_2 < *(int *)(param_1 + 0x40)) {
        return *(long *)(param_1 + 0x70) + (ulong)param_2 * 0x20;
      }
      return 0;
    }
    lVar1 = *(long *)(param_1 + 0x70);
    if (2 < *(int *)(param_1 + 0x80)) {
      return lVar1 + (long)*(int *)(param_1 + 0x90) * 0x20;
    }
  }
  return lVar1;
}


