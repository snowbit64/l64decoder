// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Redirector
// Entry Point: 00cddd30
// Size: 8 bytes
// Signature: undefined __thiscall ~Redirector(Redirector * this)


/* non-virtual thunk to CryptoPP::Redirector::~Redirector() */

void __thiscall CryptoPP::Redirector::~Redirector(Redirector *this)

{
  operator_delete(this + -8);
  return;
}


