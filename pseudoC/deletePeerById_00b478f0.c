// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deletePeerById
// Entry Point: 00b478f0
// Size: 356 bytes
// Signature: undefined __thiscall deletePeerById(ENetNetworkManager * this, __map_iterator param_1)


/* ENetNetworkManager::deletePeerById(std::__ndk1::__map_iterator<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<unsigned
   int, ENetConnection*>, std::__ndk1::__tree_node<std::__ndk1::__value_type<unsigned int,
   ENetConnection*>, void*>*, long> >) */

void __thiscall ENetNetworkManager::deletePeerById(ENetNetworkManager *this,__map_iterator param_1)

{
  __tree_node_base **pp_Var1;
  __tree_node_base *p_Var2;
  __tree_node_base *p_Var3;
  __tree_node_base **pp_Var4;
  __tree_node_base **pp_Var5;
  __tree_node_base **pp_Var6;
  __tree_node_base **pp_Var7;
  
  p_Var2 = (__tree_node_base *)(ulong)param_1;
  pp_Var7 = *(__tree_node_base ***)(p_Var2 + 0x28);
  pp_Var4 = (__tree_node_base **)(this + 0x30);
  pp_Var1 = (__tree_node_base **)*pp_Var4;
  if (pp_Var1 != (__tree_node_base **)0x0) {
    p_Var3 = *pp_Var7;
    pp_Var5 = pp_Var1;
    pp_Var6 = pp_Var4;
    do {
      if (pp_Var5[4] >= p_Var3) {
        pp_Var6 = pp_Var5;
      }
      pp_Var5 = (__tree_node_base **)pp_Var5[pp_Var5[4] < p_Var3];
    } while (pp_Var5 != (__tree_node_base **)0x0);
    if ((pp_Var6 != pp_Var4) && (pp_Var6[4] <= p_Var3)) {
      pp_Var4 = (__tree_node_base **)pp_Var6[1];
      if ((__tree_node_base **)pp_Var6[1] == (__tree_node_base **)0x0) {
        pp_Var4 = pp_Var6 + 2;
        pp_Var7 = (__tree_node_base **)*pp_Var4;
        if ((__tree_node_base **)*pp_Var7 != pp_Var6) {
          do {
            p_Var3 = *pp_Var4;
            pp_Var4 = (__tree_node_base **)(p_Var3 + 0x10);
            pp_Var7 = (__tree_node_base **)*pp_Var4;
          } while (*pp_Var7 != p_Var3);
        }
      }
      else {
        do {
          pp_Var7 = pp_Var4;
          pp_Var4 = (__tree_node_base **)*pp_Var7;
        } while ((__tree_node_base **)*pp_Var7 != (__tree_node_base **)0x0);
      }
      if (*(__tree_node_base ***)(this + 0x28) == pp_Var6) {
        *(__tree_node_base ***)(this + 0x28) = pp_Var7;
      }
      *(long *)(this + 0x38) = *(long *)(this + 0x38) + -1;
      std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                ((__tree_node_base *)pp_Var1,(__tree_node_base *)pp_Var6);
      operator_delete(pp_Var6);
      pp_Var7 = *(__tree_node_base ***)(p_Var2 + 0x28);
    }
    if (pp_Var7 == (__tree_node_base **)0x0) goto LAB_00b479d8;
  }
  ENetConnection::~ENetConnection((ENetConnection *)pp_Var7);
  operator_delete(pp_Var7);
LAB_00b479d8:
  pp_Var1 = *(__tree_node_base ***)(p_Var2 + 8);
  if (*(__tree_node_base ***)(p_Var2 + 8) == (__tree_node_base **)0x0) {
    pp_Var1 = (__tree_node_base **)(p_Var2 + 0x10);
    pp_Var4 = (__tree_node_base **)*pp_Var1;
    if (*pp_Var4 != p_Var2) {
      do {
        p_Var3 = *pp_Var1;
        pp_Var1 = (__tree_node_base **)(p_Var3 + 0x10);
        pp_Var4 = (__tree_node_base **)*pp_Var1;
      } while (*pp_Var4 != p_Var3);
    }
  }
  else {
    do {
      pp_Var4 = pp_Var1;
      pp_Var1 = (__tree_node_base **)*pp_Var4;
    } while ((__tree_node_base **)*pp_Var4 != (__tree_node_base **)0x0);
  }
  if (*(__tree_node_base **)(this + 0x10) == p_Var2) {
    *(__tree_node_base ***)(this + 0x10) = pp_Var4;
  }
  *(long *)(this + 0x20) = *(long *)(this + 0x20) + -1;
  std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
            (*(__tree_node_base **)(this + 0x18),p_Var2);
  operator_delete(p_Var2);
  return;
}


