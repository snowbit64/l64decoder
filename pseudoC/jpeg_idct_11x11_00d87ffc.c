// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_idct_11x11
// Entry Point: 00d87ffc
// Size: 1212 bytes
// Signature: undefined jpeg_idct_11x11(void)


void jpeg_idct_11x11(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  long lVar1;
  int iVar2;
  short *psVar3;
  int *piVar4;
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
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
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
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  int local_1d0 [88];
  long local_70;
  
  lVar25 = tpidr_el0;
  local_70 = *(long *)(lVar25 + 0x28);
  lVar30 = *(long *)(param_1 + 0x198);
  lVar33 = *(long *)(param_2 + 0x58);
  lVar31 = 0;
  do {
    psVar3 = (short *)(param_3 + lVar31 * 2);
    piVar4 = (int *)(lVar33 + lVar31 * 4);
    lVar1 = lVar31 + 1;
    lVar36 = (long)piVar4[0x10] * (long)psVar3[0x10];
    lVar38 = (long)piVar4[0x30] * (long)psVar3[0x30];
    uVar6 = (long)(*piVar4 * (int)*psVar3) << 0xd | 0x400;
    lVar37 = (long)piVar4[0x20] * (long)psVar3[0x20];
    lVar26 = (long)piVar4[8] * (long)psVar3[8];
    lVar27 = (lVar38 + lVar36) - lVar37;
    lVar41 = uVar6 + lVar27 * 0x2b6c;
    lVar40 = (lVar37 - lVar36) * 0xdc9;
    lVar34 = lVar41 + (lVar37 - lVar38) * 0x517e;
    lVar29 = lVar41 + (lVar38 + lVar36) * -0x24fb;
    lVar28 = (long)piVar4[0x18] * (long)psVar3[0x18];
    lVar35 = lVar34 + lVar38 * 0x43b5;
    lVar43 = (long)piVar4[0x28] * (long)psVar3[0x28];
    lVar42 = lVar41 + lVar40 + lVar36 * -0x306f;
    lVar40 = lVar34 + lVar37 * -0x3a4c + lVar40;
    lVar32 = (long)piVar4[0x38] * (long)psVar3[0x38];
    lVar39 = lVar29 + lVar38 * -0x193d;
    lVar38 = (lVar28 + lVar26 + lVar43 + lVar32) * 0xcc0;
    lVar34 = (lVar28 + lVar26) * 0x1c6a;
    lVar29 = lVar36 * -0x2c83 + lVar37 * 0x3e39 + lVar29;
    lVar44 = (lVar43 + lVar26) * 0x1574;
    lVar37 = lVar38 + (lVar32 + lVar26) * 3000;
    lVar26 = lVar34 + lVar26 * -0x1d8a + lVar44 + lVar37;
    lVar41 = (lVar32 + lVar28) * -0x398b;
    lVar36 = lVar38 + (lVar43 + lVar28) * -0x2537;
    lVar34 = lVar34 + lVar28 * 0x4258 + lVar41 + lVar36;
    lVar36 = lVar44 + lVar43 * -0x2626 + lVar36;
    local_1d0[lVar31 + 0x50] = (int)((ulong)(lVar35 - lVar26) >> 0xb);
    local_1d0[lVar31 + 8] = (int)((ulong)(lVar34 + lVar40) >> 0xb);
    lVar37 = lVar41 + lVar32 * 0x4347 + lVar37;
    lVar38 = lVar28 * -0x2ef3 + lVar43 * 0x200b + lVar32 * -0x35ea + lVar38;
    local_1d0[lVar31 + 0x48] = (int)((ulong)(lVar40 - lVar34) >> 0xb);
    local_1d0[lVar31 + 0x40] = (int)((ulong)(lVar39 - lVar36) >> 0xb);
    local_1d0[lVar31 + 0x18] = (int)((ulong)(lVar37 + lVar42) >> 0xb);
    local_1d0[lVar31] = (int)((ulong)(lVar26 + lVar35) >> 0xb);
    local_1d0[lVar31 + 0x10] = (int)((ulong)(lVar36 + lVar39) >> 0xb);
    local_1d0[lVar31 + 0x38] = (int)((ulong)(lVar42 - lVar37) >> 0xb);
    local_1d0[lVar31 + 0x20] = (int)((ulong)(lVar38 + lVar29) >> 0xb);
    local_1d0[lVar31 + 0x30] = (int)((ulong)(lVar29 - lVar38) >> 0xb);
    local_1d0[lVar31 + 0x28] = (int)(uVar6 + lVar27 * -0x2d41 >> 0xb);
    lVar31 = lVar1;
  } while ((int)lVar1 != 8);
  lVar31 = 0;
  lVar30 = lVar30 + -0x180;
  do {
    iVar9 = local_1d0[lVar31 + 1];
    iVar7 = local_1d0[lVar31 + 2];
    iVar10 = local_1d0[lVar31 + 3];
    iVar8 = local_1d0[lVar31 + 5];
    iVar11 = local_1d0[lVar31 + 6];
    iVar12 = local_1d0[lVar31 + 4];
    iVar2 = local_1d0[lVar31] * 0x2000 + 0x8020000;
    iVar13 = local_1d0[lVar31 + 7];
    iVar24 = (iVar11 + iVar7) - iVar12;
    iVar19 = (iVar10 + iVar9) * 0x1c6a;
    iVar14 = iVar2 + iVar24 * 0x2b6c;
    iVar20 = (iVar8 + iVar9) * 0x1574;
    iVar21 = (iVar10 + iVar9 + iVar8 + iVar13) * 0xcc0;
    iVar15 = iVar14 + (iVar12 - iVar11) * 0x517e;
    iVar16 = iVar21 + (iVar13 + iVar9) * 3000;
    iVar17 = iVar15 + iVar11 * 0x43b5;
    iVar22 = (iVar12 - iVar7) * 0xdc9;
    iVar9 = iVar19 + iVar9 * -0x1d8a + iVar20 + iVar16;
    puVar5 = (undefined *)(*(long *)(param_4 + lVar31) + (ulong)param_5);
    iVar23 = (iVar13 + iVar10) * -0x398b;
    iVar15 = iVar15 + iVar12 * -0x3a4c + iVar22;
    lVar31 = lVar31 + 8;
    iVar18 = iVar21 + (iVar8 + iVar10) * -0x2537;
    *puVar5 = *(undefined *)(lVar30 + ((ulong)((uint)(iVar9 + iVar17) >> 0x12) & 0x3ff));
    iVar19 = iVar19 + iVar10 * 0x4258 + iVar23 + iVar18;
    puVar5[10] = *(undefined *)(lVar30 + ((ulong)((uint)(iVar17 - iVar9) >> 0x12) & 0x3ff));
    iVar9 = iVar14 + (iVar11 + iVar7) * -0x24fb;
    puVar5[1] = *(undefined *)(lVar30 + ((ulong)((uint)(iVar19 + iVar15) >> 0x12) & 0x3ff));
    iVar11 = iVar9 + iVar11 * -0x193d;
    iVar18 = iVar20 + iVar8 * -0x2626 + iVar18;
    puVar5[9] = *(undefined *)(lVar30 + ((ulong)((uint)(iVar15 - iVar19) >> 0x12) & 0x3ff));
    puVar5[2] = *(undefined *)(lVar30 + ((ulong)((uint)(iVar18 + iVar11) >> 0x12) & 0x3ff));
    iVar15 = iVar14 + iVar22 + iVar7 * -0x306f;
    iVar16 = iVar23 + iVar13 * 0x4347 + iVar16;
    puVar5[8] = *(undefined *)(lVar30 + ((ulong)((uint)(iVar11 - iVar18) >> 0x12) & 0x3ff));
    puVar5[3] = *(undefined *)(lVar30 + ((ulong)((uint)(iVar16 + iVar15) >> 0x12) & 0x3ff));
    iVar21 = iVar10 * -0x2ef3 + iVar8 * 0x200b + iVar13 * -0x35ea + iVar21;
    iVar9 = iVar7 * -0x2c83 + iVar12 * 0x3e39 + iVar9;
    puVar5[7] = *(undefined *)(lVar30 + ((ulong)((uint)(iVar15 - iVar16) >> 0x12) & 0x3ff));
    puVar5[4] = *(undefined *)(lVar30 + ((ulong)((uint)(iVar21 + iVar9) >> 0x12) & 0x3ff));
    puVar5[6] = *(undefined *)(lVar30 + ((ulong)((uint)(iVar9 - iVar21) >> 0x12) & 0x3ff));
    puVar5[5] = *(undefined *)(lVar30 + ((ulong)((uint)(iVar2 + iVar24 * -0x2d41) >> 0x12) & 0x3ff))
    ;
  } while (lVar31 != 0x58);
  if (*(long *)(lVar25 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


