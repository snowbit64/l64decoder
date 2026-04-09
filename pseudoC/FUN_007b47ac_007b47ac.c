// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b47ac
// Entry Point: 007b47ac
// Size: 32 bytes
// Signature: undefined FUN_007b47ac(void)


void FUN_007b47ac(long param_1,uint *param_2)

{
  param_1 = param_1 + (ulong)*param_2 * 4;
  *(uint *)(param_1 + 0x54) =
       *(uint *)(param_1 + 0x54) & 0xfffffffb | (uint)*(byte *)(param_2 + 4) << 2;
  return;
}


