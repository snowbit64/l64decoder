// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~HashVerificationFilter
// Entry Point: 00cdd41c
// Size: 40 bytes
// Signature: undefined __thiscall ~HashVerificationFilter(HashVerificationFilter * this)


/* non-virtual thunk to CryptoPP::HashVerificationFilter::~HashVerificationFilter() */

void __thiscall
CryptoPP::HashVerificationFilter::~HashVerificationFilter(HashVerificationFilter *this)

{
  ~HashVerificationFilter(this + -8);
  operator_delete(this + -8);
  return;
}


