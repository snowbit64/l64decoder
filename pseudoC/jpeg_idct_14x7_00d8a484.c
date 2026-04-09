// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_idct_14x7
// Entry Point: 00d8a484
// Size: 1072 bytes
// Signature: undefined jpeg_idct_14x7(void)


void jpeg_idct_14x7(long param_1,long param_2,long param_3,long param_4,uint param_5)

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
  int iVar21;
  int iVar22;
  int iVar23;
  long lVar24;
  int iVar25;
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
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  int local_150 [56];
  long local_70;
  
  lVar24 = tpidr_el0;
  local_70 = *(long *)(lVar24 + 0x28);
  lVar27 = *(long *)(param_1 + 0x198);
  lVar33 = *(long *)(param_2 + 0x58);
  lVar29 = 0;
  do {
    psVar5 = (short *)(param_3 + lVar29 * 2);
    piVar6 = (int *)(lVar33 + lVar29 * 4);
    lVar1 = lVar29 + 1;
    lVar37 = (long)piVar6[0x20] * (long)psVar5[0x20];
    lVar30 = (long)piVar6[0x10] * (long)psVar5[0x10];
    uVar10 = (long)(*piVar6 * (int)*psVar5) << 0xd | 0x400;
    lVar38 = (long)piVar6[0x30] * (long)psVar5[0x30];
    lVar26 = (lVar30 - lVar37) * 0xa12;
    lVar34 = (long)piVar6[8] * (long)psVar5[8];
    lVar31 = (long)piVar6[0x18] * (long)psVar5[0x18];
    lVar28 = (long)piVar6[0x28] * (long)psVar5[0x28];
    lVar40 = (lVar37 - lVar38) * 0x1c37;
    lVar39 = uVar10 + (lVar38 + lVar30) * 0x28c6;
    lVar36 = (lVar31 + lVar34) * 0x1def;
    lVar7 = lVar40 + lVar38 * -0x27d + lVar39;
    lVar35 = (lVar28 + lVar34) * 0x13a3;
    lVar40 = uVar10 + lVar37 * -0x3aeb + lVar26 + lVar40;
    lVar8 = lVar35 + lVar36 + (lVar34 - lVar31) * -0x573;
    lVar32 = (lVar28 + lVar31) * -0x2c1f;
    lVar39 = lVar26 + lVar30 * -0x4f0f + lVar39;
    lVar26 = lVar36 + (lVar34 - lVar31) * 0x573 + lVar32;
    lVar32 = lVar35 + lVar28 * 0x3bde + lVar32;
    local_150[lVar29 + 0x30] = (int)((ulong)(lVar7 - lVar8) >> 0xb);
    local_150[lVar29] = (int)((ulong)(lVar8 + lVar7) >> 0xb);
    local_150[lVar29 + 8] = (int)((ulong)(lVar26 + lVar40) >> 0xb);
    local_150[lVar29 + 0x28] = (int)((ulong)(lVar40 - lVar26) >> 0xb);
    local_150[lVar29 + 0x10] = (int)((ulong)(lVar32 + lVar39) >> 0xb);
    local_150[lVar29 + 0x20] = (int)((ulong)(lVar39 - lVar32) >> 0xb);
    local_150[lVar29 + 0x18] = (int)(uVar10 + (lVar37 - (lVar38 + lVar30)) * 0x2d41 >> 0xb);
    lVar29 = lVar1;
  } while ((int)lVar1 != 8);
  lVar27 = lVar27 + -0x180;
  lVar29 = 0;
  do {
    lVar33 = lVar29 + 8;
    iVar11 = local_150[lVar29 + 5];
    iVar13 = local_150[lVar29 + 6];
    iVar15 = local_150[lVar29 + 2];
    iVar12 = local_150[lVar29 + 2];
    iVar14 = local_150[lVar29 + 3];
    iVar16 = local_150[lVar29 + 4];
    iVar17 = local_150[lVar29 + 7];
    iVar2 = local_150[lVar29] * 0x2000 + 0x8020000;
    iVar25 = (iVar13 + iVar12) * 0x2362;
    iVar18 = iVar2 + iVar16 * 0x28c6;
    iVar22 = (iVar14 + iVar15) * 0x2ab7;
    iVar23 = (iVar11 + iVar15) * 0x2652;
    iVar19 = iVar25 + iVar12 * 0x8bd;
    iVar3 = iVar22 + iVar15 * -0x2410 + iVar23 + iVar17 * 0x2000;
    iVar4 = iVar19 + iVar18;
    iVar18 = iVar18 - iVar19;
    iVar20 = iVar2 + iVar16 * 0xa12;
    puVar9 = (undefined *)(*(long *)(param_4 + lVar29) + (ulong)param_5);
    iVar25 = iVar25 + iVar13 * -0x3704;
    iVar21 = iVar17 * -0x2000 + (iVar11 + iVar14) * -0x511;
    *puVar9 = *(undefined *)(lVar27 + ((ulong)((uint)(iVar3 + iVar4) >> 0x12) & 0x3ff));
    iVar19 = iVar25 + iVar20;
    iVar22 = iVar22 + iVar14 * -0xd92 + iVar21;
    puVar9[0xd] = *(undefined *)(lVar27 + ((ulong)((uint)(iVar4 - iVar3) >> 0x12) & 0x3ff));
    iVar4 = iVar12 * 0x13a3 + iVar13 * -0x2c1f;
    puVar9[1] = *(undefined *)(lVar27 + ((ulong)((uint)(iVar22 + iVar19) >> 0x12) & 0x3ff));
    iVar12 = iVar2 + iVar16 * -0x1c37;
    iVar3 = iVar4 + iVar12;
    iVar21 = iVar23 + iVar11 * -0x4bf7 + iVar21;
    iVar12 = iVar12 - iVar4;
    puVar9[0xc] = *(undefined *)(lVar27 + ((ulong)((uint)(iVar19 - iVar22) >> 0x12) & 0x3ff));
    iVar2 = iVar2 + iVar16 * -0x2d42;
    iVar4 = ((iVar15 - iVar14) - iVar11) + iVar17;
    puVar9[2] = *(undefined *)(lVar27 + ((ulong)((uint)(iVar21 + iVar3) >> 0x12) & 0x3ff));
    puVar9[0xb] = *(undefined *)(lVar27 + ((ulong)((uint)(iVar3 - iVar21) >> 0x12) & 0x3ff));
    iVar19 = (iVar11 - iVar14) * 0x2cf8;
    iVar22 = (iVar11 + iVar15) * 0x1814;
    puVar9[3] = *(undefined *)(lVar27 + ((ulong)((uint)(iVar4 * 0x2000 + iVar2) >> 0x12) & 0x3ff));
    iVar3 = iVar17 * 0x2000 + iVar11 * -0x361a + iVar19 + iVar22;
    iVar20 = iVar20 - iVar25;
    puVar9[10] = *(undefined *)(lVar27 + ((ulong)((uint)(iVar2 + iVar4 * -0x2000) >> 0x12) & 0x3ff))
    ;
    iVar4 = iVar17 * -0x2000 + (iVar15 - iVar14) * 0xef2;
    iVar2 = iVar19 + iVar14 * 0x1599 + iVar4;
    puVar9[4] = *(undefined *)(lVar27 + ((ulong)((uint)(iVar3 + iVar12) >> 0x12) & 0x3ff));
    puVar9[9] = *(undefined *)(lVar27 + ((ulong)((uint)(iVar12 - iVar3) >> 0x12) & 0x3ff));
    puVar9[5] = *(undefined *)(lVar27 + ((ulong)((uint)(iVar2 + iVar20) >> 0x12) & 0x3ff));
    iVar4 = iVar22 + iVar15 * -0x21f5 + iVar4;
    puVar9[8] = *(undefined *)(lVar27 + ((ulong)((uint)(iVar20 - iVar2) >> 0x12) & 0x3ff));
    puVar9[6] = *(undefined *)(lVar27 + ((ulong)((uint)(iVar4 + iVar18) >> 0x12) & 0x3ff));
    puVar9[7] = *(undefined *)(lVar27 + ((ulong)((uint)(iVar18 - iVar4) >> 0x12) & 0x3ff));
    lVar29 = lVar33;
  } while (lVar33 != 0x38);
  if (*(long *)(lVar24 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


