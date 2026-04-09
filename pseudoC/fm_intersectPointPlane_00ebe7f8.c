// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_intersectPointPlane
// Entry Point: 00ebe7f8
// Size: 184 bytes
// Signature: undefined __cdecl fm_intersectPointPlane(double * param_1, double * param_2, double * param_3, double * param_4)


/* FLOAT_MATH::fm_intersectPointPlane(double const*, double const*, double*, double const*) */

undefined8
FLOAT_MATH::fm_intersectPointPlane(double *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  
  dVar3 = *param_4;
  dVar2 = param_4[1];
  dVar1 = *param_1;
  uVar7 = NEON_fmadd(dVar1,dVar3,param_1[1] * dVar2);
  dVar4 = param_4[2];
  dVar6 = param_4[3];
  uVar11 = NEON_fmadd(*param_2,dVar3,dVar2 * param_2[1]);
  dVar9 = (double)NEON_fmadd(param_1[2],dVar4,uVar7);
  dVar9 = dVar9 + dVar6;
  dVar10 = (double)NEON_fmadd(param_2[2],dVar4,uVar11);
  if ((dVar9 <= 0.0) && (dVar6 + dVar10 <= 0.0)) {
    return 0;
  }
  if ((0.0 <= dVar9) && (0.0 <= dVar6 + dVar10)) {
    return 0;
  }
  dVar10 = param_2[1] - param_1[1];
  dVar8 = *param_2 - dVar1;
  dVar5 = param_2[2] - param_1[2];
  uVar7 = NEON_fmadd(dVar8,dVar3,dVar2 * dVar10);
  dVar2 = (double)NEON_fmadd(dVar5,dVar4,uVar7);
  dVar2 = -(dVar6 + (dVar9 - dVar6)) / dVar2;
  dVar1 = (double)NEON_fmadd(dVar8,dVar2,dVar1);
  *param_3 = dVar1;
  dVar1 = (double)NEON_fmadd(dVar10,dVar2,param_1[1]);
  param_3[1] = dVar1;
  dVar1 = (double)NEON_fmadd(dVar5,dVar2,param_1[2]);
  param_3[2] = dVar1;
  return 1;
}


