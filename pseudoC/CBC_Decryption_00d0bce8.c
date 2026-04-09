// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~CBC_Decryption
// Entry Point: 00d0bce8
// Size: 40 bytes
// Signature: undefined __thiscall ~CBC_Decryption(CBC_Decryption * this)


/* non-virtual thunk to CryptoPP::CBC_Decryption::~CBC_Decryption() */

void __thiscall CryptoPP::CBC_Decryption::~CBC_Decryption(CBC_Decryption *this)

{
  ~CBC_Decryption(this + -8);
  operator_delete(this + -8);
  return;
}


