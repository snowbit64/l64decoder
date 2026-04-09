// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ECP
// Entry Point: 00cd5a4c
// Size: 40 bytes
// Signature: undefined __thiscall ~ECP(ECP * this)


/* non-virtual thunk to CryptoPP::ECP::~ECP() */

void __thiscall CryptoPP::ECP::~ECP(ECP *this)

{
  ~ECP(this + -8);
  operator_delete(this + -8);
  return;
}


