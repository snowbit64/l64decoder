// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: renderSceneToTexture
// Entry Point: 00a14158
// Size: 1104 bytes
// Signature: undefined __thiscall renderSceneToTexture(Renderer * this, Camera * param_1, IDisplay * param_2, PlaneRenderInfo * param_3, PixelViewport * param_4, uint param_5, uint param_6, uint param_7, uint param_8, bool param_9, bool param_10)


/* Renderer::renderSceneToTexture(Camera*, IDisplay*, Renderer::PlaneRenderInfo*,
   Renderer::PixelViewport const*, unsigned int, unsigned int, unsigned int, unsigned int, bool,
   bool) */

void __thiscall
Renderer::renderSceneToTexture
          (Renderer *this,Camera *param_1,IDisplay *param_2,PlaneRenderInfo *param_3,
          PixelViewport *param_4,uint param_5,uint param_6,uint param_7,uint param_8,bool param_9,
          bool param_10)

{
  RenderController *this_00;
  TransformArgs *this_01;
  long **pplVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  TransformArgs *this_02;
  ulong uVar6;
  ICommandBuffer *pIVar7;
  RenderTextureSetup *pRVar8;
  RenderArgs *this_03;
  long *plVar9;
  long **pplVar10;
  long *plVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  float local_158;
  float local_154;
  char acStack_150 [64];
  Matrix4x4 aMStack_110 [64];
  Matrix4x4 aMStack_d0 [64];
  long local_90;
  
  lVar2 = tpidr_el0;
  local_90 = *(long *)(lVar2 + 0x28);
  if (*(long *)(this + 0x18) == 0) goto LAB_00a1456c;
  RawTransformGroup::updateWorldTransformation();
  CullingManager::updateDirtyEntities();
  this_00 = (RenderController *)(this + 0xf20);
  this[0x88] = (Renderer)param_9;
  this[0x8a] = (Renderer)param_10;
  RenderController::beginRenderingBatch();
  this_02 = (TransformArgs *)
            RenderController::allocateCullingJob
                      (this_00,(CullingArgs *)0x0,param_5,param_7,param_8,0,0);
  setupClipping(this_02,param_1,param_2,*(float *)(param_3 + 0x98));
  *(TransformArgs **)(this_02 + 0x3f0) = this_02 + 0x1e0;
  if (param_2 == (IDisplay *)0x0) {
    uVar3 = 1;
LAB_00a1425c:
    uVar12 = 0;
    this_01 = (TransformArgs *)(this + 0x960);
    pplVar10 = (long **)(param_3 + 0x58);
    do {
      if ((param_2 == (IDisplay *)0x0) ||
         (uVar6 = (**(code **)(*(long *)param_2 + 0x40))(param_2,uVar12 & 0xffffffff),
         (uVar6 & 1) != 0)) {
        if (param_4 == (PixelViewport *)0x0) {
          pplVar1 = pplVar10;
          if (*(int *)((long)pplVar10 + -0x4c) != 0) {
            pplVar1 = pplVar10 + -9;
          }
          plVar9 = *pplVar1;
          uVar4 = (**(code **)(*plVar9 + 0x20))(plVar9);
          uVar5 = (**(code **)(*plVar9 + 0x28))(plVar9);
          local_170 = 0;
          uStack_168 = CONCAT44(uVar5,uVar4);
          plVar9 = pplVar10[4];
        }
        else {
          uStack_168 = *(undefined8 *)(param_4 + 8);
          local_170 = *(undefined8 *)param_4;
          plVar9 = pplVar10[4];
        }
        if (plVar9 != (long *)0x0) {
          plVar11 = *(long **)(this + 0x30);
          pIVar7 = (ICommandBuffer *)(**(code **)(*plVar11 + 0x138))(plVar11);
          ScreenSpaceProcessor::preRender
                    ((ScreenSpaceProcessor *)plVar9,(IRenderDevice *)plVar11,pIVar7,
                     (PostFxParams *)(this + 0x11e8));
        }
        FUN_00a145a8(acStack_150,0x40);
        pRVar8 = (RenderTextureSetup *)
                 RenderController::beginRenderTexture(this_00,(RenderTargetInfo *)(pplVar10 + -0xb))
        ;
        local_178 = 0;
        this_03 = (RenderArgs *)
                  RenderController::allocateRenderJob
                            (this_00,pRVar8,param_6,(float *)&local_178,
                             *(INFO_RENDERING *)(this + 0xf00),acStack_150,(CullingArgs *)this_02);
        *(long **)(this_03 + 0x560) = pplVar10[4];
        plVar9 = pplVar10[7];
        *(long **)(this_03 + 0x558) = plVar9;
        if (plVar9 != (long *)0x0) {
          RenderTextureController::reset();
        }
        if (param_2 != (IDisplay *)0x0) {
          (**(code **)(*(long *)param_2 + 0x60))
                    (param_2,uVar12 & 0xffffffff,&local_170,(ulong)&local_170 | 4,&uStack_168,
                     (long)&uStack_168 + 4);
        }
        RenderArgs::setupViewport
                  (this_03,(uint)local_170,local_170._4_4_,(uint)uStack_168,uStack_168._4_4_);
        fVar15 = *(float *)(pplVar10 + 8);
        fVar13 = (float)Camera::getNearClip();
        local_180 = CONCAT44(local_180._4_4_,fVar13);
        fVar14 = (float)Camera::getFarClip();
        local_154 = fVar14;
        generateMatrices(param_1,param_2,(uint)uVar12,fVar15,(float *)&local_180,&local_154,
                         aMStack_d0,aMStack_110);
        TransformArgs::setupInv
                  ((TransformArgs *)this_03,aMStack_d0,aMStack_110,fVar13,fVar14,(Vector3 *)0x0);
        CullingArgs::copyTransformData((CullingArgs *)this_02,(TransformArgs *)this_03);
        CullingArgs::setViewport((CullingArgs *)this_02,(uint)uStack_168,uStack_168._4_4_);
        if ((uVar12 == 0) && (*(long *)(this_03 + 0x560) != 0)) {
          local_180 = 0;
          RenderArgs::init((uint)this_01,(float *)0x0,(INFO_RENDERING)&local_180,(char *)0x0);
          CullingArgs::init((CullingArgs *)(this + 0x560),(CullingArgs *)0x0,0,param_7,param_8,
                            (uint)uStack_168,uStack_168._4_4_);
          fVar15 = *(float *)(pplVar10 + 8);
          fVar13 = (float)Camera::getNearClip();
          local_154 = fVar13;
          fVar14 = (float)Camera::getFarClip();
          local_158 = fVar14;
          generateMatrices(param_1,param_2,0,fVar15,&local_154,&local_158,aMStack_d0,aMStack_110);
          TransformArgs::setupInv(this_01,aMStack_d0,aMStack_110,fVar13,fVar14,(Vector3 *)0x0);
          CullingArgs::copyTransformData((CullingArgs *)(this + 0x560),this_01);
          *(undefined8 *)(this + 0xf18) =
               *(undefined8 *)
                (*(long *)(this_03 + 0x560) +
                 (ulong)*(uint *)(*(long *)(this_03 + 0x560) + 0x1b38) * 8 + 0x1b18);
        }
      }
      uVar12 = uVar12 + 1;
      pplVar10 = pplVar10 + 0x25;
    } while (uVar3 != uVar12);
  }
  else {
    uVar3 = (**(code **)(*(long *)param_2 + 0x38))(param_2);
    if (uVar3 != 0) goto LAB_00a1425c;
  }
  this[0xf06] = (Renderer)0x0;
  RenderController::endRenderingBatch((RenderStats *)this_00,(bool)((char)this + -0x78));
  RenderController::doFinalComposite();
LAB_00a1456c:
  if (*(long *)(lVar2 + 0x28) == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


