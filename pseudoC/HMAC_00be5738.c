// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~HMAC
// Entry Point: 00be5738
// Size: 36 bytes
// Signature: undefined __thiscall ~HMAC(HMAC<CryptoPP::SHA256> * this)


/* CryptoPP::HMAC<CryptoPP::SHA256>::~HMAC() */

void __thiscall CryptoPP::HMAC<CryptoPP::SHA256>::~HMAC(HMAC<CryptoPP::SHA256> *this)

{
  ~HMAC(this);
  operator_delete(this);
  return;
}


