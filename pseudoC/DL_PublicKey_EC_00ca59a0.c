// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_PublicKey_EC
// Entry Point: 00ca59a0
// Size: 108 bytes
// Signature: undefined __thiscall ~DL_PublicKey_EC(DL_PublicKey_EC<CryptoPP::EC2N> * this)


/* non-virtual thunk to CryptoPP::DL_PublicKey_EC<CryptoPP::EC2N>::~DL_PublicKey_EC() */

void __thiscall
CryptoPP::DL_PublicKey_EC<CryptoPP::EC2N>::~DL_PublicKey_EC(DL_PublicKey_EC<CryptoPP::EC2N> *this)

{
  *(undefined8 *)(this + -8) = 0xffb498;
  *(undefined8 *)this = 0xffb538;
  *(undefined8 *)(this + 8) = 0xffb608;
  DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>::~DL_FixedBasePrecomputationImpl
            ((DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint> *)(this + 0x200));
  *(undefined8 *)this = 0xffb680;
  *(undefined8 *)(this + 8) = 0xffb750;
  DL_GroupParameters_EC<CryptoPP::EC2N>::~DL_GroupParameters_EC
            ((DL_GroupParameters_EC<CryptoPP::EC2N> *)(this + 0x10));
  operator_delete(this + -8);
  return;
}


