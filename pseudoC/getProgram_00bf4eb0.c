// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getProgram
// Entry Point: 00bf4eb0
// Size: 344 bytes
// Signature: undefined __thiscall getProgram(CompiledShaderArchive * this, uint param_1, IProgramObject * * param_2, uint * param_3, ShaderStructLayout * * param_4, ulonglong * param_5)


/* CompiledShaderArchive::getProgram(unsigned int, IProgramObject*&, unsigned int&,
   ShaderStructLayout*&, unsigned long long&) */

void __thiscall
CompiledShaderArchive::getProgram
          (CompiledShaderArchive *this,uint param_1,IProgramObject **param_2,uint *param_3,
          ShaderStructLayout **param_4,ulonglong *param_5)

{
  long lVar1;
  ulong uVar2;
  IProgramObject *pIVar3;
  IProgramObject *pIVar4;
  IProgramObject **ppIVar5;
  long lVar6;
  IShaderObject *local_b0;
  IShaderObject *pIStack_a8;
  IShaderObject *local_a0;
  uint local_98;
  ShaderStructLayout *local_90;
  ulonglong local_88;
  ulonglong uStack_80;
  ulonglong local_78;
  IShaderObject *local_70;
  IShaderObject *local_68;
  IShaderObject *pIStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  *param_5 = 0;
  lVar6 = *(long *)(this + 0x18);
  uVar2 = getStructLayouts(this,*(uint *)(lVar6 + (ulong)param_1 * 0x18 + 0x14),param_3,param_4);
  if ((uVar2 & 1) == 0) {
    pIVar3 = (IProgramObject *)0x0;
  }
  else {
    ppIVar5 = (IProgramObject **)(lVar6 + (ulong)param_1 * 0x18);
    pIVar4 = *ppIVar5;
    if (pIVar4 == (IProgramObject *)0x0) {
      lVar6 = lVar6 + (ulong)param_1 * 0x18;
      local_68 = (IShaderObject *)0x0;
      pIStack_60 = (IShaderObject *)0x0;
      local_70 = (IShaderObject *)0x0;
      getShader(this,*(uint *)(lVar6 + 8),&pIStack_60,&local_78);
      getShader(this,*(uint *)(lVar6 + 0xc),&local_68,&uStack_80);
      getShader(this,*(uint *)(lVar6 + 0x10),&local_70,&local_88);
      *param_5 = uStack_80 + local_78 + local_88;
      local_98 = *param_3;
      local_90 = *param_4;
      local_b0 = pIStack_60;
      pIStack_a8 = local_68;
      local_a0 = local_70;
      pIVar3 = (IProgramObject *)
               (**(code **)(**(long **)(this + 0x108) + 0x18))(*(long **)(this + 0x108),&local_b0);
      *ppIVar5 = pIVar3;
      if (pIVar3 == (IProgramObject *)0x0) goto LAB_00bf4fd8;
      pIVar4 = *ppIVar5;
    }
    pIVar3 = (IProgramObject *)0x1;
    *param_2 = pIVar4;
  }
LAB_00bf4fd8:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pIVar3);
}


