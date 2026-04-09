// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~InvalidDerivedLength
// Entry Point: 00c7c07c
// Size: 72 bytes
// Signature: undefined __thiscall ~InvalidDerivedLength(InvalidDerivedLength * this)


/* CryptoPP::InvalidDerivedLength::~InvalidDerivedLength() */

void __thiscall CryptoPP::InvalidDerivedLength::~InvalidDerivedLength(InvalidDerivedLength *this)

{
  *(undefined ***)this = &PTR__Exception_00fe0298;
  if (((byte)this[0x10] & 1) != 0) {
    operator_delete(*(void **)(this + 0x20));
  }
  std::exception::~exception((exception *)this);
  operator_delete(this);
  return;
}


