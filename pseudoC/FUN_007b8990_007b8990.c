// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b8990
// Entry Point: 007b8990
// Size: 24 bytes
// Signature: undefined FUN_007b8990(void)


void FUN_007b8990(long param_1,byte *param_2)

{
  *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) & 0xffffff7f | (uint)*param_2 << 7;
  return;
}


