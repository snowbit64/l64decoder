// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: oc_pack_adv1
// Entry Point: 00ded9ac
// Size: 28 bytes
// Signature: undefined oc_pack_adv1(void)


void oc_pack_adv1(long *param_1)

{
  *param_1 = *param_1 << 1;
  *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + -1;
  return;
}


