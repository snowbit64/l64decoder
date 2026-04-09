// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: preRender
// Entry Point: 00922ae0
// Size: 484 bytes
// Signature: undefined __thiscall preRender(DestructionShape * this, RenderArgs * param_1)


/* DestructionShape::preRender(RenderArgs const*) const */

void __thiscall DestructionShape::preRender(DestructionShape *this,RenderArgs *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  DestructionShape **ppDVar5;
  DestructionShape **ppDVar6;
  DestructionShape *pDVar7;
  DeferredDebugRenderer *this_00;
  DestructionShape **ppDVar8;
  float afStack_9c [3];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (*(long *)(this + 0x290) != 0) {
    this_00 = *(DeferredDebugRenderer **)(*(long *)(param_1 + 0x3a0) + 0x80);
    uVar4 = DeferredDebugRenderer::isCategoryEnabled(this_00,0x40);
    if ((uVar4 & 1) != 0) {
      uStack_68 = 0x3f8000003f52d2d3;
      local_70 = 0x3e34b4b53d50d0d1;
      ppDVar8 = *(DestructionShape ***)(this + 0x260);
      while (ppDVar8 != (DestructionShape **)(this + 0x268)) {
        uVar4 = Bt2ScenegraphPhysicsContext::getLightJointPosition
                          ((uint)*(undefined8 *)(this + 0x290),
                           (float *)(ulong)*(uint *)(ppDVar8 + 4));
        if ((uVar4 & 1) != 0) {
          DeferredDebugRenderer::addPoint(this_00,(float *)&uStack_80,(float *)&local_70,0x40);
        }
        ppDVar5 = (DestructionShape **)ppDVar8[1];
        if ((DestructionShape **)ppDVar8[1] == (DestructionShape **)0x0) {
          ppDVar5 = ppDVar8 + 2;
          bVar3 = (DestructionShape **)*(DestructionShape **)*ppDVar5 != ppDVar8;
          ppDVar8 = (DestructionShape **)*ppDVar5;
          if (bVar3) {
            do {
              pDVar7 = *ppDVar5;
              ppDVar5 = (DestructionShape **)(pDVar7 + 0x10);
              ppDVar8 = (DestructionShape **)*ppDVar5;
            } while (*ppDVar8 != pDVar7);
          }
        }
        else {
          do {
            ppDVar8 = ppDVar5;
            ppDVar5 = (DestructionShape **)*ppDVar8;
          } while ((DestructionShape **)*ppDVar8 != (DestructionShape **)0x0);
        }
      }
      uStack_88 = 0x3f8000003da8a8a9;
      local_90 = 0x3e96969700000000;
      uStack_78 = 0x3f8000003d50d0d1;
      uStack_80 = 0x3ed4d4d53f52d2d3;
      if (*(DestructionShape ***)(this + 0x248) != (DestructionShape **)(this + 0x250)) {
        ppDVar8 = *(DestructionShape ***)(this + 0x248);
        do {
          uVar4 = Bt2ScenegraphPhysicsContext::getLightJointPosition
                            ((uint)*(undefined8 *)(this + 0x290),
                             (float *)(ulong)*(uint *)((long)ppDVar8 + 0x1c));
          if ((uVar4 & 1) != 0) {
            puVar1 = &local_90;
            if (*(int *)((long)ppDVar8 + 0x24) != 0) {
              puVar1 = &uStack_80;
            }
            DeferredDebugRenderer::addPoint(this_00,afStack_9c,(float *)puVar1,0x40);
          }
          ppDVar5 = (DestructionShape **)ppDVar8[1];
          if ((DestructionShape **)ppDVar8[1] == (DestructionShape **)0x0) {
            ppDVar5 = ppDVar8 + 2;
            ppDVar6 = (DestructionShape **)*ppDVar5;
            if ((DestructionShape **)*ppDVar6 != ppDVar8) {
              do {
                pDVar7 = *ppDVar5;
                ppDVar5 = (DestructionShape **)(pDVar7 + 0x10);
                ppDVar6 = (DestructionShape **)*ppDVar5;
              } while (*ppDVar6 != pDVar7);
            }
          }
          else {
            do {
              ppDVar6 = ppDVar5;
              ppDVar5 = (DestructionShape **)*ppDVar6;
            } while ((DestructionShape **)*ppDVar6 != (DestructionShape **)0x0);
          }
          ppDVar8 = ppDVar6;
        } while (ppDVar6 != (DestructionShape **)(this + 0x250));
      }
    }
  }
  GsShape::preRender((GsShape *)this,param_1);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


