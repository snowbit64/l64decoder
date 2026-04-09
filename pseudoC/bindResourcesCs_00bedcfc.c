// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: bindResourcesCs
// Entry Point: 00bedcfc
// Size: 188 bytes
// Signature: undefined __thiscall bindResourcesCs(AdhocShader * this, ICommandBuffer * param_1, ShaderTexture * param_2, uint param_3, ShaderStructBuffer * param_4, uint param_5, ShaderTexture * param_6, uint param_7, ShaderStructBuffer * param_8, uint param_9, ShaderConstantBuffer * param_10, uint param_11, ShaderSampler * param_12, uint param_13)


/* AdhocShader::bindResourcesCs(ICommandBuffer*, AdhocShader::ShaderTexture const*, unsigned int,
   AdhocShader::ShaderStructBuffer const*, unsigned int, AdhocShader::ShaderTexture const*, unsigned
   int, AdhocShader::ShaderStructBuffer const*, unsigned int, AdhocShader::ShaderConstantBuffer
   const*, unsigned int, AdhocShader::ShaderSampler const*, unsigned int) const */

void __thiscall
AdhocShader::bindResourcesCs
          (AdhocShader *this,ICommandBuffer *param_1,ShaderTexture *param_2,uint param_3,
          ShaderStructBuffer *param_4,uint param_5,ShaderTexture *param_6,uint param_7,
          ShaderStructBuffer *param_8,uint param_9,ShaderConstantBuffer *param_10,uint param_11,
          ShaderSampler *param_12,uint param_13)

{
  IComputeCommandBuffer *pIVar1;
  
  pIVar1 = (IComputeCommandBuffer *)(**(code **)(*(long *)param_1 + 0x18))(param_1);
  bindResourcesCs(this,pIVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                  param_10,param_11,param_12,param_13);
  return;
}


