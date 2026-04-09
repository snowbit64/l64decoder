// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: printString
// Entry Point: 00b2d4f8
// Size: 212 bytes
// Signature: undefined __thiscall printString(XMLPrinter * this, char * param_1, char * * param_2)


/* XMLPrinter::printString(char const*, char const**) */

void __thiscall XMLPrinter::printString(XMLPrinter *this,char *param_1,char **param_2)

{
  byte bVar1;
  char *__s;
  byte *pbVar2;
  
  if (param_2 != (char **)0x0) {
    bVar1 = *param_1;
    if (bVar1 == 0) {
      return;
    }
    pbVar2 = (byte *)param_1;
    do {
      if ((bVar1 < 0x40) && (__s = param_2[bVar1], __s != (char *)0x0)) {
        if (param_1 < pbVar2) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((char *)(this + 0x38),(ulong)param_1);
          param_1 = (char *)pbVar2;
        }
        strlen(__s);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)(this + 0x38),(ulong)__s);
        param_1 = (char *)((byte *)param_1 + 1);
      }
      pbVar2 = pbVar2 + 1;
      bVar1 = *pbVar2;
    } while (bVar1 != 0);
    if (pbVar2 <= param_1) {
      return;
    }
  }
  strlen(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)(this + 0x38),(ulong)param_1);
  return;
}


