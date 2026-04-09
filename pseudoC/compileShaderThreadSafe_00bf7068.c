// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compileShaderThreadSafe
// Entry Point: 00bf7068
// Size: 136 bytes
// Signature: undefined __thiscall compileShaderThreadSafe(CompiledShaderArchive * this, ShaderHash * param_1, ShaderObjectDesc * param_2, uint * param_3, uchar * * param_4)


/* CompiledShaderArchive::compileShaderThreadSafe(CompiledShaderArchive::ShaderHash const&,
   ShaderObjectDesc const&, unsigned int&, unsigned char*&) */

uint __thiscall
CompiledShaderArchive::compileShaderThreadSafe
          (CompiledShaderArchive *this,ShaderHash *param_1,ShaderObjectDesc *param_2,uint *param_3,
          uchar **param_4)

{
  long lVar1;
  uint uVar2;
  uchar *local_48;
  uint local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = (uchar *)0x0;
  local_40 = 0;
  uVar2 = (**(code **)(**(long **)(this + 0x110) + 0x20))
                    (*(long **)(this + 0x110),param_2,&local_48);
  if ((uVar2 & 1) != 0) {
    *param_3 = local_40;
    *param_4 = local_48;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


