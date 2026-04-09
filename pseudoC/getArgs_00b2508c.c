// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getArgs
// Entry Point: 00b2508c
// Size: 136 bytes
// Signature: undefined __thiscall getArgs(CommandLineArgumentParser * this, basic_string * param_1)


/* CommandLineArgumentParser::getArgs(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) const */

void __thiscall
CommandLineArgumentParser::getArgs(CommandLineArgumentParser *this,basic_string *param_1)

{
  long lVar1;
  
  if ((1 < *(int *)this) &&
     (std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)param_1), 2 < *(int *)this)) {
    lVar1 = 2;
    do {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)param_1);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)param_1);
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)this);
  }
  return;
}


