// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeBannedIP
// Entry Point: 00b47120
// Size: 280 bytes
// Signature: undefined __thiscall removeBannedIP(ENetNetworkManager * this, char * param_1)


/* ENetNetworkManager::removeBannedIP(char const*) */

void __thiscall ENetNetworkManager::removeBannedIP(ENetNetworkManager *this,char *param_1)

{
  __tree_node_base **pp_Var1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  __tree_node_base **pp_Var5;
  __tree_node_base **pp_Var6;
  __tree_node_base **pp_Var7;
  __tree_node_base *p_Var8;
  __tree_node_base **pp_Var9;
  uint local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_3c = 0;
  uVar4 = Network::getAddressByHostname(param_1,&local_3c);
  if ((uVar4 & 1) != 0) {
    pp_Var6 = (__tree_node_base **)(this + 0x50);
    pp_Var5 = (__tree_node_base **)*pp_Var6;
    pp_Var7 = pp_Var5;
    pp_Var9 = pp_Var6;
    if (pp_Var5 != (__tree_node_base **)0x0) {
      do {
        bVar3 = *(uint *)((long)pp_Var7 + 0x1c) < local_3c;
        if (!bVar3) {
          pp_Var9 = pp_Var7;
        }
        pp_Var1 = pp_Var7 + bVar3;
        pp_Var7 = (__tree_node_base **)*pp_Var1;
      } while ((__tree_node_base **)*pp_Var1 != (__tree_node_base **)0x0);
      if ((pp_Var9 != pp_Var6) && (*(uint *)((long)pp_Var9 + 0x1c) <= local_3c)) {
        pp_Var7 = (__tree_node_base **)pp_Var9[1];
        if ((__tree_node_base **)pp_Var9[1] == (__tree_node_base **)0x0) {
          pp_Var7 = pp_Var9 + 2;
          pp_Var6 = (__tree_node_base **)*pp_Var7;
          if ((__tree_node_base **)*pp_Var6 != pp_Var9) {
            do {
              p_Var8 = *pp_Var7;
              pp_Var7 = (__tree_node_base **)(p_Var8 + 0x10);
              pp_Var6 = (__tree_node_base **)*pp_Var7;
            } while (*pp_Var6 != p_Var8);
          }
        }
        else {
          do {
            pp_Var6 = pp_Var7;
            pp_Var7 = (__tree_node_base **)*pp_Var6;
          } while ((__tree_node_base **)*pp_Var6 != (__tree_node_base **)0x0);
        }
        if (*(__tree_node_base ***)(this + 0x48) == pp_Var9) {
          *(__tree_node_base ***)(this + 0x48) = pp_Var6;
        }
        *(long *)(this + 0x58) = *(long *)(this + 0x58) + -1;
        std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                  ((__tree_node_base *)pp_Var5,(__tree_node_base *)pp_Var9);
        operator_delete(pp_Var9);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


