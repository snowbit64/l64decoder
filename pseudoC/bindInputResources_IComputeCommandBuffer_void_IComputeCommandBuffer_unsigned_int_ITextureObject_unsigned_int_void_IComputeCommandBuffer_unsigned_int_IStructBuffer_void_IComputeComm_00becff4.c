// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: bindInputResources<IComputeCommandBuffer,void(IComputeCommandBuffer::*)(unsigned_int,ITextureObject*,unsigned_int),void(IComputeCommandBuffer::*)(unsigned_int,IStructBuffer*),void(IComputeCommandBuffer::*)(unsigned_int,IConstantBuffer*),void(IComputeCommandBuffer::*)(unsigned_int,ISamplerObject*)>
// Entry Point: 00becff4
// Size: 948 bytes
// Signature: void __cdecl bindInputResources<IComputeCommandBuffer,void(IComputeCommandBuffer::*)(unsigned_int,ITextureObject*,unsigned_int),void(IComputeCommandBuffer::*)(unsigned_int,IStructBuffer*),void(IComputeCommandBuffer::*)(unsigned_int,IConstantBuffer*),void(IComputeCommandBuffer::*)(unsigned_int,ISamplerObject*)>(IComputeCommandBuffer * param_1, ShaderTexture * param_2, uint param_3, ShaderStructBuffer * param_4, uint param_5, ShaderConstantBuffer * param_6, uint param_7, ShaderSampler * param_8, uint param_9, TransitionsDesc * param_10, SHADER_STAGE param_11, _func_void_uint_ITextureObject_ptr_uint * param_12, _func_void_uint_IStructBuffer_ptr * param_13, _func_void_uint_IConstantBuffer_ptr * param_14, _func_void_uint_ISamplerObject_ptr * param_15)


/* void AdhocShader::bindInputResources<IComputeCommandBuffer, void
   (IComputeCommandBuffer::*)(unsigned int, ITextureObject*, unsigned int), void
   (IComputeCommandBuffer::*)(unsigned int, IStructBuffer*), void
   (IComputeCommandBuffer::*)(unsigned int, IConstantBuffer*), void
   (IComputeCommandBuffer::*)(unsigned int, ISamplerObject*)>(IComputeCommandBuffer*,
   AdhocShader::ShaderTexture const*, unsigned int, AdhocShader::ShaderStructBuffer const*, unsigned
   int, AdhocShader::ShaderConstantBuffer const*, unsigned int, AdhocShader::ShaderSampler const*,
   unsigned int, AdhocShader::TransitionsDesc&, IProgramObject::SHADER_STAGE, void
   (IComputeCommandBuffer::*)(unsigned int, ITextureObject*, unsigned int), void
   (IComputeCommandBuffer::*)(unsigned int, IStructBuffer*), void
   (IComputeCommandBuffer::*)(unsigned int, IConstantBuffer*), void
   (IComputeCommandBuffer::*)(unsigned int, ISamplerObject*)) const */

