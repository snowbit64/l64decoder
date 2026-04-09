// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unbindInputResources<ICommandBuffer,void(ICommandBuffer::*)(unsigned_int,ITextureObject*),void(ICommandBuffer::*)(unsigned_int,IStructBuffer*),void(ICommandBuffer::*)(unsigned_int,IConstantBuffer*),void(ICommandBuffer::*)(unsigned_int,ISamplerObject*)>
// Entry Point: 00bee4d8
// Size: 852 bytes
// Signature: void __cdecl unbindInputResources<ICommandBuffer,void(ICommandBuffer::*)(unsigned_int,ITextureObject*),void(ICommandBuffer::*)(unsigned_int,IStructBuffer*),void(ICommandBuffer::*)(unsigned_int,IConstantBuffer*),void(ICommandBuffer::*)(unsigned_int,ISamplerObject*)>(ICommandBuffer * param_1, ShaderTexture * param_2, uint param_3, ShaderStructBuffer * param_4, uint param_5, ShaderConstantBuffer * param_6, uint param_7, ShaderSampler * param_8, uint param_9, SHADER_STAGE param_10, _func_void_uint_ITextureObject_ptr * param_11, _func_void_uint_IStructBuffer_ptr * param_12, _func_void_uint_IConstantBuffer_ptr * param_13, _func_void_uint_ISamplerObject_ptr * param_14)


/* void AdhocShader::unbindInputResources<ICommandBuffer, void (ICommandBuffer::*)(unsigned int,
   ITextureObject*), void (ICommandBuffer::*)(unsigned int, IStructBuffer*), void
   (ICommandBuffer::*)(unsigned int, IConstantBuffer*), void (ICommandBuffer::*)(unsigned int,
   ISamplerObject*)>(ICommandBuffer*, AdhocShader::ShaderTexture const*, unsigned int,
   AdhocShader::ShaderStructBuffer const*, unsigned int, AdhocShader::ShaderConstantBuffer const*,
   unsigned int, AdhocShader::ShaderSampler const*, unsigned int, IProgramObject::SHADER_STAGE, void
   (ICommandBuffer::*)(unsigned int, ITextureObject*), void (ICommandBuffer::*)(unsigned int,
   IStructBuffer*), void (ICommandBuffer::*)(unsigned int, IConstantBuffer*), void
   (ICommandBuffer::*)(unsigned int, ISamplerObject*)) const */

