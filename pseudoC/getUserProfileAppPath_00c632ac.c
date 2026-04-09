// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getUserProfileAppPath
// Entry Point: 00c632ac
// Size: 212 bytes
// Signature: undefined __cdecl getUserProfileAppPath(char * param_1, basic_string * param_2, bool param_3, bool param_4)


/* PathUtil::getUserProfileAppPath(char const*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, bool, bool) */

undefined8
PathUtil::getUserProfileAppPath(char *param_1,basic_string *param_2,bool param_3,bool param_4)

{
  ulong uVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)param_2);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  push_back((char)param_2);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)param_2);
  uVar1 = (ulong)(*(byte *)param_2 >> 1);
  if ((*(byte *)param_2 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 2);
  }
  if ((uVar1 != 0) &&
     (pcVar2 = (char *)std::__ndk1::
                       basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       ::at((ulong)param_2), *pcVar2 != '/')) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    push_back((char)param_2);
  }
  if (param_4) {
    pcVar2 = *(char **)(param_2 + 4);
    if ((*(byte *)param_2 & 1) == 0) {
      pcVar2 = (char *)((long)param_2 + 1);
    }
    uVar3 = NativeFileUtil::createFolder(pcVar2);
    return uVar3;
  }
  return 1;
}


