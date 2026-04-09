// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_planeToQuat
// Entry Point: 00ebf878
// Size: 328 bytes
// Signature: undefined __cdecl fm_planeToQuat(double * param_1, double * param_2, double * param_3)


/* FLOAT_MATH::fm_planeToQuat(double const*, double*, double*) */

void FLOAT_MATH::fm_planeToQuat(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  dVar3 = *param_1;
  dVar2 = param_1[1];
  dVar1 = 0.0;
  dVar5 = param_1[2];
  uVar8 = NEON_fmadd(dVar3,0,dVar2);
  dVar9 = (double)NEON_fmadd(dVar5,0,uVar8);
  if (dVar9 <= -0.9999899864196777) {
    dVar9 = 0.0;
    dVar10 = 0.0;
    dVar3 = -1.0;
    *param_2 = 0.0;
  }
  else {
    dVar10 = SQRT(dVar9 + 1.0 + dVar9 + 1.0);
    dVar13 = 1.0 / dVar10;
    dVar9 = (double)NEON_fmadd(dVar3,0,dVar5 * -0.0);
    dVar3 = (double)NEON_fnmsub(dVar2,0,dVar3);
    dVar1 = (dVar5 + dVar2 * -0.0) * dVar13;
    dVar9 = dVar9 * dVar13;
    dVar3 = dVar3 * dVar13;
    dVar10 = dVar10 * 0.5;
    *param_2 = dVar1;
  }
  param_2[1] = dVar9;
  param_2[2] = dVar3;
  param_2[3] = dVar10;
  dVar6 = dVar1 * dVar9 - dVar3 * dVar10;
  dVar15 = dVar9 * dVar3 + dVar1 * dVar10;
  dVar11 = dVar1 * dVar9 + dVar3 * dVar10;
  dVar14 = dVar1 * dVar3 + dVar9 * dVar10;
  dVar13 = (double)NEON_fmadd(dVar1 * dVar1 + dVar3 * dVar3,0xc000000000000000,0x3ff0000000000000);
  dVar2 = dVar1 * dVar3 - dVar9 * dVar10;
  dVar5 = param_1[3];
  uVar8 = NEON_fmadd(dVar9 * dVar9 + dVar3 * dVar3,0xc000000000000000,0x3ff0000000000000);
  dVar3 = dVar9 * dVar3 - dVar1 * dVar10;
  uVar7 = NEON_fmadd(uVar8,0,dVar5 * (dVar6 + dVar6));
  uVar4 = NEON_fmadd(dVar11 + dVar11,0,dVar5 * dVar13);
  uVar12 = NEON_fmadd(dVar1 * dVar1 + dVar9 * dVar9,0xc000000000000000,0x3ff0000000000000);
  uVar8 = NEON_fmadd(dVar2 + dVar2,0,dVar5 * (dVar15 + dVar15));
  dVar2 = (double)NEON_fmadd(dVar14 + dVar14,0,uVar7);
  dVar3 = (double)NEON_fmadd(dVar3 + dVar3,0,uVar4);
  dVar1 = (double)NEON_fmadd(uVar12,0,uVar8);
  *param_3 = dVar2 + 0.0;
  param_3[1] = dVar3 + 0.0;
  param_3[2] = dVar1 + 0.0;
  return;
}


