// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~InvalidKeyLength
// Entry Point: 00c7c034
// Size: 72 bytes
// Signature: undefined __thiscall ~InvalidKeyLength(InvalidKeyLength * this)


/* CryptoPP::InvalidKeyLength::~InvalidKeyLength() */

void __thiscall CryptoPP::InvalidKeyLength::~InvalidKeyLength(InvalidKeyLength *this)

{
  *(undefined ***)this = &PTR__Exception_00fe0298;
  if (((byte)this[0x10] & 1) != 0) {
    operator_delete(*(void **)(this + 0x20));
  }
  std::exception::~exception((exception *)this);
  operator_delete(this);
  return;
}


