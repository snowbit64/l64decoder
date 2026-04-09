// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_fdct_8x16
// Entry Point: 00d83e2c
// Size: 1136 bytes
// Signature: undefined jpeg_fdct_8x16(void)


void jpeg_fdct_8x16(int *param_1,long param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
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
  int local_170 [8];
  int local_150 [8];
  int local_130 [8];
  int local_110 [8];
  int local_f0 [8];
  int local_d0 [8];
  int local_b0 [8];
  int local_90 [8];
  long local_70;
  
  lVar10 = tpidr_el0;
  lVar12 = 0;
  local_70 = *(long *)(lVar10 + 0x28);
  piVar11 = param_1;
  while( true ) {
    while( true ) {
      pbVar3 = (byte *)(*(long *)(param_2 + lVar12 * 8) + (param_3 & 0xffffffff));
      lVar13 = (ulong)pbVar3[7] + (ulong)*pbVar3;
      lVar18 = (ulong)*pbVar3 - (ulong)pbVar3[7];
      lVar14 = (ulong)pbVar3[6] + (ulong)pbVar3[1];
      lVar20 = (ulong)pbVar3[1] - (ulong)pbVar3[6];
      lVar26 = (ulong)pbVar3[5] + (ulong)pbVar3[2];
      lVar22 = (ulong)pbVar3[2] - (ulong)pbVar3[5];
      lVar25 = lVar14 - lVar26;
      lVar28 = (ulong)pbVar3[4] + (ulong)pbVar3[3];
      lVar16 = (ulong)pbVar3[3] - (ulong)pbVar3[4];
      lVar23 = lVar13 - lVar28;
      iVar1 = (int)lVar28 + (int)lVar13;
      lVar13 = (lVar23 + lVar25) * 0x1151 + 0x400;
      iVar2 = (int)lVar26 + (int)lVar14;
      lVar14 = (lVar16 + lVar20 + lVar22 + lVar18) * 0x25a1;
      lVar31 = (lVar16 + lVar18) * -0x1ccd + 0x400;
      lVar26 = lVar14 + (lVar22 + lVar18) * -0xc7c;
      lVar28 = (lVar22 + lVar20) * -0x5203 + 0x400;
      lVar14 = lVar14 + (lVar16 + lVar20) * -0x3ec5;
      *piVar11 = (iVar1 + iVar2) * 4 + -0x1000;
      piVar11[1] = (int)((ulong)(lVar31 + lVar18 * 0x300b + lVar26) >> 0xb);
      piVar11[2] = (int)((ulong)(lVar13 + lVar23 * 0x187e) >> 0xb);
      piVar11[3] = (int)((ulong)(lVar28 + lVar20 * 0x6254 + lVar14) >> 0xb);
      piVar11[4] = (iVar1 - iVar2) * 4;
      piVar11[5] = (int)((ulong)(lVar28 + lVar22 * 0x41b3 + lVar26) >> 0xb);
      piVar11[6] = (int)((ulong)(lVar13 + lVar25 * -0x3b21) >> 0xb);
      piVar11[7] = (int)((ulong)(lVar31 + lVar16 * 0x98e + lVar14) >> 0xb);
      if ((int)lVar12 != 7) break;
      piVar11 = local_170;
      lVar12 = lVar12 + 1;
    }
    if ((int)lVar12 == 0xf) break;
    piVar11 = piVar11 + 8;
    lVar12 = lVar12 + 1;
  }
  lVar12 = 0;
  do {
    piVar11 = (int *)((long)param_1 + lVar12);
    lVar13 = lVar12 + 4;
    lVar29 = (long)(*(int *)((long)local_d0 + lVar12) + piVar11[0x10]);
    lVar14 = (long)(*(int *)((long)local_110 + lVar12) + piVar11[0x20]);
    lVar22 = (long)(*(int *)((long)local_90 + lVar12) + *piVar11);
    lVar25 = (long)(*(int *)((long)local_b0 + lVar12) + piVar11[8]);
    lVar15 = (long)(*(int *)((long)local_f0 + lVar12) + piVar11[0x18]);
    lVar28 = (long)(*(int *)((long)local_130 + lVar12) + piVar11[0x28]);
    lVar26 = lVar28 + lVar29;
    lVar18 = (long)(*(int *)((long)local_150 + lVar12) + piVar11[0x30]);
    lVar16 = (long)(*(int *)((long)local_170 + lVar12) + piVar11[0x38]);
    lVar29 = lVar29 - lVar28;
    lVar28 = lVar16 + lVar22;
    lVar22 = lVar22 - lVar16;
    lVar16 = lVar18 + lVar25;
    lVar25 = lVar25 - lVar18;
    lVar18 = lVar14 + lVar15;
    lVar15 = lVar15 - lVar14;
    iVar1 = *piVar11 - *(int *)((long)local_90 + lVar12);
    iVar2 = piVar11[8] - *(int *)((long)local_b0 + lVar12);
    iVar4 = piVar11[0x10] - *(int *)((long)local_d0 + lVar12);
    iVar5 = piVar11[0x18] - *(int *)((long)local_f0 + lVar12);
    iVar6 = piVar11[0x28] - *(int *)((long)local_130 + lVar12);
    iVar7 = piVar11[0x30] - *(int *)((long)local_150 + lVar12);
    iVar8 = piVar11[0x20] - *(int *)((long)local_110 + lVar12);
    lVar14 = (lVar15 - lVar25) * 0x8d4 + (lVar22 - lVar29) * 0x2c63 + 0x8000;
    lVar20 = (long)iVar1;
    lVar31 = (long)iVar2;
    iVar9 = piVar11[0x38] - *(int *)((long)local_170 + lVar12);
    lVar24 = (long)iVar7;
    lVar30 = (long)iVar9;
    lVar23 = (long)iVar4;
    lVar19 = (long)iVar5;
    lVar21 = (lVar31 + lVar20) * 0x2b4e + (lVar24 - lVar30) * 0xd23;
    lVar27 = (long)iVar6;
    lVar12 = (long)iVar8;
    lVar17 = (lVar23 + lVar20) * 0x27e9 + (lVar30 + lVar27) * 0x1555;
    lVar20 = (lVar19 + lVar20) * 0x22fc + (lVar12 - lVar30) * 0x1cb6;
    *piVar11 = (int)(lVar18 + lVar26 + lVar16 + lVar28 + 4U >> 3);
    lVar30 = (lVar19 + lVar31) * -0x1555 + (lVar24 + lVar12) * -0x27e9;
    piVar11[0x20] =
         (int)((ulong)((lVar28 - lVar18) * 0x29cf + (lVar16 - lVar26) * 0x1151 + 0x8000) >> 0x10);
    piVar11[0x10] = (int)((ulong)(lVar14 + lVar29 * 0x4587 + lVar25 * 0x2e75) >> 0x10);
    lVar12 = (lVar19 + lVar23) * -0x2b4e + (lVar27 - lVar12) * 0xd23 + 0x8000;
    piVar11[0x30] = (int)((ulong)(lVar14 + lVar15 * -0x21f9 + lVar22 * -0x6c2) >> 0x10);
    lVar14 = (lVar23 + lVar31) * 0x470 + (lVar24 - lVar27) * 0x2d09;
    piVar11[8] = (int)((ulong)(lVar21 + (long)iVar1 * -0x492a + (long)iVar9 * 0x18f3 + lVar20 +
                               lVar17 + 0x8000) >> 0x10);
    piVar11[0x18] =
         (int)((ulong)(lVar30 + (long)iVar2 * 0x24d + (long)iVar7 * -0x353f + lVar14 + lVar21 +
                      0x8000) >> 0x10);
    piVar11[0x28] =
         (int)((ulong)(lVar12 + (long)iVar4 * -0x2406 + (long)iVar6 * 0x2747 + lVar14 + lVar17) >>
              0x10);
    piVar11[0x38] =
         (int)((ulong)(lVar12 + (long)iVar5 * 0x2218 + (long)iVar8 * 0x4560 + lVar30 + lVar20) >>
              0x10);
    lVar12 = lVar13;
  } while ((int)lVar13 != 0x20);
  if (*(long *)(lVar10 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


