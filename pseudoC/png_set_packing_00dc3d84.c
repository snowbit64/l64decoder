// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_set_packing
// Entry Point: 00dc3d84
// Size: 40 bytes
// Signature: undefined png_set_packing(void)


void png_set_packing(long param_1)

{
  if ((param_1 != 0) && (*(byte *)(param_1 + 0x2a0) < 8)) {
    *(undefined *)(param_1 + 0x2a1) = 8;
    *(uint *)(param_1 + 0x16c) = *(uint *)(param_1 + 0x16c) | 4;
  }
  return;
}


