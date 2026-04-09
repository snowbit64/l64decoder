// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~KeyTooShort
// Entry Point: 00d1d9f0
// Size: 72 bytes
// Signature: undefined __thiscall ~KeyTooShort(KeyTooShort * this)


/* CryptoPP::PK_SignatureScheme::KeyTooShort::~KeyTooShort() */

void __thiscall CryptoPP::PK_SignatureScheme::KeyTooShort::~KeyTooShort(KeyTooShort *this)

{
  *(undefined ***)this = &PTR__Exception_00fe0298;
  if (((byte)this[0x10] & 1) != 0) {
    operator_delete(*(void **)(this + 0x20));
  }
  std::exception::~exception((exception *)this);
  operator_delete(this);
  return;
}


