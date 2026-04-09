// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_fdct_2x2
// Entry Point: 00d7ef74
// Size: 132 bytes
// Signature: undefined jpeg_fdct_2x2(void)


void jpeg_fdct_2x2(undefined8 *param_1,long *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
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
  pbVar3 = (byte *)(*param_2 + (ulong)param_3);
  pbVar4 = (byte *)(param_2[1] + (ulong)param_3);
  uVar8 = (uint)*pbVar3;
  uVar7 = (uint)pbVar3[1];
  iVar1 = uVar7 + uVar8;
  iVar5 = uVar8 - uVar7;
  uVar8 = (uint)*pbVar4;
  uVar7 = (uint)pbVar4[1];
  iVar2 = uVar7 + uVar8;
  iVar6 = uVar8 - uVar7;
  *(int *)param_1 = (iVar2 + iVar1) * 0x10 + -0x2000;
  *(int *)((long)param_1 + 4) = (iVar6 + iVar5) * 0x10;
  *(int *)(param_1 + 4) = (iVar1 - iVar2) * 0x10;
  *(int *)((long)param_1 + 0x24) = (iVar5 - iVar6) * 0x10;
  return;
}


