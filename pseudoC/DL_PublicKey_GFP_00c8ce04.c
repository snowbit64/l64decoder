// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_PublicKey_GFP
// Entry Point: 00c8ce04
// Size: 96 bytes
// Signature: undefined __thiscall ~DL_PublicKey_GFP(DL_PublicKey_GFP<CryptoPP::DL_GroupParameters_DSA> * this)


/* virtual thunk to
   CryptoPP::DL_PublicKey_GFP<CryptoPP::DL_GroupParameters_DSA>::~DL_PublicKey_GFP() */

void __thiscall
CryptoPP::DL_PublicKey_GFP<CryptoPP::DL_GroupParameters_DSA>::~DL_PublicKey_GFP
          (DL_PublicKey_GFP<CryptoPP::DL_GroupParameters_DSA> *this)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(this + *(long *)(*(long *)this + -0x18));
  *puVar1 = 0xff7808;
  puVar1[2] = 0xff7978;
  puVar1[1] = 0xff78a8;
  DL_FixedBasePrecomputationImpl<CryptoPP::Integer>::~DL_FixedBasePrecomputationImpl
            ((DL_FixedBasePrecomputationImpl<CryptoPP::Integer> *)(puVar1 + 0x1f));
  DL_KeyImpl<CryptoPP::X509PublicKey,CryptoPP::DL_GroupParameters_DSA,CryptoPP::OID>::~DL_KeyImpl
            ((DL_KeyImpl<CryptoPP::X509PublicKey,CryptoPP::DL_GroupParameters_DSA,CryptoPP::OID> *)
             (puVar1 + 1));
  return;
}


