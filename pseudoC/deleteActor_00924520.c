// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deleteActor
// Entry Point: 00924520
// Size: 268 bytes
// Signature: undefined __thiscall deleteActor(DestructionShape * this, uint param_1, bool param_2)


/* DestructionShape::deleteActor(unsigned int, bool) */

void __thiscall DestructionShape::deleteActor(DestructionShape *this,uint param_1,bool param_2)

{
  DestructionShape **ppDVar1;
  __tree_node_base *p_Var2;
  DestructionShape *pDVar3;
  long **pplVar4;
  DestructionShape *pDVar5;
  long **pplVar6;
  long *plVar7;
  DestructionShape *pDVar8;
  
  Bt2ScenegraphPhysicsContext::enqueueRemoveLightActor((uint)*(undefined8 *)(this + 0x290));
  if (!param_2) {
    return;
  }
  p_Var2 = *(__tree_node_base **)(this + 0x238);
  pDVar8 = this + 0x238;
  pDVar3 = pDVar8;
  pDVar5 = (DestructionShape *)p_Var2;
  if (p_Var2 != (__tree_node_base *)0x0) {
    do {
      if (*(uint *)(pDVar5 + 0x1c) >= param_1) {
        pDVar3 = pDVar5;
      }
      ppDVar1 = (DestructionShape **)(pDVar5 + (ulong)(*(uint *)(pDVar5 + 0x1c) < param_1) * 8);
      pDVar5 = *ppDVar1;
    } while (*ppDVar1 != (DestructionShape *)0x0);
    if ((pDVar3 != pDVar8) && (*(uint *)(pDVar3 + 0x1c) <= param_1)) {
      *(undefined4 *)(*(long *)(this + 0x228) + (ulong)*(uint *)(pDVar3 + 0x20) * 0x30 + 0x20) = 0;
      pDVar8 = pDVar3;
    }
  }
  pplVar6 = *(long ***)((__tree_node_base *)pDVar8 + 8);
  if (*(long ***)((__tree_node_base *)pDVar8 + 8) == (long **)0x0) {
    pplVar6 = (long **)((__tree_node_base *)pDVar8 + 0x10);
    pplVar4 = (long **)*pplVar6;
    if ((__tree_node_base *)*pplVar4 != (__tree_node_base *)pDVar8) {
      do {
        plVar7 = *pplVar6;
        pplVar6 = (long **)(plVar7 + 2);
        pplVar4 = (long **)*pplVar6;
      } while (*pplVar4 != plVar7);
    }
  }
  else {
    do {
      pplVar4 = pplVar6;
      pplVar6 = (long **)*pplVar4;
    } while (*pplVar4 != (long *)0x0);
  }
  if (*(__tree_node_base **)(this + 0x230) == (__tree_node_base *)pDVar8) {
    *(long ***)(this + 0x230) = pplVar4;
  }
  *(long *)(this + 0x240) = *(long *)(this + 0x240) + -1;
  std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
            (p_Var2,(__tree_node_base *)pDVar8);
  operator_delete(pDVar8);
  return;
}


