// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_57
// Entry Point: 00c64fd0
// Size: 80 bytes
// Signature: undefined _INIT_57(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_57(void)

{
  size_t sVar1;
  
  sVar1 = strlen(PathUtil::PARENT_DIRECTORY_SEPARATOR);
  PathUtil::PARENT_DIRECTORY_SEPARATOR_LEN = (undefined4)sVar1;
  _DAT_0211f570 = 0;
  _DAT_0211f578 = 0;
  PathUtil::s_overrideUserProfilePath = 0;
  __cxa_atexit(std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               ~basic_string,&PathUtil::s_overrideUserProfilePath,&PTR_LOOP_00fd8de0);
  return;
}


