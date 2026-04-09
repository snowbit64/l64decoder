// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: bindResourcesPs
// Entry Point: 00bee82c
// Size: 420 bytes
// Signature: undefined __thiscall bindResourcesPs(AdhocShader * this, ICommandBuffer * param_1, ShaderTexture * param_2, uint param_3, ShaderStructBuffer * param_4, uint param_5, ShaderTexture * param_6, uint param_7, ShaderConstantBuffer * param_8, uint param_9, ShaderSampler * param_10, uint param_11)


/* AdhocShader::bindResourcesPs(ICommandBuffer*, AdhocShader::ShaderTexture const*, unsigned int,
   AdhocShader::ShaderStructBuffer const*, unsigned int, AdhocShader::ShaderTexture const*, unsigned
   int, AdhocShader::ShaderConstantBuffer const*, unsigned int, AdhocShader::ShaderSampler const*,
   unsigned int) const */

void __thiscall
AdhocShader::bindResourcesPs
          (AdhocShader *this,ICommandBuffer *param_1,ShaderTexture *param_2,uint param_3,
          ShaderStructBuffer *param_4,uint param_5,ShaderTexture *param_6,uint param_7,
          ShaderConstantBuffer *param_8,uint param_9,ShaderSampler *param_10,uint param_11)

{
  long lVar1;
  int iVar2;
  char *__s1;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined4 in_stack_fffffffffffffcbc;
  undefined4 in_stack_fffffffffffffccc;
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
             (ShaderConstantBuffer *)(ulong)param_5,(uint)param_8,(ShaderSampler *)(ulong)param_9,
             (uint)param_10,(TransitionsDesc *)CONCAT44(in_stack_fffffffffffffcbc,param_11),
             (SHADER_STAGE)auStack_2d0,
             (_func_void_uint_ITextureObject_ptr *)CONCAT44(in_stack_fffffffffffffccc,1),
             (_func_void_uint_IStructBuffer_ptr *)0x68,(_func_void_uint_IConstantBuffer_ptr *)0x1,
             (_func_void_uint_ISamplerObject_ptr *)0x98);
  lVar5 = *(long *)(this + 0x70);
  lVar6 = *(long *)(this + 0x78);
  if (lVar6 != lVar5) {
    uVar3 = 0;
    do {
      if (param_7 != 0) {
        __s1 = *(char **)(lVar5 + uVar3 * 0x10 + 8);
        uVar4 = (ulong)param_7;
        puVar7 = (undefined4 *)(param_6 + 0x10);
        do {
          iVar2 = strcmp(__s1,*(char **)(puVar7 + -4));
          if (iVar2 == 0) {
            (**(code **)(*(long *)param_1 + 0x70))
                      (param_1,*(undefined4 *)(lVar5 + uVar3 * 0x10),*(undefined8 *)(puVar7 + -2),
                       *puVar7);
            lVar5 = *(long *)(this + 0x70);
            lVar6 = *(long *)(this + 0x78);
            break;
          }
          puVar7 = puVar7 + 6;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      uVar3 = (ulong)((int)uVar3 + 1);
    } while (uVar3 < (ulong)(lVar6 - lVar5 >> 4));
  }
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


