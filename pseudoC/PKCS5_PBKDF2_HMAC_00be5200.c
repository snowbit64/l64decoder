// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~PKCS5_PBKDF2_HMAC
// Entry Point: 00be5200
// Size: 4 bytes
// Signature: undefined __thiscall ~PKCS5_PBKDF2_HMAC(PKCS5_PBKDF2_HMAC<CryptoPP::SHA256> * this)


/* CryptoPP::PKCS5_PBKDF2_HMAC<CryptoPP::SHA256>::~PKCS5_PBKDF2_HMAC() */

void __thiscall
CryptoPP::PKCS5_PBKDF2_HMAC<CryptoPP::SHA256>::~PKCS5_PBKDF2_HMAC
          (PKCS5_PBKDF2_HMAC<CryptoPP::SHA256> *this)

{
  operator_delete(this);
  return;
}


