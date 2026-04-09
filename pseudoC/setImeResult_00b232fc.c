// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _setImeResult
// Entry Point: 00b232fc
// Size: 68 bytes
// Signature: undefined __cdecl _setImeResult(char * param_1, bool param_2)


/* AndroidImeUtil::_setImeResult(char const*, bool) */

void AndroidImeUtil::_setImeResult(char *param_1,bool param_2)

{
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)&m_lastImeString);
  m_userDidCancel = param_2;
  m_isImeOpen = 0;
  return;
}


