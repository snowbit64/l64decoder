// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b88e4
// Entry Point: 007b88e4
// Size: 52 bytes
// Signature: undefined FUN_007b88e4(void)


void FUN_007b88e4(long param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x90) = *param_2;
  *(undefined4 *)(param_1 + 0x9c) = param_2[4];
  *(undefined4 *)(param_1 + 0x94) = param_2[8];
  *(undefined4 *)(param_1 + 0xa0) = param_2[0xc];
  *(undefined4 *)(param_1 + 0x98) = param_2[0x10];
  *(undefined4 *)(param_1 + 0xa4) = param_2[0x14];
  return;
}


