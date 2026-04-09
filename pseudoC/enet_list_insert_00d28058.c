// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enet_list_insert
// Entry Point: 00d28058
// Size: 28 bytes
// Signature: undefined enet_list_insert(void)


long * enet_list_insert(long param_1,long *param_2)

{
  long **pplVar1;
  
  pplVar1 = *(long ***)(param_1 + 8);
  *param_2 = param_1;
  param_2[1] = (long)pplVar1;
  *pplVar1 = param_2;
  *(long **)(param_1 + 8) = param_2;
  return param_2;
}


