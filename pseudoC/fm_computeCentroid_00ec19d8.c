// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_computeCentroid
// Entry Point: 00ec19d8
// Size: 120 bytes
// Signature: undefined __cdecl fm_computeCentroid(uint param_1, double * param_2, double * param_3)


/* FLOAT_MATH::fm_computeCentroid(unsigned int, double const*, double*) */

bool FLOAT_MATH::fm_computeCentroid(uint param_1,double *param_2,double *param_3)

{
  double *pdVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  if (param_1 != 0) {
    dVar3 = 0.0;
    dVar4 = 0.0;
    dVar5 = 0.0;
    *param_3 = 0.0;
    param_3[1] = 0.0;
    param_3[2] = 0.0;
    uVar2 = param_1;
    do {
      uVar2 = uVar2 - 1;
      dVar5 = *param_2 + dVar5;
      *param_3 = dVar5;
      dVar4 = param_2[1] + dVar4;
      param_3[1] = dVar4;
      pdVar1 = param_2 + 2;
      param_2 = param_2 + 3;
      dVar3 = *pdVar1 + dVar3;
      param_3[2] = dVar3;
    } while (uVar2 != 0);
    dVar6 = 1.0 / (double)(ulong)param_1;
    *param_3 = dVar6 * dVar5;
    param_3[1] = dVar6 * dVar4;
    param_3[2] = dVar6 * dVar3;
  }
  return param_1 != 0;
}


