// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_fdct_12x12
// Entry Point: 00d7fbd0
// Size: 1036 bytes
// Signature: undefined jpeg_fdct_12x12(void)


void jpeg_fdct_12x12(int *param_1,long param_2,ulong param_3)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int iVar8;
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
  int *piVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  int iVar24;
  long lVar25;
  int local_e8 [8];
  int local_c8 [8];
  int local_a8 [8];
  int local_88 [8];
  long local_68;
  
  lVar6 = tpidr_el0;
  lVar10 = 0;
  local_68 = *(long *)(lVar6 + 0x28);
  piVar19 = param_1;
  while( true ) {
    while( true ) {
      pbVar1 = (byte *)(*(long *)(param_2 + lVar10 * 8) + (param_3 & 0xffffffff));
      lVar13 = (ulong)pbVar1[0xb] + (ulong)*pbVar1;
      lVar7 = (ulong)pbVar1[9] + (ulong)pbVar1[2];
      lVar18 = (ulong)pbVar1[8] + (ulong)pbVar1[3];
      lVar22 = (ulong)pbVar1[6] + (ulong)pbVar1[5];
      lVar14 = lVar22 + lVar13;
      lVar13 = lVar13 - lVar22;
      lVar16 = lVar7 - lVar18;
      lVar22 = (ulong)pbVar1[10] + (ulong)pbVar1[1];
      lVar12 = (ulong)pbVar1[1] - (ulong)pbVar1[10];
      lVar11 = (ulong)pbVar1[7] + (ulong)pbVar1[4];
      lVar18 = lVar18 + lVar7;
      lVar15 = (ulong)*pbVar1 - (ulong)pbVar1[0xb];
      lVar21 = (ulong)pbVar1[2] - (ulong)pbVar1[9];
      lVar23 = (ulong)pbVar1[3] - (ulong)pbVar1[8];
      iVar8 = (int)lVar22;
      iVar24 = (int)lVar11;
      lVar7 = (ulong)pbVar1[4] - (ulong)pbVar1[7];
      lVar20 = (ulong)pbVar1[5] - (ulong)pbVar1[6];
      lVar25 = (lVar7 + lVar12) * 0x1151;
      lVar17 = (lVar21 + lVar15) * 0x23e7 + 0x1000;
      lVar9 = (lVar23 + lVar15) * 0x1b8d;
      lVar12 = lVar25 + lVar12 * 0x187e;
      lVar25 = lVar25 + lVar7 * -0x3b21;
      *piVar19 = (int)lVar18 + iVar8 + iVar24 + (int)lVar14 + -0x600;
      piVar19[1] = (int)((ulong)(lVar17 + lVar15 * -0x1296 + lVar9 + lVar12 + lVar20 * 0x5e8) >> 0xd
                        );
      lVar7 = (lVar23 + lVar21) * -0x5e8;
      piVar19[2] = (int)(lVar22 + (lVar16 * 0x2bb5 - lVar11) + lVar13 * 0x2bb6 + 0x1000U >> 0xd);
      piVar19[3] = (int)(lVar25 + (lVar15 - lVar23) * 0x29cf + (lVar20 + lVar21) * -0x1151 + 0x1000U
                        >> 0xd);
      piVar19[4] = (int)((lVar14 - lVar18) * 0x2731 + 0x1000U >> 0xd);
      piVar19[5] = (int)((ulong)(((lVar17 + lVar21 * -0x4add + lVar7) - lVar25) + lVar20 * 0x1b8d)
                        >> 0xd);
      piVar19[6] = (int)lVar13 - ((iVar8 - iVar24) + (int)lVar16);
      piVar19[7] = (int)(((lVar9 + lVar23 * 0x173a + lVar7) - lVar12) + lVar20 * -0x23e7 + 0x1000U
                        >> 0xd);
      if ((int)lVar10 != 7) break;
      piVar19 = local_e8;
      lVar10 = lVar10 + 1;
    }
    if ((int)lVar10 == 0xb) break;
    piVar19 = piVar19 + 8;
    lVar10 = lVar10 + 1;
  }
  lVar10 = 0;
  do {
    piVar19 = (int *)((long)param_1 + lVar10);
    lVar13 = lVar10 + 4;
    lVar9 = (long)(*(int *)((long)local_88 + lVar10) + *piVar19);
    lVar25 = (long)(*(int *)((long)local_c8 + lVar10) + piVar19[0x10]);
    lVar14 = (long)(*(int *)((long)local_e8 + lVar10) + piVar19[0x18]);
    lVar22 = (long)(piVar19[0x30] + piVar19[0x28]);
    iVar8 = *piVar19 - *(int *)((long)local_88 + lVar10);
    lVar7 = lVar22 + lVar9;
    lVar9 = lVar9 - lVar22;
    lVar22 = lVar14 + lVar25;
    lVar25 = lVar25 - lVar14;
    iVar24 = piVar19[8] - *(int *)((long)local_a8 + lVar10);
    lVar18 = (long)(*(int *)((long)local_a8 + lVar10) + piVar19[8]);
    iVar2 = piVar19[0x10] - *(int *)((long)local_c8 + lVar10);
    iVar3 = piVar19[0x18] - *(int *)((long)local_e8 + lVar10);
    iVar4 = piVar19[0x20] - piVar19[0x38];
    lVar14 = (long)(piVar19[0x38] + piVar19[0x20]);
    iVar5 = piVar19[0x28] - piVar19[0x30];
    lVar20 = lVar18 - lVar14;
    lVar10 = (long)iVar8;
    lVar11 = (long)iVar2;
    lVar12 = ((long)iVar4 + (long)iVar24) * 0xf65;
    *piVar19 = (int)((lVar22 + lVar18 + lVar14 + lVar7) * 0x1c72 + 0x2000U >> 0xe);
    lVar14 = lVar12 + (long)iVar24 * 0x15c5;
    piVar19[0x30] = (int)((lVar9 - (lVar20 + lVar25)) * 0x1c72 + 0x2000U >> 0xe);
    lVar16 = (long)iVar3;
    lVar18 = (lVar11 + lVar10) * 0x1fea + 0x2000;
    lVar12 = lVar12 + (long)iVar4 * -0x348f;
    lVar15 = (lVar16 + lVar10) * 0x187d;
    lVar17 = (lVar16 + lVar11) * -0x540;
    piVar19[0x20] = (int)((lVar7 - lVar22) * 0x22d6 + 0x2000U >> 0xe);
    piVar19[0x10] = (int)(lVar9 * 0x26db + lVar25 * 0xa69 + lVar20 * 0x1c72 + 0x2000U >> 0xe);
    piVar19[0x18] =
         (int)(lVar12 + (lVar10 - lVar16) * 0x252a + (lVar11 + iVar5) * -0xf65 + 0x2000U >> 0xe);
    piVar19[8] = (int)((ulong)(lVar18 + (long)iVar8 * -0x1085 + lVar15 + lVar14 +
                              (long)iVar5 * 0x540) >> 0xe);
    piVar19[0x28] =
         (int)((ulong)(((lVar18 + (long)iVar2 * -0x428c + lVar17) - lVar12) + (long)iVar5 * 0x187d)
              >> 0xe);
    piVar19[0x38] =
         (int)(((lVar15 + (long)iVar3 * 0x14a5 + lVar17) - lVar14) + (long)iVar5 * -0x1fea + 0x2000U
              >> 0xe);
    lVar10 = lVar13;
  } while ((int)lVar13 != 0x20);
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


