// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_PublicKey_EC
// Entry Point: 00ca50d8
// Size: 104 bytes
// Signature: undefined __thiscall ~DL_PublicKey_EC(DL_PublicKey_EC<CryptoPP::ECP> * this)


/* virtual thunk to CryptoPP::DL_PublicKey_EC<CryptoPP::ECP>::~DL_PublicKey_EC() */

void __thiscall
CryptoPP::DL_PublicKey_EC<CryptoPP::ECP>::~DL_PublicKey_EC(DL_PublicKey_EC<CryptoPP::ECP> *this)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(this + *(long *)(*(long *)this + -0x18));
  *puVar1 = 0xffae18;
  puVar1[1] = 0xffaeb8;
  puVar1[2] = 0xffaf88;
  DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>::~DL_FixedBasePrecomputationImpl
            ((DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint> *)(puVar1 + 0x32));
  puVar1[1] = 0xffb000;
  puVar1[2] = 0xffb0d0;
  DL_GroupParameters_EC<CryptoPP::ECP>::~DL_GroupParameters_EC
            ((DL_GroupParameters_EC<CryptoPP::ECP> *)(puVar1 + 3));
  return;
}


