// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSaveGameInfoById
// Entry Point: 00b4e8e4
// Size: 228 bytes
// Signature: undefined __cdecl getSaveGameInfoById(uint param_1, basic_string * param_2, basic_string * param_3, basic_string * param_4, bool * param_5)


/* GenericSaveGameUtil::getSaveGameInfoById(unsigned int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, bool&) */

undefined8
GenericSaveGameUtil::getSaveGameInfoById
          (uint param_1,basic_string *param_2,basic_string *param_3,basic_string *param_4,
          bool *param_5)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  uint *puVar5;
  
  if ((int)((ulong)(DAT_0211c588 - (long)s_saveGames) >> 3) == 0) {
LAB_00b4e9b4:
    uVar2 = 0;
  }
  else {
    if (**s_saveGames == param_1) {
      uVar3 = 0;
    }
    else {
      uVar4 = (ulong)(DAT_0211c588 - (long)s_saveGames) >> 3 & 0xffffffff;
      uVar3 = 0;
      do {
        if (uVar4 - 1 == uVar3) goto LAB_00b4e9b4;
        lVar1 = uVar3 + 1;
        uVar3 = uVar3 + 1;
      } while (*s_saveGames[lVar1] != param_1);
      if (uVar4 <= uVar3) goto LAB_00b4e9b4;
    }
    puVar5 = s_saveGames[uVar3];
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)param_2);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)param_3);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)param_4);
    uVar2 = 1;
    *param_5 = *(bool *)(puVar5 + 6);
  }
  return uVar2;
}


