// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_image_error
// Entry Point: 00dae388
// Size: 72 bytes
// Signature: undefined png_image_error(void)


undefined8 png_image_error(long param_1,undefined8 param_2)

{
  png_safecat(param_1 + 0x24,0x40,0,param_2);
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 2;
  png_image_free(param_1);
  return 0;
}


