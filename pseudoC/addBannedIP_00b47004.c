// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addBannedIP
// Entry Point: 00b47004
// Size: 284 bytes
// Signature: undefined __thiscall addBannedIP(ENetNetworkManager * this, char * param_1)


/* ENetNetworkManager::addBannedIP(char const*) */

void __thiscall ENetNetworkManager::addBannedIP(ENetNetworkManager *this,char *param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long **pplVar5;
  long **pplVar6;
  long **pplVar7;
  uint local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_3c = 0;
  uVar2 = Network::getAddressByHostname(param_1,&local_3c);
  if ((uVar2 & 1) != 0) {
    pplVar5 = (long **)(this + 0x50);
    pplVar6 = (long **)*pplVar5;
    pplVar7 = pplVar5;
    if (pplVar6 != (long **)0x0) {
      pplVar5 = (long **)(this + 0x50);
      do {
        while (pplVar7 = pplVar6, local_3c < *(uint *)((long)pplVar7 + 0x1c)) {
          pplVar5 = pplVar7;
          pplVar6 = (long **)*pplVar7;
          if ((long **)*pplVar7 == (long **)0x0) {
            plVar4 = *pplVar7;
            goto joined_r0x00b470d8;
          }
        }
        if (local_3c <= *(uint *)((long)pplVar7 + 0x1c)) break;
        pplVar5 = pplVar7 + 1;
        pplVar6 = (long **)*pplVar5;
      } while ((long **)*pplVar5 != (long **)0x0);
    }
    plVar4 = *pplVar5;
joined_r0x00b470d8:
    if (plVar4 == (long *)0x0) {
      plVar4 = (long *)operator_new(0x20);
      *plVar4 = 0;
      plVar4[1] = 0;
      plVar4[2] = (long)pplVar7;
      *pplVar5 = plVar4;
      plVar3 = *(long **)(this + 0x48);
      *(uint *)((long)plVar4 + 0x1c) = local_3c;
      if (*plVar3 != 0) {
        *(long *)(this + 0x48) = *plVar3;
        plVar4 = *pplVar5;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x50),(__tree_node_base *)plVar4);
      *(long *)(this + 0x58) = *(long *)(this + 0x58) + 1;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


