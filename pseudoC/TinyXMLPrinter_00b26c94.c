// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~TinyXMLPrinter
// Entry Point: 00b26c94
// Size: 92 bytes
// Signature: undefined __thiscall ~TinyXMLPrinter(TinyXMLPrinter * this)


/* TinyXMLPrinter::~TinyXMLPrinter() */

void __thiscall TinyXMLPrinter::~TinyXMLPrinter(TinyXMLPrinter *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &PTR__TinyXMLPrinter_00fe91d8;
  *(undefined ***)(this + 8) = &PTR__XMLPrinter_00fe9260;
  if (((byte)this[0x40] & 1) != 0) {
    operator_delete(*(void **)(this + 0x50));
  }
  pvVar1 = *(void **)(this + 0x28);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x30) = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(this);
  return;
}


