// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_idct_8x16
// Entry Point: 00d8bb10
// Size: 1224 bytes
// Signature: undefined jpeg_idct_8x16(void)


void jpeg_idct_8x16(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  short *psVar5;
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
  long lVar18;
  long lVar19;
  long lVar20;
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
  long lVar37;
  long lVar38;
  long lVar39;
  int iVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  int iVar47;
  int local_270 [128];
  long local_70;
  
  lVar18 = tpidr_el0;
  local_70 = *(long *)(lVar18 + 0x28);
  lVar27 = *(long *)(param_1 + 0x198);
  lVar22 = *(long *)(param_2 + 0x58);
  lVar29 = 0;
  do {
    piVar4 = (int *)(lVar22 + lVar29 * 4);
    psVar5 = (short *)(param_3 + lVar29 * 2);
    lVar1 = lVar29 + 1;
    lVar19 = (long)piVar4[0x20] * (long)psVar5[0x20];
    lVar24 = (long)piVar4[0x10] * (long)psVar5[0x10];
    lVar26 = (long)piVar4[0x30] * (long)psVar5[0x30];
    lVar39 = (lVar24 - lVar26) * 0x8d4;
    uVar7 = (long)(*piVar4 * (int)*psVar5) << 0xd | 0x400;
    lVar33 = (lVar24 - lVar26) * 0x2c63;
    lVar32 = lVar19 * 0x29cf + uVar7;
    lVar35 = uVar7 + lVar19 * -0x29cf;
    lVar34 = lVar19 * 0x1151 + uVar7;
    lVar41 = lVar33 + lVar26 * 0x5203;
    lVar20 = uVar7 + lVar19 * -0x1151;
    lVar43 = lVar39 + lVar24 * 0x1ccd;
    lVar19 = lVar41 + lVar32;
    lVar33 = lVar33 + lVar24 * -0x133e;
    lVar37 = (long)piVar4[8] * (long)psVar5[8];
    lVar39 = lVar39 + lVar26 * -0x1050;
    lVar32 = lVar32 - lVar41;
    lVar42 = (long)piVar4[0x18] * (long)psVar5[0x18];
    lVar46 = (long)piVar4[0x28] * (long)psVar5[0x28];
    lVar24 = lVar43 + lVar34;
    lVar34 = lVar34 - lVar43;
    lVar28 = (long)piVar4[0x38] * (long)psVar5[0x38];
    lVar26 = lVar33 + lVar20;
    lVar41 = (lVar42 + lVar37) * 0x2b4e;
    lVar44 = (lVar46 + lVar37) * 0x27e9;
    lVar23 = (lVar28 + lVar37) * 0x22fc;
    lVar20 = lVar20 - lVar33;
    lVar25 = (lVar46 + lVar37) * 0x1555;
    lVar33 = lVar39 + lVar35;
    lVar30 = (lVar37 - lVar42) * 0xd23;
    lVar35 = lVar35 - lVar39;
    lVar39 = lVar41 + lVar37 * -0x492a + lVar44 + lVar23;
    lVar43 = (lVar46 + lVar42) * 0x470;
    lVar21 = (lVar46 - lVar42) * 0x2d09;
    lVar45 = (lVar28 + lVar42) * -0x1555;
    lVar38 = (lVar37 - lVar28) * 0x1cb6;
    lVar36 = (lVar28 + lVar42) * -0x27e9;
    lVar41 = lVar41 + lVar42 * 0x24d + lVar43 + lVar45;
    lVar37 = lVar30 + lVar37 * -0x3abe + lVar25 + lVar38;
    lVar31 = (lVar28 + lVar46) * -0x2b4e;
    lVar43 = lVar43 + lVar46 * -0x2406 + lVar44 + lVar31;
    lVar31 = lVar45 + lVar28 * 0x2218 + lVar23 + lVar31;
    lVar23 = (lVar28 - lVar46) * 0xd23;
    local_270[lVar29] = (int)((ulong)(lVar39 + lVar19) >> 0xb);
    local_270[lVar29 + 0x78] = (int)((ulong)(lVar19 - lVar39) >> 0xb);
    local_270[lVar29 + 0x70] = (int)((ulong)(lVar24 - lVar41) >> 0xb);
    local_270[lVar29 + 0x10] = (int)((ulong)(lVar43 + lVar26) >> 0xb);
    lVar19 = lVar36 + lVar28 * 0x6485 + lVar38 + lVar23;
    lVar23 = lVar21 + lVar46 * -0x1886 + lVar25 + lVar23;
    lVar36 = lVar30 + lVar42 * 0x3f1a + lVar21 + lVar36;
    local_270[lVar29 + 0x60] = (int)((ulong)(lVar33 - lVar31) >> 0xb);
    local_270[lVar29 + 0x50] = (int)((ulong)(lVar20 - lVar23) >> 0xb);
    local_270[lVar29 + 0x20] = (int)((ulong)(lVar19 + lVar35) >> 0xb);
    local_270[lVar29 + 0x58] = (int)((ulong)(lVar35 - lVar19) >> 0xb);
    local_270[lVar29 + 0x30] = (int)((ulong)(lVar36 + lVar34) >> 0xb);
    local_270[lVar29 + 8] = (int)((ulong)(lVar41 + lVar24) >> 0xb);
    local_270[lVar29 + 0x68] = (int)((ulong)(lVar26 - lVar43) >> 0xb);
    local_270[lVar29 + 0x18] = (int)((ulong)(lVar31 + lVar33) >> 0xb);
    local_270[lVar29 + 0x28] = (int)((ulong)(lVar23 + lVar20) >> 0xb);
    local_270[lVar29 + 0x48] = (int)((ulong)(lVar34 - lVar36) >> 0xb);
    local_270[lVar29 + 0x38] = (int)((ulong)(lVar37 + lVar32) >> 0xb);
    local_270[lVar29 + 0x40] = (int)((ulong)(lVar32 - lVar37) >> 0xb);
    lVar29 = lVar1;
  } while ((int)lVar1 != 8);
  lVar27 = lVar27 + -0x180;
  lVar29 = 0;
  do {
    lVar22 = lVar29 + 8;
    iVar8 = local_270[lVar29 + 7];
    iVar9 = local_270[lVar29 + 3];
    iVar10 = local_270[lVar29 + 5];
    puVar6 = (undefined *)(*(long *)(param_4 + lVar29) + (ulong)param_5);
    iVar11 = local_270[lVar29 + 1];
    iVar40 = (local_270[lVar29 + 6] + local_270[lVar29 + 2]) * 0x1151;
    iVar16 = (iVar11 + iVar8) * -0x1ccd;
    iVar47 = (iVar11 + iVar10 + iVar9 + iVar8) * 0x25a1;
    iVar14 = iVar40 + local_270[lVar29 + 2] * 0x187e;
    iVar15 = iVar47 + (iVar11 + iVar10) * -0xc7c;
    iVar12 = (local_270[lVar29] + 0x4010 + local_270[lVar29 + 4]) * 0x2000;
    iVar11 = iVar16 + iVar11 * 0x300b + iVar15;
    iVar2 = iVar14 + iVar12;
    iVar40 = iVar40 + local_270[lVar29 + 6] * -0x3b21;
    iVar47 = iVar47 + (iVar9 + iVar8) * -0x3ec5;
    iVar13 = ((local_270[lVar29] + 0x4010) - local_270[lVar29 + 4]) * 0x2000;
    iVar17 = (iVar9 + iVar10) * -0x5203;
    iVar3 = iVar40 + iVar13;
    iVar13 = iVar13 - iVar40;
    iVar12 = iVar12 - iVar14;
    *puVar6 = *(undefined *)(lVar27 + ((ulong)((uint)(iVar11 + iVar2) >> 0x12) & 0x3ff));
    iVar9 = iVar17 + iVar9 * 0x6254 + iVar47;
    puVar6[7] = *(undefined *)(lVar27 + ((ulong)((uint)(iVar2 - iVar11) >> 0x12) & 0x3ff));
    puVar6[1] = *(undefined *)(lVar27 + ((ulong)((uint)(iVar9 + iVar3) >> 0x12) & 0x3ff));
    iVar15 = iVar17 + iVar10 * 0x41b3 + iVar15;
    puVar6[6] = *(undefined *)(lVar27 + ((ulong)((uint)(iVar3 - iVar9) >> 0x12) & 0x3ff));
    iVar47 = iVar16 + iVar8 * 0x98e + iVar47;
    puVar6[2] = *(undefined *)(lVar27 + ((ulong)((uint)(iVar15 + iVar13) >> 0x12) & 0x3ff));
    puVar6[5] = *(undefined *)(lVar27 + ((ulong)((uint)(iVar13 - iVar15) >> 0x12) & 0x3ff));
    puVar6[3] = *(undefined *)(lVar27 + ((ulong)((uint)(iVar47 + iVar12) >> 0x12) & 0x3ff));
    puVar6[4] = *(undefined *)(lVar27 + ((ulong)((uint)(iVar12 - iVar47) >> 0x12) & 0x3ff));
    lVar29 = lVar22;
  } while (lVar22 != 0x80);
  if (*(long *)(lVar18 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


