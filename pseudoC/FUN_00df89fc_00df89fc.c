// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00df89fc
// Entry Point: 00df89fc
// Size: 108 bytes
// Signature: undefined FUN_00df89fc(void)


void FUN_00df89fc(long *param_1,long param_2)

{
  param_1[4] = *(long *)(param_2 + 0x30) + *param_1;
  param_1[8] = *(long *)(param_2 + 0x58) + *param_1;
  param_1[5] = *(long *)(param_2 + 0x30) + param_1[1];
  param_1[9] = *(long *)(param_2 + 0x58) + param_1[1];
  param_1[6] = *(long *)(param_2 + 0x30) + param_1[2];
  param_1[10] = *(long *)(param_2 + 0x58) + param_1[2];
  param_1[7] = *(long *)(param_2 + 0x30) + param_1[3];
  param_1[0xb] = *(long *)(param_2 + 0x58) + param_1[3];
  return;
}


