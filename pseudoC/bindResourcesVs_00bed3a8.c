// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: bindResourcesVs
// Entry Point: 00bed3a8
// Size: 348 bytes
// Signature: undefined __thiscall bindResourcesVs(AdhocShader * this, ICommandBuffer * param_1, ShaderTexture * param_2, uint param_3, ShaderStructBuffer * param_4, uint param_5, uint param_6, ShaderConstantBuffer * param_7, uint param_8, ShaderSampler * param_9, uint param_10)


/* AdhocShader::bindResourcesVs(ICommandBuffer*, AdhocShader::ShaderTexture const*, unsigned int,
   AdhocShader::ShaderStructBuffer const*, unsigned int, unsigned int,
   AdhocShader::ShaderConstantBuffer const*, unsigned int, AdhocShader::ShaderSampler const*,
   unsigned int) const */

void __thiscall
AdhocShader::bindResourcesVs
          (AdhocShader *this,ICommandBuffer *param_1,ShaderTexture *param_2,uint param_3,
          ShaderStructBuffer *param_4,uint param_5,uint param_6,ShaderConstantBuffer *param_7,
          uint param_8,ShaderSampler *param_9,uint param_10)

{
  long lVar1;
  undefined4 in_stack_fffffffffffffcbc;
  uint in_stack_fffffffffffffccc;
  undefined auStack_2d0 [256];
  undefined4 local_1d0;
  undefined auStack_1c8 [256];
  undefined4 local_c8;
  undefined auStack_c0 [32];
  undefined4 local_a0;
  undefined auStack_98 [32];
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
             (ShaderConstantBuffer *)(ulong)param_5,(uint)param_7,(ShaderSampler *)(ulong)param_8,
             (uint)param_9,(TransitionsDesc *)CONCAT44(in_stack_fffffffffffffcbc,param_10),
             (SHADER_STAGE)auStack_2d0,
             (_func_void_uint_ITextureObject_ptr *)((ulong)in_stack_fffffffffffffccc << 0x20),
             (_func_void_uint_IStructBuffer_ptr *)0x60,(_func_void_uint_IConstantBuffer_ptr *)0x1,
             (_func_void_uint_ISamplerObject_ptr *)0x90);
  (**(code **)(*(long *)param_1 + 0x120))
            (param_1,local_1d0,auStack_2d0,local_c8,auStack_1c8,0,param_6);
  (**(code **)(*(long *)param_1 + 0x120))(param_1,local_a0,auStack_c0,local_78,auStack_98,1,0);
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


