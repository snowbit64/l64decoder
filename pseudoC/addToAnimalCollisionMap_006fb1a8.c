// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addToAnimalCollisionMap
// Entry Point: 006fb1a8
// Size: 252 bytes
// Signature: undefined __thiscall addToAnimalCollisionMap(AnimalHusbandry * this, uint param_1, uint param_2, uint param_3)


/* AnimalHusbandry::addToAnimalCollisionMap(unsigned int, unsigned int, unsigned int) */

void __thiscall
AnimalHusbandry::addToAnimalCollisionMap
          (AnimalHusbandry *this,uint param_1,uint param_2,uint param_3)

{
  long *plVar1;
  long **pplVar2;
  long *plVar3;
  long **pplVar4;
  long **pplVar5;
  
  pplVar4 = &DAT_01052b18;
  pplVar5 = pplVar4;
  if (DAT_01052b18 != (long *)0x0) {
    pplVar2 = (long **)DAT_01052b18;
    pplVar4 = &DAT_01052b18;
LAB_006fb1e0:
    do {
      pplVar5 = pplVar2;
      if (*(uint *)((long)pplVar5 + 0x1c) <= param_1) {
        if (*(uint *)((long)pplVar5 + 0x1c) < param_1) {
          pplVar4 = pplVar5 + 1;
          pplVar2 = (long **)*pplVar4;
          if (*pplVar4 != (long *)0x0) goto LAB_006fb1e0;
        }
        if (*pplVar4 != (long *)0x0) {
          return;
        }
        goto LAB_006fb23c;
      }
      pplVar2 = (long **)*pplVar5;
      pplVar4 = pplVar5;
    } while ((long **)*pplVar5 != (long **)0x0);
    if (*pplVar5 != (long *)0x0) {
      return;
    }
  }
LAB_006fb23c:
  plVar3 = (long *)operator_new(0x28);
  plVar3[4] = CONCAT44(param_3,param_2);
  *plVar3 = 0;
  plVar3[1] = 0;
  plVar3[2] = (long)pplVar5;
  *pplVar4 = plVar3;
  plVar1 = s_animalCollisionMap;
  *(uint *)((long)plVar3 + 0x1c) = param_1;
  if ((long *)*plVar1 != (long *)0x0) {
    plVar3 = *pplVar4;
    s_animalCollisionMap = (long *)*plVar1;
  }
  std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
            ((__tree_node_base *)DAT_01052b18,(__tree_node_base *)plVar3);
  DAT_01052b20 = DAT_01052b20 + 1;
  return;
}


