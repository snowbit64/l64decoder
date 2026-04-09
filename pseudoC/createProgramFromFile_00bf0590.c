// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createProgramFromFile
// Entry Point: 00bf0590
// Size: 104 bytes
// Signature: undefined __thiscall createProgramFromFile(ShaderManager * this, char * param_1, map * param_2, IProgramObject * * param_3)


/* ShaderManager::createProgramFromFile(char const*,
   std::__ndk1::map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, ShaderStructLayout,
   std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, ShaderStructLayout> > >
   const&, IProgramObject*&) */

uint __thiscall
ShaderManager::createProgramFromFile
          (ShaderManager *this,char *param_1,map *param_2,IProgramObject **param_3)

{
  long lVar1;
  uint uVar2;
  uint uStack_38;
  uint uStack_34;
  ShaderStructLayout *pSStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = createProgramFromFile
                    (this,param_1,(char *)0x0,0,param_2,param_3,&uStack_34,&pSStack_30,&uStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


