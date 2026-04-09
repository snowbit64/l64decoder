// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~BERDecodeErr
// Entry Point: 00cb8b84
// Size: 72 bytes
// Signature: undefined __thiscall ~BERDecodeErr(BERDecodeErr * this)


/* CryptoPP::BERDecodeErr::~BERDecodeErr() */

void __thiscall CryptoPP::BERDecodeErr::~BERDecodeErr(BERDecodeErr *this)

{
  *(undefined ***)this = &PTR__Exception_00fe0298;
  if (((byte)this[0x10] & 1) != 0) {
    operator_delete(*(void **)(this + 0x20));
  }
  std::exception::~exception((exception *)this);
  operator_delete(this);
  return;
}


