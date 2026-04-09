// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f10fc4
// Entry Point: 00f10fc4
// Size: 56 bytes
// Signature: undefined FUN_00f10fc4(void)


long FUN_00f10fc4(undefined4 *param_1,uint param_2,long param_3)

{
  if (param_3 != 0) {
    *param_1 = 0x6e616e;
    return (long)param_1 + 3;
  }
  *param_1 = *(undefined4 *)(&DAT_004da598 + (1 - param_2));
  return (long)param_1 + (ulong)param_2 + 3;
}


