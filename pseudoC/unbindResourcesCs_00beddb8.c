// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unbindResourcesCs
// Entry Point: 00beddb8
// Size: 428 bytes
// Signature: undefined __thiscall unbindResourcesCs(AdhocShader * this, IComputeCommandBuffer * param_1, ShaderTexture * param_2, uint param_3, ShaderStructBuffer * param_4, uint param_5, ShaderTexture * param_6, uint param_7, ShaderStructBuffer * param_8, uint param_9, ShaderConstantBuffer * param_10, uint param_11, ShaderSampler * param_12, uint param_13)


/* AdhocShader::unbindResourcesCs(IComputeCommandBuffer*, AdhocShader::ShaderTexture const*,
   unsigned int, AdhocShader::ShaderStructBuffer const*, unsigned int, AdhocShader::ShaderTexture
   const*, unsigned int, AdhocShader::ShaderStructBuffer const*, unsigned int,
   AdhocShader::ShaderConstantBuffer const*, unsigned int, AdhocShader::ShaderSampler const*,
   unsigned int) const */

void __thiscall
AdhocShader::unbindResourcesCs
          (AdhocShader *this,IComputeCommandBuffer *param_1,ShaderTexture *param_2,uint param_3,
          ShaderStructBuffer *param_4,uint param_5,ShaderTexture *param_6,uint param_7,
          ShaderStructBuffer *param_8,uint param_9,ShaderConstantBuffer *param_10,uint param_11,
          ShaderSampler *param_12,uint param_13)

{
  int iVar1;
  char **ppcVar2;
  ulong uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined4 in_stack_ffffffffffffff44;
  
  unbindInputResources<IComputeCommandBuffer,void(IComputeCommandBuffer::*)(unsigned_int,ITextureObject*,unsigned_int),void(IComputeCommandBuffer::*)(unsigned_int,IStructBuffer*),void(IComputeCommandBuffer::*)(unsigned_int,IConstantBuffer*),void(IComputeCommandBuffer::*)(unsigned_int,ISamplerObject*)>
            ((IComputeCommandBuffer *)this,(ShaderTexture *)param_1,(uint)param_2,
             (ShaderStructBuffer *)(ulong)param_3,(uint)param_4,
             (ShaderConstantBuffer *)(ulong)param_5,(uint)param_10,(ShaderSampler *)(ulong)param_11,
             (uint)param_12,param_13,
             (_func_void_uint_ITextureObject_ptr_uint *)CONCAT44(in_stack_ffffffffffffff44,2),
             (_func_void_uint_IStructBuffer_ptr *)0x20,(_func_void_uint_IConstantBuffer_ptr *)0x1,
             (_func_void_uint_ISamplerObject_ptr *)0x50);
  lVar6 = *(long *)(this + 0x88);
  lVar7 = *(long *)(this + 0x90);
  if (lVar7 != lVar6) {
    uVar8 = 0;
    do {
      if (param_7 != 0) {
        pcVar4 = *(char **)(lVar6 + uVar8 * 0x10 + 8);
        puVar5 = (undefined4 *)(param_6 + 0x10);
        uVar3 = (ulong)param_7;
        do {
          iVar1 = strcmp(pcVar4,*(char **)(puVar5 + -4));
          if (iVar1 == 0) {
            (**(code **)(*(long *)param_1 + 0x30))
                      (param_1,*(undefined4 *)(lVar6 + uVar8 * 0x10),0,*puVar5);
            lVar6 = *(long *)(this + 0x88);
            lVar7 = *(long *)(this + 0x90);
            break;
          }
          puVar5 = puVar5 + 6;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      uVar8 = (ulong)((int)uVar8 + 1);
    } while (uVar8 < (ulong)(lVar7 - lVar6 >> 4));
    if (lVar7 != lVar6) {
      uVar8 = 0;
      do {
        if (param_9 != 0) {
          pcVar4 = *(char **)(lVar6 + uVar8 * 0x10 + 8);
          ppcVar2 = (char **)param_8;
          uVar3 = (ulong)param_9;
          do {
            iVar1 = strcmp(pcVar4,*ppcVar2);
            if (iVar1 == 0) {
              (**(code **)(*(long *)param_1 + 0x58))
                        (param_1,*(undefined4 *)(lVar6 + uVar8 * 0x10),0);
              lVar6 = *(long *)(this + 0x88);
              lVar7 = *(long *)(this + 0x90);
              break;
            }
            uVar3 = uVar3 - 1;
            ppcVar2 = ppcVar2 + 2;
          } while (uVar3 != 0);
        }
        uVar8 = (ulong)((int)uVar8 + 1);
      } while (uVar8 < (ulong)(lVar7 - lVar6 >> 4));
    }
  }
  return;
}


