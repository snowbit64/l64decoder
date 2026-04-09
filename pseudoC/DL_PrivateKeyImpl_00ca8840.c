// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_PrivateKeyImpl
// Entry Point: 00ca8840
// Size: 48 bytes
// Signature: undefined __thiscall ~DL_PrivateKeyImpl(DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>> * this)


/* non-virtual thunk to CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>
   >::~DL_PrivateKeyImpl() */

void __thiscall
CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>>::~DL_PrivateKeyImpl
          (DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>> *this)

{
  ~DL_PrivateKeyImpl(this + -8);
  operator_delete(this + -8);
  return;
}


