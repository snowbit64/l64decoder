// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_getSidePlane
// Entry Point: 00ebe8b0
// Size: 68 bytes
// Signature: undefined __cdecl fm_getSidePlane(double * param_1, double * param_2, double param_3)


/* FLOAT_MATH::fm_getSidePlane(double const*, double const*, double) */

undefined4 FLOAT_MATH::fm_getSidePlane(double *param_1,double *param_2,double param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  double dVar3;
  
  uVar2 = NEON_fmadd(*param_1,*param_2,param_1[1] * param_2[1]);
  dVar3 = (double)NEON_fmadd(param_1[2],param_2[2],uVar2);
  dVar3 = dVar3 + param_2[3];
  uVar1 = 2;
  if (0.0 < dVar3) {
    uVar1 = 1;
  }
  if (dVar3 <= param_3 && -param_3 <= dVar3) {
    uVar1 = 0;
  }
  return uVar1;
}


