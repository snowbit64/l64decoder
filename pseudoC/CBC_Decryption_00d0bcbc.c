// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~CBC_Decryption
// Entry Point: 00d0bcbc
// Size: 36 bytes
// Signature: undefined __thiscall ~CBC_Decryption(CBC_Decryption * this)


/* CryptoPP::CBC_Decryption::~CBC_Decryption() */

void __thiscall CryptoPP::CBC_Decryption::~CBC_Decryption(CBC_Decryption *this)

{
  ~CBC_Decryption(this);
  operator_delete(this);
  return;
}


