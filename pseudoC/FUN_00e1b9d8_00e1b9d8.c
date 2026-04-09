// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e1b9d8
// Entry Point: 00e1b9d8
// Size: 872 bytes
// Signature: undefined FUN_00e1b9d8(void)


void FUN_00e1b9d8(ulong param_1,int param_2,float *param_3,float *param_4,long param_5,long param_6,
                 long param_7)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  int iVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  
  iVar6 = (int)param_1;
  uVar4 = param_2 * iVar6;
  uVar3 = iVar6 * 4;
  uVar9 = (ulong)uVar3;
  uVar18 = (ulong)(uint)(iVar6 << 1);
  if (0 < param_2) {
    iVar10 = uVar3 - 1;
    pfVar7 = param_3;
    pfVar15 = param_4;
    iVar11 = param_2;
    do {
      pfVar14 = (float *)((long)pfVar7 +
                         (-(ulong)((uint)(iVar6 << 1) >> 0x1f) & 0xfffffffc00000000 | uVar18 << 2));
      lVar20 = (long)iVar10;
      fVar22 = *pfVar7;
      iVar10 = iVar10 + uVar3;
      iVar11 = iVar11 + -1;
      pfVar7 = (float *)((long)pfVar7 + (-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | uVar9 << 2))
      ;
      fVar23 = pfVar14[-1];
      fVar24 = *pfVar14;
      fVar25 = fVar22 + param_3[lVar20];
      fVar22 = fVar22 - param_3[lVar20];
      fVar23 = fVar23 + fVar23;
      fVar24 = fVar24 + fVar24;
      *pfVar15 = fVar23 + fVar25;
      pfVar15[(int)uVar4] = fVar22 - fVar24;
      *(float *)((long)pfVar15 + (-(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar4 << 3))
           = fVar25 - fVar23;
      pfVar15[(long)(int)uVar4 + (long)(int)uVar4 * 2] = fVar24 + fVar22;
      pfVar15 = (float *)((long)pfVar15 +
                         (-((param_1 & 0xffffffff) >> 0x1f) & 0xfffffffc00000000 |
                         (param_1 & 0xffffffff) << 2));
    } while (iVar11 != 0);
  }
  uVar5 = iVar6 - 1;
  if (uVar5 != 0 && 0 < iVar6) {
    if (iVar6 == 2) {
      if (param_2 < 1) {
        return;
      }
    }
    else {
      if (0 < param_2) {
        uVar12 = param_1 & 0xffffffff;
        iVar11 = 0;
        iVar10 = 0;
        pfVar14 = param_4 + (long)(int)uVar4 * 3;
        pfVar7 = param_4 + (long)(int)uVar4 * 2;
        pfVar15 = param_4 + (int)uVar4;
        pfVar16 = param_4;
        uVar13 = uVar9;
        do {
          iVar17 = (int)uVar18;
          lVar20 = uVar18 << 0x20;
          lVar21 = -0xc;
          uVar18 = 2;
          lVar19 = 0;
          do {
            pfVar1 = (float *)((long)param_3 + lVar19 + (long)iVar11 * 4 + 8);
            pfVar2 = (float *)((long)param_3 + lVar21 + (long)(int)uVar13 * 4);
            uVar8 = lVar20 >> 0x1e;
            uVar18 = uVar18 + 2;
            lVar20 = lVar20 + 0x200000000;
            fVar24 = pfVar1[-1];
            fVar22 = *pfVar1;
            pfVar1 = (float *)((long)param_3 + lVar21 + (long)iVar17 * 4);
            lVar21 = lVar21 + -8;
            fVar29 = *pfVar2;
            fVar25 = pfVar2[1];
            fVar27 = *(float *)((long)param_3 + (uVar8 | 4));
            fVar30 = *pfVar1;
            fVar28 = pfVar1[1];
            fVar23 = *(float *)((long)param_3 + lVar19 + (long)iVar17 * 4 + 8);
            fVar31 = fVar24 + fVar29;
            fVar33 = fVar22 - fVar25;
            pfVar1 = (float *)(param_5 + 4 + lVar19);
            fVar32 = fVar27 + fVar30;
            fVar22 = fVar22 + fVar25;
            fVar34 = fVar23 - fVar28;
            fVar27 = fVar27 - fVar30;
            fVar23 = fVar23 + fVar28;
            fVar24 = fVar24 - fVar29;
            fVar25 = fVar22 + fVar27;
            fVar29 = fVar24 - fVar23;
            fVar22 = fVar22 - fVar27;
            fVar23 = fVar23 + fVar24;
            *(float *)((long)pfVar16 + lVar19 + 4) = fVar31 + fVar32;
            *(float *)((long)pfVar16 + lVar19 + 8) = fVar33 + fVar34;
            uVar26 = NEON_fmadd(pfVar1[-1],fVar29,fVar25 * -*pfVar1);
            *(undefined4 *)((long)pfVar15 + lVar19 + 4) = uVar26;
            pfVar2 = (float *)(param_6 + 4 + lVar19);
            uVar26 = NEON_fmadd(pfVar1[-1],fVar25,fVar29 * *pfVar1);
            fVar33 = fVar33 - fVar34;
            fVar31 = fVar31 - fVar32;
            *(undefined4 *)((long)pfVar15 + lVar19 + 8) = uVar26;
            uVar26 = NEON_fmadd(pfVar2[-1],fVar31,fVar33 * -*pfVar2);
            *(undefined4 *)((long)pfVar7 + lVar19 + 4) = uVar26;
            pfVar1 = (float *)(param_7 + 4 + lVar19);
            uVar26 = NEON_fmadd(pfVar2[-1],fVar33,fVar31 * *pfVar2);
            *(undefined4 *)((long)pfVar7 + lVar19 + 8) = uVar26;
            uVar26 = NEON_fmadd(pfVar1[-1],fVar23,fVar22 * -*pfVar1);
            *(undefined4 *)((long)pfVar14 + lVar19 + 4) = uVar26;
            uVar26 = NEON_fmadd(pfVar1[-1],fVar22,fVar23 * *pfVar1);
            *(undefined4 *)((long)pfVar14 + lVar19 + 8) = uVar26;
            lVar19 = lVar19 + 8;
          } while (uVar18 < uVar12);
          iVar10 = iVar10 + 1;
          iVar11 = iVar11 + uVar3;
          uVar18 = (ulong)(iVar17 + uVar3);
          uVar13 = (ulong)((int)uVar13 + uVar3);
          pfVar14 = pfVar14 + uVar12;
          pfVar7 = pfVar7 + uVar12;
          pfVar15 = pfVar15 + uVar12;
          pfVar16 = pfVar16 + uVar12;
        } while (iVar10 != param_2);
      }
      if (param_2 < 1) {
        return;
      }
      if (iVar6 % 2 == 1) {
        return;
      }
    }
    uVar18 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2;
    param_3 = param_3 + -1;
    uVar13 = -(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2;
    do {
      pfVar7 = (float *)((long)param_3 + uVar13);
      pfVar15 = (float *)((long)param_3 +
                         (-(ulong)((uint)(iVar6 * 3) >> 0x1f) & 0xfffffffc00000000 |
                         (ulong)(uint)(iVar6 * 3) << 2));
      param_2 = param_2 + -1;
      param_3 = (float *)((long)param_3 +
                         (-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | uVar9 << 2));
      fVar23 = *pfVar7;
      fVar22 = pfVar7[1];
      fVar25 = *pfVar15;
      fVar24 = pfVar15[1];
      fVar27 = fVar22 + fVar24;
      fVar29 = fVar23 - fVar25;
      fVar23 = fVar23 + fVar25;
      fVar24 = fVar24 - fVar22;
      *(float *)((long)param_4 + uVar18) = fVar23 + fVar23;
      param_4[(long)(int)uVar4 + (long)(int)uVar5] = (fVar29 - fVar27) * 1.414214;
      *(float *)((long)param_4 + uVar18 + (long)(int)uVar4 * 8) = fVar24 + fVar24;
      *(float *)((long)param_4 + uVar18 + (long)(int)uVar4 * 0xc) = (fVar27 + fVar29) * -1.414214;
      param_4 = (float *)((long)param_4 + uVar13);
    } while (param_2 != 0);
  }
  return;
}


