// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_PublicKey_ECGDSA
// Entry Point: 00ca5fb4
// Size: 104 bytes
// Signature: undefined __thiscall ~DL_PublicKey_ECGDSA(DL_PublicKey_ECGDSA<CryptoPP::ECP> * this)


/* virtual thunk to CryptoPP::DL_PublicKey_ECGDSA<CryptoPP::ECP>::~DL_PublicKey_ECGDSA() */

void __thiscall
CryptoPP::DL_PublicKey_ECGDSA<CryptoPP::ECP>::~DL_PublicKey_ECGDSA
          (DL_PublicKey_ECGDSA<CryptoPP::ECP> *this)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(this + *(long *)(*(long *)this + -0x18));
  *puVar1 = 0xffbb18;
  puVar1[1] = 0xffbbb8;
  puVar1[2] = 0xffbc88;
  DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>::~DL_FixedBasePrecomputationImpl
            ((DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint> *)(puVar1 + 0x32));
  puVar1[1] = 0xffbd00;
  puVar1[2] = 0xffbdd0;
  DL_GroupParameters_EC<CryptoPP::ECP>::~DL_GroupParameters_EC
            ((DL_GroupParameters_EC<CryptoPP::ECP> *)(puVar1 + 3));
  return;
}


