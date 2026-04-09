// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: checkFileExistWithAnotherExtension
// Entry Point: 0096401c
// Size: 76 bytes
// Signature: undefined __cdecl checkFileExistWithAnotherExtension(basic_string * param_1, ulong param_2, char * param_3)


/* TextureUtil::checkFileExistWithAnotherExtension(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, unsigned long, char const*) */

void TextureUtil::checkFileExistWithAnotherExtension
               (basic_string *param_1,ulong param_2,char *param_3)

{
  char *pcVar1;
  
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  resize((ulong)param_1,(char)param_2);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)param_1);
  pcVar1 = *(char **)(param_1 + 4);
  if ((*(byte *)param_1 & 1) == 0) {
    pcVar1 = (char *)((long)param_1 + 1);
  }
  FileManager::exist((FileManager *)FileManager::s_singletonFileManager,pcVar1);
  return;
}


