// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Redirector
// Entry Point: 00cddb44
// Size: 4 bytes
// Signature: undefined __thiscall ~Redirector(Redirector * this)


/* CryptoPP::Redirector::~Redirector() */

void __thiscall CryptoPP::Redirector::~Redirector(Redirector *this)

{
  operator_delete(this);
  return;
}


