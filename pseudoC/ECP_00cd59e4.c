// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ECP
// Entry Point: 00cd59e4
// Size: 36 bytes
// Signature: undefined __thiscall ~ECP(ECP * this)


/* CryptoPP::ECP::~ECP() */

void __thiscall CryptoPP::ECP::~ECP(ECP *this)

{
  ~ECP(this);
  operator_delete(this);
  return;
}


