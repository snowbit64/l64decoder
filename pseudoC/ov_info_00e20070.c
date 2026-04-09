// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ov_info
// Entry Point: 00e20070
// Size: 92 bytes
// Signature: undefined ov_info(void)


long ov_info(long param_1,uint param_2)

{
  long lVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    lVar1 = *(long *)(param_1 + 0x68);
  }
  else {
    if (-1 < (int)param_2) {
      if ((int)param_2 < *(int *)(param_1 + 0x40)) {
        return *(long *)(param_1 + 0x68) + (ulong)param_2 * 0x38;
      }
      return 0;
    }
    lVar1 = *(long *)(param_1 + 0x68);
    if (2 < *(int *)(param_1 + 0x80)) {
      return lVar1 + (long)*(int *)(param_1 + 0x90) * 0x38;
    }
  }
  return lVar1;
}


