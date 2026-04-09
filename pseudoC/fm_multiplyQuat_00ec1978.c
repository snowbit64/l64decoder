// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_multiplyQuat
// Entry Point: 00ec1978
// Size: 96 bytes
// Signature: undefined __cdecl fm_multiplyQuat(double * param_1, double * param_2, double * param_3)


/* FLOAT_MATH::fm_multiplyQuat(double const*, double const*, double*) */

void FLOAT_MATH::fm_multiplyQuat(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  
  dVar1 = *param_1;
  dVar5 = param_1[1];
  dVar8 = param_2[2];
  dVar2 = param_2[3];
  dVar4 = *param_2;
  dVar12 = param_2[1];
  dVar7 = param_1[2];
  dVar10 = param_1[3];
  uVar9 = NEON_fmadd(dVar10,dVar4,dVar2 * dVar1);
  uVar11 = NEON_fmadd(dVar10,dVar12,dVar2 * dVar5);
  uVar3 = NEON_fmadd(dVar10,dVar2,dVar4 * -dVar1);
  uVar6 = NEON_fmadd(dVar10,dVar8,dVar2 * dVar7);
  uVar9 = NEON_fmadd(dVar5,dVar8,uVar9);
  uVar11 = NEON_fmadd(dVar7,dVar4,uVar11);
  uVar3 = NEON_fmsub(dVar5,dVar12,uVar3);
  uVar6 = NEON_fmadd(dVar1,dVar12,uVar6);
  dVar10 = (double)NEON_fmsub(dVar12,dVar7,uVar9);
  dVar1 = (double)NEON_fmsub(dVar8,dVar1,uVar11);
  dVar2 = (double)NEON_fmsub(dVar7,dVar8,uVar3);
  dVar4 = (double)NEON_fmsub(dVar4,dVar5,uVar6);
  *param_3 = dVar10;
  param_3[1] = dVar1;
  param_3[2] = dVar4;
  param_3[3] = dVar2;
  return;
}


