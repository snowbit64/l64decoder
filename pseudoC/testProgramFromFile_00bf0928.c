// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: testProgramFromFile
// Entry Point: 00bf0928
// Size: 160 bytes
// Signature: undefined __thiscall testProgramFromFile(ShaderManager * this, char * param_1)


/* ShaderManager::testProgramFromFile(char const*) */

uint __thiscall ShaderManager::testProgramFromFile(ShaderManager *this,char *param_1)

{
  long lVar1;
  uint uVar2;
  long *local_58;
  __tree_node **pp_Stack_50;
  __tree_node *local_48;
  undefined8 uStack_40;
  uint uStack_38;
  uint uStack_34;
  ShaderStructLayout *pSStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pp_Stack_50 = &local_48;
  local_48 = (__tree_node *)0x0;
  uStack_40 = 0;
  local_58 = (long *)0x0;
                    /* try { // try from 00bf0954 to 00bf0977 has its CatchHandler @ 00bf09c8 */
  uVar2 = createProgramFromFile
                    (this,param_1,(char *)0x0,0,(map *)&pp_Stack_50,(IProgramObject **)&local_58,
                     &uStack_34,&pSStack_30,&uStack_38);
  if (((uVar2 & 1) != 0) && (local_58 != (long *)0x0)) {
    (**(code **)(*local_58 + 8))();
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>>>
             *)&pp_Stack_50,local_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


