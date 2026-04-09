// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_gamma_correct
// Entry Point: 00dacc24
// Size: 184 bytes
// Signature: undefined png_gamma_correct(void)


uint png_gamma_correct(long param_1,uint param_2,int param_3)

{
  double dVar1;
  
  if (*(char *)(param_1 + 0x2a0) == '\b') {
    if (param_2 - 1 < 0xfe) {
      dVar1 = pow((double)param_2 / 255.0,(double)param_3 * 1e-05);
      dVar1 = (double)NEON_fmadd(dVar1,0x406fe00000000000,0x3fe0000000000000);
      param_2 = (uint)dVar1;
    }
    param_2 = param_2 & 0xff;
  }
  else if (param_2 - 1 < 0xfffe) {
    dVar1 = pow((double)param_2 / 65535.0,(double)param_3 * 1e-05);
    dVar1 = (double)NEON_fmadd(dVar1,0x40efffe000000000,0x3fe0000000000000);
    return (int)dVar1;
  }
  return param_2;
}


