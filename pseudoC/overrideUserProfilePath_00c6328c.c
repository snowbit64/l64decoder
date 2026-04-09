// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: overrideUserProfilePath
// Entry Point: 00c6328c
// Size: 32 bytes
// Signature: undefined __cdecl overrideUserProfilePath(basic_string * param_1)


/* PathUtil::overrideUserProfilePath(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >&) */

void PathUtil::overrideUserProfilePath(basic_string *param_1)

{
  s_doOverrideUserProfilePath = 1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            &s_overrideUserProfilePath,param_1);
  return;
}


