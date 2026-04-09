// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enet_list_remove
// Entry Point: 00d28074
// Size: 20 bytes
// Signature: undefined enet_list_remove(void)


void enet_list_remove(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[1];
  *plVar1 = *param_1;
  *(long **)(*param_1 + 8) = plVar1;
  return;
}


