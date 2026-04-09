// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: project
// Entry Point: 00aa7e88
// Size: 612 bytes
// Signature: undefined __cdecl project(float param_1, float param_2, float param_3, float * param_4, float * param_5, float * param_6, float * param_7, float * param_8, float * param_9)


/* RenderDeviceUtil::project(float, float, float, float const*, float const*, float const*, float*,
   float*, float*) */

void RenderDeviceUtil::project
               (float param_1,float param_2,float param_3,float *param_4,float *param_5,
               float *param_6,float *param_7,float *param_8,float *param_9)

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
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  
  fVar4 = param_5[4];
  fVar6 = param_5[5];
  fVar15 = param_4[7];
  fVar12 = param_4[3];
  fVar13 = param_4[4];
  fVar5 = *param_5;
  fVar11 = param_5[1];
  fVar1 = param_4[5];
  fVar21 = param_4[0xb];
  fVar18 = param_5[6];
  fVar14 = param_5[7];
  fVar2 = param_5[8];
  fVar7 = param_5[9];
  uVar19 = NEON_fmadd(fVar4,fVar12,fVar15 * fVar6);
  fVar30 = param_4[0xf];
  fVar17 = param_5[0xc];
  fVar3 = param_5[0xd];
  uVar23 = NEON_fmadd(fVar5,fVar12,fVar15 * fVar11);
  uVar27 = NEON_fmadd(fVar18,fVar21,uVar19);
  fVar20 = param_5[2];
  fVar31 = param_5[3];
  uVar19 = NEON_fmadd(fVar2,fVar12,fVar15 * fVar7);
  fVar28 = (float)NEON_fmadd(fVar14,fVar30,uVar27);
  uVar27 = NEON_fmadd(fVar20,fVar21,uVar23);
  uVar23 = NEON_fmadd(fVar17,fVar12,fVar15 * fVar3);
  fVar15 = param_5[10];
  fVar16 = param_5[0xb];
  fVar12 = *param_4;
  fVar8 = param_4[1];
  uVar24 = NEON_fmadd(fVar31,fVar30,uVar27);
  fVar9 = param_5[0xe];
  fVar10 = param_5[0xf];
  uVar27 = NEON_fmadd(fVar15,fVar21,uVar19);
  uVar19 = NEON_fmadd(fVar4,fVar12,fVar13 * fVar6);
  uVar25 = NEON_fmadd(param_1,uVar24,fVar28 * param_2);
  uVar24 = NEON_fmadd(fVar5,fVar12,fVar13 * fVar11);
  uVar23 = NEON_fmadd(fVar9,fVar21,uVar23);
  uVar22 = NEON_fmadd(fVar16,fVar30,uVar27);
  uVar27 = NEON_fmadd(fVar17,fVar12,fVar13 * fVar3);
  fVar28 = param_4[8];
  fVar29 = param_4[9];
  fVar21 = (float)NEON_fmadd(fVar10,fVar30,uVar23);
  uVar23 = NEON_fmadd(fVar2,fVar12,fVar13 * fVar7);
  fVar30 = (float)NEON_fmadd(param_3,uVar22,uVar25);
  uVar19 = NEON_fmadd(fVar18,fVar28,uVar19);
  uVar24 = NEON_fmadd(fVar20,fVar28,uVar24);
  fVar12 = param_4[0xc];
  fVar26 = param_4[0xd];
  uVar22 = NEON_fmadd(fVar15,fVar28,uVar23);
  uVar23 = NEON_fmadd(fVar9,fVar28,uVar27);
  fVar13 = (float)NEON_fmadd(fVar14,fVar12,uVar19);
  uVar19 = NEON_fmadd(fVar31,fVar12,uVar24);
  uVar27 = NEON_fmadd(fVar4,fVar8,fVar1 * fVar6);
  uVar22 = NEON_fmadd(fVar16,fVar12,uVar22);
  fVar21 = 1.0 / (fVar30 + fVar21);
  uVar24 = NEON_fmadd(fVar18,fVar29,uVar27);
  fVar12 = (float)NEON_fmadd(fVar10,fVar12,uVar23);
  uVar19 = NEON_fmadd(param_1,uVar19,fVar13 * param_2);
  uVar27 = NEON_fmadd(fVar5,fVar8,fVar1 * fVar11);
  fVar28 = (float)NEON_fmadd(fVar14,fVar26,uVar24);
  fVar13 = (float)NEON_fmadd(param_3,uVar22,uVar19);
  fVar30 = param_4[6];
  uVar23 = NEON_fmadd(fVar2,fVar8,fVar1 * fVar7);
  uVar27 = NEON_fmadd(fVar20,fVar29,uVar27);
  uVar19 = NEON_fmadd(fVar17,fVar8,fVar1 * fVar3);
  fVar8 = param_4[2];
  uVar24 = NEON_fmadd(fVar15,fVar29,uVar23);
  uVar22 = NEON_fmadd(fVar31,fVar26,uVar27);
  uVar23 = NEON_fmadd(fVar4,fVar8,fVar30 * fVar6);
  uVar27 = NEON_fmadd(fVar9,fVar29,uVar19);
  uVar25 = NEON_fmadd(fVar16,fVar26,uVar24);
  uVar24 = NEON_fmadd(param_1,uVar22,fVar28 * param_2);
  fVar6 = param_4[10];
  uVar19 = NEON_fmadd(fVar5,fVar8,fVar30 * fVar11);
  fVar4 = (float)NEON_fmadd(fVar10,fVar26,uVar27);
  uVar23 = NEON_fmadd(fVar18,fVar6,uVar23);
  fVar5 = (float)NEON_fmadd(param_3,uVar25,uVar24);
  fVar11 = param_4[0xe];
  uVar19 = NEON_fmadd(fVar20,fVar6,uVar19);
  fVar1 = (float)NEON_fmadd(fVar14,fVar11,uVar23);
  uVar23 = NEON_fmadd(fVar2,fVar8,fVar30 * fVar7);
  uVar19 = NEON_fmadd(fVar31,fVar11,uVar19);
  uVar24 = NEON_fmadd(fVar17,fVar8,fVar30 * fVar3);
  uVar27 = NEON_fmadd(fVar15,fVar6,uVar23);
  uVar23 = NEON_fmadd(param_1,uVar19,fVar1 * param_2);
  uVar24 = NEON_fmadd(fVar9,fVar6,uVar24);
  *param_7 = *param_6 + param_6[2] * ((fVar13 + fVar12) * fVar21 + 1.0) * 0.5;
  uVar19 = NEON_fmadd(fVar16,fVar11,uVar27);
  fVar2 = (float)NEON_fmadd(fVar10,fVar11,uVar24);
  fVar1 = (float)NEON_fmadd(param_3,uVar19,uVar23);
  *param_8 = param_6[1] + param_6[3] * ((fVar5 + fVar4) * fVar21 + 1.0) * 0.5;
  *param_9 = (fVar1 + fVar2) * fVar21;
  return;
}


