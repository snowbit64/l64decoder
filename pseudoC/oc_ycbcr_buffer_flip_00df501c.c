// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: oc_ycbcr_buffer_flip
// Entry Point: 00df501c
// Size: 140 bytes
// Signature: undefined oc_ycbcr_buffer_flip(void)


void oc_ycbcr_buffer_flip(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  
  iVar1 = param_2[1];
  iVar2 = param_2[3];
  lVar6 = *(long *)(param_2 + 4);
  param_1[1] = iVar1;
  iVar4 = param_2[7];
  param_1[2] = -iVar2;
  uVar3 = *param_2;
  iVar5 = param_2[8];
  *(long *)(param_1 + 4) = lVar6 + ((long)iVar2 * (long)iVar1 - (long)iVar2);
  *param_1 = uVar3;
  lVar6 = *(long *)(param_2 + 10);
  uVar3 = param_2[6];
  param_1[7] = iVar4;
  param_1[8] = -iVar5;
  param_1[6] = uVar3;
  iVar2 = param_2[0xe];
  uVar3 = param_2[0xc];
  iVar1 = param_2[0xd];
  *(long *)(param_1 + 10) = lVar6 + ((long)iVar5 * (long)iVar4 - (long)iVar5);
  lVar6 = *(long *)(param_2 + 0x10);
  param_1[0xc] = uVar3;
  param_1[0xd] = iVar1;
  param_1[0xe] = -iVar2;
  *(long *)(param_1 + 0x10) = lVar6 + ((long)iVar2 * (long)iVar1 - (long)iVar2);
  return;
}


