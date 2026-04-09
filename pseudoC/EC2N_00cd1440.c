// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~EC2N
// Entry Point: 00cd1440
// Size: 36 bytes
// Signature: undefined __thiscall ~EC2N(EC2N * this)


/* CryptoPP::EC2N::~EC2N() */

void __thiscall CryptoPP::EC2N::~EC2N(EC2N *this)

{
  ~EC2N(this);
  operator_delete(this);
  return;
}


