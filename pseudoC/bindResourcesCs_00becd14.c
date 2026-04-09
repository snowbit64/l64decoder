// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: bindResourcesCs
// Entry Point: 00becd14
// Size: 736 bytes
// Signature: undefined __thiscall bindResourcesCs(AdhocShader * this, ICommandBuffer * param_1, ShaderTexture * param_2, uint param_3, ShaderStructBuffer * param_4, uint param_5, uint param_6, ShaderTexture * param_7, uint param_8, ShaderStructBuffer * param_9, uint param_10, uint param_11, ShaderConstantBuffer * param_12, uint param_13, ShaderSampler * param_14, uint param_15)


/* AdhocShader::bindResourcesCs(ICommandBuffer*, AdhocShader::ShaderTexture const*, unsigned int,
   AdhocShader::ShaderStructBuffer const*, unsigned int, unsigned int, AdhocShader::ShaderTexture
   const*, unsigned int, AdhocShader::ShaderStructBuffer const*, unsigned int, unsigned int,
   AdhocShader::ShaderConstantBuffer const*, unsigned int, AdhocShader::ShaderSampler const*,
   unsigned int) const */

void __thiscall
AdhocShader::bindResourcesCs
          (AdhocShader *this,ICommandBuffer *param_1,ShaderTexture *param_2,uint param_3,
          ShaderStructBuffer *param_4,uint param_5,uint param_6,ShaderTexture *param_7,uint param_8,
          ShaderStructBuffer *param_9,uint param_10,uint param_11,ShaderConstantBuffer *param_12,
          uint param_13,ShaderSampler *param_14,uint param_15)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  char *pcVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined4 in_stack_fffffffffffffcac;
  undefined4 in_stack_fffffffffffffcbc;
  undefined auStack_2d0 [256];
  undefined4 local_1d0;
  undefined auStack_1c8 [256];
  undefined4 local_c8;
  undefined8 auStack_c0 [4];
  uint local_a0;
  undefined8 auStack_98 [4];
  uint local_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x18))(param_1);
  (**(code **)(*plVar4 + 0x18))(plVar4,*(undefined8 *)(this + 8));
  local_c8 = 0;
  local_1d0 = 0;
  local_78 = 0;
  local_a0 = 0;
  bindInputResources<IComputeCommandBuffer,void(IComputeCommandBuffer::*)(unsigned_int,ITextureObject*,unsigned_int),void(IComputeCommandBuffer::*)(unsigned_int,IStructBuffer*),void(IComputeCommandBuffer::*)(unsigned_int,IConstantBuffer*),void(IComputeCommandBuffer::*)(unsigned_int,ISamplerObject*)>
            ((IComputeCommandBuffer *)this,(ShaderTexture *)plVar4,(uint)param_2,
             (ShaderStructBuffer *)(ulong)param_3,(uint)param_4,
             (ShaderConstantBuffer *)(ulong)param_5,(uint)param_12,(ShaderSampler *)(ulong)param_13,
             (uint)param_14,(TransitionsDesc *)CONCAT44(in_stack_fffffffffffffcac,param_15),
             (SHADER_STAGE)auStack_2d0,
             (_func_void_uint_ITextureObject_ptr_uint *)CONCAT44(in_stack_fffffffffffffcbc,2),
             (_func_void_uint_IStructBuffer_ptr *)0x20,(_func_void_uint_IConstantBuffer_ptr *)0x1,
             (_func_void_uint_ISamplerObject_ptr *)0x50);
  lVar7 = *(long *)(this + 0x88);
  lVar10 = *(long *)(this + 0x90);
  if (lVar10 != lVar7) {
    uVar11 = 0;
    do {
      if (param_8 != 0) {
        pcVar8 = *(char **)(lVar7 + uVar11 * 0x10 + 8);
        uVar6 = (ulong)param_8;
        puVar9 = (undefined8 *)(param_7 + 8);
        do {
          iVar3 = strcmp(pcVar8,(char *)puVar9[-1]);
          if (iVar3 == 0) {
            uVar5 = *puVar9;
            uVar1 = *(undefined4 *)(puVar9 + 1);
            auStack_c0[local_a0] = uVar5;
            local_a0 = local_a0 + 1;
            (**(code **)(*plVar4 + 0x30))(plVar4,*(undefined4 *)(lVar7 + uVar11 * 0x10),uVar5,uVar1)
            ;
            lVar7 = *(long *)(this + 0x88);
            lVar10 = *(long *)(this + 0x90);
            break;
          }
          puVar9 = puVar9 + 3;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      uVar11 = (ulong)((int)uVar11 + 1);
    } while (uVar11 < (ulong)(lVar10 - lVar7 >> 4));
    if (lVar10 != lVar7) {
      uVar11 = 0;
      do {
        if (param_10 != 0) {
          pcVar8 = *(char **)(lVar7 + uVar11 * 0x10 + 8);
          uVar6 = (ulong)param_10;
          puVar9 = (undefined8 *)(param_9 + 8);
          do {
            iVar3 = strcmp(pcVar8,(char *)puVar9[-1]);
            if (iVar3 == 0) {
              auStack_98[local_78] = *puVar9;
              local_78 = local_78 + 1;
              (**(code **)(*plVar4 + 0x58))(plVar4,*(undefined4 *)(lVar7 + uVar11 * 0x10));
              lVar7 = *(long *)(this + 0x88);
              lVar10 = *(long *)(this + 0x90);
              break;
            }
            puVar9 = puVar9 + 2;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        uVar11 = (ulong)((int)uVar11 + 1);
      } while (uVar11 < (ulong)(lVar10 - lVar7 >> 4));
    }
  }
  (**(code **)(*(long *)param_1 + 0x120))
            (param_1,local_1d0,auStack_2d0,local_c8,auStack_1c8,0,param_6);
  (**(code **)(*(long *)param_1 + 0x120))
            (param_1,local_a0,auStack_c0,local_78,auStack_98,1,param_11);
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


