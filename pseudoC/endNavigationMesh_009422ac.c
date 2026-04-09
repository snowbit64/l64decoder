// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: endNavigationMesh
// Entry Point: 009422ac
// Size: 264 bytes
// Signature: undefined __cdecl endNavigationMesh(void * param_1, char * param_2)


/* I3DShapePoolFactory::endNavigationMesh(void*, char const*) */

void I3DShapePoolFactory::endNavigationMesh(void *param_1,char *param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long **pplVar5;
  long **pplVar6;
  long **pplVar7;
  
  lVar2 = *(long *)((long)param_1 + 0x270);
  if (*(long *)(lVar2 + 0x48) != 0) {
    FUN_00f276d0(1,*(long *)(lVar2 + 0x48) + 8);
    lVar2 = *(long *)((long)param_1 + 0x270);
    pplVar5 = (long **)((long)param_1 + 0x150);
    uVar1 = *(uint *)(lVar2 + 0x1c);
    pplVar6 = *(long ***)((long)param_1 + 0x150);
    pplVar7 = pplVar5;
    while (pplVar6 != (long **)0x0) {
      while (pplVar7 = pplVar6, uVar1 < *(uint *)(pplVar7 + 4)) {
        pplVar5 = pplVar7;
        pplVar6 = (long **)*pplVar7;
        if ((long **)*pplVar7 == (long **)0x0) {
          plVar4 = *pplVar7;
          goto joined_r0x00942334;
        }
      }
      if (uVar1 <= *(uint *)(pplVar7 + 4)) break;
      pplVar5 = pplVar7 + 1;
      pplVar6 = (long **)*pplVar5;
    }
    plVar4 = *pplVar5;
joined_r0x00942334:
    if (plVar4 == (long *)0x0) {
      lVar2 = *(long *)(lVar2 + 0x48);
      plVar4 = (long *)operator_new(0x30);
      plVar4[5] = lVar2;
      *plVar4 = 0;
      plVar4[1] = 0;
      plVar4[2] = (long)pplVar7;
      *pplVar5 = plVar4;
      plVar3 = *(long **)((long)param_1 + 0x148);
      *(uint *)(plVar4 + 4) = uVar1;
      if (*plVar3 != 0) {
        *(long *)((long)param_1 + 0x148) = *plVar3;
        plVar4 = *pplVar5;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)((long)param_1 + 0x150),(__tree_node_base *)plVar4);
      lVar2 = *(long *)((long)param_1 + 0x270);
      *(long *)((long)param_1 + 0x158) = *(long *)((long)param_1 + 0x158) + 1;
    }
  }
  *(undefined8 *)(lVar2 + 0x48) = 0;
  return;
}


