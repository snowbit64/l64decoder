// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_computeWindingOrder
// Entry Point: 00ebc7f8
// Size: 232 bytes
// Signature: undefined __cdecl fm_computeWindingOrder(double * param_1, double * param_2, double * param_3)


/* FLOAT_MATH::fm_computeWindingOrder(double const*, double const*, double const*) */

bool FLOAT_MATH::fm_computeWindingOrder(double *param_1,double *param_2,double *param_3)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  dVar5 = 0.0;
  dVar7 = 0.0;
  dVar6 = 1.0;
  dVar10 = *param_2 - *param_1;
  dVar8 = param_2[1] - param_1[1];
  dVar11 = param_2[2] - param_1[2];
  uVar1 = NEON_fmadd(dVar10,dVar10,dVar8 * dVar8);
  dVar4 = 1.0;
  dVar2 = (double)NEON_fmadd(dVar11,dVar11,uVar1);
  dVar3 = 0.0;
  if (1.000000011686097e-07 < SQRT(dVar2)) {
    dVar7 = 1.0 / SQRT(dVar2);
    dVar4 = dVar10 * dVar7;
    dVar5 = dVar8 * dVar7;
    dVar7 = dVar11 * dVar7;
  }
  dVar9 = param_3[1] - param_1[1];
  dVar11 = param_3[2] - param_1[2];
  dVar10 = *param_3 - *param_1;
  uVar1 = NEON_fmadd(dVar10,dVar10,dVar9 * dVar9);
  dVar2 = (double)NEON_fmadd(dVar11,dVar11,uVar1);
  dVar8 = 0.0;
  if (1.000000011686097e-07 < SQRT(dVar2)) {
    dVar8 = 1.0 / SQRT(dVar2);
    dVar6 = dVar10 * dVar8;
    dVar3 = dVar9 * dVar8;
    dVar8 = dVar11 * dVar8;
  }
  dVar10 = (double)NEON_fmadd(dVar7,dVar6,dVar8 * -dVar4);
  dVar2 = (double)NEON_fmadd(dVar5,dVar8,dVar3 * -dVar7);
  uVar1 = NEON_fmadd(dVar4,dVar3,dVar6 * -dVar5);
  dVar2 = (double)NEON_fmadd(uVar1,0,dVar2 + dVar10 * 0.0);
  return 0.0 < dVar2;
}


