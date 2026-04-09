// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: mapTree
// Entry Point: 00a5c1fc
// Size: 328 bytes
// Signature: undefined __cdecl mapTree(TransformGroup * param_1, TransformGroup * param_2, map * param_3)


/* ScenegraphUtil::mapTree(TransformGroup*, TransformGroup*, std::__ndk1::map<TransformGroup*,
   TransformGroup*, std::__ndk1::less<TransformGroup*>,
   std::__ndk1::allocator<std::__ndk1::pair<TransformGroup* const, TransformGroup*> > >&) */

void ScenegraphUtil::mapTree(TransformGroup *param_1,TransformGroup *param_2,map *param_3)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  long **pplVar4;
  long **pplVar5;
  long **pplVar6;
  ulong uVar7;
  
  pplVar4 = (long **)(param_3 + 8);
  pplVar5 = (long **)*pplVar4;
  pplVar6 = pplVar4;
  if (pplVar5 != (long **)0x0) {
    pplVar4 = (long **)(param_3 + 8);
    do {
      while (pplVar6 = pplVar5, param_1 < pplVar6[4]) {
        pplVar4 = pplVar6;
        pplVar5 = (long **)*pplVar6;
        if ((long **)*pplVar6 == (long **)0x0) {
          plVar1 = *pplVar6;
          goto joined_r0x00a5c2a8;
        }
      }
      if (param_1 <= pplVar6[4]) break;
      pplVar4 = pplVar6 + 1;
      pplVar5 = (long **)*pplVar4;
    } while ((long **)*pplVar4 != (long **)0x0);
  }
  plVar1 = *pplVar4;
joined_r0x00a5c2a8:
  if (plVar1 == (long *)0x0) {
    plVar1 = (long *)operator_new(0x30);
    plVar1[4] = (long)param_1;
    plVar1[5] = (long)param_2;
    *plVar1 = 0;
    plVar1[1] = 0;
    plVar1[2] = (long)pplVar6;
    *pplVar4 = plVar1;
    if (**(long **)param_3 != 0) {
      *(long *)param_3 = **(long **)param_3;
      plVar1 = *pplVar4;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(param_3 + 8),(__tree_node_base *)plVar1);
    *(long *)(param_3 + 0x10) = *(long *)(param_3 + 0x10) + 1;
  }
  uVar2 = (uint)((ulong)(*(long *)(param_1 + 0x30) - (long)*(TransformGroup ***)(param_1 + 0x28)) >>
                3);
  uVar3 = (uint)((ulong)(*(long *)(param_2 + 0x30) - (long)*(TransformGroup ***)(param_2 + 0x28)) >>
                3);
  if (uVar2 <= uVar3) {
    uVar3 = uVar2;
  }
  if ((uVar3 != 0) &&
     (mapTree(**(TransformGroup ***)(param_1 + 0x28),**(TransformGroup ***)(param_2 + 0x28),param_3)
     , uVar3 != 1)) {
    uVar7 = 1;
    do {
      mapTree(*(TransformGroup **)(*(long *)(param_1 + 0x28) + uVar7 * 8),
              *(TransformGroup **)(*(long *)(param_2 + 0x28) + uVar7 * 8),param_3);
      uVar7 = uVar7 + 1;
    } while (uVar3 != uVar7);
  }
  return;
}


