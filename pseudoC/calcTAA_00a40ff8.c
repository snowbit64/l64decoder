// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calcTAA
// Entry Point: 00a40ff8
// Size: 984 bytes
// Signature: undefined __thiscall calcTAA(ScreenSpaceProcessor * this, IRenderDevice * param_1, ITextureObject * param_2, ITextureObject * param_3, ITextureObject * param_4, float param_5, float param_6, float * param_7, ITextureObject * * param_8, ITextureObject * * param_9)


/* ScreenSpaceProcessor::calcTAA(IRenderDevice*, ITextureObject*, ITextureObject*, ITextureObject*,
   float, float, float const*, ITextureObject*&, ITextureObject*&) */

void __thiscall
ScreenSpaceProcessor::calcTAA
          (ScreenSpaceProcessor *this,IRenderDevice *param_1,ITextureObject *param_2,
          ITextureObject *param_3,ITextureObject *param_4,float param_5,float param_6,float *param_7
          ,ITextureObject **param_8,ITextureObject **param_9)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  uint *puVar5;
  long *plVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 local_200 [2];
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1dc;
  undefined8 local_1d4;
  undefined local_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1ac;
  undefined8 local_1a4;
  undefined local_19c;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined4 local_180;
  undefined8 local_17c;
  undefined8 uStack_174;
  undefined local_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_14c;
  undefined8 uStack_144;
  undefined local_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined local_118;
  char *local_110;
  char *local_108;
  long *plStack_100;
  char *local_f8;
  ITextureObject *pIStack_f0;
  undefined4 local_e8;
  char *local_e0;
  ITextureObject *pIStack_d8;
  undefined4 local_d0;
  char *local_c8;
  ITextureObject *pIStack_c0;
  undefined4 local_b8;
  char *local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  char *local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  long local_80;
  
  lVar3 = tpidr_el0;
  local_80 = *(long *)(lVar3 + 0x28);
  plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x138))(param_1);
  uVar1 = *(uint *)(this + 0x18f8);
  *param_8 = *(ITextureObject **)(this + (ulong)(1 - uVar1) * 8 + 0x1920);
  *param_9 = *(ITextureObject **)(this + (ulong)uVar1 * 8 + 0x1920);
  (**(code **)(*plVar4 + 0x120))(plVar4,1,param_8,0,0,1,0xd);
  (**(code **)(*plVar4 + 0x120))
            (plVar4,1,this + (ulong)*(uint *)(this + 0x18f8) * 8 + 0x1920,0,0,0,1);
  plStack_100 = *(long **)(this + 0x19e0);
  local_e0 = "sceneTexture";
  local_d0 = 0xffffffff;
  local_b8 = 0xffffffff;
  local_c8 = "sceneDepthTexture";
  uStack_a8 = *(undefined8 *)(this + (ulong)*(uint *)(this + 0x18f8) * 8 + 0x1920);
  local_a0 = 0xffffffff;
  local_88 = 0xffffffff;
  local_e8 = 0;
  local_b0 = "sceneTemporalHistoryAccumulationTexture";
  uStack_90 = *(undefined8 *)(this + 0x18d0);
  *(uint *)(this + 0x18f8) = 1 - *(uint *)(this + 0x18f8);
  local_98 = "motionVectorsTexture";
  pIStack_f0 = *param_8;
  local_f8 = "outMip1";
  local_108 = "TaaParams";
  pIStack_d8 = param_2;
  pIStack_c0 = param_3;
  puVar5 = (uint *)(**(code **)(*plStack_100 + 0x10))(plStack_100,plVar4);
  uVar1 = *(uint *)(this + 0x1868);
  puVar5[4] = (uint)((*(float *)(this + 0x1900) - *param_7) * (float)(ulong)uVar1);
  fVar8 = *(float *)(this + 0x1904);
  fVar9 = param_7[1];
  uVar11 = *(undefined4 *)(this + 0x186c);
  puVar5[3] = (uint)param_5;
  puVar5[6] = (uint)param_6;
  *puVar5 = uVar1;
  fVar10 = (float)NEON_ucvtf(uVar11);
  puVar5[5] = (uint)((fVar8 - fVar9) * fVar10);
  puVar5[1] = *(uint *)(this + 0x186c);
  puVar5[2] = *(uint *)(this + 0x1b60);
  (**(code **)(**(long **)(this + 0x19e0) + 0x18))(*(long **)(this + 0x19e0),plVar4);
  uVar1 = *(int *)(this + 0x1868) + 0xfU >> 4;
  uVar2 = *(int *)(this + 0x186c) + 0xfU >> 4;
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  if (uVar2 < 2) {
    uVar2 = 1;
  }
  AdhocShader::bindResourcesCs
            ((AdhocShader *)(this + 600),(ICommandBuffer *)plVar4,(ShaderTexture *)&local_e0,4,
             (ShaderStructBuffer *)0x0,0,(ShaderTexture *)&local_f8,1,(ShaderStructBuffer *)0x0,0,
             (ShaderConstantBuffer *)&local_108,1,(ShaderSampler *)&AdhocShader::s_pStandardSamplers
             ,3);
  plVar6 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4);
  (**(code **)(*plVar6 + 0x60))(plVar6,uVar1,uVar2,1);
  AdhocShader::unbindResourcesCs
            ((AdhocShader *)(this + 600),(ICommandBuffer *)plVar4,(ShaderTexture *)&local_e0,4,
             (ShaderStructBuffer *)0x0,0,(ShaderTexture *)&local_f8,1,(ShaderStructBuffer *)0x0,0,
             (ShaderConstantBuffer *)&local_108,1,(ShaderSampler *)&AdhocShader::s_pStandardSamplers
             ,3);
  lVar7 = (**(code **)(*(long *)param_1 + 0x28))(param_1);
  if (*(char *)(lVar7 + 0xa1) != '\0') {
    local_1e8 = 0;
    local_1e0 = 0;
    local_1cc = 0;
    local_1b8 = 0;
    uStack_174 = 0x300000003;
    local_17c = 0x100000002;
    uStack_144 = 0x300000003;
    local_14c = 0x100000002;
    local_200[0] = 2;
    local_1c8 = *(undefined8 *)(this + 0x18d0);
    local_1d4 = 0x300000003;
    local_1b0 = 0;
    local_110 = "discard fast vram render targets";
    local_1f8 = *(undefined8 *)(this + 0x1890);
    uStack_1c0 = 0;
    local_138 = *(undefined8 *)(this + 0x18d8);
    local_1a4 = 0x300000003;
    local_19c = 0;
    local_190 = 0;
    uStack_188 = 0;
    local_198 = 0;
    local_180 = 0;
    local_16c = 0;
    local_168 = 0;
    uStack_160 = 0;
    local_158 = 0;
    local_150 = 0;
    local_13c = 0;
    local_118 = 0;
    uStack_1f0 = 0;
    local_1dc = 0;
    local_1ac = 0;
    uStack_130 = 0;
    local_128 = 0;
    uStack_120 = 0x300000003;
    (**(code **)(*plVar4 + 0x38))
              (plVar4,local_200,0,1,0,0,*(undefined4 *)(this + 0x1868),
               *(undefined4 *)(this + 0x186c));
    (**(code **)(*plVar4 + 0x40))(plVar4);
  }
  if (*(long *)(lVar3 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


