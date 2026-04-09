// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Putc
// Entry Point: 00e01da8
// Size: 216 bytes
// Signature: undefined __thiscall Putc(XMLPrinter * this, char param_1)


/* tinyxml2::XMLPrinter::Putc(char) */

XMLPrinter * __thiscall tinyxml2::XMLPrinter::Putc(XMLPrinter *this,char param_1)

{
  int iVar1;
  uint uVar2;
  XMLPrinter *pXVar3;
  void *__dest;
  XMLPrinter *__src;
  int iVar4;
  int iVar5;
  
  if (*(FILE **)(this + 0x78) != (FILE *)0x0) {
    uVar2 = fputc((uint)(byte)param_1,*(FILE **)(this + 0x78));
    return (XMLPrinter *)(ulong)uVar2;
  }
  iVar4 = *(int *)(this + 0x130);
  iVar5 = iVar4 + 1;
  if (iVar4 < *(int *)(this + 300)) {
    __dest = *(void **)(this + 0x110);
    pXVar3 = this;
  }
  else {
    iVar1 = iVar5 * 2;
    __dest = operator_new__((long)iVar1);
    __src = *(XMLPrinter **)(this + 0x110);
    pXVar3 = (XMLPrinter *)memcpy(__dest,__src,(long)iVar4);
    if ((__src != this + 0x118) && (__src != (XMLPrinter *)0x0)) {
      operator_delete__(__src);
      iVar4 = *(int *)(this + 0x130);
      iVar5 = iVar4 + 1;
      pXVar3 = __src;
    }
    *(void **)(this + 0x110) = __dest;
    *(int *)(this + 300) = iVar1;
  }
  *(int *)(this + 0x130) = iVar5;
  ((undefined *)((long)__dest + (long)iVar4))[-1] = param_1;
  *(undefined *)((long)__dest + (long)iVar4) = 0;
  return pXVar3;
}


