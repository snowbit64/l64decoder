// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: buildAbsolutePath
// Entry Point: 00c63ec0
// Size: 20 bytes
// Signature: undefined __cdecl buildAbsolutePath(basic_string * param_1, basic_string * param_2, basic_string * param_3)


/* PathUtil::buildAbsolutePath(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&)
    */

void PathUtil::buildAbsolutePath(basic_string *param_1,basic_string *param_2,basic_string *param_3)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_2 + 4);
  if ((*(byte *)param_2 & 1) == 0) {
    pcVar1 = (char *)((long)param_2 + 1);
  }
  buildAbsolutePath(param_1,pcVar1,param_3);
  return;
}


