// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unbindResourcesVs
// Entry Point: 00bee484
// Size: 84 bytes
// Signature: undefined __thiscall unbindResourcesVs(AdhocShader * this, ICommandBuffer * param_1, ShaderTexture * param_2, uint param_3, ShaderStructBuffer * param_4, uint param_5, ShaderConstantBuffer * param_6, uint param_7, ShaderSampler * param_8, uint param_9)


/* AdhocShader::unbindResourcesVs(ICommandBuffer*, AdhocShader::ShaderTexture const*, unsigned int,
   AdhocShader::ShaderStructBuffer const*, unsigned int, AdhocShader::ShaderConstantBuffer const*,
   unsigned int, AdhocShader::ShaderSampler const*, unsigned int) const */

void __thiscall
AdhocShader::unbindResourcesVs
          (AdhocShader *this,ICommandBuffer *param_1,ShaderTexture *param_2,uint param_3,
          ShaderStructBuffer *param_4,uint param_5,ShaderConstantBuffer *param_6,uint param_7,
          ShaderSampler *param_8,uint param_9)

{
  uint in_stack_ffffffffffffffa4;
  
  unbindInputResources<ICommandBuffer,void(ICommandBuffer::*)(unsigned_int,ITextureObject*),void(ICommandBuffer::*)(unsigned_int,IStructBuffer*),void(ICommandBuffer::*)(unsigned_int,IConstantBuffer*),void(ICommandBuffer::*)(unsigned_int,ISamplerObject*)>
            ((ICommandBuffer *)this,(ShaderTexture *)param_1,(uint)param_2,
             (ShaderStructBuffer *)(ulong)param_3,(uint)param_4,
             (ShaderConstantBuffer *)(ulong)param_5,(uint)param_6,(ShaderSampler *)(ulong)param_7,
             (uint)param_8,param_9,
             (_func_void_uint_ITextureObject_ptr *)((ulong)in_stack_ffffffffffffffa4 << 0x20),
             (_func_void_uint_IStructBuffer_ptr *)0x60,(_func_void_uint_IConstantBuffer_ptr *)0x1,
             (_func_void_uint_ISamplerObject_ptr *)0x90);
  return;
}


