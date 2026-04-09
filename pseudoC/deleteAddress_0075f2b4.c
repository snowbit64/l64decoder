// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deleteAddress
// Entry Point: 0075f2b4
// Size: 228 bytes
// Signature: undefined __thiscall deleteAddress(ScriptingNetworkManager * this, uint param_1)


/* ScriptingNetworkManager::deleteAddress(unsigned int) */

void __thiscall ScriptingNetworkManager::deleteAddress(ScriptingNetworkManager *this,uint param_1)

{
  __tree_node_base **pp_Var1;
  __tree_node_base **pp_Var2;
  __tree_node_base *p_Var3;
  __tree_node_base **pp_Var4;
  
  pp_Var1 = (__tree_node_base **)(this + 0x10);
  p_Var3 = *pp_Var1;
  pp_Var4 = pp_Var1;
  if (p_Var3 != (__tree_node_base *)0x0) {
    do {
      if (*(uint *)(p_Var3 + 0x20) >= param_1) {
        pp_Var4 = (__tree_node_base **)p_Var3;
      }
      p_Var3 = *(__tree_node_base **)(p_Var3 + (ulong)(*(uint *)(p_Var3 + 0x20) < param_1) * 8);
    } while (p_Var3 != (__tree_node_base *)0x0);
    if ((pp_Var4 != pp_Var1) && (*(uint *)(pp_Var4 + 4) <= param_1)) {
      if ((long *)pp_Var4[5] != (long *)0x0) {
        (**(code **)(*(long *)pp_Var4[5] + 8))();
      }
      pp_Var1 = (__tree_node_base **)pp_Var4[1];
      if ((__tree_node_base **)pp_Var4[1] == (__tree_node_base **)0x0) {
        pp_Var1 = pp_Var4 + 2;
        pp_Var2 = (__tree_node_base **)*pp_Var1;
        if ((__tree_node_base **)*pp_Var2 != pp_Var4) {
          do {
            p_Var3 = *pp_Var1;
            pp_Var1 = (__tree_node_base **)(p_Var3 + 0x10);
            pp_Var2 = (__tree_node_base **)*pp_Var1;
          } while (*pp_Var2 != p_Var3);
        }
      }
      else {
        do {
          pp_Var2 = pp_Var1;
          pp_Var1 = (__tree_node_base **)*pp_Var2;
        } while ((__tree_node_base **)*pp_Var2 != (__tree_node_base **)0x0);
      }
      if ((__tree_node_base **)*(__tree_node_base **)(this + 8) == pp_Var4) {
        *(__tree_node_base ***)(this + 8) = pp_Var2;
      }
      *(long *)(this + 0x18) = *(long *)(this + 0x18) + -1;
      std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x10),(__tree_node_base *)pp_Var4);
      operator_delete(pp_Var4);
      return;
    }
  }
  return;
}


