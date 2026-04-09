// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeFromAnimalCollisionMap
// Entry Point: 006fb2a4
// Size: 216 bytes
// Signature: undefined __thiscall removeFromAnimalCollisionMap(AnimalHusbandry * this, uint param_1)


/* AnimalHusbandry::removeFromAnimalCollisionMap(unsigned int) */

void __thiscall AnimalHusbandry::removeFromAnimalCollisionMap(AnimalHusbandry *this,uint param_1)

{
  long **pplVar1;
  bool bVar2;
  long *plVar3;
  long **pplVar4;
  long lVar5;
  long *plVar6;
  
  if (DAT_01052b18 != (long *)0x0) {
    plVar6 = (long *)&DAT_01052b18;
    plVar3 = DAT_01052b18;
    do {
      bVar2 = *(uint *)((long)plVar3 + 0x1c) < param_1;
      if (!bVar2) {
        plVar6 = plVar3;
      }
      plVar3 = (long *)plVar3[bVar2];
    } while (plVar3 != (long *)0x0);
    if (((long **)plVar6 != &DAT_01052b18) && (*(uint *)((long)plVar6 + 0x1c) <= param_1)) {
      pplVar1 = (long **)plVar6[1];
      if ((long **)plVar6[1] == (long **)0x0) {
        plVar3 = plVar6 + 2;
        pplVar4 = (long **)*plVar3;
        if (*pplVar4 != plVar6) {
          do {
            lVar5 = *plVar3;
            plVar3 = (long *)(lVar5 + 0x10);
            pplVar4 = (long **)*plVar3;
          } while (*pplVar4 != (long *)lVar5);
        }
      }
      else {
        do {
          pplVar4 = pplVar1;
          pplVar1 = (long **)*pplVar4;
        } while ((long **)*pplVar4 != (long **)0x0);
      }
      if (s_animalCollisionMap == (long **)plVar6) {
        s_animalCollisionMap = pplVar4;
      }
      DAT_01052b20 = DAT_01052b20 + -1;
      std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                ((__tree_node_base *)DAT_01052b18,(__tree_node_base *)plVar6);
      operator_delete(plVar6);
      return;
    }
  }
  return;
}


