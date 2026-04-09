// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~CBC_CTS_Decryption
// Entry Point: 00d0c3c0
// Size: 36 bytes
// Signature: undefined __thiscall ~CBC_CTS_Decryption(CBC_CTS_Decryption * this)


/* CryptoPP::CBC_CTS_Decryption::~CBC_CTS_Decryption() */

void __thiscall CryptoPP::CBC_CTS_Decryption::~CBC_CTS_Decryption(CBC_CTS_Decryption *this)

{
  CBC_Decryption::~CBC_Decryption((CBC_Decryption *)this);
  operator_delete(this);
  return;
}


