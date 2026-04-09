// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_idct_8x4
// Entry Point: 00d8af1c
// Size: 1436 bytes
// Signature: undefined jpeg_idct_8x4(void)


void jpeg_idct_8x4(long param_1,long param_2,short *param_3,long param_4,ulong param_5)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  int *piVar17;
  int iVar18;
  long lVar19;
  int iVar20;
  int local_e8 [32];
  long local_68;
  
  lVar12 = tpidr_el0;
  local_68 = *(long *)(lVar12 + 0x28);
  piVar17 = *(int **)(param_2 + 0x58);
  lVar16 = ((long)piVar17[0x18] * (long)param_3[0x18] + (long)piVar17[8] * (long)param_3[8]) *
           0x1151 + 0x400;
  iVar5 = (piVar17[0x10] * (int)param_3[0x10] + *piVar17 * (int)*param_3) * 4;
  iVar6 = (*piVar17 * (int)*param_3 - piVar17[0x10] * (int)param_3[0x10]) * 4;
  iVar18 = (int)((ulong)(lVar16 + (long)piVar17[8] * (long)param_3[8] * 0x187e) >> 0xb);
  iVar13 = (int)((ulong)(lVar16 + (long)piVar17[0x18] * (long)param_3[0x18] * -0x3b21) >> 0xb);
  local_e8[24] = iVar5 - iVar18;
  local_e8[16] = iVar6 - iVar13;
  local_e8[8] = iVar13 + iVar6;
  lVar16 = ((long)piVar17[0x1a] * (long)param_3[0x19] + (long)piVar17[9] * (long)param_3[9]) *
           0x1151 + 0x400;
  iVar6 = (piVar17[0x11] * (int)param_3[0x11] + piVar17[1] * (int)param_3[1]) * 4;
  iVar13 = (piVar17[1] * (int)param_3[1] - piVar17[0x11] * (int)param_3[0x11]) * 4;
  iVar14 = (int)((ulong)(lVar16 + (long)piVar17[9] * (long)param_3[9] * 0x187e) >> 0xb);
  iVar15 = (int)((ulong)(lVar16 + (long)piVar17[0x1a] * (long)param_3[0x19] * -0x3b21) >> 0xb);
  local_e8[25] = iVar6 - iVar14;
  local_e8[17] = iVar13 - iVar15;
  local_e8[9] = iVar15 + iVar13;
  local_e8[0] = iVar18 + iVar5;
  local_e8[1] = iVar14 + iVar6;
  lVar16 = ((long)piVar17[0x1a] * (long)param_3[0x1a] + (long)piVar17[10] * (long)param_3[10]) *
           0x1151 + 0x400;
  iVar5 = (piVar17[0x12] * (int)param_3[0x12] + piVar17[2] * (int)param_3[2]) * 4;
  iVar6 = (piVar17[2] * (int)param_3[2] - piVar17[0x12] * (int)param_3[0x12]) * 4;
  iVar14 = (int)((ulong)(lVar16 + (long)piVar17[10] * (long)param_3[10] * 0x187e) >> 0xb);
  iVar13 = (int)((ulong)(lVar16 + (long)piVar17[0x1a] * (long)param_3[0x1a] * -0x3b21) >> 0xb);
  local_e8[26] = iVar5 - iVar14;
  local_e8[18] = iVar6 - iVar13;
  local_e8[10] = iVar13 + iVar6;
  lVar16 = ((long)piVar17[0x1c] * (long)param_3[0x1b] + (long)piVar17[0xb] * (long)param_3[0xb]) *
           0x1151 + 0x400;
  iVar6 = (piVar17[0x13] * (int)param_3[0x13] + piVar17[3] * (int)param_3[3]) * 4;
  iVar13 = (piVar17[3] * (int)param_3[3] - piVar17[0x13] * (int)param_3[0x13]) * 4;
  iVar15 = (int)((ulong)(lVar16 + (long)piVar17[0xb] * (long)param_3[0xb] * 0x187e) >> 0xb);
  iVar18 = (int)((ulong)(lVar16 + (long)piVar17[0x1c] * (long)param_3[0x1b] * -0x3b21) >> 0xb);
  local_e8[27] = iVar6 - iVar15;
  local_e8[19] = iVar13 - iVar18;
  local_e8[11] = iVar18 + iVar13;
  local_e8[2] = iVar14 + iVar5;
  local_e8[3] = iVar15 + iVar6;
  lVar16 = ((long)piVar17[0x1c] * (long)param_3[0x1c] + (long)piVar17[0xc] * (long)param_3[0xc]) *
           0x1151 + 0x400;
  iVar5 = (piVar17[0x14] * (int)param_3[0x14] + piVar17[4] * (int)param_3[4]) * 4;
  iVar6 = (piVar17[4] * (int)param_3[4] - piVar17[0x14] * (int)param_3[0x14]) * 4;
  iVar14 = (int)((ulong)(lVar16 + (long)piVar17[0xc] * (long)param_3[0xc] * 0x187e) >> 0xb);
  iVar13 = (int)((ulong)(lVar16 + (long)piVar17[0x1c] * (long)param_3[0x1c] * -0x3b21) >> 0xb);
  local_e8[28] = iVar5 - iVar14;
  local_e8[20] = iVar6 - iVar13;
  local_e8[12] = iVar13 + iVar6;
  lVar16 = ((long)piVar17[0x1e] * (long)param_3[0x1d] + (long)piVar17[0xd] * (long)param_3[0xd]) *
           0x1151 + 0x400;
  iVar6 = (piVar17[0x15] * (int)param_3[0x15] + piVar17[5] * (int)param_3[5]) * 4;
  iVar13 = (piVar17[5] * (int)param_3[5] - piVar17[0x15] * (int)param_3[0x15]) * 4;
  iVar15 = (int)((ulong)(lVar16 + (long)piVar17[0x1e] * (long)param_3[0x1d] * -0x3b21) >> 0xb);
  iVar18 = (int)((ulong)(lVar16 + (long)piVar17[0xd] * (long)param_3[0xd] * 0x187e) >> 0xb);
  local_e8[13] = iVar15 + iVar13;
  local_e8[29] = iVar6 - iVar18;
  local_e8[21] = iVar13 - iVar15;
  local_e8[4] = iVar14 + iVar5;
  local_e8[5] = iVar18 + iVar6;
  lVar16 = ((long)piVar17[0x1e] * (long)param_3[0x1e] + (long)piVar17[0xe] * (long)param_3[0xe]) *
           0x1151 + 0x400;
  iVar5 = (piVar17[0x16] * (int)param_3[0x16] + piVar17[6] * (int)param_3[6]) * 4;
  iVar6 = (piVar17[6] * (int)param_3[6] - piVar17[0x16] * (int)param_3[0x16]) * 4;
  iVar15 = (int)((ulong)(lVar16 + (long)piVar17[0xe] * (long)param_3[0xe] * 0x187e) >> 0xb);
  iVar13 = (int)((ulong)(lVar16 + (long)piVar17[0x1e] * (long)param_3[0x1e] * -0x3b21) >> 0xb);
  local_e8[30] = iVar5 - iVar15;
  local_e8[22] = iVar6 - iVar13;
  local_e8[14] = iVar13 + iVar6;
  lVar16 = ((long)piVar17[0x20] * (long)param_3[0x1f] + (long)piVar17[0xf] * (long)param_3[0xf]) *
           0x1151 + 0x400;
  iVar6 = (piVar17[0x17] * (int)param_3[0x17] + piVar17[7] * (int)param_3[7]) * 4;
  iVar14 = (int)((ulong)(lVar16 + (long)piVar17[0xf] * (long)param_3[0xf] * 0x187e) >> 0xb);
  iVar13 = (piVar17[7] * (int)param_3[7] - piVar17[0x17] * (int)param_3[0x17]) * 4;
  iVar18 = (int)((ulong)(lVar16 + (long)piVar17[0x20] * (long)param_3[0x1f] * -0x3b21) >> 0xb);
  local_e8[6] = iVar15 + iVar5;
  local_e8[7] = iVar14 + iVar6;
  lVar19 = *(long *)(param_1 + 0x198) + -0x180;
  local_e8[31] = iVar6 - iVar14;
  local_e8[15] = iVar18 + iVar13;
  local_e8[23] = iVar13 - iVar18;
  lVar16 = 0;
  do {
    lVar1 = lVar16 + 8;
    iVar3 = local_e8[lVar16 + 7];
    iVar14 = local_e8[lVar16 + 3];
    iVar6 = local_e8[lVar16 + 1];
    iVar4 = local_e8[lVar16 + 5];
    puVar2 = (undefined *)(*(long *)(param_4 + lVar16) + (param_5 & 0xffffffff));
    iVar20 = (local_e8[lVar16 + 6] + local_e8[lVar16 + 2]) * 0x1151;
    iVar10 = (iVar6 + iVar3) * -0x1ccd;
    iVar15 = (iVar6 + iVar4 + iVar14 + iVar3) * 0x25a1;
    iVar9 = iVar20 + local_e8[lVar16 + 2] * 0x187e;
    iVar18 = iVar15 + (iVar6 + iVar4) * -0xc7c;
    iVar7 = (local_e8[lVar16] + 0x4010 + local_e8[lVar16 + 4]) * 0x2000;
    iVar5 = iVar9 + iVar7;
    iVar6 = iVar10 + iVar6 * 0x300b + iVar18;
    iVar20 = iVar20 + local_e8[lVar16 + 6] * -0x3b21;
    iVar8 = ((local_e8[lVar16] + 0x4010) - local_e8[lVar16 + 4]) * 0x2000;
    iVar11 = (iVar14 + iVar4) * -0x5203;
    iVar15 = iVar15 + (iVar14 + iVar3) * -0x3ec5;
    iVar13 = iVar20 + iVar8;
    iVar8 = iVar8 - iVar20;
    iVar7 = iVar7 - iVar9;
    *puVar2 = *(undefined *)(lVar19 + ((ulong)((uint)(iVar6 + iVar5) >> 0x12) & 0x3ff));
    iVar14 = iVar11 + iVar14 * 0x6254 + iVar15;
    puVar2[7] = *(undefined *)(lVar19 + ((ulong)((uint)(iVar5 - iVar6) >> 0x12) & 0x3ff));
    iVar15 = iVar10 + iVar3 * 0x98e + iVar15;
    puVar2[1] = *(undefined *)(lVar19 + ((ulong)((uint)(iVar14 + iVar13) >> 0x12) & 0x3ff));
    iVar18 = iVar11 + iVar4 * 0x41b3 + iVar18;
    puVar2[6] = *(undefined *)(lVar19 + ((ulong)((uint)(iVar13 - iVar14) >> 0x12) & 0x3ff));
    puVar2[2] = *(undefined *)(lVar19 + ((ulong)((uint)(iVar18 + iVar8) >> 0x12) & 0x3ff));
    puVar2[5] = *(undefined *)(lVar19 + ((ulong)((uint)(iVar8 - iVar18) >> 0x12) & 0x3ff));
    puVar2[3] = *(undefined *)(lVar19 + ((ulong)((uint)(iVar15 + iVar7) >> 0x12) & 0x3ff));
    puVar2[4] = *(undefined *)(lVar19 + ((ulong)((uint)(iVar7 - iVar15) >> 0x12) & 0x3ff));
    lVar16 = lVar1;
  } while (lVar1 != 0x20);
  if (*(long *)(lVar12 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


