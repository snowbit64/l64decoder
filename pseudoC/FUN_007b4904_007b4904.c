// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b4904
// Entry Point: 007b4904
// Size: 32 bytes
// Signature: undefined FUN_007b4904(void)


void FUN_007b4904(long param_1,uint *param_2)

{
  param_2[0x42] = 3;
  *(byte *)(param_2 + 0x40) = (byte)*(undefined4 *)(param_1 + (ulong)*param_2 * 4 + 0x54) & 1;
  return;
}


