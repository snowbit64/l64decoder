// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_fdct_7x14
// Entry Point: 00d8429c
// Size: 1052 bytes
// Signature: undefined jpeg_fdct_7x14(void)


void jpeg_fdct_7x14(undefined8 *param_1,long param_2,ulong param_3)

{
  uint uVar1;
  byte *pbVar2;
  long lVar3;
  int *piVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  undefined8 *puVar14;
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
  undefined8 local_130 [4];
  int local_110 [8];
  int local_f0 [8];
  int local_d0 [8];
  int local_b0 [8];
  int local_90 [8];
  long local_70;
  
  lVar13 = tpidr_el0;
  lVar19 = 0;
  local_70 = *(long *)(lVar13 + 0x28);
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
  puVar14 = param_1;
  while( true ) {
    while( true ) {
      pbVar2 = (byte *)(*(long *)(param_2 + lVar19 * 8) + (param_3 & 0xffffffff));
      lVar3 = (ulong)pbVar2[6] + (ulong)*pbVar2;
      lVar15 = (ulong)*pbVar2 - (ulong)pbVar2[6];
      bVar5 = pbVar2[3];
      lVar17 = (ulong)pbVar2[5] + (ulong)pbVar2[1];
      lVar21 = (ulong)pbVar2[1] - (ulong)pbVar2[5];
      lVar20 = (ulong)pbVar2[4] + (ulong)pbVar2[2];
      lVar23 = (ulong)pbVar2[2] - (ulong)pbVar2[4];
      lVar24 = (lVar17 - lVar20) * 0xa12;
      lVar25 = (lVar3 - lVar17) * 0x1c37 + 0x400;
      lVar18 = (lVar20 + lVar3 + (ulong)bVar5 * -4) * 0xb50;
      lVar16 = (lVar23 + lVar15) * 0x13a3 + 0x400;
      lVar26 = (lVar21 + lVar15) * 0x1def;
      *(int *)(puVar14 + 3) = (int)((ulong)(lVar25 + (lVar3 - lVar20) * -0x1d76 + lVar18) >> 0xb);
      lVar22 = (lVar23 + lVar21) * -0x2c1f;
      *(uint *)puVar14 = ((uint)bVar5 + (int)lVar17 + (int)(lVar20 + lVar3)) * 4 + -0xe00;
      *(int *)((long)puVar14 + 4) =
           (int)((ulong)(lVar16 + (lVar15 - lVar21) * -0x573 + lVar26) >> 0xb);
      *(int *)(puVar14 + 1) = (int)(lVar24 + (lVar3 - lVar20) * 0x1d76 + lVar18 + 0x400U >> 0xb);
      *(int *)((long)puVar14 + 0xc) =
           (int)(lVar22 + (lVar15 - lVar21) * 0x573 + lVar26 + 0x400U >> 0xb);
      *(int *)(puVar14 + 2) =
           (int)(lVar25 + lVar24 + (lVar17 + (ulong)(uint)bVar5 * -2) * -0x16a1 >> 0xb);
      *(int *)((long)puVar14 + 0x14) = (int)((ulong)(lVar16 + lVar23 * 0x3bde + lVar22) >> 0xb);
      if ((int)lVar19 != 7) break;
      puVar14 = local_130;
      lVar19 = lVar19 + 1;
    }
    if ((int)lVar19 == 0xd) break;
    puVar14 = puVar14 + 4;
    lVar19 = lVar19 + 1;
  }
  lVar19 = 0;
  do {
    piVar4 = (int *)((long)param_1 + lVar19);
    lVar3 = lVar19 + 4;
    lVar18 = (long)(*(int *)((long)local_90 + lVar19) + *piVar4);
    lVar21 = (long)(*(int *)((long)local_b0 + lVar19) + piVar4[8]);
    lVar22 = (long)(*(int *)((long)local_d0 + lVar19) + piVar4[0x10]);
    lVar16 = (long)(*(int *)((long)local_110 + lVar19) + piVar4[0x20]);
    lVar15 = (long)(*(int *)((long)local_130 + lVar19) + piVar4[0x28]);
    lVar23 = (long)(piVar4[0x38] + piVar4[0x30]);
    lVar17 = lVar15 + lVar21;
    lVar20 = lVar23 + lVar18;
    lVar18 = lVar18 - lVar23;
    lVar21 = lVar21 - lVar15;
    lVar15 = lVar16 + lVar22;
    lVar22 = lVar22 - lVar16;
    uVar1 = *(int *)((long)local_f0 + lVar19) + piVar4[0x18];
    iVar6 = *piVar4 - *(int *)((long)local_90 + lVar19);
    iVar7 = piVar4[8] - *(int *)((long)local_b0 + lVar19);
    iVar8 = piVar4[0x20] - *(int *)((long)local_110 + lVar19);
    iVar9 = piVar4[0x10] - *(int *)((long)local_d0 + lVar19);
    iVar10 = piVar4[0x18] - *(int *)((long)local_f0 + lVar19);
    iVar11 = piVar4[0x28] - *(int *)((long)local_130 + lVar19);
    iVar12 = piVar4[0x30] - piVar4[0x38];
    lVar25 = (lVar18 + lVar21) * 0x171b + 0x4000;
    lVar24 = (long)iVar11 - (long)iVar8;
    lVar23 = (long)iVar6;
    lVar16 = (long)iVar9 + (long)iVar7;
    *piVar4 = (int)((lVar15 + (int)uVar1 + lVar17 + lVar20) * 0x14e6 + 0x4000U >> 0xf);
    lVar19 = lVar24 * 0x1d5e + (long)iVar10 * -0x14e6 + lVar16 * -0x34f + 0x4000;
    lVar26 = (long)iVar12;
    piVar4[0x20] = (int)(lVar17 * 0x694 +
                         (-(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1) * -0xec8
                         + lVar15 * -0x126d + lVar20 * 0x1aa1 + 0x4000 >> 0xf);
    lVar20 = (iVar7 + lVar23) * 0x1be5 + (iVar11 - lVar26) * 0x9c3;
    lVar17 = (iVar9 + lVar23) * 0x1906 + (lVar26 + iVar8) * 0xfb9;
    piVar4[0x10] = (int)((ulong)(lVar25 + lVar22 * 0xcd3 + lVar18 * 0x5b5) >> 0xf);
    piVar4[0x30] = (int)((ulong)(lVar25 + lVar22 * -0x1cd0 + lVar21 * -0x23ee) >> 0xf);
    piVar4[0x38] = (int)(((lVar23 + iVar10) - (lVar16 + lVar24 + lVar26)) * 0x14e6 + 0x4000U >> 0xf)
    ;
    piVar4[0x28] = (int)((ulong)(lVar19 + (long)iVar9 * -0x319c + (long)iVar8 * 0x1768 + lVar17) >>
                        0xf);
    piVar4[0x18] = (int)((ulong)(lVar19 + (long)iVar7 * -0x8dd + (long)iVar11 * -0x4027 + lVar20) >>
                        0xf);
    piVar4[8] = (int)(lVar20 + (long)iVar6 * -0x178d + (long)iVar10 * 0x14e6 + (long)iVar12 * -0x2a7
                      + lVar17 + 0x4000U >> 0xf);
    lVar19 = lVar3;
  } while ((int)lVar3 != 0x1c);
  if (*(long *)(lVar13 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


