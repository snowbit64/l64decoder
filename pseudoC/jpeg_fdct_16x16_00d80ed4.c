// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_fdct_16x16
// Entry Point: 00d80ed4
// Size: 1424 bytes
// Signature: undefined jpeg_fdct_16x16(void)


void jpeg_fdct_16x16(int *param_1,long param_2,ulong param_3)

{
  byte *pbVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
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
  int *piVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  int local_170 [8];
  int local_150 [8];
  int local_130 [8];
  int local_110 [8];
  int local_f0 [8];
  int local_d0 [8];
  int local_b0 [8];
  int local_90 [8];
  long local_70;
  
  lVar12 = tpidr_el0;
  lVar22 = 0;
  local_70 = *(long *)(lVar12 + 0x28);
  piVar26 = param_1;
  while( true ) {
    while( true ) {
      pbVar1 = (byte *)(*(long *)(param_2 + lVar22 * 8) + (param_3 & 0xffffffff));
      lVar13 = (ulong)pbVar1[0xf] + (ulong)*pbVar1;
      lVar23 = (ulong)pbVar1[0xe] + (ulong)pbVar1[1];
      lVar29 = (ulong)pbVar1[1] - (ulong)pbVar1[0xe];
      lVar2 = (ulong)pbVar1[0xc] + (ulong)pbVar1[3];
      lVar19 = (ulong)pbVar1[0xb] + (ulong)pbVar1[4];
      lVar15 = lVar2 - lVar19;
      lVar3 = (ulong)pbVar1[8] + (ulong)pbVar1[7];
      lVar34 = (ulong)pbVar1[9] + (ulong)pbVar1[6];
      lVar21 = lVar3 + lVar13;
      lVar24 = (ulong)pbVar1[0xd] + (ulong)pbVar1[2];
      lVar13 = lVar13 - lVar3;
      lVar18 = lVar34 + lVar23;
      lVar23 = lVar23 - lVar34;
      lVar3 = (ulong)pbVar1[10] + (ulong)pbVar1[5];
      lVar30 = (ulong)pbVar1[2] - (ulong)pbVar1[0xd];
      lVar34 = lVar3 + lVar24;
      lVar24 = lVar24 - lVar3;
      lVar19 = lVar19 + lVar2;
      lVar35 = (ulong)*pbVar1 - (ulong)pbVar1[0xf];
      lVar28 = (ulong)pbVar1[3] - (ulong)pbVar1[0xc];
      lVar27 = (ulong)pbVar1[4] - (ulong)pbVar1[0xb];
      lVar2 = (lVar15 - lVar23) * 0x8d4 + (lVar13 - lVar24) * 0x2c63 + 0x400;
      lVar20 = (ulong)pbVar1[5] - (ulong)pbVar1[10];
      lVar32 = (ulong)pbVar1[6] - (ulong)pbVar1[9];
      lVar17 = (ulong)pbVar1[7] - (ulong)pbVar1[8];
      lVar25 = (lVar29 + lVar35) * 0x2b4e + (lVar32 - lVar17) * 0xd23;
      lVar14 = (lVar30 + lVar35) * 0x27e9 + (lVar17 + lVar20) * 0x1555;
      lVar16 = (lVar28 + lVar35) * 0x22fc + (lVar27 - lVar17) * 0x1cb6;
      lVar33 = (lVar28 + lVar29) * -0x1555 + (lVar32 + lVar27) * -0x27e9;
      lVar31 = (lVar30 + lVar29) * 0x470 + (lVar32 - lVar20) * 0x2d09;
      lVar3 = (lVar28 + lVar30) * -0x2b4e + (lVar20 - lVar27) * 0xd23 + 0x400;
      *piVar26 = ((int)lVar34 + (int)lVar19 + (int)lVar18 + (int)lVar21) * 4 + -0x2000;
      piVar26[1] = (int)(lVar25 + lVar35 * -0x492a + lVar17 * 0x18f3 + lVar16 + lVar14 + 0x400U >>
                        0xb);
      piVar26[2] = (int)((ulong)(lVar2 + lVar24 * 0x4587 + lVar23 * 0x2e75) >> 0xb);
      piVar26[3] = (int)(lVar33 + lVar29 * 0x24d + lVar32 * -0x353f + lVar31 + lVar25 + 0x400U >>
                        0xb);
      piVar26[4] = (int)((lVar21 - lVar19) * 0x29cf + (lVar18 - lVar34) * 0x1151 + 0x400U >> 0xb);
      piVar26[5] = (int)((ulong)(lVar3 + lVar30 * -0x2406 + lVar20 * 0x2747 + lVar31 + lVar14) >>
                        0xb);
      piVar26[6] = (int)((ulong)(lVar2 + lVar15 * -0x21f9 + lVar13 * -0x6c2) >> 0xb);
      piVar26[7] = (int)((ulong)(lVar3 + lVar28 * 0x2218 + lVar27 * 0x4560 + lVar33 + lVar16) >> 0xb
                        );
      if ((int)lVar22 != 7) break;
      piVar26 = local_170;
      lVar22 = lVar22 + 1;
    }
    if ((int)lVar22 == 0xf) break;
    piVar26 = piVar26 + 8;
    lVar22 = lVar22 + 1;
  }
  lVar22 = 0;
  do {
    piVar26 = (int *)((long)param_1 + lVar22);
    lVar2 = lVar22 + 4;
    lVar15 = (long)(*(int *)((long)local_b0 + lVar22) + piVar26[8]);
    lVar29 = (long)(*(int *)((long)local_d0 + lVar22) + piVar26[0x10]);
    lVar24 = (long)(*(int *)((long)local_110 + lVar22) + piVar26[0x20]);
    lVar19 = (long)(*(int *)((long)local_90 + lVar22) + *piVar26);
    lVar16 = (long)(*(int *)((long)local_f0 + lVar22) + piVar26[0x18]);
    lVar34 = (long)(*(int *)((long)local_130 + lVar22) + piVar26[0x28]);
    lVar23 = (long)(*(int *)((long)local_150 + lVar22) + piVar26[0x30]);
    lVar21 = (long)(*(int *)((long)local_170 + lVar22) + piVar26[0x38]);
    lVar3 = lVar23 + lVar15;
    lVar13 = lVar21 + lVar19;
    lVar15 = lVar15 - lVar23;
    lVar23 = lVar34 + lVar29;
    lVar29 = lVar29 - lVar34;
    lVar34 = lVar24 + lVar16;
    lVar16 = lVar16 - lVar24;
    iVar4 = *piVar26 - *(int *)((long)local_90 + lVar22);
    iVar5 = piVar26[8] - *(int *)((long)local_b0 + lVar22);
    iVar6 = piVar26[0x10] - *(int *)((long)local_d0 + lVar22);
    iVar7 = piVar26[0x18] - *(int *)((long)local_f0 + lVar22);
    iVar8 = piVar26[0x20] - *(int *)((long)local_110 + lVar22);
    iVar9 = piVar26[0x28] - *(int *)((long)local_130 + lVar22);
    iVar10 = piVar26[0x30] - *(int *)((long)local_150 + lVar22);
    lVar19 = lVar19 - lVar21;
    iVar11 = piVar26[0x38] - *(int *)((long)local_170 + lVar22);
    lVar22 = (lVar16 - lVar15) * 0x8d4 + (lVar19 - lVar29) * 0x2c63 + 0x10000;
    lVar21 = (long)iVar4;
    lVar14 = (long)iVar5;
    lVar27 = (long)iVar10;
    lVar24 = (long)iVar11;
    lVar18 = (long)iVar6;
    lVar20 = (long)iVar7;
    lVar30 = (lVar14 + lVar21) * 0x2b4e + (lVar27 - lVar24) * 0xd23;
    lVar28 = (long)iVar9;
    lVar17 = (long)iVar8;
    lVar25 = (lVar18 + lVar21) * 0x27e9 + (lVar24 + lVar28) * 0x1555;
    lVar24 = (lVar20 + lVar21) * 0x22fc + (lVar17 - lVar24) * 0x1cb6;
    *piVar26 = (int)(lVar34 + lVar23 + lVar3 + lVar13 + 8U >> 4);
    lVar21 = (lVar20 + lVar14) * -0x1555 + (lVar27 + lVar17) * -0x27e9;
    piVar26[0x20] = (int)((lVar13 - lVar34) * 0x29cf + (lVar3 - lVar23) * 0x1151 + 0x10000U >> 0x11)
    ;
    piVar26[0x10] = (int)((ulong)(lVar22 + lVar29 * 0x4587 + lVar15 * 0x2e75) >> 0x11);
    lVar3 = (lVar20 + lVar18) * -0x2b4e + (lVar28 - lVar17) * 0xd23 + 0x10000;
    lVar13 = (lVar18 + lVar14) * 0x470 + (lVar27 - lVar28) * 0x2d09;
    piVar26[8] = (int)(lVar30 + (long)iVar4 * -0x492a + (long)iVar11 * 0x18f3 + lVar24 + lVar25 +
                       0x10000U >> 0x11);
    piVar26[0x30] = (int)((ulong)(lVar22 + lVar16 * -0x21f9 + lVar19 * -0x6c2) >> 0x11);
    piVar26[0x18] =
         (int)(lVar21 + (long)iVar5 * 0x24d + (long)iVar10 * -0x353f + lVar13 + lVar30 + 0x10000U >>
              0x11);
    piVar26[0x28] =
         (int)((ulong)(lVar3 + (long)iVar6 * -0x2406 + (long)iVar9 * 0x2747 + lVar13 + lVar25) >>
              0x11);
    piVar26[0x38] =
         (int)((ulong)(lVar3 + (long)iVar7 * 0x2218 + (long)iVar8 * 0x4560 + lVar21 + lVar24) >>
              0x11);
    lVar22 = lVar2;
  } while ((int)lVar2 != 0x20);
  if (*(long *)(lVar12 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


