// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_47
// Entry Point: 00b4f304
// Size: 168 bytes
// Signature: undefined _INIT_47(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_47(void)

{
  _s_saveGameDirectoryBase = 0;
  DAT_0211c550 = 0;
  DAT_0211c558 = 0;
  __cxa_atexit(std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               ~basic_string,&GenericSaveGameUtil::s_saveGameDirectoryBase,&PTR_LOOP_00fd8de0);
  DAT_0211c568 = 0;
  DAT_0211c570 = 0;
  _s_saveGameDirPostfix = 0;
  __cxa_atexit(std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               ~basic_string,&GenericSaveGameUtil::s_saveGameDirPostfix,&PTR_LOOP_00fd8de0);
  DAT_0211c588 = 0;
  DAT_0211c590 = 0;
  GenericSaveGameUtil::s_saveGames = 0;
  __cxa_atexit(FUN_00b4cd4c,&GenericSaveGameUtil::s_saveGames,&PTR_LOOP_00fd8de0);
  GenericSaveGameUtil::s_cloudErrorPTData._8_8_ = 0;
  GenericSaveGameUtil::s_cloudErrorPTData._16_8_ = 0;
  DAT_0211c5e0 = 0;
  DAT_0211c5e8 = 0;
  GenericSaveGameUtil::s_uploadErrors = 0;
  __cxa_atexit(FUN_00b4cd68,&GenericSaveGameUtil::s_uploadErrors,&PTR_LOOP_00fd8de0);
  return;
}


