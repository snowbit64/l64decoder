// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_fdct_4x4
// Entry Point: 00d7ea90
// Size: 808 bytes
// Signature: undefined jpeg_fdct_4x4(void)


void jpeg_fdct_4x4(undefined8 *param_1,long *param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  
  param_3 = param_3 & 0xffffffff;
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
  pbVar3 = (byte *)(*param_2 + param_3);
  pbVar4 = (byte *)(param_2[1] + param_3);
  lVar14 = (ulong)*pbVar3 - (ulong)pbVar3[3];
  iVar1 = (uint)pbVar3[3] + (uint)*pbVar3;
  lVar15 = (ulong)pbVar3[1] - (ulong)pbVar3[2];
  iVar2 = (uint)pbVar3[2] + (uint)pbVar3[1];
  lVar10 = (lVar15 + lVar14) * 0x1151 + 0x100;
  *(int *)param_1 = (iVar2 + iVar1) * 0x10 + -0x2000;
  *(int *)((long)param_1 + 4) = (int)((ulong)(lVar10 + lVar14 * 0x187e) >> 9);
  *(int *)(param_1 + 1) = (iVar1 - iVar2) * 0x10;
  *(int *)((long)param_1 + 0xc) = (int)((ulong)(lVar10 + lVar15 * -0x3b21) >> 9);
  lVar16 = (ulong)*pbVar4 - (ulong)pbVar4[3];
  iVar1 = (uint)pbVar4[3] + (uint)*pbVar4;
  lVar15 = (ulong)pbVar4[1] - (ulong)pbVar4[2];
  iVar2 = (uint)pbVar4[2] + (uint)pbVar4[1];
  lVar13 = (lVar15 + lVar16) * 0x1151 + 0x100;
  lVar10 = param_2[2];
  lVar14 = param_2[3];
  *(int *)(param_1 + 4) = (iVar2 + iVar1) * 0x10 + -0x2000;
  *(int *)((long)param_1 + 0x24) = (int)((ulong)(lVar13 + lVar16 * 0x187e) >> 9);
  pbVar3 = (byte *)(lVar10 + param_3);
  *(int *)(param_1 + 5) = (iVar1 - iVar2) * 0x10;
  *(int *)((long)param_1 + 0x2c) = (int)((ulong)(lVar13 + lVar15 * -0x3b21) >> 9);
  lVar13 = (ulong)*pbVar3 - (ulong)pbVar3[3];
  iVar1 = (uint)pbVar3[3] + (uint)*pbVar3;
  lVar10 = (ulong)pbVar3[1] - (ulong)pbVar3[2];
  iVar2 = (uint)pbVar3[2] + (uint)pbVar3[1];
  lVar15 = (lVar10 + lVar13) * 0x1151 + 0x100;
  iVar5 = (iVar2 + iVar1) * 0x10 + -0x2000;
  iVar6 = *(int *)(param_1 + 4) - iVar5;
  pbVar3 = (byte *)(lVar14 + param_3);
  iVar12 = (int)((ulong)(lVar15 + lVar13 * 0x187e) >> 9);
  *(int *)(param_1 + 8) = iVar5;
  *(int *)((long)param_1 + 0x44) = iVar12;
  *(int *)(param_1 + 9) = (iVar1 - iVar2) * 0x10;
  *(int *)((long)param_1 + 0x4c) = (int)((ulong)(lVar15 + lVar10 * -0x3b21) >> 9);
  lVar16 = (long)(iVar5 + *(int *)(param_1 + 4));
  iVar1 = (uint)pbVar3[3] + (uint)*pbVar3;
  lVar14 = (ulong)*pbVar3 - (ulong)pbVar3[3];
  iVar2 = (uint)pbVar3[2] + (uint)pbVar3[1];
  lVar10 = (ulong)pbVar3[1] - (ulong)pbVar3[2];
  iVar5 = iVar1 - iVar2;
  iVar7 = *(int *)(param_1 + 5) - *(int *)(param_1 + 9);
  iVar1 = (iVar2 + iVar1) * 0x10 + -0x2000;
  lVar13 = (lVar10 + lVar14) * 0x1151 + 0x100;
  iVar2 = *(int *)(param_1 + 1) + iVar5 * -0x10;
  lVar15 = ((long)iVar7 + (long)iVar2) * 0x1151 + 0x4000;
  *(int *)((long)param_1 + 0x6c) = (int)((ulong)(lVar13 + lVar10 * -0x3b21) >> 9);
  iVar8 = *(int *)param_1 - iVar1;
  lVar10 = (long)(iVar1 + *(int *)param_1) + 2;
  lVar17 = ((long)iVar6 + (long)iVar8) * 0x1151 + 0x4000;
  iVar11 = (int)((ulong)(lVar13 + lVar14 * 0x187e) >> 9);
  iVar1 = *(int *)((long)param_1 + 4) - iVar11;
  lVar14 = (long)(*(int *)((long)param_1 + 4) + iVar11) + 2;
  lVar13 = (long)(*(int *)((long)param_1 + 0x24) + iVar12);
  iVar12 = *(int *)((long)param_1 + 0x24) - iVar12;
  lVar18 = ((long)iVar12 + (long)iVar1) * 0x1151 + 0x4000;
  *(int *)param_1 = (int)((ulong)(lVar10 + lVar16) >> 2);
  *(int *)((long)param_1 + 4) = (int)((ulong)(lVar14 + lVar13) >> 2);
  *(int *)(param_1 + 8) = (int)((ulong)(lVar10 - lVar16) >> 2);
  *(int *)((long)param_1 + 0x44) = (int)((ulong)(lVar14 - lVar13) >> 2);
  iVar11 = *(int *)((long)param_1 + 0x2c) - *(int *)((long)param_1 + 0x4c);
  iVar9 = *(int *)((long)param_1 + 0xc) - *(int *)((long)param_1 + 0x6c);
  *(int *)(param_1 + 4) = (int)((ulong)(lVar17 + (long)iVar8 * 0x187e) >> 0xf);
  *(int *)((long)param_1 + 0x24) = (int)((ulong)(lVar18 + (long)iVar1 * 0x187e) >> 0xf);
  lVar13 = ((long)iVar11 + (long)iVar9) * 0x1151 + 0x4000;
  *(int *)(param_1 + 0xc) = (int)((ulong)(lVar17 + (long)iVar6 * -0x3b21) >> 0xf);
  *(int *)((long)param_1 + 100) = (int)((ulong)(lVar18 + (long)iVar12 * -0x3b21) >> 0xf);
  lVar10 = (long)(iVar5 * 0x10 + *(int *)(param_1 + 1)) + 2;
  lVar16 = (long)(*(int *)(param_1 + 9) + *(int *)(param_1 + 5));
  lVar14 = (long)(*(int *)((long)param_1 + 0x6c) + *(int *)((long)param_1 + 0xc)) + 2;
  lVar17 = (long)(*(int *)((long)param_1 + 0x4c) + *(int *)((long)param_1 + 0x2c));
  *(int *)(param_1 + 1) = (int)((ulong)(lVar10 + lVar16) >> 2);
  *(int *)((long)param_1 + 0xc) = (int)((ulong)(lVar14 + lVar17) >> 2);
  *(int *)(param_1 + 9) = (int)((ulong)(lVar10 - lVar16) >> 2);
  *(int *)((long)param_1 + 0x4c) = (int)((ulong)(lVar14 - lVar17) >> 2);
  *(int *)(param_1 + 5) = (int)((ulong)(lVar15 + (long)iVar2 * 0x187e) >> 0xf);
  *(int *)((long)param_1 + 0x2c) = (int)((ulong)(lVar13 + (long)iVar9 * 0x187e) >> 0xf);
  *(int *)(param_1 + 0xd) = (int)((ulong)(lVar15 + (long)iVar7 * -0x3b21) >> 0xf);
  *(int *)((long)param_1 + 0x6c) = (int)((ulong)(lVar13 + (long)iVar11 * -0x3b21) >> 0xf);
  return;
}


