// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_gamma_8bit_correct
// Entry Point: 00dacb70
// Size: 88 bytes
// Signature: undefined png_gamma_8bit_correct(void)


int png_gamma_8bit_correct(int param_1,int param_2)

{
  double dVar1;
  
  if (param_1 - 1U < 0xfe) {
    dVar1 = pow((double)param_1 / 255.0,(double)param_2 * 1e-05);
    dVar1 = (double)NEON_fmadd(dVar1,0x406fe00000000000,0x3fe0000000000000);
    param_1 = (int)dVar1;
  }
  return param_1;
}


