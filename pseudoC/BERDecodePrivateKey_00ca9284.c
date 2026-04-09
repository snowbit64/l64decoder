// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BERDecodePrivateKey
// Entry Point: 00ca9284
// Size: 8 bytes
// Signature: undefined __thiscall BERDecodePrivateKey(DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>> * this, BufferedTransformation * param_1, bool param_2, ulong param_3)


/* non-virtual thunk to CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>
   >::BERDecodePrivateKey(CryptoPP::BufferedTransformation&, bool, unsigned long) */

void __thiscall
CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>>::BERDecodePrivateKey
          (DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>> *this,
          BufferedTransformation *param_1,bool param_2,ulong param_3)

{
  Integer::BERDecode((Integer *)(this + 0x248),param_1);
  return;
}


