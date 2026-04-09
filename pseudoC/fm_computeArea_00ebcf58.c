// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_computeArea
// Entry Point: 00ebcf58
// Size: 156 bytes
// Signature: undefined __cdecl fm_computeArea(double * param_1, double * param_2, double * param_3)


/* FLOAT_MATH::fm_computeArea(double const*, double const*, double const*) */

undefined  [16] FLOAT_MATH::fm_computeArea(double *param_1,double *param_2,double *param_3)

{
  undefined8 uVar1;
  double dVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  dVar6 = param_2[1] - param_1[1];
  dVar9 = param_2[2] - param_1[2];
  dVar7 = *param_2 - *param_1;
  uVar1 = NEON_fmadd(dVar7,dVar7,dVar6 * dVar6);
  dVar2 = (double)NEON_fmadd(dVar9,dVar9,uVar1);
  dVar2 = SQRT(dVar2);
  if (dVar2 == 0.0) {
    auVar3._0_8_ = dVar2 * 0.5 * 0.0;
    auVar3._8_8_ = 0;
    return auVar3;
  }
  dVar5 = param_3[1] - param_1[1];
  dVar12 = param_3[2] - param_1[2];
  dVar10 = *param_3 - *param_1;
  dVar11 = (double)NEON_fmadd(dVar7,dVar10,dVar6 * dVar5);
  dVar11 = (double)NEON_fnmadd(dVar9,dVar12,-dVar11);
  dVar11 = dVar11 / (dVar2 * dVar2);
  dVar6 = (double)NEON_fmadd(dVar11,dVar6,dVar5);
  uVar1 = NEON_fmadd(dVar11,dVar7,dVar10);
  uVar8 = NEON_fmadd(dVar11,dVar9,dVar12);
  uVar1 = NEON_fmadd(uVar1,uVar1,dVar6 * dVar6);
  dVar6 = (double)NEON_fmadd(uVar8,uVar8,uVar1);
  auVar4._0_8_ = dVar2 * 0.5 * SQRT(dVar6);
  auVar4._8_8_ = 0;
  return auVar4;
}


