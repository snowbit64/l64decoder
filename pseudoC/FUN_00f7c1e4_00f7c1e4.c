// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f7c1e4
// Entry Point: 00f7c1e4
// Size: 588 bytes
// Signature: undefined FUN_00f7c1e4(void)


void FUN_00f7c1e4(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,float param_7,float param_8,float *param_9,float *param_10,
                 float *param_11)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  fVar11 = param_10[4];
  fVar12 = param_10[5];
  fVar3 = param_10[8];
  fVar6 = param_10[9];
  fVar14 = param_10[6];
  param_5 = param_5 + param_1;
  fVar15 = *param_10;
  fVar17 = param_10[1];
  fVar8 = param_10[10];
  fVar21 = param_10[2];
  param_9[3] = 0.0;
  fVar2 = (float)NEON_fnmsub(fVar3,param_3,fVar11 * param_4);
  fVar4 = (float)NEON_fnmsub(fVar6,param_3,fVar12 * param_4);
  fVar7 = (float)NEON_fnmsub(fVar8,param_3,fVar14 * param_4);
  fVar9 = (float)NEON_fnmsub(fVar15,param_4,fVar3 * param_2);
  fVar18 = (float)NEON_fnmsub(fVar17,param_4,fVar6 * param_2);
  fVar17 = (float)NEON_fnmsub(fVar12,param_2,fVar17 * param_3);
  fVar15 = (float)NEON_fnmsub(fVar11,param_2,fVar15 * param_3);
  fVar14 = (float)NEON_fnmsub(fVar14,param_2,fVar21 * param_3);
  fVar22 = (float)NEON_fnmsub(fVar21,param_4,fVar8 * param_2);
  fVar23 = (float)NEON_fnmsub(param_11[8],param_7,param_11[4] * param_8);
  fVar21 = (float)NEON_fnmsub(param_11[5],param_6,param_11[1] * param_7);
  fVar24 = (float)NEON_fnmsub(fVar18,param_2,fVar9 * param_3);
  fVar20 = (float)NEON_fnmsub(*param_11,param_8,param_11[8] * param_6);
  uVar16 = NEON_fnmsub(param_11[9],param_7,param_11[5] * param_8);
  fVar3 = (float)NEON_fnmsub(param_11[1],param_8,param_11[9] * param_6);
  fVar11 = (float)NEON_fnmsub(param_11[6],param_6,param_11[2] * param_7);
  fVar6 = (float)NEON_fnmsub(fVar14,param_3,fVar17 * param_4);
  uVar5 = NEON_fnmsub(param_11[4],param_6,*param_11 * param_7);
  fVar8 = (float)NEON_fnmsub(param_11[10],param_7,param_11[6] * param_8);
  fVar19 = (float)NEON_fnmsub(fVar22,param_3,fVar18 * param_4);
  fVar12 = (float)NEON_fnmsub(fVar3,param_6,fVar20 * param_7);
  uVar10 = NEON_fmadd(fVar9,param_4,param_5);
  uVar1 = NEON_fnmsub(param_11[2],param_8,param_11[10] * param_6);
  fVar14 = (float)NEON_fnmsub(fVar15,param_4,fVar14 * param_2);
  uVar13 = NEON_fmadd(fVar17,param_2,param_5);
  fVar17 = (float)NEON_fnmsub(uVar5,param_8,fVar11 * param_6);
  fVar18 = (float)NEON_fmadd(fVar20,param_8,uVar10);
  uVar10 = NEON_fmadd(fVar7,param_3,param_5);
  fVar20 = (float)NEON_fnmsub(uVar1,param_7,fVar3 * param_8);
  fVar22 = (float)NEON_fmadd(uVar1,param_6,fVar22 * param_2);
  fVar9 = (float)NEON_fmadd(uVar5,param_7,fVar15 * param_3);
  fVar15 = (float)NEON_fmadd(fVar21,param_6,uVar13);
  fVar12 = fVar12 + fVar24;
  fVar17 = fVar17 + fVar14;
  fVar14 = (float)NEON_fnmsub(fVar11,param_7,fVar21 * param_8);
  fVar20 = fVar20 + fVar19;
  fVar3 = (float)NEON_fmadd(fVar8,param_7,uVar10);
  fVar15 = fVar15 - fVar9;
  fVar21 = (float)NEON_fmadd(uVar16,param_8,fVar4 * param_4);
  fVar18 = fVar18 - fVar22;
  fVar11 = (float)NEON_fnmsub(fVar2,param_4,fVar7 * param_2);
  fVar9 = (float)NEON_fnmsub(fVar23,param_8,fVar8 * param_6);
  fVar14 = fVar14 + fVar6;
  fVar3 = fVar3 - fVar21;
  fVar19 = (float)NEON_fnmsub(fVar18,fVar15,fVar17 * fVar12);
  fVar6 = (float)NEON_fnmsub(fVar4,param_2,fVar2 * param_3);
  param_9[7] = 0.0;
  fVar8 = (float)NEON_fnmsub(uVar16,param_6,fVar23 * param_7);
  fVar9 = fVar9 + fVar11;
  fVar4 = (float)NEON_fnmsub(fVar14,fVar12,fVar20 * fVar15);
  fVar8 = fVar8 + fVar6;
  param_9[0xb] = 0.0;
  fVar11 = (float)NEON_fnmsub(fVar20,fVar17,fVar14 * fVar18);
  uVar10 = NEON_fmadd(fVar4,fVar9,fVar19 * fVar3);
  fVar7 = (float)NEON_fmadd(fVar11,fVar8,uVar10);
  fVar2 = (float)NEON_fnmsub(fVar9,fVar12,fVar18 * fVar8);
  fVar7 = 1.0 / fVar7;
  fVar21 = (float)NEON_fnmsub(fVar3,fVar15,fVar14 * fVar8);
  fVar15 = (float)NEON_fnmsub(fVar17,fVar8,fVar9 * fVar15);
  fVar6 = (float)NEON_fnmsub(fVar20,fVar8,fVar3 * fVar12);
  fVar8 = (float)NEON_fnmsub(fVar9,fVar14,fVar3 * fVar17);
  fVar3 = (float)NEON_fnmsub(fVar3,fVar18,fVar9 * fVar20);
  *param_9 = fVar7 * fVar19;
  param_9[1] = fVar7 * fVar15;
  param_9[2] = fVar7 * fVar2;
  param_9[4] = fVar7 * fVar4;
  param_9[5] = fVar7 * fVar21;
  param_9[6] = fVar7 * fVar6;
  param_9[8] = fVar7 * fVar11;
  param_9[9] = fVar7 * fVar8;
  param_9[10] = fVar7 * fVar3;
  return;
}


