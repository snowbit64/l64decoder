// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_composeTransform
// Entry Point: 00ebcd2c
// Size: 528 bytes
// Signature: undefined __cdecl fm_composeTransform(double * param_1, double * param_2, double * param_3, double * param_4)


/* FLOAT_MATH::fm_composeTransform(double const*, double const*, double const*, double*) */

void FLOAT_MATH::fm_composeTransform
               (double *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  double dVar15;
  undefined8 uVar16;
  double dVar17;
  undefined8 uVar18;
  double dVar19;
  undefined8 uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined8 uVar24;
  double dVar25;
  
  *param_4 = 1.0;
  param_4[5] = 1.0;
  param_4[10] = 1.0;
  param_4[0xf] = 1.0;
  param_4[2] = 0.0;
  param_4[1] = 0.0;
  param_4[4] = 0.0;
  param_4[3] = 0.0;
  param_4[7] = 0.0;
  param_4[6] = 0.0;
  param_4[9] = 0.0;
  param_4[8] = 0.0;
  param_4[0xc] = 0.0;
  param_4[0xb] = 0.0;
  param_4[0xe] = 0.0;
  param_4[0xd] = 0.0;
  dVar1 = param_2[1];
  dVar4 = param_2[2];
  dVar6 = *param_2;
  dVar9 = param_2[3];
  param_4[7] = 0.0;
  param_4[3] = 0.0;
  param_4[0xc] = 0.0;
  param_4[0xb] = 0.0;
  dVar7 = dVar6 * dVar1 - dVar4 * dVar9;
  dVar12 = dVar6 * dVar1 + dVar4 * dVar9;
  dVar15 = dVar1 * dVar4 - dVar6 * dVar9;
  dVar5 = dVar1 * dVar4 + dVar6 * dVar9;
  dVar2 = (double)NEON_fmadd(dVar1 * dVar1 + dVar4 * dVar4,0xc000000000000000,0x3ff0000000000000);
  dVar17 = dVar6 * dVar4 + dVar1 * dVar9;
  dVar9 = dVar6 * dVar4 - dVar1 * dVar9;
  dVar4 = (double)NEON_fmadd(dVar6 * dVar6 + dVar4 * dVar4,0xc000000000000000,0x3ff0000000000000);
  dVar7 = dVar7 + dVar7;
  dVar12 = dVar12 + dVar12;
  dVar15 = dVar15 + dVar15;
  dVar5 = dVar5 + dVar5;
  dVar17 = dVar17 + dVar17;
  dVar1 = (double)NEON_fmadd(dVar6 * dVar6 + dVar1 * dVar1,0xc000000000000000,0x3ff0000000000000);
  dVar9 = dVar9 + dVar9;
  *param_4 = dVar2;
  param_4[4] = dVar7;
  param_4[1] = dVar12;
  param_4[8] = dVar17;
  param_4[5] = dVar4;
  param_4[9] = dVar15;
  param_4[2] = dVar9;
  param_4[6] = dVar5;
  param_4[10] = dVar1;
  param_4[0xe] = 0.0;
  param_4[0xd] = 0.0;
  param_4[0xf] = 1.0;
  if (param_3 != (double *)0x0) {
    dVar6 = *param_3;
    dVar11 = param_3[1];
    if (((dVar6 != 1.0) || (dVar11 != 1.0)) || (dVar11 = 1.0, param_3[2] != 1.0)) {
      dVar23 = param_3[2];
      uVar16 = NEON_fmadd(dVar2,0,dVar11 * dVar12);
      uVar18 = NEON_fmadd(dVar7,0,dVar11 * dVar4);
      uVar20 = NEON_fmadd(dVar17,0,dVar11 * dVar15);
      param_4[0xf] = 1.0;
      uVar24 = NEON_fmadd(dVar2,dVar6,dVar12 * 0.0);
      uVar3 = NEON_fmadd(dVar2,0,dVar12 * 0.0);
      uVar13 = NEON_fmadd(dVar7,dVar6,dVar4 * 0.0);
      uVar10 = NEON_fmadd(dVar7,0,dVar4 * 0.0);
      uVar14 = NEON_fmadd(dVar17,dVar6,dVar15 * 0.0);
      uVar8 = NEON_fmadd(dVar17,0,dVar15 * 0.0);
      dVar15 = (double)NEON_fmadd(dVar9,0,uVar16);
      dVar19 = (double)NEON_fmadd(dVar5,0,uVar18);
      dVar12 = (double)NEON_fmadd(dVar9,0,uVar24);
      dVar25 = (double)NEON_fmadd(dVar9,dVar23,uVar3);
      dVar2 = (double)NEON_fmadd(dVar9,0,uVar3);
      dVar21 = (double)NEON_fmadd(dVar1,0,uVar20);
      dVar17 = (double)NEON_fmadd(dVar5,0,uVar13);
      dVar9 = (double)NEON_fmadd(dVar5,dVar23,uVar10);
      dVar5 = (double)NEON_fmadd(dVar5,0,uVar10);
      dVar7 = (double)NEON_fmadd(dVar1,0,uVar14);
      dVar22 = (double)NEON_fmadd(dVar1,dVar23,uVar8);
      dVar4 = (double)NEON_fmadd(dVar1,0,uVar8);
      param_4[2] = dVar25 + 0.0;
      param_4[3] = dVar2 + 0.0;
      dVar1 = (double)NEON_fmadd(dVar6,0,0);
      dVar2 = (double)NEON_fmadd(dVar23,0,0);
      *param_4 = dVar12 + 0.0;
      param_4[1] = dVar15 + 0.0;
      param_4[4] = dVar17 + 0.0;
      param_4[5] = dVar19 + 0.0;
      param_4[6] = dVar9 + 0.0;
      param_4[7] = dVar5 + 0.0;
      param_4[8] = dVar7 + 0.0;
      param_4[9] = dVar21 + 0.0;
      param_4[10] = dVar22 + 0.0;
      param_4[0xb] = dVar4 + 0.0;
      param_4[0xc] = dVar1 + 0.0;
      param_4[0xd] = dVar11 * 0.0 + 0.0;
      param_4[0xe] = dVar2 + 0.0;
    }
  }
  param_4[0xc] = *param_1;
  param_4[0xd] = param_1[1];
  param_4[0xe] = param_1[2];
  return;
}


