// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_get_user_transform_ptr
// Entry Point: 00dc496c
// Size: 12 bytes
// Signature: undefined png_get_user_transform_ptr(void)


long png_get_user_transform_ptr(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(param_1 + 0x158);
  }
  return param_1;
}


