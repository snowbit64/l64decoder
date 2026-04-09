// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pushAttribute
// Entry Point: 00b2d48c
// Size: 108 bytes
// Signature: undefined __thiscall pushAttribute(XMLPrinter * this, char * param_1, char * param_2)


/* XMLPrinter::pushAttribute(char const*, char const*) */

void __thiscall XMLPrinter::pushAttribute(XMLPrinter *this,char *param_1,char *param_2)

{
  char **ppcVar1;
  
  printf((char *)this," %s=\"",param_1);
  ppcVar1 = (char **)0x0;
  if (this[0x19] != (XMLPrinter)0x0) {
    ppcVar1 = (char **)(this + 0x450);
  }
  if (this[0x14] != (XMLPrinter)0x0) {
    ppcVar1 = (char **)(this + 0x50);
  }
  printString(this,param_2,ppcVar1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)(this + 0x38),0x4e56b4);
  return;
}


