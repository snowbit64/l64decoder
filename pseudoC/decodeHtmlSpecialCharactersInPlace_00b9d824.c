// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: decodeHtmlSpecialCharactersInPlace
// Entry Point: 00b9d824
// Size: 188 bytes
// Signature: undefined __cdecl decodeHtmlSpecialCharactersInPlace(basic_string * param_1)


/* StringUtil::decodeHtmlSpecialCharactersInPlace(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) */

void StringUtil::decodeHtmlSpecialCharactersInPlace(basic_string *param_1)

{
  replace(param_1,"&#xA;","\n");
  replace(param_1,"&#xD;","\r");
  replace(param_1,"&quot;","\"");
  replace(param_1,"&apos;","\'");
  replace(param_1,"&lt;","<");
  replace(param_1,"&gt;",">");
  replace(param_1,"&amp;","&");
  return;
}


