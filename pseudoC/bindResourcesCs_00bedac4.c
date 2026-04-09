// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: bindResourcesCs
// Entry Point: 00bedac4
// Size: 568 bytes
// Signature: undefined __thiscall bindResourcesCs(AdhocShader * this, IComputeCommandBuffer * param_1, ShaderTexture * param_2, uint param_3, ShaderStructBuffer * param_4, uint param_5, ShaderTexture * param_6, uint param_7, ShaderStructBuffer * param_8, uint param_9, ShaderConstantBuffer * param_10, uint param_11, ShaderSampler * param_12, uint param_13)


/* AdhocShader::bindResourcesCs(IComputeCommandBuffer*, AdhocShader::ShaderTexture const*, unsigned
   int, AdhocShader::ShaderStructBuffer const*, unsigned int, AdhocShader::ShaderTexture const*,
   unsigned int, AdhocShader::ShaderStructBuffer const*, unsigned int,
   AdhocShader::ShaderConstantBuffer const*, unsigned int, AdhocShader::ShaderSampler const*,
   unsigned int) const */

void __thiscall
AdhocShader::bindResourcesCs
          (AdhocShader *this,IComputeCommandBuffer *param_1,ShaderTexture *param_2,uint param_3,
          ShaderStructBuffer *param_4,uint param_5,ShaderTexture *param_6,uint param_7,
          ShaderStructBuffer *param_8,uint param_9,ShaderConstantBuffer *param_10,uint param_11,
          ShaderSampler *param_12,uint param_13)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  ulong uVar9;
  undefined4 in_stack_fffffffffffffcac;
  undefined4 in_stack_fffffffffffffcbc;
  undefined auStack_2d0 [256];
  undefined4 local_1d0;
  undefined4 local_c8;
  undefined4 local_a0;
  undefined4 local_78;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  (**(code **)(*(long *)param_1 + 0x18))(param_1,*(undefined8 *)(this + 8));
  local_c8 = 0;
  local_1d0 = 0;
  local_78 = 0;
  local_a0 = 0;
  bindInputResources<IComputeCommandBuffer,void(IComputeCommandBuffer::*)(unsigned_int,ITextureObject*,unsigned_int),void(IComputeCommandBuffer::*)(unsigned_int,IStructBuffer*),void(IComputeCommandBuffer::*)(unsigned_int,IConstantBuffer*),void(IComputeCommandBuffer::*)(unsigned_int,ISamplerObject*)>
            ((IComputeCommandBuffer *)this,(ShaderTexture *)param_1,(uint)param_2,
             (ShaderStructBuffer *)(ulong)param_3,(uint)param_4,
             (ShaderConstantBuffer *)(ulong)param_5,(uint)param_10,(ShaderSampler *)(ulong)param_11,
             (uint)param_12,(TransitionsDesc *)CONCAT44(in_stack_fffffffffffffcac,param_13),
             (SHADER_STAGE)auStack_2d0,
             (_func_void_uint_ITextureObject_ptr_uint *)CONCAT44(in_stack_fffffffffffffcbc,2),
             (_func_void_uint_IStructBuffer_ptr *)0x20,(_func_void_uint_IConstantBuffer_ptr *)0x1,
             (_func_void_uint_ISamplerObject_ptr *)0x50);
  lVar6 = *(long *)(this + 0x88);
  lVar7 = *(long *)(this + 0x90);
  if (lVar7 != lVar6) {
    uVar9 = 0;
    do {
      if (param_7 != 0) {
        pcVar5 = *(char **)(lVar6 + uVar9 * 0x10 + 8);
        puVar8 = (undefined4 *)(param_6 + 0x10);
        uVar4 = (ulong)param_7;
        do {
          iVar2 = strcmp(pcVar5,*(char **)(puVar8 + -4));
          if (iVar2 == 0) {
            (**(code **)(*(long *)param_1 + 0x30))
                      (param_1,*(undefined4 *)(lVar6 + uVar9 * 0x10),*(undefined8 *)(puVar8 + -2),
                       *puVar8);
            lVar6 = *(long *)(this + 0x88);
            lVar7 = *(long *)(this + 0x90);
            break;
          }
          puVar8 = puVar8 + 6;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      uVar9 = (ulong)((int)uVar9 + 1);
    } while (uVar9 < (ulong)(lVar7 - lVar6 >> 4));
    if (lVar7 != lVar6) {
      uVar9 = 0;
      do {
        if (param_9 != 0) {
          pcVar5 = *(char **)(lVar6 + uVar9 * 0x10 + 8);
          puVar3 = (undefined8 *)(param_8 + 8);
          uVar4 = (ulong)param_9;
          do {
            iVar2 = strcmp(pcVar5,(char *)puVar3[-1]);
            if (iVar2 == 0) {
              (**(code **)(*(long *)param_1 + 0x58))
                        (param_1,*(undefined4 *)(lVar6 + uVar9 * 0x10),*puVar3);
              lVar6 = *(long *)(this + 0x88);
              lVar7 = *(long *)(this + 0x90);
              break;
            }
            puVar3 = puVar3 + 2;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        uVar9 = (ulong)((int)uVar9 + 1);
      } while (uVar9 < (ulong)(lVar7 - lVar6 >> 4));
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


