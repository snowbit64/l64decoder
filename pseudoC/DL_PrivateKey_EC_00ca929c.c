// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_PrivateKey_EC
// Entry Point: 00ca929c
// Size: 8 bytes
// Signature: undefined __thiscall ~DL_PrivateKey_EC(DL_PrivateKey_EC<CryptoPP::ECP> * this)


/* CryptoPP::DL_PrivateKey_EC<CryptoPP::ECP>::~DL_PrivateKey_EC() */

void __thiscall
CryptoPP::DL_PrivateKey_EC<CryptoPP::ECP>::~DL_PrivateKey_EC(DL_PrivateKey_EC<CryptoPP::ECP> *this)

{
  DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>>::~DL_PrivateKeyImpl
            ((DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>> *)this);
  return;
}


