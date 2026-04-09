// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_quatRotate
// Entry Point: 00ebc3a4
// Size: 152 bytes
// Signature: undefined __cdecl fm_quatRotate(double * param_1, double * param_2, double * param_3)


/* FLOAT_MATH::fm_quatRotate(double const*, double const*, double*) */

void FLOAT_MATH::fm_quatRotate(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  
  dVar7 = param_2[1];
  dVar1 = param_2[2];
  dVar3 = *param_1;
  dVar2 = param_1[1];
  dVar10 = param_1[2];
  dVar9 = param_1[3];
  dVar6 = *param_2;
  uVar4 = NEON_fmadd(dVar9,dVar6,dVar2 * dVar1);
  uVar11 = NEON_fmadd(dVar9,dVar7,dVar6 * dVar10);
  dVar5 = (double)NEON_fmsub(dVar7,dVar10,uVar4);
  uVar4 = NEON_fmsub(dVar3,dVar6,dVar7 * -dVar2);
  dVar12 = (double)NEON_fmsub(dVar1,dVar3,uVar11);
  uVar8 = NEON_fmsub(dVar10,dVar1,uVar4);
  uVar4 = NEON_fmadd(dVar9,dVar1,dVar7 * dVar3);
  uVar11 = NEON_fmsub(uVar8,dVar3,dVar9 * dVar5);
  dVar1 = (double)NEON_fmsub(dVar6,dVar2,uVar4);
  uVar4 = NEON_fmsub(dVar12,dVar10,uVar11);
  dVar2 = (double)NEON_fmadd(dVar2,dVar1,uVar4);
  *param_3 = dVar2;
  uVar4 = NEON_fmsub(uVar8,param_1[1],dVar12 * param_1[3]);
  uVar4 = NEON_fmsub(dVar1,*param_1,uVar4);
  dVar2 = (double)NEON_fmadd(param_1[2],dVar5,uVar4);
  param_3[1] = dVar2;
  uVar4 = NEON_fmsub(uVar8,param_1[2],dVar1 * param_1[3]);
  uVar4 = NEON_fmsub(dVar5,param_1[1],uVar4);
  dVar1 = (double)NEON_fmadd(*param_1,dVar12,uVar4);
  param_3[2] = dVar1;
  return;
}


