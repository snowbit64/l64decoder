// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: solveQuadric
// Entry Point: 00b5aa18
// Size: 108 bytes
// Signature: undefined __cdecl solveQuadric(double * param_1, double * param_2)


/* MathUtil::solveQuadric(double*, double*) */

undefined8 MathUtil::solveQuadric(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  
  dVar2 = param_1[2];
  dVar1 = param_1[1] / (dVar2 + dVar2);
  dVar2 = (double)NEON_fmadd(dVar1,dVar1,-*param_1 / dVar2);
  if (ABS(dVar2) < 1e-09) {
    *param_2 = -dVar1;
    return 1;
  }
  if (0.0 < dVar2) {
    *param_2 = SQRT(dVar2) - dVar1;
    param_2[1] = -SQRT(dVar2) - dVar1;
    return 2;
  }
  return 0;
}


