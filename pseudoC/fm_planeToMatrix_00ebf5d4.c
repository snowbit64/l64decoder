// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_planeToMatrix
// Entry Point: 00ebf5d4
// Size: 380 bytes
// Signature: undefined __cdecl fm_planeToMatrix(double * param_1, double * param_2)


/* FLOAT_MATH::fm_planeToMatrix(double const*, double*) */

void FLOAT_MATH::fm_planeToMatrix(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  dVar2 = *param_1;
  dVar1 = param_1[1];
  dVar7 = param_1[2];
  dVar8 = 0.0;
  dVar9 = -1.0;
  uVar3 = NEON_fmadd(dVar2,0,dVar1);
  dVar12 = (double)NEON_fmadd(dVar7,0,uVar3);
  dVar4 = 0.0;
  dVar6 = 0.0;
  if (-0.9999899864196777 < dVar12) {
    dVar8 = SQRT(dVar12 + 1.0 + dVar12 + 1.0);
    dVar12 = 1.0 / dVar8;
    dVar9 = (double)NEON_fnmsub(dVar1,0,dVar2);
    dVar6 = (double)NEON_fmadd(dVar2,0,dVar7 * -0.0);
    dVar8 = dVar8 * 0.5;
    dVar4 = (dVar7 + dVar1 * -0.0) * dVar12;
    dVar6 = dVar6 * dVar12;
    dVar9 = dVar9 * dVar12;
  }
  dVar15 = dVar4 * dVar6 - dVar9 * dVar8;
  dVar12 = dVar4 * dVar6 + dVar9 * dVar8;
  dVar7 = dVar4 * dVar9 + dVar6 * dVar8;
  dVar10 = (double)NEON_fmadd(dVar6 * dVar6 + dVar9 * dVar9,0xc000000000000000,0x3ff0000000000000);
  dVar14 = dVar6 * dVar9 - dVar4 * dVar8;
  dVar13 = dVar4 * dVar9 - dVar6 * dVar8;
  dVar2 = dVar6 * dVar9 + dVar4 * dVar8;
  dVar15 = dVar15 + dVar15;
  dVar7 = dVar7 + dVar7;
  dVar12 = dVar12 + dVar12;
  dVar9 = (double)NEON_fmadd(dVar4 * dVar4 + dVar9 * dVar9,0xc000000000000000,0x3ff0000000000000);
  dVar14 = dVar14 + dVar14;
  dVar13 = dVar13 + dVar13;
  dVar2 = dVar2 + dVar2;
  dVar1 = (double)NEON_fmadd(dVar4 * dVar4 + dVar6 * dVar6,0xc000000000000000,0x3ff0000000000000);
  *param_2 = dVar10;
  param_2[4] = dVar15;
  param_2[8] = dVar7;
  param_2[1] = dVar12;
  param_2[5] = dVar9;
  param_2[9] = dVar14;
  param_2[2] = dVar13;
  param_2[6] = dVar2;
  param_2[10] = dVar1;
  param_2[7] = 0.0;
  param_2[3] = 0.0;
  param_2[0xc] = 0.0;
  param_2[0xb] = 0.0;
  param_2[0xe] = 0.0;
  param_2[0xd] = 0.0;
  param_2[0xf] = 1.0;
  dVar4 = -param_1[3];
  uVar11 = NEON_fmadd(dVar10,0,dVar15 * dVar4);
  uVar3 = NEON_fmadd(dVar12,0,dVar9 * dVar4);
  uVar5 = NEON_fmadd(dVar13,0,dVar2 * dVar4);
  dVar2 = (double)NEON_fmadd(dVar7,0,uVar11);
  dVar9 = (double)NEON_fmadd(dVar14,0,uVar3);
  dVar1 = (double)NEON_fmadd(dVar1,0,uVar5);
  param_2[0xc] = dVar2 + 0.0;
  param_2[0xd] = dVar9 + 0.0;
  param_2[0xe] = dVar1 + 0.0;
  return;
}


