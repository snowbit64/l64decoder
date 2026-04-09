// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~NotImplemented
// Entry Point: 0093dc68
// Size: 72 bytes
// Signature: undefined __thiscall ~NotImplemented(NotImplemented * this)


/* CryptoPP::NotImplemented::~NotImplemented() */

void __thiscall CryptoPP::NotImplemented::~NotImplemented(NotImplemented *this)

{
  *(undefined ***)this = &PTR__Exception_00fe0298;
  if (((byte)this[0x10] & 1) != 0) {
    operator_delete(*(void **)(this + 0x20));
  }
  std::exception::~exception((exception *)this);
  operator_delete(this);
  return;
}


