// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_computePlane
// Entry Point: 00ebc644
// Size: 168 bytes
// Signature: undefined __cdecl fm_computePlane(double * param_1, double * param_2, double * param_3, double * param_4)


/* FLOAT_MATH::fm_computePlane(double const*, double const*, double const*, double*) */

undefined  [16]
FLOAT_MATH::fm_computePlane(double *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  undefined auVar2 [16];
  double dVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  dVar12 = param_1[1];
  dVar10 = param_1[2];
  dVar1 = *param_2 - *param_3;
  dVar6 = param_2[1] - param_3[1];
  dVar11 = *param_1;
  dVar5 = dVar12 - param_2[1];
  dVar8 = param_2[2] - param_3[2];
  dVar7 = dVar10 - param_2[2];
  dVar3 = dVar11 - *param_2;
  dVar9 = (double)NEON_fmadd(dVar8,dVar3,dVar7 * -dVar1);
  dVar7 = (double)NEON_fmadd(dVar6,dVar7,dVar5 * -dVar8);
  dVar3 = (double)NEON_fmadd(dVar1,dVar5,dVar3 * -dVar6);
  uVar4 = NEON_fmadd(dVar7,dVar7,dVar9 * dVar9);
  dVar5 = (double)NEON_fmadd(dVar3,dVar3,uVar4);
  dVar1 = 0.0;
  if (9.999999974752427e-07 <= SQRT(dVar5)) {
    dVar1 = 1.0 / SQRT(dVar5);
  }
  *param_4 = dVar7 * dVar1;
  param_4[1] = dVar9 * dVar1;
  param_4[2] = dVar3 * dVar1;
  uVar4 = NEON_fmadd(dVar7 * dVar1,dVar11,dVar12 * dVar9 * dVar1);
  dVar1 = (double)NEON_fmadd(dVar3 * dVar1,dVar10,uVar4);
  auVar2._0_8_ = 0.0 - dVar1;
  auVar2._8_8_ = 0;
  return auVar2;
}


