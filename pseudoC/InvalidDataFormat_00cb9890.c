// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~InvalidDataFormat
// Entry Point: 00cb9890
// Size: 72 bytes
// Signature: undefined __thiscall ~InvalidDataFormat(InvalidDataFormat * this)


/* CryptoPP::InvalidDataFormat::~InvalidDataFormat() */

void __thiscall CryptoPP::InvalidDataFormat::~InvalidDataFormat(InvalidDataFormat *this)

{
  *(undefined ***)this = &PTR__Exception_00fe0298;
  if (((byte)this[0x10] & 1) != 0) {
    operator_delete(*(void **)(this + 0x20));
  }
  std::exception::~exception((exception *)this);
  operator_delete(this);
  return;
}


