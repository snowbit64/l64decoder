// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroyInstanceSet
// Entry Point: 008c5f38
// Size: 332 bytes
// Signature: undefined __thiscall destroyInstanceSet(InstancedGeometryManager * this, InstanceData * param_1)


/* InstancedGeometryManager::destroyInstanceSet(InstancedGeometryManager::InstanceData*) */

void __thiscall
InstancedGeometryManager::destroyInstanceSet(InstancedGeometryManager *this,InstanceData *param_1)

{
  InstanceData IVar1;
  InstanceData *pIVar2;
  __tree_node_base **pp_Var3;
  __tree_node_base *p_Var4;
  __tree_node_base **pp_Var5;
  __tree_node_base **pp_Var6;
  InstanceData **ppIVar7;
  InstanceData *pIVar8;
  
  pp_Var6 = (__tree_node_base **)(this + 0x28);
  p_Var4 = *pp_Var6;
  pp_Var5 = pp_Var6;
  if (p_Var4 != (__tree_node_base *)0x0) {
    do {
      if (*(InstanceData **)(p_Var4 + 0x20) >= param_1) {
        pp_Var5 = (__tree_node_base **)p_Var4;
      }
      p_Var4 = *(__tree_node_base **)
                (p_Var4 + (ulong)(*(InstanceData **)(p_Var4 + 0x20) < param_1) * 8);
    } while (p_Var4 != (__tree_node_base *)0x0);
    if (pp_Var5 != pp_Var6) {
      ppIVar7 = (InstanceData **)(pp_Var5 + 4);
      pIVar8 = *ppIVar7;
      if (pIVar8 <= param_1) {
        IVar1 = pIVar8[0x10];
        pp_Var6 = pp_Var5;
        goto joined_r0x008c5fc0;
      }
    }
  }
  ppIVar7 = (InstanceData **)(this + 0x48);
  pIVar8 = *ppIVar7;
  IVar1 = pIVar8[0x10];
joined_r0x008c5fc0:
  if (IVar1 == (InstanceData)0x0) {
    if (*(int *)(pIVar8 + 0x14) == 4) {
      VertexBufferPool::releaseVertexBuffer
                (*(VertexBufferPool **)(this + 0x38),*(IVertexBuffer **)(pIVar8 + 0x18));
    }
    else if (*(long **)(pIVar8 + 0x18) != (long *)0x0) {
      (**(code **)(**(long **)(pIVar8 + 0x18) + 8))();
    }
    *(undefined8 *)(pIVar8 + 0x18) = 0;
  }
  else {
    if (*(long **)(pIVar8 + 0x28) != (long *)0x0) {
      (**(code **)(**(long **)(pIVar8 + 0x28) + 8))();
    }
    *(undefined8 *)(pIVar8 + 0x28) = 0;
  }
  pIVar2 = *ppIVar7;
  *(undefined4 *)(pIVar8 + 0x20) = 0;
  if (pIVar2 != (InstanceData *)0x0) {
    operator_delete(pIVar2);
  }
  pp_Var5 = (__tree_node_base **)pp_Var6[1];
  if ((__tree_node_base **)pp_Var6[1] == (__tree_node_base **)0x0) {
    pp_Var5 = pp_Var6 + 2;
    pp_Var3 = (__tree_node_base **)*pp_Var5;
    if ((__tree_node_base **)*pp_Var3 != pp_Var6) {
      do {
        p_Var4 = *pp_Var5;
        pp_Var5 = (__tree_node_base **)(p_Var4 + 0x10);
        pp_Var3 = (__tree_node_base **)*pp_Var5;
      } while (*pp_Var3 != p_Var4);
    }
  }
  else {
    do {
      pp_Var3 = pp_Var5;
      pp_Var5 = (__tree_node_base **)*pp_Var3;
    } while ((__tree_node_base **)*pp_Var3 != (__tree_node_base **)0x0);
  }
  if ((__tree_node_base **)*(__tree_node_base **)(this + 0x20) == pp_Var6) {
    *(__tree_node_base ***)(this + 0x20) = pp_Var3;
  }
  *(long *)(this + 0x30) = *(long *)(this + 0x30) + -1;
  std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
            (*(__tree_node_base **)(this + 0x28),(__tree_node_base *)pp_Var6);
  operator_delete(pp_Var6);
  return;
}


