// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_intersectLineSegments2dTime
// Entry Point: 00ebe750
// Size: 168 bytes
// Signature: undefined __cdecl fm_intersectLineSegments2dTime(double * param_1, double * param_2, double * param_3, double * param_4, double * param_5, double * param_6)


/* WARNING: Removing unreachable block (ram,0x00ebe7b0) */
/* FLOAT_MATH::fm_intersectLineSegments2dTime(double const*, double const*, double const*, double
   const*, double&, double&) */

undefined4
FLOAT_MATH::fm_intersectLineSegments2dTime
          (double *param_1,double *param_2,double *param_3,double *param_4,double *param_5,
          double *param_6)

{
  undefined4 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar2 = *param_4 - *param_3;
  dVar4 = param_4[1] - param_3[1];
  dVar8 = *param_2 - *param_1;
  dVar3 = *param_1 - *param_3;
  dVar6 = param_2[1] - param_1[1];
  dVar7 = param_1[1] - param_3[1];
  dVar5 = (double)NEON_fmadd(dVar4,dVar8,dVar6 * -dVar2);
  dVar2 = (double)NEON_fmadd(dVar2,dVar7,dVar3 * -dVar4);
  dVar3 = (double)NEON_fmadd(dVar8,dVar7,dVar3 * -dVar6);
  if (dVar5 != 0.0) {
    uVar1 = 0;
    dVar2 = dVar2 * (1.0 / dVar5);
    if ((0.0 <= dVar2 && dVar2 < 1.0 || 0.0 <= dVar2 && dVar2 == 1.0) &&
       (dVar3 = dVar3 * (1.0 / dVar5), 0.0 <= dVar3 && dVar3 < 1.0 || 0.0 <= dVar3 && dVar3 == 1.0))
    {
      uVar1 = 1;
      *param_5 = dVar2;
      *param_6 = dVar3;
    }
    return uVar1;
  }
  return 3;
}


