// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: base64ToBase64URL
// Entry Point: 00ba1118
// Size: 44 bytes
// Signature: undefined __cdecl base64ToBase64URL(basic_string * param_1, basic_string * param_2)


/* StringUtil::base64ToBase64URL(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) */

void StringUtil::base64ToBase64URL(basic_string *param_1,basic_string *param_2)

{
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            param_2,param_1);
  base64ToBase64URLInPlace(param_2);
  return;
}


