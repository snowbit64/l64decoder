// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enet_list_move
// Entry Point: 00d28088
// Size: 52 bytes
// Signature: undefined enet_list_move(void)


long enet_list_move(long param_1,long param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_2 + 8);
  *plVar2 = *param_3;
  lVar1 = *param_3;
  *param_3 = param_1;
  *(long **)(lVar1 + 8) = plVar2;
  plVar2 = *(long **)(param_1 + 8);
  *(long **)(param_2 + 8) = plVar2;
  *plVar2 = param_2;
  *(long **)(param_1 + 8) = param_3;
  return param_2;
}


