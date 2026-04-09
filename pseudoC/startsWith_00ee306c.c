// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startsWith
// Entry Point: 00ee306c
// Size: 76 bytes
// Signature: undefined __cdecl startsWith(basic_string_view param_1, basic_string_view param_2)


/* Luau::startsWith(std::__ndk1::basic_string_view<char, std::__ndk1::char_traits<char> >,
   std::__ndk1::basic_string_view<char, std::__ndk1::char_traits<char> >) */

bool Luau::startsWith(basic_string_view param_1,basic_string_view param_2)

{
  int iVar1;
  void *in_x2;
  ulong in_x3;
  
  if (param_2 < in_x3) {
    return false;
  }
  if (in_x3 != 0) {
    iVar1 = memcmp((void *)(ulong)param_1,in_x2,in_x3);
    if (iVar1 != 0) {
      return iVar1 == 0;
    }
  }
  return true;
}


