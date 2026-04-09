// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_PrivateKey_EC
// Entry Point: 00ca9ce0
// Size: 28 bytes
// Signature: undefined __thiscall ~DL_PrivateKey_EC(DL_PrivateKey_EC<CryptoPP::EC2N> * this)


/* virtual thunk to CryptoPP::DL_PrivateKey_EC<CryptoPP::EC2N>::~DL_PrivateKey_EC() */

void __thiscall
CryptoPP::DL_PrivateKey_EC<CryptoPP::EC2N>::~DL_PrivateKey_EC
          (DL_PrivateKey_EC<CryptoPP::EC2N> *this)

{
  DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>>::~DL_PrivateKeyImpl
            ((DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>> *)
             (this + *(long *)(*(long *)this + -0x18)));
  return;
}


