// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_capsuleVolume
// Entry Point: 00ebc488
// Size: 72 bytes
// Signature: undefined __cdecl fm_capsuleVolume(double param_1, double param_2)


/* FLOAT_MATH::fm_capsuleVolume(double, double) */

undefined  [16] FLOAT_MATH::fm_capsuleVolume(double param_1,double param_2)

{
  undefined auVar1 [16];
  double dVar2;
  double dVar3;
  
  dVar2 = (double)NEON_fmadd(param_1,0xc000000000000000,param_2);
  dVar3 = param_1 * 3.141592741012573 * param_1 * dVar2;
  if (dVar2 <= 0.0) {
    dVar3 = -0.0;
  }
  auVar1._0_8_ = param_1 * 4.188790321350098 * param_1 * param_1 + dVar3;
  auVar1._8_8_ = 0;
  return auVar1;
}


