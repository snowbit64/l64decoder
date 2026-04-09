// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~UnknownOID
// Entry Point: 00cb8b3c
// Size: 72 bytes
// Signature: undefined __thiscall ~UnknownOID(UnknownOID * this)


/* CryptoPP::UnknownOID::~UnknownOID() */

void __thiscall CryptoPP::UnknownOID::~UnknownOID(UnknownOID *this)

{
  *(undefined ***)this = &PTR__Exception_00fe0298;
  if (((byte)this[0x10] & 1) != 0) {
    operator_delete(*(void **)(this + 0x20));
  }
  std::exception::~exception((exception *)this);
  operator_delete(this);
  return;
}


