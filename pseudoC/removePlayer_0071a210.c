// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removePlayer
// Entry Point: 0071a210
// Size: 216 bytes
// Signature: undefined __thiscall removePlayer(TrafficSystem * this, uint param_1)


/* TrafficSystem::removePlayer(unsigned int) */

void __thiscall TrafficSystem::removePlayer(TrafficSystem *this,uint param_1)

{
  __tree_node_base *p_Var1;
  __tree_node_base **pp_Var2;
  __tree_node_base *p_Var3;
  __tree_node_base **pp_Var4;
  __tree_node_base *p_Var5;
  
  p_Var1 = *(__tree_node_base **)(this + 0x4cb8);
  if (p_Var1 != (__tree_node_base *)0x0) {
    p_Var3 = p_Var1;
    p_Var5 = (__tree_node_base *)(this + 0x4cb8);
    do {
      if (*(uint *)(p_Var3 + 0x1c) >= param_1) {
        p_Var5 = p_Var3;
      }
      p_Var3 = *(__tree_node_base **)(p_Var3 + (ulong)(*(uint *)(p_Var3 + 0x1c) < param_1) * 8);
    } while (p_Var3 != (__tree_node_base *)0x0);
    if ((p_Var5 != (__tree_node_base *)(this + 0x4cb8)) && (*(uint *)(p_Var5 + 0x1c) <= param_1)) {
      pp_Var4 = *(__tree_node_base ***)(p_Var5 + 8);
      if (*(__tree_node_base ***)(p_Var5 + 8) == (__tree_node_base **)0x0) {
        pp_Var4 = (__tree_node_base **)(p_Var5 + 0x10);
        pp_Var2 = (__tree_node_base **)*pp_Var4;
        if (*pp_Var2 != p_Var5) {
          do {
            p_Var3 = *pp_Var4;
            pp_Var4 = (__tree_node_base **)(p_Var3 + 0x10);
            pp_Var2 = (__tree_node_base **)*pp_Var4;
          } while (*pp_Var2 != p_Var3);
        }
      }
      else {
        do {
          pp_Var2 = pp_Var4;
          pp_Var4 = (__tree_node_base **)*pp_Var2;
        } while ((__tree_node_base **)*pp_Var2 != (__tree_node_base **)0x0);
      }
      if (*(__tree_node_base **)(this + 0x4cb0) == p_Var5) {
        *(__tree_node_base ***)(this + 0x4cb0) = pp_Var2;
      }
      *(long *)(this + 0x4cc0) = *(long *)(this + 0x4cc0) + -1;
      std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>(p_Var1,p_Var5);
      operator_delete(p_Var5);
      return;
    }
  }
  return;
}


