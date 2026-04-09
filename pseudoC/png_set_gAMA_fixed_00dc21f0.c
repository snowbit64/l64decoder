// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_set_gAMA_fixed
// Entry Point: 00dc21f0
// Size: 68 bytes
// Signature: undefined png_set_gAMA_fixed(void)


void png_set_gAMA_fixed(long param_1,long param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    png_colorspace_set_gamma(param_1,param_2 + 0x34);
    png_colorspace_sync_info(param_1,param_2);
    return;
  }
  return;
}


