// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processDepthBuffer
// Entry Point: 00a3e808
// Size: 624 bytes
// Signature: undefined __thiscall processDepthBuffer(ScreenSpaceProcessor * this, ICommandBuffer * param_1, ITextureObject * param_2, RenderArgs * param_3, ITextureObject * param_4, ITextureObject * param_5, ITextureObject * param_6)


/* ScreenSpaceProcessor::processDepthBuffer(ICommandBuffer*, ITextureObject*, RenderArgs const*,
   ITextureObject*, ITextureObject*, ITextureObject*) */

void __thiscall
ScreenSpaceProcessor::processDepthBuffer
          (ScreenSpaceProcessor *this,ICommandBuffer *param_1,ITextureObject *param_2,
          RenderArgs *param_3,ITextureObject *param_4,ITextureObject *param_5,
          ITextureObject *param_6)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  uint uVar6;
  undefined8 uVar7;
  char *local_f0;
  undefined8 uStack_e8;
  char *local_e0;
  ITextureObject *pIStack_d8;
  undefined4 local_d0;
  char *local_c8;
  ITextureObject *pIStack_c0;
  undefined4 local_b8;
  char *local_b0;
  ITextureObject *pIStack_a8;
  undefined4 local_a0;
  char *local_98;
  ITextureObject *pIStack_90;
  undefined4 local_88;
  undefined8 local_80;
  float fStack_78;
  float fStack_74;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  fStack_78 = -1.0 / *(float *)(param_3 + 0x80);
  uVar7 = NEON_ucvtf(*(undefined8 *)(this + 0x1868),4);
  fStack_74 = -1.0 / *(float *)(param_3 + 0x94);
  local_80 = CONCAT44(2.0 / (*(float *)(param_3 + 0x94) * (float)((ulong)uVar7 >> 0x20)),
                      2.0 / (*(float *)(param_3 + 0x80) * (float)uVar7));
  puVar4 = (undefined8 *)(**(code **)(**(long **)(this + 0x19f8) + 0x10))();
  puVar4[1] = CONCAT44(fStack_74,fStack_78);
  *puVar4 = local_80;
  *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(param_3 + 0xc0);
  (**(code **)(**(long **)(this + 0x19f8) + 0x18))(*(long **)(this + 0x19f8),param_1);
  if ((*(int *)(this + 0x1b40) == 0) || (1.0 <= *(float *)(this + 0x1b68))) {
    if (*(long *)(this + 0x1b70) == 0) {
      uVar6 = 1;
    }
    else {
      uVar6 = 3;
      if (*(int *)(*(long *)(this + 0x1b70) + 0x97c) == 0) {
        uVar6 = 1;
      }
    }
  }
  else {
    uVar6 = 3;
  }
  uStack_e8 = *(undefined8 *)(this + 0x19f8);
  local_d0 = 0;
  local_b8 = 0;
  local_98 = "sceneDepthTexture";
  local_88 = 0xffffffff;
  local_e0 = "outMip1";
  uVar1 = (*(int *)(this + 0x1868) + 1U >> 1) + 0xf >> 4;
  local_a0 = 0;
  local_c8 = "outMip2";
  local_f0 = "DepthBufferLinearizeParams";
  local_b0 = "outMip3";
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  uVar2 = (*(int *)(this + 0x186c) + 1U >> 1) + 0xf >> 4;
  if (uVar2 < 2) {
    uVar2 = 1;
  }
  pIStack_d8 = param_4;
  pIStack_c0 = param_5;
  pIStack_a8 = param_6;
  pIStack_90 = param_2;
  AdhocShader::bindResourcesCs
            ((AdhocShader *)(this + 0x1258),param_1,(ShaderTexture *)&local_98,1,
             (ShaderStructBuffer *)0x0,0,(ShaderTexture *)&local_e0,uVar6,(ShaderStructBuffer *)0x0,
             0,(ShaderConstantBuffer *)&local_f0,1,
             (ShaderSampler *)&AdhocShader::s_pStandardSamplers,3);
  plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x18))(param_1);
  (**(code **)(*plVar5 + 0x60))(plVar5,uVar1,uVar2,1);
  AdhocShader::unbindResourcesCs
            ((AdhocShader *)(this + 0x1258),param_1,(ShaderTexture *)&local_98,1,
             (ShaderStructBuffer *)0x0,0,(ShaderTexture *)&local_e0,uVar6,(ShaderStructBuffer *)0x0,
             0,(ShaderConstantBuffer *)&local_f0,1,
             (ShaderSampler *)&AdhocShader::s_pStandardSamplers,3);
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


