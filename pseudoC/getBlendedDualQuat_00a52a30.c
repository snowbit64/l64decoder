// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getBlendedDualQuat
// Entry Point: 00a52a30
// Size: 668 bytes
// Signature: undefined __cdecl getBlendedDualQuat(float * param_1, uchar * param_2, float * param_3, float * param_4)


/* GsShape::getBlendedDualQuat(float const*, unsigned char const*, float const*, float (*) [4]) */

void GsShape::getBlendedDualQuat(float *param_1,uchar *param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  float *pfVar2;
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
  
  fVar3 = *param_3;
  pfVar1 = param_1 + *param_2;
  fVar4 = *pfVar1;
  *param_4 = fVar4 * fVar3;
  fVar5 = pfVar1[1];
  fVar6 = *param_3;
  param_4[1] = fVar5 * fVar6;
  fVar7 = pfVar1[2];
  fVar8 = *param_3;
  param_4[2] = fVar7 * fVar8;
  fVar9 = pfVar1[3];
  fVar10 = *param_3;
  param_4[3] = fVar9 * fVar10;
  fVar11 = pfVar1[4];
  fVar12 = *param_3;
  param_4[4] = fVar11 * fVar12;
  fVar13 = pfVar1[5];
  fVar14 = *param_3;
  param_4[5] = fVar13 * fVar14;
  fVar15 = pfVar1[6];
  fVar16 = *param_3;
  param_4[6] = fVar15 * fVar16;
  fVar17 = pfVar1[7];
  fVar19 = *param_3;
  param_4[7] = fVar17 * fVar19;
  pfVar2 = param_1 + param_2[1];
  uVar20 = NEON_fmadd(*pfVar2,*pfVar1,pfVar2[1] * pfVar1[1]);
  uVar20 = NEON_fmadd(pfVar2[2],pfVar1[2],uVar20);
  fVar21 = (float)NEON_fmadd(pfVar2[3],pfVar1[3],uVar20);
  fVar18 = -param_3[1];
  if (0.0 <= fVar21) {
    fVar18 = param_3[1];
  }
  fVar3 = (float)NEON_fmadd(*pfVar2,fVar18,fVar4 * fVar3);
  *param_4 = fVar3;
  fVar4 = (float)NEON_fmadd(pfVar2[1],fVar18,fVar5 * fVar6);
  param_4[1] = fVar4;
  fVar5 = (float)NEON_fmadd(pfVar2[2],fVar18,fVar7 * fVar8);
  param_4[2] = fVar5;
  fVar6 = (float)NEON_fmadd(pfVar2[3],fVar18,fVar9 * fVar10);
  param_4[3] = fVar6;
  fVar7 = (float)NEON_fmadd(pfVar2[4],fVar18,fVar11 * fVar12);
  param_4[4] = fVar7;
  fVar8 = (float)NEON_fmadd(pfVar2[5],fVar18,fVar13 * fVar14);
  param_4[5] = fVar8;
  fVar9 = (float)NEON_fmadd(pfVar2[6],fVar18,fVar15 * fVar16);
  param_4[6] = fVar9;
  fVar10 = (float)NEON_fmadd(pfVar2[7],fVar18,fVar17 * fVar19);
  param_4[7] = fVar10;
  pfVar2 = param_1 + param_2[2];
  uVar20 = NEON_fmadd(*pfVar2,*pfVar1,pfVar2[1] * pfVar1[1]);
  uVar20 = NEON_fmadd(pfVar2[2],pfVar1[2],uVar20);
  fVar11 = (float)NEON_fmadd(pfVar2[3],pfVar1[3],uVar20);
  fVar18 = -param_3[2];
  if (0.0 <= fVar11) {
    fVar18 = param_3[2];
  }
  fVar3 = (float)NEON_fmadd(*pfVar2,fVar18,fVar3);
  *param_4 = fVar3;
  fVar4 = (float)NEON_fmadd(pfVar2[1],fVar18,fVar4);
  param_4[1] = fVar4;
  fVar5 = (float)NEON_fmadd(pfVar2[2],fVar18,fVar5);
  param_4[2] = fVar5;
  fVar6 = (float)NEON_fmadd(pfVar2[3],fVar18,fVar6);
  param_4[3] = fVar6;
  fVar7 = (float)NEON_fmadd(pfVar2[4],fVar18,fVar7);
  param_4[4] = fVar7;
  fVar8 = (float)NEON_fmadd(pfVar2[5],fVar18,fVar8);
  param_4[5] = fVar8;
  fVar9 = (float)NEON_fmadd(pfVar2[6],fVar18,fVar9);
  param_4[6] = fVar9;
  fVar10 = (float)NEON_fmadd(pfVar2[7],fVar18,fVar10);
  param_4[7] = fVar10;
  pfVar2 = param_1 + param_2[3];
  uVar20 = NEON_fmadd(*pfVar2,*pfVar1,pfVar2[1] * pfVar1[1]);
  uVar20 = NEON_fmadd(pfVar2[2],pfVar1[2],uVar20);
  fVar11 = (float)NEON_fmadd(pfVar2[3],pfVar1[3],uVar20);
  fVar18 = -param_3[3];
  if (0.0 <= fVar11) {
    fVar18 = param_3[3];
  }
  fVar11 = (float)NEON_fmadd(*pfVar2,fVar18,fVar3);
  *param_4 = fVar11;
  fVar4 = (float)NEON_fmadd(pfVar2[1],fVar18,fVar4);
  param_4[1] = fVar4;
  fVar5 = (float)NEON_fmadd(pfVar2[2],fVar18,fVar5);
  uVar20 = NEON_fmadd(fVar11,fVar11,fVar4 * fVar4);
  param_4[2] = fVar5;
  uVar20 = NEON_fmadd(fVar5,fVar5,uVar20);
  fVar6 = (float)NEON_fmadd(pfVar2[3],fVar18,fVar6);
  fVar3 = (float)NEON_fmadd(fVar6,fVar6,uVar20);
  param_4[3] = fVar6;
  fVar7 = (float)NEON_fmadd(pfVar2[4],fVar18,fVar7);
  param_4[4] = fVar7;
  fVar8 = (float)NEON_fmadd(pfVar2[5],fVar18,fVar8);
  param_4[5] = fVar8;
  fVar3 = 1.0 / SQRT(fVar3);
  fVar9 = (float)NEON_fmadd(pfVar2[6],fVar18,fVar9);
  param_4[6] = fVar9;
  fVar18 = (float)NEON_fmadd(pfVar2[7],fVar18,fVar10);
  *param_4 = fVar3 * fVar11;
  param_4[1] = fVar3 * fVar4;
  param_4[2] = fVar3 * fVar5;
  param_4[3] = fVar3 * fVar6;
  param_4[4] = fVar3 * fVar7;
  param_4[5] = fVar3 * fVar8;
  param_4[6] = fVar3 * fVar9;
  param_4[7] = fVar3 * fVar18;
  return;
}


