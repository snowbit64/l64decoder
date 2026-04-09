// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BERDecodePublicKey
// Entry Point: 00ca5684
// Size: 8 bytes
// Signature: undefined __thiscall BERDecodePublicKey(DL_PublicKey_EC<CryptoPP::ECP> * this, BufferedTransformation * param_1, bool param_2, ulong param_3)


/* non-virtual thunk to
   CryptoPP::DL_PublicKey_EC<CryptoPP::ECP>::BERDecodePublicKey(CryptoPP::BufferedTransformation&,
   bool, unsigned long) */

void __thiscall
CryptoPP::DL_PublicKey_EC<CryptoPP::ECP>::BERDecodePublicKey
          (DL_PublicKey_EC<CryptoPP::ECP> *this,BufferedTransformation *param_1,bool param_2,
          ulong param_3)

{
  BERDecodePublicKey(this + -8,param_1,param_2,param_3);
  return;
}


