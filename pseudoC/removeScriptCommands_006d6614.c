// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeScriptCommands
// Entry Point: 006d6614
// Size: 312 bytes
// Signature: undefined removeScriptCommands(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Console::removeScriptCommands() */

void Console::removeScriptCommands(void)

{
  bool bVar1;
  long in_x0;
  ulong uVar2;
  __tree_node_base **pp_Var3;
  __tree_node_base *p_Var4;
  __tree_node_base **pp_Var5;
  __tree_node_base **pp_Var6;
  
  pp_Var6 = *(__tree_node_base ***)(in_x0 + 0x28);
  while (pp_Var6 != (__tree_node_base **)(in_x0 + 0x30)) {
    uVar2 = (**(code **)(*(long *)pp_Var6[7] + 0x28))();
    if ((uVar2 & 1) == 0) {
      pp_Var3 = (__tree_node_base **)pp_Var6[1];
      if ((__tree_node_base **)pp_Var6[1] == (__tree_node_base **)0x0) {
        pp_Var3 = pp_Var6 + 2;
        bVar1 = *(__tree_node_base ***)*pp_Var3 != pp_Var6;
        pp_Var6 = (__tree_node_base **)*pp_Var3;
        if (bVar1) {
          do {
            p_Var4 = *pp_Var3;
            pp_Var3 = (__tree_node_base **)(p_Var4 + 0x10);
            pp_Var6 = (__tree_node_base **)*pp_Var3;
          } while (*pp_Var6 != p_Var4);
        }
      }
      else {
        do {
          pp_Var6 = pp_Var3;
          pp_Var3 = (__tree_node_base **)*pp_Var6;
        } while ((__tree_node_base **)*pp_Var6 != (__tree_node_base **)0x0);
      }
    }
    else {
      if ((long *)pp_Var6[7] != (long *)0x0) {
        (**(code **)(*(long *)pp_Var6[7] + 8))();
      }
      pp_Var3 = (__tree_node_base **)pp_Var6[1];
      if ((__tree_node_base **)pp_Var6[1] == (__tree_node_base **)0x0) {
        pp_Var3 = pp_Var6 + 2;
        pp_Var5 = (__tree_node_base **)*pp_Var3;
        if ((__tree_node_base **)*pp_Var5 != pp_Var6) {
          do {
            p_Var4 = *pp_Var3;
            pp_Var3 = (__tree_node_base **)(p_Var4 + 0x10);
            pp_Var5 = (__tree_node_base **)*pp_Var3;
          } while (*pp_Var5 != p_Var4);
        }
      }
      else {
        do {
          pp_Var5 = pp_Var3;
          pp_Var3 = (__tree_node_base **)*pp_Var5;
        } while ((__tree_node_base **)*pp_Var5 != (__tree_node_base **)0x0);
      }
      if (*(__tree_node_base ***)(in_x0 + 0x28) == pp_Var6) {
        *(__tree_node_base ***)(in_x0 + 0x28) = pp_Var5;
      }
      *(long *)(in_x0 + 0x38) = *(long *)(in_x0 + 0x38) + -1;
      std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(in_x0 + 0x30),(__tree_node_base *)pp_Var6);
      if ((*(byte *)(pp_Var6 + 4) & 1) != 0) {
        operator_delete(pp_Var6[6]);
      }
      operator_delete(pp_Var6);
      pp_Var6 = pp_Var5;
    }
  }
  return;
}


