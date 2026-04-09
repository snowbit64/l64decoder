// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_intersectLineSegments2d
// Entry Point: 00ebe690
// Size: 192 bytes
// Signature: undefined __cdecl fm_intersectLineSegments2d(double * param_1, double * param_2, double * param_3, double * param_4, double * param_5)


/* WARNING: Removing unreachable block (ram,0x00ebe6f0) */
/* FLOAT_MATH::fm_intersectLineSegments2d(double const*, double const*, double const*, double
   const*, double*) */

undefined4
FLOAT_MATH::fm_intersectLineSegments2d
          (double *param_1,double *param_2,double *param_3,double *param_4,double *param_5)

{
  undefined4 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar6 = *param_4 - *param_3;
  dVar2 = *param_1;
  dVar9 = param_4[1] - param_3[1];
  dVar3 = *param_2 - dVar2;
  dVar4 = dVar2 - *param_3;
  dVar7 = param_2[1] - param_1[1];
  dVar5 = param_1[1] - param_3[1];
  dVar8 = (double)NEON_fmadd(dVar9,dVar3,dVar7 * -dVar6);
  dVar6 = (double)NEON_fmadd(dVar6,dVar5,dVar4 * -dVar9);
  dVar4 = (double)NEON_fmadd(dVar3,dVar5,dVar4 * -dVar7);
  if (dVar8 != 0.0) {
    uVar1 = 0;
    dVar6 = dVar6 * (1.0 / dVar8);
    if ((0.0 <= dVar6 && dVar6 < 1.0 || 0.0 <= dVar6 && dVar6 == 1.0) &&
       (dVar4 = dVar4 * (1.0 / dVar8), 0.0 <= dVar4 && dVar4 < 1.0 || 0.0 <= dVar4 && dVar4 == 1.0))
    {
      dVar2 = (double)NEON_fmadd(dVar6,dVar3,dVar2);
      uVar1 = 1;
      *param_5 = dVar2;
      dVar2 = (double)NEON_fmadd(dVar6,param_2[1] - param_1[1],param_1[1]);
      param_5[1] = dVar2;
    }
    return uVar1;
  }
  return 3;
}


