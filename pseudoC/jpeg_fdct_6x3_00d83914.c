// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_fdct_6x3
// Entry Point: 00d83914
// Size: 868 bytes
// Signature: undefined jpeg_fdct_6x3(void)


void jpeg_fdct_6x3(undefined8 *param_1,long *param_2,ulong param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  int iVar18;
  long lVar19;
  int iVar20;
  
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
  pbVar1 = (byte *)(*param_2 + param_3);
  pbVar2 = (byte *)(param_2[1] + param_3);
  pbVar3 = (byte *)(param_2[2] + param_3);
  lVar11 = (ulong)pbVar1[5] + (ulong)*pbVar1;
  lVar15 = (ulong)*pbVar1 - (ulong)pbVar1[5];
  lVar19 = (ulong)pbVar1[3] + (ulong)pbVar1[2];
  lVar16 = (ulong)pbVar1[2] - (ulong)pbVar1[3];
  lVar4 = lVar19 + lVar11;
  lVar5 = (ulong)pbVar1[4] + (ulong)pbVar1[1];
  iVar7 = (uint)pbVar1[1] - (uint)pbVar1[4];
  iVar14 = (int)lVar15;
  iVar10 = (int)lVar16;
  iVar12 = (int)((lVar16 + lVar15) * 0xbb6 + 0x200U >> 10);
  *(int *)param_1 = ((int)lVar4 + (int)lVar5) * 8 + -0x1800;
  *(int *)((long)param_1 + 4) = iVar12 + (iVar7 + iVar14) * 8;
  *(int *)(param_1 + 1) = ((int)lVar11 - (int)lVar19) * 0x2731 + 0x200 >> 10;
  *(int *)((long)param_1 + 0xc) = (iVar14 - (iVar7 + iVar10)) * 8;
  *(int *)(param_1 + 2) = (int)((lVar4 + lVar5 * -2) * 0x16a1 + 0x200U >> 10);
  *(int *)((long)param_1 + 0x14) = iVar12 + (iVar10 - iVar7) * 8;
  lVar11 = (ulong)pbVar2[5] + (ulong)*pbVar2;
  lVar16 = (ulong)*pbVar2 - (ulong)pbVar2[5];
  lVar19 = (ulong)pbVar2[4] + (ulong)pbVar2[1];
  iVar10 = (uint)pbVar2[1] - (uint)pbVar2[4];
  lVar4 = (ulong)pbVar2[3] + (ulong)pbVar2[2];
  lVar15 = (ulong)pbVar2[2] - (ulong)pbVar2[3];
  lVar5 = lVar4 + lVar11;
  iVar13 = (int)lVar15;
  iVar7 = ((int)lVar5 + (int)lVar19) * 8 + -0x1800;
  iVar14 = (int)lVar16;
  iVar12 = (int)((lVar15 + lVar16) * 0xbb6 + 0x200 >> 10);
  iVar17 = iVar12 + (iVar10 + iVar14) * 8;
  *(int *)(param_1 + 4) = iVar7;
  *(int *)((long)param_1 + 0x24) = iVar17;
  *(int *)(param_1 + 5) = ((int)lVar11 - (int)lVar4) * 0x2731 + 0x200 >> 10;
  *(int *)((long)param_1 + 0x2c) = (iVar14 - (iVar10 + iVar13)) * 8;
  *(int *)(param_1 + 6) = (int)((lVar5 + lVar19 * -2) * 0x16a1 + 0x200U >> 10);
  *(int *)((long)param_1 + 0x34) = iVar12 + (iVar13 - iVar10) * 8;
  lVar11 = (ulong)pbVar3[5] + (ulong)*pbVar3;
  lVar16 = (ulong)*pbVar3 - (ulong)pbVar3[5];
  lVar19 = (ulong)pbVar3[3] + (ulong)pbVar3[2];
  lVar15 = (ulong)pbVar3[2] - (ulong)pbVar3[3];
  lVar4 = lVar19 + lVar11;
  lVar5 = (ulong)pbVar3[4] + (ulong)pbVar3[1];
  iVar8 = (uint)pbVar3[1] - (uint)pbVar3[4];
  iVar10 = ((int)lVar11 - (int)lVar19) * 0x2731 + 0x200 >> 10;
  iVar12 = ((int)lVar4 + (int)lVar5) * 8 + -0x1800;
  iVar20 = (int)lVar16;
  iVar9 = (int)lVar15;
  iVar18 = (int)((lVar15 + lVar16) * 0xbb6 + 0x200U >> 10);
  iVar14 = iVar18 + (iVar8 + iVar20) * 8;
  iVar20 = iVar20 - (iVar8 + iVar9);
  iVar13 = *(int *)param_1;
  iVar6 = *(int *)((long)param_1 + 4);
  *(int *)(param_1 + 10) = (int)((lVar4 + lVar5 * -2) * 0x16a1 + 0x200U >> 10);
  *(int *)((long)param_1 + 0x54) = iVar18 + (iVar9 - iVar8) * 8;
  lVar19 = (long)(iVar12 + iVar13);
  lVar11 = (long)(iVar6 + iVar14);
  *(int *)param_1 = (int)((lVar19 + iVar7) * 0x38e4 + 0x4000U >> 0xf);
  *(int *)((long)param_1 + 4) = (int)((lVar11 + iVar17) * 0x38e4 + 0x4000U >> 0xf);
  iVar8 = *(int *)(param_1 + 1);
  iVar9 = *(int *)((long)param_1 + 0xc);
  *(int *)(param_1 + 8) = (int)((lVar19 + (long)iVar7 * -2) * 0x283a + 0x4000U >> 0xf);
  *(int *)((long)param_1 + 0x44) = (int)((lVar11 + (long)iVar17 * -2) * 0x283a + 0x4000U >> 0xf);
  lVar11 = (long)(iVar10 + iVar8);
  lVar19 = (long)(iVar20 * 8 + iVar9);
  *(int *)(param_1 + 4) = (int)((long)(iVar13 - iVar12) * 0x45ad + 0x4000U >> 0xf);
  *(int *)((long)param_1 + 0x24) = (int)((long)(iVar6 - iVar14) * 0x45ad + 0x4000U >> 0xf);
  *(int *)(param_1 + 1) = (int)((lVar11 + *(int *)(param_1 + 5)) * 0x38e4 + 0x4000U >> 0xf);
  *(int *)((long)param_1 + 0xc) = (int)((lVar19 + *(int *)(param_1 + 6)) * 0x38e4 + 0x4000U >> 0xf);
  iVar7 = *(int *)(param_1 + 2);
  iVar14 = *(int *)((long)param_1 + 0x14);
  *(int *)(param_1 + 9) =
       (int)((lVar11 + (long)*(int *)(param_1 + 5) * -2) * 0x283a + 0x4000U >> 0xf);
  *(int *)((long)param_1 + 0x4c) =
       (int)((lVar19 + (long)*(int *)(param_1 + 6) * -2) * 0x283a + 0x4000U >> 0xf);
  iVar12 = *(int *)(param_1 + 10);
  iVar13 = *(int *)((long)param_1 + 0x54);
  *(int *)(param_1 + 5) = (int)((long)(iVar8 - iVar10) * 0x45ad + 0x4000U >> 0xf);
  *(int *)((long)param_1 + 0x2c) = (int)((long)(iVar9 + iVar20 * -8) * 0x45ad + 0x4000U >> 0xf);
  lVar11 = (long)(iVar12 + iVar7);
  lVar19 = (long)(iVar13 + iVar14);
  *(int *)(param_1 + 2) = (int)((lVar11 + *(int *)(param_1 + 6)) * 0x38e4 + 0x4000U >> 0xf);
  *(int *)((long)param_1 + 0x14) = (int)((lVar19 + *(int *)(param_1 + 7)) * 0x38e4 + 0x4000U >> 0xf)
  ;
  *(int *)(param_1 + 10) =
       (int)((lVar11 + (long)*(int *)(param_1 + 6) * -2) * 0x283a + 0x4000U >> 0xf);
  *(int *)((long)param_1 + 0x54) =
       (int)((lVar19 + (long)*(int *)(param_1 + 7) * -2) * 0x283a + 0x4000U >> 0xf);
  *(int *)(param_1 + 6) = (int)((long)(iVar7 - iVar12) * 0x45ad + 0x4000U >> 0xf);
  *(int *)((long)param_1 + 0x34) = (int)((long)(iVar14 - iVar13) * 0x45ad + 0x4000U >> 0xf);
  return;
}


