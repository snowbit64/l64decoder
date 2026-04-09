// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calcAvgLuminance
// Entry Point: 00a3ff24
// Size: 1064 bytes
// Signature: undefined __thiscall calcAvgLuminance(ScreenSpaceProcessor * this, ICommandBuffer * param_1, ITextureObject * param_2, PostFxParams * param_3, float param_4)


/* ScreenSpaceProcessor::calcAvgLuminance(ICommandBuffer*, ITextureObject*, PostFxParams const&,
   float) */

void __thiscall
ScreenSpaceProcessor::calcAvgLuminance
          (ScreenSpaceProcessor *this,ICommandBuffer *param_1,ITextureObject *param_2,
          PostFxParams *param_3,float param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  undefined8 *puVar5;
  void *__s;
  long *plVar6;
  long lVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char *local_118;
  undefined8 uStack_110;
  char *local_108;
  undefined8 uStack_100;
  char *local_f8;
  undefined8 uStack_f0;
  char *local_e8;
  undefined8 uStack_e0;
  char *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  char *local_b8;
  undefined8 uStack_b0;
  char *local_a8;
  ITextureObject *pIStack_a0;
  undefined4 local_98;
  char *local_90;
  undefined8 uStack_88;
  long local_80;
  
  lVar3 = tpidr_el0;
  local_80 = *(long *)(lVar3 + 0x28);
  GlobalTimeManager::getInstance();
  fVar8 = (float)GlobalTimeManager::getCurrentDt();
  puVar5 = (undefined8 *)
           (**(code **)(**(long **)(this + 0x1980) + 0x10))(*(long **)(this + 0x1980),param_1);
  uVar9 = *(undefined8 *)param_3;
  uVar11 = *(undefined8 *)(param_3 + 0x18);
  uVar10 = *(undefined8 *)(param_3 + 0x10);
  puVar5[1] = *(undefined8 *)(param_3 + 8);
  *puVar5 = uVar9;
  puVar5[3] = uVar11;
  puVar5[2] = uVar10;
  if (0.0 < param_4) {
    puVar5[2] = 0;
  }
  *(float *)(puVar5 + 3) = fVar8 / 1000.0;
  (**(code **)(**(long **)(this + 0x1980) + 0x18))(*(long **)(this + 0x1980),param_1);
  __s = (void *)(**(code **)(**(long **)(this + 0x1a30) + 0x10))
                          (*(long **)(this + 0x1a30),param_1,0,0x100,1);
  memset(__s,0,0x400);
  (**(code **)(**(long **)(this + 0x1a30) + 0x18))(*(long **)(this + 0x1a30),param_1);
  (**(code **)(*(long *)param_1 + 0x120))(param_1,0,0,1,this + 0x1a30,1,8);
  puVar5 = (undefined8 *)
           (**(code **)(**(long **)(this + 0x19f0) + 0x10))(*(long **)(this + 0x19f0),param_1);
  *puVar5 = *(undefined8 *)(param_3 + 0x20);
  (**(code **)(**(long **)(this + 0x19f0) + 0x18))(*(long **)(this + 0x19f0),param_1);
  iVar4 = (**(code **)(*(long *)param_2 + 0x20))(param_2);
  uVar1 = iVar4 + 0xfU >> 4;
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  iVar4 = (**(code **)(*(long *)param_2 + 0x28))(param_2);
  uStack_88 = *(undefined8 *)(this + 0x19f0);
  uVar2 = iVar4 + 0xfU >> 4;
  local_90 = "HistogramParams";
  if (uVar2 < 2) {
    uVar2 = 1;
  }
  uStack_b0 = *(undefined8 *)(this + 0x1a30);
  local_a8 = "sceneTexture";
  local_98 = 0xffffffff;
  local_b8 = "outMip1";
  pIStack_a0 = param_2;
  AdhocShader::bindResourcesCs
            ((AdhocShader *)(this + 0x458),param_1,(ShaderTexture *)&local_a8,1,
             (ShaderStructBuffer *)0x0,0,(ShaderTexture *)0x0,0,(ShaderStructBuffer *)&local_b8,1,
             (ShaderConstantBuffer *)&local_90,1,(ShaderSampler *)&AdhocShader::s_pStandardSamplers,
             3);
  plVar6 = (long *)(**(code **)(*(long *)param_1 + 0x18))(param_1);
  (**(code **)(*plVar6 + 0x60))(plVar6,uVar1,uVar2,1);
  AdhocShader::unbindResourcesCs
            ((AdhocShader *)(this + 0x458),param_1,(ShaderTexture *)&local_a8,1,
             (ShaderStructBuffer *)0x0,0,(ShaderTexture *)0x0,0,(ShaderStructBuffer *)&local_b8,1,
             (ShaderConstantBuffer *)&local_90,1,(ShaderSampler *)&AdhocShader::s_pStandardSamplers,
             3);
  uStack_c0 = *(undefined8 *)(this + 0x1a30);
  lVar7 = (ulong)*(uint *)(this + 0x18fc) * 8;
  *(uint *)(this + 0x18fc) = 1 - *(uint *)(this + 0x18fc);
  local_c8 = *(undefined8 *)(this + lVar7 + 0x1a38);
  (**(code **)(*(long *)param_1 + 0x120))(param_1,0,0,2,&local_c8,0,8);
  (**(code **)(*(long *)param_1 + 0x120))
            (param_1,0,0,1,this + (ulong)*(uint *)(this + 0x18fc) * 8 + 0x1a38,1,0xc);
  uStack_d0 = *(undefined8 *)(this + 0x1980);
  uStack_e0 = *(undefined8 *)(this + 0x19f0);
  local_d8 = "ExposureParams";
  local_e8 = "HistogramParams";
  uStack_100 = *(undefined8 *)(this + 0x1a30);
  uStack_f0 = *(undefined8 *)(this + lVar7 + 0x1a38);
  local_108 = "luminanceHistogram";
  uStack_110 = *(undefined8 *)(this + (ulong)*(uint *)(this + 0x18fc) * 8 + 0x1a38);
  local_f8 = "eyeAdaptedLuminanceBuffer";
  local_118 = "outMip1";
  AdhocShader::bindResourcesCs
            ((AdhocShader *)(this + 0x558),param_1,(ShaderTexture *)0x0,0,
             (ShaderStructBuffer *)&local_108,2,(ShaderTexture *)0x0,0,
             (ShaderStructBuffer *)&local_118,1,(ShaderConstantBuffer *)&local_e8,2,
             (ShaderSampler *)&AdhocShader::s_pStandardSamplers,3);
  plVar6 = (long *)(**(code **)(*(long *)param_1 + 0x18))(param_1);
  (**(code **)(*plVar6 + 0x60))(plVar6,1,1,1);
  AdhocShader::unbindResourcesCs
            ((AdhocShader *)(this + 0x558),param_1,(ShaderTexture *)0x0,0,
             (ShaderStructBuffer *)&local_108,2,(ShaderTexture *)0x0,0,
             (ShaderStructBuffer *)&local_118,1,(ShaderConstantBuffer *)&local_e8,2,
             (ShaderSampler *)&AdhocShader::s_pStandardSamplers,3);
  if (*(long *)(lVar3 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


