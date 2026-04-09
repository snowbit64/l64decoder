// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_fdct_3x3
// Entry Point: 00d7edb8
// Size: 444 bytes
// Signature: undefined jpeg_fdct_3x3(void)


void jpeg_fdct_3x3(undefined8 *param_1,long *param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
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
  pbVar5 = (byte *)(*param_2 + param_3);
  pbVar6 = (byte *)(param_2[1] + param_3);
  pbVar7 = (byte *)(param_2[2] + param_3);
  bVar13 = pbVar5[1];
  iVar1 = (uint)pbVar5[2] + (uint)*pbVar5;
  iVar2 = (iVar1 + (uint)bVar13) * 0x10 + -0x1800;
  iVar8 = (int)(((uint)*pbVar5 - (uint)pbVar5[2]) * 0x2731 + 0x100) >> 9;
  *(int *)param_1 = iVar2;
  *(int *)((long)param_1 + 4) = iVar8;
  *(int *)(param_1 + 1) = (int)((iVar1 + (uint)bVar13 * -2) * 0x16a1 + 0x100) >> 9;
  iVar1 = (uint)pbVar6[2] + (uint)*pbVar6;
  uVar14 = ((uint)*pbVar6 - (uint)pbVar6[2]) * 0x2731 + 0x100;
  uVar15 = (iVar1 + (uint)pbVar6[1] * -2) * 0x16a1 + 0x100;
  iVar1 = (iVar1 + (uint)pbVar6[1]) * 0x10 + -0x1800;
  iVar9 = (int)uVar14 >> 9;
  iVar10 = (int)uVar15 >> 9;
  *(int *)(param_1 + 4) = iVar1;
  *(int *)((long)param_1 + 0x24) = iVar9;
  *(int *)(param_1 + 5) = iVar10;
  iVar3 = (uint)pbVar7[2] + (uint)*pbVar7;
  iVar4 = (iVar3 + (uint)pbVar7[1]) * 0x10 + -0x1800;
  iVar11 = (int)(((uint)*pbVar7 - (uint)pbVar7[2]) * 0x2731 + 0x100) >> 9;
  lVar17 = (long)(iVar4 + iVar2);
  lVar18 = (long)(iVar11 + iVar8);
  iVar12 = *(int *)(param_1 + 1);
  iVar3 = (int)((iVar3 + (uint)pbVar7[1] * -2) * 0x16a1 + 0x100) >> 9;
  lVar16 = (long)(iVar3 + iVar12);
  *(int *)(param_1 + 8) = (int)((lVar17 + (long)iVar1 * -2) * 0x283a + 0x4000U >> 0xf);
  *(int *)((long)param_1 + 0x44) = (int)((lVar18 + (long)iVar9 * -2) * 0x283a + 0x4000U >> 0xf);
  *(int *)param_1 = (int)((lVar17 + iVar1) * 0x38e4 + 0x4000U >> 0xf);
  *(int *)((long)param_1 + 4) =
       (int)((lVar18 + ((long)((ulong)uVar14 << 0x20) >> 0x29)) * 0x38e4 + 0x4000U >> 0xf);
  *(int *)(param_1 + 4) = (int)((long)((iVar2 - iVar4) * 0x45ad) + 0x4000U >> 0xf);
  *(int *)((long)param_1 + 0x24) = (int)((long)(iVar8 - iVar11) * 0x45ad + 0x4000U >> 0xf);
  *(int *)(param_1 + 1) =
       (int)((lVar16 + ((long)((ulong)uVar15 << 0x20) >> 0x29)) * 0x38e4 + 0x4000U >> 0xf);
  *(int *)(param_1 + 9) = (int)((lVar16 + (long)iVar10 * -2) * 0x283a + 0x4000U >> 0xf);
  *(int *)(param_1 + 5) = (int)((long)(iVar12 - iVar3) * 0x45ad + 0x4000U >> 0xf);
  return;
}


