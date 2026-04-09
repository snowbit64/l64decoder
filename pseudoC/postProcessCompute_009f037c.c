// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: postProcessCompute
// Entry Point: 009f037c
// Size: 168 bytes
// Signature: undefined __thiscall postProcessCompute(AtmosphereRenderControllerShared * this, ICommandBuffer * param_1, ShaderTexture * param_2, uint param_3, ShaderTexture * param_4, uint param_5, ShaderStructBuffer * param_6, uint param_7, ShaderConstantBuffer * param_8, uint param_9, AdhocShader * param_10, uint param_11, uint param_12, uint param_13)


/* AtmosphereRenderControllerShared::postProcessCompute(ICommandBuffer*,
   AdhocShader::ShaderTexture*, unsigned int, AdhocShader::ShaderTexture*, unsigned int,
   AdhocShader::ShaderStructBuffer*, unsigned int, AdhocShader::ShaderConstantBuffer*, unsigned int,
   AdhocShader const&, unsigned int, unsigned int, unsigned int) */

void __thiscall
AtmosphereRenderControllerShared::postProcessCompute
          (AtmosphereRenderControllerShared *this,ICommandBuffer *param_1,ShaderTexture *param_2,
          uint param_3,ShaderTexture *param_4,uint param_5,ShaderStructBuffer *param_6,uint param_7,
          ShaderConstantBuffer *param_8,uint param_9,AdhocShader *param_10,uint param_11,
          uint param_12,uint param_13)

{
  long *plVar1;
  
  AdhocShader::bindResourcesCs
            (param_10,param_1,param_2,param_3,(ShaderStructBuffer *)0x0,0,param_4,param_5,param_6,
             param_7,param_8,param_9,(ShaderSampler *)&AdhocShader::s_pStandardSamplers,3);
  plVar1 = (long *)(**(code **)(*(long *)param_1 + 0x18))(param_1);
                    /* WARNING: Could not recover jumptable at 0x009f0420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x60))(plVar1,param_11,param_12,param_13);
  return;
}


