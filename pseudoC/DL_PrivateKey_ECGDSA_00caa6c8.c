// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_PrivateKey_ECGDSA
// Entry Point: 00caa6c8
// Size: 28 bytes
// Signature: undefined __thiscall ~DL_PrivateKey_ECGDSA(DL_PrivateKey_ECGDSA<CryptoPP::ECP> * this)


/* virtual thunk to CryptoPP::DL_PrivateKey_ECGDSA<CryptoPP::ECP>::~DL_PrivateKey_ECGDSA() */

void __thiscall
CryptoPP::DL_PrivateKey_ECGDSA<CryptoPP::ECP>::~DL_PrivateKey_ECGDSA
          (DL_PrivateKey_ECGDSA<CryptoPP::ECP> *this)

{
  DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>>::~DL_PrivateKeyImpl
            ((DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>> *)
             (this + *(long *)(*(long *)this + -0x18)));
  return;
}


