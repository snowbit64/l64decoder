// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: executeRender
// Entry Point: 00a22b88
// Size: 1080 bytes
// Signature: undefined __thiscall executeRender(RenderQueue * this, SubmitSection * param_1, RenderStats * param_2, bool param_3)


/* RenderQueue::executeRender(RenderQueue::SubmitSection const&, RenderStats&, bool) */

void __thiscall
RenderQueue::executeRender
          (RenderQueue *this,SubmitSection *param_1,RenderStats *param_2,bool param_3)

{
  ITextureObject **ppIVar1;
  SubmitSection *pSVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  bool bVar6;
  bool bVar7;
  long *plVar8;
  TempData *pTVar9;
  long lVar10;
  IStructBuffer *pIVar11;
  ScreenSpaceProcessor *this_00;
  long extraout_x1;
  ITextureObject **ppIVar12;
  long lVar13;
  bool bVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  ulong uVar19;
  ITextureObject *apIStack_118 [11];
  long *local_c0;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  ppIVar1 = (ITextureObject **)(param_1 + 0x18);
  plVar8 = (long *)(**(code **)(***(long ***)(this + 8) + 0x138))();
  pTVar9 = (TempData *)
           RenderController::getRenderQueueItemAllocatorTempDataForThreadIdx
                     (*(RenderController **)this,0xffffffff);
  RenderQueueItemAllocator::RenderQueueItemAllocator
            ((RenderQueueItemAllocator *)apIStack_118,pTVar9);
  std::__ndk1::vector<RenderQueueItem,std::__ndk1::allocator<RenderQueueItem>>::reserve
            ((vector<RenderQueueItem,std::__ndk1::allocator<RenderQueueItem>> *)local_c0,
             ((*(long **)(param_1 + 8))[1] - **(long **)(param_1 + 8) >> 3) * -0x5555555555555555);
  ppIVar12 = apIStack_118;
  buildRenderQueue(this,*(uint *)(param_1 + 0x10),(RenderQueueItemAllocator *)ppIVar12,
                   (RenderTargetData *)ppIVar1,*(vector **)(param_1 + 8),(ICommandBuffer *)plVar8,
                   0xffffffff);
  uVar3 = *(uint *)(param_1 + 0x10);
  lVar13 = *(long *)(param_1 + 0x18);
  uVar4 = *(uint *)(param_1 + 0xc4);
  uVar15 = (ulong)uVar4;
  if (uVar4 == 0) {
    bVar6 = false;
    bVar14 = false;
  }
  else {
    bVar6 = *(long *)(param_1 + 0x60) != 0 && *(long *)(param_1 + 0x38) != *(long *)(param_1 + 0x60)
    ;
    if (uVar4 - 1 == 0) {
      uVar16 = 0;
LAB_00a22d8c:
      lVar17 = uVar15 - uVar16;
      plVar18 = (long *)(param_1 + uVar16 * 8 + 0x40);
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
      plVar18 = (long *)(param_1 + 0x48);
      lVar17 = extraout_x1;
      uVar19 = uVar16;
      do {
        lVar10 = *plVar18;
        if (lVar10 != 0) {
          lVar17 = plVar18[-5];
        }
        plVar18 = plVar18 + 2;
        uVar19 = uVar19 - 2;
      } while (uVar19 != 0);
      if (uVar16 != uVar15) goto LAB_00a22d8c;
      bVar14 = lVar17 != lVar10 && lVar10 != 0 || bVar6;
    }
    bVar6 = *(int *)(param_1 + (ulong)(uVar4 - 1) * 4 + 0x68) == 1 || *(int *)(param_1 + 0x78) == 1;
  }
  if (uVar3 < 2) {
    bVar7 = *(int *)(*(long *)(this + 0x28) + 0x550) != 0;
  }
  else {
    bVar7 = false;
  }
  if (((!(bool)((*local_c0 != local_c0[1] || uVar3 == 5 && lVar13 != 0) | bVar6 | bVar14)) &&
      (!bVar7)) && (!param_3)) goto LAB_00a22f8c;
  if (*local_c0 == local_c0[1]) {
    pIVar11 = (IStructBuffer *)0x0;
    if (param_1[0x14] == (SubmitSection)0x0) goto LAB_00a22dd4;
LAB_00a22dd8:
    lVar17 = *(long *)(this + 0x28);
    ppIVar12 = ppIVar1;
    beginRenderTarget(this,(ICommandBuffer *)plVar8,(RenderTargetData *)ppIVar1,
                      *(uint *)(lVar17 + 0x3e0),*(uint *)(lVar17 + 0x3e4),*(uint *)(lVar17 + 0x3d8),
                      *(uint *)(lVar17 + 0x3dc));
  }
  else {
    ppIVar12 = (ITextureObject **)(param_1 + 0xf9);
    if (((byte)param_1[0xf8] & 1) != 0) {
      ppIVar12 = *(ITextureObject ***)(param_1 + 0x108);
    }
    pIVar11 = (IStructBuffer *)
              expandInstances(this,(RenderQueueItemAllocator *)apIStack_118,(char *)ppIVar12,param_2
                              ,(ICommandBuffer *)plVar8,0xffffffff);
    if (param_1[0x14] != (SubmitSection)0x0) goto LAB_00a22dd8;
LAB_00a22dd4:
    if (param_3) goto LAB_00a22dd8;
  }
  if (bVar7) {
    (**(code **)(*plVar8 + 0xd8))(plVar8,"renderZStencilRegion");
    (**(code **)(*plVar8 + 0xc0))(plVar8,*(undefined8 *)(*(long *)(this + 8) + 0xb8));
    (**(code **)(*plVar8 + 0xb8))(plVar8,*(undefined8 *)(*(long *)(this + 8) + 0xc0));
    (**(code **)(*plVar8 + 0xb0))(plVar8,*(undefined8 *)(*(long *)(this + 8) + 0xb0));
    (**(code **)(*plVar8 + 0x48))(plVar8,*(undefined8 *)(*(long *)(this + 8) + 0xd0));
    (**(code **)(*plVar8 + 0x50))(plVar8,this + 0x68,1,*(undefined8 *)(*(long *)(this + 8) + 200));
    (**(code **)(*plVar8 + 0x58))(plVar8,0);
    ppIVar12 = (ITextureObject **)0x0;
    (**(code **)(*plVar8 + 0xe8))
              (plVar8,*(undefined4 *)(*(long *)(this + 0x28) + 0x550),0,0,0,
               *(undefined4 *)(*(long *)(this + 0x28) + 0x550));
    (**(code **)(*plVar8 + 0xe0))(plVar8);
  }
  if (*local_c0 != local_c0[1]) {
    pSVar2 = param_1 + 0xf9;
    if (((byte)param_1[0xf8] & 1) != 0) {
      pSVar2 = *(SubmitSection **)(param_1 + 0x108);
    }
    renderRenderQueueItems
              (this,(RenderQueueItemAllocator *)apIStack_118,(RenderTargetData *)ppIVar12,
               *(uint *)(param_1 + 0x10),(char *)pSVar2,param_2,(ICommandBuffer *)plVar8,pIVar11,
               0xffffffff);
  }
  if ((*(int *)(param_1 + 0x10) == 3) && (*(int *)param_1 == 0)) {
    this_00 = *(ScreenSpaceProcessor **)(*(RenderArgs **)(this + 0x28) + 0x560);
    if (this_00 != (ScreenSpaceProcessor *)0x0) {
      ScreenSpaceProcessor::processPostFxOpaque
                (this_00,(ICommandBuffer *)plVar8,*(RenderArgs **)(this + 0x28));
    }
  }
  if (uVar3 == 5 && lVar13 != 0) {
    FontOverlayRenderer::renderForRenderTexture
              (*(FontOverlayRenderer **)(*(long *)(this + 8) + 8),*ppIVar1,
               (Matrix4x4 *)(*(long *)(this + 0x28) + 0xd0),(ICommandBuffer *)plVar8);
  }
  if (param_1[0x15] != (SubmitSection)0x0) {
    (**(code **)(*plVar8 + 0x40))(plVar8);
  }
LAB_00a22f8c:
  if (*(long *)(lVar5 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


