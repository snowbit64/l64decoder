// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: bindResourcesVs
// Entry Point: 00bee37c
// Size: 264 bytes
// Signature: undefined __thiscall bindResourcesVs(AdhocShader * this, ICommandBuffer * param_1, ShaderTexture * param_2, uint param_3, ShaderStructBuffer * param_4, uint param_5, ShaderConstantBuffer * param_6, uint param_7, ShaderSampler * param_8, uint param_9)


/* AdhocShader::bindResourcesVs(ICommandBuffer*, AdhocShader::ShaderTexture const*, unsigned int,
   AdhocShader::ShaderStructBuffer const*, unsigned int, AdhocShader::ShaderConstantBuffer const*,
   unsigned int, AdhocShader::ShaderSampler const*, unsigned int) const */

void __thiscall
AdhocShader::bindResourcesVs
          (AdhocShader *this,ICommandBuffer *param_1,ShaderTexture *param_2,uint param_3,
          ShaderStructBuffer *param_4,uint param_5,ShaderConstantBuffer *param_6,uint param_7,
          ShaderSampler *param_8,uint param_9)

{
  long lVar1;
  undefined4 in_stack_fffffffffffffccc;
  uint in_stack_fffffffffffffcdc;
  undefined auStack_2d0 [256];
  undefined4 local_1d0;
  undefined4 local_c8;
  undefined4 local_a0;
  undefined4 local_78;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  (**(code **)(*(long *)param_1 + 0x48))(param_1,*(undefined8 *)(this + 8));
  local_c8 = 0;
  local_1d0 = 0;
  local_78 = 0;
  local_a0 = 0;
  bindInputResources<ICommandBuffer,void(ICommandBuffer::*)(unsigned_int,ITextureObject*),void(ICommandBuffer::*)(unsigned_int,IStructBuffer*),void(ICommandBuffer::*)(unsigned_int,IConstantBuffer*),void(ICommandBuffer::*)(unsigned_int,ISamplerObject*)>
            ((ICommandBuffer *)this,(ShaderTexture *)param_1,(uint)param_2,
             (ShaderStructBuffer *)(ulong)param_3,(uint)param_4,
             (ShaderConstantBuffer *)(ulong)param_5,(uint)param_6,(ShaderSampler *)(ulong)param_7,
             (uint)param_8,(TransitionsDesc *)CONCAT44(in_stack_fffffffffffffccc,param_9),
             (SHADER_STAGE)auStack_2d0,
             (_func_void_uint_ITextureObject_ptr *)((ulong)in_stack_fffffffffffffcdc << 0x20),
             (_func_void_uint_IStructBuffer_ptr *)0x60,(_func_void_uint_IConstantBuffer_ptr *)0x1,
             (_func_void_uint_ISamplerObject_ptr *)0x90);
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


