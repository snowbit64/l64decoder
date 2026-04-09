// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b884c
// Entry Point: 007b884c
// Size: 32 bytes
// Signature: undefined FUN_007b884c(void)


void FUN_007b884c(long param_1,undefined4 *param_2)

{
  *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x40;
  *(undefined4 *)(param_1 + 0xdc) = *param_2;
  *(undefined4 *)(param_1 + 0xe0) = param_2[4];
  return;
}