void AdhocShader::
     unbindInputResources<ICommandBuffer,void(ICommandBuffer::*)(unsigned_int,ITextureObject*),void(ICommandBuffer::*)(unsigned_int,IStructBuffer*),void(ICommandBuffer::*)(unsigned_int,IConstantBuffer*),void(ICommandBuffer::*)(unsigned_int,ISamplerObject*)>
               (ICommandBuffer *param_1,ShaderTexture *param_2,uint param_3,
               ShaderStructBuffer *param_4,uint param_5,ShaderConstantBuffer *param_6,uint param_7,
               ShaderSampler *param_8,uint param_9,SHADER_STAGE param_10,
               _func_void_uint_ITextureObject_ptr *param_11,
               _func_void_uint_IStructBuffer_ptr *param_12,
               _func_void_uint_IConstantBuffer_ptr *param_13,
               _func_void_uint_ISamplerObject_ptr *param_14)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  _func_void_uint_IStructBuffer_ptr *p_Var4;
  _func_void_uint_ISamplerObject_ptr *p_Var5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  char **ppcVar10;
  long lVar11;
  ulong uVar12;
  char *pcVar13;
  undefined4 in_stack_00000004;
  ulong in_stack_00000030;
  code *in_stack_00000038;
  ulong in_stack_00000040;
  code *in_stack_00000048;
  ulong in_stack_00000050;
  
  uVar7 = (ulong)param_11 & 0xffffffff;
  plVar2 = (long *)(param_1 + uVar7 * 0x18 + 0x10);
  lVar11 = *plVar2;
  plVar3 = (long *)(param_1 + uVar7 * 0x18 + 0x18);
  lVar9 = *plVar3;
  if (lVar9 != lVar11) {
    uVar12 = 0;
    do {
      if ((int)param_4 != 0) {
        pcVar13 = *(char **)(lVar11 + uVar12 * 0x10 + 8);
        uVar8 = (ulong)param_4 & 0xffffffff;
        ppcVar10 = (char **)(ulong)param_3;
        do {
          iVar1 = strcmp(pcVar13,*ppcVar10);
          if (iVar1 == 0) {
            p_Var4 = param_12;
            if (((ulong)param_13 & 1) != 0) {
              p_Var4 = *(_func_void_uint_IStructBuffer_ptr **)
                        (param_12 + *(long *)(param_2 + ((long)param_13 >> 1)));
            }
            (*p_Var4)((uint)(param_2 + ((long)param_13 >> 1)),
                      (IStructBuffer *)*(undefined4 *)(lVar11 + uVar12 * 0x10));
            lVar9 = *plVar3;
            lVar11 = *plVar2;
            break;
          }
          uVar8 = uVar8 - 1;
          ppcVar10 = ppcVar10 + 3;
        } while (uVar8 != 0);
      }
      uVar12 = (ulong)((int)uVar12 + 1);
    } while (uVar12 < (ulong)(lVar9 - lVar11 >> 4));
    if (lVar9 != lVar11) {
      uVar12 = 0;
      do {
        if ((int)param_6 != 0) {
          pcVar13 = *(char **)(lVar11 + uVar12 * 0x10 + 8);
          ppcVar10 = (char **)(ulong)param_5;
          uVar8 = (ulong)param_6 & 0xffffffff;
          do {
            iVar1 = strcmp(pcVar13,*ppcVar10);
            if (iVar1 == 0) {
              p_Var5 = param_14;
              if ((in_stack_00000030 & 1) != 0) {
                p_Var5 = *(_func_void_uint_ISamplerObject_ptr **)
                          (param_14 + *(long *)(param_2 + ((long)in_stack_00000030 >> 1)));
              }
              (*p_Var5)((uint)(param_2 + ((long)in_stack_00000030 >> 1)),
                        (ISamplerObject *)*(undefined4 *)(lVar11 + uVar12 * 0x10));
              lVar9 = *plVar3;
              lVar11 = *plVar2;
              break;
            }
            uVar8 = uVar8 - 1;
            ppcVar10 = ppcVar10 + 2;
          } while (uVar8 != 0);
        }
        uVar12 = (ulong)((int)uVar12 + 1);
      } while (uVar12 < (ulong)(lVar9 - lVar11 >> 4));
    }
  }
  lVar9 = *(long *)(param_1 + 0xa0);
  lVar11 = *(long *)(param_1 + 0xa8);
  if (lVar11 != lVar9) {
    uVar12 = 0;
    do {
      if ((int)param_8 != 0) {
        pcVar13 = *(char **)(lVar9 + uVar12 * 0x10 + 8);
        ppcVar10 = (char **)(ulong)param_7;
        uVar8 = (ulong)param_8 & 0xffffffff;
        do {
          iVar1 = strcmp(pcVar13,*ppcVar10);
          if (iVar1 == 0) {
            pcVar6 = in_stack_00000038;
            if ((in_stack_00000040 & 1) != 0) {
              pcVar6 = *(code **)(in_stack_00000038 +
                                 *(long *)(param_2 + ((long)in_stack_00000040 >> 1)));
            }
            (*pcVar6)(param_2 + ((long)in_stack_00000040 >> 1),
                      *(undefined4 *)(lVar9 + uVar12 * 0x10),0);
            lVar9 = *(long *)(param_1 + 0xa0);
            lVar11 = *(long *)(param_1 + 0xa8);
            break;
          }
          uVar8 = uVar8 - 1;
          ppcVar10 = ppcVar10 + 2;
        } while (uVar8 != 0);
      }
      uVar12 = (ulong)((int)uVar12 + 1);
    } while (uVar12 < (ulong)(lVar11 - lVar9 >> 4));
  }
  lVar11 = *(long *)(param_1 + uVar7 * 0x18 + 0xb8);
  lVar9 = *(long *)(param_1 + uVar7 * 0x18 + 0xc0);
  if (lVar9 != lVar11) {
    uVar12 = 0;
    do {
      if (param_10 != 0) {
        pcVar13 = *(char **)(lVar11 + uVar12 * 0x10 + 8);
        uVar8 = (ulong)param_10;
        ppcVar10 = (char **)CONCAT44(in_stack_00000004,param_9);
        do {
          iVar1 = strcmp(pcVar13,*ppcVar10);
          if (iVar1 == 0) {
            pcVar6 = in_stack_00000048;
            if ((in_stack_00000050 & 1) != 0) {
              pcVar6 = *(code **)(in_stack_00000048 +
                                 *(long *)(param_2 + ((long)in_stack_00000050 >> 1)));
            }
            (*pcVar6)(param_2 + ((long)in_stack_00000050 >> 1),
                      *(undefined4 *)(lVar11 + uVar12 * 0x10),0);
            lVar9 = *(long *)(param_1 + uVar7 * 0x18 + 0xc0);
            lVar11 = *(long *)(param_1 + uVar7 * 0x18 + 0xb8);
            break;
          }
          uVar8 = uVar8 - 1;
          ppcVar10 = ppcVar10 + 2;
        } while (uVar8 != 0);
      }
      uVar12 = (ulong)((int)uVar12 + 1);
    } while (uVar12 < (ulong)(lVar9 - lVar11 >> 4));
  }
  return;
}


