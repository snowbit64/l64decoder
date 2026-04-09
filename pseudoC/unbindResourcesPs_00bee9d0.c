// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unbindResourcesPs
// Entry Point: 00bee9d0
// Size: 280 bytes
// Signature: undefined __thiscall unbindResourcesPs(AdhocShader * this, ICommandBuffer * param_1, ShaderTexture * param_2, uint param_3, ShaderStructBuffer * param_4, uint param_5, ShaderTexture * param_6, uint param_7, ShaderConstantBuffer * param_8, uint param_9, ShaderSampler * param_10, uint param_11)


/* AdhocShader::unbindResourcesPs(ICommandBuffer*, AdhocShader::ShaderTexture const*, unsigned int,
   AdhocShader::ShaderStructBuffer const*, unsigned int, AdhocShader::ShaderTexture const*, unsigned
   int, AdhocShader::ShaderConstantBuffer const*, unsigned int, AdhocShader::ShaderSampler const*,
   unsigned int) const */

void __thiscall
AdhocShader::unbindResourcesPs
          (AdhocShader *this,ICommandBuffer *param_1,ShaderTexture *param_2,uint param_3,
          ShaderStructBuffer *param_4,uint param_5,ShaderTexture *param_6,uint param_7,
          ShaderConstantBuffer *param_8,uint param_9,ShaderSampler *param_10,uint param_11)

{
  int iVar1;
  char *__s1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 in_stack_ffffffffffffff54;
  
  unbindInputResources<ICommandBuffer,void(ICommandBuffer::*)(unsigned_int,ITextureObject*),void(ICommandBuffer::*)(unsigned_int,IStructBuffer*),void(ICommandBuffer::*)(unsigned_int,IConstantBuffer*),void(ICommandBuffer::*)(unsigned_int,ISamplerObject*)>
            ((ICommandBuffer *)this,(ShaderTexture *)param_1,(uint)param_2,
             (ShaderStructBuffer *)(ulong)param_3,(uint)param_4,
             (ShaderConstantBuffer *)(ulong)param_5,(uint)param_8,(ShaderSampler *)(ulong)param_9,
             (uint)param_10,param_11,
             (_func_void_uint_ITextureObject_ptr *)CONCAT44(in_stack_ffffffffffffff54,1),
             (_func_void_uint_IStructBuffer_ptr *)0x68,(_func_void_uint_IConstantBuffer_ptr *)0x1,
             (_func_void_uint_ISamplerObject_ptr *)0x98);
  lVar4 = *(long *)(this + 0x70);
  lVar5 = *(long *)(this + 0x78);
  if (lVar5 != lVar4) {
    uVar2 = 0;
    do {
      if (param_7 != 0) {
        __s1 = *(char **)(lVar4 + uVar2 * 0x10 + 8);
        uVar3 = (ulong)param_7;
        puVar6 = (undefined4 *)(param_6 + 0x10);
        do {
          iVar1 = strcmp(__s1,*(char **)(puVar6 + -4));
          if (iVar1 == 0) {
            (**(code **)(*(long *)param_1 + 0x70))
                      (param_1,*(undefined4 *)(lVar4 + uVar2 * 0x10),0,*puVar6);
            lVar4 = *(long *)(this + 0x70);
            lVar5 = *(long *)(this + 0x78);
            break;
          }
          puVar6 = puVar6 + 6;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      uVar2 = (ulong)((int)uVar2 + 1);
    } while (uVar2 < (ulong)(lVar5 - lVar4 >> 4));
  }
  return;
}


