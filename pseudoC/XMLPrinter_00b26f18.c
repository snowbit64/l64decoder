// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~XMLPrinter
// Entry Point: 00b26f18
// Size: 80 bytes
// Signature: undefined __thiscall ~XMLPrinter(XMLPrinter * this)


/* XMLPrinter::~XMLPrinter() */

void __thiscall XMLPrinter::~XMLPrinter(XMLPrinter *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &PTR__XMLPrinter_00fe9260;
  if (((byte)this[0x38] & 1) != 0) {
    operator_delete(*(void **)(this + 0x48));
  }
  pvVar1 = *(void **)(this + 0x20);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x28) = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(this);
  return;
}


