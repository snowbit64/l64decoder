// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_idct_10x10
// Entry Point: 00d87c00
// Size: 1020 bytes
// Signature: undefined jpeg_idct_10x10(void)


void jpeg_idct_10x10(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  long lVar20;
  int iVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  int iVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  int iVar31;
  long lVar32;
  int iVar33;
  long lVar34;
  long lVar35;
  int local_1b0 [80];
  long local_70;
  
  lVar20 = tpidr_el0;
  local_70 = *(long *)(lVar20 + 0x28);
  lVar22 = *(long *)(param_1 + 0x198);
  lVar27 = *(long *)(param_2 + 0x58);
  lVar23 = 0;
  do {
    psVar5 = (short *)(param_3 + lVar23 * 2);
    piVar6 = (int *)(lVar27 + lVar23 * 4);
    lVar1 = lVar23 + 1;
    lVar24 = (long)piVar6[0x20] * (long)psVar5[0x20];
    uVar11 = (long)(*piVar6 * (int)*psVar5) << 0xd | 0x400;
    lVar25 = uVar11 + lVar24 * 0x249d;
    lVar29 = uVar11 + lVar24 * -0xdfc;
    lVar34 = ((long)piVar6[0x30] * (long)psVar5[0x30] + (long)piVar6[0x10] * (long)psVar5[0x10]) *
             0x1a9a;
    lVar30 = (long)piVar6[8] * (long)psVar5[8];
    lVar7 = (long)piVar6[0x38] * (long)psVar5[0x38] + (long)piVar6[0x18] * (long)psVar5[0x18];
    lVar32 = lVar34 + (long)piVar6[0x10] * (long)psVar5[0x10] * 0x1071;
    lVar28 = (long)piVar6[0x18] * (long)psVar5[0x18] - (long)piVar6[0x38] * (long)psVar5[0x38];
    lVar8 = lVar32 + lVar25;
    lVar34 = lVar34 + (long)piVar6[0x30] * (long)psVar5[0x30] * -0x45a4;
    lVar25 = lVar25 - lVar32;
    lVar35 = (long)piVar6[0x28] * (long)psVar5[0x28] * 0x2000;
    lVar32 = lVar34 + lVar29;
    lVar29 = lVar29 - lVar34;
    lVar9 = lVar28 * 0x9e3 + lVar35;
    lVar34 = lVar7 * 0x1e6f + lVar30 * 0x2cb3 + lVar9;
    lVar35 = lVar35 + lVar28 * -0x19e3;
    iVar18 = (int)lVar30 - ((int)lVar28 + (int)((long)piVar6[0x28] * (long)psVar5[0x28]));
    local_1b0[lVar23] = (int)((ulong)(lVar34 + lVar8) >> 0xb);
    lVar28 = lVar30 * 0x2853 - (lVar7 * 0x12cf + lVar35);
    local_1b0[lVar23 + 0x48] = (int)((ulong)(lVar8 - lVar34) >> 0xb);
    iVar26 = (int)(uVar11 + lVar24 * -0x2d42 >> 0xb);
    lVar9 = lVar7 * -0x1e6f + lVar30 * 0x714 + lVar9;
    lVar35 = lVar35 + lVar7 * -0x12cf + lVar30 * 0x148c;
    local_1b0[lVar23 + 0x38] = iVar26 + iVar18 * -4;
    local_1b0[lVar23 + 0x18] = (int)((ulong)(lVar35 + lVar29) >> 0xb);
    local_1b0[lVar23 + 8] = (int)((ulong)(lVar28 + lVar32) >> 0xb);
    local_1b0[lVar23 + 0x40] = (int)((ulong)(lVar32 - lVar28) >> 0xb);
    local_1b0[lVar23 + 0x10] = iVar18 * 4 + iVar26;
    local_1b0[lVar23 + 0x30] = (int)((ulong)(lVar29 - lVar35) >> 0xb);
    local_1b0[lVar23 + 0x20] = (int)((ulong)(lVar9 + lVar25) >> 0xb);
    local_1b0[lVar23 + 0x28] = (int)((ulong)(lVar25 - lVar9) >> 0xb);
    lVar23 = lVar1;
  } while ((int)lVar1 != 8);
  lVar22 = lVar22 + -0x180;
  lVar23 = 0;
  do {
    lVar27 = lVar23 + 8;
    iVar12 = local_1b0[lVar23 + 1];
    iVar13 = local_1b0[lVar23 + 4];
    puVar10 = (undefined *)(*(long *)(param_4 + lVar23) + (ulong)param_5);
    iVar18 = local_1b0[lVar23] * 0x2000 + 0x8020000;
    iVar14 = iVar18 + iVar13 * 0x249d;
    iVar26 = local_1b0[lVar23 + 3] - local_1b0[lVar23 + 7];
    iVar31 = local_1b0[lVar23 + 7] + local_1b0[lVar23 + 3];
    iVar33 = (local_1b0[lVar23 + 6] + local_1b0[lVar23 + 2]) * 0x1a9a;
    iVar19 = iVar12 - (iVar26 + local_1b0[lVar23 + 5]);
    iVar15 = iVar33 + local_1b0[lVar23 + 2] * 0x1071;
    iVar21 = (int)((long)local_1b0[lVar23 + 5] << 0xd);
    iVar2 = iVar26 * 0x9e3 + iVar21;
    iVar21 = iVar21 + iVar26 * -0x19e3;
    iVar26 = iVar15 + iVar14;
    iVar3 = iVar31 * 0x1e6f + iVar12 * 0x2cb3 + iVar2;
    iVar16 = iVar18 + iVar13 * -0xdfc;
    iVar33 = iVar33 + local_1b0[lVar23 + 6] * -0x45a4;
    iVar17 = iVar12 * 0x2853 - (iVar31 * 0x12cf + iVar21);
    *puVar10 = *(undefined *)(lVar22 + ((ulong)((uint)(iVar3 + iVar26) >> 0x12) & 0x3ff));
    iVar4 = iVar33 + iVar16;
    puVar10[9] = *(undefined *)(lVar22 + ((ulong)((uint)(iVar26 - iVar3) >> 0x12) & 0x3ff));
    iVar18 = iVar18 + iVar13 * -0x2d42;
    puVar10[1] = *(undefined *)(lVar22 + ((ulong)((uint)(iVar17 + iVar4) >> 0x12) & 0x3ff));
    iVar16 = iVar16 - iVar33;
    puVar10[8] = *(undefined *)(lVar22 + ((ulong)((uint)(iVar4 - iVar17) >> 0x12) & 0x3ff));
    puVar10[2] = *(undefined *)
                  (lVar22 + ((ulong)((uint)(iVar19 * 0x2000 + iVar18) >> 0x12) & 0x3ff));
    iVar21 = iVar21 + iVar31 * -0x12cf + iVar12 * 0x148c;
    puVar10[7] = *(undefined *)
                  (lVar22 + ((ulong)((uint)(iVar18 + iVar19 * -0x2000) >> 0x12) & 0x3ff));
    iVar14 = iVar14 - iVar15;
    puVar10[3] = *(undefined *)(lVar22 + ((ulong)((uint)(iVar21 + iVar16) >> 0x12) & 0x3ff));
    iVar2 = iVar31 * -0x1e6f + iVar12 * 0x714 + iVar2;
    puVar10[6] = *(undefined *)(lVar22 + ((ulong)((uint)(iVar16 - iVar21) >> 0x12) & 0x3ff));
    puVar10[4] = *(undefined *)(lVar22 + ((ulong)((uint)(iVar2 + iVar14) >> 0x12) & 0x3ff));
    puVar10[5] = *(undefined *)(lVar22 + ((ulong)((uint)(iVar14 - iVar2) >> 0x12) & 0x3ff));
    lVar23 = lVar27;
  } while (lVar27 != 0x50);
  if (*(long *)(lVar20 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


