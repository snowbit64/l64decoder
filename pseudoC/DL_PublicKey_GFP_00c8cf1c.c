// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_PublicKey_GFP
// Entry Point: 00c8cf1c
// Size: 92 bytes
// Signature: undefined __thiscall ~DL_PublicKey_GFP(DL_PublicKey_GFP<CryptoPP::DL_GroupParameters_DSA> * this)


/* non-virtual thunk to
   CryptoPP::DL_PublicKey_GFP<CryptoPP::DL_GroupParameters_DSA>::~DL_PublicKey_GFP() */

void __thiscall
CryptoPP::DL_PublicKey_GFP<CryptoPP::DL_GroupParameters_DSA>::~DL_PublicKey_GFP
          (DL_PublicKey_GFP<CryptoPP::DL_GroupParameters_DSA> *this)

{
  *(undefined8 *)(this + -8) = 0xff7808;
  *(undefined8 *)this = 0xff78a8;
  *(undefined8 *)(this + 8) = 0xff7978;
  DL_FixedBasePrecomputationImpl<CryptoPP::Integer>::~DL_FixedBasePrecomputationImpl
            ((DL_FixedBasePrecomputationImpl<CryptoPP::Integer> *)(this + 0xf0));
  DL_KeyImpl<CryptoPP::X509PublicKey,CryptoPP::DL_GroupParameters_DSA,CryptoPP::OID>::~DL_KeyImpl
            ((DL_KeyImpl<CryptoPP::X509PublicKey,CryptoPP::DL_GroupParameters_DSA,CryptoPP::OID> *)
             this);
  operator_delete(this + -8);
  return;
}


