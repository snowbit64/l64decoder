// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_PublicKey_EC
// Entry Point: 00ca5018
// Size: 96 bytes
// Signature: undefined __thiscall ~DL_PublicKey_EC(DL_PublicKey_EC<CryptoPP::ECP> * this)


/* CryptoPP::DL_PublicKey_EC<CryptoPP::ECP>::~DL_PublicKey_EC() */

void __thiscall
CryptoPP::DL_PublicKey_EC<CryptoPP::ECP>::~DL_PublicKey_EC(DL_PublicKey_EC<CryptoPP::ECP> *this)

{
  *(undefined8 *)this = 0xffae18;
  *(undefined8 *)(this + 8) = 0xffaeb8;
  *(undefined8 *)(this + 0x10) = 0xffaf88;
  DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>::~DL_FixedBasePrecomputationImpl
            ((DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint> *)(this + 400));
  *(undefined8 *)(this + 8) = 0xffb000;
  *(undefined8 *)(this + 0x10) = 0xffb0d0;
  DL_GroupParameters_EC<CryptoPP::ECP>::~DL_GroupParameters_EC
            ((DL_GroupParameters_EC<CryptoPP::ECP> *)(this + 0x18));
  return;
}


