// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_set_flush
// Entry Point: 00dc57d4
// Size: 16 bytes
// Signature: undefined png_set_flush(void)


void png_set_flush(long param_1,uint param_2)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x2d0) = param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU);
  }
  return;
}


