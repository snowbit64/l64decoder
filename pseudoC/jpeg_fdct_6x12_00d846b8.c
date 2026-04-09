// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_fdct_6x12
// Entry Point: 00d846b8
// Size: 844 bytes
// Signature: undefined jpeg_fdct_6x12(void)


void jpeg_fdct_6x12(undefined8 *param_1,long param_2,ulong param_3)

{
  byte *pbVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined8 local_e8 [4];
  int local_c8 [8];
  int local_a8 [8];
  int local_88 [8];
  long local_68;
  
  lVar8 = tpidr_el0;
  lVar12 = 0;
  local_68 = *(long *)(lVar8 + 0x28);
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  puVar15 = param_1;
  while( true ) {
    while( true ) {
      pbVar1 = (byte *)(*(long *)(param_2 + lVar12 * 8) + (param_3 & 0xffffffff));
      lVar2 = (ulong)pbVar1[5] + (ulong)*pbVar1;
      lVar10 = (ulong)*pbVar1 - (ulong)pbVar1[5];
      lVar3 = (ulong)pbVar1[4] + (ulong)pbVar1[1];
      iVar5 = (uint)pbVar1[1] - (uint)pbVar1[4];
      lVar20 = (ulong)pbVar1[3] + (ulong)pbVar1[2];
      lVar19 = (ulong)pbVar1[2] - (ulong)pbVar1[3];
      lVar14 = lVar20 + lVar2;
      iVar9 = (int)lVar10;
      iVar18 = (int)lVar19;
      iVar11 = (int)((lVar19 + lVar10) * 0xbb6 + 0x400U >> 0xb);
      *(int *)(puVar15 + 1) = ((int)lVar2 - (int)lVar20) * 0x2731 + 0x400 >> 0xb;
      *(int *)((long)puVar15 + 0xc) = (iVar9 - (iVar5 + iVar18)) * 4;
      *(int *)puVar15 = ((int)lVar14 + (int)lVar3) * 4 + -0xc00;
      *(int *)((long)puVar15 + 4) = iVar11 + (iVar5 + iVar9) * 4;
      *(int *)(puVar15 + 2) = (int)((lVar14 + lVar3 * -2) * 0x16a1 + 0x400U >> 0xb);
      *(int *)((long)puVar15 + 0x14) = iVar11 + (iVar18 - iVar5) * 4;
      if ((int)lVar12 != 7) break;
      puVar15 = local_e8;
      lVar12 = lVar12 + 1;
    }
    if ((int)lVar12 == 0xb) break;
    puVar15 = puVar15 + 4;
    lVar12 = lVar12 + 1;
  }
  lVar12 = 0;
  do {
    piVar4 = (int *)((long)param_1 + lVar12);
    lVar2 = lVar12 + 4;
    lVar23 = (long)(*(int *)((long)local_88 + lVar12) + *piVar4);
    lVar13 = (long)(*(int *)((long)local_c8 + lVar12) + piVar4[0x10]);
    lVar14 = (long)(*(int *)((long)local_e8 + lVar12) + piVar4[0x18]);
    lVar20 = (long)(piVar4[0x30] + piVar4[0x28]);
    iVar5 = *piVar4 - *(int *)((long)local_88 + lVar12);
    lVar3 = lVar20 + lVar23;
    lVar23 = lVar23 - lVar20;
    lVar20 = lVar14 + lVar13;
    lVar13 = lVar13 - lVar14;
    iVar9 = piVar4[8] - *(int *)((long)local_a8 + lVar12);
    lVar14 = (long)(*(int *)((long)local_a8 + lVar12) + piVar4[8]);
    iVar11 = piVar4[0x10] - *(int *)((long)local_c8 + lVar12);
    iVar18 = piVar4[0x18] - *(int *)((long)local_e8 + lVar12);
    iVar6 = piVar4[0x20] - piVar4[0x38];
    lVar24 = (long)(piVar4[0x38] + piVar4[0x20]);
    iVar7 = piVar4[0x28] - piVar4[0x30];
    lVar10 = lVar14 - lVar24;
    lVar12 = (long)iVar5;
    lVar19 = (long)iVar11;
    lVar21 = ((long)iVar6 + (long)iVar9) * 0xf65;
    *piVar4 = (int)((lVar20 + lVar14 + lVar24 + lVar3) * 0x1c72 + 0x4000U >> 0xf);
    lVar24 = lVar21 + (long)iVar9 * 0x15c5;
    piVar4[0x30] = (int)((lVar23 - (lVar10 + lVar13)) * 0x1c72 + 0x4000U >> 0xf);
    lVar14 = (lVar19 + lVar12) * 0x1fea + 0x4000;
    lVar16 = (long)iVar18;
    lVar21 = lVar21 + (long)iVar6 * -0x348f;
    lVar22 = (lVar16 + lVar12) * 0x187d;
    lVar17 = (lVar16 + lVar19) * -0x540;
    piVar4[0x10] = (int)(lVar23 * 0x26db + lVar13 * 0xa69 + lVar10 * 0x1c72 + 0x4000U >> 0xf);
    piVar4[0x20] = (int)((lVar3 - lVar20) * 0x22d6 + 0x4000U >> 0xf);
    piVar4[0x18] = (int)(lVar21 + (lVar12 - lVar16) * 0x252a + (lVar19 + iVar7) * -0xf65 + 0x4000U
                        >> 0xf);
    piVar4[0x28] = (int)((ulong)(((lVar14 + (long)iVar11 * -0x428c + lVar17) - lVar21) +
                                (long)iVar7 * 0x187d) >> 0xf);
    piVar4[8] = (int)((ulong)(lVar14 + (long)iVar5 * -0x1085 + lVar22 + lVar24 + (long)iVar7 * 0x540
                             ) >> 0xf);
    piVar4[0x38] = (int)(((lVar22 + (long)iVar18 * 0x14a5 + lVar17) - lVar24) +
                         (long)iVar7 * -0x1fea + 0x4000U >> 0xf);
    lVar12 = lVar2;
  } while ((int)lVar2 != 0x18);
  if (*(long *)(lVar8 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


