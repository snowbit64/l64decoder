// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pushText
// Entry Point: 00b2d750
// Size: 244 bytes
// Signature: undefined __thiscall pushText(XMLPrinter * this, char * param_1, bool param_2)


/* XMLPrinter::pushText(char const*, bool) */

void __thiscall XMLPrinter::pushText(XMLPrinter *this,char *param_1,bool param_2)

{
  char **ppcVar1;
  
  *(int *)(this + 0x10) = *(int *)(this + 0xc) + -1;
  if (this[0x17] != (XMLPrinter)0x0) {
    this[0x17] = (XMLPrinter)0x0;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)(this + 0x38),0x4eb0ab);
  }
  if (param_2) {
    if (this[0x19] != (XMLPrinter)0x0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)(this + 0x38),0x4e100e);
      printString(this,param_1,(char **)(this + 0x450));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)(this + 0x38),0x4d2688);
      return;
    }
    printf((char *)this,"<![CDATA[%s]]>",param_1);
    return;
  }
  ppcVar1 = (char **)0x0;
  if (this[0x19] != (XMLPrinter)0x0) {
    ppcVar1 = (char **)(this + 0x450);
  }
  if (this[0x14] != (XMLPrinter)0x0) {
    ppcVar1 = (char **)(this + 0x250);
  }
  printString(this,param_1,ppcVar1);
  return;
}


