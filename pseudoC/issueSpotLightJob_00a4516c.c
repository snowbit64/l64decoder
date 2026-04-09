// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: issueSpotLightJob
// Entry Point: 00a4516c
// Size: 236 bytes
// Signature: undefined __thiscall issueSpotLightJob(ShadowRenderController * this, LightSourceQueueItem * param_1, RenderTextureSetup * param_2)


/* ShadowRenderController::issueSpotLightJob(LightSourceQueueItem*, RenderTextureSetup*) */

void __thiscall
ShadowRenderController::issueSpotLightJob
          (ShadowRenderController *this,LightSourceQueueItem *param_1,RenderTextureSetup *param_2)

{
  long lVar1;
  long lVar2;
  CullingArgs *pCStack_4d8;
  RenderArgs *pRStack_4d0;
  Matrix4x4 aMStack_4c8 [64];
  Matrix4x4 aMStack_488 [64];
  char acStack_448 [1024];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (*(char *)(*(long *)(*(long *)(param_1 + 8) + 8) + 0x25) == '\0' ||
      (*(uint *)(*(long *)(*(long *)(param_1 + 8) + 8) + 0x28) & 1) != 0) {
    FUN_00a45258(acStack_448,param_1,"Spotlight shadow %s\n",
                 *(undefined8 *)(*(long *)(param_1 + 0x10) + 8));
    lVar1 = *(long *)(param_1 + 0x10);
    RenderDeviceUtil::computeSpotShadowViewProjection
              (*(Matrix4x4 **)param_1,*(uint *)(*(long *)(*(long *)(param_1 + 8) + 8) + 8),
               *(float *)(lVar1 + 0x19c),*(float *)(lVar1 + 0x194),*(int *)(lVar1 + 0x16c) == 2,
               aMStack_488,aMStack_4c8);
    issueSpotLightJob(this,aMStack_488,aMStack_4c8,*(ShadowQueueItem **)(param_1 + 8),
                      *(float *)(*(long *)(param_1 + 0x10) + 0x194),param_2,acStack_448,&pCStack_4d8
                      ,&pRStack_4d0);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


