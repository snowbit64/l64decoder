// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeAnimal
// Entry Point: 006fd4d4
// Size: 540 bytes
// Signature: undefined __thiscall removeAnimal(AnimalHusbandry * this, uint param_1)


/* AnimalHusbandry::removeAnimal(unsigned int) */

void __thiscall AnimalHusbandry::removeAnimal(AnimalHusbandry *this,uint param_1)

{
  long **pplVar1;
  uint uVar2;
  long **pplVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  long **pplVar8;
  uint *puVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  
  if (this[0x50] == (AnimalHusbandry)0x0) {
    return;
  }
  if (this[0x51] == (AnimalHusbandry)0x0) {
    uVar5 = *(uint *)(this + 0x60);
    if (uVar5 == 0) {
      return;
    }
    if (*(uint *)(this + 0x1f634) == param_1) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      puVar9 = (uint *)(this + 0x1f63c);
      do {
        if ((ulong)uVar5 - 1 == uVar6) {
          return;
        }
        uVar2 = *puVar9;
        uVar6 = uVar6 + 1;
        puVar9 = puVar9 + 2;
      } while (uVar2 != param_1);
      if (uVar5 <= uVar6) {
        return;
      }
    }
    uVar5 = uVar5 - 1;
    *(uint *)(this + 0x60) = uVar5;
    if (uVar5 == (uint)uVar6) {
      return;
    }
    *(undefined8 *)(this + (uVar6 & 0xffffffff) * 8 + 0x1f630) =
         *(undefined8 *)(this + (ulong)uVar5 * 8 + 0x1f630);
    return;
  }
  uVar5 = *(uint *)(this + 0x5c);
  if (uVar5 == 0) {
    return;
  }
  if (*(uint *)(*(long *)(this + 0x1f568) + 0x1a0) == param_1) {
    uVar5 = 0;
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    do {
      if ((ulong)uVar5 - 1 == uVar6) {
        return;
      }
      lVar11 = uVar6 * 8;
      uVar6 = uVar6 + 1;
    } while (*(uint *)(*(long *)(this + lVar11 + 0x1f570) + 0x1a0) != param_1);
    if (uVar5 <= uVar6) {
      return;
    }
    uVar5 = (uint)uVar6;
  }
  pplVar1 = (long **)(this + (uVar6 & 0xffffffff) * 8 + 0x1f568);
  plVar7 = *pplVar1;
  if ((plVar7[0xd4] != 0) && (DAT_01052b18 != (long *)0x0)) {
    uVar2 = *(uint *)(plVar7[0xd4] + 0x18);
    plVar12 = (long *)&DAT_01052b18;
    plVar10 = DAT_01052b18;
    do {
      bVar4 = *(uint *)((long)plVar10 + 0x1c) < uVar2;
      if (!bVar4) {
        plVar12 = plVar10;
      }
      plVar10 = (long *)plVar10[bVar4];
    } while (plVar10 != (long *)0x0);
    if (((long **)plVar12 != &DAT_01052b18) && (*(uint *)((long)plVar12 + 0x1c) <= uVar2)) {
      pplVar3 = (long **)plVar12[1];
      if ((long **)plVar12[1] == (long **)0x0) {
        plVar7 = plVar12 + 2;
        pplVar8 = (long **)*plVar7;
        if (*pplVar8 != plVar12) {
          do {
            lVar11 = *plVar7;
            plVar7 = (long *)(lVar11 + 0x10);
            pplVar8 = (long **)*plVar7;
          } while (*pplVar8 != (long *)lVar11);
        }
      }
      else {
        do {
          pplVar8 = pplVar3;
          pplVar3 = (long **)*pplVar8;
        } while ((long **)*pplVar8 != (long **)0x0);
      }
      if (s_animalCollisionMap == (long **)plVar12) {
        s_animalCollisionMap = pplVar8;
      }
      DAT_01052b20 = DAT_01052b20 + -1;
      std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                ((__tree_node_base *)DAT_01052b18,(__tree_node_base *)plVar12);
      operator_delete(plVar12);
      plVar7 = *pplVar1;
    }
    if (plVar7 == (long *)0x0) goto LAB_006fd6b8;
  }
  (**(code **)(*plVar7 + 8))(plVar7);
LAB_006fd6b8:
  uVar2 = *(int *)(this + 0x5c) - 1;
  *(uint *)(this + 0x5c) = uVar2;
  if (uVar2 != uVar5) {
    *pplVar1 = *(long **)(this + (ulong)uVar2 * 8 + 0x1f568);
  }
  return;
}


