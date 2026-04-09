// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_idct_12x6
// Entry Point: 00d8a8b4
// Size: 868 bytes
// Signature: undefined jpeg_idct_12x6(void)


void jpeg_idct_12x6(long param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  short sVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  int iVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  int iVar33;
  long lVar34;
  int local_130 [48];
  long local_70;
  
  lVar24 = tpidr_el0;
  local_70 = *(long *)(lVar24 + 0x28);
  lVar31 = *(long *)(param_1 + 0x198);
  lVar32 = *(long *)(param_2 + 0x58);
  lVar30 = 0;
  do {
    psVar4 = (short *)(param_3 + lVar30 * 2);
    piVar5 = (int *)(lVar32 + lVar30 * 4);
    lVar1 = lVar30 + 1;
    sVar15 = psVar4[0x20];
    iVar27 = piVar5[0x20];
    lVar34 = (long)piVar5[8] * (long)psVar4[8];
    lVar28 = (long)piVar5[0x18] * (long)psVar4[0x18];
    uVar9 = (long)(*piVar5 * (int)*psVar4) << 0xd | 0x400;
    lVar29 = (long)piVar5[0x28] * (long)psVar4[0x28];
    lVar25 = uVar9 + (long)iVar27 * (long)sVar15 * 0x16a1;
    lVar6 = (long)piVar5[0x10] * (long)psVar4[0x10] * 0x2731 + lVar25;
    lVar25 = lVar25 + (long)piVar5[0x10] * (long)psVar4[0x10] * -0x2731;
    lVar26 = (lVar29 + lVar34) * 0xbb6;
    lVar7 = lVar26 + (lVar28 + lVar34) * 0x2000;
    iVar21 = (int)lVar34 - ((int)lVar28 + (int)lVar29);
    lVar26 = lVar26 + (lVar29 - lVar28) * 0x2000;
    local_130[lVar30 + 0x28] = (int)((ulong)(lVar6 - lVar7) >> 0xb);
    iVar27 = (int)(uVar9 + (long)iVar27 * (long)sVar15 * -0x2d42 >> 0xb);
    local_130[lVar30] = (int)((ulong)(lVar7 + lVar6) >> 0xb);
    local_130[lVar30 + 8] = iVar21 * 4 + iVar27;
    local_130[lVar30 + 0x20] = iVar27 + iVar21 * -4;
    local_130[lVar30 + 0x10] = (int)((ulong)(lVar26 + lVar25) >> 0xb);
    local_130[lVar30 + 0x18] = (int)((ulong)(lVar25 - lVar26) >> 0xb);
    lVar30 = lVar1;
  } while ((int)lVar1 != 8);
  lVar31 = lVar31 + -0x180;
  lVar30 = 0;
  do {
    lVar32 = lVar30 + 8;
    iVar10 = local_130[lVar30 + 1];
    iVar13 = local_130[lVar30 + 2];
    iVar11 = local_130[lVar30 + 5];
    iVar12 = local_130[lVar30 + 3];
    iVar14 = local_130[lVar30 + 7];
    iVar33 = (int)((long)local_130[lVar30 + 6] << 0xd);
    iVar16 = iVar33 + iVar13 * 0x2bb6;
    iVar19 = (iVar11 + iVar10 + iVar14) * 0x1b8d;
    iVar22 = iVar13 - local_130[lVar30 + 6];
    iVar27 = local_130[lVar30] * 0x2000 + 0x8020000;
    iVar17 = iVar19 + (iVar11 + iVar10) * 0x85b;
    iVar21 = iVar27 + local_130[lVar30 + 4] * 0x2731;
    iVar2 = iVar16 + iVar21;
    iVar33 = iVar13 * 0xbb6 - iVar33;
    iVar13 = iVar12 * 0x29cf + iVar10 * 0x8f7 + iVar17;
    puVar8 = (undefined *)(*(long *)(param_4 + lVar30) + (param_5 & 0xffffffff));
    iVar23 = iVar27 + local_130[lVar30 + 4] * -0x2731;
    iVar20 = ((iVar10 - iVar14) + (iVar12 - iVar11)) * 0x1151;
    iVar18 = iVar20 + (iVar10 - iVar14) * 0x187e;
    *puVar8 = *(undefined *)(lVar31 + ((ulong)((uint)(iVar13 + iVar2) >> 0x12) & 0x3ff));
    iVar3 = iVar22 * 0x2000 + iVar27;
    iVar27 = iVar27 + iVar22 * -0x2000;
    puVar8[0xb] = *(undefined *)(lVar31 + ((ulong)((uint)(iVar2 - iVar13) >> 0x12) & 0x3ff));
    iVar13 = (iVar14 + iVar11) * -0x2175;
    puVar8[1] = *(undefined *)(lVar31 + ((ulong)((uint)(iVar18 + iVar3) >> 0x12) & 0x3ff));
    iVar2 = iVar33 + iVar23;
    iVar23 = iVar23 - iVar33;
    iVar17 = iVar12 * -0x1151 + iVar11 * -0x2f50 + iVar13 + iVar17;
    puVar8[10] = *(undefined *)(lVar31 + ((ulong)((uint)(iVar3 - iVar18) >> 0x12) & 0x3ff));
    puVar8[2] = *(undefined *)(lVar31 + ((ulong)((uint)(iVar17 + iVar2) >> 0x12) & 0x3ff));
    iVar13 = iVar12 * -0x29cf + iVar14 * 0x32c6 + iVar19 + iVar13;
    iVar20 = iVar20 + (iVar12 - iVar11) * -0x3b21;
    puVar8[9] = *(undefined *)(lVar31 + ((ulong)((uint)(iVar2 - iVar17) >> 0x12) & 0x3ff));
    puVar8[3] = *(undefined *)(lVar31 + ((ulong)((uint)(iVar13 + iVar23) >> 0x12) & 0x3ff));
    puVar8[8] = *(undefined *)(lVar31 + ((ulong)((uint)(iVar23 - iVar13) >> 0x12) & 0x3ff));
    puVar8[4] = *(undefined *)(lVar31 + ((ulong)((uint)(iVar20 + iVar27) >> 0x12) & 0x3ff));
    iVar21 = iVar21 - iVar16;
    iVar19 = iVar12 * -0x1151 + iVar10 * -0x15a4 + iVar14 * -0x3f74 + iVar19;
    puVar8[7] = *(undefined *)(lVar31 + ((ulong)((uint)(iVar27 - iVar20) >> 0x12) & 0x3ff));
    puVar8[5] = *(undefined *)(lVar31 + ((ulong)((uint)(iVar19 + iVar21) >> 0x12) & 0x3ff));
    puVar8[6] = *(undefined *)(lVar31 + ((ulong)((uint)(iVar21 - iVar19) >> 0x12) & 0x3ff));
    lVar30 = lVar32;
  } while (lVar32 != 0x30);
  if (*(long *)(lVar24 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


