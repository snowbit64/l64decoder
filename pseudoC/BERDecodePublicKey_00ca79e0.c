// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BERDecodePublicKey
// Entry Point: 00ca79e0
// Size: 8 bytes
// Signature: undefined __thiscall BERDecodePublicKey(DL_PublicKey_ECGDSA<CryptoPP::EC2N> * this, BufferedTransformation * param_1, bool param_2, ulong param_3)


/* non-virtual thunk to
   CryptoPP::DL_PublicKey_ECGDSA<CryptoPP::EC2N>::BERDecodePublicKey(CryptoPP::BufferedTransformation&,
   bool, unsigned long) */

void __thiscall
CryptoPP::DL_PublicKey_ECGDSA<CryptoPP::EC2N>::BERDecodePublicKey
          (DL_PublicKey_ECGDSA<CryptoPP::EC2N> *this,BufferedTransformation *param_1,bool param_2,
          ulong param_3)

{
  BERDecodePublicKey(this + -8,param_1,param_2,param_3);
  return;
}


