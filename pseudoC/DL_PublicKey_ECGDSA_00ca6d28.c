// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_PublicKey_ECGDSA
// Entry Point: 00ca6d28
// Size: 96 bytes
// Signature: undefined __thiscall ~DL_PublicKey_ECGDSA(DL_PublicKey_ECGDSA<CryptoPP::EC2N> * this)


/* CryptoPP::DL_PublicKey_ECGDSA<CryptoPP::EC2N>::~DL_PublicKey_ECGDSA() */

void __thiscall
CryptoPP::DL_PublicKey_ECGDSA<CryptoPP::EC2N>::~DL_PublicKey_ECGDSA
          (DL_PublicKey_ECGDSA<CryptoPP::EC2N> *this)

{
  *(undefined8 *)this = 0xffc198;
  *(undefined8 *)(this + 8) = 0xffc238;
  *(undefined8 *)(this + 0x10) = 0xffc308;
  DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>::~DL_FixedBasePrecomputationImpl
            ((DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint> *)(this + 0x208));
  *(undefined8 *)(this + 8) = 0xffc380;
  *(undefined8 *)(this + 0x10) = 0xffc450;
  DL_GroupParameters_EC<CryptoPP::EC2N>::~DL_GroupParameters_EC
            ((DL_GroupParameters_EC<CryptoPP::EC2N> *)(this + 0x18));
  return;
}


