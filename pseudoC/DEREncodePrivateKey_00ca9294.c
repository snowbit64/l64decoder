// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DEREncodePrivateKey
// Entry Point: 00ca9294
// Size: 8 bytes
// Signature: undefined __thiscall DEREncodePrivateKey(DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>> * this, BufferedTransformation * param_1)


/* non-virtual thunk to CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>
   >::DEREncodePrivateKey(CryptoPP::BufferedTransformation&) const */

void __thiscall
CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>>::DEREncodePrivateKey
          (DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>> *this,
          BufferedTransformation *param_1)

{
  Integer::DEREncode((Integer *)(this + 0x248),param_1);
  return;
}


