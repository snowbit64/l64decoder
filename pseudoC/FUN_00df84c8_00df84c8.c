// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00df84c8
// Entry Point: 00df84c8
// Size: 864 bytes
// Signature: undefined FUN_00df84c8(void)


void FUN_00df84c8(byte *param_1,int param_2,long param_3)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  byte *pbVar7;
  
  pbVar7 = param_1 + -(long)(param_2 << 1);
  pbVar2 = pbVar7 + param_2;
  pbVar3 = pbVar7 + (long)param_2 + (long)param_2 * 2;
  iVar4 = *(int *)(param_3 +
                  (long)((int)(((uint)*pbVar7 - (uint)*pbVar3) +
                               ((uint)*param_1 - (uint)*pbVar2) * 3 + 4) >> 3) * 4);
  iVar1 = iVar4 + (uint)*pbVar2;
  iVar6 = iVar1 >> 0x1f;
  if (0xfe < iVar1) {
    iVar1 = 0xff;
  }
  *pbVar2 = 0xffU - (char)iVar6 & (byte)iVar1;
  iVar4 = (uint)*param_1 - iVar4;
  iVar1 = iVar4 >> 0x1f;
  if (0xfe < iVar4) {
    iVar4 = 0xff;
  }
  *param_1 = 0xffU - (char)iVar1 & (byte)iVar4;
  iVar4 = *(int *)(param_3 +
                  (long)((int)(((uint)pbVar7[1] - (uint)pbVar3[1]) +
                               ((uint)param_1[1] - (uint)pbVar2[1]) * 3 + 4) >> 3) * 4);
  iVar1 = iVar4 + (uint)pbVar2[1];
  iVar6 = iVar1 >> 0x1f;
  if (0xfe < iVar1) {
    iVar1 = 0xff;
  }
  pbVar2[1] = 0xffU - (char)iVar6 & (byte)iVar1;
  bVar5 = pbVar7[2];
  iVar4 = (uint)param_1[1] - iVar4;
  iVar1 = iVar4 >> 0x1f;
  if (0xfe < iVar4) {
    iVar4 = 0xff;
  }
  param_1[1] = 0xffU - (char)iVar1 & (byte)iVar4;
  iVar4 = *(int *)(param_3 +
                  (long)((int)(((uint)bVar5 - (uint)pbVar3[2]) +
                               ((uint)param_1[2] - (uint)pbVar2[2]) * 3 + 4) >> 3) * 4);
  iVar1 = iVar4 + (uint)pbVar2[2];
  iVar6 = iVar1 >> 0x1f;
  if (0xfe < iVar1) {
    iVar1 = 0xff;
  }
  pbVar2[2] = 0xffU - (char)iVar6 & (byte)iVar1;
  iVar4 = (uint)param_1[2] - iVar4;
  iVar1 = iVar4 >> 0x1f;
  if (0xfe < iVar4) {
    iVar4 = 0xff;
  }
  param_1[2] = 0xffU - (char)iVar1 & (byte)iVar4;
  iVar4 = *(int *)(param_3 +
                  (long)((int)(((uint)pbVar7[3] - (uint)pbVar3[3]) +
                               ((uint)param_1[3] - (uint)pbVar2[3]) * 3 + 4) >> 3) * 4);
  iVar1 = iVar4 + (uint)pbVar2[3];
  iVar6 = iVar1 >> 0x1f;
  if (0xfe < iVar1) {
    iVar1 = 0xff;
  }
  pbVar2[3] = 0xffU - (char)iVar6 & (byte)iVar1;
  iVar4 = (uint)param_1[3] - iVar4;
  iVar1 = iVar4 >> 0x1f;
  if (0xfe < iVar4) {
    iVar4 = 0xff;
  }
  param_1[3] = 0xffU - (char)iVar1 & (byte)iVar4;
  iVar4 = *(int *)(param_3 +
                  (long)((int)(((uint)pbVar7[4] - (uint)pbVar3[4]) +
                               ((uint)param_1[4] - (uint)pbVar2[4]) * 3 + 4) >> 3) * 4);
  iVar1 = iVar4 + (uint)pbVar2[4];
  iVar6 = iVar1 >> 0x1f;
  if (0xfe < iVar1) {
    iVar1 = 0xff;
  }
  pbVar2[4] = 0xffU - (char)iVar6 & (byte)iVar1;
  iVar4 = (uint)param_1[4] - iVar4;
  iVar1 = iVar4 >> 0x1f;
  if (0xfe < iVar4) {
    iVar4 = 0xff;
  }
  param_1[4] = 0xffU - (char)iVar1 & (byte)iVar4;
  iVar4 = *(int *)(param_3 +
                  (long)((int)(((uint)pbVar7[5] - (uint)pbVar3[5]) +
                               ((uint)param_1[5] - (uint)pbVar2[5]) * 3 + 4) >> 3) * 4);
  iVar1 = iVar4 + (uint)pbVar2[5];
  iVar6 = iVar1 >> 0x1f;
  if (0xfe < iVar1) {
    iVar1 = 0xff;
  }
  pbVar2[5] = 0xffU - (char)iVar6 & (byte)iVar1;
  iVar4 = (uint)param_1[5] - iVar4;
  iVar1 = iVar4 >> 0x1f;
  if (0xfe < iVar4) {
    iVar4 = 0xff;
  }
  param_1[5] = 0xffU - (char)iVar1 & (byte)iVar4;
  iVar4 = *(int *)(param_3 +
                  (long)((int)(((uint)pbVar7[6] - (uint)pbVar3[6]) +
                               ((uint)param_1[6] - (uint)pbVar2[6]) * 3 + 4) >> 3) * 4);
  iVar1 = iVar4 + (uint)pbVar2[6];
  iVar6 = iVar1 >> 0x1f;
  if (0xfe < iVar1) {
    iVar1 = 0xff;
  }
  pbVar2[6] = 0xffU - (char)iVar6 & (byte)iVar1;
  iVar4 = (uint)param_1[6] - iVar4;
  iVar1 = iVar4 >> 0x1f;
  if (0xfe < iVar4) {
    iVar4 = 0xff;
  }
  param_1[6] = 0xffU - (char)iVar1 & (byte)iVar4;
  iVar4 = *(int *)(param_3 +
                  (long)((int)(((uint)pbVar7[7] - (uint)pbVar3[7]) +
                               ((uint)param_1[7] - (uint)pbVar2[7]) * 3 + 4) >> 3) * 4);
  iVar1 = iVar4 + (uint)pbVar2[7];
  iVar6 = iVar1 >> 0x1f;
  if (0xfe < iVar1) {
    iVar1 = 0xff;
  }
  pbVar2[7] = 0xffU - (char)iVar6 & (byte)iVar1;
  iVar4 = (uint)param_1[7] - iVar4;
  iVar1 = iVar4 >> 0x1f;
  if (0xfe < iVar4) {
    iVar4 = 0xff;
  }
  param_1[7] = 0xffU - (char)iVar1 & (byte)iVar4;
  return;
}


