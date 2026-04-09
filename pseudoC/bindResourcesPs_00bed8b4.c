// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: bindResourcesPs
// Entry Point: 00bed8b4
// Size: 528 bytes
// Signature: undefined __thiscall bindResourcesPs(AdhocShader * this, ICommandBuffer * param_1, ShaderTexture * param_2, uint param_3, ShaderStructBuffer * param_4, uint param_5, uint param_6, ShaderTexture * param_7, uint param_8, uint param_9, ShaderConstantBuffer * param_10, uint param_11, ShaderSampler * param_12, uint param_13)


/* AdhocShader::bindResourcesPs(ICommandBuffer*, AdhocShader::ShaderTexture const*, unsigned int,
   AdhocShader::ShaderStructBuffer const*, unsigned int, unsigned int, AdhocShader::ShaderTexture
   const*, unsigned int, unsigned int, AdhocShader::ShaderConstantBuffer const*, unsigned int,
   AdhocShader::ShaderSampler const*, unsigned int) const */

void __thiscall
AdhocShader::bindResourcesPs
          (AdhocShader *this,ICommandBuffer *param_1,ShaderTexture *param_2,uint param_3,
          ShaderStructBuffer *param_4,uint param_5,uint param_6,ShaderTexture *param_7,uint param_8,
          uint param_9,ShaderConstantBuffer *param_10,uint param_11,ShaderSampler *param_12,
          uint param_13)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  char *__s1;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined4 in_stack_fffffffffffffcbc;
  undefined4 in_stack_fffffffffffffccc;
  undefined auStack_2d0 [256];
  undefined4 local_1d0;
  undefined auStack_1c8 [256];
  undefined4 local_c8;
  undefined8 auStack_c0 [4];
  uint local_a0;
  undefined auStack_98 [32];
  undefined4 local_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  (**(code **)(*(long *)param_1 + 0x48))(param_1,*(undefined8 *)(this + 8));
  local_c8 = 0;
  local_1d0 = 0;
  local_78 = 0;
  local_a0 = 0;
  bindInputResources<ICommandBuffer,void(ICommandBuffer::*)(unsigned_int,ITextureObject*),void(ICommandBuffer::*)(unsigned_int,IStructBuffer*),void(ICommandBuffer::*)(unsigned_int,IConstantBuffer*),void(ICommandBuffer::*)(unsigned_int,ISamplerObject*)>
            ((ICommandBuffer *)this,(ShaderTexture *)param_1,(uint)param_2,
             (ShaderStructBuffer *)(ulong)param_3,(uint)param_4,
             (ShaderConstantBuffer *)(ulong)param_5,(uint)param_10,(ShaderSampler *)(ulong)param_11,
             (uint)param_12,(TransitionsDesc *)CONCAT44(in_stack_fffffffffffffcbc,param_13),
             (SHADER_STAGE)auStack_2d0,
             (_func_void_uint_ITextureObject_ptr *)CONCAT44(in_stack_fffffffffffffccc,1),
             (_func_void_uint_IStructBuffer_ptr *)0x68,(_func_void_uint_IConstantBuffer_ptr *)0x1,
             (_func_void_uint_ISamplerObject_ptr *)0x98);
  lVar8 = *(long *)(this + 0x70);
  lVar5 = *(long *)(this + 0x78);
  if (lVar5 != lVar8) {
    uVar6 = 0;
    do {
      if (param_8 != 0) {
        __s1 = *(char **)(lVar8 + uVar6 * 0x10 + 8);
        uVar7 = (ulong)param_8;
        puVar9 = (undefined8 *)(param_7 + 8);
        do {
          iVar3 = strcmp(__s1,(char *)puVar9[-1]);
          if (iVar3 == 0) {
            uVar4 = *puVar9;
            lVar5 = *(long *)param_1;
            uVar1 = *(undefined4 *)(puVar9 + 1);
            auStack_c0[local_a0] = uVar4;
            local_a0 = local_a0 + 1;
            (**(code **)(lVar5 + 0x70))(param_1,*(undefined4 *)(lVar8 + uVar6 * 0x10),uVar4,uVar1);
            lVar8 = *(long *)(this + 0x70);
            lVar5 = *(long *)(this + 0x78);
            break;
          }
          puVar9 = puVar9 + 3;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      uVar6 = (ulong)((int)uVar6 + 1);
    } while (uVar6 < (ulong)(lVar5 - lVar8 >> 4));
  }
  (**(code **)(*(long *)param_1 + 0x120))
            (param_1,local_1d0,auStack_2d0,local_c8,auStack_1c8,0,param_6);
  (**(code **)(*(long *)param_1 + 0x120))(param_1,local_a0,auStack_c0,local_78,auStack_98,1,0);
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


