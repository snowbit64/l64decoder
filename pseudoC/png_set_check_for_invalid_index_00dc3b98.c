// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_set_check_for_invalid_index
// Entry Point: 00dc3b98
// Size: 16 bytes
// Signature: undefined png_set_check_for_invalid_index(void)


void png_set_check_for_invalid_index(long param_1,int param_2)

{
  *(uint *)(param_1 + 0x294) = -(uint)(param_2 < 1);
  return;
}


