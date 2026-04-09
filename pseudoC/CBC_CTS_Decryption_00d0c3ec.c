// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~CBC_CTS_Decryption
// Entry Point: 00d0c3ec
// Size: 40 bytes
// Signature: undefined __thiscall ~CBC_CTS_Decryption(CBC_CTS_Decryption * this)


/* non-virtual thunk to CryptoPP::CBC_CTS_Decryption::~CBC_CTS_Decryption() */

void __thiscall CryptoPP::CBC_CTS_Decryption::~CBC_CTS_Decryption(CBC_CTS_Decryption *this)

{
  CBC_Decryption::~CBC_Decryption((CBC_Decryption *)(this + -8));
  operator_delete((CBC_Decryption *)(this + -8));
  return;
}


