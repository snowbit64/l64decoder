// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_lineSphereIntersect
// Entry Point: 00ebda10
// Size: 312 bytes
// Signature: undefined __cdecl fm_lineSphereIntersect(double * param_1, double param_2, double * param_3, double * param_4, double * param_5)


/* FLOAT_MATH::fm_lineSphereIntersect(double const*, double, double const*, double const*, double*)
    */

undefined8
FLOAT_MATH::fm_lineSphereIntersect
          (double *param_1,double param_2,double *param_3,double *param_4,double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  dVar4 = *param_3;
  dVar11 = param_3[1];
  dVar10 = param_3[2];
  dVar8 = *param_4 - dVar4;
  dVar7 = param_4[1] - dVar11;
  dVar9 = param_4[2] - dVar10;
  uVar5 = NEON_fmadd(dVar8,dVar8,dVar7 * dVar7);
  dVar6 = (double)NEON_fmadd(dVar9,dVar9,uVar5);
  dVar6 = SQRT(dVar6);
  if (dVar6 <= 0.0) {
    uVar5 = NEON_fmadd(*param_1 - dVar4,*param_1 - dVar4,
                       (param_1[1] - dVar11) * (param_1[1] - dVar11));
    dVar6 = (double)NEON_fmadd(param_1[2] - dVar10,param_1[2] - dVar10,uVar5);
    if (param_2 * param_2 <= dVar6) {
      return 0;
    }
    if (param_5 == (double *)0x0) {
      return 1;
    }
    *param_5 = dVar4;
    param_5[1] = param_3[1];
    dVar4 = param_3[2];
  }
  else {
    dVar14 = 1.0 / dVar6;
    dVar11 = param_1[1] - dVar11;
    dVar10 = param_1[2] - dVar10;
    dVar12 = *param_1 - dVar4;
    uVar5 = NEON_fmadd(dVar12,dVar12,dVar11 * dVar11);
    dVar13 = (double)NEON_fmadd(dVar10,dVar10,uVar5);
    dVar3 = -(dVar9 * dVar14);
    dVar1 = -(dVar8 * dVar14);
    dVar2 = -(dVar7 * dVar14);
    if (param_2 * param_2 <= dVar13) {
      dVar3 = dVar9 * dVar14;
      dVar1 = dVar8 * dVar14;
      dVar2 = dVar7 * dVar14;
    }
    if (param_5 == (double *)0x0) {
      return 0;
    }
    uVar5 = NEON_fmadd(dVar12,dVar1,dVar11 * dVar2);
    dVar7 = (double)NEON_fmadd(dVar10,dVar3,uVar5);
    dVar8 = (double)NEON_fmsub(dVar7,dVar7,dVar13);
    dVar8 = param_2 * param_2 - dVar8;
    if (dVar8 <= 0.0) {
      return 0;
    }
    dVar7 = dVar7 - SQRT(dVar8);
    if (dVar6 <= dVar7) {
      return 0;
    }
    dVar4 = (double)NEON_fmadd(dVar1,dVar7,dVar4);
    *param_5 = dVar4;
    dVar4 = (double)NEON_fmadd(dVar2,dVar7,param_3[1]);
    param_5[1] = dVar4;
    dVar4 = (double)NEON_fmadd(dVar3,dVar7,param_3[2]);
  }
  param_5[2] = dVar4;
  return 1;
}


