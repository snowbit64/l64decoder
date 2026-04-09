// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~BadState
// Entry Point: 00c752f8
// Size: 72 bytes
// Signature: undefined __thiscall ~BadState(BadState * this)


/* CryptoPP::AuthenticatedSymmetricCipher::BadState::~BadState() */

void __thiscall CryptoPP::AuthenticatedSymmetricCipher::BadState::~BadState(BadState *this)

{
  *(undefined ***)this = &PTR__Exception_00fe0298;
  if (((byte)this[0x10] & 1) != 0) {
    operator_delete(*(void **)(this + 0x20));
  }
  std::exception::~exception((exception *)this);
  operator_delete(this);
  return;
}


