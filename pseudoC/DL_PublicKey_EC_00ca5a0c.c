// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_PublicKey_EC
// Entry Point: 00ca5a0c
// Size: 112 bytes
// Signature: undefined __thiscall ~DL_PublicKey_EC(DL_PublicKey_EC<CryptoPP::EC2N> * this)


/* virtual thunk to CryptoPP::DL_PublicKey_EC<CryptoPP::EC2N>::~DL_PublicKey_EC() */

void __thiscall
CryptoPP::DL_PublicKey_EC<CryptoPP::EC2N>::~DL_PublicKey_EC(DL_PublicKey_EC<CryptoPP::EC2N> *this)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(this + *(long *)(*(long *)this + -0x18));
  *puVar1 = 0xffb498;
  puVar1[1] = 0xffb538;
  puVar1[2] = 0xffb608;
  DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>::~DL_FixedBasePrecomputationImpl
            ((DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint> *)(puVar1 + 0x41));
  puVar1[1] = 0xffb680;
  puVar1[2] = 0xffb750;
  DL_GroupParameters_EC<CryptoPP::EC2N>::~DL_GroupParameters_EC
            ((DL_GroupParameters_EC<CryptoPP::EC2N> *)(puVar1 + 3));
  operator_delete(puVar1);
  return;
}


