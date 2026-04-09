// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_fdct_5x10
// Entry Point: 00d84a04
// Size: 776 bytes
// Signature: undefined jpeg_fdct_5x10(void)


void jpeg_fdct_5x10(undefined8 *param_1,long param_2,ulong param_3)

{
  uint uVar1;
  byte *pbVar2;
  int *piVar3;
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
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 local_a8 [4];
  int local_88 [8];
  long local_68;
  
  lVar9 = tpidr_el0;
  lVar15 = 0;
  local_68 = *(long *)(lVar9 + 0x28);
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
  puVar17 = param_1;
  while( true ) {
    while( true ) {
      pbVar2 = (byte *)(*(long *)(param_2 + lVar15 * 8) + (param_3 & 0xffffffff));
      lVar11 = (ulong)pbVar2[4] + (ulong)*pbVar2;
      lVar10 = (ulong)*pbVar2 - (ulong)pbVar2[4];
      lVar14 = (ulong)pbVar2[3] + (ulong)pbVar2[1];
      lVar12 = (ulong)pbVar2[1] - (ulong)pbVar2[3];
      lVar16 = lVar14 + lVar11;
      lVar13 = lVar16 + (ulong)pbVar2[2] * -4;
      lVar14 = (lVar11 - lVar14) * 0x194c + 0x400;
      lVar11 = (lVar12 + lVar10) * 0x1a9a + 0x400;
      *(uint *)puVar17 = ((int)lVar16 + (uint)pbVar2[2]) * 4 + -0xa00;
      *(int *)((long)puVar17 + 4) = (int)((ulong)(lVar11 + lVar10 * 0x1071) >> 0xb);
      *(int *)(puVar17 + 1) = (int)((ulong)(lVar14 + lVar13 * 0xb50) >> 0xb);
      *(int *)((long)puVar17 + 0xc) = (int)((ulong)(lVar11 + lVar12 * -0x45a4) >> 0xb);
      *(int *)(puVar17 + 2) = (int)((ulong)(lVar14 + lVar13 * -0xb50) >> 0xb);
      if ((int)lVar15 != 7) break;
      puVar17 = local_a8;
      lVar15 = lVar15 + 1;
    }
    if ((int)lVar15 == 9) break;
    puVar17 = puVar17 + 4;
    lVar15 = lVar15 + 1;
  }
  lVar15 = 0;
  do {
    piVar3 = (int *)((long)param_1 + lVar15);
    lVar11 = lVar15 + 4;
    iVar4 = piVar3[0x20];
    lVar13 = (long)(*(int *)((long)local_88 + lVar15) + *piVar3);
    lVar10 = (long)(*(int *)((long)local_a8 + lVar15) + piVar3[8]);
    iVar5 = *piVar3 - *(int *)((long)local_88 + lVar15);
    lVar16 = (long)(piVar3[0x28] + iVar4);
    lVar12 = (long)(piVar3[0x30] + piVar3[0x18]);
    lVar14 = lVar16 + lVar13;
    uVar1 = piVar3[0x38] + piVar3[0x10];
    lVar13 = lVar13 - lVar16;
    lVar16 = lVar12 + lVar10;
    lVar10 = lVar10 - lVar12;
    iVar6 = piVar3[8] - *(int *)((long)local_a8 + lVar15);
    iVar7 = piVar3[0x10] - piVar3[0x38];
    iVar8 = piVar3[0x18] - piVar3[0x30];
    *piVar3 = (int)((lVar16 + (int)uVar1 + lVar14) * 0x28f6 + 0x4000U >> 0xf);
    piVar3[0x20] = (int)(lVar14 * 0x2edd +
                         (-(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1) *
                         -0x1cf7 + lVar16 * -0x11e6 + 0x4000 >> 0xf);
    lVar15 = (lVar13 + lVar10) * 0x220c + 0x4000;
    iVar4 = iVar4 - piVar3[0x28];
    lVar12 = (long)iVar6 - (long)iVar8;
    lVar14 = (long)iVar4 + (long)iVar5;
    piVar3[0x10] = (int)((ulong)(lVar15 + lVar13 * 0x150b) >> 0xf);
    lVar16 = lVar12 * 0x2123 + (long)iVar7 * -0x28f6 + lVar14 * 0xca8;
    piVar3[0x30] = (int)((ulong)(lVar15 + lVar10 * -0x5924) >> 0xf);
    lVar15 = ((long)iVar8 + (long)iVar6) * -0x1813 + ((long)iVar5 - (long)iVar4) * 0x26f5 + 0x4000;
    piVar3[0x28] = (int)((lVar14 - (lVar12 + iVar7)) * 0x28f6 + 0x4000U >> 0xf);
    piVar3[8] = (int)((long)iVar6 * 0x339d + (long)iVar5 * 0x3937 + (long)iVar7 * 0x28f6 +
                      (long)iVar8 * 0x1a4c + (long)iVar4 * 0x910 + 0x4000U >> 0xf);
    piVar3[0x18] = (int)((ulong)(lVar15 + lVar16) >> 0xf);
    piVar3[0x38] = (int)((ulong)(lVar15 - lVar16) >> 0xf);
    lVar15 = lVar11;
  } while ((int)lVar11 != 0x14);
  if (*(long *)(lVar9 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


