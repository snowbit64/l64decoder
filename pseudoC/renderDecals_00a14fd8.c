// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: renderDecals
// Entry Point: 00a14fd8
// Size: 704 bytes
// Signature: undefined __thiscall renderDecals(Renderer * this, float param_1, float param_2, float param_3, float param_4, float param_5, float param_6, uint param_7, uint param_8, uint param_9, ITextureObject * * param_10, ITextureObject * param_11)


/* Renderer::renderDecals(float, float, float, float, float, float, unsigned int, unsigned int,
   unsigned int, ITextureObject**, ITextureObject*) */

void __thiscall
Renderer::renderDecals
          (Renderer *this,float param_1,float param_2,float param_3,float param_4,float param_5,
          float param_6,uint param_7,uint param_8,uint param_9,ITextureObject **param_10,
          ITextureObject *param_11)

{
  RenderController *this_00;
  Renderer RVar1;
  long lVar2;
  TransformArgs *this_01;
  RenderTextureSetup *pRVar3;
  RenderArgs *this_02;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 local_1e0;
  undefined **local_1d8;
  float local_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  ulong local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  ITextureObject *pIStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  float afStack_140 [16];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined4 local_c4;
  long local_b8;
  
  lVar2 = tpidr_el0;
  local_b8 = *(long *)(lVar2 + 0x28);
  if (*(long *)(this + 0x18) != 0) {
    this_00 = (RenderController *)(this + 0xf20);
    *(undefined2 *)(this + 0x88) = 0;
    this[0x8a] = (Renderer)0x0;
    RenderController::beginRenderingBatch();
    this_01 = (TransformArgs *)
              RenderController::allocateCullingJob
                        (this_00,(CullingArgs *)0x0,0x200,*(uint *)(this + 0xf10),0,0,0);
    fVar4 = -param_6;
    fVar5 = -param_5;
    fVar6 = param_1 + param_3;
    fVar7 = param_2 + param_4;
    uStack_1b8 = 0;
    local_1c0 = 0x3f800000;
    uStack_1a8 = 0x3f800000;
    local_1b0 = 0;
    uStack_18c = 0;
    uStack_188 = 0;
    local_194 = 0;
    uStack_190 = 0;
    uStack_184 = 0x3f800000;
    local_1a0 = 0x3f80000000000000;
    local_198 = 0;
    RenderDeviceUtil::makeOrthoProjectionMatrix
              (param_1,fVar6,fVar7,param_2,fVar4,fVar5,(float *)&local_100);
    TransformArgs::setupInv
              (this_01,(Matrix4x4 *)&local_1c0,(Matrix4x4 *)&local_100,fVar4,fVar5,(Vector3 *)0x0);
    *(undefined ****)(this_01 + 0x3f0) = &local_1d8;
    local_1c0 = local_1c0 & 0xffffffffffff0000;
    local_1d8 = &PTR__CullingBody_00fe33a0;
    uStack_1a8 = 0;
    local_1b0 = 0;
    local_198 = 0;
    local_194 = 0;
    local_1a0 = 0;
    uStack_188 = 0;
    uStack_184 = 0;
    uStack_190 = 0;
    uStack_18c = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    pIStack_168 = (ITextureObject *)0x0;
    local_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    local_150 = 0;
    local_1d0 = param_1;
    fStack_1cc = param_2;
    local_1c8 = fVar6;
    fStack_1c4 = fVar7;
    uStack_1b8._4_4_ = param_9;
    if (param_9 != 0) {
      memcpy(&local_1b0,param_10,(ulong)param_9 << 3);
    }
    local_1c0 = local_1c0 & 0xffffffff;
    uStack_1b8 = (ulong)uStack_1b8._4_4_ << 0x20;
    pIStack_168 = param_11;
    pRVar3 = (RenderTextureSetup *)
             RenderController::beginRenderTexture(this_00,(RenderTargetInfo *)&local_1c0);
    local_1e0 = 0;
    this_02 = (RenderArgs *)
              RenderController::allocateRenderJob
                        (this_00,pRVar3,0x20,(float *)&local_1e0,0,"Decal Rendering",
                         (CullingArgs *)this_01);
    *(undefined8 *)(this_02 + 0x560) = 0;
    *(undefined8 *)(this_02 + 0x558) = 0;
    *(undefined8 *)(this_02 + 0x570) = 0;
    *(undefined8 *)(this_02 + 0x568) = 0;
    RenderArgs::setupViewport(this_02,0,0,param_7,param_8);
    CullingArgs::setViewport((CullingArgs *)this_01,param_7,param_8);
    local_cc = 0;
    uStack_f8 = 0;
    local_100 = 0x3f800000;
    uStack_e8 = 0x3f800000;
    uStack_f0 = 0;
    local_d4 = 0;
    local_e0 = 0x3f80000000000000;
    local_d8 = 0;
    local_c4 = 0x3f800000;
    RenderDeviceUtil::makeOrthoProjectionMatrix(param_1,fVar6,fVar7,param_2,fVar4,fVar5,afStack_140)
    ;
    TransformArgs::setupInv
              ((TransformArgs *)this_02,(Matrix4x4 *)&local_100,(Matrix4x4 *)afStack_140,fVar4,fVar5
               ,(Vector3 *)0x0);
    RVar1 = this[0xf39];
    this[0xf39] = (Renderer)0x0;
    RenderController::endRenderingBatch((RenderStats *)this_00,(bool)((char)this + -0x78));
    this[0xf39] = RVar1;
  }
  if (*(long *)(lVar2 + 0x28) == local_b8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


