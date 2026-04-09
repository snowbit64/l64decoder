// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b8934
// Entry Point: 007b8934
// Size: 52 bytes
// Signature: undefined FUN_007b8934(void)


void FUN_007b8934(long param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0xb4) = *param_2;
  *(undefined4 *)(param_1 + 0xc0) = param_2[4];
  *(undefined4 *)(param_1 + 0xb8) = param_2[8];
  *(undefined4 *)(param_1 + 0xc4) = param_2[0xc];
  *(undefined4 *)(param_1 + 0xbc) = param_2[0x10];
  *(undefined4 *)(param_1 + 200) = param_2[0x14];
  return;
}


