// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clt_mdct_backward_c
// Entry Point: 00e7b920
// Size: 624 bytes
// Signature: undefined clt_mdct_backward_c(void)


void clt_mdct_backward_c(int *param_1,int *param_2,long param_3,long param_4,uint param_5,
                        int param_6,int param_7)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  short *psVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  int *piVar16;
  int *piVar17;
  long lVar18;
  long lVar19;
  short *psVar20;
  long lVar21;
  long lVar22;
  short *psVar23;
  int iVar24;
  
  iVar24 = *param_1;
  psVar23 = *(short **)(param_1 + 10);
  iVar10 = param_6;
  if (0 < param_6) {
    do {
      iVar24 = iVar24 >> 1;
      iVar10 = iVar10 + -1;
      psVar23 = psVar23 + iVar24;
    } while (iVar10 != 0);
  }
  lVar11 = param_3 + (long)((int)param_5 >> 1) * 4;
  lVar9 = *(long *)(param_1 + (long)param_6 * 2 + 2);
  if (iVar24 < 4) {
    opus_fft_impl(lVar9,lVar11);
  }
  else {
    iVar10 = iVar24 >> 1;
    uVar1 = iVar24 >> 2;
    lVar15 = (long)((ulong)param_5 << 0x20) >> 0x21;
    uVar2 = uVar1;
    if ((int)uVar1 < 2) {
      uVar2 = 1;
    }
    uVar13 = (ulong)uVar2;
    piVar16 = param_2 + (iVar10 + -1) * param_7;
    psVar12 = *(short **)(lVar9 + 0x30);
    psVar20 = psVar23;
    do {
      sVar4 = psVar20[(int)uVar1];
      uVar13 = uVar13 - 1;
      sVar3 = *psVar20;
      psVar20 = psVar20 + 1;
      iVar7 = *piVar16;
      piVar16 = piVar16 + -(long)(param_7 << 1);
      iVar8 = *param_2;
      param_2 = param_2 + (param_7 << 1);
      piVar17 = (int *)(lVar11 + (long)*psVar12 * 8);
      *piVar17 = (int)((ulong)((long)iVar8 * (long)sVar3) >> 0xf) -
                 (int)((ulong)((long)sVar4 * (long)iVar7) >> 0xf);
      piVar17[1] = (int)((ulong)((long)iVar8 * (long)sVar4) >> 0xf) +
                   (int)((ulong)((long)iVar7 * (long)sVar3) >> 0xf);
      psVar12 = psVar12 + 1;
    } while (uVar13 != 0);
    opus_fft_impl(lVar9,lVar11);
    if (3 < iVar24) {
      uVar2 = (int)(uVar1 + 1) >> 1;
      uVar13 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1;
      if ((int)uVar2 < 2) {
        uVar2 = 1;
      }
      lVar9 = (long)iVar10 * 2;
      lVar11 = 0;
      piVar17 = (int *)(param_3 + (iVar10 + lVar15) * 4 + -4);
      piVar16 = (int *)(param_3 + lVar15 * 4 + 4);
      uVar14 = uVar13;
      do {
        uVar14 = uVar14 - 2;
        lVar9 = lVar9 + -2;
        iVar24 = piVar16[-1];
        iVar7 = piVar16[1];
        sVar3 = *(short *)((long)psVar23 + lVar11);
        lVar11 = lVar11 + 2;
        sVar4 = *(short *)((long)psVar23 + uVar13);
        uVar13 = uVar13 + 2;
        sVar5 = *(short *)((long)psVar23 + uVar14);
        sVar6 = *(short *)((long)psVar23 + lVar9);
        iVar10 = piVar17[-1];
        iVar8 = piVar17[1];
        piVar16[-1] = (int)((ulong)((long)sVar4 * (long)iVar24) >> 0xf) +
                      (int)((ulong)((long)sVar3 * (long)iVar7) >> 0xf);
        piVar17[-1] = (int)((ulong)((long)sVar6 * (long)iVar10) >> 0xf) +
                      (int)((ulong)((long)sVar5 * (long)iVar8) >> 0xf);
        *piVar17 = (int)((ulong)((long)sVar4 * (long)iVar7) >> 0xf) -
                   (int)((ulong)((long)sVar3 * (long)iVar24) >> 0xf);
        piVar17 = piVar17 + -2;
        *piVar16 = (int)((ulong)((long)sVar6 * (long)iVar8) >> 0xf) -
                   (int)((ulong)((long)sVar5 * (long)iVar10) >> 0xf);
        piVar16 = piVar16 + 2;
      } while ((ulong)uVar2 * 2 - lVar11 != 0);
    }
  }
  uVar1 = param_5;
  if ((int)param_5 < 0) {
    uVar1 = param_5 + 1;
  }
  if (1 < (int)param_5) {
    lVar9 = (long)(int)param_5;
    lVar11 = 0;
    do {
      lVar9 = lVar9 + -1;
      lVar15 = lVar11 * 4;
      lVar18 = (long)*(short *)(param_4 + lVar9 * 2);
      lVar19 = (long)*(short *)(param_4 + lVar11 * 2);
      lVar11 = lVar11 + 1;
      lVar21 = (long)*(int *)(param_3 + lVar15);
      lVar22 = (long)*(int *)(param_3 + lVar9 * 4);
      *(int *)(param_3 + lVar15) =
           (int)((ulong)(lVar18 * lVar21) >> 0xf) - (int)((ulong)(lVar19 * lVar22) >> 0xf);
      *(int *)(param_3 + lVar9 * 4) =
           (int)((ulong)(lVar19 * lVar21) >> 0xf) + (int)((ulong)(lVar18 * lVar22) >> 0xf);
    } while ((int)uVar1 >> 1 != (int)lVar11);
  }
  return;
}


