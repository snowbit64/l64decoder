// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~CannotFlush
// Entry Point: 00c77240
// Size: 72 bytes
// Signature: undefined __thiscall ~CannotFlush(CannotFlush * this)


/* CryptoPP::CannotFlush::~CannotFlush() */

void __thiscall CryptoPP::CannotFlush::~CannotFlush(CannotFlush *this)

{
  *(undefined ***)this = &PTR__Exception_00fe0298;
  if (((byte)this[0x10] & 1) != 0) {
    operator_delete(*(void **)(this + 0x20));
  }
  std::exception::~exception((exception *)this);
  operator_delete(this);
  return;
}


