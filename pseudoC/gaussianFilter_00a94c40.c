// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: gaussianFilter
// Entry Point: 00a94c40
// Size: 68 bytes
// Signature: undefined __cdecl gaussianFilter(double param_1)


/* ImageScale::gaussianFilter(double) */

undefined  [16] ImageScale::gaussianFilter(double param_1)

{
  undefined auVar1 [16];
  double dVar2;
  
  dVar2 = 0.0;
  if (ABS(param_1) <= 3.0) {
    dVar2 = exp(param_1 * param_1 * -0.5);
    dVar2 = dVar2 / 2.506628274631001;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = dVar2;
  return auVar1;
}


