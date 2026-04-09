// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_raySphereIntersect
// Entry Point: 00ebdb48
// Size: 180 bytes
// Signature: undefined __cdecl fm_raySphereIntersect(double * param_1, double param_2, double * param_3, double * param_4, double param_5, double * param_6)


/* FLOAT_MATH::fm_raySphereIntersect(double const*, double, double const*, double const*, double,
   double*) */

undefined8
FLOAT_MATH::fm_raySphereIntersect
          (double *param_1,double param_2,double *param_3,double *param_4,double param_5,
          double *param_6)

{
  double dVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar6 = param_1[1] - param_3[1];
  uVar2 = 0;
  dVar7 = *param_1 - *param_3;
  dVar8 = param_1[2] - param_3[2];
  uVar5 = NEON_fmadd(dVar7,dVar7,dVar6 * dVar6);
  dVar9 = (double)NEON_fmadd(dVar8,dVar8,uVar5);
  dVar3 = -param_4[2];
  dVar4 = -*param_4;
  dVar1 = -param_4[1];
  if (param_2 * param_2 <= dVar9) {
    dVar3 = param_4[2];
    dVar4 = *param_4;
    dVar1 = param_4[1];
  }
  if (param_6 != (double *)0x0) {
    uVar5 = NEON_fmadd(dVar7,dVar4,dVar6 * dVar1);
    dVar6 = (double)NEON_fmadd(dVar8,dVar3,uVar5);
    dVar7 = (double)NEON_fmsub(dVar6,dVar6,dVar9);
    dVar7 = param_2 * param_2 - dVar7;
    if (0.0 < dVar7) {
      dVar6 = dVar6 - SQRT(dVar7);
      if (param_5 <= dVar6) {
        return 0;
      }
      dVar4 = (double)NEON_fmadd(dVar4,dVar6,*param_3);
      uVar2 = 1;
      *param_6 = dVar4;
      dVar4 = (double)NEON_fmadd(dVar1,dVar6,param_3[1]);
      param_6[1] = dVar4;
      dVar4 = (double)NEON_fmadd(dVar3,dVar6,param_3[2]);
      param_6[2] = dVar4;
    }
  }
  return uVar2;
}