void AdhocShader::
     bindInputResources<IComputeCommandBuffer,void(IComputeCommandBuffer::*)(unsigned_int,ITextureObject*,unsigned_int),void(IComputeCommandBuffer::*)(unsigned_int,IStructBuffer*),void(IComputeCommandBuffer::*)(unsigned_int,IConstantBuffer*),void(IComputeCommandBuffer::*)(unsigned_int,ISamplerObject*)>
               (IComputeCommandBuffer *param_1,ShaderTexture *param_2,uint param_3,
               ShaderStructBuffer *param_4,uint param_5,ShaderConstantBuffer *param_6,uint param_7,
               ShaderSampler *param_8,uint param_9,TransitionsDesc *param_10,SHADER_STAGE param_11,
               _func_void_uint_ITextureObject_ptr_uint *param_12,
               _func_void_uint_IStructBuffer_ptr *param_13,
               _func_void_uint_IConstantBuffer_ptr *param_14,
               _func_void_uint_ISamplerObject_ptr *param_15)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  _func_void_uint_IStructBuffer_ptr *p_Var6;
  _func_void_uint_ISamplerObject_ptr *p_Var7;
  code *pcVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  char *pcVar14;
  undefined8 *puVar15;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000014;
  ulong in_stack_00000038;
  code *in_stack_00000040;
  ulong in_stack_00000048;
  code *in_stack_00000050;
  ulong in_stack_00000058;
  
  uVar9 = (ulong)param_12 & 0xffffffff;
  plVar4 = (long *)(param_1 + uVar9 * 0x18 + 0x10);
  lVar12 = *plVar4;
  plVar5 = (long *)(param_1 + uVar9 * 0x18 + 0x18);
  lVar10 = *plVar5;
  if (lVar10 != lVar12) {
    uVar13 = 0;
    lVar2 = CONCAT44(in_stack_00000014,param_11);
    do {
      if ((int)param_4 != 0) {
        pcVar14 = *(char **)(lVar12 + uVar13 * 0x10 + 8);
        uVar11 = (ulong)param_4 & 0xffffffff;
        puVar15 = (undefined8 *)((ulong)param_3 + 8);
        do {
          iVar3 = strcmp(pcVar14,(char *)puVar15[-1]);
          if (iVar3 == 0) {
            uVar1 = *(uint *)(lVar2 + 0x100);
            *(undefined8 *)(lVar2 + (ulong)uVar1 * 8) = *puVar15;
            *(uint *)(lVar2 + 0x100) = uVar1 + 1;
            p_Var6 = param_13;
            if (((ulong)param_14 & 1) != 0) {
              p_Var6 = *(_func_void_uint_IStructBuffer_ptr **)
                        (param_13 + *(long *)(param_2 + ((long)param_14 >> 1)));
            }
            (*p_Var6)((uint)(param_2 + ((long)param_14 >> 1)),
                      (IStructBuffer *)*(undefined4 *)(*plVar4 + uVar13 * 0x10));
            lVar12 = *plVar4;
            lVar10 = *plVar5;
            break;
          }
          puVar15 = puVar15 + 3;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      uVar13 = (ulong)((int)uVar13 + 1);
    } while (uVar13 < (ulong)(lVar10 - lVar12 >> 4));
    if (lVar10 != lVar12) {
      uVar13 = 0;
      do {
        if ((int)param_6 != 0) {
          pcVar14 = *(char **)(lVar12 + uVar13 * 0x10 + 8);
          uVar11 = (ulong)param_6 & 0xffffffff;
          puVar15 = (undefined8 *)((ulong)param_5 + 8);
          do {
            iVar3 = strcmp(pcVar14,(char *)puVar15[-1]);
            if (iVar3 == 0) {
              uVar1 = *(uint *)(lVar2 + 0x208);
              *(undefined8 *)(lVar2 + (ulong)uVar1 * 8 + 0x108) = *puVar15;
              *(uint *)(lVar2 + 0x208) = uVar1 + 1;
              p_Var7 = param_15;
              if ((in_stack_00000038 & 1) != 0) {
                p_Var7 = *(_func_void_uint_ISamplerObject_ptr **)
                          (param_15 + *(long *)(param_2 + ((long)in_stack_00000038 >> 1)));
              }
              (*p_Var7)((uint)(param_2 + ((long)in_stack_00000038 >> 1)),
                        (ISamplerObject *)*(undefined4 *)(*plVar4 + uVar13 * 0x10));
              lVar12 = *plVar4;
              lVar10 = *plVar5;
              break;
            }
            puVar15 = puVar15 + 2;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        uVar13 = (ulong)((int)uVar13 + 1);
      } while (uVar13 < (ulong)(lVar10 - lVar12 >> 4));
    }
  }
  lVar10 = *(long *)(param_1 + 0xa0);
  lVar12 = *(long *)(param_1 + 0xa8);
  if (lVar12 != lVar10) {
    uVar13 = 0;
    do {
      if ((int)param_8 != 0) {
        pcVar14 = *(char **)(lVar10 + uVar13 * 0x10 + 8);
        uVar11 = (ulong)param_8 & 0xffffffff;
        puVar15 = (undefined8 *)((ulong)param_7 + 8);
        do {
          iVar3 = strcmp(pcVar14,(char *)puVar15[-1]);
          if (iVar3 == 0) {
            pcVar8 = in_stack_00000040;
            if ((in_stack_00000048 & 1) != 0) {
              pcVar8 = *(code **)(in_stack_00000040 +
                                 *(long *)(param_2 + ((long)in_stack_00000048 >> 1)));
            }
            (*pcVar8)(param_2 + ((long)in_stack_00000048 >> 1),
                      *(undefined4 *)(lVar10 + uVar13 * 0x10),*puVar15);
            lVar10 = *(long *)(param_1 + 0xa0);
            lVar12 = *(long *)(param_1 + 0xa8);
            break;
          }
          puVar15 = puVar15 + 2;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      uVar13 = (ulong)((int)uVar13 + 1);
    } while (uVar13 < (ulong)(lVar12 - lVar10 >> 4));
  }
  lVar10 = *(long *)(param_1 + uVar9 * 0x18 + 0xb8);
  lVar12 = *(long *)(param_1 + uVar9 * 0x18 + 0xc0);
  if (lVar12 != lVar10) {
    uVar13 = 0;
    do {
      if ((int)param_10 != 0) {
        pcVar14 = *(char **)(lVar10 + uVar13 * 0x10 + 8);
        uVar11 = (ulong)param_10 & 0xffffffff;
        puVar15 = (undefined8 *)(CONCAT44(in_stack_00000004,param_9) + 8);
        do {
          iVar3 = strcmp(pcVar14,(char *)puVar15[-1]);
          if (iVar3 == 0) {
            pcVar8 = in_stack_00000050;
            if ((in_stack_00000058 & 1) != 0) {
              pcVar8 = *(code **)(in_stack_00000050 +
                                 *(long *)(param_2 + ((long)in_stack_00000058 >> 1)));
            }
            (*pcVar8)(param_2 + ((long)in_stack_00000058 >> 1),
                      *(undefined4 *)(lVar10 + uVar13 * 0x10),*puVar15);
            lVar12 = *(long *)(param_1 + uVar9 * 0x18 + 0xc0);
            lVar10 = *(long *)(param_1 + uVar9 * 0x18 + 0xb8);
            break;
          }
          puVar15 = puVar15 + 2;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      uVar13 = (ulong)((int)uVar13 + 1);
    } while (uVar13 < (ulong)(lVar12 - lVar10 >> 4));
  }
  return;
}


