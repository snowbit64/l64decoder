// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: collectDecals
// Entry Point: 00a19494
// Size: 516 bytes
// Signature: undefined __thiscall collectDecals(RenderList * this, RenderStats * param_1)


/* RenderList::collectDecals(RenderStats&) */

void __thiscall RenderList::collectDecals(RenderList *this,RenderStats *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  uint uVar5;
  CullingEntity **ppCVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  TopDownCullingBody *pTVar12;
  ulong uVar13;
  ulong local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  pTVar12 = *(TopDownCullingBody **)(*(long *)(this + 0x28) + 0x3f0);
  uVar5 = DecalCullingStructure::getEntities
                    ((DecalCullingStructure *)(CullingManager::s_cullingManagerInstance + 0xd8),
                     pTVar12,*(CullingEntity ***)(this + 0x2c0),*(uint *)(this + 0x2b8));
  uVar7 = *(uint *)(this + 0x2b8);
  *(uint *)(this + 700) = uVar5;
  if (uVar7 < uVar5) {
    uVar7 = uVar5 + 0x3ff & 0xfffffc00;
    *(uint *)(this + 0x2b8) = uVar7;
    if (*(void **)(this + 0x2c0) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x2c0));
      uVar7 = *(uint *)(this + 0x2b8);
    }
    ppCVar6 = (CullingEntity **)operator_new__((ulong)uVar7 << 3);
    *(CullingEntity ***)(this + 0x2c0) = ppCVar6;
    uVar5 = DecalCullingStructure::getEntities
                      ((DecalCullingStructure *)(CullingManager::s_cullingManagerInstance + 0xd8),
                       pTVar12,ppCVar6,uVar7);
    uVar7 = *(uint *)(this + 0x2b8);
  }
  if (uVar5 <= uVar7) {
    uVar7 = uVar5;
  }
  *(uint *)(this + 700) = uVar7;
  if (uVar7 == 0) {
    uVar5 = 0;
  }
  else {
    uVar13 = 0;
    uVar5 = 0;
    do {
      lVar9 = *(long *)(this + 0x28);
      lVar8 = *(long *)(*(long *)(this + 0x2c0) + uVar13 * 8);
      uVar2 = 0;
      if (lVar8 != 0) {
        uVar2 = lVar8 - 0x16c;
      }
      if ((*(uint *)(lVar9 + 0x3ac) & *(uint *)(uVar2 + 0x120)) != 0) {
        if ((*(uint *)(lVar9 + 0x3a8) >> 3 & 1) == 0) {
          uVar1 = *(uint *)(uVar2 + 400) >> 7;
        }
        else {
          uVar1 = *(uint *)(uVar2 + 400) >> 8;
        }
        if (((uVar1 & 1) != 0) &&
           (((*(byte *)(uVar2 + 0x42) & 1) == 0 || ((*(uint *)(lVar9 + 0x3a8) >> 1 & 1) != 0)))) {
          if ((*(long *)(lVar9 + 0x3d8) != 0) && (lVar11 = *(long *)(lVar9 + 0x3d0), lVar11 != 0)) {
            lVar10 = lVar9 + 0x3d0;
            do {
              bVar4 = *(ulong *)(lVar11 + 0x20) < uVar2;
              if (!bVar4) {
                lVar10 = lVar11;
              }
              lVar11 = *(long *)(lVar11 + (ulong)bVar4 * 8);
            } while (lVar11 != 0);
            if ((lVar10 != lVar9 + 0x3d0) && (*(ulong *)(lVar10 + 0x20) <= uVar2))
            goto LAB_00a1957c;
          }
          if (uVar13 != uVar5) {
            *(long *)(*(long *)(this + 0x2c0) + (ulong)uVar5 * 8) = lVar8;
          }
          uStack_68 = 0;
          uVar5 = uVar5 + 1;
          local_60 = 0x3f800000;
          local_70 = uVar2;
          FUN_00a19044(this + 0x58,&local_70);
          uVar7 = *(uint *)(this + 700);
        }
      }
LAB_00a1957c:
      uVar13 = uVar13 + 1;
    } while (uVar13 < uVar7);
  }
  *(uint *)(this + 700) = uVar5;
  if (*(ulong *)(*(long *)(this + 0x28) + 0x3c0) != 0) {
    uStack_68 = 0;
    local_60 = 0x3f800000;
    local_70 = *(ulong *)(*(long *)(this + 0x28) + 0x3c0);
    FUN_00a19044(this + 0x58,&local_70);
    uVar5 = *(uint *)(this + 700);
  }
  *(uint *)param_1 = *(int *)param_1 + uVar5;
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


