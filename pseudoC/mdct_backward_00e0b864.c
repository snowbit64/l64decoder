// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: mdct_backward
// Entry Point: 00e0b864
// Size: 1052 bytes
// Signature: undefined mdct_backward(void)


void mdct_backward(uint *param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  float *pfVar7;
  float *pfVar8;
  long lVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  ulong uVar13;
  float *pfVar14;
  float *pfVar15;
  int *piVar16;
  ulong uVar17;
  float *pfVar18;
  float *pfVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  uVar4 = *param_1;
  lVar9 = *(long *)(param_1 + 2);
  uVar5 = (long)((ulong)uVar4 << 0x20) >> 0x21;
  lVar6 = (long)((ulong)uVar4 << 0x20) >> 0x22;
  uVar13 = -(ulong)((uint)((int)uVar4 >> 1) >> 0x1f) & 0xfffffffc00000000 |
           (ulong)(uint)((int)uVar4 >> 1) << 2;
  uVar17 = -(ulong)((uint)((int)uVar4 >> 2) >> 0x1f) & 0xfffffffc00000000 |
           (ulong)(uint)((int)uVar4 >> 2) << 2;
  pfVar1 = (float *)((long)param_3 + uVar13);
  pfVar19 = (float *)((long)pfVar1 + uVar17);
  pfVar14 = (float *)((long)param_2 + (uVar13 - 0x1c));
  pfVar11 = (float *)(uVar17 + lVar9 + 8);
  pfVar15 = param_3 + lVar6 + uVar5 + -2;
  do {
    fVar20 = (float)NEON_fmsub(pfVar14[2],pfVar11[1],*pfVar11 * -*pfVar14);
    pfVar15[-2] = fVar20;
    fVar20 = (float)NEON_fmadd(*pfVar14,pfVar11[1],*pfVar11 * -pfVar14[2]);
    pfVar15[-1] = fVar20;
    fVar20 = (float)NEON_fmsub(pfVar14[6],pfVar11[-1],pfVar11[-2] * -pfVar14[4]);
    *pfVar15 = fVar20;
    pfVar10 = pfVar14 + 6;
    pfVar12 = pfVar11 + -2;
    pfVar7 = pfVar11 + -1;
    pfVar11 = pfVar11 + 4;
    pfVar18 = pfVar14 + 4;
    pfVar14 = pfVar14 + -8;
    fVar20 = (float)NEON_fmadd(*pfVar18,*pfVar7,*pfVar12 * -*pfVar10);
    pfVar15[1] = fVar20;
    pfVar15 = pfVar15 + -4;
  } while (param_2 <= pfVar14);
  pfVar15 = (float *)(lVar9 + lVar6 * 4 + -8);
  pfVar14 = (float *)((long)param_2 + (uVar13 - 0x20));
  pfVar11 = pfVar19;
  do {
    fVar20 = (float)NEON_fmadd(pfVar14[4],pfVar15[1],pfVar14[6] * *pfVar15);
    *pfVar11 = fVar20;
    fVar20 = (float)NEON_fmadd(pfVar14[4],*pfVar15,pfVar15[1] * -pfVar14[6]);
    pfVar11[1] = fVar20;
    fVar20 = (float)NEON_fmadd(*pfVar14,pfVar15[-1],pfVar14[2] * pfVar15[-2]);
    pfVar11[2] = fVar20;
    pfVar10 = pfVar15 + -2;
    pfVar18 = pfVar15 + -1;
    pfVar15 = pfVar15 + -4;
    pfVar12 = pfVar14 + -8;
    fVar20 = (float)NEON_fmadd(*pfVar14,*pfVar10,*pfVar18 * -pfVar14[2]);
    pfVar11[3] = fVar20;
    pfVar11 = pfVar11 + 4;
    pfVar14 = pfVar12;
  } while (param_2 <= pfVar12);
  FUN_00e0bc80(param_1[1],lVar9,pfVar1,uVar5 & 0xffffffff);
  lVar9 = *(long *)(param_1 + 2);
  piVar16 = *(int **)(param_1 + 4);
  pfVar11 = param_3 + ((int)*param_1 >> 1);
  pfVar14 = (float *)(lVar9 + (long)(int)*param_1 * 4);
  pfVar10 = pfVar11;
  pfVar15 = param_3;
  do {
    fVar23 = pfVar11[piVar16[2]];
    fVar20 = (pfVar11 + piVar16[2])[1];
    fVar22 = pfVar11[*piVar16];
    fVar21 = (pfVar11 + *piVar16)[1];
    iVar2 = piVar16[2];
    iVar3 = piVar16[4];
    piVar16 = piVar16 + 4;
    fVar24 = fVar21 - fVar20;
    fVar25 = fVar22 + fVar23;
    fVar20 = (fVar21 + fVar20) * 0.5;
    fVar22 = (fVar22 - fVar23) * 0.5;
    fVar21 = (float)NEON_fmadd(fVar25,*pfVar14,fVar24 * pfVar14[1]);
    fVar23 = (float)NEON_fmadd(fVar25,pfVar14[1],*pfVar14 * -fVar24);
    *pfVar15 = fVar20 + fVar21;
    pfVar10[-2] = fVar20 - fVar21;
    pfVar15[1] = fVar22 + fVar23;
    pfVar10[-1] = fVar23 - fVar22;
    fVar23 = pfVar11[iVar3];
    fVar20 = (pfVar11 + iVar3)[1];
    fVar22 = pfVar11[iVar2];
    fVar21 = (pfVar11 + iVar2)[1];
    pfVar18 = pfVar14 + 2;
    pfVar12 = pfVar14 + 3;
    pfVar14 = pfVar14 + 4;
    fVar24 = fVar21 - fVar20;
    fVar25 = fVar22 + fVar23;
    fVar20 = (fVar21 + fVar20) * 0.5;
    fVar22 = (fVar22 - fVar23) * 0.5;
    fVar21 = (float)NEON_fmadd(fVar25,*pfVar18,fVar24 * *pfVar12);
    fVar23 = (float)NEON_fmadd(fVar25,*pfVar12,*pfVar18 * -fVar24);
    pfVar15[2] = fVar20 + fVar21;
    pfVar18 = pfVar10 + -4;
    *pfVar18 = fVar20 - fVar21;
    pfVar15[3] = fVar22 + fVar23;
    pfVar15 = pfVar15 + 4;
    pfVar10[-3] = fVar23 - fVar22;
    pfVar10 = pfVar18;
  } while (pfVar15 < pfVar18);
  pfVar11 = (float *)(lVar9 + uVar5 * 4 + 0x10);
  pfVar10 = pfVar19;
  pfVar15 = pfVar19;
  pfVar14 = param_3;
  do {
    fVar20 = (float)NEON_fmadd(*pfVar14,pfVar11[-3],pfVar11[-4] * -pfVar14[1]);
    pfVar10[-1] = fVar20;
    fVar20 = (float)NEON_fnmadd(*pfVar14,pfVar11[-4],-(pfVar14[1] * pfVar11[-3]));
    *pfVar15 = fVar20;
    fVar20 = (float)NEON_fmadd(pfVar14[2],pfVar11[-1],pfVar11[-2] * -pfVar14[3]);
    pfVar10[-2] = fVar20;
    fVar20 = (float)NEON_fnmadd(pfVar14[2],pfVar11[-2],-(pfVar14[3] * pfVar11[-1]));
    pfVar15[1] = fVar20;
    fVar20 = (float)NEON_fmadd(pfVar14[4],pfVar11[1],*pfVar11 * -pfVar14[5]);
    pfVar10[-3] = fVar20;
    fVar20 = (float)NEON_fnmadd(pfVar14[4],*pfVar11,-(pfVar14[5] * pfVar11[1]));
    pfVar15[2] = fVar20;
    fVar20 = (float)NEON_fmadd(pfVar14[6],pfVar11[3],pfVar11[2] * -pfVar14[7]);
    pfVar10 = pfVar10 + -4;
    *pfVar10 = fVar20;
    pfVar7 = pfVar14 + 6;
    pfVar8 = pfVar14 + 7;
    pfVar18 = pfVar11 + 3;
    pfVar14 = pfVar14 + 8;
    pfVar12 = pfVar11 + 2;
    pfVar11 = pfVar11 + 8;
    fVar20 = (float)NEON_fnmadd(*pfVar7,*pfVar12,-(*pfVar8 * *pfVar18));
    pfVar15[3] = fVar20;
    pfVar15 = pfVar15 + 4;
  } while (pfVar14 < pfVar10);
  pfVar11 = param_3 + lVar6;
  pfVar14 = pfVar11;
  do {
    pfVar10 = pfVar14 + -4;
    pfVar15 = pfVar10 + uVar5;
    fVar20 = pfVar15[3];
    pfVar14[-1] = fVar20;
    *pfVar11 = -fVar20;
    fVar20 = pfVar15[2];
    pfVar14[-2] = fVar20;
    pfVar11[1] = -fVar20;
    fVar20 = pfVar15[1];
    pfVar14[-3] = fVar20;
    pfVar11[2] = -fVar20;
    fVar20 = *pfVar15;
    *pfVar10 = fVar20;
    pfVar11[3] = -fVar20;
    pfVar11 = pfVar11 + 4;
    pfVar14 = pfVar10;
  } while (pfVar11 < pfVar15);
  param_3 = param_3 + lVar6 + uVar5 + 2;
  do {
    pfVar14 = pfVar19 + -4;
    *pfVar14 = param_3[1];
    pfVar19[-3] = *param_3;
    pfVar19[-2] = param_3[-1];
    pfVar11 = param_3 + -2;
    param_3 = param_3 + 4;
    pfVar19[-1] = *pfVar11;
    pfVar19 = pfVar14;
  } while (pfVar1 < pfVar14);
  return;
}


