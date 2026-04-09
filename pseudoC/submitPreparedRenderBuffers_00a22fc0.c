// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: submitPreparedRenderBuffers
// Entry Point: 00a22fc0
// Size: 2060 bytes
// Signature: undefined __thiscall submitPreparedRenderBuffers(RenderQueue * this, RenderTargetInfo * param_1, RenderStats * param_2, bool param_3)


/* RenderQueue::submitPreparedRenderBuffers(RenderTargetInfo const&, RenderStats&, bool) */

void __thiscall
RenderQueue::submitPreparedRenderBuffers
          (RenderQueue *this,RenderTargetInfo *param_1,RenderStats *param_2,bool param_3)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ScreenSpaceProcessor *this_00;
  ITextureObject *pIVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  TextureStreamingManager *this_01;
  IRenderDevice *pIVar10;
  ulong uVar11;
  undefined4 *puVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  ShadowBufferRenderController *pSVar17;
  ulong uVar18;
  int *piVar19;
  uint uVar20;
  long *local_b8;
  long *local_b0;
  long *local_a8;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  plVar3 = **(long ***)(this + 8);
  plVar4 = (long *)(**(code **)(*plVar3 + 0x138))();
  lVar14 = *(long *)(this + 0x38);
  if (*(long *)(this + 0x40) != lVar14) {
    uVar13 = 0;
    do {
      puVar12 = (undefined4 *)(lVar14 + uVar13 * 0x2c0);
      switch(*puVar12) {
      case 0:
      case 1:
        local_b8 = (long *)0x0;
        local_b0 = (long *)0x0;
        local_a8 = (long *)0x0;
        piVar19 = (int *)(lVar14 + uVar13 * 0x2c0 + 0x10);
        iVar16 = *piVar19;
        if (iVar16 == 2) {
                    /* try { // try from 00a230d4 to 00a230e7 has its CatchHandler @ 00a237f4 */
          if (((*(float *)(*(long *)(*(long *)(this + 8) + 0x30) + 8) == 0.0) ||
              ((*(byte *)(*(long *)(this + 0x30) + 0x3a8) >> 4 & 1) == 0)) ||
             (lVar5 = RenderController::getShadowMap(), lVar5 == 0)) {
            plVar8 = (long *)0x0;
          }
          else {
            local_b8 = (long *)operator_new(8);
            plVar8 = local_b8 + 1;
            *local_b8 = lVar5;
            local_b0 = plVar8;
            local_a8 = plVar8;
          }
                    /* try { // try from 00a231e0 to 00a231e3 has its CatchHandler @ 00a237e0 */
          if (((*(byte *)(*(long *)(this + 0x30) + 0x3a8) >> 2 & 1) != 0) &&
             (uVar2 = RenderTextureController::getNumUsedReflectionMaps(), uVar2 != 0)) {
            uVar20 = 0;
            plVar7 = plVar8;
            do {
                    /* try { // try from 00a23218 to 00a2327b has its CatchHandler @ 00a23808 */
              lVar5 = RenderTextureController::getUsedReflectionMap
                                (*(RenderTextureController **)(*(long *)(this + 0x28) + 0x558),
                                 uVar20);
              plVar9 = local_b8;
              plVar8 = plVar7;
              if (lVar5 != 0) {
                if (plVar7 == local_a8) {
                  uVar18 = (long)plVar7 - (long)local_b8;
                  uVar11 = ((long)uVar18 >> 3) + 1;
                  if (uVar11 >> 0x3d != 0) {
                    /* try { // try from 00a23778 to 00a2378b has its CatchHandler @ 00a23800 */
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__vector_base_common<true>::__throw_length_error();
                  }
                  if (uVar11 <= (ulong)((long)uVar18 >> 2)) {
                    uVar11 = (long)uVar18 >> 2;
                  }
                  if (0x7ffffffffffffff7 < uVar18) {
                    uVar11 = 0x1fffffffffffffff;
                  }
                  if (uVar11 == 0) {
                    plVar7 = (long *)0x0;
                  }
                  else {
                    if (uVar11 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_006d1f18(
                                  "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                                  );
                    }
                    plVar7 = (long *)operator_new(uVar11 << 3);
                  }
                  plVar8 = plVar7 + ((long)uVar18 >> 3) + 1;
                  plVar7[(long)uVar18 >> 3] = lVar5;
                  if (0 < (long)uVar18) {
                    memcpy(plVar7,plVar9,uVar18);
                  }
                  local_a8 = plVar7 + uVar11;
                  local_b8 = plVar7;
                  local_b0 = plVar8;
                  if (plVar9 != (long *)0x0) {
                    operator_delete(plVar9);
                  }
                }
                else {
                  plVar8 = plVar7 + 1;
                  *plVar7 = lVar5;
                  local_b0 = plVar8;
                }
              }
              uVar20 = uVar20 + 1;
              plVar7 = plVar8;
            } while (uVar2 != uVar20);
          }
          plVar7 = local_b8;
          if ((((*(byte *)(*(long *)(this + 0x28) + 0x3a8) >> 2 & 1) != 0) &&
              (lVar5 = *(long *)(*(long *)(this + 0x28) + 0x560), lVar5 != 0)) &&
             (lVar5 = *(long *)(lVar5 + 0x1960), lVar5 != 0)) {
            if (plVar8 == local_a8) {
              uVar18 = (long)plVar8 - (long)local_b8;
              uVar11 = ((long)uVar18 >> 3) + 1;
              if (uVar11 >> 0x3d != 0) {
                    /* try { // try from 00a237a8 to 00a237af has its CatchHandler @ 00a237d0 */
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__vector_base_common<true>::__throw_length_error();
              }
              if (uVar11 <= (ulong)((long)uVar18 >> 2)) {
                uVar11 = (long)uVar18 >> 2;
              }
              if (0x7ffffffffffffff7 < uVar18) {
                uVar11 = 0x1fffffffffffffff;
              }
              if (uVar11 == 0) {
                plVar9 = (long *)0x0;
              }
              else {
                if (uVar11 >> 0x3d != 0) {
                    /* try { // try from 00a237bc to 00a237c7 has its CatchHandler @ 00a237d0 */
                    /* WARNING: Subroutine does not return */
                  FUN_006d1f18(
                              "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                              );
                }
                    /* try { // try from 00a233ac to 00a233af has its CatchHandler @ 00a237cc */
                plVar9 = (long *)operator_new(uVar11 << 3);
              }
              plVar8 = plVar9 + ((long)uVar18 >> 3) + 1;
              plVar9[(long)uVar18 >> 3] = lVar5;
              if (0 < (long)uVar18) {
                memcpy(plVar9,plVar7,uVar18);
              }
              local_a8 = plVar9 + uVar11;
              local_b8 = plVar9;
              local_b0 = plVar8;
              if (plVar7 != (long *)0x0) {
                operator_delete(plVar7);
              }
            }
            else {
              local_b0 = plVar8 + 1;
              *plVar8 = lVar5;
              plVar8 = local_b0;
            }
          }
          plVar9 = local_b8;
          lVar15 = *(long *)(this + 8);
          lVar5 = *(long *)(lVar15 + 0xf0);
          plVar7 = plVar8;
          if (lVar5 != 0) {
            if (plVar8 == local_a8) {
              uVar18 = (long)plVar8 - (long)local_b8;
              uVar11 = ((long)uVar18 >> 3) + 1;
              if (uVar11 >> 0x3d != 0) {
                    /* try { // try from 00a2378c to 00a2379f has its CatchHandler @ 00a237dc */
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__vector_base_common<true>::__throw_length_error();
              }
              if (uVar11 <= (ulong)((long)uVar18 >> 2)) {
                uVar11 = (long)uVar18 >> 2;
              }
              if (0x7ffffffffffffff7 < uVar18) {
                uVar11 = 0x1fffffffffffffff;
              }
              if (uVar11 == 0) {
                plVar8 = (long *)0x0;
              }
              else {
                if (uVar11 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_006d1f18(
                              "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                              );
                }
                    /* try { // try from 00a2345c to 00a2345f has its CatchHandler @ 00a237d4 */
                plVar8 = (long *)operator_new(uVar11 << 3);
                lVar5 = *(long *)(lVar15 + 0xf0);
              }
              plVar7 = plVar8 + ((long)uVar18 >> 3) + 1;
              plVar8[(long)uVar18 >> 3] = lVar5;
              if (0 < (long)uVar18) {
                memcpy(plVar8,plVar9,uVar18);
              }
              local_a8 = plVar8 + uVar11;
              local_b8 = plVar8;
              local_b0 = plVar7;
              if (plVar9 != (long *)0x0) {
                operator_delete(plVar9);
              }
            }
            else {
              plVar7 = plVar8 + 1;
              *plVar8 = lVar5;
              local_b0 = plVar7;
            }
          }
          iVar16 = *piVar19;
        }
        else {
          plVar7 = (long *)0x0;
        }
                    /* try { // try from 00a234cc to 00a2353b has its CatchHandler @ 00a237f8 */
        if (((iVar16 == 4) && ((*(byte *)(*(long *)(this + 0x30) + 0x3a8) >> 1 & 1) != 0)) &&
           (lVar5 = RenderTextureController::getRefractionTexture(), plVar8 = local_b8, lVar5 != 0))
        {
          if (plVar7 == local_a8) {
            uVar18 = (long)plVar7 - (long)local_b8;
            uVar11 = ((long)uVar18 >> 3) + 1;
            if (uVar11 >> 0x3d != 0) {
                    /* try { // try from 00a237a0 to 00a237a7 has its CatchHandler @ 00a237d8 */
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__vector_base_common<true>::__throw_length_error();
            }
            if (uVar11 <= (ulong)((long)uVar18 >> 2)) {
              uVar11 = (long)uVar18 >> 2;
            }
            if (0x7ffffffffffffff7 < uVar18) {
              uVar11 = 0x1fffffffffffffff;
            }
            if (uVar11 == 0) {
              plVar9 = (long *)0x0;
            }
            else {
              if (uVar11 >> 0x3d != 0) {
                    /* try { // try from 00a237b0 to 00a237bb has its CatchHandler @ 00a237d8 */
                    /* WARNING: Subroutine does not return */
                FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
              plVar9 = (long *)operator_new(uVar11 << 3);
            }
            plVar7 = plVar9 + ((long)uVar18 >> 3) + 1;
            plVar9[(long)uVar18 >> 3] = lVar5;
            if (0 < (long)uVar18) {
              memcpy(plVar9,plVar8,uVar18);
            }
            local_a8 = plVar9 + uVar11;
            local_b8 = plVar9;
            local_b0 = plVar7;
            if (plVar8 != (long *)0x0) {
              operator_delete(plVar8);
            }
          }
          else {
            local_b0 = plVar7 + 1;
            *plVar7 = lVar5;
            plVar7 = local_b0;
          }
        }
        plVar8 = local_b8;
        uVar11 = (ulong)((long)plVar7 - (long)local_b8) >> 3;
        iVar16 = (int)uVar11;
        if (iVar16 != 0) {
                    /* try { // try from 00a2359c to 00a235bb has its CatchHandler @ 00a237fc */
          (**(code **)(*plVar4 + 0x120))(plVar4,uVar11 & 0xffffffff,local_b8,0,0,0,1);
        }
        if (param_3) {
          lVar5 = lVar14 + uVar13 * 0x2c0;
          if (*(long *)(lVar5 + 0x2a8) != 0) {
                    /* try { // try from 00a235f8 to 00a235fb has its CatchHandler @ 00a23804 */
            (**(code **)(*plVar3 + 0xa0))();
            plVar7 = *(long **)(lVar5 + 0x2a8);
            if (plVar7 != (long *)0x0) {
              (**(code **)(*plVar7 + 8))();
            }
                    /* try { // try from 00a23624 to 00a23657 has its CatchHandler @ 00a23804 */
            RenderStats::operator+=(param_2,(RenderStats *)(lVar14 + uVar13 * 0x2c0 + 0x228));
          }
        }
        else {
          executeRender(this,(SubmitSection *)puVar12,param_2,iVar16 != 0);
          this_01 = (TextureStreamingManager *)TextureStreamingManager::getInstance();
          TextureStreamingManager::notifyNoMoreTextureUsageContributionsForFrame
                    (this_01,*(ulonglong *)(*(long *)(this + 8) + 0x90));
        }
        if (plVar8 != (long *)0x0) {
          local_b0 = plVar8;
          operator_delete(plVar8);
        }
        break;
      case 2:
        if (param_3) {
LAB_00a23194:
          if (*(long *)(*(long *)(lVar14 + uVar13 * 0x2c0 + 0x2b8) + 0x28) == 0) break;
          (**(code **)(*plVar3 + 0xa0))();
        }
        else {
          pSVar17 = *(ShadowBufferRenderController **)(*(long *)(this + 0x28) + 0x568);
          pIVar6 = (ITextureObject *)RenderController::getShadowMap();
          ShadowBufferRenderController::ShadowBufferRenderTask::ShadowBufferRenderTask
                    ((ShadowBufferRenderTask *)&local_b8,pSVar17,pIVar6,
                     *(ITextureObject **)(param_1 + 0x58),
                     *(IStructBuffer **)(*(long *)(this + 0x20) + 0x58));
                    /* try { // try from 00a23178 to 00a23183 has its CatchHandler @ 00a237e4 */
          ShadowBufferRenderController::ShadowBufferRenderTask::renderResolvedShadowBuffers
                    ((ShadowBufferRenderTask *)&local_b8,(ICommandBuffer *)plVar4);
          ShadowBufferRenderController::ShadowBufferRenderTask::~ShadowBufferRenderTask
                    ((ShadowBufferRenderTask *)&local_b8);
        }
        goto LAB_00a23320;
      case 3:
        if (param_3) goto LAB_00a23194;
        plVar7 = (long *)(**(code **)(**(long **)(*(long *)(this + 0x28) + 0x570) + 0x10))
                                   (*(long **)(*(long *)(this + 0x28) + 0x570),
                                    *(undefined8 *)(param_1 + 0x58),
                                    *(undefined8 *)(lVar14 + uVar13 * 0x2c0 + 0x38));
        (**(code **)(*plVar7 + 0x18))(plVar7,plVar4);
        (**(code **)(*plVar7 + 8))(plVar7);
LAB_00a23320:
        plVar7 = *(long **)(lVar14 + uVar13 * 0x2c0 + 0x2b8);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 8))();
        }
        break;
      case 4:
        this_00 = *(ScreenSpaceProcessor **)(*(RenderArgs **)(this + 0x28) + 0x560);
        if (this_00 != (ScreenSpaceProcessor *)0x0) {
          lVar14 = *(long *)(*(long *)(this + 0x18) + 0x40);
          ScreenSpaceProcessor::processDepth
                    (this_00,(IRenderDevice *)plVar3,*(ITextureObject **)(param_1 + 0x58),
                     *(RenderArgs **)(this + 0x28),(PostFxParams *)(*(long *)this + 0x2c8));
          if (lVar14 != 0) {
            ScreenSpaceProcessor::processAtmosphericEffects
                      (*(ScreenSpaceProcessor **)(*(RenderArgs **)(this + 0x28) + 0x560),
                       **(IRenderDevice ***)(this + 8),*(LightSource **)(lVar14 + 0x10),
                       *(RenderArgs **)(this + 0x28),(PostFxParams *)(*(long *)this + 0x2c8));
          }
        }
      }
      lVar14 = *(long *)(this + 0x38);
      uVar13 = (ulong)((int)uVar13 + 1);
      uVar11 = (*(long *)(this + 0x40) - lVar14 >> 6) * 0x2e8ba2e8ba2e8ba3;
    } while (uVar13 <= uVar11 && uVar11 - uVar13 != 0);
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    FontOverlayRenderer::finishRenderForRenderTexture
              (*(FontOverlayRenderer **)(*(long *)(this + 8) + 8),
               *(ITextureObject **)(param_1 + 0x10));
  }
  pIVar10 = *(IRenderDevice **)(*(PostFxParams **)(this + 0x28) + 0x560);
  if (pIVar10 != (IRenderDevice *)0x0) {
    lVar14 = *(long *)this;
    ScreenSpaceProcessor::processPostFx
              (pIVar10,(RenderArgs *)plVar3,*(PostFxParams **)(this + 0x28));
    *(undefined *)(lVar14 + 0x2f0) = 0;
    uVar13 = DeferredDebugRenderer::getHasSomethingToRender();
    if (((uVar13 & 1) != 0) &&
       (local_b8 = *(long **)(*(long *)(*(long *)(this + 0x28) + 0x560) +
                              (ulong)*(uint *)(*(long *)(*(long *)(this + 0x28) + 0x560) + 0x1b38) *
                              8 + 0x1b18), local_b8 != (long *)0x0)) {
      (**(code **)(*plVar4 + 0x120))(plVar4,1,&local_b8,0,0,0,1);
      uVar13 = ScreenSpaceProcessor::bindFinalRt
                         (*(ScreenSpaceProcessor **)(*(long *)(this + 0x28) + 0x560),
                          (IRenderDevice *)plVar3);
      if ((uVar13 & 1) != 0) {
        DeferredDebugRenderer::render
                  (*(DeferredDebugRenderer **)(*(SharedRenderArgs **)(this + 8) + 0x80),
                   *(SharedRenderArgs **)(this + 8),*(RenderArgs **)(this + 0x28),
                   (ITextureObject *)local_b8);
        plVar3 = (long *)(**(code **)(*plVar3 + 0x138))();
        (**(code **)(*plVar3 + 0x40))();
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


