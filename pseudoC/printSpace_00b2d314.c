// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: printSpace
// Entry Point: 00b2d314
// Size: 80 bytes
// Signature: undefined __thiscall printSpace(XMLPrinter * this, int param_1)


/* XMLPrinter::printSpace(int) */

void __thiscall XMLPrinter::printSpace(XMLPrinter *this,int param_1)

{
  if (0 < param_1) {
    do {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)(this + 0x38),0x4de833);
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}


