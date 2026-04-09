// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_fdct_4x2
// Entry Point: 00d83c78
// Size: 356 bytes
// Signature: undefined jpeg_fdct_4x2(void)


void jpeg_fdct_4x2(undefined8 *param_1,long *param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
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
  pbVar3 = (byte *)(*param_2 + (param_3 & 0xffffffff));
  pbVar4 = (byte *)(param_2[1] + (param_3 & 0xffffffff));
  lVar5 = (ulong)pbVar3[3] + (ulong)*pbVar3;
  lVar8 = (ulong)*pbVar3 - (ulong)pbVar3[3];
  lVar9 = (ulong)pbVar3[2] + (ulong)pbVar3[1];
  lVar7 = (ulong)pbVar3[1] - (ulong)pbVar3[2];
  iVar6 = (int)lVar5 - (int)lVar9;
  lVar10 = (lVar7 + lVar8) * 0x1151 + 0x80;
  lVar14 = (lVar9 + lVar5) * 0x20;
  lVar9 = lVar10 + lVar8 * 0x187e;
  lVar10 = lVar10 + lVar7 * -0x3b21;
  lVar5 = (lVar9 >> 8) + 2;
  *(int *)param_1 = (int)lVar14 + -0x4000;
  *(int *)((long)param_1 + 4) = (int)((ulong)lVar9 >> 8);
  lVar9 = (lVar10 >> 8) + 2;
  *(int *)(param_1 + 1) = iVar6 * 0x20;
  *(int *)((long)param_1 + 0xc) = (int)((ulong)lVar10 >> 8);
  iVar1 = (uint)pbVar4[3] + (uint)*pbVar4;
  lVar7 = (ulong)*pbVar4 - (ulong)pbVar4[3];
  lVar11 = (ulong)pbVar4[1] - (ulong)pbVar4[2];
  iVar2 = (uint)pbVar4[2] + (uint)pbVar4[1];
  lVar12 = (lVar11 + lVar7) * 0x1151 + 0x80;
  lVar13 = (long)((iVar2 + iVar1) * 0x20 + -0x4000);
  lVar14 = lVar14 + -0x3ffe;
  lVar10 = lVar12 + lVar7 * 0x187e >> 8;
  lVar7 = (long)((iVar1 - iVar2) * 0x20);
  *(int *)(param_1 + 4) = (int)((ulong)(lVar14 - lVar13) >> 2);
  *(int *)((long)param_1 + 0x24) = (int)((ulong)(lVar5 - lVar10) >> 2);
  lVar8 = (long)(int)(iVar6 * 0x20 | 2);
  lVar11 = lVar12 + lVar11 * -0x3b21 >> 8;
  *(int *)param_1 = (int)((ulong)(lVar14 + lVar13) >> 2);
  *(int *)((long)param_1 + 4) = (int)((ulong)(lVar5 + lVar10) >> 2);
  *(int *)(param_1 + 1) = (int)((ulong)(lVar8 + lVar7) >> 2);
  *(int *)((long)param_1 + 0xc) = (int)((ulong)(lVar9 + lVar11) >> 2);
  *(int *)(param_1 + 5) = (int)((ulong)(lVar8 - lVar7) >> 2);
  *(int *)((long)param_1 + 0x2c) = (int)((ulong)(lVar9 - lVar11) >> 2);
  return;
}


