// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDefaultInstallPath
// Entry Point: 00c63380
// Size: 8 bytes
// Signature: undefined __cdecl getDefaultInstallPath(char * param_1, uint param_2, char * param_3, basic_string * param_4)


/* PathUtil::getDefaultInstallPath(char const*, unsigned int, char const*,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&)
    */

undefined  [16]
PathUtil::getDefaultInstallPath(char *param_1,uint param_2,char *param_3,basic_string *param_4)

{
  return ZEXT416(param_2) << 0x40;
}


