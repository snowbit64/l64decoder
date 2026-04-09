// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00df817c
// Entry Point: 00df817c
// Size: 844 bytes
// Signature: undefined FUN_00df817c(void)


void FUN_00df817c(byte *param_1,int param_2,long param_3)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = *(int *)(param_3 +
                  (long)((int)(((uint)param_1[-2] - (uint)param_1[1]) +
                               ((uint)*param_1 - (uint)param_1[-1]) * 3 + 4) >> 3) * 4);
  iVar1 = iVar5 + (uint)param_1[-1];
  iVar5 = (uint)*param_1 - iVar5;
  iVar6 = iVar1 >> 0x1f;
  iVar7 = iVar5 >> 0x1f;
  if (0xfe < iVar1) {
    iVar1 = 0xff;
  }
  if (0xfe < iVar5) {
    iVar5 = 0xff;
  }
  pbVar2 = param_1 + -2 + param_2;
  param_1[-1] = 0xffU - (char)iVar6 & (byte)iVar1;
  *param_1 = 0xffU - (char)iVar7 & (byte)iVar5;
  iVar5 = *(int *)(param_3 +
                  (long)((int)(((uint)*pbVar2 - (uint)pbVar2[3]) +
                               ((uint)pbVar2[2] - (uint)pbVar2[1]) * 3 + 4) >> 3) * 4);
  iVar1 = iVar5 + (uint)pbVar2[1];
  iVar5 = (uint)pbVar2[2] - iVar5;
  iVar6 = iVar1 >> 0x1f;
  iVar7 = iVar5 >> 0x1f;
  if (0xfe < iVar1) {
    iVar1 = 0xff;
  }
  if (0xfe < iVar5) {
    iVar5 = 0xff;
  }
  pbVar3 = pbVar2 + param_2;
  pbVar2[1] = 0xffU - (char)iVar6 & (byte)iVar1;
  pbVar2[2] = 0xffU - (char)iVar7 & (byte)iVar5;
  iVar5 = *(int *)(param_3 +
                  (long)((int)(((uint)*pbVar3 - (uint)pbVar3[3]) +
                               ((uint)pbVar3[2] - (uint)pbVar3[1]) * 3 + 4) >> 3) * 4);
  iVar1 = iVar5 + (uint)pbVar3[1];
  iVar5 = (uint)pbVar3[2] - iVar5;
  iVar6 = iVar1 >> 0x1f;
  iVar7 = iVar5 >> 0x1f;
  if (0xfe < iVar1) {
    iVar1 = 0xff;
  }
  if (0xfe < iVar5) {
    iVar5 = 0xff;
  }
  pbVar2 = pbVar3 + param_2;
  pbVar3[1] = 0xffU - (char)iVar6 & (byte)iVar1;
  pbVar3[2] = 0xffU - (char)iVar7 & (byte)iVar5;
  iVar5 = *(int *)(param_3 +
                  (long)((int)(((uint)*pbVar2 - (uint)pbVar2[3]) +
                               ((uint)pbVar2[2] - (uint)pbVar2[1]) * 3 + 4) >> 3) * 4);
  iVar1 = iVar5 + (uint)pbVar2[1];
  iVar5 = (uint)pbVar2[2] - iVar5;
  iVar6 = iVar1 >> 0x1f;
  iVar7 = iVar5 >> 0x1f;
  if (0xfe < iVar1) {
    iVar1 = 0xff;
  }
  if (0xfe < iVar5) {
    iVar5 = 0xff;
  }
  pbVar3 = pbVar2 + param_2;
  pbVar2[1] = 0xffU - (char)iVar6 & (byte)iVar1;
  pbVar2[2] = 0xffU - (char)iVar7 & (byte)iVar5;
  iVar5 = *(int *)(param_3 +
                  (long)((int)(((uint)*pbVar3 - (uint)pbVar3[3]) +
                               ((uint)pbVar3[2] - (uint)pbVar3[1]) * 3 + 4) >> 3) * 4);
  iVar1 = iVar5 + (uint)pbVar3[1];
  iVar5 = (uint)pbVar3[2] - iVar5;
  iVar6 = iVar1 >> 0x1f;
  iVar7 = iVar5 >> 0x1f;
  if (0xfe < iVar1) {
    iVar1 = 0xff;
  }
  if (0xfe < iVar5) {
    iVar5 = 0xff;
  }
  pbVar2 = pbVar3 + param_2;
  pbVar3[1] = 0xffU - (char)iVar6 & (byte)iVar1;
  pbVar3[2] = 0xffU - (char)iVar7 & (byte)iVar5;
  iVar5 = *(int *)(param_3 +
                  (long)((int)(((uint)*pbVar2 - (uint)pbVar2[3]) +
                               ((uint)pbVar2[2] - (uint)pbVar2[1]) * 3 + 4) >> 3) * 4);
  iVar1 = iVar5 + (uint)pbVar2[1];
  iVar5 = (uint)pbVar2[2] - iVar5;
  iVar6 = iVar1 >> 0x1f;
  iVar7 = iVar5 >> 0x1f;
  if (0xfe < iVar1) {
    iVar1 = 0xff;
  }
  if (0xfe < iVar5) {
    iVar5 = 0xff;
  }
  pbVar3 = pbVar2 + param_2;
  pbVar4 = pbVar3 + param_2;
  pbVar2[1] = 0xffU - (char)iVar6 & (byte)iVar1;
  pbVar2[2] = 0xffU - (char)iVar7 & (byte)iVar5;
  iVar5 = *(int *)(param_3 +
                  (long)((int)(((uint)*pbVar3 - (uint)pbVar3[3]) +
                               ((uint)pbVar3[2] - (uint)pbVar3[1]) * 3 + 4) >> 3) * 4);
  iVar1 = iVar5 + (uint)pbVar3[1];
  iVar5 = (uint)pbVar3[2] - iVar5;
  iVar6 = iVar1 >> 0x1f;
  iVar7 = iVar5 >> 0x1f;
  if (0xfe < iVar1) {
    iVar1 = 0xff;
  }
  if (0xfe < iVar5) {
    iVar5 = 0xff;
  }
  pbVar3[1] = 0xffU - (char)iVar6 & (byte)iVar1;
  pbVar3[2] = 0xffU - (char)iVar7 & (byte)iVar5;
  iVar5 = *(int *)(param_3 +
                  (long)((int)(((uint)*pbVar4 - (uint)pbVar4[3]) +
                               ((uint)pbVar4[2] - (uint)pbVar4[1]) * 3 + 4) >> 3) * 4);
  iVar1 = iVar5 + (uint)pbVar4[1];
  iVar5 = (uint)pbVar4[2] - iVar5;
  iVar6 = iVar1 >> 0x1f;
  iVar7 = iVar5 >> 0x1f;
  if (0xfe < iVar1) {
    iVar1 = 0xff;
  }
  if (0xfe < iVar5) {
    iVar5 = 0xff;
  }
  pbVar4[1] = 0xffU - (char)iVar6 & (byte)iVar1;
  pbVar4[2] = 0xffU - (char)iVar7 & (byte)iVar5;
  return;
}


