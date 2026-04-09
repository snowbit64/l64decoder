// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: relocate
// Entry Point: 00b34dd8
// Size: 76 bytes
// Signature: undefined __cdecl relocate(char * param_1, char * param_2)


/* NativeFileLoader::relocate(char const*, char const*) */

void NativeFileLoader::relocate(char *param_1,char *param_2)

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
  }
  return;
}


