// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_samePlane
// Entry Point: 00ec0bf4
// Size: 108 bytes
// Signature: undefined __cdecl fm_samePlane(double * param_1, double * param_2, double param_3, double param_4, bool param_5)


/* FLOAT_MATH::fm_samePlane(double const*, double const*, double, double, bool) */

bool FLOAT_MATH::fm_samePlane
               (double *param_1,double *param_2,double param_3,double param_4,bool param_5)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  
  if (ABS(param_1[3] - param_2[3]) < param_4) {
    uVar1 = NEON_fmadd(*param_1,*param_2,param_1[1] * param_2[1]);
    dVar2 = (double)NEON_fmadd(param_1[2],param_2[2],uVar1);
    dVar3 = ABS(dVar2);
    if (!param_5) {
      dVar3 = dVar2;
    }
    return 1.0 - param_3 <= dVar3 && dVar3 <= param_3 + 1.0;
  }
  return false;
}


