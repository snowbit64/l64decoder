// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSaveGameInfo
// Entry Point: 00b4e838
// Size: 172 bytes
// Signature: undefined __cdecl getSaveGameInfo(uint param_1, uint * param_2, basic_string * param_3, basic_string * param_4, basic_string * param_5, bool * param_6)


/* GenericSaveGameUtil::getSaveGameInfo(unsigned int, unsigned int&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, bool&) */

bool GenericSaveGameUtil::getSaveGameInfo
               (uint param_1,uint *param_2,basic_string *param_3,basic_string *param_4,
               basic_string *param_5,bool *param_6)

{
  ulong uVar1;
  ulong uVar2;
  uint *puVar3;
  
  uVar1 = (ulong)param_1;
  uVar2 = DAT_0211c588 - s_saveGames >> 3;
  if (uVar1 < uVar2) {
    puVar3 = *(uint **)(s_saveGames + uVar1 * 8);
    *param_2 = *puVar3;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)param_3);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)param_4);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)param_5);
    *param_6 = *(bool *)(puVar3 + 6);
  }
  return uVar1 < uVar2;
}


