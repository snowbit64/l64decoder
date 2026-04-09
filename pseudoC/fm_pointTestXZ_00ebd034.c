// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_pointTestXZ
// Entry Point: 00ebd034
// Size: 96 bytes
// Signature: undefined __cdecl fm_pointTestXZ(double * param_1, double * param_2, double * param_3)


/* FLOAT_MATH::fm_pointTestXZ(double const*, double const*, double const*) */

undefined8 FLOAT_MATH::fm_pointTestXZ(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = param_2[2];
  dVar3 = param_1[2];
  dVar2 = param_3[2];
  if (((dVar1 <= dVar3 && dVar3 < dVar2) || (dVar2 <= dVar3 && dVar3 < dVar1)) &&
     (*param_1 < *param_2 + ((dVar3 - dVar1) * (*param_3 - *param_2)) / (dVar2 - dVar1))) {
    return 1;
  }
  return 0;
}


