// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00bf5008
// Entry Point: 00bf5008
// Size: 148 bytes
// Signature: undefined FUN_00bf5008(void)


__tree_node_base ** FUN_00bf5008(__tree_node_base **param_1,__tree_node_base *param_2)

{
  __tree_node_base **pp_Var1;
  __tree_node_base *p_Var2;
  __tree_node_base **pp_Var3;
  
  pp_Var1 = *(__tree_node_base ***)(param_2 + 8);
  if (*(__tree_node_base ***)(param_2 + 8) == (__tree_node_base **)0x0) {
    pp_Var1 = (__tree_node_base **)(param_2 + 0x10);
    pp_Var3 = (__tree_node_base **)*pp_Var1;
    if (*pp_Var3 != param_2) {
      do {
        p_Var2 = *pp_Var1;
        pp_Var1 = (__tree_node_base **)(p_Var2 + 0x10);
        pp_Var3 = (__tree_node_base **)*pp_Var1;
      } while (*pp_Var3 != p_Var2);
    }
  }
  else {
    do {
      pp_Var3 = pp_Var1;
      pp_Var1 = (__tree_node_base **)*pp_Var3;
    } while ((__tree_node_base **)*pp_Var3 != (__tree_node_base **)0x0);
  }
  if (*param_1 == param_2) {
    *param_1 = (__tree_node_base *)pp_Var3;
  }
  param_1[2] = param_1[2] + -1;
  std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>(param_1[1],param_2);
  operator_delete(param_2);
  return pp_Var3;
}


