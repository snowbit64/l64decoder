// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~HashVerificationFailed
// Entry Point: 00cde4d0
// Size: 72 bytes
// Signature: undefined __thiscall ~HashVerificationFailed(HashVerificationFailed * this)


/* CryptoPP::HashVerificationFilter::HashVerificationFailed::~HashVerificationFailed() */

void __thiscall
CryptoPP::HashVerificationFilter::HashVerificationFailed::~HashVerificationFailed
          (HashVerificationFailed *this)

{
  *(undefined ***)this = &PTR__Exception_00fe0298;
  if (((byte)this[0x10] & 1) != 0) {
    operator_delete(*(void **)(this + 0x20));
  }
  std::exception::~exception((exception *)this);
  operator_delete(this);
  return;
}


