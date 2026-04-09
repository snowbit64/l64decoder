// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: issueShadowMapJobs
// Entry Point: 00a47d08
// Size: 608 bytes
// Signature: undefined __thiscall issueShadowMapJobs(ShadowRenderController * this, vector * param_1, vector * param_2)


/* ShadowRenderController::issueShadowMapJobs(std::__ndk1::vector<LightSourceQueueItem*,
   std::__ndk1::allocator<LightSourceQueueItem*> > const&,
   std::__ndk1::vector<MergedShadowQueueItem, std::__ndk1::allocator<MergedShadowQueueItem> >&) */

RenderTextureSetup * __thiscall
ShadowRenderController::issueShadowMapJobs
          (ShadowRenderController *this,vector *param_1,vector *param_2)

{
  long lVar1;
  RenderTextureSetup *pRVar2;
  undefined8 uVar3;
  LightSourceQueueItem *pLVar4;
  undefined8 extraout_x1;
  LightSourceQueueItem **ppLVar5;
  undefined8 *puVar6;
  LightSourceQueueItem **ppLVar7;
  Matrix4x4 **ppMVar8;
  Matrix4x4 *pMVar9;
  Matrix4x4 *pMVar10;
  Matrix4x4 *pMVar11;
  Matrix4x4 *pMVar12;
  Matrix4x4 *pMVar13;
  Matrix4x4 *pMVar14;
  Matrix4x4 *pMVar15;
  Matrix4x4 *pMVar16;
  Matrix4x4 *pMVar17;
  Matrix4x4 *pMVar18;
  Matrix4x4 *pMVar19;
  Matrix4x4 *pMVar20;
  Matrix4x4 *pMVar21;
  CullingArgs *local_568;
  RenderArgs *pRStack_560;
  undefined2 local_558 [2];
  undefined8 local_554;
  undefined8 uStack_54c;
  undefined8 local_544;
  undefined8 uStack_53c;
  undefined8 local_534;
  undefined8 uStack_52c;
  undefined8 local_524;
  undefined8 uStack_51c;
  undefined8 local_514;
  undefined8 uStack_50c;
  undefined4 local_504;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined4 uStack_4f8;
  undefined4 local_4f4;
  undefined4 uStack_4f0;
  undefined8 uStack_4ec;
  undefined4 local_4e4;
  char acStack_4e0 [1024];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  Matrix4x4 aMStack_98 [64];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((*(long *)param_1 == *(long *)(param_1 + 8)) && (*(long *)param_2 == *(long *)(param_2 + 8)))
  {
    pRVar2 = (RenderTextureSetup *)0x0;
  }
  else {
    pRVar2 = (RenderTextureSetup *)RenderController::getShadowMapRenderTexture();
    if (pRVar2 != (RenderTextureSetup *)0x0) {
      uVar3 = RenderController::getShadowMap();
      local_558[0] = 0;
      local_4e4 = 0;
      local_504 = 0;
      uStack_4ec = 0;
      uStack_4f0 = 0;
      uStack_500 = SUB84(pRVar2,0);
      uStack_4fc = (undefined4)((ulong)pRVar2 >> 0x20);
      uStack_4f8 = (undefined4)uVar3;
      local_4f4 = (undefined4)((ulong)uVar3 >> 0x20);
      uStack_54c = 0;
      local_554 = 0;
      uStack_53c = 0;
      local_544 = 0;
      uStack_52c = 0;
      local_534 = 0;
      uStack_51c = 0;
      local_524 = 0;
      uStack_50c = 0;
      local_514 = 0;
      pRVar2 = (RenderTextureSetup *)
               RenderController::beginRenderTexture
                         (*(RenderController **)this,(RenderTargetInfo *)local_558);
      ppLVar5 = *(LightSourceQueueItem ***)(param_1 + 8);
      for (ppLVar7 = *(LightSourceQueueItem ***)param_1; ppLVar7 != ppLVar5; ppLVar7 = ppLVar7 + 1)
      {
        pLVar4 = *ppLVar7;
        if (*(int *)(*(long *)(pLVar4 + 0x10) + 0x16c) == 0) {
          issueDirectionalLightJobs(this,pLVar4,pRVar2);
        }
        else if (*(int *)(*(long *)(pLVar4 + 0x10) + 0x16c) == 2) {
          issueSpotLightJob(this,pLVar4,pRVar2);
        }
        ppLVar5 = *(LightSourceQueueItem ***)(param_1 + 8);
      }
      ppMVar8 = *(Matrix4x4 ***)param_2;
      if (ppMVar8 != *(Matrix4x4 ***)(param_2 + 8)) {
        do {
          Matrix4x4::invert(aMStack_98,*ppMVar8);
          puVar6 = (undefined8 *)ppMVar8[2];
          uStack_d8 = puVar6[1];
          local_e0 = *puVar6;
          uStack_c8 = puVar6[3];
          uStack_d0 = puVar6[2];
          uStack_b8 = puVar6[5];
          local_c0 = puVar6[4];
          uStack_a8 = puVar6[7];
          uStack_b0 = puVar6[6];
          FUN_00a45258(acStack_4e0,extraout_x1,"Merged shadow: %s\n",ppMVar8[5]);
          issueSpotLightJob(this,aMStack_98,(Matrix4x4 *)&local_e0,(ShadowQueueItem *)ppMVar8[1],
                            *(float *)((long)ppMVar8 + 0x1c),pRVar2,acStack_4e0,&local_568,
                            &pRStack_560);
          pMVar12 = ppMVar8[0x24];
          pMVar11 = ppMVar8[0x23];
          pMVar10 = ppMVar8[0x26];
          pMVar9 = ppMVar8[0x25];
          pMVar14 = ppMVar8[0x22];
          pMVar13 = ppMVar8[0x21];
          *(Matrix4x4 **)(local_568 + 0x2c8) = ppMVar8[0x27];
          pMVar15 = ppMVar8[0xb];
          pMVar17 = ppMVar8[0xe];
          pMVar16 = ppMVar8[0xd];
          pMVar19 = ppMVar8[0x10];
          pMVar18 = ppMVar8[0xf];
          *(Matrix4x4 **)(local_568 + 0x1f0) = ppMVar8[0xc];
          *(Matrix4x4 **)(local_568 + 0x1e8) = pMVar15;
          *(Matrix4x4 **)(local_568 + 0x200) = pMVar17;
          *(Matrix4x4 **)(local_568 + 0x1f8) = pMVar16;
          *(Matrix4x4 **)(local_568 + 0x210) = pMVar19;
          *(Matrix4x4 **)(local_568 + 0x208) = pMVar18;
          pMVar17 = ppMVar8[0x11];
          pMVar16 = ppMVar8[0x14];
          pMVar15 = ppMVar8[0x13];
          pMVar19 = ppMVar8[0x18];
          pMVar18 = ppMVar8[0x17];
          pMVar21 = ppMVar8[0x16];
          pMVar20 = ppMVar8[0x15];
          *(Matrix4x4 **)(local_568 + 0x220) = ppMVar8[0x12];
          *(Matrix4x4 **)(local_568 + 0x218) = pMVar17;
          *(Matrix4x4 **)(local_568 + 0x250) = pMVar19;
          *(Matrix4x4 **)(local_568 + 0x248) = pMVar18;
          *(Matrix4x4 **)(local_568 + 0x240) = pMVar21;
          *(Matrix4x4 **)(local_568 + 0x238) = pMVar20;
          *(Matrix4x4 **)(local_568 + 0x230) = pMVar16;
          *(Matrix4x4 **)(local_568 + 0x228) = pMVar15;
          pMVar17 = ppMVar8[0x19];
          pMVar16 = ppMVar8[0x1c];
          pMVar15 = ppMVar8[0x1b];
          pMVar19 = ppMVar8[0x20];
          pMVar18 = ppMVar8[0x1f];
          pMVar21 = ppMVar8[0x1e];
          pMVar20 = ppMVar8[0x1d];
          *(Matrix4x4 **)(local_568 + 0x260) = ppMVar8[0x1a];
          *(Matrix4x4 **)(local_568 + 600) = pMVar17;
          ppMVar8 = ppMVar8 + 0x28;
          *(Matrix4x4 **)(local_568 + 0x290) = pMVar19;
          *(Matrix4x4 **)(local_568 + 0x288) = pMVar18;
          *(Matrix4x4 **)(local_568 + 0x280) = pMVar21;
          *(Matrix4x4 **)(local_568 + 0x278) = pMVar20;
          *(Matrix4x4 **)(local_568 + 0x270) = pMVar16;
          *(Matrix4x4 **)(local_568 + 0x268) = pMVar15;
          *(Matrix4x4 **)(local_568 + 0x2a0) = pMVar14;
          *(Matrix4x4 **)(local_568 + 0x298) = pMVar13;
          *(Matrix4x4 **)(local_568 + 0x2c0) = pMVar10;
          *(Matrix4x4 **)(local_568 + 0x2b8) = pMVar9;
          *(Matrix4x4 **)(local_568 + 0x2b0) = pMVar12;
          *(Matrix4x4 **)(local_568 + 0x2a8) = pMVar11;
        } while (ppMVar8 != *(Matrix4x4 ***)(param_2 + 8));
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pRVar2;
}


