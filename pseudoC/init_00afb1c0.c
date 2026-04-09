// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 00afb1c0
// Size: 52 bytes
// Signature: undefined __cdecl init(char * param_1)


/* FileHashManager::init(char const*) */

void FileHashManager::init(char *param_1)

{
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append(param_1);
  readFileHashes();
  return;
}


