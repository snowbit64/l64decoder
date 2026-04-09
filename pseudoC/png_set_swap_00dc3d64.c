// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_set_swap
// Entry Point: 00dc3d64
// Size: 32 bytes
// Signature: undefined png_set_swap(void)


void png_set_swap(long param_1)

{
  if ((param_1 != 0) && (*(char *)(param_1 + 0x2a0) == '\x10')) {
    *(uint *)(param_1 + 0x16c) = *(uint *)(param_1 + 0x16c) | 0x10;
  }
  return;
}


