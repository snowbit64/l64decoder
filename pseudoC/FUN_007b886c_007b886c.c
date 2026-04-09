// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b886c
// Entry Point: 007b886c
// Size: 48 bytes
// Signature: undefined FUN_007b886c(void)


void FUN_007b886c(long param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_2;
  *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 8 << (ulong)(uVar1 & 0x1f);
  param_1 = param_1 + (long)(int)uVar1 * 4;
  *(uint *)(param_1 + 0x60) = param_2[4];
  *(uint *)(param_1 + 0x6c) = param_2[8];
  return;
}


