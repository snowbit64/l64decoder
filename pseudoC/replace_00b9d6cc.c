// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: replace
// Entry Point: 00b9d6cc
// Size: 172 bytes
// Signature: undefined __cdecl replace(basic_string * param_1, char * param_2, char * param_3)


/* StringUtil::replace(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >&, char const*, char const*) */

void StringUtil::replace(basic_string *param_1,char *param_2,char *param_3)

{
  size_t sVar1;
  size_t sVar2;
  ulong uVar3;
  
  sVar1 = strlen(param_2);
  sVar2 = strlen(param_3);
  uVar3 = std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::find
                    ((char *)param_1,(ulong)param_2,0);
  if (uVar3 != 0xffffffffffffffff) {
    do {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      replace((ulong)param_1,uVar3,(char *)(sVar1 & 0xffffffff),(ulong)param_3);
      uVar3 = std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::find
                        ((char *)param_1,(ulong)param_2,uVar3 + (sVar2 & 0xffffffff));
    } while (uVar3 != 0xffffffffffffffff);
  }
  return;
}


