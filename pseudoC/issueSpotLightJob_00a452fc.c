// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: issueSpotLightJob
// Entry Point: 00a452fc
// Size: 640 bytes
// Signature: undefined __thiscall issueSpotLightJob(ShadowRenderController * this, Matrix4x4 * param_1, Matrix4x4 * param_2, ShadowQueueItem * param_3, float param_4, RenderTextureSetup * param_5, char * param_6, CullingArgs * * param_7, RenderArgs * * param_8)


/* ShadowRenderController::issueSpotLightJob(Matrix4x4 const&, Matrix4x4 const&, ShadowQueueItem&,
   float, RenderTextureSetup*, char const*, CullingArgs**, RenderArgs**) */

void __thiscall
ShadowRenderController::issueSpotLightJob
          (ShadowRenderController *this,Matrix4x4 *param_1,Matrix4x4 *param_2,
          ShadowQueueItem *param_3,float param_4,RenderTextureSetup *param_5,char *param_6,
          CullingArgs **param_7,RenderArgs **param_8)

{
  uint uVar1;
  long lVar2;
  RenderArgs *this_00;
  undefined8 *puVar3;
  undefined8 *puVar4;
  CullingArgs *pCVar5;
  uint *puVar6;
  undefined8 local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  pCVar5 = *(CullingArgs **)(this + 0x10);
  pCVar5 = (CullingArgs *)
           RenderController::allocateCullingJob
                     (*(RenderController **)this,pCVar5,10,*(uint *)(pCVar5 + 0x3ac),
                      *(uint *)(pCVar5 + 0x3b0),0,0);
  *param_7 = pCVar5;
  local_80 = 0;
  this_00 = (RenderArgs *)
            RenderController::allocateRenderJob
                      (*(RenderController **)this,param_5,2,(float *)&local_80,0,param_6,pCVar5);
  *param_8 = this_00;
  if (this[0x74] != (ShadowRenderController)0x0) {
    puVar3 = (undefined8 *)RenderArgs::lockZStencilRegion();
    puVar4 = puVar3;
    if (*(char *)(*(long *)(*(long *)(this + 8) + 0x30) + 0x18) != '\0') {
      puVar3[1] = 0xbf8000003f800000;
      *puVar3 = 0xbf800000bf800000;
      puVar3[3] = 0xbf800000bed413cc;
      puVar3[2] = 0x3f800000bed413cc;
      puVar3[5] = 0x3f800000bf800000;
      puVar3[4] = 0x3f8000003f800000;
      puVar3[7] = 0x3ed413cc3f800000;
      puVar3[6] = 0xbed413cc3f800000;
      puVar4 = puVar3 + 0x12;
      puVar3[9] = 0x3f800000bf800000;
      puVar3[8] = 0x3f800000bf800000;
      puVar3[0xb] = 0x3f8000003ed413cc;
      puVar3[10] = 0xbf8000003f800000;
      puVar3[0xd] = 0x3f8000003f800000;
      puVar3[0xc] = 0x3f800000bed413cc;
      puVar3[0xf] = 0x3ed413cc3f800000;
      puVar3[0xe] = 0x3f8000003f800000;
      puVar3[0x11] = 0x3f8000003f800000;
      puVar3[0x10] = 0x3ed413cc3f800000;
    }
    puVar4[1] = 0xbf80000000000000;
    *puVar4 = 0xbed413ccbf800000;
    puVar4[3] = 0x3f800000bed413cc;
    puVar4[2] = 0x3ed413cc;
    puVar4[5] = 0xbed413cc;
    puVar4[4] = 0xbf80000000000000;
    puVar4[7] = 0x3ed413cc00000000;
    puVar4[6] = 0x3f800000bed413cc;
    puVar4[9] = 0xbed413ccbf800000;
    puVar4[8] = 0x3f800000;
    puVar4[0xb] = 0x3f800000;
    puVar4[10] = 0x3ed413cc00000000;
    puVar4[0xd] = 0xbf80000000000000;
    puVar4[0xc] = 0x3ed413cc3f800000;
    puVar4[0xf] = 0x3ed413cc3f800000;
    puVar4[0xe] = 0xbed413cc;
    puVar4[0x11] = 0xbed413cc;
    puVar4[0x10] = 0x3f80000000000000;
    puVar4[0x13] = 0x3f80000000000000;
    puVar4[0x12] = 0xbed413ccbf800000;
    puVar4[0x15] = 0xbf8000003ed413cc;
    puVar4[0x14] = 0xbed413cc;
    puVar4[0x17] = 0xbed413cc;
    puVar4[0x16] = 0xbf80000000000000;
    puVar4[0x19] = 0xbed413cc00000000;
    puVar4[0x18] = 0xbf8000003ed413cc;
    puVar4[0x1a] = 0xbf800000;
    RenderArgs::unlockZStencilRegion(this_00,(Vector3 *)(puVar4 + 0x1b));
  }
  TransformArgs::setupFwd
            ((TransformArgs *)this_00,param_1,param_2,0.2,param_4,
             (Vector3 *)(*(long *)(this + 0x10) + 900));
  initShadowMapRegion(this,param_3,param_2,param_1,0);
  puVar6 = *(uint **)(param_3 + 8);
  uVar1 = puVar6[2];
  RenderArgs::setupViewport(this_00,*puVar6,puVar6[1],uVar1,uVar1);
  CullingArgs::setViewport(pCVar5,uVar1,uVar1);
  *(undefined8 *)(this_00 + 0x3b8) = *(undefined8 *)(param_3 + 0x68);
  *(undefined8 *)(this_00 + 0x3c0) = *(undefined8 *)(param_3 + 0x70);
  CullingArgs::copyTransformData(pCVar5,(TransformArgs *)this_00);
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


