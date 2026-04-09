// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_fdct_2x4
// Entry Point: 00d85764
// Size: 332 bytes
// Signature: undefined jpeg_fdct_2x4(void)


void jpeg_fdct_2x4(undefined8 *param_1,long *param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  
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
  lVar13 = param_2[1];
  uVar12 = (uint)*(byte *)(*param_2 + param_3);
  uVar11 = (uint)((byte *)(*param_2 + param_3))[1];
  iVar2 = (uVar12 - uVar11) * 8;
  iVar5 = (uVar11 + uVar12) * 8 + -0x800;
  *(int *)param_1 = iVar5;
  *(int *)((long)param_1 + 4) = iVar2;
  uVar12 = (uint)*(byte *)(lVar13 + param_3);
  uVar11 = (uint)((byte *)(lVar13 + param_3))[1];
  iVar3 = (uVar12 - uVar11) * 8;
  iVar6 = (uVar11 + uVar12) * 8 + -0x800;
  lVar13 = param_2[2];
  lVar14 = param_2[3];
  *(int *)(param_1 + 4) = iVar6;
  *(int *)((long)param_1 + 0x24) = iVar3;
  uVar12 = (uint)*(byte *)(lVar13 + param_3);
  uVar11 = (uint)((byte *)(lVar13 + param_3))[1];
  iVar8 = uVar12 - uVar11;
  iVar4 = iVar8 * 8;
  iVar7 = (uVar11 + uVar12) * 8 + -0x800;
  iVar1 = iVar4 + iVar3;
  iVar3 = iVar3 + iVar8 * -8;
  *(int *)(param_1 + 8) = iVar7;
  *(int *)((long)param_1 + 0x44) = iVar4;
  uVar12 = (uint)*(byte *)(lVar14 + param_3);
  uVar11 = (uint)((byte *)(lVar14 + param_3))[1];
  iVar8 = uVar12 - uVar11;
  iVar4 = (uVar11 + uVar12) * 8 + -0x800;
  iVar9 = iVar2 + iVar8 * -8;
  iVar10 = iVar5 - iVar4;
  iVar2 = iVar8 * 8 + iVar2;
  iVar4 = iVar4 + iVar5;
  lVar13 = ((long)iVar3 + (long)iVar9) * 0x1151 + 0x1000;
  lVar14 = ((long)(iVar6 - iVar7) + (long)iVar10) * 0x1151 + 0x1000;
  *(int *)(param_1 + 8) = iVar4 - (iVar7 + iVar6);
  *(int *)((long)param_1 + 0x44) = iVar2 - iVar1;
  *(int *)param_1 = iVar7 + iVar6 + iVar4;
  *(int *)((long)param_1 + 4) = iVar1 + iVar2;
  *(int *)(param_1 + 4) = (int)((ulong)(lVar14 + (long)iVar10 * 0x187e) >> 0xd);
  *(int *)((long)param_1 + 0x24) = (int)((ulong)(lVar13 + (long)iVar9 * 0x187e) >> 0xd);
  *(int *)(param_1 + 0xc) = (int)((ulong)(lVar14 + (long)(iVar6 - iVar7) * -0x3b21) >> 0xd);
  *(int *)((long)param_1 + 100) = (int)((ulong)(lVar13 + (long)iVar3 * -0x3b21) >> 0xd);
  return;
}


