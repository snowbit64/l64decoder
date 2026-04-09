// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_idct_14x14
// Entry Point: 00d88e9c
// Size: 1288 bytes
// Signature: undefined jpeg_idct_14x14(void)


void jpeg_idct_14x14(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  int *piVar5;
  undefined *puVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
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
  int iVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  int iVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  int local_230 [112];
  long local_70;
  
  lVar21 = tpidr_el0;
  local_70 = *(long *)(lVar21 + 0x28);
  lVar26 = *(long *)(param_1 + 0x198);
  lVar30 = *(long *)(param_2 + 0x58);
  lVar27 = 0;
  do {
    psVar4 = (short *)(param_3 + lVar27 * 2);
    piVar5 = (int *)(lVar30 + lVar27 * 4);
    lVar1 = lVar27 + 1;
    lVar37 = (long)piVar5[0x10] * (long)psVar4[0x10];
    lVar31 = (long)piVar5[0x30] * (long)psVar4[0x30];
    lVar34 = (long)piVar5[0x20] * (long)psVar4[0x20];
    uVar7 = (long)(*piVar5 * (int)*psVar4) << 0xd | 0x400;
    lVar39 = (lVar31 + lVar37) * 0x2362;
    lVar25 = uVar7 + lVar34 * -0x1c37;
    lVar28 = uVar7 + lVar34 * 0x28c6;
    lVar22 = uVar7 + lVar34 * 0xa12;
    lVar35 = lVar39 + lVar37 * 0x8bd;
    lVar39 = lVar39 + lVar31 * -0x3704;
    lVar32 = lVar37 * 0x13a3 + lVar31 * -0x2c1f;
    lVar31 = lVar35 + lVar28;
    lVar28 = lVar28 - lVar35;
    lVar38 = (long)piVar5[8] * (long)psVar4[8];
    lVar40 = (long)piVar5[0x18] * (long)psVar4[0x18];
    lVar35 = lVar39 + lVar22;
    lVar36 = (long)piVar5[0x28] * (long)psVar4[0x28];
    lVar22 = lVar22 - lVar39;
    lVar29 = (long)piVar5[0x38] * (long)psVar4[0x38];
    lVar39 = (lVar40 + lVar38) * 0x2ab7;
    lVar41 = (lVar36 + lVar38) * 0x2652;
    lVar23 = (lVar36 + lVar38) * 0x1814;
    lVar37 = lVar32 + lVar25;
    lVar43 = lVar29 * -0x2000 + (lVar36 + lVar40) * -0x511;
    lVar25 = lVar25 - lVar32;
    lVar42 = (lVar36 - lVar40) * 0x2cf8;
    lVar32 = lVar39 + lVar40 * -0xd92 + lVar43;
    lVar39 = lVar39 + lVar38 * -0x2410 + lVar41 + lVar29 * 0x2000;
    lVar43 = lVar41 + lVar36 * -0x4bf7 + lVar43;
    lVar41 = lVar42 + lVar36 * -0x361a + lVar23 + lVar29 * 0x2000;
    iVar2 = ((int)(lVar38 - lVar40) - (int)lVar36) + (int)lVar29;
    lVar29 = lVar29 * -0x2000 + (lVar38 - lVar40) * 0xef2;
    local_230[lVar27 + 0x68] = (int)((ulong)(lVar31 - lVar39) >> 0xb);
    local_230[lVar27 + 0x10] = (int)((ulong)(lVar43 + lVar37) >> 0xb);
    iVar33 = (int)(uVar7 + lVar34 * -0x2d42 >> 0xb);
    local_230[lVar27 + 0x18] = iVar2 * 4 + iVar33;
    local_230[lVar27 + 0x50] = iVar33 + iVar2 * -4;
    lVar23 = lVar23 + lVar38 * -0x21f5 + lVar29;
    lVar29 = lVar42 + lVar40 * 0x1599 + lVar29;
    local_230[lVar27 + 0x20] = (int)((ulong)(lVar41 + lVar25) >> 0xb);
    local_230[lVar27 + 0x48] = (int)((ulong)(lVar25 - lVar41) >> 0xb);
    local_230[lVar27 + 0x60] = (int)((ulong)(lVar35 - lVar32) >> 0xb);
    local_230[lVar27] = (int)((ulong)(lVar39 + lVar31) >> 0xb);
    local_230[lVar27 + 8] = (int)((ulong)(lVar32 + lVar35) >> 0xb);
    local_230[lVar27 + 0x58] = (int)((ulong)(lVar37 - lVar43) >> 0xb);
    local_230[lVar27 + 0x28] = (int)((ulong)(lVar29 + lVar22) >> 0xb);
    local_230[lVar27 + 0x40] = (int)((ulong)(lVar22 - lVar29) >> 0xb);
    local_230[lVar27 + 0x30] = (int)((ulong)(lVar23 + lVar28) >> 0xb);
    local_230[lVar27 + 0x38] = (int)((ulong)(lVar28 - lVar23) >> 0xb);
    lVar27 = lVar1;
  } while ((int)lVar1 != 8);
  lVar26 = lVar26 + -0x180;
  lVar27 = 0;
  do {
    lVar30 = lVar27 + 8;
    iVar8 = local_230[lVar27 + 5];
    iVar10 = local_230[lVar27 + 6];
    iVar12 = local_230[lVar27 + 2];
    iVar9 = local_230[lVar27 + 2];
    iVar11 = local_230[lVar27 + 3];
    iVar13 = local_230[lVar27 + 4];
    iVar2 = local_230[lVar27] * 0x2000 + 0x8020000;
    iVar14 = local_230[lVar27 + 7];
    iVar24 = (iVar10 + iVar9) * 0x2362;
    iVar15 = iVar2 + iVar13 * 0x28c6;
    iVar19 = (iVar11 + iVar12) * 0x2ab7;
    iVar20 = (iVar8 + iVar12) * 0x2652;
    iVar16 = iVar24 + iVar9 * 0x8bd;
    iVar33 = iVar19 + iVar12 * -0x2410 + iVar20 + iVar14 * 0x2000;
    iVar3 = iVar16 + iVar15;
    iVar15 = iVar15 - iVar16;
    iVar17 = iVar2 + iVar13 * 0xa12;
    puVar6 = (undefined *)(*(long *)(param_4 + lVar27) + (ulong)param_5);
    iVar24 = iVar24 + iVar10 * -0x3704;
    iVar18 = iVar14 * -0x2000 + (iVar8 + iVar11) * -0x511;
    *puVar6 = *(undefined *)(lVar26 + ((ulong)((uint)(iVar33 + iVar3) >> 0x12) & 0x3ff));
    iVar16 = iVar24 + iVar17;
    iVar19 = iVar19 + iVar11 * -0xd92 + iVar18;
    puVar6[0xd] = *(undefined *)(lVar26 + ((ulong)((uint)(iVar3 - iVar33) >> 0x12) & 0x3ff));
    iVar3 = iVar9 * 0x13a3 + iVar10 * -0x2c1f;
    puVar6[1] = *(undefined *)(lVar26 + ((ulong)((uint)(iVar19 + iVar16) >> 0x12) & 0x3ff));
    iVar9 = iVar2 + iVar13 * -0x1c37;
    iVar33 = iVar3 + iVar9;
    iVar18 = iVar20 + iVar8 * -0x4bf7 + iVar18;
    iVar9 = iVar9 - iVar3;
    puVar6[0xc] = *(undefined *)(lVar26 + ((ulong)((uint)(iVar16 - iVar19) >> 0x12) & 0x3ff));
    iVar2 = iVar2 + iVar13 * -0x2d42;
    iVar3 = ((iVar12 - iVar11) - iVar8) + iVar14;
    puVar6[2] = *(undefined *)(lVar26 + ((ulong)((uint)(iVar18 + iVar33) >> 0x12) & 0x3ff));
    puVar6[0xb] = *(undefined *)(lVar26 + ((ulong)((uint)(iVar33 - iVar18) >> 0x12) & 0x3ff));
    iVar16 = (iVar8 - iVar11) * 0x2cf8;
    iVar19 = (iVar8 + iVar12) * 0x1814;
    puVar6[3] = *(undefined *)(lVar26 + ((ulong)((uint)(iVar3 * 0x2000 + iVar2) >> 0x12) & 0x3ff));
    iVar33 = iVar14 * 0x2000 + iVar8 * -0x361a + iVar16 + iVar19;
    iVar17 = iVar17 - iVar24;
    puVar6[10] = *(undefined *)(lVar26 + ((ulong)((uint)(iVar2 + iVar3 * -0x2000) >> 0x12) & 0x3ff))
    ;
    iVar3 = iVar14 * -0x2000 + (iVar12 - iVar11) * 0xef2;
    iVar2 = iVar16 + iVar11 * 0x1599 + iVar3;
    puVar6[4] = *(undefined *)(lVar26 + ((ulong)((uint)(iVar33 + iVar9) >> 0x12) & 0x3ff));
    puVar6[9] = *(undefined *)(lVar26 + ((ulong)((uint)(iVar9 - iVar33) >> 0x12) & 0x3ff));
    puVar6[5] = *(undefined *)(lVar26 + ((ulong)((uint)(iVar2 + iVar17) >> 0x12) & 0x3ff));
    iVar3 = iVar19 + iVar12 * -0x21f5 + iVar3;
    puVar6[8] = *(undefined *)(lVar26 + ((ulong)((uint)(iVar17 - iVar2) >> 0x12) & 0x3ff));
    puVar6[6] = *(undefined *)(lVar26 + ((ulong)((uint)(iVar3 + iVar15) >> 0x12) & 0x3ff));
    puVar6[7] = *(undefined *)(lVar26 + ((ulong)((uint)(iVar15 - iVar3) >> 0x12) & 0x3ff));
    lVar27 = lVar30;
  } while (lVar30 != 0x70);
  if (*(long *)(lVar21 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


