// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: registerSoftInstances
// Entry Point: 008c66d0
// Size: 536 bytes
// Signature: undefined __thiscall registerSoftInstances(InstancedGeometryManager * this, TransformGroup * param_1, uint param_2, uint param_3)


/* InstancedGeometryManager::registerSoftInstances(TransformGroup*, unsigned int, unsigned int) */

void __thiscall
InstancedGeometryManager::registerSoftInstances
          (InstancedGeometryManager *this,TransformGroup *param_1,uint param_2,uint param_3)

{
  long *plVar1;
  long **pplVar2;
  long **pplVar3;
  long **pplVar4;
  long *plVar5;
  long **pplVar6;
  long **pplVar7;
  long **pplVar8;
  undefined8 uVar9;
  
  pplVar6 = (long **)(this + 0x48);
  pplVar2 = (long **)*pplVar6;
  pplVar3 = pplVar6;
  pplVar4 = pplVar2;
  pplVar7 = pplVar6;
  if (pplVar2 == (long **)0x0) {
LAB_008c6780:
    plVar5 = *pplVar7;
    pplVar8 = pplVar7;
  }
  else {
    do {
      if (pplVar4[4] >= param_1) {
        pplVar3 = pplVar4;
      }
      pplVar7 = pplVar4 + (pplVar4[4] < param_1);
      pplVar4 = (long **)*pplVar7;
    } while ((long **)*pplVar7 != (long **)0x0);
    if ((pplVar3 != pplVar6) && (pplVar3[4] <= param_1)) {
      plVar5 = pplVar3[5];
      uVar9 = *(undefined8 *)(this + 0x58);
      *(uint *)(pplVar3 + 5) = param_2;
      *(uint *)((long)pplVar3 + 0x2c) = param_3;
      uVar9 = CONCAT44((int)((ulong)uVar9 >> 0x20) - (int)((ulong)plVar5 >> 0x20),
                       (int)uVar9 - (int)plVar5);
      goto LAB_008c68c0;
    }
    pplVar7 = (long **)(this + 0x48);
    pplVar4 = pplVar2;
    do {
      while (pplVar8 = pplVar4, pplVar3 = pplVar8, pplVar8[4] <= param_1) {
        if (param_1 <= pplVar8[4]) goto LAB_008c6780;
        pplVar7 = pplVar8 + 1;
        pplVar4 = (long **)*pplVar7;
        if ((long **)*pplVar7 == (long **)0x0) goto LAB_008c6780;
      }
      pplVar7 = pplVar8;
      pplVar4 = (long **)*pplVar8;
    } while ((long **)*pplVar8 != (long **)0x0);
    plVar5 = *pplVar8;
  }
  if (plVar5 == (long *)0x0) {
    plVar1 = (long *)operator_new(0x30);
    plVar1[4] = (long)param_1;
    plVar1[5] = 0;
    *plVar1 = 0;
    plVar1[1] = 0;
    plVar1[2] = (long)pplVar3;
    *pplVar8 = plVar1;
    plVar5 = plVar1;
    if (**(long **)(this + 0x40) != 0) {
      *(long *)(this + 0x40) = **(long **)(this + 0x40);
      plVar5 = *pplVar8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x48),(__tree_node_base *)plVar5);
    pplVar2 = *(long ***)(this + 0x48);
    *(long *)(this + 0x50) = *(long *)(this + 0x50) + 1;
    *(uint *)(plVar1 + 5) = param_2;
  }
  else {
    *(uint *)(plVar5 + 5) = param_2;
  }
  if (pplVar2 == (long **)0x0) {
    plVar5 = *pplVar6;
    pplVar3 = pplVar6;
  }
  else {
    pplVar3 = (long **)(this + 0x48);
LAB_008c679c:
    do {
      pplVar6 = pplVar2;
      if (pplVar6[4] <= param_1) {
        if (pplVar6[4] < param_1) {
          pplVar3 = pplVar6 + 1;
          pplVar2 = (long **)*pplVar3;
          if ((long **)*pplVar3 != (long **)0x0) goto LAB_008c679c;
        }
        plVar5 = *pplVar3;
        goto joined_r0x008c67f8;
      }
      pplVar2 = (long **)*pplVar6;
      pplVar3 = pplVar6;
    } while ((long **)*pplVar6 != (long **)0x0);
    plVar5 = *pplVar6;
  }
joined_r0x008c67f8:
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)operator_new(0x30);
    plVar5[4] = (long)param_1;
    plVar5[5] = 0;
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = (long)pplVar6;
    *pplVar3 = plVar5;
    plVar1 = plVar5;
    if (**(long **)(this + 0x40) != 0) {
      *(long *)(this + 0x40) = **(long **)(this + 0x40);
      plVar1 = *pplVar3;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x48),(__tree_node_base *)plVar1);
    *(long *)(this + 0x50) = *(long *)(this + 0x50) + 1;
  }
  *(uint *)((long)plVar5 + 0x2c) = param_3;
  uVar9 = *(undefined8 *)(this + 0x58);
LAB_008c68c0:
  *(ulong *)(this + 0x58) = CONCAT44((int)((ulong)uVar9 >> 0x20) + param_3,(int)uVar9 + param_2);
  return;
}


