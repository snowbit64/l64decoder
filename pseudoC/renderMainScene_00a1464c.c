// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: renderMainScene
// Entry Point: 00a1464c
// Size: 2064 bytes
// Signature: undefined __thiscall renderMainScene(Renderer * this, IDisplay * param_1, bool param_2)


/* Renderer::renderMainScene(IDisplay*, bool) */

void __thiscall Renderer::renderMainScene(Renderer *this,IDisplay *param_1,bool param_2)

{
  RenderController *this_00;
  TransformArgs *this_01;
  char cVar1;
  POST_PROCESS_ANTI_ALIASING PVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  TransformArgs *this_02;
  ICommandBuffer *pIVar6;
  RenderTextureSetup *pRVar7;
  RenderArgs *this_03;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  long *plVar14;
  ScreenSpaceProcessor *pSVar15;
  Camera *pCVar16;
  ulong uVar17;
  long lVar18;
  float fVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  float fVar22;
  undefined8 uVar23;
  int iVar24;
  float fVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  float local_238;
  float local_234;
  char acStack_230 [256];
  Matrix4x4 aMStack_130 [64];
  Matrix4x4 aMStack_f0 [64];
  long local_b0;
  
  lVar11 = tpidr_el0;
  local_b0 = *(long *)(lVar11 + 0x28);
  if ((((*(long *)(this + 8) == 0) || (*(long *)(this + 0x18) == 0)) || (!param_2)) ||
     (*this == (Renderer)0x0)) {
    iVar3 = (**(code **)(*(long *)param_1 + 0x38))(param_1);
    if (iVar3 != 0) {
      uVar5 = 0;
      lVar4 = 0x78;
      do {
        uVar17 = (**(code **)(*(long *)param_1 + 0x40))(param_1,uVar5 & 0xffffffff);
        if ((uVar17 & 1) != 0) {
          plVar14 = *(long **)(this + 0x30);
          pSVar15 = *(ScreenSpaceProcessor **)(*(long *)(this + 0x1b80) + lVar4);
          pIVar6 = (ICommandBuffer *)(**(code **)(*plVar14 + 0x138))(plVar14);
          ScreenSpaceProcessor::preRender
                    (pSVar15,(IRenderDevice *)plVar14,pIVar6,(PostFxParams *)(this + 0x11e8));
        }
        uVar5 = uVar5 + 1;
        uVar17 = (**(code **)(*(long *)param_1 + 0x38))(param_1);
        lVar4 = lVar4 + 0x148;
      } while (uVar5 < (uVar17 & 0xffffffff));
    }
    (**(code **)(*(long *)param_1 + 0xa0))(param_1);
    DeferredDebugRenderer::reset();
    lVar11 = *(long *)(lVar11 + 0x28);
    goto LAB_00a14e1c;
  }
  this[0x88] = this[0xf04];
  *(undefined2 *)(this + 0x89) = *(undefined2 *)(this + 0xf05);
  lVar4 = (**(code **)(**(long **)(this + 0x30) + 0x28))();
  if (*(char *)(lVar4 + 0x97) == '\0') {
    lVar4 = EngineManager::getInstance();
LAB_00a147c4:
    PVar2 = 0;
  }
  else {
    lVar4 = (**(code **)(**(long **)(this + 0x30) + 0x28))();
    cVar1 = *(char *)(lVar4 + 0x99);
    lVar4 = EngineManager::getInstance();
    if (cVar1 == '\0') goto LAB_00a147c4;
    PVar2 = *(POST_PROCESS_ANTI_ALIASING *)(lVar4 + 0x218);
  }
  uVar5 = RenderQueueUtil::getNeedsTemporalJitter
                    (PVar2,*(DLSS_QUALITY *)(lVar4 + 0x21c),*(XESS_QUALITY *)(lVar4 + 0x228),
                     *(FIDELITY_FX_SR_20 *)(lVar4 + 0x224));
  this_00 = (RenderController *)(this + 0xf20);
  RenderController::beginRenderingBatch();
  this_02 = (TransformArgs *)
            RenderController::allocateCullingJob
                      (this_00,(CullingArgs *)0x0,0x1b7,*(uint *)(this + 0xf10),
                       *(uint *)(this + 0xf14),0,0);
  setupClipping(this_02,*(Camera **)(this + 8),param_1,*(float *)(*(long *)(this + 0x1b80) + 0x98));
  *(TransformArgs **)(this_02 + 0x3f0) = this_02 + 0x1e0;
  uVar12 = 0xd;
  if ((uVar5 & 1) == 0) {
    uVar12 = 5;
  }
  *(float *)(this_02 + 0x3e0) = *(float *)(this + 0x2048) * *(float *)(this_02 + 0x3e0);
  iVar3 = (**(code **)(*(long *)param_1 + 0x38))(param_1);
  if (iVar3 != 0) {
    uVar17 = 0;
    this_01 = (TransformArgs *)(this + 0x960);
    do {
      uVar8 = (**(code **)(*(long *)param_1 + 0x40))(param_1,uVar17 & 0xffffffff);
      if ((uVar8 & 1) != 0) {
        FUN_00a145a8(acStack_230,0x100);
        uVar20 = NEON_ucvtf(*(undefined8 *)(*(long *)(this + 0x1b80) + uVar17 * 0x148 + 300),4);
        fVar19 = (float)((ulong)uVar20 >> 0x20);
        local_240 = CONCAT44((int)fVar19,(int)(float)uVar20);
        iVar3 = (int)((float)uVar20 * 0.0);
        iVar24 = (int)(fVar19 * 0.0);
        uVar20 = NEON_fcmle(CONCAT44(iVar24,iVar3),0,2);
        fVar19 = (float)CONCAT13((byte)((uint)iVar3 >> 0x18) & ~(byte)((ulong)uVar20 >> 0x18),
                                 CONCAT12((byte)((uint)iVar3 >> 0x10) &
                                          ~(byte)((ulong)uVar20 >> 0x10),
                                          CONCAT11((byte)((uint)iVar3 >> 8) &
                                                   ~(byte)((ulong)uVar20 >> 8),
                                                   (byte)iVar3 & ~(byte)uVar20)));
        local_248 = CONCAT44((int)(float)(CONCAT17((byte)((uint)iVar24 >> 0x18) &
                                                   ~(byte)((ulong)uVar20 >> 0x38),
                                                   CONCAT16((byte)((uint)iVar24 >> 0x10) &
                                                            ~(byte)((ulong)uVar20 >> 0x30),
                                                            CONCAT15((byte)((uint)iVar24 >> 8) &
                                                                     ~(byte)((ulong)uVar20 >> 0x28),
                                                                     CONCAT14((byte)iVar24 &
                                                                              ~(byte)((ulong)uVar20
                                                                                     >> 0x20),fVar19
                                                                             )))) >> 0x20),
                             (int)fVar19);
        (**(code **)(*(long *)param_1 + 0x60))
                  (param_1,uVar17 & 0xffffffff,&local_248,(ulong)&local_248 | 4,&local_240,
                   (long)&local_240 + 4);
        local_250 = 0;
        if ((uVar5 & 1) != 0) {
          fVar19 = 0.0;
          fVar22 = 1.0;
          uVar9 = 0xf;
          if (*(int *)(lVar4 + 0x21c) != 5) {
            uVar9 = 0x3f;
          }
          uVar9 = (uVar9 & *(uint *)(this + 200)) + 1;
          uVar13 = uVar9;
          do {
            fVar22 = fVar22 * 0.5;
            fVar19 = (float)NEON_fmadd(fVar22,(float)(ulong)(uVar13 & 1),fVar19);
            uVar13 = (uint)((float)(ulong)uVar13 * 0.5);
          } while (uVar13 != 0);
          fVar22 = 0.0;
          fVar25 = 1.0;
          do {
            fVar25 = fVar25 / 3.0;
            fVar22 = (float)NEON_fmadd(fVar25,(float)(ulong)(uVar9 - (uVar9 / 3 +
                                                                     ((uint)((ulong)uVar9 *
                                                                             0xaaaaaaab >> 0x20) &
                                                                     0xfffffffe))),fVar22);
            uVar9 = (uint)((float)(ulong)uVar9 / 3.0);
          } while (uVar9 != 0);
          uVar20 = NEON_ucvtf(local_240,4);
          local_250 = CONCAT44((fVar22 + -0.5) / (float)((ulong)uVar20 >> 0x20),
                               (fVar19 + -0.5) / (float)uVar20);
        }
        lVar18 = uVar17 * 0x148;
        plVar14 = *(long **)(this + 0x30);
        pSVar15 = *(ScreenSpaceProcessor **)(*(long *)(this + 0x1b80) + lVar18 + 0x78);
        pIVar6 = (ICommandBuffer *)(**(code **)(*plVar14 + 0x138))(plVar14);
        ScreenSpaceProcessor::preRender
                  (pSVar15,(IRenderDevice *)plVar14,pIVar6,(PostFxParams *)(this + 0x11e8));
        pRVar7 = (RenderTextureSetup *)
                 RenderController::beginRenderTexture
                           (this_00,(RenderTargetInfo *)(*(long *)(this + 0x1b80) + lVar18));
        this_03 = (RenderArgs *)
                  RenderController::allocateRenderJob
                            (this_00,pRVar7,uVar12,(float *)&local_250,
                             *(INFO_RENDERING *)(this + 0xf00),acStack_230,(CullingArgs *)this_02);
        *(ScreenSpaceProcessor **)(this_03 + 0x560) = pSVar15;
        lVar10 = *(long *)(this + 0x1b80) + lVar18;
        *(undefined8 *)(this_03 + 0x568) = *(undefined8 *)(lVar10 + 0x80);
        *(undefined8 *)(this_03 + 0x570) = *(undefined8 *)(lVar10 + 0x88);
        *(undefined8 *)(this_03 + 0x558) = *(undefined8 *)(lVar10 + 0x90);
        RenderTextureController::reset();
        RenderArgs::setupViewport
                  (this_03,(uint)local_248,local_248._4_4_,(uint)local_240,local_240._4_4_);
        CullingArgs::setViewport((CullingArgs *)this_02,(uint)local_240,local_240._4_4_);
        lVar10 = *(long *)(this + 0x1b80) + lVar18;
        uVar21 = *(undefined8 *)(lVar10 + 0xf4);
        uVar20 = *(undefined8 *)(lVar10 + 0xec);
        uVar23 = *(undefined8 *)(lVar10 + 0xdc);
        uVar27 = *(undefined8 *)(lVar10 + 0x114);
        uVar26 = *(undefined8 *)(lVar10 + 0x10c);
        uVar29 = *(undefined8 *)(lVar10 + 0x104);
        uVar28 = *(undefined8 *)(lVar10 + 0xfc);
        *(undefined8 *)(this_03 + 0x118) = *(undefined8 *)(lVar10 + 0xe4);
        *(undefined8 *)(this_03 + 0x110) = uVar23;
        *(undefined8 *)(this_03 + 0x128) = uVar21;
        *(undefined8 *)(this_03 + 0x120) = uVar20;
        *(undefined8 *)(this_03 + 0x138) = uVar29;
        *(undefined8 *)(this_03 + 0x130) = uVar28;
        *(undefined8 *)(this_03 + 0x148) = uVar27;
        *(undefined8 *)(this_03 + 0x140) = uVar26;
        lVar10 = *(long *)(this + 0x1b80) + lVar18;
        uVar21 = *(undefined8 *)(lVar10 + 0xd4);
        uVar20 = *(undefined8 *)(lVar10 + 0xcc);
        uVar23 = *(undefined8 *)(lVar10 + 0xbc);
        uVar27 = *(undefined8 *)(lVar10 + 0xb4);
        uVar26 = *(undefined8 *)(lVar10 + 0xac);
        uVar29 = *(undefined8 *)(lVar10 + 0xa4);
        uVar28 = *(undefined8 *)(lVar10 + 0x9c);
        *(undefined8 *)(this_03 + 0x1b8) = *(undefined8 *)(lVar10 + 0xc4);
        *(undefined8 *)(this_03 + 0x1b0) = uVar23;
        *(undefined8 *)(this_03 + 0x1c8) = uVar21;
        *(undefined8 *)(this_03 + 0x1c0) = uVar20;
        *(undefined8 *)(this_03 + 0x198) = uVar29;
        *(undefined8 *)(this_03 + 400) = uVar28;
        *(undefined8 *)(this_03 + 0x1a8) = uVar27;
        *(undefined8 *)(this_03 + 0x1a0) = uVar26;
        uVar20 = *(undefined8 *)(*(long *)(this + 0x1b80) + lVar18 + 0x11c);
        *(undefined4 *)(this_03 + 0x1d8) =
             *(undefined4 *)(*(long *)(this + 0x1b80) + lVar18 + 0x124);
        *(undefined8 *)(this_03 + 0x1d0) = uVar20;
        pCVar16 = *(Camera **)(this + 8);
        fVar25 = *(float *)(*(long *)(this + 0x1b80) + lVar18 + 0x98);
        fVar19 = (float)Camera::getNearClip();
        local_258 = CONCAT44(local_258._4_4_,fVar19);
        fVar22 = (float)Camera::getFarClip();
        local_234 = fVar22;
        generateMatrices(pCVar16,param_1,(uint)uVar17,fVar25,(float *)&local_258,&local_234,
                         aMStack_f0,aMStack_130);
        TransformArgs::setupInv
                  ((TransformArgs *)this_03,aMStack_f0,aMStack_130,fVar19,fVar22,(Vector3 *)0x0);
        uVar23 = *(undefined8 *)(this_03 + 0x68);
        uVar21 = *(undefined8 *)(this_03 + 0x60);
        uVar20 = *(undefined8 *)(this_03 + 0x70);
        lVar10 = *(long *)(this + 0x1b80) + lVar18;
        uVar29 = *(undefined8 *)(this_03 + 0x48);
        uVar28 = *(undefined8 *)(this_03 + 0x40);
        uVar27 = *(undefined8 *)(this_03 + 0x58);
        uVar26 = *(undefined8 *)(this_03 + 0x50);
        *(undefined8 *)(lVar10 + 0xd4) = *(undefined8 *)(this_03 + 0x78);
        *(undefined8 *)(lVar10 + 0xcc) = uVar20;
        *(undefined8 *)(lVar10 + 0xc4) = uVar23;
        *(undefined8 *)(lVar10 + 0xbc) = uVar21;
        *(undefined8 *)(lVar10 + 0xa4) = uVar29;
        *(undefined8 *)(lVar10 + 0x9c) = uVar28;
        *(undefined8 *)(lVar10 + 0xb4) = uVar27;
        *(undefined8 *)(lVar10 + 0xac) = uVar26;
        lVar10 = *(long *)(this + 0x1b80);
        uVar20 = *(undefined8 *)(this_03 + 0x354);
        *(undefined4 *)(lVar10 + lVar18 + 0x124) = *(undefined4 *)(this_03 + 0x35c);
        *(undefined8 *)(lVar10 + lVar18 + 0x11c) = uVar20;
        uVar23 = *(undefined8 *)(this_03 + 0xf0);
        uVar21 = *(undefined8 *)(this_03 + 0x108);
        uVar20 = *(undefined8 *)(this_03 + 0x100);
        lVar18 = *(long *)(this + 0x1b80) + lVar18;
        uVar29 = *(undefined8 *)(this_03 + 0xd8);
        uVar28 = *(undefined8 *)(this_03 + 0xd0);
        uVar27 = *(undefined8 *)(this_03 + 0xe8);
        uVar26 = *(undefined8 *)(this_03 + 0xe0);
        *(undefined8 *)(lVar18 + 0x104) = *(undefined8 *)(this_03 + 0xf8);
        *(undefined8 *)(lVar18 + 0xfc) = uVar23;
        *(undefined8 *)(lVar18 + 0x114) = uVar21;
        *(undefined8 *)(lVar18 + 0x10c) = uVar20;
        *(undefined8 *)(lVar18 + 0xe4) = uVar29;
        *(undefined8 *)(lVar18 + 0xdc) = uVar28;
        *(undefined8 *)(lVar18 + 0xf4) = uVar27;
        *(undefined8 *)(lVar18 + 0xec) = uVar26;
        if (uVar17 == 0) {
          pCVar16 = *(Camera **)(this + 8);
          fVar25 = *(float *)(*(long *)(this + 0x1b80) + 0x98);
          fVar19 = (float)Camera::getNearClip();
          local_258 = CONCAT44(local_258._4_4_,fVar19);
          fVar22 = (float)Camera::getFarClip();
          local_234 = fVar22;
          generateMatrices(pCVar16,param_1,0,fVar25,(float *)&local_258,&local_234,aMStack_f0,
                           aMStack_130);
          TransformArgs::setupInv
                    ((TransformArgs *)(this + 0x1a0),aMStack_f0,aMStack_130,fVar19,fVar22,
                     (Vector3 *)0x0);
          local_258 = 0;
          uVar20 = *(undefined8 *)(*(long *)(this + 0x1b80) + 300);
          *(undefined8 *)(this + 0x540) = 0;
          *(undefined8 *)(this + 0x548) = uVar20;
          RenderArgs::init((uint)this_01,(float *)0x0,(INFO_RENDERING)&local_258,(char *)0x0);
          CullingArgs::init((CullingArgs *)(this + 0x560),(CullingArgs *)0x0,0,
                            *(uint *)(this + 0xf10),*(uint *)(this + 0xf14),
                            *(uint *)(*(long *)(this + 0x1b80) + 300),
                            *(uint *)(*(long *)(this + 0x1b80) + 0x130));
          pCVar16 = *(Camera **)(this + 8);
          fVar25 = *(float *)(*(long *)(this + 0x1b80) + 0x98);
          fVar19 = (float)Camera::getNearClip();
          local_234 = fVar19;
          fVar22 = (float)Camera::getFarClip();
          local_238 = fVar22;
          generateMatrices(pCVar16,param_1,0,fVar25,&local_234,&local_238,aMStack_f0,aMStack_130);
          TransformArgs::setupInv(this_01,aMStack_f0,aMStack_130,fVar19,fVar22,(Vector3 *)0x0);
          CullingArgs::copyTransformData((CullingArgs *)(this + 0x560),this_01);
          *(undefined8 *)(this + 0xf18) =
               *(undefined8 *)
                (*(long *)(this_03 + 0x560) +
                 (ulong)*(uint *)(*(long *)(this_03 + 0x560) + 0x1b38) * 8 + 0x1b18);
          IndirectLightRenderController::issueJobs
                    ((IndirectLightRenderController *)(this + 0x1df8),this,pRVar7);
        }
      }
      uVar17 = uVar17 + 1;
      uVar8 = (**(code **)(*(long *)param_1 + 0x38))(param_1);
    } while (uVar17 < (uVar8 & 0xffffffff));
  }
  this[0xf06] = (Renderer)0x0;
  RenderController::endRenderingBatch((RenderStats *)this_00,(bool)((char)this + -0x78));
  uVar12 = *(uint *)(this + 0x1b00);
  if (uVar12 < 170000000 || uVar12 + 0xf5de0180 == 0) {
    if ((*(float *)(this + 0x2048) < 1.0) && ((float)(ulong)uVar12 < 1.53e+08)) {
      fVar19 = (float)NEON_fmin(*(float *)(this + 0x2048) + 0.02,0x3f800000);
      goto LAB_00a14dc0;
    }
  }
  else {
    fVar19 = *(float *)(this + 0x2048) - (float)(ulong)(uVar12 + 0xf5de0180) / 1.7e+08;
LAB_00a14dc0:
    *(float *)(this + 0x2048) = fVar19;
  }
  lVar11 = *(long *)(lVar11 + 0x28);
LAB_00a14e1c:
  if (lVar11 != local_b0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


