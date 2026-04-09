// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: executeTask
// Entry Point: 00a21064
// Size: 1000 bytes
// Signature: undefined __thiscall executeTask(RenderQueueSubmitTask * this, uint param_1)


/* RenderQueue::RenderQueueSubmitTask::executeTask(unsigned int) */

void __thiscall
RenderQueue::RenderQueueSubmitTask::executeTask(RenderQueueSubmitTask *this,uint param_1)

{
  ITextureObject **ppIVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  bool bVar6;
  bool bVar7;
  long *plVar8;
  TempData *pTVar9;
  IStructBuffer *pIVar10;
  ScreenSpaceProcessor *this_00;
  undefined8 uVar11;
  ITextureObject **ppIVar12;
  int iVar13;
  bool bVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  ulong uVar19;
  long lVar20;
  long extraout_x17;
  long lVar21;
  RenderQueueItemAllocator aRStack_110 [88];
  long *local_b8;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  ppIVar1 = (ITextureObject **)(this + 0x48);
  plVar8 = (long *)RenderController::getSecondaryCommandBufferForThreadIx
                             (*(RenderController **)(this + 0x1a0),param_1);
  lVar21 = *(long *)(*(long *)(this + 0x40) + 0x28);
  pTVar9 = (TempData *)
           RenderController::getRenderQueueItemAllocatorTempDataForThreadIdx
                     (*(RenderController **)(this + 0x1a0),param_1);
  RenderQueueItemAllocator::RenderQueueItemAllocator(aRStack_110,pTVar9);
  std::__ndk1::vector<RenderQueueItem,std::__ndk1::allocator<RenderQueueItem>>::reserve
            ((vector<RenderQueueItem,std::__ndk1::allocator<RenderQueueItem>> *)local_b8,
             ((*(long **)(this + 0x28))[1] - **(long **)(this + 0x28) >> 3) * -0x5555555555555555);
  buildRenderQueue(*(RenderQueue **)(this + 0x40),*(uint *)(this + 0x30),aRStack_110,
                   (RenderTargetData *)ppIVar1,*(vector **)(this + 0x28),(ICommandBuffer *)plVar8,
                   param_1);
  uVar2 = *(uint *)(this + 0xf4);
  uVar15 = (ulong)uVar2;
  uVar3 = *(uint *)(this + 0x30);
  if (uVar2 == 0) {
    bVar6 = false;
    bVar14 = false;
    bVar7 = false;
    if (uVar3 < 2) goto LAB_00a211cc;
LAB_00a21154:
    bVar7 = false;
  }
  else {
    bVar6 = *(long *)(this + 0x90) != 0 && *(long *)(this + 0x68) != *(long *)(this + 0x90);
    if (uVar2 - 1 == 0) {
      uVar16 = 0;
LAB_00a2140c:
      lVar17 = uVar15 - uVar16;
      plVar18 = (long *)(this + uVar16 * 8 + 0x70);
      do {
        bVar14 = bVar6;
        if ((*plVar18 != 0) && (plVar18[-5] != *plVar18)) {
          bVar14 = true;
        }
        plVar18 = plVar18 + 1;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
    }
    else {
      uVar16 = uVar15 & 0xfffffffe;
      plVar18 = (long *)(this + 0x78);
      uVar19 = uVar16;
      lVar17 = extraout_x17;
      do {
        lVar20 = *plVar18;
        if (lVar20 != 0) {
          lVar17 = plVar18[-5];
        }
        plVar18 = plVar18 + 2;
        uVar19 = uVar19 - 2;
      } while (uVar19 != 0);
      if (uVar16 != uVar15) goto LAB_00a2140c;
      bVar14 = lVar17 != lVar20 && lVar20 != 0 || bVar6;
    }
    bVar6 = *(int *)(this + (ulong)(uVar2 - 1) * 4 + 0x98) == 1 || *(int *)(this + 0xa8) == 1;
    bVar7 = bVar14;
    if (1 < uVar3) goto LAB_00a21154;
LAB_00a211cc:
    bVar14 = bVar7;
    bVar7 = *(int *)(lVar21 + 0x550) != 0;
  }
  if ((!(bool)((*local_b8 != local_b8[1] || uVar3 == 5) | bVar6 | bVar14)) && (!bVar7))
  goto LAB_00a213dc;
  pIVar10 = (IStructBuffer *)
            expandInstances(*(RenderQueue **)(this + 0x40),aRStack_110,*(char **)(this + 0x38),
                            (RenderStats *)(this + 0x118),(ICommandBuffer *)plVar8,param_1);
  ppIVar12 = ppIVar1;
  beginRenderTarget(*(RenderQueue **)(this + 0x40),(ICommandBuffer *)plVar8,
                    (RenderTargetData *)ppIVar1,*(uint *)(lVar21 + 0x3e0),*(uint *)(lVar21 + 0x3e4),
                    *(uint *)(lVar21 + 0x3d8),*(uint *)(lVar21 + 0x3dc));
  if (bVar7) {
    lVar17 = *(long *)(this + 0x40);
    (**(code **)(*plVar8 + 0xd8))(plVar8,"renderZStencilRegion");
    (**(code **)(*plVar8 + 0xc0))(plVar8,*(undefined8 *)(*(long *)(lVar17 + 8) + 0xb8));
    (**(code **)(*plVar8 + 0xb8))(plVar8,*(undefined8 *)(*(long *)(lVar17 + 8) + 0xc0));
    (**(code **)(*plVar8 + 0xb0))(plVar8,*(undefined8 *)(*(long *)(lVar17 + 8) + 0xb0));
    (**(code **)(*plVar8 + 0x48))(plVar8,*(undefined8 *)(*(long *)(lVar17 + 8) + 0xd0));
    (**(code **)(*plVar8 + 0x50))
              (plVar8,lVar17 + 0x68,1,*(undefined8 *)(*(long *)(lVar17 + 8) + 200));
    (**(code **)(*plVar8 + 0x58))(plVar8,0);
    ppIVar12 = (ITextureObject **)0x0;
    uVar4 = *(undefined4 *)(*(long *)(lVar17 + 0x28) + 0x550);
    (**(code **)(*plVar8 + 0xe8))(plVar8,uVar4,0,0,0,uVar4);
    (**(code **)(*plVar8 + 0xe0))(plVar8);
  }
  if (*local_b8 != local_b8[1]) {
    renderRenderQueueItems
              (*(RenderQueue **)(this + 0x40),aRStack_110,(RenderTargetData *)ppIVar12,
               *(uint *)(this + 0x30),*(char **)(this + 0x38),(RenderStats *)(this + 0x118),
               (ICommandBuffer *)plVar8,pIVar10,param_1);
  }
  iVar13 = *(int *)(this + 0x30);
  if (iVar13 == 3) {
    if (*(int *)(this + 0x34) == 0) {
      this_00 = *(ScreenSpaceProcessor **)(*(RenderArgs **)(*(long *)(this + 0x40) + 0x28) + 0x560);
      if (this_00 != (ScreenSpaceProcessor *)0x0) {
        ScreenSpaceProcessor::processPostFxOpaque
                  (this_00,(ICommandBuffer *)plVar8,*(RenderArgs **)(*(long *)(this + 0x40) + 0x28))
        ;
        iVar13 = *(int *)(this + 0x30);
        goto LAB_00a21390;
      }
    }
  }
  else {
LAB_00a21390:
    if ((iVar13 == 5) && (*ppIVar1 != (ITextureObject *)0x0)) {
      FontOverlayRenderer::renderForRenderTexture
                (*(FontOverlayRenderer **)(*(long *)(*(long *)(this + 0x40) + 8) + 8),*ppIVar1,
                 (Matrix4x4 *)(lVar21 + 0xd0),(ICommandBuffer *)plVar8);
    }
  }
  (**(code **)(*plVar8 + 0x40))(plVar8);
  uVar11 = (**(code **)(*plVar8 + 0x20))(plVar8);
  *(undefined8 *)(this + 0x198) = uVar11;
LAB_00a213dc:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


