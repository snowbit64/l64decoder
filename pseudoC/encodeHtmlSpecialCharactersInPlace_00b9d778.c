// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: encodeHtmlSpecialCharactersInPlace
// Entry Point: 00b9d778
// Size: 172 bytes
// Signature: undefined __cdecl encodeHtmlSpecialCharactersInPlace(basic_string * param_1, bool param_2)


/* StringUtil::encodeHtmlSpecialCharactersInPlace(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, bool) */

void StringUtil::encodeHtmlSpecialCharactersInPlace(basic_string *param_1,bool param_2)

{
  if (!param_2) {
    replace(param_1,"\n","&#xA;");
    replace(param_1,"\r","&#xD;");
  }
  replace(param_1,"&","&amp;");
  replace(param_1,"\"","&quot;");
  replace(param_1,"<","&lt;");
  replace(param_1,">","&gt;");
  return;
}


