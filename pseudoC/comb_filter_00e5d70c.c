// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: comb_filter
// Entry Point: 00e5d70c
// Size: 988 bytes
// Signature: undefined comb_filter(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined4 param_9, undefined8 param_10, undefined4 param_11)


void comb_filter(int *param_1,int *param_2,uint param_3,uint param_4,ulong param_5,uint param_6,
                uint param_7,int param_8,int param_9,short *param_10,uint param_11)

{
  int *piVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int *piVar15;
  size_t __n;
  long lVar16;
  ulong uVar17;
  int iVar18;
  int *piVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  
  if (((param_7 | param_6) & 0xffff) == 0) {
    if (param_2 != param_1) {
      __n = -(param_5 >> 0x1f & 1) & 0xfffffffc00000000 | (param_5 & 0xffffffff) << 2;
LAB_00e5daa8:
      memmove(param_1,param_2,__n);
      return;
    }
  }
  else {
    lVar11 = (long)param_9 * 6;
    if ((int)param_3 < 0x10) {
      param_3 = 0xf;
    }
    if ((int)param_4 < 0x10) {
      param_4 = 0xf;
    }
    iVar20 = (int)(short)param_7;
    lVar16 = (long)(int)param_4;
    uVar6 = *(short *)(&DAT_00563c8e + lVar11) * iVar20 + 0x4000;
    uVar7 = *(short *)(&DAT_00563c90 + lVar11) * iVar20 + 0x4000;
    uVar8 = *(short *)(&DAT_00563c92 + lVar11) * iVar20 + 0x4000;
    uVar12 = 0;
    if ((param_8 != param_9 || (param_6 & 0xffff) != (param_7 & 0xffff)) || param_3 != param_4) {
      uVar12 = param_11;
    }
    if ((int)uVar12 < 1) {
      uVar13 = 0;
    }
    else {
      lVar11 = (long)param_8 * 6;
      uVar10 = -(param_6 >> 0xf & 1) & 0xfffe0000 | (param_6 & 0xffff) << 1;
      iVar20 = 2 - param_4;
      sVar3 = *(short *)(&DAT_00563c8e + lVar11);
      sVar4 = *(short *)(&DAT_00563c90 + lVar11);
      sVar5 = *(short *)(&DAT_00563c92 + lVar11);
      uVar17 = (ulong)uVar12;
      piVar15 = param_1;
      piVar19 = param_2;
      iVar9 = param_2[1 - lVar16];
      iVar18 = param_2[(int)(-2 - param_4)];
      iVar21 = param_2[(int)~param_4];
      iVar22 = param_2[-lVar16];
      do {
        iVar23 = iVar9;
        piVar1 = piVar19 + -(ulong)param_3;
        iVar9 = (int)*param_10 * (int)*param_10;
        iVar14 = iVar9 * 2 >> 0x10;
        iVar2 = (int)(0x7fff0000 - (iVar9 * 2 & 0xffff0000U)) >> 0x10;
        iVar9 = param_2[iVar20];
        iVar20 = iVar20 + 1;
        iVar18 = *piVar19 +
                 (int)((ulong)((long)(short)((uint)(iVar14 * ((int)(uVar6 * 2) >> 0x10)) >> 0xf) *
                              (long)iVar22) >> 0xf) +
                 (int)((ulong)((long)(short)((uint)(iVar14 * ((int)(uVar7 * 2) >> 0x10)) >> 0xf) *
                              (long)(iVar21 + iVar23)) >> 0xf) +
                 (int)((ulong)((long)(short)((uint)(iVar14 * ((int)(uVar8 * 2) >> 0x10)) >> 0xf) *
                              (long)(iVar9 + iVar18)) >> 0xf) +
                 (int)((ulong)((long)(short)((uint)(iVar2 * ((int)(uVar10 * (int)sVar3 + 0x8000) >>
                                                            0x10)) >> 0xf) * (long)*piVar1) >> 0xf)
                 + (int)((ulong)((long)(short)((uint)(iVar2 * ((int)(uVar10 * (int)sVar4 + 0x8000)
                                                              >> 0x10)) >> 0xf) *
                                ((long)*piVar1 + (long)piVar1[2])) >> 0xf) +
                 (int)((ulong)((long)(short)((uint)(iVar2 * ((int)(uVar10 * (int)sVar5 + 0x8000) >>
                                                            0x10)) >> 0xf) *
                              ((long)piVar1[-2] + (long)piVar1[2])) >> 0xf);
        if (iVar18 < -299999999) {
          iVar18 = -300000000;
        }
        if (299999999 < iVar18) {
          iVar18 = 300000000;
        }
        uVar17 = uVar17 - 1;
        *piVar15 = iVar18;
        param_10 = param_10 + 1;
        piVar15 = piVar15 + 1;
        piVar19 = piVar19 + 1;
        iVar18 = iVar21;
        iVar21 = iVar22;
        iVar22 = iVar23;
        uVar13 = uVar12;
      } while (uVar17 != 0);
    }
    if ((param_7 & 0xffff) == 0) {
      if (param_2 != param_1) {
        uVar6 = (int)param_5 - uVar12;
        uVar17 = -(ulong)(uVar12 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar12 << 2;
        __n = -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2;
        param_1 = (int *)((long)param_1 + uVar17);
        param_2 = (int *)((long)param_2 + uVar17);
        goto LAB_00e5daa8;
      }
    }
    else {
      uVar12 = (int)param_5 - uVar13;
      uVar17 = (ulong)uVar12;
      if (0 < (int)uVar12) {
        param_2 = param_2 + uVar13;
        iVar20 = 2 - param_4;
        piVar15 = param_2;
        piVar19 = param_1 + uVar13;
        iVar9 = param_2[-lVar16];
        iVar18 = param_2[(int)(-2 - param_4)];
        iVar21 = param_2[1 - lVar16];
        iVar22 = param_2[(int)~param_4];
        do {
          iVar14 = iVar9;
          iVar2 = param_2[iVar20];
          iVar20 = iVar20 + 1;
          iVar9 = *piVar15 + (int)((ulong)((long)(short)(uVar6 >> 0xf) * (long)iVar14) >> 0xf) +
                  (int)((ulong)((long)(short)(uVar7 >> 0xf) * (long)(iVar21 + iVar22)) >> 0xf) +
                  (int)((ulong)((long)(short)(uVar8 >> 0xf) * (long)(iVar2 + iVar18)) >> 0xf);
          if (iVar9 < -299999999) {
            iVar9 = -300000000;
          }
          if (299999999 < iVar9) {
            iVar9 = 300000000;
          }
          uVar17 = uVar17 - 1;
          *piVar19 = iVar9;
          piVar15 = piVar15 + 1;
          piVar19 = piVar19 + 1;
          iVar9 = iVar21;
          iVar18 = iVar22;
          iVar21 = iVar2;
          iVar22 = iVar14;
        } while (uVar17 != 0);
      }
    }
  }
  return;
}


