// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadAllChildrenTransformGroupsRecursive
// Entry Point: 009ce188
// Size: 296 bytes
// Signature: undefined __thiscall loadAllChildrenTransformGroupsRecursive(LoadNodesHelper * this, TransformGroup * param_1)


/* ProceduralPlacementManager::LoadNodesHelper::loadAllChildrenTransformGroupsRecursive(TransformGroup*)
    */

void __thiscall
ProceduralPlacementManager::LoadNodesHelper::loadAllChildrenTransformGroupsRecursive
          (LoadNodesHelper *this,TransformGroup *param_1)

{
  long **pplVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long **pplVar7;
  long **pplVar8;
  long **pplVar9;
  
  lVar3 = *(long *)(param_1 + 0x28);
  uVar4 = *(long *)(param_1 + 0x30) - lVar3;
  if ((int)(uVar4 >> 3) == 0) {
    return;
  }
  uVar6 = 0;
  pplVar1 = (long **)(this + 0x28);
  do {
    plVar5 = *(long **)(lVar3 + uVar6 * 8);
    pplVar8 = (long **)*pplVar1;
    pplVar7 = pplVar1;
    pplVar9 = pplVar1;
    while (pplVar8 != (long **)0x0) {
      while (pplVar9 = pplVar8, plVar5 < pplVar9[4]) {
        pplVar7 = pplVar9;
        pplVar8 = (long **)*pplVar9;
        if ((long **)*pplVar9 == (long **)0x0) {
          plVar2 = *pplVar9;
          goto joined_r0x009ce258;
        }
      }
      if (plVar5 <= pplVar9[4]) break;
      pplVar7 = pplVar9 + 1;
      pplVar8 = (long **)*pplVar7;
    }
    plVar2 = *pplVar7;
joined_r0x009ce258:
    if (plVar2 == (long *)0x0) {
      plVar2 = (long *)operator_new(0x28);
      plVar2[4] = (long)plVar5;
      *plVar2 = 0;
      plVar2[1] = 0;
      plVar2[2] = (long)pplVar9;
      *pplVar7 = plVar2;
      if (**(long **)(this + 0x20) != 0) {
        *(long *)(this + 0x20) = **(long **)(this + 0x20);
        plVar2 = *pplVar7;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x28),(__tree_node_base *)plVar2);
      *(long *)(this + 0x30) = *(long *)(this + 0x30) + 1;
    }
    loadAllChildrenTransformGroupsRecursive(this,(TransformGroup *)plVar5);
    uVar6 = uVar6 + 1;
    if (uVar6 == (uVar4 >> 3 & 0xffffffff)) {
      return;
    }
    lVar3 = *(long *)(param_1 + 0x28);
  } while( true );
}


