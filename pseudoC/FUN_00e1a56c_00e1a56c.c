// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e1a56c
// Entry Point: 00e1a56c
// Size: 448 bytes
// Signature: undefined FUN_00e1a56c(void)


void FUN_00e1a56c(uint param_1,int param_2,float *param_3,long param_4,long param_5)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  iVar4 = param_2 * param_1;
  uVar3 = param_1 * 2;
  if (0 < param_2) {
    iVar6 = 0;
    pfVar7 = param_3;
    iVar10 = param_2;
    do {
      iVar9 = (uVar3 - 1) + iVar6;
      iVar10 = iVar10 + -1;
      *(float *)(param_4 + (long)iVar6 * 4) = *pfVar7 + pfVar7[iVar4];
      iVar6 = iVar6 + uVar3;
      pfVar11 = pfVar7 + iVar4;
      fVar18 = *pfVar7;
      pfVar7 = (float *)((long)pfVar7 +
                        (-(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_1 << 2));
      *(float *)(param_4 + (long)iVar9 * 4) = fVar18 - *pfVar11;
    } while (iVar10 != 0);
  }
  iVar6 = param_1 - 1;
  if (iVar6 != 0 && 0 < (int)param_1) {
    if (param_1 != 2) {
      if (0 < param_2) {
        iVar8 = 0;
        iVar9 = 0;
        iVar10 = 0;
        pfVar7 = param_3 + (long)iVar4 + 2;
        uVar5 = (ulong)uVar3;
        do {
          pfVar11 = (float *)(param_4 + 8 + (long)iVar8 * 4);
          pfVar13 = param_3 + (long)iVar9 + 2;
          uVar16 = 2;
          pfVar12 = (float *)(param_4 + -0xc + (long)(int)uVar5 * 4);
          pfVar14 = pfVar7;
          pfVar15 = (float *)(param_5 + 4);
          do {
            pfVar1 = pfVar15 + -1;
            fVar18 = *pfVar15;
            pfVar2 = pfVar14 + -1;
            fVar19 = *pfVar14;
            uVar16 = uVar16 + 2;
            pfVar15 = pfVar15 + 2;
            pfVar14 = pfVar14 + 2;
            fVar17 = (float)NEON_fmadd(*pfVar1,*pfVar2,fVar18 * fVar19);
            fVar18 = (float)NEON_fmadd(*pfVar1,fVar19,*pfVar2 * -fVar18);
            *pfVar11 = *pfVar13 + fVar18;
            pfVar12[1] = fVar18 - *pfVar13;
            pfVar11[-1] = fVar17 + pfVar13[-1];
            pfVar11 = pfVar11 + 2;
            pfVar1 = pfVar13 + -1;
            pfVar13 = pfVar13 + 2;
            *pfVar12 = *pfVar1 - fVar17;
            pfVar12 = pfVar12 + -2;
          } while (uVar16 < param_1);
          iVar9 = iVar9 + param_1;
          iVar10 = iVar10 + 1;
          iVar8 = iVar8 + uVar3;
          uVar5 = (ulong)((int)uVar5 + uVar3);
          pfVar7 = pfVar7 + param_1;
        } while (iVar10 != param_2);
      }
      if ((int)param_1 % 2 == 1) {
        return;
      }
    }
    if (0 < param_2) {
      uVar5 = -(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_1 << 2;
      pfVar7 = param_3 + iVar6;
      param_3 = param_3 + (iVar4 + iVar6);
      do {
        fVar18 = *param_3;
        pfVar11 = (float *)(param_4 + uVar5);
        param_4 = param_4 + (-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2);
        param_3 = (float *)((long)param_3 + uVar5);
        param_2 = param_2 + -1;
        *pfVar11 = -fVar18;
        fVar18 = *pfVar7;
        pfVar7 = (float *)((long)pfVar7 + uVar5);
        pfVar11[-1] = fVar18;
      } while (param_2 != 0);
    }
  }
  return;
}


