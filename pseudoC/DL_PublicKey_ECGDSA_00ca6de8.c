// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_PublicKey_ECGDSA
// Entry Point: 00ca6de8
// Size: 104 bytes
// Signature: undefined __thiscall ~DL_PublicKey_ECGDSA(DL_PublicKey_ECGDSA<CryptoPP::EC2N> * this)


/* virtual thunk to CryptoPP::DL_PublicKey_ECGDSA<CryptoPP::EC2N>::~DL_PublicKey_ECGDSA() */

void __thiscall
CryptoPP::DL_PublicKey_ECGDSA<CryptoPP::EC2N>::~DL_PublicKey_ECGDSA
          (DL_PublicKey_ECGDSA<CryptoPP::EC2N> *this)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(this + *(long *)(*(long *)this + -0x18));
  *puVar1 = 0xffc198;
  puVar1[1] = 0xffc238;
  puVar1[2] = 0xffc308;
  DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>::~DL_FixedBasePrecomputationImpl
            ((DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint> *)(puVar1 + 0x41));
  puVar1[1] = 0xffc380;
  puVar1[2] = 0xffc450;
  DL_GroupParameters_EC<CryptoPP::EC2N>::~DL_GroupParameters_EC
            ((DL_GroupParameters_EC<CryptoPP::EC2N> *)(puVar1 + 3));
  return;
}


