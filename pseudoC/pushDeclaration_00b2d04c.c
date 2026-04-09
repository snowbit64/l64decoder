// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pushDeclaration
// Entry Point: 00b2d04c
// Size: 216 bytes
// Signature: undefined __thiscall pushDeclaration(XMLPrinter * this, char * param_1)


/* XMLPrinter::pushDeclaration(char const*) */

void __thiscall XMLPrinter::pushDeclaration(XMLPrinter *this,char *param_1)

{
  undefined *puVar1;
  int iVar2;
  
  if (this[0x17] != (XMLPrinter)0x0) {
    this[0x17] = (XMLPrinter)0x0;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)(this + 0x38),0x4eb0ab);
  }
  if (((*(int *)(this + 0x10) < 0) && (this[8] == (XMLPrinter)0x0)) &&
     (this[0x18] == (XMLPrinter)0x0)) {
    puVar1 = &DAT_004fddf9;
    if (this[0x19] != (XMLPrinter)0x0) {
      puVar1 = &DAT_004cd8cc;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)(this + 0x38),(ulong)puVar1);
    iVar2 = *(int *)(this + 0xc);
    if (0 < iVar2) {
      do {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)(this + 0x38),0x4de833);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  this[8] = (XMLPrinter)0x0;
  printf((char *)this,"<?%s?>",param_1);
  return;
}


