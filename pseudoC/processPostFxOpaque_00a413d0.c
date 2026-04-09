// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processPostFxOpaque
// Entry Point: 00a413d0
// Size: 364 bytes
// Signature: undefined __thiscall processPostFxOpaque(ScreenSpaceProcessor * this, ICommandBuffer * param_1, ShaderTexture * param_2, uint param_3, ShaderConstantBuffer * param_4, uint param_5, AdhocShader * param_6)


/* ScreenSpaceProcessor::processPostFxOpaque(ICommandBuffer*, AdhocShader::ShaderTexture*, unsigned
   int, AdhocShader::ShaderConstantBuffer*, unsigned int, AdhocShader const&) */

void __thiscall
ScreenSpaceProcessor::processPostFxOpaque
          (ScreenSpaceProcessor *this,ICommandBuffer *param_1,ShaderTexture *param_2,uint param_3,
          ShaderConstantBuffer *param_4,uint param_5,AdhocShader *param_6)

{
  (**(code **)(*(long *)param_1 + 0x48))(param_1,*(undefined8 *)(param_6 + 8));
  (**(code **)(*(long *)param_1 + 0xb8))(param_1,*(undefined8 *)(this + 8));
  (**(code **)(*(long *)param_1 + 0xb0))(param_1,*(undefined8 *)(this + 0x18));
  (**(code **)(*(long *)param_1 + 0xc0))(param_1,*(undefined8 *)(this + 0x38));
  (**(code **)(*(long *)param_1 + 0x50))(param_1,0,0,0);
  (**(code **)(*(long *)param_1 + 0x58))(param_1,0);
  AdhocShader::bindResourcesPs
            (param_6,param_1,param_2,param_3,(ShaderStructBuffer *)0x0,0,(ShaderTexture *)0x0,0,
             param_4,param_5,(ShaderSampler *)&AdhocShader::s_pStandardSamplers,3);
  (**(code **)(*(long *)param_1 + 0xe8))(param_1,3,0,0,0,0);
  AdhocShader::unbindResourcesPs
            (param_6,param_1,param_2,param_3,(ShaderStructBuffer *)0x0,0,(ShaderTexture *)0x0,0,
             param_4,param_5,(ShaderSampler *)&AdhocShader::s_pStandardSamplers,3);
  return;
}


