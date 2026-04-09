// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_idct_12x12
// Entry Point: 00d884b8
// Size: 1148 bytes
// Signature: undefined jpeg_idct_12x12(void)


void jpeg_idct_12x12(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  int *piVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
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
  long lVar37;
  int iVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  int local_1f0 [96];
  long local_70;
  
  lVar22 = tpidr_el0;
  local_70 = *(long *)(lVar22 + 0x28);
  lVar27 = *(long *)(param_1 + 0x198);
  lVar33 = *(long *)(param_2 + 0x58);
  lVar29 = 0;
  do {
    psVar5 = (short *)(param_3 + lVar29 * 2);
    piVar6 = (int *)(lVar33 + lVar29 * 4);
    lVar31 = (long)piVar6[0x10] * (long)psVar5[0x10];
    uVar9 = (long)(*piVar6 * (int)*psVar5) << 0xd | 0x400;
    lVar35 = (long)piVar6[0x30] * (long)psVar5[0x30];
    lVar41 = (long)piVar6[8] * (long)psVar5[8];
    lVar37 = (long)piVar6[0x28] * (long)psVar5[0x28];
    lVar23 = (long)piVar6[0x38] * (long)psVar5[0x38];
    lVar40 = (long)piVar6[0x20] * (long)psVar5[0x20] * 0x2731 + uVar9;
    lVar25 = uVar9 + (long)piVar6[0x20] * (long)psVar5[0x20] * -0x2731;
    lVar39 = lVar35 * 0x2000 + lVar31 * 0x2bb6;
    lVar28 = (long)piVar6[0x18] * (long)psVar5[0x18];
    lVar7 = (lVar31 - lVar35) * 0x2000 + uVar9;
    lVar30 = uVar9 + (lVar31 - lVar35) * -0x2000;
    lVar32 = lVar35 * -0x2000 + lVar31 * 0xbb6;
    lVar31 = lVar39 + lVar40;
    lVar34 = (lVar37 + lVar41 + lVar23) * 0x1b8d;
    lVar40 = lVar40 - lVar39;
    lVar36 = lVar34 + (lVar37 + lVar41) * 0x85b;
    lVar24 = (lVar23 + lVar37) * -0x2175;
    lVar35 = lVar28 * 0x29cf + lVar41 * 0x8f7 + lVar36;
    lVar39 = lVar32 + lVar25;
    lVar25 = lVar25 - lVar32;
    lVar36 = lVar28 * -0x1151 + lVar37 * -0x2f50 + lVar24 + lVar36;
    lVar32 = ((lVar41 - lVar23) + (lVar28 - lVar37)) * 0x1151;
    lVar26 = lVar32 + (lVar41 - lVar23) * 0x187e;
    local_1f0[lVar29] = (int)((ulong)(lVar35 + lVar31) >> 0xb);
    lVar32 = lVar32 + (lVar28 - lVar37) * -0x3b21;
    lVar24 = lVar28 * -0x29cf + lVar23 * 0x32c6 + lVar34 + lVar24;
    local_1f0[lVar29 + 0x58] = (int)((ulong)(lVar31 - lVar35) >> 0xb);
    lVar34 = lVar28 * -0x1151 + lVar41 * -0x15a4 + lVar23 * -0x3f74 + lVar34;
    local_1f0[lVar29 + 8] = (int)((ulong)(lVar26 + lVar7) >> 0xb);
    local_1f0[lVar29 + 0x40] = (int)((ulong)(lVar25 - lVar24) >> 0xb);
    local_1f0[lVar29 + 0x20] = (int)((ulong)(lVar32 + lVar30) >> 0xb);
    lVar31 = lVar29 + 1;
    local_1f0[lVar29 + 0x50] = (int)((ulong)(lVar7 - lVar26) >> 0xb);
    local_1f0[lVar29 + 0x10] = (int)((ulong)(lVar36 + lVar39) >> 0xb);
    local_1f0[lVar29 + 0x48] = (int)((ulong)(lVar39 - lVar36) >> 0xb);
    local_1f0[lVar29 + 0x18] = (int)((ulong)(lVar24 + lVar25) >> 0xb);
    local_1f0[lVar29 + 0x38] = (int)((ulong)(lVar30 - lVar32) >> 0xb);
    local_1f0[lVar29 + 0x28] = (int)((ulong)(lVar34 + lVar40) >> 0xb);
    local_1f0[lVar29 + 0x30] = (int)((ulong)(lVar40 - lVar34) >> 0xb);
    lVar29 = lVar31;
  } while ((int)lVar31 != 8);
  lVar27 = lVar27 + -0x180;
  lVar29 = 0;
  do {
    lVar33 = lVar29 + 8;
    iVar10 = local_1f0[lVar29 + 1];
    iVar13 = local_1f0[lVar29 + 2];
    iVar11 = local_1f0[lVar29 + 5];
    iVar12 = local_1f0[lVar29 + 3];
    iVar14 = local_1f0[lVar29 + 7];
    iVar38 = (int)((long)local_1f0[lVar29 + 6] << 0xd);
    iVar15 = iVar38 + iVar13 * 0x2bb6;
    iVar18 = (iVar11 + iVar10 + iVar14) * 0x1b8d;
    iVar20 = iVar13 - local_1f0[lVar29 + 6];
    iVar1 = local_1f0[lVar29] * 0x2000 + 0x8020000;
    iVar16 = iVar18 + (iVar11 + iVar10) * 0x85b;
    iVar2 = iVar1 + local_1f0[lVar29 + 4] * 0x2731;
    iVar3 = iVar15 + iVar2;
    iVar38 = iVar13 * 0xbb6 - iVar38;
    iVar13 = iVar12 * 0x29cf + iVar10 * 0x8f7 + iVar16;
    puVar8 = (undefined *)(*(long *)(param_4 + lVar29) + (ulong)param_5);
    iVar21 = iVar1 + local_1f0[lVar29 + 4] * -0x2731;
    iVar19 = ((iVar10 - iVar14) + (iVar12 - iVar11)) * 0x1151;
    iVar17 = iVar19 + (iVar10 - iVar14) * 0x187e;
    *puVar8 = *(undefined *)(lVar27 + ((ulong)((uint)(iVar13 + iVar3) >> 0x12) & 0x3ff));
    iVar4 = iVar20 * 0x2000 + iVar1;
    iVar1 = iVar1 + iVar20 * -0x2000;
    puVar8[0xb] = *(undefined *)(lVar27 + ((ulong)((uint)(iVar3 - iVar13) >> 0x12) & 0x3ff));
    iVar13 = (iVar14 + iVar11) * -0x2175;
    puVar8[1] = *(undefined *)(lVar27 + ((ulong)((uint)(iVar17 + iVar4) >> 0x12) & 0x3ff));
    iVar3 = iVar38 + iVar21;
    iVar21 = iVar21 - iVar38;
    iVar16 = iVar12 * -0x1151 + iVar11 * -0x2f50 + iVar13 + iVar16;
    puVar8[10] = *(undefined *)(lVar27 + ((ulong)((uint)(iVar4 - iVar17) >> 0x12) & 0x3ff));
    puVar8[2] = *(undefined *)(lVar27 + ((ulong)((uint)(iVar16 + iVar3) >> 0x12) & 0x3ff));
    iVar13 = iVar12 * -0x29cf + iVar14 * 0x32c6 + iVar18 + iVar13;
    iVar19 = iVar19 + (iVar12 - iVar11) * -0x3b21;
    puVar8[9] = *(undefined *)(lVar27 + ((ulong)((uint)(iVar3 - iVar16) >> 0x12) & 0x3ff));
    puVar8[3] = *(undefined *)(lVar27 + ((ulong)((uint)(iVar13 + iVar21) >> 0x12) & 0x3ff));
    puVar8[8] = *(undefined *)(lVar27 + ((ulong)((uint)(iVar21 - iVar13) >> 0x12) & 0x3ff));
    puVar8[4] = *(undefined *)(lVar27 + ((ulong)((uint)(iVar19 + iVar1) >> 0x12) & 0x3ff));
    iVar2 = iVar2 - iVar15;
    iVar18 = iVar12 * -0x1151 + iVar10 * -0x15a4 + iVar14 * -0x3f74 + iVar18;
    puVar8[7] = *(undefined *)(lVar27 + ((ulong)((uint)(iVar1 - iVar19) >> 0x12) & 0x3ff));
    puVar8[5] = *(undefined *)(lVar27 + ((ulong)((uint)(iVar18 + iVar2) >> 0x12) & 0x3ff));
    puVar8[6] = *(undefined *)(lVar27 + ((ulong)((uint)(iVar2 - iVar18) >> 0x12) & 0x3ff));
    lVar29 = lVar33;
  } while (lVar33 != 0x60);
  if (*(long *)(lVar22 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


