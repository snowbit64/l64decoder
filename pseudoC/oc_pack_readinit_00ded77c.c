// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: oc_pack_readinit
// Entry Point: 00ded77c
// Size: 20 bytes
// Signature: undefined oc_pack_readinit(void)


void oc_pack_readinit(undefined8 *param_1,long param_2,long param_3)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = param_2;
  param_1[2] = param_2 + param_3;
  return;
}


