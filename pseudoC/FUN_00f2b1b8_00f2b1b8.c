// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f2b1b8
// Entry Point: 00f2b1b8
// Size: 48 bytes
// Signature: undefined FUN_00f2b1b8(void)


char * FUN_00f2b1b8(int param_1)

{
  if (param_1 + 2U < 0x62) {
    return &DAT_005704b4 + *(int *)(&DAT_005704b4 + (long)(int)(param_1 + 2U) * 4);
  }
  return "unknown register";
}


