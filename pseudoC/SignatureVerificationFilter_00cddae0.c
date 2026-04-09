// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SignatureVerificationFilter
// Entry Point: 00cddae0
// Size: 36 bytes
// Signature: undefined __thiscall ~SignatureVerificationFilter(SignatureVerificationFilter * this)


/* CryptoPP::SignatureVerificationFilter::~SignatureVerificationFilter() */

void __thiscall
CryptoPP::SignatureVerificationFilter::~SignatureVerificationFilter
          (SignatureVerificationFilter *this)

{
  ~SignatureVerificationFilter(this);
  operator_delete(this);
  return;
}


