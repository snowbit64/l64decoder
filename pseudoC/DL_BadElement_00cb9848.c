// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_BadElement
// Entry Point: 00cb9848
// Size: 72 bytes
// Signature: undefined __thiscall ~DL_BadElement(DL_BadElement * this)


/* CryptoPP::DL_BadElement::~DL_BadElement() */

void __thiscall CryptoPP::DL_BadElement::~DL_BadElement(DL_BadElement *this)

{
  *(undefined ***)this = &PTR__Exception_00fe0298;
  if (((byte)this[0x10] & 1) != 0) {
    operator_delete(*(void **)(this + 0x20));
  }
  std::exception::~exception((exception *)this);
  operator_delete(this);
  return;
}


