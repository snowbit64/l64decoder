// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_PublicKey_ECGDSA
// Entry Point: 00ca5ef4
// Size: 96 bytes
// Signature: undefined __thiscall ~DL_PublicKey_ECGDSA(DL_PublicKey_ECGDSA<CryptoPP::ECP> * this)


/* CryptoPP::DL_PublicKey_ECGDSA<CryptoPP::ECP>::~DL_PublicKey_ECGDSA() */

void __thiscall
CryptoPP::DL_PublicKey_ECGDSA<CryptoPP::ECP>::~DL_PublicKey_ECGDSA
          (DL_PublicKey_ECGDSA<CryptoPP::ECP> *this)

{
  *(undefined8 *)this = 0xffbb18;
  *(undefined8 *)(this + 8) = 0xffbbb8;
  *(undefined8 *)(this + 0x10) = 0xffbc88;
  DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>::~DL_FixedBasePrecomputationImpl
            ((DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint> *)(this + 400));
  *(undefined8 *)(this + 8) = 0xffbd00;
  *(undefined8 *)(this + 0x10) = 0xffbdd0;
  DL_GroupParameters_EC<CryptoPP::ECP>::~DL_GroupParameters_EC
            ((DL_GroupParameters_EC<CryptoPP::ECP> *)(this + 0x18));
  return;
}


