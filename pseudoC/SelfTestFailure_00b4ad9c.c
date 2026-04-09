// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SelfTestFailure
// Entry Point: 00b4ad9c
// Size: 72 bytes
// Signature: undefined __thiscall ~SelfTestFailure(SelfTestFailure * this)


/* CryptoPP::SelfTestFailure::~SelfTestFailure() */

void __thiscall CryptoPP::SelfTestFailure::~SelfTestFailure(SelfTestFailure *this)

{
  *(undefined ***)this = &PTR__Exception_00fe0298;
  if (((byte)this[0x10] & 1) != 0) {
    operator_delete(*(void **)(this + 0x20));
  }
  std::exception::~exception((exception *)this);
  operator_delete(this);
  return;
}


