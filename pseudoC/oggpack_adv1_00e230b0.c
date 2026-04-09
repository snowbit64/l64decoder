// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: oggpack_adv1
// Entry Point: 00e230b0
// Size: 52 bytes
// Signature: undefined oggpack_adv1(void)


void oggpack_adv1(long *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 1);
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (6 < iVar1) {
    *(undefined4 *)(param_1 + 1) = 0;
    param_1[3] = param_1[3] + 1;
    *param_1 = *param_1 + 1;
  }
  return;
}


