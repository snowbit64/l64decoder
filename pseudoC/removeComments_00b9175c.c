// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeComments
// Entry Point: 00b9175c
// Size: 304 bytes
// Signature: undefined __thiscall removeComments(Preprocessor * this, uint param_1, uint param_2, COMMENT_MODE param_3, basic_string * param_4)


/* Preprocessor::removeComments(unsigned int, unsigned int, Preprocessor::COMMENT_MODE,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&)
    */

void __thiscall
Preprocessor::removeComments
          (Preprocessor *this,uint param_1,uint param_2,COMMENT_MODE param_3,basic_string *param_4)

{
  uint uVar1;
  long lVar2;
  char cVar3;
  uint local_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_5c = param_1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  reserve((ulong)param_4);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  resize((ulong)param_4,'\0');
  while (param_1 < param_2) {
    skipPossibleComments(this,&local_5c,param_3,true);
    uVar1 = local_5c;
    param_1 = local_5c;
    if (local_5c < param_2) {
      param_1 = local_5c + 1;
      local_5c = param_1;
      cVar3 = getChar(this,uVar1);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((ulong)param_4,'\x01');
      if ((*(char *)(*(long *)(this + 0x30) + 0x30) == cVar3) && (param_1 < param_2)) {
        uVar1 = uVar1 + 2;
        local_5c = uVar1;
        getChar(this,param_1);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((ulong)param_4,'\x01');
        param_1 = uVar1;
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


