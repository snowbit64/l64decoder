// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_multiplyTransform
// Entry Point: 00eb86f0
// Size: 420 bytes
// Signature: undefined __cdecl fm_multiplyTransform(float * param_1, float * param_2, float * param_3)


/* FLOAT_MATH::fm_multiplyTransform(float const*, float const*, float*) */

void FLOAT_MATH::fm_multiplyTransform(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined4 uVar34;
  float fVar35;
  float fVar36;
  undefined4 uVar37;
  float fVar38;
  
  fVar1 = param_2[4];
  fVar2 = param_2[5];
  fVar12 = *param_1;
  fVar4 = param_1[1];
  fVar3 = param_2[6];
  fVar18 = param_2[7];
  fVar19 = *param_2;
  fVar6 = param_2[1];
  fVar8 = param_2[2];
  fVar11 = param_2[3];
  fVar14 = param_1[2];
  fVar16 = param_1[3];
  fVar36 = param_1[4];
  fVar29 = param_1[5];
  uVar24 = NEON_fmadd(fVar12,fVar19,fVar4 * fVar1);
  uVar27 = NEON_fmadd(fVar12,fVar6,fVar4 * fVar2);
  fVar5 = param_2[8];
  fVar7 = param_2[9];
  uVar20 = NEON_fmadd(fVar12,fVar8,fVar4 * fVar3);
  uVar22 = NEON_fmadd(fVar12,fVar11,fVar4 * fVar18);
  fVar4 = param_2[10];
  fVar13 = param_2[0xb];
  fVar32 = param_2[0xc];
  fVar33 = param_2[0xd];
  uVar25 = NEON_fmadd(fVar14,fVar5,uVar24);
  uVar27 = NEON_fmadd(fVar14,fVar7,uVar27);
  uVar24 = NEON_fmadd(fVar14,fVar4,uVar20);
  uVar22 = NEON_fmadd(fVar14,fVar13,uVar22);
  fVar23 = param_2[0xe];
  fVar35 = param_2[0xf];
  fVar26 = (float)NEON_fmadd(fVar16,fVar32,uVar25);
  fVar28 = (float)NEON_fmadd(fVar16,fVar33,uVar27);
  uVar20 = NEON_fmadd(fVar36,fVar6,fVar2 * fVar29);
  fVar21 = (float)NEON_fmadd(fVar16,fVar23,uVar24);
  fVar15 = (float)NEON_fmadd(fVar16,fVar35,uVar22);
  uVar24 = NEON_fmadd(fVar36,fVar19,fVar1 * fVar29);
  fVar16 = param_1[8];
  fVar12 = param_1[9];
  fVar14 = param_1[6];
  fVar9 = param_1[7];
  uVar22 = NEON_fmadd(fVar36,fVar8,fVar3 * fVar29);
  uVar25 = NEON_fmadd(fVar36,fVar11,fVar18 * fVar29);
  uVar27 = NEON_fmadd(fVar14,fVar5,uVar24);
  uVar20 = NEON_fmadd(fVar14,fVar7,uVar20);
  uVar22 = NEON_fmadd(fVar14,fVar4,uVar22);
  uVar30 = NEON_fmadd(fVar14,fVar13,uVar25);
  uVar37 = NEON_fmadd(fVar16,fVar19,fVar1 * fVar12);
  uVar24 = NEON_fmadd(fVar16,fVar6,fVar2 * fVar12);
  uVar25 = NEON_fmadd(fVar16,fVar8,fVar3 * fVar12);
  uVar34 = NEON_fmadd(fVar16,fVar11,fVar18 * fVar12);
  fVar29 = param_1[10];
  fVar14 = param_1[0xb];
  fVar17 = (float)NEON_fmadd(fVar9,fVar32,uVar27);
  fVar12 = (float)NEON_fmadd(fVar9,fVar33,uVar20);
  fVar16 = (float)NEON_fmadd(fVar9,fVar23,uVar22);
  fVar31 = (float)NEON_fmadd(fVar9,fVar35,uVar30);
  uVar27 = NEON_fmadd(fVar29,fVar5,uVar37);
  uVar20 = NEON_fmadd(fVar29,fVar7,uVar24);
  uVar22 = NEON_fmadd(fVar29,fVar4,uVar25);
  uVar24 = NEON_fmadd(fVar29,fVar13,uVar34);
  fVar10 = param_1[0xc];
  fVar36 = param_1[0xd];
  fVar38 = (float)NEON_fmadd(fVar14,fVar32,uVar27);
  fVar9 = (float)NEON_fmadd(fVar14,fVar33,uVar20);
  fVar29 = (float)NEON_fmadd(fVar14,fVar23,uVar22);
  fVar14 = (float)NEON_fmadd(fVar14,fVar35,uVar24);
  uVar20 = NEON_fmadd(fVar10,fVar19,fVar1 * fVar36);
  uVar22 = NEON_fmadd(fVar10,fVar6,fVar2 * fVar36);
  fVar1 = param_1[0xe];
  fVar6 = param_1[0xf];
  uVar24 = NEON_fmadd(fVar10,fVar8,fVar3 * fVar36);
  uVar25 = NEON_fmadd(fVar10,fVar11,fVar18 * fVar36);
  param_3[5] = fVar12;
  param_3[6] = fVar16;
  uVar20 = NEON_fmadd(fVar1,fVar5,uVar20);
  uVar22 = NEON_fmadd(fVar1,fVar7,uVar22);
  uVar24 = NEON_fmadd(fVar1,fVar4,uVar24);
  uVar25 = NEON_fmadd(fVar1,fVar13,uVar25);
  param_3[9] = fVar9;
  param_3[10] = fVar29;
  fVar1 = (float)NEON_fmadd(fVar6,fVar32,uVar20);
  fVar2 = (float)NEON_fmadd(fVar6,fVar33,uVar22);
  fVar3 = (float)NEON_fmadd(fVar6,fVar23,uVar24);
  fVar4 = (float)NEON_fmadd(fVar6,fVar35,uVar25);
  *param_3 = fVar26;
  param_3[1] = fVar28;
  param_3[2] = fVar21;
  param_3[3] = fVar15;
  param_3[4] = fVar17;
  param_3[7] = fVar31;
  param_3[8] = fVar38;
  param_3[0xb] = fVar14;
  param_3[0xc] = fVar1;
  param_3[0xd] = fVar2;
  param_3[0xe] = fVar3;
  param_3[0xf] = fVar4;
  return;
}


