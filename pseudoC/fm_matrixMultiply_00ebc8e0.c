// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_matrixMultiply
// Entry Point: 00ebc8e0
// Size: 420 bytes
// Signature: undefined __cdecl fm_matrixMultiply(double * param_1, double * param_2, double * param_3)


/* FLOAT_MATH::fm_matrixMultiply(double const*, double const*, double*) */

void FLOAT_MATH::fm_matrixMultiply(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
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
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined8 uVar20;
  double dVar21;
  undefined8 uVar22;
  double dVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  double dVar26;
  undefined8 uVar27;
  double dVar28;
  double dVar29;
  undefined8 uVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined8 uVar34;
  double dVar35;
  double dVar36;
  undefined8 uVar37;
  double dVar38;
  
  dVar1 = param_2[4];
  dVar2 = param_2[5];
  dVar12 = *param_1;
  dVar4 = param_1[1];
  dVar3 = param_2[6];
  dVar18 = param_2[7];
  dVar19 = *param_2;
  dVar6 = param_2[1];
  dVar8 = param_2[2];
  dVar11 = param_2[3];
  dVar14 = param_1[2];
  dVar16 = param_1[3];
  uVar24 = NEON_fmadd(dVar12,dVar19,dVar4 * dVar1);
  uVar27 = NEON_fmadd(dVar12,dVar6,dVar4 * dVar2);
  dVar5 = param_2[8];
  dVar7 = param_2[9];
  uVar20 = NEON_fmadd(dVar12,dVar8,dVar4 * dVar3);
  uVar22 = NEON_fmadd(dVar12,dVar11,dVar4 * dVar18);
  dVar4 = param_2[10];
  dVar13 = param_2[0xb];
  dVar36 = param_1[4];
  dVar29 = param_1[5];
  uVar25 = NEON_fmadd(dVar14,dVar5,uVar24);
  uVar27 = NEON_fmadd(dVar14,dVar7,uVar27);
  dVar32 = param_2[0xc];
  dVar33 = param_2[0xd];
  uVar24 = NEON_fmadd(dVar14,dVar4,uVar20);
  uVar20 = NEON_fmadd(dVar14,dVar13,uVar22);
  dVar23 = param_2[0xe];
  dVar35 = param_2[0xf];
  dVar26 = (double)NEON_fmadd(dVar16,dVar32,uVar25);
  dVar28 = (double)NEON_fmadd(dVar16,dVar33,uVar27);
  dVar21 = (double)NEON_fmadd(dVar16,dVar23,uVar24);
  dVar15 = (double)NEON_fmadd(dVar16,dVar35,uVar20);
  uVar22 = NEON_fmadd(dVar36,dVar19,dVar1 * dVar29);
  dVar16 = param_1[8];
  dVar12 = param_1[9];
  uVar20 = NEON_fmadd(dVar36,dVar6,dVar2 * dVar29);
  uVar24 = NEON_fmadd(dVar36,dVar8,dVar3 * dVar29);
  dVar14 = param_1[6];
  dVar9 = param_1[7];
  uVar25 = NEON_fmadd(dVar36,dVar11,dVar18 * dVar29);
  uVar27 = NEON_fmadd(dVar14,dVar5,uVar22);
  uVar20 = NEON_fmadd(dVar14,dVar7,uVar20);
  uVar24 = NEON_fmadd(dVar14,dVar4,uVar24);
  uVar30 = NEON_fmadd(dVar14,dVar13,uVar25);
  uVar37 = NEON_fmadd(dVar16,dVar19,dVar1 * dVar12);
  uVar22 = NEON_fmadd(dVar16,dVar6,dVar2 * dVar12);
  uVar25 = NEON_fmadd(dVar16,dVar8,dVar3 * dVar12);
  uVar34 = NEON_fmadd(dVar16,dVar11,dVar18 * dVar12);
  dVar29 = param_1[10];
  dVar14 = param_1[0xb];
  dVar17 = (double)NEON_fmadd(dVar9,dVar32,uVar27);
  dVar12 = (double)NEON_fmadd(dVar9,dVar33,uVar20);
  dVar16 = (double)NEON_fmadd(dVar9,dVar23,uVar24);
  dVar31 = (double)NEON_fmadd(dVar9,dVar35,uVar30);
  uVar27 = NEON_fmadd(dVar29,dVar5,uVar37);
  uVar20 = NEON_fmadd(dVar29,dVar7,uVar22);
  uVar24 = NEON_fmadd(dVar29,dVar4,uVar25);
  uVar22 = NEON_fmadd(dVar29,dVar13,uVar34);
  dVar10 = param_1[0xc];
  dVar36 = param_1[0xd];
  dVar38 = (double)NEON_fmadd(dVar14,dVar32,uVar27);
  dVar9 = (double)NEON_fmadd(dVar14,dVar33,uVar20);
  dVar29 = (double)NEON_fmadd(dVar14,dVar23,uVar24);
  dVar14 = (double)NEON_fmadd(dVar14,dVar35,uVar22);
  uVar20 = NEON_fmadd(dVar10,dVar19,dVar1 * dVar36);
  uVar24 = NEON_fmadd(dVar10,dVar6,dVar2 * dVar36);
  dVar1 = param_1[0xe];
  dVar6 = param_1[0xf];
  uVar22 = NEON_fmadd(dVar10,dVar8,dVar3 * dVar36);
  uVar25 = NEON_fmadd(dVar10,dVar11,dVar18 * dVar36);
  param_3[5] = dVar12;
  param_3[6] = dVar16;
  uVar20 = NEON_fmadd(dVar1,dVar5,uVar20);
  uVar24 = NEON_fmadd(dVar1,dVar7,uVar24);
  uVar22 = NEON_fmadd(dVar1,dVar4,uVar22);
  uVar25 = NEON_fmadd(dVar1,dVar13,uVar25);
  param_3[9] = dVar9;
  param_3[10] = dVar29;
  dVar1 = (double)NEON_fmadd(dVar6,dVar32,uVar20);
  dVar2 = (double)NEON_fmadd(dVar6,dVar33,uVar24);
  dVar3 = (double)NEON_fmadd(dVar6,dVar23,uVar22);
  dVar4 = (double)NEON_fmadd(dVar6,dVar35,uVar25);
  *param_3 = dVar26;
  param_3[1] = dVar28;
  param_3[2] = dVar21;
  param_3[3] = dVar15;
  param_3[4] = dVar17;
  param_3[7] = dVar31;
  param_3[8] = dVar38;
  param_3[0xb] = dVar14;
  param_3[0xc] = dVar1;
  param_3[0xd] = dVar2;
  param_3[0xe] = dVar3;
  param_3[0xf] = dVar4;
  return;
}


