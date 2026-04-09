// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: relocate
// Entry Point: 00b30874
// Size: 108 bytes
// Signature: undefined __cdecl relocate(char * param_1, char * param_2)


/* ArchiveFileLoader::relocate(char const*, char const*) */

void ArchiveFileLoader::relocate(char *param_1,char *param_2)

{
  int iVar1;
  char *__s2;
  
  __s2 = *(char **)(param_1 + 0x20);
  if ((param_1[0x10] & 1U) == 0) {
    __s2 = param_1 + 0x11;
  }
  iVar1 = strcmp(param_2,__s2);
  if (iVar1 == 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(param_1 + 0x10);
    std::__ndk1::
    __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ArchiveFileLoader::ArchiveCacheEntry>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ArchiveFileLoader::ArchiveCacheEntry>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ArchiveFileLoader::ArchiveCacheEntry>>>
    ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ArchiveFileLoader::ArchiveCacheEntry>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ArchiveFileLoader::ArchiveCacheEntry>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ArchiveFileLoader::ArchiveCacheEntry>>>
               *)(param_1 + 0x40),*(__tree_node **)(param_1 + 0x48));
    *(char **)(param_1 + 0x40) = param_1 + 0x48;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  return;
}


