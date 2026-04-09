// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clt_mdct_forward_c
// Entry Point: 00e7b58c
// Size: 916 bytes
// Signature: undefined clt_mdct_forward_c(void)


void clt_mdct_forward_c(uint *param_1,long param_2,int *param_3,short *param_4,uint param_5,
                       int param_6,int param_7)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  int *piVar15;
  long lVar16;
  int *piVar17;
  short *psVar18;
  int *piVar19;
  int iVar21;
  int iVar22;
  long lVar23;
  int iVar24;
  int iVar25;
  short *psVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  short *psVar30;
  uint uVar31;
  int iStack_70;
  undefined auStack_6c [4];
  long local_68;
  int *piVar20;
  
  lVar9 = tpidr_el0;
  local_68 = *(long *)(lVar9 + 0x28);
  lVar16 = (long)param_6;
  uVar31 = *param_1;
  psVar30 = *(short **)(param_1 + 10);
  if (0 < param_6) {
    do {
      uVar31 = (int)uVar31 >> 1;
      param_6 = param_6 + -1;
      psVar30 = psVar30 + (int)uVar31;
    } while (param_6 != 0);
  }
  lVar10 = *(long *)(param_1 + lVar16 * 2 + 2);
  uVar12 = -(ulong)((uint)((int)uVar31 >> 1) >> 0x1f) & 0xfffffffc00000000 |
           (ulong)(uint)((int)uVar31 >> 1) << 2;
  uVar1 = (int)uVar31 >> 2;
  piVar15 = (int *)((long)&iStack_70 - (uVar12 + 0xf & 0xfffffffffffffff0));
  lVar7 = (long)((ulong)uVar31 << 0x20) >> 0x22;
  lVar29 = (long)piVar15 -
           ((-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3) + 0xf &
           0xfffffffffffffff0);
  lVar16 = param_2 + uVar12;
  uVar2 = (int)param_5 >> 1;
  lVar13 = lVar16 + -4;
  iVar24 = (int)(param_5 + 3) >> 2;
  if ((int)param_5 < 1) {
    uVar12 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
    iVar21 = 0;
    piVar11 = (int *)(param_2 + uVar12);
    piVar19 = (int *)(lVar13 + uVar12);
    iVar22 = *(int *)(lVar10 + 8);
    lVar16 = (long)((ulong)uVar31 << 0x20) >> 0x21;
    lVar13 = (long)*(short *)(lVar10 + 4);
    iVar24 = uVar1 - iVar24;
    piVar14 = piVar15;
    iVar25 = iVar21;
    if (iVar24 < 1) goto joined_r0x00e7b750;
  }
  else {
    iVar21 = iVar24;
    if (iVar24 < 2) {
      iVar21 = 1;
    }
    lVar27 = param_2 + -4;
    lVar23 = ((long)((ulong)param_5 << 0x20) >> 0x21) * 4;
    piVar11 = piVar15;
    psVar18 = param_4 + (int)uVar2;
    psVar26 = param_4 + (int)uVar2 + -1;
    iVar22 = iVar21;
    do {
      piVar19 = (int *)(lVar16 + lVar23);
      iVar22 = iVar22 + -1;
      piVar17 = (int *)(lVar13 + lVar23);
      lVar16 = lVar16 + 8;
      iVar25 = *(int *)(param_2 + lVar23);
      param_2 = param_2 + 8;
      iVar6 = *(int *)(lVar27 + lVar23);
      lVar13 = lVar13 + -8;
      sVar4 = *psVar26;
      sVar5 = *psVar18;
      lVar27 = lVar27 + -8;
      piVar14 = piVar11 + 2;
      *piVar11 = (int)((ulong)((long)*piVar17 * (long)sVar5) >> 0xf) +
                 (int)((ulong)((long)*piVar19 * (long)sVar4) >> 0xf);
      piVar11[1] = (int)((ulong)((long)iVar25 * (long)sVar5) >> 0xf) -
                   (int)((ulong)((long)iVar6 * (long)sVar4) >> 0xf);
      piVar11 = piVar14;
      psVar18 = psVar18 + 2;
      psVar26 = psVar26 + -2;
    } while (iVar22 != 0);
    piVar11 = (int *)(param_2 + lVar23);
    piVar19 = (int *)(lVar13 + lVar23);
    iVar22 = *(int *)(lVar10 + 8);
    lVar16 = (long)((ulong)uVar31 << 0x20) >> 0x21;
    lVar13 = (long)*(short *)(lVar10 + 4);
    iVar24 = uVar1 - iVar24;
    iVar25 = iVar21;
    if (iVar24 <= iVar21) goto joined_r0x00e7b750;
  }
  do {
    piVar20 = piVar19 + -2;
    piVar17 = piVar11 + 2;
    iVar25 = *piVar11;
    piVar11 = piVar14 + 2;
    iVar21 = iVar21 + 1;
    *piVar14 = *piVar19;
    piVar14[1] = iVar25;
    piVar14 = piVar11;
    piVar11 = piVar17;
    piVar19 = piVar20;
    iVar25 = iVar24;
  } while (iVar21 < iVar24);
