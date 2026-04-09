// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeSkySH
// Entry Point: 009ee930
// Size: 708 bytes
// Signature: undefined __thiscall computeSkySH(AtmosphereRenderController * this, IRenderDevice * param_1, ICommandBuffer * param_2, IStructBuffer * param_3, ITextureObject * param_4, LightSource * param_5, PostFxParams * param_6, Vector3 * param_7, uint param_8, uint param_9)


/* AtmosphereRenderController::computeSkySH(IRenderDevice*, ICommandBuffer*, IStructBuffer*,
   ITextureObject*, LightSource const*, PostFxParams const&, Vector3 const&, unsigned int, unsigned
   int) */

void __thiscall
AtmosphereRenderController::computeSkySH
          (AtmosphereRenderController *this,IRenderDevice *param_1,ICommandBuffer *param_2,
          IStructBuffer *param_3,ITextureObject *param_4,LightSource *param_5,PostFxParams *param_6,
          Vector3 *param_7,uint param_8,uint param_9)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  float fVar4;
  ITextureObject *local_170;
  ITextureObject *local_168;
  ITextureObject *local_160;
  ITextureObject *local_158;
  ITextureObject *local_150;
  ITextureObject *pIStack_148;
  ITextureObject *local_140;
  long *local_138;
  char *local_130;
  long *plStack_128;
  char *local_120;
  undefined8 uStack_118;
  char *local_110;
  undefined8 uStack_108;
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
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  local_138 = (long *)param_3;
  udpateSkySHParams(this,param_2,param_5,param_6,param_7);
  AtmosphereRenderControllerShared::getSharedTextures
            (*(AtmosphereRenderControllerShared **)(this + 0x998),&local_140,&pIStack_148,&local_150
             ,&local_158,&local_160,&local_168,&local_170);
  puVar2 = (undefined8 *)(**(code **)(*(long *)param_3 + 0x10))(param_3,param_2,0,0xd,1);
  *(undefined4 *)(puVar2 + 6) = 0;
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  (**(code **)(*local_138 + 0x18))(local_138,param_2);
  (**(code **)(*(long *)param_2 + 0x120))(param_2,0,0,1,&local_138,1,8);
  fVar4 = *(float *)(param_6 + 0x284);
  local_100 = "atmParticleDensityTexture";
  pIStack_f8 = local_140;
  local_f0 = 0xffffffff;
  local_d8 = 0xffffffff;
  local_e8 = "cirrusCloudsTexture";
  pIStack_e0 = local_150;
  local_c0 = 0xffffffff;
  local_a8 = 0xffffffff;
  local_d0 = "cloudBaseTexture";
  pIStack_c8 = local_158;
  local_90 = 0xffffffff;
  local_78 = 0xffffffff;
  local_b8 = "cloudCoverageTexture";
  pIStack_b0 = local_160;
  local_a0 = "cloudHeightDensityWeightTexture";
  pIStack_98 = local_168;
  local_88 = "cloudErosionTexture";
  pIStack_80 = local_170;
  uStack_118 = *(undefined8 *)(this + 0x930);
  local_120 = "CloudParamsSH";
  uStack_108 = *(undefined8 *)(this + 0x920);
  local_110 = "ParticipatingMediaParams";
  local_130 = "outMip1";
  plStack_128 = local_138;
  AdhocShader::bindResourcesCs
            ((AdhocShader *)(this + (ulong)(0.01 < fVar4) * 0x100 + 0x400),param_2,
             (ShaderTexture *)&local_100,6,(ShaderStructBuffer *)0x0,0,(ShaderTexture *)0x0,0,
             (ShaderStructBuffer *)&local_130,1,(ShaderConstantBuffer *)&local_120,2,
             (ShaderSampler *)&AdhocShader::s_pStandardSamplers,3);
  plVar3 = (long *)(**(code **)(*(long *)param_2 + 0x18))(param_2);
  (**(code **)(*plVar3 + 0x60))(plVar3,param_8 + 7 >> 3,param_9 + 7 >> 3,1);
  AdhocShader::unbindResourcesCs
            ((AdhocShader *)(this + (ulong)(0.01 < fVar4) * 0x100 + 0x400),param_2,
             (ShaderTexture *)&local_100,6,(ShaderStructBuffer *)0x0,0,(ShaderTexture *)0x0,0,
             (ShaderStructBuffer *)&local_130,1,(ShaderConstantBuffer *)&local_120,2,
             (ShaderSampler *)&AdhocShader::s_pStandardSamplers,3);
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


