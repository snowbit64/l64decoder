// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: postProcessCompute
// Entry Point: 00a3ef54
// Size: 272 bytes
// Signature: undefined __thiscall postProcessCompute(ScreenSpaceProcessor * this, ICommandBuffer * param_1, ShaderTexture * param_2, uint param_3, ShaderStructBuffer * param_4, uint param_5, ShaderTexture * param_6, uint param_7, ShaderStructBuffer * param_8, uint param_9, ShaderConstantBuffer * param_10, uint param_11, AdhocShader * param_12, uint param_13, uint param_14, uint param_15)


/* ScreenSpaceProcessor::postProcessCompute(ICommandBuffer*, AdhocShader::ShaderTexture*, unsigned
   int, AdhocShader::ShaderStructBuffer*, unsigned int, AdhocShader::ShaderTexture*, unsigned int,
   AdhocShader::ShaderStructBuffer*, unsigned int, AdhocShader::ShaderConstantBuffer*, unsigned int,
   AdhocShader const&, unsigned int, unsigned int, unsigned int) */

void __thiscall
ScreenSpaceProcessor::postProcessCompute
          (ScreenSpaceProcessor *this,ICommandBuffer *param_1,ShaderTexture *param_2,uint param_3,
          ShaderStructBuffer *param_4,uint param_5,ShaderTexture *param_6,uint param_7,
          ShaderStructBuffer *param_8,uint param_9,ShaderConstantBuffer *param_10,uint param_11,
          AdhocShader *param_12,uint param_13,uint param_14,uint param_15)

{
  long *plVar1;
  
  AdhocShader::bindResourcesCs
            (param_12,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
             param_10,param_11,(ShaderSampler *)&AdhocShader::s_pStandardSamplers,3);
  plVar1 = (long *)(**(code **)(*(long *)param_1 + 0x18))(param_1);
  (**(code **)(*plVar1 + 0x60))(plVar1,param_13,param_14,param_15);
  AdhocShader::unbindResourcesCs
            (param_12,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
             param_10,param_11,(ShaderSampler *)&AdhocShader::s_pStandardSamplers,3);
  return;
}


