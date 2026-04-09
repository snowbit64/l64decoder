// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setSplitShapesFileIdMapping
// Entry Point: 0098256c
// Size: 388 bytes
// Signature: undefined __thiscall setSplitShapesFileIdMapping(MeshSplitManager * this, uint param_1, uint param_2)


/* MeshSplitManager::setSplitShapesFileIdMapping(unsigned int, unsigned int) */

void __thiscall
MeshSplitManager::setSplitShapesFileIdMapping(MeshSplitManager *this,uint param_1,uint param_2)

{
  long *plVar1;
  long *plVar2;
  long **pplVar3;
  long **pplVar4;
  long **pplVar5;
  
  pplVar3 = (long **)(this + 0x128);
  pplVar4 = *(long ***)(this + 0x128);
  pplVar5 = pplVar3;
  while (pplVar4 != (long **)0x0) {
    while (pplVar5 = pplVar4, param_2 < *(uint *)((long)pplVar5 + 0x1c)) {
      pplVar3 = pplVar5;
      pplVar4 = (long **)*pplVar5;
      if ((long **)*pplVar5 == (long **)0x0) {
        plVar2 = *pplVar5;
        goto joined_r0x00982614;
      }
    }
    if (param_2 <= *(uint *)((long)pplVar5 + 0x1c)) break;
    pplVar3 = pplVar5 + 1;
    pplVar4 = (long **)*pplVar3;
  }
  plVar2 = *pplVar3;
joined_r0x00982614:
  if (plVar2 == (long *)0x0) {
    plVar2 = (long *)operator_new(0x28);
    *plVar2 = 0;
    plVar2[1] = 0;
    plVar2[2] = (long)pplVar5;
    *pplVar3 = plVar2;
    plVar1 = *(long **)(this + 0x120);
    *(uint *)((long)plVar2 + 0x1c) = param_2;
    *(uint *)(plVar2 + 4) = param_1;
    if (*plVar1 != 0) {
      *(long *)(this + 0x120) = *plVar1;
      plVar2 = *pplVar3;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x128),(__tree_node_base *)plVar2);
    *(long *)(this + 0x130) = *(long *)(this + 0x130) + 1;
  }
  pplVar3 = (long **)(this + 0x140);
  pplVar4 = *(long ***)(this + 0x140);
  pplVar5 = pplVar3;
  while (pplVar4 != (long **)0x0) {
    while (pplVar5 = pplVar4, param_1 < *(uint *)((long)pplVar5 + 0x1c)) {
      pplVar3 = pplVar5;
      pplVar4 = (long **)*pplVar5;
      if ((long **)*pplVar5 == (long **)0x0) {
        plVar2 = *pplVar5;
        goto joined_r0x00982680;
      }
    }
    if (param_1 <= *(uint *)((long)pplVar5 + 0x1c)) break;
    pplVar3 = pplVar5 + 1;
    pplVar4 = (long **)*pplVar3;
  }
  plVar2 = *pplVar3;
joined_r0x00982680:
  if (plVar2 == (long *)0x0) {
    plVar2 = (long *)operator_new(0x28);
    *plVar2 = 0;
    plVar2[1] = 0;
    plVar2[2] = (long)pplVar5;
    *pplVar3 = plVar2;
    plVar1 = *(long **)(this + 0x138);
    *(uint *)((long)plVar2 + 0x1c) = param_1;
    *(uint *)(plVar2 + 4) = param_2;
    if (*plVar1 != 0) {
      *(long *)(this + 0x138) = *plVar1;
      plVar2 = *pplVar3;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x140),(__tree_node_base *)plVar2);
    *(long *)(this + 0x148) = *(long *)(this + 0x148) + 1;
  }
  return;
}


