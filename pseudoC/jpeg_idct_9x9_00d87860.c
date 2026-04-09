// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_idct_9x9
// Entry Point: 00d87860
// Size: 928 bytes
// Signature: undefined jpeg_idct_9x9(void)


void jpeg_idct_9x9(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  int local_190 [72];
  long local_70;
  
  lVar21 = tpidr_el0;
  local_70 = *(long *)(lVar21 + 0x28);
  lVar23 = *(long *)(param_1 + 0x198);
  lVar28 = *(long *)(param_2 + 0x58);
  lVar26 = 0;
  do {
    psVar5 = (short *)(param_3 + lVar26 * 2);
    piVar6 = (int *)(lVar28 + lVar26 * 4);
    lVar1 = lVar26 + 1;
    lVar30 = (long)piVar6[0x10] * (long)psVar5[0x10];
    uVar10 = (long)(*piVar6 * (int)*psVar5) << 0xd | 0x400;
    lVar33 = (long)piVar6[0x20] * (long)psVar5[0x20];
    lVar31 = uVar10 + (long)piVar6[0x30] * (long)psVar5[0x30] * -0x2d42;
    lVar34 = uVar10 + (long)piVar6[0x30] * (long)psVar5[0x30] * 0x16a1;
    lVar27 = lVar31 + (lVar30 - lVar33) * 0x16a1;
    lVar22 = (long)piVar6[8] * (long)psVar5[8];
    lVar24 = (long)piVar6[0x28] * (long)psVar5[0x28];
    lVar29 = (long)piVar6[0x38] * (long)psVar5[0x38];
    lVar7 = lVar34 + (lVar33 + lVar30) * -0x2a87 + lVar30 * 0x22ab;
    lVar36 = (long)piVar6[0x18] * (long)psVar5[0x18] * -0x2731;
    lVar32 = (lVar24 + lVar22) * 0x1d17;
    lVar25 = lVar22 - (lVar24 + lVar29);
    lVar8 = (lVar33 + lVar30) * 0x2a87 + lVar33 * -0x7dc + lVar34;
    lVar35 = (lVar29 + lVar22) * 0xf7a;
    lVar22 = lVar34 + lVar30 * -0x22ab + lVar33 * 0x7dc;
    lVar34 = lVar32 + (long)piVar6[0x18] * (long)psVar5[0x18] * 0x2731 + lVar35;
    lVar32 = lVar36 + (lVar24 - lVar29) * -0x2c91 + lVar32;
    lVar35 = (lVar24 - lVar29) * 0x2c91 + lVar36 + lVar35;
    local_190[lVar26 + 0x40] = (int)((ulong)(lVar8 - lVar34) >> 0xb);
    local_190[lVar26 + 0x38] = (int)((ulong)(lVar27 + lVar25 * -0x2731) >> 0xb);
    local_190[lVar26 + 0x10] = (int)((ulong)(lVar32 + lVar7) >> 0xb);
    local_190[lVar26] = (int)((ulong)(lVar34 + lVar8) >> 0xb);
    local_190[lVar26 + 8] = (int)((ulong)(lVar25 * 0x2731 + lVar27) >> 0xb);
    local_190[lVar26 + 0x30] = (int)((ulong)(lVar7 - lVar32) >> 0xb);
    local_190[lVar26 + 0x18] = (int)((ulong)(lVar35 + lVar22) >> 0xb);
    local_190[lVar26 + 0x28] = (int)((ulong)(lVar22 - lVar35) >> 0xb);
    local_190[lVar26 + 0x20] = (int)((ulong)(lVar31 + (lVar30 - lVar33) * -0x2d42) >> 0xb);
    lVar26 = lVar1;
  } while ((int)lVar1 != 8);
  lVar26 = 0;
  lVar23 = lVar23 + -0x180;
  do {
    iVar13 = local_190[lVar26 + 1];
    iVar11 = local_190[lVar26 + 2];
    iVar12 = local_190[lVar26 + 4];
    iVar14 = local_190[lVar26 + 5];
    iVar15 = local_190[lVar26 + 7];
    iVar18 = local_190[lVar26 + 3] * -0x2731;
    iVar2 = local_190[lVar26] * 0x2000 + 0x8020000;
    iVar19 = (iVar14 + iVar13) * 0x1d17;
    iVar16 = iVar2 + local_190[lVar26 + 6] * 0x16a1;
    iVar20 = (iVar15 + iVar13) * 0xf7a;
    iVar3 = (iVar12 + iVar11) * 0x2a87 + iVar12 * -0x7dc + iVar16;
    puVar9 = (undefined *)(*(long *)(param_4 + lVar26) + (ulong)param_5);
    iVar4 = iVar19 + local_190[lVar26 + 3] * 0x2731 + iVar20;
    iVar2 = iVar2 + local_190[lVar26 + 6] * -0x2d42;
    iVar13 = iVar13 - (iVar14 + iVar15);
    iVar17 = iVar2 + (iVar11 - iVar12) * 0x16a1;
    lVar26 = lVar26 + 8;
    *puVar9 = *(undefined *)(lVar23 + ((ulong)((uint)(iVar4 + iVar3) >> 0x12) & 0x3ff));
    puVar9[8] = *(undefined *)(lVar23 + ((ulong)((uint)(iVar3 - iVar4) >> 0x12) & 0x3ff));
    puVar9[1] = *(undefined *)(lVar23 + ((ulong)((uint)(iVar13 * 0x2731 + iVar17) >> 0x12) & 0x3ff))
    ;
    iVar3 = iVar16 + (iVar12 + iVar11) * -0x2a87 + iVar11 * 0x22ab;
    iVar19 = iVar18 + (iVar14 - iVar15) * -0x2c91 + iVar19;
    iVar4 = iVar16 + iVar11 * -0x22ab + iVar12 * 0x7dc;
    puVar9[7] = *(undefined *)
                 (lVar23 + ((ulong)((uint)(iVar17 + iVar13 * -0x2731) >> 0x12) & 0x3ff));
    iVar20 = (iVar14 - iVar15) * 0x2c91 + iVar18 + iVar20;
    puVar9[2] = *(undefined *)(lVar23 + ((ulong)((uint)(iVar19 + iVar3) >> 0x12) & 0x3ff));
    puVar9[6] = *(undefined *)(lVar23 + ((ulong)((uint)(iVar3 - iVar19) >> 0x12) & 0x3ff));
    puVar9[3] = *(undefined *)(lVar23 + ((ulong)((uint)(iVar20 + iVar4) >> 0x12) & 0x3ff));
    puVar9[5] = *(undefined *)(lVar23 + ((ulong)((uint)(iVar4 - iVar20) >> 0x12) & 0x3ff));
    puVar9[4] = *(undefined *)
                 (lVar23 + ((ulong)((uint)(iVar2 + (iVar11 - iVar12) * -0x2d42) >> 0x12) & 0x3ff));
  } while (lVar26 != 0x48);
  if (*(long *)(lVar21 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


