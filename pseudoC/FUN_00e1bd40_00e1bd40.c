// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e1bd40
// Entry Point: 00e1bd40
// Size: 484 bytes
// Signature: undefined FUN_00e1bd40(void)


void FUN_00e1bd40(uint param_1,int param_2,long param_3,float *param_4,long param_5)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  iVar5 = param_2 * param_1;
  uVar4 = param_1 * 2;
  if (0 < param_2) {
    uVar7 = 0;
    pfVar6 = param_4;
    iVar9 = param_2;
    do {
      uVar2 = (uVar4 - 1) + (int)uVar7;
      uVar10 = -(uVar7 >> 0x1f) & 0xfffffffc00000000 | uVar7 << 2;
      uVar11 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
      uVar7 = (ulong)((int)uVar7 + uVar4);
      iVar9 = iVar9 + -1;
      *pfVar6 = *(float *)(param_3 + uVar10) + *(float *)(param_3 + uVar11);
      pfVar6[iVar5] = *(float *)(param_3 + uVar10) - *(float *)(param_3 + uVar11);
      pfVar6 = (float *)((long)pfVar6 +
                        (-(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_1 << 2));
    } while (iVar9 != 0);
  }
  uVar7 = (ulong)(param_1 - 1);
  if (param_1 - 1 == 0 || (int)param_1 < 1) {
    return;
  }
  if (param_1 == 2) {
    if (param_2 < 1) {
      return;
    }
    uVar7 = 1;
  }
  else {
    if (param_2 < 1) {
      return;
    }
    iVar8 = 0;
    iVar9 = 0;
    pfVar6 = param_4 + 2;
    uVar10 = (ulong)uVar4;
    iVar3 = iVar5;
    do {
      pfVar13 = (float *)(param_3 + -0xc + (long)(int)uVar10 * 4);
      uVar11 = 2;
      pfVar12 = (float *)(param_3 + 8 + (long)iVar8 * 4);
      pfVar14 = param_4 + 2 + iVar3;
      pfVar15 = (float *)(param_5 + 4);
      pfVar16 = pfVar6;
      do {
        uVar11 = uVar11 + 2;
        pfVar16[-1] = pfVar12[-1] + *pfVar13;
        fVar19 = pfVar12[-1];
        fVar18 = *pfVar13;
        *pfVar16 = *pfVar12 - pfVar13[1];
        fVar17 = *pfVar12;
        fVar21 = pfVar13[1];
        pfVar13 = pfVar13 + -2;
        fVar20 = (float)NEON_fmadd(pfVar15[-1],fVar19 - fVar18,(fVar17 + fVar21) * -*pfVar15);
        pfVar14[-1] = fVar20;
        fVar20 = *pfVar15;
        pfVar1 = pfVar15 + -1;
        pfVar15 = pfVar15 + 2;
        fVar17 = (float)NEON_fmadd(*pfVar1,fVar17 + fVar21,(fVar19 - fVar18) * fVar20);
        *pfVar14 = fVar17;
        pfVar12 = pfVar12 + 2;
        pfVar14 = pfVar14 + 2;
        pfVar16 = pfVar16 + 2;
      } while (uVar11 < param_1);
      iVar9 = iVar9 + 1;
      iVar3 = iVar3 + param_1;
      uVar10 = (ulong)((int)uVar10 + uVar4);
      iVar8 = iVar8 + uVar4;
      pfVar6 = pfVar6 + param_1;
    } while (iVar9 != param_2);
    if ((int)param_1 % 2 == 1) {
      return;
    }
    if (param_2 < 1) {
      return;
    }
  }
  uVar7 = -(uVar7 >> 0x1f) & 0xfffffffc00000000 | uVar7 << 2;
  pfVar6 = (float *)(uVar7 + param_3 + 4);
  do {
    param_2 = param_2 + -1;
    *(float *)((long)param_4 + uVar7) = pfVar6[-1] + pfVar6[-1];
    fVar17 = *pfVar6;
    pfVar6 = (float *)((long)pfVar6 +
                      (-(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2));
    *(float *)((long)param_4 + uVar7 + (long)iVar5 * 4) = -(fVar17 + fVar17);
    uVar7 = uVar7 + (-(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_1 << 2);
  } while (param_2 != 0);
  return;
}


