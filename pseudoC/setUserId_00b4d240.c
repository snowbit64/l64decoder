// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setUserId
// Entry Point: 00b4d240
// Size: 116 bytes
// Signature: undefined __cdecl setUserId(char * param_1)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GenericSaveGameUtil::setUserId(char const*) */

void GenericSaveGameUtil::setUserId(char *param_1)

{
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    if ((_s_saveGameDirPostfix & 1) == 0) {
      _s_saveGameDirPostfix = 0;
    }
    else {
      *DAT_0211c570 = 0;
      DAT_0211c568 = 0;
    }
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(&s_saveGameDirPostfix);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append(&s_saveGameDirPostfix);
  }
  return;
}


