// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_PublicKey_GFP
// Entry Point: 00c8cd04
// Size: 88 bytes
// Signature: undefined __thiscall ~DL_PublicKey_GFP(DL_PublicKey_GFP<CryptoPP::DL_GroupParameters_DSA> * this)


/* CryptoPP::DL_PublicKey_GFP<CryptoPP::DL_GroupParameters_DSA>::~DL_PublicKey_GFP() */

void __thiscall
CryptoPP::DL_PublicKey_GFP<CryptoPP::DL_GroupParameters_DSA>::~DL_PublicKey_GFP
          (DL_PublicKey_GFP<CryptoPP::DL_GroupParameters_DSA> *this)

{
  long in_x1;
  long lVar1;
  
  lVar1 = *(long *)(in_x1 + 8);
  *(long *)this = lVar1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(in_x1 + 0x68);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(in_x1 + 0x70);
  *(undefined8 *)(this + *(long *)(lVar1 + -0x18)) = *(undefined8 *)(in_x1 + 0x78);
  DL_FixedBasePrecomputationImpl<CryptoPP::Integer>::~DL_FixedBasePrecomputationImpl
            ((DL_FixedBasePrecomputationImpl<CryptoPP::Integer> *)(this + 0xf8));
  DL_KeyImpl<CryptoPP::X509PublicKey,CryptoPP::DL_GroupParameters_DSA,CryptoPP::OID>::~DL_KeyImpl
            ((DL_KeyImpl<CryptoPP::X509PublicKey,CryptoPP::DL_GroupParameters_DSA,CryptoPP::OID> *)
             (this + 8));
  return;
}


