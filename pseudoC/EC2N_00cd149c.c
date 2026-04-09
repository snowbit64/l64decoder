// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~EC2N
// Entry Point: 00cd149c
// Size: 40 bytes
// Signature: undefined __thiscall ~EC2N(EC2N * this)


/* non-virtual thunk to CryptoPP::EC2N::~EC2N() */

void __thiscall CryptoPP::EC2N::~EC2N(EC2N *this)

{
  ~EC2N(this + -8);
  operator_delete(this + -8);
  return;
}


