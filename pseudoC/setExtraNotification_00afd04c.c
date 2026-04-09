// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setExtraNotification
// Entry Point: 00afd04c
// Size: 120 bytes
// Signature: undefined __cdecl setExtraNotification(char * param_1, char * param_2, char * param_3, char * param_4, char * param_5)


/* GiantsNotificationManager::setExtraNotification(char const*, char const*, char const*, char
   const*, char const*) */

void GiantsNotificationManager::setExtraNotification
               (char *param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  param_1[0x58] = '\x01';
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign(param_1 + 0x70);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign(param_1 + 0x88);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign(param_1 + 0xa0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign(param_1 + 0xb8);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign(param_1 + 0xd0);
  return;
}


