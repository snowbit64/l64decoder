// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~InputRejected
// Entry Point: 00cb9800
// Size: 72 bytes
// Signature: undefined __thiscall ~InputRejected(InputRejected * this)


/* CryptoPP::InputRejecting<CryptoPP::Filter>::InputRejected::~InputRejected() */

void __thiscall
CryptoPP::InputRejecting<CryptoPP::Filter>::InputRejected::~InputRejected(InputRejected *this)

{
  *(undefined ***)this = &PTR__Exception_00fe0298;
  if (((byte)this[0x10] & 1) != 0) {
    operator_delete(*(void **)(this + 0x20));
  }
  std::exception::~exception((exception *)this);
  operator_delete(this);
  return;
}


