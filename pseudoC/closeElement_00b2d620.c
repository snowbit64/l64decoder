// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: closeElement
// Entry Point: 00b2d620
// Size: 304 bytes
// Signature: undefined __thiscall closeElement(XMLPrinter * this, bool param_1)


/* XMLPrinter::closeElement(bool) */

void __thiscall XMLPrinter::closeElement(XMLPrinter *this,bool param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  int iVar3;
  
  uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + -8);
  *(undefined8 **)(this + 0x28) = (undefined8 *)(*(long *)(this + 0x28) + -8);
  *(int *)(this + 0xc) = *(int *)(this + 0xc) + -1;
  if (this[0x17] == (XMLPrinter)0x0) {
    if ((*(int *)(this + 0x10) < 0) && (!param_1)) {
      puVar1 = &DAT_004fddf9;
      if (this[0x19] != (XMLPrinter)0x0) {
        puVar1 = &DAT_004cd8cc;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)(this + 0x38),(ulong)puVar1);
      iVar3 = *(int *)(this + 0xc);
      if (0 < iVar3) {
        do {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((char *)(this + 0x38),0x4de833);
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    printf((char *)this,"</%s>",uVar2);
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)(this + 0x38),0x4dea19);
  }
  if (*(int *)(this + 0x10) == *(int *)(this + 0xc)) {
    *(undefined4 *)(this + 0x10) = 0xffffffff;
  }
  if ((*(int *)(this + 0xc) == 0) && (!param_1)) {
    puVar1 = &DAT_004fddf9;
    if (this[0x19] != (XMLPrinter)0x0) {
      puVar1 = &DAT_004cd8cc;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)(this + 0x38),(ulong)puVar1);
  }
  this[0x17] = (XMLPrinter)0x0;
  return;
}


