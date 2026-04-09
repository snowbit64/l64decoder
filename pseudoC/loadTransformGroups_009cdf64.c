// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadTransformGroups
// Entry Point: 009cdf64
// Size: 548 bytes
// Signature: undefined __thiscall loadTransformGroups(LoadNodesHelper * this, TransformGroup * param_1)


/* ProceduralPlacementManager::LoadNodesHelper::loadTransformGroups(TransformGroup*) */

void __thiscall
ProceduralPlacementManager::LoadNodesHelper::loadTransformGroups
          (LoadNodesHelper *this,TransformGroup *param_1)

{
  undefined (*pauVar1) [16];
  int *piVar2;
  int iVar3;
  undefined auVar4 [16];
  long *plVar5;
  ulong uVar6;
  int *piVar7;
  ulong uVar9;
  undefined (*pauVar10) [16];
  long lVar11;
  long **pplVar12;
  long **pplVar13;
  long **pplVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined auVar23 [16];
  undefined auVar24 [16];
  int *piVar8;
  
  if (param_1 == (TransformGroup *)0x0) {
    do {
      EngineManager::getInstance();
      param_1 = (TransformGroup *)Renderer::getRootNode();
    } while ((long *)param_1 == (long *)0x0);
  }
  piVar8 = *(int **)(this + 8);
  piVar2 = *(int **)(this + 0x10);
  if (piVar8 == piVar2) goto LAB_009ce130;
  iVar3 = *(int *)((long)param_1 + 0x18);
  uVar6 = (long)piVar2 + (-4 - (long)piVar8);
  if (uVar6 < 0x1c) {
    lVar11 = 0;
    piVar7 = piVar8;
LAB_009ce058:
    do {
      piVar8 = piVar7 + 1;
      if (*piVar7 == iVar3) {
        lVar11 = lVar11 + 1;
      }
      piVar7 = piVar8;
    } while (piVar8 != piVar2);
  }
  else {
    uVar6 = (uVar6 >> 2) + 1;
    uVar9 = uVar6 & 0x7ffffffffffffff8;
    lVar11 = 0;
    lVar16 = 0;
    lVar17 = 0;
    lVar18 = 0;
    piVar7 = piVar8 + uVar9;
    lVar19 = 0;
    lVar20 = 0;
    pauVar10 = (undefined (*) [16])(piVar8 + 4);
    lVar21 = 0;
    lVar22 = 0;
    uVar15 = uVar9;
    do {
      pauVar1 = pauVar10 + -1;
      auVar4 = *pauVar10;
      pauVar10 = pauVar10 + 2;
      uVar15 = uVar15 - 8;
      auVar23._4_4_ = iVar3;
      auVar23._0_4_ = iVar3;
      auVar23._8_4_ = iVar3;
      auVar23._12_4_ = iVar3;
      auVar23 = NEON_cmeq(*pauVar1,auVar23,4);
      auVar24._4_4_ = iVar3;
      auVar24._0_4_ = iVar3;
      auVar24._8_4_ = iVar3;
      auVar24._12_4_ = iVar3;
      auVar24 = NEON_cmeq(auVar4,auVar24,4);
      lVar17 = lVar17 + (ulong)(auVar23[8] & 1);
      lVar18 = lVar18 + (ulong)(auVar23[12] & 1);
      lVar11 = lVar11 + (ulong)(auVar23[0] & 1);
      lVar16 = lVar16 + (ulong)(auVar23[4] & 1);
      lVar21 = lVar21 + (ulong)(auVar24[8] & 1);
      lVar22 = lVar22 + (ulong)(auVar24[12] & 1);
      lVar19 = lVar19 + (ulong)(auVar24[0] & 1);
      lVar20 = lVar20 + (ulong)(auVar24[4] & 1);
    } while (uVar15 != 0);
    lVar11 = lVar19 + lVar11 + lVar21 + lVar17 + lVar20 + lVar16 + lVar22 + lVar18;
    if (uVar6 != uVar9) goto LAB_009ce058;
  }
  if (lVar11 != 0) {
    pplVar12 = (long **)(this + 0x28);
    pplVar13 = (long **)*pplVar12;
    pplVar14 = pplVar12;
    if (pplVar13 != (long **)0x0) {
      pplVar12 = (long **)(this + 0x28);
      do {
        while (pplVar14 = pplVar13, param_1 < pplVar14[4]) {
          pplVar12 = pplVar14;
          pplVar13 = (long **)*pplVar14;
          if ((long **)*pplVar14 == (long **)0x0) {
            plVar5 = *pplVar14;
            goto joined_r0x009ce0fc;
          }
        }
        if (param_1 <= pplVar14[4]) break;
        pplVar12 = pplVar14 + 1;
        pplVar13 = (long **)*pplVar12;
      } while ((long **)*pplVar12 != (long **)0x0);
    }
    plVar5 = *pplVar12;
joined_r0x009ce0fc:
    if (plVar5 == (long *)0x0) {
      plVar5 = (long *)operator_new(0x28);
      plVar5[4] = (long)param_1;
      *plVar5 = 0;
      plVar5[1] = 0;
      plVar5[2] = (long)pplVar14;
      *pplVar12 = plVar5;
      if (**(long **)(this + 0x20) != 0) {
        *(long *)(this + 0x20) = **(long **)(this + 0x20);
        plVar5 = *pplVar12;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x28),(__tree_node_base *)plVar5);
      *(long *)(this + 0x30) = *(long *)(this + 0x30) + 1;
    }
    if (*this != (LoadNodesHelper)0x0) {
      loadAllChildrenTransformGroupsRecursive(this,param_1);
    }
  }
LAB_009ce130:
  uVar6 = *(long *)((long)param_1 + 0x30) - (long)*(TransformGroup ***)((long)param_1 + 0x28);
  if ((int)(uVar6 >> 3) != 0) {
    uVar6 = uVar6 >> 3 & 0xffffffff;
    loadTransformGroups(this,**(TransformGroup ***)((long)param_1 + 0x28));
    if (uVar6 != 1) {
      uVar15 = 1;
      do {
        loadTransformGroups(this,*(TransformGroup **)(*(long *)((long)param_1 + 0x28) + uVar15 * 8))
        ;
        uVar15 = uVar15 + 1;
      } while (uVar6 != uVar15);
    }
  }
  return;
}


