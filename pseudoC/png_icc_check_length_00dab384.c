// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_icc_check_length
// Entry Point: 00dab384
// Size: 100 bytes
// Signature: undefined png_icc_check_length(void)


undefined8 png_icc_check_length(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  if (param_4 < 0x84) {
    FUN_00daaff8();
    return 0;
  }
  if ((*(ulong *)(param_1 + 0x468) != 0) && (*(ulong *)(param_1 + 0x468) < (ulong)param_4)) {
    FUN_00daaff8();
    return 0;
  }
  return 1;
}


