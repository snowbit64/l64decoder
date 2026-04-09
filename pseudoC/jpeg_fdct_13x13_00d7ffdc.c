// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_fdct_13x13
// Entry Point: 00d7ffdc
// Size: 1364 bytes
// Signature: undefined jpeg_fdct_13x13(void)


void jpeg_fdct_13x13(int *param_1,long param_2,ulong param_3)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
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
  int *piVar23;
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
  ulong uVar36;
  int local_110 [8];
  int local_f0 [8];
  int local_d0 [8];
  int local_b0 [8];
  int local_90 [8];
  long local_70;
  
  lVar8 = tpidr_el0;
  lVar22 = 0;
  local_70 = *(long *)(lVar8 + 0x28);
  piVar23 = param_1;
  while( true ) {
    while( true ) {
      pbVar1 = (byte *)(*(long *)(param_2 + lVar22 * 8) + (param_3 & 0xffffffff));
      uVar36 = (ulong)pbVar1[6];
      lVar15 = (ulong)pbVar1[0xc] + (ulong)*pbVar1;
      lVar27 = (ulong)*pbVar1 - (ulong)pbVar1[0xc];
      lVar19 = (ulong)pbVar1[10] + (ulong)pbVar1[2];
      lVar24 = (ulong)pbVar1[2] - (ulong)pbVar1[10];
      lVar20 = (ulong)pbVar1[0xb] + (ulong)pbVar1[1];
      lVar25 = (ulong)pbVar1[1] - (ulong)pbVar1[0xb];
      lVar13 = lVar15 + uVar36 * -2;
      lVar21 = (ulong)pbVar1[9] + (ulong)pbVar1[3];
      lVar28 = (ulong)pbVar1[3] - (ulong)pbVar1[9];
      lVar29 = (ulong)pbVar1[8] + (ulong)pbVar1[4];
      lVar16 = lVar20 + uVar36 * -2;
      lVar10 = (ulong)pbVar1[4] - (ulong)pbVar1[8];
      lVar31 = lVar19 + uVar36 * -2;
      lVar34 = lVar21 + uVar36 * -2;
      lVar35 = lVar29 + uVar36 * -2;
      lVar30 = (ulong)pbVar1[7] + (ulong)pbVar1[5];
      lVar11 = lVar30 + uVar36 * -2;
      lVar9 = (ulong)pbVar1[5] - (ulong)pbVar1[7];
      lVar17 = (lVar13 - lVar31) * 0x24f9 + (lVar34 - lVar35) * -0xdf2 + (lVar16 - lVar11) * -0xa20;
      lVar12 = (lVar13 + lVar31) * 0x319 + (lVar34 + lVar35) * -0x1dfe + (lVar16 + lVar11) * 0xf95;
      lVar14 = (lVar25 + lVar27) * 0x2a50 + 0x1000;
      lVar32 = (lVar24 + lVar27) * 0x253e;
      lVar18 = (lVar28 + lVar27) * 0x1e02 + (lVar9 + lVar10) * 0xad5;
      lVar26 = (lVar28 + lVar25) * -0x253e;
      lVar33 = (lVar24 + lVar25) * -0xad5 + (lVar10 - lVar9) * 0x1e02;
      *piVar23 = (int)lVar30 +
                 (int)lVar20 + (int)lVar15 + (int)lVar19 + (int)lVar21 + (int)lVar29 +
                 (uint)pbVar1[6] + -0x680;
      piVar23[1] = (int)((ulong)(lVar14 + lVar27 * -0x40a5 + lVar32 + lVar10 * 0xa33 + lVar18) >>
                        0xd);
      lVar15 = (lVar28 + lVar24) * -0x1508;
      piVar23[2] = (int)(lVar13 * 0x2bf1 + lVar16 * 0x21e0 + lVar31 * 0x100c + lVar34 * -0x574 +
                         lVar35 * -0x19b5 + lVar11 * -0x2812 + 0x1000U >> 0xd);
      piVar23[3] = (int)((ulong)(lVar14 + lVar25 * 0x1acb + lVar26 + lVar10 * -0x4aef + lVar33) >>
                        0xd);
      piVar23[4] = (int)(lVar12 + lVar17 + 0x1000U >> 0xd);
      piVar23[5] = (int)(lVar32 + lVar24 * -0x324f + lVar15 + lVar9 * 0x4853 + lVar33 + 0x1000U >>
                        0xd);
      piVar23[6] = (int)((lVar17 - lVar12) + 0x1000U >> 0xd);
      piVar23[7] = (int)(lVar15 + lVar28 * 0x4694 + lVar26 + lVar9 * -0x37c1 + lVar18 + 0x1000U >>
                        0xd);
      if ((int)lVar22 != 7) break;
      piVar23 = local_110;
      lVar22 = lVar22 + 1;
    }
    if ((int)lVar22 == 0xc) break;
    piVar23 = piVar23 + 8;
    lVar22 = lVar22 + 1;
  }
  lVar22 = 0;
  do {
    piVar23 = (int *)((long)param_1 + lVar22);
    lVar9 = (long)(*(int *)((long)local_b0 + lVar22) + piVar23[8]);
    lVar20 = (long)(*(int *)((long)local_90 + lVar22) + *piVar23);
    lVar11 = (long)(*(int *)((long)local_d0 + lVar22) + piVar23[0x10]);
    lVar16 = (long)piVar23[0x30];
    lVar13 = (long)(*(int *)((long)local_f0 + lVar22) + piVar23[0x18]);
    iVar2 = *piVar23 - *(int *)((long)local_90 + lVar22);
    iVar3 = piVar23[8] - *(int *)((long)local_b0 + lVar22);
    lVar14 = (long)(*(int *)((long)local_110 + lVar22) + piVar23[0x20]);
    lVar17 = (long)(piVar23[0x38] + piVar23[0x28]);
    iVar4 = piVar23[0x10] - *(int *)((long)local_d0 + lVar22);
    lVar21 = lVar20 + lVar16 * -2;
    iVar5 = piVar23[0x18] - *(int *)((long)local_f0 + lVar22);
    lVar19 = lVar9 + lVar16 * -2;
    lVar10 = lVar13 + lVar16 * -2;
    iVar6 = piVar23[0x20] - *(int *)((long)local_110 + lVar22);
    lVar30 = lVar11 + lVar16 * -2;
    lVar29 = (long)iVar2;
    iVar7 = piVar23[0x28] - piVar23[0x38];
    lVar22 = lVar22 + 4;
    lVar12 = lVar14 + lVar16 * -2;
    lVar15 = lVar17 + lVar16 * -2;
    *piVar23 = (int)((lVar9 + lVar20 + lVar11 + lVar13 + lVar14 + lVar17 + lVar16) * 0x183d +
                     0x2000U >> 0xe);
    lVar13 = (long)iVar3;
    lVar14 = (long)iVar4;
    lVar9 = (long)iVar5;
    piVar23[0x10] =
         (int)(lVar21 * 0x2148 + lVar19 * 0x19a8 + lVar30 * 0xc28 + lVar10 * -0x422 +
               lVar12 * -0x1379 + lVar15 * -0x1e5a + 0x2000U >> 0xe);
    lVar11 = (lVar21 - lVar30) * 0x1c01 + (lVar10 - lVar12) * -0xa90 + (lVar19 - lVar15) * -0x7ab;
    lVar21 = (lVar21 + lVar30) * 0x259 + (lVar10 + lVar12) * -0x16b8 + (lVar19 + lVar15) * 0xbcd;
    lVar19 = (lVar14 + lVar13) * -0x834 + ((long)iVar6 - (long)iVar7) * 0x16bb;
    lVar15 = (lVar9 + lVar29) * 0x16bb + ((long)iVar7 + (long)iVar6) * 0x834;
    lVar30 = (lVar13 + lVar29) * 0x200c + 0x2000;
    piVar23[0x30] = (int)((lVar11 - lVar21) + 0x2000U >> 0xe);
    lVar20 = (lVar14 + lVar29) * 0x1c35;
    piVar23[0x20] = (int)(lVar21 + lVar11 + 0x2000U >> 0xe);
    lVar29 = (lVar9 + lVar13) * -0x1c35;
    lVar21 = (lVar9 + lVar14) * -0xfee;
    piVar23[8] = (int)((ulong)(lVar30 + (long)iVar2 * -0x30f6 + lVar20 + (long)iVar6 * 0x7ba +
                              lVar15) >> 0xe);
    piVar23[0x18] =
         (int)((ulong)(lVar30 + (long)iVar3 * 0x144b + lVar29 + (long)iVar6 * -0x38c1 + lVar19) >>
              0xe);
    piVar23[0x28] =
         (int)(lVar20 + (long)iVar4 * -0x261a + lVar21 + (long)iVar7 * 0x36c7 + lVar19 + 0x2000U >>
              0xe);
    piVar23[0x38] =
         (int)(lVar21 + (long)iVar5 * 0x3575 + lVar29 + (long)iVar7 * -0x2a3b + lVar15 + 0x2000U >>
              0xe);
  } while ((int)lVar22 != 0x20);
  if (*(long *)(lVar8 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


