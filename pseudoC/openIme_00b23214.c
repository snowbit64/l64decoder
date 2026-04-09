// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: openIme
// Entry Point: 00b23214
// Size: 132 bytes
// Signature: undefined __cdecl openIme(char * param_1, char * param_2, char * param_3, char * param_4, KeyboardType param_5, uint param_6, ICharacterFilter * param_7, bool param_8, uint param_9, uint param_10, uint param_11, uint param_12)


/* AndroidImeUtil::openIme(char const*, char const*, char const*, char const*,
   ImeUtilBase::KeyboardType, unsigned int, ImeUtilBase::ICharacterFilter*, bool, unsigned int,
   unsigned int, unsigned int, unsigned int) */

bool AndroidImeUtil::openIme
               (char *param_1,char *param_2,char *param_3,char *param_4,KeyboardType param_5,
               uint param_6,ICharacterFilter *param_7,bool param_8,uint param_9,uint param_10,
               uint param_11,uint param_12)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = m_isImeOpen == '\0';
  bVar2 = m_pSoftKeyboardJniCall != (AndroidJNICall *)0x0;
  if (bVar1 && bVar2) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)&m_lastImeString);
    AndroidJNICall::callVoidFromString(m_pSoftKeyboardJniCall,"showSoftKeyboard",param_1);
    m_isImeOpen = '\x01';
  }
  return bVar1 && bVar2;
}


