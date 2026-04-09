// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SignatureVerificationFilter
// Entry Point: 00cddb1c
// Size: 40 bytes
// Signature: undefined __thiscall ~SignatureVerificationFilter(SignatureVerificationFilter * this)


/* non-virtual thunk to CryptoPP::SignatureVerificationFilter::~SignatureVerificationFilter() */

void __thiscall
CryptoPP::SignatureVerificationFilter::~SignatureVerificationFilter
          (SignatureVerificationFilter *this)

{
  ~SignatureVerificationFilter(this + -8);
  operator_delete(this + -8);
  return;
}


