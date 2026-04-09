// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getProgram
// Entry Point: 00beff38
// Size: 124 bytes
// Signature: undefined __thiscall getProgram(ShaderManager * this, uint param_1, uchar * param_2, IProgramObject * * param_3, uint * param_4, ShaderStructLayout * * param_5)


/* ShaderManager::getProgram(unsigned int, unsigned char const*, IProgramObject*&, unsigned int&,
   ShaderStructLayout*&) */

uint __thiscall
ShaderManager::getProgram
          (ShaderManager *this,uint param_1,uchar *param_2,IProgramObject **param_3,uint *param_4,
          ShaderStructLayout **param_5)

{
  long lVar1;
  CompiledShaderArchive *this_00;
  ulonglong local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  this_00 = *(CompiledShaderArchive **)this;
  if (((this_00 != (CompiledShaderArchive *)0x0) &&
      (this_00 = (CompiledShaderArchive *)
                 CompiledShaderArchive::getProgram
                           (this_00,param_1,param_2,param_3,param_4,param_5,&local_30),
      ((ulong)this_00 & 1) != 0)) && (local_30 != 0)) {
    *(ulonglong *)(this + 0x1a8) = *(long *)(this + 0x1a8) + local_30;
    *(int *)(this + 0x1b0) = *(int *)(this + 0x1b0) + 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return (uint)this_00 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


