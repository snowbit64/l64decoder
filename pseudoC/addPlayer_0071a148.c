// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addPlayer
// Entry Point: 0071a148
// Size: 200 bytes
// Signature: undefined __thiscall addPlayer(TrafficSystem * this, uint param_1)


/* TrafficSystem::addPlayer(unsigned int) */

void __thiscall TrafficSystem::addPlayer(TrafficSystem *this,uint param_1)

{
  long **pplVar1;
  long *plVar2;
  long *plVar3;
  long **pplVar4;
  long **pplVar5;
  
  if (*(long ***)(this + 0x4cb8) == (long **)0x0) {
    pplVar4 = (long **)(this + 0x4cb8);
    pplVar5 = pplVar4;
  }
  else {
    pplVar1 = *(long ***)(this + 0x4cb8);
    pplVar5 = (long **)(this + 0x4cb8);
    do {
      while (pplVar4 = pplVar1, *(uint *)((long)pplVar4 + 0x1c) <= param_1) {
        if (param_1 <= *(uint *)((long)pplVar4 + 0x1c)) goto LAB_0071a1b0;
        pplVar5 = pplVar4 + 1;
        pplVar1 = (long **)*pplVar5;
        if ((long **)*pplVar5 == (long **)0x0) goto LAB_0071a1b0;
      }
      pplVar1 = (long **)*pplVar4;
      pplVar5 = pplVar4;
    } while ((long **)*pplVar4 != (long **)0x0);
  }
LAB_0071a1b0:
  if (*pplVar5 == (long *)0x0) {
    plVar2 = (long *)operator_new(0x20);
    *plVar2 = 0;
    plVar2[1] = 0;
    plVar2[2] = (long)pplVar4;
    *pplVar5 = plVar2;
    plVar3 = *(long **)(this + 0x4cb0);
    *(uint *)((long)plVar2 + 0x1c) = param_1;
    if (*plVar3 != 0) {
      *(long *)(this + 0x4cb0) = *plVar3;
      plVar2 = *pplVar5;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x4cb8),(__tree_node_base *)plVar2);
    *(long *)(this + 0x4cc0) = *(long *)(this + 0x4cc0) + 1;
  }
  return;
}


