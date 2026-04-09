// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BERDecodePrivateKey
// Entry Point: 00cab384
// Size: 8 bytes
// Signature: undefined __thiscall BERDecodePrivateKey(DL_PrivateKey_ECGDSA<CryptoPP::ECP> * this, BufferedTransformation * param_1, bool param_2, ulong param_3)


/* non-virtual thunk to
   CryptoPP::DL_PrivateKey_ECGDSA<CryptoPP::ECP>::BERDecodePrivateKey(CryptoPP::BufferedTransformation&,
   bool, unsigned long) */

void __thiscall
CryptoPP::DL_PrivateKey_ECGDSA<CryptoPP::ECP>::BERDecodePrivateKey
          (DL_PrivateKey_ECGDSA<CryptoPP::ECP> *this,BufferedTransformation *param_1,bool param_2,
          ulong param_3)

{
  BERDecodePrivateKey((BufferedTransformation *)(this + -8),SUB81(param_1,0),(ulong)param_2);
  return;
}


