// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getUserProfilePath
// Entry Point: 00c63238
// Size: 84 bytes
// Signature: undefined __cdecl getUserProfilePath(basic_string * param_1, bool param_2, bool param_3)


/* PathUtil::getUserProfilePath(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >&, bool, bool) */

undefined8 PathUtil::getUserProfilePath(basic_string *param_1,bool param_2,bool param_3)

{
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  push_back((char)param_1);
  return 1;
}


