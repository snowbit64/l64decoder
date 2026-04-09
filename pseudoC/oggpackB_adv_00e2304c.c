// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: oggpackB_adv
// Entry Point: 00e2304c
// Size: 100 bytes
// Signature: undefined oggpackB_adv(void)


void oggpackB_adv(long *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  uVar1 = *(int *)(param_1 + 1) + param_2;
  if (param_1[4] - (long)((int)(uVar1 + 7) >> 3) < *param_1) {
    param_1[3] = 0;
    *param_1 = param_1[4];
    *(undefined4 *)(param_1 + 1) = 1;
    return;
  }
  uVar2 = uVar1 + 7;
  if (-1 < (int)uVar1) {
    uVar2 = uVar1;
  }
  lVar3 = (long)((ulong)uVar2 << 0x20) >> 0x23;
  *(uint *)(param_1 + 1) = uVar1 & 7;
  param_1[3] = param_1[3] + lVar3;
  *param_1 = *param_1 + lVar3;
  return;
}


