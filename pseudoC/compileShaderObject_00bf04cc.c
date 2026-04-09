// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compileShaderObject
// Entry Point: 00bf04cc
// Size: 196 bytes
// Signature: undefined __thiscall compileShaderObject(ShaderManager * this, uint param_1, uchar * param_2, SHADER_STAGE param_3, char * param_4, basic_string * param_5, IShaderObject * * param_6)


/* ShaderManager::compileShaderObject(unsigned int, unsigned char const*,
   IProgramObject::SHADER_STAGE, char const*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >*, IShaderObject*&) */

uint __thiscall
ShaderManager::compileShaderObject
          (ShaderManager *this,uint param_1,uchar *param_2,SHADER_STAGE param_3,char *param_4,
          basic_string *param_5,IShaderObject **param_6)

{
  long lVar1;
  uint uVar2;
  char *local_168;
  undefined4 local_160;
  undefined local_15c [256];
  SHADER_STAGE local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_5c = 3;
  local_15c[0] = 0;
  local_160 = **(undefined4 **)(this + 0x18);
  local_168 = param_4;
  __strcpy_chk(local_15c,(&PTR_s_main_vp_00fecef8)[param_3],0x100);
  local_5c = param_3;
  uVar2 = CompiledShaderArchive::addShader
                    (*(CompiledShaderArchive **)this,param_1,param_2,(ShaderObjectDesc *)&local_168,
                     param_6);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


