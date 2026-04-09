// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processSkyFx
// Entry Point: 009ee1d0
// Size: 1600 bytes
// Signature: undefined __thiscall processSkyFx(AtmosphereRenderController * this, IRenderDevice * param_1, ITextureObject * param_2, LightSource * param_3, PostFxParams * param_4, RenderArgs * param_5)


/* AtmosphereRenderController::processSkyFx(IRenderDevice*, ITextureObject*, LightSource const*,
   PostFxParams const&, RenderArgs const&) */

void __thiscall
AtmosphereRenderController::processSkyFx
          (AtmosphereRenderController *this,IRenderDevice *param_1,ITextureObject *param_2,
          LightSource *param_3,PostFxParams *param_4,RenderArgs *param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  ulong uVar8;
  ITextureObject *local_1a0;
  ITextureObject *local_198;
  ITextureObject *local_190;
  ITextureObject *local_188;
  ITextureObject *local_180;
  ITextureObject *local_178;
  ITextureObject *local_170;
  char *local_168;
  long *plStack_160;
  undefined4 local_158;
  char *local_150;
  long *plStack_148;
  char *local_140;
  undefined8 uStack_138;
  char *local_130;
  long *plStack_128;
  undefined4 local_120;
  char *local_118;
  ITextureObject *pIStack_110;
  undefined4 local_108;
  char *local_100;
  ITextureObject *pIStack_f8;
  undefined4 local_f0;
  char *local_e8;
  ITextureObject *pIStack_e0;
  undefined4 local_d8;
  char *local_d0;
  ITextureObject *pIStack_c8;
  undefined4 local_c0;
  char *local_b8;
  ITextureObject *pIStack_b0;
  undefined4 local_a8;
  char *local_a0;
  ITextureObject *pIStack_98;
  undefined4 local_90;
  char *local_88;
  ITextureObject *pIStack_80;
  undefined4 local_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  if (*(int *)(this + 0x97c) != 0) {
    plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x138))(param_1);
    updateParams(this,(ICommandBuffer *)plVar5,param_2,param_3,param_4,param_5);
    AtmosphereRenderControllerShared::getSharedTextures
              (*(AtmosphereRenderControllerShared **)(this + 0x998),&local_170,&local_178,&local_180
               ,&local_188,&local_190,&local_198,&local_1a0);
    local_130 = "resolvedSceneDepthHalfTexture";
    local_120 = 0xffffffff;
    local_108 = 0xffffffff;
    local_118 = "atmParticleDensityTexture";
    pIStack_110 = local_170;
    local_f0 = 0xffffffff;
    local_d8 = 0xffffffff;
    local_100 = "moonTexture";
    pIStack_f8 = local_178;
    local_c0 = 0xffffffff;
    local_a8 = 0xffffffff;
    local_e8 = "cirrusCloudsTexture";
    pIStack_e0 = local_180;
    local_90 = 0xffffffff;
    local_78 = 0xffffffff;
    local_d0 = "cloudBaseTexture";
    pIStack_c8 = local_188;
    local_b8 = "cloudCoverageTexture";
    pIStack_b0 = local_190;
    local_a0 = "cloudHeightDensityWeightTexture";
    pIStack_98 = local_198;
    local_88 = "cloudErosionTexture";
    pIStack_80 = local_1a0;
    plStack_128 = (long *)param_2;
    (**(code **)(*plVar5 + 0x120))(plVar5,1,this + 0x938,0,0,1,8);
    plStack_148 = *(long **)(this + 0x918);
    uStack_138 = *(undefined8 *)(this + 0x920);
    plStack_160 = *(long **)(this + 0x938);
    local_158 = 0;
    local_150 = "CloudParams";
    local_140 = "ParticipatingMediaParams";
    local_168 = "outMip1";
    iVar4 = (**(code **)(*plStack_160 + 0x20))();
    uVar7 = iVar4 + 7U >> 3;
    if (uVar7 < 2) {
      uVar7 = 1;
    }
    iVar4 = (**(code **)(**(long **)(this + 0x938) + 0x28))(*(long **)(this + 0x938));
    uVar1 = *(uint *)(this + 0x990);
    uVar2 = iVar4 + 7U >> 3;
    if (uVar2 < 2) {
      uVar2 = 1;
    }
    AdhocShader::bindResourcesCs
              ((AdhocShader *)(this + (ulong)uVar1 * 0x100 + 0x200),(ICommandBuffer *)plVar5,
               (ShaderTexture *)&local_130,8,(ShaderStructBuffer *)0x0,0,(ShaderTexture *)&local_168
               ,1,(ShaderStructBuffer *)0x0,0,(ShaderConstantBuffer *)&local_150,2,
               (ShaderSampler *)&AdhocShader::s_pStandardSamplers,3);
    plVar6 = (long *)(**(code **)(*plVar5 + 0x18))(plVar5);
    (**(code **)(*plVar6 + 0x60))(plVar6,uVar7,uVar2,1);
    AdhocShader::unbindResourcesCs
              ((AdhocShader *)(this + (ulong)uVar1 * 0x100 + 0x200),(ICommandBuffer *)plVar5,
               (ShaderTexture *)&local_130,8,(ShaderStructBuffer *)0x0,0,(ShaderTexture *)&local_168
               ,1,(ShaderStructBuffer *)0x0,0,(ShaderConstantBuffer *)&local_150,2,
               (ShaderSampler *)&AdhocShader::s_pStandardSamplers,3);
    (**(code **)(*plVar5 + 0x120))(plVar5,1,this + 0x938,0,0,0,8);
    if (this[0x994] != (AtmosphereRenderController)0x0) {
      uVar7 = *(uint *)(this + 0x964);
      uVar8 = (ulong)(1 - uVar7);
      if (this[0x950] != (AtmosphereRenderController)0x0) {
        (**(code **)(*plVar5 + 0x120))(plVar5,1,this + uVar8 * 8 + 0x940,0,0,1,0xc);
        plStack_128 = *(long **)(this + uVar8 * 8 + 0x940);
        local_120 = 0;
        local_130 = "outMip1";
        iVar4 = (**(code **)(*plStack_128 + 0x20))();
        uVar7 = iVar4 + 7U >> 3;
        if (uVar7 < 2) {
          uVar7 = 1;
        }
        iVar4 = (**(code **)(**(long **)(this + uVar8 * 8 + 0x940) + 0x28))
                          (*(long **)(this + uVar8 * 8 + 0x940));
        uVar2 = iVar4 + 7U >> 3;
        if (uVar2 < 2) {
          uVar2 = 1;
        }
        AdhocShader::bindResourcesCs
                  ((AdhocShader *)(this + 0x100),(ICommandBuffer *)plVar5,(ShaderTexture *)0x0,0,
                   (ShaderStructBuffer *)0x0,0,(ShaderTexture *)&local_130,1,
                   (ShaderStructBuffer *)0x0,0,(ShaderConstantBuffer *)0x0,0,
                   (ShaderSampler *)&AdhocShader::s_pStandardSamplers,3);
        plVar6 = (long *)(**(code **)(*plVar5 + 0x18))(plVar5);
        (**(code **)(*plVar6 + 0x60))(plVar6,uVar7,uVar2,1);
        AdhocShader::unbindResourcesCs
                  ((AdhocShader *)(this + 0x100),(ICommandBuffer *)plVar5,(ShaderTexture *)0x0,0,
                   (ShaderStructBuffer *)0x0,0,(ShaderTexture *)&local_130,1,
                   (ShaderStructBuffer *)0x0,0,(ShaderConstantBuffer *)0x0,0,
                   (ShaderSampler *)&AdhocShader::s_pStandardSamplers,3);
        this[0x950] = (AtmosphereRenderController)0x0;
        (**(code **)(*plVar5 + 0x120))(plVar5,1,this + uVar8 * 8 + 0x940,0,0,0,8);
        uVar7 = *(uint *)(this + 0x964);
      }
      plStack_160 = *(long **)(this + 0x928);
      local_168 = "CloudReprojectionParams";
      plStack_128 = *(long **)(this + 0x938);
      local_130 = "subFrame";
      pIStack_110 = *(ITextureObject **)(this + uVar8 * 8 + 0x940);
      local_120 = 0xffffffff;
      local_108 = 0xffffffff;
      local_f0 = 0xffffffff;
      local_118 = "prevFrame";
      local_100 = "resolvedSceneDepthHalfTexture";
      pIStack_f8 = param_2;
      (**(code **)(*plVar5 + 0x120))(plVar5,1,this + (ulong)uVar7 * 8 + 0x940,0,0,1,0xc);
      local_140 = (char *)((ulong)local_140 & 0xffffffff00000000);
      plStack_148 = *(long **)(this + (ulong)*(uint *)(this + 0x964) * 8 + 0x940);
      local_150 = "outMip1";
      iVar4 = (**(code **)(*plStack_148 + 0x20))();
      uVar7 = iVar4 + 7U >> 3;
      if (uVar7 < 2) {
        uVar7 = 1;
      }
      iVar4 = (**(code **)(**(long **)(this + (ulong)*(uint *)(this + 0x964) * 8 + 0x940) + 0x28))()
      ;
      uVar2 = iVar4 + 7U >> 3;
      if (uVar2 < 2) {
        uVar2 = 1;
      }
      AdhocShader::bindResourcesCs
                ((AdhocShader *)(this + 0x600),(ICommandBuffer *)plVar5,(ShaderTexture *)&local_130,
                 3,(ShaderStructBuffer *)0x0,0,(ShaderTexture *)&local_150,1,
                 (ShaderStructBuffer *)0x0,0,(ShaderConstantBuffer *)&local_168,1,
                 (ShaderSampler *)&AdhocShader::s_pStandardSamplers,3);
      plVar6 = (long *)(**(code **)(*plVar5 + 0x18))(plVar5);
      (**(code **)(*plVar6 + 0x60))(plVar6,uVar7,uVar2,1);
      AdhocShader::unbindResourcesCs
                ((AdhocShader *)(this + 0x600),(ICommandBuffer *)plVar5,(ShaderTexture *)&local_130,
                 3,(ShaderStructBuffer *)0x0,0,(ShaderTexture *)&local_150,1,
                 (ShaderStructBuffer *)0x0,0,(ShaderConstantBuffer *)&local_168,1,
                 (ShaderSampler *)&AdhocShader::s_pStandardSamplers,3);
      (**(code **)(*plVar5 + 0x120))
                (plVar5,1,this + (ulong)*(uint *)(this + 0x964) * 8 + 0x940,0,0,0,8);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


