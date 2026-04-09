// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deletePeerByPeer
// Entry Point: 00b48f30
// Size: 352 bytes
// Signature: undefined __thiscall deletePeerByPeer(ENetNetworkManager * this, __map_iterator param_1)


/* ENetNetworkManager::deletePeerByPeer(std::__ndk1::__map_iterator<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<_ENetPeer*,
   ENetConnection*>, std::__ndk1::__tree_node<std::__ndk1::__value_type<_ENetPeer*,
   ENetConnection*>, void*>*, long> >) */

void __thiscall
ENetNetworkManager::deletePeerByPeer(ENetNetworkManager *this,__map_iterator param_1)

{
  uint uVar1;
  __tree_node_base *p_Var2;
  __tree_node_base **pp_Var3;
  __tree_node_base **pp_Var4;
  __tree_node_base **pp_Var5;
  __tree_node_base *p_Var6;
  ENetConnection *this_00;
  
  p_Var2 = (__tree_node_base *)(ulong)param_1;
  pp_Var3 = (__tree_node_base **)(this + 0x18);
  p_Var6 = *pp_Var3;
  if (p_Var6 != (__tree_node_base *)0x0) {
    uVar1 = *(uint *)(*(long *)(p_Var2 + 0x28) + 0x4c4);
    pp_Var5 = pp_Var3;
    do {
      if (*(uint *)(p_Var6 + 0x20) >= uVar1) {
        pp_Var5 = (__tree_node_base **)p_Var6;
      }
      p_Var6 = *(__tree_node_base **)(p_Var6 + (ulong)(*(uint *)(p_Var6 + 0x20) < uVar1) * 8);
    } while (p_Var6 != (__tree_node_base *)0x0);
    if ((pp_Var5 != pp_Var3) && (*(uint *)(pp_Var5 + 4) <= uVar1)) {
      this_00 = (ENetConnection *)pp_Var5[5];
      if (this_00 != (ENetConnection *)0x0) {
        ENetConnection::~ENetConnection(this_00);
        operator_delete(this_00);
      }
      pp_Var3 = (__tree_node_base **)pp_Var5[1];
      if ((__tree_node_base **)pp_Var5[1] == (__tree_node_base **)0x0) {
        pp_Var3 = pp_Var5 + 2;
        pp_Var4 = (__tree_node_base **)*pp_Var3;
        if ((__tree_node_base **)*pp_Var4 != pp_Var5) {
          do {
            p_Var6 = *pp_Var3;
            pp_Var3 = (__tree_node_base **)(p_Var6 + 0x10);
            pp_Var4 = (__tree_node_base **)*pp_Var3;
          } while (*pp_Var4 != p_Var6);
        }
      }
      else {
        do {
          pp_Var4 = pp_Var3;
          pp_Var3 = (__tree_node_base **)*pp_Var4;
        } while ((__tree_node_base **)*pp_Var4 != (__tree_node_base **)0x0);
      }
      if ((__tree_node_base **)*(__tree_node_base **)(this + 0x10) == pp_Var5) {
        *(__tree_node_base ***)(this + 0x10) = pp_Var4;
      }
      *(long *)(this + 0x20) = *(long *)(this + 0x20) + -1;
      std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x18),(__tree_node_base *)pp_Var5);
      operator_delete(pp_Var5);
    }
  }
  pp_Var3 = *(__tree_node_base ***)(p_Var2 + 8);
  if (*(__tree_node_base ***)(p_Var2 + 8) == (__tree_node_base **)0x0) {
    pp_Var3 = (__tree_node_base **)(p_Var2 + 0x10);
    pp_Var5 = (__tree_node_base **)*pp_Var3;
    if (*pp_Var5 != p_Var2) {
      do {
        p_Var6 = *pp_Var3;
        pp_Var3 = (__tree_node_base **)(p_Var6 + 0x10);
        pp_Var5 = (__tree_node_base **)*pp_Var3;
      } while (*pp_Var5 != p_Var6);
    }
  }
  else {
    do {
      pp_Var5 = pp_Var3;
      pp_Var3 = (__tree_node_base **)*pp_Var5;
    } while ((__tree_node_base **)*pp_Var5 != (__tree_node_base **)0x0);
  }
  if (*(__tree_node_base **)(this + 0x28) == p_Var2) {
    *(__tree_node_base ***)(this + 0x28) = pp_Var5;
  }
  *(long *)(this + 0x38) = *(long *)(this + 0x38) + -1;
  std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
            (*(__tree_node_base **)(this + 0x30),p_Var2);
  operator_delete(p_Var2);
  return;
}


