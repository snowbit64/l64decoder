// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_set_invalid
// Entry Point: 00dc3b38
// Size: 24 bytes
// Signature: undefined png_set_invalid(void)


void png_set_invalid(long param_1,long param_2,uint param_3)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & (param_3 ^ 0xffffffff);
  }
  return;
}


