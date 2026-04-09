// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addResourceLoader
// Entry Point: 00b2b5a4
// Size: 232 bytes
// Signature: undefined __thiscall addResourceLoader(ResourceManager * this, ResourceLoader * param_1)


/* ResourceManager::addResourceLoader(ResourceLoader*) */

void __thiscall ResourceManager::addResourceLoader(ResourceManager *this,ResourceLoader *param_1)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long **pplVar4;
  long **pplVar5;
  long **pplVar6;
  
  uVar1 = *(uint *)(param_1 + 8);
  pplVar4 = (long **)(this + 0x50);
  pplVar5 = (long **)*pplVar4;
  pplVar6 = pplVar4;
  if (pplVar5 != (long **)0x0) {
    pplVar4 = (long **)(this + 0x50);
    do {
      while (pplVar6 = pplVar5, uVar1 < *(uint *)(pplVar6 + 4)) {
        pplVar4 = pplVar6;
        pplVar5 = (long **)*pplVar6;
        if ((long **)*pplVar6 == (long **)0x0) {
          plVar3 = *pplVar6;
          goto joined_r0x00b2b658;
        }
      }
      if (uVar1 <= *(uint *)(pplVar6 + 4)) break;
      pplVar4 = pplVar6 + 1;
      pplVar5 = (long **)*pplVar4;
    } while ((long **)*pplVar4 != (long **)0x0);
  }
  plVar3 = *pplVar4;
joined_r0x00b2b658:
  if (plVar3 == (long *)0x0) {
    plVar3 = (long *)operator_new(0x30);
    plVar3[5] = (long)param_1;
    *plVar3 = 0;
    plVar3[1] = 0;
    plVar3[2] = (long)pplVar6;
    *pplVar4 = plVar3;
    plVar2 = *(long **)(this + 0x48);
    *(uint *)(plVar3 + 4) = uVar1;
    if (*plVar2 != 0) {
      *(long *)(this + 0x48) = *plVar2;
      plVar3 = *pplVar4;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x50),(__tree_node_base *)plVar3);
    *(long *)(this + 0x58) = *(long *)(this + 0x58) + 1;
  }
  return;
}