joined_r0x00e7b750:
  if (iVar25 < (int)uVar1) {
    iVar25 = uVar1 - iVar25;
    psVar18 = param_4 + (long)(int)param_5 + -1;
    do {
      piVar17 = piVar11 + -lVar16;
      iVar25 = iVar25 + -1;
      iVar6 = piVar19[lVar16];
      sVar4 = *param_4;
      sVar5 = *psVar18;
      iVar24 = *piVar19;
      piVar19 = piVar19 + -2;
      iVar21 = *piVar11;
      piVar11 = piVar11 + 2;
      *piVar14 = (int)((ulong)((long)iVar24 * (long)sVar5) >> 0xf) -
                 (int)((ulong)((long)*piVar17 * (long)sVar4) >> 0xf);
      piVar14[1] = (int)((ulong)((long)iVar6 * (long)sVar4) >> 0xf) +
                   (int)((ulong)((long)iVar21 * (long)sVar5) >> 0xf);
      param_4 = param_4 + 2;
      piVar14 = piVar14 + 2;
      psVar18 = psVar18 + -2;
    } while (iVar25 != 0);
  }
  if (3 < (int)uVar31) {
    uVar8 = iVar22 - 1;
    lVar23 = 0;
    uVar2 = uVar1;
    if ((int)uVar1 < 2) {
      uVar2 = 1;
    }
    iVar24 = (1 << (ulong)(uVar8 & 0x1f)) >> 1;
    do {
      sVar4 = *(short *)((long)psVar30 + lVar23);
      lVar28 = (long)*(short *)((long)psVar30 + lVar23 + lVar7 * 2);
      lVar27 = (long)piVar15[lVar23];
      lVar3 = (long)(piVar15 + lVar23)[2];
      psVar18 = (short *)(*(long *)(lVar10 + 0x30) + lVar23);
      lVar23 = lVar23 + 2;
      piVar14 = (int *)(lVar29 + (long)*psVar18 * 8);
      *piVar14 = iVar24 + (int)((ulong)(((int)((ulong)(lVar27 * sVar4) >> 0xf) -
                                        (int)((ulong)(lVar3 * lVar28) >> 0xf)) * lVar13) >> 0x10) >>
                 (uVar8 & 0x1f);
      piVar14[1] = iVar24 + (int)((ulong)(((int)((ulong)(lVar3 * sVar4) >> 0xf) +
                                          (int)((ulong)(lVar27 * lVar28) >> 0xf)) * lVar13) >> 0x10)
                   >> (uVar8 & 0x1f);
    } while ((ulong)uVar2 * 2 - lVar23 != 0);
  }
  opus_fft_impl(lVar10,lVar29);
  if (3 < (int)uVar31) {
    lVar29 = lVar29 + 4;
    if ((int)uVar1 < 2) {
      uVar1 = 1;
    }
    uVar12 = (ulong)uVar1;
    piVar15 = param_3 + ((int)lVar16 + -1) * param_7;
    do {
      sVar5 = psVar30[lVar7];
      uVar12 = uVar12 - 1;
      iVar24 = *(int *)(lVar29 + -4);
      iVar21 = *(int *)(lVar29 + 4);
      sVar4 = *psVar30;
      psVar30 = psVar30 + 1;
      lVar29 = lVar29 + 8;
      *param_3 = (int)((ulong)((long)iVar21 * (long)sVar5) >> 0xf) -
                 (int)((ulong)((long)iVar24 * (long)sVar4) >> 0xf);
      param_3 = param_3 + (param_7 << 1);
      *piVar15 = (int)((ulong)((long)iVar24 * (long)sVar5) >> 0xf) +
                 (int)((ulong)((long)sVar4 * (long)iVar21) >> 0xf);
      piVar15 = piVar15 + -(long)(param_7 << 1);
    } while (uVar12 != 0);
  }
  if (*(long *)(lVar9 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


