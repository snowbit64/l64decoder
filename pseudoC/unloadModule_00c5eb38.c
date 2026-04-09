// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unloadModule
// Entry Point: 00c5eb38
// Size: 220 bytes
// Signature: undefined __cdecl unloadModule(uint param_1)


/* LibraryUtil::unloadModule(unsigned int) */

void LibraryUtil::unloadModule(uint param_1)

{
  long **pplVar1;
  long *plVar2;
  long **pplVar3;
  long lVar4;
  long *plVar5;
  
  if (DAT_0211f548 != (long *)0x0) {
    plVar5 = (long *)&DAT_0211f548;
    plVar2 = DAT_0211f548;
    do {
      if (*(uint *)(plVar2 + 4) >= param_1) {
        plVar5 = plVar2;
      }
      plVar2 = (long *)plVar2[*(uint *)(plVar2 + 4) < param_1];
    } while (plVar2 != (long *)0x0);
    if (((long **)plVar5 != &DAT_0211f548) && (*(uint *)(plVar5 + 4) <= param_1)) {
      dlclose(plVar5[5]);
      pplVar1 = (long **)plVar5[1];
      if ((long **)plVar5[1] == (long **)0x0) {
        plVar2 = plVar5 + 2;
        pplVar3 = (long **)*plVar2;
        if (*pplVar3 != plVar5) {
          do {
            lVar4 = *plVar2;
            plVar2 = (long *)(lVar4 + 0x10);
            pplVar3 = (long **)*plVar2;
          } while (*pplVar3 != (long *)lVar4);
        }
      }
      else {
        do {
          pplVar3 = pplVar1;
          pplVar1 = (long **)*pplVar3;
        } while ((long **)*pplVar3 != (long **)0x0);
      }
      if (s_handleMap == (long **)plVar5) {
        s_handleMap = pplVar3;
      }
      DAT_0211f550 = DAT_0211f550 + -1;
      std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                ((__tree_node_base *)DAT_0211f548,(__tree_node_base *)plVar5);
      operator_delete(plVar5);
      return;
    }
  }
  return;
}


