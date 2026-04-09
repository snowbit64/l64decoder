// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calcDof
// Entry Point: 00a3f7bc
// Size: 1896 bytes
// Signature: undefined __thiscall calcDof(ScreenSpaceProcessor * this, IRenderDevice * param_1, ITextureObject * param_2, ITextureObject * param_3, ITextureObject * param_4, float param_5, float param_6, PostFxParams * param_7)


/* ScreenSpaceProcessor::calcDof(IRenderDevice*, ITextureObject*, ITextureObject*, ITextureObject*,
   float, float, PostFxParams const&) */

void __thiscall
ScreenSpaceProcessor::calcDof
          (ScreenSpaceProcessor *this,IRenderDevice *param_1,ITextureObject *param_2,
          ITextureObject *param_3,ITextureObject *param_4,float param_5,float param_6,
          PostFxParams *param_7)

{
  char **ppcVar1;
  ScreenSpaceProcessor SVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  ITextureObject *local_278;
  char *local_270;
  ITextureObject *pIStack_268;
  undefined4 local_260;
  char *local_258;
  undefined8 uStack_250;
  undefined4 local_248;
  char *local_240;
  undefined8 uStack_238;
  undefined4 local_230;
  char *local_228;
  ITextureObject *pIStack_220;
  undefined4 local_218;
  char *local_210;
  ITextureObject *pIStack_208;
  undefined4 local_200;
  char *local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  char *local_1e0;
  undefined8 uStack_1d8;
  undefined4 local_1d0;
  char *local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  char *local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  char *local_190;
  undefined8 uStack_188;
  undefined4 local_180;
  char *local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  char *local_160;
  undefined8 uStack_158;
  undefined4 local_150;
  char *local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  char *local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  char *local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  char *local_100;
  ITextureObject *pIStack_f8;
  undefined4 local_f0;
  char *local_e8;
  ITextureObject *pIStack_e0;
  undefined4 local_d8;
  char *local_d0;
  undefined8 uStack_c8;
  char *local_c0;
  undefined8 uStack_b8;
  long local_b0;
  
  lVar4 = tpidr_el0;
  local_b0 = *(long *)(lVar4 + 0x28);
  local_278 = param_4;
  plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x138))(param_1);
  fVar14 = *(float *)(param_7 + 0x3c);
  fVar8 = *(float *)(param_7 + 0x40);
  fVar11 = *(float *)(param_7 + 0x44);
  fVar13 = *(float *)(param_7 + 0x68);
  fVar9 = *(float *)(param_7 + 0x48);
  fVar16 = fVar11 / (*(float *)(param_7 + 0x4c) - fVar9);
  uVar12 = *(undefined8 *)(param_7 + 0x60);
  puVar6 = (undefined8 *)
           (**(code **)(**(long **)(this + 0x19d8) + 0x10))(*(long **)(this + 0x19d8),plVar5);
  uVar10 = NEON_fmov(0xbf800000,4);
  uVar15 = 0xbf800000;
  *(float *)(puVar6 + 4) = fVar16;
  *(float *)((long)puVar6 + 0x24) = fVar9 * -fVar16;
  fVar9 = (float)((ulong)uVar12 >> 0x20);
  *(undefined4 *)(puVar6 + 2) = 0x3f800000;
  *(float *)(puVar6 + 5) = fVar11 / fVar14;
  *puVar6 = CONCAT44((float)((ulong)uVar10 >> 0x20) / fVar9,(float)uVar10 / (float)uVar12);
  *(float *)((long)puVar6 + 0x14) = (1.0 - fVar13) / fVar9;
  *(float *)(puVar6 + 1) = -1.0 / fVar13;
  *(float *)((long)puVar6 + 0xc) = 1.0 / fVar13;
  *(float *)(puVar6 + 3) = 1.0 / fVar13;
  *(float *)((long)puVar6 + 0x1c) = (fVar13 + -1.0) / fVar13;
  if (this[0x1a84] != (ScreenSpaceProcessor)0x0) {
    param_6 = 1.0;
  }
  *(float *)((long)puVar6 + 0x2c) = param_6;
  *(undefined4 *)(puVar6 + 6) = *(undefined4 *)(param_7 + 0x50);
  *(undefined4 *)((long)puVar6 + 0x34) = *(undefined4 *)(param_7 + 0x54);
  *(undefined4 *)(puVar6 + 7) = *(undefined4 *)(param_7 + 0x58);
  *(undefined4 *)((long)puVar6 + 0x3c) = *(undefined4 *)(param_7 + 0x5c);
  uVar7 = (**(code **)(*(long *)param_2 + 0x20))(param_2);
  *(float *)(puVar6 + 10) = 1.0 / (float)(uVar7 & 0xffffffff);
  uVar7 = (**(code **)(*(long *)param_2 + 0x28))(param_2);
  *(float *)((long)puVar6 + 0x54) = 1.0 / (float)(uVar7 & 0xffffffff);
  uVar7 = (**(code **)(*(long *)param_3 + 0x20))(param_3);
  *(float *)(puVar6 + 0xb) = 1.0 / (float)(uVar7 & 0xffffffff);
  uVar7 = (**(code **)(*(long *)param_3 + 0x28))(param_3);
  *(undefined4 *)(puVar6 + 9) = 0;
  *(float *)((long)puVar6 + 0x5c) = 1.0 / (float)(uVar7 & 0xffffffff);
  uVar7 = (**(code **)(*(long *)param_3 + 0x28))(param_3);
  *(float *)((long)puVar6 + 0x44) = fVar14;
  *(float *)(puVar6 + 8) = -fVar14 / fVar8;
  *(float *)((long)puVar6 + 0x4c) = 1.0 / (float)(uVar7 & 0xffffffff);
  if (param_7[0x6c] != (PostFxParams)0x0) {
    uVar15 = 0x3f800000;
  }
  *(undefined4 *)(puVar6 + 0xc) = uVar15;
  *(float *)((long)puVar6 + 100) = param_5;
  (**(code **)(**(long **)(this + 0x19d8) + 0x18))(*(long **)(this + 0x19d8),plVar5);
  uStack_b8 = *(undefined8 *)(this + 0x19d8);
  this[0x1a84] = (ScreenSpaceProcessor)0x0;
  local_c0 = "DofParams";
  uStack_c8 = *(undefined8 *)(this + 0x1990);
  local_d0 = "BlurParams";
  local_100 = "sceneTexture";
  local_f0 = 0xffffffff;
  local_e8 = "resolvedSceneDepthTexture";
  local_d8 = 0xffffffff;
  pIStack_f8 = param_2;
  pIStack_e0 = param_3;
  postProcess(this,param_1,(ShaderTexture *)&local_100,2,(ShaderStructBuffer *)0x0,0,
              (ShaderTexture *)0x0,0,(ShaderConstantBuffer *)&local_c0,1,
              (AdhocShader *)(this + 0xd58),(ITextureObject **)(this + 0x1a48),1,0,false,0);
  uStack_128 = *(undefined8 *)(this + 0x1a48);
  uStack_110 = *(undefined8 *)(this + 0x1a18);
  local_120 = 0xffffffff;
  local_130 = "sceneTexture";
  local_118 = "gaussWeights";
  local_108 = 0xffffffff;
  (**(code **)(*plVar5 + 0x120))(plVar5,1,this + 0x1a48,0,0,0,1);
  postProcess(this,param_1,(ShaderTexture *)&local_130,2,(ShaderStructBuffer *)0x0,0,
              (ShaderTexture *)0x0,0,(ShaderConstantBuffer *)&local_d0,1,
              (AdhocShader *)(this + 0x858),(ITextureObject **)(this + 0x1a58),1,0,false,0);
  uStack_158 = *(undefined8 *)(this + 0x1a58);
  local_150 = 0xffffffff;
  uStack_140 = *(undefined8 *)(this + 0x1a18);
  local_138 = 0xffffffff;
  local_160 = "sceneTexture";
  local_148 = "gaussWeights";
  (**(code **)(*plVar5 + 0x120))(plVar5,1,this + 0x1a58,0,0,0,1);
  postProcess(this,param_1,(ShaderTexture *)&local_160,2,(ShaderStructBuffer *)0x0,0,
              (ShaderTexture *)0x0,0,(ShaderConstantBuffer *)&local_d0,1,
              (AdhocShader *)(this + 0x958),(ITextureObject **)(this + 0x1a60),1,0,false,0);
  uStack_188 = *(undefined8 *)(this + 0x1a48);
  local_180 = 0xffffffff;
  local_168 = 0xffffffff;
  local_190 = "nearCoCinit";
  uStack_170 = *(undefined8 *)(this + 0x1a60);
  local_178 = "nearCoCinitBlured";
  (**(code **)(*plVar5 + 0x120))(plVar5,1,this + 0x1a60,0,0,0,1);
  postProcess(this,param_1,(ShaderTexture *)&local_190,2,(ShaderStructBuffer *)0x0,0,
              (ShaderTexture *)0x0,0,(ShaderConstantBuffer *)0x0,0,(AdhocShader *)(this + 0xe58),
              (ITextureObject **)(this + 0x1a50),1,0,false,0);
  uStack_1a0 = *(undefined8 *)(this + 0x1a50);
  local_198 = 0xffffffff;
  local_1a8 = "nearCoC";
  (**(code **)(*plVar5 + 0x120))(plVar5,1,this + 0x1a50,0,0,0,1);
  postProcess(this,param_1,(ShaderTexture *)&local_1a8,1,(ShaderStructBuffer *)0x0,0,
              (ShaderTexture *)0x0,0,(ShaderConstantBuffer *)&local_c0,1,
              (AdhocShader *)(this + 0xf58),(ITextureObject **)(this + 0x1a68),1,0,false,0);
  local_1b0 = *(undefined8 *)(this + 0x1a68);
  (**(code **)(*plVar5 + 0x120))(plVar5,1,&local_1b0,0,0,0,1);
  SVar2 = this[0x1b78];
  if (SVar2 != (ScreenSpaceProcessor)0x0) {
    (**(code **)(*plVar5 + 0x120))
              (plVar5,1,this + (ulong)*(uint *)(this + 0x1a80) * 8 + 0x1a70,0,0,0,1);
    uStack_1f0 = *(undefined8 *)(this + 0x1a68);
    local_1f8 = "smallBlurTexture";
    local_210 = "resolvedSceneDepthTexture";
    uStack_1d8 = *(undefined8 *)(this + 0x18d0);
    local_1e0 = "motionVectorsTexture";
    uStack_1c0 = *(undefined8 *)(this + (ulong)*(uint *)(this + 0x1a80) * 8 + 0x1a70);
    uVar3 = 1 - *(uint *)(this + 0x1a80);
    local_200 = 0xffffffff;
    local_1e8 = 0xffffffff;
    local_1c8 = "farCocTexture";
    *(uint *)(this + 0x1a80) = uVar3;
    local_1d0 = 0xffffffff;
    local_1b8 = 0xffffffff;
    pIStack_208 = param_3;
    postProcess(this,param_1,(ShaderTexture *)&local_210,4,(ShaderStructBuffer *)0x0,0,
                (ShaderTexture *)0x0,0,(ShaderConstantBuffer *)&local_c0,1,
                (AdhocShader *)(this + 0x1158),(ITextureObject **)(this + (ulong)uVar3 * 8 + 0x1a70)
                ,1,0,false,0);
    (**(code **)(*plVar5 + 0x120))
              (plVar5,1,this + (ulong)*(uint *)(this + 0x1a80) * 8 + 0x1a70,0,0,0,1);
  }
  uStack_250 = *(undefined8 *)(this + 0x1a68);
  uStack_238 = *(undefined8 *)(this + 0x1a60);
  local_1f8 = "smallBlurTexture";
  local_258 = "smallBlurTexture";
  uStack_1c0 = *(undefined8 *)(this + (ulong)*(uint *)(this + 0x1a80) * 8 + 0x1a70);
  local_1c8 = "farCocTexture";
  ppcVar1 = &local_270;
  if (SVar2 != (ScreenSpaceProcessor)0x0) {
    ppcVar1 = &local_210;
  }
  local_210 = "sceneTexture";
  local_228 = "resolvedSceneDepthTexture";
  local_200 = 0xffffffff;
  local_1e8 = 0xffffffff;
  local_1e0 = "nearCoCinitBlured";
  local_1d0 = 0xffffffff;
  local_1b8 = 0xffffffff;
  local_270 = "sceneTexture";
  local_260 = 0xffffffff;
  local_248 = 0xffffffff;
  local_240 = "nearCoCinitBlured";
  local_230 = 0xffffffff;
  local_218 = 0xffffffff;
  pIStack_268 = param_2;
  pIStack_220 = param_3;
  pIStack_208 = param_2;
  uStack_1f0 = uStack_250;
  uStack_1d8 = uStack_238;
  postProcess(this,param_1,(ShaderTexture *)ppcVar1,4,(ShaderStructBuffer *)0x0,0,
              (ShaderTexture *)0x0,0,(ShaderConstantBuffer *)&local_c0,1,
              (AdhocShader *)(this + 0x1058),&local_278,1,0,false,0);
  if (*(long *)(lVar4 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


