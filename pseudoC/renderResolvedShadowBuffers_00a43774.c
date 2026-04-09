// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: renderResolvedShadowBuffers
// Entry Point: 00a43774
// Size: 936 bytes
// Signature: undefined __thiscall renderResolvedShadowBuffers(ShadowBufferRenderTask * this, ICommandBuffer * param_1)


/* ShadowBufferRenderController::ShadowBufferRenderTask::renderResolvedShadowBuffers(ICommandBuffer*)
    */

void __thiscall
ShadowBufferRenderController::ShadowBufferRenderTask::renderResolvedShadowBuffers
          (ShadowBufferRenderTask *this,ICommandBuffer *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  char *local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  char *local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  char *local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  char *local_190;
  undefined8 local_188;
  undefined4 local_180;
  char *local_178;
  undefined8 uStack_170;
  char *local_168;
  undefined8 local_160;
  undefined4 local_158;
  char *local_150;
  undefined8 uStack_148;
  undefined4 local_140;
  char *local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  char *local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  char *local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  char *local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  char *local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  char *local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  char *local_a8;
  undefined8 uStack_a0;
  char *local_98;
  undefined8 uStack_90;
  char *local_88;
  undefined8 uStack_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  EngineManager::getInstance();
  lVar7 = *(long *)(this + 0x40);
  uVar1 = *(uint *)(lVar7 + 0x21d0);
  lVar5 = *(long *)(lVar7 + 0x30);
  uStack_90 = *(undefined8 *)(lVar5 + 0x48);
  uStack_a0 = *(undefined8 *)(lVar5 + 0x50);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = ((*(int *)(lVar7 + 0x21c0) + uVar1) - 1) / uVar1;
  }
  uVar1 = *(uint *)(lVar7 + 0x21d4);
  local_a8 = "samplerPointClamp";
  uStack_80 = *(undefined8 *)(lVar5 + 0x40);
  local_98 = "samplerBilinearWrap";
  uVar3 = 0;
  if (uVar1 != 0) {
    uVar3 = ((*(int *)(lVar7 + 0x21c4) + uVar1) - 1) / uVar1;
  }
  local_88 = "samplerBilinearClamp";
  local_78 = "samplerCmpShadow";
  local_70 = RenderController::getShadowMapSampler();
  puVar8 = *(undefined8 **)(this + 0x40);
  if (puVar8[0x16] != 0) {
    uStack_148 = *(undefined8 *)(this + 0x30);
    local_160 = *(undefined8 *)(this + 0x38);
    local_178 = (char *)0x0;
    uStack_170 = 0;
    local_150 = "depthShadowMap";
    local_168 = "sceneDepthTexture";
    uStack_130 = puVar8[0x43b];
    local_158 = 0xffffffff;
    local_140 = 0xffffffff;
    local_138 = "blueNoiseTextures";
    uStack_118 = puVar8[0x10];
    uStack_100 = puVar8[0x11];
    local_128 = 0xffffffff;
    local_110 = 0xffffffff;
    local_f8 = 0xffffffff;
    local_120 = "cloudBaseTexture";
    local_e0 = 0xffffffff;
    local_108 = "cloudHeightDensityWeightTexture";
    uStack_e8 = puVar8[0x12];
    uStack_d0 = puVar8[0x13];
    local_c8 = 0xffffffff;
    local_f0 = "cloudErosionTexture";
    local_d8 = "cirrusCloudsTexture";
    local_c0 = "cloudCoverageTexture";
    local_b8 = puVar8[0x14];
    local_b0 = 0xffffffff;
    local_1c0 = "outNoisyShadowsTexture";
    local_1b8 = *puVar8;
    local_1b0 = 0;
    local_1a8 = "outDebugTexture";
    local_1a0 = puVar8[2];
    local_198 = 0;
    local_190 = "outDebugTexture2";
    local_188 = puVar8[3];
    local_180 = 0;
    local_1e8 = puVar8[9];
    uStack_1d8 = 0;
    local_1e0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    local_1f0 = "PCSSDirectionalData";
    AdhocShader::bindResourcesCs
              ((AdhocShader *)puVar8[0x17],param_1,(ShaderTexture *)&local_168,7,
               (ShaderStructBuffer *)&local_178,0,0xd,(ShaderTexture *)&local_1c0,3,
               (ShaderStructBuffer *)0x0,0,0xd,(ShaderConstantBuffer *)&local_1f0,1,
               (ShaderSampler *)&local_a8,4);
    plVar6 = (long *)(**(code **)(*(long *)param_1 + 0x18))(param_1);
    (**(code **)(*plVar6 + 0x60))(plVar6,uVar2,uVar3,1);
    puVar8 = *(undefined8 **)(this + 0x40);
  }
  uStack_148 = *(undefined8 *)(this + 0x30);
  local_160 = *(undefined8 *)(this + 0x38);
  local_158 = 0xffffffff;
  uStack_130 = puVar8[0x43b];
  local_140 = 0xffffffff;
  local_128 = 0xffffffff;
  local_138 = "blueNoiseTextures";
  uStack_118 = puVar8[0xe];
  uStack_100 = puVar8[0xf];
  local_f8 = 0xffffffff;
  local_110 = 0xffffffff;
  local_150 = "depthShadowMap";
  local_168 = "sceneDepthTexture";
  local_108 = "clusterDepthBuffer";
  uStack_170 = puVar8[0xc];
  local_1e8 = puVar8[0xd];
  local_120 = "clusterGridBuffer";
  local_1b8 = puVar8[1];
  local_1b0 = 0;
  local_1f0 = "clusterLightsBuffer";
  local_1a8 = "outDebug1";
  local_1a0 = puVar8[2];
  local_198 = 0;
  local_1c0 = "outSpotShadowAtlas";
  local_190 = "outDebugUint";
  local_188 = puVar8[4];
  local_180 = 0;
  local_178 = "SpotCB";
  AdhocShader::bindResourcesCs
            ((AdhocShader *)(puVar8 + 0x418),param_1,(ShaderTexture *)&local_168,5,
             (ShaderStructBuffer *)&local_1f0,1,0xd,(ShaderTexture *)&local_1c0,3,
             (ShaderStructBuffer *)0x0,0,0xd,(ShaderConstantBuffer *)&local_178,1,
             (ShaderSampler *)&local_a8,4);
  plVar6 = (long *)(**(code **)(*(long *)param_1 + 0x18))(param_1);
  (**(code **)(*plVar6 + 0x60))(plVar6,uVar2,uVar3,1);
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


