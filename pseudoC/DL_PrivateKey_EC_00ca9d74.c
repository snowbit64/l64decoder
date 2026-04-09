// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_PrivateKey_EC
// Entry Point: 00ca9d74
// Size: 60 bytes
// Signature: undefined __thiscall ~DL_PrivateKey_EC(DL_PrivateKey_EC<CryptoPP::EC2N> * this)


/* virtual thunk to CryptoPP::DL_PrivateKey_EC<CryptoPP::EC2N>::~DL_PrivateKey_EC() */

void __thiscall
CryptoPP::DL_PrivateKey_EC<CryptoPP::EC2N>::~DL_PrivateKey_EC
          (DL_PrivateKey_EC<CryptoPP::EC2N> *this)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)this + -0x18);
  DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>>::~DL_PrivateKeyImpl
            ((DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>> *)(this + lVar1));
  operator_delete((DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>> *)
                  (this + lVar1));
  return;
}


