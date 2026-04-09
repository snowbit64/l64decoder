// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_fdct_10x10
// Entry Point: 00d7f370
// Size: 940 bytes
// Signature: undefined jpeg_fdct_10x10(void)


void jpeg_fdct_10x10(int *param_1,long param_2,ulong param_3)

{
  uint uVar1;
  byte *pbVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  int local_a8 [8];
  int local_88 [8];
  long local_68;
  
  lVar9 = tpidr_el0;
  lVar11 = 0;
  local_68 = *(long *)(lVar9 + 0x28);
  piVar15 = param_1;
  while( true ) {
    while( true ) {
      pbVar2 = (byte *)(*(long *)(param_2 + lVar11 * 8) + (param_3 & 0xffffffff));
      lVar10 = (ulong)pbVar2[9] + (ulong)*pbVar2;
      lVar17 = (ulong)*pbVar2 - (ulong)pbVar2[9];
      lVar3 = (ulong)pbVar2[8] + (ulong)pbVar2[1];
      lVar19 = (ulong)pbVar2[1] - (ulong)pbVar2[8];
      lVar13 = (ulong)pbVar2[7] + (ulong)pbVar2[2];
      lVar20 = (ulong)pbVar2[2] - (ulong)pbVar2[7];
      lVar22 = (ulong)pbVar2[6] + (ulong)pbVar2[3];
      lVar21 = (ulong)pbVar2[3] - (ulong)pbVar2[6];
      lVar23 = lVar3 - lVar22;
      lVar22 = lVar22 + lVar3;
      lVar3 = (ulong)pbVar2[5] + (ulong)pbVar2[4];
      lVar16 = (ulong)pbVar2[4] - (ulong)pbVar2[5];
      lVar14 = lVar3 + lVar10;
      lVar10 = lVar10 - lVar3;
      lVar12 = (lVar10 + lVar23) * 0x1a9a + 0x800;
      piVar15[4] = (int)((lVar14 + lVar13 * -2) * 0x249d + (lVar22 + lVar13 * -2) * -0xdfc + 0x800U
                        >> 0xc);
      piVar15[5] = ((int)(lVar16 + lVar17) - ((int)(lVar19 - lVar21) + (int)lVar20)) * 2;
      lVar18 = (lVar19 - lVar21) * 0x19e3 + lVar20 * -0x2000 + (lVar16 + lVar17) * 0x9e3;
      lVar3 = (lVar21 + lVar19) * -0x12cf + (lVar17 - lVar16) * 0x1e6f + 0x800;
      *piVar15 = ((int)lVar13 + (int)lVar14 + (int)lVar22) * 2 + -0xa00;
      piVar15[1] = (int)(lVar19 * 0x2853 + lVar17 * 0x2cb3 + lVar20 * 0x2000 + lVar21 * 0x148c +
                         lVar16 * 0x714 + 0x800U >> 0xc);
      piVar15[2] = (int)((ulong)(lVar12 + lVar10 * 0x1071) >> 0xc);
      piVar15[3] = (int)((ulong)(lVar3 + lVar18) >> 0xc);
      piVar15[6] = (int)((ulong)(lVar12 + lVar23 * -0x45a4) >> 0xc);
      piVar15[7] = (int)((ulong)(lVar3 - lVar18) >> 0xc);
      if ((int)lVar11 != 7) break;
      piVar15 = local_a8;
      lVar11 = lVar11 + 1;
    }
    if ((int)lVar11 == 9) break;
    piVar15 = piVar15 + 8;
    lVar11 = lVar11 + 1;
  }
  lVar11 = 0;
  do {
    piVar15 = (int *)((long)param_1 + lVar11);
    lVar3 = lVar11 + 4;
    iVar4 = piVar15[0x20];
    lVar22 = (long)(*(int *)((long)local_88 + lVar11) + *piVar15);
    lVar12 = (long)(*(int *)((long)local_a8 + lVar11) + piVar15[8]);
    iVar5 = piVar15[8] - *(int *)((long)local_a8 + lVar11);
    lVar13 = (long)(piVar15[0x28] + iVar4);
    lVar14 = (long)(piVar15[0x30] + piVar15[0x18]);
    lVar10 = lVar13 + lVar22;
    uVar1 = piVar15[0x38] + piVar15[0x10];
    lVar22 = lVar22 - lVar13;
    lVar13 = lVar14 + lVar12;
    lVar12 = lVar12 - lVar14;
    iVar6 = *piVar15 - *(int *)((long)local_88 + lVar11);
    iVar7 = piVar15[0x10] - piVar15[0x38];
    iVar8 = piVar15[0x18] - piVar15[0x30];
    *piVar15 = (int)((lVar13 + (int)uVar1 + lVar10) * 0x28f6 + 0x4000U >> 0xf);
    piVar15[0x20] =
         (int)(lVar10 * 0x2edd +
               (-(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1) * -0x1cf7 +
               lVar13 * -0x11e6 + 0x4000 >> 0xf);
    lVar11 = (lVar22 + lVar12) * 0x220c + 0x4000;
    iVar4 = iVar4 - piVar15[0x28];
    lVar14 = (long)iVar5 - (long)iVar8;
    piVar15[0x10] = (int)((ulong)(lVar11 + lVar22 * 0x150b) >> 0xf);
    lVar10 = (long)iVar4 + (long)iVar6;
    piVar15[0x30] = (int)((ulong)(lVar11 + lVar12 * -0x5924) >> 0xf);
    lVar13 = lVar14 * 0x2123 + (long)iVar7 * -0x28f6 + lVar10 * 0xca8;
    lVar11 = ((long)iVar8 + (long)iVar5) * -0x1813 + ((long)iVar6 - (long)iVar4) * 0x26f5 + 0x4000;
    piVar15[8] = (int)((long)iVar5 * 0x339d + (long)iVar6 * 0x3937 + (long)iVar7 * 0x28f6 +
                       (long)iVar8 * 0x1a4c + (long)iVar4 * 0x910 + 0x4000U >> 0xf);
    piVar15[0x28] = (int)((lVar10 - (lVar14 + iVar7)) * 0x28f6 + 0x4000U >> 0xf);
    piVar15[0x18] = (int)((ulong)(lVar11 + lVar13) >> 0xf);
    piVar15[0x38] = (int)((ulong)(lVar11 - lVar13) >> 0xf);
    lVar11 = lVar3;
  } while ((int)lVar3 != 0x20);
  if (*(long *)(lVar9 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


