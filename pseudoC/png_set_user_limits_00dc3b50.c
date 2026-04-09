// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_set_user_limits
// Entry Point: 00dc3b50
// Size: 16 bytes
// Signature: undefined png_set_user_limits(void)


void png_set_user_limits(long param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x45c) = param_2;
    *(undefined4 *)(param_1 + 0x460) = param_3;
  }
  return;
}


