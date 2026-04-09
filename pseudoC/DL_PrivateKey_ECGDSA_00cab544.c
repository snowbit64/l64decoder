// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_PrivateKey_ECGDSA
// Entry Point: 00cab544
// Size: 52 bytes
// Signature: undefined __thiscall ~DL_PrivateKey_ECGDSA(DL_PrivateKey_ECGDSA<CryptoPP::EC2N> * this)


/* non-virtual thunk to CryptoPP::DL_PrivateKey_ECGDSA<CryptoPP::EC2N>::~DL_PrivateKey_ECGDSA() */

void __thiscall
CryptoPP::DL_PrivateKey_ECGDSA<CryptoPP::EC2N>::~DL_PrivateKey_ECGDSA
          (DL_PrivateKey_ECGDSA<CryptoPP::EC2N> *this)

{
  DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>>::~DL_PrivateKeyImpl
            ((DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>> *)(this + -8));
  operator_delete((DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>> *)(this + -8))
  ;
  return;
}


