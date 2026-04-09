// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_fdct_14x14
// Entry Point: 00d80530
// Size: 1192 bytes
// Signature: undefined jpeg_fdct_14x14(void)


void jpeg_fdct_14x14(int *param_1,long param_2,ulong param_3)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
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
  int *piVar27;
  long lVar28;
  long lVar29;
  int local_130 [8];
  int local_110 [8];
  int local_f0 [8];
  int local_d0 [8];
  int local_b0 [8];
  int local_90 [8];
  long local_70;
  
  lVar10 = tpidr_el0;
  lVar18 = 0;
  local_70 = *(long *)(lVar10 + 0x28);
  piVar27 = param_1;
  while( true ) {
    while( true ) {
      pbVar2 = (byte *)(*(long *)(param_2 + lVar18 * 8) + (param_3 & 0xffffffff));
      lVar12 = (ulong)pbVar2[0xd] + (ulong)*pbVar2;
      lVar13 = (ulong)pbVar2[0xc] + (ulong)pbVar2[1];
      lVar15 = (ulong)pbVar2[8] + (ulong)pbVar2[5];
      lVar22 = (ulong)pbVar2[5] - (ulong)pbVar2[8];
      lVar26 = (ulong)pbVar2[7] + (ulong)pbVar2[6];
      lVar25 = lVar26 + lVar12;
      lVar12 = lVar12 - lVar26;
      lVar26 = lVar15 + lVar13;
      lVar13 = lVar13 - lVar15;
      lVar15 = (ulong)pbVar2[0xb] + (ulong)pbVar2[2];
      lVar17 = (ulong)*pbVar2 - (ulong)pbVar2[0xd];
      lVar11 = (ulong)pbVar2[10] + (ulong)pbVar2[3];
      lVar28 = (ulong)pbVar2[1] - (ulong)pbVar2[0xc];
      lVar29 = (ulong)pbVar2[2] - (ulong)pbVar2[0xb];
      lVar14 = (ulong)pbVar2[9] + (ulong)pbVar2[4];
      lVar21 = (ulong)pbVar2[4] - (ulong)pbVar2[9];
      lVar16 = lVar14 + lVar15;
      lVar15 = lVar15 - lVar14;
      lVar24 = (ulong)pbVar2[6] - (ulong)pbVar2[7];
      lVar19 = (ulong)pbVar2[3] - (ulong)pbVar2[10];
      lVar23 = (lVar12 + lVar13) * 0x2362 + 0x1000;
      lVar14 = (lVar29 + lVar17) * 0x2652 + (lVar24 + lVar21) * 0x1814;
      piVar27[6] = (int)((ulong)(lVar23 + lVar15 * -0x2c1f + lVar13 * -0x3704) >> 0xd);
      piVar27[7] = ((int)lVar17 + (int)lVar19) -
                   ((int)(lVar29 + lVar28) + (int)(lVar22 - lVar21) + (int)lVar24);
      lVar13 = lVar19 * -0x2000 + (lVar22 - lVar21) * 0x2cf8 + (lVar29 + lVar28) * -0x511 + 0x1000;
      lVar20 = (lVar28 + lVar17) * 0x2ab7 + (lVar22 - lVar24) * 0xef2;
      piVar27[4] = (int)((lVar26 + lVar11 * -2) * 0xa12 + (lVar16 + lVar11 * -2) * -0x1c37 +
                         (lVar25 + lVar11 * -2) * 0x28c6 + 0x1000U >> 0xd);
      piVar27[5] = (int)((ulong)(lVar13 + lVar29 * -0x4bf7 + lVar21 * 0x23d7 + lVar14) >> 0xd);
      piVar27[2] = (int)((ulong)(lVar23 + lVar15 * 0x13a3 + lVar12 * 0x8bd) >> 0xd);
      piVar27[3] = (int)((ulong)(lVar13 + lVar28 * -0xd92 + lVar22 * -0x623c + lVar20) >> 0xd);
      *piVar27 = (int)lVar11 + (int)lVar26 + (int)lVar16 + (int)lVar25 + -0x700;
      piVar27[1] = (int)(lVar20 + lVar19 * 0x2000 + lVar24 * -0x240f + lVar17 * -0x2410 + lVar14 +
                         0x1000U >> 0xd);
      if ((int)lVar18 != 7) break;
      piVar27 = local_130;
      lVar18 = lVar18 + 1;
    }
    if ((int)lVar18 == 0xd) break;
    piVar27 = piVar27 + 8;
    lVar18 = lVar18 + 1;
  }
  lVar18 = 0;
  do {
    piVar27 = (int *)((long)param_1 + lVar18);
    lVar13 = lVar18 + 4;
    lVar11 = (long)(*(int *)((long)local_90 + lVar18) + *piVar27);
    lVar14 = (long)(*(int *)((long)local_b0 + lVar18) + piVar27[8]);
    lVar16 = (long)(*(int *)((long)local_d0 + lVar18) + piVar27[0x10]);
    lVar25 = (long)(*(int *)((long)local_110 + lVar18) + piVar27[0x20]);
    lVar26 = (long)(*(int *)((long)local_130 + lVar18) + piVar27[0x28]);
    lVar17 = (long)(piVar27[0x38] + piVar27[0x30]);
    lVar12 = lVar26 + lVar14;
    lVar15 = lVar17 + lVar11;
    lVar11 = lVar11 - lVar17;
    lVar14 = lVar14 - lVar26;
    lVar26 = lVar25 + lVar16;
    lVar16 = lVar16 - lVar25;
    uVar1 = *(int *)((long)local_f0 + lVar18) + piVar27[0x18];
    iVar3 = *piVar27 - *(int *)((long)local_90 + lVar18);
    iVar4 = piVar27[8] - *(int *)((long)local_b0 + lVar18);
    iVar5 = piVar27[0x20] - *(int *)((long)local_110 + lVar18);
    iVar6 = piVar27[0x10] - *(int *)((long)local_d0 + lVar18);
    iVar7 = piVar27[0x18] - *(int *)((long)local_f0 + lVar18);
    iVar8 = piVar27[0x28] - *(int *)((long)local_130 + lVar18);
    iVar9 = piVar27[0x30] - piVar27[0x38];
    lVar20 = (lVar11 + lVar14) * 0x171b + 0x2000;
    lVar19 = (long)iVar8 - (long)iVar5;
    lVar17 = (long)iVar3;
    lVar25 = (long)iVar6 + (long)iVar4;
    *piVar27 = (int)((lVar26 + (int)uVar1 + lVar12 + lVar15) * 0x14e6 + 0x2000U >> 0xe);
    lVar18 = lVar19 * 0x1d5e + (long)iVar7 * -0x14e6 + lVar25 * -0x34f + 0x2000;
    lVar21 = (long)iVar9;
    piVar27[0x20] =
         (int)(lVar12 * 0x694 +
               (-(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1) * -0xec8 +
               lVar26 * -0x126d + lVar15 * 0x1aa1 + 0x2000 >> 0xe);
    lVar15 = (iVar4 + lVar17) * 0x1be5 + (iVar8 - lVar21) * 0x9c3;
    lVar12 = (iVar6 + lVar17) * 0x1906 + (lVar21 + iVar5) * 0xfb9;
    piVar27[0x10] = (int)((ulong)(lVar20 + lVar16 * 0xcd3 + lVar11 * 0x5b5) >> 0xe);
    piVar27[0x30] = (int)((ulong)(lVar20 + lVar16 * -0x1cd0 + lVar14 * -0x23ee) >> 0xe);
    piVar27[0x38] = (int)(((lVar17 + iVar7) - (lVar25 + lVar19 + lVar21)) * 0x14e6 + 0x2000U >> 0xe)
    ;
    piVar27[0x28] =
         (int)((ulong)(lVar18 + (long)iVar6 * -0x319c + (long)iVar5 * 0x1768 + lVar12) >> 0xe);
    piVar27[0x18] =
         (int)((ulong)(lVar18 + (long)iVar4 * -0x8dd + (long)iVar8 * -0x4027 + lVar15) >> 0xe);
    piVar27[8] = (int)(lVar15 + (long)iVar3 * -0x178d + (long)iVar7 * 0x14e6 + (long)iVar9 * -0x2a7
                       + lVar12 + 0x2000U >> 0xe);
    lVar18 = lVar13;
  } while ((int)lVar13 != 0x20);
  if (*(long *)(lVar10 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


