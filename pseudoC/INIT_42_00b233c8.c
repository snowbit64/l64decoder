// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_42
// Entry Point: 00b233c8
// Size: 36 bytes
// Signature: undefined _INIT_42(void)


void _INIT_42(void)

{
  AndroidImeUtil::m_lastImeString = 0;
  DAT_02118648 = 0;
  DAT_02118650 = 0;
  __cxa_atexit(std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               ~basic_string,&AndroidImeUtil::m_lastImeString,&PTR_LOOP_00fd8de0);
  return;
}


