// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSpecificName
// Entry Point: 0096205c
// Size: 8 bytes
// Signature: undefined __cdecl getSpecificName(char * param_1, TextureDesc * param_2, basic_string * param_3)


/* Texture::getSpecificName(char const*, TextureDesc*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) */

void Texture::getSpecificName(char *param_1,TextureDesc *param_2,basic_string *param_3)

{
  TextureUtil::getSpecificFilename(param_1,param_3);
  return;
}


