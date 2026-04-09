// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_PublicKey_EC
// Entry Point: 00ca5078
// Size: 96 bytes
// Signature: undefined __thiscall ~DL_PublicKey_EC(DL_PublicKey_EC<CryptoPP::ECP> * this)


/* non-virtual thunk to CryptoPP::DL_PublicKey_EC<CryptoPP::ECP>::~DL_PublicKey_EC() */

void __thiscall
CryptoPP::DL_PublicKey_EC<CryptoPP::ECP>::~DL_PublicKey_EC(DL_PublicKey_EC<CryptoPP::ECP> *this)

{
  *(undefined8 *)(this + -8) = 0xffae18;
  *(undefined8 *)this = 0xffaeb8;
  *(undefined8 *)(this + 8) = 0xffaf88;
  DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>::~DL_FixedBasePrecomputationImpl
            ((DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint> *)(this + 0x188));
  *(undefined8 *)this = 0xffb000;
  *(undefined8 *)(this + 8) = 0xffb0d0;
  DL_GroupParameters_EC<CryptoPP::ECP>::~DL_GroupParameters_EC
            ((DL_GroupParameters_EC<CryptoPP::ECP> *)(this + 0x10));
  return;
}


