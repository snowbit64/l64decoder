// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SignatureVerificationFailed
// Entry Point: 00cde560
// Size: 72 bytes
// Signature: undefined __thiscall ~SignatureVerificationFailed(SignatureVerificationFailed * this)


/* CryptoPP::SignatureVerificationFilter::SignatureVerificationFailed::~SignatureVerificationFailed()
    */

void __thiscall
CryptoPP::SignatureVerificationFilter::SignatureVerificationFailed::~SignatureVerificationFailed
          (SignatureVerificationFailed *this)

{
  *(undefined ***)this = &PTR__Exception_00fe0298;
  if (((byte)this[0x10] & 1) != 0) {
    operator_delete(*(void **)(this + 0x20));
  }
  std::exception::~exception((exception *)this);
  operator_delete(this);
  return;
}


