// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_idct_16x8
// Entry Point: 00d89f28
// Size: 1372 bytes
// Signature: undefined jpeg_idct_16x8(void)


void jpeg_idct_16x8(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
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
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  int *piVar27;
  int iVar28;
  long lVar29;
  short *psVar30;
  int *piVar31;
  uint uVar32;
  long lVar33;
  ushort uVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  int iVar38;
  long lVar39;
  long lVar40;
  int iVar41;
  long lVar42;
  int iVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  int local_170 [64];
  long local_70;
  
  lVar23 = tpidr_el0;
  piVar27 = local_170;
  psVar30 = (short *)(param_3 + 0x40);
  uVar32 = 9;
  local_70 = *(long *)(lVar23 + 0x28);
  lVar26 = *(long *)(param_1 + 0x198);
  piVar31 = *(int **)(param_2 + 0x58);
  do {
    uVar34 = psVar30[-0x10];
    if ((ushort)(psVar30[-0x18] | uVar34) == 0) {
      if ((((psVar30[-8] != 0) || (*psVar30 != 0)) || (psVar30[8] != 0)) ||
         ((psVar30[0x10] != 0 || (psVar30[0x18] != 0)))) {
        uVar34 = 0;
        goto LAB_00d89fe4;
      }
      lVar36 = 0x38;
      iVar28 = (int)psVar30[-0x20] * *piVar31 * 4;
      *piVar27 = iVar28;
      piVar27[8] = iVar28;
      piVar27[0x10] = iVar28;
      piVar27[0x18] = iVar28;
      piVar27[0x20] = iVar28;
      piVar27[0x28] = iVar28;
      piVar27[0x30] = iVar28;
    }
    else {
LAB_00d89fe4:
      lVar39 = (long)piVar31[0x38] * (long)psVar30[0x18];
      uVar6 = (long)(*piVar31 * (int)psVar30[-0x20]) << 0xd | 0x400;
      lVar42 = (long)piVar31[0x28] * (long)psVar30[8];
      lVar33 = (ulong)(uint)(piVar31[0x20] * (int)*psVar30) * 0x2000 + uVar6;
      lVar44 = (long)piVar31[0x18] * (long)psVar30[-8];
      lVar25 = uVar6 + (ulong)(uint)(piVar31[0x20] * (int)*psVar30) * -0x2000;
      lVar24 = (long)piVar31[8] * (long)psVar30[-0x18];
      lVar45 = ((long)piVar31[0x30] * (long)psVar30[0x10] +
               (long)piVar31[0x10] * (long)(short)uVar34) * 0x1151;
      lVar35 = lVar45 + (long)piVar31[0x10] * (long)(short)uVar34 * 0x187e;
      lVar45 = lVar45 + (long)piVar31[0x30] * (long)psVar30[0x10] * -0x3b21;
      lVar29 = (lVar24 + lVar42 + lVar44 + lVar39) * 0x25a1;
      lVar37 = (lVar24 + lVar39) * -0x1ccd;
      lVar46 = lVar29 + (lVar24 + lVar42) * -0xc7c;
      lVar40 = (lVar44 + lVar42) * -0x5203;
      lVar36 = lVar35 + lVar33;
      lVar24 = lVar37 + lVar24 * 0x300b + lVar46;
      lVar29 = lVar29 + (lVar44 + lVar39) * -0x3ec5;
      lVar4 = lVar45 + lVar25;
      lVar25 = lVar25 - lVar45;
      lVar46 = lVar40 + lVar42 * 0x41b3 + lVar46;
      *piVar27 = (int)((ulong)(lVar24 + lVar36) >> 0xb);
      piVar27[0x38] = (int)((ulong)(lVar36 - lVar24) >> 0xb);
      lVar24 = lVar40 + lVar44 * 0x6254 + lVar29;
      lVar33 = lVar33 - lVar35;
      lVar29 = lVar37 + lVar39 * 0x98e + lVar29;
      piVar27[0x10] = (int)((ulong)(lVar46 + lVar25) >> 0xb);
      iVar28 = (int)((ulong)(lVar33 - lVar29) >> 0xb);
      lVar36 = 0x20;
      piVar27[8] = (int)((ulong)(lVar24 + lVar4) >> 0xb);
      piVar27[0x30] = (int)((ulong)(lVar4 - lVar24) >> 0xb);
      piVar27[0x28] = (int)((ulong)(lVar25 - lVar46) >> 0xb);
      piVar27[0x18] = (int)((ulong)(lVar29 + lVar33) >> 0xb);
    }
    piVar27[lVar36] = iVar28;
    piVar27 = piVar27 + 1;
    piVar31 = piVar31 + 1;
    uVar32 = uVar32 - 1;
    psVar30 = psVar30 + 1;
    if (uVar32 < 2) {
      lVar26 = lVar26 + -0x180;
      lVar36 = 0;
      do {
        lVar33 = lVar36 + 8;
        iVar7 = local_170[lVar36 + 5];
        iVar10 = local_170[lVar36 + 6];
        iVar8 = local_170[lVar36 + 1];
        iVar11 = local_170[lVar36 + 2];
        iVar9 = local_170[lVar36 + 3];
        iVar12 = local_170[lVar36 + 4];
        iVar13 = local_170[lVar36 + 7];
        iVar41 = (iVar11 - iVar10) * 0x2c63;
        iVar16 = (iVar9 + iVar8) * 0x2b4e;
        iVar17 = (iVar7 + iVar8) * 0x27e9;
        iVar43 = (iVar11 - iVar10) * 0x8d4;
        iVar14 = iVar41 + iVar10 * 0x5203;
        iVar38 = (int)((long)local_170[lVar36] << 0xd) + 0x8020000;
        iVar28 = iVar38 + iVar12 * 0x29cf;
        iVar18 = (iVar13 + iVar8) * 0x22fc;
        iVar1 = iVar14 + iVar28;
        iVar22 = iVar38 + iVar12 * -0x29cf;
        iVar2 = iVar16 + iVar8 * -0x492a + iVar17 + iVar18;
        puVar5 = (undefined *)(*(long *)(param_4 + lVar36) + (ulong)param_5);
        iVar3 = iVar38 + iVar12 * 0x1151;
        iVar15 = iVar43 + iVar11 * 0x1ccd;
        iVar41 = iVar41 + iVar11 * -0x133e;
        iVar19 = (iVar7 + iVar9) * 0x470;
        iVar11 = iVar15 + iVar3;
        *puVar5 = *(undefined *)(lVar26 + ((ulong)((uint)(iVar2 + iVar1) >> 0x12) & 0x3ff));
        iVar20 = (iVar13 + iVar9) * -0x1555;
        iVar16 = iVar16 + iVar9 * 0x24d + iVar19 + iVar20;
        iVar21 = (iVar13 + iVar7) * -0x2b4e;
        puVar5[0xf] = *(undefined *)(lVar26 + ((ulong)((uint)(iVar1 - iVar2) >> 0x12) & 0x3ff));
        iVar38 = iVar38 + iVar12 * -0x1151;
        iVar1 = iVar41 + iVar38;
        iVar2 = iVar19 + iVar7 * -0x2406 + iVar17 + iVar21;
        iVar38 = iVar38 - iVar41;
        iVar3 = iVar3 - iVar15;
        puVar5[1] = *(undefined *)(lVar26 + ((ulong)((uint)(iVar16 + iVar11) >> 0x12) & 0x3ff));
        iVar43 = iVar43 + iVar10 * -0x1050;
        iVar10 = iVar43 + iVar22;
        iVar21 = iVar20 + iVar13 * 0x2218 + iVar18 + iVar21;
        puVar5[0xe] = *(undefined *)(lVar26 + ((ulong)((uint)(iVar11 - iVar16) >> 0x12) & 0x3ff));
        iVar11 = (iVar13 + iVar9) * -0x27e9;
        iVar22 = iVar22 - iVar43;
        puVar5[2] = *(undefined *)(lVar26 + ((ulong)((uint)(iVar2 + iVar1) >> 0x12) & 0x3ff));
        puVar5[0xd] = *(undefined *)(lVar26 + ((ulong)((uint)(iVar1 - iVar2) >> 0x12) & 0x3ff));
        iVar12 = (iVar7 + iVar8) * 0x1555;
        iVar16 = (iVar8 - iVar13) * 0x1cb6;
        iVar2 = (iVar13 - iVar7) * 0xd23;
        puVar5[3] = *(undefined *)(lVar26 + ((ulong)((uint)(iVar21 + iVar10) >> 0x12) & 0x3ff));
        iVar1 = iVar11 + iVar13 * 0x6485 + iVar16 + iVar2;
        puVar5[0xc] = *(undefined *)(lVar26 + ((ulong)((uint)(iVar10 - iVar21) >> 0x12) & 0x3ff));
        iVar10 = (iVar7 - iVar9) * 0x2d09;
        puVar5[4] = *(undefined *)(lVar26 + ((ulong)((uint)(iVar1 + iVar22) >> 0x12) & 0x3ff));
        iVar2 = iVar10 + iVar7 * -0x1886 + iVar12 + iVar2;
        puVar5[0xb] = *(undefined *)(lVar26 + ((ulong)((uint)(iVar22 - iVar1) >> 0x12) & 0x3ff));
        iVar1 = (iVar8 - iVar9) * 0xd23;
        iVar11 = iVar1 + iVar9 * 0x3f1a + iVar10 + iVar11;
        puVar5[5] = *(undefined *)(lVar26 + ((ulong)((uint)(iVar2 + iVar38) >> 0x12) & 0x3ff));
        puVar5[10] = *(undefined *)(lVar26 + ((ulong)((uint)(iVar38 - iVar2) >> 0x12) & 0x3ff));
        iVar28 = iVar28 - iVar14;
        puVar5[6] = *(undefined *)(lVar26 + ((ulong)((uint)(iVar11 + iVar3) >> 0x12) & 0x3ff));
        iVar16 = iVar1 + iVar8 * -0x3abe + iVar12 + iVar16;
        puVar5[9] = *(undefined *)(lVar26 + ((ulong)((uint)(iVar3 - iVar11) >> 0x12) & 0x3ff));
        puVar5[7] = *(undefined *)(lVar26 + ((ulong)((uint)(iVar16 + iVar28) >> 0x12) & 0x3ff));
        puVar5[8] = *(undefined *)(lVar26 + ((ulong)((uint)(iVar28 - iVar16) >> 0x12) & 0x3ff));
        lVar36 = lVar33;
      } while (lVar33 != 0x40);
      if (*(long *)(lVar23 + 0x28) == local_70) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


