// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DivideByZero
// Entry Point: 00d052d4
// Size: 72 bytes
// Signature: undefined __thiscall ~DivideByZero(DivideByZero * this)


/* CryptoPP::Integer::DivideByZero::~DivideByZero() */

void __thiscall CryptoPP::Integer::DivideByZero::~DivideByZero(DivideByZero *this)

{
  *(undefined ***)this = &PTR__Exception_00fe0298;
  if (((byte)this[0x10] & 1) != 0) {
    operator_delete(*(void **)(this + 0x20));
  }
  std::exception::~exception((exception *)this);
  operator_delete(this);
  return;
}


