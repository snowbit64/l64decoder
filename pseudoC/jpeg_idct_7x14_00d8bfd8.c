// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_idct_7x14
// Entry Point: 00d8bfd8
// Size: 1052 bytes
// Signature: undefined jpeg_idct_7x14(void)


void jpeg_idct_7x14(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  undefined *puVar5;
  ulong uVar6;
  int iVar7;
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
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  int iVar27;
  int *piVar28;
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
  long lVar41;
  int local_1f8 [7];
  undefined4 local_1dc [7];
  undefined4 local_1c0 [7];
  int local_1a4 [7];
  undefined4 local_188 [7];
  undefined4 local_16c [7];
  undefined4 local_150 [7];
  undefined4 local_134 [7];
  undefined4 local_118 [7];
  undefined4 local_fc [7];
  int local_e0 [7];
  undefined4 local_c4 [7];
  undefined4 local_a8 [7];
  undefined4 local_8c [7];
  long local_70;
  
  lVar19 = tpidr_el0;
  local_70 = *(long *)(lVar19 + 0x28);
  lVar25 = *(long *)(param_1 + 0x198);
  lVar29 = *(long *)(param_2 + 0x58);
  lVar26 = 0;
  do {
    psVar4 = (short *)(param_3 + lVar26 * 2);
    piVar28 = (int *)(lVar29 + lVar26 * 4);
    lVar1 = lVar26 + 1;
    lVar36 = (long)piVar28[0x10] * (long)psVar4[0x10];
    lVar31 = (long)piVar28[0x30] * (long)psVar4[0x30];
    lVar33 = (long)piVar28[0x20] * (long)psVar4[0x20];
    uVar6 = (long)(*piVar28 * (int)*psVar4) << 0xd | 0x400;
    lVar38 = (lVar31 + lVar36) * 0x2362;
    lVar21 = uVar6 + lVar33 * 0x28c6;
    lVar23 = uVar6 + lVar33 * 0xa12;
    lVar24 = uVar6 + lVar33 * -0x1c37;
    lVar34 = lVar38 + lVar36 * 0x8bd;
    lVar38 = lVar38 + lVar31 * -0x3704;
    lVar32 = lVar36 * 0x13a3 + lVar31 * -0x2c1f;
    lVar31 = lVar34 + lVar21;
    lVar21 = lVar21 - lVar34;
    lVar37 = (long)piVar28[8] * (long)psVar4[8];
    lVar20 = (long)piVar28[0x18] * (long)psVar4[0x18];
    lVar34 = lVar38 + lVar23;
    lVar35 = (long)piVar28[0x28] * (long)psVar4[0x28];
    lVar23 = lVar23 - lVar38;
    lVar30 = (long)piVar28[0x38] * (long)psVar4[0x38];
    lVar38 = (lVar20 + lVar37) * 0x2ab7;
    lVar36 = lVar32 + lVar24;
    lVar39 = (lVar35 + lVar37) * 0x2652;
    lVar24 = lVar24 - lVar32;
    lVar22 = (lVar35 + lVar37) * 0x1814;
    lVar41 = lVar30 * -0x2000 + (lVar35 + lVar20) * -0x511;
    lVar32 = lVar38 + lVar37 * -0x2410 + lVar39 + lVar30 * 0x2000;
    lVar40 = (lVar35 - lVar20) * 0x2cf8;
    lVar38 = lVar38 + lVar20 * -0xd92 + lVar41;
    lVar41 = lVar39 + lVar35 * -0x4bf7 + lVar41;
    iVar2 = ((int)(lVar37 - lVar20) - (int)lVar35) + (int)lVar30;
    lVar35 = lVar40 + lVar35 * -0x361a + lVar22 + lVar30 * 0x2000;
    iVar27 = (int)(uVar6 + lVar33 * -0x2d42 >> 0xb);
    lVar30 = lVar30 * -0x2000 + (lVar37 - lVar20) * 0xef2;
    local_1a4[lVar26] = iVar2 * 4 + iVar27;
    lVar20 = lVar40 + lVar20 * 0x1599 + lVar30;
    local_e0[lVar26] = iVar27 + iVar2 * -4;
    lVar30 = lVar22 + lVar37 * -0x21f5 + lVar30;
    local_188[lVar26] = (int)((ulong)(lVar35 + lVar24) >> 0xb);
    local_fc[lVar26] = (int)((ulong)(lVar24 - lVar35) >> 0xb);
    local_8c[lVar26] = (int)((ulong)(lVar31 - lVar32) >> 0xb);
    local_a8[lVar26] = (int)((ulong)(lVar34 - lVar38) >> 0xb);
    local_1f8[lVar26] = (int)((ulong)(lVar32 + lVar31) >> 0xb);
    local_1dc[lVar26] = (int)((ulong)(lVar38 + lVar34) >> 0xb);
    local_1c0[lVar26] = (int)((ulong)(lVar41 + lVar36) >> 0xb);
    local_c4[lVar26] = (int)((ulong)(lVar36 - lVar41) >> 0xb);
    local_16c[lVar26] = (int)((ulong)(lVar20 + lVar23) >> 0xb);
    local_118[lVar26] = (int)((ulong)(lVar23 - lVar20) >> 0xb);
    local_150[lVar26] = (int)((ulong)(lVar30 + lVar21) >> 0xb);
    local_134[lVar26] = (int)((ulong)(lVar21 - lVar30) >> 0xb);
    lVar26 = lVar1;
  } while ((int)lVar1 != 7);
  lVar26 = 0;
  piVar28 = local_1f8;
  lVar25 = lVar25 + -0x180;
  do {
    iVar7 = piVar28[3];
    iVar9 = piVar28[4];
    iVar8 = piVar28[5];
    iVar10 = piVar28[6];
    iVar2 = *piVar28;
    iVar11 = piVar28[1];
    iVar12 = piVar28[2];
    piVar28 = piVar28 + 7;
    iVar2 = iVar2 * 0x2000 + 0x8020000;
    iVar14 = (iVar9 - iVar10) * 0x1c37;
    iVar15 = (iVar7 + iVar11) * 0x1def;
    iVar13 = iVar2 + (iVar10 + iVar12) * 0x28c6;
    iVar16 = (iVar8 + iVar11) * 0x13a3;
    iVar27 = iVar14 + iVar10 * -0x27d + iVar13;
    iVar17 = (iVar12 - iVar9) * 0xa12;
    iVar3 = iVar15 + (iVar11 - iVar7) * -0x573 + iVar16;
    puVar5 = (undefined *)(*(long *)(param_4 + lVar26) + (ulong)param_5);
    iVar18 = (iVar8 + iVar7) * -0x2c1f;
    iVar14 = iVar2 + iVar9 * -0x3aeb + iVar17 + iVar14;
    iVar7 = iVar15 + (iVar11 - iVar7) * 0x573 + iVar18;
    iVar13 = iVar17 + iVar12 * -0x4f0f + iVar13;
    lVar26 = lVar26 + 8;
    *puVar5 = *(undefined *)(lVar25 + ((ulong)((uint)(iVar3 + iVar27) >> 0x12) & 0x3ff));
    puVar5[6] = *(undefined *)(lVar25 + ((ulong)((uint)(iVar27 - iVar3) >> 0x12) & 0x3ff));
    puVar5[1] = *(undefined *)(lVar25 + ((ulong)((uint)(iVar7 + iVar14) >> 0x12) & 0x3ff));
    iVar18 = iVar16 + iVar8 * 0x3bde + iVar18;
    puVar5[5] = *(undefined *)(lVar25 + ((ulong)((uint)(iVar14 - iVar7) >> 0x12) & 0x3ff));
    puVar5[2] = *(undefined *)(lVar25 + ((ulong)((uint)(iVar18 + iVar13) >> 0x12) & 0x3ff));
    puVar5[4] = *(undefined *)(lVar25 + ((ulong)((uint)(iVar13 - iVar18) >> 0x12) & 0x3ff));
    puVar5[3] = *(undefined *)
                 (lVar25 + ((ulong)((uint)(iVar2 + (iVar9 - (iVar10 + iVar12)) * 0x2d41) >> 0x12) &
                           0x3ff));
  } while (lVar26 != 0x70);
  if (*(long *)(lVar19 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


