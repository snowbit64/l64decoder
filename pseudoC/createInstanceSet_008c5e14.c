// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createInstanceSet
// Entry Point: 008c5e14
// Size: 292 bytes
// Signature: undefined __thiscall createInstanceSet(InstancedGeometryManager * this, MeshData * param_1, uint param_2, uint param_3, RESOURCE_USAGE param_4, bool param_5)


/* InstancedGeometryManager::createInstanceSet(InstancedGeometryManager::MeshData*, unsigned int,
   unsigned int, IResource::RESOURCE_USAGE, bool) */

MeshData ** __thiscall
InstancedGeometryManager::createInstanceSet
          (InstancedGeometryManager *this,MeshData *param_1,uint param_2,uint param_3,
          RESOURCE_USAGE param_4,bool param_5)

{
  MeshData **ppMVar1;
  long *plVar2;
  long **pplVar3;
  long **pplVar4;
  long **pplVar5;
  
  ppMVar1 = (MeshData **)operator_new(0x30);
  *(RESOURCE_USAGE *)((long)ppMVar1 + 0x14) = param_4;
  *ppMVar1 = param_1;
  pplVar4 = (long **)(this + 0x28);
  pplVar3 = (long **)*pplVar4;
  *(uint *)(ppMVar1 + 1) = param_2;
  *(uint *)((long)ppMVar1 + 0xc) = param_3;
  ppMVar1[3] = (MeshData *)0x0;
  ppMVar1[5] = (MeshData *)0x0;
  *(undefined4 *)(ppMVar1 + 4) = 0;
  *(undefined *)((long)ppMVar1 + 0x24) = 0;
  *(bool *)(ppMVar1 + 2) = param_5;
  pplVar5 = pplVar4;
  if (pplVar3 != (long **)0x0) {
    pplVar5 = (long **)(this + 0x28);
    do {
      while (pplVar4 = pplVar3, ppMVar1 < pplVar4[4]) {
        pplVar3 = (long **)*pplVar4;
        pplVar5 = pplVar4;
        if ((long **)*pplVar4 == (long **)0x0) {
          plVar2 = *pplVar4;
          goto joined_r0x008c5efc;
        }
      }
      if (ppMVar1 <= pplVar4[4]) break;
      pplVar5 = pplVar4 + 1;
      pplVar3 = (long **)*pplVar5;
    } while ((long **)*pplVar5 != (long **)0x0);
  }
  plVar2 = *pplVar5;
joined_r0x008c5efc:
  if (plVar2 == (long *)0x0) {
    plVar2 = (long *)operator_new(0x28);
    plVar2[4] = (long)ppMVar1;
    *plVar2 = 0;
    plVar2[1] = 0;
    plVar2[2] = (long)pplVar4;
    *pplVar5 = plVar2;
    if (**(long **)(this + 0x20) != 0) {
      *(long *)(this + 0x20) = **(long **)(this + 0x20);
      plVar2 = *pplVar5;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x28),(__tree_node_base *)plVar2);
    *(long *)(this + 0x30) = *(long *)(this + 0x30) + 1;
  }
  return ppMVar1;
}


