// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_get_pixel_aspect_ratio
// Entry Point: 00dafac8
// Size: 48 bytes
// Signature: undefined png_get_pixel_aspect_ratio(void)


float png_get_pixel_aspect_ratio(long param_1,long param_2)

{
  float fVar1;
  
  fVar1 = 0.0;
  if ((((param_1 != 0) && (param_2 != 0)) && (*(char *)(param_2 + 8) < '\0')) &&
     (*(uint *)(param_2 + 0xe0) != 0)) {
    fVar1 = (float)NEON_ucvtf(*(undefined4 *)(param_2 + 0xe4));
    fVar1 = fVar1 / (float)(ulong)*(uint *)(param_2 + 0xe0);
  }
  return fVar1;
}


