// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007ae95c
// Entry Point: 007ae95c
// Size: 24 bytes
// Signature: undefined FUN_007ae95c(void)


void FUN_007ae95c(long param_1,byte *param_2)

{
  *(uint *)(param_1 + 0x1d0) = *(uint *)(param_1 + 0x1d0) & 0xfffffffb | (uint)*param_2 << 2;
  return;
}


