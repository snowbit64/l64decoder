// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~XMLPrinter
// Entry Point: 00e0164c
// Size: 100 bytes
// Signature: undefined __thiscall ~XMLPrinter(XMLPrinter * this)


/* tinyxml2::XMLPrinter::~XMLPrinter() */

void __thiscall tinyxml2::XMLPrinter::~XMLPrinter(XMLPrinter *this)

{
  XMLPrinter *pXVar1;
  
  pXVar1 = *(XMLPrinter **)(this + 0x110);
  *(undefined ***)this = &PTR__XMLPrinter_01013648;
  if ((pXVar1 != this + 0x118) && (pXVar1 != (XMLPrinter *)0x0)) {
    operator_delete__(pXVar1);
  }
  pXVar1 = *(XMLPrinter **)(this + 0x10);
  if ((pXVar1 != this + 0x18) && (pXVar1 != (XMLPrinter *)0x0)) {
    operator_delete__(pXVar1);
    return;
  }
  return;
}


