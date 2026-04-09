// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~InvalidCiphertext
// Entry Point: 00c7cc88
// Size: 72 bytes
// Signature: undefined __thiscall ~InvalidCiphertext(InvalidCiphertext * this)


/* CryptoPP::InvalidCiphertext::~InvalidCiphertext() */

void __thiscall CryptoPP::InvalidCiphertext::~InvalidCiphertext(InvalidCiphertext *this)

{
  *(undefined ***)this = &PTR__Exception_00fe0298;
  if (((byte)this[0x10] & 1) != 0) {
    operator_delete(*(void **)(this + 0x20));
  }
  std::exception::~exception((exception *)this);
  operator_delete(this);
  return;
}


